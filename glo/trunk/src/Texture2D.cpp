// GLE - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Texture2D.hpp"

#include "glo/FrameBufferObject.hpp"
#include "glo/IFrameBufferAttachableImage.hpp"



namespace glo
{



Texture2D::Texture2D()
:	m_height( 0	)
{
	m_target = GL_TEXTURE_2D;
}



const bool Texture2D::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( GL_TEXTURE_BINDING_2D, &currentBinding );

	return ( currentBinding == m_object );
}



const GLint Texture2D::getHeight() const
{
#ifdef _DEBUG
	GLint glheight;

	glGetTexLevelParameteriv( m_target, 0, GL_TEXTURE_HEIGHT,	&glheight);
	
	assert( glheight == m_height && "Texture height has an unexpected value." );
#endif
	
	return m_height;
}



const GLint Texture2D::getSize( int32& width, int32& height, int32& depth ) const
{
	const GLint glborder	= getBorderWidth();
	const GLint glwidth		= getWidth();
	const GLint glheight	= getHeight();

	width	= glwidth - glborder;
	height	= glheight - glborder;
	depth = 1;

	return glborder;
}



void Texture2D::texImage(	const GLint level, const GLint internalFormat,
							const GLsizei width, const GLsizei height, const GLsizei /*depth*/,
							const GLint border,
							const GLenum format, const GLenum type,
							const GLvoid *pixels ) const
{
	glTexImage2D( m_target, level, internalFormat, width, height, border, format, type, pixels );
	
	// Updates cache
	m_border	= border;
	m_width		= width;
	m_height	= height;
}



void Texture2D::texSubImage(	const GLint level,
								const GLint xoffset, const GLint yoffset, const GLint /*zoffset*/,
								const GLsizei width, const GLsizei height, const GLsizei /*depth*/,
								const GLenum format, const GLenum type,
								const GLvoid *pixels ) const
{
	glTexSubImage2D( m_target, level, xoffset, yoffset, width, height, format, type, pixels );
}



void Texture2D::attach( FrameBufferObject * fbo, const GLenum attachment )
{
	assert( !isEmpty() && "Texture object is not initialized." );
	assert( fbo->isBound() && "Must bind FBO before calling attach()." );

	if ( isAttached( fbo ) == false )
	{
		// Attach texture to the frame buffer object
		glFramebufferTexture2D( GL_FRAMEBUFFER, attachment, GL_TEXTURE_2D, getName(), 0 );

		IFrameBufferAttachableImage::attach( fbo, attachment );
	}
	else
	{
		assert( false && "This texture 2D is already attached to the FBO." );
	}
}



void Texture2D::detach( FrameBufferObject * fbo, const GLenum attachment )
{
	assert( fbo->isBound() && "Must bind FBO before calling detach()." );

	if ( isAttached( fbo ) )
	{
		// Detach the texture from the frame buffer object
		glFramebufferTexture2D( GL_FRAMEBUFFER, attachment, GL_TEXTURE_2D, 0, 0 );

		IFrameBufferAttachableImage::detach( fbo, attachment );
	}
	else
	{
		assert( false && "This texture 2D is not attached to the FBO." );
	}
}



} // namespace glo
