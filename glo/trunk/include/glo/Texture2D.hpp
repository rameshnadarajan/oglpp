// GLE - Copyright (C) 2005, 2010, 2013, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE2D_HPP
#define _GLO_TEXTURE2D_HPP

#include "glo/IFrameBufferAttachableImage.hpp"
#include "glo/Texture1D.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a 2D texture object.
 */
struct Texture2D : public Texture1D, public IFrameBufferAttachableImage
{
	/**
	 * @name Constructor/Destructor
	 */
	//@
	
	/**
	 * @brief Default constructor
	 */
	GLO_API Texture2D();

	//@}


	/**
	 * @brief Binds to the default texture object
	 */
	GLO_API static void staticBindToDefault();


	/**
	 * @name Accessors
	 */
	//@{

	GLO_API const bool isBound() const;

	/**
	 * @brief Returns the height of the texture.
	 *
	 * @return the height of the texture
	 */
	GLO_API const GLint getHeight() const;

	// Overridden
	GLO_API const GLint getSize( int32& width, int32& height, int32& depth ) const;
	//@}



	// Overridden
	GLO_API void texImage(	const GLint level, const GLint internalFormat,
							const GLsizei width, const GLsizei height, const GLsizei depth,
							const GLint border,
							const GLenum format, const GLenum type,
							const GLvoid *pixels = 0 ) const;

	// Overridden
	GLO_API void texSubImage(	const GLint level,
								const GLint xoffset, const GLint yoffset, const GLint zoffset,
								const GLsizei width, const GLsizei height, const GLsizei depth,
								const GLenum format, const GLenum type,
								const GLvoid *pixels = 0 ) const;

protected:

	// Overridden
	GLO_API void attach( FrameBufferObject * fbo, const GLenum attachment );
	// Overridden
	GLO_API void detach( FrameBufferObject * fbo, const GLenum attachment );

	/**
	 * @name Cache for OpenGL accessors
	 */
	//@{
	mutable GLint m_height;
	//@}
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE2D_HPP
