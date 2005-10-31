// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURECUBEMAP_H
#define _GLO_TEXTURECUBEMAP_H

#include "glo/Texture.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a cube map texture object.
 */
struct GLO_API TextureCubeMap : public Texture
{
	/**
	 * @name Constructor/Destructor.
	 */
	//@
	
	/**
	 * @brief Constructor.
	 */
	TextureCubeMap();
	
	//@}
	
	// Overriden
	void getSize( int32& width, int32& height, int32& depth ) const;	
};


	
} // namespace glo

#endif //#ifndef _GLO_TEXTURECUBEMAP_H
