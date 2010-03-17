// GLE - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/TextureCubeMap.hpp"



namespace glo
{



TextureCubeMap::TextureCubeMap()
{
	m_target = getTarget(0);
}



const bool TextureCubeMap::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( GL_TEXTURE_BINDING_CUBE_MAP, &currentBinding );

	return ( currentBinding == m_object );
}



void TextureCubeMap::texImage(	const GLint level, const GLint internalFormat,
								const GLsizei width, const GLsizei height, const GLsizei depth,
								const GLint border,
								const GLenum format, const GLenum type,
								const GLvoid *pixels ) const
{
	texImage( 0, level, internalFormat, width, height, border, format, type, pixels );
}



void TextureCubeMap::texImage(	const GLuint targetIndex, 
								const GLint level, const GLint internalFormat,
								const GLsizei width, const GLsizei height, const GLsizei /*depth*/,
								const GLint border,
								const GLenum format, const GLenum type,
								const GLvoid *pixels ) const
{
	glTexImage2D( getTarget(targetIndex), level, internalFormat, width, height, border, format, type, pixels );
	
	// Updates cache
	if ( targetIndex == 0 )
	{
		m_border	= border;
		m_width		= width;
		m_height	= height;
	}
}



void TextureCubeMap::texSubImage(	const GLint level,
									const GLint xoffset, const GLint yoffset, const GLint zoffset,
									const GLsizei width, const GLsizei height, const GLsizei depth,
									const GLenum format, const GLenum type,
									const GLvoid *pixels ) const
{
	texSubImage( 0, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}



void TextureCubeMap::texSubImage(	const GLuint targetIndex,
									const GLint level,
									const GLint xoffset, const GLint yoffset, const GLint /*zoffset*/,
									const GLsizei width, const GLsizei height, const GLsizei /*depth*/,
									const GLenum format, const GLenum type,
									const GLvoid *pixels ) const
{
	glTexSubImage2D( getTarget(targetIndex), level, xoffset, yoffset, width, height, format, type, pixels );
}



const GLenum TextureCubeMap::getTarget( const int target ) const
{
	assert( target >= 0 && "Wrong target index." );
	assert( target <= 5 && "Wrong target index." );

	return m_cubeMapTarget[target];
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
