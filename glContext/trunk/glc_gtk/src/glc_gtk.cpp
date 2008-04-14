// GLE - Copyright (C) 2008, Nicolas Papier.
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



glc_drawable_t * glc_gtk_drawable_create( GtkDrawingArea * drawingArea )
{
	assert( drawingArea != 0 && "Calls glc_gtk_drawable_create() with an null drawing area." );

	glc_drawable_t *drawable = (glc_drawable_t*) malloc( sizeof(glc_drawable_t) );
	assert( drawable != 0 && "Unable to allocate glc_drawable_t." );

	// Retrieves the window of the drawing area
	GdkWindow *gdkWindow = GTK_WIDGET(drawingArea)->window;

	// Turns off the double buffering of the widget
	// So clearing to the background color or pixmap will no more happen automatically.
	gtk_widget_set_double_buffered( GTK_WIDGET(drawingArea), FALSE );

	// Initializes the drawable
	drawable->window	= (GLC_WINDOW_HANDLE) GDK_WINDOW_HWND( gdkWindow );
	drawable->dc		= GetDC( drawable->window );

	drawable->backend			= (drawable_backend_t*) malloc( sizeof(drawable_backend_t) );
	drawable->backend->destroy	= &glc_gtk_drawable_destroy;

	drawable->colorSize		= 24;
	drawable->depthSize		= 32;
	drawable->stencilSize	= 8;

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
			int retVal = ReleaseDC( drawable->window, drawable->dc );
			assert( retVal == 1 && "The device context was not released." );
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
