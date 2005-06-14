// This file was generated at Wed Apr  6 08:46:51 2005 with gle, please do not modify.

// GLE - Copyright (C) 2004, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_WRAPPERGEN_H
#define _GLE_WRAPPERGEN_H

#include "gle/gle.hpp"

/**
 * @defgroup g_wrapperGroups All OpenGL extensions groups for the wrapper.
 *
 * @ingroup g_gle
 */


/** 
 * @defgroup	GL_3DFX GL_3DFX (3 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_APPLE GL_APPLE (8 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_ARB GL_ARB (35 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_ATI GL_ATI (14 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_EXT GL_EXT (58 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_FfdMaskSGIX GL_FfdMaskSGIX (0 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_GREMEDY GL_GREMEDY (1 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_HP GL_HP (4 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_IBM GL_IBM (5 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_INGR GL_INGR (2 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_INTEL GL_INTEL (2 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_MESA GL_MESA (4 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_NV GL_NV (36 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_OES GL_OES (1 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_OML GL_OML (3 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_PGI GL_PGI (2 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_REND GL_REND (1 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_S3 GL_S3 (1 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_SGI GL_SGI (3 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_SGIS GL_SGIS (13 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_SGIX GL_SGIX (27 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_SUN GL_SUN (6 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_SUNX GL_SUNX (1 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_VERSION GL_VERSION (0 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	GL_WIN GL_WIN (2 extensions found).
 * @ingroup	g_wrapperGroups
 */

/** 
 * @defgroup	Not_in_OpenGL_Extension_Registry Not_in_OpenGL_Extension_Registry (30 extensions found).
 * @ingroup	g_wrapperGroups
 */

			
			
/**
 * @name GL_3DFX_multisample
 *	Extension number in OpenGL registry : 207
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/3DFX/3dfx_multisample.txt
 *	@ingroup GL_3DFX
 */
//@{
/**
 * @brief Test if \b GL_3DFX_multisample is supported.
 * @return Returns \c true if \b GL_3DFX_multisample is supported, false otherwise.
 */
GLE_API bool isGL_3DFX_multisample();

//@}
			
			
/**
 * @name GL_3DFX_tbuffer
 *	Extension number in OpenGL registry : 208
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/3DFX/tbuffer.txt
 *	@ingroup GL_3DFX
 */
//@{
/**
 * @brief Test if \b GL_3DFX_tbuffer is supported.
 * @return Returns \c true if \b GL_3DFX_tbuffer is supported, false otherwise.
 */
GLE_API bool isGL_3DFX_tbuffer();

/**
 * @brief void glTbufferMask3DFX( GLuint mask );
 */
GLE_API void glTbufferMask3DFX( GLuint mask );

//@}
			
			
/**
 * @name GL_3DFX_texture_compression_FXT1
 *	Extension number in OpenGL registry : 206
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/3DFX/texture_compression_FXT1.txt
 *	@ingroup GL_3DFX
 */
//@{
/**
 * @brief Test if \b GL_3DFX_texture_compression_FXT1 is supported.
 * @return Returns \c true if \b GL_3DFX_texture_compression_FXT1 is supported, false otherwise.
 */
GLE_API bool isGL_3DFX_texture_compression_FXT1();

//@}
			
			
/**
 * @name GL_APPLE_client_storage
 *	Extension number in OpenGL registry : 270
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/client_storage.txt
 *	@ingroup GL_APPLE
 */
//@{
/**
 * @brief Test if \b GL_APPLE_client_storage is supported.
 * @return Returns \c true if \b GL_APPLE_client_storage is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_client_storage();

//@}
			
			
/**
 * @name GL_APPLE_element_array
 *	Extension number in OpenGL registry : 271
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/element_array.txt
 *	@ingroup GL_APPLE
 */
//@{
/**
 * @brief Test if \b GL_APPLE_element_array is supported.
 * @return Returns \c true if \b GL_APPLE_element_array is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_element_array();

/**
 * @brief void glElementPointerAPPLE( GLenum type, const GLvoid *pointer );
 */
GLE_API void glElementPointerAPPLE( GLenum type, const GLvoid *pointer );

/**
 * @brief void glDrawElementArrayAPPLE( GLenum mode, GLint first, GLsizei count );
 */
GLE_API void glDrawElementArrayAPPLE( GLenum mode, GLint first, GLsizei count );

/**
 * @brief void glDrawRangeElementArrayAPPLE( GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count );
 */
GLE_API void glDrawRangeElementArrayAPPLE( GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count );

/**
 * @brief void glMultiDrawElementArrayAPPLE( GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount );
 */
GLE_API void glMultiDrawElementArrayAPPLE( GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount );

/**
 * @brief void glMultiDrawRangeElementArrayAPPLE( GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount );
 */
GLE_API void glMultiDrawRangeElementArrayAPPLE( GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount );

//@}
			
			
/**
 * @name GL_APPLE_fence
 *	Extension number in OpenGL registry : 272
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/fence.txt
 *	@ingroup GL_APPLE
 */
//@{
/**
 * @brief Test if \b GL_APPLE_fence is supported.
 * @return Returns \c true if \b GL_APPLE_fence is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_fence();

/**
 * @brief void glGenFencesAPPLE( GLsizei n, GLuint *fences );
 */
GLE_API void glGenFencesAPPLE( GLsizei n, GLuint *fences );

/**
 * @brief void glDeleteFencesAPPLE( GLsizei n, const GLuint *fences );
 */
GLE_API void glDeleteFencesAPPLE( GLsizei n, const GLuint *fences );

/**
 * @brief void glSetFenceAPPLE( GLuint fence );
 */
GLE_API void glSetFenceAPPLE( GLuint fence );

/**
 * @brief GLboolean glIsFenceAPPLE( GLuint fence );
 */
GLE_API GLboolean glIsFenceAPPLE( GLuint fence );

/**
 * @brief GLboolean glTestFenceAPPLE( GLuint fence );
 */
GLE_API GLboolean glTestFenceAPPLE( GLuint fence );

/**
 * @brief void glFinishFenceAPPLE( GLuint fence );
 */
GLE_API void glFinishFenceAPPLE( GLuint fence );

/**
 * @brief GLboolean glTestObjectAPPLE( GLenum object, GLuint name );
 */
GLE_API GLboolean glTestObjectAPPLE( GLenum object, GLuint name );

/**
 * @brief void glFinishObjectAPPLE( GLenum object, GLint name );
 */
GLE_API void glFinishObjectAPPLE( GLenum object, GLint name );

//@}
			
			
/**
 * @name GL_APPLE_specular_vector
 *	Extension number in OpenGL registry : 159
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/specular_vector.txt
 *	@ingroup GL_APPLE
 */
//@{
/**
 * @brief Test if \b GL_APPLE_specular_vector is supported.
 * @return Returns \c true if \b GL_APPLE_specular_vector is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_specular_vector();

//@}
			
			
/**
 * @name GL_APPLE_transform_hint
 *	Extension number in OpenGL registry : 160
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/transform_hint.txt
 *	@ingroup GL_APPLE
 */
//@{
/**
 * @brief Test if \b GL_APPLE_transform_hint is supported.
 * @return Returns \c true if \b GL_APPLE_transform_hint is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_transform_hint();

//@}
			
			
/**
 * @name GL_APPLE_vertex_array_object
 *	Extension number in OpenGL registry : 273
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/vertex_array_object.txt
 *	@ingroup GL_APPLE
 */
//@{
/**
 * @brief Test if \b GL_APPLE_vertex_array_object is supported.
 * @return Returns \c true if \b GL_APPLE_vertex_array_object is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_vertex_array_object();

/**
 * @brief void glBindVertexArrayAPPLE( GLuint array );
 */
GLE_API void glBindVertexArrayAPPLE( GLuint array );

/**
 * @brief void glDeleteVertexArraysAPPLE( GLsizei n, const GLuint *arrays );
 */
GLE_API void glDeleteVertexArraysAPPLE( GLsizei n, const GLuint *arrays );

/**
 * @brief void glGenVertexArraysAPPLE( GLsizei n, const GLuint *arrays );
 */
GLE_API void glGenVertexArraysAPPLE( GLsizei n, const GLuint *arrays );

/**
 * @brief GLboolean glIsVertexArrayAPPLE( GLuint array );
 */
GLE_API GLboolean glIsVertexArrayAPPLE( GLuint array );

//@}
			
			
/**
 * @name GL_APPLE_vertex_array_range
 *	Extension number in OpenGL registry : 274
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/vertex_array_range.txt
 *	@ingroup GL_APPLE
 */
//@{
/**
 * @brief Test if \b GL_APPLE_vertex_array_range is supported.
 * @return Returns \c true if \b GL_APPLE_vertex_array_range is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_vertex_array_range();

/**
 * @brief void glVertexArrayRangeAPPLE( GLsizei length, GLvoid *pointer );
 */
GLE_API void glVertexArrayRangeAPPLE( GLsizei length, GLvoid *pointer );

/**
 * @brief void glFlushVertexArrayRangeAPPLE( GLsizei length, GLvoid *pointer );
 */
GLE_API void glFlushVertexArrayRangeAPPLE( GLsizei length, GLvoid *pointer );

/**
 * @brief void glVertexArrayParameteriAPPLE( GLenum pname, GLint param );
 */
GLE_API void glVertexArrayParameteriAPPLE( GLenum pname, GLint param );

//@}
			
			
/**
 * @name GL_APPLE_ycbcr_422
 *	Extension number in OpenGL registry : 275
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/ycbcr_422.txt
 *	@ingroup GL_APPLE
 */
//@{
/**
 * @brief Test if \b GL_APPLE_ycbcr_422 is supported.
 * @return Returns \c true if \b GL_APPLE_ycbcr_422 is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_ycbcr_422();

//@}
			
			
/**
 * @name GL_ARB_color_buffer_float
 *	Extension number in OpenGL registry : 39
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/color_buffer_float.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_color_buffer_float is supported.
 * @return Returns \c true if \b GL_ARB_color_buffer_float is supported, false otherwise.
 */
GLE_API bool isGL_ARB_color_buffer_float();

/**
 * @brief void glClampColorARB( GLenum target, GLenum clamp );
 */
GLE_API void glClampColorARB( GLenum target, GLenum clamp );

//@}
			
			
/**
 * @name GL_ARB_depth_texture
 *	Extension number in OpenGL registry : 22
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/depth_texture.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_depth_texture is supported.
 * @return Returns \c true if \b GL_ARB_depth_texture is supported, false otherwise.
 */
GLE_API bool isGL_ARB_depth_texture();

//@}
			
			
/**
 * @name GL_ARB_draw_buffers
 *	Extension number in OpenGL registry : 37
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/draw_buffers.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_draw_buffers is supported.
 * @return Returns \c true if \b GL_ARB_draw_buffers is supported, false otherwise.
 */
GLE_API bool isGL_ARB_draw_buffers();

/**
 * @brief void glDrawBuffersARB( GLsizei n, const GLenum *bufs );
 */
GLE_API void glDrawBuffersARB( GLsizei n, const GLenum *bufs );

//@}
			
			
/**
 * @name GL_ARB_fragment_program
 *	Extension number in OpenGL registry : 27
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/fragment_program.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_fragment_program is supported.
 * @return Returns \c true if \b GL_ARB_fragment_program is supported, false otherwise.
 */
GLE_API bool isGL_ARB_fragment_program();

//@}
			
			
/**
 * @name GL_ARB_fragment_program_shadow
 *	Extension number in OpenGL registry : 36
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/fragment_program_shadow.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_fragment_program_shadow is supported.
 * @return Returns \c true if \b GL_ARB_fragment_program_shadow is supported, false otherwise.
 */
GLE_API bool isGL_ARB_fragment_program_shadow();

//@}
			
			
/**
 * @name GL_ARB_fragment_shader
 *	Extension number in OpenGL registry : 32
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/fragment_shader.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_fragment_shader is supported.
 * @return Returns \c true if \b GL_ARB_fragment_shader is supported, false otherwise.
 */
GLE_API bool isGL_ARB_fragment_shader();

//@}
			
			
/**
 * @name GL_ARB_half_float_pixel
 *	Extension number in OpenGL registry : 40
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/half_float_pixel.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_half_float_pixel is supported.
 * @return Returns \c true if \b GL_ARB_half_float_pixel is supported, false otherwise.
 */
GLE_API bool isGL_ARB_half_float_pixel();

//@}

			
/**	
 * @name GL_ARB_imaging
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_ARB_imaging is supported.
 * @return Returns \c true if \b GL_ARB_imaging is supported, false otherwise.
 */
GLE_API bool isGL_ARB_imaging();

//@}
			
			
/**
 * @name GL_ARB_matrix_palette
 *	Extension number in OpenGL registry : 16
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/matrix_palette.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_matrix_palette is supported.
 * @return Returns \c true if \b GL_ARB_matrix_palette is supported, false otherwise.
 */
GLE_API bool isGL_ARB_matrix_palette();

/**
 * @brief void glCurrentPaletteMatrixARB( GLint index );
 */
GLE_API void glCurrentPaletteMatrixARB( GLint index );

/**
 * @brief void glMatrixIndexubvARB( GLint size, const GLubyte *indices );
 */
GLE_API void glMatrixIndexubvARB( GLint size, const GLubyte *indices );

/**
 * @brief void glMatrixIndexusvARB( GLint size, const GLushort *indices );
 */
GLE_API void glMatrixIndexusvARB( GLint size, const GLushort *indices );

/**
 * @brief void glMatrixIndexuivARB( GLint size, const GLuint *indices );
 */
GLE_API void glMatrixIndexuivARB( GLint size, const GLuint *indices );

/**
 * @brief void glMatrixIndexPointerARB( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glMatrixIndexPointerARB( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );

//@}
			
			
/**
 * @name GL_ARB_multisample
 *	Extension number in OpenGL registry : 5
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/multisample.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_multisample is supported.
 * @return Returns \c true if \b GL_ARB_multisample is supported, false otherwise.
 */
GLE_API bool isGL_ARB_multisample();

/**
 * @brief void glSampleCoverageARB( GLclampf value, GLboolean invert );
 */
GLE_API void glSampleCoverageARB( GLclampf value, GLboolean invert );

//@}
			
			
/**
 * @name GL_ARB_multitexture
 *	Extension number in OpenGL registry : 1
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/multitexture.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_multitexture is supported.
 * @return Returns \c true if \b GL_ARB_multitexture is supported, false otherwise.
 */
GLE_API bool isGL_ARB_multitexture();

/**
 * @brief void glActiveTextureARB( GLenum texture );
 */
GLE_API void glActiveTextureARB( GLenum texture );

/**
 * @brief void glClientActiveTextureARB( GLenum texture );
 */
GLE_API void glClientActiveTextureARB( GLenum texture );

/**
 * @brief void glMultiTexCoord1dARB( GLenum target, GLdouble s );
 */
GLE_API void glMultiTexCoord1dARB( GLenum target, GLdouble s );

/**
 * @brief void glMultiTexCoord1dvARB( GLenum target, const GLdouble *v );
 */
GLE_API void glMultiTexCoord1dvARB( GLenum target, const GLdouble *v );

/**
 * @brief void glMultiTexCoord1fARB( GLenum target, GLfloat s );
 */
GLE_API void glMultiTexCoord1fARB( GLenum target, GLfloat s );

/**
 * @brief void glMultiTexCoord1fvARB( GLenum target, const GLfloat *v );
 */
GLE_API void glMultiTexCoord1fvARB( GLenum target, const GLfloat *v );

/**
 * @brief void glMultiTexCoord1iARB( GLenum target, GLint s );
 */
GLE_API void glMultiTexCoord1iARB( GLenum target, GLint s );

/**
 * @brief void glMultiTexCoord1ivARB( GLenum target, const GLint *v );
 */
GLE_API void glMultiTexCoord1ivARB( GLenum target, const GLint *v );

/**
 * @brief void glMultiTexCoord1sARB( GLenum target, GLshort s );
 */
GLE_API void glMultiTexCoord1sARB( GLenum target, GLshort s );

/**
 * @brief void glMultiTexCoord1svARB( GLenum target, const GLshort *v );
 */
GLE_API void glMultiTexCoord1svARB( GLenum target, const GLshort *v );

/**
 * @brief void glMultiTexCoord2dARB( GLenum target, GLdouble s, GLdouble t );
 */
GLE_API void glMultiTexCoord2dARB( GLenum target, GLdouble s, GLdouble t );

/**
 * @brief void glMultiTexCoord2dvARB( GLenum target, const GLdouble *v );
 */
GLE_API void glMultiTexCoord2dvARB( GLenum target, const GLdouble *v );

/**
 * @brief void glMultiTexCoord2fARB( GLenum target, GLfloat s, GLfloat t );
 */
GLE_API void glMultiTexCoord2fARB( GLenum target, GLfloat s, GLfloat t );

/**
 * @brief void glMultiTexCoord2fvARB( GLenum target, const GLfloat *v );
 */
GLE_API void glMultiTexCoord2fvARB( GLenum target, const GLfloat *v );

/**
 * @brief void glMultiTexCoord2iARB( GLenum target, GLint s, GLint t );
 */
GLE_API void glMultiTexCoord2iARB( GLenum target, GLint s, GLint t );

/**
 * @brief void glMultiTexCoord2ivARB( GLenum target, const GLint *v );
 */
GLE_API void glMultiTexCoord2ivARB( GLenum target, const GLint *v );

/**
 * @brief void glMultiTexCoord2sARB( GLenum target, GLshort s, GLshort t );
 */
GLE_API void glMultiTexCoord2sARB( GLenum target, GLshort s, GLshort t );

/**
 * @brief void glMultiTexCoord2svARB( GLenum target, const GLshort *v );
 */
GLE_API void glMultiTexCoord2svARB( GLenum target, const GLshort *v );

/**
 * @brief void glMultiTexCoord3dARB( GLenum target, GLdouble s, GLdouble t, GLdouble r );
 */
GLE_API void glMultiTexCoord3dARB( GLenum target, GLdouble s, GLdouble t, GLdouble r );

/**
 * @brief void glMultiTexCoord3dvARB( GLenum target, const GLdouble *v );
 */
GLE_API void glMultiTexCoord3dvARB( GLenum target, const GLdouble *v );

/**
 * @brief void glMultiTexCoord3fARB( GLenum target, GLfloat s, GLfloat t, GLfloat r );
 */
GLE_API void glMultiTexCoord3fARB( GLenum target, GLfloat s, GLfloat t, GLfloat r );

/**
 * @brief void glMultiTexCoord3fvARB( GLenum target, const GLfloat *v );
 */
GLE_API void glMultiTexCoord3fvARB( GLenum target, const GLfloat *v );

/**
 * @brief void glMultiTexCoord3iARB( GLenum target, GLint s, GLint t, GLint r );
 */
GLE_API void glMultiTexCoord3iARB( GLenum target, GLint s, GLint t, GLint r );

/**
 * @brief void glMultiTexCoord3ivARB( GLenum target, const GLint *v );
 */
GLE_API void glMultiTexCoord3ivARB( GLenum target, const GLint *v );

/**
 * @brief void glMultiTexCoord3sARB( GLenum target, GLshort s, GLshort t, GLshort r );
 */
GLE_API void glMultiTexCoord3sARB( GLenum target, GLshort s, GLshort t, GLshort r );

/**
 * @brief void glMultiTexCoord3svARB( GLenum target, const GLshort *v );
 */
GLE_API void glMultiTexCoord3svARB( GLenum target, const GLshort *v );

/**
 * @brief void glMultiTexCoord4dARB( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q );
 */
GLE_API void glMultiTexCoord4dARB( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q );

/**
 * @brief void glMultiTexCoord4dvARB( GLenum target, const GLdouble *v );
 */
GLE_API void glMultiTexCoord4dvARB( GLenum target, const GLdouble *v );

/**
 * @brief void glMultiTexCoord4fARB( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q );
 */
GLE_API void glMultiTexCoord4fARB( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q );

/**
 * @brief void glMultiTexCoord4fvARB( GLenum target, const GLfloat *v );
 */
GLE_API void glMultiTexCoord4fvARB( GLenum target, const GLfloat *v );

/**
 * @brief void glMultiTexCoord4iARB( GLenum target, GLint s, GLint t, GLint r, GLint q );
 */
GLE_API void glMultiTexCoord4iARB( GLenum target, GLint s, GLint t, GLint r, GLint q );

/**
 * @brief void glMultiTexCoord4ivARB( GLenum target, const GLint *v );
 */
GLE_API void glMultiTexCoord4ivARB( GLenum target, const GLint *v );

/**
 * @brief void glMultiTexCoord4sARB( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q );
 */
GLE_API void glMultiTexCoord4sARB( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q );

/**
 * @brief void glMultiTexCoord4svARB( GLenum target, const GLshort *v );
 */
GLE_API void glMultiTexCoord4svARB( GLenum target, const GLshort *v );

//@}
			
			
/**
 * @name GL_ARB_occlusion_query
 *	Extension number in OpenGL registry : 29
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/occlusion_query.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_occlusion_query is supported.
 * @return Returns \c true if \b GL_ARB_occlusion_query is supported, false otherwise.
 */
GLE_API bool isGL_ARB_occlusion_query();

/**
 * @brief void glGenQueriesARB( GLsizei n, GLuint *ids );
 */
GLE_API void glGenQueriesARB( GLsizei n, GLuint *ids );

/**
 * @brief void glDeleteQueriesARB( GLsizei n, const GLuint *ids );
 */
GLE_API void glDeleteQueriesARB( GLsizei n, const GLuint *ids );

/**
 * @brief GLboolean glIsQueryARB( GLuint id );
 */
GLE_API GLboolean glIsQueryARB( GLuint id );

/**
 * @brief void glBeginQueryARB( GLenum target, GLuint id );
 */
GLE_API void glBeginQueryARB( GLenum target, GLuint id );

/**
 * @brief void glEndQueryARB( GLenum target );
 */
GLE_API void glEndQueryARB( GLenum target );

/**
 * @brief void glGetQueryivARB( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetQueryivARB( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetQueryObjectivARB( GLuint id, GLenum pname, GLint *params );
 */
GLE_API void glGetQueryObjectivARB( GLuint id, GLenum pname, GLint *params );

/**
 * @brief void glGetQueryObjectuivARB( GLuint id, GLenum pname, GLuint *params );
 */
GLE_API void glGetQueryObjectuivARB( GLuint id, GLenum pname, GLuint *params );

//@}
			
			
/**
 * @name GL_ARB_pixel_buffer_object
 *	Extension number in OpenGL registry : 42
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/pixel_buffer_object.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_pixel_buffer_object is supported.
 * @return Returns \c true if \b GL_ARB_pixel_buffer_object is supported, false otherwise.
 */
GLE_API bool isGL_ARB_pixel_buffer_object();

//@}
			
			
/**
 * @name GL_ARB_point_parameters
 *	Extension number in OpenGL registry : 14
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/point_parameters.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_point_parameters is supported.
 * @return Returns \c true if \b GL_ARB_point_parameters is supported, false otherwise.
 */
GLE_API bool isGL_ARB_point_parameters();

/**
 * @brief void glPointParameterfARB( GLenum pname, GLfloat param );
 */
GLE_API void glPointParameterfARB( GLenum pname, GLfloat param );

/**
 * @brief void glPointParameterfvARB( GLenum pname, const GLfloat *params );
 */
GLE_API void glPointParameterfvARB( GLenum pname, const GLfloat *params );

//@}
			
			
/**
 * @name GL_ARB_point_sprite
 *	Extension number in OpenGL registry : 35
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/point_sprite.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_point_sprite is supported.
 * @return Returns \c true if \b GL_ARB_point_sprite is supported, false otherwise.
 */
GLE_API bool isGL_ARB_point_sprite();

//@}
			
			
/**
 * @name GL_ARB_shader_objects
 *	Extension number in OpenGL registry : 30
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/shader_objects.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_shader_objects is supported.
 * @return Returns \c true if \b GL_ARB_shader_objects is supported, false otherwise.
 */
GLE_API bool isGL_ARB_shader_objects();

/**
 * @brief void glDeleteObjectARB( GLhandleARB obj );
 */
GLE_API void glDeleteObjectARB( GLhandleARB obj );

/**
 * @brief GLhandleARB glGetHandleARB( GLenum pname );
 */
GLE_API GLhandleARB glGetHandleARB( GLenum pname );

/**
 * @brief void glDetachObjectARB( GLhandleARB containerObj, GLhandleARB attachedObj );
 */
GLE_API void glDetachObjectARB( GLhandleARB containerObj, GLhandleARB attachedObj );

/**
 * @brief GLhandleARB glCreateShaderObjectARB( GLenum shaderType );
 */
GLE_API GLhandleARB glCreateShaderObjectARB( GLenum shaderType );

/**
 * @brief void glShaderSourceARB( GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length );
 */
GLE_API void glShaderSourceARB( GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length );

/**
 * @brief void glCompileShaderARB( GLhandleARB shaderObj );
 */
GLE_API void glCompileShaderARB( GLhandleARB shaderObj );

/**
 * @brief GLhandleARB glCreateProgramObjectARB( void );
 */
GLE_API GLhandleARB glCreateProgramObjectARB( void );

/**
 * @brief void glAttachObjectARB( GLhandleARB containerObj, GLhandleARB obj );
 */
GLE_API void glAttachObjectARB( GLhandleARB containerObj, GLhandleARB obj );

/**
 * @brief void glLinkProgramARB( GLhandleARB programObj );
 */
GLE_API void glLinkProgramARB( GLhandleARB programObj );

/**
 * @brief void glUseProgramObjectARB( GLhandleARB programObj );
 */
GLE_API void glUseProgramObjectARB( GLhandleARB programObj );

/**
 * @brief void glValidateProgramARB( GLhandleARB programObj );
 */
GLE_API void glValidateProgramARB( GLhandleARB programObj );

/**
 * @brief void glUniform1fARB( GLint location, GLfloat v0 );
 */
GLE_API void glUniform1fARB( GLint location, GLfloat v0 );

/**
 * @brief void glUniform2fARB( GLint location, GLfloat v0, GLfloat v1 );
 */
GLE_API void glUniform2fARB( GLint location, GLfloat v0, GLfloat v1 );

/**
 * @brief void glUniform3fARB( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );
 */
GLE_API void glUniform3fARB( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );

/**
 * @brief void glUniform4fARB( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );
 */
GLE_API void glUniform4fARB( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );

/**
 * @brief void glUniform1iARB( GLint location, GLint v0 );
 */
GLE_API void glUniform1iARB( GLint location, GLint v0 );

/**
 * @brief void glUniform2iARB( GLint location, GLint v0, GLint v1 );
 */
GLE_API void glUniform2iARB( GLint location, GLint v0, GLint v1 );

/**
 * @brief void glUniform3iARB( GLint location, GLint v0, GLint v1, GLint v2 );
 */
GLE_API void glUniform3iARB( GLint location, GLint v0, GLint v1, GLint v2 );

/**
 * @brief void glUniform4iARB( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );
 */
GLE_API void glUniform4iARB( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );

/**
 * @brief void glUniform1fvARB( GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glUniform1fvARB( GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glUniform2fvARB( GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glUniform2fvARB( GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glUniform3fvARB( GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glUniform3fvARB( GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glUniform4fvARB( GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glUniform4fvARB( GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glUniform1ivARB( GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glUniform1ivARB( GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glUniform2ivARB( GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glUniform2ivARB( GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glUniform3ivARB( GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glUniform3ivARB( GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glUniform4ivARB( GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glUniform4ivARB( GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glUniformMatrix2fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix2fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glUniformMatrix3fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix3fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glUniformMatrix4fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix4fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glGetObjectParameterfvARB( GLhandleARB obj, GLenum pname, GLfloat *params );
 */
GLE_API void glGetObjectParameterfvARB( GLhandleARB obj, GLenum pname, GLfloat *params );

/**
 * @brief void glGetObjectParameterivARB( GLhandleARB obj, GLenum pname, GLint *params );
 */
GLE_API void glGetObjectParameterivARB( GLhandleARB obj, GLenum pname, GLint *params );

/**
 * @brief void glGetInfoLogARB( GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog );
 */
GLE_API void glGetInfoLogARB( GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog );

/**
 * @brief void glGetAttachedObjectsARB( GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj );
 */
GLE_API void glGetAttachedObjectsARB( GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj );

/**
 * @brief GLint glGetUniformLocationARB( GLhandleARB programObj, const GLcharARB *name );
 */
GLE_API GLint glGetUniformLocationARB( GLhandleARB programObj, const GLcharARB *name );

/**
 * @brief void glGetActiveUniformARB( GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name );
 */
GLE_API void glGetActiveUniformARB( GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name );

/**
 * @brief void glGetUniformfvARB( GLhandleARB programObj, GLint location, GLfloat *params );
 */
GLE_API void glGetUniformfvARB( GLhandleARB programObj, GLint location, GLfloat *params );

/**
 * @brief void glGetUniformivARB( GLhandleARB programObj, GLint location, GLint *params );
 */
GLE_API void glGetUniformivARB( GLhandleARB programObj, GLint location, GLint *params );

/**
 * @brief void glGetShaderSourceARB( GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source );
 */
GLE_API void glGetShaderSourceARB( GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source );

//@}
			
			
/**
 * @name GL_ARB_shading_language_100
 *	Extension number in OpenGL registry : 33
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/shading_language_100.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_shading_language_100 is supported.
 * @return Returns \c true if \b GL_ARB_shading_language_100 is supported, false otherwise.
 */
GLE_API bool isGL_ARB_shading_language_100();

//@}
			
			
/**
 * @name GL_ARB_shadow
 *	Extension number in OpenGL registry : 23
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/shadow.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_shadow is supported.
 * @return Returns \c true if \b GL_ARB_shadow is supported, false otherwise.
 */
GLE_API bool isGL_ARB_shadow();

//@}
			
			
/**
 * @name GL_ARB_shadow_ambient
 *	Extension number in OpenGL registry : 24
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/shadow_ambient.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_shadow_ambient is supported.
 * @return Returns \c true if \b GL_ARB_shadow_ambient is supported, false otherwise.
 */
GLE_API bool isGL_ARB_shadow_ambient();

//@}
			
			
/**
 * @name GL_ARB_texture_border_clamp
 *	Extension number in OpenGL registry : 13
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_border_clamp.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_border_clamp is supported.
 * @return Returns \c true if \b GL_ARB_texture_border_clamp is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_border_clamp();

//@}
			
			
/**
 * @name GL_ARB_texture_compression
 *	Extension number in OpenGL registry : 12
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_compression.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_compression is supported.
 * @return Returns \c true if \b GL_ARB_texture_compression is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_compression();

/**
 * @brief void glCompressedTexImage3DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexImage3DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexImage2DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexImage2DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexImage1DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexImage1DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexSubImage3DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexSubImage3DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexSubImage2DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexSubImage2DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexSubImage1DARB( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexSubImage1DARB( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glGetCompressedTexImageARB( GLenum target, GLint level, GLvoid *img );
 */
GLE_API void glGetCompressedTexImageARB( GLenum target, GLint level, GLvoid *img );

