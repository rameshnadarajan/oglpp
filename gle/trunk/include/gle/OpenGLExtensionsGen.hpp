// This file was generated at Wed Apr  6 08:46:51 2005 with gle, please do not modify.

// GLE - Copyright (C) 2004, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_OPENGLEXTENSIONSGEN_H
#define _GLE_OPENGLEXTENSIONSGEN_H

#include <vector>

#include "gle/gle.hpp"
#include "gle/OpenGLExtensions.hpp"

	
/** 
 * @defgroup g_internalGroups All OpenGL extensions groups.
 * @ingroup g_gle
 */


/**
 * @addtogroup g_gle
 *
 * Some statistics about supported extensions :
 * - Stamp = // This file was generated at Wed Apr  6 08:46:51 2005 with gle, please do not modify.
 * - Number of tokens								= 0
 * - Number of functions							= 1086
 * - Number of extensions found(in headers)	= 262
 * - Number of extensions in OpenGL registry	= 298
 */


namespace gle
{

struct GLE_API OpenGLExtensionsGen : public gle::OpenGLExtensions
{
	/**
	 * @brief Constructor.
	 */
	OpenGLExtensionsGen( std::ostream* pOS );

	/**
	 * @name Initialization methods.
	 */
	//@{

	/**
	 * @brief Clear all members variables of this class(all procedures pointers and boolean).
	 *
	 * @remarks This method is called by the default constructor.
	 */
	void clear();

	/**
	 * @brief Initialize all opengl extensions (all group of extensions).
	 */
	void initialize();

	/**
	 * @brief Returns if smart extension detection(SED) is enable or disable.
	 */
	bool isSEDEnable() const				{ return ( m_isSEDEnable ); }

	/**
	 * @brief Set smart extension detection(SED) to enable or disable.
	 */
	void enableSED( bool b = true )		{ m_isSEDEnable = b; }

	//@}


	/** 
	 * @brief Initialize the GL_3DFX extension group.
	 */
	void initializeGL_3DFX();

	/** 
	 * @brief Initialize the GL_APPLE extension group.
	 */
	void initializeGL_APPLE();

	/** 
	 * @brief Initialize the GL_ARB extension group.
	 */
	void initializeGL_ARB();

	/** 
	 * @brief Initialize the GL_ATI extension group.
	 */
	void initializeGL_ATI();

	/** 
	 * @brief Initialize the GL_EXT extension group.
	 */
	void initializeGL_EXT();

	/** 
	 * @brief Initialize the GL_FfdMaskSGIX extension group.
	 */
	void initializeGL_FfdMaskSGIX();

	/** 
	 * @brief Initialize the GL_GREMEDY extension group.
	 */
	void initializeGL_GREMEDY();

	/** 
	 * @brief Initialize the GL_HP extension group.
	 */
	void initializeGL_HP();

	/** 
	 * @brief Initialize the GL_IBM extension group.
	 */
	void initializeGL_IBM();

	/** 
	 * @brief Initialize the GL_INGR extension group.
	 */
	void initializeGL_INGR();

	/** 
	 * @brief Initialize the GL_INTEL extension group.
	 */
	void initializeGL_INTEL();

	/** 
	 * @brief Initialize the GL_MESA extension group.
	 */
	void initializeGL_MESA();

	/** 
	 * @brief Initialize the GL_NV extension group.
	 */
	void initializeGL_NV();

	/** 
	 * @brief Initialize the GL_OES extension group.
	 */
	void initializeGL_OES();

	/** 
	 * @brief Initialize the GL_OML extension group.
	 */
	void initializeGL_OML();

	/** 
	 * @brief Initialize the GL_PGI extension group.
	 */
	void initializeGL_PGI();

	/** 
	 * @brief Initialize the GL_REND extension group.
	 */
	void initializeGL_REND();

	/** 
	 * @brief Initialize the GL_S3 extension group.
	 */
	void initializeGL_S3();

	/** 
	 * @brief Initialize the GL_SGI extension group.
	 */
	void initializeGL_SGI();

	/** 
	 * @brief Initialize the GL_SGIS extension group.
	 */
	void initializeGL_SGIS();

	/** 
	 * @brief Initialize the GL_SGIX extension group.
	 */
	void initializeGL_SGIX();

	/** 
	 * @brief Initialize the GL_SUN extension group.
	 */
	void initializeGL_SUN();

	/** 
	 * @brief Initialize the GL_SUNX extension group.
	 */
	void initializeGL_SUNX();

	/** 
	 * @brief Initialize the GL_VERSION extension group.
	 */
	void initializeGL_VERSION();

	/** 
	 * @brief Initialize the GL_WIN extension group.
	 */
	void initializeGL_WIN();

	/** 
	 * @brief Initialize the Not_in_OpenGL_Extension_Registry extension group.
	 */
	void initializeNot_in_OpenGL_Extension_Registry();



	/** 
	 * @defgroup	internal_GL_3DFX Internal GL_3DFX (3 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_APPLE Internal GL_APPLE (8 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_ARB Internal GL_ARB (35 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_ATI Internal GL_ATI (14 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_EXT Internal GL_EXT (58 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_FfdMaskSGIX Internal GL_FfdMaskSGIX (0 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_GREMEDY Internal GL_GREMEDY (1 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_HP Internal GL_HP (4 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_IBM Internal GL_IBM (5 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_INGR Internal GL_INGR (2 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_INTEL Internal GL_INTEL (2 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_MESA Internal GL_MESA (4 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_NV Internal GL_NV (36 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_OES Internal GL_OES (1 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_OML Internal GL_OML (3 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_PGI Internal GL_PGI (2 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_REND Internal GL_REND (1 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_S3 Internal GL_S3 (1 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_SGI Internal GL_SGI (3 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_SGIS Internal GL_SGIS (13 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_SGIX Internal GL_SGIX (27 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_SUN Internal GL_SUN (6 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_SUNX Internal GL_SUNX (1 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_VERSION Internal GL_VERSION (0 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_GL_WIN Internal GL_WIN (2 extensions found).
	 * @ingroup	g_internalGroups
	 */

	/** 
	 * @defgroup	internal_Not_in_OpenGL_Extension_Registry Internal Not_in_OpenGL_Extension_Registry (30 extensions found).
	 * @ingroup	g_internalGroups
	 */



	/**
	 * @name internal_GL_3DFX_multisample
	 *	Extension number in OpenGL registry : 207
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/3DFX/3dfx_multisample.txt
	 *	@ingroup internal_GL_3DFX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_3DFX_multisample is supported, false otherwise.
	 */
	bool isGL_3DFX_multisample;

	//@}


	/**
	 * @name internal_GL_3DFX_tbuffer
	 *	Extension number in OpenGL registry : 208
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/3DFX/tbuffer.txt
	 *	@ingroup internal_GL_3DFX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_3DFX_tbuffer is supported, false otherwise.
	 */
	bool isGL_3DFX_tbuffer;

	/**
	* @brief void glTbufferMask3DFX( GLuint mask );
	*/
	PFNGLTBUFFERMASK3DFXPROC                                      glTbufferMask3DFX;

	//@}


	/**
	 * @name internal_GL_3DFX_texture_compression_FXT1
	 *	Extension number in OpenGL registry : 206
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/3DFX/texture_compression_FXT1.txt
	 *	@ingroup internal_GL_3DFX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_3DFX_texture_compression_FXT1 is supported, false otherwise.
	 */
	bool isGL_3DFX_texture_compression_FXT1;

	//@}


	/**
	 * @name internal_GL_APPLE_client_storage
	 *	Extension number in OpenGL registry : 270
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/client_storage.txt
	 *	@ingroup internal_GL_APPLE
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_APPLE_client_storage is supported, false otherwise.
	 */
	bool isGL_APPLE_client_storage;

	//@}


	/**
	 * @name internal_GL_APPLE_element_array
	 *	Extension number in OpenGL registry : 271
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/element_array.txt
	 *	@ingroup internal_GL_APPLE
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_APPLE_element_array is supported, false otherwise.
	 */
	bool isGL_APPLE_element_array;

	/**
	* @brief void glElementPointerAPPLE( GLenum type, const GLvoid *pointer );
	*/
	PFNGLELEMENTPOINTERAPPLEPROC                                  glElementPointerAPPLE;

	/**
	* @brief void glDrawElementArrayAPPLE( GLenum mode, GLint first, GLsizei count );
	*/
	PFNGLDRAWELEMENTARRAYAPPLEPROC                                glDrawElementArrayAPPLE;

	/**
	* @brief void glDrawRangeElementArrayAPPLE( GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count );
	*/
	PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC                           glDrawRangeElementArrayAPPLE;

	/**
	* @brief void glMultiDrawElementArrayAPPLE( GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount );
	*/
	PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC                           glMultiDrawElementArrayAPPLE;

	/**
	* @brief void glMultiDrawRangeElementArrayAPPLE( GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount );
	*/
	PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC                      glMultiDrawRangeElementArrayAPPLE;

	//@}


	/**
	 * @name internal_GL_APPLE_fence
	 *	Extension number in OpenGL registry : 272
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/fence.txt
	 *	@ingroup internal_GL_APPLE
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_APPLE_fence is supported, false otherwise.
	 */
	bool isGL_APPLE_fence;

	/**
	* @brief void glGenFencesAPPLE( GLsizei n, GLuint *fences );
	*/
	PFNGLGENFENCESAPPLEPROC                                       glGenFencesAPPLE;

	/**
	* @brief void glDeleteFencesAPPLE( GLsizei n, const GLuint *fences );
	*/
	PFNGLDELETEFENCESAPPLEPROC                                    glDeleteFencesAPPLE;

	/**
	* @brief void glSetFenceAPPLE( GLuint fence );
	*/
	PFNGLSETFENCEAPPLEPROC                                        glSetFenceAPPLE;

	/**
	* @brief GLboolean glIsFenceAPPLE( GLuint fence );
	*/
	PFNGLISFENCEAPPLEPROC                                         glIsFenceAPPLE;

	/**
	* @brief GLboolean glTestFenceAPPLE( GLuint fence );
	*/
	PFNGLTESTFENCEAPPLEPROC                                       glTestFenceAPPLE;

	/**
	* @brief void glFinishFenceAPPLE( GLuint fence );
	*/
	PFNGLFINISHFENCEAPPLEPROC                                     glFinishFenceAPPLE;

	/**
	* @brief GLboolean glTestObjectAPPLE( GLenum object, GLuint name );
	*/
	PFNGLTESTOBJECTAPPLEPROC                                      glTestObjectAPPLE;

	/**
	* @brief void glFinishObjectAPPLE( GLenum object, GLint name );
	*/
	PFNGLFINISHOBJECTAPPLEPROC                                    glFinishObjectAPPLE;

	//@}


	/**
	 * @name internal_GL_APPLE_specular_vector
	 *	Extension number in OpenGL registry : 159
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/specular_vector.txt
	 *	@ingroup internal_GL_APPLE
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_APPLE_specular_vector is supported, false otherwise.
	 */
	bool isGL_APPLE_specular_vector;

	//@}


	/**
	 * @name internal_GL_APPLE_transform_hint
	 *	Extension number in OpenGL registry : 160
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/transform_hint.txt
	 *	@ingroup internal_GL_APPLE
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_APPLE_transform_hint is supported, false otherwise.
	 */
	bool isGL_APPLE_transform_hint;

	//@}


	/**
	 * @name internal_GL_APPLE_vertex_array_object
	 *	Extension number in OpenGL registry : 273
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/vertex_array_object.txt
	 *	@ingroup internal_GL_APPLE
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_APPLE_vertex_array_object is supported, false otherwise.
	 */
	bool isGL_APPLE_vertex_array_object;

	/**
	* @brief void glBindVertexArrayAPPLE( GLuint array );
	*/
	PFNGLBINDVERTEXARRAYAPPLEPROC                                 glBindVertexArrayAPPLE;

	/**
	* @brief void glDeleteVertexArraysAPPLE( GLsizei n, const GLuint *arrays );
	*/
	PFNGLDELETEVERTEXARRAYSAPPLEPROC                              glDeleteVertexArraysAPPLE;

	/**
	* @brief void glGenVertexArraysAPPLE( GLsizei n, const GLuint *arrays );
	*/
	PFNGLGENVERTEXARRAYSAPPLEPROC                                 glGenVertexArraysAPPLE;

	/**
	* @brief GLboolean glIsVertexArrayAPPLE( GLuint array );
	*/
	PFNGLISVERTEXARRAYAPPLEPROC                                   glIsVertexArrayAPPLE;

	//@}


	/**
	 * @name internal_GL_APPLE_vertex_array_range
	 *	Extension number in OpenGL registry : 274
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/vertex_array_range.txt
	 *	@ingroup internal_GL_APPLE
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_APPLE_vertex_array_range is supported, false otherwise.
	 */
	bool isGL_APPLE_vertex_array_range;

	/**
	* @brief void glVertexArrayRangeAPPLE( GLsizei length, GLvoid *pointer );
	*/
	PFNGLVERTEXARRAYRANGEAPPLEPROC                                glVertexArrayRangeAPPLE;

	/**
	* @brief void glFlushVertexArrayRangeAPPLE( GLsizei length, GLvoid *pointer );
	*/
	PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC                           glFlushVertexArrayRangeAPPLE;

	/**
	* @brief void glVertexArrayParameteriAPPLE( GLenum pname, GLint param );
	*/
	PFNGLVERTEXARRAYPARAMETERIAPPLEPROC                           glVertexArrayParameteriAPPLE;

	//@}


	/**
	 * @name internal_GL_APPLE_ycbcr_422
	 *	Extension number in OpenGL registry : 275
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/APPLE/ycbcr_422.txt
	 *	@ingroup internal_GL_APPLE
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_APPLE_ycbcr_422 is supported, false otherwise.
	 */
	bool isGL_APPLE_ycbcr_422;

	//@}


	/**
	 * @name internal_GL_ARB_color_buffer_float
	 *	Extension number in OpenGL registry : 39
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/color_buffer_float.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_color_buffer_float is supported, false otherwise.
	 */
	bool isGL_ARB_color_buffer_float;

	/**
	* @brief void glClampColorARB( GLenum target, GLenum clamp );
	*/
	PFNGLCLAMPCOLORARBPROC                                        glClampColorARB;

	//@}


	/**
	 * @name internal_GL_ARB_depth_texture
	 *	Extension number in OpenGL registry : 22
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/depth_texture.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_depth_texture is supported, false otherwise.
	 */
	bool isGL_ARB_depth_texture;

	//@}


	/**
	 * @name internal_GL_ARB_draw_buffers
	 *	Extension number in OpenGL registry : 37
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/draw_buffers.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_draw_buffers is supported, false otherwise.
	 */
	bool isGL_ARB_draw_buffers;

	/**
	* @brief void glDrawBuffersARB( GLsizei n, const GLenum *bufs );
	*/
	PFNGLDRAWBUFFERSARBPROC                                       glDrawBuffersARB;

	//@}


	/**
	 * @name internal_GL_ARB_fragment_program
	 *	Extension number in OpenGL registry : 27
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/fragment_program.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_fragment_program is supported, false otherwise.
	 */
	bool isGL_ARB_fragment_program;

	//@}


	/**
	 * @name internal_GL_ARB_fragment_program_shadow
	 *	Extension number in OpenGL registry : 36
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/fragment_program_shadow.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_fragment_program_shadow is supported, false otherwise.
	 */
	bool isGL_ARB_fragment_program_shadow;

	//@}


	/**
	 * @name internal_GL_ARB_fragment_shader
	 *	Extension number in OpenGL registry : 32
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/fragment_shader.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_fragment_shader is supported, false otherwise.
	 */
	bool isGL_ARB_fragment_shader;

	//@}


	/**
	 * @name internal_GL_ARB_half_float_pixel
	 *	Extension number in OpenGL registry : 40
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/half_float_pixel.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_half_float_pixel is supported, false otherwise.
	 */
	bool isGL_ARB_half_float_pixel;

	//@}


	/**	
	 * @name GL_ARB_imaging
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_imaging is supported, false otherwise.
	 */
	bool isGL_ARB_imaging;

	//@}


	/**
	 * @name internal_GL_ARB_matrix_palette
	 *	Extension number in OpenGL registry : 16
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/matrix_palette.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_matrix_palette is supported, false otherwise.
	 */
	bool isGL_ARB_matrix_palette;

	/**
	* @brief void glCurrentPaletteMatrixARB( GLint index );
	*/
	PFNGLCURRENTPALETTEMATRIXARBPROC                              glCurrentPaletteMatrixARB;

	/**
	* @brief void glMatrixIndexubvARB( GLint size, const GLubyte *indices );
	*/
	PFNGLMATRIXINDEXUBVARBPROC                                    glMatrixIndexubvARB;

	/**
	* @brief void glMatrixIndexusvARB( GLint size, const GLushort *indices );
	*/
	PFNGLMATRIXINDEXUSVARBPROC                                    glMatrixIndexusvARB;

	/**
	* @brief void glMatrixIndexuivARB( GLint size, const GLuint *indices );
	*/
	PFNGLMATRIXINDEXUIVARBPROC                                    glMatrixIndexuivARB;

	/**
	* @brief void glMatrixIndexPointerARB( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLMATRIXINDEXPOINTERARBPROC                                glMatrixIndexPointerARB;

	//@}


	/**
	 * @name internal_GL_ARB_multisample
	 *	Extension number in OpenGL registry : 5
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/multisample.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_multisample is supported, false otherwise.
	 */
	bool isGL_ARB_multisample;

	/**
	* @brief void glSampleCoverageARB( GLclampf value, GLboolean invert );
	*/
	PFNGLSAMPLECOVERAGEARBPROC                                    glSampleCoverageARB;

	//@}


	/**
	 * @name internal_GL_ARB_multitexture
	 *	Extension number in OpenGL registry : 1
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/multitexture.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_multitexture is supported, false otherwise.
	 */
	bool isGL_ARB_multitexture;

	/**
	* @brief void glActiveTextureARB( GLenum texture );
	*/
	PFNGLACTIVETEXTUREARBPROC                                     glActiveTextureARB;

	/**
	* @brief void glClientActiveTextureARB( GLenum texture );
	*/
	PFNGLCLIENTACTIVETEXTUREARBPROC                               glClientActiveTextureARB;

	/**
	* @brief void glMultiTexCoord1dARB( GLenum target, GLdouble s );
	*/
	PFNGLMULTITEXCOORD1DARBPROC                                   glMultiTexCoord1dARB;

	/**
	* @brief void glMultiTexCoord1dvARB( GLenum target, const GLdouble *v );
	*/
	PFNGLMULTITEXCOORD1DVARBPROC                                  glMultiTexCoord1dvARB;

	/**
	* @brief void glMultiTexCoord1fARB( GLenum target, GLfloat s );
	*/
	PFNGLMULTITEXCOORD1FARBPROC                                   glMultiTexCoord1fARB;

	/**
	* @brief void glMultiTexCoord1fvARB( GLenum target, const GLfloat *v );
	*/
	PFNGLMULTITEXCOORD1FVARBPROC                                  glMultiTexCoord1fvARB;

	/**
	* @brief void glMultiTexCoord1iARB( GLenum target, GLint s );
	*/
	PFNGLMULTITEXCOORD1IARBPROC                                   glMultiTexCoord1iARB;

	/**
	* @brief void glMultiTexCoord1ivARB( GLenum target, const GLint *v );
	*/
	PFNGLMULTITEXCOORD1IVARBPROC                                  glMultiTexCoord1ivARB;

	/**
	* @brief void glMultiTexCoord1sARB( GLenum target, GLshort s );
	*/
	PFNGLMULTITEXCOORD1SARBPROC                                   glMultiTexCoord1sARB;

	/**
	* @brief void glMultiTexCoord1svARB( GLenum target, const GLshort *v );
	*/
	PFNGLMULTITEXCOORD1SVARBPROC                                  glMultiTexCoord1svARB;

	/**
	* @brief void glMultiTexCoord2dARB( GLenum target, GLdouble s, GLdouble t );
	*/
	PFNGLMULTITEXCOORD2DARBPROC                                   glMultiTexCoord2dARB;

	/**
	* @brief void glMultiTexCoord2dvARB( GLenum target, const GLdouble *v );
	*/
	PFNGLMULTITEXCOORD2DVARBPROC                                  glMultiTexCoord2dvARB;

	/**
	* @brief void glMultiTexCoord2fARB( GLenum target, GLfloat s, GLfloat t );
	*/
	PFNGLMULTITEXCOORD2FARBPROC                                   glMultiTexCoord2fARB;

	/**
	* @brief void glMultiTexCoord2fvARB( GLenum target, const GLfloat *v );
	*/
	PFNGLMULTITEXCOORD2FVARBPROC                                  glMultiTexCoord2fvARB;

	/**
	* @brief void glMultiTexCoord2iARB( GLenum target, GLint s, GLint t );
	*/
	PFNGLMULTITEXCOORD2IARBPROC                                   glMultiTexCoord2iARB;

	/**
	* @brief void glMultiTexCoord2ivARB( GLenum target, const GLint *v );
	*/
	PFNGLMULTITEXCOORD2IVARBPROC                                  glMultiTexCoord2ivARB;

	/**
	* @brief void glMultiTexCoord2sARB( GLenum target, GLshort s, GLshort t );
	*/
	PFNGLMULTITEXCOORD2SARBPROC                                   glMultiTexCoord2sARB;

	/**
	* @brief void glMultiTexCoord2svARB( GLenum target, const GLshort *v );
	*/
	PFNGLMULTITEXCOORD2SVARBPROC                                  glMultiTexCoord2svARB;

	/**
	* @brief void glMultiTexCoord3dARB( GLenum target, GLdouble s, GLdouble t, GLdouble r );
	*/
	PFNGLMULTITEXCOORD3DARBPROC                                   glMultiTexCoord3dARB;

	/**
	* @brief void glMultiTexCoord3dvARB( GLenum target, const GLdouble *v );
	*/
	PFNGLMULTITEXCOORD3DVARBPROC                                  glMultiTexCoord3dvARB;

	/**
	* @brief void glMultiTexCoord3fARB( GLenum target, GLfloat s, GLfloat t, GLfloat r );
	*/
	PFNGLMULTITEXCOORD3FARBPROC                                   glMultiTexCoord3fARB;

	/**
	* @brief void glMultiTexCoord3fvARB( GLenum target, const GLfloat *v );
	*/
	PFNGLMULTITEXCOORD3FVARBPROC                                  glMultiTexCoord3fvARB;

	/**
	* @brief void glMultiTexCoord3iARB( GLenum target, GLint s, GLint t, GLint r );
	*/
	PFNGLMULTITEXCOORD3IARBPROC                                   glMultiTexCoord3iARB;

	/**
	* @brief void glMultiTexCoord3ivARB( GLenum target, const GLint *v );
	*/
	PFNGLMULTITEXCOORD3IVARBPROC                                  glMultiTexCoord3ivARB;

	/**
	* @brief void glMultiTexCoord3sARB( GLenum target, GLshort s, GLshort t, GLshort r );
	*/
	PFNGLMULTITEXCOORD3SARBPROC                                   glMultiTexCoord3sARB;

	/**
	* @brief void glMultiTexCoord3svARB( GLenum target, const GLshort *v );
	*/
	PFNGLMULTITEXCOORD3SVARBPROC                                  glMultiTexCoord3svARB;

	/**
	* @brief void glMultiTexCoord4dARB( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q );
	*/
	PFNGLMULTITEXCOORD4DARBPROC                                   glMultiTexCoord4dARB;

	/**
	* @brief void glMultiTexCoord4dvARB( GLenum target, const GLdouble *v );
	*/
	PFNGLMULTITEXCOORD4DVARBPROC                                  glMultiTexCoord4dvARB;

	/**
	* @brief void glMultiTexCoord4fARB( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q );
	*/
	PFNGLMULTITEXCOORD4FARBPROC                                   glMultiTexCoord4fARB;

	/**
	* @brief void glMultiTexCoord4fvARB( GLenum target, const GLfloat *v );
	*/
	PFNGLMULTITEXCOORD4FVARBPROC                                  glMultiTexCoord4fvARB;

	/**
	* @brief void glMultiTexCoord4iARB( GLenum target, GLint s, GLint t, GLint r, GLint q );
	*/
	PFNGLMULTITEXCOORD4IARBPROC                                   glMultiTexCoord4iARB;

	/**
	* @brief void glMultiTexCoord4ivARB( GLenum target, const GLint *v );
	*/
	PFNGLMULTITEXCOORD4IVARBPROC                                  glMultiTexCoord4ivARB;

	/**
	* @brief void glMultiTexCoord4sARB( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q );
	*/
	PFNGLMULTITEXCOORD4SARBPROC                                   glMultiTexCoord4sARB;

	/**
	* @brief void glMultiTexCoord4svARB( GLenum target, const GLshort *v );
	*/
	PFNGLMULTITEXCOORD4SVARBPROC                                  glMultiTexCoord4svARB;

	//@}


	/**
	 * @name internal_GL_ARB_occlusion_query
	 *	Extension number in OpenGL registry : 29
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/occlusion_query.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_occlusion_query is supported, false otherwise.
	 */
	bool isGL_ARB_occlusion_query;

	/**
	* @brief void glGenQueriesARB( GLsizei n, GLuint *ids );
	*/
	PFNGLGENQUERIESARBPROC                                        glGenQueriesARB;

	/**
	* @brief void glDeleteQueriesARB( GLsizei n, const GLuint *ids );
	*/
	PFNGLDELETEQUERIESARBPROC                                     glDeleteQueriesARB;

	/**
	* @brief GLboolean glIsQueryARB( GLuint id );
	*/
	PFNGLISQUERYARBPROC                                           glIsQueryARB;

	/**
	* @brief void glBeginQueryARB( GLenum target, GLuint id );
	*/
	PFNGLBEGINQUERYARBPROC                                        glBeginQueryARB;

	/**
	* @brief void glEndQueryARB( GLenum target );
	*/
	PFNGLENDQUERYARBPROC                                          glEndQueryARB;

	/**
	* @brief void glGetQueryivARB( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETQUERYIVARBPROC                                        glGetQueryivARB;

	/**
	* @brief void glGetQueryObjectivARB( GLuint id, GLenum pname, GLint *params );
	*/
	PFNGLGETQUERYOBJECTIVARBPROC                                  glGetQueryObjectivARB;

	/**
	* @brief void glGetQueryObjectuivARB( GLuint id, GLenum pname, GLuint *params );
	*/
	PFNGLGETQUERYOBJECTUIVARBPROC                                 glGetQueryObjectuivARB;

	//@}


	/**
	 * @name internal_GL_ARB_pixel_buffer_object
	 *	Extension number in OpenGL registry : 42
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/pixel_buffer_object.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_pixel_buffer_object is supported, false otherwise.
	 */
	bool isGL_ARB_pixel_buffer_object;

	//@}


	/**
	 * @name internal_GL_ARB_point_parameters
	 *	Extension number in OpenGL registry : 14
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/point_parameters.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_point_parameters is supported, false otherwise.
	 */
	bool isGL_ARB_point_parameters;

	/**
	* @brief void glPointParameterfARB( GLenum pname, GLfloat param );
	*/
	PFNGLPOINTPARAMETERFARBPROC                                   glPointParameterfARB;

	/**
	* @brief void glPointParameterfvARB( GLenum pname, const GLfloat *params );
	*/
	PFNGLPOINTPARAMETERFVARBPROC                                  glPointParameterfvARB;

	//@}


	/**
	 * @name internal_GL_ARB_point_sprite
	 *	Extension number in OpenGL registry : 35
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/point_sprite.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_point_sprite is supported, false otherwise.
	 */
	bool isGL_ARB_point_sprite;

	//@}


	/**
	 * @name internal_GL_ARB_shader_objects
	 *	Extension number in OpenGL registry : 30
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/shader_objects.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_shader_objects is supported, false otherwise.
	 */
	bool isGL_ARB_shader_objects;

	/**
	* @brief void glDeleteObjectARB( GLhandleARB obj );
	*/
	PFNGLDELETEOBJECTARBPROC                                      glDeleteObjectARB;

	/**
	* @brief GLhandleARB glGetHandleARB( GLenum pname );
	*/
	PFNGLGETHANDLEARBPROC                                         glGetHandleARB;

	/**
	* @brief void glDetachObjectARB( GLhandleARB containerObj, GLhandleARB attachedObj );
	*/
	PFNGLDETACHOBJECTARBPROC                                      glDetachObjectARB;

	/**
	* @brief GLhandleARB glCreateShaderObjectARB( GLenum shaderType );
	*/
	PFNGLCREATESHADEROBJECTARBPROC                                glCreateShaderObjectARB;

	/**
	* @brief void glShaderSourceARB( GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length );
	*/
	PFNGLSHADERSOURCEARBPROC                                      glShaderSourceARB;

	/**
	* @brief void glCompileShaderARB( GLhandleARB shaderObj );
	*/
	PFNGLCOMPILESHADERARBPROC                                     glCompileShaderARB;

	/**
	* @brief GLhandleARB glCreateProgramObjectARB( void );
	*/
	PFNGLCREATEPROGRAMOBJECTARBPROC                               glCreateProgramObjectARB;

	/**
	* @brief void glAttachObjectARB( GLhandleARB containerObj, GLhandleARB obj );
	*/
	PFNGLATTACHOBJECTARBPROC                                      glAttachObjectARB;

	/**
	* @brief void glLinkProgramARB( GLhandleARB programObj );
	*/
	PFNGLLINKPROGRAMARBPROC                                       glLinkProgramARB;

	/**
	* @brief void glUseProgramObjectARB( GLhandleARB programObj );
	*/
	PFNGLUSEPROGRAMOBJECTARBPROC                                  glUseProgramObjectARB;

	/**
	* @brief void glValidateProgramARB( GLhandleARB programObj );
	*/
	PFNGLVALIDATEPROGRAMARBPROC                                   glValidateProgramARB;

	/**
	* @brief void glUniform1fARB( GLint location, GLfloat v0 );
	*/
	PFNGLUNIFORM1FARBPROC                                         glUniform1fARB;

	/**
	* @brief void glUniform2fARB( GLint location, GLfloat v0, GLfloat v1 );
	*/
	PFNGLUNIFORM2FARBPROC                                         glUniform2fARB;

	/**
	* @brief void glUniform3fARB( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );
	*/
	PFNGLUNIFORM3FARBPROC                                         glUniform3fARB;

	/**
	* @brief void glUniform4fARB( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );
	*/
	PFNGLUNIFORM4FARBPROC                                         glUniform4fARB;

	/**
	* @brief void glUniform1iARB( GLint location, GLint v0 );
	*/
	PFNGLUNIFORM1IARBPROC                                         glUniform1iARB;

	/**
	* @brief void glUniform2iARB( GLint location, GLint v0, GLint v1 );
	*/
	PFNGLUNIFORM2IARBPROC                                         glUniform2iARB;

	/**
	* @brief void glUniform3iARB( GLint location, GLint v0, GLint v1, GLint v2 );
	*/
	PFNGLUNIFORM3IARBPROC                                         glUniform3iARB;

	/**
	* @brief void glUniform4iARB( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );
	*/
	PFNGLUNIFORM4IARBPROC                                         glUniform4iARB;

	/**
	* @brief void glUniform1fvARB( GLint location, GLsizei count, const GLfloat *value );
	*/
	PFNGLUNIFORM1FVARBPROC                                        glUniform1fvARB;

	/**
	* @brief void glUniform2fvARB( GLint location, GLsizei count, const GLfloat *value );
	*/
	PFNGLUNIFORM2FVARBPROC                                        glUniform2fvARB;

	/**
	* @brief void glUniform3fvARB( GLint location, GLsizei count, const GLfloat *value );
	*/
	PFNGLUNIFORM3FVARBPROC                                        glUniform3fvARB;

	/**
	* @brief void glUniform4fvARB( GLint location, GLsizei count, const GLfloat *value );
	*/
	PFNGLUNIFORM4FVARBPROC                                        glUniform4fvARB;

	/**
	* @brief void glUniform1ivARB( GLint location, GLsizei count, const GLint *value );
	*/
	PFNGLUNIFORM1IVARBPROC                                        glUniform1ivARB;

	/**
	* @brief void glUniform2ivARB( GLint location, GLsizei count, const GLint *value );
	*/
	PFNGLUNIFORM2IVARBPROC                                        glUniform2ivARB;

	/**
	* @brief void glUniform3ivARB( GLint location, GLsizei count, const GLint *value );
	*/
	PFNGLUNIFORM3IVARBPROC                                        glUniform3ivARB;

	/**
	* @brief void glUniform4ivARB( GLint location, GLsizei count, const GLint *value );
	*/
	PFNGLUNIFORM4IVARBPROC                                        glUniform4ivARB;

	/**
	* @brief void glUniformMatrix2fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
	*/
	PFNGLUNIFORMMATRIX2FVARBPROC                                  glUniformMatrix2fvARB;

	/**
	* @brief void glUniformMatrix3fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
	*/
	PFNGLUNIFORMMATRIX3FVARBPROC                                  glUniformMatrix3fvARB;

	/**
	* @brief void glUniformMatrix4fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
	*/
	PFNGLUNIFORMMATRIX4FVARBPROC                                  glUniformMatrix4fvARB;

	/**
	* @brief void glGetObjectParameterfvARB( GLhandleARB obj, GLenum pname, GLfloat *params );
	*/
	PFNGLGETOBJECTPARAMETERFVARBPROC                              glGetObjectParameterfvARB;

	/**
	* @brief void glGetObjectParameterivARB( GLhandleARB obj, GLenum pname, GLint *params );
	*/
	PFNGLGETOBJECTPARAMETERIVARBPROC                              glGetObjectParameterivARB;

	/**
	* @brief void glGetInfoLogARB( GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog );
	*/
	PFNGLGETINFOLOGARBPROC                                        glGetInfoLogARB;

	/**
	* @brief void glGetAttachedObjectsARB( GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj );
	*/
	PFNGLGETATTACHEDOBJECTSARBPROC                                glGetAttachedObjectsARB;

