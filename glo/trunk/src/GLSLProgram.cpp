// GLE - Copyright (C) 2005, 2007, 2008, 2012, 2013, 2014, Nicolas Papier, Alexandre Di Pino.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier
// Author Alexandre Di Pino

#include "glo/GLSLProgram.hpp"

#include <cstring>
#include <fstream>	// for file I/O
#include <iostream>	// for I/O
#include <sstream>


namespace glo
{



namespace
{


/**
 * @brief Returns true if the given log is 'interesting', false otherwise.
 *
 * @remark NVidia drivers on Windows returns always non empty log (containing one /0). So short logs (i.e equal or less that 2 characters) are removed.
*/
const bool isLogInteresting( const std::string& log )
{
	return log.size() > 2;
}


GLenum m_GLEnumShaderType[] = 
#ifdef __OPENGLES2__
{
	GL_VERTEX_SHADER,
	GL_FRAGMENT_SHADER
};
#else	// #ifdef __OPENGLES2__
{
	GL_VERTEX_SHADER,
	GL_TESS_CONTROL_SHADER, 
	GL_TESS_EVALUATION_SHADER,
	GL_GEOMETRY_SHADER,
	GL_FRAGMENT_SHADER
};
#endif	// #ifdef __OPENGLES2__ #else


std::string m_stringShaderType[] =
#ifdef __OPENGLES2__
{
	"VERTEX",
	"FRAGMENT"
};
#else	// #ifdef __OPENGLES2__
{
	"VERTEX",
	"TESSELLATION_CONTROL", 
	"TESSELLATION_EVALUATION",
	"GEOMETRY",
	"FRAGMENT"
};
#endif	// #ifdef __OPENGLES2__ #else


const GLenum convertShaderType2GLEnum( const GLSLProgram::ShaderType shaderType )
{
	return m_GLEnumShaderType[shaderType];
}

const std::string& convertShaderType2String( const GLSLProgram::ShaderType shaderType )
{
	return m_stringShaderType[shaderType];
}


}



GLSLProgram::GLSLProgram( const bool initialized )
{
	if ( initialized )
	{
		m_programObject = glCreateProgram();
	}
	else
	{
		m_programObject = 0;
	}

	m_shaderInfo.resize(MAX_SHADER_INDEX);
}



GLSLProgram::~GLSLProgram()
{
#ifdef __OPENGLES2__
	release();
#else
	if ( gleGetCurrent() )
	{
		release();
	}
	else
	{
		std::cerr << "Unable to release program object " << m_programObject << "." << std::endl;
	}
#endif	// #ifdef __OPENGLES2__
}



void GLSLProgram::release()
{
	if ( m_programObject != 0  )
	{
#ifdef __OPENGLES2__
		glDeleteProgram( m_programObject );
#else	// #ifdef __OPENGLES2__
		if ( gleGetCurrent() )
		{
			glDeleteProgram( m_programObject );
			// @todo glDetachShader, glDeleteShader ?
		}
#endif	// #ifdef __OPENGLES2__
	}
}



const bool GLSLProgram::addShader( const std::string shaderSource, const ShaderType shaderType, const bool linkProgram )
{
	const bool retVal = addShader( &shaderSource[0], shaderType, linkProgram );
	return retVal;
}



const bool GLSLProgram::addShader( const GLchar *shaderSource, const ShaderType shaderType, const bool linkProgram )
{
	// @todo assert on shaderType and opengl capability
	assert( m_programObject	!= 0 );
	assert( shaderSource	!= 0 );

	// BACKUP SHADER SOURCE
	m_shaderInfo[shaderType].shaderCode = std::string(shaderSource);
	// @todo Creates a GLSLShader.[shaderSource, compile, compileStatus, infoLog, attachTo(GLSLProgram, deleteShader)]

	// SET SOURCES
	GLuint object = glCreateShader( convertShaderType2GLEnum(shaderType) );
	assert(object != 0);

	const GLint length = static_cast<GLint>( std::strlen( shaderSource ) );
	glShaderSource( object, 1, &shaderSource, &length );

	// COMPILE shader object
	glCompileShader( object );

	// CHECK if shader compiled
	GLint compiled = GL_FALSE;
	glGetShaderiv( object, GL_COMPILE_STATUS, &compiled );

	std::string strShaderLog = getShaderInfoLog( object );
	m_shaderInfo[shaderType].shaderLog = strShaderLog;

	if ( isLogInteresting(strShaderLog) )
	{
		std::cerr << " --" << std::endl;
		std::cerr << "Shader " << object;
		const std::string tmp = (compiled == GL_TRUE) ? " " : " not ";
		std::cerr << tmp  << "compiled :" << std::endl;
		std::cerr << strShaderLog << std::endl;
	}

	//
	if ( m_shaderInfo[shaderType].shaderSaved )
	{
		glDetachShader( m_programObject, m_shaderInfo[shaderType].shaderSaved );
	}

	// BACKUP shader object
	m_shaderInfo[shaderType].shaderSaved = object;

	// ATTACH shader to program object
	glAttachShader( m_programObject, object );

	// DELETE object, no longer needed
	glDeleteShader( object );

	// FINALIZE
	// Compilation fails
	if ( !compiled )	return false;

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
}



const bool GLSLProgram::link( const bool doValidation )
{
	assert( getProgramObject() != 0 && "Empty glsl program" );

// @todo glProgramParameter(program, GL_PROGRAM_SEPARABLE, GL_TRUE);

	// LINK program
	glLinkProgram( getProgramObject() );

	// CHECK link status and log
	GLint isLinked = GL_FALSE;
	glGetProgramiv( getProgramObject(), GL_LINK_STATUS, &isLinked );

	m_linkLog = getProgramInfoLog( getProgramObject() );

	if ( isLogInteresting(m_linkLog) )
	{
		std::cerr << " --" << std::endl;
		std::cerr << "Program " << getProgramObject();
		const std::string tmp = (isLinked == GL_TRUE) ? " " : " not ";
		std::cerr << tmp << "linked :" << std::endl;
		std::cerr << m_linkLog << std::endl;
	}

	m_linkSuccess = (isLinked == GL_TRUE);

	// FINALIZE
	// Linking fails
	if ( !isLinked )	return false;

	// VALIDATION stage
	if ( doValidation )
	{
		const bool isValidated = validate();
		return isValidated;
	}
	else
	{
		return true;
	}
}



const bool GLSLProgram::validate()
{
	assert( getProgramObject() != 0 && "Empty glsl program" );

	// VALIDATE
	glValidateProgram( getProgramObject() );

	// CHECK if successfully validated
	GLint result = GL_FALSE;
	glGetProgramiv( getProgramObject(), GL_VALIDATE_STATUS, &result );

	std::string strInfoLog = getProgramInfoLog( getProgramObject() );

	if ( isLogInteresting(strInfoLog) )
	{
		// There is a log
		m_linkLog += "Validation log:\n";
		m_linkLog += strInfoLog;

		if ( result == GL_FALSE )
		{
			// Message in cerr only if validation fails
			std::cerr << " --" << std::endl;
			std::cerr << "Program " << getProgramObject() << "not validated :" << std::endl;
			std::cerr << strInfoLog << std::endl;
		}
	}

	return result == GL_TRUE;
}


void GLSLProgram::use()
{
	assert( getProgramObject() != 0 && "Empty glsl program" );

	glUseProgram( getProgramObject() );
}



const bool GLSLProgram::isInUse() const
{
	GLint currentProgram;
	glGetIntegerv( GL_CURRENT_PROGRAM, &currentProgram );

	return ( static_cast<GLuint>(currentProgram) == getProgramObject() );
}



void GLSLProgram::useFixedPaths()
{
	glUseProgram( 0 );
}



const GLuint GLSLProgram::getName(const ShaderType shaderType) const
{
	return m_shaderInfo[shaderType].shaderSaved;
}

const std::string GLSLProgram::getShaderCode(const ShaderType shaderType) const
{
	return m_shaderInfo[shaderType].shaderCode;
}

void GLSLProgram::setShaderCode(const ShaderType shaderType, const std::string code)
{
	m_shaderInfo[shaderType].shaderCode = code;
}

const std::string GLSLProgram::getLogError(const ShaderType shaderType) const
{
	return m_shaderInfo[shaderType].shaderLog;
}

void GLSLProgram::setLogError(const ShaderType shaderType, const std::string error)
{
	m_shaderInfo[shaderType].shaderLog = error;
}


const bool GLSLProgram::getLinkSuccess() const
{
	return m_linkSuccess;
}

const std::string GLSLProgram::getLinkLog() const
{
	return m_linkLog;
}



// UNIFORM
void GLSLProgram::setUniform1i( const std::string & name, const GLint v1 )
{
	const GLint loc = getUniformLocation( name );

	if ( loc != -1 )	glUniform1i( loc, v1 );
}

void GLSLProgram::setUniform2i( const std::string & name, const GLint v1, const GLint v2 )
{
	const GLint loc = getUniformLocation( name );

	if ( loc != -1 )	glUniform2i( loc, v1, v2 );
}

void GLSLProgram::setUniform3i( const std::string & name, const GLint v1, const GLint v2, const GLint v3 )
{
	const GLint loc = getUniformLocation( name );

	if ( loc != -1 )	glUniform3i( loc, v1, v2, v3 );
}

void GLSLProgram::setUniform4i( const std::string & name, const GLint v1, const GLint v2, const GLint v3, const GLint v4 )
{
	const GLint loc = getUniformLocation( name );

	if ( loc != -1 )	glUniform4i( loc, v1, v2, v3, v4 );
}



void GLSLProgram::setUniform1f( const std::string & name, const GLfloat v1 )
{
	const GLint loc = getUniformLocation( name );

	if ( loc != -1 )	glUniform1f( loc, v1 );
}

void GLSLProgram::setUniform2f( const std::string & name, const GLfloat v1, const GLfloat v2 )
{
	const GLint loc = getUniformLocation( name );

	if ( loc != -1 )	glUniform2f( loc, v1, v2 );
}

void GLSLProgram::setUniform3f( const std::string & name, const GLfloat v1, const GLfloat v2, const GLfloat v3 )
{
	const GLint loc = getUniformLocation( name );

	if ( loc != -1 )	glUniform3f( loc, v1, v2, v3 );
}

void GLSLProgram::setUniform4f( const std::string & name, const GLfloat v1, const GLfloat v2, const GLfloat v3, const GLfloat v4 )
{
	const GLint loc = getUniformLocation( name );

	if ( loc != -1 )	glUniform4f( loc, v1, v2, v3, v4 );
}



void GLSLProgram::setUniform1iv( const std::string & name, const GLint * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniform1iv( loc, count, value );
}

void GLSLProgram::setUniform2iv( const std::string & name, const GLint * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniform2iv( loc, count, value );
}

void GLSLProgram::setUniform3iv( const std::string & name, const GLint * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniform3iv( loc, count, value );
}

void GLSLProgram::setUniform4iv( const std::string & name, const GLint * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniform4iv( loc, count, value );
}



void GLSLProgram::setUniform1fv( const std::string & name, const GLfloat * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniform1fv( loc, count, value );
}

void GLSLProgram::setUniform2fv( const std::string & name, const GLfloat * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniform2fv( loc, count, value );
}

void GLSLProgram::setUniform3fv( const std::string & name, const GLfloat * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniform3fv( loc, count, value );
}

void GLSLProgram::setUniform4fv( const std::string & name, const GLfloat * value, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniform4fv( loc, count, value );
}



void GLSLProgram::setUniformMatrix2fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniformMatrix2fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix3fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniformMatrix3fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix4fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniformMatrix4fv( loc, count, transpose, value );
}

