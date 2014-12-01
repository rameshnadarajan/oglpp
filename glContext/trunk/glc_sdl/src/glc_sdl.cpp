// OGLPP - Copyright (C) 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include <glc_sdl/glc_sdl.hpp>
#include <assert.h>

#include <glc/types.hpp>

#ifdef WIN32
	#include <malloc.h>
#endif

glc_drawable_t * glc_sdl_drawable_create( SDL_Window * window )
{
	assert( window != 0 && "Calls glc_sdl_drawable_create() with an null window." );

	glc_drawable_t *drawable = (glc_drawable_t*) malloc( sizeof(glc_drawable_t) );
	assert( drawable != 0 && "Unable to allocate glc_drawable_t." );

	// Initializes the drawable

	drawable->window	= (GLC_WINDOW_HANDLE) window;
	drawable->backend			= (drawable_backend_t*) malloc( sizeof(drawable_backend_t) );
	drawable->backend->destroy	= &glc_sdl_drawable_destroy;

	_glc_drawable_initialize( drawable );

	// @todo glc_sdl_drawable_status()
	assert( drawable->window != 0 );
	assert( drawable->backend != 0 );

	return drawable;
}


void glc_sdl_drawable_destroy( glc_drawable_t * drawable )
{
	assert( drawable != 0 && "Calls glc_sdl_drawable_destroy() with an null drawable." );
	// @todo glc_sdl_drawable_status()

	if ( drawable != 0)
	{
#ifdef __SDL2__
		drawable->window = 0;
#elif WIN32
        if (	(drawable->window != 0)	&&
				(drawable->dc != 0)	)
		{
			// Don't do the following instruction, DC is managed by SDL
			//int retVal = ReleaseDC( drawable->window, drawable->dc );

            // assert( retVal == 1 && "The device context was not released." );
            drawable->window	= 0;
            drawable->dc		= 0;
        }
		else
		{
			assert( false && "Internal error." );
		}
#elif defined(POSIX)
        if ( drawable->window != 0 )
        {
            drawable->window	= 0;
            drawable->display   = 0;
            drawable->screen    = 0;
        }
		else
		{
			assert(false && "Internal error.");
		}
#else
			// Nothing to do ?
            #error "Platform not yet supported."
#endif
		
		free( drawable->backend );
		drawable->backend = 0;

		free( drawable );
	}
}
