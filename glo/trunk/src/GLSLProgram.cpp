// GLE - Copyright (C) 2005, 2007, 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/GLSLProgram.hpp"

#include <iostream>     // for I/O
#include <fstream>      // for file I/O



namespace glo
{



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
		m_programObject = glCreateProgramObjectARB();
	}
	else
	{
		m_programObject = 0;
	}
}



GLSLProgram::~GLSLProgram()
{
	if ( m_programObject != 0 )
	{
		glDeleteObjectARB( m_programObject );
	}
}



const bool GLSLProgram::addShader( const GLcharARB *shaderSource, const ShaderType shaderType, const bool linkProgram )
{
	assert( m_programObject	!= 0	);

	assert( shaderSource	!= 0	);

	// SET SOURCES
	// @todo Creates a GLSLShader.[shaderSource, compile, compileStatus, infoLog, attachTo(GLSLProgram, deleteShader)]
	// @todo exceptions
	GLhandleARB object = glCreateShaderObjectARB( shaderType );
	assert(object != 0);

	const GLint length = static_cast<GLint>( strlen( shaderSource ) );
	glShaderSourceARB( object, 1, &shaderSource, &length );

	// COMPILE shader object
	glCompileShaderARB( object );

	//CHECK if shader compiled
	GLint compiled = 0;
	glGetObjectParameterivARB( object, GL_OBJECT_COMPILE_STATUS_ARB, &compiled );

//#ifdef _DEBUG
	printInfoLog( object ); // FIXME
//#endif

	if ( !compiled )
	{
		//FIXME vgDebug::get().logError( "Shaders failed to compile...\n" );
		//printInfoLog( object );
		return false;
	}

	// ATTACH shader to program object
	glAttachObjectARB( m_programObject, object );

	// DELETE object, no longer needed
	glDeleteObjectARB( object );

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
	glLinkProgramARB( getProgramObject() );

	// Checks status
	GLint linked;
	glGetObjectParameterivARB( getProgramObject(), GL_OBJECT_LINK_STATUS_ARB, &linked );

//#ifdef _DEBUG
	printInfoLog( getProgramObject() );
//#endif

	if ( !linked )
	{
		std::cerr << "Shaders failed to link..." << std::endl;
		printInfoLog( getProgramObject() );
	}
	else
	{
		std::cerr << "Shaders have been successfully linked." << std::endl;
		printInfoLog( getProgramObject() );
	}

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

	return currentProgram == getProgramObject();
}



void GLSLProgram::useFixedPaths()
{
	glUseProgramObjectARB( 0 );
}



void GLSLProgram::setUniform1i( const std::string & name, const GLint v1 )
{
	const GLint loc = getUniformLocation( name );

	glUniform1iARB( loc, v1 );
}

void GLSLProgram::setUniform2i( const std::string & name, const GLint v1, const GLint v2 )
{
	const GLint loc = getUniformLocation( name );

	glUniform2iARB( loc, v1, v2 );
}

void GLSLProgram::setUniform3i( const std::string & name, const GLint v1, const GLint v2, const GLint v3 )
{
	const GLint loc = getUniformLocation( name );

	glUniform3iARB( loc, v1, v2, v3 );
}

void GLSLProgram::setUniform4i( const std::string & name, const GLint v1, const GLint v2, const GLint v3, const GLint v4 )
{
	const GLint loc = getUniformLocation( name );

	glUniform4iARB( loc, v1, v2, v3, v4 );
}



void GLSLProgram::setUniform1f( const std::string & name, const GLfloat v1 )
{
	const GLint loc = getUniformLocation( name );

	glUniform1fARB( loc, v1 );
}

void GLSLProgram::setUniform2f( const std::string & name, const GLfloat v1, const GLfloat v2 )
{
	const GLint loc = getUniformLocation( name );

	glUniform2fARB( loc, v1, v2 );
}

void GLSLProgram::setUniform3f( const std::string & name, const GLfloat v1, const GLfloat v2, const GLfloat v3 )
{
	const GLint loc = getUniformLocation( name );

	glUniform3fARB( loc, v1, v2, v3 );
}

void GLSLProgram::setUniform4f( const std::string & name, const GLfloat v1, const GLfloat v2, const GLfloat v3, const GLfloat v4 )
{
	const GLint loc = getUniformLocation( name );

	glUniform4fARB( loc, v1, v2, v3, v4 );
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
	const GLint location = glGetUniformLocationARB( getProgramObject(), name.c_str() );

	assert( location != -1 && "Name does not correspond to an active uniform" );
#ifdef _DEBUG
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

		std::cerr << "glo.GLSLProgram: GLSL INFO LOG: " << std::string(infoLog) << std::endl; 

		// @todo FIXME logError( "%s\n", infoLog );

 		delete[] infoLog;
	}
}



bool GLSLProgram::m_firstInstance = true;



} // namespace glo
