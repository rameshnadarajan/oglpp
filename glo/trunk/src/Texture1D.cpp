// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture1D.hpp"



namespace glo
{



Texture1D::Texture1D()
{
	m_target = GL_TEXTURE_1D;
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
