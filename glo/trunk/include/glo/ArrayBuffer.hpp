// OGLPP - Copyright (C) 2011, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_ARRAYBUFFER_HPP
#define _GLO_ARRAYBUFFER_HPP

#include "glo/BufferObject.hpp"



namespace glo
{



// Explicit instantiation
template struct glo::BufferObject< GL_ARRAY_BUFFER >;

/**
 * @brief Buffer object for storing vertex attributes
 */
typedef struct glo::BufferObject< GL_ARRAY_BUFFER > ArrayBuffer;



} // namespace glo

#endif //#ifndef _GLO_ARRAYBUFFER_HPP
