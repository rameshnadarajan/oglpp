// GLE - Copyright (C) 2009, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE2DRECT_HPP
#define _GLO_TEXTURE2DRECT_HPP

#include "glo/Texture2D.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a 2D rectangular texture object.
 *
 * @todo Adds isSupported() to test support of GL_ARB_texture_rectangle
 */
struct GLO_API Texture2DRect : public Texture2D
{
	/**
	 * @name Constructor/Destructor
	 */
	//@

	/**
	 * @brief Default constructor
	 */
	Texture2DRect();

	//@}
};



} // namespace glo

#endif //#ifndef _GLO_TEXTURE2DRECT_HPP
