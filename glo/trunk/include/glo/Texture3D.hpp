// OGLPP - Copyright (C) 2005, 2010, 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE3D_HPP
#define _GLO_TEXTURE3D_HPP

#ifdef __OPENGLES2__
	// No 3D Texture in GLES 2
#else

#include "glo/Texture2D.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a texture 3D object
 */
struct Texture3D : public Texture2D
{
	/**
	 * @name Constructor/Destructor
	 */
	//@

	/**
	 * @brief Constructor
	 */
	GLO_API Texture3D();

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
	 * @brief Returns the depth of the texture.
	 *
	 * @return the depth of the texture
	 */
	GLO_API const GLint getDepth() const;

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
	/**
	 * @name Cache for OpenGL accessors
	 */
	//@{
	mutable GLint m_depth;
	//@}
};



} // namespace glo

#endif //#ifdef __OPENGLES2__

#endif //#ifndef _GLO_TEXTURE3D_HPP
