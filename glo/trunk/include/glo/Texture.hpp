// GLE - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE_HPP
#define _GLO_TEXTURE_HPP

#include "glo/Object.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a texture object
 * 
 * @todo uses isBound() (assert at the beginning of mehtod).
 * @todo adds cache of opengl accessors used in getSize()
 * 
 * @todo Improve documentation, error handling.
 */
struct Texture : public Object
{
	/**
	 * @name Constructor and destructor
	 */
	//@{

protected:
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
	GLO_API virtual ~Texture();
	//@}



	/**
	 * @name Actions
	 */
	//@{

	GLO_API void generate();

	GLO_API void release();

	GLO_API void bind() const;

	GLO_API void unbind() const;
	//@}



	/**
	 * @name Texture unit accessor
	 */
	//@{

	/**
	 * @brief Activates the desired texture unit.
	 *
	 * @param unit		texture unit selector. Its value ranges from GL_TEXTURE0_ARB to GL_TEXTURE31_ARB
	 */
	GLO_API static void active( const GLenum unit );

	//@}



	/**
	 * @todo Equivalent to glCopyTexImage (1D or 2D)
	 * @remarks not in 3D
	 */
	/*virtual void copyTexImage(	const GLint level, const GLenum internalFormat,
							const GLint x, const GLint y, const GLint z,
							const GLsizei width, const GLsizei height, const GLsizei depth,
							const GLint border ) const = 0;*/

	/**
	 * @todo Equivalent to glCopyTexSubImage (1D or 2D or 3D)
	 */
	/*virtual void copyTexSubImage(	const GLint level,
							const GLint xoffset, const GLint yoffset, const GLint zoffset,
							const GLsizei width, const GLsizei height, const GLsizei depth,
							const GLenum format, const GLenum type,
							const GLvoid *pixels = 0 ) const = 0;*/


	/**
	 * @name Texture image specification
	 */
	//@{

	/**
	 * @brief Equivalent to glTexImage (1D or 2D or 3D)
	 */
	GLO_API virtual void texImage(	const GLint level, const GLint internalFormat,
									const GLsizei width, const GLsizei height, const GLsizei depth,
									const GLint border,
									const GLenum format, const GLenum type,
									const GLvoid *pixels = 0 ) const = 0;

	/**
	 * @brief Equivalent to glTexSubImage (1D or 2D or 3D)
	 */
	GLO_API virtual void texSubImage(	const GLint level,
										const GLint xoffset, const GLint yoffset, const GLint zoffset,
										const GLsizei width, const GLsizei height, const GLsizei depth,
										const GLenum format, const GLenum type,
										const GLvoid *pixels = 0 ) const = 0;

	//@}



	/**
	 * @name Texture parameters
	 */
	//@{

	GLO_API void parameter( const GLenum pname, const GLint i );

	GLO_API void parameter( const GLenum pname, const GLfloat f );

	GLO_API void parameter( const GLenum pname, GLint * ip );

	GLO_API void parameter( const GLenum pname, GLfloat * fp );

	//@}



	/**
	 * @name Mipmap generation
	 */
	//@{

	/**
	 * @brief Enables or disables the automatic mipmap generation depending on the value of the parameter isEnabled.
	 *
	 * @param isEnabled		true when the mipmap generation must be enabled, false otherwise
	 *
	 * When enabled, this method introduces a side effect to any modification of the levelbase of a mipmap array, wherein all higher levels of
	 * the mipmap pyramid are recomputed automatically by successive filtering of the base level array.
	 */
	GLO_API void setAutomaticMipmapGenerationEnabled( const bool isEnabled = true );

	/**
	 * @brief Generates a complete set of mipmaps for a texture object.
	 */
	GLO_API void generateMipmap();
	//@}



	/**
	 * @name Texture environments and texture functions
	 */
	//@{
	GLO_API void env( const GLenum pname, const GLfloat f );

	GLO_API void env( const GLenum pname, const GLint i );

	GLO_API void env( const GLenum pname, GLfloat *f );

	GLO_API void env( const GLenum pname, GLint *i );
	//@}



	/**
	 * @name Texture application
	 */
	//@{

	/**
	 * @brief Enables or disables the texture application depending on the value of the parameter isEnabled.
	 *
	 * @param isEnabled		true when texture application must be enabled, false otherwise
	 */
	GLO_API void enable( const bool isEnabled );

	/**
	 * @brief Enables texture application
	 */
	GLO_API void enable();

	/**
	 * @brief Disables texture application
	 */	
	GLO_API void disable();
	//@}



	/**
	 * @name Texture queries
	 */
	//@{

	/**
	 * @brief Returns the width of the texture border.
	 *
	 * @return the width of the border
	 */
	GLO_API const GLint getBorderWidth() const;
	
	/**
	 * @brief Returns the width of the texture.
	 *
	 * @return the width of the texture
	 */
	GLO_API const GLint getWidth() const;

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
	GLO_API virtual const GLint getSize( int32& width, int32& height, int32& depth ) const = 0;

	/**
	 * @brief Returns the internal format of the texture.
	 *
	 * @return the internal format of the texture
	 */
	GLO_API virtual const GLint getInternalFormat() const;
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
	GLO_API const float*	getScaleFactors() const;
	GLO_API void			getScaleFactors( float& x, float& y, float& z) const;
	
	/**
	 * @brief Sets the scale factors.
	 * 
	 * @param x		new scale factor
	 * @param y		new scale factor
	 * @param z		new scale factor
	 */
	GLO_API void			setScaleFactors( const float x, const float y, const float z );
	//@}



protected:
	/**
	 * @brief Type of texture 1D, 2D, 3D...
	 */
	GLenum	m_target;

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

	mutable GLint m_internalFormat;
	//@}
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE_HPP
