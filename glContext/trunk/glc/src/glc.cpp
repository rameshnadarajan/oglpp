// OGLPP - Copyright (C) 2008, 2010, 2011, 2013, 2014, Nicolas Papier.
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


#include "glc/types.hpp"


// PRIVATE FUNCTION
/**
 * @brief Creates a new glc context for the given drawable and sharing object with the given glc context.
 *
 * @param drawable			the drawing surface used by glc context
 * @param contextSharing	specifies the context with which to share objects
 *
 * @return a new glc context associated with the given drawable and sharing objects with the given context
 *
 * @remarks If the new glc context status is GLC_STATUS_SUCCESS (i.e. glc_status(retVal) == GLC_STATUS_SUCCESS), 
 * then the ownership of the given drawable is transfered to the glc context.
 */
 glc_t * _glc_create_( glc_drawable_t * drawable, glc_t * contextSharing )
{
	assert( drawable != 0 && "Calls glc_create() with an null drawable." );
	// @todo drawable_status()

	// Initializes the glc context with default values
	glc_t * retVal = (glc_t*)malloc( sizeof(glc_t) );
	retVal->context				= 0;
	retVal->contextRefCount		= new int;
	(*retVal->contextRefCount)	= 1;
	retVal->drawable			= drawable;

#ifdef __SDL2__
	SDL_GL_SetAttribute(SDL_GL_STEREO, drawable->stereo);
#elif WIN32
	// Initializes the pixel format descriptor with the desired format.
	PIXELFORMATDESCRIPTOR pfd;

	memset( &pfd, 0, sizeof( PIXELFORMATDESCRIPTOR ) );

	pfd.nSize			= sizeof( PIXELFORMATDESCRIPTOR );
	pfd.nVersion		= 1;
	pfd.dwFlags			= PFD_SUPPORT_COMPOSITION | PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW | PFD_DOUBLEBUFFER;
	pfd.iPixelType		= PFD_TYPE_RGBA;
	pfd.cColorBits		= drawable->colorSize;
	pfd.cDepthBits		= drawable->depthSize;
	pfd.cStencilBits	= drawable->stencilSize;
	pfd.iLayerType		= PFD_MAIN_PLANE;

	if ( drawable->stereo )
	{
		pfd.dwFlags |= PFD_STEREO;
	}

#elif __MACOSX__
	#error "Non win32 platform not yet supported."
#else // POSIX
	int attributes[64];
	int index = 0;

	attributes[index++] = GLX_RGBA;
	assert( drawable->colorSize == 32 );
	attributes[index++] = GLX_RED_SIZE;
	attributes[index++] = 8;
	attributes[index++] = GLX_GREEN_SIZE;
	attributes[index++] = 8;
	attributes[index++] = GLX_BLUE_SIZE;
	attributes[index++] = 8;
	/*attributes[index++] = GLX_ALPHA_SIZE;
	attributes[index++] = 8;*/
	attributes[index++] = GLX_DOUBLEBUFFER;
	attributes[index++] = GLX_DEPTH_SIZE;
	attributes[index++] = drawable->depthSize;
	attributes[index++] = GLX_STENCIL_SIZE;
	attributes[index++] = drawable->stencilSize;
	attributes[index++] = None;
#endif

#ifdef __SDL2__
	// Shares OpenGL objects
	if (contextSharing)
	{
		SDL_GL_SetAttribute(SDL_GL_SHARE_WITH_CURRENT_CONTEXT, (int)(contextSharing->context));

	} // else nothing to do

	// Create an OpenGL context associated with the window.
	SDL_GLContext context = SDL_GL_CreateContext(drawable->window);
	if ( context == NULL )
	{
		fprintf( stderr, "In glc_create(), SDL_GL_CreateContext() fails (%s).", SDL_GetError() );
		return retVal;
	}
	else
	{
		retVal->context = context;
	}

#elif WIN32
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
		return retVal;
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

	// Creates the OpenGL rendering context and
	// shares OpenGL objects (if requested).
	GLC_GLRC_HANDLE context;
	if ( contextSharing )
	{
		context = glXCreateContext( drawable->display, visual, contextSharing->context, GL_TRUE );
	}
	else
	{
		context = glXCreateContext( drawable->display, visual, None, GL_TRUE );
	}

	if ( context == NULL )
	{
		fprintf( stderr, "In glc_create(), glxCreateContext() fails." );
	}
	else
	{
		retVal->context = context;
	}
#endif

	return retVal;
}



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



glc_t *glc_create( glc_drawable_t *drawable, glc_t * contextShared )
{
	if ( contextShared )
	{
		// Initializes the glc context with default values
		glc_t * retVal = (glc_t*)malloc( sizeof(glc_t) );
		retVal->context				= contextShared->context;
		retVal->contextRefCount		= contextShared->contextRefCount;
		*(retVal->contextRefCount)	= *(retVal->contextRefCount) + 1;
		retVal->drawable			= 0;

#ifdef __SDL2__
		retVal->drawable = drawable;
#elif WIN32
		// Get the current pixel format index  
		const int iPixelFormat = GetPixelFormat(contextShared->drawable->dc);

		// Obtain a detailed description of that pixel format
		PIXELFORMATDESCRIPTOR pfd;
		DescribePixelFormat(contextShared->drawable->dc, iPixelFormat, sizeof(PIXELFORMATDESCRIPTOR), &pfd);

		// Set the pixel format for the given drawable to be usable with OpenGL rendering context.
		const BOOL bResult = SetPixelFormat( drawable->dc, iPixelFormat, &pfd );
		if ( bResult == FALSE )
		{
			fprintf( stderr, "In glc_create(), SetPixelFormat() fails." );
			return retVal;
		}
		else
		{
			retVal->drawable = drawable;
		}
#else
		#warning "glc_create() with shared context is not yet supported on non win32 platform"
		assert( false );
#endif

		return retVal;
	}
	else
	{
		glc_t * retVal = _glc_create_( drawable, 0 );
		return retVal;
	}
}



