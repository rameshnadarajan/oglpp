// GLE - Copyright (C) 2009, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture2DRect.hpp"



namespace glo
{



Texture2DRect::Texture2DRect()
{
	m_target = GL_TEXTURE_RECTANGLE_ARB;
}



const bool Texture2DRect::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( GL_TEXTURE_BINDING_RECTANGLE, &currentBinding );

	return ( static_cast<GLuint>(currentBinding) == m_object );
}



} // namespace glo
