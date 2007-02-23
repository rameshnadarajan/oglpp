// GLE - Copyright (C) 2005, Nicolas Papier.
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
struct GLO_API Texture1D : public Texture
{
	/**
	 * @name Constructor/Destructor.
	 */
	//@
	
	/**
	 * @brief Constructor.
	 */
	Texture1D();
	
	//@}

	// Overridden
	void getSize( int32& width, int32& height, int32& depth ) const;
	
	// Overridden
	void texImage(	GLint level, GLint internalFormat,
					GLsizei width, GLsizei height, GLsizei depth,
					GLint border,
					GLenum format, GLenum type,
					const GLvoid *pixels = 0 ) const;
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE1D_HPP