void GLSLProgram::setUniformMatrix2x3fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
#ifdef __OPENGLES2__

	#pragma message("GLSLProgram::setUniformMatrix2x3fv(): not implemented in ES2")
	assert( false );

#else

	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniformMatrix2x3fv( loc, count, transpose, value );

#endif	// #ifdef __OPENGLES2__
}

void GLSLProgram::setUniformMatrix3x2fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
#ifdef __OPENGLES2__

	#pragma message("GLSLProgram::setUniformMatrix3x2fv(): not implemented in ES2")
	assert( false );

#else
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniformMatrix3x2fv( loc, count, transpose, value );

#endif	// #ifdef __OPENGLES2__
}

void GLSLProgram::setUniformMatrix2x4fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
#ifdef __OPENGLES2__

	#pragma message("GLSLProgram::setUniformMatrix3x2fv(): not implemented in ES2")
	assert( false );

#else
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniformMatrix2x4fv( loc, count, transpose, value );
#endif	// #ifdef __OPENGLES2__
}

void GLSLProgram::setUniformMatrix4x2fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
#ifdef __OPENGLES2__

	#pragma message("GLSLProgram::setUniformMatrix3x2fv(): not implemented in ES2")
	assert( false );

#else
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniformMatrix4x2fv( loc, count, transpose, value );
#endif	// #ifdef __OPENGLES2__
}

