// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_IRESOURCE_H
#define _GLO_IRESOURCE_H

#include "glo/glo.hpp"



namespace glo
{

/**
 * @brief Abstract class for all GL object.
 */
struct GLO_API IResource
{
	/**
	 * @brief Virtual destructor.
	 */
	virtual ~IResource() {}
};



} // namespace glo

#endif //#ifndef _GLO_IRESOURCE_H
