// GLE - Copyright (C) 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLC_GLC_HPP
#define _GLC_GLC_HPP

#include "glc/config.hpp"

// @todo Hides private stuffs and platform dependant definitions/declarations

// Several platform dependant definitions
// Definition of an handle to a window
// Definition of an handle to a device context
// Definition of an handle to an OpenGL rendering context

#ifdef WIN32

	#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__)
	#define WIN32_LEAN_AND_MEAN 1
	#include <windows.h>			// Contains all wgl functions.
	#endif

	typedef HWND	GLC_WINDOW_HANDLE;
	typedef HDC		GLC_DC_HANDLE;

	typedef HGLRC	GLC_GLRC_HANDLE;

/* @todo wxWidgets bindings :
pWindow is a wxWindow*
HWND hwnd = (HWND) pWindow->GetHWND();
HDC hDC = GetDC( hwnd );
*/
#elif __MACOSX__
	// @todo MacOSX support
	#error "MacOSX not yet supported."

	typedef GLXContext GLC_GLRC_HANDLE;
#else // POSIX
	// @todo POSIX support
	#error "Posix platform not yet supported."
#endif



/**
 * @brief glc_bool_t is used for boolean values.
 *
 * Returns of type glc_bool_t will always be either 0 for \c false or non zero for \c true. Just use the value as a boolean condition.
 */
typedef int glc_bool_t;


struct _glc_drawable_t;

typedef struct _drawable_backend_t 
{
	void (*destroy)( _glc_drawable_t * drawable ); ///< See glc_*_drawable_destroy()
} drawable_backend_t;

/**
 * @brief A glc_drawable_t contains informations about an object that can be drawn onto (a window or an offscreen buffer).
 *
 * @todo offscreen rendering.
 */
typedef struct _glc_drawable_t {
	GLC_WINDOW_HANDLE	window;
	GLC_DC_HANDLE		dc;

	drawable_backend_t *backend;

	// @todo api for capabilities customization
	int colorSize;
	int depthSize;
	int stencilSize;
} glc_drawable_t;


/**
 * @brief Deletes the given drawable.
 *
 * @param drawable	the drawable that must be deleted.
 *
 * The given drawable is deleted and all associated resources are freed.
 */
GLC_API void glc_drawable_destroy( glc_drawable_t * drawable );


/**
 * @brief A glc context, as glc_t objects are named, are central to glc library.
 *
 * A glc_t contains informations about an OpenGL context and its associated drawable.
 */
typedef struct _glc_t
{
	GLC_GLRC_HANDLE		context;		///< the OpenGL rendering context
	glc_drawable_t *	drawable;		///< the drawable used to create the OpenGL rendering context
	//@todo Uses a context with a different drawable (glc_switch_drawable()).
	//@todo Adds backend for wgl/glx/agl/egl
} glc_t;


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
 * @name Core glc api
 */
//@{

//extern "C" {

/**
 * @brief Creates a new glc context for the given drawable.
 *
 * @param drawable		the drawing surface used by glc context
 *
 * @return a new glc context associated with the given drawable.
 *
 * @remarks If the new glc context status is GLC_STATUS_SUCCESS (i.e. glc_status(retVal) == GLC_STATUS_SUCCESS), 
 * then the ownership of the given drawable is transfered to the glc context.
 */
GLC_API glc_t *		glc_create	( glc_drawable_t * drawable );

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

// @todo GLC_API glc_t *		glc_copy	( glc_t * context	);
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

//} // extern "C" {

//@}

#endif //#ifndef _GLC_GLC_HPP
