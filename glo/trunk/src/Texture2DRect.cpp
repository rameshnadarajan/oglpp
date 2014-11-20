// GLE - Copyright (C) 2009, 2010, 2013, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture2DRect.hpp"


#ifdef __OPENGLES2__
	// No 2D rectangular Texture in GLES 2
	#pragma message("No 2D rectangular Texture in GLES 2")
#else

namespace glo
{



Texture2DRect::Texture2DRect()
{
	m_target = GL_TEXTURE_RECTANGLE_ARB;
}



void Texture2DRect::staticBindToDefault()
{
	glBindTexture( GL_TEXTURE_RECTANGLE_ARB, 0 );
}



const bool Texture2DRect::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( GL_TEXTURE_BINDING_RECTANGLE, &currentBinding );

	return ( static_cast<GLuint>(currentBinding) == m_object );
}



} // namespace glo

#endif // #ifdef __OPENGLES2__
