// GLE - Copyright (C) 2004, 2007, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "gle/Wrapper.hpp"


namespace gle
{
	namespace
	{
		static gle::OpenGLExtensionsGen *m_current = 0;
	}
}



void gleSetCurrent( gle::OpenGLExtensionsGen *current )
{
	gle::m_current = current;
}



gle::OpenGLExtensionsGen *gleGetCurrent()
{
	return gle::m_current;
}
