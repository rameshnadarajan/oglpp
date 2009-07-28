// GLE - Copyright (C) 2004, 2006, 2007, 2008, 2009, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_HPP
#define _GLE_HPP

#ifdef WIN32

	#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__)
	#define WIN32_LEAN_AND_MEAN 1
	#ifndef NOMINMAX
	#define NOMINMAX
	#endif
	#include <windows.h> // contains all WGL Functions.
	#endif

	#include <GL/gl.h>
	#include <GL/glext.h>
	#include <GL/wglext.h>
	//#include <GL/glu.h>

#elif __MACOSX__

	#define WINGDIAPI
	#define APIENTRY
	#include <GL/gl.h>
	#include <GL/glext.h>
	//#include <GL/glu.h>

	//#include <OpenGL/gl.h>
	//#include <OpenGL/glext.h>
	//#include <OpenGL/glu.h>
	
#else // POSIX

	#define __STDC_VERSION__	199901L
	#include <GL/gl.h>
	#include <GL/glext.h>
	//#include <GL/glx.h>
	//#include <GL/glxext.h>
	//#include <GL/glu.h>

#endif



#ifdef WIN32

	#ifdef _MSC_VER
	
		// The Visual C++ debugger doesn't know string larger than 255 char. STL often creates large
		// symbol. The following line cancels warning created by Visual.
		#pragma warning (disable:4786)
	
		// need a dll interface (Un classe de base ou une structure doit être déclarée avec 
		// le mot clé __declspec(dllexport) pour qu'une fonction d'une classe dérivée soit exportée)
		#pragma warning (disable:4251)
		
		// interface non-dll classkey 'identificateur' utilisée comme base d'une interface dll classkey 'identificateur'
		// Une classe exportée a été dérivée depuis une classe qui n'a pas été exportée.
		#pragma warning (disable:4275)
	
		// Spécification d'exception C++ ignorée sauf pour indiquer qu'une fonction n'est pas 
		// __declspec(nothrow)
		#pragma warning (disable:4290)
	
		// The following line prevents from this file to be included several times by the compiler with
		// Visual C++. This makes compiling quicker, but must not be used when your file content may
		// change depending on some macro definitions. In the general case, leave these lines as they are.
		#pragma once
	
	#endif

	#ifdef GLE_EXPORTS
	#define GLE_API __declspec(dllexport)
	#else
	#define GLE_API __declspec(dllimport)
	#endif

	#define GLE_CLASS_API

#elif defined(__GNUC__) && (__GNUC__>=4) && defined(__USE_DYLIB_VISIBILITY__)

	#ifdef GLE_EXPORTS
	#define GLE_API __attribute__ ((visibility("default")))
	#define GLE_CLASS_API __attribute__ ((visibility("default")))
	#else
	#define GLE_API __attribute__ ((visibility("hidden")))
	#define GLE_CLASS_API __attribute__ ((visibility("hidden")))
	#endif

#else

	#define GLE_API
	#define GLE_CLASS_API

#endif

#include <cassert>

/** 
 * @namespace gle
 * 
 * @brief Open(GL) (E)xtensions library
 * 
 * gle for open(GL) (E)xtensions library.
 *
 * gle is a cross-platform (GNU/Linux, MS/Windows and Apple/MacOSX) easy-to-use OpenGL extension loader.
 * 
 * \b gle is open source (LGPL).
 */

/**
 * @defgroup g_gle	Open(GL) (E)xtensions library
 *
 * gle for open(GL) (E)xtensions library.
 *
 * gle is a cross-platform (GNU/Linux, MS/Windows and Apple/MacOSX) easy-to-use OpenGL extension loader.
 *
 * OpenGL extensions mechanism : http://opengl.org/documentation/extensions/
 *
 * OpenGL Shading Language : http://opengl.org/documentation/glsl/
 * 
 * OpenGL links :
 * - OpenGL 2.1 Reference Pages : http://opengl.org/sdk/docs/man/
 *
 * - OpenGL 3.1 Specification (pdf revised 2009/03/24) : http://www.opengl.org/registry/doc/glspec31.20090324.pdf
 * - OpenGL 3.1 Specification with GL_ARB_compatibility extension (pdf revised 2009/03/24) : http://www.opengl.org/registry/doc/glspec31undep.20090324.pdf
 * - OpenGL 3.0 Specification (pdf revised 2008/08/11) : http://www.opengl.org/registry/doc/glspec30.20080811.pdf
 * - OpenGL 2.1 Specification (pdf revised 2006/12/01) : http://www.opengl.org/registry/doc/glspec21.20061201.pdf
 *
 * - OpenGL Shading Language Specification v1.40.00 (pdf) : http://www.opengl.org/registry/doc/GLSLangSpec.Full.1.40.05.pdf
 * - OpenGL Shading Language Specification v1.30.08 (pdf) : http://www.opengl.org/registry/doc/GLSLangSpec.Full.1.30.08.withchanges.pdf
 * - OpenGL Shading Language Specification v1.20.8 (pdf) : http://www.opengl.org/registry/doc/GLSLangSpec.Full.1.20.8.pdf
 * - OpenGL Shading Language Specification v1.10.59 (pdf) : http://www.opengl.org/registry/doc/GLSLangSpec.Full.1.10.59.pdf
 *
 * - OpenGL extensions from SGI : http://oss.sgi.com/projects/ogl-sample/registry/
 * - OpenGL extensions from NVidia : http://developer.nvidia.com/object/nvidia_opengl_specs.html
 * - OpenGL extensions from AMD/ATI : http://www.atitech.com/developer/sdk/radeonSDK/html/info/Prog3D.html
 * - OpenGL extensions from APPLE : http://developer.apple.com/graphicsimaging/opengl/extensions.html
 *
 * Old specifications :
 * - OpenGL 2.0 Specification (pdf) : http://www.opengl.org/documentation/specs/version2.0/glspec20.pdf
 * - OpenGL 1.5 Specification (pdf) : http://www.opengl.org/documentation/specs/version1.5/glspec15.pdf
 * - OpenGL 1.4 Specification (pdf) : http://opengl.org/documentation/specs/version1.4/glspec14.pdf
 * - OpenGL 1.3 Specification (pdf) : http://opengl.org/documentation/specs/version1.3/glspec13.pdf
 * - OpenGL 1.2.1 Specification (pdf) : http://opengl.org/documentation/specs/version1.2/opengl1.2.1.pdf
 * - OpenGL Shading Language Specification : http://oss.sgi.com/projects/ogl-sample/registry/ARB/GLSLangSpec.Full.1.10.59.pdf
 * 
 * Some useful links :
 * - OpenGL 1.2 open source Sample Implementation : http://oss.sgi.com/projects/ogl-sample/index.html
 * - Mesa 3D Graphics Library : http://www.mesa3d.org/ 
 * - GLX 1.4 Specification (pdf) : http://opengl.org/documentation/specs/glx/glx1.4.pdf 
 * - GLU Specification (pdf) : http://opengl.org/documentation/specs/glu/glu1_3.pdf
 */

#endif // #ifndef _GLE_HPP
