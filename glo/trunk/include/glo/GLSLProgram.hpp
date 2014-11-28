// GLE - Copyright (C) 2005, 2007, 2008, 2012, 2013, 2014, Nicolas Papier, Alexandre Di Pino.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier
// Author Alexandre Di Pino

#ifndef _GLO_GLSLPROGRAM_HPP
#define _GLO_GLSLPROGRAM_HPP

#include <vector>
#include <string>
#include "glo/IResource.hpp"



namespace glo
{

/**
 * @brief Program using GLSL
 *
 * Shader compilation, linking and validation.
 *
 * @todo method to enable/disable all outputs to cerr
 */
struct GLO_API GLSLProgram : public IResource
{
	/**
	 * @brief Enumeration of the different type of shader
	 */
	enum ShaderType
	{
		VERTEX = 0,
#ifndef __OPENGLES2__
		TESSELLATION_CONTROL,
		TESSELLATION_EVALUATION,
		GEOMETRY,
#endif
		FRAGMENT,

		PROGRAM,		///< not a real shader type (used by ShadersEditor of vgSDK)
		MAX_SHADER_INDEX
	};

	/**
	 * @name Constructor and destructor
	 */
	//@{

	/**
	 * @brief Default constructor
	 * 
	 * @param initialized	true to create a program object, false to don't do that.
	 */
	GLSLProgram( const bool initialized = true );

	/**
	 * @brief Destructor
	 */
	~GLSLProgram();

	/**
	 * @brief Releases OpenGL resource
	 */
	void release();
	//@}


	/**
	 * @brief Adds a new shader to the program
	 * 
	 * @todo doc
	 */
	const bool addShader( const std::string shaderSource, const ShaderType shaderType, const bool linkProgram = false );
	const bool addShader( const GLchar *shaderSource, const ShaderType shaderType, const bool linkProgram = false );

	/**
	 * @brief Links the program
	 *
	 * @pre assert( getProgramObject() != 0 && "Empty glsl program" );
	 */
	const bool link( const bool doValidation = true );

	/**
	 * @brief Validates the program
	 */
	const bool validate();



	/**
	 * @name Use methods
	 */
	//@{

	/**
	 * @brief Installs the program as part of current rendering state.
	 */
	void			use();

	/**
	 * @brief Tests if this program is in use.
	 *
	 * @return true if this program is in use, false if not.
	 */
	const bool		isInUse() const;

	/**
	 * @brief Disables the programmable processors and installs the fixed functionality paths in all programmable stages.
	 */
	static void		useFixedPaths();
	//@}


	/**
	 * @name Shader accessors
	 *
	 * @remark Useful for a shader editor
	 */
	//@{

	/**
	 * @brief Gets the shader name
	 *
	 * @param shaderType	the type of the needed shader
	 */
	const GLuint getName(const ShaderType shaderType) const;

	/**
	 * @brief Gets the shader code
	 *
	 * @param shaderType	the type of the needed shader code
	 */
	const std::string getShaderCode(const ShaderType shaderType) const;

	/**
	 * @brief Sets the shader code
	 *
	 * @param shaderType	the type of the needed shader
	 * @param code			the shader code
	 */
	void setShaderCode(const ShaderType shaderType, const std::string code);

	/**
	 * @brief Gets the log error
	 *
	 * @param shaderType	the type of the needed shader
	 */
	const std::string getLogError(const ShaderType shaderType) const;

	/**
	 * @brief Sets the shader log error
	 *
	 * @param shaderType	the type of the needed shader
	 * @param error			the shader code
	 */
	void setLogError(const ShaderType shaderType, const std::string error);

	/**
	 * @brief Converts the shader type into a descriptive string
	 * convertShaderType2String(VERTEX) returns "VERTEX"
	 */
	const std::string& convertShaderType2String( const GLSLProgram::ShaderType shaderType );
	//@}



	/**
	 * @name Program accessors
	 *
	 * @remark Useful for a shader editor
	 */
	//@{

	/**
	 * @brief Gets if the current link has success
	 */
	const bool getLinkSuccess() const;

	/**
	 * @brief Gets the link log 
	 */
	const std::string getLinkLog() const;

	//@}



	/**
	 * @name Generic vertex attribute accessor(s)
	 */
	//@{

