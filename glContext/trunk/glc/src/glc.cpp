// OGLPP - Copyright (C) 2008, 2010, 2011, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glc/glc.hpp"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
	#include <dwmapi.h>
	#include <windows.h>
	#ifndef PFD_SUPPORT_COMPOSITION
		#define PFD_SUPPORT_COMPOSITION 0x00008000
	#endif
#endif


void _glc_drawable_destroy( glc_drawable_t * drawable )
{
	assert( drawable != 0 && "Calls glc_drawable_destroy() with an null drawable." );
	assert( drawable->backend != 0 && "Calls glc_drawable_destroy() with an null backend." );
	// @todo drawable_status()

	drawable->backend->destroy( drawable );
}



void _glc_drawable_initialize( glc_drawable_t * drawable )
{
	assert( drawable != 0 && "Calls glc_drawable_destroy() with an null drawable." );

	drawable->colorSize		= 32;
	drawable->depthSize		= 24;
	drawable->stencilSize	= 0;

	drawable->stereo		= 0;

	drawable->isFullscreen	= 0;
}



glc_t *glc_create( glc_drawable_t *drawable )
{
	glc_t * retVal = glc_create_shared( drawable, 0 );
	return retVal;
}



glc_t * glc_create_shared( glc_drawable_t * drawable, glc_t * contextSharing )
{
	assert( drawable != 0 && "Calls glc_create() with an null drawable." );
	// @todo drawable_status()

	// Initializes the glc context with default values
	glc_t * retVal = (glc_t*)malloc( sizeof(glc_t) );
	retVal->context		= 0;
	retVal->drawable	= drawable;

#ifdef WIN32
	// Initializes the pixel format descriptor with the desired format.
	PIXELFORMATDESCRIPTOR pfd;

	memset( &pfd, 0, sizeof( PIXELFORMATDESCRIPTOR ) );

	pfd.nSize			= sizeof( PIXELFORMATDESCRIPTOR );
	pfd.nVersion		= 1;
	pfd.dwFlags			= PFD_SUPPORT_COMPOSITION | PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW | PFD_DOUBLEBUFFER;
	// PFD_DRAW_TO_WINDOW ?
	// PFD_GENERIC_ACCELERATED ?
	pfd.iPixelType		= PFD_TYPE_RGBA;
	pfd.cColorBits		= drawable->colorSize;
	pfd.cDepthBits		= drawable->depthSize;
	pfd.cStencilBits	= drawable->stencilSize;
	pfd.iLayerType		= PFD_MAIN_PLANE;

	if ( drawable->stereo )
	{
		pfd.dwFlags |= PFD_STEREO;
	}

	// @todo Initializes WGL_ARB_pixel_format attributes with the desired format.

#elif __MACOSX__
	#error "Non win32 platform not yet supported."
#else // POSIX
	int attributes[64];
	int *iAttributes = &attributes[0];

	iAttributes++ = GLX_RGBA;

	assert( drawable->colorSize == 32 );
	iAttributes++ = GLX_RED_SIZE;
	iAttributes++ = 8;
	iAttributes++ = GLX_GREEN_SIZE;
	iAttributes++ = 8;
	iAttributes++ = GLX_BLUE_SIZE;
	iAttributes++ = 8;
	iAttributes++ = GLX_ALPHA_SIZE;
	iAttributes++ = 8;

	iAttributes++ = GLX_DOUBLEBUFFER;

	iAttributes++ = GLX_DEPTH_SIZE;
	iAttributes++ = drawable->depthSize;

	iAttributes++ = GLX_STENCIL_SIZE;
	iAttributes++ = drawable->stencilSize;
#endif

#ifdef WIN32
	// Chooses and sets the closest available pixel format.
	int		iPixelFormat;
	BOOL	bResult;

	iPixelFormat = ChoosePixelFormat( drawable->dc, &pfd );
	if ( iPixelFormat == 0 )
	{
		fprintf( stderr, "In glc_create(), ChoosePixelFormat() fails." );
		return retVal;
	}

	bResult = SetPixelFormat( drawable->dc, iPixelFormat, &pfd );
	if ( bResult == FALSE )
	{
		fprintf( stderr, "In glc_create(), SetPixelFormat() fails." );
		return retVal;
	}

	// Creates the OpenGL rendering context.
	GLC_GLRC_HANDLE context = wglCreateContext( drawable->dc );
	if ( context == NULL )
	{
		fprintf( stderr, "In glc_create(), wglCreateContext() fails." );
	}
	else
	{
		retVal->context = context;
	}

	// Shares OpenGL objects
	if ( contextSharing )
	{
		BOOL success = wglShareLists( context, contextSharing->context );
		if ( success != TRUE )
		{
			fprintf( stderr, "In glc_create(), wglShareLists() fails." );
		}
		// else nothing to do
	} // else nothing to do

#else
	// Checks for supports the GLX extension
	if ( !glXQueryExtension( drawable->display, 0, 0 ) )
	{
		// no glx extension
		fprintf( stderr, "In glc_create, GLX extension is missing.\n" );
		return retVal;
	}

	// Chooses and sets the closest available visual.
	XVisualInfo * visual = glXChooseVisual( drawable->display, drawable->screen, &attributes[0] );

	if ( !visual )
	{
		fprintf( stderr, "In glc_create, Unable to choose a visual.\n" );
		return retVal;
	}
	else
	{
		retVal->visual = visual;
	}

	// Creates the OpenGL rendering context and
	// shares OpenGL objects (if requested).
	GLC_GLRC_HANDLE context;
	if ( contextSharing )
	{
		context = glxCreateContext( drawable->display, visual, contextSharing->context, GL_TRUE );
	}
	else
	{
		context = glxCreateContext( drawable->display, visual, None, GL_TRUE );
	}

	if ( context == NULL )
	{
		fprintf( stderr, "In glc_create(), wglCreateContext() fails." );
	}
	else
	{
		retVal->context = context;
	}
#endif

	return retVal;
}


