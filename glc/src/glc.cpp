// GLE - Copyright (C) 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glc/glc.hpp"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void glc_drawable_destroy( glc_drawable_t * drawable )
{
	assert( drawable != 0 && "Calls glc_drawable_destroy() with an null drawable." );
	// @todo drawable_status()

	drawable->backend->destroy( drawable );
}


glc_t *glc_create( glc_drawable_t *drawable )
{
	assert( drawable != 0 && "Calls glc_create() with an null drawable." );
	// @todo drawable_status()

	// Initializes the glc context with default values
	glc_t * retVal = (glc_t*)malloc( sizeof(glc_t) );
	retVal->context		= 0;
	retVal->drawable	= drawable;

	// Initializes the pixel format descriptor with the desired format.
	PIXELFORMATDESCRIPTOR pfd;

	memset( &pfd, 0, sizeof( PIXELFORMATDESCRIPTOR ) );

	pfd.nSize			= sizeof( PIXELFORMATDESCRIPTOR );
	pfd.nVersion		= 1;
	pfd.dwFlags			= PFD_SUPPORT_OPENGL | PFD_DRAW_TO_WINDOW | PFD_DOUBLEBUFFER; // same as wx
	// from glContext/contextMSW : PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER | PFD_GENERIC_ACCELERATED;
	pfd.iPixelType		= PFD_TYPE_RGBA;
	pfd.cColorBits		= drawable->colorSize;
	pfd.cDepthBits		= drawable->depthSize;
	pfd.cStencilBits	= drawable->stencilSize;
	pfd.iLayerType		= PFD_MAIN_PLANE;

	// @todo Initializes WGL_ARB_pixel_format attributes with the desired format.
	int attributes[64];
	int *iAttributes;
	//float fAttributes[1] = { 0 };

	iAttributes = &attributes[0];

	/**iAttributes++ = WGL_DRAW_TO_WINDOW_ARB;
	*iAttributes++ = GL_TRUE;
	*iAttributes++ = WGL_ACCELERATION_ARB;
	*iAttributes++ = WGL_FULL_ACCELERATION_ARB;

	*iAttributes++ = WGL_COLOR_BITS_ARB;
	*iAttributes++ = drawable->colorSize;*/

/*	*iAttributes++ = WGL_RED_BITS_ARB;
	*iAttributes++ = this->gl_config.red_size;
	*iAttributes++ = WGL_GREEN_BITS_ARB;
	*iAttributes++ = this->gl_config.green_size;
	*iAttributes++ = WGL_BLUE_BITS_ARB;
	*iAttributes++ = this->gl_config.blue_size;
	if ( this->gl_config.alpha_size ) {
		*iAttributes++ = WGL_ALPHA_BITS_ARB;
		*iAttributes++ = this->gl_config.alpha_size;
	}*/

	/**iAttributes++ = WGL_DOUBLE_BUFFER_ARB;
	*iAttributes++ = true;

	*iAttributes++ = WGL_DEPTH_BITS_ARB;
	*iAttributes++ = drawable->depthSize;

	*iAttributes++ = WGL_STENCIL_BITS_ARB;
	*iAttributes++ = drawable->stencilSize;*/

/*	if ( this->gl_config.accum_red_size ) {
		*iAttributes++ = WGL_ACCUM_RED_BITS_ARB;
		*iAttributes++ = this->gl_config.accum_red_size;
	}

	if ( this->gl_config.accum_green_size ) {
		*iAttributes++ = WGL_ACCUM_GREEN_BITS_ARB;
		*iAttributes++ = this->gl_config.accum_green_size;
	}

	if ( this->gl_config.accum_blue_size ) {
		*iAttributes++ = WGL_ACCUM_BLUE_BITS_ARB;
		*iAttributes++ = this->gl_config.accum_blue_size;
	}

	if ( this->gl_config.accum_alpha_size ) {
		*iAttributes++ = WGL_ACCUM_ALPHA_BITS_ARB;
		*iAttributes++ = this->gl_config.accum_alpha_size;
	}*/

/*	if ( this->gl_config.stereo ) {
		*iAttributes++ = WGL_STEREO_ARB;
		*iAttributes++ = GL_TRUE;
	}*/

/*	if ( this->gl_config.multisamplebuffers ) {
		*iAttributes++ = WGL_SAMPLE_BUFFERS_ARB;
		*iAttributes++ = this->gl_config.multisamplebuffers;
	}

	if ( this->gl_config.multisamplesamples ) {
		*iAttributes++ = WGL_SAMPLES_ARB;
		*iAttributes++ = this->gl_config.multisamplesamples;
	}

	if ( this->gl_config.accelerated >= 0 ) {
		*iAttributes++ = WGL_ACCELERATION_ARB;
		*iAttributes++ = (this->gl_config.accelerated ? WGL_GENERIC_ACCELERATION_ARB : WGL_NO_ACCELERATION_ARB);
	}*/

	*iAttributes = 0;

	// Chooses and sets the closest available pixel format.
	int		iPixelFormat;
	BOOL	bResult;

	iPixelFormat = ChoosePixelFormat( drawable->dc, &pfd );
	if ( iPixelFormat == 0 )
	{
		fprintf( stderr, "In glc_create(), ChoosePixelFormat() fails." );
		return retVal;
	}

	bResult = SetPixelFormat( drawable->dc, iPixelFormat, &pfd );
	if ( bResult == FALSE )
	{
		fprintf( stderr, "In glc_create(), SetPixelFormat() fails." );
		return retVal;
	}

	// Creates the OpenGL rendering context.
	GLC_GLRC_HANDLE context = wglCreateContext( drawable->dc );
	if ( context == NULL )
	{
		fprintf( stderr, "In glc_create(), wglCreateContext() fails." );
	}
	else
	{
		retVal->context = context;
	}

	return retVal;
}