	/**
	* @brief GLint glGetUniformLocationARB( GLhandleARB programObj, const GLcharARB *name );
	*/
	PFNGLGETUNIFORMLOCATIONARBPROC                                glGetUniformLocationARB;

	/**
	* @brief void glGetActiveUniformARB( GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name );
	*/
	PFNGLGETACTIVEUNIFORMARBPROC                                  glGetActiveUniformARB;

	/**
	* @brief void glGetUniformfvARB( GLhandleARB programObj, GLint location, GLfloat *params );
	*/
	PFNGLGETUNIFORMFVARBPROC                                      glGetUniformfvARB;

	/**
	* @brief void glGetUniformivARB( GLhandleARB programObj, GLint location, GLint *params );
	*/
	PFNGLGETUNIFORMIVARBPROC                                      glGetUniformivARB;

	/**
	* @brief void glGetShaderSourceARB( GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source );
	*/
	PFNGLGETSHADERSOURCEARBPROC                                   glGetShaderSourceARB;

	//@}


	/**
	 * @name internal_GL_ARB_shading_language_100
	 *	Extension number in OpenGL registry : 33
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/shading_language_100.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_shading_language_100 is supported, false otherwise.
	 */
	bool isGL_ARB_shading_language_100;

	//@}


	/**
	 * @name internal_GL_ARB_shadow
	 *	Extension number in OpenGL registry : 23
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/shadow.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_shadow is supported, false otherwise.
	 */
	bool isGL_ARB_shadow;

	//@}


	/**
	 * @name internal_GL_ARB_shadow_ambient
	 *	Extension number in OpenGL registry : 24
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/shadow_ambient.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_shadow_ambient is supported, false otherwise.
	 */
	bool isGL_ARB_shadow_ambient;

	//@}


	/**
	 * @name internal_GL_ARB_texture_border_clamp
	 *	Extension number in OpenGL registry : 13
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_border_clamp.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_border_clamp is supported, false otherwise.
	 */
	bool isGL_ARB_texture_border_clamp;

	//@}


	/**
	 * @name internal_GL_ARB_texture_compression
	 *	Extension number in OpenGL registry : 12
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_compression.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_compression is supported, false otherwise.
	 */
	bool isGL_ARB_texture_compression;

	/**
	* @brief void glCompressedTexImage3DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXIMAGE3DARBPROC                              glCompressedTexImage3DARB;

	/**
	* @brief void glCompressedTexImage2DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXIMAGE2DARBPROC                              glCompressedTexImage2DARB;

	/**
	* @brief void glCompressedTexImage1DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXIMAGE1DARBPROC                              glCompressedTexImage1DARB;

	/**
	* @brief void glCompressedTexSubImage3DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC                           glCompressedTexSubImage3DARB;

	/**
	* @brief void glCompressedTexSubImage2DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC                           glCompressedTexSubImage2DARB;

	/**
	* @brief void glCompressedTexSubImage1DARB( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC                           glCompressedTexSubImage1DARB;

	/**
	* @brief void glGetCompressedTexImageARB( GLenum target, GLint level, GLvoid *img );
	*/
	PFNGLGETCOMPRESSEDTEXIMAGEARBPROC                             glGetCompressedTexImageARB;

	//@}


	/**
	 * @name internal_GL_ARB_texture_cube_map
	 *	Extension number in OpenGL registry : 7
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_cube_map.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_cube_map is supported, false otherwise.
	 */
	bool isGL_ARB_texture_cube_map;

	//@}


	/**
	 * @name internal_GL_ARB_texture_env_add
	 *	Extension number in OpenGL registry : 6
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_env_add.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_env_add is supported, false otherwise.
	 */
	bool isGL_ARB_texture_env_add;

	//@}


	/**
	 * @name internal_GL_ARB_texture_env_combine
	 *	Extension number in OpenGL registry : 17
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_env_combine.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_env_combine is supported, false otherwise.
	 */
	bool isGL_ARB_texture_env_combine;

	//@}


	/**
	 * @name internal_GL_ARB_texture_env_crossbar
	 *	Extension number in OpenGL registry : 18
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_env_crossbar.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_env_crossbar is supported, false otherwise.
	 */
	bool isGL_ARB_texture_env_crossbar;

	//@}


	/**
	 * @name internal_GL_ARB_texture_env_dot3
	 *	Extension number in OpenGL registry : 19
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_env_dot3.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_env_dot3 is supported, false otherwise.
	 */
	bool isGL_ARB_texture_env_dot3;

	//@}


	/**
	 * @name internal_GL_ARB_texture_float
	 *	Extension number in OpenGL registry : 41
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_float.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_float is supported, false otherwise.
	 */
	bool isGL_ARB_texture_float;

	//@}


	/**
	 * @name internal_GL_ARB_texture_mirrored_repeat
	 *	Extension number in OpenGL registry : 21
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_mirrored_repeat.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_mirrored_repeat is supported, false otherwise.
	 */
	bool isGL_ARB_texture_mirrored_repeat;

	//@}


	/**
	 * @name internal_GL_ARB_texture_non_power_of_two
	 *	Extension number in OpenGL registry : 34
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_non_power_of_two.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_non_power_of_two is supported, false otherwise.
	 */
	bool isGL_ARB_texture_non_power_of_two;

	//@}


	/**
	 * @name internal_GL_ARB_texture_rectangle
	 *	Extension number in OpenGL registry : 38
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/texture_rectangle.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_rectangle is supported, false otherwise.
	 */
	bool isGL_ARB_texture_rectangle;

	//@}


	/**
	 * @name internal_GL_ARB_transpose_matrix
	 *	Extension number in OpenGL registry : 3
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/transpose_matrix.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_transpose_matrix is supported, false otherwise.
	 */
	bool isGL_ARB_transpose_matrix;

	/**
	* @brief void glLoadTransposeMatrixfARB( const GLfloat *m );
	*/
	PFNGLLOADTRANSPOSEMATRIXFARBPROC                              glLoadTransposeMatrixfARB;

	/**
	* @brief void glLoadTransposeMatrixdARB( const GLdouble *m );
	*/
	PFNGLLOADTRANSPOSEMATRIXDARBPROC                              glLoadTransposeMatrixdARB;

	/**
	* @brief void glMultTransposeMatrixfARB( const GLfloat *m );
	*/
	PFNGLMULTTRANSPOSEMATRIXFARBPROC                              glMultTransposeMatrixfARB;

	/**
	* @brief void glMultTransposeMatrixdARB( const GLdouble *m );
	*/
	PFNGLMULTTRANSPOSEMATRIXDARBPROC                              glMultTransposeMatrixdARB;

	//@}


	/**
	 * @name internal_GL_ARB_vertex_blend
	 *	Extension number in OpenGL registry : 15
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/vertex_blend.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_blend is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_blend;

	/**
	* @brief void glWeightbvARB( GLint size, const GLbyte *weights );
	*/
	PFNGLWEIGHTBVARBPROC                                          glWeightbvARB;

	/**
	* @brief void glWeightsvARB( GLint size, const GLshort *weights );
	*/
	PFNGLWEIGHTSVARBPROC                                          glWeightsvARB;

	/**
	* @brief void glWeightivARB( GLint size, const GLint *weights );
	*/
	PFNGLWEIGHTIVARBPROC                                          glWeightivARB;

	/**
	* @brief void glWeightfvARB( GLint size, const GLfloat *weights );
	*/
	PFNGLWEIGHTFVARBPROC                                          glWeightfvARB;

	/**
	* @brief void glWeightdvARB( GLint size, const GLdouble *weights );
	*/
	PFNGLWEIGHTDVARBPROC                                          glWeightdvARB;

	/**
	* @brief void glWeightubvARB( GLint size, const GLubyte *weights );
	*/
	PFNGLWEIGHTUBVARBPROC                                         glWeightubvARB;

	/**
	* @brief void glWeightusvARB( GLint size, const GLushort *weights );
	*/
	PFNGLWEIGHTUSVARBPROC                                         glWeightusvARB;

	/**
	* @brief void glWeightuivARB( GLint size, const GLuint *weights );
	*/
	PFNGLWEIGHTUIVARBPROC                                         glWeightuivARB;

	/**
	* @brief void glWeightPointerARB( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLWEIGHTPOINTERARBPROC                                     glWeightPointerARB;

	/**
	* @brief void glVertexBlendARB( GLint count );
	*/
	PFNGLVERTEXBLENDARBPROC                                       glVertexBlendARB;

	//@}


	/**
	 * @name internal_GL_ARB_vertex_buffer_object
	 *	Extension number in OpenGL registry : 28
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/vertex_buffer_object.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_buffer_object is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_buffer_object;

	/**
	* @brief void glBindBufferARB( GLenum target, GLuint buffer );
	*/
	PFNGLBINDBUFFERARBPROC                                        glBindBufferARB;

	/**
	* @brief void glDeleteBuffersARB( GLsizei n, const GLuint *buffers );
	*/
	PFNGLDELETEBUFFERSARBPROC                                     glDeleteBuffersARB;

	/**
	* @brief void glGenBuffersARB( GLsizei n, GLuint *buffers );
	*/
	PFNGLGENBUFFERSARBPROC                                        glGenBuffersARB;

	/**
	* @brief GLboolean glIsBufferARB( GLuint buffer );
	*/
	PFNGLISBUFFERARBPROC                                          glIsBufferARB;

	/**
	* @brief void glBufferDataARB( GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage );
	*/
	PFNGLBUFFERDATAARBPROC                                        glBufferDataARB;

	/**
	* @brief void glBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data );
	*/
	PFNGLBUFFERSUBDATAARBPROC                                     glBufferSubDataARB;

	/**
	* @brief void glGetBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data );
	*/
	PFNGLGETBUFFERSUBDATAARBPROC                                  glGetBufferSubDataARB;

	/**
	* @brief GLvoid* glMapBufferARB( GLenum target, GLenum access );
	*/
	PFNGLMAPBUFFERARBPROC                                         glMapBufferARB;

	/**
	* @brief GLboolean glUnmapBufferARB( GLenum target );
	*/
	PFNGLUNMAPBUFFERARBPROC                                       glUnmapBufferARB;

	/**
	* @brief void glGetBufferParameterivARB( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETBUFFERPARAMETERIVARBPROC                              glGetBufferParameterivARB;

	/**
	* @brief void glGetBufferPointervARB( GLenum target, GLenum pname, GLvoid* *params );
	*/
	PFNGLGETBUFFERPOINTERVARBPROC                                 glGetBufferPointervARB;

	//@}


	/**
	 * @name internal_GL_ARB_vertex_program
	 *	Extension number in OpenGL registry : 26
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/vertex_program.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_program is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_program;

	/**
	* @brief void glVertexAttrib1dARB( GLuint index, GLdouble x );
	*/
	PFNGLVERTEXATTRIB1DARBPROC                                    glVertexAttrib1dARB;

	/**
	* @brief void glVertexAttrib1dvARB( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB1DVARBPROC                                   glVertexAttrib1dvARB;

	/**
	* @brief void glVertexAttrib1fARB( GLuint index, GLfloat x );
	*/
	PFNGLVERTEXATTRIB1FARBPROC                                    glVertexAttrib1fARB;

	/**
	* @brief void glVertexAttrib1fvARB( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB1FVARBPROC                                   glVertexAttrib1fvARB;

	/**
	* @brief void glVertexAttrib1sARB( GLuint index, GLshort x );
	*/
	PFNGLVERTEXATTRIB1SARBPROC                                    glVertexAttrib1sARB;

	/**
	* @brief void glVertexAttrib1svARB( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB1SVARBPROC                                   glVertexAttrib1svARB;

	/**
	* @brief void glVertexAttrib2dARB( GLuint index, GLdouble x, GLdouble y );
	*/
	PFNGLVERTEXATTRIB2DARBPROC                                    glVertexAttrib2dARB;

	/**
	* @brief void glVertexAttrib2dvARB( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB2DVARBPROC                                   glVertexAttrib2dvARB;

	/**
	* @brief void glVertexAttrib2fARB( GLuint index, GLfloat x, GLfloat y );
	*/
	PFNGLVERTEXATTRIB2FARBPROC                                    glVertexAttrib2fARB;

	/**
	* @brief void glVertexAttrib2fvARB( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB2FVARBPROC                                   glVertexAttrib2fvARB;

	/**
	* @brief void glVertexAttrib2sARB( GLuint index, GLshort x, GLshort y );
	*/
	PFNGLVERTEXATTRIB2SARBPROC                                    glVertexAttrib2sARB;

	/**
	* @brief void glVertexAttrib2svARB( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB2SVARBPROC                                   glVertexAttrib2svARB;

	/**
	* @brief void glVertexAttrib3dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z );
	*/
	PFNGLVERTEXATTRIB3DARBPROC                                    glVertexAttrib3dARB;

	/**
	* @brief void glVertexAttrib3dvARB( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB3DVARBPROC                                   glVertexAttrib3dvARB;

	/**
	* @brief void glVertexAttrib3fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLVERTEXATTRIB3FARBPROC                                    glVertexAttrib3fARB;

	/**
	* @brief void glVertexAttrib3fvARB( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB3FVARBPROC                                   glVertexAttrib3fvARB;

	/**
	* @brief void glVertexAttrib3sARB( GLuint index, GLshort x, GLshort y, GLshort z );
	*/
	PFNGLVERTEXATTRIB3SARBPROC                                    glVertexAttrib3sARB;

	/**
	* @brief void glVertexAttrib3svARB( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB3SVARBPROC                                   glVertexAttrib3svARB;

	/**
	* @brief void glVertexAttrib4NbvARB( GLuint index, const GLbyte *v );
	*/
	PFNGLVERTEXATTRIB4NBVARBPROC                                  glVertexAttrib4NbvARB;

	/**
	* @brief void glVertexAttrib4NivARB( GLuint index, const GLint *v );
	*/
	PFNGLVERTEXATTRIB4NIVARBPROC                                  glVertexAttrib4NivARB;

	/**
	* @brief void glVertexAttrib4NsvARB( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB4NSVARBPROC                                  glVertexAttrib4NsvARB;

	/**
	* @brief void glVertexAttrib4NubARB( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );
	*/
	PFNGLVERTEXATTRIB4NUBARBPROC                                  glVertexAttrib4NubARB;

	/**
	* @brief void glVertexAttrib4NubvARB( GLuint index, const GLubyte *v );
	*/
	PFNGLVERTEXATTRIB4NUBVARBPROC                                 glVertexAttrib4NubvARB;

	/**
	* @brief void glVertexAttrib4NuivARB( GLuint index, const GLuint *v );
	*/
	PFNGLVERTEXATTRIB4NUIVARBPROC                                 glVertexAttrib4NuivARB;

	/**
	* @brief void glVertexAttrib4NusvARB( GLuint index, const GLushort *v );
	*/
	PFNGLVERTEXATTRIB4NUSVARBPROC                                 glVertexAttrib4NusvARB;

	/**
	* @brief void glVertexAttrib4bvARB( GLuint index, const GLbyte *v );
	*/
	PFNGLVERTEXATTRIB4BVARBPROC                                   glVertexAttrib4bvARB;

	/**
	* @brief void glVertexAttrib4dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	*/
	PFNGLVERTEXATTRIB4DARBPROC                                    glVertexAttrib4dARB;

	/**
	* @brief void glVertexAttrib4dvARB( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB4DVARBPROC                                   glVertexAttrib4dvARB;

	/**
	* @brief void glVertexAttrib4fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLVERTEXATTRIB4FARBPROC                                    glVertexAttrib4fARB;

	/**
	* @brief void glVertexAttrib4fvARB( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB4FVARBPROC                                   glVertexAttrib4fvARB;

	/**
	* @brief void glVertexAttrib4ivARB( GLuint index, const GLint *v );
	*/
	PFNGLVERTEXATTRIB4IVARBPROC                                   glVertexAttrib4ivARB;

	/**
	* @brief void glVertexAttrib4sARB( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );
	*/
	PFNGLVERTEXATTRIB4SARBPROC                                    glVertexAttrib4sARB;

	/**
	* @brief void glVertexAttrib4svARB( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB4SVARBPROC                                   glVertexAttrib4svARB;

	/**
	* @brief void glVertexAttrib4ubvARB( GLuint index, const GLubyte *v );
	*/
	PFNGLVERTEXATTRIB4UBVARBPROC                                  glVertexAttrib4ubvARB;

	/**
	* @brief void glVertexAttrib4uivARB( GLuint index, const GLuint *v );
	*/
	PFNGLVERTEXATTRIB4UIVARBPROC                                  glVertexAttrib4uivARB;

	/**
	* @brief void glVertexAttrib4usvARB( GLuint index, const GLushort *v );
	*/
	PFNGLVERTEXATTRIB4USVARBPROC                                  glVertexAttrib4usvARB;

	/**
	* @brief void glVertexAttribPointerARB( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLVERTEXATTRIBPOINTERARBPROC                               glVertexAttribPointerARB;

	/**
	* @brief void glEnableVertexAttribArrayARB( GLuint index );
	*/
	PFNGLENABLEVERTEXATTRIBARRAYARBPROC                           glEnableVertexAttribArrayARB;

	/**
	* @brief void glDisableVertexAttribArrayARB( GLuint index );
	*/
	PFNGLDISABLEVERTEXATTRIBARRAYARBPROC                          glDisableVertexAttribArrayARB;

	/**
	* @brief void glProgramStringARB( GLenum target, GLenum format, GLsizei len, const GLvoid *string );
	*/
	PFNGLPROGRAMSTRINGARBPROC                                     glProgramStringARB;

	/**
	* @brief void glBindProgramARB( GLenum target, GLuint program );
	*/
	PFNGLBINDPROGRAMARBPROC                                       glBindProgramARB;

	/**
	* @brief void glDeleteProgramsARB( GLsizei n, const GLuint *programs );
	*/
	PFNGLDELETEPROGRAMSARBPROC                                    glDeleteProgramsARB;

	/**
	* @brief void glGenProgramsARB( GLsizei n, GLuint *programs );
	*/
	PFNGLGENPROGRAMSARBPROC                                       glGenProgramsARB;

	/**
	* @brief void glProgramEnvParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	*/
	PFNGLPROGRAMENVPARAMETER4DARBPROC                             glProgramEnvParameter4dARB;

	/**
	* @brief void glProgramEnvParameter4dvARB( GLenum target, GLuint index, const GLdouble *params );
	*/
	PFNGLPROGRAMENVPARAMETER4DVARBPROC                            glProgramEnvParameter4dvARB;

	/**
	* @brief void glProgramEnvParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLPROGRAMENVPARAMETER4FARBPROC                             glProgramEnvParameter4fARB;

	/**
	* @brief void glProgramEnvParameter4fvARB( GLenum target, GLuint index, const GLfloat *params );
	*/
	PFNGLPROGRAMENVPARAMETER4FVARBPROC                            glProgramEnvParameter4fvARB;

	/**
	* @brief void glProgramLocalParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	*/
	PFNGLPROGRAMLOCALPARAMETER4DARBPROC                           glProgramLocalParameter4dARB;

	/**
	* @brief void glProgramLocalParameter4dvARB( GLenum target, GLuint index, const GLdouble *params );
	*/
	PFNGLPROGRAMLOCALPARAMETER4DVARBPROC                          glProgramLocalParameter4dvARB;

	/**
	* @brief void glProgramLocalParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLPROGRAMLOCALPARAMETER4FARBPROC                           glProgramLocalParameter4fARB;

	/**
	* @brief void glProgramLocalParameter4fvARB( GLenum target, GLuint index, const GLfloat *params );
	*/
	PFNGLPROGRAMLOCALPARAMETER4FVARBPROC                          glProgramLocalParameter4fvARB;

	/**
	* @brief void glGetProgramEnvParameterdvARB( GLenum target, GLuint index, GLdouble *params );
	*/
	PFNGLGETPROGRAMENVPARAMETERDVARBPROC                          glGetProgramEnvParameterdvARB;

	/**
	* @brief void glGetProgramEnvParameterfvARB( GLenum target, GLuint index, GLfloat *params );
	*/
	PFNGLGETPROGRAMENVPARAMETERFVARBPROC                          glGetProgramEnvParameterfvARB;

	/**
	* @brief void glGetProgramLocalParameterdvARB( GLenum target, GLuint index, GLdouble *params );
	*/
	PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC                        glGetProgramLocalParameterdvARB;

	/**
	* @brief void glGetProgramLocalParameterfvARB( GLenum target, GLuint index, GLfloat *params );
	*/
	PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC                        glGetProgramLocalParameterfvARB;

	/**
	* @brief void glGetProgramivARB( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETPROGRAMIVARBPROC                                      glGetProgramivARB;

	/**
	* @brief void glGetProgramStringARB( GLenum target, GLenum pname, GLvoid *string );
	*/
	PFNGLGETPROGRAMSTRINGARBPROC                                  glGetProgramStringARB;

	/**
	* @brief void glGetVertexAttribdvARB( GLuint index, GLenum pname, GLdouble *params );
	*/
	PFNGLGETVERTEXATTRIBDVARBPROC                                 glGetVertexAttribdvARB;

	/**
	* @brief void glGetVertexAttribfvARB( GLuint index, GLenum pname, GLfloat *params );
	*/
	PFNGLGETVERTEXATTRIBFVARBPROC                                 glGetVertexAttribfvARB;

	/**
	* @brief void glGetVertexAttribivARB( GLuint index, GLenum pname, GLint *params );
	*/
	PFNGLGETVERTEXATTRIBIVARBPROC                                 glGetVertexAttribivARB;

	/**
	* @brief void glGetVertexAttribPointervARB( GLuint index, GLenum pname, GLvoid* *pointer );
	*/
	PFNGLGETVERTEXATTRIBPOINTERVARBPROC                           glGetVertexAttribPointervARB;

	/**
	* @brief GLboolean glIsProgramARB( GLuint program );
	*/
	PFNGLISPROGRAMARBPROC                                         glIsProgramARB;

	//@}


	/**
	 * @name internal_GL_ARB_vertex_shader
	 *	Extension number in OpenGL registry : 31
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/vertex_shader.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_shader is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_shader;

	/**
	* @brief void glBindAttribLocationARB( GLhandleARB programObj, GLuint index, const GLcharARB *name );
	*/
	PFNGLBINDATTRIBLOCATIONARBPROC                                glBindAttribLocationARB;

	/**
	* @brief void glGetActiveAttribARB( GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name );
	*/
	PFNGLGETACTIVEATTRIBARBPROC                                   glGetActiveAttribARB;

	/**
	* @brief GLint glGetAttribLocationARB( GLhandleARB programObj, const GLcharARB *name );
	*/
	PFNGLGETATTRIBLOCATIONARBPROC                                 glGetAttribLocationARB;

	//@}


	/**
	 * @name internal_GL_ARB_window_pos
	 *	Extension number in OpenGL registry : 25
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ARB/window_pos.txt
	 *	@ingroup internal_GL_ARB
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ARB_window_pos is supported, false otherwise.
	 */
	bool isGL_ARB_window_pos;

	/**
	* @brief void glWindowPos2dARB( GLdouble x, GLdouble y );
	*/
	PFNGLWINDOWPOS2DARBPROC                                       glWindowPos2dARB;

	/**
	* @brief void glWindowPos2dvARB( const GLdouble *v );
	*/
	PFNGLWINDOWPOS2DVARBPROC                                      glWindowPos2dvARB;

	/**
	* @brief void glWindowPos2fARB( GLfloat x, GLfloat y );
	*/
	PFNGLWINDOWPOS2FARBPROC                                       glWindowPos2fARB;

	/**
	* @brief void glWindowPos2fvARB( const GLfloat *v );
	*/
	PFNGLWINDOWPOS2FVARBPROC                                      glWindowPos2fvARB;

	/**
	* @brief void glWindowPos2iARB( GLint x, GLint y );
	*/
	PFNGLWINDOWPOS2IARBPROC                                       glWindowPos2iARB;

	/**
	* @brief void glWindowPos2ivARB( const GLint *v );
	*/
	PFNGLWINDOWPOS2IVARBPROC                                      glWindowPos2ivARB;

	/**
	* @brief void glWindowPos2sARB( GLshort x, GLshort y );
	*/
	PFNGLWINDOWPOS2SARBPROC                                       glWindowPos2sARB;

	/**
	* @brief void glWindowPos2svARB( const GLshort *v );
	*/
	PFNGLWINDOWPOS2SVARBPROC                                      glWindowPos2svARB;

	/**
	* @brief void glWindowPos3dARB( GLdouble x, GLdouble y, GLdouble z );
	*/
	PFNGLWINDOWPOS3DARBPROC                                       glWindowPos3dARB;

	/**
	* @brief void glWindowPos3dvARB( const GLdouble *v );
	*/
	PFNGLWINDOWPOS3DVARBPROC                                      glWindowPos3dvARB;

	/**
	* @brief void glWindowPos3fARB( GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLWINDOWPOS3FARBPROC                                       glWindowPos3fARB;

	/**
	* @brief void glWindowPos3fvARB( const GLfloat *v );
	*/
	PFNGLWINDOWPOS3FVARBPROC                                      glWindowPos3fvARB;

	/**
	* @brief void glWindowPos3iARB( GLint x, GLint y, GLint z );
	*/
	PFNGLWINDOWPOS3IARBPROC                                       glWindowPos3iARB;

	/**
	* @brief void glWindowPos3ivARB( const GLint *v );
	*/
	PFNGLWINDOWPOS3IVARBPROC                                      glWindowPos3ivARB;

	/**
	* @brief void glWindowPos3sARB( GLshort x, GLshort y, GLshort z );
	*/
	PFNGLWINDOWPOS3SARBPROC                                       glWindowPos3sARB;

	/**
	* @brief void glWindowPos3svARB( const GLshort *v );
	*/
	PFNGLWINDOWPOS3SVARBPROC                                      glWindowPos3svARB;

	//@}


	/**
	 * @name internal_GL_ATI_draw_buffers
	 *	Extension number in OpenGL registry : 277
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/draw_buffers.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_draw_buffers is supported, false otherwise.
	 */
	bool isGL_ATI_draw_buffers;

	/**
	* @brief void glDrawBuffersATI( GLsizei n, const GLenum *bufs );
	*/
	PFNGLDRAWBUFFERSATIPROC                                       glDrawBuffersATI;

	//@}


	/**
	 * @name internal_GL_ATI_element_array
	 *	Extension number in OpenGL registry : 256
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/element_array.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_element_array is supported, false otherwise.
	 */
	bool isGL_ATI_element_array;

	/**
	* @brief void glElementPointerATI( GLenum type, const GLvoid *pointer );
	*/
	PFNGLELEMENTPOINTERATIPROC                                    glElementPointerATI;

	/**
	* @brief void glDrawElementArrayATI( GLenum mode, GLsizei count );
	*/
	PFNGLDRAWELEMENTARRAYATIPROC                                  glDrawElementArrayATI;

	/**
	* @brief void glDrawRangeElementArrayATI( GLenum mode, GLuint start, GLuint end, GLsizei count );
	*/
	PFNGLDRAWRANGEELEMENTARRAYATIPROC                             glDrawRangeElementArrayATI;

	//@}


	/**
	 * @name internal_GL_ATI_envmap_bumpmap
	 *	Extension number in OpenGL registry : 244
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/envmap_bumpmap.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_envmap_bumpmap is supported, false otherwise.
	 */
	bool isGL_ATI_envmap_bumpmap;

	/**
	* @brief void glTexBumpParameterivATI( GLenum pname, const GLint *param );
	*/
	PFNGLTEXBUMPPARAMETERIVATIPROC                                glTexBumpParameterivATI;

	/**
	* @brief void glTexBumpParameterfvATI( GLenum pname, const GLfloat *param );
	*/
	PFNGLTEXBUMPPARAMETERFVATIPROC                                glTexBumpParameterfvATI;

	/**
	* @brief void glGetTexBumpParameterivATI( GLenum pname, GLint *param );
	*/
	PFNGLGETTEXBUMPPARAMETERIVATIPROC                             glGetTexBumpParameterivATI;

	/**
	* @brief void glGetTexBumpParameterfvATI( GLenum pname, GLfloat *param );
	*/
	PFNGLGETTEXBUMPPARAMETERFVATIPROC                             glGetTexBumpParameterfvATI;

	//@}


	/**
	 * @name internal_GL_ATI_fragment_shader
	 *	Extension number in OpenGL registry : 245
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/fragment_shader.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_fragment_shader is supported, false otherwise.
	 */
	bool isGL_ATI_fragment_shader;

	/**
	* @brief GLuint glGenFragmentShadersATI( GLuint range );
	*/
	PFNGLGENFRAGMENTSHADERSATIPROC                                glGenFragmentShadersATI;

	/**
	* @brief void glBindFragmentShaderATI( GLuint id );
	*/
	PFNGLBINDFRAGMENTSHADERATIPROC                                glBindFragmentShaderATI;

	/**
	* @brief void glDeleteFragmentShaderATI( GLuint id );
	*/
	PFNGLDELETEFRAGMENTSHADERATIPROC                              glDeleteFragmentShaderATI;

	/**
	* @brief void glBeginFragmentShaderATI( void );
	*/
	PFNGLBEGINFRAGMENTSHADERATIPROC                               glBeginFragmentShaderATI;

	/**
	* @brief void glEndFragmentShaderATI( void );
	*/
	PFNGLENDFRAGMENTSHADERATIPROC                                 glEndFragmentShaderATI;

	/**
	* @brief void glPassTexCoordATI( GLuint dst, GLuint coord, GLenum swizzle );
	*/
	PFNGLPASSTEXCOORDATIPROC                                      glPassTexCoordATI;

	/**
	* @brief void glSampleMapATI( GLuint dst, GLuint interp, GLenum swizzle );
	*/
	PFNGLSAMPLEMAPATIPROC                                         glSampleMapATI;

	/**
	* @brief void glColorFragmentOp1ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod );
	*/
	PFNGLCOLORFRAGMENTOP1ATIPROC                                  glColorFragmentOp1ATI;

	/**
	* @brief void glColorFragmentOp2ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod );
	*/
	PFNGLCOLORFRAGMENTOP2ATIPROC                                  glColorFragmentOp2ATI;

	/**
	* @brief void glColorFragmentOp3ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod );
	*/
	PFNGLCOLORFRAGMENTOP3ATIPROC                                  glColorFragmentOp3ATI;

	/**
	* @brief void glAlphaFragmentOp1ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod );
	*/
	PFNGLALPHAFRAGMENTOP1ATIPROC                                  glAlphaFragmentOp1ATI;

	/**
	* @brief void glAlphaFragmentOp2ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod );
	*/
	PFNGLALPHAFRAGMENTOP2ATIPROC                                  glAlphaFragmentOp2ATI;

	/**
	* @brief void glAlphaFragmentOp3ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod );
	*/
	PFNGLALPHAFRAGMENTOP3ATIPROC                                  glAlphaFragmentOp3ATI;

	/**
	* @brief void glSetFragmentShaderConstantATI( GLuint dst, const GLfloat *value );
	*/
	PFNGLSETFRAGMENTSHADERCONSTANTATIPROC                         glSetFragmentShaderConstantATI;

	//@}


	/**
	 * @name internal_GL_ATI_map_object_buffer
	 *	Extension number in OpenGL registry : 288
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/map_object_buffer.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_map_object_buffer is supported, false otherwise.
	 */
	bool isGL_ATI_map_object_buffer;

	/**
	* @brief GLvoid* glMapObjectBufferATI( GLuint buffer );
	*/
	PFNGLMAPOBJECTBUFFERATIPROC                                   glMapObjectBufferATI;

	/**
	* @brief void glUnmapObjectBufferATI( GLuint buffer );
	*/
	PFNGLUNMAPOBJECTBUFFERATIPROC                                 glUnmapObjectBufferATI;

	//@}


	/**	
	 * @name GL_ATI_pixel_format_float
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_pixel_format_float is supported, false otherwise.
	 */
	bool isGL_ATI_pixel_format_float;

	//@}


	/**
	 * @name internal_GL_ATI_pn_triangles
	 *	Extension number in OpenGL registry : 246
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/pn_triangles.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_pn_triangles is supported, false otherwise.
	 */
	bool isGL_ATI_pn_triangles;

	/**
	* @brief void glPNTrianglesiATI( GLenum pname, GLint param );
	*/
	PFNGLPNTRIANGLESIATIPROC                                      glPNTrianglesiATI;

	/**
	* @brief void glPNTrianglesfATI( GLenum pname, GLfloat param );
	*/
	PFNGLPNTRIANGLESFATIPROC                                      glPNTrianglesfATI;

	//@}


	/**
	 * @name internal_GL_ATI_separate_stencil
	 *	Extension number in OpenGL registry : 289
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/separate_stencil.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_separate_stencil is supported, false otherwise.
	 */
	bool isGL_ATI_separate_stencil;

	/**
	* @brief void glStencilOpSeparateATI( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass );
	*/
	PFNGLSTENCILOPSEPARATEATIPROC                                 glStencilOpSeparateATI;

	/**
	* @brief void glStencilFuncSeparateATI( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask );
	*/
	PFNGLSTENCILFUNCSEPARATEATIPROC                               glStencilFuncSeparateATI;

	//@}


	/**
	 * @name internal_GL_ATI_text_fragment_shader
	 *	Extension number in OpenGL registry : 269
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/text_fragment_shader.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_text_fragment_shader is supported, false otherwise.
	 */
	bool isGL_ATI_text_fragment_shader;

	//@}


	/**
	 * @name internal_GL_ATI_texture_env_combine3
	 *	Extension number in OpenGL registry : 279
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/texture_env_combine3.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_texture_env_combine3 is supported, false otherwise.
	 */
	bool isGL_ATI_texture_env_combine3;

	//@}


	/**
	 * @name internal_GL_ATI_texture_float
	 *	Extension number in OpenGL registry : 280
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/texture_float.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_texture_float is supported, false otherwise.
	 */
	bool isGL_ATI_texture_float;

	//@}


	/**
	 * @name internal_GL_ATI_texture_mirror_once
	 *	Extension number in OpenGL registry : 221
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/texture_mirror_once.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_texture_mirror_once is supported, false otherwise.
	 */
	bool isGL_ATI_texture_mirror_once;

