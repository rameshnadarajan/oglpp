// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_IRESOURCE_HPP
#define _GLO_IRESOURCE_HPP

#include "glo/glo.hpp"



namespace glo
{

/**
 * @brief Abstract class for any OpenGL resources.
 */
struct IResource
{
	/**
	 * @brief Virtual destructor.
	 */
	GLO_API virtual ~IResource() {}
};



} // namespace glo

#endif //#ifndef _GLO_IRESOURCE_HPP
