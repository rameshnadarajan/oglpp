// OGLPP - Copyright (C) 2011, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include <iostream>



namespace glo
{



template< GLenum TargetValue >
BufferObject< TargetValue >::BufferObject()
{}



template< GLenum TargetValue >
BufferObject< TargetValue >::~BufferObject()
{
	if ( gleGetCurrent() )
	{
		release();
	}
	else
	{
		std::cerr << "Unable to release buffer object " << m_object << "." << std::endl;
	}
}



template< GLenum TargetValue >
void BufferObject< TargetValue >::generate()
{
	assert( isEmpty() );

	glGenBuffers( 1, &m_object );

	assert( !isEmpty() );
}



template< GLenum TargetValue > 
void BufferObject< TargetValue >::release()
{
	if ( !isEmpty() )
	{
		glDeleteBuffers( 1, &m_object );

		m_object = 0;
	}
}



template< GLenum TargetValue >
void BufferObject< TargetValue >::bind() const
{
	assert( !isEmpty() );

	glBindBuffer( TargetValue, m_object );
}



template< GLenum TargetValue >
void BufferObject< TargetValue >::unbind() const
{
	assert( !isEmpty() );
	assert( isBound() );

	glBindBuffer( TargetValue, 0 );
}



template< GLenum TargetValue >
const bool BufferObject< TargetValue >::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( TargetValue, &currentBinding );

	return ( static_cast<GLuint>(currentBinding) == m_object );
}



template< GLenum TargetValue >
void BufferObject< TargetValue >::bufferData( GLsizeiptr size, const GLvoid * data, GLenum usage )
{
	glBufferData( TargetValue, size, data, usage );
}



template< GLenum TargetValue >
void BufferObject< TargetValue >::bufferSubData( GLintptr offset, GLsizeiptr size, const GLvoid * data )
{
	glBufferSubData( TargetValue, offset, size, data );
}


} // namespace glo
