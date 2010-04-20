// GLE - Copyright (C) 2004, 2007, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "gle/Wrapper.hpp"



namespace
{
	static gle::OpenGLExtensionsGen * m_current = 0;

	struct Cleaner
	{
		Cleaner()
		{}

		~Cleaner()
		{
			m_current = 0;
		}
	};

	static Cleaner cleaner;
}



void gleSetCurrent( gle::OpenGLExtensionsGen *current )
{
	m_current = current;
}



gle::OpenGLExtensionsGen *gleGetCurrent()
{
	return m_current;
}
