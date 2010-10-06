// GLE - Copyright (C) 2004, 2007, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "gle/Wrapper.hpp"

// Forward declaration for glXGetCurrentContext()
// Remark : glXGetCurrentContext is declared in GL/glx.h, but glx.h includes XLib.h that must be included after any glibmm, gdkmm, or gtkmm headers.
// The error message "/usr/include/glibmm-2.4/glibmm/object.h:25:3: error: #error "X11/Xlib.h seems to have been included before this header. Due to some commonly-named macros in X11/Xlib.h, it may only be included after any glibmm, gdkmm, or gtkmm headers.".
typedef struct __GLXcontextRec *GLXContext;
extern GLXContext glXGetCurrentContext( void );



//@todo template
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
