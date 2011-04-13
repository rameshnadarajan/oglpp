// OGLPP - Copyright (C) 2010, 2011, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_HELPERS_HPP
#define _GLO_HELPERS_HPP

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

#endif //#ifndef _GLO_HELPERS_HPP
