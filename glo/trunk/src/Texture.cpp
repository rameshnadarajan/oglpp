// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture.hpp"



namespace glo
{



Texture::Texture( GLenum target ) :
	m_target	(	target 	),
	m_texture	(	0		)
{
	m_scaleFactors[0] = m_scaleFactors[1] = m_scaleFactors[2] = 1.f;
}



Texture::~Texture()
{
	release();
}



void Texture::generate()
{
	assert( isEmpty() );

	glGenTextures( 1, &m_texture );
	assert( m_texture != 0 );
}



void Texture::release()
{
	if ( !isEmpty() )
	{
		glDeleteTextures( 1, &m_texture );
		
		m_texture = 0;
	}
}



void Texture::active( GLenum unit )
{
	gleGetCurrent()->glActiveTextureARB( unit );
}



void Texture::bind()
{
	assert( !isEmpty() );
	
	glBindTexture( m_target, m_texture);
}



void Texture::parameter( GLenum pname, GLint i )
{
	glTexParameteri( m_target, pname, i ); 
}



void Texture::parameter( GLenum pname, GLfloat f )
{
	glTexParameterf( m_target, pname, f );
}



void Texture::parameter( GLenum pname, GLint * ip )
{
	glTexParameteriv( m_target, pname, ip );
}



void Texture::parameter( GLenum pname, GLfloat * fp )
{
	glTexParameterfv( m_target, pname, fp );
}



void Texture::env( GLenum pname, GLfloat f )
{
	glTexEnvf( GL_TEXTURE_ENV, pname, f );
}



void Texture::env( GLenum pname, GLint i )
{
	glTexEnvi( GL_TEXTURE_ENV, pname, i );
}



void Texture::env( GLenum pname, GLfloat *f )
{
	glTexEnvfv( GL_TEXTURE_ENV, pname, f );
}



void Texture::env( GLenum pname, GLint *i )
{
	glTexEnviv( GL_TEXTURE_ENV, pname, i );
}



void Texture::enable()
{
	glEnable( m_target ); 
}



void Texture::disable()
{
	glDisable( m_target );
}



bool Texture::isEmpty() const
{
	return ( m_texture == 0 );
}



const float* Texture::getScaleFactors() const
{
	return ( m_scaleFactors );
}



void Texture::getScaleFactors( float& x, float& y, float& z) const
{
	x = m_scaleFactors[0];
	y = m_scaleFactors[1];
	z = m_scaleFactors[2];
}



void Texture::setScaleFactors( const float x, const float y, const float z )
{
	m_scaleFactors[0] = x;
	m_scaleFactors[1] = y;
	m_scaleFactors[2] = z;
}



} // namespace glo
