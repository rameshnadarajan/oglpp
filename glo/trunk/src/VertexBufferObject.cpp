// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/VertexBufferObject.hpp"



namespace glo
{



VertexBufferObject::VertexBufferObject() :
	m_buffer( 0 ),
	m_count	( 0 )
{
}



VertexBufferObject::~VertexBufferObject()
{
	release();
}



bool VertexBufferObject::generate( GLsizei range )
{
	assert( isEmpty() );
	
	m_buffer = new GLuint[range];
	
	gleGetCurrent()->glGenBuffersARB( range, m_buffer );
	
	/*// FIXME Must be bind before testing !!*/assert( gleGetCurrent()->glIsBufferARB( m_buffer[0] ) == GL_TRUE );	// I should test all others vertex buffer object, 
																																			//but it is not very useful.	
	m_count = range;

	return ( true );
}



GLuint VertexBufferObject::get( uint32 index ) const
{
	assert( index < m_count );
	
	//assert( gleGetCurrent()->glIsBufferARB( m_buffer[index] ) == GL_TRUE ); //FIXME
	
	return ( m_buffer[index] );
}



void VertexBufferObject::release()
{
	if ( !isEmpty() )
	{
		// FIXME Must be bind before testing !! assert( gleGetCurrent()->glIsBufferARB( m_buffer[0] ) == GL_TRUE );	// I should test all others vertex buffer object, 
																																				//but it is not very useful.	
		gleGetCurrent()->glDeleteBuffersARB( m_count, m_buffer );
		
		delete[] m_buffer;
		
		m_buffer	= 0;
		m_count		= 0;
	}
	// else nothing	
}



bool VertexBufferObject::isEmpty() const
{
	assert(	(m_buffer==0 && m_count==0) ||
			(m_buffer!=0 && m_count >=1) );

	return ( /* m_index==0 && not done to do a very little optimization */ m_count==0 );
}



int32 VertexBufferObject::getNum() const
{
	assert(	(m_buffer==0 && m_count==0) ||
			(m_buffer!=0 && m_count >=1) );

	return ( m_count );
}



} // namespace glo
