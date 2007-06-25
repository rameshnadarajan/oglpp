// GLE - Copyright (C) 2004, 2006 Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_H
#define _GLE_H

#ifdef WIN32

	#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__)
	#define WIN32_LEAN_AND_MEAN 1
	#include <windows.h> // contains all WGL Functions.
	#endif
	
	#include <GL/gl.h>
	#include <GL/glext.h>
	//#include <GL/wglext.h>
	//#include <GL/glu.h>
	
#elif __MACOSX__

	#define WINGDIAPI
	#define APIENTRY
	#include <GL/gl.h>
	#include <GL/glext.h>
	//#include <GL/glu.h>
	//#include <OpenGL/glext.h>
	//#include <OpenGL/gl.h>
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

typedef long int32;
typedef unsigned long uint32;   // FIXME: test if sizeof (uint32) == 4

#include <cassert>

/**
 * @defgroup g_gle gle for open(GL) (E)xtensions library.
 * 
 * gle is a cross-platform (GNU/Linux, MS Windows and MacOSX) easy-to-use OpenGL extension loader.
 * 
 * Some useful links :
 * - OpenGL 2.0 Spec(pdf) : http://www.opengl.org/documentation/specs/version2.0/glspec20.pdf
 * - OpenGL 1.5 Spec(pdf) : http://www.opengl.org/documentation/specs/version1.5/glspec15.pdf
 * - OpenGL Shading Language Specification : http://oss.sgi.com/projects/ogl-sample/registry/ARB/GLSLangSpec.Full.1.10.59.pdf
 * 
 * - OpenGL extensions from SGI : http://oss.sgi.com/projects/ogl-sample/registry/
 * - OpenGL extensions from NVidia : http://developer.nvidia.com/object/nvidia_opengl_specs.html
 * - OpenGL extensions from ATI : http://www.atitech.com/developer/sdk/radeonSDK/html/info/Prog3D.html
 * - OpenGL extensions from APPLE : http://developer.apple.com/graphicsimaging/opengl/extensions.html
 * 
 * - GLU Spec(pdf) : http://www.opengl.org/documentation/specs/glu/glu1_3.pdf
 * - GLX Spec(pdf) : http://www.opengl.org/documentation/specs/glx/glx1.3.pdf
 *
 * - OpenGL 1.2 open source Sample Implementation : http://oss.sgi.com/projects/ogl-sample/index.html
 * - Mesa 3D Graphics Library : http://www.mesa3d.org/
 *
 * - The OpenGL Bluebook HTML format : http://www.parallab.uib.no/SGI_bookshelves/SGI_Developer/books/OpenGL_RM/sgi_html/bk02.html
 * - OpenGL Reference Manual : http://biology.ncsa.uiuc.edu/library/SGI_bookshelves/SGIindex/SGI_Developer_OpenGL_RM.html
 *
 * - Programming Guide Online - Redbook : http://rush3d.com/reference/opengl-redbook-1.1/
 *
 * - GL Manual Pages  : http://www.opengl.org/documentation/specs/man_pages/hardcopy/GL/html/gl/
 * - GLU Manual Pages : http://www.opengl.org/documentation/specs/man_pages/hardcopy/GL/html/glu/
 * - GLX Manual Pages : http://www.opengl.org/documentation/specs/man_pages/hardcopy/GL/html/glx/
 *
 * - OpenGL Specification & Manual Pages : http://www.opengl.org/documentation/spec.html
 */

#endif // #ifndef _GLE_H
