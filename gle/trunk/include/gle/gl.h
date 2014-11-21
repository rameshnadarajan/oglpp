// GLE - Copyright (C) 2009, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_GL_H
#define _GLE_GL_H

// See glo/glo.hpp and vgeGL/vgeGL.hpp
#if defined(__OPENGLES2__) || defined(__EMSCRIPTEN__)
	#error "Try to use gle with OpenGLES2 or emscripten. Not yet allowed."
	// emscripten => WebGL 1.0 (i.e. almost OpenGLES2.0)
	#include <GLES2/gl2.h>
	#include <GLES2/gl2ext.h>
#else
	// Desktop OpenGL (3.x and 4.x)
	#include "gle/gle.hpp"
	#include "gle/glHelpers.hpp"
	#include "gle/Wrapper.hpp"		// for gleSetCurrent(), gleGetCurrent()
	#include "gle/WrapperGen.hpp"
#endif

#endif //#ifndef _GLE_GL_H
