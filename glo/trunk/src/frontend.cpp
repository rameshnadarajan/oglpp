// OGLPP - Copyright (C) 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/frontend.hpp"

#include <sbf/debug.hpp>



namespace glo
{


namespace
{

/**
 * @brief Enables or disables the given OpenGL capability.
 *
 * @param capability	specifies a symbolic constant indicating a GL capability
 * @param enabled		true to enable the capability, false to disable it
 */
void glhEnable( const GLenum capability, const bool enabled = true )
{
	if ( enabled )
	{
		glEnable( capability );
	}
	else
	{
		glDisable( capability );
	}
}


const std::string glhConvertGLError( const GLenum glenumError )
{
	std::string strError;

	switch ( glenumError )
	{
	case GL_NO_ERROR :
		strError = "no error";
		break;

	case GL_INVALID_ENUM:
		strError = "invalid enum";
 		break;

	case GL_INVALID_VALUE :
		strError = "invalid value";
		break;

	case GL_INVALID_OPERATION :
		strError = "invalid operation";
		break;

	case GL_OUT_OF_MEMORY :
		strError = "out of memory";
		break;

#ifndef __OPENGLES2__
	case GL_STACK_OVERFLOW :
		strError = "stack overflow";
		break;

	case GL_STACK_UNDERFLOW :
		strError = "stack underflow";
		break;
#endif

	default:
		strError = "unknown error";
	}

	return ( strError );
}

}


// State requests
const std::string getString( const ImplementationQuery& query )
{
	const GLubyte * value;
	switch ( query )
	{
		case Vendor:
			value = glGetString( GL_VENDOR );
			break;
		case Rendered:
			value = glGetString( GL_RENDERER );
			break;
		case Version:
			value = glGetString( GL_VERSION );
			break;
		case ShadingLanguageVersion:
			value = glGetString( GL_SHADING_LANGUAGE_VERSION );
			break;
		case Extensions:
			value = glGetString( GL_EXTENSIONS );
			break;
		default:
			assert(false);
	}
	return std::string( reinterpret_cast<const char*>(value));
}

const int getGLMajorVersion()
{
	const std::string version = getString( Version );
#ifdef __OPENGLES2__
	const int major = version[10] - '0';
#else
	const int major = version[0] - '0';
#endif
	return major;
}

const int getGLMinorVersion()
{
	const std::string version = getString( Version );
#ifdef __OPENGLES2__
	const int minor = version[12] - '0';
#else
	const int minor = version[2] - '0';
#endif
	return minor;
}

const float getGLVersion()
{
	const float major = static_cast< float >(getGLMajorVersion());
	const float minor = static_cast< float >(getGLMinorVersion());
	return major + minor / 10.f;
}

const int getGLSLMajorVersion()
{
	const std::string version = getString( ShadingLanguageVersion );
#ifdef __OPENGLES2__
	const int major = version[18] - '0';
#else
	const int major = version[0] - '0';
#endif
	return major;
}

const int getGLSLMinorVersion()
{
	const std::string version = getString( ShadingLanguageVersion );
#ifdef __OPENGLES2__
	const int minor = version[20] - '0';
#else
	const int minor = version[2] - '0';
#endif
	return minor;
}

const float getGLSLVersion()
{
	const float major = static_cast< float >(getGLSLMajorVersion());
	const float minor = static_cast< float >(getGLSLMinorVersion());
	return major + minor / 10.f;
}


const bool getGLError( std::string& strError )
{
	const GLenum glenumError = glGetError();

	if ( glenumError == GL_NO_ERROR )
	{
		return false;
	}
	else
	{
		strError = glhConvertGLError( glenumError );
		return true;
	}
}


void reportGLErrors()
{
	std::string strErrors;
	const bool bIsGLErrors = getGLError( strErrors );

	if ( bIsGLErrors )
	{
		printf("OpenGL error: %s\n", strErrors.c_str());
		sbf::printStackTrace();
		printf("\n");
	}
}


// Per-Fragment Operations - Scissor test

// Per-Fragment Operations - Depth buffer test

// Per-Fragment Operations - Blending
void Blending::enable( const bool enabled  )
{
	glhEnable( GL_BLEND, enabled );
}

// Whole Framebuffer Operations

} // namespace glo
