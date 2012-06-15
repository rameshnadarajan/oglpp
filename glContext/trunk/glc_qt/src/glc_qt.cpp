// OGLPP - Copyright (C) 2012, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Bryan Schuller
// Author Guillaume Brocker

#include <glc_qt/glc_qt.hpp>

#include <assert.h>
#include <QWidget>

#ifdef WIN32

#else
	#error "Non win32 platform not yet supported."
#endif



glc_drawable_t * glc_qt_drawable_create( QWidget * widget )
{
	assert( widget != 0 && "Calls glc_qt_drawable_create() with an null widget." );

	glc_drawable_t *drawable = (glc_drawable_t*) malloc( sizeof(glc_drawable_t) );
	assert( drawable != 0 && "Unable to allocate glc_drawable_t." );

	// Initializes the drawable
#ifdef WIN32
    drawable->window	= (GLC_WINDOW_HANDLE) widget->winId();
    drawable->dc		= GetDC( drawable->window );
#else
	#error "Non win32 platform not yet supported."
#endif
	drawable->backend			= (drawable_backend_t*) malloc( sizeof(drawable_backend_t) );
	drawable->backend->destroy	= &glc_qt_drawable_destroy;

	_glc_drawable_initialize( drawable );

	// @todo glc_qt_drawable_status()
	assert( drawable->window != 0 );
	assert( drawable->dc != 0 );
	assert( drawable->backend != 0 );

	return drawable;
}


void glc_qt_drawable_destroy( glc_drawable_t * drawable )
{
	assert( drawable != 0 && "Calls glc_qt_drawable_destroy() with an null drawable." );
	// @todo glc_qt_drawable_status()

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