void GLSLProgram::setUniformMatrix3x4fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
#ifdef __OPENGLES2__

	#pragma message("GLSLProgram::setUniformMatrix3x2fv(): not implemented in ES2")
	assert( false );

#else
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniformMatrix3x4fv( loc, count, transpose, value );
#endif	// #ifdef __OPENGLES2__
}

void GLSLProgram::setUniformMatrix4x3fv( const std::string & name, const GLfloat * value, const GLboolean transpose, const GLsizei count )
{
#ifdef __OPENGLES2__

	#pragma message("GLSLProgram::setUniformMatrix3x2fv(): not implemented in ES2")
	assert( false );

#else
	const GLint loc = getUniformLocation( name );
	assert( value != 0 );
	assert( count != 0 );

	if ( loc != -1 )	glUniformMatrix4x3fv( loc, count, transpose, value );
#endif	// #ifdef __OPENGLES2__
}


// QUERIES
const std::string GLSLProgram::getActiveUniformsStr() const
{
	const std::vector< GLSLProgram::UniformInformations > uniforms = getActiveUniforms();
	return toString( uniforms );
}


const std::vector< GLSLProgram::UniformInformations > GLSLProgram::getActiveUniforms() const
{
	if ( isInUse() )
	{
		// number of active uniforms
		GLint numUniforms;
		glGetProgramiv( getProgramObject(), GL_ACTIVE_UNIFORMS, &numUniforms );

		GLint maxLength;
		glGetProgramiv( getProgramObject(), GL_ACTIVE_UNIFORM_MAX_LENGTH, &maxLength );

		std::vector< UniformInformations > uniforms(numUniforms, UniformInformations(maxLength) );

		// for each uniform, do
		for( GLint index = 0; index< numUniforms; ++index )
		{
			UniformInformations& uniform = uniforms[index];
			glGetActiveUniform(	getProgramObject(), index,
								uniform.name.size(), 0,
								&uniform.size, &uniform.type, &uniform.name[0] );
		}
		return uniforms;
	}
	else
	{
		std::vector< UniformInformations > uniforms;
		return uniforms;
	}
}


