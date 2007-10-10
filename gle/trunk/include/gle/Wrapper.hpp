// GLE - Copyright (C) 2004, 2007, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_WRAPPER_HPP
#define _GLE_WRAPPER_HPP

#include "gle/gle.hpp"



namespace gle { struct OpenGLExtensionsGen; }



/**
 * @brief Sets the current gle context
 * 
 * @param current	the gle context
 */
GLE_API void						gleSetCurrent( gle::OpenGLExtensionsGen *current );

/**
 * @brief Returns the current gle context
 * 
 * @return the gle context
 */
GLE_API gle::OpenGLExtensionsGen*	gleGetCurrent();



#endif //#ifndef _GLE_WRAPPER_HPP