	//@}


	/**
	 * @name internal_GL_ATI_vertex_array_object
	 *	Extension number in OpenGL registry : 247
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/vertex_array_object.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_vertex_array_object is supported, false otherwise.
	 */
	bool isGL_ATI_vertex_array_object;

	/**
	* @brief GLuint glNewObjectBufferATI( GLsizei size, const GLvoid *pointer, GLenum usage );
	*/
	PFNGLNEWOBJECTBUFFERATIPROC                                   glNewObjectBufferATI;

	/**
	* @brief GLboolean glIsObjectBufferATI( GLuint buffer );
	*/
	PFNGLISOBJECTBUFFERATIPROC                                    glIsObjectBufferATI;

	/**
	* @brief void glUpdateObjectBufferATI( GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve );
	*/
	PFNGLUPDATEOBJECTBUFFERATIPROC                                glUpdateObjectBufferATI;

	/**
	* @brief void glGetObjectBufferfvATI( GLuint buffer, GLenum pname, GLfloat *params );
	*/
	PFNGLGETOBJECTBUFFERFVATIPROC                                 glGetObjectBufferfvATI;

	/**
	* @brief void glGetObjectBufferivATI( GLuint buffer, GLenum pname, GLint *params );
	*/
	PFNGLGETOBJECTBUFFERIVATIPROC                                 glGetObjectBufferivATI;

	/**
	* @brief void glFreeObjectBufferATI( GLuint buffer );
	*/
	PFNGLFREEOBJECTBUFFERATIPROC                                  glFreeObjectBufferATI;

	/**
	* @brief void glArrayObjectATI( GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset );
	*/
	PFNGLARRAYOBJECTATIPROC                                       glArrayObjectATI;

	/**
	* @brief void glGetArrayObjectfvATI( GLenum array, GLenum pname, GLfloat *params );
	*/
	PFNGLGETARRAYOBJECTFVATIPROC                                  glGetArrayObjectfvATI;

	/**
	* @brief void glGetArrayObjectivATI( GLenum array, GLenum pname, GLint *params );
	*/
	PFNGLGETARRAYOBJECTIVATIPROC                                  glGetArrayObjectivATI;

	/**
	* @brief void glVariantArrayObjectATI( GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset );
	*/
	PFNGLVARIANTARRAYOBJECTATIPROC                                glVariantArrayObjectATI;

	/**
	* @brief void glGetVariantArrayObjectfvATI( GLuint id, GLenum pname, GLfloat *params );
	*/
	PFNGLGETVARIANTARRAYOBJECTFVATIPROC                           glGetVariantArrayObjectfvATI;

	/**
	* @brief void glGetVariantArrayObjectivATI( GLuint id, GLenum pname, GLint *params );
	*/
	PFNGLGETVARIANTARRAYOBJECTIVATIPROC                           glGetVariantArrayObjectivATI;

	//@}


	/**
	 * @name internal_GL_ATI_vertex_attrib_array_object
	 *	Extension number in OpenGL registry : 290
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/vertex_attrib_array_object.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_vertex_attrib_array_object is supported, false otherwise.
	 */
	bool isGL_ATI_vertex_attrib_array_object;

	/**
	* @brief void glVertexAttribArrayObjectATI( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset );
	*/
	PFNGLVERTEXATTRIBARRAYOBJECTATIPROC                           glVertexAttribArrayObjectATI;

	/**
	* @brief void glGetVertexAttribArrayObjectfvATI( GLuint index, GLenum pname, GLfloat *params );
	*/
	PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC                      glGetVertexAttribArrayObjectfvATI;

	/**
	* @brief void glGetVertexAttribArrayObjectivATI( GLuint index, GLenum pname, GLint *params );
	*/
	PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC                      glGetVertexAttribArrayObjectivATI;

	//@}


	/**
	 * @name internal_GL_ATI_vertex_streams
	 *	Extension number in OpenGL registry : 249
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/ATI/vertex_streams.txt
	 *	@ingroup internal_GL_ATI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_ATI_vertex_streams is supported, false otherwise.
	 */
	bool isGL_ATI_vertex_streams;

	/**
	* @brief void glVertexStream1sATI( GLenum stream, GLshort x );
	*/
	PFNGLVERTEXSTREAM1SATIPROC                                    glVertexStream1sATI;

	/**
	* @brief void glVertexStream1svATI( GLenum stream, const GLshort *coords );
	*/
	PFNGLVERTEXSTREAM1SVATIPROC                                   glVertexStream1svATI;

	/**
	* @brief void glVertexStream1iATI( GLenum stream, GLint x );
	*/
	PFNGLVERTEXSTREAM1IATIPROC                                    glVertexStream1iATI;

	/**
	* @brief void glVertexStream1ivATI( GLenum stream, const GLint *coords );
	*/
	PFNGLVERTEXSTREAM1IVATIPROC                                   glVertexStream1ivATI;

	/**
	* @brief void glVertexStream1fATI( GLenum stream, GLfloat x );
	*/
	PFNGLVERTEXSTREAM1FATIPROC                                    glVertexStream1fATI;

	/**
	* @brief void glVertexStream1fvATI( GLenum stream, const GLfloat *coords );
	*/
	PFNGLVERTEXSTREAM1FVATIPROC                                   glVertexStream1fvATI;

	/**
	* @brief void glVertexStream1dATI( GLenum stream, GLdouble x );
	*/
	PFNGLVERTEXSTREAM1DATIPROC                                    glVertexStream1dATI;

	/**
	* @brief void glVertexStream1dvATI( GLenum stream, const GLdouble *coords );
	*/
	PFNGLVERTEXSTREAM1DVATIPROC                                   glVertexStream1dvATI;

	/**
	* @brief void glVertexStream2sATI( GLenum stream, GLshort x, GLshort y );
	*/
	PFNGLVERTEXSTREAM2SATIPROC                                    glVertexStream2sATI;

	/**
	* @brief void glVertexStream2svATI( GLenum stream, const GLshort *coords );
	*/
	PFNGLVERTEXSTREAM2SVATIPROC                                   glVertexStream2svATI;

	/**
	* @brief void glVertexStream2iATI( GLenum stream, GLint x, GLint y );
	*/
	PFNGLVERTEXSTREAM2IATIPROC                                    glVertexStream2iATI;

	/**
	* @brief void glVertexStream2ivATI( GLenum stream, const GLint *coords );
	*/
	PFNGLVERTEXSTREAM2IVATIPROC                                   glVertexStream2ivATI;

	/**
	* @brief void glVertexStream2fATI( GLenum stream, GLfloat x, GLfloat y );
	*/
	PFNGLVERTEXSTREAM2FATIPROC                                    glVertexStream2fATI;

	/**
	* @brief void glVertexStream2fvATI( GLenum stream, const GLfloat *coords );
	*/
	PFNGLVERTEXSTREAM2FVATIPROC                                   glVertexStream2fvATI;

	/**
	* @brief void glVertexStream2dATI( GLenum stream, GLdouble x, GLdouble y );
	*/
	PFNGLVERTEXSTREAM2DATIPROC                                    glVertexStream2dATI;

	/**
	* @brief void glVertexStream2dvATI( GLenum stream, const GLdouble *coords );
	*/
	PFNGLVERTEXSTREAM2DVATIPROC                                   glVertexStream2dvATI;

	/**
	* @brief void glVertexStream3sATI( GLenum stream, GLshort x, GLshort y, GLshort z );
	*/
	PFNGLVERTEXSTREAM3SATIPROC                                    glVertexStream3sATI;

	/**
	* @brief void glVertexStream3svATI( GLenum stream, const GLshort *coords );
	*/
	PFNGLVERTEXSTREAM3SVATIPROC                                   glVertexStream3svATI;

	/**
	* @brief void glVertexStream3iATI( GLenum stream, GLint x, GLint y, GLint z );
	*/
	PFNGLVERTEXSTREAM3IATIPROC                                    glVertexStream3iATI;

	/**
	* @brief void glVertexStream3ivATI( GLenum stream, const GLint *coords );
	*/
	PFNGLVERTEXSTREAM3IVATIPROC                                   glVertexStream3ivATI;

	/**
	* @brief void glVertexStream3fATI( GLenum stream, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLVERTEXSTREAM3FATIPROC                                    glVertexStream3fATI;

	/**
	* @brief void glVertexStream3fvATI( GLenum stream, const GLfloat *coords );
	*/
	PFNGLVERTEXSTREAM3FVATIPROC                                   glVertexStream3fvATI;

	/**
	* @brief void glVertexStream3dATI( GLenum stream, GLdouble x, GLdouble y, GLdouble z );
	*/
	PFNGLVERTEXSTREAM3DATIPROC                                    glVertexStream3dATI;

	/**
	* @brief void glVertexStream3dvATI( GLenum stream, const GLdouble *coords );
	*/
	PFNGLVERTEXSTREAM3DVATIPROC                                   glVertexStream3dvATI;

	/**
	* @brief void glVertexStream4sATI( GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w );
	*/
	PFNGLVERTEXSTREAM4SATIPROC                                    glVertexStream4sATI;

	/**
	* @brief void glVertexStream4svATI( GLenum stream, const GLshort *coords );
	*/
	PFNGLVERTEXSTREAM4SVATIPROC                                   glVertexStream4svATI;

	/**
	* @brief void glVertexStream4iATI( GLenum stream, GLint x, GLint y, GLint z, GLint w );
	*/
	PFNGLVERTEXSTREAM4IATIPROC                                    glVertexStream4iATI;

	/**
	* @brief void glVertexStream4ivATI( GLenum stream, const GLint *coords );
	*/
	PFNGLVERTEXSTREAM4IVATIPROC                                   glVertexStream4ivATI;

	/**
	* @brief void glVertexStream4fATI( GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLVERTEXSTREAM4FATIPROC                                    glVertexStream4fATI;

	/**
	* @brief void glVertexStream4fvATI( GLenum stream, const GLfloat *coords );
	*/
	PFNGLVERTEXSTREAM4FVATIPROC                                   glVertexStream4fvATI;

	/**
	* @brief void glVertexStream4dATI( GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	*/
	PFNGLVERTEXSTREAM4DATIPROC                                    glVertexStream4dATI;

	/**
	* @brief void glVertexStream4dvATI( GLenum stream, const GLdouble *coords );
	*/
	PFNGLVERTEXSTREAM4DVATIPROC                                   glVertexStream4dvATI;

	/**
	* @brief void glNormalStream3bATI( GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz );
	*/
	PFNGLNORMALSTREAM3BATIPROC                                    glNormalStream3bATI;

	/**
	* @brief void glNormalStream3bvATI( GLenum stream, const GLbyte *coords );
	*/
	PFNGLNORMALSTREAM3BVATIPROC                                   glNormalStream3bvATI;

	/**
	* @brief void glNormalStream3sATI( GLenum stream, GLshort nx, GLshort ny, GLshort nz );
	*/
	PFNGLNORMALSTREAM3SATIPROC                                    glNormalStream3sATI;

	/**
	* @brief void glNormalStream3svATI( GLenum stream, const GLshort *coords );
	*/
	PFNGLNORMALSTREAM3SVATIPROC                                   glNormalStream3svATI;

	/**
	* @brief void glNormalStream3iATI( GLenum stream, GLint nx, GLint ny, GLint nz );
	*/
	PFNGLNORMALSTREAM3IATIPROC                                    glNormalStream3iATI;

	/**
	* @brief void glNormalStream3ivATI( GLenum stream, const GLint *coords );
	*/
	PFNGLNORMALSTREAM3IVATIPROC                                   glNormalStream3ivATI;

	/**
	* @brief void glNormalStream3fATI( GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz );
	*/
	PFNGLNORMALSTREAM3FATIPROC                                    glNormalStream3fATI;

	/**
	* @brief void glNormalStream3fvATI( GLenum stream, const GLfloat *coords );
	*/
	PFNGLNORMALSTREAM3FVATIPROC                                   glNormalStream3fvATI;

	/**
	* @brief void glNormalStream3dATI( GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz );
	*/
	PFNGLNORMALSTREAM3DATIPROC                                    glNormalStream3dATI;

	/**
	* @brief void glNormalStream3dvATI( GLenum stream, const GLdouble *coords );
	*/
	PFNGLNORMALSTREAM3DVATIPROC                                   glNormalStream3dvATI;

	/**
	* @brief void glClientActiveVertexStreamATI( GLenum stream );
	*/
	PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC                          glClientActiveVertexStreamATI;

	/**
	* @brief void glVertexBlendEnviATI( GLenum pname, GLint param );
	*/
	PFNGLVERTEXBLENDENVIATIPROC                                   glVertexBlendEnviATI;

	/**
	* @brief void glVertexBlendEnvfATI( GLenum pname, GLfloat param );
	*/
	PFNGLVERTEXBLENDENVFATIPROC                                   glVertexBlendEnvfATI;

	//@}


	/**
	 * @name internal_GL_EXT_422_pixels
	 *	Extension number in OpenGL registry : 178
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/422_pixels.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_422_pixels is supported, false otherwise.
	 */
	bool isGL_EXT_422_pixels;

	//@}


	/**
	 * @name internal_GL_EXT_abgr
	 *	Extension number in OpenGL registry : 1
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/abgr.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_abgr is supported, false otherwise.
	 */
	bool isGL_EXT_abgr;

	//@}


	/**
	 * @name internal_GL_EXT_bgra
	 *	Extension number in OpenGL registry : 129
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/bgra.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_bgra is supported, false otherwise.
	 */
	bool isGL_EXT_bgra;

	//@}


	/**
	 * @name internal_GL_EXT_blend_color
	 *	Extension number in OpenGL registry : 2
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_color.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_color is supported, false otherwise.
	 */
	bool isGL_EXT_blend_color;

	/**
	* @brief void glBlendColorEXT( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
	*/
	PFNGLBLENDCOLOREXTPROC                                        glBlendColorEXT;

	//@}


	/**
	 * @name internal_GL_EXT_blend_equation_separate
	 *	Extension number in OpenGL registry : 299
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_equation_separate.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_equation_separate is supported, false otherwise.
	 */
	bool isGL_EXT_blend_equation_separate;

	/**
	* @brief void glBlendEquationSeparateEXT( GLenum modeRGB, GLenum modeAlpha );
	*/
	PFNGLBLENDEQUATIONSEPARATEEXTPROC                             glBlendEquationSeparateEXT;

	//@}


	/**
	 * @name internal_GL_EXT_blend_func_separate
	 *	Extension number in OpenGL registry : 173
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_func_separate.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_func_separate is supported, false otherwise.
	 */
	bool isGL_EXT_blend_func_separate;

	/**
	* @brief void glBlendFuncSeparateEXT( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha );
	*/
	PFNGLBLENDFUNCSEPARATEEXTPROC                                 glBlendFuncSeparateEXT;

	//@}


	/**
	 * @name internal_GL_EXT_blend_logic_op
	 *	Extension number in OpenGL registry : 39
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_logic_op.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_logic_op is supported, false otherwise.
	 */
	bool isGL_EXT_blend_logic_op;

	//@}


	/**
	 * @name internal_GL_EXT_blend_minmax
	 *	Extension number in OpenGL registry : 37
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_minmax.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_minmax is supported, false otherwise.
	 */
	bool isGL_EXT_blend_minmax;

	/**
	* @brief void glBlendEquationEXT( GLenum mode );
	*/
	PFNGLBLENDEQUATIONEXTPROC                                     glBlendEquationEXT;

	//@}


	/**
	 * @name internal_GL_EXT_blend_subtract
	 *	Extension number in OpenGL registry : 38
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/blend_subtract.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_subtract is supported, false otherwise.
	 */
	bool isGL_EXT_blend_subtract;

	//@}


	/**
	 * @name internal_GL_EXT_clip_volume_hint
	 *	Extension number in OpenGL registry : 79
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/clip_volume_hint.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_clip_volume_hint is supported, false otherwise.
	 */
	bool isGL_EXT_clip_volume_hint;

	//@}


	/**
	 * @name internal_GL_EXT_cmyka
	 *	Extension number in OpenGL registry : 18
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/cmyka.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_cmyka is supported, false otherwise.
	 */
	bool isGL_EXT_cmyka;

	//@}


	/**	
	 * @name GL_EXT_color_matrix
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_color_matrix is supported, false otherwise.
	 */
	bool isGL_EXT_color_matrix;

	//@}


	/**
	 * @name internal_GL_EXT_color_subtable
	 *	Extension number in OpenGL registry : 74
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/color_subtable.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_color_subtable is supported, false otherwise.
	 */
	bool isGL_EXT_color_subtable;

	/**
	* @brief void glColorSubTableEXT( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data );
	*/
	PFNGLCOLORSUBTABLEEXTPROC                                     glColorSubTableEXT;

	/**
	* @brief void glCopyColorSubTableEXT( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width );
	*/
	PFNGLCOPYCOLORSUBTABLEEXTPROC                                 glCopyColorSubTableEXT;

	//@}


	/**
	 * @name internal_GL_EXT_compiled_vertex_array
	 *	Extension number in OpenGL registry : 97
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/compiled_vertex_array.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_compiled_vertex_array is supported, false otherwise.
	 */
	bool isGL_EXT_compiled_vertex_array;

	/**
	* @brief void glLockArraysEXT( GLint first, GLsizei count );
	*/
	PFNGLLOCKARRAYSEXTPROC                                        glLockArraysEXT;

	/**
	* @brief void glUnlockArraysEXT( void );
	*/
	PFNGLUNLOCKARRAYSEXTPROC                                      glUnlockArraysEXT;

	//@}


	/**
	 * @name internal_GL_EXT_convolution
	 *	Extension number in OpenGL registry : 12
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/convolution.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_convolution is supported, false otherwise.
	 */
	bool isGL_EXT_convolution;

	/**
	* @brief void glConvolutionFilter1DEXT( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image );
	*/
	PFNGLCONVOLUTIONFILTER1DEXTPROC                               glConvolutionFilter1DEXT;

	/**
	* @brief void glConvolutionFilter2DEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image );
	*/
	PFNGLCONVOLUTIONFILTER2DEXTPROC                               glConvolutionFilter2DEXT;

	/**
	* @brief void glConvolutionParameterfEXT( GLenum target, GLenum pname, GLfloat params );
	*/
	PFNGLCONVOLUTIONPARAMETERFEXTPROC                             glConvolutionParameterfEXT;

	/**
	* @brief void glConvolutionParameterfvEXT( GLenum target, GLenum pname, const GLfloat *params );
	*/
	PFNGLCONVOLUTIONPARAMETERFVEXTPROC                            glConvolutionParameterfvEXT;

	/**
	* @brief void glConvolutionParameteriEXT( GLenum target, GLenum pname, GLint params );
	*/
	PFNGLCONVOLUTIONPARAMETERIEXTPROC                             glConvolutionParameteriEXT;

	/**
	* @brief void glConvolutionParameterivEXT( GLenum target, GLenum pname, const GLint *params );
	*/
	PFNGLCONVOLUTIONPARAMETERIVEXTPROC                            glConvolutionParameterivEXT;

	/**
	* @brief void glCopyConvolutionFilter1DEXT( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );
	*/
	PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC                           glCopyConvolutionFilter1DEXT;

	/**
	* @brief void glCopyConvolutionFilter2DEXT( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height );
	*/
	PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC                           glCopyConvolutionFilter2DEXT;

	/**
	* @brief void glGetConvolutionFilterEXT( GLenum target, GLenum format, GLenum type, GLvoid *image );
	*/
	PFNGLGETCONVOLUTIONFILTEREXTPROC                              glGetConvolutionFilterEXT;

	/**
	* @brief void glGetConvolutionParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC                         glGetConvolutionParameterfvEXT;

	/**
	* @brief void glGetConvolutionParameterivEXT( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC                         glGetConvolutionParameterivEXT;

	/**
	* @brief void glGetSeparableFilterEXT( GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span );
	*/
	PFNGLGETSEPARABLEFILTEREXTPROC                                glGetSeparableFilterEXT;

	/**
	* @brief void glSeparableFilter2DEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column );
	*/
	PFNGLSEPARABLEFILTER2DEXTPROC                                 glSeparableFilter2DEXT;

	//@}


	/**
	 * @name internal_GL_EXT_coordinate_frame
	 *	Extension number in OpenGL registry : 156
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/coordinate_frame.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_coordinate_frame is supported, false otherwise.
	 */
	bool isGL_EXT_coordinate_frame;

	/**
	* @brief void glTangent3bEXT( GLbyte tx, GLbyte ty, GLbyte tz );
	*/
	PFNGLTANGENT3BEXTPROC                                         glTangent3bEXT;

	/**
	* @brief void glTangent3bvEXT( const GLbyte *v );
	*/
	PFNGLTANGENT3BVEXTPROC                                        glTangent3bvEXT;

	/**
	* @brief void glTangent3dEXT( GLdouble tx, GLdouble ty, GLdouble tz );
	*/
	PFNGLTANGENT3DEXTPROC                                         glTangent3dEXT;

	/**
	* @brief void glTangent3dvEXT( const GLdouble *v );
	*/
	PFNGLTANGENT3DVEXTPROC                                        glTangent3dvEXT;

	/**
	* @brief void glTangent3fEXT( GLfloat tx, GLfloat ty, GLfloat tz );
	*/
	PFNGLTANGENT3FEXTPROC                                         glTangent3fEXT;

	/**
	* @brief void glTangent3fvEXT( const GLfloat *v );
	*/
	PFNGLTANGENT3FVEXTPROC                                        glTangent3fvEXT;

	/**
	* @brief void glTangent3iEXT( GLint tx, GLint ty, GLint tz );
	*/
	PFNGLTANGENT3IEXTPROC                                         glTangent3iEXT;

	/**
	* @brief void glTangent3ivEXT( const GLint *v );
	*/
	PFNGLTANGENT3IVEXTPROC                                        glTangent3ivEXT;

	/**
	* @brief void glTangent3sEXT( GLshort tx, GLshort ty, GLshort tz );
	*/
	PFNGLTANGENT3SEXTPROC                                         glTangent3sEXT;

	/**
	* @brief void glTangent3svEXT( const GLshort *v );
	*/
	PFNGLTANGENT3SVEXTPROC                                        glTangent3svEXT;

	/**
	* @brief void glBinormal3bEXT( GLbyte bx, GLbyte by, GLbyte bz );
	*/
	PFNGLBINORMAL3BEXTPROC                                        glBinormal3bEXT;

	/**
	* @brief void glBinormal3bvEXT( const GLbyte *v );
	*/
	PFNGLBINORMAL3BVEXTPROC                                       glBinormal3bvEXT;

	/**
	* @brief void glBinormal3dEXT( GLdouble bx, GLdouble by, GLdouble bz );
	*/
	PFNGLBINORMAL3DEXTPROC                                        glBinormal3dEXT;

	/**
	* @brief void glBinormal3dvEXT( const GLdouble *v );
	*/
	PFNGLBINORMAL3DVEXTPROC                                       glBinormal3dvEXT;

	/**
	* @brief void glBinormal3fEXT( GLfloat bx, GLfloat by, GLfloat bz );
	*/
	PFNGLBINORMAL3FEXTPROC                                        glBinormal3fEXT;

	/**
	* @brief void glBinormal3fvEXT( const GLfloat *v );
	*/
	PFNGLBINORMAL3FVEXTPROC                                       glBinormal3fvEXT;

	/**
	* @brief void glBinormal3iEXT( GLint bx, GLint by, GLint bz );
	*/
	PFNGLBINORMAL3IEXTPROC                                        glBinormal3iEXT;

	/**
	* @brief void glBinormal3ivEXT( const GLint *v );
	*/
	PFNGLBINORMAL3IVEXTPROC                                       glBinormal3ivEXT;

	/**
	* @brief void glBinormal3sEXT( GLshort bx, GLshort by, GLshort bz );
	*/
	PFNGLBINORMAL3SEXTPROC                                        glBinormal3sEXT;

	/**
	* @brief void glBinormal3svEXT( const GLshort *v );
	*/
	PFNGLBINORMAL3SVEXTPROC                                       glBinormal3svEXT;

	/**
	* @brief void glTangentPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLTANGENTPOINTEREXTPROC                                    glTangentPointerEXT;

	/**
	* @brief void glBinormalPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLBINORMALPOINTEREXTPROC                                   glBinormalPointerEXT;

	//@}


	/**
	 * @name internal_GL_EXT_copy_texture
	 *	Extension number in OpenGL registry : 10
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/copy_texture.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_copy_texture is supported, false otherwise.
	 */
	bool isGL_EXT_copy_texture;

	/**
	* @brief void glCopyTexImage1DEXT( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border );
	*/
	PFNGLCOPYTEXIMAGE1DEXTPROC                                    glCopyTexImage1DEXT;

	/**
	* @brief void glCopyTexImage2DEXT( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );
	*/
	PFNGLCOPYTEXIMAGE2DEXTPROC                                    glCopyTexImage2DEXT;

	/**
	* @brief void glCopyTexSubImage1DEXT( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );
	*/
	PFNGLCOPYTEXSUBIMAGE1DEXTPROC                                 glCopyTexSubImage1DEXT;

	/**
	* @brief void glCopyTexSubImage2DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );
	*/
	PFNGLCOPYTEXSUBIMAGE2DEXTPROC                                 glCopyTexSubImage2DEXT;

	/**
	* @brief void glCopyTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );
	*/
	PFNGLCOPYTEXSUBIMAGE3DEXTPROC                                 glCopyTexSubImage3DEXT;

	//@}


	/**
	 * @name internal_GL_EXT_cull_vertex
	 *	Extension number in OpenGL registry : 98
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/cull_vertex.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_cull_vertex is supported, false otherwise.
	 */
	bool isGL_EXT_cull_vertex;

	/**
	* @brief void glCullParameterdvEXT( GLenum pname, GLdouble *params );
	*/
	PFNGLCULLPARAMETERDVEXTPROC                                   glCullParameterdvEXT;

	/**
	* @brief void glCullParameterfvEXT( GLenum pname, GLfloat *params );
	*/
	PFNGLCULLPARAMETERFVEXTPROC                                   glCullParameterfvEXT;

	//@}


	/**
	 * @name internal_GL_EXT_depth_bounds_test
	 *	Extension number in OpenGL registry : 297
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/depth_bounds_test.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_depth_bounds_test is supported, false otherwise.
	 */
	bool isGL_EXT_depth_bounds_test;

	/**
	* @brief void glDepthBoundsEXT( GLclampd zmin, GLclampd zmax );
	*/
	PFNGLDEPTHBOUNDSEXTPROC                                       glDepthBoundsEXT;

	//@}


	/**
	 * @name internal_GL_EXT_draw_range_elements
	 *	Extension number in OpenGL registry : 112
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/draw_range_elements.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_draw_range_elements is supported, false otherwise.
	 */
	bool isGL_EXT_draw_range_elements;

	/**
	* @brief void glDrawRangeElementsEXT( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices );
	*/
	PFNGLDRAWRANGEELEMENTSEXTPROC                                 glDrawRangeElementsEXT;

	//@}


	/**
	 * @name internal_GL_EXT_fog_coord
	 *	Extension number in OpenGL registry : 149
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/fog_coord.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_fog_coord is supported, false otherwise.
	 */
	bool isGL_EXT_fog_coord;

	/**
	* @brief void glFogCoordfEXT( GLfloat coord );
	*/
	PFNGLFOGCOORDFEXTPROC                                         glFogCoordfEXT;

	/**
	* @brief void glFogCoordfvEXT( const GLfloat *coord );
	*/
	PFNGLFOGCOORDFVEXTPROC                                        glFogCoordfvEXT;

	/**
	* @brief void glFogCoorddEXT( GLdouble coord );
	*/
	PFNGLFOGCOORDDEXTPROC                                         glFogCoorddEXT;

	/**
	* @brief void glFogCoorddvEXT( const GLdouble *coord );
	*/
	PFNGLFOGCOORDDVEXTPROC                                        glFogCoorddvEXT;

	/**
	* @brief void glFogCoordPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLFOGCOORDPOINTEREXTPROC                                   glFogCoordPointerEXT;

	//@}


	/**
	 * @name internal_GL_EXT_framebuffer_object
	 *	Extension number in OpenGL registry : 310
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/framebuffer_object.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_framebuffer_object is supported, false otherwise.
	 */
	bool isGL_EXT_framebuffer_object;

	/**
	* @brief GLboolean glIsRenderbufferEXT( GLuint renderbuffer );
	*/
	PFNGLISRENDERBUFFEREXTPROC                                    glIsRenderbufferEXT;

	/**
	* @brief void glBindRenderbufferEXT( GLenum target, GLuint renderbuffer );
	*/
	PFNGLBINDRENDERBUFFEREXTPROC                                  glBindRenderbufferEXT;

	/**
	* @brief void glDeleteRenderbuffersEXT( GLsizei n, const GLuint *renderbuffers );
	*/
	PFNGLDELETERENDERBUFFERSEXTPROC                               glDeleteRenderbuffersEXT;

	/**
	* @brief void glGenRenderbuffersEXT( GLsizei n, GLuint *renderbuffers );
	*/
	PFNGLGENRENDERBUFFERSEXTPROC                                  glGenRenderbuffersEXT;

	/**
	* @brief void glRenderbufferStorageEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height );
	*/
	PFNGLRENDERBUFFERSTORAGEEXTPROC                               glRenderbufferStorageEXT;

	/**
	* @brief void glGetRenderbufferParameterivEXT( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC                        glGetRenderbufferParameterivEXT;

	/**
	* @brief GLboolean glIsFramebufferEXT( GLuint framebuffer );
	*/
	PFNGLISFRAMEBUFFEREXTPROC                                     glIsFramebufferEXT;

	/**
	* @brief void glBindFramebufferEXT( GLenum target, GLuint framebuffer );
	*/
	PFNGLBINDFRAMEBUFFEREXTPROC                                   glBindFramebufferEXT;

	/**
	* @brief void glDeleteFramebuffersEXT( GLsizei n, const GLuint *framebuffers );
	*/
	PFNGLDELETEFRAMEBUFFERSEXTPROC                                glDeleteFramebuffersEXT;

	/**
	* @brief void glGenFramebuffersEXT( GLsizei n, GLuint *framebuffers );
	*/
	PFNGLGENFRAMEBUFFERSEXTPROC                                   glGenFramebuffersEXT;

	/**
	* @brief GLenum glCheckFramebufferStatusEXT( GLenum target );
	*/
	PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC                            glCheckFramebufferStatusEXT;

	/**
	* @brief void glFramebufferTexture1DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );
	*/
	PFNGLFRAMEBUFFERTEXTURE1DEXTPROC                              glFramebufferTexture1DEXT;

	/**
	* @brief void glFramebufferTexture2DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );
	*/
	PFNGLFRAMEBUFFERTEXTURE2DEXTPROC                              glFramebufferTexture2DEXT;

	/**
	* @brief void glFramebufferTexture3DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset );
	*/
	PFNGLFRAMEBUFFERTEXTURE3DEXTPROC                              glFramebufferTexture3DEXT;

	/**
	* @brief void glFramebufferRenderbufferEXT( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer );
	*/
	PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC                           glFramebufferRenderbufferEXT;

	/**
	* @brief void glGetFramebufferAttachmentParameterivEXT( GLenum target, GLenum attachment, GLenum pname, GLint *params );
	*/
	PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC               glGetFramebufferAttachmentParameterivEXT;

	/**
	* @brief void glGenerateMipmapEXT( GLenum target );
	*/
	PFNGLGENERATEMIPMAPEXTPROC                                    glGenerateMipmapEXT;

	//@}


	/**
	 * @name internal_GL_EXT_histogram
	 *	Extension number in OpenGL registry : 11
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/histogram.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_histogram is supported, false otherwise.
	 */
	bool isGL_EXT_histogram;

	/**
	* @brief void glGetHistogramEXT( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );
	*/
	PFNGLGETHISTOGRAMEXTPROC                                      glGetHistogramEXT;

	/**
	* @brief void glGetHistogramParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETHISTOGRAMPARAMETERFVEXTPROC                           glGetHistogramParameterfvEXT;

	/**
	* @brief void glGetHistogramParameterivEXT( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETHISTOGRAMPARAMETERIVEXTPROC                           glGetHistogramParameterivEXT;

	/**
	* @brief void glGetMinmaxEXT( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );
	*/
	PFNGLGETMINMAXEXTPROC                                         glGetMinmaxEXT;

	/**
	* @brief void glGetMinmaxParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETMINMAXPARAMETERFVEXTPROC                              glGetMinmaxParameterfvEXT;

	/**
	* @brief void glGetMinmaxParameterivEXT( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETMINMAXPARAMETERIVEXTPROC                              glGetMinmaxParameterivEXT;

	/**
	* @brief void glHistogramEXT( GLenum target, GLsizei width, GLenum internalformat, GLboolean sink );
	*/
	PFNGLHISTOGRAMEXTPROC                                         glHistogramEXT;

	/**
	* @brief void glMinmaxEXT( GLenum target, GLenum internalformat, GLboolean sink );
	*/
	PFNGLMINMAXEXTPROC                                            glMinmaxEXT;

	/**
	* @brief void glResetHistogramEXT( GLenum target );
	*/
	PFNGLRESETHISTOGRAMEXTPROC                                    glResetHistogramEXT;

	/**
	* @brief void glResetMinmaxEXT( GLenum target );
	*/
	PFNGLRESETMINMAXEXTPROC                                       glResetMinmaxEXT;

	//@}


	/**
	 * @name internal_GL_EXT_index_array_formats
	 *	Extension number in OpenGL registry : 96
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/index_array_formats.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_index_array_formats is supported, false otherwise.
	 */
	bool isGL_EXT_index_array_formats;

	//@}


	/**
	 * @name internal_GL_EXT_index_func
	 *	Extension number in OpenGL registry : 95
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/index_func.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_index_func is supported, false otherwise.
	 */
	bool isGL_EXT_index_func;

	/**
	* @brief void glIndexFuncEXT( GLenum func, GLclampf ref );
	*/
	PFNGLINDEXFUNCEXTPROC                                         glIndexFuncEXT;