//@}
			
			
/**
 * @name GL_ARB_texture_cube_map
 *	Extension number in OpenGL registry : 7
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_cube_map.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_cube_map is supported.
 * @return Returns \c true if \b GL_ARB_texture_cube_map is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_cube_map();

//@}
			
			
/**
 * @name GL_ARB_texture_env_add
 *	Extension number in OpenGL registry : 6
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_env_add.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_env_add is supported.
 * @return Returns \c true if \b GL_ARB_texture_env_add is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_env_add();

//@}
			
			
/**
 * @name GL_ARB_texture_env_combine
 *	Extension number in OpenGL registry : 17
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_env_combine.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_env_combine is supported.
 * @return Returns \c true if \b GL_ARB_texture_env_combine is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_env_combine();

//@}
			
			
/**
 * @name GL_ARB_texture_env_crossbar
 *	Extension number in OpenGL registry : 18
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_env_crossbar.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_env_crossbar is supported.
 * @return Returns \c true if \b GL_ARB_texture_env_crossbar is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_env_crossbar();

//@}
			
			
/**
 * @name GL_ARB_texture_env_dot3
 *	Extension number in OpenGL registry : 19
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_env_dot3.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_env_dot3 is supported.
 * @return Returns \c true if \b GL_ARB_texture_env_dot3 is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_env_dot3();

//@}
			
			
/**
 * @name GL_ARB_texture_float
 *	Extension number in OpenGL registry : 41
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_float.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_float is supported.
 * @return Returns \c true if \b GL_ARB_texture_float is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_float();

//@}
			
			
/**
 * @name GL_ARB_texture_mirrored_repeat
 *	Extension number in OpenGL registry : 21
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_mirrored_repeat.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_mirrored_repeat is supported.
 * @return Returns \c true if \b GL_ARB_texture_mirrored_repeat is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_mirrored_repeat();

//@}
			
			
/**
 * @name GL_ARB_texture_non_power_of_two
 *	Extension number in OpenGL registry : 34
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_non_power_of_two.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_non_power_of_two is supported.
 * @return Returns \c true if \b GL_ARB_texture_non_power_of_two is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_non_power_of_two();

//@}
			
			
/**
 * @name GL_ARB_texture_rectangle
 *	Extension number in OpenGL registry : 38
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_rectangle.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_rectangle is supported.
 * @return Returns \c true if \b GL_ARB_texture_rectangle is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_rectangle();

//@}
			
			
/**
 * @name GL_ARB_transpose_matrix
 *	Extension number in OpenGL registry : 3
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/transpose_matrix.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_transpose_matrix is supported.
 * @return Returns \c true if \b GL_ARB_transpose_matrix is supported, false otherwise.
 */
GLE_API bool isGL_ARB_transpose_matrix();

/**
 * @brief void glLoadTransposeMatrixfARB( const GLfloat *m );
 */
GLE_API void glLoadTransposeMatrixfARB( const GLfloat *m );

/**
 * @brief void glLoadTransposeMatrixdARB( const GLdouble *m );
 */
GLE_API void glLoadTransposeMatrixdARB( const GLdouble *m );

/**
 * @brief void glMultTransposeMatrixfARB( const GLfloat *m );
 */
GLE_API void glMultTransposeMatrixfARB( const GLfloat *m );

/**
 * @brief void glMultTransposeMatrixdARB( const GLdouble *m );
 */
GLE_API void glMultTransposeMatrixdARB( const GLdouble *m );

//@}
			
			
/**
 * @name GL_ARB_vertex_blend
 *	Extension number in OpenGL registry : 15
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/vertex_blend.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_vertex_blend is supported.
 * @return Returns \c true if \b GL_ARB_vertex_blend is supported, false otherwise.
 */
GLE_API bool isGL_ARB_vertex_blend();

/**
 * @brief void glWeightbvARB( GLint size, const GLbyte *weights );
 */
GLE_API void glWeightbvARB( GLint size, const GLbyte *weights );

/**
 * @brief void glWeightsvARB( GLint size, const GLshort *weights );
 */
GLE_API void glWeightsvARB( GLint size, const GLshort *weights );

/**
 * @brief void glWeightivARB( GLint size, const GLint *weights );
 */
GLE_API void glWeightivARB( GLint size, const GLint *weights );

/**
 * @brief void glWeightfvARB( GLint size, const GLfloat *weights );
 */
GLE_API void glWeightfvARB( GLint size, const GLfloat *weights );

/**
 * @brief void glWeightdvARB( GLint size, const GLdouble *weights );
 */
GLE_API void glWeightdvARB( GLint size, const GLdouble *weights );

/**
 * @brief void glWeightubvARB( GLint size, const GLubyte *weights );
 */
GLE_API void glWeightubvARB( GLint size, const GLubyte *weights );

/**
 * @brief void glWeightusvARB( GLint size, const GLushort *weights );
 */
GLE_API void glWeightusvARB( GLint size, const GLushort *weights );

/**
 * @brief void glWeightuivARB( GLint size, const GLuint *weights );
 */
GLE_API void glWeightuivARB( GLint size, const GLuint *weights );

/**
 * @brief void glWeightPointerARB( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glWeightPointerARB( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );

/**
 * @brief void glVertexBlendARB( GLint count );
 */
GLE_API void glVertexBlendARB( GLint count );

//@}
			
			
/**
 * @name GL_ARB_vertex_buffer_object
 *	Extension number in OpenGL registry : 28
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/vertex_buffer_object.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_vertex_buffer_object is supported.
 * @return Returns \c true if \b GL_ARB_vertex_buffer_object is supported, false otherwise.
 */
GLE_API bool isGL_ARB_vertex_buffer_object();

/**
 * @brief void glBindBufferARB( GLenum target, GLuint buffer );
 */
GLE_API void glBindBufferARB( GLenum target, GLuint buffer );

/**
 * @brief void glDeleteBuffersARB( GLsizei n, const GLuint *buffers );
 */
GLE_API void glDeleteBuffersARB( GLsizei n, const GLuint *buffers );

/**
 * @brief void glGenBuffersARB( GLsizei n, GLuint *buffers );
 */
GLE_API void glGenBuffersARB( GLsizei n, GLuint *buffers );

/**
 * @brief GLboolean glIsBufferARB( GLuint buffer );
 */
GLE_API GLboolean glIsBufferARB( GLuint buffer );

/**
 * @brief void glBufferDataARB( GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage );
 */
GLE_API void glBufferDataARB( GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage );

/**
 * @brief void glBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data );
 */
GLE_API void glBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data );

/**
 * @brief void glGetBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data );
 */
GLE_API void glGetBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data );

/**
 * @brief GLvoid* glMapBufferARB( GLenum target, GLenum access );
 */
GLE_API GLvoid* glMapBufferARB( GLenum target, GLenum access );

/**
 * @brief GLboolean glUnmapBufferARB( GLenum target );
 */
GLE_API GLboolean glUnmapBufferARB( GLenum target );

/**
 * @brief void glGetBufferParameterivARB( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetBufferParameterivARB( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetBufferPointervARB( GLenum target, GLenum pname, GLvoid* *params );
 */
GLE_API void glGetBufferPointervARB( GLenum target, GLenum pname, GLvoid* *params );

//@}
			
			
/**
 * @name GL_ARB_vertex_program
 *	Extension number in OpenGL registry : 26
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/vertex_program.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_vertex_program is supported.
 * @return Returns \c true if \b GL_ARB_vertex_program is supported, false otherwise.
 */
GLE_API bool isGL_ARB_vertex_program();

/**
 * @brief void glVertexAttrib1dARB( GLuint index, GLdouble x );
 */
GLE_API void glVertexAttrib1dARB( GLuint index, GLdouble x );

/**
 * @brief void glVertexAttrib1dvARB( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib1dvARB( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib1fARB( GLuint index, GLfloat x );
 */
GLE_API void glVertexAttrib1fARB( GLuint index, GLfloat x );

/**
 * @brief void glVertexAttrib1fvARB( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib1fvARB( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib1sARB( GLuint index, GLshort x );
 */
GLE_API void glVertexAttrib1sARB( GLuint index, GLshort x );

/**
 * @brief void glVertexAttrib1svARB( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib1svARB( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib2dARB( GLuint index, GLdouble x, GLdouble y );
 */
GLE_API void glVertexAttrib2dARB( GLuint index, GLdouble x, GLdouble y );

/**
 * @brief void glVertexAttrib2dvARB( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib2dvARB( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib2fARB( GLuint index, GLfloat x, GLfloat y );
 */
GLE_API void glVertexAttrib2fARB( GLuint index, GLfloat x, GLfloat y );

/**
 * @brief void glVertexAttrib2fvARB( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib2fvARB( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib2sARB( GLuint index, GLshort x, GLshort y );
 */
GLE_API void glVertexAttrib2sARB( GLuint index, GLshort x, GLshort y );

/**
 * @brief void glVertexAttrib2svARB( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib2svARB( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib3dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glVertexAttrib3dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glVertexAttrib3dvARB( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib3dvARB( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib3fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glVertexAttrib3fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glVertexAttrib3fvARB( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib3fvARB( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib3sARB( GLuint index, GLshort x, GLshort y, GLshort z );
 */
GLE_API void glVertexAttrib3sARB( GLuint index, GLshort x, GLshort y, GLshort z );

/**
 * @brief void glVertexAttrib3svARB( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib3svARB( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib4NbvARB( GLuint index, const GLbyte *v );
 */
GLE_API void glVertexAttrib4NbvARB( GLuint index, const GLbyte *v );

/**
 * @brief void glVertexAttrib4NivARB( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttrib4NivARB( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttrib4NsvARB( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib4NsvARB( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib4NubARB( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );
 */
GLE_API void glVertexAttrib4NubARB( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );

/**
 * @brief void glVertexAttrib4NubvARB( GLuint index, const GLubyte *v );
 */
GLE_API void glVertexAttrib4NubvARB( GLuint index, const GLubyte *v );

/**
 * @brief void glVertexAttrib4NuivARB( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttrib4NuivARB( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttrib4NusvARB( GLuint index, const GLushort *v );
 */
GLE_API void glVertexAttrib4NusvARB( GLuint index, const GLushort *v );

/**
 * @brief void glVertexAttrib4bvARB( GLuint index, const GLbyte *v );
 */
GLE_API void glVertexAttrib4bvARB( GLuint index, const GLbyte *v );

/**
 * @brief void glVertexAttrib4dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glVertexAttrib4dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glVertexAttrib4dvARB( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib4dvARB( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib4fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glVertexAttrib4fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glVertexAttrib4fvARB( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib4fvARB( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib4ivARB( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttrib4ivARB( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttrib4sARB( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );
 */
GLE_API void glVertexAttrib4sARB( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );

/**
 * @brief void glVertexAttrib4svARB( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib4svARB( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib4ubvARB( GLuint index, const GLubyte *v );
 */
GLE_API void glVertexAttrib4ubvARB( GLuint index, const GLubyte *v );

/**
 * @brief void glVertexAttrib4uivARB( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttrib4uivARB( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttrib4usvARB( GLuint index, const GLushort *v );
 */
GLE_API void glVertexAttrib4usvARB( GLuint index, const GLushort *v );

/**
 * @brief void glVertexAttribPointerARB( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glVertexAttribPointerARB( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer );

/**
 * @brief void glEnableVertexAttribArrayARB( GLuint index );
 */
GLE_API void glEnableVertexAttribArrayARB( GLuint index );

/**
 * @brief void glDisableVertexAttribArrayARB( GLuint index );
 */
GLE_API void glDisableVertexAttribArrayARB( GLuint index );

/**
 * @brief void glProgramStringARB( GLenum target, GLenum format, GLsizei len, const GLvoid *string );
 */
GLE_API void glProgramStringARB( GLenum target, GLenum format, GLsizei len, const GLvoid *string );

/**
 * @brief void glBindProgramARB( GLenum target, GLuint program );
 */
GLE_API void glBindProgramARB( GLenum target, GLuint program );

/**
 * @brief void glDeleteProgramsARB( GLsizei n, const GLuint *programs );
 */
GLE_API void glDeleteProgramsARB( GLsizei n, const GLuint *programs );

/**
 * @brief void glGenProgramsARB( GLsizei n, GLuint *programs );
 */
GLE_API void glGenProgramsARB( GLsizei n, GLuint *programs );

/**
 * @brief void glProgramEnvParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glProgramEnvParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glProgramEnvParameter4dvARB( GLenum target, GLuint index, const GLdouble *params );
 */
GLE_API void glProgramEnvParameter4dvARB( GLenum target, GLuint index, const GLdouble *params );

/**
 * @brief void glProgramEnvParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glProgramEnvParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glProgramEnvParameter4fvARB( GLenum target, GLuint index, const GLfloat *params );
 */
GLE_API void glProgramEnvParameter4fvARB( GLenum target, GLuint index, const GLfloat *params );

/**
 * @brief void glProgramLocalParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glProgramLocalParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glProgramLocalParameter4dvARB( GLenum target, GLuint index, const GLdouble *params );
 */
GLE_API void glProgramLocalParameter4dvARB( GLenum target, GLuint index, const GLdouble *params );

/**
 * @brief void glProgramLocalParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glProgramLocalParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glProgramLocalParameter4fvARB( GLenum target, GLuint index, const GLfloat *params );
 */
GLE_API void glProgramLocalParameter4fvARB( GLenum target, GLuint index, const GLfloat *params );

/**
 * @brief void glGetProgramEnvParameterdvARB( GLenum target, GLuint index, GLdouble *params );
 */
GLE_API void glGetProgramEnvParameterdvARB( GLenum target, GLuint index, GLdouble *params );

/**
 * @brief void glGetProgramEnvParameterfvARB( GLenum target, GLuint index, GLfloat *params );
 */
GLE_API void glGetProgramEnvParameterfvARB( GLenum target, GLuint index, GLfloat *params );

/**
 * @brief void glGetProgramLocalParameterdvARB( GLenum target, GLuint index, GLdouble *params );
 */
GLE_API void glGetProgramLocalParameterdvARB( GLenum target, GLuint index, GLdouble *params );

/**
 * @brief void glGetProgramLocalParameterfvARB( GLenum target, GLuint index, GLfloat *params );
 */
GLE_API void glGetProgramLocalParameterfvARB( GLenum target, GLuint index, GLfloat *params );

/**
 * @brief void glGetProgramivARB( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetProgramivARB( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetProgramStringARB( GLenum target, GLenum pname, GLvoid *string );
 */
GLE_API void glGetProgramStringARB( GLenum target, GLenum pname, GLvoid *string );

/**
 * @brief void glGetVertexAttribdvARB( GLuint index, GLenum pname, GLdouble *params );
 */
GLE_API void glGetVertexAttribdvARB( GLuint index, GLenum pname, GLdouble *params );

/**
 * @brief void glGetVertexAttribfvARB( GLuint index, GLenum pname, GLfloat *params );
 */
GLE_API void glGetVertexAttribfvARB( GLuint index, GLenum pname, GLfloat *params );

/**
 * @brief void glGetVertexAttribivARB( GLuint index, GLenum pname, GLint *params );
 */
GLE_API void glGetVertexAttribivARB( GLuint index, GLenum pname, GLint *params );

/**
 * @brief void glGetVertexAttribPointervARB( GLuint index, GLenum pname, GLvoid* *pointer );
 */
GLE_API void glGetVertexAttribPointervARB( GLuint index, GLenum pname, GLvoid* *pointer );

/**
 * @brief GLboolean glIsProgramARB( GLuint program );
 */
GLE_API GLboolean glIsProgramARB( GLuint program );

//@}
			
			
/**
 * @name GL_ARB_vertex_shader
 *	Extension number in OpenGL registry : 31
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/vertex_shader.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_vertex_shader is supported.
 * @return Returns \c true if \b GL_ARB_vertex_shader is supported, false otherwise.
 */
GLE_API bool isGL_ARB_vertex_shader();

/**
 * @brief void glBindAttribLocationARB( GLhandleARB programObj, GLuint index, const GLcharARB *name );
 */
GLE_API void glBindAttribLocationARB( GLhandleARB programObj, GLuint index, const GLcharARB *name );

/**
 * @brief void glGetActiveAttribARB( GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name );
 */
GLE_API void glGetActiveAttribARB( GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name );

/**
 * @brief GLint glGetAttribLocationARB( GLhandleARB programObj, const GLcharARB *name );
 */
GLE_API GLint glGetAttribLocationARB( GLhandleARB programObj, const GLcharARB *name );

//@}
			
			
/**
 * @name GL_ARB_window_pos
 *	Extension number in OpenGL registry : 25
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/window_pos.txt
 *	@ingroup GL_ARB
 */
//@{
/**
 * @brief Test if \b GL_ARB_window_pos is supported.
 * @return Returns \c true if \b GL_ARB_window_pos is supported, false otherwise.
 */
GLE_API bool isGL_ARB_window_pos();

/**
 * @brief void glWindowPos2dARB( GLdouble x, GLdouble y );
 */
GLE_API void glWindowPos2dARB( GLdouble x, GLdouble y );

/**
 * @brief void glWindowPos2dvARB( const GLdouble *v );
 */
GLE_API void glWindowPos2dvARB( const GLdouble *v );

/**
 * @brief void glWindowPos2fARB( GLfloat x, GLfloat y );
 */
GLE_API void glWindowPos2fARB( GLfloat x, GLfloat y );

/**
 * @brief void glWindowPos2fvARB( const GLfloat *v );
 */
GLE_API void glWindowPos2fvARB( const GLfloat *v );

/**
 * @brief void glWindowPos2iARB( GLint x, GLint y );
 */
GLE_API void glWindowPos2iARB( GLint x, GLint y );

/**
 * @brief void glWindowPos2ivARB( const GLint *v );
 */
GLE_API void glWindowPos2ivARB( const GLint *v );

/**
 * @brief void glWindowPos2sARB( GLshort x, GLshort y );
 */
GLE_API void glWindowPos2sARB( GLshort x, GLshort y );

/**
 * @brief void glWindowPos2svARB( const GLshort *v );
 */
GLE_API void glWindowPos2svARB( const GLshort *v );

/**
 * @brief void glWindowPos3dARB( GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glWindowPos3dARB( GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glWindowPos3dvARB( const GLdouble *v );
 */
GLE_API void glWindowPos3dvARB( const GLdouble *v );

/**
 * @brief void glWindowPos3fARB( GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glWindowPos3fARB( GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glWindowPos3fvARB( const GLfloat *v );
 */
GLE_API void glWindowPos3fvARB( const GLfloat *v );

/**
 * @brief void glWindowPos3iARB( GLint x, GLint y, GLint z );
 */
GLE_API void glWindowPos3iARB( GLint x, GLint y, GLint z );

/**
 * @brief void glWindowPos3ivARB( const GLint *v );
 */
GLE_API void glWindowPos3ivARB( const GLint *v );

/**
 * @brief void glWindowPos3sARB( GLshort x, GLshort y, GLshort z );
 */
GLE_API void glWindowPos3sARB( GLshort x, GLshort y, GLshort z );

/**
 * @brief void glWindowPos3svARB( const GLshort *v );
 */
GLE_API void glWindowPos3svARB( const GLshort *v );

//@}
			
			
/**
 * @name GL_ATI_draw_buffers
 *	Extension number in OpenGL registry : 277
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/draw_buffers.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_draw_buffers is supported.
 * @return Returns \c true if \b GL_ATI_draw_buffers is supported, false otherwise.
 */
GLE_API bool isGL_ATI_draw_buffers();

/**
 * @brief void glDrawBuffersATI( GLsizei n, const GLenum *bufs );
 */
GLE_API void glDrawBuffersATI( GLsizei n, const GLenum *bufs );

//@}
			
			
/**
 * @name GL_ATI_element_array
 *	Extension number in OpenGL registry : 256
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/element_array.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_element_array is supported.
 * @return Returns \c true if \b GL_ATI_element_array is supported, false otherwise.
 */
GLE_API bool isGL_ATI_element_array();

/**
 * @brief void glElementPointerATI( GLenum type, const GLvoid *pointer );
 */
GLE_API void glElementPointerATI( GLenum type, const GLvoid *pointer );

/**
 * @brief void glDrawElementArrayATI( GLenum mode, GLsizei count );
 */
GLE_API void glDrawElementArrayATI( GLenum mode, GLsizei count );

/**
 * @brief void glDrawRangeElementArrayATI( GLenum mode, GLuint start, GLuint end, GLsizei count );
 */
GLE_API void glDrawRangeElementArrayATI( GLenum mode, GLuint start, GLuint end, GLsizei count );

//@}
			
			
/**
 * @name GL_ATI_envmap_bumpmap
 *	Extension number in OpenGL registry : 244
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/envmap_bumpmap.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_envmap_bumpmap is supported.
 * @return Returns \c true if \b GL_ATI_envmap_bumpmap is supported, false otherwise.
 */
GLE_API bool isGL_ATI_envmap_bumpmap();

/**
 * @brief void glTexBumpParameterivATI( GLenum pname, const GLint *param );
 */
GLE_API void glTexBumpParameterivATI( GLenum pname, const GLint *param );

/**
 * @brief void glTexBumpParameterfvATI( GLenum pname, const GLfloat *param );
 */
GLE_API void glTexBumpParameterfvATI( GLenum pname, const GLfloat *param );

/**
 * @brief void glGetTexBumpParameterivATI( GLenum pname, GLint *param );
 */
GLE_API void glGetTexBumpParameterivATI( GLenum pname, GLint *param );

/**
 * @brief void glGetTexBumpParameterfvATI( GLenum pname, GLfloat *param );
 */
GLE_API void glGetTexBumpParameterfvATI( GLenum pname, GLfloat *param );

//@}
			
			
/**
 * @name GL_ATI_fragment_shader
 *	Extension number in OpenGL registry : 245
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/fragment_shader.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_fragment_shader is supported.
 * @return Returns \c true if \b GL_ATI_fragment_shader is supported, false otherwise.
 */
GLE_API bool isGL_ATI_fragment_shader();

/**
 * @brief GLuint glGenFragmentShadersATI( GLuint range );
 */
GLE_API GLuint glGenFragmentShadersATI( GLuint range );

/**
 * @brief void glBindFragmentShaderATI( GLuint id );
 */
GLE_API void glBindFragmentShaderATI( GLuint id );

/**
 * @brief void glDeleteFragmentShaderATI( GLuint id );
 */
GLE_API void glDeleteFragmentShaderATI( GLuint id );

/**
 * @brief void glBeginFragmentShaderATI( void );
 */
GLE_API void glBeginFragmentShaderATI( void );

/**
 * @brief void glEndFragmentShaderATI( void );
 */
GLE_API void glEndFragmentShaderATI( void );

/**
 * @brief void glPassTexCoordATI( GLuint dst, GLuint coord, GLenum swizzle );
 */
GLE_API void glPassTexCoordATI( GLuint dst, GLuint coord, GLenum swizzle );

/**
 * @brief void glSampleMapATI( GLuint dst, GLuint interp, GLenum swizzle );
 */
GLE_API void glSampleMapATI( GLuint dst, GLuint interp, GLenum swizzle );

/**
 * @brief void glColorFragmentOp1ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod );
 */
GLE_API void glColorFragmentOp1ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod );

/**
 * @brief void glColorFragmentOp2ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod );
 */
GLE_API void glColorFragmentOp2ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod );

/**
 * @brief void glColorFragmentOp3ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod );
 */
GLE_API void glColorFragmentOp3ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod );

/**
 * @brief void glAlphaFragmentOp1ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod );
 */
GLE_API void glAlphaFragmentOp1ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod );

/**
 * @brief void glAlphaFragmentOp2ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod );
 */
GLE_API void glAlphaFragmentOp2ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod );

/**
 * @brief void glAlphaFragmentOp3ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod );
 */
GLE_API void glAlphaFragmentOp3ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod );

/**
 * @brief void glSetFragmentShaderConstantATI( GLuint dst, const GLfloat *value );
 */
GLE_API void glSetFragmentShaderConstantATI( GLuint dst, const GLfloat *value );

//@}
			
			
/**
 * @name GL_ATI_map_object_buffer
 *	Extension number in OpenGL registry : 288
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/map_object_buffer.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_map_object_buffer is supported.
 * @return Returns \c true if \b GL_ATI_map_object_buffer is supported, false otherwise.
 */
GLE_API bool isGL_ATI_map_object_buffer();

/**
 * @brief GLvoid* glMapObjectBufferATI( GLuint buffer );
 */
GLE_API GLvoid* glMapObjectBufferATI( GLuint buffer );

/**
 * @brief void glUnmapObjectBufferATI( GLuint buffer );
 */
GLE_API void glUnmapObjectBufferATI( GLuint buffer );

//@}

			
/**	
 * @name GL_ATI_pixel_format_float
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_ATI_pixel_format_float is supported.
 * @return Returns \c true if \b GL_ATI_pixel_format_float is supported, false otherwise.
 */
GLE_API bool isGL_ATI_pixel_format_float();

//@}
			
			
/**
 * @name GL_ATI_pn_triangles
 *	Extension number in OpenGL registry : 246
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/pn_triangles.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_pn_triangles is supported.
 * @return Returns \c true if \b GL_ATI_pn_triangles is supported, false otherwise.
 */
GLE_API bool isGL_ATI_pn_triangles();

/**
 * @brief void glPNTrianglesiATI( GLenum pname, GLint param );
 */
GLE_API void glPNTrianglesiATI( GLenum pname, GLint param );

/**
 * @brief void glPNTrianglesfATI( GLenum pname, GLfloat param );
 */
GLE_API void glPNTrianglesfATI( GLenum pname, GLfloat param );

//@}
			
			
/**
 * @name GL_ATI_separate_stencil
 *	Extension number in OpenGL registry : 289
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/separate_stencil.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_separate_stencil is supported.
 * @return Returns \c true if \b GL_ATI_separate_stencil is supported, false otherwise.
 */
GLE_API bool isGL_ATI_separate_stencil();

/**
 * @brief void glStencilOpSeparateATI( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass );
 */
GLE_API void glStencilOpSeparateATI( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass );

/**
 * @brief void glStencilFuncSeparateATI( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask );
 */
GLE_API void glStencilFuncSeparateATI( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask );

//@}
			
			
/**
 * @name GL_ATI_text_fragment_shader
 *	Extension number in OpenGL registry : 269
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/text_fragment_shader.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_text_fragment_shader is supported.
 * @return Returns \c true if \b GL_ATI_text_fragment_shader is supported, false otherwise.
 */
GLE_API bool isGL_ATI_text_fragment_shader();

//@}
			
			
/**
 * @name GL_ATI_texture_env_combine3
 *	Extension number in OpenGL registry : 279
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/texture_env_combine3.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_texture_env_combine3 is supported.
 * @return Returns \c true if \b GL_ATI_texture_env_combine3 is supported, false otherwise.
 */
GLE_API bool isGL_ATI_texture_env_combine3();

//@}
			
			
/**
 * @name GL_ATI_texture_float
 *	Extension number in OpenGL registry : 280
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/texture_float.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_texture_float is supported.
 * @return Returns \c true if \b GL_ATI_texture_float is supported, false otherwise.
 */
GLE_API bool isGL_ATI_texture_float();

//@}
			
			
/**
 * @name GL_ATI_texture_mirror_once
 *	Extension number in OpenGL registry : 221
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/texture_mirror_once.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_texture_mirror_once is supported.
 * @return Returns \c true if \b GL_ATI_texture_mirror_once is supported, false otherwise.
 */
GLE_API bool isGL_ATI_texture_mirror_once();

//@}
			
			
/**
 * @name GL_ATI_vertex_array_object
 *	Extension number in OpenGL registry : 247
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/vertex_array_object.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_vertex_array_object is supported.
 * @return Returns \c true if \b GL_ATI_vertex_array_object is supported, false otherwise.
 */
GLE_API bool isGL_ATI_vertex_array_object();

/**
 * @brief GLuint glNewObjectBufferATI( GLsizei size, const GLvoid *pointer, GLenum usage );
 */
GLE_API GLuint glNewObjectBufferATI( GLsizei size, const GLvoid *pointer, GLenum usage );

/**
 * @brief GLboolean glIsObjectBufferATI( GLuint buffer );
 */
GLE_API GLboolean glIsObjectBufferATI( GLuint buffer );

/**
 * @brief void glUpdateObjectBufferATI( GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve );
 */
GLE_API void glUpdateObjectBufferATI( GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve );

/**
 * @brief void glGetObjectBufferfvATI( GLuint buffer, GLenum pname, GLfloat *params );
 */
GLE_API void glGetObjectBufferfvATI( GLuint buffer, GLenum pname, GLfloat *params );

/**
 * @brief void glGetObjectBufferivATI( GLuint buffer, GLenum pname, GLint *params );
 */
GLE_API void glGetObjectBufferivATI( GLuint buffer, GLenum pname, GLint *params );

/**
 * @brief void glFreeObjectBufferATI( GLuint buffer );
 */
GLE_API void glFreeObjectBufferATI( GLuint buffer );

/**
 * @brief void glArrayObjectATI( GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset );
 */
GLE_API void glArrayObjectATI( GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset );

/**
 * @brief void glGetArrayObjectfvATI( GLenum array, GLenum pname, GLfloat *params );
 */
GLE_API void glGetArrayObjectfvATI( GLenum array, GLenum pname, GLfloat *params );

/**
 * @brief void glGetArrayObjectivATI( GLenum array, GLenum pname, GLint *params );
 */
GLE_API void glGetArrayObjectivATI( GLenum array, GLenum pname, GLint *params );

/**
 * @brief void glVariantArrayObjectATI( GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset );
 */
GLE_API void glVariantArrayObjectATI( GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset );

/**
 * @brief void glGetVariantArrayObjectfvATI( GLuint id, GLenum pname, GLfloat *params );
 */
GLE_API void glGetVariantArrayObjectfvATI( GLuint id, GLenum pname, GLfloat *params );

/**
 * @brief void glGetVariantArrayObjectivATI( GLuint id, GLenum pname, GLint *params );
 */
GLE_API void glGetVariantArrayObjectivATI( GLuint id, GLenum pname, GLint *params );

//@}
			
			
/**
 * @name GL_ATI_vertex_attrib_array_object
 *	Extension number in OpenGL registry : 290
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/vertex_attrib_array_object.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_vertex_attrib_array_object is supported.
 * @return Returns \c true if \b GL_ATI_vertex_attrib_array_object is supported, false otherwise.
 */
GLE_API bool isGL_ATI_vertex_attrib_array_object();

/**
 * @brief void glVertexAttribArrayObjectATI( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset );
 */
GLE_API void glVertexAttribArrayObjectATI( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset );

/**
 * @brief void glGetVertexAttribArrayObjectfvATI( GLuint index, GLenum pname, GLfloat *params );
 */
GLE_API void glGetVertexAttribArrayObjectfvATI( GLuint index, GLenum pname, GLfloat *params );

/**
 * @brief void glGetVertexAttribArrayObjectivATI( GLuint index, GLenum pname, GLint *params );
 */
GLE_API void glGetVertexAttribArrayObjectivATI( GLuint index, GLenum pname, GLint *params );

//@}
			
			
/**
 * @name GL_ATI_vertex_streams
 *	Extension number in OpenGL registry : 249
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/vertex_streams.txt
 *	@ingroup GL_ATI
 */