	/**
	 * @brief Associate a generic vertex attribute index with a named attribute variable
	 */
	void bindAttribLocation( const std::string & name, const GLuint index );

	//@}



	/**
	 * @name Uniform Variables accessors
	 */
	//@{
	void setUniform1i( const std::string & name, const GLint v1 );
	void setUniform2i( const std::string & name, const GLint v1, const GLint v2 );
	void setUniform3i( const std::string & name, const GLint v1, const GLint v2, const GLint v3 );
	void setUniform4i( const std::string & name, const GLint v1, const GLint v2, const GLint v3, const GLint v4 );

	void setUniform1f( const std::string & name, const GLfloat v1 );
	void setUniform2f( const std::string & name, const GLfloat v1, const GLfloat v2 );
	void setUniform3f( const std::string & name, const GLfloat v1, const GLfloat v2, const GLfloat v3 );
	void setUniform4f( const std::string & name, const GLfloat v1, const GLfloat v2, const GLfloat v3, const GLfloat v4 );

// @todo *ui

	void setUniform1iv( const std::string & name, const GLint * value, const GLsizei count = 1 );
	void setUniform2iv( const std::string & name, const GLint * value, const GLsizei count = 1 );
	void setUniform3iv( const std::string & name, const GLint * value, const GLsizei count = 1 );
	void setUniform4iv( const std::string & name, const GLint * value, const GLsizei count = 1 );

	void setUniform1fv( const std::string & name, const GLfloat * value, const GLsizei count = 1 );
	void setUniform2fv( const std::string & name, const GLfloat * value, const GLsizei count = 1 );
	void setUniform3fv( const std::string & name, const GLfloat * value, const GLsizei count = 1 );
	void setUniform4fv( const std::string & name, const GLfloat * value, const GLsizei count = 1 );

// @todo *uiv

	void setUniformMatrix2fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix3fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix4fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );

	// Not available in ES2. An assertion violation occurred.
	void setUniformMatrix2x3fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	// Not available in ES2. An assertion violation occurred.
	void setUniformMatrix3x2fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	// Not available in ES2. An assertion violation occurred.
	void setUniformMatrix2x4fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	// Not available in ES2. An assertion violation occurred.
	void setUniformMatrix4x2fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	// Not available in ES2. An assertion violation occurred.
	void setUniformMatrix3x4fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	// Not available in ES2. An assertion violation occurred.
	void setUniformMatrix4x3fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );

	//@}



	/**
	 * @name Queries
	 */
	//@{

	struct UniformInformations
	{
		UniformInformations( const int nameMaxLength = 512 ) :
			type( 0 ),
			name( nameMaxLength, 0 ),
			size( 0)
		{}

		GLenum					type;
		std::string				name;
		GLint					size;
		// @todo value ?
	};

	const std::string getActiveUniformsStr() const;
	const std::vector< UniformInformations > getActiveUniforms() const;

	const std::string toString( const GLenum type ) const;
	const std::string toString( const std::vector< UniformInformations >& uniforms ) const;

	//@}



	/**
	 * @brief Helper to load a file in a string
	 */
	static const std::string loadFile( const std::string pathfilename );

	/**
	 * @brief Low-level accessor
	 * @todo remove me ?
	 */
	const GLuint getProgramObject() const;


protected:
	/**
	 * @brief Returns the uniform location of the uniform variable
	 * 
	 * @param name	name of the uniform whose location to be queried
	 *
	 * @return The value of -1 will be returned if name does not correspond to an active uniform or if name starts with the reserved prefix "gl_"
	 */
	const GLint getUniformLocation( const std::string & name ) const;



private:
	const std::string getShaderInfoLog( GLuint object );
	const std::string getProgramInfoLog( GLuint object );

	// SHADER INFORMATIONS
	struct ShaderInformations
	{
		ShaderInformations()
		:	// shaderCode
			shaderSaved(0)
			// shaderLog
		{}

		std::string	shaderCode;
		GLuint		shaderSaved;
		std::string	shaderLog;
	};

	std::vector<ShaderInformations> m_shaderInfo;

	// PROGRAM
	GLuint		m_programObject;
	std::string	m_linkLog;
	bool		m_linkSuccess;
};



} // namespace glo

#endif //#ifndef _GLO_GLSLPROGRAM_HPP