	//@}


	/**
	 * @name internal_GL_EXT_index_material
	 *	Extension number in OpenGL registry : 94
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/index_material.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_index_material is supported, false otherwise.
	 */
	bool isGL_EXT_index_material;

	/**
	* @brief void glIndexMaterialEXT( GLenum face, GLenum mode );
	*/
	PFNGLINDEXMATERIALEXTPROC                                     glIndexMaterialEXT;

	//@}


	/**
	 * @name internal_GL_EXT_index_texture
	 *	Extension number in OpenGL registry : 93
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/index_texture.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_index_texture is supported, false otherwise.
	 */
	bool isGL_EXT_index_texture;

	//@}


	/**
	 * @name internal_GL_EXT_light_texture
	 *	Extension number in OpenGL registry : 117
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/light_texture.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_light_texture is supported, false otherwise.
	 */
	bool isGL_EXT_light_texture;

	/**
	* @brief void glApplyTextureEXT( GLenum mode );
	*/
	PFNGLAPPLYTEXTUREEXTPROC                                      glApplyTextureEXT;

	/**
	* @brief void glTextureLightEXT( GLenum pname );
	*/
	PFNGLTEXTURELIGHTEXTPROC                                      glTextureLightEXT;

	/**
	* @brief void glTextureMaterialEXT( GLenum face, GLenum mode );
	*/
	PFNGLTEXTUREMATERIALEXTPROC                                   glTextureMaterialEXT;

	//@}


	/**
	 * @name internal_GL_EXT_misc_attribute
	 *	Extension number in OpenGL registry : 31
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/misc_attribute.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_misc_attribute is supported, false otherwise.
	 */
	bool isGL_EXT_misc_attribute;

	//@}


	/**
	 * @name internal_GL_EXT_multi_draw_arrays
	 *	Extension number in OpenGL registry : 148
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/multi_draw_arrays.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_multi_draw_arrays is supported, false otherwise.
	 */
	bool isGL_EXT_multi_draw_arrays;

	/**
	* @brief void glMultiDrawArraysEXT( GLenum mode, GLint *first, GLsizei *count, GLsizei primcount );
	*/
	PFNGLMULTIDRAWARRAYSEXTPROC                                   glMultiDrawArraysEXT;

	/**
	* @brief void glMultiDrawElementsEXT( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount );
	*/
	PFNGLMULTIDRAWELEMENTSEXTPROC                                 glMultiDrawElementsEXT;

	//@}


	/**	
	 * @name GL_EXT_multisample
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_multisample is supported, false otherwise.
	 */
	bool isGL_EXT_multisample;

	/**
	* @brief void glSampleMaskEXT( GLclampf value, GLboolean invert );
	*/
	PFNGLSAMPLEMASKEXTPROC                                        glSampleMaskEXT;

	/**
	* @brief void glSamplePatternEXT( GLenum pattern );
	*/
	PFNGLSAMPLEPATTERNEXTPROC                                     glSamplePatternEXT;

	//@}


	/**
	 * @name internal_GL_EXT_packed_pixels
	 *	Extension number in OpenGL registry : 23
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/packed_pixels.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_packed_pixels is supported, false otherwise.
	 */
	bool isGL_EXT_packed_pixels;

	//@}


	/**
	 * @name internal_GL_EXT_paletted_texture
	 *	Extension number in OpenGL registry : 78
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/paletted_texture.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_paletted_texture is supported, false otherwise.
	 */
	bool isGL_EXT_paletted_texture;

	/**
	* @brief void glColorTableEXT( GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );
	*/
	PFNGLCOLORTABLEEXTPROC                                        glColorTableEXT;

	/**
	* @brief void glGetColorTableEXT( GLenum target, GLenum format, GLenum type, GLvoid *data );
	*/
	PFNGLGETCOLORTABLEEXTPROC                                     glGetColorTableEXT;

	/**
	* @brief void glGetColorTableParameterivEXT( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETCOLORTABLEPARAMETERIVEXTPROC                          glGetColorTableParameterivEXT;

	/**
	* @brief void glGetColorTableParameterfvEXT( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETCOLORTABLEPARAMETERFVEXTPROC                          glGetColorTableParameterfvEXT;

	//@}


	/**
	 * @name internal_GL_EXT_pixel_buffer_object
	 *	Extension number in OpenGL registry : 302
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/pixel_buffer_object.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_pixel_buffer_object is supported, false otherwise.
	 */
	bool isGL_EXT_pixel_buffer_object;

	//@}


	/**
	 * @name internal_GL_EXT_pixel_transform
	 *	Extension number in OpenGL registry : 138
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/pixel_transform.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_pixel_transform is supported, false otherwise.
	 */
	bool isGL_EXT_pixel_transform;

	/**
	* @brief void glPixelTransformParameteriEXT( GLenum target, GLenum pname, GLint param );
	*/
	PFNGLPIXELTRANSFORMPARAMETERIEXTPROC                          glPixelTransformParameteriEXT;

	/**
	* @brief void glPixelTransformParameterfEXT( GLenum target, GLenum pname, GLfloat param );
	*/
	PFNGLPIXELTRANSFORMPARAMETERFEXTPROC                          glPixelTransformParameterfEXT;

	/**
	* @brief void glPixelTransformParameterivEXT( GLenum target, GLenum pname, const GLint *params );
	*/
	PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC                         glPixelTransformParameterivEXT;

	/**
	* @brief void glPixelTransformParameterfvEXT( GLenum target, GLenum pname, const GLfloat *params );
	*/
	PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC                         glPixelTransformParameterfvEXT;

	//@}


	/**
	 * @name internal_GL_EXT_pixel_transform_color_table
	 *	Extension number in OpenGL registry : 139
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/pixel_transform_color_table.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_pixel_transform_color_table is supported, false otherwise.
	 */
	bool isGL_EXT_pixel_transform_color_table;

	//@}


	/**
	 * @name internal_GL_EXT_point_parameters
	 *	Extension number in OpenGL registry : 54
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/point_parameters.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_point_parameters is supported, false otherwise.
	 */
	bool isGL_EXT_point_parameters;

	/**
	* @brief void glPointParameterfEXT( GLenum pname, GLfloat param );
	*/
	PFNGLPOINTPARAMETERFEXTPROC                                   glPointParameterfEXT;

	/**
	* @brief void glPointParameterfvEXT( GLenum pname, const GLfloat *params );
	*/
	PFNGLPOINTPARAMETERFVEXTPROC                                  glPointParameterfvEXT;

	//@}


	/**
	 * @name internal_GL_EXT_polygon_offset
	 *	Extension number in OpenGL registry : 3
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/polygon_offset.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_polygon_offset is supported, false otherwise.
	 */
	bool isGL_EXT_polygon_offset;

	/**
	* @brief void glPolygonOffsetEXT( GLfloat factor, GLfloat bias );
	*/
	PFNGLPOLYGONOFFSETEXTPROC                                     glPolygonOffsetEXT;

	//@}


	/**
	 * @name internal_GL_EXT_rescale_normal
	 *	Extension number in OpenGL registry : 27
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/rescale_normal.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_rescale_normal is supported, false otherwise.
	 */
	bool isGL_EXT_rescale_normal;

	//@}


	/**
	 * @name internal_GL_EXT_secondary_color
	 *	Extension number in OpenGL registry : 145
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/secondary_color.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_secondary_color is supported, false otherwise.
	 */
	bool isGL_EXT_secondary_color;

	/**
	* @brief void glSecondaryColor3bEXT( GLbyte red, GLbyte green, GLbyte blue );
	*/
	PFNGLSECONDARYCOLOR3BEXTPROC                                  glSecondaryColor3bEXT;

	/**
	* @brief void glSecondaryColor3bvEXT( const GLbyte *v );
	*/
	PFNGLSECONDARYCOLOR3BVEXTPROC                                 glSecondaryColor3bvEXT;

	/**
	* @brief void glSecondaryColor3dEXT( GLdouble red, GLdouble green, GLdouble blue );
	*/
	PFNGLSECONDARYCOLOR3DEXTPROC                                  glSecondaryColor3dEXT;

	/**
	* @brief void glSecondaryColor3dvEXT( const GLdouble *v );
	*/
	PFNGLSECONDARYCOLOR3DVEXTPROC                                 glSecondaryColor3dvEXT;

	/**
	* @brief void glSecondaryColor3fEXT( GLfloat red, GLfloat green, GLfloat blue );
	*/
	PFNGLSECONDARYCOLOR3FEXTPROC                                  glSecondaryColor3fEXT;

	/**
	* @brief void glSecondaryColor3fvEXT( const GLfloat *v );
	*/
	PFNGLSECONDARYCOLOR3FVEXTPROC                                 glSecondaryColor3fvEXT;

	/**
	* @brief void glSecondaryColor3iEXT( GLint red, GLint green, GLint blue );
	*/
	PFNGLSECONDARYCOLOR3IEXTPROC                                  glSecondaryColor3iEXT;

	/**
	* @brief void glSecondaryColor3ivEXT( const GLint *v );
	*/
	PFNGLSECONDARYCOLOR3IVEXTPROC                                 glSecondaryColor3ivEXT;

	/**
	* @brief void glSecondaryColor3sEXT( GLshort red, GLshort green, GLshort blue );
	*/
	PFNGLSECONDARYCOLOR3SEXTPROC                                  glSecondaryColor3sEXT;

	/**
	* @brief void glSecondaryColor3svEXT( const GLshort *v );
	*/
	PFNGLSECONDARYCOLOR3SVEXTPROC                                 glSecondaryColor3svEXT;

	/**
	* @brief void glSecondaryColor3ubEXT( GLubyte red, GLubyte green, GLubyte blue );
	*/
	PFNGLSECONDARYCOLOR3UBEXTPROC                                 glSecondaryColor3ubEXT;

	/**
	* @brief void glSecondaryColor3ubvEXT( const GLubyte *v );
	*/
	PFNGLSECONDARYCOLOR3UBVEXTPROC                                glSecondaryColor3ubvEXT;

	/**
	* @brief void glSecondaryColor3uiEXT( GLuint red, GLuint green, GLuint blue );
	*/
	PFNGLSECONDARYCOLOR3UIEXTPROC                                 glSecondaryColor3uiEXT;

	/**
	* @brief void glSecondaryColor3uivEXT( const GLuint *v );
	*/
	PFNGLSECONDARYCOLOR3UIVEXTPROC                                glSecondaryColor3uivEXT;

	/**
	* @brief void glSecondaryColor3usEXT( GLushort red, GLushort green, GLushort blue );
	*/
	PFNGLSECONDARYCOLOR3USEXTPROC                                 glSecondaryColor3usEXT;

	/**
	* @brief void glSecondaryColor3usvEXT( const GLushort *v );
	*/
	PFNGLSECONDARYCOLOR3USVEXTPROC                                glSecondaryColor3usvEXT;

	/**
	* @brief void glSecondaryColorPointerEXT( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLSECONDARYCOLORPOINTEREXTPROC                             glSecondaryColorPointerEXT;

	//@}


	/**
	 * @name internal_GL_EXT_separate_specular_color
	 *	Extension number in OpenGL registry : 144
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/separate_specular_color.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_separate_specular_color is supported, false otherwise.
	 */
	bool isGL_EXT_separate_specular_color;

	//@}


	/**
	 * @name internal_GL_EXT_shadow_funcs
	 *	Extension number in OpenGL registry : 267
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/shadow_funcs.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_shadow_funcs is supported, false otherwise.
	 */
	bool isGL_EXT_shadow_funcs;

	//@}


	/**
	 * @name internal_GL_EXT_shared_texture_palette
	 *	Extension number in OpenGL registry : 141
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/shared_texture_palette.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_shared_texture_palette is supported, false otherwise.
	 */
	bool isGL_EXT_shared_texture_palette;

	//@}


	/**
	 * @name internal_GL_EXT_stencil_two_side
	 *	Extension number in OpenGL registry : 268
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/stencil_two_side.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_stencil_two_side is supported, false otherwise.
	 */
	bool isGL_EXT_stencil_two_side;

	/**
	* @brief void glActiveStencilFaceEXT( GLenum face );
	*/
	PFNGLACTIVESTENCILFACEEXTPROC                                 glActiveStencilFaceEXT;

	//@}


	/**
	 * @name internal_GL_EXT_stencil_wrap
	 *	Extension number in OpenGL registry : 176
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/stencil_wrap.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_stencil_wrap is supported, false otherwise.
	 */
	bool isGL_EXT_stencil_wrap;

	//@}


	/**
	 * @name internal_GL_EXT_subtexture
	 *	Extension number in OpenGL registry : 9
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/subtexture.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_subtexture is supported, false otherwise.
	 */
	bool isGL_EXT_subtexture;

	/**
	* @brief void glTexSubImage1DEXT( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );
	*/
	PFNGLTEXSUBIMAGE1DEXTPROC                                     glTexSubImage1DEXT;

	/**
	* @brief void glTexSubImage2DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
	*/
	PFNGLTEXSUBIMAGE2DEXTPROC                                     glTexSubImage2DEXT;

	//@}


	/**
	 * @name internal_GL_EXT_texture
	 *	Extension number in OpenGL registry : 4
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture is supported, false otherwise.
	 */
	bool isGL_EXT_texture;

	//@}


	/**
	 * @name internal_GL_EXT_texture3D
	 *	Extension number in OpenGL registry : 6
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture3D.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture3D is supported, false otherwise.
	 */
	bool isGL_EXT_texture3D;

	/**
	* @brief void glTexImage3DEXT( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
	*/
	PFNGLTEXIMAGE3DEXTPROC                                        glTexImage3DEXT;

	/**
	* @brief void glTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );
	*/
	PFNGLTEXSUBIMAGE3DEXTPROC                                     glTexSubImage3DEXT;

	//@}


	/**
	 * @name internal_GL_EXT_texture_compression_s3tc
	 *	Extension number in OpenGL registry : 198
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_compression_s3tc.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_compression_s3tc is supported, false otherwise.
	 */
	bool isGL_EXT_texture_compression_s3tc;

	//@}


	/**	
	 * @name GL_EXT_texture_cube_map
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_cube_map is supported, false otherwise.
	 */
	bool isGL_EXT_texture_cube_map;

	//@}


	/**
	 * @name internal_GL_EXT_texture_env_add
	 *	Extension number in OpenGL registry : 185
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_env_add.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_env_add is supported, false otherwise.
	 */
	bool isGL_EXT_texture_env_add;

	//@}


	/**
	 * @name internal_GL_EXT_texture_env_combine
	 *	Extension number in OpenGL registry : 158
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_env_combine.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_env_combine is supported, false otherwise.
	 */
	bool isGL_EXT_texture_env_combine;

	//@}


	/**
	 * @name internal_GL_EXT_texture_env_dot3
	 *	Extension number in OpenGL registry : 220
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_env_dot3.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_env_dot3 is supported, false otherwise.
	 */
	bool isGL_EXT_texture_env_dot3;

	//@}


	/**
	 * @name internal_GL_EXT_texture_filter_anisotropic
	 *	Extension number in OpenGL registry : 187
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_filter_anisotropic.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_filter_anisotropic is supported, false otherwise.
	 */
	bool isGL_EXT_texture_filter_anisotropic;

	//@}


	/**
	 * @name internal_GL_EXT_texture_lod_bias
	 *	Extension number in OpenGL registry : 186
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_lod_bias.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_lod_bias is supported, false otherwise.
	 */
	bool isGL_EXT_texture_lod_bias;

	//@}


	/**
	 * @name internal_GL_EXT_texture_mirror_clamp
	 *	Extension number in OpenGL registry : 298
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_mirror_clamp.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_mirror_clamp is supported, false otherwise.
	 */
	bool isGL_EXT_texture_mirror_clamp;

	//@}


	/**
	 * @name internal_GL_EXT_texture_object
	 *	Extension number in OpenGL registry : 20
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_object.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_object is supported, false otherwise.
	 */
	bool isGL_EXT_texture_object;

	/**
	* @brief GLboolean glAreTexturesResidentEXT( GLsizei n, const GLuint *textures, GLboolean *residences );
	*/
	PFNGLARETEXTURESRESIDENTEXTPROC                               glAreTexturesResidentEXT;

	/**
	* @brief void glBindTextureEXT( GLenum target, GLuint texture );
	*/
	PFNGLBINDTEXTUREEXTPROC                                       glBindTextureEXT;

	/**
	* @brief void glDeleteTexturesEXT( GLsizei n, const GLuint *textures );
	*/
	PFNGLDELETETEXTURESEXTPROC                                    glDeleteTexturesEXT;

	/**
	* @brief void glGenTexturesEXT( GLsizei n, GLuint *textures );
	*/
	PFNGLGENTEXTURESEXTPROC                                       glGenTexturesEXT;

	/**
	* @brief GLboolean glIsTextureEXT( GLuint texture );
	*/
	PFNGLISTEXTUREEXTPROC                                         glIsTextureEXT;

	/**
	* @brief void glPrioritizeTexturesEXT( GLsizei n, const GLuint *textures, const GLclampf *priorities );
	*/
	PFNGLPRIORITIZETEXTURESEXTPROC                                glPrioritizeTexturesEXT;

	//@}


	/**
	 * @name internal_GL_EXT_texture_perturb_normal
	 *	Extension number in OpenGL registry : 147
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/texture_perturb_normal.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_perturb_normal is supported, false otherwise.
	 */
	bool isGL_EXT_texture_perturb_normal;

	/**
	* @brief void glTextureNormalEXT( GLenum mode );
	*/
	PFNGLTEXTURENORMALEXTPROC                                     glTextureNormalEXT;

	//@}


	/**
	 * @name internal_GL_EXT_vertex_array
	 *	Extension number in OpenGL registry : 30
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/vertex_array.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_vertex_array is supported, false otherwise.
	 */
	bool isGL_EXT_vertex_array;

	/**
	* @brief void glArrayElementEXT( GLint i );
	*/
	PFNGLARRAYELEMENTEXTPROC                                      glArrayElementEXT;

	/**
	* @brief void glColorPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
	*/
	PFNGLCOLORPOINTEREXTPROC                                      glColorPointerEXT;

	/**
	* @brief void glDrawArraysEXT( GLenum mode, GLint first, GLsizei count );
	*/
	PFNGLDRAWARRAYSEXTPROC                                        glDrawArraysEXT;

	/**
	* @brief void glEdgeFlagPointerEXT( GLsizei stride, GLsizei count, const GLboolean *pointer );
	*/
	PFNGLEDGEFLAGPOINTEREXTPROC                                   glEdgeFlagPointerEXT;

	/**
	* @brief void glGetPointervEXT( GLenum pname, GLvoid* *params );
	*/
	PFNGLGETPOINTERVEXTPROC                                       glGetPointervEXT;

	/**
	* @brief void glIndexPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
	*/
	PFNGLINDEXPOINTEREXTPROC                                      glIndexPointerEXT;

	/**
	* @brief void glNormalPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
	*/
	PFNGLNORMALPOINTEREXTPROC                                     glNormalPointerEXT;

	/**
	* @brief void glTexCoordPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
	*/
	PFNGLTEXCOORDPOINTEREXTPROC                                   glTexCoordPointerEXT;

	/**
	* @brief void glVertexPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer );
	*/
	PFNGLVERTEXPOINTEREXTPROC                                     glVertexPointerEXT;

	//@}


	/**
	 * @name internal_GL_EXT_vertex_shader
	 *	Extension number in OpenGL registry : 248
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/vertex_shader.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_vertex_shader is supported, false otherwise.
	 */
	bool isGL_EXT_vertex_shader;

	/**
	* @brief void glBeginVertexShaderEXT( void );
	*/
	PFNGLBEGINVERTEXSHADEREXTPROC                                 glBeginVertexShaderEXT;

	/**
	* @brief void glEndVertexShaderEXT( void );
	*/
	PFNGLENDVERTEXSHADEREXTPROC                                   glEndVertexShaderEXT;

	/**
	* @brief void glBindVertexShaderEXT( GLuint id );
	*/
	PFNGLBINDVERTEXSHADEREXTPROC                                  glBindVertexShaderEXT;

	/**
	* @brief GLuint glGenVertexShadersEXT( GLuint range );
	*/
	PFNGLGENVERTEXSHADERSEXTPROC                                  glGenVertexShadersEXT;

	/**
	* @brief void glDeleteVertexShaderEXT( GLuint id );
	*/
	PFNGLDELETEVERTEXSHADEREXTPROC                                glDeleteVertexShaderEXT;

	/**
	* @brief void glShaderOp1EXT( GLenum op, GLuint res, GLuint arg1 );
	*/
	PFNGLSHADEROP1EXTPROC                                         glShaderOp1EXT;

	/**
	* @brief void glShaderOp2EXT( GLenum op, GLuint res, GLuint arg1, GLuint arg2 );
	*/
	PFNGLSHADEROP2EXTPROC                                         glShaderOp2EXT;

	/**
	* @brief void glShaderOp3EXT( GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3 );
	*/
	PFNGLSHADEROP3EXTPROC                                         glShaderOp3EXT;

	/**
	* @brief void glSwizzleEXT( GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW );
	*/
	PFNGLSWIZZLEEXTPROC                                           glSwizzleEXT;

	/**
	* @brief void glWriteMaskEXT( GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW );
	*/
	PFNGLWRITEMASKEXTPROC                                         glWriteMaskEXT;

	/**
	* @brief void glInsertComponentEXT( GLuint res, GLuint src, GLuint num );
	*/
	PFNGLINSERTCOMPONENTEXTPROC                                   glInsertComponentEXT;

	/**
	* @brief void glExtractComponentEXT( GLuint res, GLuint src, GLuint num );
	*/
	PFNGLEXTRACTCOMPONENTEXTPROC                                  glExtractComponentEXT;

	/**
	* @brief GLuint glGenSymbolsEXT( GLenum datatype, GLenum storagetype, GLenum range, GLuint components );
	*/
	PFNGLGENSYMBOLSEXTPROC                                        glGenSymbolsEXT;

	/**
	* @brief void glSetInvariantEXT( GLuint id, GLenum type, const GLvoid *addr );
	*/
	PFNGLSETINVARIANTEXTPROC                                      glSetInvariantEXT;

	/**
	* @brief void glSetLocalConstantEXT( GLuint id, GLenum type, const GLvoid *addr );
	*/
	PFNGLSETLOCALCONSTANTEXTPROC                                  glSetLocalConstantEXT;

	/**
	* @brief void glVariantbvEXT( GLuint id, const GLbyte *addr );
	*/
	PFNGLVARIANTBVEXTPROC                                         glVariantbvEXT;

	/**
	* @brief void glVariantsvEXT( GLuint id, const GLshort *addr );
	*/
	PFNGLVARIANTSVEXTPROC                                         glVariantsvEXT;

	/**
	* @brief void glVariantivEXT( GLuint id, const GLint *addr );
	*/
	PFNGLVARIANTIVEXTPROC                                         glVariantivEXT;

	/**
	* @brief void glVariantfvEXT( GLuint id, const GLfloat *addr );
	*/
	PFNGLVARIANTFVEXTPROC                                         glVariantfvEXT;

	/**
	* @brief void glVariantdvEXT( GLuint id, const GLdouble *addr );
	*/
	PFNGLVARIANTDVEXTPROC                                         glVariantdvEXT;

	/**
	* @brief void glVariantubvEXT( GLuint id, const GLubyte *addr );
	*/
	PFNGLVARIANTUBVEXTPROC                                        glVariantubvEXT;

	/**
	* @brief void glVariantusvEXT( GLuint id, const GLushort *addr );
	*/
	PFNGLVARIANTUSVEXTPROC                                        glVariantusvEXT;

	/**
	* @brief void glVariantuivEXT( GLuint id, const GLuint *addr );
	*/
	PFNGLVARIANTUIVEXTPROC                                        glVariantuivEXT;

	/**
	* @brief void glVariantPointerEXT( GLuint id, GLenum type, GLuint stride, const GLvoid *addr );
	*/
	PFNGLVARIANTPOINTEREXTPROC                                    glVariantPointerEXT;

	/**
	* @brief void glEnableVariantClientStateEXT( GLuint id );
	*/
	PFNGLENABLEVARIANTCLIENTSTATEEXTPROC                          glEnableVariantClientStateEXT;

	/**
	* @brief void glDisableVariantClientStateEXT( GLuint id );
	*/
	PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC                         glDisableVariantClientStateEXT;

	/**
	* @brief GLuint glBindLightParameterEXT( GLenum light, GLenum value );
	*/
	PFNGLBINDLIGHTPARAMETEREXTPROC                                glBindLightParameterEXT;

	/**
	* @brief GLuint glBindMaterialParameterEXT( GLenum face, GLenum value );
	*/
	PFNGLBINDMATERIALPARAMETEREXTPROC                             glBindMaterialParameterEXT;

	/**
	* @brief GLuint glBindTexGenParameterEXT( GLenum unit, GLenum coord, GLenum value );
	*/
	PFNGLBINDTEXGENPARAMETEREXTPROC                               glBindTexGenParameterEXT;

	/**
	* @brief GLuint glBindTextureUnitParameterEXT( GLenum unit, GLenum value );
	*/
	PFNGLBINDTEXTUREUNITPARAMETEREXTPROC                          glBindTextureUnitParameterEXT;

	/**
	* @brief GLuint glBindParameterEXT( GLenum value );
	*/
	PFNGLBINDPARAMETEREXTPROC                                     glBindParameterEXT;

	/**
	* @brief GLboolean glIsVariantEnabledEXT( GLuint id, GLenum cap );
	*/
	PFNGLISVARIANTENABLEDEXTPROC                                  glIsVariantEnabledEXT;

	/**
	* @brief void glGetVariantBooleanvEXT( GLuint id, GLenum value, GLboolean *data );
	*/
	PFNGLGETVARIANTBOOLEANVEXTPROC                                glGetVariantBooleanvEXT;

	/**
	* @brief void glGetVariantIntegervEXT( GLuint id, GLenum value, GLint *data );
	*/
	PFNGLGETVARIANTINTEGERVEXTPROC                                glGetVariantIntegervEXT;

	/**
	* @brief void glGetVariantFloatvEXT( GLuint id, GLenum value, GLfloat *data );
	*/
	PFNGLGETVARIANTFLOATVEXTPROC                                  glGetVariantFloatvEXT;

	/**
	* @brief void glGetVariantPointervEXT( GLuint id, GLenum value, GLvoid* *data );
	*/
	PFNGLGETVARIANTPOINTERVEXTPROC                                glGetVariantPointervEXT;

	/**
	* @brief void glGetInvariantBooleanvEXT( GLuint id, GLenum value, GLboolean *data );
	*/
	PFNGLGETINVARIANTBOOLEANVEXTPROC                              glGetInvariantBooleanvEXT;

	/**
	* @brief void glGetInvariantIntegervEXT( GLuint id, GLenum value, GLint *data );
	*/
	PFNGLGETINVARIANTINTEGERVEXTPROC                              glGetInvariantIntegervEXT;

	/**
	* @brief void glGetInvariantFloatvEXT( GLuint id, GLenum value, GLfloat *data );
	*/
	PFNGLGETINVARIANTFLOATVEXTPROC                                glGetInvariantFloatvEXT;

	/**
	* @brief void glGetLocalConstantBooleanvEXT( GLuint id, GLenum value, GLboolean *data );
	*/
	PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC                          glGetLocalConstantBooleanvEXT;

	/**
	* @brief void glGetLocalConstantIntegervEXT( GLuint id, GLenum value, GLint *data );
	*/
	PFNGLGETLOCALCONSTANTINTEGERVEXTPROC                          glGetLocalConstantIntegervEXT;

	/**
	* @brief void glGetLocalConstantFloatvEXT( GLuint id, GLenum value, GLfloat *data );
	*/
	PFNGLGETLOCALCONSTANTFLOATVEXTPROC                            glGetLocalConstantFloatvEXT;

	//@}


	/**
	 * @name internal_GL_EXT_vertex_weighting
	 *	Extension number in OpenGL registry : 188
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/EXT/vertex_weighting.txt
	 *	@ingroup internal_GL_EXT
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_EXT_vertex_weighting is supported, false otherwise.
	 */
	bool isGL_EXT_vertex_weighting;

	/**
	* @brief void glVertexWeightfEXT( GLfloat weight );
	*/
	PFNGLVERTEXWEIGHTFEXTPROC                                     glVertexWeightfEXT;

	/**
	* @brief void glVertexWeightfvEXT( const GLfloat *weight );
	*/
	PFNGLVERTEXWEIGHTFVEXTPROC                                    glVertexWeightfvEXT;

	/**
	* @brief void glVertexWeightPointerEXT( GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLVERTEXWEIGHTPOINTEREXTPROC                               glVertexWeightPointerEXT;

	//@}


	/**	
	 * @name GL_FfdMaskSGIX
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_FfdMaskSGIX is supported, false otherwise.
	 */
	bool isGL_FfdMaskSGIX;

	//@}


	/**
	 * @name internal_GL_GREMEDY_string_marker
	 *	Extension number in OpenGL registry : 311
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/GREMEDY/string_marker.txt
	 *	@ingroup internal_GL_GREMEDY
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_GREMEDY_string_marker is supported, false otherwise.
	 */
	bool isGL_GREMEDY_string_marker;

	/**
	* @brief void glStringMarkerGREMEDY( GLsizei len, const GLvoid *string );
	*/
	PFNGLSTRINGMARKERGREMEDYPROC                                  glStringMarkerGREMEDY;

	//@}


	/**
	 * @name internal_GL_HP_convolution_border_modes
	 *	Extension number in OpenGL registry : 67
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/HP/convolution_border_modes.txt
	 *	@ingroup internal_GL_HP
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_HP_convolution_border_modes is supported, false otherwise.
	 */
	bool isGL_HP_convolution_border_modes;

	//@}


	/**
	 * @name internal_GL_HP_image_transform
	 *	Extension number in OpenGL registry : 66
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/HP/image_transform.txt
	 *	@ingroup internal_GL_HP
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_HP_image_transform is supported, false otherwise.
	 */
	bool isGL_HP_image_transform;

	/**
	* @brief void glImageTransformParameteriHP( GLenum target, GLenum pname, GLint param );
	*/
	PFNGLIMAGETRANSFORMPARAMETERIHPPROC                           glImageTransformParameteriHP;

	/**
	* @brief void glImageTransformParameterfHP( GLenum target, GLenum pname, GLfloat param );
	*/
	PFNGLIMAGETRANSFORMPARAMETERFHPPROC                           glImageTransformParameterfHP;

	/**
	* @brief void glImageTransformParameterivHP( GLenum target, GLenum pname, const GLint *params );
	*/
	PFNGLIMAGETRANSFORMPARAMETERIVHPPROC                          glImageTransformParameterivHP;

	/**
	* @brief void glImageTransformParameterfvHP( GLenum target, GLenum pname, const GLfloat *params );
	*/
	PFNGLIMAGETRANSFORMPARAMETERFVHPPROC                          glImageTransformParameterfvHP;

	/**
	* @brief void glGetImageTransformParameterivHP( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC                       glGetImageTransformParameterivHP;

	/**
	* @brief void glGetImageTransformParameterfvHP( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC                       glGetImageTransformParameterfvHP;

	//@}


	/**
	 * @name internal_GL_HP_occlusion_test
	 *	Extension number in OpenGL registry : 137
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/HP/occlusion_test.txt
	 *	@ingroup internal_GL_HP
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_HP_occlusion_test is supported, false otherwise.
	 */
	bool isGL_HP_occlusion_test;

	//@}


	/**
	 * @name internal_GL_HP_texture_lighting
	 *	Extension number in OpenGL registry : 111
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/HP/texture_lighting.txt
	 *	@ingroup internal_GL_HP
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_HP_texture_lighting is supported, false otherwise.
	 */
	bool isGL_HP_texture_lighting;

	//@}


	/**
	 * @name internal_GL_IBM_cull_vertex
	 *	Extension number in OpenGL registry : 199
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/cull_vertex.txt
	 *	@ingroup internal_GL_IBM
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_IBM_cull_vertex is supported, false otherwise.
	 */
	bool isGL_IBM_cull_vertex;

	//@}


	/**
	 * @name internal_GL_IBM_multimode_draw_arrays
	 *	Extension number in OpenGL registry : 200
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/multimode_draw_arrays.txt
	 *	@ingroup internal_GL_IBM
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_IBM_multimode_draw_arrays is supported, false otherwise.
	 */
	bool isGL_IBM_multimode_draw_arrays;

	/**
	* @brief void glMultiModeDrawArraysIBM( const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride );
	*/
	PFNGLMULTIMODEDRAWARRAYSIBMPROC                               glMultiModeDrawArraysIBM;

	/**
	* @brief void glMultiModeDrawElementsIBM( const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride );
	*/
	PFNGLMULTIMODEDRAWELEMENTSIBMPROC                             glMultiModeDrawElementsIBM;

	//@}


	/**
	 * @name internal_GL_IBM_rasterpos_clip
	 *	Extension number in OpenGL registry : 110
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/rasterpos_clip.txt
	 *	@ingroup internal_GL_IBM
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_IBM_rasterpos_clip is supported, false otherwise.
	 */
	bool isGL_IBM_rasterpos_clip;

	//@}


	/**
	 * @name internal_GL_IBM_texture_mirrored_repeat
	 *	Extension number in OpenGL registry : 224
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/texture_mirrored_repeat.txt
	 *	@ingroup internal_GL_IBM
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_IBM_texture_mirrored_repeat is supported, false otherwise.
	 */
	bool isGL_IBM_texture_mirrored_repeat;

	//@}


	/**
	 * @name internal_GL_IBM_vertex_array_lists
	 *	Extension number in OpenGL registry : 201
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/IBM/vertex_array_lists.txt
	 *	@ingroup internal_GL_IBM
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_IBM_vertex_array_lists is supported, false otherwise.
	 */
	bool isGL_IBM_vertex_array_lists;

	/**
	* @brief void glColorPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
	*/
	PFNGLCOLORPOINTERLISTIBMPROC                                  glColorPointerListIBM;

