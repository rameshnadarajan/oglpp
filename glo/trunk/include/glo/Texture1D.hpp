// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE1D_H
#define _GLO_TEXTURE1D_H

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
	
	/**
	 * @brief Returns the size of the texture.
	 * 
	 * Returns the width of the texture image. This value does'nt includes the border of the texture image.
	 */
	const int32	getSize() const;
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE1D_H
