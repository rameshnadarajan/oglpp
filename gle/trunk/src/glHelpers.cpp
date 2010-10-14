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


// OpenGL
const int gleGetOpenGLMajorVersion()
{
	assert( gleIsOpenGLCurrent() );

	// version = "4.0.10151 Compatibility Profile Context"
	const char * version = (char*)glGetString( GL_VERSION );

	const int major = version[0] - '0';
	return major;
}


const int gleGetOpenGLMinorVersion()
{
	assert( gleIsOpenGLCurrent() );

	const char * version = (char*)glGetString( GL_VERSION );

	const int minor = version[2] - '0';
	return minor;
}


const float gleGetOpenGLVersion()
{
	assert( gleIsOpenGLCurrent() );

	const char * version = (char*)glGetString( GL_VERSION );

	const float major = static_cast<float>( version[0] - '0' );
	const float minor = static_cast<float>(version[2] - '0' );

	float versionNumber = major + minor/10.f;
	return versionNumber;
}



// GLSL
const int gleGetGLSLMajorVersion()
{
	assert( gleIsOpenGLCurrent() );

	// version = "4.00"
	const char * version = (char*)glGetString( GL_SHADING_LANGUAGE_VERSION );

	const int major = version[0] - '0';
	return major;
}


const int gleGetGLSLMinorVersion()
{
	assert( gleIsOpenGLCurrent() );

	const char * version = (char*)glGetString( GL_SHADING_LANGUAGE_VERSION );

	const int minor = version[2] - '0';
	return minor;
}


const float gleGetGLSLVersion()
{
	assert( gleIsOpenGLCurrent() );

	const char * version = (char*)glGetString( GL_SHADING_LANGUAGE_VERSION );

	const float major = static_cast<float>( version[0] - '0' );
	const float minor = static_cast<float>(version[2] - '0' );

	float versionNumber = major + minor/10.f;
	return versionNumber;
}
