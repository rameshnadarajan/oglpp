// GLE - Copyright (C) 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/helpers.hpp"

#include <iostream>	// for I/O



namespace glo
{



// OpenGL API usage

//	DSA
namespace
{
static bool g_isDSAEnabled = false;
}


const bool isDSAEnabled()
{
	return g_isDSAEnabled;
}


const bool isDSADisabled()
{
	return !g_isDSAEnabled;
}


const bool setDSAEnabled( const bool enabled )
{
	bool retVal = g_isDSAEnabled;

#ifdef __OPENGLES2__

#else

	if ( enabled )
	{
		if (isGL_EXT_direct_state_access())
		{
			std::cout << "DSA enabled (GL_EXT_direct_state_access available)." << std::endl;
			
			g_isDSAEnabled = true;
		}
		else
		{
			std::cout << "Unable to enable DSA (GL_EXT_direct_state_access not available)." << std::endl;
			g_isDSAEnabled = false;
		}
	}
	else
	{
		std::cout << "DSA disabled." << std::endl;
		g_isDSAEnabled = false;
	}

#endif	// #ifdef __OPENGLES2__

	return retVal;
}


#ifdef __OPENGLES2__
	// No Matrix manipulation commands
#else
// Matrix manipulation commands
void loadIdentity( GLenum mode )
{
	if ( isDSAEnabled() )
	{
		glMatrixLoadIdentityEXT( mode );
	}
	else
	{
		glMatrixMode( mode );
		glLoadIdentity();
	}
}


void loadMatrixf( GLenum mode, const GLfloat * m )
{
	if ( isDSAEnabled() )
	{
		glMatrixLoadfEXT( mode, m );
	}
	else
	{
		glMatrixMode( mode );
		glLoadMatrixf( m );
	}
}


void multMatrixf( GLenum mode, const GLfloat * m )
{
	if ( isDSAEnabled() )
	{
		glMatrixMultfEXT( mode, m );
	}
	else
	{
		glMatrixMode( mode );
		glMultMatrixf( m );
	}
}


void pushMatrix( GLenum mode )
{
	if ( isDSAEnabled() )
	{
		glMatrixPushEXT( mode );
	}
	else
	{
		glMatrixMode( mode );
		glPushMatrix();
	}
}


void popMatrix( GLenum mode )
{
	if ( isDSAEnabled() )
	{
		glMatrixPopEXT( mode );
	}
	else
	{
		glMatrixMode( mode );
		glPopMatrix();
	}
}


void ortho( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	if ( isDSAEnabled() )
	{
		glMatrixOrthoEXT( mode, left, right, bottom, top, zNear, zFar );
	}
	else
	{
		glMatrixMode( mode );
		glOrtho( left, right, bottom, top, zNear, zFar );
	}
}


void frustum( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	if ( isDSAEnabled() )
	{
		glMatrixFrustumEXT( mode, left, right, bottom, top, zNear, zFar );
	}
	else
	{
		glMatrixMode( mode );
		glFrustum( left, right, bottom, top, zNear, zFar );
	}
}
#endif	// #ifdef __OPENGLES2__


} // namespace glo
