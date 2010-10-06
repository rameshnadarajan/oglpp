// GLE - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "gle/glHelpers.hpp"



const bool gleIsOpenGLCurrent()
{
#ifdef WIN32
	return wglGetCurrentContext() != NULL;
#elif __MACOSX__
	#error "Not yet implemented"
#else // POSIX
	return glXGetCurrentContext() != NULL;
#endif
}