//@{
/**
 * @brief Test if \b GL_ATI_vertex_streams is supported.
 * @return Returns \c true if \b GL_ATI_vertex_streams is supported, false otherwise.
 */
GLE_API bool isGL_ATI_vertex_streams();

/**
 * @brief void glVertexStream1sATI( GLenum stream, GLshort x );
 */
GLE_API void glVertexStream1sATI( GLenum stream, GLshort x );

/**
 * @brief void glVertexStream1svATI( GLenum stream, const GLshort *coords );
 */
GLE_API void glVertexStream1svATI( GLenum stream, const GLshort *coords );

/**
 * @brief void glVertexStream1iATI( GLenum stream, GLint x );
 */
GLE_API void glVertexStream1iATI( GLenum stream, GLint x );

/**
 * @brief void glVertexStream1ivATI( GLenum stream, const GLint *coords );
 */
GLE_API void glVertexStream1ivATI( GLenum stream, const GLint *coords );

/**
 * @brief void glVertexStream1fATI( GLenum stream, GLfloat x );
 */
GLE_API void glVertexStream1fATI( GLenum stream, GLfloat x );

/**
 * @brief void glVertexStream1fvATI( GLenum stream, const GLfloat *coords );
 */
GLE_API void glVertexStream1fvATI( GLenum stream, const GLfloat *coords );

/**
 * @brief void glVertexStream1dATI( GLenum stream, GLdouble x );
 */
GLE_API void glVertexStream1dATI( GLenum stream, GLdouble x );

/**
 * @brief void glVertexStream1dvATI( GLenum stream, const GLdouble *coords );
 */
GLE_API void glVertexStream1dvATI( GLenum stream, const GLdouble *coords );

/**
 * @brief void glVertexStream2sATI( GLenum stream, GLshort x, GLshort y );
 */
GLE_API void glVertexStream2sATI( GLenum stream, GLshort x, GLshort y );

/**
 * @brief void glVertexStream2svATI( GLenum stream, const GLshort *coords );
 */
GLE_API void glVertexStream2svATI( GLenum stream, const GLshort *coords );

/**
 * @brief void glVertexStream2iATI( GLenum stream, GLint x, GLint y );
 */
GLE_API void glVertexStream2iATI( GLenum stream, GLint x, GLint y );

/**
 * @brief void glVertexStream2ivATI( GLenum stream, const GLint *coords );
 */
GLE_API void glVertexStream2ivATI( GLenum stream, const GLint *coords );

/**
 * @brief void glVertexStream2fATI( GLenum stream, GLfloat x, GLfloat y );
 */
GLE_API void glVertexStream2fATI( GLenum stream, GLfloat x, GLfloat y );

/**
 * @brief void glVertexStream2fvATI( GLenum stream, const GLfloat *coords );
 */
GLE_API void glVertexStream2fvATI( GLenum stream, const GLfloat *coords );

/**
 * @brief void glVertexStream2dATI( GLenum stream, GLdouble x, GLdouble y );
 */
GLE_API void glVertexStream2dATI( GLenum stream, GLdouble x, GLdouble y );

/**
 * @brief void glVertexStream2dvATI( GLenum stream, const GLdouble *coords );
 */
GLE_API void glVertexStream2dvATI( GLenum stream, const GLdouble *coords );

/**
 * @brief void glVertexStream3sATI( GLenum stream, GLshort x, GLshort y, GLshort z );
 */
GLE_API void glVertexStream3sATI( GLenum stream, GLshort x, GLshort y, GLshort z );

/**
 * @brief void glVertexStream3svATI( GLenum stream, const GLshort *coords );
 */
GLE_API void glVertexStream3svATI( GLenum stream, const GLshort *coords );

/**
 * @brief void glVertexStream3iATI( GLenum stream, GLint x, GLint y, GLint z );
 */
GLE_API void glVertexStream3iATI( GLenum stream, GLint x, GLint y, GLint z );

/**
 * @brief void glVertexStream3ivATI( GLenum stream, const GLint *coords );
 */
GLE_API void glVertexStream3ivATI( GLenum stream, const GLint *coords );

/**
 * @brief void glVertexStream3fATI( GLenum stream, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glVertexStream3fATI( GLenum stream, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glVertexStream3fvATI( GLenum stream, const GLfloat *coords );
 */
GLE_API void glVertexStream3fvATI( GLenum stream, const GLfloat *coords );

/**
 * @brief void glVertexStream3dATI( GLenum stream, GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glVertexStream3dATI( GLenum stream, GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glVertexStream3dvATI( GLenum stream, const GLdouble *coords );
 */
GLE_API void glVertexStream3dvATI( GLenum stream, const GLdouble *coords );

/**
 * @brief void glVertexStream4sATI( GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w );
 */
GLE_API void glVertexStream4sATI( GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w );

/**
 * @brief void glVertexStream4svATI( GLenum stream, const GLshort *coords );
 */
GLE_API void glVertexStream4svATI( GLenum stream, const GLshort *coords );

/**
 * @brief void glVertexStream4iATI( GLenum stream, GLint x, GLint y, GLint z, GLint w );
 */
GLE_API void glVertexStream4iATI( GLenum stream, GLint x, GLint y, GLint z, GLint w );

/**
 * @brief void glVertexStream4ivATI( GLenum stream, const GLint *coords );
 */
GLE_API void glVertexStream4ivATI( GLenum stream, const GLint *coords );

/**
 * @brief void glVertexStream4fATI( GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glVertexStream4fATI( GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glVertexStream4fvATI( GLenum stream, const GLfloat *coords );
 */
GLE_API void glVertexStream4fvATI( GLenum stream, const GLfloat *coords );

/**
 * @brief void glVertexStream4dATI( GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glVertexStream4dATI( GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glVertexStream4dvATI( GLenum stream, const GLdouble *coords );
 */
GLE_API void glVertexStream4dvATI( GLenum stream, const GLdouble *coords );

/**
 * @brief void glNormalStream3bATI( GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz );
 */
GLE_API void glNormalStream3bATI( GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz );

/**
 * @brief void glNormalStream3bvATI( GLenum stream, const GLbyte *coords );
 */
GLE_API void glNormalStream3bvATI( GLenum stream, const GLbyte *coords );

/**
 * @brief void glNormalStream3sATI( GLenum stream, GLshort nx, GLshort ny, GLshort nz );
 */
GLE_API void glNormalStream3sATI( GLenum stream, GLshort nx, GLshort ny, GLshort nz );

/**
 * @brief void glNormalStream3svATI( GLenum stream, const GLshort *coords );
 */
GLE_API void glNormalStream3svATI( GLenum stream, const GLshort *coords );

/**
 * @brief void glNormalStream3iATI( GLenum stream, GLint nx, GLint ny, GLint nz );
 */
GLE_API void glNormalStream3iATI( GLenum stream, GLint nx, GLint ny, GLint nz );

/**
 * @brief void glNormalStream3ivATI( GLenum stream, const GLint *coords );
 */
GLE_API void glNormalStream3ivATI( GLenum stream, const GLint *coords );

/**
 * @brief void glNormalStream3fATI( GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz );
 */
GLE_API void glNormalStream3fATI( GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz );

/**
 * @brief void glNormalStream3fvATI( GLenum stream, const GLfloat *coords );
 */
GLE_API void glNormalStream3fvATI( GLenum stream, const GLfloat *coords );

/**
 * @brief void glNormalStream3dATI( GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz );
 */
GLE_API void glNormalStream3dATI( GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz );

/**
 * @brief void glNormalStream3dvATI( GLenum stream, const GLdouble *coords );
 */
GLE_API void glNormalStream3dvATI( GLenum stream, const GLdouble *coords );

/**
 * @brief void glClientActiveVertexStreamATI( GLenum stream );
 */
GLE_API void glClientActiveVertexStreamATI( GLenum stream );

/**
 * @brief void glVertexBlendEnviATI( GLenum pname, GLint param );
 */
GLE_API void glVertexBlendEnviATI( GLenum pname, GLint param );

/**
 * @brief void glVertexBlendEnvfATI( GLenum pname, GLfloat param );
 */
GLE_API void glVertexBlendEnvfATI( GLenum pname, GLfloat param );

//@}
			
			
/**
 * @name GL_EXT_422_pixels
 *	Extension number in OpenGL registry : 178
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/422_pixels.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_422_pixels is supported.
 * @return Returns \c true if \b GL_EXT_422_pixels is supported, false otherwise.
 */
GLE_API bool isGL_EXT_422_pixels();

//@}
			
			
/**
 * @name GL_EXT_abgr
 *	Extension number in OpenGL registry : 1
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/abgr.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_abgr is supported.
 * @return Returns \c true if \b GL_EXT_abgr is supported, false otherwise.
 */
GLE_API bool isGL_EXT_abgr();

//@}
			
			
/**
 * @name GL_EXT_bgra
 *	Extension number in OpenGL registry : 129
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/bgra.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_bgra is supported.
 * @return Returns \c true if \b GL_EXT_bgra is supported, false otherwise.
 */
GLE_API bool isGL_EXT_bgra();

//@}
			
			
/**
 * @name GL_EXT_blend_color
 *	Extension number in OpenGL registry : 2
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_color.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_blend_color is supported.
 * @return Returns \c true if \b GL_EXT_blend_color is supported, false otherwise.
 */
GLE_API bool isGL_EXT_blend_color();

/**
 * @brief void glBlendColorEXT( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
 */
GLE_API void glBlendColorEXT( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );

//@}
			
			
/**
 * @name GL_EXT_blend_equation_separate
 *	Extension number in OpenGL registry : 299
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_equation_separate.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_blend_equation_separate is supported.
 * @return Returns \c true if \b GL_EXT_blend_equation_separate is supported, false otherwise.
 */
GLE_API bool isGL_EXT_blend_equation_separate();

/**
 * @brief void glBlendEquationSeparateEXT( GLenum modeRGB, GLenum modeAlpha );
 */
GLE_API void glBlendEquationSeparateEXT( GLenum modeRGB, GLenum modeAlpha );

//@}
			
			
/**
 * @name GL_EXT_blend_func_separate
 *	Extension number in OpenGL registry : 173
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_func_separate.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_blend_func_separate is supported.
 * @return Returns \c true if \b GL_EXT_blend_func_separate is supported, false otherwise.
 */
GLE_API bool isGL_EXT_blend_func_separate();

/**
 * @brief void glBlendFuncSeparateEXT( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha );
 */
GLE_API void glBlendFuncSeparateEXT( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha );

//@}
			
			
/**
 * @name GL_EXT_blend_logic_op
 *	Extension number in OpenGL registry : 39
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_logic_op.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_blend_logic_op is supported.
 * @return Returns \c true if \b GL_EXT_blend_logic_op is supported, false otherwise.
 */
GLE_API bool isGL_EXT_blend_logic_op();

//@}
			
			
/**
 * @name GL_EXT_blend_minmax
 *	Extension number in OpenGL registry : 37
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_minmax.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_blend_minmax is supported.
 * @return Returns \c true if \b GL_EXT_blend_minmax is supported, false otherwise.
 */
GLE_API bool isGL_EXT_blend_minmax();

/**
 * @brief void glBlendEquationEXT( GLenum mode );
 */
GLE_API void glBlendEquationEXT( GLenum mode );

//@}
			
			
/**
 * @name GL_EXT_blend_subtract
 *	Extension number in OpenGL registry : 38
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_subtract.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_blend_subtract is supported.
 * @return Returns \c true if \b GL_EXT_blend_subtract is supported, false otherwise.
 */
GLE_API bool isGL_EXT_blend_subtract();

//@}
			
			
/**
 * @name GL_EXT_clip_volume_hint
 *	Extension number in OpenGL registry : 79
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/clip_volume_hint.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_clip_volume_hint is supported.
 * @return Returns \c true if \b GL_EXT_clip_volume_hint is supported, false otherwise.
 */
GLE_API bool isGL_EXT_clip_volume_hint();

//@}
			
			
/**
 * @name GL_EXT_cmyka
 *	Extension number in OpenGL registry : 18
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/cmyka.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_cmyka is supported.
 * @return Returns \c true if \b GL_EXT_cmyka is supported, false otherwise.
 */
GLE_API bool isGL_EXT_cmyka();

//@}

			
/**	
 * @name GL_EXT_color_matrix
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_EXT_color_matrix is supported.
 * @return Returns \c true if \b GL_EXT_color_matrix is supported, false otherwise.
 */
GLE_API bool isGL_EXT_color_matrix();

//@}
			
			
/**
 * @name GL_EXT_color_subtable
 *	Extension number in OpenGL registry : 74
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/color_subtable.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_color_subtable is supported.
 * @return Returns \c true if \b GL_EXT_color_subtable is supported, false otherwise.
 */
GLE_API bool isGL_EXT_color_subtable();

/**
 * @brief void glColorSubTableEXT( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data );
 */
GLE_API void glColorSubTableEXT( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data );

/**
 * @brief void glCopyColorSubTableEXT( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width );
 */
GLE_API void glCopyColorSubTableEXT( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width );

//@}
			
			
/**
 * @name GL_EXT_compiled_vertex_array
 *	Extension number in OpenGL registry : 97
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/compiled_vertex_array.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_compiled_vertex_array is supported.
 * @return Returns \c true if \b GL_EXT_compiled_vertex_array is supported, false otherwise.
 */
GLE_API bool isGL_EXT_compiled_vertex_array();

/**
 * @brief void glLockArraysEXT( GLint first, GLsizei count );
 */
GLE_API void glLockArraysEXT( GLint first, GLsizei count );

/**
 * @brief void glUnlockArraysEXT( void );
 */
GLE_API void glUnlockArraysEXT( void );

//@}
			
			
/**
 * @name GL_EXT_convolution
 *	Extension number in OpenGL registry : 12
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/convolution.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_convolution is supported.
 * @return Returns \c true if \b GL_EXT_convolution is supported, false otherwise.
 */
GLE_API bool isGL_EXT_convolution();

/**
 * @brief void glConvolutionFilter1DEXT( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image );
 */
GLE_API void glConvolutionFilter1DEXT( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image );

/**
 * @brief void glConvolutionFilter2DEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image );
 */
GLE_API void glConvolutionFilter2DEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image );

/**
 * @brief void glConvolutionParameterfEXT( GLenum target, GLenum pname, GLfloat params );
 */
GLE_API void glConvolutionParameterfEXT( GLenum target, GLenum pname, GLfloat params );

/**
 * @brief void glConvolutionParameterfvEXT( GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glConvolutionParameterfvEXT( GLenum target, GLenum pname, const GLfloat *params );

/**
 * @brief void glConvolutionParameteriEXT( GLenum target, GLenum pname, GLint params );
 */
GLE_API void glConvolutionParameteriEXT( GLenum target, GLenum pname, GLint params );

/**
 * @brief void glConvolutionParameterivEXT( GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glConvolutionParameterivEXT( GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glCopyConvolutionFilter1DEXT( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );
 */
GLE_API void glCopyConvolutionFilter1DEXT( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );

/**
 * @brief void glCopyConvolutionFilter2DEXT( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height );
 */
GLE_API void glCopyConvolutionFilter2DEXT( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height );

/**
 * @brief void glGetConvolutionFilterEXT( GLenum target, GLenum format, GLenum type, GLvoid *image );
 */
GLE_API void glGetConvolutionFilterEXT( GLenum target, GLenum format, GLenum type, GLvoid *image );

/**
 * @brief void glGetConvolutionParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetConvolutionParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetConvolutionParameterivEXT( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetConvolutionParameterivEXT( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetSeparableFilterEXT( GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span );
 */
GLE_API void glGetSeparableFilterEXT( GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span );

/**
 * @brief void glSeparableFilter2DEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column );
 */
GLE_API void glSeparableFilter2DEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column );

//@}
			
			
/**
 * @name GL_EXT_coordinate_frame
 *	Extension number in OpenGL registry : 156
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/coordinate_frame.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_coordinate_frame is supported.
 * @return Returns \c true if \b GL_EXT_coordinate_frame is supported, false otherwise.
 */
GLE_API bool isGL_EXT_coordinate_frame();

/**
 * @brief void glTangent3bEXT( GLbyte tx, GLbyte ty, GLbyte tz );
 */
GLE_API void glTangent3bEXT( GLbyte tx, GLbyte ty, GLbyte tz );

/**
 * @brief void glTangent3bvEXT( const GLbyte *v );
 */
GLE_API void glTangent3bvEXT( const GLbyte *v );

/**
 * @brief void glTangent3dEXT( GLdouble tx, GLdouble ty, GLdouble tz );
 */
GLE_API void glTangent3dEXT( GLdouble tx, GLdouble ty, GLdouble tz );

/**
 * @brief void glTangent3dvEXT( const GLdouble *v );
 */
GLE_API void glTangent3dvEXT( const GLdouble *v );

/**
 * @brief void glTangent3fEXT( GLfloat tx, GLfloat ty, GLfloat tz );
 */
GLE_API void glTangent3fEXT( GLfloat tx, GLfloat ty, GLfloat tz );

/**
 * @brief void glTangent3fvEXT( const GLfloat *v );
 */
GLE_API void glTangent3fvEXT( const GLfloat *v );

/**
 * @brief void glTangent3iEXT( GLint tx, GLint ty, GLint tz );
 */
GLE_API void glTangent3iEXT( GLint tx, GLint ty, GLint tz );

/**
 * @brief void glTangent3ivEXT( const GLint *v );
 */
GLE_API void glTangent3ivEXT( const GLint *v );

/**
 * @brief void glTangent3sEXT( GLshort tx, GLshort ty, GLshort tz );
 */
GLE_API void glTangent3sEXT( GLshort tx, GLshort ty, GLshort tz );

/**
 * @brief void glTangent3svEXT( const GLshort *v );
 */
GLE_API void glTangent3svEXT( const GLshort *v );

/**
 * @brief void glBinormal3bEXT( GLbyte bx, GLbyte by, GLbyte bz );
 */
GLE_API void glBinormal3bEXT( GLbyte bx, GLbyte by, GLbyte bz );

/**
 * @brief void glBinormal3bvEXT( const GLbyte *v );
 */
GLE_API void glBinormal3bvEXT( const GLbyte *v );

/**
 * @brief void glBinormal3dEXT( GLdouble bx, GLdouble by, GLdouble bz );
 */
GLE_API void glBinormal3dEXT( GLdouble bx, GLdouble by, GLdouble bz );

/**
 * @brief void glBinormal3dvEXT( const GLdouble *v );
 */
GLE_API void glBinormal3dvEXT( const GLdouble *v );

/**
 * @brief void glBinormal3fEXT( GLfloat bx, GLfloat by, GLfloat bz );
 */
GLE_API void glBinormal3fEXT( GLfloat bx, GLfloat by, GLfloat bz );

/**
 * @brief void glBinormal3fvEXT( const GLfloat *v );
 */
GLE_API void glBinormal3fvEXT( const GLfloat *v );

/**
 * @brief void glBinormal3iEXT( GLint bx, GLint by, GLint bz );
 */
GLE_API void glBinormal3iEXT( GLint bx, GLint by, GLint bz );

/**
 * @brief void glBinormal3ivEXT( const GLint *v );
 */
GLE_API void glBinormal3ivEXT( const GLint *v );

/**
 * @brief void glBinormal3sEXT( GLshort bx, GLshort by, GLshort bz );
 */
GLE_API void glBinormal3sEXT( GLshort bx, GLshort by, GLshort bz );

/**
 * @brief void glBinormal3svEXT( const GLshort *v );
 */
GLE_API void glBinormal3svEXT( const GLshort *v );

/**
 * @brief void glTangentPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glTangentPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer );

/**
 * @brief void glBinormalPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glBinormalPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer );

//@}
			
			
/**
 * @name GL_EXT_copy_texture
 *	Extension number in OpenGL registry : 10
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/copy_texture.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_copy_texture is supported.
 * @return Returns \c true if \b GL_EXT_copy_texture is supported, false otherwise.
 */
GLE_API bool isGL_EXT_copy_texture();

/**
 * @brief void glCopyTexImage1DEXT( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border );
 */
GLE_API void glCopyTexImage1DEXT( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border );

/**
 * @brief void glCopyTexImage2DEXT( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );
 */
GLE_API void glCopyTexImage2DEXT( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );

/**
 * @brief void glCopyTexSubImage1DEXT( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );
 */
GLE_API void glCopyTexSubImage1DEXT( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );

/**
 * @brief void glCopyTexSubImage2DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );
 */
GLE_API void glCopyTexSubImage2DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );

/**
 * @brief void glCopyTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );
 */
GLE_API void glCopyTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );

//@}
			
			
/**
 * @name GL_EXT_cull_vertex
 *	Extension number in OpenGL registry : 98
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/cull_vertex.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_cull_vertex is supported.
 * @return Returns \c true if \b GL_EXT_cull_vertex is supported, false otherwise.
 */
GLE_API bool isGL_EXT_cull_vertex();

/**
 * @brief void glCullParameterdvEXT( GLenum pname, GLdouble *params );
 */
GLE_API void glCullParameterdvEXT( GLenum pname, GLdouble *params );

/**
 * @brief void glCullParameterfvEXT( GLenum pname, GLfloat *params );
 */
GLE_API void glCullParameterfvEXT( GLenum pname, GLfloat *params );

//@}
			
			
/**
 * @name GL_EXT_depth_bounds_test
 *	Extension number in OpenGL registry : 297
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/depth_bounds_test.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_depth_bounds_test is supported.
 * @return Returns \c true if \b GL_EXT_depth_bounds_test is supported, false otherwise.
 */
GLE_API bool isGL_EXT_depth_bounds_test();

/**
 * @brief void glDepthBoundsEXT( GLclampd zmin, GLclampd zmax );
 */
GLE_API void glDepthBoundsEXT( GLclampd zmin, GLclampd zmax );

//@}
			
			
/**
 * @name GL_EXT_draw_range_elements
 *	Extension number in OpenGL registry : 112
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/draw_range_elements.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_draw_range_elements is supported.
 * @return Returns \c true if \b GL_EXT_draw_range_elements is supported, false otherwise.
 */
GLE_API bool isGL_EXT_draw_range_elements();

/**
 * @brief void glDrawRangeElementsEXT( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices );
 */
GLE_API void glDrawRangeElementsEXT( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices );

//@}
			
			
/**
 * @name GL_EXT_fog_coord
 *	Extension number in OpenGL registry : 149
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/fog_coord.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_fog_coord is supported.
 * @return Returns \c true if \b GL_EXT_fog_coord is supported, false otherwise.
 */
GLE_API bool isGL_EXT_fog_coord();

/**
 * @brief void glFogCoordfEXT( GLfloat coord );
 */
GLE_API void glFogCoordfEXT( GLfloat coord );

/**
 * @brief void glFogCoordfvEXT( const GLfloat *coord );
 */
GLE_API void glFogCoordfvEXT( const GLfloat *coord );

/**
 * @brief void glFogCoorddEXT( GLdouble coord );
 */
GLE_API void glFogCoorddEXT( GLdouble coord );

/**
 * @brief void glFogCoorddvEXT( const GLdouble *coord );
 */
GLE_API void glFogCoorddvEXT( const GLdouble *coord );

/**
 * @brief void glFogCoordPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glFogCoordPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer );

//@}
			
			
/**
 * @name GL_EXT_framebuffer_object
 *	Extension number in OpenGL registry : 310
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/framebuffer_object.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_framebuffer_object is supported.
 * @return Returns \c true if \b GL_EXT_framebuffer_object is supported, false otherwise.
 */
GLE_API bool isGL_EXT_framebuffer_object();

/**
 * @brief GLboolean glIsRenderbufferEXT( GLuint renderbuffer );
 */
GLE_API GLboolean glIsRenderbufferEXT( GLuint renderbuffer );

/**
 * @brief void glBindRenderbufferEXT( GLenum target, GLuint renderbuffer );
 */
GLE_API void glBindRenderbufferEXT( GLenum target, GLuint renderbuffer );

/**
 * @brief void glDeleteRenderbuffersEXT( GLsizei n, const GLuint *renderbuffers );
 */
GLE_API void glDeleteRenderbuffersEXT( GLsizei n, const GLuint *renderbuffers );

/**
 * @brief void glGenRenderbuffersEXT( GLsizei n, GLuint *renderbuffers );
 */
GLE_API void glGenRenderbuffersEXT( GLsizei n, GLuint *renderbuffers );

/**
 * @brief void glRenderbufferStorageEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height );
 */
GLE_API void glRenderbufferStorageEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height );

/**
 * @brief void glGetRenderbufferParameterivEXT( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetRenderbufferParameterivEXT( GLenum target, GLenum pname, GLint *params );

/**
 * @brief GLboolean glIsFramebufferEXT( GLuint framebuffer );
 */
GLE_API GLboolean glIsFramebufferEXT( GLuint framebuffer );

/**
 * @brief void glBindFramebufferEXT( GLenum target, GLuint framebuffer );
 */
GLE_API void glBindFramebufferEXT( GLenum target, GLuint framebuffer );

/**
 * @brief void glDeleteFramebuffersEXT( GLsizei n, const GLuint *framebuffers );
 */
GLE_API void glDeleteFramebuffersEXT( GLsizei n, const GLuint *framebuffers );

/**
 * @brief void glGenFramebuffersEXT( GLsizei n, GLuint *framebuffers );
 */
GLE_API void glGenFramebuffersEXT( GLsizei n, GLuint *framebuffers );

/**
 * @brief GLenum glCheckFramebufferStatusEXT( GLenum target );
 */
GLE_API GLenum glCheckFramebufferStatusEXT( GLenum target );

/**
 * @brief void glFramebufferTexture1DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );
 */
GLE_API void glFramebufferTexture1DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );

/**
 * @brief void glFramebufferTexture2DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );
 */
GLE_API void glFramebufferTexture2DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );

/**
 * @brief void glFramebufferTexture3DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset );
 */
GLE_API void glFramebufferTexture3DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset );

/**
 * @brief void glFramebufferRenderbufferEXT( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer );
 */
GLE_API void glFramebufferRenderbufferEXT( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer );

/**
 * @brief void glGetFramebufferAttachmentParameterivEXT( GLenum target, GLenum attachment, GLenum pname, GLint *params );
 */
GLE_API void glGetFramebufferAttachmentParameterivEXT( GLenum target, GLenum attachment, GLenum pname, GLint *params );

/**
 * @brief void glGenerateMipmapEXT( GLenum target );
 */
GLE_API void glGenerateMipmapEXT( GLenum target );

//@}
			
			
/**
 * @name GL_EXT_histogram
 *	Extension number in OpenGL registry : 11
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/histogram.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_histogram is supported.
 * @return Returns \c true if \b GL_EXT_histogram is supported, false otherwise.
 */
GLE_API bool isGL_EXT_histogram();

/**
 * @brief void glGetHistogramEXT( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );
 */
GLE_API void glGetHistogramEXT( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );

/**
 * @brief void glGetHistogramParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetHistogramParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetHistogramParameterivEXT( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetHistogramParameterivEXT( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetMinmaxEXT( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );
 */
GLE_API void glGetMinmaxEXT( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );

/**
 * @brief void glGetMinmaxParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetMinmaxParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetMinmaxParameterivEXT( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetMinmaxParameterivEXT( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glHistogramEXT( GLenum target, GLsizei width, GLenum internalformat, GLboolean sink );
 */
GLE_API void glHistogramEXT( GLenum target, GLsizei width, GLenum internalformat, GLboolean sink );

/**
 * @brief void glMinmaxEXT( GLenum target, GLenum internalformat, GLboolean sink );
 */
GLE_API void glMinmaxEXT( GLenum target, GLenum internalformat, GLboolean sink );

/**
 * @brief void glResetHistogramEXT( GLenum target );
 */
GLE_API void glResetHistogramEXT( GLenum target );

/**
 * @brief void glResetMinmaxEXT( GLenum target );
 */
GLE_API void glResetMinmaxEXT( GLenum target );

//@}
			
			
/**
 * @name GL_EXT_index_array_formats
 *	Extension number in OpenGL registry : 96
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/index_array_formats.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_index_array_formats is supported.
 * @return Returns \c true if \b GL_EXT_index_array_formats is supported, false otherwise.
 */
GLE_API bool isGL_EXT_index_array_formats();

//@}
			
			
/**
 * @name GL_EXT_index_func
 *	Extension number in OpenGL registry : 95
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/index_func.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_index_func is supported.
 * @return Returns \c true if \b GL_EXT_index_func is supported, false otherwise.
 */
GLE_API bool isGL_EXT_index_func();

/**
 * @brief void glIndexFuncEXT( GLenum func, GLclampf ref );
 */
GLE_API void glIndexFuncEXT( GLenum func, GLclampf ref );

//@}
			
			
/**
 * @name GL_EXT_index_material
 *	Extension number in OpenGL registry : 94
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/index_material.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_index_material is supported.
 * @return Returns \c true if \b GL_EXT_index_material is supported, false otherwise.
 */
GLE_API bool isGL_EXT_index_material();

/**
 * @brief void glIndexMaterialEXT( GLenum face, GLenum mode );
 */
GLE_API void glIndexMaterialEXT( GLenum face, GLenum mode );

//@}
			
			
/**
 * @name GL_EXT_index_texture
 *	Extension number in OpenGL registry : 93
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/index_texture.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_index_texture is supported.
 * @return Returns \c true if \b GL_EXT_index_texture is supported, false otherwise.
 */
GLE_API bool isGL_EXT_index_texture();

//@}
			
			
/**
 * @name GL_EXT_light_texture
 *	Extension number in OpenGL registry : 117
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/light_texture.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_light_texture is supported.
 * @return Returns \c true if \b GL_EXT_light_texture is supported, false otherwise.
 */
GLE_API bool isGL_EXT_light_texture();

/**
 * @brief void glApplyTextureEXT( GLenum mode );
 */
GLE_API void glApplyTextureEXT( GLenum mode );

/**
 * @brief void glTextureLightEXT( GLenum pname );
 */
GLE_API void glTextureLightEXT( GLenum pname );

/**
 * @brief void glTextureMaterialEXT( GLenum face, GLenum mode );
 */
GLE_API void glTextureMaterialEXT( GLenum face, GLenum mode );

//@}
			
			
/**
 * @name GL_EXT_misc_attribute
 *	Extension number in OpenGL registry : 31
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/misc_attribute.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_misc_attribute is supported.
 * @return Returns \c true if \b GL_EXT_misc_attribute is supported, false otherwise.
 */
GLE_API bool isGL_EXT_misc_attribute();

//@}
			
			
/**
 * @name GL_EXT_multi_draw_arrays
 *	Extension number in OpenGL registry : 148
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/multi_draw_arrays.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_multi_draw_arrays is supported.
 * @return Returns \c true if \b GL_EXT_multi_draw_arrays is supported, false otherwise.
 */
GLE_API bool isGL_EXT_multi_draw_arrays();

/**
 * @brief void glMultiDrawArraysEXT( GLenum mode, GLint *first, GLsizei *count, GLsizei primcount );
 */
GLE_API void glMultiDrawArraysEXT( GLenum mode, GLint *first, GLsizei *count, GLsizei primcount );

/**
 * @brief void glMultiDrawElementsEXT( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount );
 */
GLE_API void glMultiDrawElementsEXT( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount );

