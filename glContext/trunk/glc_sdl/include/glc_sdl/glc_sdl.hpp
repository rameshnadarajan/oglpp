// OGLPP - Copyright (C) 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLC_SDL_GLC_SDL_HPP
#define _GLC_SDL_GLC_SDL_HPP

#include <glc/glc.hpp>
#include "glc_sdl/config.hpp"

struct SDL_Window;

extern "C"
{

/**
 * @brief Creates a drawable from an SDL window.
 *
 * @param window	the SDL window used to create the new drawable (not used currently)
 *
 * @return the newly allocated drawable.
 */
GLC_SDL_API glc_drawable_t *	glc_sdl_drawable_create( SDL_Window * window );

/**
 * @brief Deletes the given drawable.
 *
 * @param drawable	the drawable that must be deleted.
 *
 * The given drawable is deleted and all associated resources are freed.
 */
GLC_SDL_API void glc_sdl_drawable_destroy( glc_drawable_t * drawable );

} // extern "C"


#endif //#ifndef _GLC_SDL_GLC_SDL_HPP
