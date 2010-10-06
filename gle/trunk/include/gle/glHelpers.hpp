// GLE - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_GLHELPERS_HPP
#define _GLE_GLHELPERS_HPP

#include "gle/gle.hpp"



/**
 * @name OpenGL helpers
 */
//@{

/**
 * @brief Tests if an OpenGL rendering context is current for the calling thread
 *
 * @return true if an OpenGL rendering context is current for the calling thread, false otherwise.
 */
GLE_API const bool gleIsOpenGLCurrent();

//@}



#endif //#ifndef _GLE_GLHELPERS_HPP
