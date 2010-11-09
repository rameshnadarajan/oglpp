// OGLPP - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glc_gtkmm/GLDrawingArea.hpp"

#include <cassert>
#include <iostream>
#include "glc_gtkmm/glc_gtkmm.hpp"
#include <GL/gl.h>



namespace
{

void drawWarningMessage( Cairo::RefPtr<Cairo::Context> cr, const int width, const int height )
{
	// clear
	cr->save();
	cr->set_operator( Cairo::OPERATOR_CLEAR );
	cr->paint();
	cr->restore();

	// draw text
	const float centerY = static_cast<float>(height) / 2.f;

	cr->save();
	cr->select_font_face( "serif", Cairo::FONT_SLANT_NORMAL, Cairo::FONT_WEIGHT_BOLD );
	const float fontSize = 16.f;
	cr->set_font_size( fontSize );
	cr->set_source_rgb( 1.f, 1.f, 1.f );

	const std::string text1( "Unable to have a current OpenGL context." );
	cr->move_to( 5.f, centerY - fontSize );
	cr->show_text( text1 );

	const std::string text2( "Please check the requirements for the graphics card and its driver." );
	cr->move_to( 5.f, centerY );
	cr->show_text( text2 );

	cr->restore();
}

}



namespace glc_gtkmm
{



GLDrawingArea::GLDrawingArea()
: m_glc(0)
{}


GLDrawingArea::~GLDrawingArea()
{
	deleteOpenGLContext();
}


const bool GLDrawingArea::createOpenGLContext()
{
	// Tests if glc context is already created
	if ( m_glc == 0 )
	{
		// glc context is not already created, creates a new one

		// First creates the drawable from the canvas
		glc_drawable_t * drawable	= glc_gtkmm_drawable_create( this );
		if ( drawable == 0 )
		{
			std::cout << "Unable to create the drawable." << std::endl;
			std::cerr << "Unable to create the drawable." << std::endl;
			return false;
		}

		// Next, creates the glc context
		m_glc = glc_create( drawable );
		if ( m_glc == 0 )
		{
			glc_gtkmm_drawable_destroy( drawable );
			std::cout << "Unable to create the glc context." << std::endl;
			std::cerr << "Unable to create the glc context." << std::endl;
			return false;
		}

		std::cout << "glc context successfully created.";

		return true;
	}
	else
	{
		// glc context is already created, nothing to do
		return true;
	}
}


const bool GLDrawingArea::deleteOpenGLContext()
{
	if ( m_glc != 0 )
	{
		// Deletes glc context
		glc_destroy( m_glc );
		m_glc = 0;
		std::cout << "glc context deleted.";

		return true;
	}
	else
	{
		return false;
	}
}


const glc_t *GLDrawingArea::getOpenGLContext() const
{
	return m_glc;
}

glc_t *GLDrawingArea::getOpenGLContext()
{
	return m_glc;
}


const bool GLDrawingArea::beginOpenGL()
{
	const bool retValGLC = createOpenGLContext();

	if ( retValGLC )
	{
		// Makes the glc context current
		const bool retVal = glc_set_current( m_glc );
		if ( retVal == false )
		{
			std::cout << "glc_set_current returns false";
			std::cerr << "glc_set_current returns false";
		}

		return retVal;
	}
	else
	{
		return false;
	}
}


void GLDrawingArea::endOpenGL()
{
	// Exchanges back and front buffers
	glc_swap( m_glc );

	// Unset the OpenGL context for this thread
	glc_unset_current( m_glc );
}


bool GLDrawingArea::on_configure_event( GdkEventConfigure * event )
{
	expose_or_configure_impl( event->width, event->height );

	// Default gtk processing
	return Gtk::DrawingArea::on_configure_event( event );
}


bool GLDrawingArea::on_expose_event( GdkEventExpose * event )
{
	expose_or_configure_impl( get_width(), get_height() );

	// Default gtk processing
	return Gtk::DrawingArea::on_expose_event( event );
}


void GLDrawingArea::expose_or_configure_impl( const int width, const int height )
{
	// Set the OpenGL context for this thread
	if ( beginOpenGL() )
	{
		drawOpenGLScene( width, height );

		// Exchanges back and front buffers
		// Unset the OpenGL context for this thread
		endOpenGL();
	}
	else
	{
		// No OpenGL context, so draw a message in the window
		Glib::RefPtr<Gdk::Window> window = get_window();
		if ( window )
		{
			Cairo::RefPtr<Cairo::Context> cr = window->create_cairo_context();
			drawWarningMessage( cr, width, height );
		}
	}
}


void GLDrawingArea::on_unrealize()
{
	deleteOpenGLContext();

	// Default gtk processing
	Gtk::DrawingArea::on_unrealize();
}


void GLDrawingArea::drawOpenGLScene( const int width, const int height )
{
	// OpenGL context has already been made current.

	// Initialize the projection matrix using the size of the canvas.
	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	glOrtho( -(float)width/2.f, (float)width/2.f, -(float)height/2.f, (float)height/2.f, -2.f, 2.f );

	// Initialize the viewport using the size of the canvas.
	glViewport( 0, 0, (float)width, (float)height );

	// Initialize the modelview matrix with identity.
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();

	// Clear the color buffer and the depth buffer.
	glClearColor( 0.f, 0.f, 0.f, 0.f );
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

	glDisable( GL_LIGHTING );

	// Draw one triangle.
	glBegin( GL_TRIANGLES );

	glColor3f( 1.f, 0.f, 0.f );
	glVertex3f( -(float)width/2.f, -(float)height/2.f, 1.f );

	glColor3f( 0.f, 1.f, 0.f );
	glVertex3f( (float)width/2.f, -(float)height/2.f, 1.f );

	glColor3f( 0.f, 0.f, 1.f );
	glVertex3f( (float)0.f, (float)height/2.f, 1.f );

	glEnd();
}



} // namespace glc_gtkmm
