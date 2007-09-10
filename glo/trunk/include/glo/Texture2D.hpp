// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE2D_HPP
#define _GLO_TEXTURE2D_HPP

#include "glo/Texture1D.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a texture 2D object.
 */
struct GLO_API Texture2D : public Texture1D
{
	/**
	 * @name Constructor/Destructor
	 */
	//@
	
	/**
	 * @brief Default constructor
	 */
	Texture2D();

	//@}



	/**
	 * @name Accessors
	 */
	//@{

	/**
	 * @brief Returns the height of the texture.
	 *
	 * @return the height of the texture
	 */
	const GLint getHeight() const;

	// Overridden
	const GLint getSize( int32& width, int32& height, int32& depth ) const;
	//@}



	// Overridden
	void texImage(	const GLint level, const GLint internalFormat,
					const GLsizei width, const GLsizei height, const GLsizei depth,
					const GLint border,
					const GLenum format, const GLenum type,
					const GLvoid *pixels = 0 ) const;

	// Overridden
	void texSubImage(	const GLint level,
						const GLint xoffset, const GLint yoffset, const GLint zoffset,
						const GLsizei width, const GLsizei height, const GLsizei depth,
						const GLenum format, const GLenum type,
						const GLvoid *pixels = 0 ) const;

protected:
	/**
	 * @name Cache for OpenGL accessors
	 */
	//@{
	mutable GLint m_height;
	//@}
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE2D_HPP
