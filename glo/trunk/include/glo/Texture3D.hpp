// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE3D_H
#define _GLO_TEXTURE3D_H

#include "glo/Texture.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a texture 3D object.
 */
struct GLO_API Texture3D : public Texture
{
	/**
	 * @name Constructor/Destructor.
	 */
	//@
	
	/**
	 * @brief Constructor.
	 */
	Texture3D();
	
	//@}
};


	
} // namespace glo

#endif //#ifndef _GLO_TEXTURE3D_H
