// GLE - Copyright (C) 2005, 2006, 2007, 2009, 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_GLO_HPP
#define _GLO_GLO_HPP

/** 
 * @namespace glo
 * 
 * @brief Open(GL) (O)bject
 * 
 * The purpose of this library is to encapsulate OpenGL object (like buffer objects, programs, shaders, textures, framebuffers and so on) into easy to 
 * use classes.
 * 
 * \b glo is open source (LGPL).
 */

// See vgeGL/vgeGL.hpp
#if defined(__OPENGLES2__) || defined(__EMSCRIPTEN__)
	// emscripten => WebGL 1.0 (i.e. almost OpenGLES2.0)
	#include <GLES2/gl2.h>
	#include <GLES2/gl2ext.h>
#else
	// Desktop OpenGL (3.x and 4.x)
	#include <gle/gl.h>
#endif

#include <cassert>

#ifdef _WIN32

	#ifdef GLO_EXPORTS
	#define GLO_API	__declspec(dllexport)
	#else
	#define GLO_API	__declspec(dllimport)
	#endif

	#define GLO_CLASS_API

#elif defined(__GNUC__) && (__GNUC__>=4) && defined(__USE_DYLIB_VISIBILITY__)

	#ifdef GLO_EXPORTS
	#define GLO_API __attribute__ ((visibility("default")))
	#define GLO_CLASS_API __attribute__ ((visibility("default")))
	#else
	#define GLO_API __attribute__ ((visibility("hidden")))
	#define GLO_CLASS_API __attribute__ ((visibility("hidden")))
	#endif

#else

	#define GLO_API
	#define GLO_CLASS_API

#endif



#endif //#ifndef _GLO_GLO_HPP