//@}

			
/**	
 * @name GL_EXT_multisample
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_EXT_multisample is supported.
 * @return Returns \c true if \b GL_EXT_multisample is supported, false otherwise.
 */
GLE_API bool isGL_EXT_multisample();

/**
 * @brief void glSampleMaskEXT( GLclampf value, GLboolean invert );
 */
GLE_API void glSampleMaskEXT( GLclampf value, GLboolean invert );

/**
 * @brief void glSamplePatternEXT( GLenum pattern );
 */
GLE_API void glSamplePatternEXT( GLenum pattern );

//@}
			
			
/**
 * @name GL_EXT_packed_pixels
 *	Extension number in OpenGL registry : 23
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/packed_pixels.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_packed_pixels is supported.
 * @return Returns \c true if \b GL_EXT_packed_pixels is supported, false otherwise.
 */
GLE_API bool isGL_EXT_packed_pixels();

//@}
			
			
/**
 * @name GL_EXT_paletted_texture
 *	Extension number in OpenGL registry : 78
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/paletted_texture.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_paletted_texture is supported.
 * @return Returns \c true if \b GL_EXT_paletted_texture is supported, false otherwise.
 */
GLE_API bool isGL_EXT_paletted_texture();

/**
 * @brief void glColorTableEXT( GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );
 */
GLE_API void glColorTableEXT( GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );

/**
 * @brief void glGetColorTableEXT( GLenum target, GLenum format, GLenum type, GLvoid *data );
 */
GLE_API void glGetColorTableEXT( GLenum target, GLenum format, GLenum type, GLvoid *data );

/**
 * @brief void glGetColorTableParameterivEXT( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetColorTableParameterivEXT( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetColorTableParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetColorTableParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );

//@}
			
			
/**
 * @name GL_EXT_pixel_buffer_object
 *	Extension number in OpenGL registry : 302
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/pixel_buffer_object.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_pixel_buffer_object is supported.
 * @return Returns \c true if \b GL_EXT_pixel_buffer_object is supported, false otherwise.
 */
GLE_API bool isGL_EXT_pixel_buffer_object();

//@}
			
			
/**
 * @name GL_EXT_pixel_transform
 *	Extension number in OpenGL registry : 138
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/pixel_transform.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_pixel_transform is supported.
 * @return Returns \c true if \b GL_EXT_pixel_transform is supported, false otherwise.
 */
GLE_API bool isGL_EXT_pixel_transform();

/**
 * @brief void glPixelTransformParameteriEXT( GLenum target, GLenum pname, GLint param );
 */
GLE_API void glPixelTransformParameteriEXT( GLenum target, GLenum pname, GLint param );

/**
 * @brief void glPixelTransformParameterfEXT( GLenum target, GLenum pname, GLfloat param );
 */
GLE_API void glPixelTransformParameterfEXT( GLenum target, GLenum pname, GLfloat param );

/**
 * @brief void glPixelTransformParameterivEXT( GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glPixelTransformParameterivEXT( GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glPixelTransformParameterfvEXT( GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glPixelTransformParameterfvEXT( GLenum target, GLenum pname, const GLfloat *params );

//@}
			
			
/**
 * @name GL_EXT_pixel_transform_color_table
 *	Extension number in OpenGL registry : 139
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/pixel_transform_color_table.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_pixel_transform_color_table is supported.
 * @return Returns \c true if \b GL_EXT_pixel_transform_color_table is supported, false otherwise.
 */
GLE_API bool isGL_EXT_pixel_transform_color_table();

//@}
			
			
/**
 * @name GL_EXT_point_parameters
 *	Extension number in OpenGL registry : 54
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/point_parameters.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_point_parameters is supported.
 * @return Returns \c true if \b GL_EXT_point_parameters is supported, false otherwise.
 */
GLE_API bool isGL_EXT_point_parameters();

/**
 * @brief void glPointParameterfEXT( GLenum pname, GLfloat param );
 */
GLE_API void glPointParameterfEXT( GLenum pname, GLfloat param );

/**
 * @brief void glPointParameterfvEXT( GLenum pname, const GLfloat *params );
 */
GLE_API void glPointParameterfvEXT( GLenum pname, const GLfloat *params );

//@}
			
			
/**
 * @name GL_EXT_polygon_offset
 *	Extension number in OpenGL registry : 3
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/polygon_offset.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_polygon_offset is supported.
 * @return Returns \c true if \b GL_EXT_polygon_offset is supported, false otherwise.
 */
GLE_API bool isGL_EXT_polygon_offset();

/**
 * @brief void glPolygonOffsetEXT( GLfloat factor, GLfloat bias );
 */
GLE_API void glPolygonOffsetEXT( GLfloat factor, GLfloat bias );

//@}
			
			
/**
 * @name GL_EXT_rescale_normal
 *	Extension number in OpenGL registry : 27
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/rescale_normal.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_rescale_normal is supported.
 * @return Returns \c true if \b GL_EXT_rescale_normal is supported, false otherwise.
 */
GLE_API bool isGL_EXT_rescale_normal();

//@}
			
			
/**
 * @name GL_EXT_secondary_color
 *	Extension number in OpenGL registry : 145
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/secondary_color.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_secondary_color is supported.
 * @return Returns \c true if \b GL_EXT_secondary_color is supported, false otherwise.
 */
GLE_API bool isGL_EXT_secondary_color();

/**
 * @brief void glSecondaryColor3bEXT( GLbyte red, GLbyte green, GLbyte blue );
 */
GLE_API void glSecondaryColor3bEXT( GLbyte red, GLbyte green, GLbyte blue );

/**
 * @brief void glSecondaryColor3bvEXT( const GLbyte *v );
 */
GLE_API void glSecondaryColor3bvEXT( const GLbyte *v );

/**
 * @brief void glSecondaryColor3dEXT( GLdouble red, GLdouble green, GLdouble blue );
 */
GLE_API void glSecondaryColor3dEXT( GLdouble red, GLdouble green, GLdouble blue );

/**
 * @brief void glSecondaryColor3dvEXT( const GLdouble *v );
 */
GLE_API void glSecondaryColor3dvEXT( const GLdouble *v );

/**
 * @brief void glSecondaryColor3fEXT( GLfloat red, GLfloat green, GLfloat blue );
 */
GLE_API void glSecondaryColor3fEXT( GLfloat red, GLfloat green, GLfloat blue );

/**
 * @brief void glSecondaryColor3fvEXT( const GLfloat *v );
 */
GLE_API void glSecondaryColor3fvEXT( const GLfloat *v );

/**
 * @brief void glSecondaryColor3iEXT( GLint red, GLint green, GLint blue );
 */
GLE_API void glSecondaryColor3iEXT( GLint red, GLint green, GLint blue );

/**
 * @brief void glSecondaryColor3ivEXT( const GLint *v );
 */
GLE_API void glSecondaryColor3ivEXT( const GLint *v );

/**
 * @brief void glSecondaryColor3sEXT( GLshort red, GLshort green, GLshort blue );
 */
GLE_API void glSecondaryColor3sEXT( GLshort red, GLshort green, GLshort blue );

/**
 * @brief void glSecondaryColor3svEXT( const GLshort *v );
 */
GLE_API void glSecondaryColor3svEXT( const GLshort *v );

/**
 * @brief void glSecondaryColor3ubEXT( GLubyte red, GLubyte green, GLubyte blue );
 */
GLE_API void glSecondaryColor3ubEXT( GLubyte red, GLubyte green, GLubyte blue );

/**
 * @brief void glSecondaryColor3ubvEXT( const GLubyte *v );
 */
GLE_API void glSecondaryColor3ubvEXT( const GLubyte *v );

/**
 * @brief void glSecondaryColor3uiEXT( GLuint red, GLuint green, GLuint blue );
 */
GLE_API void glSecondaryColor3uiEXT( GLuint red, GLuint green, GLuint blue );

/**
 * @brief void glSecondaryColor3uivEXT( const GLuint *v );
 */
GLE_API void glSecondaryColor3uivEXT( const GLuint *v );

/**
 * @brief void glSecondaryColor3usEXT( GLushort red, GLushort green, GLushort blue );
 */
GLE_API void glSecondaryColor3usEXT( GLushort red, GLushort green, GLushort blue );

/**
 * @brief void glSecondaryColor3usvEXT( const GLushort *v );
 */
GLE_API void glSecondaryColor3usvEXT( const GLushort *v );

/**
 * @brief void glSecondaryColorPointerEXT( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glSecondaryColorPointerEXT( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );

//@}
			
			
/**
 * @name GL_EXT_separate_specular_color
 *	Extension number in OpenGL registry : 144
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/separate_specular_color.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_separate_specular_color is supported.
 * @return Returns \c true if \b GL_EXT_separate_specular_color is supported, false otherwise.
 */
GLE_API bool isGL_EXT_separate_specular_color();

//@}
			
			
/**
 * @name GL_EXT_shadow_funcs
 *	Extension number in OpenGL registry : 267
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/shadow_funcs.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_shadow_funcs is supported.
 * @return Returns \c true if \b GL_EXT_shadow_funcs is supported, false otherwise.
 */
GLE_API bool isGL_EXT_shadow_funcs();

//@}
			
			
/**
 * @name GL_EXT_shared_texture_palette
 *	Extension number in OpenGL registry : 141
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/shared_texture_palette.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_shared_texture_palette is supported.
 * @return Returns \c true if \b GL_EXT_shared_texture_palette is supported, false otherwise.
 */
GLE_API bool isGL_EXT_shared_texture_palette();

//@}
			
			
/**
 * @name GL_EXT_stencil_two_side
 *	Extension number in OpenGL registry : 268
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/stencil_two_side.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_stencil_two_side is supported.
 * @return Returns \c true if \b GL_EXT_stencil_two_side is supported, false otherwise.
 */
GLE_API bool isGL_EXT_stencil_two_side();

/**
 * @brief void glActiveStencilFaceEXT( GLenum face );
 */
GLE_API void glActiveStencilFaceEXT( GLenum face );

//@}
			
			
/**
 * @name GL_EXT_stencil_wrap
 *	Extension number in OpenGL registry : 176
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/stencil_wrap.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_stencil_wrap is supported.
 * @return Returns \c true if \b GL_EXT_stencil_wrap is supported, false otherwise.
 */
GLE_API bool isGL_EXT_stencil_wrap();

//@}
			
			
/**
 * @name GL_EXT_subtexture
 *	Extension number in OpenGL registry : 9
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/subtexture.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_subtexture is supported.
 * @return Returns \c true if \b GL_EXT_subtexture is supported, false otherwise.
 */
GLE_API bool isGL_EXT_subtexture();

/**
 * @brief void glTexSubImage1DEXT( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTexSubImage1DEXT( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glTexSubImage2DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTexSubImage2DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );

//@}
			
			
/**
 * @name GL_EXT_texture
 *	Extension number in OpenGL registry : 4
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture is supported.
 * @return Returns \c true if \b GL_EXT_texture is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture();

//@}
			
			
/**
 * @name GL_EXT_texture3D
 *	Extension number in OpenGL registry : 6
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture3D.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture3D is supported.
 * @return Returns \c true if \b GL_EXT_texture3D is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture3D();

/**
 * @brief void glTexImage3DEXT( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTexImage3DEXT( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );

//@}
			
			
/**
 * @name GL_EXT_texture_compression_s3tc
 *	Extension number in OpenGL registry : 198
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_compression_s3tc.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_compression_s3tc is supported.
 * @return Returns \c true if \b GL_EXT_texture_compression_s3tc is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_compression_s3tc();

//@}

			
/**	
 * @name GL_EXT_texture_cube_map
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_cube_map is supported.
 * @return Returns \c true if \b GL_EXT_texture_cube_map is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_cube_map();

//@}
			
			
/**
 * @name GL_EXT_texture_env_add
 *	Extension number in OpenGL registry : 185
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_env_add.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_env_add is supported.
 * @return Returns \c true if \b GL_EXT_texture_env_add is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_env_add();

//@}
			
			
/**
 * @name GL_EXT_texture_env_combine
 *	Extension number in OpenGL registry : 158
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_env_combine.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_env_combine is supported.
 * @return Returns \c true if \b GL_EXT_texture_env_combine is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_env_combine();

//@}
			
			
/**
 * @name GL_EXT_texture_env_dot3
 *	Extension number in OpenGL registry : 220
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_env_dot3.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_env_dot3 is supported.
 * @return Returns \c true if \b GL_EXT_texture_env_dot3 is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_env_dot3();

//@}
			
			
/**
 * @name GL_EXT_texture_filter_anisotropic
 *	Extension number in OpenGL registry : 187
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_filter_anisotropic.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_filter_anisotropic is supported.
 * @return Returns \c true if \b GL_EXT_texture_filter_anisotropic is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_filter_anisotropic();

//@}
			
			
/**
 * @name GL_EXT_texture_lod_bias
 *	Extension number in OpenGL registry : 186
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_lod_bias.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_lod_bias is supported.
 * @return Returns \c true if \b GL_EXT_texture_lod_bias is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_lod_bias();

//@}
			
			
/**
 * @name GL_EXT_texture_mirror_clamp
 *	Extension number in OpenGL registry : 298
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_mirror_clamp.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_mirror_clamp is supported.
 * @return Returns \c true if \b GL_EXT_texture_mirror_clamp is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_mirror_clamp();

//@}
			
			
/**
 * @name GL_EXT_texture_object
 *	Extension number in OpenGL registry : 20
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_object.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_object is supported.
 * @return Returns \c true if \b GL_EXT_texture_object is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_object();

/**
 * @brief GLboolean glAreTexturesResidentEXT( GLsizei n, const GLuint *textures, GLboolean *residences );
 */
GLE_API GLboolean glAreTexturesResidentEXT( GLsizei n, const GLuint *textures, GLboolean *residences );

/**
 * @brief void glBindTextureEXT( GLenum target, GLuint texture );
 */
GLE_API void glBindTextureEXT( GLenum target, GLuint texture );

/**
 * @brief void glDeleteTexturesEXT( GLsizei n, const GLuint *textures );
 */
GLE_API void glDeleteTexturesEXT( GLsizei n, const GLuint *textures );

/**
 * @brief void glGenTexturesEXT( GLsizei n, GLuint *textures );
 */
GLE_API void glGenTexturesEXT( GLsizei n, GLuint *textures );

/**
 * @brief GLboolean glIsTextureEXT( GLuint texture );
 */
GLE_API GLboolean glIsTextureEXT( GLuint texture );

/**
 * @brief void glPrioritizeTexturesEXT( GLsizei n, const GLuint *textures, const GLclampf *priorities );
 */
GLE_API void glPrioritizeTexturesEXT( GLsizei n, const GLuint *textures, const GLclampf *priorities );

//@}
			
			
/**
 * @name GL_EXT_texture_perturb_normal
 *	Extension number in OpenGL registry : 147
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_perturb_normal.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_perturb_normal is supported.
 * @return Returns \c true if \b GL_EXT_texture_perturb_normal is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_perturb_normal();

/**
 * @brief void glTextureNormalEXT( GLenum mode );
 */
GLE_API void glTextureNormalEXT( GLenum mode );

//@}
			
			
/**
 * @name GL_EXT_vertex_array
 *	Extension number in OpenGL registry : 30
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/vertex_array.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_vertex_array is supported.
 * @return Returns \c true if \b GL_EXT_vertex_array is supported, false otherwise.
 */
GLE_API bool isGL_EXT_vertex_array();

/**
 * @brief void glArrayElementEXT( GLint i );
 */
GLE_API void glArrayElementEXT( GLint i );

/**
 * @brief void glColorPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
 */
GLE_API void glColorPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );

/**
 * @brief void glDrawArraysEXT( GLenum mode, GLint first, GLsizei count );
 */
GLE_API void glDrawArraysEXT( GLenum mode, GLint first, GLsizei count );

/**
 * @brief void glEdgeFlagPointerEXT( GLsizei stride, GLsizei count, const GLboolean *pointer );
 */
GLE_API void glEdgeFlagPointerEXT( GLsizei stride, GLsizei count, const GLboolean *pointer );

/**
 * @brief void glGetPointervEXT( GLenum pname, GLvoid* *params );
 */
GLE_API void glGetPointervEXT( GLenum pname, GLvoid* *params );

/**
 * @brief void glIndexPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
 */
GLE_API void glIndexPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );

/**
 * @brief void glNormalPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
 */
GLE_API void glNormalPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );

/**
 * @brief void glTexCoordPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
 */
GLE_API void glTexCoordPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );

/**
 * @brief void glVertexPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
 */
GLE_API void glVertexPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );

//@}
			
			
/**
 * @name GL_EXT_vertex_shader
 *	Extension number in OpenGL registry : 248
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/vertex_shader.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_vertex_shader is supported.
 * @return Returns \c true if \b GL_EXT_vertex_shader is supported, false otherwise.
 */
GLE_API bool isGL_EXT_vertex_shader();

/**
 * @brief void glBeginVertexShaderEXT( void );
 */
GLE_API void glBeginVertexShaderEXT( void );

/**
 * @brief void glEndVertexShaderEXT( void );
 */
GLE_API void glEndVertexShaderEXT( void );

/**
 * @brief void glBindVertexShaderEXT( GLuint id );
 */
GLE_API void glBindVertexShaderEXT( GLuint id );

/**
 * @brief GLuint glGenVertexShadersEXT( GLuint range );
 */
GLE_API GLuint glGenVertexShadersEXT( GLuint range );

/**
 * @brief void glDeleteVertexShaderEXT( GLuint id );
 */
GLE_API void glDeleteVertexShaderEXT( GLuint id );

/**
 * @brief void glShaderOp1EXT( GLenum op, GLuint res, GLuint arg1 );
 */
GLE_API void glShaderOp1EXT( GLenum op, GLuint res, GLuint arg1 );

/**
 * @brief void glShaderOp2EXT( GLenum op, GLuint res, GLuint arg1, GLuint arg2 );
 */
GLE_API void glShaderOp2EXT( GLenum op, GLuint res, GLuint arg1, GLuint arg2 );

/**
 * @brief void glShaderOp3EXT( GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3 );
 */
GLE_API void glShaderOp3EXT( GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3 );

/**
 * @brief void glSwizzleEXT( GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW );
 */
GLE_API void glSwizzleEXT( GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW );

/**
 * @brief void glWriteMaskEXT( GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW );
 */
GLE_API void glWriteMaskEXT( GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW );

/**
 * @brief void glInsertComponentEXT( GLuint res, GLuint src, GLuint num );
 */
GLE_API void glInsertComponentEXT( GLuint res, GLuint src, GLuint num );

/**
 * @brief void glExtractComponentEXT( GLuint res, GLuint src, GLuint num );
 */
GLE_API void glExtractComponentEXT( GLuint res, GLuint src, GLuint num );

/**
 * @brief GLuint glGenSymbolsEXT( GLenum datatype, GLenum storagetype, GLenum range, GLuint components );
 */
GLE_API GLuint glGenSymbolsEXT( GLenum datatype, GLenum storagetype, GLenum range, GLuint components );

/**
 * @brief void glSetInvariantEXT( GLuint id, GLenum type, const GLvoid *addr );
 */
GLE_API void glSetInvariantEXT( GLuint id, GLenum type, const GLvoid *addr );

/**
 * @brief void glSetLocalConstantEXT( GLuint id, GLenum type, const GLvoid *addr );
 */
GLE_API void glSetLocalConstantEXT( GLuint id, GLenum type, const GLvoid *addr );

/**
 * @brief void glVariantbvEXT( GLuint id, const GLbyte *addr );
 */
GLE_API void glVariantbvEXT( GLuint id, const GLbyte *addr );

/**
 * @brief void glVariantsvEXT( GLuint id, const GLshort *addr );
 */
GLE_API void glVariantsvEXT( GLuint id, const GLshort *addr );

/**
 * @brief void glVariantivEXT( GLuint id, const GLint *addr );
 */
GLE_API void glVariantivEXT( GLuint id, const GLint *addr );

/**
 * @brief void glVariantfvEXT( GLuint id, const GLfloat *addr );
 */
GLE_API void glVariantfvEXT( GLuint id, const GLfloat *addr );

/**
 * @brief void glVariantdvEXT( GLuint id, const GLdouble *addr );
 */
GLE_API void glVariantdvEXT( GLuint id, const GLdouble *addr );

/**
 * @brief void glVariantubvEXT( GLuint id, const GLubyte *addr );
 */
GLE_API void glVariantubvEXT( GLuint id, const GLubyte *addr );

/**
 * @brief void glVariantusvEXT( GLuint id, const GLushort *addr );
 */
GLE_API void glVariantusvEXT( GLuint id, const GLushort *addr );

/**
 * @brief void glVariantuivEXT( GLuint id, const GLuint *addr );
 */
GLE_API void glVariantuivEXT( GLuint id, const GLuint *addr );

/**
 * @brief void glVariantPointerEXT( GLuint id, GLenum type, GLuint stride, const GLvoid *addr );
 */
GLE_API void glVariantPointerEXT( GLuint id, GLenum type, GLuint stride, const GLvoid *addr );

/**
 * @brief void glEnableVariantClientStateEXT( GLuint id );
 */
GLE_API void glEnableVariantClientStateEXT( GLuint id );

/**
 * @brief void glDisableVariantClientStateEXT( GLuint id );
 */
GLE_API void glDisableVariantClientStateEXT( GLuint id );

/**
 * @brief GLuint glBindLightParameterEXT( GLenum light, GLenum value );
 */
GLE_API GLuint glBindLightParameterEXT( GLenum light, GLenum value );

/**
 * @brief GLuint glBindMaterialParameterEXT( GLenum face, GLenum value );
 */
GLE_API GLuint glBindMaterialParameterEXT( GLenum face, GLenum value );

/**
 * @brief GLuint glBindTexGenParameterEXT( GLenum unit, GLenum coord, GLenum value );
 */
GLE_API GLuint glBindTexGenParameterEXT( GLenum unit, GLenum coord, GLenum value );

/**
 * @brief GLuint glBindTextureUnitParameterEXT( GLenum unit, GLenum value );
 */
GLE_API GLuint glBindTextureUnitParameterEXT( GLenum unit, GLenum value );

/**
 * @brief GLuint glBindParameterEXT( GLenum value );
 */
GLE_API GLuint glBindParameterEXT( GLenum value );

/**
 * @brief GLboolean glIsVariantEnabledEXT( GLuint id, GLenum cap );
 */
GLE_API GLboolean glIsVariantEnabledEXT( GLuint id, GLenum cap );

/**
 * @brief void glGetVariantBooleanvEXT( GLuint id, GLenum value, GLboolean *data );
 */
GLE_API void glGetVariantBooleanvEXT( GLuint id, GLenum value, GLboolean *data );

/**
 * @brief void glGetVariantIntegervEXT( GLuint id, GLenum value, GLint *data );
 */
GLE_API void glGetVariantIntegervEXT( GLuint id, GLenum value, GLint *data );

/**
 * @brief void glGetVariantFloatvEXT( GLuint id, GLenum value, GLfloat *data );
 */
GLE_API void glGetVariantFloatvEXT( GLuint id, GLenum value, GLfloat *data );

/**
 * @brief void glGetVariantPointervEXT( GLuint id, GLenum value, GLvoid* *data );
 */
GLE_API void glGetVariantPointervEXT( GLuint id, GLenum value, GLvoid* *data );

/**
 * @brief void glGetInvariantBooleanvEXT( GLuint id, GLenum value, GLboolean *data );
 */
GLE_API void glGetInvariantBooleanvEXT( GLuint id, GLenum value, GLboolean *data );

/**
 * @brief void glGetInvariantIntegervEXT( GLuint id, GLenum value, GLint *data );
 */
GLE_API void glGetInvariantIntegervEXT( GLuint id, GLenum value, GLint *data );

/**
 * @brief void glGetInvariantFloatvEXT( GLuint id, GLenum value, GLfloat *data );
 */
GLE_API void glGetInvariantFloatvEXT( GLuint id, GLenum value, GLfloat *data );

/**
 * @brief void glGetLocalConstantBooleanvEXT( GLuint id, GLenum value, GLboolean *data );
 */
GLE_API void glGetLocalConstantBooleanvEXT( GLuint id, GLenum value, GLboolean *data );

/**
 * @brief void glGetLocalConstantIntegervEXT( GLuint id, GLenum value, GLint *data );
 */
GLE_API void glGetLocalConstantIntegervEXT( GLuint id, GLenum value, GLint *data );

/**
 * @brief void glGetLocalConstantFloatvEXT( GLuint id, GLenum value, GLfloat *data );
 */
GLE_API void glGetLocalConstantFloatvEXT( GLuint id, GLenum value, GLfloat *data );

//@}
			
			
/**
 * @name GL_EXT_vertex_weighting
 *	Extension number in OpenGL registry : 188
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/vertex_weighting.txt
 *	@ingroup GL_EXT
 */
//@{
/**
 * @brief Test if \b GL_EXT_vertex_weighting is supported.
 * @return Returns \c true if \b GL_EXT_vertex_weighting is supported, false otherwise.
 */
GLE_API bool isGL_EXT_vertex_weighting();

/**
 * @brief void glVertexWeightfEXT( GLfloat weight );
 */
GLE_API void glVertexWeightfEXT( GLfloat weight );

/**
 * @brief void glVertexWeightfvEXT( const GLfloat *weight );
 */
GLE_API void glVertexWeightfvEXT( const GLfloat *weight );

/**
 * @brief void glVertexWeightPointerEXT( GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glVertexWeightPointerEXT( GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer );

//@}

			
/**	
 * @name GL_FfdMaskSGIX
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_FfdMaskSGIX is supported.
 * @return Returns \c true if \b GL_FfdMaskSGIX is supported, false otherwise.
 */
GLE_API bool isGL_FfdMaskSGIX();

//@}
			
			
/**
 * @name GL_GREMEDY_string_marker
 *	Extension number in OpenGL registry : 311
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/GREMEDY/string_marker.txt
 *	@ingroup GL_GREMEDY
 */
//@{
/**
 * @brief Test if \b GL_GREMEDY_string_marker is supported.
 * @return Returns \c true if \b GL_GREMEDY_string_marker is supported, false otherwise.
 */
GLE_API bool isGL_GREMEDY_string_marker();

/**
 * @brief void glStringMarkerGREMEDY( GLsizei len, const GLvoid *string );
 */
GLE_API void glStringMarkerGREMEDY( GLsizei len, const GLvoid *string );

//@}
			
			
/**
 * @name GL_HP_convolution_border_modes
 *	Extension number in OpenGL registry : 67
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/HP/convolution_border_modes.txt
 *	@ingroup GL_HP
 */
//@{
/**
 * @brief Test if \b GL_HP_convolution_border_modes is supported.
 * @return Returns \c true if \b GL_HP_convolution_border_modes is supported, false otherwise.
 */
GLE_API bool isGL_HP_convolution_border_modes();

//@}
			
			
/**
 * @name GL_HP_image_transform
 *	Extension number in OpenGL registry : 66
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/HP/image_transform.txt
 *	@ingroup GL_HP
 */
//@{
/**
 * @brief Test if \b GL_HP_image_transform is supported.
 * @return Returns \c true if \b GL_HP_image_transform is supported, false otherwise.
 */
GLE_API bool isGL_HP_image_transform();

/**
 * @brief void glImageTransformParameteriHP( GLenum target, GLenum pname, GLint param );
 */
GLE_API void glImageTransformParameteriHP( GLenum target, GLenum pname, GLint param );

/**
 * @brief void glImageTransformParameterfHP( GLenum target, GLenum pname, GLfloat param );
 */
GLE_API void glImageTransformParameterfHP( GLenum target, GLenum pname, GLfloat param );

/**
 * @brief void glImageTransformParameterivHP( GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glImageTransformParameterivHP( GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glImageTransformParameterfvHP( GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glImageTransformParameterfvHP( GLenum target, GLenum pname, const GLfloat *params );

/**
 * @brief void glGetImageTransformParameterivHP( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetImageTransformParameterivHP( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetImageTransformParameterfvHP( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetImageTransformParameterfvHP( GLenum target, GLenum pname, GLfloat *params );

//@}
			
			
/**
 * @name GL_HP_occlusion_test
 *	Extension number in OpenGL registry : 137
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/HP/occlusion_test.txt
 *	@ingroup GL_HP
 */
//@{
/**
 * @brief Test if \b GL_HP_occlusion_test is supported.
 * @return Returns \c true if \b GL_HP_occlusion_test is supported, false otherwise.
 */
GLE_API bool isGL_HP_occlusion_test();

//@}
			
			
/**
 * @name GL_HP_texture_lighting
 *	Extension number in OpenGL registry : 111
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/HP/texture_lighting.txt
 *	@ingroup GL_HP
 */
//@{
/**
 * @brief Test if \b GL_HP_texture_lighting is supported.
 * @return Returns \c true if \b GL_HP_texture_lighting is supported, false otherwise.
 */
GLE_API bool isGL_HP_texture_lighting();

//@}
			
			
/**
 * @name GL_IBM_cull_vertex
 *	Extension number in OpenGL registry : 199
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/cull_vertex.txt
 *	@ingroup GL_IBM
 */
//@{
/**
 * @brief Test if \b GL_IBM_cull_vertex is supported.
 * @return Returns \c true if \b GL_IBM_cull_vertex is supported, false otherwise.
 */
GLE_API bool isGL_IBM_cull_vertex();

//@}
			
			
/**
 * @name GL_IBM_multimode_draw_arrays
 *	Extension number in OpenGL registry : 200
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/multimode_draw_arrays.txt
 *	@ingroup GL_IBM
 */
//@{
/**
 * @brief Test if \b GL_IBM_multimode_draw_arrays is supported.
 * @return Returns \c true if \b GL_IBM_multimode_draw_arrays is supported, false otherwise.
 */
GLE_API bool isGL_IBM_multimode_draw_arrays();

/**
 * @brief void glMultiModeDrawArraysIBM( const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride );
 */
GLE_API void glMultiModeDrawArraysIBM( const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride );

/**
 * @brief void glMultiModeDrawElementsIBM( const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride );
 */
GLE_API void glMultiModeDrawElementsIBM( const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride );

//@}
			
			
/**
 * @name GL_IBM_rasterpos_clip
 *	Extension number in OpenGL registry : 110
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/rasterpos_clip.txt
 *	@ingroup GL_IBM
 */
//@{
/**
 * @brief Test if \b GL_IBM_rasterpos_clip is supported.
 * @return Returns \c true if \b GL_IBM_rasterpos_clip is supported, false otherwise.
 */
GLE_API bool isGL_IBM_rasterpos_clip();

//@}
			
			
/**
 * @name GL_IBM_texture_mirrored_repeat
 *	Extension number in OpenGL registry : 224
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/texture_mirrored_repeat.txt
 *	@ingroup GL_IBM
 */
//@{
/**
 * @brief Test if \b GL_IBM_texture_mirrored_repeat is supported.
 * @return Returns \c true if \b GL_IBM_texture_mirrored_repeat is supported, false otherwise.
 */
GLE_API bool isGL_IBM_texture_mirrored_repeat();

//@}
			
			
/**
 * @name GL_IBM_vertex_array_lists
 *	Extension number in OpenGL registry : 201
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/vertex_array_lists.txt
 *	@ingroup GL_IBM
 */
