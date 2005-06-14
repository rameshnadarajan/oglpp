// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/DisplayList.hpp"



namespace glo
{



DisplayList::DisplayList() :
	m_index	( 0 ),
	m_count	( 0 ),
	m_current( 0 )
{
}



DisplayList::~DisplayList()
{
	release();
}



bool DisplayList::begin( GLsizei range )
{
	assert( isEmpty() );

	m_index = glGenLists( range );
	if ( m_index != 0 )
	{
		m_count = range;
	}
	else
	{
		return ( false );
	}

	assert( glIsList( m_index ) == GL_TRUE );	
	glNewList( m_index, GL_COMPILE );

	m_current = m_index;
	
	return ( true );
}



bool DisplayList::next()
{
	assert( m_current != 0 );

	// Finish current display list.
	assert( glIsList( m_current ) == GL_TRUE );
	glEndList();
	
	// Next display list or stop.

	++m_current;
	if ( m_current >= m_index + m_count )
	{
		// all display lists are compiled.
		m_current = 0;
		return ( false );
	}
	else
	{
		assert( m_current > m_index );
		
		assert( glIsList( m_current ) == GL_TRUE );
		glNewList( m_current, GL_COMPILE );
		
		return ( true );
	}
}



void DisplayList::call() const
{
	assert( m_current == 0 );

	assert( m_index != 0 );
	assert( m_count >= 1 );

	int32 ie = m_index + m_count;
	for(	int32 i = m_index;
			i < ie;
			i++)
	{
		glCallList( i );
	}
}



void DisplayList::release()
{
	if ( !isEmpty() )
	{
		assert( glIsList( m_index ) == GL_TRUE ); // I should test all others display lists, but it is not very useful.
		glDeleteLists( m_index, m_count );
		
		m_index	= 0;
		m_count	= 0;
	}
	// else nothing
}



bool DisplayList::isEmpty() const
{
	assert(	(m_index==0 && m_count==0) ||
				(m_index!=0 && m_count>=1) );

	return ( /* m_index==0 && not done to do a very little optimization */ m_count==0 );
}



} // namespace glo
