// OGLPP - Copyright (C) 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_FRONTEND_HPP
#define _GLO_FRONTEND_HPP

#include "glo/glo.hpp"
#include <string>



namespace glo
{

/**
 * @name State requests
 */
//@{
enum ImplementationQuery : int
{
	Vendor,
	Rendered,
	Version,
	ShadingLanguageVersion,
	Extensions
};

GLO_API const std::string getString( const ImplementationQuery& query );

/**
 * @brief Returns the major version of OpenGL
 */
GLO_API const int getGLMajorVersion();

/**
 * @brief Returns the minor version of OpenGL
 */
GLO_API const int getGLMinorVersion();

/**
 * @brief Returns a the version of OpenGL
 * @return the version number of OpenGL using the following form major.minor
 */
GLO_API const float getGLVersion();

/**
 * @brief Returns the major version of OpenGL GLSL
 */
GLO_API const int getGLSLMajorVersion();

/**
 * @brief Returns the minor version of OpenGL GLSL
 */
GLO_API const int getGLSLMinorVersion();

/**
 * @brief Returns a the version of OpenGL GLSL
 * @return the version number of OpenGL GLSL using the following form major.minor
 */
GLO_API const float getGLSLVersion();

/**
 * @brief Tests if the OpenGL error flag is set
 *
 * @param strError		a string containing the error description if isGLError() returns true, otherwise it remains unchanged.
 * @return false if no error has been recorded, otherwise true.
 */
GLO_API const bool getGLError( std::string& strError );

/**
 * @brief Reports OpenGL error or do nothing.
 *
 * If an OpenGL error has been recorded, the error is printed to standard error stream with the stack of the call to reportGLErrors(),
 * otherwise do nothing.
 */
GLO_API void reportGLErrors();
//@}



/**
 * @name Per-Fragment Operations - Scissor test
 */
//@{
//@}

/**
 * @name Per-Fragment Operations - Depth buffer test
 */
//@{
//@}

/**
 * @name Per-Fragment Operations - Blending
 */
//@{
struct GLO_API Blending
{
	static void enable( const bool enabled = true );
};
// @see Transparent pass
//	glEnable( GL_BLEND );
//	glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );
//@}

/**
 * @name Viewport and Clipping
 */
//@{
/* struct GLO_API Viewport
{
	static 
	glViewport(	viewportValue.x(), viewportValue.y(),
				viewportValue.width(), viewportValue.height() );
};*/
//@}

/**
 * @name Whole Framebuffer Operations
 */
//@{

enum FrameBufferMask : int
{
	Color		= 1<<0,
	Depth		= 1<<1,
	Stencil		= 1<<2
};

// @todo void clearColor( buf );
// @todo void clear( mask );

//@}

/**
 * @name Rasterization
 */
//@{
//frontface
//cullface
//@}
}


#endif //#ifndef _GLO_FRONTEND_HPP