//@{
/**
 * @brief Test if \b GL_IBM_vertex_array_lists is supported.
 * @return Returns \c true if \b GL_IBM_vertex_array_lists is supported, false otherwise.
 */
GLE_API bool isGL_IBM_vertex_array_lists();

/**
 * @brief void glColorPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
 */
GLE_API void glColorPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );

/**
 * @brief void glSecondaryColorPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
 */
GLE_API void glSecondaryColorPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );

/**
 * @brief void glEdgeFlagPointerListIBM( GLint stride, const GLboolean* *pointer, GLint ptrstride );
 */
GLE_API void glEdgeFlagPointerListIBM( GLint stride, const GLboolean* *pointer, GLint ptrstride );

/**
 * @brief void glFogCoordPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
 */
GLE_API void glFogCoordPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );

/**
 * @brief void glIndexPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
 */
GLE_API void glIndexPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );

/**
 * @brief void glNormalPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
 */
GLE_API void glNormalPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );

/**
 * @brief void glTexCoordPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
 */
GLE_API void glTexCoordPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );

/**
 * @brief void glVertexPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
 */
GLE_API void glVertexPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );

//@}

			
/**	
 * @name GL_INGR_blend_func_separate
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_INGR_blend_func_separate is supported.
 * @return Returns \c true if \b GL_INGR_blend_func_separate is supported, false otherwise.
 */
GLE_API bool isGL_INGR_blend_func_separate();

/**
 * @brief void glBlendFuncSeparateINGR( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha );
 */
GLE_API void glBlendFuncSeparateINGR( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha );

//@}
			
			
/**
 * @name GL_INGR_color_clamp
 *	Extension number in OpenGL registry : 174
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/INGR/color_clamp.txt
 *	@ingroup GL_INGR
 */
//@{
/**
 * @brief Test if \b GL_INGR_color_clamp is supported.
 * @return Returns \c true if \b GL_INGR_color_clamp is supported, false otherwise.
 */
GLE_API bool isGL_INGR_color_clamp();

//@}
			
			
/**
 * @name GL_INGR_interlace_read
 *	Extension number in OpenGL registry : 175
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/INGR/interlace_read.txt
 *	@ingroup GL_INGR
 */
//@{
/**
 * @brief Test if \b GL_INGR_interlace_read is supported.
 * @return Returns \c true if \b GL_INGR_interlace_read is supported, false otherwise.
 */
GLE_API bool isGL_INGR_interlace_read();

//@}

			
/**	
 * @name GL_INGR_palette_buffer
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_INGR_palette_buffer is supported.
 * @return Returns \c true if \b GL_INGR_palette_buffer is supported, false otherwise.
 */
GLE_API bool isGL_INGR_palette_buffer();

//@}
			
			
/**
 * @name GL_INTEL_parallel_arrays
 *	Extension number in OpenGL registry : 136
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/INTEL/parallel_arrays.txt
 *	@ingroup GL_INTEL
 */
//@{
/**
 * @brief Test if \b GL_INTEL_parallel_arrays is supported.
 * @return Returns \c true if \b GL_INTEL_parallel_arrays is supported, false otherwise.
 */
GLE_API bool isGL_INTEL_parallel_arrays();

/**
 * @brief void glVertexPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer );
 */
GLE_API void glVertexPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer );

/**
 * @brief void glNormalPointervINTEL( GLenum type, const GLvoid* *pointer );
 */
GLE_API void glNormalPointervINTEL( GLenum type, const GLvoid* *pointer );

/**
 * @brief void glColorPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer );
 */
GLE_API void glColorPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer );

/**
 * @brief void glTexCoordPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer );
 */
GLE_API void glTexCoordPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer );

//@}
			
			
/**
 * @name GL_INTEL_texture_scissor
 *	Extension number in OpenGL registry : 135
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/INTEL/texture_scissor.txt
 *	@ingroup GL_INTEL
 */
//@{
/**
 * @brief Test if \b GL_INTEL_texture_scissor is supported.
 * @return Returns \c true if \b GL_INTEL_texture_scissor is supported, false otherwise.
 */
GLE_API bool isGL_INTEL_texture_scissor();

//@}
			
			
/**
 * @name GL_MESA_pack_invert
 *	Extension number in OpenGL registry : 300
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/MESA/pack_invert.txt
 *	@ingroup GL_MESA
 */
//@{
/**
 * @brief Test if \b GL_MESA_pack_invert is supported.
 * @return Returns \c true if \b GL_MESA_pack_invert is supported, false otherwise.
 */
GLE_API bool isGL_MESA_pack_invert();

//@}
			
			
/**
 * @name GL_MESA_resize_buffers
 *	Extension number in OpenGL registry : 196
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/MESA/resize_buffers.txt
 *	@ingroup GL_MESA
 */
//@{
/**
 * @brief Test if \b GL_MESA_resize_buffers is supported.
 * @return Returns \c true if \b GL_MESA_resize_buffers is supported, false otherwise.
 */
GLE_API bool isGL_MESA_resize_buffers();

/**
 * @brief void glResizeBuffersMESA( void );
 */
GLE_API void glResizeBuffersMESA( void );

//@}
			
			
/**
 * @name GL_MESA_window_pos
 *	Extension number in OpenGL registry : 197
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/MESA/window_pos.txt
 *	@ingroup GL_MESA
 */
//@{
/**
 * @brief Test if \b GL_MESA_window_pos is supported.
 * @return Returns \c true if \b GL_MESA_window_pos is supported, false otherwise.
 */
GLE_API bool isGL_MESA_window_pos();

/**
 * @brief void glWindowPos2dMESA( GLdouble x, GLdouble y );
 */
GLE_API void glWindowPos2dMESA( GLdouble x, GLdouble y );

/**
 * @brief void glWindowPos2dvMESA( const GLdouble *v );
 */
GLE_API void glWindowPos2dvMESA( const GLdouble *v );

/**
 * @brief void glWindowPos2fMESA( GLfloat x, GLfloat y );
 */
GLE_API void glWindowPos2fMESA( GLfloat x, GLfloat y );

/**
 * @brief void glWindowPos2fvMESA( const GLfloat *v );
 */
GLE_API void glWindowPos2fvMESA( const GLfloat *v );

/**
 * @brief void glWindowPos2iMESA( GLint x, GLint y );
 */
GLE_API void glWindowPos2iMESA( GLint x, GLint y );

/**
 * @brief void glWindowPos2ivMESA( const GLint *v );
 */
GLE_API void glWindowPos2ivMESA( const GLint *v );

/**
 * @brief void glWindowPos2sMESA( GLshort x, GLshort y );
 */
GLE_API void glWindowPos2sMESA( GLshort x, GLshort y );

/**
 * @brief void glWindowPos2svMESA( const GLshort *v );
 */
GLE_API void glWindowPos2svMESA( const GLshort *v );

/**
 * @brief void glWindowPos3dMESA( GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glWindowPos3dMESA( GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glWindowPos3dvMESA( const GLdouble *v );
 */
GLE_API void glWindowPos3dvMESA( const GLdouble *v );

/**
 * @brief void glWindowPos3fMESA( GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glWindowPos3fMESA( GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glWindowPos3fvMESA( const GLfloat *v );
 */
GLE_API void glWindowPos3fvMESA( const GLfloat *v );

/**
 * @brief void glWindowPos3iMESA( GLint x, GLint y, GLint z );
 */
GLE_API void glWindowPos3iMESA( GLint x, GLint y, GLint z );

/**
 * @brief void glWindowPos3ivMESA( const GLint *v );
 */
GLE_API void glWindowPos3ivMESA( const GLint *v );

/**
 * @brief void glWindowPos3sMESA( GLshort x, GLshort y, GLshort z );
 */
GLE_API void glWindowPos3sMESA( GLshort x, GLshort y, GLshort z );

/**
 * @brief void glWindowPos3svMESA( const GLshort *v );
 */
GLE_API void glWindowPos3svMESA( const GLshort *v );

/**
 * @brief void glWindowPos4dMESA( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glWindowPos4dMESA( GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glWindowPos4dvMESA( const GLdouble *v );
 */
GLE_API void glWindowPos4dvMESA( const GLdouble *v );

/**
 * @brief void glWindowPos4fMESA( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glWindowPos4fMESA( GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glWindowPos4fvMESA( const GLfloat *v );
 */
GLE_API void glWindowPos4fvMESA( const GLfloat *v );

/**
 * @brief void glWindowPos4iMESA( GLint x, GLint y, GLint z, GLint w );
 */
GLE_API void glWindowPos4iMESA( GLint x, GLint y, GLint z, GLint w );

/**
 * @brief void glWindowPos4ivMESA( const GLint *v );
 */
GLE_API void glWindowPos4ivMESA( const GLint *v );

/**
 * @brief void glWindowPos4sMESA( GLshort x, GLshort y, GLshort z, GLshort w );
 */
GLE_API void glWindowPos4sMESA( GLshort x, GLshort y, GLshort z, GLshort w );

/**
 * @brief void glWindowPos4svMESA( const GLshort *v );
 */
GLE_API void glWindowPos4svMESA( const GLshort *v );

//@}
			
			
/**
 * @name GL_MESA_ycbcr_texture
 *	Extension number in OpenGL registry : 301
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/MESA/ycbcr_texture.txt
 *	@ingroup GL_MESA
 */
//@{
/**
 * @brief Test if \b GL_MESA_ycbcr_texture is supported.
 * @return Returns \c true if \b GL_MESA_ycbcr_texture is supported, false otherwise.
 */
GLE_API bool isGL_MESA_ycbcr_texture();

//@}
			
			
/**
 * @name GL_NV_blend_square
 *	Extension number in OpenGL registry : 194
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/blend_square.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_blend_square is supported.
 * @return Returns \c true if \b GL_NV_blend_square is supported, false otherwise.
 */
GLE_API bool isGL_NV_blend_square();

//@}
			
			
/**
 * @name GL_NV_copy_depth_to_color
 *	Extension number in OpenGL registry : 243
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/copy_depth_to_color.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_copy_depth_to_color is supported.
 * @return Returns \c true if \b GL_NV_copy_depth_to_color is supported, false otherwise.
 */
GLE_API bool isGL_NV_copy_depth_to_color();

//@}
			
			
/**
 * @name GL_NV_depth_clamp
 *	Extension number in OpenGL registry : 260
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/depth_clamp.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_depth_clamp is supported.
 * @return Returns \c true if \b GL_NV_depth_clamp is supported, false otherwise.
 */
GLE_API bool isGL_NV_depth_clamp();

//@}
			
			
/**
 * @name GL_NV_evaluators
 *	Extension number in OpenGL registry : 225
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/evaluators.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_evaluators is supported.
 * @return Returns \c true if \b GL_NV_evaluators is supported, false otherwise.
 */
GLE_API bool isGL_NV_evaluators();

/**
 * @brief void glMapControlPointsNV( GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points );
 */
GLE_API void glMapControlPointsNV( GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points );

/**
 * @brief void glMapParameterivNV( GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glMapParameterivNV( GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glMapParameterfvNV( GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glMapParameterfvNV( GLenum target, GLenum pname, const GLfloat *params );

/**
 * @brief void glGetMapControlPointsNV( GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points );
 */
GLE_API void glGetMapControlPointsNV( GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points );

/**
 * @brief void glGetMapParameterivNV( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetMapParameterivNV( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetMapParameterfvNV( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetMapParameterfvNV( GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetMapAttribParameterivNV( GLenum target, GLuint index, GLenum pname, GLint *params );
 */
GLE_API void glGetMapAttribParameterivNV( GLenum target, GLuint index, GLenum pname, GLint *params );

/**
 * @brief void glGetMapAttribParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat *params );
 */
GLE_API void glGetMapAttribParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat *params );

/**
 * @brief void glEvalMapsNV( GLenum target, GLenum mode );
 */
GLE_API void glEvalMapsNV( GLenum target, GLenum mode );

//@}
			
			
/**
 * @name GL_NV_fence
 *	Extension number in OpenGL registry : 222
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fence.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_fence is supported.
 * @return Returns \c true if \b GL_NV_fence is supported, false otherwise.
 */
GLE_API bool isGL_NV_fence();

/**
 * @brief void glDeleteFencesNV( GLsizei n, const GLuint *fences );
 */
GLE_API void glDeleteFencesNV( GLsizei n, const GLuint *fences );

/**
 * @brief void glGenFencesNV( GLsizei n, GLuint *fences );
 */
GLE_API void glGenFencesNV( GLsizei n, GLuint *fences );

/**
 * @brief GLboolean glIsFenceNV( GLuint fence );
 */
GLE_API GLboolean glIsFenceNV( GLuint fence );

/**
 * @brief GLboolean glTestFenceNV( GLuint fence );
 */
GLE_API GLboolean glTestFenceNV( GLuint fence );

/**
 * @brief void glGetFenceivNV( GLuint fence, GLenum pname, GLint *params );
 */
GLE_API void glGetFenceivNV( GLuint fence, GLenum pname, GLint *params );

/**
 * @brief void glFinishFenceNV( GLuint fence );
 */
GLE_API void glFinishFenceNV( GLuint fence );

/**
 * @brief void glSetFenceNV( GLuint fence, GLenum condition );
 */
GLE_API void glSetFenceNV( GLuint fence, GLenum condition );

//@}
			
			
/**
 * @name GL_NV_float_buffer
 *	Extension number in OpenGL registry : 281
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/float_buffer.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_float_buffer is supported.
 * @return Returns \c true if \b GL_NV_float_buffer is supported, false otherwise.
 */
GLE_API bool isGL_NV_float_buffer();

//@}
			
			
/**
 * @name GL_NV_fog_distance
 *	Extension number in OpenGL registry : 192
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fog_distance.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_fog_distance is supported.
 * @return Returns \c true if \b GL_NV_fog_distance is supported, false otherwise.
 */
GLE_API bool isGL_NV_fog_distance();

//@}
			
			
/**
 * @name GL_NV_fragment_program
 *	Extension number in OpenGL registry : 282
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fragment_program.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_fragment_program is supported.
 * @return Returns \c true if \b GL_NV_fragment_program is supported, false otherwise.
 */
GLE_API bool isGL_NV_fragment_program();

/**
 * @brief void glProgramNamedParameter4fNV( GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glProgramNamedParameter4fNV( GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glProgramNamedParameter4dNV( GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glProgramNamedParameter4dNV( GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glProgramNamedParameter4fvNV( GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v );
 */
GLE_API void glProgramNamedParameter4fvNV( GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v );

/**
 * @brief void glProgramNamedParameter4dvNV( GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v );
 */
GLE_API void glProgramNamedParameter4dvNV( GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v );

/**
 * @brief void glGetProgramNamedParameterfvNV( GLuint id, GLsizei len, const GLubyte *name, GLfloat *params );
 */
GLE_API void glGetProgramNamedParameterfvNV( GLuint id, GLsizei len, const GLubyte *name, GLfloat *params );

/**
 * @brief void glGetProgramNamedParameterdvNV( GLuint id, GLsizei len, const GLubyte *name, GLdouble *params );
 */
GLE_API void glGetProgramNamedParameterdvNV( GLuint id, GLsizei len, const GLubyte *name, GLdouble *params );

//@}
			
			
/**
 * @name GL_NV_fragment_program2
 *	Extension number in OpenGL registry : 304
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fragment_program2.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_fragment_program2 is supported.
 * @return Returns \c true if \b GL_NV_fragment_program2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_fragment_program2();

//@}
			
			
/**
 * @name GL_NV_fragment_program_option
 *	Extension number in OpenGL registry : 303
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fragment_program_option.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_fragment_program_option is supported.
 * @return Returns \c true if \b GL_NV_fragment_program_option is supported, false otherwise.
 */
GLE_API bool isGL_NV_fragment_program_option();

//@}
			
			
/**
 * @name GL_NV_half_float
 *	Extension number in OpenGL registry : 283
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/half_float.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_half_float is supported.
 * @return Returns \c true if \b GL_NV_half_float is supported, false otherwise.
 */
GLE_API bool isGL_NV_half_float();

/**
 * @brief void glVertex2hNV( GLhalfNV x, GLhalfNV y );
 */
GLE_API void glVertex2hNV( GLhalfNV x, GLhalfNV y );

/**
 * @brief void glVertex2hvNV( const GLhalfNV *v );
 */
GLE_API void glVertex2hvNV( const GLhalfNV *v );

/**
 * @brief void glVertex3hNV( GLhalfNV x, GLhalfNV y, GLhalfNV z );
 */
GLE_API void glVertex3hNV( GLhalfNV x, GLhalfNV y, GLhalfNV z );

/**
 * @brief void glVertex3hvNV( const GLhalfNV *v );
 */
GLE_API void glVertex3hvNV( const GLhalfNV *v );

/**
 * @brief void glVertex4hNV( GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w );
 */
GLE_API void glVertex4hNV( GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w );

/**
 * @brief void glVertex4hvNV( const GLhalfNV *v );
 */
GLE_API void glVertex4hvNV( const GLhalfNV *v );

/**
 * @brief void glNormal3hNV( GLhalfNV nx, GLhalfNV ny, GLhalfNV nz );
 */
GLE_API void glNormal3hNV( GLhalfNV nx, GLhalfNV ny, GLhalfNV nz );

/**
 * @brief void glNormal3hvNV( const GLhalfNV *v );
 */
GLE_API void glNormal3hvNV( const GLhalfNV *v );

/**
 * @brief void glColor3hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue );
 */
GLE_API void glColor3hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue );

/**
 * @brief void glColor3hvNV( const GLhalfNV *v );
 */
GLE_API void glColor3hvNV( const GLhalfNV *v );

/**
 * @brief void glColor4hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha );
 */
GLE_API void glColor4hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha );

/**
 * @brief void glColor4hvNV( const GLhalfNV *v );
 */
GLE_API void glColor4hvNV( const GLhalfNV *v );

/**
 * @brief void glTexCoord1hNV( GLhalfNV s );
 */
GLE_API void glTexCoord1hNV( GLhalfNV s );

/**
 * @brief void glTexCoord1hvNV( const GLhalfNV *v );
 */
GLE_API void glTexCoord1hvNV( const GLhalfNV *v );

/**
 * @brief void glTexCoord2hNV( GLhalfNV s, GLhalfNV t );
 */
GLE_API void glTexCoord2hNV( GLhalfNV s, GLhalfNV t );

/**
 * @brief void glTexCoord2hvNV( const GLhalfNV *v );
 */
GLE_API void glTexCoord2hvNV( const GLhalfNV *v );

/**
 * @brief void glTexCoord3hNV( GLhalfNV s, GLhalfNV t, GLhalfNV r );
 */
GLE_API void glTexCoord3hNV( GLhalfNV s, GLhalfNV t, GLhalfNV r );

/**
 * @brief void glTexCoord3hvNV( const GLhalfNV *v );
 */
GLE_API void glTexCoord3hvNV( const GLhalfNV *v );

/**
 * @brief void glTexCoord4hNV( GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q );
 */
GLE_API void glTexCoord4hNV( GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q );

/**
 * @brief void glTexCoord4hvNV( const GLhalfNV *v );
 */
GLE_API void glTexCoord4hvNV( const GLhalfNV *v );

/**
 * @brief void glMultiTexCoord1hNV( GLenum target, GLhalfNV s );
 */
GLE_API void glMultiTexCoord1hNV( GLenum target, GLhalfNV s );

/**
 * @brief void glMultiTexCoord1hvNV( GLenum target, const GLhalfNV *v );
 */
GLE_API void glMultiTexCoord1hvNV( GLenum target, const GLhalfNV *v );

/**
 * @brief void glMultiTexCoord2hNV( GLenum target, GLhalfNV s, GLhalfNV t );
 */
GLE_API void glMultiTexCoord2hNV( GLenum target, GLhalfNV s, GLhalfNV t );

/**
 * @brief void glMultiTexCoord2hvNV( GLenum target, const GLhalfNV *v );
 */
GLE_API void glMultiTexCoord2hvNV( GLenum target, const GLhalfNV *v );

/**
 * @brief void glMultiTexCoord3hNV( GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r );
 */
GLE_API void glMultiTexCoord3hNV( GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r );

/**
 * @brief void glMultiTexCoord3hvNV( GLenum target, const GLhalfNV *v );
 */
GLE_API void glMultiTexCoord3hvNV( GLenum target, const GLhalfNV *v );

/**
 * @brief void glMultiTexCoord4hNV( GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q );
 */
GLE_API void glMultiTexCoord4hNV( GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q );

/**
 * @brief void glMultiTexCoord4hvNV( GLenum target, const GLhalfNV *v );
 */
GLE_API void glMultiTexCoord4hvNV( GLenum target, const GLhalfNV *v );

/**
 * @brief void glFogCoordhNV( GLhalfNV fog );
 */
GLE_API void glFogCoordhNV( GLhalfNV fog );

/**
 * @brief void glFogCoordhvNV( const GLhalfNV *fog );
 */
GLE_API void glFogCoordhvNV( const GLhalfNV *fog );

/**
 * @brief void glSecondaryColor3hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue );
 */
GLE_API void glSecondaryColor3hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue );

/**
 * @brief void glSecondaryColor3hvNV( const GLhalfNV *v );
 */
GLE_API void glSecondaryColor3hvNV( const GLhalfNV *v );

/**
 * @brief void glVertexWeighthNV( GLhalfNV weight );
 */
GLE_API void glVertexWeighthNV( GLhalfNV weight );

/**
 * @brief void glVertexWeighthvNV( const GLhalfNV *weight );
 */
GLE_API void glVertexWeighthvNV( const GLhalfNV *weight );

/**
 * @brief void glVertexAttrib1hNV( GLuint index, GLhalfNV x );
 */
GLE_API void glVertexAttrib1hNV( GLuint index, GLhalfNV x );

/**
 * @brief void glVertexAttrib1hvNV( GLuint index, const GLhalfNV *v );
 */
GLE_API void glVertexAttrib1hvNV( GLuint index, const GLhalfNV *v );

/**
 * @brief void glVertexAttrib2hNV( GLuint index, GLhalfNV x, GLhalfNV y );
 */
GLE_API void glVertexAttrib2hNV( GLuint index, GLhalfNV x, GLhalfNV y );

/**
 * @brief void glVertexAttrib2hvNV( GLuint index, const GLhalfNV *v );
 */
GLE_API void glVertexAttrib2hvNV( GLuint index, const GLhalfNV *v );

/**
 * @brief void glVertexAttrib3hNV( GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z );
 */
GLE_API void glVertexAttrib3hNV( GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z );

/**
 * @brief void glVertexAttrib3hvNV( GLuint index, const GLhalfNV *v );
 */
GLE_API void glVertexAttrib3hvNV( GLuint index, const GLhalfNV *v );

/**
 * @brief void glVertexAttrib4hNV( GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w );
 */
GLE_API void glVertexAttrib4hNV( GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w );

/**
 * @brief void glVertexAttrib4hvNV( GLuint index, const GLhalfNV *v );
 */
GLE_API void glVertexAttrib4hvNV( GLuint index, const GLhalfNV *v );

/**
 * @brief void glVertexAttribs1hvNV( GLuint index, GLsizei n, const GLhalfNV *v );
 */
GLE_API void glVertexAttribs1hvNV( GLuint index, GLsizei n, const GLhalfNV *v );

/**
 * @brief void glVertexAttribs2hvNV( GLuint index, GLsizei n, const GLhalfNV *v );
 */
GLE_API void glVertexAttribs2hvNV( GLuint index, GLsizei n, const GLhalfNV *v );

/**
 * @brief void glVertexAttribs3hvNV( GLuint index, GLsizei n, const GLhalfNV *v );
 */
GLE_API void glVertexAttribs3hvNV( GLuint index, GLsizei n, const GLhalfNV *v );

/**
 * @brief void glVertexAttribs4hvNV( GLuint index, GLsizei n, const GLhalfNV *v );
 */
GLE_API void glVertexAttribs4hvNV( GLuint index, GLsizei n, const GLhalfNV *v );

//@}
			
			
/**
 * @name GL_NV_light_max_exponent
 *	Extension number in OpenGL registry : 189
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/light_max_exponent.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_light_max_exponent is supported.
 * @return Returns \c true if \b GL_NV_light_max_exponent is supported, false otherwise.
 */
GLE_API bool isGL_NV_light_max_exponent();

//@}
			
			
/**
 * @name GL_NV_multisample_filter_hint
 *	Extension number in OpenGL registry : 259
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/multisample_filter_hint.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_multisample_filter_hint is supported.
 * @return Returns \c true if \b GL_NV_multisample_filter_hint is supported, false otherwise.
 */
GLE_API bool isGL_NV_multisample_filter_hint();

//@}
			
			
/**
 * @name GL_NV_occlusion_query
 *	Extension number in OpenGL registry : 261
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/occlusion_query.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_occlusion_query is supported.
 * @return Returns \c true if \b GL_NV_occlusion_query is supported, false otherwise.
 */
GLE_API bool isGL_NV_occlusion_query();

/**
 * @brief void glGenOcclusionQueriesNV( GLsizei n, GLuint *ids );
 */
GLE_API void glGenOcclusionQueriesNV( GLsizei n, GLuint *ids );

/**
 * @brief void glDeleteOcclusionQueriesNV( GLsizei n, const GLuint *ids );
 */
GLE_API void glDeleteOcclusionQueriesNV( GLsizei n, const GLuint *ids );

/**
 * @brief GLboolean glIsOcclusionQueryNV( GLuint id );
 */
GLE_API GLboolean glIsOcclusionQueryNV( GLuint id );

/**
 * @brief void glBeginOcclusionQueryNV( GLuint id );
 */
GLE_API void glBeginOcclusionQueryNV( GLuint id );

/**
 * @brief void glEndOcclusionQueryNV( void );
 */
GLE_API void glEndOcclusionQueryNV( void );

/**
 * @brief void glGetOcclusionQueryivNV( GLuint id, GLenum pname, GLint *params );
 */
GLE_API void glGetOcclusionQueryivNV( GLuint id, GLenum pname, GLint *params );

/**
 * @brief void glGetOcclusionQueryuivNV( GLuint id, GLenum pname, GLuint *params );
 */
GLE_API void glGetOcclusionQueryuivNV( GLuint id, GLenum pname, GLuint *params );

//@}
			
			
/**
 * @name GL_NV_packed_depth_stencil
 *	Extension number in OpenGL registry : 226
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/packed_depth_stencil.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_packed_depth_stencil is supported.
 * @return Returns \c true if \b GL_NV_packed_depth_stencil is supported, false otherwise.
 */
GLE_API bool isGL_NV_packed_depth_stencil();

//@}
			
			
/**
 * @name GL_NV_pixel_data_range
 *	Extension number in OpenGL registry : 284
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/pixel_data_range.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_pixel_data_range is supported.
 * @return Returns \c true if \b GL_NV_pixel_data_range is supported, false otherwise.
 */
GLE_API bool isGL_NV_pixel_data_range();

/**
 * @brief void glPixelDataRangeNV( GLenum target, GLsizei length, GLvoid *pointer );
 */
GLE_API void glPixelDataRangeNV( GLenum target, GLsizei length, GLvoid *pointer );

/**
 * @brief void glFlushPixelDataRangeNV( GLenum target );
 */
GLE_API void glFlushPixelDataRangeNV( GLenum target );

//@}
			
			
/**
 * @name GL_NV_point_sprite
 *	Extension number in OpenGL registry : 262
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/point_sprite.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_point_sprite is supported.
 * @return Returns \c true if \b GL_NV_point_sprite is supported, false otherwise.
 */
GLE_API bool isGL_NV_point_sprite();

/**
 * @brief void glPointParameteriNV( GLenum pname, GLint param );
 */
GLE_API void glPointParameteriNV( GLenum pname, GLint param );

/**
 * @brief void glPointParameterivNV( GLenum pname, const GLint *params );
 */
GLE_API void glPointParameterivNV( GLenum pname, const GLint *params );

//@}
			
			
/**
 * @name GL_NV_primitive_restart
 *	Extension number in OpenGL registry : 285
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/primitive_restart.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_primitive_restart is supported.
 * @return Returns \c true if \b GL_NV_primitive_restart is supported, false otherwise.
 */
GLE_API bool isGL_NV_primitive_restart();

/**
 * @brief void glPrimitiveRestartNV( void );
 */
GLE_API void glPrimitiveRestartNV( void );

/**
 * @brief void glPrimitiveRestartIndexNV( GLuint index );
 */
GLE_API void glPrimitiveRestartIndexNV( GLuint index );

//@}
			
			
/**
 * @name GL_NV_register_combiners
 *	Extension number in OpenGL registry : 191
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/register_combiners.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_register_combiners is supported.
 * @return Returns \c true if \b GL_NV_register_combiners is supported, false otherwise.
 */
GLE_API bool isGL_NV_register_combiners();

/**
 * @brief void glCombinerParameterfvNV( GLenum pname, const GLfloat *params );
 */
GLE_API void glCombinerParameterfvNV( GLenum pname, const GLfloat *params );

/**
 * @brief void glCombinerParameterfNV( GLenum pname, GLfloat param );
 */
GLE_API void glCombinerParameterfNV( GLenum pname, GLfloat param );

/**
 * @brief void glCombinerParameterivNV( GLenum pname, const GLint *params );
 */
GLE_API void glCombinerParameterivNV( GLenum pname, const GLint *params );

/**
 * @brief void glCombinerParameteriNV( GLenum pname, GLint param );
 */
GLE_API void glCombinerParameteriNV( GLenum pname, GLint param );

/**
 * @brief void glCombinerInputNV( GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage );
 */
GLE_API void glCombinerInputNV( GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage );

/**
 * @brief void glCombinerOutputNV( GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum );
 */
GLE_API void glCombinerOutputNV( GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum );

/**
 * @brief void glFinalCombinerInputNV( GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage );
 */
GLE_API void glFinalCombinerInputNV( GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage );

/**
 * @brief void glGetCombinerInputParameterfvNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params );
 */
GLE_API void glGetCombinerInputParameterfvNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params );

/**
 * @brief void glGetCombinerInputParameterivNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params );
 */
GLE_API void glGetCombinerInputParameterivNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params );

/**
 * @brief void glGetCombinerOutputParameterfvNV( GLenum stage, GLenum portion, GLenum pname, GLfloat *params );
 */
GLE_API void glGetCombinerOutputParameterfvNV( GLenum stage, GLenum portion, GLenum pname, GLfloat *params );

/**
 * @brief void glGetCombinerOutputParameterivNV( GLenum stage, GLenum portion, GLenum pname, GLint *params );
 */
GLE_API void glGetCombinerOutputParameterivNV( GLenum stage, GLenum portion, GLenum pname, GLint *params );

/**
 * @brief void glGetFinalCombinerInputParameterfvNV( GLenum variable, GLenum pname, GLfloat *params );
 */
GLE_API void glGetFinalCombinerInputParameterfvNV( GLenum variable, GLenum pname, GLfloat *params );

/**
 * @brief void glGetFinalCombinerInputParameterivNV( GLenum variable, GLenum pname, GLint *params );
 */
GLE_API void glGetFinalCombinerInputParameterivNV( GLenum variable, GLenum pname, GLint *params );

