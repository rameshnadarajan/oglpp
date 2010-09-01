// GLE - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture3D.hpp"



namespace glo
{



Texture3D::Texture3D()
:	m_depth(0)
{
	m_target = GL_TEXTURE_3D;
}



const bool Texture3D::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( GL_TEXTURE_BINDING_3D, &currentBinding );

	return ( static_cast<GLuint>(currentBinding) == m_object );
}



const GLint Texture3D::getDepth() const
{
	return m_depth;
}



const GLint Texture3D::getSize( int32& width, int32& height, int32& depth ) const
{
	const GLint glborder	= getBorderWidth();
	const GLint glwidth		= getWidth();
	const GLint glheight	= getHeight();
	const GLint gldepth		= getDepth();

	width	= glwidth - glborder;
	height	= glheight - glborder;
	depth	= gldepth - glborder;

	return glborder;
}



void Texture3D::texImage(	const GLint level, const GLint internalFormat,
							const GLsizei width, const GLsizei height, const GLsizei depth,
							const GLint border,
							const GLenum format, const GLenum type,
							const GLvoid *pixels ) const
{
	glTexImage3D( m_target, level, internalFormat, width, height, depth, border, format, type, pixels );
	//glTexImage3DEXT( m_target, level, internalFormat, width, height, depth, border, format, type, pixels );
	
	// Updates cache
	m_border	= border;
	m_width		= width;
	m_height	= height;
	m_depth		= depth;

	m_internalFormat = internalFormat;
}



void Texture3D::texSubImage(	const GLint level,
								const GLint xoffset, const GLint yoffset, const GLint zoffset,
								const GLsizei width, const GLsizei height, const GLsizei depth,
								const GLenum format, const GLenum type,
								const GLvoid *pixels ) const
{
	glTexSubImage3D( m_target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
	//glTexSubImage3DEXT( m_target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}



} // namespace glo