	/**
	* @brief void glSecondaryColorPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
	*/
	PFNGLSECONDARYCOLORPOINTERLISTIBMPROC                         glSecondaryColorPointerListIBM;

	/**
	* @brief void glEdgeFlagPointerListIBM( GLint stride, const GLboolean* *pointer, GLint ptrstride );
	*/
	PFNGLEDGEFLAGPOINTERLISTIBMPROC                               glEdgeFlagPointerListIBM;

	/**
	* @brief void glFogCoordPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
	*/
	PFNGLFOGCOORDPOINTERLISTIBMPROC                               glFogCoordPointerListIBM;

	/**
	* @brief void glIndexPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
	*/
	PFNGLINDEXPOINTERLISTIBMPROC                                  glIndexPointerListIBM;

	/**
	* @brief void glNormalPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
	*/
	PFNGLNORMALPOINTERLISTIBMPROC                                 glNormalPointerListIBM;

	/**
	* @brief void glTexCoordPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
	*/
	PFNGLTEXCOORDPOINTERLISTIBMPROC                               glTexCoordPointerListIBM;

	/**
	* @brief void glVertexPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride );
	*/
	PFNGLVERTEXPOINTERLISTIBMPROC                                 glVertexPointerListIBM;

	//@}


	/**	
	 * @name GL_INGR_blend_func_separate
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_INGR_blend_func_separate is supported, false otherwise.
	 */
	bool isGL_INGR_blend_func_separate;

	/**
	* @brief void glBlendFuncSeparateINGR( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha );
	*/
	PFNGLBLENDFUNCSEPARATEINGRPROC                                glBlendFuncSeparateINGR;

	//@}


	/**
	 * @name internal_GL_INGR_color_clamp
	 *	Extension number in OpenGL registry : 174
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/INGR/color_clamp.txt
	 *	@ingroup internal_GL_INGR
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_INGR_color_clamp is supported, false otherwise.
	 */
	bool isGL_INGR_color_clamp;

	//@}


	/**
	 * @name internal_GL_INGR_interlace_read
	 *	Extension number in OpenGL registry : 175
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/INGR/interlace_read.txt
	 *	@ingroup internal_GL_INGR
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_INGR_interlace_read is supported, false otherwise.
	 */
	bool isGL_INGR_interlace_read;

	//@}


	/**	
	 * @name GL_INGR_palette_buffer
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_INGR_palette_buffer is supported, false otherwise.
	 */
	bool isGL_INGR_palette_buffer;

	//@}


	/**
	 * @name internal_GL_INTEL_parallel_arrays
	 *	Extension number in OpenGL registry : 136
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/INTEL/parallel_arrays.txt
	 *	@ingroup internal_GL_INTEL
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_INTEL_parallel_arrays is supported, false otherwise.
	 */
	bool isGL_INTEL_parallel_arrays;

	/**
	* @brief void glVertexPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer );
	*/
	PFNGLVERTEXPOINTERVINTELPROC                                  glVertexPointervINTEL;

	/**
	* @brief void glNormalPointervINTEL( GLenum type, const GLvoid* *pointer );
	*/
	PFNGLNORMALPOINTERVINTELPROC                                  glNormalPointervINTEL;

	/**
	* @brief void glColorPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer );
	*/
	PFNGLCOLORPOINTERVINTELPROC                                   glColorPointervINTEL;

	/**
	* @brief void glTexCoordPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer );
	*/
	PFNGLTEXCOORDPOINTERVINTELPROC                                glTexCoordPointervINTEL;

	//@}


	/**
	 * @name internal_GL_INTEL_texture_scissor
	 *	Extension number in OpenGL registry : 135
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/INTEL/texture_scissor.txt
	 *	@ingroup internal_GL_INTEL
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_INTEL_texture_scissor is supported, false otherwise.
	 */
	bool isGL_INTEL_texture_scissor;

	//@}


	/**
	 * @name internal_GL_MESA_pack_invert
	 *	Extension number in OpenGL registry : 300
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/MESA/pack_invert.txt
	 *	@ingroup internal_GL_MESA
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_MESA_pack_invert is supported, false otherwise.
	 */
	bool isGL_MESA_pack_invert;

	//@}


	/**
	 * @name internal_GL_MESA_resize_buffers
	 *	Extension number in OpenGL registry : 196
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/MESA/resize_buffers.txt
	 *	@ingroup internal_GL_MESA
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_MESA_resize_buffers is supported, false otherwise.
	 */
	bool isGL_MESA_resize_buffers;

	/**
	* @brief void glResizeBuffersMESA( void );
	*/
	PFNGLRESIZEBUFFERSMESAPROC                                    glResizeBuffersMESA;

	//@}


	/**
	 * @name internal_GL_MESA_window_pos
	 *	Extension number in OpenGL registry : 197
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/MESA/window_pos.txt
	 *	@ingroup internal_GL_MESA
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_MESA_window_pos is supported, false otherwise.
	 */
	bool isGL_MESA_window_pos;

	/**
	* @brief void glWindowPos2dMESA( GLdouble x, GLdouble y );
	*/
	PFNGLWINDOWPOS2DMESAPROC                                      glWindowPos2dMESA;

	/**
	* @brief void glWindowPos2dvMESA( const GLdouble *v );
	*/
	PFNGLWINDOWPOS2DVMESAPROC                                     glWindowPos2dvMESA;

	/**
	* @brief void glWindowPos2fMESA( GLfloat x, GLfloat y );
	*/
	PFNGLWINDOWPOS2FMESAPROC                                      glWindowPos2fMESA;

	/**
	* @brief void glWindowPos2fvMESA( const GLfloat *v );
	*/
	PFNGLWINDOWPOS2FVMESAPROC                                     glWindowPos2fvMESA;

	/**
	* @brief void glWindowPos2iMESA( GLint x, GLint y );
	*/
	PFNGLWINDOWPOS2IMESAPROC                                      glWindowPos2iMESA;

	/**
	* @brief void glWindowPos2ivMESA( const GLint *v );
	*/
	PFNGLWINDOWPOS2IVMESAPROC                                     glWindowPos2ivMESA;

	/**
	* @brief void glWindowPos2sMESA( GLshort x, GLshort y );
	*/
	PFNGLWINDOWPOS2SMESAPROC                                      glWindowPos2sMESA;

	/**
	* @brief void glWindowPos2svMESA( const GLshort *v );
	*/
	PFNGLWINDOWPOS2SVMESAPROC                                     glWindowPos2svMESA;

	/**
	* @brief void glWindowPos3dMESA( GLdouble x, GLdouble y, GLdouble z );
	*/
	PFNGLWINDOWPOS3DMESAPROC                                      glWindowPos3dMESA;

	/**
	* @brief void glWindowPos3dvMESA( const GLdouble *v );
	*/
	PFNGLWINDOWPOS3DVMESAPROC                                     glWindowPos3dvMESA;

	/**
	* @brief void glWindowPos3fMESA( GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLWINDOWPOS3FMESAPROC                                      glWindowPos3fMESA;

	/**
	* @brief void glWindowPos3fvMESA( const GLfloat *v );
	*/
	PFNGLWINDOWPOS3FVMESAPROC                                     glWindowPos3fvMESA;

	/**
	* @brief void glWindowPos3iMESA( GLint x, GLint y, GLint z );
	*/
	PFNGLWINDOWPOS3IMESAPROC                                      glWindowPos3iMESA;

	/**
	* @brief void glWindowPos3ivMESA( const GLint *v );
	*/
	PFNGLWINDOWPOS3IVMESAPROC                                     glWindowPos3ivMESA;

	/**
	* @brief void glWindowPos3sMESA( GLshort x, GLshort y, GLshort z );
	*/
	PFNGLWINDOWPOS3SMESAPROC                                      glWindowPos3sMESA;

	/**
	* @brief void glWindowPos3svMESA( const GLshort *v );
	*/
	PFNGLWINDOWPOS3SVMESAPROC                                     glWindowPos3svMESA;

	/**
	* @brief void glWindowPos4dMESA( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	*/
	PFNGLWINDOWPOS4DMESAPROC                                      glWindowPos4dMESA;

	/**
	* @brief void glWindowPos4dvMESA( const GLdouble *v );
	*/
	PFNGLWINDOWPOS4DVMESAPROC                                     glWindowPos4dvMESA;

	/**
	* @brief void glWindowPos4fMESA( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLWINDOWPOS4FMESAPROC                                      glWindowPos4fMESA;

	/**
	* @brief void glWindowPos4fvMESA( const GLfloat *v );
	*/
	PFNGLWINDOWPOS4FVMESAPROC                                     glWindowPos4fvMESA;

	/**
	* @brief void glWindowPos4iMESA( GLint x, GLint y, GLint z, GLint w );
	*/
	PFNGLWINDOWPOS4IMESAPROC                                      glWindowPos4iMESA;

	/**
	* @brief void glWindowPos4ivMESA( const GLint *v );
	*/
	PFNGLWINDOWPOS4IVMESAPROC                                     glWindowPos4ivMESA;

	/**
	* @brief void glWindowPos4sMESA( GLshort x, GLshort y, GLshort z, GLshort w );
	*/
	PFNGLWINDOWPOS4SMESAPROC                                      glWindowPos4sMESA;

	/**
	* @brief void glWindowPos4svMESA( const GLshort *v );
	*/
	PFNGLWINDOWPOS4SVMESAPROC                                     glWindowPos4svMESA;

	//@}


	/**
	 * @name internal_GL_MESA_ycbcr_texture
	 *	Extension number in OpenGL registry : 301
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/MESA/ycbcr_texture.txt
	 *	@ingroup internal_GL_MESA
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_MESA_ycbcr_texture is supported, false otherwise.
	 */
	bool isGL_MESA_ycbcr_texture;

	//@}


	/**
	 * @name internal_GL_NV_blend_square
	 *	Extension number in OpenGL registry : 194
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/blend_square.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_blend_square is supported, false otherwise.
	 */
	bool isGL_NV_blend_square;

	//@}


	/**
	 * @name internal_GL_NV_copy_depth_to_color
	 *	Extension number in OpenGL registry : 243
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/copy_depth_to_color.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_copy_depth_to_color is supported, false otherwise.
	 */
	bool isGL_NV_copy_depth_to_color;

	//@}


	/**
	 * @name internal_GL_NV_depth_clamp
	 *	Extension number in OpenGL registry : 260
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/depth_clamp.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_depth_clamp is supported, false otherwise.
	 */
	bool isGL_NV_depth_clamp;

	//@}


	/**
	 * @name internal_GL_NV_evaluators
	 *	Extension number in OpenGL registry : 225
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/evaluators.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_evaluators is supported, false otherwise.
	 */
	bool isGL_NV_evaluators;

	/**
	* @brief void glMapControlPointsNV( GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points );
	*/
	PFNGLMAPCONTROLPOINTSNVPROC                                   glMapControlPointsNV;

	/**
	* @brief void glMapParameterivNV( GLenum target, GLenum pname, const GLint *params );
	*/
	PFNGLMAPPARAMETERIVNVPROC                                     glMapParameterivNV;

	/**
	* @brief void glMapParameterfvNV( GLenum target, GLenum pname, const GLfloat *params );
	*/
	PFNGLMAPPARAMETERFVNVPROC                                     glMapParameterfvNV;

	/**
	* @brief void glGetMapControlPointsNV( GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points );
	*/
	PFNGLGETMAPCONTROLPOINTSNVPROC                                glGetMapControlPointsNV;

	/**
	* @brief void glGetMapParameterivNV( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETMAPPARAMETERIVNVPROC                                  glGetMapParameterivNV;

	/**
	* @brief void glGetMapParameterfvNV( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETMAPPARAMETERFVNVPROC                                  glGetMapParameterfvNV;

	/**
	* @brief void glGetMapAttribParameterivNV( GLenum target, GLuint index, GLenum pname, GLint *params );
	*/
	PFNGLGETMAPATTRIBPARAMETERIVNVPROC                            glGetMapAttribParameterivNV;

	/**
	* @brief void glGetMapAttribParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat *params );
	*/
	PFNGLGETMAPATTRIBPARAMETERFVNVPROC                            glGetMapAttribParameterfvNV;

	/**
	* @brief void glEvalMapsNV( GLenum target, GLenum mode );
	*/
	PFNGLEVALMAPSNVPROC                                           glEvalMapsNV;

	//@}


	/**
	 * @name internal_GL_NV_fence
	 *	Extension number in OpenGL registry : 222
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fence.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_fence is supported, false otherwise.
	 */
	bool isGL_NV_fence;

	/**
	* @brief void glDeleteFencesNV( GLsizei n, const GLuint *fences );
	*/
	PFNGLDELETEFENCESNVPROC                                       glDeleteFencesNV;

	/**
	* @brief void glGenFencesNV( GLsizei n, GLuint *fences );
	*/
	PFNGLGENFENCESNVPROC                                          glGenFencesNV;

	/**
	* @brief GLboolean glIsFenceNV( GLuint fence );
	*/
	PFNGLISFENCENVPROC                                            glIsFenceNV;

	/**
	* @brief GLboolean glTestFenceNV( GLuint fence );
	*/
	PFNGLTESTFENCENVPROC                                          glTestFenceNV;

	/**
	* @brief void glGetFenceivNV( GLuint fence, GLenum pname, GLint *params );
	*/
	PFNGLGETFENCEIVNVPROC                                         glGetFenceivNV;

	/**
	* @brief void glFinishFenceNV( GLuint fence );
	*/
	PFNGLFINISHFENCENVPROC                                        glFinishFenceNV;

	/**
	* @brief void glSetFenceNV( GLuint fence, GLenum condition );
	*/
	PFNGLSETFENCENVPROC                                           glSetFenceNV;

	//@}


	/**
	 * @name internal_GL_NV_float_buffer
	 *	Extension number in OpenGL registry : 281
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/float_buffer.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_float_buffer is supported, false otherwise.
	 */
	bool isGL_NV_float_buffer;

	//@}


	/**
	 * @name internal_GL_NV_fog_distance
	 *	Extension number in OpenGL registry : 192
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fog_distance.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_fog_distance is supported, false otherwise.
	 */
	bool isGL_NV_fog_distance;

	//@}


	/**
	 * @name internal_GL_NV_fragment_program
	 *	Extension number in OpenGL registry : 282
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fragment_program.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_fragment_program is supported, false otherwise.
	 */
	bool isGL_NV_fragment_program;

	/**
	* @brief void glProgramNamedParameter4fNV( GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLPROGRAMNAMEDPARAMETER4FNVPROC                            glProgramNamedParameter4fNV;

	/**
	* @brief void glProgramNamedParameter4dNV( GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	*/
	PFNGLPROGRAMNAMEDPARAMETER4DNVPROC                            glProgramNamedParameter4dNV;

	/**
	* @brief void glProgramNamedParameter4fvNV( GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v );
	*/
	PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC                           glProgramNamedParameter4fvNV;

	/**
	* @brief void glProgramNamedParameter4dvNV( GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v );
	*/
	PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC                           glProgramNamedParameter4dvNV;

	/**
	* @brief void glGetProgramNamedParameterfvNV( GLuint id, GLsizei len, const GLubyte *name, GLfloat *params );
	*/
	PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC                         glGetProgramNamedParameterfvNV;

	/**
	* @brief void glGetProgramNamedParameterdvNV( GLuint id, GLsizei len, const GLubyte *name, GLdouble *params );
	*/
	PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC                         glGetProgramNamedParameterdvNV;

	//@}


	/**
	 * @name internal_GL_NV_fragment_program2
	 *	Extension number in OpenGL registry : 304
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fragment_program2.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_fragment_program2 is supported, false otherwise.
	 */
	bool isGL_NV_fragment_program2;

	//@}


	/**
	 * @name internal_GL_NV_fragment_program_option
	 *	Extension number in OpenGL registry : 303
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/fragment_program_option.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_fragment_program_option is supported, false otherwise.
	 */
	bool isGL_NV_fragment_program_option;

	//@}


	/**
	 * @name internal_GL_NV_half_float
	 *	Extension number in OpenGL registry : 283
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/half_float.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_half_float is supported, false otherwise.
	 */
	bool isGL_NV_half_float;

	/**
	* @brief void glVertex2hNV( GLhalfNV x, GLhalfNV y );
	*/
	PFNGLVERTEX2HNVPROC                                           glVertex2hNV;

	/**
	* @brief void glVertex2hvNV( const GLhalfNV *v );
	*/
	PFNGLVERTEX2HVNVPROC                                          glVertex2hvNV;

	/**
	* @brief void glVertex3hNV( GLhalfNV x, GLhalfNV y, GLhalfNV z );
	*/
	PFNGLVERTEX3HNVPROC                                           glVertex3hNV;

	/**
	* @brief void glVertex3hvNV( const GLhalfNV *v );
	*/
	PFNGLVERTEX3HVNVPROC                                          glVertex3hvNV;

	/**
	* @brief void glVertex4hNV( GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w );
	*/
	PFNGLVERTEX4HNVPROC                                           glVertex4hNV;

	/**
	* @brief void glVertex4hvNV( const GLhalfNV *v );
	*/
	PFNGLVERTEX4HVNVPROC                                          glVertex4hvNV;

	/**
	* @brief void glNormal3hNV( GLhalfNV nx, GLhalfNV ny, GLhalfNV nz );
	*/
	PFNGLNORMAL3HNVPROC                                           glNormal3hNV;

	/**
	* @brief void glNormal3hvNV( const GLhalfNV *v );
	*/
	PFNGLNORMAL3HVNVPROC                                          glNormal3hvNV;

	/**
	* @brief void glColor3hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue );
	*/
	PFNGLCOLOR3HNVPROC                                            glColor3hNV;

	/**
	* @brief void glColor3hvNV( const GLhalfNV *v );
	*/
	PFNGLCOLOR3HVNVPROC                                           glColor3hvNV;

	/**
	* @brief void glColor4hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha );
	*/
	PFNGLCOLOR4HNVPROC                                            glColor4hNV;

	/**
	* @brief void glColor4hvNV( const GLhalfNV *v );
	*/
	PFNGLCOLOR4HVNVPROC                                           glColor4hvNV;

	/**
	* @brief void glTexCoord1hNV( GLhalfNV s );
	*/
	PFNGLTEXCOORD1HNVPROC                                         glTexCoord1hNV;

	/**
	* @brief void glTexCoord1hvNV( const GLhalfNV *v );
	*/
	PFNGLTEXCOORD1HVNVPROC                                        glTexCoord1hvNV;

	/**
	* @brief void glTexCoord2hNV( GLhalfNV s, GLhalfNV t );
	*/
	PFNGLTEXCOORD2HNVPROC                                         glTexCoord2hNV;

	/**
	* @brief void glTexCoord2hvNV( const GLhalfNV *v );
	*/
	PFNGLTEXCOORD2HVNVPROC                                        glTexCoord2hvNV;

	/**
	* @brief void glTexCoord3hNV( GLhalfNV s, GLhalfNV t, GLhalfNV r );
	*/
	PFNGLTEXCOORD3HNVPROC                                         glTexCoord3hNV;

	/**
	* @brief void glTexCoord3hvNV( const GLhalfNV *v );
	*/
	PFNGLTEXCOORD3HVNVPROC                                        glTexCoord3hvNV;

	/**
	* @brief void glTexCoord4hNV( GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q );
	*/
	PFNGLTEXCOORD4HNVPROC                                         glTexCoord4hNV;

	/**
	* @brief void glTexCoord4hvNV( const GLhalfNV *v );
	*/
	PFNGLTEXCOORD4HVNVPROC                                        glTexCoord4hvNV;

	/**
	* @brief void glMultiTexCoord1hNV( GLenum target, GLhalfNV s );
	*/
	PFNGLMULTITEXCOORD1HNVPROC                                    glMultiTexCoord1hNV;

	/**
	* @brief void glMultiTexCoord1hvNV( GLenum target, const GLhalfNV *v );
	*/
	PFNGLMULTITEXCOORD1HVNVPROC                                   glMultiTexCoord1hvNV;

	/**
	* @brief void glMultiTexCoord2hNV( GLenum target, GLhalfNV s, GLhalfNV t );
	*/
	PFNGLMULTITEXCOORD2HNVPROC                                    glMultiTexCoord2hNV;

	/**
	* @brief void glMultiTexCoord2hvNV( GLenum target, const GLhalfNV *v );
	*/
	PFNGLMULTITEXCOORD2HVNVPROC                                   glMultiTexCoord2hvNV;

	/**
	* @brief void glMultiTexCoord3hNV( GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r );
	*/
	PFNGLMULTITEXCOORD3HNVPROC                                    glMultiTexCoord3hNV;

	/**
	* @brief void glMultiTexCoord3hvNV( GLenum target, const GLhalfNV *v );
	*/
	PFNGLMULTITEXCOORD3HVNVPROC                                   glMultiTexCoord3hvNV;

	/**
	* @brief void glMultiTexCoord4hNV( GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q );
	*/
	PFNGLMULTITEXCOORD4HNVPROC                                    glMultiTexCoord4hNV;

	/**
	* @brief void glMultiTexCoord4hvNV( GLenum target, const GLhalfNV *v );
	*/
	PFNGLMULTITEXCOORD4HVNVPROC                                   glMultiTexCoord4hvNV;

	/**
	* @brief void glFogCoordhNV( GLhalfNV fog );
	*/
	PFNGLFOGCOORDHNVPROC                                          glFogCoordhNV;

	/**
	* @brief void glFogCoordhvNV( const GLhalfNV *fog );
	*/
	PFNGLFOGCOORDHVNVPROC                                         glFogCoordhvNV;

	/**
	* @brief void glSecondaryColor3hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue );
	*/
	PFNGLSECONDARYCOLOR3HNVPROC                                   glSecondaryColor3hNV;

	/**
	* @brief void glSecondaryColor3hvNV( const GLhalfNV *v );
	*/
	PFNGLSECONDARYCOLOR3HVNVPROC                                  glSecondaryColor3hvNV;

	/**
	* @brief void glVertexWeighthNV( GLhalfNV weight );
	*/
	PFNGLVERTEXWEIGHTHNVPROC                                      glVertexWeighthNV;

	/**
	* @brief void glVertexWeighthvNV( const GLhalfNV *weight );
	*/
	PFNGLVERTEXWEIGHTHVNVPROC                                     glVertexWeighthvNV;

	/**
	* @brief void glVertexAttrib1hNV( GLuint index, GLhalfNV x );
	*/
	PFNGLVERTEXATTRIB1HNVPROC                                     glVertexAttrib1hNV;

	/**
	* @brief void glVertexAttrib1hvNV( GLuint index, const GLhalfNV *v );
	*/
	PFNGLVERTEXATTRIB1HVNVPROC                                    glVertexAttrib1hvNV;

	/**
	* @brief void glVertexAttrib2hNV( GLuint index, GLhalfNV x, GLhalfNV y );
	*/
	PFNGLVERTEXATTRIB2HNVPROC                                     glVertexAttrib2hNV;

	/**
	* @brief void glVertexAttrib2hvNV( GLuint index, const GLhalfNV *v );
	*/
	PFNGLVERTEXATTRIB2HVNVPROC                                    glVertexAttrib2hvNV;

	/**
	* @brief void glVertexAttrib3hNV( GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z );
	*/
	PFNGLVERTEXATTRIB3HNVPROC                                     glVertexAttrib3hNV;

	/**
	* @brief void glVertexAttrib3hvNV( GLuint index, const GLhalfNV *v );
	*/
	PFNGLVERTEXATTRIB3HVNVPROC                                    glVertexAttrib3hvNV;

	/**
	* @brief void glVertexAttrib4hNV( GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w );
	*/
	PFNGLVERTEXATTRIB4HNVPROC                                     glVertexAttrib4hNV;

	/**
	* @brief void glVertexAttrib4hvNV( GLuint index, const GLhalfNV *v );
	*/
	PFNGLVERTEXATTRIB4HVNVPROC                                    glVertexAttrib4hvNV;

	/**
	* @brief void glVertexAttribs1hvNV( GLuint index, GLsizei n, const GLhalfNV *v );
	*/
	PFNGLVERTEXATTRIBS1HVNVPROC                                   glVertexAttribs1hvNV;

	/**
	* @brief void glVertexAttribs2hvNV( GLuint index, GLsizei n, const GLhalfNV *v );
	*/
	PFNGLVERTEXATTRIBS2HVNVPROC                                   glVertexAttribs2hvNV;

	/**
	* @brief void glVertexAttribs3hvNV( GLuint index, GLsizei n, const GLhalfNV *v );
	*/
	PFNGLVERTEXATTRIBS3HVNVPROC                                   glVertexAttribs3hvNV;

	/**
	* @brief void glVertexAttribs4hvNV( GLuint index, GLsizei n, const GLhalfNV *v );
	*/
	PFNGLVERTEXATTRIBS4HVNVPROC                                   glVertexAttribs4hvNV;

	//@}


	/**
	 * @name internal_GL_NV_light_max_exponent
	 *	Extension number in OpenGL registry : 189
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/light_max_exponent.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_light_max_exponent is supported, false otherwise.
	 */
	bool isGL_NV_light_max_exponent;

	//@}


	/**
	 * @name internal_GL_NV_multisample_filter_hint
	 *	Extension number in OpenGL registry : 259
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/multisample_filter_hint.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_multisample_filter_hint is supported, false otherwise.
	 */
	bool isGL_NV_multisample_filter_hint;

	//@}


	/**
	 * @name internal_GL_NV_occlusion_query
	 *	Extension number in OpenGL registry : 261
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/occlusion_query.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_occlusion_query is supported, false otherwise.
	 */
	bool isGL_NV_occlusion_query;

	/**
	* @brief void glGenOcclusionQueriesNV( GLsizei n, GLuint *ids );
	*/
	PFNGLGENOCCLUSIONQUERIESNVPROC                                glGenOcclusionQueriesNV;

	/**
	* @brief void glDeleteOcclusionQueriesNV( GLsizei n, const GLuint *ids );
	*/
	PFNGLDELETEOCCLUSIONQUERIESNVPROC                             glDeleteOcclusionQueriesNV;

	/**
	* @brief GLboolean glIsOcclusionQueryNV( GLuint id );
	*/
	PFNGLISOCCLUSIONQUERYNVPROC                                   glIsOcclusionQueryNV;

	/**
	* @brief void glBeginOcclusionQueryNV( GLuint id );
	*/
	PFNGLBEGINOCCLUSIONQUERYNVPROC                                glBeginOcclusionQueryNV;

	/**
	* @brief void glEndOcclusionQueryNV( void );
	*/
	PFNGLENDOCCLUSIONQUERYNVPROC                                  glEndOcclusionQueryNV;

	/**
	* @brief void glGetOcclusionQueryivNV( GLuint id, GLenum pname, GLint *params );
	*/
	PFNGLGETOCCLUSIONQUERYIVNVPROC                                glGetOcclusionQueryivNV;

	/**
	* @brief void glGetOcclusionQueryuivNV( GLuint id, GLenum pname, GLuint *params );
	*/
	PFNGLGETOCCLUSIONQUERYUIVNVPROC                               glGetOcclusionQueryuivNV;

	//@}


	/**
	 * @name internal_GL_NV_packed_depth_stencil
	 *	Extension number in OpenGL registry : 226
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/packed_depth_stencil.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_packed_depth_stencil is supported, false otherwise.
	 */
	bool isGL_NV_packed_depth_stencil;

	//@}


	/**
	 * @name internal_GL_NV_pixel_data_range
	 *	Extension number in OpenGL registry : 284
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/pixel_data_range.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_pixel_data_range is supported, false otherwise.
	 */
	bool isGL_NV_pixel_data_range;

	/**
	* @brief void glPixelDataRangeNV( GLenum target, GLsizei length, GLvoid *pointer );
	*/
	PFNGLPIXELDATARANGENVPROC                                     glPixelDataRangeNV;

	/**
	* @brief void glFlushPixelDataRangeNV( GLenum target );
	*/
	PFNGLFLUSHPIXELDATARANGENVPROC                                glFlushPixelDataRangeNV;

	//@}


	/**
	 * @name internal_GL_NV_point_sprite
	 *	Extension number in OpenGL registry : 262
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/point_sprite.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_point_sprite is supported, false otherwise.
	 */
	bool isGL_NV_point_sprite;

	/**
	* @brief void glPointParameteriNV( GLenum pname, GLint param );
	*/
	PFNGLPOINTPARAMETERINVPROC                                    glPointParameteriNV;

	/**
	* @brief void glPointParameterivNV( GLenum pname, const GLint *params );
	*/
	PFNGLPOINTPARAMETERIVNVPROC                                   glPointParameterivNV;

	//@}


	/**
	 * @name internal_GL_NV_primitive_restart
	 *	Extension number in OpenGL registry : 285
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/primitive_restart.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_primitive_restart is supported, false otherwise.
	 */
	bool isGL_NV_primitive_restart;

	/**
	* @brief void glPrimitiveRestartNV( void );
	*/
	PFNGLPRIMITIVERESTARTNVPROC                                   glPrimitiveRestartNV;

	/**
	* @brief void glPrimitiveRestartIndexNV( GLuint index );
	*/
	PFNGLPRIMITIVERESTARTINDEXNVPROC                              glPrimitiveRestartIndexNV;

	//@}


	/**
	 * @name internal_GL_NV_register_combiners
	 *	Extension number in OpenGL registry : 191
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/register_combiners.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_register_combiners is supported, false otherwise.
	 */
	bool isGL_NV_register_combiners;

	/**
	* @brief void glCombinerParameterfvNV( GLenum pname, const GLfloat *params );
	*/
	PFNGLCOMBINERPARAMETERFVNVPROC                                glCombinerParameterfvNV;

	/**
	* @brief void glCombinerParameterfNV( GLenum pname, GLfloat param );
	*/
	PFNGLCOMBINERPARAMETERFNVPROC                                 glCombinerParameterfNV;

	/**
	* @brief void glCombinerParameterivNV( GLenum pname, const GLint *params );
	*/
	PFNGLCOMBINERPARAMETERIVNVPROC                                glCombinerParameterivNV;

	/**
	* @brief void glCombinerParameteriNV( GLenum pname, GLint param );
	*/
	PFNGLCOMBINERPARAMETERINVPROC                                 glCombinerParameteriNV;

	/**
	* @brief void glCombinerInputNV( GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage );
	*/
	PFNGLCOMBINERINPUTNVPROC                                      glCombinerInputNV;

	/**
	* @brief void glCombinerOutputNV( GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum );
	*/
	PFNGLCOMBINEROUTPUTNVPROC                                     glCombinerOutputNV;

	/**
	* @brief void glFinalCombinerInputNV( GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage );
	*/
	PFNGLFINALCOMBINERINPUTNVPROC                                 glFinalCombinerInputNV;

	/**
	* @brief void glGetCombinerInputParameterfvNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params );
	*/
	PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC                        glGetCombinerInputParameterfvNV;

	/**
	* @brief void glGetCombinerInputParameterivNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params );
	*/
	PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC                        glGetCombinerInputParameterivNV;

	/**
	* @brief void glGetCombinerOutputParameterfvNV( GLenum stage, GLenum portion, GLenum pname, GLfloat *params );
	*/
	PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC                       glGetCombinerOutputParameterfvNV;

	/**
	* @brief void glGetCombinerOutputParameterivNV( GLenum stage, GLenum portion, GLenum pname, GLint *params );
	*/
	PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC                       glGetCombinerOutputParameterivNV;

	/**
	* @brief void glGetFinalCombinerInputParameterfvNV( GLenum variable, GLenum pname, GLfloat *params );
	*/
	PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC                   glGetFinalCombinerInputParameterfvNV;

	/**
	* @brief void glGetFinalCombinerInputParameterivNV( GLenum variable, GLenum pname, GLint *params );
	*/
	PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC                   glGetFinalCombinerInputParameterivNV;

	//@}


	/**
	 * @name internal_GL_NV_register_combiners2
	 *	Extension number in OpenGL registry : 227
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/register_combiners2.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_register_combiners2 is supported, false otherwise.
	 */
	bool isGL_NV_register_combiners2;

	/**
	* @brief void glCombinerStageParameterfvNV( GLenum stage, GLenum pname, const GLfloat *params );
	*/
	PFNGLCOMBINERSTAGEPARAMETERFVNVPROC                           glCombinerStageParameterfvNV;

	/**
	* @brief void glGetCombinerStageParameterfvNV( GLenum stage, GLenum pname, GLfloat *params );
	*/
	PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC                        glGetCombinerStageParameterfvNV;

	//@}


	/**
	 * @name internal_GL_NV_texgen_emboss
	 *	Extension number in OpenGL registry : 193
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texgen_emboss.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_texgen_emboss is supported, false otherwise.
	 */
	bool isGL_NV_texgen_emboss;

	//@}


	/**
	 * @name internal_GL_NV_texgen_reflection
	 *	Extension number in OpenGL registry : 179
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texgen_reflection.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_texgen_reflection is supported, false otherwise.
	 */
	bool isGL_NV_texgen_reflection;

	//@}


	/**
	 * @name internal_GL_NV_texture_compression_vtc
	 *	Extension number in OpenGL registry : 228
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_compression_vtc.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_texture_compression_vtc is supported, false otherwise.
	 */
	bool isGL_NV_texture_compression_vtc;

	//@}


	/**
	 * @name internal_GL_NV_texture_env_combine4
	 *	Extension number in OpenGL registry : 195
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_env_combine4.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_texture_env_combine4 is supported, false otherwise.
	 */
	bool isGL_NV_texture_env_combine4;

	//@}


	/**
	 * @name internal_GL_NV_texture_expand_normal
	 *	Extension number in OpenGL registry : 286
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_expand_normal.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_texture_expand_normal is supported, false otherwise.
	 */
	bool isGL_NV_texture_expand_normal;

	//@}


	/**
	 * @name internal_GL_NV_texture_rectangle
	 *	Extension number in OpenGL registry : 229
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_rectangle.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_texture_rectangle is supported, false otherwise.
	 */
	bool isGL_NV_texture_rectangle;

	//@}


