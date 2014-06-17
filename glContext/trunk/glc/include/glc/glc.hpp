// OGLPP - Copyright (C) 2008, 2009, 2010, 2011, 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLC_GLC_HPP
#define _GLC_GLC_HPP

#include "glc/config.hpp"

/** 
 * @defgroup g_glc glc - Open(GL) (C)context management
 * 
 * This library provides the needed cross-platform API to add OpenGL capabilities to any user interface toolkits (gtk/gtkmm, wxWidgets, qt and so on).
 *
 * \b glc is open source (LGPL).
 */

/**
 * @todo POSIX support
 * @todo MacOSX support
 * @todo Hides private stuffs and platform dependant definitions/declarations
 * @todo wxWidgets bindings :
pWindow is a wxWindow*
HWND hwnd = (HWND) pWindow->GetHWND();
HDC hDC = GetDC( hwnd );
*/

// Several platform dependant definitions
// Definition of an handle to a window
// Definition of an handle to a device context
// Definition of an handle to an OpenGL rendering context


extern "C" {

/**
 * @defgroup g_glc_type Basic type definitions
 *
 * @ingroup g_glc
 */
//@{

/**
 * @brief glc_bool_t is used for boolean values.
 *
 * Returns of type glc_bool_t will always be either 0 for \c false or non zero for \c true. Just use the value as a boolean condition.
 */
typedef int glc_bool_t;

// Internal declaration
struct glc_drawable_t;
struct glc_t;


/**
 * @brief Enumeration of errors that can occur when using glc.
 *
 * @todo glc_status_to_string()
 */
typedef enum _glc_status_t
{
	GLC_STATUS_SUCCESS,
	GLC_STATUS_NULL_POINTER,
	GLC_STATUS_NO_OPENGL_CONTEXT
} glc_status_t;

/**
 * @brief Initializes drawing surface capabilities.
 *
 * @param drawable	the drawable that must be initialized
 *
 * @remark This is a private helper function.
 */
GLC_API void _glc_drawable_initialize( glc_drawable_t * drawable );
 
/**
 * @brief Deletes the given drawable.
 *
 * @param drawable	the drawable that must be deleted.
 *
 * The given drawable is deleted and all associated resources are freed.
 *
 * @remark This is a private helper function.
 */
GLC_API void _glc_drawable_destroy( glc_drawable_t * drawable );
//@}



/**
 * @defgroup g_glc_core Core glc API
 *
 * @ingroup g_glc
 */
//@{



/**
 * @brief Creates a new glc context for the given drawable.
 *
 * @param drawable			the drawing surface used by glc context
 * @param contextShared		if not 0, then the new glc context returned would use the OpenGL context from the given contextShared but with the given drawable.
 *
 * @return a new glc context associated with the given drawable.
 *
 * @remarks If the new glc context status is GLC_STATUS_SUCCESS (i.e. glc_status(retVal) == GLC_STATUS_SUCCESS), 
 * then the ownership of the given drawable is transfered to the glc context.
 */
GLC_API glc_t *		glc_create( glc_drawable_t * drawable, glc_t * contextShared = 0 );


/**
 * @brief Deletes the given context.
 *
 * @param context	the glc context that must be deleted.
 *
 * The given glc context is deleted and all associated resources are freed (the OpenGL rendering context and the associated drawable).
 */
GLC_API void		glc_destroy	( glc_t * context );

/**
 * @brief Checks whether an error has previously occurred for this context.
 *
 * @param context	the glc context that must be checked
 *
 * @return the current status of the given context.
 */
GLC_API glc_status_t glc_status( glc_t * context );

// @todo GLC_API glc_t * 	glc_copy	( glc_t * context	);
// @todo GLC_API glc_bool_t	glc_share	( glc_t *context1, glc_t *context2 );
// @todo FontBitmaps, FontOutlines



/**
 * @brief Sets the given glc context current for the calling thread.
 *
 * This function makes the given glc context current for the calling thread, i.e. the OpenGL rendering context is made current for the calling thread.
 * So all subsequent OpenGL calls made by the thread are drawn on the drawable associated to the glc context.
 *
 * @param context	a glc context
 *
 * @return A non-zero value if the function is successful, or zero if the function is unsuccessful.
 */
GLC_API glc_bool_t	glc_set_current( glc_t * context );

/**
 * @brief Sets the given glc context no longer current for the calling thread.
 *
 * @param context	a glc context
 *
 * @return A non-zero value if the function is successful, or zero if the function is unsuccessful.
 */
GLC_API glc_bool_t	glc_unset_current( glc_t * context );

/**
 * @brief Tests if the given glc context is current for the calling thread.
 *
 * @param context	a glc context
 *
 * @return A non-zero value if the glc context is current, or zero if the glc context is not current.
 */
GLC_API glc_bool_t	glc_is_current( glc_t * context );



/**
 * @brief Exchanges the front and back buffers.
 *
 * This function exchanges the front and back buffers for the drawable associated with the given glc context.
 * If there is no back buffer, this function has no effect.
 *
 * @param context	a glc context
 *
 * @return A non-zero value if the function is successful, or zero if the function is unsuccessful.
 */
GLC_API glc_bool_t	glc_swap( glc_t * context );



/**
 * @brief Enables/disables fullscreen mode.
 *
 * @param wantFullscreen				true to enable fullscreen mode, false to disable fullscreen mode.
 * @param influenceCompositingManager	true to influence the compositing window manager, false to ignore it.
 *
 * When influenceCompositingManager is true, the compositing window manager is disabled in fullscreen and enable in non fullscreen.
 *
 * @todo renames glc_drawable_set_fullscreen => glc_set_fullscreen
 */
GLC_API glc_bool_t glc_drawable_set_fullscreen( glc_t * context, glc_bool_t wantFullscreen, glc_bool_t influenceCompositingManager = true );

/**
 * @brief Returns the fullscreen state.
 *
 * @return true if in fullscreen mode, false otherwise.
 *
 * @todo renames glc_drawable_is_fullscreen => glc_is_fullscreen
 */
GLC_API glc_bool_t glc_drawable_is_fullscreen( glc_t * context );



/**
 * @brief Enables/disables the stereo buffer of the given drawable.
 */
GLC_API void glc_drawable_set_stereo( glc_drawable_t * drawable, glc_bool_t stereo );



} // extern "C" {

//@}

#endif //#ifndef _GLC_GLC_HPP
