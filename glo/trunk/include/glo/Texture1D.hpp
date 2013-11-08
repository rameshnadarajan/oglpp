// GLE - Copyright (C) 2005, 2010, 2013, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE1D_HPP
#define _GLO_TEXTURE1D_HPP

#include "glo/Texture.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a texture 1D object.
 */
struct Texture1D : public Texture
{
	/**
	 * @name Constructor/Destructor
	 */
	//@

	/**
	 * @brief Constructor
	 */
	GLO_API Texture1D();

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
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE1D_HPP
