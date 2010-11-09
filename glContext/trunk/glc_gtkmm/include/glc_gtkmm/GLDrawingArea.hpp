// OGLPP - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLC_GTKMM_GLDRAWINGAREA_HPP
#define _GLC_GTKMM_GLDRAWINGAREA_HPP

#include <glc/glc.hpp>
#include "glc_gtkmm/config.hpp"
#include <gtkmm/drawingarea.h>



namespace glc_gtkmm
{



/**
 * @brief DrawingArea widget supporting OpenGL
 *
 * @todo disable verbose mode
 */
struct GLC_GTKMM_API GLDrawingArea : public Gtk::DrawingArea
{
	/**
	 * @brief Constructor
	 *
	 * @todo attriblist parameter 
	 */
	GLDrawingArea();

	/**
	 * @brief Destructor
	 */
	virtual ~GLDrawingArea();


	/**
	 * @name OpenGL context related methods
	 */
	//@{

	/**
	 * @brief Creates the OpenGL rendering context (if not already done).
	 *
	 * @return true if an OpenGL context, which is suitable for drawing on the drawing area, has been created. Returns false if the creation fails.
	 *
	 * @todo attriblist parameter
	 */
	const bool createOpenGLContext();

	/**
	 * @brief Deletes the OpenGL rendering context (if needed)
	 *
	 * @return true if the OpenGL rendering context has been deleted, false if there is no OpenGL context to delete (i.e. already done).
	 */
	const bool deleteOpenGLContext();

	/**
	 * @brief Retrieves the OpenGL context.
	 *
	 * @return a reference on a glc instance.
	 */
	const glc_t *getOpenGLContext() const;

	/**
	 * @brief Retrieves the OpenGL context.
	 *
	 * @return a reference on a glc instance.
	 */
	glc_t *getOpenGLContext();

	//@}


	/**
	 * @name OpenGL related methods
	 */
	//@{

	/**
	 * @brief Creates an OpenGL context (if needed) and makes it current for the calling thread.
	 *
	 * @return	true if method succeeds and OpenGL API could be used safely.
	 * 			Returns false otherwise and OpenGL API could not be used.
	 */
	const bool beginOpenGL();

	/**
	 * @brief Swaps buffers and makes the OpenGL context not current for the calling thread.
	 *
	 * @todo Exchanges the front and back buffers only and only if the rendering was done in a back buffer.
	 */
	void endOpenGL();

	//@}

	/**
	 * @brief 
	 */
	void drawOpenGLScene( const int width, const int height );

protected:
	bool on_configure_event( GdkEventConfigure * event );
	bool on_expose_event( GdkEventExpose * event );
	void expose_or_configure_impl( const int width, const int height );

	void on_unrealize();

private:
	glc_t * m_glc; ///< reference on a glContext
};



} //namespace glc_gtkmm

#endif //#ifndef _GLC_GTKMM_GLDRAWINGAREA_HPP
