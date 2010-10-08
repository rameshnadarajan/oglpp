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


const int gleGetOpenGLMajorVersion()
{
	assert( gleIsOpenGLCurrent() );

	// version = "4.0.10151 Compatibility Profile Context"
	char * version = (char*)glGetString( GL_VERSION );

	const int major = version[0] - '0';
	return major;
}


const int gleGetOpenGLMinorVersion()
{
	assert( gleIsOpenGLCurrent() );

	char * version = (char*)glGetString( GL_VERSION );

	const int minor = version[2] - '0';
	return minor;
}