//@}
			
			
/**
 * @name GL_NV_register_combiners2
 *	Extension number in OpenGL registry : 227
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/register_combiners2.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_register_combiners2 is supported.
 * @return Returns \c true if \b GL_NV_register_combiners2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_register_combiners2();

/**
 * @brief void glCombinerStageParameterfvNV( GLenum stage, GLenum pname, const GLfloat *params );
 */
GLE_API void glCombinerStageParameterfvNV( GLenum stage, GLenum pname, const GLfloat *params );

/**
 * @brief void glGetCombinerStageParameterfvNV( GLenum stage, GLenum pname, GLfloat *params );
 */
GLE_API void glGetCombinerStageParameterfvNV( GLenum stage, GLenum pname, GLfloat *params );

//@}
			
			
/**
 * @name GL_NV_texgen_emboss
 *	Extension number in OpenGL registry : 193
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texgen_emboss.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_texgen_emboss is supported.
 * @return Returns \c true if \b GL_NV_texgen_emboss is supported, false otherwise.
 */
GLE_API bool isGL_NV_texgen_emboss();

//@}
			
			
/**
 * @name GL_NV_texgen_reflection
 *	Extension number in OpenGL registry : 179
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texgen_reflection.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_texgen_reflection is supported.
 * @return Returns \c true if \b GL_NV_texgen_reflection is supported, false otherwise.
 */
GLE_API bool isGL_NV_texgen_reflection();

//@}
			
			
/**
 * @name GL_NV_texture_compression_vtc
 *	Extension number in OpenGL registry : 228
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_compression_vtc.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_compression_vtc is supported.
 * @return Returns \c true if \b GL_NV_texture_compression_vtc is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_compression_vtc();

//@}
			
			
/**
 * @name GL_NV_texture_env_combine4
 *	Extension number in OpenGL registry : 195
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_env_combine4.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_env_combine4 is supported.
 * @return Returns \c true if \b GL_NV_texture_env_combine4 is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_env_combine4();

//@}
			
			
/**
 * @name GL_NV_texture_expand_normal
 *	Extension number in OpenGL registry : 286
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_expand_normal.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_expand_normal is supported.
 * @return Returns \c true if \b GL_NV_texture_expand_normal is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_expand_normal();

//@}
			
			
/**
 * @name GL_NV_texture_rectangle
 *	Extension number in OpenGL registry : 229
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_rectangle.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_rectangle is supported.
 * @return Returns \c true if \b GL_NV_texture_rectangle is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_rectangle();

//@}
			
			
/**
 * @name GL_NV_texture_shader
 *	Extension number in OpenGL registry : 230
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_shader.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_shader is supported.
 * @return Returns \c true if \b GL_NV_texture_shader is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_shader();

//@}
			
			
/**
 * @name GL_NV_texture_shader2
 *	Extension number in OpenGL registry : 231
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_shader2.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_shader2 is supported.
 * @return Returns \c true if \b GL_NV_texture_shader2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_shader2();

//@}
			
			
/**
 * @name GL_NV_texture_shader3
 *	Extension number in OpenGL registry : 265
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_shader3.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_shader3 is supported.
 * @return Returns \c true if \b GL_NV_texture_shader3 is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_shader3();

//@}
			
			
/**
 * @name GL_NV_vertex_array_range
 *	Extension number in OpenGL registry : 190
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_array_range.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_array_range is supported.
 * @return Returns \c true if \b GL_NV_vertex_array_range is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_array_range();

/**
 * @brief void glFlushVertexArrayRangeNV( void );
 */
GLE_API void glFlushVertexArrayRangeNV( void );

/**
 * @brief void glVertexArrayRangeNV( GLsizei length, const GLvoid *pointer );
 */
GLE_API void glVertexArrayRangeNV( GLsizei length, const GLvoid *pointer );

//@}
			
			
/**
 * @name GL_NV_vertex_array_range2
 *	Extension number in OpenGL registry : 232
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_array_range2.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_array_range2 is supported.
 * @return Returns \c true if \b GL_NV_vertex_array_range2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_array_range2();

//@}
			
			
/**
 * @name GL_NV_vertex_program
 *	Extension number in OpenGL registry : 233
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program is supported.
 * @return Returns \c true if \b GL_NV_vertex_program is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program();

/**
 * @brief GLboolean glAreProgramsResidentNV( GLsizei n, const GLuint *programs, GLboolean *residences );
 */
GLE_API GLboolean glAreProgramsResidentNV( GLsizei n, const GLuint *programs, GLboolean *residences );

/**
 * @brief void glBindProgramNV( GLenum target, GLuint id );
 */
GLE_API void glBindProgramNV( GLenum target, GLuint id );

/**
 * @brief void glDeleteProgramsNV( GLsizei n, const GLuint *programs );
 */
GLE_API void glDeleteProgramsNV( GLsizei n, const GLuint *programs );

/**
 * @brief void glExecuteProgramNV( GLenum target, GLuint id, const GLfloat *params );
 */
GLE_API void glExecuteProgramNV( GLenum target, GLuint id, const GLfloat *params );

/**
 * @brief void glGenProgramsNV( GLsizei n, GLuint *programs );
 */
GLE_API void glGenProgramsNV( GLsizei n, GLuint *programs );

/**
 * @brief void glGetProgramParameterdvNV( GLenum target, GLuint index, GLenum pname, GLdouble *params );
 */
GLE_API void glGetProgramParameterdvNV( GLenum target, GLuint index, GLenum pname, GLdouble *params );

/**
 * @brief void glGetProgramParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat *params );
 */
GLE_API void glGetProgramParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat *params );

/**
 * @brief void glGetProgramivNV( GLuint id, GLenum pname, GLint *params );
 */
GLE_API void glGetProgramivNV( GLuint id, GLenum pname, GLint *params );

/**
 * @brief void glGetProgramStringNV( GLuint id, GLenum pname, GLubyte *program );
 */
GLE_API void glGetProgramStringNV( GLuint id, GLenum pname, GLubyte *program );

/**
 * @brief void glGetTrackMatrixivNV( GLenum target, GLuint address, GLenum pname, GLint *params );
 */
GLE_API void glGetTrackMatrixivNV( GLenum target, GLuint address, GLenum pname, GLint *params );

/**
 * @brief void glGetVertexAttribdvNV( GLuint index, GLenum pname, GLdouble *params );
 */
GLE_API void glGetVertexAttribdvNV( GLuint index, GLenum pname, GLdouble *params );

/**
 * @brief void glGetVertexAttribfvNV( GLuint index, GLenum pname, GLfloat *params );
 */
GLE_API void glGetVertexAttribfvNV( GLuint index, GLenum pname, GLfloat *params );

/**
 * @brief void glGetVertexAttribivNV( GLuint index, GLenum pname, GLint *params );
 */
GLE_API void glGetVertexAttribivNV( GLuint index, GLenum pname, GLint *params );

/**
 * @brief void glGetVertexAttribPointervNV( GLuint index, GLenum pname, GLvoid* *pointer );
 */
GLE_API void glGetVertexAttribPointervNV( GLuint index, GLenum pname, GLvoid* *pointer );

/**
 * @brief GLboolean glIsProgramNV( GLuint id );
 */
GLE_API GLboolean glIsProgramNV( GLuint id );

/**
 * @brief void glLoadProgramNV( GLenum target, GLuint id, GLsizei len, const GLubyte *program );
 */
GLE_API void glLoadProgramNV( GLenum target, GLuint id, GLsizei len, const GLubyte *program );

/**
 * @brief void glProgramParameter4dNV( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glProgramParameter4dNV( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glProgramParameter4dvNV( GLenum target, GLuint index, const GLdouble *v );
 */
GLE_API void glProgramParameter4dvNV( GLenum target, GLuint index, const GLdouble *v );

/**
 * @brief void glProgramParameter4fNV( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glProgramParameter4fNV( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glProgramParameter4fvNV( GLenum target, GLuint index, const GLfloat *v );
 */
GLE_API void glProgramParameter4fvNV( GLenum target, GLuint index, const GLfloat *v );

/**
 * @brief void glProgramParameters4dvNV( GLenum target, GLuint index, GLuint count, const GLdouble *v );
 */
GLE_API void glProgramParameters4dvNV( GLenum target, GLuint index, GLuint count, const GLdouble *v );

/**
 * @brief void glProgramParameters4fvNV( GLenum target, GLuint index, GLuint count, const GLfloat *v );
 */
GLE_API void glProgramParameters4fvNV( GLenum target, GLuint index, GLuint count, const GLfloat *v );

/**
 * @brief void glRequestResidentProgramsNV( GLsizei n, const GLuint *programs );
 */
GLE_API void glRequestResidentProgramsNV( GLsizei n, const GLuint *programs );

/**
 * @brief void glTrackMatrixNV( GLenum target, GLuint address, GLenum matrix, GLenum transform );
 */
GLE_API void glTrackMatrixNV( GLenum target, GLuint address, GLenum matrix, GLenum transform );

/**
 * @brief void glVertexAttribPointerNV( GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glVertexAttribPointerNV( GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer );

/**
 * @brief void glVertexAttrib1dNV( GLuint index, GLdouble x );
 */
GLE_API void glVertexAttrib1dNV( GLuint index, GLdouble x );

/**
 * @brief void glVertexAttrib1dvNV( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib1dvNV( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib1fNV( GLuint index, GLfloat x );
 */
GLE_API void glVertexAttrib1fNV( GLuint index, GLfloat x );

/**
 * @brief void glVertexAttrib1fvNV( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib1fvNV( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib1sNV( GLuint index, GLshort x );
 */
GLE_API void glVertexAttrib1sNV( GLuint index, GLshort x );

/**
 * @brief void glVertexAttrib1svNV( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib1svNV( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib2dNV( GLuint index, GLdouble x, GLdouble y );
 */
GLE_API void glVertexAttrib2dNV( GLuint index, GLdouble x, GLdouble y );

/**
 * @brief void glVertexAttrib2dvNV( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib2dvNV( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib2fNV( GLuint index, GLfloat x, GLfloat y );
 */
GLE_API void glVertexAttrib2fNV( GLuint index, GLfloat x, GLfloat y );

/**
 * @brief void glVertexAttrib2fvNV( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib2fvNV( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib2sNV( GLuint index, GLshort x, GLshort y );
 */
GLE_API void glVertexAttrib2sNV( GLuint index, GLshort x, GLshort y );

/**
 * @brief void glVertexAttrib2svNV( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib2svNV( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib3dNV( GLuint index, GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glVertexAttrib3dNV( GLuint index, GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glVertexAttrib3dvNV( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib3dvNV( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib3fNV( GLuint index, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glVertexAttrib3fNV( GLuint index, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glVertexAttrib3fvNV( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib3fvNV( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib3sNV( GLuint index, GLshort x, GLshort y, GLshort z );
 */
GLE_API void glVertexAttrib3sNV( GLuint index, GLshort x, GLshort y, GLshort z );

/**
 * @brief void glVertexAttrib3svNV( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib3svNV( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib4dNV( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glVertexAttrib4dNV( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glVertexAttrib4dvNV( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib4dvNV( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib4fNV( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glVertexAttrib4fNV( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glVertexAttrib4fvNV( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib4fvNV( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib4sNV( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );
 */
GLE_API void glVertexAttrib4sNV( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );

/**
 * @brief void glVertexAttrib4svNV( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib4svNV( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib4ubNV( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );
 */
GLE_API void glVertexAttrib4ubNV( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );

/**
 * @brief void glVertexAttrib4ubvNV( GLuint index, const GLubyte *v );
 */
GLE_API void glVertexAttrib4ubvNV( GLuint index, const GLubyte *v );

/**
 * @brief void glVertexAttribs1dvNV( GLuint index, GLsizei count, const GLdouble *v );
 */
GLE_API void glVertexAttribs1dvNV( GLuint index, GLsizei count, const GLdouble *v );

/**
 * @brief void glVertexAttribs1fvNV( GLuint index, GLsizei count, const GLfloat *v );
 */
GLE_API void glVertexAttribs1fvNV( GLuint index, GLsizei count, const GLfloat *v );

/**
 * @brief void glVertexAttribs1svNV( GLuint index, GLsizei count, const GLshort *v );
 */
GLE_API void glVertexAttribs1svNV( GLuint index, GLsizei count, const GLshort *v );

/**
 * @brief void glVertexAttribs2dvNV( GLuint index, GLsizei count, const GLdouble *v );
 */
GLE_API void glVertexAttribs2dvNV( GLuint index, GLsizei count, const GLdouble *v );

/**
 * @brief void glVertexAttribs2fvNV( GLuint index, GLsizei count, const GLfloat *v );
 */
GLE_API void glVertexAttribs2fvNV( GLuint index, GLsizei count, const GLfloat *v );

/**
 * @brief void glVertexAttribs2svNV( GLuint index, GLsizei count, const GLshort *v );
 */
GLE_API void glVertexAttribs2svNV( GLuint index, GLsizei count, const GLshort *v );

/**
 * @brief void glVertexAttribs3dvNV( GLuint index, GLsizei count, const GLdouble *v );
 */
GLE_API void glVertexAttribs3dvNV( GLuint index, GLsizei count, const GLdouble *v );

/**
 * @brief void glVertexAttribs3fvNV( GLuint index, GLsizei count, const GLfloat *v );
 */
GLE_API void glVertexAttribs3fvNV( GLuint index, GLsizei count, const GLfloat *v );

/**
 * @brief void glVertexAttribs3svNV( GLuint index, GLsizei count, const GLshort *v );
 */
GLE_API void glVertexAttribs3svNV( GLuint index, GLsizei count, const GLshort *v );

/**
 * @brief void glVertexAttribs4dvNV( GLuint index, GLsizei count, const GLdouble *v );
 */
GLE_API void glVertexAttribs4dvNV( GLuint index, GLsizei count, const GLdouble *v );

/**
 * @brief void glVertexAttribs4fvNV( GLuint index, GLsizei count, const GLfloat *v );
 */
GLE_API void glVertexAttribs4fvNV( GLuint index, GLsizei count, const GLfloat *v );

/**
 * @brief void glVertexAttribs4svNV( GLuint index, GLsizei count, const GLshort *v );
 */
GLE_API void glVertexAttribs4svNV( GLuint index, GLsizei count, const GLshort *v );

/**
 * @brief void glVertexAttribs4ubvNV( GLuint index, GLsizei count, const GLubyte *v );
 */
GLE_API void glVertexAttribs4ubvNV( GLuint index, GLsizei count, const GLubyte *v );

//@}
			
			
/**
 * @name GL_NV_vertex_program1_1
 *	Extension number in OpenGL registry : 266
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program1_1.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program1_1 is supported.
 * @return Returns \c true if \b GL_NV_vertex_program1_1 is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program1_1();

//@}
			
			
/**
 * @name GL_NV_vertex_program2
 *	Extension number in OpenGL registry : 287
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program2.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program2 is supported.
 * @return Returns \c true if \b GL_NV_vertex_program2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program2();

//@}
			
			
/**
 * @name GL_NV_vertex_program2_option
 *	Extension number in OpenGL registry : 305
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program2_option.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program2_option is supported.
 * @return Returns \c true if \b GL_NV_vertex_program2_option is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program2_option();

//@}
			
			
/**
 * @name GL_NV_vertex_program3
 *	Extension number in OpenGL registry : 306
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program3.txt
 *	@ingroup GL_NV
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program3 is supported.
 * @return Returns \c true if \b GL_NV_vertex_program3 is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program3();

//@}
			
			
/**
 * @name GL_OES_read_format
 *	Extension number in OpenGL registry : 295
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/OES/read_format.txt
 *	@ingroup GL_OES
 */
//@{
/**
 * @brief Test if \b GL_OES_read_format is supported.
 * @return Returns \c true if \b GL_OES_read_format is supported, false otherwise.
 */
GLE_API bool isGL_OES_read_format();

//@}
			
			
/**
 * @name GL_OML_interlace
 *	Extension number in OpenGL registry : 239
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/OML/interlace.txt
 *	@ingroup GL_OML
 */
//@{
/**
 * @brief Test if \b GL_OML_interlace is supported.
 * @return Returns \c true if \b GL_OML_interlace is supported, false otherwise.
 */
GLE_API bool isGL_OML_interlace();

//@}
			
			
/**
 * @name GL_OML_resample
 *	Extension number in OpenGL registry : 241
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/OML/resample.txt
 *	@ingroup GL_OML
 */
//@{
/**
 * @brief Test if \b GL_OML_resample is supported.
 * @return Returns \c true if \b GL_OML_resample is supported, false otherwise.
 */
GLE_API bool isGL_OML_resample();

//@}
			
			
/**
 * @name GL_OML_subsample
 *	Extension number in OpenGL registry : 240
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/OML/subsample.txt
 *	@ingroup GL_OML
 */
//@{
/**
 * @brief Test if \b GL_OML_subsample is supported.
 * @return Returns \c true if \b GL_OML_subsample is supported, false otherwise.
 */
GLE_API bool isGL_OML_subsample();

//@}
			
			
/**
 * @name GL_PGI_misc_hints
 *	Extension number in OpenGL registry : 77
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/PGI/misc_hints.txt
 *	@ingroup GL_PGI
 */
//@{
/**
 * @brief Test if \b GL_PGI_misc_hints is supported.
 * @return Returns \c true if \b GL_PGI_misc_hints is supported, false otherwise.
 */
GLE_API bool isGL_PGI_misc_hints();

/**
 * @brief void glHintPGI( GLenum target, GLint mode );
 */
GLE_API void glHintPGI( GLenum target, GLint mode );

//@}
			
			
/**
 * @name GL_PGI_vertex_hints
 *	Extension number in OpenGL registry : 76
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/PGI/vertex_hints.txt
 *	@ingroup GL_PGI
 */
//@{
/**
 * @brief Test if \b GL_PGI_vertex_hints is supported.
 * @return Returns \c true if \b GL_PGI_vertex_hints is supported, false otherwise.
 */
GLE_API bool isGL_PGI_vertex_hints();

//@}
			
			
/**
 * @name GL_REND_screen_coordinates
 *	Extension number in OpenGL registry : 155
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/REND/screen_coordinates.txt
 *	@ingroup GL_REND
 */
//@{
/**
 * @brief Test if \b GL_REND_screen_coordinates is supported.
 * @return Returns \c true if \b GL_REND_screen_coordinates is supported, false otherwise.
 */
GLE_API bool isGL_REND_screen_coordinates();

//@}
			
			
/**
 * @name GL_S3_s3tc
 *	Extension number in OpenGL registry : 276
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/S3/s3tc.txt
 *	@ingroup GL_S3
 */
//@{
/**
 * @brief Test if \b GL_S3_s3tc is supported.
 * @return Returns \c true if \b GL_S3_s3tc is supported, false otherwise.
 */
GLE_API bool isGL_S3_s3tc();

//@}
			
			
/**
 * @name GL_SGIS_detail_texture
 *	Extension number in OpenGL registry : 21
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/detail_texture.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_detail_texture is supported.
 * @return Returns \c true if \b GL_SGIS_detail_texture is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_detail_texture();

/**
 * @brief void glDetailTexFuncSGIS( GLenum target, GLsizei n, const GLfloat *points );
 */
GLE_API void glDetailTexFuncSGIS( GLenum target, GLsizei n, const GLfloat *points );

/**
 * @brief void glGetDetailTexFuncSGIS( GLenum target, GLfloat *points );
 */
GLE_API void glGetDetailTexFuncSGIS( GLenum target, GLfloat *points );

//@}
			
			
/**
 * @name GL_SGIS_fog_function
 *	Extension number in OpenGL registry : 64
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/fog_func.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_fog_function is supported.
 * @return Returns \c true if \b GL_SGIS_fog_function is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_fog_function();

/**
 * @brief void glFogFuncSGIS( GLsizei n, const GLfloat *points );
 */
GLE_API void glFogFuncSGIS( GLsizei n, const GLfloat *points );

/**
 * @brief void glGetFogFuncSGIS( GLfloat *points );
 */
GLE_API void glGetFogFuncSGIS( GLfloat *points );

//@}
			
			
/**
 * @name GL_SGIS_generate_mipmap
 *	Extension number in OpenGL registry : 32
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/generate_mipmap.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_generate_mipmap is supported.
 * @return Returns \c true if \b GL_SGIS_generate_mipmap is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_generate_mipmap();

//@}
			
			
/**
 * @name GL_SGIS_multisample
 *	Extension number in OpenGL registry : 25
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/multisample.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_multisample is supported.
 * @return Returns \c true if \b GL_SGIS_multisample is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_multisample();

/**
 * @brief void glSampleMaskSGIS( GLclampf value, GLboolean invert );
 */
GLE_API void glSampleMaskSGIS( GLclampf value, GLboolean invert );

/**
 * @brief void glSamplePatternSGIS( GLenum pattern );
 */
GLE_API void glSamplePatternSGIS( GLenum pattern );

//@}
			
			
/**
 * @name GL_SGIS_pixel_texture
 *	Extension number in OpenGL registry : 15
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/pixel_texture.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_pixel_texture is supported.
 * @return Returns \c true if \b GL_SGIS_pixel_texture is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_pixel_texture();

/**
 * @brief void glPixelTexGenParameteriSGIS( GLenum pname, GLint param );
 */
GLE_API void glPixelTexGenParameteriSGIS( GLenum pname, GLint param );

/**
 * @brief void glPixelTexGenParameterivSGIS( GLenum pname, const GLint *params );
 */
GLE_API void glPixelTexGenParameterivSGIS( GLenum pname, const GLint *params );

/**
 * @brief void glPixelTexGenParameterfSGIS( GLenum pname, GLfloat param );
 */
GLE_API void glPixelTexGenParameterfSGIS( GLenum pname, GLfloat param );

/**
 * @brief void glPixelTexGenParameterfvSGIS( GLenum pname, const GLfloat *params );
 */
GLE_API void glPixelTexGenParameterfvSGIS( GLenum pname, const GLfloat *params );

/**
 * @brief void glGetPixelTexGenParameterivSGIS( GLenum pname, GLint *params );
 */
GLE_API void glGetPixelTexGenParameterivSGIS( GLenum pname, GLint *params );

/**
 * @brief void glGetPixelTexGenParameterfvSGIS( GLenum pname, GLfloat *params );
 */
GLE_API void glGetPixelTexGenParameterfvSGIS( GLenum pname, GLfloat *params );

//@}

			
/**	
 * @name GL_SGIS_point_line_texgen
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIS_point_line_texgen is supported.
 * @return Returns \c true if \b GL_SGIS_point_line_texgen is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_point_line_texgen();

//@}

			
/**	
 * @name GL_SGIS_point_parameters
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIS_point_parameters is supported.
 * @return Returns \c true if \b GL_SGIS_point_parameters is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_point_parameters();

/**
 * @brief void glPointParameterfSGIS( GLenum pname, GLfloat param );
 */
GLE_API void glPointParameterfSGIS( GLenum pname, GLfloat param );

/**
 * @brief void glPointParameterfvSGIS( GLenum pname, const GLfloat *params );
 */
GLE_API void glPointParameterfvSGIS( GLenum pname, const GLfloat *params );

//@}
			
			
/**
 * @name GL_SGIS_sharpen_texture
 *	Extension number in OpenGL registry : 22
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/sharpen_texture.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_sharpen_texture is supported.
 * @return Returns \c true if \b GL_SGIS_sharpen_texture is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_sharpen_texture();

/**
 * @brief void glSharpenTexFuncSGIS( GLenum target, GLsizei n, const GLfloat *points );
 */
GLE_API void glSharpenTexFuncSGIS( GLenum target, GLsizei n, const GLfloat *points );

/**
 * @brief void glGetSharpenTexFuncSGIS( GLenum target, GLfloat *points );
 */
GLE_API void glGetSharpenTexFuncSGIS( GLenum target, GLfloat *points );

//@}
			
			
/**
 * @name GL_SGIS_texture4D
 *	Extension number in OpenGL registry : 16
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture4D.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture4D is supported.
 * @return Returns \c true if \b GL_SGIS_texture4D is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture4D();

/**
 * @brief void glTexImage4DSGIS( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTexImage4DSGIS( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glTexSubImage4DSGIS( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTexSubImage4DSGIS( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels );

//@}
			
			
/**
 * @name GL_SGIS_texture_border_clamp
 *	Extension number in OpenGL registry : 36
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_border_clamp.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_border_clamp is supported.
 * @return Returns \c true if \b GL_SGIS_texture_border_clamp is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_border_clamp();

//@}
			
			
/**
 * @name GL_SGIS_texture_color_mask
 *	Extension number in OpenGL registry : 214
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_color_mask.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_color_mask is supported.
 * @return Returns \c true if \b GL_SGIS_texture_color_mask is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_color_mask();

/**
 * @brief void glTextureColorMaskSGIS( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha );
 */
GLE_API void glTextureColorMaskSGIS( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha );

//@}
			
			
/**
 * @name GL_SGIS_texture_edge_clamp
 *	Extension number in OpenGL registry : 35
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_edge_clamp.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_edge_clamp is supported.
 * @return Returns \c true if \b GL_SGIS_texture_edge_clamp is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_edge_clamp();

//@}
			
			
/**
 * @name GL_SGIS_texture_filter4
 *	Extension number in OpenGL registry : 7
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_filter4.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_filter4 is supported.
 * @return Returns \c true if \b GL_SGIS_texture_filter4 is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_filter4();

/**
 * @brief void glGetTexFilterFuncSGIS( GLenum target, GLenum filter, GLfloat *weights );
 */
GLE_API void glGetTexFilterFuncSGIS( GLenum target, GLenum filter, GLfloat *weights );

/**
 * @brief void glTexFilterFuncSGIS( GLenum target, GLenum filter, GLsizei n, const GLfloat *weights );
 */
GLE_API void glTexFilterFuncSGIS( GLenum target, GLenum filter, GLsizei n, const GLfloat *weights );

//@}
			
			
/**
 * @name GL_SGIS_texture_lod
 *	Extension number in OpenGL registry : 24
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_lod.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_lod is supported.
 * @return Returns \c true if \b GL_SGIS_texture_lod is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_lod();

//@}
			
			
/**
 * @name GL_SGIS_texture_select
 *	Extension number in OpenGL registry : 51
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_select.txt
 *	@ingroup GL_SGIS
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_select is supported.
 * @return Returns \c true if \b GL_SGIS_texture_select is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_select();

//@}
			
			
/**
 * @name GL_SGIX_async
 *	Extension number in OpenGL registry : 132
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/async.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_async is supported.
 * @return Returns \c true if \b GL_SGIX_async is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_async();

/**
 * @brief void glAsyncMarkerSGIX( GLuint marker );
 */
GLE_API void glAsyncMarkerSGIX( GLuint marker );

/**
 * @brief GLint glFinishAsyncSGIX( GLuint *markerp );
 */
GLE_API GLint glFinishAsyncSGIX( GLuint *markerp );

/**
 * @brief GLint glPollAsyncSGIX( GLuint *markerp );
 */
GLE_API GLint glPollAsyncSGIX( GLuint *markerp );

/**
 * @brief GLuint glGenAsyncMarkersSGIX( GLsizei range );
 */
GLE_API GLuint glGenAsyncMarkersSGIX( GLsizei range );

/**
 * @brief void glDeleteAsyncMarkersSGIX( GLuint marker, GLsizei range );
 */
GLE_API void glDeleteAsyncMarkersSGIX( GLuint marker, GLsizei range );

/**
 * @brief GLboolean glIsAsyncMarkerSGIX( GLuint marker );
 */
GLE_API GLboolean glIsAsyncMarkerSGIX( GLuint marker );

//@}
			
			
/**
 * @name GL_SGIX_async_histogram
 *	Extension number in OpenGL registry : 134
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/async_histogram.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_async_histogram is supported.
 * @return Returns \c true if \b GL_SGIX_async_histogram is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_async_histogram();

//@}
			
			
/**
 * @name GL_SGIX_async_pixel
 *	Extension number in OpenGL registry : 133
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/async_pixel.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_async_pixel is supported.
 * @return Returns \c true if \b GL_SGIX_async_pixel is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_async_pixel();

//@}
			
			
/**
 * @name GL_SGIX_blend_alpha_minmax
 *	Extension number in OpenGL registry : 119
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/blend_alpha_minmax.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_blend_alpha_minmax is supported.
 * @return Returns \c true if \b GL_SGIX_blend_alpha_minmax is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_blend_alpha_minmax();

//@}

			
/**	
 * @name GL_SGIX_calligraphic_fragment
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_calligraphic_fragment is supported.
 * @return Returns \c true if \b GL_SGIX_calligraphic_fragment is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_calligraphic_fragment();

//@}
			
			
/**
 * @name GL_SGIX_clipmap
 *	Extension number in OpenGL registry : 33
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/clipmap.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_clipmap is supported.
 * @return Returns \c true if \b GL_SGIX_clipmap is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_clipmap();

//@}

			
/**	
 * @name GL_SGIX_convolution_accuracy
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_convolution_accuracy is supported.
 * @return Returns \c true if \b GL_SGIX_convolution_accuracy is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_convolution_accuracy();

//@}

			
/**	
 * @name GL_SGIX_depth_pass_instrument
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_depth_pass_instrument is supported.
 * @return Returns \c true if \b GL_SGIX_depth_pass_instrument is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_depth_pass_instrument();

//@}
			
			
/**
 * @name GL_SGIX_depth_texture
 *	Extension number in OpenGL registry : 63
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/depth_texture.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_depth_texture is supported.
 * @return Returns \c true if \b GL_SGIX_depth_texture is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_depth_texture();

//@}
			
			
/**
 * @name GL_SGIX_flush_raster
 *	Extension number in OpenGL registry : 61
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/flush_raster.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_flush_raster is supported.
 * @return Returns \c true if \b GL_SGIX_flush_raster is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_flush_raster();

/**
 * @brief void glFlushRasterSGIX( void );
 */
GLE_API void glFlushRasterSGIX( void );

//@}
			
			
/**
 * @name GL_SGIX_fog_offset
 *	Extension number in OpenGL registry : 65
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/fog_offset.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_fog_offset is supported.
 * @return Returns \c true if \b GL_SGIX_fog_offset is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_fog_offset();

//@}

			
/**	
 * @name GL_SGIX_fog_scale
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_fog_scale is supported.
 * @return Returns \c true if \b GL_SGIX_fog_scale is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_fog_scale();

//@}

			
/**	
 * @name GL_SGIX_fragment_lighting
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_fragment_lighting is supported.
 * @return Returns \c true if \b GL_SGIX_fragment_lighting is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_fragment_lighting();

/**
 * @brief void glFragmentColorMaterialSGIX( GLenum face, GLenum mode );
 */
GLE_API void glFragmentColorMaterialSGIX( GLenum face, GLenum mode );

/**
 * @brief void glFragmentLightfSGIX( GLenum light, GLenum pname, GLfloat param );
 */
GLE_API void glFragmentLightfSGIX( GLenum light, GLenum pname, GLfloat param );

/**
 * @brief void glFragmentLightfvSGIX( GLenum light, GLenum pname, const GLfloat *params );
 */
GLE_API void glFragmentLightfvSGIX( GLenum light, GLenum pname, const GLfloat *params );

/**
 * @brief void glFragmentLightiSGIX( GLenum light, GLenum pname, GLint param );
 */
GLE_API void glFragmentLightiSGIX( GLenum light, GLenum pname, GLint param );

