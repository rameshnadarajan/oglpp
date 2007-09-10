// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture2D.hpp"



namespace glo
{



Texture2D::Texture2D()
:	m_height( 0	)
{
	m_target = GL_TEXTURE_2D;
}



const GLint Texture2D::getHeight() const
{
#ifdef _DEBUG
	GLint glheight;

	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_HEIGHT,	&glheight);
	
	assert( glheight == m_height && "Texture height has an unexpected value." );
#endif
	
	return m_height;
}



const GLint Texture2D::getSize( int32& width, int32& height, int32& depth ) const
{
	const GLint glborder	= getBorderWidth();
	const GLint glwidth		= getWidth();
	const GLint glheight	= getHeight();

	width	= glwidth - glborder;
	height	= glheight - glborder;
	depth = 1;

	return glborder;
}



void Texture2D::texImage(	const GLint level, const GLint internalFormat,
							const GLsizei width, const GLsizei height, const GLsizei /*depth*/,
							const GLint border,
							const GLenum format, const GLenum type,
							const GLvoid *pixels ) const
{
	glTexImage2D( m_target, level, internalFormat, width, height, border, format, type, pixels );
	
	// Updates cache
	m_border	= border;
	m_width		= width;
	m_height	= height;
}



void Texture2D::texSubImage(	const GLint level,
								const GLint xoffset, const GLint yoffset, const GLint /*zoffset*/,
								const GLsizei width, const GLsizei height, const GLsizei /*depth*/,
								const GLenum format, const GLenum type,
								const GLvoid *pixels ) const
{
	glTexSubImage2D( m_target, level, xoffset, yoffset, width, height, format, type, pixels );
}



} // namespace glo
