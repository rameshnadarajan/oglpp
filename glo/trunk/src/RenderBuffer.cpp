// OGLPP - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/RenderBuffer.hpp"

#include <iostream>
#include "glo/FrameBufferObject.hpp"
#include "glo/IFrameBufferAttachableImage.hpp"



namespace glo
{



RenderBuffer::RenderBuffer()
{}



RenderBuffer::~RenderBuffer()
{
	if ( gleGetCurrent() )
	{
		release();
	}
	else
	{
		std::cerr << "Unable to release render buffer object " << m_object << "." << std::endl;
	}
}



void RenderBuffer::generate()
{
	assert( isEmpty() );
	
	glGenRenderbuffers(1, &m_object);

	assert( !isEmpty() );
}



void RenderBuffer::release()
{
	if ( !isEmpty() )
	{
		bind();

		glDeleteRenderbuffers(1, &m_object);

		m_object = 0;
	}

	assert( isEmpty() );
}



void RenderBuffer::bind() const
{
	assert( !isEmpty() );
	
	glBindRenderbuffer( GL_RENDERBUFFER, m_object );
}



const bool RenderBuffer::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( GL_RENDERBUFFER_BINDING, &currentBinding );

	return ( currentBinding == m_object );
}



void RenderBuffer::setStorage( const GLenum internalFormat, const int width, const int height )
{
	assert( isBound() && "Must call RenderBuffer:bind() before setStorage()" );

	glRenderbufferStorage( GL_RENDERBUFFER, internalFormat, width, height );
}



void RenderBuffer::setStorageMultiSample( const int samples, const GLenum internalFormat, const int width, const int height )
{
	assert( isBound() && "Must call RenderBuffer:bind() before setStorageMultisample()" );

	glRenderbufferStorageMultisample( GL_RENDERBUFFER, samples, internalFormat, width, height );
}



void RenderBuffer::attach( FrameBufferObject * fbo, const GLenum attachment )
{
	assert( !isEmpty() && "Render buffer object is not initialized." );
	assert( fbo->isBound() && "Must bind FBO before calling attach()." );

	if ( isAttached( fbo ) == false )
	{
		// Attach render buffer to the frame buffer object
		glFramebufferRenderbuffer( GL_FRAMEBUFFER, attachment, GL_RENDERBUFFER, getName() );

		IFrameBufferAttachableImage::attach( fbo, attachment );
	}
	else
	{
		assert( false && "This render buffer is already attached to the FBO." );
	}
}



void RenderBuffer::detach( FrameBufferObject * fbo, const GLenum attachment )
{
	assert( fbo->isBound() && "Must bind FBO before calling detach()." );

	if ( isAttached( fbo ) )
	{
		// Detach the render buffer from the frame buffer object
		glFramebufferRenderbuffer( GL_FRAMEBUFFER, attachment, GL_RENDERBUFFER, 0 );

		IFrameBufferAttachableImage::detach( fbo, attachment );
	}
	else
	{
		assert( false && "This render buffer is not attached to the FBO." );
	}
}



} // namespace glo
