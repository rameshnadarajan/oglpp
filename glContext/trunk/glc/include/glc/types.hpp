// OGLPP - Copyright (C) 2008, 2009, 2010, 2011, 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLC_TYPES_HPP
#define _GLC_TYPES_HPP

extern "C" {

#ifdef WIN32
	#define GLC_USE_WGL

	#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__)
	#define WIN32_LEAN_AND_MEAN 1
	#include <windows.h>			// Contains all wgl functions.
	#endif

	typedef HWND	GLC_WINDOW_HANDLE;
	typedef HDC		GLC_DC_HANDLE;

	typedef HGLRC	GLC_GLRC_HANDLE;

#elif __MACOSX__

	#error "MacOSX not yet supported."

//	typedef ?	GLC_WINDOW_HANDLE;
//	typedef ?	GLC_DC_HANDLE;

	typedef GLXContext GLC_GLRC_HANDLE;

#else // POSIX
	#define GLC_USE_GLX

	#define GL_GLEXT_LEGACY
	#include <GL/glx.h>

	typedef unsigned long	GLC_WINDOW_HANDLE;
	typedef GLXDrawable		GLC_DC_HANDLE;

	typedef GLXContext	GLC_GLRC_HANDLE;
#endif


#include "glc/glc.hpp"


struct drawable_backend_t 
{
	void (*destroy)( glc_drawable_t * drawable ); ///< See glc_*_drawable_destroy()
};

/**
 * @brief A glc_drawable_t contains informations about an object that can be drawn onto (a window or an offscreen buffer).
 *
 * @todo offscreen rendering
 */
struct glc_drawable_t
{
#ifdef GLC_USE_GLX
	Display *	display;
	int		screen;
#endif
	GLC_WINDOW_HANDLE	window;
	GLC_DC_HANDLE		dc;

	drawable_backend_t *backend;

	// @todo api for capabilities customization
	int			colorSize;		///< default value is 32
	int			depthSize;		///< default value is 24
	int			stencilSize;	///< default value is 0

	glc_bool_t	stereo;			///< default value is false. true to request a stereoscopic buffer

	//
	int isFullscreen;			///< non zero if in fullscreen, zero otherwise
};


/**
 * @brief A glc context, as glc_t objects are named, are central to this library.
 *
 * A glc_t contains informations about an OpenGL context and its associated drawable.
 */
struct glc_t
{
	GLC_GLRC_HANDLE		context;			///< the OpenGL rendering context
	int *				contextRefCount;	///< a reference count for the OpenGL rendering context (two glc contexts could have the same OpenGL context, but with different drawables. Use case: 2 windows and one OpenGL rendering context).

	glc_drawable_t *	drawable;			///< the drawable used to create the OpenGL rendering context
	//@todo Adds backend for wgl/glx/agl/egl
};

} // extern "C"


#endif  // _GLC_TYPES_HPP
