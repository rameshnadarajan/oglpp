// GLE - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURECUBEMAP_HPP
#define _GLO_TEXTURECUBEMAP_HPP

#include "glo/Texture2D.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a cube map texture object.
 *
 * This texture is a set of six 2D images representing the faces of a cube.
 */
struct GLO_API TextureCubeMap : public Texture2D
{
	/**
	 * @name Constructor/Destructor
	 */
	//@
	
	/**
	 * @brief Constructor
	 */
	TextureCubeMap();
	
	//@}



	// Overridden	
	const bool isBound() const;

	// Overridden
	void texImage(	const GLint level, const GLint internalFormat,
					const GLsizei width, const GLsizei height, const GLsizei depth,
					const GLint border,
					const GLenum format, const GLenum type,
					const GLvoid *pixels = 0 ) const;

	void texImage(	const GLuint targetIndex,
					const GLint level, const GLint internalFormat,
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

	void texSubImage(	const GLuint targetIndex,
						const GLint level,
						const GLint xoffset, const GLint yoffset, const GLint zoffset,
						const GLsizei width, const GLsizei height, const GLsizei depth,
						const GLenum format, const GLenum type,
						const GLvoid *pixels = 0 ) const;

	/**
	 * @brief Gets cube map targets
	 *
	 * @pre 0<= target < 5
	 *
	 * @param target	index of the desired OpenGL target
	 *
	 * A cube map texture has six targets, one for each of its six 2D texture image cube faces.
	 * Cube map target are ordered (i.e. TEXTURE_CUBE_MAP_POSITIVE_X, TEXTURE_CUBE_MAP_NEGATIVE_X,
	 * TEXTURE_CUBE_MAP_POSITIVE_Y, TEXTURE_CUBE_MAP_NEGATIVE_Y, 
	 * TEXTURE_CUBE_MAP_POSITIVE_Z and TEXTURE_CUBE_MAP_NEGATIVE_Z ).
	 */
	const GLenum getTarget( const int target ) const;

private:
	/**
	 * @brief Array storing the ordered cube map OpenGL target.
	 */
	static GLenum	m_cubeMapTarget[];
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURECUBEMAP_HPP
