// OGLPP - Copyright (C) 2008, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glc_gtk/glc_gtk.hpp"

#include <assert.h>

#ifdef WIN32
	#include <gdk/gdkwin32.h>		// for GDK_WINDOW_HWND()
#else
	#error "Non win32 platform not yet supported."
#endif



/**
 * @todo Only from a gtk drawing area ?
 */
glc_drawable_t * glc_gtk_drawable_create( GtkDrawingArea * drawingArea )
{
	assert( drawingArea != 0 && "Calls glc_gtk_drawable_create() with an null drawing area." );

	// Retrieves the window of the drawing area
	GdkWindow *gdkWindow = GTK_WIDGET(drawingArea)->window;

	if( gdkWindow == 0 )
	{
		return 0;
	}
// gdk_window_ensure_native() available from 2.18.0
#if GTKMM_VERSION >= 2180
	else
	{
		// Ensure the gdk window is a window-system native window
		const gboolean isNative = gdk_window_ensure_native( gdkWindow );
		if ( isNative == FALSE )
		{
			assert( false && "Unable to ensure a window-sytem native window" );
			return 0;
		}
		else
		{
	#ifdef WIN32
			EnableWindow( (GLC_WINDOW_HANDLE) GDK_WINDOW_HWND( gdkWindow ), FALSE );
	#endif
		}
	}
#endif

	glc_drawable_t *drawable = (glc_drawable_t*) malloc( sizeof(glc_drawable_t) );
	assert( drawable != 0 && "Unable to allocate glc_drawable_t." );

	// Turns off the double buffering of the widget
	// So clearing to the background color or pixmap will no more happen automatically.
	gtk_widget_set_double_buffered( GTK_WIDGET(drawingArea), FALSE );

	// Initializes the drawable
#ifdef WIN32
	drawable->window	= (GLC_WINDOW_HANDLE) GDK_WINDOW_HWND( gdkWindow );
	drawable->dc		= GetDC( drawable->window );
#else
	#error "Non win32 platform not yet supported."
#endif
	drawable->backend			= (drawable_backend_t*) malloc( sizeof(drawable_backend_t) );
	drawable->backend->destroy	= &glc_gtk_drawable_destroy;

	_glc_drawable_initialize( drawable );

	// @todo glc_gtk_drawable_status()
	assert( drawable->window != 0 );
	assert( drawable->dc != 0 );
	assert( drawable->backend != 0 );

	return drawable;
}


void glc_gtk_drawable_destroy( glc_drawable_t * drawable )
{
	assert( drawable != 0 && "Calls glc_gtk_drawable_destroy() with an null drawable." );
	// @todo glc_gtk_drawable_status()

	if ( drawable != 0)
	{
		if (	(drawable->window != 0)	&&
				(drawable->dc != 0)	)
		{
#ifdef WIN32
			int retVal = ReleaseDC( drawable->window, drawable->dc );
#else
			#error "Non win32 platform not yet supported."
#endif
			// assert( retVal == 1 && "The device context was not released." );
			drawable->window	= 0;
			drawable->dc		= 0;
		}
		else
		{
			assert( false && "Internal error." );
		}

		free( drawable->backend );
		drawable->backend = 0;

		free( drawable );
	}
}