const std::string GLSLProgram::toString( const GLenum type ) const
{
	switch ( type )
	{
		case GL_FLOAT:
			return "float";
		case GL_FLOAT_VEC2:
			return "vec2";
		case GL_FLOAT_VEC3:
			return "vec3";
		case GL_FLOAT_VEC4:
			return "vec4";

		case GL_INT:
			return "int";
		case GL_INT_VEC2:
			return "ivec2";
		case GL_INT_VEC3:
			return "ivec3";
		case GL_INT_VEC4:
			return "ivec4";

		case GL_BOOL:
			return "bool";
		case GL_BOOL_VEC2:
			return "bvec2";
		case GL_BOOL_VEC3:
			return "bvec3";
		case GL_BOOL_VEC4:
			return "bvec4";

		case GL_FLOAT_MAT2:
			return "mat2";
		case GL_FLOAT_MAT3:
			return "mat3";
		case GL_FLOAT_MAT4:
			return "mat4";

		case GL_SAMPLER_2D:
			return "sampler2D";
		case GL_SAMPLER_CUBE:
			return "samplerCube";
#ifndef __OPENGLES2__
		case GL_SAMPLER_1D:
			return "sampler1D";
		case GL_SAMPLER_3D:
			return "sampler3D";

		case GL_SAMPLER_2D_SHADOW:
			return "sampler2DShadow";
#endif // #ifndef __OPENGLES2__

		// @todo support all types (http://www.opengl.org/sdk/docs/man4/xhtml/glGetActiveUniform.xml)

		default:
			return "Unknown type";
	}
}



const std::string GLSLProgram::toString( const std::vector< UniformInformations >& uniforms ) const
{
	std::stringstream ss;
	for( GLuint i = 0; i < uniforms.size(); ++i )
	{
		const UniformInformations& uniform = uniforms[i];
		ss << toString(uniform.type) << " " << std::string(&uniform.name[0]);
		if (uniform.size > 1 )
		{
			ss << "/[" << uniform.size << "]";
		}

		ss << std::endl;
	}
	return ss.str();
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

			unsigned int size( static_cast<unsigned int>(file.gcount()) );
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


const GLuint GLSLProgram::getProgramObject() const
{
	return m_programObject;
}


const GLint GLSLProgram::getUniformLocation( const std::string& name ) const
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


const std::string GLSLProgram::getShaderInfoLog( GLuint object )
{
	std::string strInfoLog;

	GLint logSize = 0;
	glGetShaderiv( object, GL_INFO_LOG_LENGTH, &logSize);
	if( logSize > 0 )
	{
		strInfoLog.resize(logSize, 0);
		glGetShaderInfoLog( object, logSize, 0, &strInfoLog[0] );
		if ( strInfoLog[strInfoLog.size()-1] == '\0' )
		{
			strInfoLog.resize( strInfoLog.size()-1 );
		}
	}

	return strInfoLog;
}


const std::string GLSLProgram::getProgramInfoLog( GLuint object )
{
	std::string strInfoLog;

	GLint logSize = 0;
	glGetProgramiv( object, GL_INFO_LOG_LENGTH, &logSize);
	if( logSize > 0 )
	{
		strInfoLog.resize(logSize, 0);
		glGetProgramInfoLog( object, logSize, 0, &strInfoLog[0] );
	}

	return strInfoLog;
}



} // namespace glo
