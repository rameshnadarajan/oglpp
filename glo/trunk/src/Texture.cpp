// GLE - Copyright (C) 2005, 2008, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture.hpp"

#include <iostream>



namespace glo
{



Texture::Texture()
:	//m_target	(	target 	),

	m_border( 0	),
	m_width	( 0 ),
	m_internalFormat( 1 )
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
		std::cerr << "Unable to release texture object " << m_object << "." << std::endl;
	}
}



void Texture::generate()
{
	assert( isEmpty() );

	glGenTextures( 1, &m_object );

	assert( !isEmpty() );
}



void Texture::release()
{
	if ( !isEmpty() )
	{
		glDeleteTextures( 1, &m_object );

		m_object = 0;
	}
}



void Texture::bind() const
{
	assert( !isEmpty() );

	glBindTexture( m_target, m_object );
}



void Texture::unbind() const
{
	assert( !isEmpty() );
	assert( isBound() );

	glBindTexture( m_target, 0 );
}



void Texture::active( const GLenum unit )
{
	assert( unit >= GL_TEXTURE0_ARB && "Unexpected value" );
	assert( unit <= GL_TEXTURE31_ARB && "Unexpected value" );
	glActiveTextureARB( unit );
}



void Texture::parameter( const GLenum pname, const GLint i )
{
	glTexParameteri( m_target, pname, i ); 
}



void Texture::parameter( const GLenum pname, const GLfloat f )
{
	glTexParameterf( m_target, pname, f );
}



void Texture::parameter( const GLenum pname, GLint * ip )
{
	glTexParameteriv( m_target, pname, ip );
}



void Texture::parameter( const GLenum pname, GLfloat * fp )
{
	glTexParameterfv( m_target, pname, fp );
}



void Texture::setAutomaticMipmapGenerationEnabled( const bool isEnabled )
{
	parameter( GL_GENERATE_MIPMAP, isEnabled );
}



void Texture::generateMipmap()
{
	glGenerateMipmap( m_target );
}



void Texture::env( const GLenum pname, const GLfloat f )
{
	glTexEnvf( GL_TEXTURE_ENV, pname, f );
}



void Texture::env( const GLenum pname, const GLint i )
{
	glTexEnvi( GL_TEXTURE_ENV, pname, i );
}



void Texture::env( const GLenum pname, GLfloat *f )
{
	glTexEnvfv( GL_TEXTURE_ENV, pname, f );
}



void Texture::env( const GLenum pname, GLint *i )
{
	glTexEnviv( GL_TEXTURE_ENV, pname, i );
}



void Texture::enable( const bool isEnabled )
{
	if ( isEnabled )
	{
		enable();
	}
	else
	{
		disable();
	}
}



void Texture::enable()
{
	glEnable( m_target ); 
}



void Texture::disable()
{
	glDisable( m_target );
}



const GLint Texture::getBorderWidth() const
{
	return m_border;
}



const GLint Texture::getWidth() const
{
	return m_width;
}



const GLint Texture::getInternalFormat() const
{
#ifdef _DEBUG
	assert( isBound() );
	GLint internalFormat;
	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_INTERNAL_FORMAT, &internalFormat );
	// Before specifying the image (using gl*TexImage*), the value 1 is returned by the query above.

	assert( internalFormat == m_internalFormat && "Texture internal format has an unexpected value." );
#endif

	return m_internalFormat;
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



} // namespace glo
