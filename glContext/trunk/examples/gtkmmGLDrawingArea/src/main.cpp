// OGLPP - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include <glc_gtkmm/GLDrawingArea.hpp>
#include <gtkmm.h>

int main( int argc, char ** argv )
{
	// Initializes the gtk system.
	Gtk::Main kit( &argc, &argv );

	// Set the human readable name of the application.
	Glib::set_application_name("GLDrawingArea for gtkmm");

	// Creates the main window containing the opengl drawing area.
	Gtk::Window					window;
	glc_gtkmm::GLDrawingArea	openglDrawingArea;

	window.add( openglDrawingArea  );

	// Configures the main window.
	window.set_default_size( 640, 480 );
	window.show_all();

	// Enters the main loop.
	Gtk::Main::run( window );

 	return 0;
}