/**
 * @brief void glFragmentLightivSGIX( GLenum light, GLenum pname, const GLint *params );
 */
GLE_API void glFragmentLightivSGIX( GLenum light, GLenum pname, const GLint *params );

/**
 * @brief void glFragmentLightModelfSGIX( GLenum pname, GLfloat param );
 */
GLE_API void glFragmentLightModelfSGIX( GLenum pname, GLfloat param );

/**
 * @brief void glFragmentLightModelfvSGIX( GLenum pname, const GLfloat *params );
 */
GLE_API void glFragmentLightModelfvSGIX( GLenum pname, const GLfloat *params );

/**
 * @brief void glFragmentLightModeliSGIX( GLenum pname, GLint param );
 */
GLE_API void glFragmentLightModeliSGIX( GLenum pname, GLint param );

/**
 * @brief void glFragmentLightModelivSGIX( GLenum pname, const GLint *params );
 */
GLE_API void glFragmentLightModelivSGIX( GLenum pname, const GLint *params );

/**
 * @brief void glFragmentMaterialfSGIX( GLenum face, GLenum pname, GLfloat param );
 */
GLE_API void glFragmentMaterialfSGIX( GLenum face, GLenum pname, GLfloat param );

/**
 * @brief void glFragmentMaterialfvSGIX( GLenum face, GLenum pname, const GLfloat *params );
 */
GLE_API void glFragmentMaterialfvSGIX( GLenum face, GLenum pname, const GLfloat *params );

/**
 * @brief void glFragmentMaterialiSGIX( GLenum face, GLenum pname, GLint param );
 */
GLE_API void glFragmentMaterialiSGIX( GLenum face, GLenum pname, GLint param );

/**
 * @brief void glFragmentMaterialivSGIX( GLenum face, GLenum pname, const GLint *params );
 */
GLE_API void glFragmentMaterialivSGIX( GLenum face, GLenum pname, const GLint *params );

/**
 * @brief void glGetFragmentLightfvSGIX( GLenum light, GLenum pname, GLfloat *params );
 */
GLE_API void glGetFragmentLightfvSGIX( GLenum light, GLenum pname, GLfloat *params );

/**
 * @brief void glGetFragmentLightivSGIX( GLenum light, GLenum pname, GLint *params );
 */
GLE_API void glGetFragmentLightivSGIX( GLenum light, GLenum pname, GLint *params );

/**
 * @brief void glGetFragmentMaterialfvSGIX( GLenum face, GLenum pname, GLfloat *params );
 */
GLE_API void glGetFragmentMaterialfvSGIX( GLenum face, GLenum pname, GLfloat *params );

/**
 * @brief void glGetFragmentMaterialivSGIX( GLenum face, GLenum pname, GLint *params );
 */
GLE_API void glGetFragmentMaterialivSGIX( GLenum face, GLenum pname, GLint *params );

/**
 * @brief void glLightEnviSGIX( GLenum pname, GLint param );
 */
GLE_API void glLightEnviSGIX( GLenum pname, GLint param );

//@}
			
			
/**
 * @name GL_SGIX_framezoom
 *	Extension number in OpenGL registry : 57
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/framezoom.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_framezoom is supported.
 * @return Returns \c true if \b GL_SGIX_framezoom is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_framezoom();

/**
 * @brief void glFrameZoomSGIX( GLint factor );
 */
GLE_API void glFrameZoomSGIX( GLint factor );

//@}

			
/**	
 * @name GL_SGIX_igloo_interface
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_igloo_interface is supported.
 * @return Returns \c true if \b GL_SGIX_igloo_interface is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_igloo_interface();

/**
 * @brief void glIglooInterfaceSGIX( GLenum pname, const GLvoid *params );
 */
GLE_API void glIglooInterfaceSGIX( GLenum pname, const GLvoid *params );

//@}

			
/**	
 * @name GL_SGIX_impact_pixel_texture
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_impact_pixel_texture is supported.
 * @return Returns \c true if \b GL_SGIX_impact_pixel_texture is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_impact_pixel_texture();

//@}
			
			
/**
 * @name GL_SGIX_instruments
 *	Extension number in OpenGL registry : 55
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/instruments.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_instruments is supported.
 * @return Returns \c true if \b GL_SGIX_instruments is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_instruments();

/**
 * @brief GLint glGetInstrumentsSGIX( void );
 */
GLE_API GLint glGetInstrumentsSGIX( void );

/**
 * @brief void glInstrumentsBufferSGIX( GLsizei size, GLint *buffer );
 */
GLE_API void glInstrumentsBufferSGIX( GLsizei size, GLint *buffer );

/**
 * @brief GLint glPollInstrumentsSGIX( GLint *marker_p );
 */
GLE_API GLint glPollInstrumentsSGIX( GLint *marker_p );

/**
 * @brief void glReadInstrumentsSGIX( GLint marker );
 */
GLE_API void glReadInstrumentsSGIX( GLint marker );

/**
 * @brief void glStartInstrumentsSGIX( void );
 */
GLE_API void glStartInstrumentsSGIX( void );

/**
 * @brief void glStopInstrumentsSGIX( GLint marker );
 */
GLE_API void glStopInstrumentsSGIX( GLint marker );

//@}
			
			
/**
 * @name GL_SGIX_interlace
 *	Extension number in OpenGL registry : 45
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/interlace.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_interlace is supported.
 * @return Returns \c true if \b GL_SGIX_interlace is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_interlace();

//@}
			
			
/**
 * @name GL_SGIX_ir_instrument1
 *	Extension number in OpenGL registry : 81
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/ir_instrument1.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_ir_instrument1 is supported.
 * @return Returns \c true if \b GL_SGIX_ir_instrument1 is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_ir_instrument1();

//@}
			
			
/**
 * @name GL_SGIX_list_priority
 *	Extension number in OpenGL registry : 80
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/list_priority.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_list_priority is supported.
 * @return Returns \c true if \b GL_SGIX_list_priority is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_list_priority();

/**
 * @brief void glGetListParameterfvSGIX( GLuint list, GLenum pname, GLfloat *params );
 */
GLE_API void glGetListParameterfvSGIX( GLuint list, GLenum pname, GLfloat *params );

/**
 * @brief void glGetListParameterivSGIX( GLuint list, GLenum pname, GLint *params );
 */
GLE_API void glGetListParameterivSGIX( GLuint list, GLenum pname, GLint *params );

/**
 * @brief void glListParameterfSGIX( GLuint list, GLenum pname, GLfloat param );
 */
GLE_API void glListParameterfSGIX( GLuint list, GLenum pname, GLfloat param );

/**
 * @brief void glListParameterfvSGIX( GLuint list, GLenum pname, const GLfloat *params );
 */
GLE_API void glListParameterfvSGIX( GLuint list, GLenum pname, const GLfloat *params );

/**
 * @brief void glListParameteriSGIX( GLuint list, GLenum pname, GLint param );
 */
GLE_API void glListParameteriSGIX( GLuint list, GLenum pname, GLint param );

/**
 * @brief void glListParameterivSGIX( GLuint list, GLenum pname, const GLint *params );
 */
GLE_API void glListParameterivSGIX( GLuint list, GLenum pname, const GLint *params );

//@}
			
			
/**
 * @name GL_SGIX_pixel_texture
 *	Extension number in OpenGL registry : 15a
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/sgix_pixel_texture.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_pixel_texture is supported.
 * @return Returns \c true if \b GL_SGIX_pixel_texture is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_pixel_texture();

/**
 * @brief void glPixelTexGenSGIX( GLenum mode );
 */
GLE_API void glPixelTexGenSGIX( GLenum mode );

//@}

			
/**	
 * @name GL_SGIX_pixel_tiles
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_pixel_tiles is supported.
 * @return Returns \c true if \b GL_SGIX_pixel_tiles is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_pixel_tiles();

//@}

			
/**	
 * @name GL_SGIX_polynomial_ffd
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_polynomial_ffd is supported.
 * @return Returns \c true if \b GL_SGIX_polynomial_ffd is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_polynomial_ffd();

/**
 * @brief void glDeformationMap3dSGIX( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points );
 */
GLE_API void glDeformationMap3dSGIX( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points );

/**
 * @brief void glDeformationMap3fSGIX( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points );
 */
GLE_API void glDeformationMap3fSGIX( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points );

/**
 * @brief void glDeformSGIX( GLbitfield mask );
 */
GLE_API void glDeformSGIX( GLbitfield mask );

/**
 * @brief void glLoadIdentityDeformationMapSGIX( GLbitfield mask );
 */
GLE_API void glLoadIdentityDeformationMapSGIX( GLbitfield mask );

//@}
			
			
/**
 * @name GL_SGIX_reference_plane
 *	Extension number in OpenGL registry : 60
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/reference_plane.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_reference_plane is supported.
 * @return Returns \c true if \b GL_SGIX_reference_plane is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_reference_plane();

/**
 * @brief void glReferencePlaneSGIX( const GLdouble *equation );
 */
GLE_API void glReferencePlaneSGIX( const GLdouble *equation );

//@}
			
			
/**
 * @name GL_SGIX_resample
 *	Extension number in OpenGL registry : 212
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/resample.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_resample is supported.
 * @return Returns \c true if \b GL_SGIX_resample is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_resample();

//@}

			
/**	
 * @name GL_SGIX_scalebias_hint
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_scalebias_hint is supported.
 * @return Returns \c true if \b GL_SGIX_scalebias_hint is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_scalebias_hint();

//@}
			
			
/**
 * @name GL_SGIX_shadow
 *	Extension number in OpenGL registry : 34
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/shadow.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_shadow is supported.
 * @return Returns \c true if \b GL_SGIX_shadow is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_shadow();

//@}
			
			
/**
 * @name GL_SGIX_shadow_ambient
 *	Extension number in OpenGL registry : 90
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/shadow_ambient.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_shadow_ambient is supported.
 * @return Returns \c true if \b GL_SGIX_shadow_ambient is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_shadow_ambient();

//@}
			
			
/**
 * @name GL_SGIX_sprite
 *	Extension number in OpenGL registry : 52
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/sprite.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_sprite is supported.
 * @return Returns \c true if \b GL_SGIX_sprite is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_sprite();

/**
 * @brief void glSpriteParameterfSGIX( GLenum pname, GLfloat param );
 */
GLE_API void glSpriteParameterfSGIX( GLenum pname, GLfloat param );

/**
 * @brief void glSpriteParameterfvSGIX( GLenum pname, const GLfloat *params );
 */
GLE_API void glSpriteParameterfvSGIX( GLenum pname, const GLfloat *params );

/**
 * @brief void glSpriteParameteriSGIX( GLenum pname, GLint param );
 */
GLE_API void glSpriteParameteriSGIX( GLenum pname, GLint param );

/**
 * @brief void glSpriteParameterivSGIX( GLenum pname, const GLint *params );
 */
GLE_API void glSpriteParameterivSGIX( GLenum pname, const GLint *params );

//@}

			
/**	
 * @name GL_SGIX_subsample
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_subsample is supported.
 * @return Returns \c true if \b GL_SGIX_subsample is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_subsample();

//@}
			
			
/**
 * @name GL_SGIX_tag_sample_buffer
 *	Extension number in OpenGL registry : 58
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/tag_sample_buffer.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_tag_sample_buffer is supported.
 * @return Returns \c true if \b GL_SGIX_tag_sample_buffer is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_tag_sample_buffer();

/**
 * @brief void glTagSampleBufferSGIX( void );
 */
GLE_API void glTagSampleBufferSGIX( void );

//@}
			
			
/**
 * @name GL_SGIX_texture_add_env
 *	Extension number in OpenGL registry : 69
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_env_add.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_add_env is supported.
 * @return Returns \c true if \b GL_SGIX_texture_add_env is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_add_env();

//@}
			
			
/**
 * @name GL_SGIX_texture_coordinate_clamp
 *	Extension number in OpenGL registry : 235
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_coordinate_clamp.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_coordinate_clamp is supported.
 * @return Returns \c true if \b GL_SGIX_texture_coordinate_clamp is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_coordinate_clamp();

//@}
			
			
/**
 * @name GL_SGIX_texture_lod_bias
 *	Extension number in OpenGL registry : 84
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_lod_bias.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_lod_bias is supported.
 * @return Returns \c true if \b GL_SGIX_texture_lod_bias is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_lod_bias();

//@}
			
			
/**
 * @name GL_SGIX_texture_multi_buffer
 *	Extension number in OpenGL registry : 53
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_multi_buffer.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_multi_buffer is supported.
 * @return Returns \c true if \b GL_SGIX_texture_multi_buffer is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_multi_buffer();

//@}
			
			
/**
 * @name GL_SGIX_texture_scale_bias
 *	Extension number in OpenGL registry : 56
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_scale_bias.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_scale_bias is supported.
 * @return Returns \c true if \b GL_SGIX_texture_scale_bias is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_scale_bias();

//@}

			
/**	
 * @name GL_SGIX_texture_select
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_select is supported.
 * @return Returns \c true if \b GL_SGIX_texture_select is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_select();

//@}
			
			
/**
 * @name GL_SGIX_vertex_preclip
 *	Extension number in OpenGL registry : 210
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/vertex_preclip.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_vertex_preclip is supported.
 * @return Returns \c true if \b GL_SGIX_vertex_preclip is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_vertex_preclip();

//@}
			
			
/**
 * @name GL_SGIX_ycrcb
 *	Extension number in OpenGL registry : 101
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/ycrcb.txt
 *	@ingroup GL_SGIX
 */
//@{
/**
 * @brief Test if \b GL_SGIX_ycrcb is supported.
 * @return Returns \c true if \b GL_SGIX_ycrcb is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_ycrcb();

//@}

			
/**	
 * @name GL_SGIX_ycrcb_subsample
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_ycrcb_subsample is supported.
 * @return Returns \c true if \b GL_SGIX_ycrcb_subsample is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_ycrcb_subsample();

//@}

			
/**	
 * @name GL_SGIX_ycrcba
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGIX_ycrcba is supported.
 * @return Returns \c true if \b GL_SGIX_ycrcba is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_ycrcba();

//@}
			
			
/**
 * @name GL_SGI_color_matrix
 *	Extension number in OpenGL registry : 13
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGI/color_matrix.txt
 *	@ingroup GL_SGI
 */
//@{
/**
 * @brief Test if \b GL_SGI_color_matrix is supported.
 * @return Returns \c true if \b GL_SGI_color_matrix is supported, false otherwise.
 */
GLE_API bool isGL_SGI_color_matrix();

//@}
			
			
/**
 * @name GL_SGI_color_table
 *	Extension number in OpenGL registry : 14
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGI/color_table.txt
 *	@ingroup GL_SGI
 */
//@{
/**
 * @brief Test if \b GL_SGI_color_table is supported.
 * @return Returns \c true if \b GL_SGI_color_table is supported, false otherwise.
 */
GLE_API bool isGL_SGI_color_table();

/**
 * @brief void glColorTableSGI( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );
 */
GLE_API void glColorTableSGI( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );

/**
 * @brief void glColorTableParameterfvSGI( GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glColorTableParameterfvSGI( GLenum target, GLenum pname, const GLfloat *params );

/**
 * @brief void glColorTableParameterivSGI( GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glColorTableParameterivSGI( GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glCopyColorTableSGI( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );
 */
GLE_API void glCopyColorTableSGI( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );

/**
 * @brief void glGetColorTableSGI( GLenum target, GLenum format, GLenum type, GLvoid *table );
 */
GLE_API void glGetColorTableSGI( GLenum target, GLenum format, GLenum type, GLvoid *table );

/**
 * @brief void glGetColorTableParameterfvSGI( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetColorTableParameterfvSGI( GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetColorTableParameterivSGI( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetColorTableParameterivSGI( GLenum target, GLenum pname, GLint *params );

//@}

			
/**	
 * @name GL_SGI_depth_pass_instrument
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_SGI_depth_pass_instrument is supported.
 * @return Returns \c true if \b GL_SGI_depth_pass_instrument is supported, false otherwise.
 */
GLE_API bool isGL_SGI_depth_pass_instrument();

//@}
			
			
/**
 * @name GL_SGI_texture_color_table
 *	Extension number in OpenGL registry : 17
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGI/texture_color_table.txt
 *	@ingroup GL_SGI
 */
//@{
/**
 * @brief Test if \b GL_SGI_texture_color_table is supported.
 * @return Returns \c true if \b GL_SGI_texture_color_table is supported, false otherwise.
 */
GLE_API bool isGL_SGI_texture_color_table();

//@}
			
			
/**
 * @name GL_SUNX_constant_data
 *	Extension number in OpenGL registry : 163
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUNX/constant_data.txt
 *	@ingroup GL_SUNX
 */
//@{
/**
 * @brief Test if \b GL_SUNX_constant_data is supported.
 * @return Returns \c true if \b GL_SUNX_constant_data is supported, false otherwise.
 */
GLE_API bool isGL_SUNX_constant_data();

/**
 * @brief void glFinishTextureSUNX( void );
 */
GLE_API void glFinishTextureSUNX( void );

//@}
			
			
/**
 * @name GL_SUN_convolution_border_modes
 *	Extension number in OpenGL registry : 182
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/convolution_border_modes.txt
 *	@ingroup GL_SUN
 */
//@{
/**
 * @brief Test if \b GL_SUN_convolution_border_modes is supported.
 * @return Returns \c true if \b GL_SUN_convolution_border_modes is supported, false otherwise.
 */
GLE_API bool isGL_SUN_convolution_border_modes();

//@}
			
			
/**
 * @name GL_SUN_global_alpha
 *	Extension number in OpenGL registry : 164
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/global_alpha.txt
 *	@ingroup GL_SUN
 */
//@{
/**
 * @brief Test if \b GL_SUN_global_alpha is supported.
 * @return Returns \c true if \b GL_SUN_global_alpha is supported, false otherwise.
 */
GLE_API bool isGL_SUN_global_alpha();

/**
 * @brief void glGlobalAlphaFactorbSUN( GLbyte factor );
 */
GLE_API void glGlobalAlphaFactorbSUN( GLbyte factor );

/**
 * @brief void glGlobalAlphaFactorsSUN( GLshort factor );
 */
GLE_API void glGlobalAlphaFactorsSUN( GLshort factor );

/**
 * @brief void glGlobalAlphaFactoriSUN( GLint factor );
 */
GLE_API void glGlobalAlphaFactoriSUN( GLint factor );

/**
 * @brief void glGlobalAlphaFactorfSUN( GLfloat factor );
 */
GLE_API void glGlobalAlphaFactorfSUN( GLfloat factor );

/**
 * @brief void glGlobalAlphaFactordSUN( GLdouble factor );
 */
GLE_API void glGlobalAlphaFactordSUN( GLdouble factor );

/**
 * @brief void glGlobalAlphaFactorubSUN( GLubyte factor );
 */
GLE_API void glGlobalAlphaFactorubSUN( GLubyte factor );

/**
 * @brief void glGlobalAlphaFactorusSUN( GLushort factor );
 */
GLE_API void glGlobalAlphaFactorusSUN( GLushort factor );

/**
 * @brief void glGlobalAlphaFactoruiSUN( GLuint factor );
 */
GLE_API void glGlobalAlphaFactoruiSUN( GLuint factor );

//@}
			
			
/**
 * @name GL_SUN_mesh_array
 *	Extension number in OpenGL registry : 257
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/mesh_array.txt
 *	@ingroup GL_SUN
 */
//@{
/**
 * @brief Test if \b GL_SUN_mesh_array is supported.
 * @return Returns \c true if \b GL_SUN_mesh_array is supported, false otherwise.
 */
GLE_API bool isGL_SUN_mesh_array();

/**
 * @brief void glDrawMeshArraysSUN( GLenum mode, GLint first, GLsizei count, GLsizei width );
 */
GLE_API void glDrawMeshArraysSUN( GLenum mode, GLint first, GLsizei count, GLsizei width );

//@}
			
			
/**
 * @name GL_SUN_slice_accum
 *	Extension number in OpenGL registry : 258
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/slice_accum.txt
 *	@ingroup GL_SUN
 */
//@{
/**
 * @brief Test if \b GL_SUN_slice_accum is supported.
 * @return Returns \c true if \b GL_SUN_slice_accum is supported, false otherwise.
 */
GLE_API bool isGL_SUN_slice_accum();

//@}
			
			
/**
 * @name GL_SUN_triangle_list
 *	Extension number in OpenGL registry : 165
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/triangle_list.txt
 *	@ingroup GL_SUN
 */
//@{
/**
 * @brief Test if \b GL_SUN_triangle_list is supported.
 * @return Returns \c true if \b GL_SUN_triangle_list is supported, false otherwise.
 */
GLE_API bool isGL_SUN_triangle_list();

/**
 * @brief void glReplacementCodeuiSUN( GLuint code );
 */
GLE_API void glReplacementCodeuiSUN( GLuint code );

/**
 * @brief void glReplacementCodeusSUN( GLushort code );
 */
GLE_API void glReplacementCodeusSUN( GLushort code );

/**
 * @brief void glReplacementCodeubSUN( GLubyte code );
 */
GLE_API void glReplacementCodeubSUN( GLubyte code );

/**
 * @brief void glReplacementCodeuivSUN( const GLuint *code );
 */
GLE_API void glReplacementCodeuivSUN( const GLuint *code );

/**
 * @brief void glReplacementCodeusvSUN( const GLushort *code );
 */
GLE_API void glReplacementCodeusvSUN( const GLushort *code );

/**
 * @brief void glReplacementCodeubvSUN( const GLubyte *code );
 */
GLE_API void glReplacementCodeubvSUN( const GLubyte *code );

/**
 * @brief void glReplacementCodePointerSUN( GLenum type, GLsizei stride, const GLvoid* *pointer );
 */
GLE_API void glReplacementCodePointerSUN( GLenum type, GLsizei stride, const GLvoid* *pointer );

//@}
			
			
/**
 * @name GL_SUN_vertex
 *	Extension number in OpenGL registry : 166
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/vertex.txt
 *	@ingroup GL_SUN
 */
//@{
/**
 * @brief Test if \b GL_SUN_vertex is supported.
 * @return Returns \c true if \b GL_SUN_vertex is supported, false otherwise.
 */
GLE_API bool isGL_SUN_vertex();

/**
 * @brief void glColor4ubVertex2fSUN( GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y );
 */
GLE_API void glColor4ubVertex2fSUN( GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y );

/**
 * @brief void glColor4ubVertex2fvSUN( const GLubyte *c, const GLfloat *v );
 */
GLE_API void glColor4ubVertex2fvSUN( const GLubyte *c, const GLfloat *v );

/**
 * @brief void glColor4ubVertex3fSUN( GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glColor4ubVertex3fSUN( GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glColor4ubVertex3fvSUN( const GLubyte *c, const GLfloat *v );
 */
GLE_API void glColor4ubVertex3fvSUN( const GLubyte *c, const GLfloat *v );

/**
 * @brief void glColor3fVertex3fSUN( GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glColor3fVertex3fSUN( GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glColor3fVertex3fvSUN( const GLfloat *c, const GLfloat *v );
 */
GLE_API void glColor3fVertex3fvSUN( const GLfloat *c, const GLfloat *v );

/**
 * @brief void glNormal3fVertex3fSUN( GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glNormal3fVertex3fSUN( GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glNormal3fVertex3fvSUN( const GLfloat *n, const GLfloat *v );
 */
GLE_API void glNormal3fVertex3fvSUN( const GLfloat *n, const GLfloat *v );

/**
 * @brief void glColor4fNormal3fVertex3fSUN( GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glColor4fNormal3fVertex3fSUN( GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glColor4fNormal3fVertex3fvSUN( const GLfloat *c, const GLfloat *n, const GLfloat *v );
 */
GLE_API void glColor4fNormal3fVertex3fvSUN( const GLfloat *c, const GLfloat *n, const GLfloat *v );

/**
 * @brief void glTexCoord2fVertex3fSUN( GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glTexCoord2fVertex3fSUN( GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glTexCoord2fVertex3fvSUN( const GLfloat *tc, const GLfloat *v );
 */
GLE_API void glTexCoord2fVertex3fvSUN( const GLfloat *tc, const GLfloat *v );

/**
 * @brief void glTexCoord4fVertex4fSUN( GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glTexCoord4fVertex4fSUN( GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glTexCoord4fVertex4fvSUN( const GLfloat *tc, const GLfloat *v );
 */
GLE_API void glTexCoord4fVertex4fvSUN( const GLfloat *tc, const GLfloat *v );

/**
 * @brief void glTexCoord2fColor4ubVertex3fSUN( GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glTexCoord2fColor4ubVertex3fSUN( GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glTexCoord2fColor4ubVertex3fvSUN( const GLfloat *tc, const GLubyte *c, const GLfloat *v );
 */
GLE_API void glTexCoord2fColor4ubVertex3fvSUN( const GLfloat *tc, const GLubyte *c, const GLfloat *v );

/**
 * @brief void glTexCoord2fColor3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glTexCoord2fColor3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glTexCoord2fColor3fVertex3fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *v );
 */
GLE_API void glTexCoord2fColor3fVertex3fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *v );

/**
 * @brief void glTexCoord2fNormal3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glTexCoord2fNormal3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glTexCoord2fNormal3fVertex3fvSUN( const GLfloat *tc, const GLfloat *n, const GLfloat *v );
 */
GLE_API void glTexCoord2fNormal3fVertex3fvSUN( const GLfloat *tc, const GLfloat *n, const GLfloat *v );

/**
 * @brief void glTexCoord2fColor4fNormal3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glTexCoord2fColor4fNormal3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glTexCoord2fColor4fNormal3fVertex3fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v );
 */
GLE_API void glTexCoord2fColor4fNormal3fVertex3fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v );

/**
 * @brief void glTexCoord4fColor4fNormal3fVertex4fSUN( GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glTexCoord4fColor4fNormal3fVertex4fSUN( GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glTexCoord4fColor4fNormal3fVertex4fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v );
 */
GLE_API void glTexCoord4fColor4fNormal3fVertex4fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v );

/**
 * @brief void glReplacementCodeuiVertex3fSUN( GLuint rc, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glReplacementCodeuiVertex3fSUN( GLuint rc, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glReplacementCodeuiVertex3fvSUN( const GLuint *rc, const GLfloat *v );
 */
GLE_API void glReplacementCodeuiVertex3fvSUN( const GLuint *rc, const GLfloat *v );

/**
 * @brief void glReplacementCodeuiColor4ubVertex3fSUN( GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glReplacementCodeuiColor4ubVertex3fSUN( GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glReplacementCodeuiColor4ubVertex3fvSUN( const GLuint *rc, const GLubyte *c, const GLfloat *v );
 */
GLE_API void glReplacementCodeuiColor4ubVertex3fvSUN( const GLuint *rc, const GLubyte *c, const GLfloat *v );

/**
 * @brief void glReplacementCodeuiColor3fVertex3fSUN( GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glReplacementCodeuiColor3fVertex3fSUN( GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glReplacementCodeuiColor3fVertex3fvSUN( const GLuint *rc, const GLfloat *c, const GLfloat *v );
 */
GLE_API void glReplacementCodeuiColor3fVertex3fvSUN( const GLuint *rc, const GLfloat *c, const GLfloat *v );

/**
 * @brief void glReplacementCodeuiNormal3fVertex3fSUN( GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glReplacementCodeuiNormal3fVertex3fSUN( GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glReplacementCodeuiNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *n, const GLfloat *v );
 */
GLE_API void glReplacementCodeuiNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *n, const GLfloat *v );

/**
 * @brief void glReplacementCodeuiColor4fNormal3fVertex3fSUN( GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glReplacementCodeuiColor4fNormal3fVertex3fSUN( GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glReplacementCodeuiColor4fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v );
 */
GLE_API void glReplacementCodeuiColor4fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v );

/**
 * @brief void glReplacementCodeuiTexCoord2fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glReplacementCodeuiTexCoord2fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glReplacementCodeuiTexCoord2fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *v );
 */
GLE_API void glReplacementCodeuiTexCoord2fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *v );

/**
 * @brief void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v );
 */
GLE_API void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v );

/**
 * @brief void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v );
 */
GLE_API void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v );

//@}

			
/**	
 * @name GL_VERSION_1_2
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_VERSION_1_2 is supported.
 * @return Returns \c true if \b GL_VERSION_1_2 is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_1_2();

/**
 * @brief void glBlendColor( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
 */
GLE_API void glBlendColor( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );

/**
 * @brief void glBlendEquation( GLenum mode );
 */
GLE_API void glBlendEquation( GLenum mode );

/**
 * @brief void glDrawRangeElements( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices );
 */
GLE_API void glDrawRangeElements( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices );

/**
 * @brief void glColorTable( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );
 */
GLE_API void glColorTable( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );

/**
 * @brief void glColorTableParameterfv( GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glColorTableParameterfv( GLenum target, GLenum pname, const GLfloat *params );

/**
 * @brief void glColorTableParameteriv( GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glColorTableParameteriv( GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glCopyColorTable( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );
 */
GLE_API void glCopyColorTable( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );

/**
 * @brief void glGetColorTable( GLenum target, GLenum format, GLenum type, GLvoid *table );
 */
GLE_API void glGetColorTable( GLenum target, GLenum format, GLenum type, GLvoid *table );

/**
 * @brief void glGetColorTableParameterfv( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetColorTableParameterfv( GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetColorTableParameteriv( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetColorTableParameteriv( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glColorSubTable( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data );
 */
GLE_API void glColorSubTable( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data );

/**
 * @brief void glCopyColorSubTable( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width );
 */
GLE_API void glCopyColorSubTable( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width );

/**
 * @brief void glConvolutionFilter1D( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image );
 */
GLE_API void glConvolutionFilter1D( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image );

/**
 * @brief void glConvolutionFilter2D( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image );
 */
GLE_API void glConvolutionFilter2D( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image );

/**
 * @brief void glConvolutionParameterf( GLenum target, GLenum pname, GLfloat params );
 */
GLE_API void glConvolutionParameterf( GLenum target, GLenum pname, GLfloat params );

/**
 * @brief void glConvolutionParameterfv( GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glConvolutionParameterfv( GLenum target, GLenum pname, const GLfloat *params );

/**
 * @brief void glConvolutionParameteri( GLenum target, GLenum pname, GLint params );
 */
GLE_API void glConvolutionParameteri( GLenum target, GLenum pname, GLint params );

/**
 * @brief void glConvolutionParameteriv( GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glConvolutionParameteriv( GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glCopyConvolutionFilter1D( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );
 */
GLE_API void glCopyConvolutionFilter1D( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );

/**
 * @brief void glCopyConvolutionFilter2D( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height );
 */
GLE_API void glCopyConvolutionFilter2D( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height );

/**
 * @brief void glGetConvolutionFilter( GLenum target, GLenum format, GLenum type, GLvoid *image );
 */
GLE_API void glGetConvolutionFilter( GLenum target, GLenum format, GLenum type, GLvoid *image );

/**
 * @brief void glGetConvolutionParameterfv( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetConvolutionParameterfv( GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetConvolutionParameteriv( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetConvolutionParameteriv( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetSeparableFilter( GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span );
 */
GLE_API void glGetSeparableFilter( GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span );

/**
 * @brief void glSeparableFilter2D( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column );
 */
