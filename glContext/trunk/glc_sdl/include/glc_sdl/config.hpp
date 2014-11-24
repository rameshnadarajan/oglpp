// OGLPP - Copyright (C) 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLC_SDL_CONFIG_HPP
#define _GLC_SDL_CONFIG_HPP

/** 
 * @defgroup g_glc_sdl Open(GL) (C)context management for (SDL)
 * @ingroup g_sdl
 *
 * This library provides the needed cross-platform API to use OpenGL context managed by SDL.
 *
 * @sa http://www.libsdl.org/
 *
 * \b glc_sdl is open source (LGPL).
 */

#ifdef WIN32

	#ifdef GLC_SDL_EXPORTS
	#define GLC_SDL_API	__declspec(dllexport)
	#else
	#define GLC_SDL_API	__declspec(dllimport)
	#endif

	#define GLC_SDL_CLASS_API

#else

	#define GLC_SDL_API
	#define GLC_SDL_CLASS_API

#endif

#endif //#ifndef _GLC_SDL_CONFIG_HPP
