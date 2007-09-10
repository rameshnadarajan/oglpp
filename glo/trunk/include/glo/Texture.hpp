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
 * @todo adds cache of opengl accessors used in getSize()
 * 
 * @todo Improve documentation, error handling.
 */
struct GLO_API Texture : public IResource
{
	/**
	 * @name Constructor and destructor
	 */
	//@{

protected:
	/**
	 * brief Constructor
	 * 
	 * post getScaleFactors() == ( 1.f, 1.f, 1.f )
	 */
	//Texture( GLenum target );

	/**
	 * @brief Constructor
	 * 
	 * @post getScaleFactors() == ( 1.f, 1.f, 1.f )
	 * @post m_target not initialized
	 */
	Texture();
public:

	/**
	 * @brief Destructor
	 */
	virtual ~Texture();
	//@}



	/**
	 * @name Actions
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

	/**
	 * @brief glTexImage (1D or 2D or 3D)
	 */
	virtual void texImage(	const GLint level, const GLint internalFormat,
							const GLsizei width, const GLsizei height, const GLsizei depth,
							const GLint border,
							const GLenum format, const GLenum type,
							const GLvoid *pixels = 0 ) const = 0;

	/**
	 * @brief glTexSubImage (1D or 2D or 3D)
	 */
	virtual void texSubImage(	const GLint level,
								const GLint xoffset, const GLint yoffset, const GLint zoffset,
								const GLsizei width, const GLsizei height, const GLsizei depth,
								const GLenum format, const GLenum type,
								const GLvoid *pixels = 0 ) const = 0;

	/**
	 * @todo glCopyTexImage (1D or 2D)
	 * @remarks not in 3D
	 */
	/*virtual void copyTexImage(	const GLint level, const GLenum internalFormat,
							const GLint x, const GLint y, const GLint z,
							const GLsizei width, const GLsizei height, const GLsizei depth,
							const GLint border ) const = 0;*/

	/**
	 * @todo glCopyTexSubImage (1D or 2D or 3D)
	 */
	/*virtual void copyTexSubImage(	const GLint level,
							const GLint xoffset, const GLint yoffset, const GLint zoffset,
							const GLsizei width, const GLsizei height, const GLsizei depth,
							const GLenum format, const GLenum type,
							const GLvoid *pixels = 0 ) const = 0;*/


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
	 * @brief Tests if this class stored a texture.
	 *
	 * @return true this class stored a texture, false if not.
	 */
	bool isEmpty() const;

	/**
	 * @brief Returns the width of the texture border.
	 *
	 * @return the width of the border
	 */
	const GLint getBorderWidth() const;
	
	/**
	 * @brief Returns the width of the texture.
	 *
	 * @return the width of the texture
	 */
	const GLint getWidth() const;

	/**
	 * @brief Returns the size of the texture and the width of the texture border.
	 * 
	 * @param width		returns width of the texture image
	 * @param height	returns height of the texture image
	 * @param depth		returns depth of the texture image
	 *
	 * @return the width of the border
	 *
	 * @remarks The size of the texture image does'nt includes the border of the texture image.
	 *
	 * @todo adds isBinded() and uses it
	 */
	virtual const GLint getSize( int32& width, int32& height, int32& depth ) const = 0;

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

	/**
	 * @name Cache for OpenGL accessors
	 */
	//@{
	mutable GLint m_border;
	mutable GLint m_width;
	//@}
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE_HPP