	/**
	 * @name internal_GL_NV_texture_shader
	 *	Extension number in OpenGL registry : 230
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_shader.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_texture_shader is supported, false otherwise.
	 */
	bool isGL_NV_texture_shader;

	//@}


	/**
	 * @name internal_GL_NV_texture_shader2
	 *	Extension number in OpenGL registry : 231
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_shader2.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_texture_shader2 is supported, false otherwise.
	 */
	bool isGL_NV_texture_shader2;

	//@}


	/**
	 * @name internal_GL_NV_texture_shader3
	 *	Extension number in OpenGL registry : 265
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/texture_shader3.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_texture_shader3 is supported, false otherwise.
	 */
	bool isGL_NV_texture_shader3;

	//@}


	/**
	 * @name internal_GL_NV_vertex_array_range
	 *	Extension number in OpenGL registry : 190
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_array_range.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_array_range is supported, false otherwise.
	 */
	bool isGL_NV_vertex_array_range;

	/**
	* @brief void glFlushVertexArrayRangeNV( void );
	*/
	PFNGLFLUSHVERTEXARRAYRANGENVPROC                              glFlushVertexArrayRangeNV;

	/**
	* @brief void glVertexArrayRangeNV( GLsizei length, const GLvoid *pointer );
	*/
	PFNGLVERTEXARRAYRANGENVPROC                                   glVertexArrayRangeNV;

	//@}


	/**
	 * @name internal_GL_NV_vertex_array_range2
	 *	Extension number in OpenGL registry : 232
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_array_range2.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_array_range2 is supported, false otherwise.
	 */
	bool isGL_NV_vertex_array_range2;

	//@}


	/**
	 * @name internal_GL_NV_vertex_program
	 *	Extension number in OpenGL registry : 233
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program;

	/**
	* @brief GLboolean glAreProgramsResidentNV( GLsizei n, const GLuint *programs, GLboolean *residences );
	*/
	PFNGLAREPROGRAMSRESIDENTNVPROC                                glAreProgramsResidentNV;

	/**
	* @brief void glBindProgramNV( GLenum target, GLuint id );
	*/
	PFNGLBINDPROGRAMNVPROC                                        glBindProgramNV;

	/**
	* @brief void glDeleteProgramsNV( GLsizei n, const GLuint *programs );
	*/
	PFNGLDELETEPROGRAMSNVPROC                                     glDeleteProgramsNV;

	/**
	* @brief void glExecuteProgramNV( GLenum target, GLuint id, const GLfloat *params );
	*/
	PFNGLEXECUTEPROGRAMNVPROC                                     glExecuteProgramNV;

	/**
	* @brief void glGenProgramsNV( GLsizei n, GLuint *programs );
	*/
	PFNGLGENPROGRAMSNVPROC                                        glGenProgramsNV;

	/**
	* @brief void glGetProgramParameterdvNV( GLenum target, GLuint index, GLenum pname, GLdouble *params );
	*/
	PFNGLGETPROGRAMPARAMETERDVNVPROC                              glGetProgramParameterdvNV;

	/**
	* @brief void glGetProgramParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat *params );
	*/
	PFNGLGETPROGRAMPARAMETERFVNVPROC                              glGetProgramParameterfvNV;

	/**
	* @brief void glGetProgramivNV( GLuint id, GLenum pname, GLint *params );
	*/
	PFNGLGETPROGRAMIVNVPROC                                       glGetProgramivNV;

	/**
	* @brief void glGetProgramStringNV( GLuint id, GLenum pname, GLubyte *program );
	*/
	PFNGLGETPROGRAMSTRINGNVPROC                                   glGetProgramStringNV;

	/**
	* @brief void glGetTrackMatrixivNV( GLenum target, GLuint address, GLenum pname, GLint *params );
	*/
	PFNGLGETTRACKMATRIXIVNVPROC                                   glGetTrackMatrixivNV;

	/**
	* @brief void glGetVertexAttribdvNV( GLuint index, GLenum pname, GLdouble *params );
	*/
	PFNGLGETVERTEXATTRIBDVNVPROC                                  glGetVertexAttribdvNV;

	/**
	* @brief void glGetVertexAttribfvNV( GLuint index, GLenum pname, GLfloat *params );
	*/
	PFNGLGETVERTEXATTRIBFVNVPROC                                  glGetVertexAttribfvNV;

	/**
	* @brief void glGetVertexAttribivNV( GLuint index, GLenum pname, GLint *params );
	*/
	PFNGLGETVERTEXATTRIBIVNVPROC                                  glGetVertexAttribivNV;

	/**
	* @brief void glGetVertexAttribPointervNV( GLuint index, GLenum pname, GLvoid* *pointer );
	*/
	PFNGLGETVERTEXATTRIBPOINTERVNVPROC                            glGetVertexAttribPointervNV;

	/**
	* @brief GLboolean glIsProgramNV( GLuint id );
	*/
	PFNGLISPROGRAMNVPROC                                          glIsProgramNV;

	/**
	* @brief void glLoadProgramNV( GLenum target, GLuint id, GLsizei len, const GLubyte *program );
	*/
	PFNGLLOADPROGRAMNVPROC                                        glLoadProgramNV;

	/**
	* @brief void glProgramParameter4dNV( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	*/
	PFNGLPROGRAMPARAMETER4DNVPROC                                 glProgramParameter4dNV;

	/**
	* @brief void glProgramParameter4dvNV( GLenum target, GLuint index, const GLdouble *v );
	*/
	PFNGLPROGRAMPARAMETER4DVNVPROC                                glProgramParameter4dvNV;

	/**
	* @brief void glProgramParameter4fNV( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLPROGRAMPARAMETER4FNVPROC                                 glProgramParameter4fNV;

	/**
	* @brief void glProgramParameter4fvNV( GLenum target, GLuint index, const GLfloat *v );
	*/
	PFNGLPROGRAMPARAMETER4FVNVPROC                                glProgramParameter4fvNV;

	/**
	* @brief void glProgramParameters4dvNV( GLenum target, GLuint index, GLuint count, const GLdouble *v );
	*/
	PFNGLPROGRAMPARAMETERS4DVNVPROC                               glProgramParameters4dvNV;

	/**
	* @brief void glProgramParameters4fvNV( GLenum target, GLuint index, GLuint count, const GLfloat *v );
	*/
	PFNGLPROGRAMPARAMETERS4FVNVPROC                               glProgramParameters4fvNV;

	/**
	* @brief void glRequestResidentProgramsNV( GLsizei n, const GLuint *programs );
	*/
	PFNGLREQUESTRESIDENTPROGRAMSNVPROC                            glRequestResidentProgramsNV;

	/**
	* @brief void glTrackMatrixNV( GLenum target, GLuint address, GLenum matrix, GLenum transform );
	*/
	PFNGLTRACKMATRIXNVPROC                                        glTrackMatrixNV;

	/**
	* @brief void glVertexAttribPointerNV( GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLVERTEXATTRIBPOINTERNVPROC                                glVertexAttribPointerNV;

	/**
	* @brief void glVertexAttrib1dNV( GLuint index, GLdouble x );
	*/
	PFNGLVERTEXATTRIB1DNVPROC                                     glVertexAttrib1dNV;

	/**
	* @brief void glVertexAttrib1dvNV( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB1DVNVPROC                                    glVertexAttrib1dvNV;

	/**
	* @brief void glVertexAttrib1fNV( GLuint index, GLfloat x );
	*/
	PFNGLVERTEXATTRIB1FNVPROC                                     glVertexAttrib1fNV;

	/**
	* @brief void glVertexAttrib1fvNV( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB1FVNVPROC                                    glVertexAttrib1fvNV;

	/**
	* @brief void glVertexAttrib1sNV( GLuint index, GLshort x );
	*/
	PFNGLVERTEXATTRIB1SNVPROC                                     glVertexAttrib1sNV;

	/**
	* @brief void glVertexAttrib1svNV( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB1SVNVPROC                                    glVertexAttrib1svNV;

	/**
	* @brief void glVertexAttrib2dNV( GLuint index, GLdouble x, GLdouble y );
	*/
	PFNGLVERTEXATTRIB2DNVPROC                                     glVertexAttrib2dNV;

	/**
	* @brief void glVertexAttrib2dvNV( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB2DVNVPROC                                    glVertexAttrib2dvNV;

	/**
	* @brief void glVertexAttrib2fNV( GLuint index, GLfloat x, GLfloat y );
	*/
	PFNGLVERTEXATTRIB2FNVPROC                                     glVertexAttrib2fNV;

	/**
	* @brief void glVertexAttrib2fvNV( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB2FVNVPROC                                    glVertexAttrib2fvNV;

	/**
	* @brief void glVertexAttrib2sNV( GLuint index, GLshort x, GLshort y );
	*/
	PFNGLVERTEXATTRIB2SNVPROC                                     glVertexAttrib2sNV;

	/**
	* @brief void glVertexAttrib2svNV( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB2SVNVPROC                                    glVertexAttrib2svNV;

	/**
	* @brief void glVertexAttrib3dNV( GLuint index, GLdouble x, GLdouble y, GLdouble z );
	*/
	PFNGLVERTEXATTRIB3DNVPROC                                     glVertexAttrib3dNV;

	/**
	* @brief void glVertexAttrib3dvNV( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB3DVNVPROC                                    glVertexAttrib3dvNV;

	/**
	* @brief void glVertexAttrib3fNV( GLuint index, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLVERTEXATTRIB3FNVPROC                                     glVertexAttrib3fNV;

	/**
	* @brief void glVertexAttrib3fvNV( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB3FVNVPROC                                    glVertexAttrib3fvNV;

	/**
	* @brief void glVertexAttrib3sNV( GLuint index, GLshort x, GLshort y, GLshort z );
	*/
	PFNGLVERTEXATTRIB3SNVPROC                                     glVertexAttrib3sNV;

	/**
	* @brief void glVertexAttrib3svNV( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB3SVNVPROC                                    glVertexAttrib3svNV;

	/**
	* @brief void glVertexAttrib4dNV( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	*/
	PFNGLVERTEXATTRIB4DNVPROC                                     glVertexAttrib4dNV;

	/**
	* @brief void glVertexAttrib4dvNV( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB4DVNVPROC                                    glVertexAttrib4dvNV;

	/**
	* @brief void glVertexAttrib4fNV( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLVERTEXATTRIB4FNVPROC                                     glVertexAttrib4fNV;

	/**
	* @brief void glVertexAttrib4fvNV( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB4FVNVPROC                                    glVertexAttrib4fvNV;

	/**
	* @brief void glVertexAttrib4sNV( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );
	*/
	PFNGLVERTEXATTRIB4SNVPROC                                     glVertexAttrib4sNV;

	/**
	* @brief void glVertexAttrib4svNV( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB4SVNVPROC                                    glVertexAttrib4svNV;

	/**
	* @brief void glVertexAttrib4ubNV( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );
	*/
	PFNGLVERTEXATTRIB4UBNVPROC                                    glVertexAttrib4ubNV;

	/**
	* @brief void glVertexAttrib4ubvNV( GLuint index, const GLubyte *v );
	*/
	PFNGLVERTEXATTRIB4UBVNVPROC                                   glVertexAttrib4ubvNV;

	/**
	* @brief void glVertexAttribs1dvNV( GLuint index, GLsizei count, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIBS1DVNVPROC                                   glVertexAttribs1dvNV;

	/**
	* @brief void glVertexAttribs1fvNV( GLuint index, GLsizei count, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIBS1FVNVPROC                                   glVertexAttribs1fvNV;

	/**
	* @brief void glVertexAttribs1svNV( GLuint index, GLsizei count, const GLshort *v );
	*/
	PFNGLVERTEXATTRIBS1SVNVPROC                                   glVertexAttribs1svNV;

	/**
	* @brief void glVertexAttribs2dvNV( GLuint index, GLsizei count, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIBS2DVNVPROC                                   glVertexAttribs2dvNV;

	/**
	* @brief void glVertexAttribs2fvNV( GLuint index, GLsizei count, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIBS2FVNVPROC                                   glVertexAttribs2fvNV;

	/**
	* @brief void glVertexAttribs2svNV( GLuint index, GLsizei count, const GLshort *v );
	*/
	PFNGLVERTEXATTRIBS2SVNVPROC                                   glVertexAttribs2svNV;

	/**
	* @brief void glVertexAttribs3dvNV( GLuint index, GLsizei count, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIBS3DVNVPROC                                   glVertexAttribs3dvNV;

	/**
	* @brief void glVertexAttribs3fvNV( GLuint index, GLsizei count, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIBS3FVNVPROC                                   glVertexAttribs3fvNV;

	/**
	* @brief void glVertexAttribs3svNV( GLuint index, GLsizei count, const GLshort *v );
	*/
	PFNGLVERTEXATTRIBS3SVNVPROC                                   glVertexAttribs3svNV;

	/**
	* @brief void glVertexAttribs4dvNV( GLuint index, GLsizei count, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIBS4DVNVPROC                                   glVertexAttribs4dvNV;

	/**
	* @brief void glVertexAttribs4fvNV( GLuint index, GLsizei count, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIBS4FVNVPROC                                   glVertexAttribs4fvNV;

	/**
	* @brief void glVertexAttribs4svNV( GLuint index, GLsizei count, const GLshort *v );
	*/
	PFNGLVERTEXATTRIBS4SVNVPROC                                   glVertexAttribs4svNV;

	/**
	* @brief void glVertexAttribs4ubvNV( GLuint index, GLsizei count, const GLubyte *v );
	*/
	PFNGLVERTEXATTRIBS4UBVNVPROC                                  glVertexAttribs4ubvNV;

	//@}


	/**
	 * @name internal_GL_NV_vertex_program1_1
	 *	Extension number in OpenGL registry : 266
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program1_1.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program1_1 is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program1_1;

	//@}


	/**
	 * @name internal_GL_NV_vertex_program2
	 *	Extension number in OpenGL registry : 287
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program2.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program2 is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program2;

	//@}


	/**
	 * @name internal_GL_NV_vertex_program2_option
	 *	Extension number in OpenGL registry : 305
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program2_option.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program2_option is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program2_option;

	//@}


	/**
	 * @name internal_GL_NV_vertex_program3
	 *	Extension number in OpenGL registry : 306
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/NV/vertex_program3.txt
	 *	@ingroup internal_GL_NV
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program3 is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program3;

	//@}


	/**
	 * @name internal_GL_OES_read_format
	 *	Extension number in OpenGL registry : 295
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/OES/read_format.txt
	 *	@ingroup internal_GL_OES
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_OES_read_format is supported, false otherwise.
	 */
	bool isGL_OES_read_format;

	//@}


	/**
	 * @name internal_GL_OML_interlace
	 *	Extension number in OpenGL registry : 239
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/OML/interlace.txt
	 *	@ingroup internal_GL_OML
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_OML_interlace is supported, false otherwise.
	 */
	bool isGL_OML_interlace;

	//@}


	/**
	 * @name internal_GL_OML_resample
	 *	Extension number in OpenGL registry : 241
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/OML/resample.txt
	 *	@ingroup internal_GL_OML
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_OML_resample is supported, false otherwise.
	 */
	bool isGL_OML_resample;

	//@}


	/**
	 * @name internal_GL_OML_subsample
	 *	Extension number in OpenGL registry : 240
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/OML/subsample.txt
	 *	@ingroup internal_GL_OML
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_OML_subsample is supported, false otherwise.
	 */
	bool isGL_OML_subsample;

	//@}


	/**
	 * @name internal_GL_PGI_misc_hints
	 *	Extension number in OpenGL registry : 77
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/PGI/misc_hints.txt
	 *	@ingroup internal_GL_PGI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_PGI_misc_hints is supported, false otherwise.
	 */
	bool isGL_PGI_misc_hints;

	/**
	* @brief void glHintPGI( GLenum target, GLint mode );
	*/
	PFNGLHINTPGIPROC                                              glHintPGI;

	//@}


	/**
	 * @name internal_GL_PGI_vertex_hints
	 *	Extension number in OpenGL registry : 76
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/PGI/vertex_hints.txt
	 *	@ingroup internal_GL_PGI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_PGI_vertex_hints is supported, false otherwise.
	 */
	bool isGL_PGI_vertex_hints;

	//@}


	/**
	 * @name internal_GL_REND_screen_coordinates
	 *	Extension number in OpenGL registry : 155
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/REND/screen_coordinates.txt
	 *	@ingroup internal_GL_REND
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_REND_screen_coordinates is supported, false otherwise.
	 */
	bool isGL_REND_screen_coordinates;

	//@}


	/**
	 * @name internal_GL_S3_s3tc
	 *	Extension number in OpenGL registry : 276
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/S3/s3tc.txt
	 *	@ingroup internal_GL_S3
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_S3_s3tc is supported, false otherwise.
	 */
	bool isGL_S3_s3tc;

	//@}


	/**
	 * @name internal_GL_SGIS_detail_texture
	 *	Extension number in OpenGL registry : 21
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/detail_texture.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_detail_texture is supported, false otherwise.
	 */
	bool isGL_SGIS_detail_texture;

	/**
	* @brief void glDetailTexFuncSGIS( GLenum target, GLsizei n, const GLfloat *points );
	*/
	PFNGLDETAILTEXFUNCSGISPROC                                    glDetailTexFuncSGIS;

	/**
	* @brief void glGetDetailTexFuncSGIS( GLenum target, GLfloat *points );
	*/
	PFNGLGETDETAILTEXFUNCSGISPROC                                 glGetDetailTexFuncSGIS;

	//@}


	/**
	 * @name internal_GL_SGIS_fog_function
	 *	Extension number in OpenGL registry : 64
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/fog_func.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_fog_function is supported, false otherwise.
	 */
	bool isGL_SGIS_fog_function;

	/**
	* @brief void glFogFuncSGIS( GLsizei n, const GLfloat *points );
	*/
	PFNGLFOGFUNCSGISPROC                                          glFogFuncSGIS;

	/**
	* @brief void glGetFogFuncSGIS( GLfloat *points );
	*/
	PFNGLGETFOGFUNCSGISPROC                                       glGetFogFuncSGIS;

	//@}


	/**
	 * @name internal_GL_SGIS_generate_mipmap
	 *	Extension number in OpenGL registry : 32
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/generate_mipmap.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_generate_mipmap is supported, false otherwise.
	 */
	bool isGL_SGIS_generate_mipmap;

	//@}


	/**
	 * @name internal_GL_SGIS_multisample
	 *	Extension number in OpenGL registry : 25
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/multisample.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_multisample is supported, false otherwise.
	 */
	bool isGL_SGIS_multisample;

	/**
	* @brief void glSampleMaskSGIS( GLclampf value, GLboolean invert );
	*/
	PFNGLSAMPLEMASKSGISPROC                                       glSampleMaskSGIS;

	/**
	* @brief void glSamplePatternSGIS( GLenum pattern );
	*/
	PFNGLSAMPLEPATTERNSGISPROC                                    glSamplePatternSGIS;

	//@}


	/**
	 * @name internal_GL_SGIS_pixel_texture
	 *	Extension number in OpenGL registry : 15
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/pixel_texture.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_pixel_texture is supported, false otherwise.
	 */
	bool isGL_SGIS_pixel_texture;

	/**
	* @brief void glPixelTexGenParameteriSGIS( GLenum pname, GLint param );
	*/
	PFNGLPIXELTEXGENPARAMETERISGISPROC                            glPixelTexGenParameteriSGIS;

	/**
	* @brief void glPixelTexGenParameterivSGIS( GLenum pname, const GLint *params );
	*/
	PFNGLPIXELTEXGENPARAMETERIVSGISPROC                           glPixelTexGenParameterivSGIS;

	/**
	* @brief void glPixelTexGenParameterfSGIS( GLenum pname, GLfloat param );
	*/
	PFNGLPIXELTEXGENPARAMETERFSGISPROC                            glPixelTexGenParameterfSGIS;

	/**
	* @brief void glPixelTexGenParameterfvSGIS( GLenum pname, const GLfloat *params );
	*/
	PFNGLPIXELTEXGENPARAMETERFVSGISPROC                           glPixelTexGenParameterfvSGIS;

	/**
	* @brief void glGetPixelTexGenParameterivSGIS( GLenum pname, GLint *params );
	*/
	PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC                        glGetPixelTexGenParameterivSGIS;

	/**
	* @brief void glGetPixelTexGenParameterfvSGIS( GLenum pname, GLfloat *params );
	*/
	PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC                        glGetPixelTexGenParameterfvSGIS;

	//@}


	/**	
	 * @name GL_SGIS_point_line_texgen
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_point_line_texgen is supported, false otherwise.
	 */
	bool isGL_SGIS_point_line_texgen;

	//@}


	/**	
	 * @name GL_SGIS_point_parameters
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_point_parameters is supported, false otherwise.
	 */
	bool isGL_SGIS_point_parameters;

	/**
	* @brief void glPointParameterfSGIS( GLenum pname, GLfloat param );
	*/
	PFNGLPOINTPARAMETERFSGISPROC                                  glPointParameterfSGIS;

	/**
	* @brief void glPointParameterfvSGIS( GLenum pname, const GLfloat *params );
	*/
	PFNGLPOINTPARAMETERFVSGISPROC                                 glPointParameterfvSGIS;

	//@}


	/**
	 * @name internal_GL_SGIS_sharpen_texture
	 *	Extension number in OpenGL registry : 22
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/sharpen_texture.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_sharpen_texture is supported, false otherwise.
	 */
	bool isGL_SGIS_sharpen_texture;

	/**
	* @brief void glSharpenTexFuncSGIS( GLenum target, GLsizei n, const GLfloat *points );
	*/
	PFNGLSHARPENTEXFUNCSGISPROC                                   glSharpenTexFuncSGIS;

	/**
	* @brief void glGetSharpenTexFuncSGIS( GLenum target, GLfloat *points );
	*/
	PFNGLGETSHARPENTEXFUNCSGISPROC                                glGetSharpenTexFuncSGIS;

	//@}


	/**
	 * @name internal_GL_SGIS_texture4D
	 *	Extension number in OpenGL registry : 16
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture4D.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture4D is supported, false otherwise.
	 */
	bool isGL_SGIS_texture4D;

	/**
	* @brief void glTexImage4DSGIS( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
	*/
	PFNGLTEXIMAGE4DSGISPROC                                       glTexImage4DSGIS;

	/**
	* @brief void glTexSubImage4DSGIS( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels );
	*/
	PFNGLTEXSUBIMAGE4DSGISPROC                                    glTexSubImage4DSGIS;

	//@}


	/**
	 * @name internal_GL_SGIS_texture_border_clamp
	 *	Extension number in OpenGL registry : 36
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_border_clamp.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_border_clamp is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_border_clamp;

	//@}


	/**
	 * @name internal_GL_SGIS_texture_color_mask
	 *	Extension number in OpenGL registry : 214
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_color_mask.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_color_mask is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_color_mask;

	/**
	* @brief void glTextureColorMaskSGIS( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha );
	*/
	PFNGLTEXTURECOLORMASKSGISPROC                                 glTextureColorMaskSGIS;

	//@}


	/**
	 * @name internal_GL_SGIS_texture_edge_clamp
	 *	Extension number in OpenGL registry : 35
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_edge_clamp.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_edge_clamp is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_edge_clamp;

	//@}


	/**
	 * @name internal_GL_SGIS_texture_filter4
	 *	Extension number in OpenGL registry : 7
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_filter4.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_filter4 is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_filter4;

	/**
	* @brief void glGetTexFilterFuncSGIS( GLenum target, GLenum filter, GLfloat *weights );
	*/
	PFNGLGETTEXFILTERFUNCSGISPROC                                 glGetTexFilterFuncSGIS;

	/**
	* @brief void glTexFilterFuncSGIS( GLenum target, GLenum filter, GLsizei n, const GLfloat *weights );
	*/
	PFNGLTEXFILTERFUNCSGISPROC                                    glTexFilterFuncSGIS;

	//@}


	/**
	 * @name internal_GL_SGIS_texture_lod
	 *	Extension number in OpenGL registry : 24
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_lod.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_lod is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_lod;

	//@}


	/**
	 * @name internal_GL_SGIS_texture_select
	 *	Extension number in OpenGL registry : 51
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIS/texture_select.txt
	 *	@ingroup internal_GL_SGIS
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_select is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_select;

	//@}


	/**
	 * @name internal_GL_SGIX_async
	 *	Extension number in OpenGL registry : 132
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/async.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_async is supported, false otherwise.
	 */
	bool isGL_SGIX_async;

	/**
	* @brief void glAsyncMarkerSGIX( GLuint marker );
	*/
	PFNGLASYNCMARKERSGIXPROC                                      glAsyncMarkerSGIX;

	/**
	* @brief GLint glFinishAsyncSGIX( GLuint *markerp );
	*/
	PFNGLFINISHASYNCSGIXPROC                                      glFinishAsyncSGIX;

	/**
	* @brief GLint glPollAsyncSGIX( GLuint *markerp );
	*/
	PFNGLPOLLASYNCSGIXPROC                                        glPollAsyncSGIX;

	/**
	* @brief GLuint glGenAsyncMarkersSGIX( GLsizei range );
	*/
	PFNGLGENASYNCMARKERSSGIXPROC                                  glGenAsyncMarkersSGIX;

	/**
	* @brief void glDeleteAsyncMarkersSGIX( GLuint marker, GLsizei range );
	*/
	PFNGLDELETEASYNCMARKERSSGIXPROC                               glDeleteAsyncMarkersSGIX;

	/**
	* @brief GLboolean glIsAsyncMarkerSGIX( GLuint marker );
	*/
	PFNGLISASYNCMARKERSGIXPROC                                    glIsAsyncMarkerSGIX;

	//@}


	/**
	 * @name internal_GL_SGIX_async_histogram
	 *	Extension number in OpenGL registry : 134
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/async_histogram.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_async_histogram is supported, false otherwise.
	 */
	bool isGL_SGIX_async_histogram;

	//@}


	/**
	 * @name internal_GL_SGIX_async_pixel
	 *	Extension number in OpenGL registry : 133
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/async_pixel.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_async_pixel is supported, false otherwise.
	 */
	bool isGL_SGIX_async_pixel;

	//@}


	/**
	 * @name internal_GL_SGIX_blend_alpha_minmax
	 *	Extension number in OpenGL registry : 119
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/blend_alpha_minmax.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_blend_alpha_minmax is supported, false otherwise.
	 */
	bool isGL_SGIX_blend_alpha_minmax;

	//@}


	/**	
	 * @name GL_SGIX_calligraphic_fragment
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_calligraphic_fragment is supported, false otherwise.
	 */
	bool isGL_SGIX_calligraphic_fragment;

	//@}


	/**
	 * @name internal_GL_SGIX_clipmap
	 *	Extension number in OpenGL registry : 33
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/clipmap.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_clipmap is supported, false otherwise.
	 */
	bool isGL_SGIX_clipmap;

	//@}


	/**	
	 * @name GL_SGIX_convolution_accuracy
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_convolution_accuracy is supported, false otherwise.
	 */
	bool isGL_SGIX_convolution_accuracy;

	//@}


	/**	
	 * @name GL_SGIX_depth_pass_instrument
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_depth_pass_instrument is supported, false otherwise.
	 */
	bool isGL_SGIX_depth_pass_instrument;

	//@}


	/**
	 * @name internal_GL_SGIX_depth_texture
	 *	Extension number in OpenGL registry : 63
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/depth_texture.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_depth_texture is supported, false otherwise.
	 */
	bool isGL_SGIX_depth_texture;

	//@}


	/**
	 * @name internal_GL_SGIX_flush_raster
	 *	Extension number in OpenGL registry : 61
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/flush_raster.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_flush_raster is supported, false otherwise.
	 */
	bool isGL_SGIX_flush_raster;

	/**
	* @brief void glFlushRasterSGIX( void );
	*/
	PFNGLFLUSHRASTERSGIXPROC                                      glFlushRasterSGIX;

	//@}


	/**
	 * @name internal_GL_SGIX_fog_offset
	 *	Extension number in OpenGL registry : 65
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/fog_offset.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_fog_offset is supported, false otherwise.
	 */
	bool isGL_SGIX_fog_offset;

	//@}


	/**	
	 * @name GL_SGIX_fog_scale
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_fog_scale is supported, false otherwise.
	 */
	bool isGL_SGIX_fog_scale;

	//@}


	/**	
	 * @name GL_SGIX_fragment_lighting
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_fragment_lighting is supported, false otherwise.
	 */
	bool isGL_SGIX_fragment_lighting;

	/**
	* @brief void glFragmentColorMaterialSGIX( GLenum face, GLenum mode );
	*/
	PFNGLFRAGMENTCOLORMATERIALSGIXPROC                            glFragmentColorMaterialSGIX;

	/**
	* @brief void glFragmentLightfSGIX( GLenum light, GLenum pname, GLfloat param );
	*/
	PFNGLFRAGMENTLIGHTFSGIXPROC                                   glFragmentLightfSGIX;

	/**
	* @brief void glFragmentLightfvSGIX( GLenum light, GLenum pname, const GLfloat *params );
	*/
	PFNGLFRAGMENTLIGHTFVSGIXPROC                                  glFragmentLightfvSGIX;

	/**
	* @brief void glFragmentLightiSGIX( GLenum light, GLenum pname, GLint param );
	*/
	PFNGLFRAGMENTLIGHTISGIXPROC                                   glFragmentLightiSGIX;

	/**
	* @brief void glFragmentLightivSGIX( GLenum light, GLenum pname, const GLint *params );
	*/
	PFNGLFRAGMENTLIGHTIVSGIXPROC                                  glFragmentLightivSGIX;

	/**
	* @brief void glFragmentLightModelfSGIX( GLenum pname, GLfloat param );
	*/
	PFNGLFRAGMENTLIGHTMODELFSGIXPROC                              glFragmentLightModelfSGIX;

	/**
	* @brief void glFragmentLightModelfvSGIX( GLenum pname, const GLfloat *params );
	*/
	PFNGLFRAGMENTLIGHTMODELFVSGIXPROC                             glFragmentLightModelfvSGIX;

	/**
	* @brief void glFragmentLightModeliSGIX( GLenum pname, GLint param );
	*/
	PFNGLFRAGMENTLIGHTMODELISGIXPROC                              glFragmentLightModeliSGIX;

	/**
	* @brief void glFragmentLightModelivSGIX( GLenum pname, const GLint *params );
	*/
	PFNGLFRAGMENTLIGHTMODELIVSGIXPROC                             glFragmentLightModelivSGIX;

	/**
	* @brief void glFragmentMaterialfSGIX( GLenum face, GLenum pname, GLfloat param );
	*/
	PFNGLFRAGMENTMATERIALFSGIXPROC                                glFragmentMaterialfSGIX;

	/**
	* @brief void glFragmentMaterialfvSGIX( GLenum face, GLenum pname, const GLfloat *params );
	*/
	PFNGLFRAGMENTMATERIALFVSGIXPROC                               glFragmentMaterialfvSGIX;

	/**
	* @brief void glFragmentMaterialiSGIX( GLenum face, GLenum pname, GLint param );
	*/
	PFNGLFRAGMENTMATERIALISGIXPROC                                glFragmentMaterialiSGIX;

	/**
	* @brief void glFragmentMaterialivSGIX( GLenum face, GLenum pname, const GLint *params );
	*/
	PFNGLFRAGMENTMATERIALIVSGIXPROC                               glFragmentMaterialivSGIX;

	/**
	* @brief void glGetFragmentLightfvSGIX( GLenum light, GLenum pname, GLfloat *params );
	*/
	PFNGLGETFRAGMENTLIGHTFVSGIXPROC                               glGetFragmentLightfvSGIX;

	/**
	* @brief void glGetFragmentLightivSGIX( GLenum light, GLenum pname, GLint *params );
	*/
	PFNGLGETFRAGMENTLIGHTIVSGIXPROC                               glGetFragmentLightivSGIX;

	/**
	* @brief void glGetFragmentMaterialfvSGIX( GLenum face, GLenum pname, GLfloat *params );
	*/
	PFNGLGETFRAGMENTMATERIALFVSGIXPROC                            glGetFragmentMaterialfvSGIX;

	/**
	* @brief void glGetFragmentMaterialivSGIX( GLenum face, GLenum pname, GLint *params );
	*/
	PFNGLGETFRAGMENTMATERIALIVSGIXPROC                            glGetFragmentMaterialivSGIX;

	/**
	* @brief void glLightEnviSGIX( GLenum pname, GLint param );
	*/
	PFNGLLIGHTENVISGIXPROC                                        glLightEnviSGIX;

	//@}


	/**
	 * @name internal_GL_SGIX_framezoom
	 *	Extension number in OpenGL registry : 57
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/framezoom.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_framezoom is supported, false otherwise.
	 */
	bool isGL_SGIX_framezoom;

	/**
	* @brief void glFrameZoomSGIX( GLint factor );
	*/
	PFNGLFRAMEZOOMSGIXPROC                                        glFrameZoomSGIX;

	//@}


	/**	
	 * @name GL_SGIX_igloo_interface
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_igloo_interface is supported, false otherwise.
	 */
	bool isGL_SGIX_igloo_interface;

	/**
	* @brief void glIglooInterfaceSGIX( GLenum pname, const GLvoid *params );
	*/
	PFNGLIGLOOINTERFACESGIXPROC                                   glIglooInterfaceSGIX;

	//@}


	/**	
	 * @name GL_SGIX_impact_pixel_texture
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_impact_pixel_texture is supported, false otherwise.
	 */
	bool isGL_SGIX_impact_pixel_texture;

	//@}


	/**
	 * @name internal_GL_SGIX_instruments
	 *	Extension number in OpenGL registry : 55
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/instruments.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_instruments is supported, false otherwise.
	 */
	bool isGL_SGIX_instruments;

	/**
	* @brief GLint glGetInstrumentsSGIX( void );
	*/
	PFNGLGETINSTRUMENTSSGIXPROC                                   glGetInstrumentsSGIX;

	/**
	* @brief void glInstrumentsBufferSGIX( GLsizei size, GLint *buffer );
	*/
	PFNGLINSTRUMENTSBUFFERSGIXPROC                                glInstrumentsBufferSGIX;

