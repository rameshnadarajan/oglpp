// OGLPP - Copyright (C) 2011, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include <iostream>



namespace glo
{



template< GLenum TargetValue, GLenum BindingValue >
BufferObject< TargetValue, BindingValue >::BufferObject()
{}



template< GLenum TargetValue, GLenum BindingValue >
BufferObject< TargetValue, BindingValue >::~BufferObject()
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



template< GLenum TargetValue, GLenum BindingValue >
void BufferObject< TargetValue, BindingValue >::generate()
{
	assert( isEmpty() );

	glGenBuffers( 1, &m_object );

	assert( !isEmpty() );
}



template< GLenum TargetValue, GLenum BindingValue > 
void BufferObject< TargetValue, BindingValue >::release()
{
	if ( !isEmpty() )
	{
		glDeleteBuffers( 1, &m_object );

		m_object = 0;
	}
}



template< GLenum TargetValue, GLenum BindingValue >
void BufferObject< TargetValue, BindingValue >::bind() const
{
	assert( !isEmpty() );

	glBindBuffer( TargetValue, m_object );
}



template< GLenum TargetValue, GLenum BindingValue >
void BufferObject< TargetValue, BindingValue >::unbind() const
{
	assert( !isEmpty() );
	assert( isBound() );

	glBindBuffer( TargetValue, 0 );
}



template< GLenum TargetValue, GLenum BindingValue >
const bool BufferObject< TargetValue, BindingValue >::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( BindingValue, &currentBinding );

	return ( static_cast<GLuint>(currentBinding) == m_object );
}



template< GLenum TargetValue, GLenum BindingValue >
void BufferObject< TargetValue, BindingValue >::bufferData( GLsizeiptr size, const GLvoid * data, GLenum usage )
{
	glBufferData( TargetValue, size, data, usage );
}



template< GLenum TargetValue, GLenum BindingValue >
void BufferObject< TargetValue, BindingValue >::bufferSubData( GLintptr offset, GLsizeiptr size, const GLvoid * data )
{
	glBufferSubData( TargetValue, offset, size, data );
}


} // namespace glo