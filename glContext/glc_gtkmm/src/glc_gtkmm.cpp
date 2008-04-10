// GLE - Copyright (C) 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glc_gtkmm/glc_gtkmm.hpp"

#include <assert.h>



glc_drawable_t * glc_gtkmm_drawable_create( Gtk::DrawingArea * drawingArea )
{
	assert( drawingArea != 0 && "Calls glc_gtkmm_drawable_create() with an null drawing area." );

	// Retrieves the gtk drawing area
	GtkDrawingArea * gtkDrawingArea = drawingArea->gobj();

	glc_drawable_t * drawable = glc_gtk_drawable_create( gtkDrawingArea );

	// Initializes the drawable
	drawable->backend->destroy	= &glc_gtkmm_drawable_destroy;

	return drawable;
}


void glc_gtkmm_drawable_destroy( glc_drawable_t * drawable )
{
	glc_gtk_drawable_destroy( drawable );
}
