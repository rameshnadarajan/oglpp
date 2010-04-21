// OGLPP - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_HELPERS_HPP
#define _GLO_HELPERS_HPP

#define gloGetIntegerv( cacheName, pname )		static GLint cacheName = -1;		\
	if ( gleIsOpenGLCurrent() )														\
	{																				\
		if ( cacheName == -1 )														\
		{																			\
			glGetIntegerv( pname, &cacheName );										\
		}																			\
		return cacheName;															\
	}																				\
	else																			\
	{																				\
		return 0;																	\
	}

#endif //#ifndef _GLO_HELPERS_HPP
