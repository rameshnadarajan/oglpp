// GLE - Copyright (C) 2004, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "gle/Wrapper.hpp"



gle::OpenGLExtensionsGen *gle::Wrapper::m_current = 0;



void gleSetCurrent( gle::OpenGLExtensionsGen *current )
{
	gle::Wrapper::m_current = current;
}



gle::OpenGLExtensionsGen *gleGetCurrent()
{
	assert( gle::Wrapper::m_current != 0 );

	return ( gle::Wrapper::m_current );
}
