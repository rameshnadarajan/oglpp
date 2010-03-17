// OGLPP - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/RenderBuffer.hpp"

#include <iostream>



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



} // namespace glo
