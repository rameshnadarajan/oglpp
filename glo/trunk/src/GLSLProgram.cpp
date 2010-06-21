// GLE - Copyright (C) 2005, 2007, 2008, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/GLSLProgram.hpp"

#include <cstring>
#include <fstream>	// for file I/O
#include <iostream>	// for I/O



namespace glo
{



const GLenum GLSLProgram::convertShaderType2GLEnum( const ShaderType shaderType )
{
	return m_GLEnumShaderType[shaderType];
}


const std::string& GLSLProgram::convertShaderType2String( const ShaderType shaderType )
{
	return m_stringShaderType[shaderType];
}



GLSLProgram::GLSLProgram( bool initialized )
{
	if ( m_firstInstance )
	{
		if (	!isGL_ARB_shader_objects()	||
				!isGL_ARB_vertex_shader()	||
				!isGL_ARB_fragment_shader()
			)
		{
			std::cerr << "glo.GLSLProgram: GLSL is not supported" << std::endl;
			// FIXME logError("GLSL not supported.\n");
			return;
		}
		//else
		//{
			// FIXME logDebug("GLSL is supported.\n");
		//}

		m_firstInstance = false;
	}

	if ( initialized )
	{
		m_programObject = glCreateProgram();
	}
	else
	{
		m_programObject = 0;
	}
}



GLSLProgram::~GLSLProgram()
{
	if ( gleGetCurrent() )
	{
		release();
	}
	else
	{
		std::cerr << "Unable to release program object " << m_programObject << "." << std::endl;
	}
}



void GLSLProgram::release()
{
	if ( m_programObject != 0 && gleGetCurrent() )
	{
		glDeleteProgram( m_programObject );
	}
}



const bool GLSLProgram::addShader( const GLchar *shaderSource, const ShaderType shaderType, const bool linkProgram )
{
	assert( m_programObject	!= 0	);

	assert( shaderSource	!= 0	);

	// SET SOURCES
	// @todo Creates a GLSLShader.[shaderSource, compile, compileStatus, infoLog, attachTo(GLSLProgram, deleteShader)]
	// @todo exceptions
	GLhandleARB object = glCreateShader( convertShaderType2GLEnum(shaderType) );
	assert(object != 0);

	const GLint length = static_cast<GLint>( std::strlen( shaderSource ) );
	glShaderSource( object, 1, &shaderSource, &length );

	// COMPILE shader object
	glCompileShader( object );

	//CHECK if shader compiled
	GLint compiled = 0;
	glGetObjectParameterivARB( object, GL_OBJECT_COMPILE_STATUS_ARB, &compiled );

//#ifdef _DEBUG
	if ( compiled )
	{
		std::cout << convertShaderType2String(shaderType) << " shader have been successfully compiled." << std::endl;
	}
	else
	{
		std::cout << convertShaderType2String(shaderType) << " shader failed to compile." << std::endl;
	}

	std::cout << convertShaderType2String(shaderType) << " shader compilation log :" << std::endl;
	printInfoLog( object ); // FIXME
//#endif

	if ( !compiled )
	{
		//FIXME vgDebug::get().logError( "Shaders failed to compile...\n" );
		//printInfoLog( object );
		return false;
	}

	// ATTACH shader to program object
	glAttachShader( m_programObject, object );

	// DELETE object, no longer needed
	glDeleteShader( object );

	// LINK stage
	if ( linkProgram )
	{
		const bool linkStatus = link();
		return linkStatus;
	}
	else
	{
		return true;
	}

	// reportGLErrors(); FIXME

	return true;
}



const bool GLSLProgram::link()
{
	assert( getProgramObject() != 0 && "Empty glsl program" );

	// Link program
	glLinkProgram( getProgramObject() );

	// Checks status
	GLint linked;
	glGetObjectParameterivARB( getProgramObject(), GL_OBJECT_LINK_STATUS_ARB, &linked );

	if ( !linked )
	{
		std::cout << "PROGRAM failed to link..." << std::endl;
		std::cerr << "PROGRAM failed to link..." << std::endl;
		//printInfoLog( getProgramObject() );
	}
	else
	{
		std::cout << "PROGRAM have been successfully linked." << std::endl;
		//printInfoLog( getProgramObject() );
	}

//#ifdef _DEBUG
	std::cout << "PROGRAM link log :" << std::endl;
	printInfoLog( getProgramObject() );
//#endif

	return linked;
}



void GLSLProgram::use()
{
	assert( getProgramObject() != 0 && "Empty glsl program" );
	glUseProgramObjectARB( getProgramObject() );
}



const bool GLSLProgram::isInUse() const
{
	GLint currentProgram;
	glGetIntegerv( GL_CURRENT_PROGRAM, &currentProgram );

	return ( static_cast<GLuint>(currentProgram) == getProgramObject() );
}



void GLSLProgram::useFixedPaths()
{
	glUseProgramObjectARB( 0 );
}



void GLSLProgram::setUniform1i( const std::string & name, const GLint v1 )
{
	const GLint loc = getUniformLocation( name );

	glUniform1i( loc, v1 );
}

void GLSLProgram::setUniform2i( const std::string & name, const GLint v1, const GLint v2 )
{
	const GLint loc = getUniformLocation( name );

	glUniform2i( loc, v1, v2 );
}

void GLSLProgram::setUniform3i( const std::string & name, const GLint v1, const GLint v2, const GLint v3 )
{
	const GLint loc = getUniformLocation( name );

	glUniform3i( loc, v1, v2, v3 );
}

void GLSLProgram::setUniform4i( const std::string & name, const GLint v1, const GLint v2, const GLint v3, const GLint v4 )
{
	const GLint loc = getUniformLocation( name );

	glUniform4i( loc, v1, v2, v3, v4 );
}



void GLSLProgram::setUniform1f( const std::string & name, const GLfloat v1 )
{
	const GLint loc = getUniformLocation( name );

	glUniform1f( loc, v1 );
}

void GLSLProgram::setUniform2f( const std::string & name, const GLfloat v1, const GLfloat v2 )
{
	const GLint loc = getUniformLocation( name );

	glUniform2f( loc, v1, v2 );
}

void GLSLProgram::setUniform3f( const std::string & name, const GLfloat v1, const GLfloat v2, const GLfloat v3 )
{
	const GLint loc = getUniformLocation( name );

	glUniform3f( loc, v1, v2, v3 );
}

void GLSLProgram::setUniform4f( const std::string & name, const GLfloat v1, const GLfloat v2, const GLfloat v3, const GLfloat v4 )
{
	const GLint loc = getUniformLocation( name );

	glUniform4f( loc, v1, v2, v3, v4 );
}



void GLSLProgram::setUniform1iv( const std::string & name, const GLint * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniform1iv( loc, count, value );
}

void GLSLProgram::setUniform2iv( const std::string & name, const GLint * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniform2iv( loc, count, value );
}

void GLSLProgram::setUniform3iv( const std::string & name, const GLint * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniform3iv( loc, count, value );
}

void GLSLProgram::setUniform4iv( const std::string & name, const GLint * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniform4iv( loc, count, value );
}



void GLSLProgram::setUniform1fv( const std::string & name, const GLfloat * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniform1fv( loc, count, value );
}

void GLSLProgram::setUniform2fv( const std::string & name, const GLfloat * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniform2fv( loc, count, value );
}

void GLSLProgram::setUniform3fv( const std::string & name, const GLfloat * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniform3fv( loc, count, value );
}

void GLSLProgram::setUniform4fv( const std::string & name, const GLfloat * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniform4fv( loc, count, value );
}



void GLSLProgram::setUniformMatrix2fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniformMatrix2fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix3fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniformMatrix3fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix4fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniformMatrix4fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix2x3fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniformMatrix2x3fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix3x2fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniformMatrix3x2fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix2x4fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniformMatrix2x4fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix4x2fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniformMatrix4x2fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix3x4fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniformMatrix3x4fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix4x3fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	glUniformMatrix4x3fv( loc, count, transpose, value );
}



