// GLC - Copyright (C) 2008, 2010, Nicolas Papier.
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
#endif


void glc_drawable_destroy( glc_drawable_t * drawable )
{
	assert( drawable != 0 && "Calls glc_drawable_destroy() with an null drawable." );
	assert( drawable->backend != 0 && "Calls glc_drawable_destroy() with an null backend." );
	// @todo drawable_status()

	drawable->backend->destroy( drawable );
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
/*		// Find the requested device mode
		bool foundMode = false;
		for( int i=0 ; !foundMode ; ++i)
		{
			const BOOL retValEDS = EnumDisplaySettings(monInfo.szDevice, i, &dmode);
			if ( retValEDS == 0 )
			{
				// all of a display device's graphics modes enumerate
				break;
			}
			else
			{
				foundMode =	(dmode.dmPelsWidth==(DWORD)desiredWidth) &&
							(dmode.dmPelsHeight==(DWORD)desiredHeight) &&
							(dmode.dmBitsPerPel==(DWORD) desiredBpp) &&
							(dmode.dmDisplayFrequency==(DWORD)desiredFrequency);
			}
		}
		if ( !foundMode ) return 0;*/

		dmode.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT;

		// If we're switching from a windowed mode to this fullscreen
		// mode, save some information about the window so that it can
		// be restored when switching back to windowed mode
		//DWORD style=0, exstyle=0;
		//RECT rect;
		// Save the current window position/size
		//GetWindowRect( topLevel, &rect);
		//m_windowedX = rect.left;
		//m_windowedY = rect.top;
		//m_windowedWidth = rect.right - rect.left;
		//m_windowedHeight = rect.bottom - rect.top;

		// Save the window style and set it for fullscreen mode
		//style = GetWindowLongPtr(topLevel, GWL_STYLE);
		//exstyle = GetWindowLongPtr(topLevel, GWL_EXSTYLE);
		//style |= WS_POPUP;// | WS_MAXIMIZE;
		//style &= ~WS_SIZEBOX;
		//style &= ~WS_BORDER | ~WS_CAPTION | ~WS_SYSMENU |  | ~WS_OVERLAPPEDWINDOW | ~WS_OVERLAPPED;
		//SetWindowLongPtr(topLevel, GWL_STYLE, style | WS_CAPTION); //| WS_POPUP & (~WS_CAPTION) );
		//SetWindowLongPtr(topLevel, GWL_STYLE, style & (~WS_BORDER | ~WS_CAPTION | ~WS_OVERLAPPEDWINDOW));
		//SetWindowLongPtr(topLevel, GWL_EXSTYLE, exstyle | WS_EX_APPWINDOW | WS_EX_TOPMOST);
		//BOOL success;
		//success = SetWindowPos( topLevel, NULL, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER | SWP_FRAMECHANGED );

		// Attempt to change the resolution
		LONG retVal = ChangeDisplaySettingsEx(monInfo.szDevice, &dmode, NULL, CDS_FULLSCREEN, NULL);
		//LONG ret = ChangeDisplaySettings(&dmode, CDS_FULLSCREEN);

		const bool ok = (retVal == DISP_CHANGE_SUCCESSFUL);

		context->drawable->isFullscreen = ok ? 1 : 0;

		// If all was good resize & reposition the window
		// to match the new resolution on the correct monitor
		//if(ok)
		//{
			// We need to call GetMonitorInfo() again because
			// details may have changed with the resolution
			//GetMonitorInfo(hMonitor, &monInfo);

			/*WINDOWPLACEMENT windowPlacement;
			windowPlacement.length = sizeof(WINDOWPLACEMENT);
			windowPlacement.rcNormalPosition = monInfo.rcMonitor;
			SetWindowPlacement( topLevel, &windowPlacement );*/

			// Set the window's size and position so that it covers the entire screen
			//SetWindowPos(topLevel, 0, 0, 0,(int)desiredWidth, (int)desiredHeight, SWP_NOZORDER);
			//SetWindowPos(	topLevel, NULL, monInfo.rcMonitor.left, monInfo.rcMonitor.top, (int)desiredWidth, (int)desiredHeight,
			//				SWP_NOACTIVATE | SWP_NOCOPYBITS | SWP_NOOWNERZORDER | SWP_NOREPOSITION | SWP_NOZORDER);
			//SetWindowPos(topLevel, 0, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
		//}
		// If the attempt failed and we weren't already
		// in fullscreen mode, restore the window styles
		//else if(!m_fullscreen)
		//{
			//SetWindowLongPtr(m_handle->hWnd, GWL_STYLE, style);
			//SetWindowLongPtr(m_handle->hWnd, GWL_EXSTYLE, exstyle);
		//}
	}
	else
	{
		// Restore the display resolution
		LONG retVal = ChangeDisplaySettingsEx( monInfo.szDevice, NULL, NULL, 0, NULL );
		//ChangeDisplaySettings(NULL, 0);

		// Restore the window styles
		//DWORD style = GetWindowLongPtr(topLevel, GWL_STYLE);
		//DWORD exstyle = GetWindowLongPtr(topLevel, GWL_EXSTYLE);
		//SetWindowLongPtr(topLevel, GWL_STYLE, style | WS_OVERLAPPEDWINDOW);
		//SetWindowLongPtr(topLevel, GWL_EXSTYLE, exstyle & (~(WS_EX_APPWINDOW | WS_EX_TOPMOST)));

		// Restore the window size/position
		//SetPosition(m_windowedX, m_windowedY);
		//SetSize(m_windowedWidth, m_windowedHeight);

		const bool ok = (retVal == DISP_CHANGE_SUCCESSFUL);
		context->drawable->isFullscreen = ok ? 0 : 1;
	}

	return context->drawable->isFullscreen;