void glc_destroy( glc_t * context )
{
	assert( context != 0 && "Calls glc_destroy() on a null glc context.");
	// @todo glc_status()

	if ( context->context != 0 )
	{
#ifdef GLC_USE_WGL
		// Deletes the OpenGL rendering context.
		wglDeleteContext( context->context );
		context->context = 0;
#else
		// Deletes the OpenGL rendering context.
		glXDestroyContext( context->drawable->display, context->context );
		context->context = 0;
#endif
	}

	if ( context->drawable != 0 )
	{
		// Deletes the associated drawable.
		context->drawable->backend->destroy( context->drawable );
		//glc_drawable_destroy( context->drawable );
		context->drawable = 0;
	}

	if ( context != 0 )
	{
		// Deletes the glc context
		free( context );
	}
}


glc_status_t glc_status( glc_t * context )
{
	assert( context != 0 && "Calls glc_status() on a null glc context." );

	if ( context == 0 )
	{
		return GLC_STATUS_NULL_POINTER;
	}
	else
	{
		if ( context->context == 0 )
		{
			return GLC_STATUS_NO_OPENGL_CONTEXT;
		}
		else
		{
			return GLC_STATUS_SUCCESS;
		}
	}
}



glc_bool_t glc_set_current( glc_t * context )
{
	assert( context != 0 && "Calls glc_set_current() on a null glc context.");
	// @todo glc_status()

	assert( context->drawable != 0 && "Calls glc_set_current() with a context associated with a null drawable." );
	// @todo drawable_status()
#ifdef GLC_USE_WGL
	BOOL success = wglMakeCurrent( context->drawable->dc, context->context );

	return success == TRUE ? 1 : 0;
#elif GLC_USE_GLX
	Bool success = glXMakeCurrent(
		context->drawable->display,
		context->drawable-> window or drawable,
		context->context );

	return success == True ? 1 : 0;
#else
	#error "Platform not yet supported."
#endif
}


glc_bool_t glc_unset_current( glc_t * context )
{
	assert( context != 0 && "Calls glc_unset_current() on a null glc context.");
	// @todo glc_status()

	assert( context->drawable != 0 && "Calls glc_unset_current() with a context associated with a null drawable." );
	// @todo drawable_status()

#ifdef GLC_USE_WGL
	BOOL success = wglMakeCurrent( 0/*context->drawable->dc*/, NULL );

	return success == TRUE ? 1 : 0;
#elif GLC_USE_GLX
	Bool success = glXMakeCurrent(
		context->drawable->display,
		None,
		NULL );

	return success == True ? 1 : 0;
#else
	#error "Platform not yet supported."
#endif
}


glc_bool_t glc_is_current( glc_t * context )
{
	assert( context != 0 && "Calls glc_is_current() on a null glc context.");
	// @todo glc_status()

	assert( context->drawable != 0 && "Calls glc_is_current() with a context associated with a null drawable." );
	// @todo drawable_status()

#ifdef GLC_USE_WGL
	GLC_GLRC_HANDLE glrc = wglGetCurrentContext();

	/*assert(	( glrc == 0 )					||					// no current context		=> is not current 
			( glrc != context->context )	||					// another context is current	=> is not current
			(	(glrc == context->context) &&					// is current
				(wglGetCurrentDC() == context->drawable->dc) )	// and for the good drawable/dc
			&& "The context is current, but not for its associated drawable/graphical context !" );*/
#elif GLC_USE_GLX
	#error "Platform not yet supported."
#else
	#error "Platform not yet supported."
#endif
	return glrc == context->context ? 1 : 0;
}


