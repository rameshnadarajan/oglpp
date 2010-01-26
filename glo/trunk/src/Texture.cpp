// GLE - Copyright (C) 2005, 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture.hpp"

#include <iostream>



namespace glo
{



/*Texture::Texture( GLenum target )
:	m_target	(	target 	),
	m_texture	(	0		),

	m_border( 0	),	
	m_width	( 0 )
{
	m_scaleFactors[0] = m_scaleFactors[1] = m_scaleFactors[2] = 1.f;
}*/



Texture::Texture()
:	//m_target	(	target 	),
	m_texture	(	0		),

	m_border( 0	),
	m_width	( 0 )
{
	m_scaleFactors[0] = m_scaleFactors[1] = m_scaleFactors[2] = 1.f;
}



Texture::~Texture()
{
	if ( gleGetCurrent() )
	{
		release();
	}
	else
	{
		std::cerr << "Unable to release texture object " << m_texture << "." << std::endl;
	}
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
	glActiveTextureARB( unit );
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



const GLint Texture::getBorderWidth() const
{
#ifdef _DEBUG
	GLint glborder;
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_BORDER, &glborder);

	assert( glborder == m_border && "Texture border width has an unexpected value." );
#endif

	return m_border;
}



const GLint Texture::getWidth() const
{
#ifdef _DEBUG
	GLint glwidth;
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_WIDTH, &glwidth );
	
	assert( glwidth == m_width && "Texture width has an unexpected value." );
#endif
	
	return m_width;
}



const float* Texture::getScaleFactors() const
{
	return m_scaleFactors;
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



GLuint Texture::getName()
{
	return m_texture;
}



} // namespace glo
