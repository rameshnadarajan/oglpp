// OGLPP - Copyright (C) 2011, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_ELEMENTARRAYBUFFER_HPP
#define _GLO_ELEMENTARRAYBUFFER_HPP

#include "glo/BufferObject.hpp"



namespace glo
{



// Explicit instantiation
template struct glo::BufferObject< GL_ELEMENT_ARRAY_BUFFER, GL_ELEMENT_ARRAY_BUFFER_BINDING >;

/**
 * @brief Buffer object for storing vertex array indices
 */
typedef struct glo::BufferObject< GL_ELEMENT_ARRAY_BUFFER, GL_ELEMENT_ARRAY_BUFFER_BINDING > ElementArrayBuffer;



} // namespace glo

#endif //#ifndef _GLO_ELEMENTARRAYBUFFER_HPP
