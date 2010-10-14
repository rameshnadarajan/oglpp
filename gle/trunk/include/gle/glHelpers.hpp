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



/**
 * @name Version of OpenGL
 */
//@{

/**
 * @brief Returns the major number of the version of OpenGL supported by the current context.
 *
 * @pre gleIsOpenGLCurrent()
 */
GLE_API const int gleGetOpenGLMajorVersion();

/**
 * @brief Returns the minor number of the version of OpenGL supported by the current context.
 *
 * @pre gleIsOpenGLCurrent()
 */
GLE_API const int gleGetOpenGLMinorVersion();

/**
 * @brief Returns the version number of OpenGL supported by the current context.
 *
 * @pre gleIsOpenGLCurrent()
 *
 * @return the version number of OpenGL using the following form major.minor
 */
GLE_API const float gleGetOpenGLVersion();



/**
 * @brief Returns the major number of the version of GLSL supported by the current context.
 *
 * @pre gleIsOpenGLCurrent()
 */
GLE_API const int gleGetGLSLMajorVersion();

/**
 * @brief Returns the minor number of the version of GLSL supported by the current context.
 *
 * @pre gleIsOpenGLCurrent()
 */
GLE_API const int gleGetGLSLMinorVersion();

/**
 * @brief Returns the version number of GLSL supported by the current context.
 *
 * @pre gleIsOpenGLCurrent()
 *
 * @return the version number of GLSL using the following form major.minor
 */
GLE_API const float gleGetGLSLVersion();
//@}



#endif //#ifndef _GLE_GLHELPERS_HPP
