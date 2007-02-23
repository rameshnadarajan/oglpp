// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture3D.hpp"



namespace glo
{



Texture3D::Texture3D() 
: 	Texture(GL_TEXTURE_3D)
{}



void Texture3D::getSize( int32& width, int32& height, int32& depth ) const
{
	GLint glwidth;
	GLint glheight;
	GLint gldepth;
	GLint glborder;
	
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_WIDTH,	&glwidth	);
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_HEIGHT,	&glheight	);
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_DEPTH,	&gldepth	);	
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_BORDER,	&glborder	);
	
	width	= glwidth	- glborder;
	height	= glheight	- glborder;
	depth	= gldepth	- glborder;
}



void Texture3D::texImage(	GLint level, GLint internalFormat,
							GLsizei width, GLsizei height, GLsizei depth,
							GLint border,
							GLenum format, GLenum type,
							const GLvoid *pixels ) const
{
	glTexImage3D( m_target, level, internalFormat, width, height, depth, border, format, type, pixels );
}



} // namespace glo
