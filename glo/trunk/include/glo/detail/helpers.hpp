// OGLPP - Copyright (C) 2010, 2011, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_HELPERS_HPP
#define _GLO_HELPERS_HPP

#ifdef __OPENGLES2__

// @todo gleIsOpenGLCurrent() for OpenGL ES => use always the same gloGetIntegerv() impl.
#define gloGetIntegerv( cacheName, pname )		static GLint cacheName = -1;		\
	if ( cacheName == -1 )															\
	{																				\
		if ( true )																	\
		{																			\
			glGetIntegerv( pname, &cacheName );										\
			return cacheName;														\
		}																			\
		else																		\
		{																			\
			return 0;																\
		}																			\
	}																				\
	else																			\
	{																				\
		return cacheName;															\
	}

#else	// #ifdef __OPENGLES2__

#include <gle/glHelpers.hpp>

#define gloGetIntegerv( cacheName, pname )		static GLint cacheName = -1;		\
	if ( cacheName == -1 )															\
	{																				\
		if ( gleIsOpenGLCurrent() )													\
		{																			\
			glGetIntegerv( pname, &cacheName );										\
			return cacheName;														\
		}																			\
		else																		\
		{																			\
			return 0;																\
		}																			\
	}																				\
	else																			\
	{																				\
		return cacheName;															\
	}

#endif	// #ifdef __OPENGLES2__

#endif //#ifndef _GLO_HELPERS_HPP
