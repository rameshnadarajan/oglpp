// GLE - Copyright (C) 2005, 2007, 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_GLSLPROGRAM_HPP
#define _GLO_GLSLPROGRAM_HPP

#include <string>
#include "glo/IResource.hpp"



namespace glo
{

/**
 * @todo add link().
 */
struct GLO_API GLSLProgram : public IResource
{
	/**
	 * @brief Enumeration of the different type of shader
	 */
	enum ShaderType
	{
		VERTEX = 0,
		FRAGMENT,
		GEOMETRY
	};

	static const GLenum convertShaderType2GLEnum( const ShaderType shaderType );

	static const std::string& convertShaderType2String( const ShaderType shaderType );

	/**
	 * @name Constructor and destructor
	 */
	//@{

	/**
	 * @brief Default constructor
	 * 
	 * @param initialized	true to create a program object, false to don't do that.
	 */
	GLSLProgram( bool initialized = true );

	/**
	 * @brief Destructor.
	 */
	~GLSLProgram();
	//@}


	const bool addShader( const GLcharARB *shaderSource, const ShaderType shaderType, const bool linkProgram );

	/**
	 * @pre assert( getProgramObject() != 0 && "Empty glsl program" );
	 */
	const bool link();
	// @todo Adds methods attachShader, compile, link()...



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
	 * @name Uniform Variables accessors
	 * 
	 * @todo getUniformfv, getUniformiv and getUniformuiv
	 * @todo static ?
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

	void setUniform1iv( const std::string & name, const GLint * value, const GLsizei count = 1 );
	void setUniform2iv( const std::string & name, const GLint * value, const GLsizei count = 1 );
	void setUniform3iv( const std::string & name, const GLint * value, const GLsizei count = 1 );
	void setUniform4iv( const std::string & name, const GLint * value, const GLsizei count = 1 );

	void setUniform1fv( const std::string & name, const GLfloat * value, const GLsizei count = 1 );
	void setUniform2fv( const std::string & name, const GLfloat * value, const GLsizei count = 1 );
	void setUniform3fv( const std::string & name, const GLfloat * value, const GLsizei count = 1 );
	void setUniform4fv( const std::string & name, const GLfloat * value, const GLsizei count = 1 );

	void setUniformMatrix2fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix3fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix4fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix2x3fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix3x2fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix2x4fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix4x2fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix3x4fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	void setUniformMatrix4x3fv( const std::string & name, const GLfloat * value, const GLboolean transpose = GL_FALSE, const GLsizei count = 1 );
	//@}



	/**
	 * @brief Load a file in a string.
	 */
	static const std::string loadFile( const std::string pathfilename );

	// @todo Fixme : must moved to protected section.
	GLhandleARB		getProgramObject() const;



protected:
	/**
	 * @brief Returns the uniform location of the uniform variable
	 * 
	 * @param name	name of the uniform whose location to be queried
	 *
	 * @return The value of -1 will be returned if name does not correspond to an active uniform or if name starts with the reserved prefix "gl_"
	 */
	const GLint getUniformLocation( const std::string & name );



public:
	const std::string getInfoLog( GLhandleARB object );
protected:
	void			printInfoLog( GLhandleARB object );

private:
	GLhandleARB		m_programObject;

	static GLenum		m_GLEnumShaderType[];
	static std::string	m_stringShaderType[];

	static bool		m_firstInstance;
};



} // namespace glo

#endif //#ifndef _GLO_GLSLPROGRAM_HPP
