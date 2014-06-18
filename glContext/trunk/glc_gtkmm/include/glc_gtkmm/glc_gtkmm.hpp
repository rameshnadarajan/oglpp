// OGLPP - Copyright (C) 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLC_GTKMM_GLC_GTKMM_HPP
#define _GLC_GTKMM_GLC_GTKMM_HPP

#include "glc_gtkmm/config.hpp"

#include <glc_gtk/glc_gtk.hpp>
#include <gtkmm/drawingarea.h>


struct glc_drawable_t;


extern "C"
{

/**
 * @brief Creates a drawable from a gtkmm drawing area.
 *
 * @param drawingArea	the gtkmm drawing area used to create the new drawable
 *
 * @return the newly allocated drawable.
 *
 * @todo Only from a gtkmm drawing area ?
 */
GLC_GTKMM_API glc_drawable_t *	glc_gtkmm_drawable_create( Gtk::DrawingArea * drawingArea );

/**
 * @brief Deletes the given drawable.
 *
 * @param drawable	the drawable that must be deleted.
 *
 * The given drawable is deleted and all associated resources are freed.
 */
GLC_GTKMM_API void				glc_gtkmm_drawable_destroy( glc_drawable_t * drawable );

// @todo glc_gtkmm_drawable_status()

} // extern "C"

#endif //#ifndef _GLC_GTKMM_GLC_GTKMM_HPP
