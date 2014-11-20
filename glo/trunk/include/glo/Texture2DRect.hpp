// OGLPP - Copyright (C) 2009, 2010, 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_TEXTURE2DRECT_HPP
#define _GLO_TEXTURE2DRECT_HPP

#ifdef __OPENGLES2__
	// No 2D rectangular Texture in GLES 2
#else

#include "glo/Texture2D.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a 2D rectangular texture object
 *
 * @todo Adds isSupported() to test support of GL_ARB_texture_rectangle
 */
struct Texture2DRect : public Texture2D
{
	/**
	 * @name Constructor/Destructor
	 */
	//@

	/**
	 * @brief Default constructor
	 */
	GLO_API Texture2DRect();

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
	//@}
};



} // namespace glo

#endif // #ifdef __OPENGLES2__

#endif // #ifndef _GLO_TEXTURE2DRECT_HPP
