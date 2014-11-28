// OGLPP - Copyright (C) 2005, 2008, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifdef __OPENGLES2__
	#pragma message("glo::DisplayList: No display list in GLES 2")
#else

#include "glo/DisplayList.hpp"

#include <iostream>



namespace glo
{



DisplayList::DisplayList() 
:	m_index	( 0 ),
	m_count	( 0 ),
	m_current( 0 )
{
}



DisplayList::~DisplayList()
{
	if ( gleGetCurrent() )
	{
		release();
	}
	else
	{
		std::cerr << "Unable to release display list " << m_index << "." << std::endl;
	}
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
	//glNewList( m_index, GL_COMPILE_AND_EXECUTE );

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

	int ie = m_index + m_count;
	for(	int i = m_index;
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
		// @todo FIXME
		//assert( glIsList( m_index ) == GL_TRUE ); // I should test all others display lists, but it is not very useful.
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

#endif	// #ifdef __OPENGLES2__