GLE_API void glSeparableFilter2D( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column );

/**
 * @brief void glGetHistogram( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );
 */
GLE_API void glGetHistogram( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );

/**
 * @brief void glGetHistogramParameterfv( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetHistogramParameterfv( GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetHistogramParameteriv( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetHistogramParameteriv( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetMinmax( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );
 */
GLE_API void glGetMinmax( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );

/**
 * @brief void glGetMinmaxParameterfv( GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetMinmaxParameterfv( GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetMinmaxParameteriv( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetMinmaxParameteriv( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glHistogram( GLenum target, GLsizei width, GLenum internalformat, GLboolean sink );
 */
GLE_API void glHistogram( GLenum target, GLsizei width, GLenum internalformat, GLboolean sink );

/**
 * @brief void glMinmax( GLenum target, GLenum internalformat, GLboolean sink );
 */
GLE_API void glMinmax( GLenum target, GLenum internalformat, GLboolean sink );

/**
 * @brief void glResetHistogram( GLenum target );
 */
GLE_API void glResetHistogram( GLenum target );

/**
 * @brief void glResetMinmax( GLenum target );
 */
GLE_API void glResetMinmax( GLenum target );

/**
 * @brief void glTexImage3D( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTexImage3D( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glCopyTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );
 */
GLE_API void glCopyTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );

//@}

			
/**	
 * @name GL_VERSION_1_3
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_VERSION_1_3 is supported.
 * @return Returns \c true if \b GL_VERSION_1_3 is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_1_3();

/**
 * @brief void glActiveTexture( GLenum texture );
 */
GLE_API void glActiveTexture( GLenum texture );

/**
 * @brief void glClientActiveTexture( GLenum texture );
 */
GLE_API void glClientActiveTexture( GLenum texture );

/**
 * @brief void glMultiTexCoord1d( GLenum target, GLdouble s );
 */
GLE_API void glMultiTexCoord1d( GLenum target, GLdouble s );

/**
 * @brief void glMultiTexCoord1dv( GLenum target, const GLdouble *v );
 */
GLE_API void glMultiTexCoord1dv( GLenum target, const GLdouble *v );

/**
 * @brief void glMultiTexCoord1f( GLenum target, GLfloat s );
 */
GLE_API void glMultiTexCoord1f( GLenum target, GLfloat s );

/**
 * @brief void glMultiTexCoord1fv( GLenum target, const GLfloat *v );
 */
GLE_API void glMultiTexCoord1fv( GLenum target, const GLfloat *v );

/**
 * @brief void glMultiTexCoord1i( GLenum target, GLint s );
 */
GLE_API void glMultiTexCoord1i( GLenum target, GLint s );

/**
 * @brief void glMultiTexCoord1iv( GLenum target, const GLint *v );
 */
GLE_API void glMultiTexCoord1iv( GLenum target, const GLint *v );

/**
 * @brief void glMultiTexCoord1s( GLenum target, GLshort s );
 */
GLE_API void glMultiTexCoord1s( GLenum target, GLshort s );

/**
 * @brief void glMultiTexCoord1sv( GLenum target, const GLshort *v );
 */
GLE_API void glMultiTexCoord1sv( GLenum target, const GLshort *v );

/**
 * @brief void glMultiTexCoord2d( GLenum target, GLdouble s, GLdouble t );
 */
GLE_API void glMultiTexCoord2d( GLenum target, GLdouble s, GLdouble t );

/**
 * @brief void glMultiTexCoord2dv( GLenum target, const GLdouble *v );
 */
GLE_API void glMultiTexCoord2dv( GLenum target, const GLdouble *v );

/**
 * @brief void glMultiTexCoord2f( GLenum target, GLfloat s, GLfloat t );
 */
GLE_API void glMultiTexCoord2f( GLenum target, GLfloat s, GLfloat t );

/**
 * @brief void glMultiTexCoord2fv( GLenum target, const GLfloat *v );
 */
GLE_API void glMultiTexCoord2fv( GLenum target, const GLfloat *v );

/**
 * @brief void glMultiTexCoord2i( GLenum target, GLint s, GLint t );
 */
GLE_API void glMultiTexCoord2i( GLenum target, GLint s, GLint t );

/**
 * @brief void glMultiTexCoord2iv( GLenum target, const GLint *v );
 */
GLE_API void glMultiTexCoord2iv( GLenum target, const GLint *v );

/**
 * @brief void glMultiTexCoord2s( GLenum target, GLshort s, GLshort t );
 */
GLE_API void glMultiTexCoord2s( GLenum target, GLshort s, GLshort t );

/**
 * @brief void glMultiTexCoord2sv( GLenum target, const GLshort *v );
 */
GLE_API void glMultiTexCoord2sv( GLenum target, const GLshort *v );

/**
 * @brief void glMultiTexCoord3d( GLenum target, GLdouble s, GLdouble t, GLdouble r );
 */
GLE_API void glMultiTexCoord3d( GLenum target, GLdouble s, GLdouble t, GLdouble r );

/**
 * @brief void glMultiTexCoord3dv( GLenum target, const GLdouble *v );
 */
GLE_API void glMultiTexCoord3dv( GLenum target, const GLdouble *v );

/**
 * @brief void glMultiTexCoord3f( GLenum target, GLfloat s, GLfloat t, GLfloat r );
 */
GLE_API void glMultiTexCoord3f( GLenum target, GLfloat s, GLfloat t, GLfloat r );

/**
 * @brief void glMultiTexCoord3fv( GLenum target, const GLfloat *v );
 */
GLE_API void glMultiTexCoord3fv( GLenum target, const GLfloat *v );

/**
 * @brief void glMultiTexCoord3i( GLenum target, GLint s, GLint t, GLint r );
 */
GLE_API void glMultiTexCoord3i( GLenum target, GLint s, GLint t, GLint r );

/**
 * @brief void glMultiTexCoord3iv( GLenum target, const GLint *v );
 */
GLE_API void glMultiTexCoord3iv( GLenum target, const GLint *v );

/**
 * @brief void glMultiTexCoord3s( GLenum target, GLshort s, GLshort t, GLshort r );
 */
GLE_API void glMultiTexCoord3s( GLenum target, GLshort s, GLshort t, GLshort r );

/**
 * @brief void glMultiTexCoord3sv( GLenum target, const GLshort *v );
 */
GLE_API void glMultiTexCoord3sv( GLenum target, const GLshort *v );

/**
 * @brief void glMultiTexCoord4d( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q );
 */
GLE_API void glMultiTexCoord4d( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q );

/**
 * @brief void glMultiTexCoord4dv( GLenum target, const GLdouble *v );
 */
GLE_API void glMultiTexCoord4dv( GLenum target, const GLdouble *v );

/**
 * @brief void glMultiTexCoord4f( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q );
 */
GLE_API void glMultiTexCoord4f( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q );

/**
 * @brief void glMultiTexCoord4fv( GLenum target, const GLfloat *v );
 */
GLE_API void glMultiTexCoord4fv( GLenum target, const GLfloat *v );

/**
 * @brief void glMultiTexCoord4i( GLenum target, GLint s, GLint t, GLint r, GLint q );
 */
GLE_API void glMultiTexCoord4i( GLenum target, GLint s, GLint t, GLint r, GLint q );

/**
 * @brief void glMultiTexCoord4iv( GLenum target, const GLint *v );
 */
GLE_API void glMultiTexCoord4iv( GLenum target, const GLint *v );

/**
 * @brief void glMultiTexCoord4s( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q );
 */
GLE_API void glMultiTexCoord4s( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q );

/**
 * @brief void glMultiTexCoord4sv( GLenum target, const GLshort *v );
 */
GLE_API void glMultiTexCoord4sv( GLenum target, const GLshort *v );

/**
 * @brief void glLoadTransposeMatrixf( const GLfloat *m );
 */
GLE_API void glLoadTransposeMatrixf( const GLfloat *m );

/**
 * @brief void glLoadTransposeMatrixd( const GLdouble *m );
 */
GLE_API void glLoadTransposeMatrixd( const GLdouble *m );

/**
 * @brief void glMultTransposeMatrixf( const GLfloat *m );
 */
GLE_API void glMultTransposeMatrixf( const GLfloat *m );

/**
 * @brief void glMultTransposeMatrixd( const GLdouble *m );
 */
GLE_API void glMultTransposeMatrixd( const GLdouble *m );

/**
 * @brief void glSampleCoverage( GLclampf value, GLboolean invert );
 */
GLE_API void glSampleCoverage( GLclampf value, GLboolean invert );

/**
 * @brief void glCompressedTexImage3D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexImage3D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexImage2D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexImage2D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexImage1D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexImage1D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexSubImage2D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexSubImage2D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glCompressedTexSubImage1D( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data );
 */
GLE_API void glCompressedTexSubImage1D( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data );

/**
 * @brief void glGetCompressedTexImage( GLenum target, GLint level, GLvoid *img );
 */
GLE_API void glGetCompressedTexImage( GLenum target, GLint level, GLvoid *img );

//@}

			
/**	
 * @name GL_VERSION_1_4
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_VERSION_1_4 is supported.
 * @return Returns \c true if \b GL_VERSION_1_4 is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_1_4();

/**
 * @brief void glBlendFuncSeparate( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha );
 */
GLE_API void glBlendFuncSeparate( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha );

/**
 * @brief void glFogCoordf( GLfloat coord );
 */
GLE_API void glFogCoordf( GLfloat coord );

/**
 * @brief void glFogCoordfv( const GLfloat *coord );
 */
GLE_API void glFogCoordfv( const GLfloat *coord );

/**
 * @brief void glFogCoordd( GLdouble coord );
 */
GLE_API void glFogCoordd( GLdouble coord );

/**
 * @brief void glFogCoorddv( const GLdouble *coord );
 */
GLE_API void glFogCoorddv( const GLdouble *coord );

/**
 * @brief void glFogCoordPointer( GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glFogCoordPointer( GLenum type, GLsizei stride, const GLvoid *pointer );

/**
 * @brief void glMultiDrawArrays( GLenum mode, GLint *first, GLsizei *count, GLsizei primcount );
 */
GLE_API void glMultiDrawArrays( GLenum mode, GLint *first, GLsizei *count, GLsizei primcount );

/**
 * @brief void glMultiDrawElements( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount );
 */
GLE_API void glMultiDrawElements( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount );

/**
 * @brief void glPointParameterf( GLenum pname, GLfloat param );
 */
GLE_API void glPointParameterf( GLenum pname, GLfloat param );

/**
 * @brief void glPointParameterfv( GLenum pname, const GLfloat *params );
 */
GLE_API void glPointParameterfv( GLenum pname, const GLfloat *params );

/**
 * @brief void glPointParameteri( GLenum pname, GLint param );
 */
GLE_API void glPointParameteri( GLenum pname, GLint param );

/**
 * @brief void glPointParameteriv( GLenum pname, const GLint *params );
 */
GLE_API void glPointParameteriv( GLenum pname, const GLint *params );

/**
 * @brief void glSecondaryColor3b( GLbyte red, GLbyte green, GLbyte blue );
 */
GLE_API void glSecondaryColor3b( GLbyte red, GLbyte green, GLbyte blue );

/**
 * @brief void glSecondaryColor3bv( const GLbyte *v );
 */
GLE_API void glSecondaryColor3bv( const GLbyte *v );

/**
 * @brief void glSecondaryColor3d( GLdouble red, GLdouble green, GLdouble blue );
 */
GLE_API void glSecondaryColor3d( GLdouble red, GLdouble green, GLdouble blue );

/**
 * @brief void glSecondaryColor3dv( const GLdouble *v );
 */
GLE_API void glSecondaryColor3dv( const GLdouble *v );

/**
 * @brief void glSecondaryColor3f( GLfloat red, GLfloat green, GLfloat blue );
 */
GLE_API void glSecondaryColor3f( GLfloat red, GLfloat green, GLfloat blue );

/**
 * @brief void glSecondaryColor3fv( const GLfloat *v );
 */
GLE_API void glSecondaryColor3fv( const GLfloat *v );

/**
 * @brief void glSecondaryColor3i( GLint red, GLint green, GLint blue );
 */
GLE_API void glSecondaryColor3i( GLint red, GLint green, GLint blue );

/**
 * @brief void glSecondaryColor3iv( const GLint *v );
 */
GLE_API void glSecondaryColor3iv( const GLint *v );

/**
 * @brief void glSecondaryColor3s( GLshort red, GLshort green, GLshort blue );
 */
GLE_API void glSecondaryColor3s( GLshort red, GLshort green, GLshort blue );

/**
 * @brief void glSecondaryColor3sv( const GLshort *v );
 */
GLE_API void glSecondaryColor3sv( const GLshort *v );

/**
 * @brief void glSecondaryColor3ub( GLubyte red, GLubyte green, GLubyte blue );
 */
GLE_API void glSecondaryColor3ub( GLubyte red, GLubyte green, GLubyte blue );

/**
 * @brief void glSecondaryColor3ubv( const GLubyte *v );
 */
GLE_API void glSecondaryColor3ubv( const GLubyte *v );

/**
 * @brief void glSecondaryColor3ui( GLuint red, GLuint green, GLuint blue );
 */
GLE_API void glSecondaryColor3ui( GLuint red, GLuint green, GLuint blue );

/**
 * @brief void glSecondaryColor3uiv( const GLuint *v );
 */
GLE_API void glSecondaryColor3uiv( const GLuint *v );

/**
 * @brief void glSecondaryColor3us( GLushort red, GLushort green, GLushort blue );
 */
GLE_API void glSecondaryColor3us( GLushort red, GLushort green, GLushort blue );

/**
 * @brief void glSecondaryColor3usv( const GLushort *v );
 */
GLE_API void glSecondaryColor3usv( const GLushort *v );

/**
 * @brief void glSecondaryColorPointer( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glSecondaryColorPointer( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );

/**
 * @brief void glWindowPos2d( GLdouble x, GLdouble y );
 */
GLE_API void glWindowPos2d( GLdouble x, GLdouble y );

/**
 * @brief void glWindowPos2dv( const GLdouble *v );
 */
GLE_API void glWindowPos2dv( const GLdouble *v );

/**
 * @brief void glWindowPos2f( GLfloat x, GLfloat y );
 */
GLE_API void glWindowPos2f( GLfloat x, GLfloat y );

/**
 * @brief void glWindowPos2fv( const GLfloat *v );
 */
GLE_API void glWindowPos2fv( const GLfloat *v );

/**
 * @brief void glWindowPos2i( GLint x, GLint y );
 */
GLE_API void glWindowPos2i( GLint x, GLint y );

/**
 * @brief void glWindowPos2iv( const GLint *v );
 */
GLE_API void glWindowPos2iv( const GLint *v );

/**
 * @brief void glWindowPos2s( GLshort x, GLshort y );
 */
GLE_API void glWindowPos2s( GLshort x, GLshort y );

/**
 * @brief void glWindowPos2sv( const GLshort *v );
 */
GLE_API void glWindowPos2sv( const GLshort *v );

/**
 * @brief void glWindowPos3d( GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glWindowPos3d( GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glWindowPos3dv( const GLdouble *v );
 */
GLE_API void glWindowPos3dv( const GLdouble *v );

/**
 * @brief void glWindowPos3f( GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glWindowPos3f( GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glWindowPos3fv( const GLfloat *v );
 */
GLE_API void glWindowPos3fv( const GLfloat *v );

/**
 * @brief void glWindowPos3i( GLint x, GLint y, GLint z );
 */
GLE_API void glWindowPos3i( GLint x, GLint y, GLint z );

/**
 * @brief void glWindowPos3iv( const GLint *v );
 */
GLE_API void glWindowPos3iv( const GLint *v );

/**
 * @brief void glWindowPos3s( GLshort x, GLshort y, GLshort z );
 */
GLE_API void glWindowPos3s( GLshort x, GLshort y, GLshort z );

/**
 * @brief void glWindowPos3sv( const GLshort *v );
 */
GLE_API void glWindowPos3sv( const GLshort *v );

//@}

			
/**	
 * @name GL_VERSION_1_5
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_VERSION_1_5 is supported.
 * @return Returns \c true if \b GL_VERSION_1_5 is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_1_5();

/**
 * @brief void glGenQueries( GLsizei n, GLuint *ids );
 */
GLE_API void glGenQueries( GLsizei n, GLuint *ids );

/**
 * @brief void glDeleteQueries( GLsizei n, const GLuint *ids );
 */
GLE_API void glDeleteQueries( GLsizei n, const GLuint *ids );

/**
 * @brief GLboolean glIsQuery( GLuint id );
 */
GLE_API GLboolean glIsQuery( GLuint id );

/**
 * @brief void glBeginQuery( GLenum target, GLuint id );
 */
GLE_API void glBeginQuery( GLenum target, GLuint id );

/**
 * @brief void glEndQuery( GLenum target );
 */
GLE_API void glEndQuery( GLenum target );

/**
 * @brief void glGetQueryiv( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetQueryiv( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetQueryObjectiv( GLuint id, GLenum pname, GLint *params );
 */
GLE_API void glGetQueryObjectiv( GLuint id, GLenum pname, GLint *params );

/**
 * @brief void glGetQueryObjectuiv( GLuint id, GLenum pname, GLuint *params );
 */
GLE_API void glGetQueryObjectuiv( GLuint id, GLenum pname, GLuint *params );

/**
 * @brief void glBindBuffer( GLenum target, GLuint buffer );
 */
GLE_API void glBindBuffer( GLenum target, GLuint buffer );

/**
 * @brief void glDeleteBuffers( GLsizei n, const GLuint *buffers );
 */
GLE_API void glDeleteBuffers( GLsizei n, const GLuint *buffers );

/**
 * @brief void glGenBuffers( GLsizei n, GLuint *buffers );
 */
GLE_API void glGenBuffers( GLsizei n, GLuint *buffers );

/**
 * @brief GLboolean glIsBuffer( GLuint buffer );
 */
GLE_API GLboolean glIsBuffer( GLuint buffer );

/**
 * @brief void glBufferData( GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage );
 */
GLE_API void glBufferData( GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage );

/**
 * @brief void glBufferSubData( GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data );
 */
GLE_API void glBufferSubData( GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data );

/**
 * @brief void glGetBufferSubData( GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data );
 */
GLE_API void glGetBufferSubData( GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data );

/**
 * @brief GLvoid* glMapBuffer( GLenum target, GLenum access );
 */
GLE_API GLvoid* glMapBuffer( GLenum target, GLenum access );

/**
 * @brief GLboolean glUnmapBuffer( GLenum target );
 */
GLE_API GLboolean glUnmapBuffer( GLenum target );

/**
 * @brief void glGetBufferParameteriv( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetBufferParameteriv( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetBufferPointerv( GLenum target, GLenum pname, GLvoid* *params );
 */
GLE_API void glGetBufferPointerv( GLenum target, GLenum pname, GLvoid* *params );

//@}

			
/**	
 * @name GL_VERSION_2_0
 *	Extension not found in OpenGL extensions registry !!!
 *	@ingroup Not_in_OpenGL_Extension_Registry
 */
//@{
/**
 * @brief Test if \b GL_VERSION_2_0 is supported.
 * @return Returns \c true if \b GL_VERSION_2_0 is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_2_0();

/**
 * @brief void glBlendEquationSeparate( GLenum modeRGB, GLenum modeAlpha );
 */
GLE_API void glBlendEquationSeparate( GLenum modeRGB, GLenum modeAlpha );

/**
 * @brief void glDrawBuffers( GLsizei n, const GLenum *bufs );
 */
GLE_API void glDrawBuffers( GLsizei n, const GLenum *bufs );

/**
 * @brief void glStencilOpSeparate( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass );
 */
GLE_API void glStencilOpSeparate( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass );

/**
 * @brief void glStencilFuncSeparate( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask );
 */
GLE_API void glStencilFuncSeparate( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask );

/**
 * @brief void glStencilMaskSeparate( GLenum face, GLuint mask );
 */
GLE_API void glStencilMaskSeparate( GLenum face, GLuint mask );

/**
 * @brief void glAttachShader( GLuint program, GLuint shader );
 */
GLE_API void glAttachShader( GLuint program, GLuint shader );

/**
 * @brief void glBindAttribLocation( GLuint program, GLuint index, const GLchar *name );
 */
GLE_API void glBindAttribLocation( GLuint program, GLuint index, const GLchar *name );

/**
 * @brief void glCompileShader( GLuint shader );
 */
GLE_API void glCompileShader( GLuint shader );

/**
 * @brief GLuint glCreateProgram( void );
 */
GLE_API GLuint glCreateProgram( void );

/**
 * @brief GLuint glCreateShader( GLenum type );
 */
GLE_API GLuint glCreateShader( GLenum type );

/**
 * @brief void glDeleteProgram( GLuint program );
 */
GLE_API void glDeleteProgram( GLuint program );

/**
 * @brief void glDeleteShader( GLuint shader );
 */
GLE_API void glDeleteShader( GLuint shader );

/**
 * @brief void glDetachShader( GLuint program, GLuint shader );
 */
GLE_API void glDetachShader( GLuint program, GLuint shader );

/**
 * @brief void glDisableVertexAttribArray( GLuint index );
 */
GLE_API void glDisableVertexAttribArray( GLuint index );

/**
 * @brief void glEnableVertexAttribArray( GLuint index );
 */
GLE_API void glEnableVertexAttribArray( GLuint index );

/**
 * @brief void glGetActiveAttrib( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name );
 */
GLE_API void glGetActiveAttrib( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name );

/**
 * @brief void glGetActiveUniform( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name );
 */
GLE_API void glGetActiveUniform( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name );

/**
 * @brief void glGetAttachedShaders( GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj );
 */
GLE_API void glGetAttachedShaders( GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj );

/**
 * @brief GLint glGetAttribLocation( GLuint program, const GLchar *name );
 */
GLE_API GLint glGetAttribLocation( GLuint program, const GLchar *name );

/**
 * @brief void glGetProgramiv( GLuint program, GLenum pname, GLint *params );
 */
GLE_API void glGetProgramiv( GLuint program, GLenum pname, GLint *params );

/**
 * @brief void glGetProgramInfoLog( GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog );
 */
GLE_API void glGetProgramInfoLog( GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog );

/**
 * @brief void glGetShaderiv( GLuint shader, GLenum pname, GLint *params );
 */
GLE_API void glGetShaderiv( GLuint shader, GLenum pname, GLint *params );

/**
 * @brief void glGetShaderInfoLog( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog );
 */
GLE_API void glGetShaderInfoLog( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog );

/**
 * @brief void glGetShaderSource( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source );
 */
GLE_API void glGetShaderSource( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source );

/**
 * @brief GLint glGetUniformLocation( GLuint program, const GLchar *name );
 */
GLE_API GLint glGetUniformLocation( GLuint program, const GLchar *name );

/**
 * @brief void glGetUniformfv( GLuint program, GLint location, GLfloat *params );
 */
GLE_API void glGetUniformfv( GLuint program, GLint location, GLfloat *params );

/**
 * @brief void glGetUniformiv( GLuint program, GLint location, GLint *params );
 */
GLE_API void glGetUniformiv( GLuint program, GLint location, GLint *params );

/**
 * @brief void glGetVertexAttribdv( GLuint index, GLenum pname, GLdouble *params );
 */
GLE_API void glGetVertexAttribdv( GLuint index, GLenum pname, GLdouble *params );

/**
 * @brief void glGetVertexAttribfv( GLuint index, GLenum pname, GLfloat *params );
 */
GLE_API void glGetVertexAttribfv( GLuint index, GLenum pname, GLfloat *params );

/**
 * @brief void glGetVertexAttribiv( GLuint index, GLenum pname, GLint *params );
 */
GLE_API void glGetVertexAttribiv( GLuint index, GLenum pname, GLint *params );

/**
 * @brief void glGetVertexAttribPointerv( GLuint index, GLenum pname, GLvoid* *pointer );
 */
GLE_API void glGetVertexAttribPointerv( GLuint index, GLenum pname, GLvoid* *pointer );

/**
 * @brief GLboolean glIsProgram( GLuint program );
 */
GLE_API GLboolean glIsProgram( GLuint program );

/**
 * @brief GLboolean glIsShader( GLuint shader );
 */
GLE_API GLboolean glIsShader( GLuint shader );

/**
 * @brief void glLinkProgram( GLuint program );
 */
GLE_API void glLinkProgram( GLuint program );

/**
 * @brief void glShaderSource( GLuint shader, GLsizei count, const GLchar* *string, const GLint *length );
 */
GLE_API void glShaderSource( GLuint shader, GLsizei count, const GLchar* *string, const GLint *length );

/**
 * @brief void glUseProgram( GLuint program );
 */
GLE_API void glUseProgram( GLuint program );

/**
 * @brief void glUniform1f( GLint location, GLfloat v0 );
 */
GLE_API void glUniform1f( GLint location, GLfloat v0 );

/**
 * @brief void glUniform2f( GLint location, GLfloat v0, GLfloat v1 );
 */
GLE_API void glUniform2f( GLint location, GLfloat v0, GLfloat v1 );

/**
 * @brief void glUniform3f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );
 */
GLE_API void glUniform3f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );

/**
 * @brief void glUniform4f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );
 */
GLE_API void glUniform4f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );

/**
 * @brief void glUniform1i( GLint location, GLint v0 );
 */
GLE_API void glUniform1i( GLint location, GLint v0 );

/**
 * @brief void glUniform2i( GLint location, GLint v0, GLint v1 );
 */
GLE_API void glUniform2i( GLint location, GLint v0, GLint v1 );

/**
 * @brief void glUniform3i( GLint location, GLint v0, GLint v1, GLint v2 );
 */
GLE_API void glUniform3i( GLint location, GLint v0, GLint v1, GLint v2 );

/**
 * @brief void glUniform4i( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );
 */
GLE_API void glUniform4i( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );

/**
 * @brief void glUniform1fv( GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glUniform1fv( GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glUniform2fv( GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glUniform2fv( GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glUniform3fv( GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glUniform3fv( GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glUniform4fv( GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glUniform4fv( GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glUniform1iv( GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glUniform1iv( GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glUniform2iv( GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glUniform2iv( GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glUniform3iv( GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glUniform3iv( GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glUniform4iv( GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glUniform4iv( GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glUniformMatrix2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glUniformMatrix3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glUniformMatrix4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glValidateProgram( GLuint program );
 */
GLE_API void glValidateProgram( GLuint program );

/**
 * @brief void glVertexAttrib1d( GLuint index, GLdouble x );
 */
GLE_API void glVertexAttrib1d( GLuint index, GLdouble x );

/**
 * @brief void glVertexAttrib1dv( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib1dv( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib1f( GLuint index, GLfloat x );
 */
GLE_API void glVertexAttrib1f( GLuint index, GLfloat x );

/**
 * @brief void glVertexAttrib1fv( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib1fv( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib1s( GLuint index, GLshort x );
 */
GLE_API void glVertexAttrib1s( GLuint index, GLshort x );

/**
 * @brief void glVertexAttrib1sv( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib1sv( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib2d( GLuint index, GLdouble x, GLdouble y );
 */
GLE_API void glVertexAttrib2d( GLuint index, GLdouble x, GLdouble y );

/**
 * @brief void glVertexAttrib2dv( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib2dv( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib2f( GLuint index, GLfloat x, GLfloat y );
 */
GLE_API void glVertexAttrib2f( GLuint index, GLfloat x, GLfloat y );

/**
 * @brief void glVertexAttrib2fv( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib2fv( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib2s( GLuint index, GLshort x, GLshort y );
 */
GLE_API void glVertexAttrib2s( GLuint index, GLshort x, GLshort y );

/**
 * @brief void glVertexAttrib2sv( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib2sv( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib3d( GLuint index, GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glVertexAttrib3d( GLuint index, GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glVertexAttrib3dv( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib3dv( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib3f( GLuint index, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glVertexAttrib3f( GLuint index, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glVertexAttrib3fv( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib3fv( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib3s( GLuint index, GLshort x, GLshort y, GLshort z );
 */
GLE_API void glVertexAttrib3s( GLuint index, GLshort x, GLshort y, GLshort z );

/**
 * @brief void glVertexAttrib3sv( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib3sv( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib4Nbv( GLuint index, const GLbyte *v );
 */
GLE_API void glVertexAttrib4Nbv( GLuint index, const GLbyte *v );

/**
 * @brief void glVertexAttrib4Niv( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttrib4Niv( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttrib4Nsv( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib4Nsv( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib4Nub( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );
 */
GLE_API void glVertexAttrib4Nub( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );

/**
 * @brief void glVertexAttrib4Nubv( GLuint index, const GLubyte *v );
 */
GLE_API void glVertexAttrib4Nubv( GLuint index, const GLubyte *v );

/**
 * @brief void glVertexAttrib4Nuiv( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttrib4Nuiv( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttrib4Nusv( GLuint index, const GLushort *v );
 */
GLE_API void glVertexAttrib4Nusv( GLuint index, const GLushort *v );

/**
 * @brief void glVertexAttrib4bv( GLuint index, const GLbyte *v );
 */
GLE_API void glVertexAttrib4bv( GLuint index, const GLbyte *v );

/**
 * @brief void glVertexAttrib4d( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glVertexAttrib4d( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glVertexAttrib4dv( GLuint index, const GLdouble *v );
 */
GLE_API void glVertexAttrib4dv( GLuint index, const GLdouble *v );

/**
 * @brief void glVertexAttrib4f( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glVertexAttrib4f( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glVertexAttrib4fv( GLuint index, const GLfloat *v );
 */
GLE_API void glVertexAttrib4fv( GLuint index, const GLfloat *v );

/**
 * @brief void glVertexAttrib4iv( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttrib4iv( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttrib4s( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );
 */
GLE_API void glVertexAttrib4s( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );

/**
 * @brief void glVertexAttrib4sv( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttrib4sv( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttrib4ubv( GLuint index, const GLubyte *v );
 */
GLE_API void glVertexAttrib4ubv( GLuint index, const GLubyte *v );

/**
 * @brief void glVertexAttrib4uiv( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttrib4uiv( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttrib4usv( GLuint index, const GLushort *v );
 */
GLE_API void glVertexAttrib4usv( GLuint index, const GLushort *v );

/**
 * @brief void glVertexAttribPointer( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glVertexAttribPointer( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer );

//@}
			
			
/**
 * @name GL_WIN_phong_shading
 *	Extension number in OpenGL registry : 113
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/WIN/phong_shading.txt
 *	@ingroup GL_WIN
 */
//@{
/**
 * @brief Test if \b GL_WIN_phong_shading is supported.
 * @return Returns \c true if \b GL_WIN_phong_shading is supported, false otherwise.
 */
GLE_API bool isGL_WIN_phong_shading();

//@}
			
			
/**
 * @name GL_WIN_specular_fog
 *	Extension number in OpenGL registry : 114
 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/WIN/specular_fog.txt
 *	@ingroup GL_WIN
 */
//@{
/**
 * @brief Test if \b GL_WIN_specular_fog is supported.
 * @return Returns \c true if \b GL_WIN_specular_fog is supported, false otherwise.
 */
GLE_API bool isGL_WIN_specular_fog();

//@}


#endif // #ifndef _GLE_WRAPPERGEN_H
