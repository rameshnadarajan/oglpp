// OGLPP - Copyright (C) 2012, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Bryan Schuller
// Author Guillaume Brocker

#ifndef _GLC_QT_GLC_GTK_HPP
#define _GLC_QT_GLC_GTK_HPP

#include "glc_qt/config.hpp"

#include <glc/glc.hpp>

#include <QWidget>

extern "C"
{

/**
 * @brief Creates a drawable from a Qt widget.
 *
 * @param qidget	the Qt widget used to create the new drawable
 *
 * @return the newly allocated drawable.
 */
GLC_QT_API glc_drawable_t *	glc_qt_drawable_create( QWidget * widget );

/**
 * @brief Deletes the given drawable.
 *
 * @param drawable	the drawable that must be deleted.
 *
 * The given drawable is deleted and all associated resources are freed.
 */
GLC_QT_API void				glc_qt_drawable_destroy( glc_drawable_t * drawable );

} // extern "C"

#endif //#ifndef _GLC_QT_GLC_GTK_HPP
