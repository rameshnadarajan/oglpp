// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/GLSLShader.hpp"

#include <iostream>     // for I/O
#include <fstream>      // for file I/O
//#include <vgDebug/Global.hpp> FIXME



namespace glo
{



GLSLShader::GLSLShader( bool initialized )
{
	if ( m_firstInstance )
	{
		if (	!gleGetCurrent()->isGL_ARB_shader_objects	||
				!gleGetCurrent()->isGL_ARB_vertex_shader	||
				!gleGetCurrent()->isGL_ARB_fragment_shader )
		{
			// FIXME vgDebug::get().logError("GLSL not supported.\n");
		}
		else
		{
			// FIXME vgDebug::get().logDebug("GLSL is supported.\n");
		}
		
		m_firstInstance = false;
	}
	
	if ( initialized )
	{
		m_programObject = gleGetCurrent()->glCreateProgramObjectARB();		
	}
	else
	{
		m_programObject = 0;
	}
}



GLSLShader::~GLSLShader()
{
	if ( m_programObject != 0 )
	{
		gleGetCurrent()->glDeleteObjectARB( m_programObject );
	}
}



bool GLSLShader::addShader( const GLcharARB *shaderSource, ShaderType shaderType, bool linkProgram )
{
	assert( m_programObject != 0	);

	assert( shaderSource != 0		);
	assert( shaderType != 0			);

	// SET SOURCES
	GLhandleARB object = gleGetCurrent()->glCreateShaderObjectARB( shaderType );
	assert(object != 0);

	GLint length = (GLint)strlen( shaderSource );
	gleGetCurrent()->glShaderSourceARB( object, 1, &shaderSource, &length );

	// COMPILE shader object
	gleGetCurrent()->glCompileShaderARB( object );

	//check if shader compiled
	GLint compiled = 0;
	gleGetCurrent()->glGetObjectParameterivARB( object, GL_OBJECT_COMPILE_STATUS_ARB, &compiled );

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
	gleGetCurrent()->glAttachObjectARB( m_programObject, object );

	// delete object, no longer needed
	gleGetCurrent()->glDeleteObjectARB( object );

	// LINK
	if ( linkProgram )
	{
		gleGetCurrent()->glLinkProgramARB( m_programObject );

		GLint linked = false;
		gleGetCurrent()->glGetObjectParameterivARB( m_programObject, GL_OBJECT_LINK_STATUS_ARB, &linked );
		
#ifdef _DEBUG
		printInfoLog( m_programObject );
#endif

		if ( !linked )
		{
			//FIXME vgDebug::get().logError( "Shaders failed to link...\n" );
			
#ifndef _DEBUG
			printInfoLog( m_programObject );
#endif

			return ( false );
		}
	}
	
	// gleGetCurrent()->reportGLErrors(); FIXME
	
	return ( true );
}



void GLSLShader::use()
{
	gleGetCurrent()->glUseProgramObjectARB( getProgramObject() );
}



void GLSLShader::useFixedPaths()
{
	gleGetCurrent()->glUseProgramObjectARB( 0 );
}



void GLSLShader::setUniform1i( std::string name, GLint value )
{
	GLint loc = getUniformLocation( name );
	assert( loc != -1 );
	
	gleGetCurrent()->glUniform1iARB( loc, value );
}



std::string GLSLShader::loadFile( std::string pathfilename )
{
	std::string		retVal;
	std::ifstream	file;

	file.open( pathfilename.c_str() );
	
	if ( file.is_open() )
	{
		const int32	bufferSize	( 1024*4 );
		char			buffer[bufferSize];
		
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



GLhandleARB GLSLShader::getProgramObject() const
{
	return ( m_programObject );
}



int GLSLShader::getUniformLocation( std::string name )
{
	return ( gleGetCurrent()->glGetUniformLocationARB( getProgramObject(), name.c_str()) );
}



void GLSLShader::printInfoLog( GLhandleARB object )
{
	int maxLength = 0;
	gleGetCurrent()->glGetObjectParameterivARB( object, GL_OBJECT_INFO_LOG_LENGTH_ARB, &maxLength );
	
	if ( maxLength != 0 )
	{
		char *infoLog = new char[maxLength];
	
		gleGetCurrent()->glGetInfoLogARB(object, maxLength, &maxLength, infoLog);

		//FIXME vgDebug::get().logError( "%s\n", infoLog );	
	
 		delete[] infoLog;
	}
}



bool GLSLShader::m_firstInstance = true;



} // namespace glo