void glc_destroy( glc_t * context )
{
	assert( context != 0 && "Calls glc_destroy() on a null glc context.");
	// @todo glc_status()

	if ( context->context != 0 )
	{
		// Deletes the OpenGL rendering context.
		wglDeleteContext( context->context );
		context->context = 0;
	}

	if ( context->drawable != 0 )
	{
		// Deletes the associated drawable.
		glc_drawable_destroy( context->drawable );
		context->drawable = 0;
	}

	if ( context != 0 )
	{
		// Deletes the glc context
		free( context );
	}
}


glc_status_t glc_status( glc_t * context )
{
	assert( context != 0 && "Calls glc_status() on a null glc context." );

	if ( context == 0 )
	{
		return GLC_STATUS_NULL_POINTER;
	}
	else
	{
		if ( context->context == 0 )
		{
			return GLC_STATUS_NO_OPENGL_CONTEXT;
		}
		else
		{
			return GLC_STATUS_SUCCESS;
		}
	}
}


glc_bool_t glc_set_current( glc_t * context )
{
	assert( context != 0 && "Calls glc_set_current() on a null glc context.");
	// @todo glc_status()

	assert( context->drawable != 0 && "Calls glc_set_current() with a context associated with a null drawable." );
	// @todo drawable_status()

	BOOL success = wglMakeCurrent( context->drawable->dc, context->context );

	return success == TRUE ? 1 : 0;
}


glc_bool_t glc_unset_current( glc_t * context )
{
	assert( context != 0 && "Calls glc_unset_current() on a null glc context.");
	// @todo glc_status()

	assert( context->drawable != 0 && "Calls glc_unset_current() with a context associated with a null drawable." );
	// @todo drawable_status()

	BOOL success = wglMakeCurrent( context->drawable->dc, NULL );

	return success == TRUE ? 1 : 0;
}


glc_bool_t glc_is_current( glc_t * context )
{
	assert( context != 0 && "Calls glc_is_current() on a null glc context.");
	// @todo glc_status()

	assert( context->drawable != 0 && "Calls glc_is_current() with a context associated with a null drawable." );
	// @todo drawable_status()

	GLC_GLRC_HANDLE glrc = wglGetCurrentContext();

	assert(	( glrc == 0 )					||					// no current context		=> is not current 
			( glrc != context->context )	||					// another context is current	=> is not current
			(	(glrc == context->context) &&					// is current
				(wglGetCurrentDC() == context->drawable->dc) )	// and for the good drawable/dc
			&& "The context is current, but not for its associated drawable/graphical context !" );

	return glrc == context->context ? 1 : 0;
}


glc_bool_t glc_swap( glc_t * context )
{
	assert( context != 0 && "Calls glc_swap() on a null glc context.");
	// @todo glc_status()

	assert( context->drawable != 0 && "Calls glc_swap() with a context associated with a null drawable." );
	// @todo drawable_status()

	glc_bool_t retVal;

	retVal = SwapBuffers( context->drawable->dc ) == TRUE ? 1 : 0;

	return retVal;
}
