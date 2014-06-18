// OGLPP - Copyright (C) 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLC_GTK_GLC_GTK_HPP
#define _GLC_GTK_GLC_GTK_HPP

#include "glc_gtk/config.hpp"

#include <glc/glc.hpp>
#include <gtk/gtk.h>


struct glc_drawable_t;


extern "C"
{

/**
 * @brief Creates a drawable from a gtk drawing area.
 *
 * @param drawingArea	the gtk drawing area used to create the new drawable
 *
 * @return the newly allocated drawable.
 */
GLC_GTK_API glc_drawable_t *	glc_gtk_drawable_create( GtkDrawingArea * drawingArea );

/**
 * @brief Deletes the given drawable.
 *
 * @param drawable	the drawable that must be deleted.
 *
 * The given drawable is deleted and all associated resources are freed.
 */
GLC_GTK_API void				glc_gtk_drawable_destroy( glc_drawable_t * drawable );

// @todo glc_gtk_drawable_status()

} // extern "C"

#endif //#ifndef _GLC_GTK_GLC_GTK_HPP
