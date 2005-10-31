// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture1D.hpp"



namespace glo
{



Texture1D::Texture1D() : 
	Texture(GL_TEXTURE_1D)
{
}



void Texture1D::getSize( int32& width, int32& height, int32& depth ) const
{
	GLint glwidth;
	GLint glborder;	
	
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_WIDTH,	&glwidth );
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_BORDER,	&glborder );
	
	width	= glwidth - glborder;
	height	= depth = 0;
}



} // namespace glo