#elif __MACOSX__
#else // POSIX
#endif
}



glc_bool_t glc_drawable_is_fullscreen( glc_t * context )
{
	assert( context != 0 && "Calls glc_destroy() on a null glc context.");
	// @todo glc_status()

	return context->drawable->isFullscreen;
}



glc_t *glc_create( glc_drawable_t *drawable )
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
	pfd.dwFlags			= PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW | PFD_DOUBLEBUFFER; // same as wx
	// from glContext/contextMSW : PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER | PFD_GENERIC_ACCELERATED;
	pfd.iPixelType		= PFD_TYPE_RGBA;
	pfd.cColorBits		= drawable->colorSize;
	pfd.cDepthBits		= drawable->depthSize;
	pfd.cStencilBits	= drawable->stencilSize;
	pfd.iLayerType		= PFD_MAIN_PLANE;

	// @todo Initializes WGL_ARB_pixel_format attributes with the desired format.

#elif __MACOSX__
#else // POSIX
	int attributes[64];
	int *iAttributes = &attributes[0];

	iAttributes++ = GLX_RGBA;

	assert( drawable->colorSize == 24 ); // ???
	iAttributes++ = GLX_RED_SIZE;
	iAttributes++ = 8;
	iAttributes++ = GLX_GREEN_SIZE;
	iAttributes++ = 8;
	iAttributes++ = GLX_BLUE_SIZE;
	iAttributes++ = 8;

	iAttributes++ = GLX_DOUBLEBUFFER;

	iAttributes++ = GLX_DEPTH_SIZE;
	iAttributes++ = drawable->depthSize;

	iAttributes++ = GLX_STENCIL_SIZE;
	iAttributes++ = drawable->stencilSize;
#endif

	/**iAttributes++ = WGL_DRAW_TO_WINDOW_ARB;
	*iAttributes++ = GL_TRUE;
	*iAttributes++ = WGL_ACCELERATION_ARB;
	*iAttributes++ = WGL_FULL_ACCELERATION_ARB;

	*iAttributes++ = WGL_COLOR_BITS_ARB;
	*iAttributes++ = drawable->colorSize;*/

/*	*iAttributes++ = WGL_RED_BITS_ARB;
	*iAttributes++ = this->gl_config.red_size;
	*iAttributes++ = WGL_GREEN_BITS_ARB;
	*iAttributes++ = this->gl_config.green_size;
	*iAttributes++ = WGL_BLUE_BITS_ARB;
	*iAttributes++ = this->gl_config.blue_size;
	if ( this->gl_config.alpha_size ) {
		*iAttributes++ = WGL_ALPHA_BITS_ARB;
		*iAttributes++ = this->gl_config.alpha_size;
	}*/

	/**iAttributes++ = WGL_DOUBLE_BUFFER_ARB;
	*iAttributes++ = true;

	*iAttributes++ = WGL_DEPTH_BITS_ARB;
	*iAttributes++ = drawable->depthSize;

	*iAttributes++ = WGL_STENCIL_BITS_ARB;
	*iAttributes++ = drawable->stencilSize;*/

/*	if ( this->gl_config.accum_red_size ) {
		*iAttributes++ = WGL_ACCUM_RED_BITS_ARB;
		*iAttributes++ = this->gl_config.accum_red_size;
	}

	if ( this->gl_config.accum_green_size ) {
		*iAttributes++ = WGL_ACCUM_GREEN_BITS_ARB;
		*iAttributes++ = this->gl_config.accum_green_size;
	}

	if ( this->gl_config.accum_blue_size ) {
		*iAttributes++ = WGL_ACCUM_BLUE_BITS_ARB;
		*iAttributes++ = this->gl_config.accum_blue_size;
	}

	if ( this->gl_config.accum_alpha_size ) {
		*iAttributes++ = WGL_ACCUM_ALPHA_BITS_ARB;
		*iAttributes++ = this->gl_config.accum_alpha_size;
	}*/

/*	if ( this->gl_config.stereo ) {
		*iAttributes++ = WGL_STEREO_ARB;
		*iAttributes++ = GL_TRUE;
	}*/

/*	if ( this->gl_config.multisamplebuffers ) {
		*iAttributes++ = WGL_SAMPLE_BUFFERS_ARB;
		*iAttributes++ = this->gl_config.multisamplebuffers;
	}

	if ( this->gl_config.multisamplesamples ) {
		*iAttributes++ = WGL_SAMPLES_ARB;
		*iAttributes++ = this->gl_config.multisamplesamples;
	}

	if ( this->gl_config.accelerated >= 0 ) {
		*iAttributes++ = WGL_ACCELERATION_ARB;
		*iAttributes++ = (this->gl_config.accelerated ? WGL_GENERIC_ACCELERATION_ARB : WGL_NO_ACCELERATION_ARB);
	}*/

	//*iAttributes = 0;

// int ChoosePixelFormat( HDC hdc,const PIXELFORMATDESCRIPTOR *ppfd );
// XVisualInfo* glXChooseVisual( Display * dpy, int screen, int * attribList ); => XFree( to delete XVisualInfo* )
///     Display* display = (Display*) wxGetDisplay();
//	GDK_DISPLAY();

// GLXContext glXCreateContext( Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct);
// HGLRC wglCreateContext( HDC hdc );

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

	// Creates the OpenGL rendering context.
	GLC_GLRC_HANDLE context = glxCreateContext( drawable->display, visual, None, GL_TRUE );
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
#ifdef _WIN32
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
// @todo FIXME
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

	retVal = SwapBuffers( context->drawable->dc ) == TRUE ? 1 : 0;

	return retVal;
}
