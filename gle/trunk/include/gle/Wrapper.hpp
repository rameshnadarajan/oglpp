// GLE - Copyright (C) 2004, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_WRAPPER_HPP
#define _GLE_WRAPPER_HPP

#include "gle/gle.hpp"



namespace gle
{
	struct OpenGLExtensionsGen;

	struct GLE_API Wrapper
	{
		static gle::OpenGLExtensionsGen *m_current;
	};
}



// API
GLE_API void								gleSetCurrent( gle::OpenGLExtensionsGen *current );

GLE_API gle::OpenGLExtensionsGen*	gleGetCurrent();



#endif //#ifndef _GLE_WRAPPER_HPP
