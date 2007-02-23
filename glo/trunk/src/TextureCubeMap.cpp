// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/TextureCubeMap.hpp"



namespace glo
{



TextureCubeMap::TextureCubeMap() 
: 	Texture(GL_TEXTURE_CUBE_MAP_ARB)
{}



void TextureCubeMap::getSize( int32& width, int32& height, int32& depth ) const
{
	assert( false );
}



void TextureCubeMap::texImage(	GLint level, GLint internalFormat,
								GLsizei width, GLsizei height, GLsizei depth,
								GLint border,
								GLenum format, GLenum type,
								const GLvoid *pixels ) const
{
	texImage( 0, level, internalFormat, width, height, border, format, type, pixels );
}



void TextureCubeMap::texImage(	GLuint targetIndex, 
								GLint level, GLint internalFormat,
								GLsizei width, GLsizei height, GLsizei depth,
								GLint border,
								GLenum format, GLenum type,
								const GLvoid *pixels ) const
{
	glTexImage2D( m_cubeMapTarget[targetIndex], level, internalFormat, width, height, border, format, type, pixels );
}



GLenum TextureCubeMap::m_cubeMapTarget[] = {
	GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB,
	GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB,
	GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB,
	GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB,
	GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB,
	GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB
};



} // namespace glo