glc_bool_t glc_swap( glc_t * context )
{
	assert( context != 0 && "Calls glc_swap() on a null glc context.");
	// @todo glc_status()

	assert( context->drawable != 0 && "Calls glc_swap() with a context associated with a null drawable." );
	// @todo drawable_status()

	glc_bool_t retVal;
#ifdef GLC_USE_WGL
	retVal = SwapBuffers( context->drawable->dc ) == TRUE ? 1 : 0;
#else
	#error "Platform not yet supported."
#endif

	return retVal;
}



glc_bool_t glc_drawable_set_fullscreen( glc_t * context, glc_bool_t wantFullscreen )
{
#ifdef _WIN32
	// Find drawable window and top level window
	HWND current	= context->drawable->window;
	HWND topLevel	= GetAncestor( current, GA_ROOT );

	// Find the device where the drawable is located (this is for multi-monitor setups)
	HMONITOR hMonitor = MonitorFromWindow( topLevel, MONITOR_DEFAULTTOPRIMARY );
	MONITORINFOEX monInfo;
	memset(&monInfo, 0, sizeof(MONITORINFOEX));
	monInfo.cbSize = sizeof(MONITORINFOEX);
	GetMonitorInfo(hMonitor, &monInfo);

	// Desktop Window Manager
	HMODULE dwmLibrary = ::LoadLibrary("dwmapi.dll");
	if ( dwmLibrary )
	{
		typedef HRESULT (WINAPI*DwmEnableCompositionProcType)(UINT);
		DwmEnableCompositionProcType DwmIsCompositionEnabledPtr = 
			(DwmEnableCompositionProcType)::GetProcAddress( dwmLibrary, "DwmEnableComposition");

		if ( DwmIsCompositionEnabledPtr )
		{
			HRESULT retVal = DwmIsCompositionEnabledPtr( wantFullscreen != 0 ? DWM_EC_DISABLECOMPOSITION : DWM_EC_ENABLECOMPOSITION );
			// if ( retVal == S_OK )
		}
		else
		{
			assert( false && "Found dwmapi.dll, but not DwmEnableComposition() !" );
		}
		::FreeLibrary(dwmLibrary);
	}
	// else no dwm (XP and earlier version of windows).

	if ( wantFullscreen )
	{
		// Find the current device mode
		DEVMODE dmode;
		memset(&dmode, 0, sizeof(DEVMODE));
		dmode.dmSize = sizeof(DEVMODE);

		const BOOL retValEDS = EnumDisplaySettings(monInfo.szDevice, ENUM_CURRENT_SETTINGS, &dmode);
		if ( retValEDS == false )	return 0;
		assert( retValEDS == TRUE );

		// @todo adds a new parameter to this function to request a mode (or adds a new function).
		// Request the current mode
		const int desiredWidth		= dmode.dmPelsWidth;
		const int desiredHeight		= dmode.dmPelsHeight;
		const int desiredBpp		= dmode.dmBitsPerPel;
		const int desiredFrequency	= dmode.dmDisplayFrequency;

		dmode.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT;

		// Attempt to change the resolution
		LONG retVal = ChangeDisplaySettingsEx(monInfo.szDevice, &dmode, NULL, CDS_FULLSCREEN, NULL);
		//LONG retVal = ChangeDisplaySettings(&dmode, CDS_FULLSCREEN);

		const bool ok = (retVal == DISP_CHANGE_SUCCESSFUL);

		context->drawable->isFullscreen = ok ? 1 : 0;
	}
	else
	{
		// Restore the display resolution
		LONG retVal = ChangeDisplaySettingsEx( monInfo.szDevice, NULL, NULL, 0, NULL );
		//ChangeDisplaySettings(NULL, 0);

		const bool ok = (retVal == DISP_CHANGE_SUCCESSFUL);
		context->drawable->isFullscreen = ok ? 0 : 1;
	}

	return context->drawable->isFullscreen;
#elif __MACOSX__
	#error "Platform not yet supported."
#else // POSIX
		#error "Platform not yet supported."
#endif
}



glc_bool_t glc_drawable_is_fullscreen( glc_t * context )
{
	assert( context != 0 && "Calls glc_destroy() on a null glc context.");
	// @todo glc_status()

	return context->drawable->isFullscreen;
}