	/**
	* @brief GLint glPollInstrumentsSGIX( GLint *marker_p );
	*/
	PFNGLPOLLINSTRUMENTSSGIXPROC                                  glPollInstrumentsSGIX;

	/**
	* @brief void glReadInstrumentsSGIX( GLint marker );
	*/
	PFNGLREADINSTRUMENTSSGIXPROC                                  glReadInstrumentsSGIX;

	/**
	* @brief void glStartInstrumentsSGIX( void );
	*/
	PFNGLSTARTINSTRUMENTSSGIXPROC                                 glStartInstrumentsSGIX;

	/**
	* @brief void glStopInstrumentsSGIX( GLint marker );
	*/
	PFNGLSTOPINSTRUMENTSSGIXPROC                                  glStopInstrumentsSGIX;

	//@}


	/**
	 * @name internal_GL_SGIX_interlace
	 *	Extension number in OpenGL registry : 45
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/interlace.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_interlace is supported, false otherwise.
	 */
	bool isGL_SGIX_interlace;

	//@}


	/**
	 * @name internal_GL_SGIX_ir_instrument1
	 *	Extension number in OpenGL registry : 81
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/ir_instrument1.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_ir_instrument1 is supported, false otherwise.
	 */
	bool isGL_SGIX_ir_instrument1;

	//@}


	/**
	 * @name internal_GL_SGIX_list_priority
	 *	Extension number in OpenGL registry : 80
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/list_priority.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_list_priority is supported, false otherwise.
	 */
	bool isGL_SGIX_list_priority;

	/**
	* @brief void glGetListParameterfvSGIX( GLuint list, GLenum pname, GLfloat *params );
	*/
	PFNGLGETLISTPARAMETERFVSGIXPROC                               glGetListParameterfvSGIX;

	/**
	* @brief void glGetListParameterivSGIX( GLuint list, GLenum pname, GLint *params );
	*/
	PFNGLGETLISTPARAMETERIVSGIXPROC                               glGetListParameterivSGIX;

	/**
	* @brief void glListParameterfSGIX( GLuint list, GLenum pname, GLfloat param );
	*/
	PFNGLLISTPARAMETERFSGIXPROC                                   glListParameterfSGIX;

	/**
	* @brief void glListParameterfvSGIX( GLuint list, GLenum pname, const GLfloat *params );
	*/
	PFNGLLISTPARAMETERFVSGIXPROC                                  glListParameterfvSGIX;

	/**
	* @brief void glListParameteriSGIX( GLuint list, GLenum pname, GLint param );
	*/
	PFNGLLISTPARAMETERISGIXPROC                                   glListParameteriSGIX;

	/**
	* @brief void glListParameterivSGIX( GLuint list, GLenum pname, const GLint *params );
	*/
	PFNGLLISTPARAMETERIVSGIXPROC                                  glListParameterivSGIX;

	//@}


	/**
	 * @name internal_GL_SGIX_pixel_texture
	 *	Extension number in OpenGL registry : 15a
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/sgix_pixel_texture.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_pixel_texture is supported, false otherwise.
	 */
	bool isGL_SGIX_pixel_texture;

	/**
	* @brief void glPixelTexGenSGIX( GLenum mode );
	*/
	PFNGLPIXELTEXGENSGIXPROC                                      glPixelTexGenSGIX;

	//@}


	/**	
	 * @name GL_SGIX_pixel_tiles
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_pixel_tiles is supported, false otherwise.
	 */
	bool isGL_SGIX_pixel_tiles;

	//@}


	/**	
	 * @name GL_SGIX_polynomial_ffd
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_polynomial_ffd is supported, false otherwise.
	 */
	bool isGL_SGIX_polynomial_ffd;

	/**
	* @brief void glDeformationMap3dSGIX( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points );
	*/
	PFNGLDEFORMATIONMAP3DSGIXPROC                                 glDeformationMap3dSGIX;

	/**
	* @brief void glDeformationMap3fSGIX( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points );
	*/
	PFNGLDEFORMATIONMAP3FSGIXPROC                                 glDeformationMap3fSGIX;

	/**
	* @brief void glDeformSGIX( GLbitfield mask );
	*/
	PFNGLDEFORMSGIXPROC                                           glDeformSGIX;

	/**
	* @brief void glLoadIdentityDeformationMapSGIX( GLbitfield mask );
	*/
	PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC                       glLoadIdentityDeformationMapSGIX;

	//@}


	/**
	 * @name internal_GL_SGIX_reference_plane
	 *	Extension number in OpenGL registry : 60
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/reference_plane.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_reference_plane is supported, false otherwise.
	 */
	bool isGL_SGIX_reference_plane;

	/**
	* @brief void glReferencePlaneSGIX( const GLdouble *equation );
	*/
	PFNGLREFERENCEPLANESGIXPROC                                   glReferencePlaneSGIX;

	//@}


	/**
	 * @name internal_GL_SGIX_resample
	 *	Extension number in OpenGL registry : 212
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/resample.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_resample is supported, false otherwise.
	 */
	bool isGL_SGIX_resample;

	//@}


	/**	
	 * @name GL_SGIX_scalebias_hint
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_scalebias_hint is supported, false otherwise.
	 */
	bool isGL_SGIX_scalebias_hint;

	//@}


	/**
	 * @name internal_GL_SGIX_shadow
	 *	Extension number in OpenGL registry : 34
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/shadow.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_shadow is supported, false otherwise.
	 */
	bool isGL_SGIX_shadow;

	//@}


	/**
	 * @name internal_GL_SGIX_shadow_ambient
	 *	Extension number in OpenGL registry : 90
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/shadow_ambient.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_shadow_ambient is supported, false otherwise.
	 */
	bool isGL_SGIX_shadow_ambient;

	//@}


	/**
	 * @name internal_GL_SGIX_sprite
	 *	Extension number in OpenGL registry : 52
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/sprite.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_sprite is supported, false otherwise.
	 */
	bool isGL_SGIX_sprite;

	/**
	* @brief void glSpriteParameterfSGIX( GLenum pname, GLfloat param );
	*/
	PFNGLSPRITEPARAMETERFSGIXPROC                                 glSpriteParameterfSGIX;

	/**
	* @brief void glSpriteParameterfvSGIX( GLenum pname, const GLfloat *params );
	*/
	PFNGLSPRITEPARAMETERFVSGIXPROC                                glSpriteParameterfvSGIX;

	/**
	* @brief void glSpriteParameteriSGIX( GLenum pname, GLint param );
	*/
	PFNGLSPRITEPARAMETERISGIXPROC                                 glSpriteParameteriSGIX;

	/**
	* @brief void glSpriteParameterivSGIX( GLenum pname, const GLint *params );
	*/
	PFNGLSPRITEPARAMETERIVSGIXPROC                                glSpriteParameterivSGIX;

	//@}


	/**	
	 * @name GL_SGIX_subsample
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_subsample is supported, false otherwise.
	 */
	bool isGL_SGIX_subsample;

	//@}


	/**
	 * @name internal_GL_SGIX_tag_sample_buffer
	 *	Extension number in OpenGL registry : 58
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/tag_sample_buffer.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_tag_sample_buffer is supported, false otherwise.
	 */
	bool isGL_SGIX_tag_sample_buffer;

	/**
	* @brief void glTagSampleBufferSGIX( void );
	*/
	PFNGLTAGSAMPLEBUFFERSGIXPROC                                  glTagSampleBufferSGIX;

	//@}


	/**
	 * @name internal_GL_SGIX_texture_add_env
	 *	Extension number in OpenGL registry : 69
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_env_add.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_add_env is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_add_env;

	//@}


	/**
	 * @name internal_GL_SGIX_texture_coordinate_clamp
	 *	Extension number in OpenGL registry : 235
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_coordinate_clamp.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_coordinate_clamp is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_coordinate_clamp;

	//@}


	/**
	 * @name internal_GL_SGIX_texture_lod_bias
	 *	Extension number in OpenGL registry : 84
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_lod_bias.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_lod_bias is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_lod_bias;

	//@}


	/**
	 * @name internal_GL_SGIX_texture_multi_buffer
	 *	Extension number in OpenGL registry : 53
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_multi_buffer.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_multi_buffer is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_multi_buffer;

	//@}


	/**
	 * @name internal_GL_SGIX_texture_scale_bias
	 *	Extension number in OpenGL registry : 56
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/texture_scale_bias.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_scale_bias is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_scale_bias;

	//@}


	/**	
	 * @name GL_SGIX_texture_select
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_select is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_select;

	//@}


	/**
	 * @name internal_GL_SGIX_vertex_preclip
	 *	Extension number in OpenGL registry : 210
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/vertex_preclip.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_vertex_preclip is supported, false otherwise.
	 */
	bool isGL_SGIX_vertex_preclip;

	//@}


	/**
	 * @name internal_GL_SGIX_ycrcb
	 *	Extension number in OpenGL registry : 101
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGIX/ycrcb.txt
	 *	@ingroup internal_GL_SGIX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_ycrcb is supported, false otherwise.
	 */
	bool isGL_SGIX_ycrcb;

	//@}


	/**	
	 * @name GL_SGIX_ycrcb_subsample
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_ycrcb_subsample is supported, false otherwise.
	 */
	bool isGL_SGIX_ycrcb_subsample;

	//@}


	/**	
	 * @name GL_SGIX_ycrcba
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGIX_ycrcba is supported, false otherwise.
	 */
	bool isGL_SGIX_ycrcba;

	//@}


	/**
	 * @name internal_GL_SGI_color_matrix
	 *	Extension number in OpenGL registry : 13
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGI/color_matrix.txt
	 *	@ingroup internal_GL_SGI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGI_color_matrix is supported, false otherwise.
	 */
	bool isGL_SGI_color_matrix;

	//@}


	/**
	 * @name internal_GL_SGI_color_table
	 *	Extension number in OpenGL registry : 14
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGI/color_table.txt
	 *	@ingroup internal_GL_SGI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGI_color_table is supported, false otherwise.
	 */
	bool isGL_SGI_color_table;

	/**
	* @brief void glColorTableSGI( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );
	*/
	PFNGLCOLORTABLESGIPROC                                        glColorTableSGI;

	/**
	* @brief void glColorTableParameterfvSGI( GLenum target, GLenum pname, const GLfloat *params );
	*/
	PFNGLCOLORTABLEPARAMETERFVSGIPROC                             glColorTableParameterfvSGI;

	/**
	* @brief void glColorTableParameterivSGI( GLenum target, GLenum pname, const GLint *params );
	*/
	PFNGLCOLORTABLEPARAMETERIVSGIPROC                             glColorTableParameterivSGI;

	/**
	* @brief void glCopyColorTableSGI( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );
	*/
	PFNGLCOPYCOLORTABLESGIPROC                                    glCopyColorTableSGI;

	/**
	* @brief void glGetColorTableSGI( GLenum target, GLenum format, GLenum type, GLvoid *table );
	*/
	PFNGLGETCOLORTABLESGIPROC                                     glGetColorTableSGI;

	/**
	* @brief void glGetColorTableParameterfvSGI( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETCOLORTABLEPARAMETERFVSGIPROC                          glGetColorTableParameterfvSGI;

	/**
	* @brief void glGetColorTableParameterivSGI( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETCOLORTABLEPARAMETERIVSGIPROC                          glGetColorTableParameterivSGI;

	//@}


	/**	
	 * @name GL_SGI_depth_pass_instrument
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGI_depth_pass_instrument is supported, false otherwise.
	 */
	bool isGL_SGI_depth_pass_instrument;

	//@}


	/**
	 * @name internal_GL_SGI_texture_color_table
	 *	Extension number in OpenGL registry : 17
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SGI/texture_color_table.txt
	 *	@ingroup internal_GL_SGI
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SGI_texture_color_table is supported, false otherwise.
	 */
	bool isGL_SGI_texture_color_table;

	//@}


	/**
	 * @name internal_GL_SUNX_constant_data
	 *	Extension number in OpenGL registry : 163
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUNX/constant_data.txt
	 *	@ingroup internal_GL_SUNX
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SUNX_constant_data is supported, false otherwise.
	 */
	bool isGL_SUNX_constant_data;

	/**
	* @brief void glFinishTextureSUNX( void );
	*/
	PFNGLFINISHTEXTURESUNXPROC                                    glFinishTextureSUNX;

	//@}


	/**
	 * @name internal_GL_SUN_convolution_border_modes
	 *	Extension number in OpenGL registry : 182
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/convolution_border_modes.txt
	 *	@ingroup internal_GL_SUN
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SUN_convolution_border_modes is supported, false otherwise.
	 */
	bool isGL_SUN_convolution_border_modes;

	//@}


	/**
	 * @name internal_GL_SUN_global_alpha
	 *	Extension number in OpenGL registry : 164
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/global_alpha.txt
	 *	@ingroup internal_GL_SUN
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SUN_global_alpha is supported, false otherwise.
	 */
	bool isGL_SUN_global_alpha;

	/**
	* @brief void glGlobalAlphaFactorbSUN( GLbyte factor );
	*/
	PFNGLGLOBALALPHAFACTORBSUNPROC                                glGlobalAlphaFactorbSUN;

	/**
	* @brief void glGlobalAlphaFactorsSUN( GLshort factor );
	*/
	PFNGLGLOBALALPHAFACTORSSUNPROC                                glGlobalAlphaFactorsSUN;

	/**
	* @brief void glGlobalAlphaFactoriSUN( GLint factor );
	*/
	PFNGLGLOBALALPHAFACTORISUNPROC                                glGlobalAlphaFactoriSUN;

	/**
	* @brief void glGlobalAlphaFactorfSUN( GLfloat factor );
	*/
	PFNGLGLOBALALPHAFACTORFSUNPROC                                glGlobalAlphaFactorfSUN;

	/**
	* @brief void glGlobalAlphaFactordSUN( GLdouble factor );
	*/
	PFNGLGLOBALALPHAFACTORDSUNPROC                                glGlobalAlphaFactordSUN;

	/**
	* @brief void glGlobalAlphaFactorubSUN( GLubyte factor );
	*/
	PFNGLGLOBALALPHAFACTORUBSUNPROC                               glGlobalAlphaFactorubSUN;

	/**
	* @brief void glGlobalAlphaFactorusSUN( GLushort factor );
	*/
	PFNGLGLOBALALPHAFACTORUSSUNPROC                               glGlobalAlphaFactorusSUN;

	/**
	* @brief void glGlobalAlphaFactoruiSUN( GLuint factor );
	*/
	PFNGLGLOBALALPHAFACTORUISUNPROC                               glGlobalAlphaFactoruiSUN;

	//@}


	/**
	 * @name internal_GL_SUN_mesh_array
	 *	Extension number in OpenGL registry : 257
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/mesh_array.txt
	 *	@ingroup internal_GL_SUN
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SUN_mesh_array is supported, false otherwise.
	 */
	bool isGL_SUN_mesh_array;

	/**
	* @brief void glDrawMeshArraysSUN( GLenum mode, GLint first, GLsizei count, GLsizei width );
	*/
	PFNGLDRAWMESHARRAYSSUNPROC                                    glDrawMeshArraysSUN;

	//@}


	/**
	 * @name internal_GL_SUN_slice_accum
	 *	Extension number in OpenGL registry : 258
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/slice_accum.txt
	 *	@ingroup internal_GL_SUN
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SUN_slice_accum is supported, false otherwise.
	 */
	bool isGL_SUN_slice_accum;

	//@}


	/**
	 * @name internal_GL_SUN_triangle_list
	 *	Extension number in OpenGL registry : 165
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/triangle_list.txt
	 *	@ingroup internal_GL_SUN
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SUN_triangle_list is supported, false otherwise.
	 */
	bool isGL_SUN_triangle_list;

	/**
	* @brief void glReplacementCodeuiSUN( GLuint code );
	*/
	PFNGLREPLACEMENTCODEUISUNPROC                                 glReplacementCodeuiSUN;

	/**
	* @brief void glReplacementCodeusSUN( GLushort code );
	*/
	PFNGLREPLACEMENTCODEUSSUNPROC                                 glReplacementCodeusSUN;

	/**
	* @brief void glReplacementCodeubSUN( GLubyte code );
	*/
	PFNGLREPLACEMENTCODEUBSUNPROC                                 glReplacementCodeubSUN;

	/**
	* @brief void glReplacementCodeuivSUN( const GLuint *code );
	*/
	PFNGLREPLACEMENTCODEUIVSUNPROC                                glReplacementCodeuivSUN;

	/**
	* @brief void glReplacementCodeusvSUN( const GLushort *code );
	*/
	PFNGLREPLACEMENTCODEUSVSUNPROC                                glReplacementCodeusvSUN;

	/**
	* @brief void glReplacementCodeubvSUN( const GLubyte *code );
	*/
	PFNGLREPLACEMENTCODEUBVSUNPROC                                glReplacementCodeubvSUN;

	/**
	* @brief void glReplacementCodePointerSUN( GLenum type, GLsizei stride, const GLvoid* *pointer );
	*/
	PFNGLREPLACEMENTCODEPOINTERSUNPROC                            glReplacementCodePointerSUN;

	//@}


	/**
	 * @name internal_GL_SUN_vertex
	 *	Extension number in OpenGL registry : 166
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/SUN/vertex.txt
	 *	@ingroup internal_GL_SUN
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_SUN_vertex is supported, false otherwise.
	 */
	bool isGL_SUN_vertex;

	/**
	* @brief void glColor4ubVertex2fSUN( GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y );
	*/
	PFNGLCOLOR4UBVERTEX2FSUNPROC                                  glColor4ubVertex2fSUN;

	/**
	* @brief void glColor4ubVertex2fvSUN( const GLubyte *c, const GLfloat *v );
	*/
	PFNGLCOLOR4UBVERTEX2FVSUNPROC                                 glColor4ubVertex2fvSUN;

	/**
	* @brief void glColor4ubVertex3fSUN( GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLCOLOR4UBVERTEX3FSUNPROC                                  glColor4ubVertex3fSUN;

	/**
	* @brief void glColor4ubVertex3fvSUN( const GLubyte *c, const GLfloat *v );
	*/
	PFNGLCOLOR4UBVERTEX3FVSUNPROC                                 glColor4ubVertex3fvSUN;

	/**
	* @brief void glColor3fVertex3fSUN( GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLCOLOR3FVERTEX3FSUNPROC                                   glColor3fVertex3fSUN;

	/**
	* @brief void glColor3fVertex3fvSUN( const GLfloat *c, const GLfloat *v );
	*/
	PFNGLCOLOR3FVERTEX3FVSUNPROC                                  glColor3fVertex3fvSUN;

	/**
	* @brief void glNormal3fVertex3fSUN( GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLNORMAL3FVERTEX3FSUNPROC                                  glNormal3fVertex3fSUN;

	/**
	* @brief void glNormal3fVertex3fvSUN( const GLfloat *n, const GLfloat *v );
	*/
	PFNGLNORMAL3FVERTEX3FVSUNPROC                                 glNormal3fVertex3fvSUN;

	/**
	* @brief void glColor4fNormal3fVertex3fSUN( GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC                           glColor4fNormal3fVertex3fSUN;

	/**
	* @brief void glColor4fNormal3fVertex3fvSUN( const GLfloat *c, const GLfloat *n, const GLfloat *v );
	*/
	PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC                          glColor4fNormal3fVertex3fvSUN;

	/**
	* @brief void glTexCoord2fVertex3fSUN( GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLTEXCOORD2FVERTEX3FSUNPROC                                glTexCoord2fVertex3fSUN;

	/**
	* @brief void glTexCoord2fVertex3fvSUN( const GLfloat *tc, const GLfloat *v );
	*/
	PFNGLTEXCOORD2FVERTEX3FVSUNPROC                               glTexCoord2fVertex3fvSUN;

	/**
	* @brief void glTexCoord4fVertex4fSUN( GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLTEXCOORD4FVERTEX4FSUNPROC                                glTexCoord4fVertex4fSUN;

	/**
	* @brief void glTexCoord4fVertex4fvSUN( const GLfloat *tc, const GLfloat *v );
	*/
	PFNGLTEXCOORD4FVERTEX4FVSUNPROC                               glTexCoord4fVertex4fvSUN;

	/**
	* @brief void glTexCoord2fColor4ubVertex3fSUN( GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC                        glTexCoord2fColor4ubVertex3fSUN;

	/**
	* @brief void glTexCoord2fColor4ubVertex3fvSUN( const GLfloat *tc, const GLubyte *c, const GLfloat *v );
	*/
	PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC                       glTexCoord2fColor4ubVertex3fvSUN;

	/**
	* @brief void glTexCoord2fColor3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC                         glTexCoord2fColor3fVertex3fSUN;

	/**
	* @brief void glTexCoord2fColor3fVertex3fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *v );
	*/
	PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC                        glTexCoord2fColor3fVertex3fvSUN;

	/**
	* @brief void glTexCoord2fNormal3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC                        glTexCoord2fNormal3fVertex3fSUN;

	/**
	* @brief void glTexCoord2fNormal3fVertex3fvSUN( const GLfloat *tc, const GLfloat *n, const GLfloat *v );
	*/
	PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC                       glTexCoord2fNormal3fVertex3fvSUN;

	/**
	* @brief void glTexCoord2fColor4fNormal3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC                 glTexCoord2fColor4fNormal3fVertex3fSUN;

	/**
	* @brief void glTexCoord2fColor4fNormal3fVertex3fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v );
	*/
	PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC                glTexCoord2fColor4fNormal3fVertex3fvSUN;

	/**
	* @brief void glTexCoord4fColor4fNormal3fVertex4fSUN( GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC                 glTexCoord4fColor4fNormal3fVertex4fSUN;

	/**
	* @brief void glTexCoord4fColor4fNormal3fVertex4fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v );
	*/
	PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC                glTexCoord4fColor4fNormal3fVertex4fvSUN;

	/**
	* @brief void glReplacementCodeuiVertex3fSUN( GLuint rc, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC                         glReplacementCodeuiVertex3fSUN;

	/**
	* @brief void glReplacementCodeuiVertex3fvSUN( const GLuint *rc, const GLfloat *v );
	*/
	PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC                        glReplacementCodeuiVertex3fvSUN;

	/**
	* @brief void glReplacementCodeuiColor4ubVertex3fSUN( GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC                 glReplacementCodeuiColor4ubVertex3fSUN;

	/**
	* @brief void glReplacementCodeuiColor4ubVertex3fvSUN( const GLuint *rc, const GLubyte *c, const GLfloat *v );
	*/
	PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC                glReplacementCodeuiColor4ubVertex3fvSUN;

	/**
	* @brief void glReplacementCodeuiColor3fVertex3fSUN( GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC                  glReplacementCodeuiColor3fVertex3fSUN;

	/**
	* @brief void glReplacementCodeuiColor3fVertex3fvSUN( const GLuint *rc, const GLfloat *c, const GLfloat *v );
	*/
	PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC                 glReplacementCodeuiColor3fVertex3fvSUN;

	/**
	* @brief void glReplacementCodeuiNormal3fVertex3fSUN( GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC                 glReplacementCodeuiNormal3fVertex3fSUN;

	/**
	* @brief void glReplacementCodeuiNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *n, const GLfloat *v );
	*/
	PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC                glReplacementCodeuiNormal3fVertex3fvSUN;

	/**
	* @brief void glReplacementCodeuiColor4fNormal3fVertex3fSUN( GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC          glReplacementCodeuiColor4fNormal3fVertex3fSUN;

	/**
	* @brief void glReplacementCodeuiColor4fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v );
	*/
	PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC         glReplacementCodeuiColor4fNormal3fVertex3fvSUN;

	/**
	* @brief void glReplacementCodeuiTexCoord2fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC               glReplacementCodeuiTexCoord2fVertex3fSUN;

	/**
	* @brief void glReplacementCodeuiTexCoord2fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *v );
	*/
	PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC              glReplacementCodeuiTexCoord2fVertex3fvSUN;

	/**
	* @brief void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC       glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;

	/**
	* @brief void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v );
	*/
	PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC      glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;

	/**
	* @brief void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;

	/**
	* @brief void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v );
	*/
	PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;

	//@}


	/**	
	 * @name GL_VERSION_1_2
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_2 is supported, false otherwise.
	 */
	bool isGL_VERSION_1_2;

	/**
	* @brief void glBlendColor( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
	*/
	PFNGLBLENDCOLORPROC                                           glBlendColor;

	/**
	* @brief void glBlendEquation( GLenum mode );
	*/
	PFNGLBLENDEQUATIONPROC                                        glBlendEquation;

	/**
	* @brief void glDrawRangeElements( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices );
	*/
	PFNGLDRAWRANGEELEMENTSPROC                                    glDrawRangeElements;

	/**
	* @brief void glColorTable( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table );
	*/
	PFNGLCOLORTABLEPROC                                           glColorTable;

	/**
	* @brief void glColorTableParameterfv( GLenum target, GLenum pname, const GLfloat *params );
	*/
	PFNGLCOLORTABLEPARAMETERFVPROC                                glColorTableParameterfv;

	/**
	* @brief void glColorTableParameteriv( GLenum target, GLenum pname, const GLint *params );
	*/
	PFNGLCOLORTABLEPARAMETERIVPROC                                glColorTableParameteriv;

	/**
	* @brief void glCopyColorTable( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );
	*/
	PFNGLCOPYCOLORTABLEPROC                                       glCopyColorTable;

	/**
	* @brief void glGetColorTable( GLenum target, GLenum format, GLenum type, GLvoid *table );
	*/
	PFNGLGETCOLORTABLEPROC                                        glGetColorTable;

	/**
	* @brief void glGetColorTableParameterfv( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETCOLORTABLEPARAMETERFVPROC                             glGetColorTableParameterfv;

	/**
	* @brief void glGetColorTableParameteriv( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETCOLORTABLEPARAMETERIVPROC                             glGetColorTableParameteriv;

	/**
	* @brief void glColorSubTable( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data );
	*/
	PFNGLCOLORSUBTABLEPROC                                        glColorSubTable;

	/**
	* @brief void glCopyColorSubTable( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width );
	*/
	PFNGLCOPYCOLORSUBTABLEPROC                                    glCopyColorSubTable;

	/**
	* @brief void glConvolutionFilter1D( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image );
	*/
	PFNGLCONVOLUTIONFILTER1DPROC                                  glConvolutionFilter1D;

	/**
	* @brief void glConvolutionFilter2D( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image );
	*/
	PFNGLCONVOLUTIONFILTER2DPROC                                  glConvolutionFilter2D;

	/**
	* @brief void glConvolutionParameterf( GLenum target, GLenum pname, GLfloat params );
	*/
	PFNGLCONVOLUTIONPARAMETERFPROC                                glConvolutionParameterf;

	/**
	* @brief void glConvolutionParameterfv( GLenum target, GLenum pname, const GLfloat *params );
	*/
	PFNGLCONVOLUTIONPARAMETERFVPROC                               glConvolutionParameterfv;

	/**
	* @brief void glConvolutionParameteri( GLenum target, GLenum pname, GLint params );
	*/
	PFNGLCONVOLUTIONPARAMETERIPROC                                glConvolutionParameteri;

	/**
	* @brief void glConvolutionParameteriv( GLenum target, GLenum pname, const GLint *params );
	*/
	PFNGLCONVOLUTIONPARAMETERIVPROC                               glConvolutionParameteriv;

	/**
	* @brief void glCopyConvolutionFilter1D( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width );
	*/
	PFNGLCOPYCONVOLUTIONFILTER1DPROC                              glCopyConvolutionFilter1D;

	/**
	* @brief void glCopyConvolutionFilter2D( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height );
	*/
	PFNGLCOPYCONVOLUTIONFILTER2DPROC                              glCopyConvolutionFilter2D;

	/**
	* @brief void glGetConvolutionFilter( GLenum target, GLenum format, GLenum type, GLvoid *image );
	*/
	PFNGLGETCONVOLUTIONFILTERPROC                                 glGetConvolutionFilter;

	/**
	* @brief void glGetConvolutionParameterfv( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETCONVOLUTIONPARAMETERFVPROC                            glGetConvolutionParameterfv;

	/**
	* @brief void glGetConvolutionParameteriv( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETCONVOLUTIONPARAMETERIVPROC                            glGetConvolutionParameteriv;

	/**
	* @brief void glGetSeparableFilter( GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span );
	*/
	PFNGLGETSEPARABLEFILTERPROC                                   glGetSeparableFilter;

	/**
	* @brief void glSeparableFilter2D( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column );
	*/
	PFNGLSEPARABLEFILTER2DPROC                                    glSeparableFilter2D;

	/**
	* @brief void glGetHistogram( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );
	*/
	PFNGLGETHISTOGRAMPROC                                         glGetHistogram;

	/**
	* @brief void glGetHistogramParameterfv( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETHISTOGRAMPARAMETERFVPROC                              glGetHistogramParameterfv;

	/**
	* @brief void glGetHistogramParameteriv( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETHISTOGRAMPARAMETERIVPROC                              glGetHistogramParameteriv;

	/**
	* @brief void glGetMinmax( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values );
	*/
	PFNGLGETMINMAXPROC                                            glGetMinmax;

	/**
	* @brief void glGetMinmaxParameterfv( GLenum target, GLenum pname, GLfloat *params );
	*/
	PFNGLGETMINMAXPARAMETERFVPROC                                 glGetMinmaxParameterfv;

	/**
	* @brief void glGetMinmaxParameteriv( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETMINMAXPARAMETERIVPROC                                 glGetMinmaxParameteriv;

	/**
	* @brief void glHistogram( GLenum target, GLsizei width, GLenum internalformat, GLboolean sink );
	*/
	PFNGLHISTOGRAMPROC                                            glHistogram;

	/**
	* @brief void glMinmax( GLenum target, GLenum internalformat, GLboolean sink );
	*/
	PFNGLMINMAXPROC                                               glMinmax;

	/**
	* @brief void glResetHistogram( GLenum target );
	*/
	PFNGLRESETHISTOGRAMPROC                                       glResetHistogram;

	/**
	* @brief void glResetMinmax( GLenum target );
	*/
	PFNGLRESETMINMAXPROC                                          glResetMinmax;

	/**
	* @brief void glTexImage3D( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
	*/
	PFNGLTEXIMAGE3DPROC                                           glTexImage3D;

	/**
	* @brief void glTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );
	*/
	PFNGLTEXSUBIMAGE3DPROC                                        glTexSubImage3D;

	/**
	* @brief void glCopyTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );
	*/
	PFNGLCOPYTEXSUBIMAGE3DPROC                                    glCopyTexSubImage3D;

	//@}


	/**	
	 * @name GL_VERSION_1_3
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_3 is supported, false otherwise.
	 */
	bool isGL_VERSION_1_3;

	/**
	* @brief void glActiveTexture( GLenum texture );
	*/
	PFNGLACTIVETEXTUREPROC                                        glActiveTexture;

	/**
	* @brief void glClientActiveTexture( GLenum texture );
	*/
	PFNGLCLIENTACTIVETEXTUREPROC                                  glClientActiveTexture;

	/**
	* @brief void glMultiTexCoord1d( GLenum target, GLdouble s );
	*/
	PFNGLMULTITEXCOORD1DPROC                                      glMultiTexCoord1d;

	/**
	* @brief void glMultiTexCoord1dv( GLenum target, const GLdouble *v );
	*/
	PFNGLMULTITEXCOORD1DVPROC                                     glMultiTexCoord1dv;

	/**
	* @brief void glMultiTexCoord1f( GLenum target, GLfloat s );
	*/
	PFNGLMULTITEXCOORD1FPROC                                      glMultiTexCoord1f;

	/**
	* @brief void glMultiTexCoord1fv( GLenum target, const GLfloat *v );
	*/
	PFNGLMULTITEXCOORD1FVPROC                                     glMultiTexCoord1fv;

	/**
	* @brief void glMultiTexCoord1i( GLenum target, GLint s );
	*/
	PFNGLMULTITEXCOORD1IPROC                                      glMultiTexCoord1i;

	/**
	* @brief void glMultiTexCoord1iv( GLenum target, const GLint *v );
	*/
	PFNGLMULTITEXCOORD1IVPROC                                     glMultiTexCoord1iv;

	/**
	* @brief void glMultiTexCoord1s( GLenum target, GLshort s );
	*/
	PFNGLMULTITEXCOORD1SPROC                                      glMultiTexCoord1s;

	/**
	* @brief void glMultiTexCoord1sv( GLenum target, const GLshort *v );
	*/
	PFNGLMULTITEXCOORD1SVPROC                                     glMultiTexCoord1sv;

	/**
	* @brief void glMultiTexCoord2d( GLenum target, GLdouble s, GLdouble t );
	*/
	PFNGLMULTITEXCOORD2DPROC                                      glMultiTexCoord2d;

	/**
	* @brief void glMultiTexCoord2dv( GLenum target, const GLdouble *v );
	*/
	PFNGLMULTITEXCOORD2DVPROC                                     glMultiTexCoord2dv;

	/**
	* @brief void glMultiTexCoord2f( GLenum target, GLfloat s, GLfloat t );
	*/
	PFNGLMULTITEXCOORD2FPROC                                      glMultiTexCoord2f;

	/**
	* @brief void glMultiTexCoord2fv( GLenum target, const GLfloat *v );
	*/
	PFNGLMULTITEXCOORD2FVPROC                                     glMultiTexCoord2fv;

	/**
	* @brief void glMultiTexCoord2i( GLenum target, GLint s, GLint t );
	*/
	PFNGLMULTITEXCOORD2IPROC                                      glMultiTexCoord2i;

	/**
	* @brief void glMultiTexCoord2iv( GLenum target, const GLint *v );
	*/
	PFNGLMULTITEXCOORD2IVPROC                                     glMultiTexCoord2iv;

	/**
	* @brief void glMultiTexCoord2s( GLenum target, GLshort s, GLshort t );
	*/
	PFNGLMULTITEXCOORD2SPROC                                      glMultiTexCoord2s;

	/**
	* @brief void glMultiTexCoord2sv( GLenum target, const GLshort *v );
	*/
	PFNGLMULTITEXCOORD2SVPROC                                     glMultiTexCoord2sv;

