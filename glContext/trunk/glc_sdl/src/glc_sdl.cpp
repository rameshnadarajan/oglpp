// OGLPP - Copyright (C) 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include <glc_sdl/glc_sdl.hpp>
#include <assert.h>

#include <glc/types.hpp>


#ifdef WIN32
	#include <malloc.h>
#elif defined(POSIX)
	#include <QX11Info>
#else
	#error "Non win32 platform not yet supported."
#endif



glc_drawable_t * glc_sdl_drawable_create( SDL_Window * window )
{
	//  @todo assert( window != 0 && "Calls glc_sdl_drawable_create() with an null window." );

	glc_drawable_t *drawable = (glc_drawable_t*) malloc( sizeof(glc_drawable_t) );
	assert( drawable != 0 && "Unable to allocate glc_drawable_t." );

	// Initializes the drawable
#ifdef WIN32
	// @todo drawable->window	= (GLC_WINDOW_HANDLE) window;
	HDC hdc = wglGetCurrentDC();
	drawable->window	= (GLC_WINDOW_HANDLE) WindowFromDC(hdc);
	drawable->dc		= hdc;
#elif defined(POSIX)
	#error "Platform not yet supported."
	/*drawable->window	= (GLC_WINDOW_HANDLE) window->winId();

	drawable->display	= QX11Info::display();
	drawable->screen	= QX11Info::appScreen();*/
#else
	#error "Platform not yet supported."
#endif
	drawable->backend			= (drawable_backend_t*) malloc( sizeof(drawable_backend_t) );
	drawable->backend->destroy	= &glc_sdl_drawable_destroy;

	_glc_drawable_initialize( drawable );

	// @todo glc_sdl_drawable_status()
	assert( drawable->window != 0 );
#ifdef WIN32
    assert( drawable->dc != 0 );
#endif
	assert( drawable->backend != 0 );

	return drawable;
}


void glc_sdl_drawable_destroy( glc_drawable_t * drawable )
{
	assert( drawable != 0 && "Calls glc_sdl_drawable_destroy() with an null drawable." );
	// @todo glc_sdl_drawable_status()

	if ( drawable != 0)
	{
#ifdef WIN32
        if (	(drawable->window != 0)	&&
				(drawable->dc != 0)	)
		{
			// Don't do the following instruction, DC is managed by SDL
			//int retVal = ReleaseDC( drawable->window, drawable->dc );

            // assert( retVal == 1 && "The device context was not released." );
            drawable->window	= 0;
            drawable->dc		= 0;
        }
#elif defined(POSIX)
        if ( drawable->window != 0 )
        {
            drawable->window	= 0;
            drawable->display   = 0;
            drawable->screen    = 0;
        }
#else
			// Nothing to do ?
            #error "Platform not yet supported."
#endif
		else
		{
			assert( false && "Internal error." );
		}

		free( drawable->backend );
		drawable->backend = 0;

		free( drawable );
	}
}
