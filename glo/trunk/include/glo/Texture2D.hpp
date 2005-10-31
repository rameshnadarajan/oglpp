// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE2D_H
#define _GLO_TEXTURE2D_H

#include "glo/Texture.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a texture 2D object.
 */
struct GLO_API Texture2D : public Texture
{
	/**
	 * @name Constructor/Destructor.
	 */
	//@
	
	/**
	 * @brief Constructor.
	 */
	Texture2D();
	
	//@}
	
	// Overriden
	void getSize( int32& width, int32& height, int32& depth ) const;
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE2D_H
