// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE_HPP
#define _GLO_TEXTURE_HPP

#include "glo/IResource.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a texture object.
 * 
 * @todo adds glTexImage*() like method.
 * @todo adds cache of opengl accessors used in getSize()
 * 
 * @todo Improve documentation, error handling.
 */
struct GLO_API Texture : public IResource
{
	/**
	 * @name Constructor/Destructor.
	 */
	//@{

	/**
	 * @brief Constructor.
	 * 
	 * @post getScaleFactors() == ( 1.f, 1.f, 1.f )
	 */
	Texture( GLenum target );

	/**
	 * @brief Destructor.
	 */
	virtual ~Texture();
	//@}



	/**
	 * @name Actions.
	 */
	//@{
	
	/**
	 * @brief Generates the texture name.
	 * 
	 * @pre isEmpty() must return true.
	 */
	void generate();

	/**
	 * @brief Deletes the texture name.
	 */
	void release();

	/**
	 * @brief Activates the desired texture unit.
	 */
	static void active( GLenum unit );
	
	/**
	 * @brief Binds the texture name to the appropriate texture target.
	 * 
	 * @pre !isEmpty()
	 */
	void bind();

	virtual void texImage(	GLint level, GLint internalFormat,
							GLsizei width, GLsizei height, GLsizei depth,
							GLint border,
							GLenum format, GLenum type,
							const GLvoid *pixels = 0 ) const = 0;
					
	void parameter( GLenum pname, GLint i );

	void parameter( GLenum pname, GLfloat f );

	void parameter( GLenum pname, GLint * ip );

	void parameter( GLenum pname, GLfloat * fp );
	
	void env( GLenum pname, GLfloat f );
	void env( GLenum pname, GLint i );

	void env( GLenum pname, GLfloat *f );
	void env( GLenum pname, GLint *i );


	void enable();

	void disable();
	//@}
	
	
	
	/**
	 * @name Accessors
	 */
	//@{
	
	/**
	 * @brief Returns if this class stored a texture.
	 */
	bool isEmpty() const;
	
	/**
	 * @brief Returns the size of the texture.
	 * 
	 * Returns the size of the texture image. This value does'nt includes the border of the texture image.
	 */
	virtual void getSize( int32& width, int32& height, int32& depth ) const = 0;
	
	//@}

	/**
	 * @name Scale factors
	 * 
	 * Scale factors is mainly used to adjust texCoord at runtime with texMatrix.
	 */
	//@{

	/**
	 * @brief Gets the scale factors.
	 * 
	 * @return the scale factors (3 values).
	 */
	const float*	getScaleFactors() const;
	void			getScaleFactors( float& x, float& y, float& z) const;
	
	/**
	 * @brief Sets the scale factors.
	 * 
	 * @param x		new scale factor
	 * @param y		new scale factor
	 * @param z		new scale factor
	 */
	void			setScaleFactors( const float x, const float y, const float z );
	//@}



protected:
	/**
	 * @brief Type of texture 1D, 2D, 3D...
	 */
	GLenum	m_target;

	/**
	 * @brief Name of the texture.
	 */	
	GLuint	m_texture;
	
	/**
	 * @brief Scale factors.
	 */
	float m_scaleFactors[3];
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE_HPP
