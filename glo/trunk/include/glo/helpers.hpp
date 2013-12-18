// GLE - Copyright (C) 2013, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_HELPERS_HPP
#define _GLO_HELPERS_HPP

#include "glo/glo.hpp"

namespace glo
{


/**
 * @name OpenGL API usage
 *
 * DSA usage is DISABLED by default.
 */
//@{

/**
 * @brief Determines whether DSA api usage is enabled or not.
 *
 * @return true if the DSA api usage is enabled, false otherwise.
 */
GLO_API const bool isDSAEnabled();

/**
 * @brief Determines whether DSA api usage is enabled or not.
 *
 * @return false if the DSA api usage is enabled, true otherwise.
 */
GLO_API const bool isDSADisabled();

/**
 * @brief Enables or disables the DSA api usage depending on the value of the parameter isEnabled.
 *
 * @param isEnabled		true when the DSA api usage have to be enabled (if available), false otherwise
 * @return the DSA api usage state before calling this method
 */
GLO_API const bool setDSAEnabled( const bool enabled = true );

//@}



/**
 * @name Matrix manipulation commands
 */
//@{

GLO_API void loadIdentity( GLenum mode );
GLO_API void loadMatrixf( GLenum mode, const GLfloat * m );
GLO_API void multMatrixf( GLenum mode, const GLfloat * m );

GLO_API void pushMatrix( GLenum mode );
GLO_API void popMatrix( GLenum mode );

GLO_API void ortho( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );
GLO_API void frustum( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );

//@}

}


#endif //#ifndef _GLO_HELPERS_HPP
