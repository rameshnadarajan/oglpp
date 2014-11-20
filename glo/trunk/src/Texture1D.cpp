// OGLPP - Copyright (C) 2005, 2010, 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture1D.hpp"

#ifdef __OPENGLES2__
	// No 1D Texture in GLES 2
	#pragma message("No 1D Texture in GLES 2")
#else

namespace glo
{



Texture1D::Texture1D()
{
	m_target = GL_TEXTURE_1D;
}



void Texture1D::staticBindToDefault()
{
	glBindTexture( GL_TEXTURE_1D, 0 );
}



const bool Texture1D::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( GL_TEXTURE_BINDING_1D, &currentBinding );

	return ( static_cast<GLuint>(currentBinding) == m_object );
}



const GLint Texture1D::getSize( int32& width, int32& height, int32& depth ) const
{
	const GLint glborder	= getBorderWidth();
	const GLint glwidth		= getWidth();

	width	= glwidth - glborder;
	height	= depth = 1;

	return glborder;
}



void Texture1D::texImage(	const GLint level, const GLint internalFormat,
							const GLsizei width, const GLsizei /*height*/, const GLsizei /*depth*/,
							const GLint border,
							const GLenum format, const GLenum type,
							const GLvoid *pixels ) const
{
	glTexImage1D( m_target, level, internalFormat, width, border, format, type, pixels );
	
	// Updates cache
	m_border	= border;
	m_width		= width;

	m_internalFormat = internalFormat;
}



void Texture1D::texSubImage(	const GLint level,
								const GLint xoffset, const GLint /*yoffset*/, const GLint /*zoffset*/,
								const GLsizei width, const GLsizei /*height*/, const GLsizei /*depth*/,
								const GLenum format, const GLenum type,
								const GLvoid *pixels ) const
{
	glTexSubImage1D( m_target, level, xoffset, width, format, type, pixels );
}



} // namespace glo

#endif	// #ifdef __OPENGLES2__
