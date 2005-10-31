// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture2D.hpp"



namespace glo
{



Texture2D::Texture2D() : 
	Texture(GL_TEXTURE_2D)
{
}



void Texture2D::getSize( int32& width, int32& height, int32& depth ) const
{
	GLint glwidth;
	GLint glheight;
	GLint glborder;
	
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_WIDTH,	&glwidth );
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_HEIGHT,	&glheight);
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_BORDER,	&glborder);
	
	width	= glwidth	- glborder;
	height	= glheight	- glborder;
	depth	= 0;
}



} // namespace glo