const std::string GLSLProgram::loadFile( const std::string pathfilename )
{
	std::string		retVal;
	std::ifstream	file;

	file.open( pathfilename.c_str() );
	
	if ( file.is_open() )
	{
		const unsigned int	bufferSize	( 1024*4 );
		char		buffer[bufferSize];

		while ( !file.eof() )
		{
			file.read( buffer, bufferSize );

			unsigned int size( file.gcount() );
			retVal.append( buffer, size );
		}

		retVal += "\n";

		return retVal;
	}
	else
	{
		return std::string("\n");
	}
}



GLhandleARB GLSLProgram::getProgramObject() const
{
	return m_programObject;
}



const GLint GLSLProgram::getUniformLocation( const std::string& name )
{
	const GLint location = glGetUniformLocation( getProgramObject(), name.c_str() );

#ifdef OPENGL_DEBUG
	if ( location == -1 )
	{
		std::cerr << "glo.GLSLProgram: " << name << " does not correspond to an active uniform." << std::endl;
	}
#endif

	return location;
}



const std::string GLSLProgram::getInfoLog( GLhandleARB object )
{
	std::string strInfoLog;

	int maxLength = 0;
	glGetObjectParameterivARB( object, GL_OBJECT_INFO_LOG_LENGTH_ARB, &maxLength );

	if ( maxLength > 0 )
	{
		char *infoLog = new char[maxLength];

		glGetInfoLogARB(object, maxLength, &maxLength, infoLog);

		strInfoLog.assign( infoLog );

 		delete[] infoLog;
	}
	
	return strInfoLog;
}



void GLSLProgram::printInfoLog( GLhandleARB object )
{
	GLint maxLength = 0;
	glGetObjectParameterivARB( object, GL_OBJECT_INFO_LOG_LENGTH_ARB, &maxLength );

	if ( maxLength > 0 )
	{
		char *infoLog = new char[maxLength];

		glGetInfoLogARB(object, maxLength, &maxLength, infoLog);

		if ( maxLength > 0 )
		{
			std::cout << "glo.GLSLProgram: info log :\n" << std::string(infoLog) << std::endl; 
			// @todo FIXME logError( "%s\n", infoLog );
		}

 		delete[] infoLog;
	}
}



GLenum GLSLProgram::m_GLEnumShaderType[] = 
{
	GL_VERTEX_SHADER_ARB,
	GL_FRAGMENT_SHADER_ARB,
	GL_GEOMETRY_SHADER_ARB
};


std::string GLSLProgram::m_stringShaderType[] =
{
	"VERTEX",
	"FRAGMENT",
	"GEOMETRY"
};



bool GLSLProgram::m_firstInstance = true;



} // namespace glo