	/**
	* @brief void glMultiTexCoord3d( GLenum target, GLdouble s, GLdouble t, GLdouble r );
	*/
	PFNGLMULTITEXCOORD3DPROC                                      glMultiTexCoord3d;

	/**
	* @brief void glMultiTexCoord3dv( GLenum target, const GLdouble *v );
	*/
	PFNGLMULTITEXCOORD3DVPROC                                     glMultiTexCoord3dv;

	/**
	* @brief void glMultiTexCoord3f( GLenum target, GLfloat s, GLfloat t, GLfloat r );
	*/
	PFNGLMULTITEXCOORD3FPROC                                      glMultiTexCoord3f;

	/**
	* @brief void glMultiTexCoord3fv( GLenum target, const GLfloat *v );
	*/
	PFNGLMULTITEXCOORD3FVPROC                                     glMultiTexCoord3fv;

	/**
	* @brief void glMultiTexCoord3i( GLenum target, GLint s, GLint t, GLint r );
	*/
	PFNGLMULTITEXCOORD3IPROC                                      glMultiTexCoord3i;

	/**
	* @brief void glMultiTexCoord3iv( GLenum target, const GLint *v );
	*/
	PFNGLMULTITEXCOORD3IVPROC                                     glMultiTexCoord3iv;

	/**
	* @brief void glMultiTexCoord3s( GLenum target, GLshort s, GLshort t, GLshort r );
	*/
	PFNGLMULTITEXCOORD3SPROC                                      glMultiTexCoord3s;

	/**
	* @brief void glMultiTexCoord3sv( GLenum target, const GLshort *v );
	*/
	PFNGLMULTITEXCOORD3SVPROC                                     glMultiTexCoord3sv;

	/**
	* @brief void glMultiTexCoord4d( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q );
	*/
	PFNGLMULTITEXCOORD4DPROC                                      glMultiTexCoord4d;

	/**
	* @brief void glMultiTexCoord4dv( GLenum target, const GLdouble *v );
	*/
	PFNGLMULTITEXCOORD4DVPROC                                     glMultiTexCoord4dv;

	/**
	* @brief void glMultiTexCoord4f( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q );
	*/
	PFNGLMULTITEXCOORD4FPROC                                      glMultiTexCoord4f;

	/**
	* @brief void glMultiTexCoord4fv( GLenum target, const GLfloat *v );
	*/
	PFNGLMULTITEXCOORD4FVPROC                                     glMultiTexCoord4fv;

	/**
	* @brief void glMultiTexCoord4i( GLenum target, GLint s, GLint t, GLint r, GLint q );
	*/
	PFNGLMULTITEXCOORD4IPROC                                      glMultiTexCoord4i;

	/**
	* @brief void glMultiTexCoord4iv( GLenum target, const GLint *v );
	*/
	PFNGLMULTITEXCOORD4IVPROC                                     glMultiTexCoord4iv;

	/**
	* @brief void glMultiTexCoord4s( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q );
	*/
	PFNGLMULTITEXCOORD4SPROC                                      glMultiTexCoord4s;

	/**
	* @brief void glMultiTexCoord4sv( GLenum target, const GLshort *v );
	*/
	PFNGLMULTITEXCOORD4SVPROC                                     glMultiTexCoord4sv;

	/**
	* @brief void glLoadTransposeMatrixf( const GLfloat *m );
	*/
	PFNGLLOADTRANSPOSEMATRIXFPROC                                 glLoadTransposeMatrixf;

	/**
	* @brief void glLoadTransposeMatrixd( const GLdouble *m );
	*/
	PFNGLLOADTRANSPOSEMATRIXDPROC                                 glLoadTransposeMatrixd;

	/**
	* @brief void glMultTransposeMatrixf( const GLfloat *m );
	*/
	PFNGLMULTTRANSPOSEMATRIXFPROC                                 glMultTransposeMatrixf;

	/**
	* @brief void glMultTransposeMatrixd( const GLdouble *m );
	*/
	PFNGLMULTTRANSPOSEMATRIXDPROC                                 glMultTransposeMatrixd;

	/**
	* @brief void glSampleCoverage( GLclampf value, GLboolean invert );
	*/
	PFNGLSAMPLECOVERAGEPROC                                       glSampleCoverage;

	/**
	* @brief void glCompressedTexImage3D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXIMAGE3DPROC                                 glCompressedTexImage3D;

	/**
	* @brief void glCompressedTexImage2D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXIMAGE2DPROC                                 glCompressedTexImage2D;

	/**
	* @brief void glCompressedTexImage1D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXIMAGE1DPROC                                 glCompressedTexImage1D;

	/**
	* @brief void glCompressedTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC                              glCompressedTexSubImage3D;

	/**
	* @brief void glCompressedTexSubImage2D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC                              glCompressedTexSubImage2D;

	/**
	* @brief void glCompressedTexSubImage1D( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data );
	*/
	PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC                              glCompressedTexSubImage1D;

	/**
	* @brief void glGetCompressedTexImage( GLenum target, GLint level, GLvoid *img );
	*/
	PFNGLGETCOMPRESSEDTEXIMAGEPROC                                glGetCompressedTexImage;

	//@}


	/**	
	 * @name GL_VERSION_1_4
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_4 is supported, false otherwise.
	 */
	bool isGL_VERSION_1_4;

	/**
	* @brief void glBlendFuncSeparate( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha );
	*/
	PFNGLBLENDFUNCSEPARATEPROC                                    glBlendFuncSeparate;

	/**
	* @brief void glFogCoordf( GLfloat coord );
	*/
	PFNGLFOGCOORDFPROC                                            glFogCoordf;

	/**
	* @brief void glFogCoordfv( const GLfloat *coord );
	*/
	PFNGLFOGCOORDFVPROC                                           glFogCoordfv;

	/**
	* @brief void glFogCoordd( GLdouble coord );
	*/
	PFNGLFOGCOORDDPROC                                            glFogCoordd;

	/**
	* @brief void glFogCoorddv( const GLdouble *coord );
	*/
	PFNGLFOGCOORDDVPROC                                           glFogCoorddv;

	/**
	* @brief void glFogCoordPointer( GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLFOGCOORDPOINTERPROC                                      glFogCoordPointer;

	/**
	* @brief void glMultiDrawArrays( GLenum mode, GLint *first, GLsizei *count, GLsizei primcount );
	*/
	PFNGLMULTIDRAWARRAYSPROC                                      glMultiDrawArrays;

	/**
	* @brief void glMultiDrawElements( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount );
	*/
	PFNGLMULTIDRAWELEMENTSPROC                                    glMultiDrawElements;

	/**
	* @brief void glPointParameterf( GLenum pname, GLfloat param );
	*/
	PFNGLPOINTPARAMETERFPROC                                      glPointParameterf;

	/**
	* @brief void glPointParameterfv( GLenum pname, const GLfloat *params );
	*/
	PFNGLPOINTPARAMETERFVPROC                                     glPointParameterfv;

	/**
	* @brief void glPointParameteri( GLenum pname, GLint param );
	*/
	PFNGLPOINTPARAMETERIPROC                                      glPointParameteri;

	/**
	* @brief void glPointParameteriv( GLenum pname, const GLint *params );
	*/
	PFNGLPOINTPARAMETERIVPROC                                     glPointParameteriv;

	/**
	* @brief void glSecondaryColor3b( GLbyte red, GLbyte green, GLbyte blue );
	*/
	PFNGLSECONDARYCOLOR3BPROC                                     glSecondaryColor3b;

	/**
	* @brief void glSecondaryColor3bv( const GLbyte *v );
	*/
	PFNGLSECONDARYCOLOR3BVPROC                                    glSecondaryColor3bv;

	/**
	* @brief void glSecondaryColor3d( GLdouble red, GLdouble green, GLdouble blue );
	*/
	PFNGLSECONDARYCOLOR3DPROC                                     glSecondaryColor3d;

	/**
	* @brief void glSecondaryColor3dv( const GLdouble *v );
	*/
	PFNGLSECONDARYCOLOR3DVPROC                                    glSecondaryColor3dv;

	/**
	* @brief void glSecondaryColor3f( GLfloat red, GLfloat green, GLfloat blue );
	*/
	PFNGLSECONDARYCOLOR3FPROC                                     glSecondaryColor3f;

	/**
	* @brief void glSecondaryColor3fv( const GLfloat *v );
	*/
	PFNGLSECONDARYCOLOR3FVPROC                                    glSecondaryColor3fv;

	/**
	* @brief void glSecondaryColor3i( GLint red, GLint green, GLint blue );
	*/
	PFNGLSECONDARYCOLOR3IPROC                                     glSecondaryColor3i;

	/**
	* @brief void glSecondaryColor3iv( const GLint *v );
	*/
	PFNGLSECONDARYCOLOR3IVPROC                                    glSecondaryColor3iv;

	/**
	* @brief void glSecondaryColor3s( GLshort red, GLshort green, GLshort blue );
	*/
	PFNGLSECONDARYCOLOR3SPROC                                     glSecondaryColor3s;

	/**
	* @brief void glSecondaryColor3sv( const GLshort *v );
	*/
	PFNGLSECONDARYCOLOR3SVPROC                                    glSecondaryColor3sv;

	/**
	* @brief void glSecondaryColor3ub( GLubyte red, GLubyte green, GLubyte blue );
	*/
	PFNGLSECONDARYCOLOR3UBPROC                                    glSecondaryColor3ub;

	/**
	* @brief void glSecondaryColor3ubv( const GLubyte *v );
	*/
	PFNGLSECONDARYCOLOR3UBVPROC                                   glSecondaryColor3ubv;

	/**
	* @brief void glSecondaryColor3ui( GLuint red, GLuint green, GLuint blue );
	*/
	PFNGLSECONDARYCOLOR3UIPROC                                    glSecondaryColor3ui;

	/**
	* @brief void glSecondaryColor3uiv( const GLuint *v );
	*/
	PFNGLSECONDARYCOLOR3UIVPROC                                   glSecondaryColor3uiv;

	/**
	* @brief void glSecondaryColor3us( GLushort red, GLushort green, GLushort blue );
	*/
	PFNGLSECONDARYCOLOR3USPROC                                    glSecondaryColor3us;

	/**
	* @brief void glSecondaryColor3usv( const GLushort *v );
	*/
	PFNGLSECONDARYCOLOR3USVPROC                                   glSecondaryColor3usv;

	/**
	* @brief void glSecondaryColorPointer( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLSECONDARYCOLORPOINTERPROC                                glSecondaryColorPointer;

	/**
	* @brief void glWindowPos2d( GLdouble x, GLdouble y );
	*/
	PFNGLWINDOWPOS2DPROC                                          glWindowPos2d;

	/**
	* @brief void glWindowPos2dv( const GLdouble *v );
	*/
	PFNGLWINDOWPOS2DVPROC                                         glWindowPos2dv;

	/**
	* @brief void glWindowPos2f( GLfloat x, GLfloat y );
	*/
	PFNGLWINDOWPOS2FPROC                                          glWindowPos2f;

	/**
	* @brief void glWindowPos2fv( const GLfloat *v );
	*/
	PFNGLWINDOWPOS2FVPROC                                         glWindowPos2fv;

	/**
	* @brief void glWindowPos2i( GLint x, GLint y );
	*/
	PFNGLWINDOWPOS2IPROC                                          glWindowPos2i;

	/**
	* @brief void glWindowPos2iv( const GLint *v );
	*/
	PFNGLWINDOWPOS2IVPROC                                         glWindowPos2iv;

	/**
	* @brief void glWindowPos2s( GLshort x, GLshort y );
	*/
	PFNGLWINDOWPOS2SPROC                                          glWindowPos2s;

	/**
	* @brief void glWindowPos2sv( const GLshort *v );
	*/
	PFNGLWINDOWPOS2SVPROC                                         glWindowPos2sv;

	/**
	* @brief void glWindowPos3d( GLdouble x, GLdouble y, GLdouble z );
	*/
	PFNGLWINDOWPOS3DPROC                                          glWindowPos3d;

	/**
	* @brief void glWindowPos3dv( const GLdouble *v );
	*/
	PFNGLWINDOWPOS3DVPROC                                         glWindowPos3dv;

	/**
	* @brief void glWindowPos3f( GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLWINDOWPOS3FPROC                                          glWindowPos3f;

	/**
	* @brief void glWindowPos3fv( const GLfloat *v );
	*/
	PFNGLWINDOWPOS3FVPROC                                         glWindowPos3fv;

	/**
	* @brief void glWindowPos3i( GLint x, GLint y, GLint z );
	*/
	PFNGLWINDOWPOS3IPROC                                          glWindowPos3i;

	/**
	* @brief void glWindowPos3iv( const GLint *v );
	*/
	PFNGLWINDOWPOS3IVPROC                                         glWindowPos3iv;

	/**
	* @brief void glWindowPos3s( GLshort x, GLshort y, GLshort z );
	*/
	PFNGLWINDOWPOS3SPROC                                          glWindowPos3s;

	/**
	* @brief void glWindowPos3sv( const GLshort *v );
	*/
	PFNGLWINDOWPOS3SVPROC                                         glWindowPos3sv;

	//@}


	/**	
	 * @name GL_VERSION_1_5
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_5 is supported, false otherwise.
	 */
	bool isGL_VERSION_1_5;

	/**
	* @brief void glGenQueries( GLsizei n, GLuint *ids );
	*/
	PFNGLGENQUERIESPROC                                           glGenQueries;

	/**
	* @brief void glDeleteQueries( GLsizei n, const GLuint *ids );
	*/
	PFNGLDELETEQUERIESPROC                                        glDeleteQueries;

	/**
	* @brief GLboolean glIsQuery( GLuint id );
	*/
	PFNGLISQUERYPROC                                              glIsQuery;

	/**
	* @brief void glBeginQuery( GLenum target, GLuint id );
	*/
	PFNGLBEGINQUERYPROC                                           glBeginQuery;

	/**
	* @brief void glEndQuery( GLenum target );
	*/
	PFNGLENDQUERYPROC                                             glEndQuery;

	/**
	* @brief void glGetQueryiv( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETQUERYIVPROC                                           glGetQueryiv;

	/**
	* @brief void glGetQueryObjectiv( GLuint id, GLenum pname, GLint *params );
	*/
	PFNGLGETQUERYOBJECTIVPROC                                     glGetQueryObjectiv;

	/**
	* @brief void glGetQueryObjectuiv( GLuint id, GLenum pname, GLuint *params );
	*/
	PFNGLGETQUERYOBJECTUIVPROC                                    glGetQueryObjectuiv;

	/**
	* @brief void glBindBuffer( GLenum target, GLuint buffer );
	*/
	PFNGLBINDBUFFERPROC                                           glBindBuffer;

	/**
	* @brief void glDeleteBuffers( GLsizei n, const GLuint *buffers );
	*/
	PFNGLDELETEBUFFERSPROC                                        glDeleteBuffers;

	/**
	* @brief void glGenBuffers( GLsizei n, GLuint *buffers );
	*/
	PFNGLGENBUFFERSPROC                                           glGenBuffers;

	/**
	* @brief GLboolean glIsBuffer( GLuint buffer );
	*/
	PFNGLISBUFFERPROC                                             glIsBuffer;

	/**
	* @brief void glBufferData( GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage );
	*/
	PFNGLBUFFERDATAPROC                                           glBufferData;

	/**
	* @brief void glBufferSubData( GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data );
	*/
	PFNGLBUFFERSUBDATAPROC                                        glBufferSubData;

	/**
	* @brief void glGetBufferSubData( GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data );
	*/
	PFNGLGETBUFFERSUBDATAPROC                                     glGetBufferSubData;

	/**
	* @brief GLvoid* glMapBuffer( GLenum target, GLenum access );
	*/
	PFNGLMAPBUFFERPROC                                            glMapBuffer;

	/**
	* @brief GLboolean glUnmapBuffer( GLenum target );
	*/
	PFNGLUNMAPBUFFERPROC                                          glUnmapBuffer;

	/**
	* @brief void glGetBufferParameteriv( GLenum target, GLenum pname, GLint *params );
	*/
	PFNGLGETBUFFERPARAMETERIVPROC                                 glGetBufferParameteriv;

	/**
	* @brief void glGetBufferPointerv( GLenum target, GLenum pname, GLvoid* *params );
	*/
	PFNGLGETBUFFERPOINTERVPROC                                    glGetBufferPointerv;

	//@}


	/**	
	 * @name GL_VERSION_2_0
	 *	Extension not found in OpenGL extensions registry !!!
	 *	@ingroup internal_Not_in_OpenGL_Extension_Registry
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_VERSION_2_0 is supported, false otherwise.
	 */
	bool isGL_VERSION_2_0;

	/**
	* @brief void glBlendEquationSeparate( GLenum modeRGB, GLenum modeAlpha );
	*/
	PFNGLBLENDEQUATIONSEPARATEPROC                                glBlendEquationSeparate;

	/**
	* @brief void glDrawBuffers( GLsizei n, const GLenum *bufs );
	*/
	PFNGLDRAWBUFFERSPROC                                          glDrawBuffers;

	/**
	* @brief void glStencilOpSeparate( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass );
	*/
	PFNGLSTENCILOPSEPARATEPROC                                    glStencilOpSeparate;

	/**
	* @brief void glStencilFuncSeparate( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask );
	*/
	PFNGLSTENCILFUNCSEPARATEPROC                                  glStencilFuncSeparate;

	/**
	* @brief void glStencilMaskSeparate( GLenum face, GLuint mask );
	*/
	PFNGLSTENCILMASKSEPARATEPROC                                  glStencilMaskSeparate;

	/**
	* @brief void glAttachShader( GLuint program, GLuint shader );
	*/
	PFNGLATTACHSHADERPROC                                         glAttachShader;

	/**
	* @brief void glBindAttribLocation( GLuint program, GLuint index, const GLchar *name );
	*/
	PFNGLBINDATTRIBLOCATIONPROC                                   glBindAttribLocation;

	/**
	* @brief void glCompileShader( GLuint shader );
	*/
	PFNGLCOMPILESHADERPROC                                        glCompileShader;

	/**
	* @brief GLuint glCreateProgram( void );
	*/
	PFNGLCREATEPROGRAMPROC                                        glCreateProgram;

	/**
	* @brief GLuint glCreateShader( GLenum type );
	*/
	PFNGLCREATESHADERPROC                                         glCreateShader;

	/**
	* @brief void glDeleteProgram( GLuint program );
	*/
	PFNGLDELETEPROGRAMPROC                                        glDeleteProgram;

	/**
	* @brief void glDeleteShader( GLuint shader );
	*/
	PFNGLDELETESHADERPROC                                         glDeleteShader;

	/**
	* @brief void glDetachShader( GLuint program, GLuint shader );
	*/
	PFNGLDETACHSHADERPROC                                         glDetachShader;

	/**
	* @brief void glDisableVertexAttribArray( GLuint index );
	*/
	PFNGLDISABLEVERTEXATTRIBARRAYPROC                             glDisableVertexAttribArray;

	/**
	* @brief void glEnableVertexAttribArray( GLuint index );
	*/
	PFNGLENABLEVERTEXATTRIBARRAYPROC                              glEnableVertexAttribArray;

	/**
	* @brief void glGetActiveAttrib( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name );
	*/
	PFNGLGETACTIVEATTRIBPROC                                      glGetActiveAttrib;

	/**
	* @brief void glGetActiveUniform( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name );
	*/
	PFNGLGETACTIVEUNIFORMPROC                                     glGetActiveUniform;

	/**
	* @brief void glGetAttachedShaders( GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj );
	*/
	PFNGLGETATTACHEDSHADERSPROC                                   glGetAttachedShaders;

	/**
	* @brief GLint glGetAttribLocation( GLuint program, const GLchar *name );
	*/
	PFNGLGETATTRIBLOCATIONPROC                                    glGetAttribLocation;

	/**
	* @brief void glGetProgramiv( GLuint program, GLenum pname, GLint *params );
	*/
	PFNGLGETPROGRAMIVPROC                                         glGetProgramiv;

	/**
	* @brief void glGetProgramInfoLog( GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog );
	*/
	PFNGLGETPROGRAMINFOLOGPROC                                    glGetProgramInfoLog;

	/**
	* @brief void glGetShaderiv( GLuint shader, GLenum pname, GLint *params );
	*/
	PFNGLGETSHADERIVPROC                                          glGetShaderiv;

	/**
	* @brief void glGetShaderInfoLog( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog );
	*/
	PFNGLGETSHADERINFOLOGPROC                                     glGetShaderInfoLog;

	/**
	* @brief void glGetShaderSource( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source );
	*/
	PFNGLGETSHADERSOURCEPROC                                      glGetShaderSource;

	/**
	* @brief GLint glGetUniformLocation( GLuint program, const GLchar *name );
	*/
	PFNGLGETUNIFORMLOCATIONPROC                                   glGetUniformLocation;

	/**
	* @brief void glGetUniformfv( GLuint program, GLint location, GLfloat *params );
	*/
	PFNGLGETUNIFORMFVPROC                                         glGetUniformfv;

	/**
	* @brief void glGetUniformiv( GLuint program, GLint location, GLint *params );
	*/
	PFNGLGETUNIFORMIVPROC                                         glGetUniformiv;

	/**
	* @brief void glGetVertexAttribdv( GLuint index, GLenum pname, GLdouble *params );
	*/
	PFNGLGETVERTEXATTRIBDVPROC                                    glGetVertexAttribdv;

	/**
	* @brief void glGetVertexAttribfv( GLuint index, GLenum pname, GLfloat *params );
	*/
	PFNGLGETVERTEXATTRIBFVPROC                                    glGetVertexAttribfv;

	/**
	* @brief void glGetVertexAttribiv( GLuint index, GLenum pname, GLint *params );
	*/
	PFNGLGETVERTEXATTRIBIVPROC                                    glGetVertexAttribiv;

	/**
	* @brief void glGetVertexAttribPointerv( GLuint index, GLenum pname, GLvoid* *pointer );
	*/
	PFNGLGETVERTEXATTRIBPOINTERVPROC                              glGetVertexAttribPointerv;

	/**
	* @brief GLboolean glIsProgram( GLuint program );
	*/
	PFNGLISPROGRAMPROC                                            glIsProgram;

	/**
	* @brief GLboolean glIsShader( GLuint shader );
	*/
	PFNGLISSHADERPROC                                             glIsShader;

	/**
	* @brief void glLinkProgram( GLuint program );
	*/
	PFNGLLINKPROGRAMPROC                                          glLinkProgram;

	/**
	* @brief void glShaderSource( GLuint shader, GLsizei count, const GLchar* *string, const GLint *length );
	*/
	PFNGLSHADERSOURCEPROC                                         glShaderSource;

	/**
	* @brief void glUseProgram( GLuint program );
	*/
	PFNGLUSEPROGRAMPROC                                           glUseProgram;

	/**
	* @brief void glUniform1f( GLint location, GLfloat v0 );
	*/
	PFNGLUNIFORM1FPROC                                            glUniform1f;

	/**
	* @brief void glUniform2f( GLint location, GLfloat v0, GLfloat v1 );
	*/
	PFNGLUNIFORM2FPROC                                            glUniform2f;

	/**
	* @brief void glUniform3f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );
	*/
	PFNGLUNIFORM3FPROC                                            glUniform3f;

	/**
	* @brief void glUniform4f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );
	*/
	PFNGLUNIFORM4FPROC                                            glUniform4f;

	/**
	* @brief void glUniform1i( GLint location, GLint v0 );
	*/
	PFNGLUNIFORM1IPROC                                            glUniform1i;

	/**
	* @brief void glUniform2i( GLint location, GLint v0, GLint v1 );
	*/
	PFNGLUNIFORM2IPROC                                            glUniform2i;

	/**
	* @brief void glUniform3i( GLint location, GLint v0, GLint v1, GLint v2 );
	*/
	PFNGLUNIFORM3IPROC                                            glUniform3i;

	/**
	* @brief void glUniform4i( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );
	*/
	PFNGLUNIFORM4IPROC                                            glUniform4i;

	/**
	* @brief void glUniform1fv( GLint location, GLsizei count, const GLfloat *value );
	*/
	PFNGLUNIFORM1FVPROC                                           glUniform1fv;

	/**
	* @brief void glUniform2fv( GLint location, GLsizei count, const GLfloat *value );
	*/
	PFNGLUNIFORM2FVPROC                                           glUniform2fv;

	/**
	* @brief void glUniform3fv( GLint location, GLsizei count, const GLfloat *value );
	*/
	PFNGLUNIFORM3FVPROC                                           glUniform3fv;

	/**
	* @brief void glUniform4fv( GLint location, GLsizei count, const GLfloat *value );
	*/
	PFNGLUNIFORM4FVPROC                                           glUniform4fv;

	/**
	* @brief void glUniform1iv( GLint location, GLsizei count, const GLint *value );
	*/
	PFNGLUNIFORM1IVPROC                                           glUniform1iv;

	/**
	* @brief void glUniform2iv( GLint location, GLsizei count, const GLint *value );
	*/
	PFNGLUNIFORM2IVPROC                                           glUniform2iv;

	/**
	* @brief void glUniform3iv( GLint location, GLsizei count, const GLint *value );
	*/
	PFNGLUNIFORM3IVPROC                                           glUniform3iv;

	/**
	* @brief void glUniform4iv( GLint location, GLsizei count, const GLint *value );
	*/
	PFNGLUNIFORM4IVPROC                                           glUniform4iv;

	/**
	* @brief void glUniformMatrix2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
	*/
	PFNGLUNIFORMMATRIX2FVPROC                                     glUniformMatrix2fv;

	/**
	* @brief void glUniformMatrix3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
	*/
	PFNGLUNIFORMMATRIX3FVPROC                                     glUniformMatrix3fv;

	/**
	* @brief void glUniformMatrix4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
	*/
	PFNGLUNIFORMMATRIX4FVPROC                                     glUniformMatrix4fv;

	/**
	* @brief void glValidateProgram( GLuint program );
	*/
	PFNGLVALIDATEPROGRAMPROC                                      glValidateProgram;

	/**
	* @brief void glVertexAttrib1d( GLuint index, GLdouble x );
	*/
	PFNGLVERTEXATTRIB1DPROC                                       glVertexAttrib1d;

	/**
	* @brief void glVertexAttrib1dv( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB1DVPROC                                      glVertexAttrib1dv;

	/**
	* @brief void glVertexAttrib1f( GLuint index, GLfloat x );
	*/
	PFNGLVERTEXATTRIB1FPROC                                       glVertexAttrib1f;

	/**
	* @brief void glVertexAttrib1fv( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB1FVPROC                                      glVertexAttrib1fv;

	/**
	* @brief void glVertexAttrib1s( GLuint index, GLshort x );
	*/
	PFNGLVERTEXATTRIB1SPROC                                       glVertexAttrib1s;

	/**
	* @brief void glVertexAttrib1sv( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB1SVPROC                                      glVertexAttrib1sv;

	/**
	* @brief void glVertexAttrib2d( GLuint index, GLdouble x, GLdouble y );
	*/
	PFNGLVERTEXATTRIB2DPROC                                       glVertexAttrib2d;

	/**
	* @brief void glVertexAttrib2dv( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB2DVPROC                                      glVertexAttrib2dv;

	/**
	* @brief void glVertexAttrib2f( GLuint index, GLfloat x, GLfloat y );
	*/
	PFNGLVERTEXATTRIB2FPROC                                       glVertexAttrib2f;

	/**
	* @brief void glVertexAttrib2fv( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB2FVPROC                                      glVertexAttrib2fv;

	/**
	* @brief void glVertexAttrib2s( GLuint index, GLshort x, GLshort y );
	*/
	PFNGLVERTEXATTRIB2SPROC                                       glVertexAttrib2s;

	/**
	* @brief void glVertexAttrib2sv( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB2SVPROC                                      glVertexAttrib2sv;

	/**
	* @brief void glVertexAttrib3d( GLuint index, GLdouble x, GLdouble y, GLdouble z );
	*/
	PFNGLVERTEXATTRIB3DPROC                                       glVertexAttrib3d;

	/**
	* @brief void glVertexAttrib3dv( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB3DVPROC                                      glVertexAttrib3dv;

	/**
	* @brief void glVertexAttrib3f( GLuint index, GLfloat x, GLfloat y, GLfloat z );
	*/
	PFNGLVERTEXATTRIB3FPROC                                       glVertexAttrib3f;

	/**
	* @brief void glVertexAttrib3fv( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB3FVPROC                                      glVertexAttrib3fv;

	/**
	* @brief void glVertexAttrib3s( GLuint index, GLshort x, GLshort y, GLshort z );
	*/
	PFNGLVERTEXATTRIB3SPROC                                       glVertexAttrib3s;

	/**
	* @brief void glVertexAttrib3sv( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB3SVPROC                                      glVertexAttrib3sv;

	/**
	* @brief void glVertexAttrib4Nbv( GLuint index, const GLbyte *v );
	*/
	PFNGLVERTEXATTRIB4NBVPROC                                     glVertexAttrib4Nbv;

	/**
	* @brief void glVertexAttrib4Niv( GLuint index, const GLint *v );
	*/
	PFNGLVERTEXATTRIB4NIVPROC                                     glVertexAttrib4Niv;

	/**
	* @brief void glVertexAttrib4Nsv( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB4NSVPROC                                     glVertexAttrib4Nsv;

	/**
	* @brief void glVertexAttrib4Nub( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w );
	*/
	PFNGLVERTEXATTRIB4NUBPROC                                     glVertexAttrib4Nub;

	/**
	* @brief void glVertexAttrib4Nubv( GLuint index, const GLubyte *v );
	*/
	PFNGLVERTEXATTRIB4NUBVPROC                                    glVertexAttrib4Nubv;

	/**
	* @brief void glVertexAttrib4Nuiv( GLuint index, const GLuint *v );
	*/
	PFNGLVERTEXATTRIB4NUIVPROC                                    glVertexAttrib4Nuiv;

	/**
	* @brief void glVertexAttrib4Nusv( GLuint index, const GLushort *v );
	*/
	PFNGLVERTEXATTRIB4NUSVPROC                                    glVertexAttrib4Nusv;

	/**
	* @brief void glVertexAttrib4bv( GLuint index, const GLbyte *v );
	*/
	PFNGLVERTEXATTRIB4BVPROC                                      glVertexAttrib4bv;

	/**
	* @brief void glVertexAttrib4d( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
	*/
	PFNGLVERTEXATTRIB4DPROC                                       glVertexAttrib4d;

	/**
	* @brief void glVertexAttrib4dv( GLuint index, const GLdouble *v );
	*/
	PFNGLVERTEXATTRIB4DVPROC                                      glVertexAttrib4dv;

	/**
	* @brief void glVertexAttrib4f( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
	*/
	PFNGLVERTEXATTRIB4FPROC                                       glVertexAttrib4f;

	/**
	* @brief void glVertexAttrib4fv( GLuint index, const GLfloat *v );
	*/
	PFNGLVERTEXATTRIB4FVPROC                                      glVertexAttrib4fv;

	/**
	* @brief void glVertexAttrib4iv( GLuint index, const GLint *v );
	*/
	PFNGLVERTEXATTRIB4IVPROC                                      glVertexAttrib4iv;

	/**
	* @brief void glVertexAttrib4s( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w );
	*/
	PFNGLVERTEXATTRIB4SPROC                                       glVertexAttrib4s;

	/**
	* @brief void glVertexAttrib4sv( GLuint index, const GLshort *v );
	*/
	PFNGLVERTEXATTRIB4SVPROC                                      glVertexAttrib4sv;

	/**
	* @brief void glVertexAttrib4ubv( GLuint index, const GLubyte *v );
	*/
	PFNGLVERTEXATTRIB4UBVPROC                                     glVertexAttrib4ubv;

	/**
	* @brief void glVertexAttrib4uiv( GLuint index, const GLuint *v );
	*/
	PFNGLVERTEXATTRIB4UIVPROC                                     glVertexAttrib4uiv;

	/**
	* @brief void glVertexAttrib4usv( GLuint index, const GLushort *v );
	*/
	PFNGLVERTEXATTRIB4USVPROC                                     glVertexAttrib4usv;

	/**
	* @brief void glVertexAttribPointer( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer );
	*/
	PFNGLVERTEXATTRIBPOINTERPROC                                  glVertexAttribPointer;

	//@}


	/**
	 * @name internal_GL_WIN_phong_shading
	 *	Extension number in OpenGL registry : 113
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/WIN/phong_shading.txt
	 *	@ingroup internal_GL_WIN
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_WIN_phong_shading is supported, false otherwise.
	 */
	bool isGL_WIN_phong_shading;

	//@}


	/**
	 * @name internal_GL_WIN_specular_fog
	 *	Extension number in OpenGL registry : 114
	 *	@sa OpenGL Extension Registry : http://oss.sgi.com/projects/ogl-sample/registry/WIN/specular_fog.txt
	 *	@ingroup internal_GL_WIN
	 */
	//@{

	/**
	 * @brief Returns \c true if \b GL_WIN_specular_fog is supported, false otherwise.
	 */
	bool isGL_WIN_specular_fog;

	//@}


private:
	/**
	 * @brief Smart extension detection (SED) state.
	 */
	bool	m_isSEDEnable;



	/**
	 * @name Data for statistics.
	 */
	//@{

	/**
	 * @brief Count the number of extension initialized at run-time.
	 */
	int32			m_initializedExtensionCount;

	/**
	 * @brief Count the number of procedure pointer initialized ar run-time.
	 */
	int32			m_initializedProcCount;

	/**
	 * @brief Vector with all extensions initialized at run-time.
	 */
	std::vector< std::string >	m_initializedExtensions;

	
	/**
	 * @brief Count the number of extension supported by gle.
	 */
	static const int32			m_supportedExtensionCount;
	
	/**
	 * @brief Count the number of procedure pointer supported by gle.
	 */
	static const int32			m_supportedProcCount;
	//@}

}; // struct OpenGLExtensionsGen

} //namespace gle

#endif // #ifndef _GLE_OPENGLEXTENSIONSGEN_H
