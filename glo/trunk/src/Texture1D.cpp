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



const int32 Texture1D::getSize() const
{
	GLint width;
	GLint border;	
	
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_WIDTH, &width );
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_BORDER, &border );
	
	return ( width-border );
}



} // namespace glo