void glc_destroy( glc_t * context )
{
	assert( context != 0 && "Calls glc_destroy() on a null glc context.");
	// @todo glc_status()

	if ( context->context != 0 )
	{
		if ( (*context->contextRefCount) == 1 )
		{
	#ifdef __SDL2__
			// Deletes the OpenGL rendering context.
			SDL_GL_DeleteContext( context->context );
	#elif defined(GLC_USE_WGL)
			// Deletes the OpenGL rendering context.
			wglDeleteContext( context->context );
	#else
			// Deletes the OpenGL rendering context.
			glXDestroyContext( context->drawable->display, context->context );
	#endif
			context->context = 0;
			free( context->contextRefCount );
		}
		else
		{
			// nothing to do with OpenGL rendering context
			--(*context->contextRefCount);
		}
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
#ifdef __SDL2__
	const int retVal = SDL_GL_MakeCurrent(context->drawable->window, context->context);
	if (retVal != 0)
	{
		printf("In glc_set_current(), SDL_GL_MakeCurrent() fails (%s).", SDL_GetError());
		return 0;
	}
	return 1;

#elif defined(GLC_USE_WGL)
	BOOL success = wglMakeCurrent( context->drawable->dc, context->context );
	return success == TRUE ? 1 : 0;
#elif defined(GLC_USE_GLX)
	Bool success = glXMakeCurrent(
		context->drawable->display,
        context->drawable->window,
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

#ifdef __SDL2__
	const int retVal = SDL_GL_MakeCurrent(context->drawable->window, 0);
	if (retVal != 0)
	{
		printf("In glc_unset_current(), SDL_GL_MakeCurrent() fails (%s).", SDL_GetError());
		return 0;
	}
	return 1;
#elif defined(GLC_USE_WGL)
	BOOL success = wglMakeCurrent( 0/*context->drawable->dc*/, NULL );

	return success == TRUE ? 1 : 0;
#elif defined(GLC_USE_GLX)
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

#ifdef __SDL2__
	GLC_GLRC_HANDLE glrc = SDL_GL_GetCurrentContext();
#elif defined(GLC_USE_WGL)
	GLC_GLRC_HANDLE glrc = wglGetCurrentContext();

	/*assert(	( glrc == 0 )					||					// no current context		=> is not current 
			( glrc != context->context )	||					// another context is current	=> is not current
			(	(glrc == context->context) &&					// is current
				(wglGetCurrentDC() == context->drawable->dc) )	// and for the good drawable/dc
			&& "The context is current, but not for its associated drawable/graphical context !" );*/
#elif defined(GLC_USE_GLX)
	GLC_GLRC_HANDLE glrc = glXGetCurrentContext();
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
#ifdef __SDL2__
	SDL_GL_SwapWindow(context->drawable->window);
	retVal = true;
#elif defined(GLC_USE_WGL)
	retVal = SwapBuffers( context->drawable->dc ) == TRUE ? 1 : 0;
#else
    glXSwapBuffers( context->drawable->display, context->drawable->window );
	retVal = true;
#endif

	return retVal;
}



glc_bool_t glc_drawable_set_fullscreen( glc_t * context, glc_bool_t wantFullscreen, glc_bool_t influenceCompositingManager )
{
#ifdef __SDL2__

	Uint32 flags = wantFullscreen ? SDL_WINDOW_FULLSCREEN : 0;

	const int retVal = SDL_SetWindowFullscreen(context->drawable->window, flags);

	if (wantFullscreen)
	{
		context->drawable->isFullscreen = (retVal == 0);
	}
	else
	{
		context->drawable->isFullscreen = !(retVal == 0);
	}

	return context->drawable->isFullscreen;
#elif defined(_WIN32)
	// Find drawable window and top level window
	HWND current	= context->drawable->window;
	HWND topLevel	= GetAncestor( current, GA_ROOT );

	// Find the device where the drawable is located (this is for multi-monitor setups)
	HMONITOR hMonitor = MonitorFromWindow( topLevel, MONITOR_DEFAULTTOPRIMARY );
	MONITORINFOEX monInfo;
	memset(&monInfo, 0, sizeof(MONITORINFOEX));
	monInfo.cbSize = sizeof(MONITORINFOEX);
	GetMonitorInfo(hMonitor, &monInfo);

	if ( influenceCompositingManager )
	{
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
				assert( retVal == S_OK && "DwmIsCompositionEnabledPtr fails" );
				// if ( retVal == S_OK )
			}
			else
			{
				assert( false && "Found dwmapi.dll, but not DwmEnableComposition() !" );
			}
			::FreeLibrary(dwmLibrary);
		}
		// else no dwm (XP and earlier version of windows).
	}

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
#elif defined(__MACOSX__)
	#error "Platform not yet supported."
#else // POSIX
	#warning "glc_drawable_set_fullscreen() not yet supported."
	assert(false);
	return false;
#endif
}



glc_bool_t glc_drawable_is_fullscreen( glc_t * context )
{
	assert( context != 0 && "Calls glc_destroy() on a null glc context.");
	// @todo glc_status()

	return context->drawable->isFullscreen;
}


void glc_drawable_set_stereo( glc_drawable_t * drawable, glc_bool_t stereo )
{
	drawable->stereo = stereo;
}
