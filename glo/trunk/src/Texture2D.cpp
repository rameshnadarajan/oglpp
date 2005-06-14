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



vgm::Vec2i Texture2D::getSize() const
{
	GLint width;
	GLint height;
	GLint border;	
	
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_WIDTH, &width );
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_HEIGHT, &height );
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_BORDER, &border );
	
	return ( vgm::Vec2i( width-border, height-border ) );
}



} // namespace glo
