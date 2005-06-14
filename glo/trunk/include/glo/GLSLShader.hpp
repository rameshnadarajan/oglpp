// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_GLSLSHADER_H
#define _GLO_GLSLSHADER_H

#include <string>
#include "glo/IResource.hpp"



namespace glo
{

/**
 * @todo add link().
 */
struct GLO_API GLSLShader : public IResource
{
	/**
	 * @brief Enumeration of the different type of shader.
	 */
	enum ShaderType {
		VERTEX	= GL_VERTEX_SHADER_ARB,
		FRAGMENT	= GL_FRAGMENT_SHADER_ARB
	};


	/**
	 * @name Constructor.
	 */
	//@{

	/**
	 * @brief Default constructor.
	 * 
	 * @param initialized	true to create a program object, false to don't do that.
	 */
	GLSLShader( bool initialized = true );
	
	/**
	 * @brief Destructor.
	 */
	~GLSLShader();
	//@}


	bool	addShader(	const GLcharARB *shaderSource, 
							ShaderType shaderType, bool linkProgram );


	/**
	 * @name Use methods.
	 */
	//@{

	void				use();

	/**
	 * @brief Use the fixed functionality paths as if the GL had no programmable stages.
	 */
	static void		useFixedPaths();
	//@}


	/**
	 * @name Uniform Variables
	 */
	//@{
	void setUniform1i( std::string name, GLint value );
	//@}


	/**
	 * @brief Load a file in a string.
	 */
	static std::string	loadFile( std::string pathfilename );

	// FIXME move to protected.
	GLhandleARB		getProgramObject() const;


protected:
	/**
	 * @brief
	 * 
	 * @return The value of -1 will be returned if name does not correspond to an active uniform
	 * 
	 * @remarks or if name starts with the reserved prefix "gl_"
	 */
	GLint 			getUniformLocation( std::string name );


	void				printInfoLog( GLhandleARB object );

	GLhandleARB		m_programObject;
	
	static bool		m_firstInstance;
};



} // namespace glo

#endif //#ifndef _GLO_GLSLSHADER_H
