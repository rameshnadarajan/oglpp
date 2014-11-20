// OGLPP - Copyright (C) 2011, 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/VertexArrayObject.hpp"

#ifdef __OPENGLES2__
	// No VAO in GLES 2
	#pragma message("No VertexArrayObject in GLES 2")
#else

#include <iostream>



namespace glo
{



VertexArrayObject::VertexArrayObject()
{}



VertexArrayObject::~VertexArrayObject()
{
	if ( gleGetCurrent() )
	{
		release();
	}
	else
	{
		std::cerr << "Unable to release vertex array object " << m_object << "." << std::endl;
	}
}



void VertexArrayObject::generate()
{
	assert( isEmpty() );

	glGenVertexArrays(1, &m_object);

	assert( !isEmpty() );
}



void VertexArrayObject::release()
{
	if ( !isEmpty() )
	{
		bind();

		glDeleteVertexArrays(1, &m_object);

		m_object = 0;
	}

	assert( isEmpty() );
}



void VertexArrayObject::bind() const
{
	assert( !isEmpty() );

	glBindVertexArray( m_object );
}



void VertexArrayObject::unbind() const
{
	assert( !isEmpty() );
	assert( isBound() );

	glBindVertexArray( 0 );
}



void VertexArrayObject::bindToDefault() const
{
	glBindVertexArray( 0 );
}



void VertexArrayObject::staticBindToDefault()
{
	glBindVertexArray( 0 );
}



const bool VertexArrayObject::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( GL_VERTEX_ARRAY_BINDING, &currentBinding );

	return ( static_cast<GLuint>(currentBinding) == m_object );
}



} // namespace glo

#endif // #ifdef __OPENGLES2__
