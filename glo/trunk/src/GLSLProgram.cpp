// GLE - Copyright (C) 2005, Nicolas Papier.
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
		if (	!isGL_ARB_shader_objects	||
				!isGL_ARB_vertex_shader	||
				!isGL_ARB_fragment_shader )
		{
			return;
			// FIXME logError("GLSL not supported.\n");
		}
		else
		{
			// FIXME logDebug("GLSL is supported.\n");
		}
		
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



bool GLSLProgram::addShader( const GLcharARB *shaderSource, ShaderType shaderType, bool linkProgram )
{
	assert( m_programObject != 0	);

	assert( shaderSource != 0		);
	assert( shaderType != 0			);

	// SET SOURCES
	GLhandleARB object = glCreateShaderObjectARB( shaderType );
	assert(object != 0);

	GLint length = (GLint)strlen( shaderSource );
	glShaderSourceARB( object, 1, &shaderSource, &length );

	// COMPILE shader object
	glCompileShaderARB( object );

	//check if shader compiled
	GLint compiled = 0;
	glGetObjectParameterivARB( object, GL_OBJECT_COMPILE_STATUS_ARB, &compiled );

#ifdef _DEBUG
	printInfoLog( object );
#endif

	if (!compiled)
	{
		//FIXME vgDebug::get().logError( "Shaders failed to compile...\n" );
		
#ifndef _DEBUG
		printInfoLog( object );
#endif
	
		return ( false );
	}

	// attach shader to program object
	glAttachObjectARB( m_programObject, object );

	// delete object, no longer needed
	glDeleteObjectARB( object );

	// LINK
	if ( linkProgram )
	{
		glLinkProgramARB( m_programObject );

		GLint linked = false;
		glGetObjectParameterivARB( m_programObject, GL_OBJECT_LINK_STATUS_ARB, &linked );
		
#ifdef _DEBUG
		printInfoLog( m_programObject );
#endif

		if ( !linked )
		{
			//FIXME logError( "Shaders failed to link...\n" );
			
#ifndef _DEBUG
			printInfoLog( m_programObject );
#endif

			return ( false );
		}
	}
	
	// reportGLErrors(); FIXME
	
	return ( true );
}



void GLSLProgram::use()
{
	glUseProgramObjectARB( getProgramObject() );
}



void GLSLProgram::useFixedPaths()
{
	glUseProgramObjectARB( 0 );
}



void GLSLProgram::setUniform1i( std::string name, GLint value )
{
	GLint loc = getUniformLocation( name );
	assert( loc != -1 );
	
	glUniform1iARB( loc, value );
}



std::string GLSLProgram::loadFile( std::string pathfilename )
{
	std::string		retVal;
	std::ifstream	file;

	file.open( pathfilename.c_str() );
	
	if ( file.is_open() )
	{
		const int32	bufferSize	( 1024*4 );
		char		buffer[bufferSize];
		
		while ( !file.eof() )
		{
			file.read( buffer, bufferSize );

			int32 size( file.gcount() );		
			retVal.append( buffer, size );
		}
		
		retVal += "\n";

		return ( retVal );
	}
	else
	{
		return ( "\n" );
	}
}



GLhandleARB GLSLProgram::getProgramObject() const
{
	return ( m_programObject );
}



int GLSLProgram::getUniformLocation( std::string name )
{
	return ( glGetUniformLocationARB( getProgramObject(), name.c_str()) );
}



void GLSLProgram::printInfoLog( GLhandleARB object )
{
	int maxLength = 0;
	glGetObjectParameterivARB( object, GL_OBJECT_INFO_LOG_LENGTH_ARB, &maxLength );
	
	if ( maxLength != 0 )
	{
		char *infoLog = new char[maxLength];
	
		glGetInfoLogARB(object, maxLength, &maxLength, infoLog);

		//FIXME logError( "%s\n", infoLog );	
	
 		delete[] infoLog;
	}
}



bool GLSLProgram::m_firstInstance = true;



} // namespace glo
