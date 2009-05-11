// This file was generated at Mon May 11 10:51:03 2009 with gle, please do not modify.

// GLE - Copyright (C) 2004, 2005, 2007, 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_WRAPPERGEN_HPP
#define _GLE_WRAPPERGEN_HPP

#include "gle/gle.hpp"

/**
 * @defgroup g_extensionsByVendor		OpenGL extensions by vendor
 *
 * @ingroup g_gle
 */

/**
 * @defgroup g_extensions		OpenGL extensions by name
 *
 * @ingroup g_gle
 */

/**
 * @defgroup g_virtualExtensions	Virtual OpenGL extensions
 *
 * @ingroup g_extensionsByVendor g_extensions
 */

/** 
 * @defgroup g_GL_3DFX		GL_3DFX (3 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_AMD		GL_AMD (2 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_APPLE		GL_APPLE (9 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_ARB		GL_ARB (49 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_ATI		GL_ATI (15 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_EXT		GL_EXT (83 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_GREMEDY		GL_GREMEDY (2 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_HP		GL_HP (4 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_IBM		GL_IBM (5 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_INGR		GL_INGR (2 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_INTEL		GL_INTEL (2 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_MESA		GL_MESA (4 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_MESAX		GL_MESAX (1 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_NV		GL_NV (49 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_OES		GL_OES (1 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_OML		GL_OML (3 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_PGI		GL_PGI (2 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_REND		GL_REND (1 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_S3		GL_S3 (1 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_SGI		GL_SGI (3 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_SGIS		GL_SGIS (14 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_SGIX		GL_SGIX (28 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_SUN		GL_SUN (6 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_SUNX		GL_SUNX (1 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_GL_WIN		GL_WIN (2 extensions found)
 * @ingroup g_extensionsByVendor
 */

/** 
 * @defgroup g_Not_in_OpenGL_Extension_Registry		Not_in_OpenGL_Extension_Registry (41 extensions found)
 * @ingroup g_extensionsByVendor
 */



/**
 * @defgroup GL_3DFX_multisample GL_3DFX_multisample
 * Extension number in OpenGL registry : 207
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/3DFX/3dfx_multisample.txt
 * @ingroup g_GL_3DFX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_3DFX_multisample is supported.
 * @return Returns \c true if \b GL_3DFX_multisample is supported, false otherwise.
 */
GLE_API bool isGL_3DFX_multisample();

//@}


/**
 * @defgroup GL_3DFX_tbuffer GL_3DFX_tbuffer
 * Extension number in OpenGL registry : 208
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/3DFX/tbuffer.txt
 * @ingroup g_GL_3DFX g_extensions
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
 * @defgroup GL_3DFX_texture_compression_FXT1 GL_3DFX_texture_compression_FXT1
 * Extension number in OpenGL registry : 206
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/3DFX/texture_compression_FXT1.txt
 * @ingroup g_GL_3DFX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_3DFX_texture_compression_FXT1 is supported.
 * @return Returns \c true if \b GL_3DFX_texture_compression_FXT1 is supported, false otherwise.
 */
GLE_API bool isGL_3DFX_texture_compression_FXT1();

//@}


/**
 * @defgroup GL_AMD_performance_monitor GL_AMD_performance_monitor
 * Extension number in OpenGL registry : 360
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/AMD/performance_monitor.txt
 * @ingroup g_GL_AMD g_extensions
 */
//@{
/**
 * @brief Test if \b GL_AMD_performance_monitor is supported.
 * @return Returns \c true if \b GL_AMD_performance_monitor is supported, false otherwise.
 */
GLE_API bool isGL_AMD_performance_monitor();

/**
 * @brief void glGetPerfMonitorGroupsAMD( GLint *numGroups, GLsizei groupsSize, GLuint *groups );
 */
GLE_API void glGetPerfMonitorGroupsAMD( GLint *numGroups, GLsizei groupsSize, GLuint *groups );

/**
 * @brief void glGetPerfMonitorCountersAMD( GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters );
 */
GLE_API void glGetPerfMonitorCountersAMD( GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters );

/**
 * @brief void glGetPerfMonitorGroupStringAMD( GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString );
 */
GLE_API void glGetPerfMonitorGroupStringAMD( GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString );

/**
 * @brief void glGetPerfMonitorCounterStringAMD( GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString );
 */
GLE_API void glGetPerfMonitorCounterStringAMD( GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString );

/**
 * @brief void glGetPerfMonitorCounterInfoAMD( GLuint group, GLuint counter, GLenum pname, void *data );
 */
GLE_API void glGetPerfMonitorCounterInfoAMD( GLuint group, GLuint counter, GLenum pname, void *data );

/**
 * @brief void glGenPerfMonitorsAMD( GLsizei n, GLuint *monitors );
 */
GLE_API void glGenPerfMonitorsAMD( GLsizei n, GLuint *monitors );

/**
 * @brief void glDeletePerfMonitorsAMD( GLsizei n, GLuint *monitors );
 */
GLE_API void glDeletePerfMonitorsAMD( GLsizei n, GLuint *monitors );

/**
 * @brief void glSelectPerfMonitorCountersAMD( GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList );
 */
GLE_API void glSelectPerfMonitorCountersAMD( GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList );

/**
 * @brief void glBeginPerfMonitorAMD( GLuint monitor );
 */
GLE_API void glBeginPerfMonitorAMD( GLuint monitor );

/**
 * @brief void glEndPerfMonitorAMD( GLuint monitor );
 */
GLE_API void glEndPerfMonitorAMD( GLuint monitor );

/**
 * @brief void glGetPerfMonitorCounterDataAMD( GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten );
 */
GLE_API void glGetPerfMonitorCounterDataAMD( GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten );

//@}


/**
 * @defgroup GL_AMD_texture_texture4 GL_AMD_texture_texture4
 * Extension number in OpenGL registry : 362
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/AMD/texture_texture4.txt
 * @ingroup g_GL_AMD g_extensions
 */
//@{
/**
 * @brief Test if \b GL_AMD_texture_texture4 is supported.
 * @return Returns \c true if \b GL_AMD_texture_texture4 is supported, false otherwise.
 */
GLE_API bool isGL_AMD_texture_texture4();

//@}

			
/**	
 * @defgroup GL_AMD_vertex_shader_tesselator GL_AMD_vertex_shader_tesselator
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_AMD_vertex_shader_tesselator is supported.
 * @return Returns \c true if \b GL_AMD_vertex_shader_tesselator is supported, false otherwise.
 */
GLE_API bool isGL_AMD_vertex_shader_tesselator();

/**
 * @brief void glTessellationFactorAMD( GLfloat factor );
 */
GLE_API void glTessellationFactorAMD( GLfloat factor );

/**
 * @brief void glTessellationModeAMD( GLenum mode );
 */
GLE_API void glTessellationModeAMD( GLenum mode );

//@}


/**
 * @defgroup GL_APPLE_client_storage GL_APPLE_client_storage
 * Extension number in OpenGL registry : 270
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/APPLE/client_storage.txt
 * @ingroup g_GL_APPLE g_extensions
 */
//@{
/**
 * @brief Test if \b GL_APPLE_client_storage is supported.
 * @return Returns \c true if \b GL_APPLE_client_storage is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_client_storage();

//@}


/**
 * @defgroup GL_APPLE_element_array GL_APPLE_element_array
 * Extension number in OpenGL registry : 271
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/APPLE/element_array.txt
 * @ingroup g_GL_APPLE g_extensions
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
 * @defgroup GL_APPLE_fence GL_APPLE_fence
 * Extension number in OpenGL registry : 272
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/APPLE/fence.txt
 * @ingroup g_GL_APPLE g_extensions
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
 * @defgroup GL_APPLE_flush_buffer_range GL_APPLE_flush_buffer_range
 * Extension number in OpenGL registry : 321
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/APPLE/flush_buffer_range.txt
 * @ingroup g_GL_APPLE g_extensions
 */
//@{
/**
 * @brief Test if \b GL_APPLE_flush_buffer_range is supported.
 * @return Returns \c true if \b GL_APPLE_flush_buffer_range is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_flush_buffer_range();

/**
 * @brief void glBufferParameteriAPPLE( GLenum target, GLenum pname, GLint param );
 */
GLE_API void glBufferParameteriAPPLE( GLenum target, GLenum pname, GLint param );

/**
 * @brief void glFlushMappedBufferRangeAPPLE( GLenum target, GLintptr offset, GLsizeiptr size );
 */
GLE_API void glFlushMappedBufferRangeAPPLE( GLenum target, GLintptr offset, GLsizeiptr size );

//@}


/**
 * @defgroup GL_APPLE_specular_vector GL_APPLE_specular_vector
 * Extension number in OpenGL registry : 159
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/APPLE/specular_vector.txt
 * @ingroup g_GL_APPLE g_extensions
 */
//@{
/**
 * @brief Test if \b GL_APPLE_specular_vector is supported.
 * @return Returns \c true if \b GL_APPLE_specular_vector is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_specular_vector();

//@}


/**
 * @defgroup GL_APPLE_transform_hint GL_APPLE_transform_hint
 * Extension number in OpenGL registry : 160
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/APPLE/transform_hint.txt
 * @ingroup g_GL_APPLE g_extensions
 */
//@{
/**
 * @brief Test if \b GL_APPLE_transform_hint is supported.
 * @return Returns \c true if \b GL_APPLE_transform_hint is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_transform_hint();

//@}


/**
 * @defgroup GL_APPLE_vertex_array_object GL_APPLE_vertex_array_object
 * Extension number in OpenGL registry : 273
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/APPLE/vertex_array_object.txt
 * @ingroup g_GL_APPLE g_extensions
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
 * @brief void glGenVertexArraysAPPLE( GLsizei n, GLuint *arrays );
 */
GLE_API void glGenVertexArraysAPPLE( GLsizei n, GLuint *arrays );

/**
 * @brief GLboolean glIsVertexArrayAPPLE( GLuint array );
 */
GLE_API GLboolean glIsVertexArrayAPPLE( GLuint array );

//@}


/**
 * @defgroup GL_APPLE_vertex_array_range GL_APPLE_vertex_array_range
 * Extension number in OpenGL registry : 274
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/APPLE/vertex_array_range.txt
 * @ingroup g_GL_APPLE g_extensions
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
 * @defgroup GL_APPLE_ycbcr_422 GL_APPLE_ycbcr_422
 * Extension number in OpenGL registry : 275
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/APPLE/ycbcr_422.txt
 * @ingroup g_GL_APPLE g_extensions
 */
//@{
/**
 * @brief Test if \b GL_APPLE_ycbcr_422 is supported.
 * @return Returns \c true if \b GL_APPLE_ycbcr_422 is supported, false otherwise.
 */
GLE_API bool isGL_APPLE_ycbcr_422();

//@}


/**
 * @defgroup GL_ARB_color_buffer_float GL_ARB_color_buffer_float
 * Extension number in OpenGL registry : 39
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/color_buffer_float.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_compatibility GL_ARB_compatibility
 * Extension number in OpenGL registry : 58
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/compatibility.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_compatibility is supported.
 * @return Returns \c true if \b GL_ARB_compatibility is supported, false otherwise.
 */
GLE_API bool isGL_ARB_compatibility();

//@}

			
/**	
 * @defgroup GL_ARB_copy_buffer GL_ARB_copy_buffer
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_copy_buffer is supported.
 * @return Returns \c true if \b GL_ARB_copy_buffer is supported, false otherwise.
 */
GLE_API bool isGL_ARB_copy_buffer();

/**
 * @brief void glCopyBufferSubData( GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size );
 */
GLE_API void glCopyBufferSubData( GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size );

//@}


/**
 * @defgroup GL_ARB_depth_buffer_float GL_ARB_depth_buffer_float
 * Extension number in OpenGL registry : 43
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/depth_buffer_float.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_depth_buffer_float is supported.
 * @return Returns \c true if \b GL_ARB_depth_buffer_float is supported, false otherwise.
 */
GLE_API bool isGL_ARB_depth_buffer_float();

//@}


/**
 * @defgroup GL_ARB_depth_texture GL_ARB_depth_texture
 * Extension number in OpenGL registry : 22
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/depth_texture.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_depth_texture is supported.
 * @return Returns \c true if \b GL_ARB_depth_texture is supported, false otherwise.
 */
GLE_API bool isGL_ARB_depth_texture();

//@}


/**
 * @defgroup GL_ARB_draw_buffers GL_ARB_draw_buffers
 * Extension number in OpenGL registry : 37
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/draw_buffers.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_draw_instanced GL_ARB_draw_instanced
 * Extension number in OpenGL registry : 44
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/draw_instanced.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_draw_instanced is supported.
 * @return Returns \c true if \b GL_ARB_draw_instanced is supported, false otherwise.
 */
GLE_API bool isGL_ARB_draw_instanced();

/**
 * @brief void glDrawArraysInstancedARB( GLenum mode, GLint first, GLsizei count, GLsizei primcount );
 */
GLE_API void glDrawArraysInstancedARB( GLenum mode, GLint first, GLsizei count, GLsizei primcount );

/**
 * @brief void glDrawElementsInstancedARB( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount );
 */
GLE_API void glDrawElementsInstancedARB( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount );

//@}


/**
 * @defgroup GL_ARB_fragment_program GL_ARB_fragment_program
 * Extension number in OpenGL registry : 27
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/fragment_program.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_fragment_program is supported.
 * @return Returns \c true if \b GL_ARB_fragment_program is supported, false otherwise.
 */
GLE_API bool isGL_ARB_fragment_program();

//@}


/**
 * @defgroup GL_ARB_fragment_program_shadow GL_ARB_fragment_program_shadow
 * Extension number in OpenGL registry : 36
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/fragment_program_shadow.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_fragment_program_shadow is supported.
 * @return Returns \c true if \b GL_ARB_fragment_program_shadow is supported, false otherwise.
 */
GLE_API bool isGL_ARB_fragment_program_shadow();

//@}


/**
 * @defgroup GL_ARB_fragment_shader GL_ARB_fragment_shader
 * Extension number in OpenGL registry : 32
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/fragment_shader.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_fragment_shader is supported.
 * @return Returns \c true if \b GL_ARB_fragment_shader is supported, false otherwise.
 */
GLE_API bool isGL_ARB_fragment_shader();

//@}


/**
 * @defgroup GL_ARB_framebuffer_object GL_ARB_framebuffer_object
 * Extension number in OpenGL registry : 45
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/framebuffer_object.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_framebuffer_object is supported.
 * @return Returns \c true if \b GL_ARB_framebuffer_object is supported, false otherwise.
 */
GLE_API bool isGL_ARB_framebuffer_object();

/**
 * @brief GLboolean glIsRenderbuffer( GLuint renderbuffer );
 */
GLE_API GLboolean glIsRenderbuffer( GLuint renderbuffer );

/**
 * @brief void glBindRenderbuffer( GLenum target, GLuint renderbuffer );
 */
GLE_API void glBindRenderbuffer( GLenum target, GLuint renderbuffer );

/**
 * @brief void glDeleteRenderbuffers( GLsizei n, const GLuint *renderbuffers );
 */
GLE_API void glDeleteRenderbuffers( GLsizei n, const GLuint *renderbuffers );

/**
 * @brief void glGenRenderbuffers( GLsizei n, GLuint *renderbuffers );
 */
GLE_API void glGenRenderbuffers( GLsizei n, GLuint *renderbuffers );

/**
 * @brief void glRenderbufferStorage( GLenum target, GLenum internalformat, GLsizei width, GLsizei height );
 */
GLE_API void glRenderbufferStorage( GLenum target, GLenum internalformat, GLsizei width, GLsizei height );

/**
 * @brief void glGetRenderbufferParameteriv( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetRenderbufferParameteriv( GLenum target, GLenum pname, GLint *params );

/**
 * @brief GLboolean glIsFramebuffer( GLuint framebuffer );
 */
GLE_API GLboolean glIsFramebuffer( GLuint framebuffer );

/**
 * @brief void glBindFramebuffer( GLenum target, GLuint framebuffer );
 */
GLE_API void glBindFramebuffer( GLenum target, GLuint framebuffer );

/**
 * @brief void glDeleteFramebuffers( GLsizei n, const GLuint *framebuffers );
 */
GLE_API void glDeleteFramebuffers( GLsizei n, const GLuint *framebuffers );

/**
 * @brief void glGenFramebuffers( GLsizei n, GLuint *framebuffers );
 */
GLE_API void glGenFramebuffers( GLsizei n, GLuint *framebuffers );

/**
 * @brief GLenum glCheckFramebufferStatus( GLenum target );
 */
GLE_API GLenum glCheckFramebufferStatus( GLenum target );

/**
 * @brief void glFramebufferTexture1D( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );
 */
GLE_API void glFramebufferTexture1D( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );

/**
 * @brief void glFramebufferTexture2D( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );
 */
GLE_API void glFramebufferTexture2D( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level );

/**
 * @brief void glFramebufferTexture3D( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset );
 */
GLE_API void glFramebufferTexture3D( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset );

/**
 * @brief void glFramebufferRenderbuffer( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer );
 */
GLE_API void glFramebufferRenderbuffer( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer );

/**
 * @brief void glGetFramebufferAttachmentParameteriv( GLenum target, GLenum attachment, GLenum pname, GLint *params );
 */
GLE_API void glGetFramebufferAttachmentParameteriv( GLenum target, GLenum attachment, GLenum pname, GLint *params );

/**
 * @brief void glGenerateMipmap( GLenum target );
 */
GLE_API void glGenerateMipmap( GLenum target );

/**
 * @brief void glBlitFramebuffer( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter );
 */
GLE_API void glBlitFramebuffer( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter );

/**
 * @brief void glRenderbufferStorageMultisample( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height );
 */
GLE_API void glRenderbufferStorageMultisample( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height );

/**
 * @brief void glFramebufferTextureLayer( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer );
 */
GLE_API void glFramebufferTextureLayer( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer );

//@}

			
/**	
 * @defgroup GL_ARB_framebuffer_object_DEPRECATED GL_ARB_framebuffer_object_DEPRECATED
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_framebuffer_object_DEPRECATED is supported.
 * @return Returns \c true if \b GL_ARB_framebuffer_object_DEPRECATED is supported, false otherwise.
 */
GLE_API bool isGL_ARB_framebuffer_object_DEPRECATED();

//@}


/**
 * @defgroup GL_ARB_framebuffer_sRGB GL_ARB_framebuffer_sRGB
 * Extension number in OpenGL registry : 46
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/framebuffer_sRGB.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_framebuffer_sRGB is supported.
 * @return Returns \c true if \b GL_ARB_framebuffer_sRGB is supported, false otherwise.
 */
GLE_API bool isGL_ARB_framebuffer_sRGB();

//@}


/**
 * @defgroup GL_ARB_geometry_shader4 GL_ARB_geometry_shader4
 * Extension number in OpenGL registry : 47
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/geometry_shader4.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_geometry_shader4 is supported.
 * @return Returns \c true if \b GL_ARB_geometry_shader4 is supported, false otherwise.
 */
GLE_API bool isGL_ARB_geometry_shader4();

/**
 * @brief void glProgramParameteriARB( GLuint program, GLenum pname, GLint value );
 */
GLE_API void glProgramParameteriARB( GLuint program, GLenum pname, GLint value );

/**
 * @brief void glFramebufferTextureARB( GLenum target, GLenum attachment, GLuint texture, GLint level );
 */
GLE_API void glFramebufferTextureARB( GLenum target, GLenum attachment, GLuint texture, GLint level );

/**
 * @brief void glFramebufferTextureLayerARB( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer );
 */
GLE_API void glFramebufferTextureLayerARB( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer );

/**
 * @brief void glFramebufferTextureFaceARB( GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face );
 */
GLE_API void glFramebufferTextureFaceARB( GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face );

//@}


/**
 * @defgroup GL_ARB_half_float_pixel GL_ARB_half_float_pixel
 * Extension number in OpenGL registry : 40
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/half_float_pixel.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_half_float_pixel is supported.
 * @return Returns \c true if \b GL_ARB_half_float_pixel is supported, false otherwise.
 */
GLE_API bool isGL_ARB_half_float_pixel();

//@}


/**
 * @defgroup GL_ARB_half_float_vertex GL_ARB_half_float_vertex
 * Extension number in OpenGL registry : 48
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/half_float_vertex.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_half_float_vertex is supported.
 * @return Returns \c true if \b GL_ARB_half_float_vertex is supported, false otherwise.
 */
GLE_API bool isGL_ARB_half_float_vertex();

//@}

			
/**	
 * @defgroup GL_ARB_imaging GL_ARB_imaging
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_imaging is supported.
 * @return Returns \c true if \b GL_ARB_imaging is supported, false otherwise.
 */
GLE_API bool isGL_ARB_imaging();

//@}

			
/**	
 * @defgroup GL_ARB_imaging_DEPRECATED GL_ARB_imaging_DEPRECATED
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_imaging_DEPRECATED is supported.
 * @return Returns \c true if \b GL_ARB_imaging_DEPRECATED is supported, false otherwise.
 */
GLE_API bool isGL_ARB_imaging_DEPRECATED();

//@}


/**
 * @defgroup GL_ARB_instanced_arrays GL_ARB_instanced_arrays
 * Extension number in OpenGL registry : 49
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/instanced_arrays.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_instanced_arrays is supported.
 * @return Returns \c true if \b GL_ARB_instanced_arrays is supported, false otherwise.
 */
GLE_API bool isGL_ARB_instanced_arrays();

/**
 * @brief void glVertexAttribDivisorARB( GLuint index, GLuint divisor );
 */
GLE_API void glVertexAttribDivisorARB( GLuint index, GLuint divisor );

//@}


/**
 * @defgroup GL_ARB_map_buffer_range GL_ARB_map_buffer_range
 * Extension number in OpenGL registry : 50
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/map_buffer_range.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_map_buffer_range is supported.
 * @return Returns \c true if \b GL_ARB_map_buffer_range is supported, false otherwise.
 */
GLE_API bool isGL_ARB_map_buffer_range();

/**
 * @brief GLvoid* glMapBufferRange( GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access );
 */
GLE_API GLvoid* glMapBufferRange( GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access );

/**
 * @brief void glFlushMappedBufferRange( GLenum target, GLintptr offset, GLsizeiptr length );
 */
GLE_API void glFlushMappedBufferRange( GLenum target, GLintptr offset, GLsizeiptr length );

//@}


/**
 * @defgroup GL_ARB_matrix_palette GL_ARB_matrix_palette
 * Extension number in OpenGL registry : 16
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/matrix_palette.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_multisample GL_ARB_multisample
 * Extension number in OpenGL registry : 5
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/multisample.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_multitexture GL_ARB_multitexture
 * Extension number in OpenGL registry : 1
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/multitexture.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_occlusion_query GL_ARB_occlusion_query
 * Extension number in OpenGL registry : 29
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/occlusion_query.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_pixel_buffer_object GL_ARB_pixel_buffer_object
 * Extension number in OpenGL registry : 42
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/pixel_buffer_object.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_pixel_buffer_object is supported.
 * @return Returns \c true if \b GL_ARB_pixel_buffer_object is supported, false otherwise.
 */
GLE_API bool isGL_ARB_pixel_buffer_object();

//@}


/**
 * @defgroup GL_ARB_point_parameters GL_ARB_point_parameters
 * Extension number in OpenGL registry : 14
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/point_parameters.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_point_sprite GL_ARB_point_sprite
 * Extension number in OpenGL registry : 35
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/point_sprite.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_point_sprite is supported.
 * @return Returns \c true if \b GL_ARB_point_sprite is supported, false otherwise.
 */
GLE_API bool isGL_ARB_point_sprite();

//@}


/**
 * @defgroup GL_ARB_shader_objects GL_ARB_shader_objects
 * Extension number in OpenGL registry : 30
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/shader_objects.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_shading_language_100 GL_ARB_shading_language_100
 * Extension number in OpenGL registry : 33
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/shading_language_100.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_shading_language_100 is supported.
 * @return Returns \c true if \b GL_ARB_shading_language_100 is supported, false otherwise.
 */
GLE_API bool isGL_ARB_shading_language_100();

//@}


/**
 * @defgroup GL_ARB_shadow GL_ARB_shadow
 * Extension number in OpenGL registry : 23
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/shadow.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_shadow is supported.
 * @return Returns \c true if \b GL_ARB_shadow is supported, false otherwise.
 */
GLE_API bool isGL_ARB_shadow();

//@}


/**
 * @defgroup GL_ARB_shadow_ambient GL_ARB_shadow_ambient
 * Extension number in OpenGL registry : 24
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/shadow_ambient.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_shadow_ambient is supported.
 * @return Returns \c true if \b GL_ARB_shadow_ambient is supported, false otherwise.
 */
GLE_API bool isGL_ARB_shadow_ambient();

//@}


/**
 * @defgroup GL_ARB_texture_border_clamp GL_ARB_texture_border_clamp
 * Extension number in OpenGL registry : 13
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_border_clamp.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_border_clamp is supported.
 * @return Returns \c true if \b GL_ARB_texture_border_clamp is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_border_clamp();

//@}


/**
 * @defgroup GL_ARB_texture_buffer_object GL_ARB_texture_buffer_object
 * Extension number in OpenGL registry : 51
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_buffer_object.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_buffer_object is supported.
 * @return Returns \c true if \b GL_ARB_texture_buffer_object is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_buffer_object();

/**
 * @brief void glTexBufferARB( GLenum target, GLenum internalformat, GLuint buffer );
 */
GLE_API void glTexBufferARB( GLenum target, GLenum internalformat, GLuint buffer );

//@}


/**
 * @defgroup GL_ARB_texture_compression GL_ARB_texture_compression
 * Extension number in OpenGL registry : 12
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_compression.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_texture_compression_rgtc GL_ARB_texture_compression_rgtc
 * Extension number in OpenGL registry : 52
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_compression_rgtc.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_compression_rgtc is supported.
 * @return Returns \c true if \b GL_ARB_texture_compression_rgtc is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_compression_rgtc();

//@}


/**
 * @defgroup GL_ARB_texture_cube_map GL_ARB_texture_cube_map
 * Extension number in OpenGL registry : 7
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_cube_map.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_cube_map is supported.
 * @return Returns \c true if \b GL_ARB_texture_cube_map is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_cube_map();

//@}


/**
 * @defgroup GL_ARB_texture_env_add GL_ARB_texture_env_add
 * Extension number in OpenGL registry : 6
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_env_add.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_env_add is supported.
 * @return Returns \c true if \b GL_ARB_texture_env_add is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_env_add();

//@}


/**
 * @defgroup GL_ARB_texture_env_combine GL_ARB_texture_env_combine
 * Extension number in OpenGL registry : 17
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_env_combine.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_env_combine is supported.
 * @return Returns \c true if \b GL_ARB_texture_env_combine is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_env_combine();

//@}


/**
 * @defgroup GL_ARB_texture_env_crossbar GL_ARB_texture_env_crossbar
 * Extension number in OpenGL registry : 18
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_env_crossbar.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_env_crossbar is supported.
 * @return Returns \c true if \b GL_ARB_texture_env_crossbar is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_env_crossbar();

//@}


/**
 * @defgroup GL_ARB_texture_env_dot3 GL_ARB_texture_env_dot3
 * Extension number in OpenGL registry : 19
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_env_dot3.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_env_dot3 is supported.
 * @return Returns \c true if \b GL_ARB_texture_env_dot3 is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_env_dot3();

//@}


/**
 * @defgroup GL_ARB_texture_float GL_ARB_texture_float
 * Extension number in OpenGL registry : 41
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_float.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_float is supported.
 * @return Returns \c true if \b GL_ARB_texture_float is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_float();

//@}


/**
 * @defgroup GL_ARB_texture_mirrored_repeat GL_ARB_texture_mirrored_repeat
 * Extension number in OpenGL registry : 21
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_mirrored_repeat.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_mirrored_repeat is supported.
 * @return Returns \c true if \b GL_ARB_texture_mirrored_repeat is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_mirrored_repeat();

//@}


/**
 * @defgroup GL_ARB_texture_non_power_of_two GL_ARB_texture_non_power_of_two
 * Extension number in OpenGL registry : 34
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_non_power_of_two.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_non_power_of_two is supported.
 * @return Returns \c true if \b GL_ARB_texture_non_power_of_two is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_non_power_of_two();

//@}


/**
 * @defgroup GL_ARB_texture_rectangle GL_ARB_texture_rectangle
 * Extension number in OpenGL registry : 38
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_rectangle.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_rectangle is supported.
 * @return Returns \c true if \b GL_ARB_texture_rectangle is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_rectangle();

//@}


/**
 * @defgroup GL_ARB_texture_rg GL_ARB_texture_rg
 * Extension number in OpenGL registry : 53
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/texture_rg.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_texture_rg is supported.
 * @return Returns \c true if \b GL_ARB_texture_rg is supported, false otherwise.
 */
GLE_API bool isGL_ARB_texture_rg();

//@}


/**
 * @defgroup GL_ARB_transpose_matrix GL_ARB_transpose_matrix
 * Extension number in OpenGL registry : 3
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/transpose_matrix.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_uniform_buffer_object GL_ARB_uniform_buffer_object
 * Extension number in OpenGL registry : 57
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/uniform_buffer_object.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_uniform_buffer_object is supported.
 * @return Returns \c true if \b GL_ARB_uniform_buffer_object is supported, false otherwise.
 */
GLE_API bool isGL_ARB_uniform_buffer_object();

/**
 * @brief void glGetUniformIndices( GLuint program, GLsizei uniformCount, const GLchar* *uniformNames, GLuint *uniformIndices );
 */
GLE_API void glGetUniformIndices( GLuint program, GLsizei uniformCount, const GLchar* *uniformNames, GLuint *uniformIndices );

/**
 * @brief void glGetActiveUniformsiv( GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params );
 */
GLE_API void glGetActiveUniformsiv( GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params );

/**
 * @brief void glGetActiveUniformName( GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName );
 */
GLE_API void glGetActiveUniformName( GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName );

/**
 * @brief GLuint glGetUniformBlockIndex( GLuint program, const GLchar *uniformBlockName );
 */
GLE_API GLuint glGetUniformBlockIndex( GLuint program, const GLchar *uniformBlockName );

/**
 * @brief void glGetActiveUniformBlockiv( GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params );
 */
GLE_API void glGetActiveUniformBlockiv( GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params );

/**
 * @brief void glGetActiveUniformBlockName( GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName );
 */
GLE_API void glGetActiveUniformBlockName( GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName );

/**
 * @brief void glUniformBlockBinding( GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding );
 */
GLE_API void glUniformBlockBinding( GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding );

//@}


/**
 * @defgroup GL_ARB_vertex_array_object GL_ARB_vertex_array_object
 * Extension number in OpenGL registry : 54
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/vertex_array_object.txt
 * @ingroup g_GL_ARB g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ARB_vertex_array_object is supported.
 * @return Returns \c true if \b GL_ARB_vertex_array_object is supported, false otherwise.
 */
GLE_API bool isGL_ARB_vertex_array_object();

/**
 * @brief void glBindVertexArray( GLuint array );
 */
GLE_API void glBindVertexArray( GLuint array );

/**
 * @brief void glDeleteVertexArrays( GLsizei n, const GLuint *arrays );
 */
GLE_API void glDeleteVertexArrays( GLsizei n, const GLuint *arrays );

/**
 * @brief void glGenVertexArrays( GLsizei n, GLuint *arrays );
 */
GLE_API void glGenVertexArrays( GLsizei n, GLuint *arrays );

/**
 * @brief GLboolean glIsVertexArray( GLuint array );
 */
GLE_API GLboolean glIsVertexArray( GLuint array );

//@}


/**
 * @defgroup GL_ARB_vertex_blend GL_ARB_vertex_blend
 * Extension number in OpenGL registry : 15
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/vertex_blend.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_vertex_buffer_object GL_ARB_vertex_buffer_object
 * Extension number in OpenGL registry : 28
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/vertex_buffer_object.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_vertex_program GL_ARB_vertex_program
 * Extension number in OpenGL registry : 26
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/vertex_program.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_vertex_shader GL_ARB_vertex_shader
 * Extension number in OpenGL registry : 31
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/vertex_shader.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ARB_window_pos GL_ARB_window_pos
 * Extension number in OpenGL registry : 25
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/window_pos.txt
 * @ingroup g_GL_ARB g_extensions
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
 * @defgroup GL_ATI_draw_buffers GL_ATI_draw_buffers
 * Extension number in OpenGL registry : 277
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/draw_buffers.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_ATI_element_array GL_ATI_element_array
 * Extension number in OpenGL registry : 256
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/element_array.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_ATI_envmap_bumpmap GL_ATI_envmap_bumpmap
 * Extension number in OpenGL registry : 244
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/envmap_bumpmap.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_ATI_fragment_shader GL_ATI_fragment_shader
 * Extension number in OpenGL registry : 245
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/fragment_shader.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_ATI_map_object_buffer GL_ATI_map_object_buffer
 * Extension number in OpenGL registry : 288
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/map_object_buffer.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_ATI_meminfo GL_ATI_meminfo
 * Extension number in OpenGL registry : 359
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/meminfo.txt
 * @ingroup g_GL_ATI g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ATI_meminfo is supported.
 * @return Returns \c true if \b GL_ATI_meminfo is supported, false otherwise.
 */
GLE_API bool isGL_ATI_meminfo();

//@}

			
/**	
 * @defgroup GL_ATI_pixel_format_float GL_ATI_pixel_format_float
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ATI_pixel_format_float is supported.
 * @return Returns \c true if \b GL_ATI_pixel_format_float is supported, false otherwise.
 */
GLE_API bool isGL_ATI_pixel_format_float();

//@}


/**
 * @defgroup GL_ATI_pn_triangles GL_ATI_pn_triangles
 * Extension number in OpenGL registry : 246
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/pn_triangles.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_ATI_separate_stencil GL_ATI_separate_stencil
 * Extension number in OpenGL registry : 289
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/separate_stencil.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_ATI_text_fragment_shader GL_ATI_text_fragment_shader
 * Extension number in OpenGL registry : 269
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/text_fragment_shader.txt
 * @ingroup g_GL_ATI g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ATI_text_fragment_shader is supported.
 * @return Returns \c true if \b GL_ATI_text_fragment_shader is supported, false otherwise.
 */
GLE_API bool isGL_ATI_text_fragment_shader();

//@}


/**
 * @defgroup GL_ATI_texture_env_combine3 GL_ATI_texture_env_combine3
 * Extension number in OpenGL registry : 279
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/texture_env_combine3.txt
 * @ingroup g_GL_ATI g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ATI_texture_env_combine3 is supported.
 * @return Returns \c true if \b GL_ATI_texture_env_combine3 is supported, false otherwise.
 */
GLE_API bool isGL_ATI_texture_env_combine3();

//@}


/**
 * @defgroup GL_ATI_texture_float GL_ATI_texture_float
 * Extension number in OpenGL registry : 280
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/texture_float.txt
 * @ingroup g_GL_ATI g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ATI_texture_float is supported.
 * @return Returns \c true if \b GL_ATI_texture_float is supported, false otherwise.
 */
GLE_API bool isGL_ATI_texture_float();

//@}


/**
 * @defgroup GL_ATI_texture_mirror_once GL_ATI_texture_mirror_once
 * Extension number in OpenGL registry : 221
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/texture_mirror_once.txt
 * @ingroup g_GL_ATI g_extensions
 */
//@{
/**
 * @brief Test if \b GL_ATI_texture_mirror_once is supported.
 * @return Returns \c true if \b GL_ATI_texture_mirror_once is supported, false otherwise.
 */
GLE_API bool isGL_ATI_texture_mirror_once();

//@}


/**
 * @defgroup GL_ATI_vertex_array_object GL_ATI_vertex_array_object
 * Extension number in OpenGL registry : 247
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/vertex_array_object.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_ATI_vertex_attrib_array_object GL_ATI_vertex_attrib_array_object
 * Extension number in OpenGL registry : 290
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/vertex_attrib_array_object.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_ATI_vertex_streams GL_ATI_vertex_streams
 * Extension number in OpenGL registry : 249
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ATI/vertex_streams.txt
 * @ingroup g_GL_ATI g_extensions
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
 * @defgroup GL_EXT_422_pixels GL_EXT_422_pixels
 * Extension number in OpenGL registry : 178
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/422_pixels.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_422_pixels is supported.
 * @return Returns \c true if \b GL_EXT_422_pixels is supported, false otherwise.
 */
GLE_API bool isGL_EXT_422_pixels();

//@}


/**
 * @defgroup GL_EXT_abgr GL_EXT_abgr
 * Extension number in OpenGL registry : 1
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/abgr.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_abgr is supported.
 * @return Returns \c true if \b GL_EXT_abgr is supported, false otherwise.
 */
GLE_API bool isGL_EXT_abgr();

//@}


/**
 * @defgroup GL_EXT_bgra GL_EXT_bgra
 * Extension number in OpenGL registry : 129
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/bgra.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_bgra is supported.
 * @return Returns \c true if \b GL_EXT_bgra is supported, false otherwise.
 */
GLE_API bool isGL_EXT_bgra();

//@}


/**
 * @defgroup GL_EXT_bindable_uniform GL_EXT_bindable_uniform
 * Extension number in OpenGL registry : 342
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/bindable_uniform.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_bindable_uniform is supported.
 * @return Returns \c true if \b GL_EXT_bindable_uniform is supported, false otherwise.
 */
GLE_API bool isGL_EXT_bindable_uniform();

/**
 * @brief void glUniformBufferEXT( GLuint program, GLint location, GLuint buffer );
 */
GLE_API void glUniformBufferEXT( GLuint program, GLint location, GLuint buffer );

/**
 * @brief GLint glGetUniformBufferSizeEXT( GLuint program, GLint location );
 */
GLE_API GLint glGetUniformBufferSizeEXT( GLuint program, GLint location );

/**
 * @brief GLintptr glGetUniformOffsetEXT( GLuint program, GLint location );
 */
GLE_API GLintptr glGetUniformOffsetEXT( GLuint program, GLint location );

//@}


/**
 * @defgroup GL_EXT_blend_color GL_EXT_blend_color
 * Extension number in OpenGL registry : 2
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/blend_color.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_blend_equation_separate GL_EXT_blend_equation_separate
 * Extension number in OpenGL registry : 299
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/blend_equation_separate.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_blend_func_separate GL_EXT_blend_func_separate
 * Extension number in OpenGL registry : 173
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/blend_func_separate.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_blend_logic_op GL_EXT_blend_logic_op
 * Extension number in OpenGL registry : 39
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/blend_logic_op.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_blend_logic_op is supported.
 * @return Returns \c true if \b GL_EXT_blend_logic_op is supported, false otherwise.
 */
GLE_API bool isGL_EXT_blend_logic_op();

//@}


/**
 * @defgroup GL_EXT_blend_minmax GL_EXT_blend_minmax
 * Extension number in OpenGL registry : 37
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/blend_minmax.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_blend_subtract GL_EXT_blend_subtract
 * Extension number in OpenGL registry : 38
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/blend_subtract.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_blend_subtract is supported.
 * @return Returns \c true if \b GL_EXT_blend_subtract is supported, false otherwise.
 */
GLE_API bool isGL_EXT_blend_subtract();

//@}


/**
 * @defgroup GL_EXT_clip_volume_hint GL_EXT_clip_volume_hint
 * Extension number in OpenGL registry : 79
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/clip_volume_hint.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_clip_volume_hint is supported.
 * @return Returns \c true if \b GL_EXT_clip_volume_hint is supported, false otherwise.
 */
GLE_API bool isGL_EXT_clip_volume_hint();

//@}


/**
 * @defgroup GL_EXT_cmyka GL_EXT_cmyka
 * Extension number in OpenGL registry : 18
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/cmyka.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_cmyka is supported.
 * @return Returns \c true if \b GL_EXT_cmyka is supported, false otherwise.
 */
GLE_API bool isGL_EXT_cmyka();

//@}


/**
 * @defgroup GL_EXT_color_subtable GL_EXT_color_subtable
 * Extension number in OpenGL registry : 74
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/color_subtable.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_compiled_vertex_array GL_EXT_compiled_vertex_array
 * Extension number in OpenGL registry : 97
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/compiled_vertex_array.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_convolution GL_EXT_convolution
 * Extension number in OpenGL registry : 12
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/convolution.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_coordinate_frame GL_EXT_coordinate_frame
 * Extension number in OpenGL registry : 156
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/coordinate_frame.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_copy_texture GL_EXT_copy_texture
 * Extension number in OpenGL registry : 10
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/copy_texture.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_cull_vertex GL_EXT_cull_vertex
 * Extension number in OpenGL registry : 98
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/cull_vertex.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_depth_bounds_test GL_EXT_depth_bounds_test
 * Extension number in OpenGL registry : 297
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/depth_bounds_test.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_direct_state_access GL_EXT_direct_state_access
 * Extension number in OpenGL registry : 353
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/direct_state_access.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_direct_state_access is supported.
 * @return Returns \c true if \b GL_EXT_direct_state_access is supported, false otherwise.
 */
GLE_API bool isGL_EXT_direct_state_access();

/**
 * @brief void glClientAttribDefaultEXT( GLbitfield mask );
 */
GLE_API void glClientAttribDefaultEXT( GLbitfield mask );

/**
 * @brief void glPushClientAttribDefaultEXT( GLbitfield mask );
 */
GLE_API void glPushClientAttribDefaultEXT( GLbitfield mask );

/**
 * @brief void glMatrixLoadfEXT( GLenum mode, const GLfloat *m );
 */
GLE_API void glMatrixLoadfEXT( GLenum mode, const GLfloat *m );

/**
 * @brief void glMatrixLoaddEXT( GLenum mode, const GLdouble *m );
 */
GLE_API void glMatrixLoaddEXT( GLenum mode, const GLdouble *m );

/**
 * @brief void glMatrixMultfEXT( GLenum mode, const GLfloat *m );
 */
GLE_API void glMatrixMultfEXT( GLenum mode, const GLfloat *m );

/**
 * @brief void glMatrixMultdEXT( GLenum mode, const GLdouble *m );
 */
GLE_API void glMatrixMultdEXT( GLenum mode, const GLdouble *m );

/**
 * @brief void glMatrixLoadIdentityEXT( GLenum mode );
 */
GLE_API void glMatrixLoadIdentityEXT( GLenum mode );

/**
 * @brief void glMatrixRotatefEXT( GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glMatrixRotatefEXT( GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glMatrixRotatedEXT( GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glMatrixRotatedEXT( GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glMatrixScalefEXT( GLenum mode, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glMatrixScalefEXT( GLenum mode, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glMatrixScaledEXT( GLenum mode, GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glMatrixScaledEXT( GLenum mode, GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glMatrixTranslatefEXT( GLenum mode, GLfloat x, GLfloat y, GLfloat z );
 */
GLE_API void glMatrixTranslatefEXT( GLenum mode, GLfloat x, GLfloat y, GLfloat z );

/**
 * @brief void glMatrixTranslatedEXT( GLenum mode, GLdouble x, GLdouble y, GLdouble z );
 */
GLE_API void glMatrixTranslatedEXT( GLenum mode, GLdouble x, GLdouble y, GLdouble z );

/**
 * @brief void glMatrixFrustumEXT( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );
 */
GLE_API void glMatrixFrustumEXT( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );

/**
 * @brief void glMatrixOrthoEXT( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );
 */
GLE_API void glMatrixOrthoEXT( GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );

/**
 * @brief void glMatrixPopEXT( GLenum mode );
 */
GLE_API void glMatrixPopEXT( GLenum mode );

/**
 * @brief void glMatrixPushEXT( GLenum mode );
 */
GLE_API void glMatrixPushEXT( GLenum mode );

/**
 * @brief void glMatrixLoadTransposefEXT( GLenum mode, const GLfloat *m );
 */
GLE_API void glMatrixLoadTransposefEXT( GLenum mode, const GLfloat *m );

/**
 * @brief void glMatrixLoadTransposedEXT( GLenum mode, const GLdouble *m );
 */
GLE_API void glMatrixLoadTransposedEXT( GLenum mode, const GLdouble *m );

/**
 * @brief void glMatrixMultTransposefEXT( GLenum mode, const GLfloat *m );
 */
GLE_API void glMatrixMultTransposefEXT( GLenum mode, const GLfloat *m );

/**
 * @brief void glMatrixMultTransposedEXT( GLenum mode, const GLdouble *m );
 */
GLE_API void glMatrixMultTransposedEXT( GLenum mode, const GLdouble *m );

/**
 * @brief void glTextureParameterfEXT( GLuint texture, GLenum target, GLenum pname, GLfloat param );
 */
GLE_API void glTextureParameterfEXT( GLuint texture, GLenum target, GLenum pname, GLfloat param );

/**
 * @brief void glTextureParameterfvEXT( GLuint texture, GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glTextureParameterfvEXT( GLuint texture, GLenum target, GLenum pname, const GLfloat *params );

/**
 * @brief void glTextureParameteriEXT( GLuint texture, GLenum target, GLenum pname, GLint param );
 */
GLE_API void glTextureParameteriEXT( GLuint texture, GLenum target, GLenum pname, GLint param );

/**
 * @brief void glTextureParameterivEXT( GLuint texture, GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glTextureParameterivEXT( GLuint texture, GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glTextureImage1DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTextureImage1DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glTextureImage2DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTextureImage2DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glTextureSubImage1DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTextureSubImage1DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glTextureSubImage2DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTextureSubImage2DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glCopyTextureImage1DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border );
 */
GLE_API void glCopyTextureImage1DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border );

/**
 * @brief void glCopyTextureImage2DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );
 */
GLE_API void glCopyTextureImage2DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );

/**
 * @brief void glCopyTextureSubImage1DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );
 */
GLE_API void glCopyTextureSubImage1DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );

/**
 * @brief void glCopyTextureSubImage2DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );
 */
GLE_API void glCopyTextureSubImage2DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );

/**
 * @brief void glGetTextureImageEXT( GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels );
 */
GLE_API void glGetTextureImageEXT( GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels );

/**
 * @brief void glGetTextureParameterfvEXT( GLuint texture, GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetTextureParameterfvEXT( GLuint texture, GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetTextureParameterivEXT( GLuint texture, GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetTextureParameterivEXT( GLuint texture, GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetTextureLevelParameterfvEXT( GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params );
 */
GLE_API void glGetTextureLevelParameterfvEXT( GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params );

/**
 * @brief void glGetTextureLevelParameterivEXT( GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params );
 */
GLE_API void glGetTextureLevelParameterivEXT( GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params );

/**
 * @brief void glTextureImage3DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTextureImage3DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glTextureSubImage3DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glTextureSubImage3DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glCopyTextureSubImage3DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );
 */
GLE_API void glCopyTextureSubImage3DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );

/**
 * @brief void glMultiTexParameterfEXT( GLenum texunit, GLenum target, GLenum pname, GLfloat param );
 */
GLE_API void glMultiTexParameterfEXT( GLenum texunit, GLenum target, GLenum pname, GLfloat param );

/**
 * @brief void glMultiTexParameterfvEXT( GLenum texunit, GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glMultiTexParameterfvEXT( GLenum texunit, GLenum target, GLenum pname, const GLfloat *params );

/**
 * @brief void glMultiTexParameteriEXT( GLenum texunit, GLenum target, GLenum pname, GLint param );
 */
GLE_API void glMultiTexParameteriEXT( GLenum texunit, GLenum target, GLenum pname, GLint param );

/**
 * @brief void glMultiTexParameterivEXT( GLenum texunit, GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glMultiTexParameterivEXT( GLenum texunit, GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glMultiTexImage1DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glMultiTexImage1DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glMultiTexImage2DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glMultiTexImage2DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glMultiTexSubImage1DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glMultiTexSubImage1DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glMultiTexSubImage2DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glMultiTexSubImage2DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glCopyMultiTexImage1DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border );
 */
GLE_API void glCopyMultiTexImage1DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border );

/**
 * @brief void glCopyMultiTexImage2DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );
 */
GLE_API void glCopyMultiTexImage2DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );

/**
 * @brief void glCopyMultiTexSubImage1DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );
 */
GLE_API void glCopyMultiTexSubImage1DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );

/**
 * @brief void glCopyMultiTexSubImage2DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );
 */
GLE_API void glCopyMultiTexSubImage2DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );

/**
 * @brief void glGetMultiTexImageEXT( GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels );
 */
GLE_API void glGetMultiTexImageEXT( GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels );

/**
 * @brief void glGetMultiTexParameterfvEXT( GLenum texunit, GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetMultiTexParameterfvEXT( GLenum texunit, GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetMultiTexParameterivEXT( GLenum texunit, GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetMultiTexParameterivEXT( GLenum texunit, GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetMultiTexLevelParameterfvEXT( GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params );
 */
GLE_API void glGetMultiTexLevelParameterfvEXT( GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params );

/**
 * @brief void glGetMultiTexLevelParameterivEXT( GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params );
 */
GLE_API void glGetMultiTexLevelParameterivEXT( GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params );

/**
 * @brief void glMultiTexImage3DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glMultiTexImage3DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glMultiTexSubImage3DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );
 */
GLE_API void glMultiTexSubImage3DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels );

/**
 * @brief void glCopyMultiTexSubImage3DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );
 */
GLE_API void glCopyMultiTexSubImage3DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height );

/**
 * @brief void glBindMultiTextureEXT( GLenum texunit, GLenum target, GLuint texture );
 */
GLE_API void glBindMultiTextureEXT( GLenum texunit, GLenum target, GLuint texture );

/**
 * @brief void glEnableClientStateIndexedEXT( GLenum array, GLuint index );
 */
GLE_API void glEnableClientStateIndexedEXT( GLenum array, GLuint index );

/**
 * @brief void glDisableClientStateIndexedEXT( GLenum array, GLuint index );
 */
GLE_API void glDisableClientStateIndexedEXT( GLenum array, GLuint index );

/**
 * @brief void glMultiTexCoordPointerEXT( GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glMultiTexCoordPointerEXT( GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );

/**
 * @brief void glMultiTexEnvfEXT( GLenum texunit, GLenum target, GLenum pname, GLfloat param );
 */
GLE_API void glMultiTexEnvfEXT( GLenum texunit, GLenum target, GLenum pname, GLfloat param );

/**
 * @brief void glMultiTexEnvfvEXT( GLenum texunit, GLenum target, GLenum pname, const GLfloat *params );
 */
GLE_API void glMultiTexEnvfvEXT( GLenum texunit, GLenum target, GLenum pname, const GLfloat *params );

/**
 * @brief void glMultiTexEnviEXT( GLenum texunit, GLenum target, GLenum pname, GLint param );
 */
GLE_API void glMultiTexEnviEXT( GLenum texunit, GLenum target, GLenum pname, GLint param );

/**
 * @brief void glMultiTexEnvivEXT( GLenum texunit, GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glMultiTexEnvivEXT( GLenum texunit, GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glMultiTexGendEXT( GLenum texunit, GLenum coord, GLenum pname, GLdouble param );
 */
GLE_API void glMultiTexGendEXT( GLenum texunit, GLenum coord, GLenum pname, GLdouble param );

/**
 * @brief void glMultiTexGendvEXT( GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params );
 */
GLE_API void glMultiTexGendvEXT( GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params );

/**
 * @brief void glMultiTexGenfEXT( GLenum texunit, GLenum coord, GLenum pname, GLfloat param );
 */
GLE_API void glMultiTexGenfEXT( GLenum texunit, GLenum coord, GLenum pname, GLfloat param );

/**
 * @brief void glMultiTexGenfvEXT( GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params );
 */
GLE_API void glMultiTexGenfvEXT( GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params );

/**
 * @brief void glMultiTexGeniEXT( GLenum texunit, GLenum coord, GLenum pname, GLint param );
 */
GLE_API void glMultiTexGeniEXT( GLenum texunit, GLenum coord, GLenum pname, GLint param );

/**
 * @brief void glMultiTexGenivEXT( GLenum texunit, GLenum coord, GLenum pname, const GLint *params );
 */
GLE_API void glMultiTexGenivEXT( GLenum texunit, GLenum coord, GLenum pname, const GLint *params );

/**
 * @brief void glGetMultiTexEnvfvEXT( GLenum texunit, GLenum target, GLenum pname, GLfloat *params );
 */
GLE_API void glGetMultiTexEnvfvEXT( GLenum texunit, GLenum target, GLenum pname, GLfloat *params );

/**
 * @brief void glGetMultiTexEnvivEXT( GLenum texunit, GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetMultiTexEnvivEXT( GLenum texunit, GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetMultiTexGendvEXT( GLenum texunit, GLenum coord, GLenum pname, GLdouble *params );
 */
GLE_API void glGetMultiTexGendvEXT( GLenum texunit, GLenum coord, GLenum pname, GLdouble *params );

/**
 * @brief void glGetMultiTexGenfvEXT( GLenum texunit, GLenum coord, GLenum pname, GLfloat *params );
 */
GLE_API void glGetMultiTexGenfvEXT( GLenum texunit, GLenum coord, GLenum pname, GLfloat *params );

/**
 * @brief void glGetMultiTexGenivEXT( GLenum texunit, GLenum coord, GLenum pname, GLint *params );
 */
GLE_API void glGetMultiTexGenivEXT( GLenum texunit, GLenum coord, GLenum pname, GLint *params );

/**
 * @brief void glGetFloatIndexedvEXT( GLenum target, GLuint index, GLfloat *data );
 */
GLE_API void glGetFloatIndexedvEXT( GLenum target, GLuint index, GLfloat *data );

/**
 * @brief void glGetDoubleIndexedvEXT( GLenum target, GLuint index, GLdouble *data );
 */
GLE_API void glGetDoubleIndexedvEXT( GLenum target, GLuint index, GLdouble *data );

/**
 * @brief void glGetPointerIndexedvEXT( GLenum target, GLuint index, GLvoid* *data );
 */
GLE_API void glGetPointerIndexedvEXT( GLenum target, GLuint index, GLvoid* *data );

/**
 * @brief void glCompressedTextureImage3DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedTextureImage3DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedTextureImage2DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedTextureImage2DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedTextureImage1DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedTextureImage1DEXT( GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedTextureSubImage3DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedTextureSubImage3DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedTextureSubImage2DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedTextureSubImage2DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedTextureSubImage1DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedTextureSubImage1DEXT( GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glGetCompressedTextureImageEXT( GLuint texture, GLenum target, GLint lod, GLvoid *img );
 */
GLE_API void glGetCompressedTextureImageEXT( GLuint texture, GLenum target, GLint lod, GLvoid *img );

/**
 * @brief void glCompressedMultiTexImage3DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedMultiTexImage3DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedMultiTexImage2DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedMultiTexImage2DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedMultiTexImage1DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedMultiTexImage1DEXT( GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedMultiTexSubImage3DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedMultiTexSubImage3DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedMultiTexSubImage2DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedMultiTexSubImage2DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glCompressedMultiTexSubImage1DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits );
 */
GLE_API void glCompressedMultiTexSubImage1DEXT( GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits );

/**
 * @brief void glGetCompressedMultiTexImageEXT( GLenum texunit, GLenum target, GLint lod, GLvoid *img );
 */
GLE_API void glGetCompressedMultiTexImageEXT( GLenum texunit, GLenum target, GLint lod, GLvoid *img );

/**
 * @brief void glNamedProgramStringEXT( GLuint program, GLenum target, GLenum format, GLsizei len, const GLvoid *string );
 */
GLE_API void glNamedProgramStringEXT( GLuint program, GLenum target, GLenum format, GLsizei len, const GLvoid *string );

/**
 * @brief void glNamedProgramLocalParameter4dEXT( GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );
 */
GLE_API void glNamedProgramLocalParameter4dEXT( GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w );

/**
 * @brief void glNamedProgramLocalParameter4dvEXT( GLuint program, GLenum target, GLuint index, const GLdouble *params );
 */
GLE_API void glNamedProgramLocalParameter4dvEXT( GLuint program, GLenum target, GLuint index, const GLdouble *params );

/**
 * @brief void glNamedProgramLocalParameter4fEXT( GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );
 */
GLE_API void glNamedProgramLocalParameter4fEXT( GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w );

/**
 * @brief void glNamedProgramLocalParameter4fvEXT( GLuint program, GLenum target, GLuint index, const GLfloat *params );
 */
GLE_API void glNamedProgramLocalParameter4fvEXT( GLuint program, GLenum target, GLuint index, const GLfloat *params );

/**
 * @brief void glGetNamedProgramLocalParameterdvEXT( GLuint program, GLenum target, GLuint index, GLdouble *params );
 */
GLE_API void glGetNamedProgramLocalParameterdvEXT( GLuint program, GLenum target, GLuint index, GLdouble *params );

/**
 * @brief void glGetNamedProgramLocalParameterfvEXT( GLuint program, GLenum target, GLuint index, GLfloat *params );
 */
GLE_API void glGetNamedProgramLocalParameterfvEXT( GLuint program, GLenum target, GLuint index, GLfloat *params );

/**
 * @brief void glGetNamedProgramivEXT( GLuint program, GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetNamedProgramivEXT( GLuint program, GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetNamedProgramStringEXT( GLuint program, GLenum target, GLenum pname, GLvoid *string );
 */
GLE_API void glGetNamedProgramStringEXT( GLuint program, GLenum target, GLenum pname, GLvoid *string );

/**
 * @brief void glNamedProgramLocalParameters4fvEXT( GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params );
 */
GLE_API void glNamedProgramLocalParameters4fvEXT( GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params );

/**
 * @brief void glNamedProgramLocalParameterI4iEXT( GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w );
 */
GLE_API void glNamedProgramLocalParameterI4iEXT( GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w );

/**
 * @brief void glNamedProgramLocalParameterI4ivEXT( GLuint program, GLenum target, GLuint index, const GLint *params );
 */
GLE_API void glNamedProgramLocalParameterI4ivEXT( GLuint program, GLenum target, GLuint index, const GLint *params );

/**
 * @brief void glNamedProgramLocalParametersI4ivEXT( GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params );
 */
GLE_API void glNamedProgramLocalParametersI4ivEXT( GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params );

/**
 * @brief void glNamedProgramLocalParameterI4uiEXT( GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );
 */
GLE_API void glNamedProgramLocalParameterI4uiEXT( GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );

/**
 * @brief void glNamedProgramLocalParameterI4uivEXT( GLuint program, GLenum target, GLuint index, const GLuint *params );
 */
GLE_API void glNamedProgramLocalParameterI4uivEXT( GLuint program, GLenum target, GLuint index, const GLuint *params );

/**
 * @brief void glNamedProgramLocalParametersI4uivEXT( GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params );
 */
GLE_API void glNamedProgramLocalParametersI4uivEXT( GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params );

/**
 * @brief void glGetNamedProgramLocalParameterIivEXT( GLuint program, GLenum target, GLuint index, GLint *params );
 */
GLE_API void glGetNamedProgramLocalParameterIivEXT( GLuint program, GLenum target, GLuint index, GLint *params );

/**
 * @brief void glGetNamedProgramLocalParameterIuivEXT( GLuint program, GLenum target, GLuint index, GLuint *params );
 */
GLE_API void glGetNamedProgramLocalParameterIuivEXT( GLuint program, GLenum target, GLuint index, GLuint *params );

/**
 * @brief void glTextureParameterIivEXT( GLuint texture, GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glTextureParameterIivEXT( GLuint texture, GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glTextureParameterIuivEXT( GLuint texture, GLenum target, GLenum pname, const GLuint *params );
 */
GLE_API void glTextureParameterIuivEXT( GLuint texture, GLenum target, GLenum pname, const GLuint *params );

/**
 * @brief void glGetTextureParameterIivEXT( GLuint texture, GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetTextureParameterIivEXT( GLuint texture, GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetTextureParameterIuivEXT( GLuint texture, GLenum target, GLenum pname, GLuint *params );
 */
GLE_API void glGetTextureParameterIuivEXT( GLuint texture, GLenum target, GLenum pname, GLuint *params );

/**
 * @brief void glMultiTexParameterIivEXT( GLenum texunit, GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glMultiTexParameterIivEXT( GLenum texunit, GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glMultiTexParameterIuivEXT( GLenum texunit, GLenum target, GLenum pname, const GLuint *params );
 */
GLE_API void glMultiTexParameterIuivEXT( GLenum texunit, GLenum target, GLenum pname, const GLuint *params );

/**
 * @brief void glGetMultiTexParameterIivEXT( GLenum texunit, GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetMultiTexParameterIivEXT( GLenum texunit, GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetMultiTexParameterIuivEXT( GLenum texunit, GLenum target, GLenum pname, GLuint *params );
 */
GLE_API void glGetMultiTexParameterIuivEXT( GLenum texunit, GLenum target, GLenum pname, GLuint *params );

/**
 * @brief void glProgramUniform1fEXT( GLuint program, GLint location, GLfloat v0 );
 */
GLE_API void glProgramUniform1fEXT( GLuint program, GLint location, GLfloat v0 );

/**
 * @brief void glProgramUniform2fEXT( GLuint program, GLint location, GLfloat v0, GLfloat v1 );
 */
GLE_API void glProgramUniform2fEXT( GLuint program, GLint location, GLfloat v0, GLfloat v1 );

/**
 * @brief void glProgramUniform3fEXT( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );
 */
GLE_API void glProgramUniform3fEXT( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2 );

/**
 * @brief void glProgramUniform4fEXT( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );
 */
GLE_API void glProgramUniform4fEXT( GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 );

/**
 * @brief void glProgramUniform1iEXT( GLuint program, GLint location, GLint v0 );
 */
GLE_API void glProgramUniform1iEXT( GLuint program, GLint location, GLint v0 );

/**
 * @brief void glProgramUniform2iEXT( GLuint program, GLint location, GLint v0, GLint v1 );
 */
GLE_API void glProgramUniform2iEXT( GLuint program, GLint location, GLint v0, GLint v1 );

/**
 * @brief void glProgramUniform3iEXT( GLuint program, GLint location, GLint v0, GLint v1, GLint v2 );
 */
GLE_API void glProgramUniform3iEXT( GLuint program, GLint location, GLint v0, GLint v1, GLint v2 );

/**
 * @brief void glProgramUniform4iEXT( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );
 */
GLE_API void glProgramUniform4iEXT( GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3 );

/**
 * @brief void glProgramUniform1fvEXT( GLuint program, GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glProgramUniform1fvEXT( GLuint program, GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glProgramUniform2fvEXT( GLuint program, GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glProgramUniform2fvEXT( GLuint program, GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glProgramUniform3fvEXT( GLuint program, GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glProgramUniform3fvEXT( GLuint program, GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glProgramUniform4fvEXT( GLuint program, GLint location, GLsizei count, const GLfloat *value );
 */
GLE_API void glProgramUniform4fvEXT( GLuint program, GLint location, GLsizei count, const GLfloat *value );

/**
 * @brief void glProgramUniform1ivEXT( GLuint program, GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glProgramUniform1ivEXT( GLuint program, GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glProgramUniform2ivEXT( GLuint program, GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glProgramUniform2ivEXT( GLuint program, GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glProgramUniform3ivEXT( GLuint program, GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glProgramUniform3ivEXT( GLuint program, GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glProgramUniform4ivEXT( GLuint program, GLint location, GLsizei count, const GLint *value );
 */
GLE_API void glProgramUniform4ivEXT( GLuint program, GLint location, GLsizei count, const GLint *value );

/**
 * @brief void glProgramUniformMatrix2fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glProgramUniformMatrix2fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glProgramUniformMatrix3fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glProgramUniformMatrix3fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glProgramUniformMatrix4fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glProgramUniformMatrix4fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glProgramUniformMatrix2x3fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glProgramUniformMatrix2x3fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glProgramUniformMatrix3x2fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glProgramUniformMatrix3x2fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glProgramUniformMatrix2x4fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glProgramUniformMatrix2x4fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glProgramUniformMatrix4x2fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glProgramUniformMatrix4x2fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glProgramUniformMatrix3x4fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glProgramUniformMatrix3x4fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glProgramUniformMatrix4x3fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glProgramUniformMatrix4x3fvEXT( GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glProgramUniform1uiEXT( GLuint program, GLint location, GLuint v0 );
 */
GLE_API void glProgramUniform1uiEXT( GLuint program, GLint location, GLuint v0 );

/**
 * @brief void glProgramUniform2uiEXT( GLuint program, GLint location, GLuint v0, GLuint v1 );
 */
GLE_API void glProgramUniform2uiEXT( GLuint program, GLint location, GLuint v0, GLuint v1 );

/**
 * @brief void glProgramUniform3uiEXT( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2 );
 */
GLE_API void glProgramUniform3uiEXT( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2 );

/**
 * @brief void glProgramUniform4uiEXT( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 );
 */
GLE_API void glProgramUniform4uiEXT( GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 );

/**
 * @brief void glProgramUniform1uivEXT( GLuint program, GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glProgramUniform1uivEXT( GLuint program, GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glProgramUniform2uivEXT( GLuint program, GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glProgramUniform2uivEXT( GLuint program, GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glProgramUniform3uivEXT( GLuint program, GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glProgramUniform3uivEXT( GLuint program, GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glProgramUniform4uivEXT( GLuint program, GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glProgramUniform4uivEXT( GLuint program, GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glNamedBufferDataEXT( GLuint buffer, GLsizeiptr size, const GLvoid *data, GLenum usage );
 */
GLE_API void glNamedBufferDataEXT( GLuint buffer, GLsizeiptr size, const GLvoid *data, GLenum usage );

/**
 * @brief void glNamedBufferSubDataEXT( GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid *data );
 */
GLE_API void glNamedBufferSubDataEXT( GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid *data );

/**
 * @brief GLvoid* glMapNamedBufferEXT( GLuint buffer, GLenum access );
 */
GLE_API GLvoid* glMapNamedBufferEXT( GLuint buffer, GLenum access );

/**
 * @brief GLboolean glUnmapNamedBufferEXT( GLuint buffer );
 */
GLE_API GLboolean glUnmapNamedBufferEXT( GLuint buffer );

/**
 * @brief void glGetNamedBufferParameterivEXT( GLuint buffer, GLenum pname, GLint *params );
 */
GLE_API void glGetNamedBufferParameterivEXT( GLuint buffer, GLenum pname, GLint *params );

/**
 * @brief void glGetNamedBufferPointervEXT( GLuint buffer, GLenum pname, GLvoid* *params );
 */
GLE_API void glGetNamedBufferPointervEXT( GLuint buffer, GLenum pname, GLvoid* *params );

/**
 * @brief void glGetNamedBufferSubDataEXT( GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid *data );
 */
GLE_API void glGetNamedBufferSubDataEXT( GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid *data );

/**
 * @brief void glTextureBufferEXT( GLuint texture, GLenum target, GLenum internalformat, GLuint buffer );
 */
GLE_API void glTextureBufferEXT( GLuint texture, GLenum target, GLenum internalformat, GLuint buffer );

/**
 * @brief void glMultiTexBufferEXT( GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer );
 */
GLE_API void glMultiTexBufferEXT( GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer );

/**
 * @brief void glNamedRenderbufferStorageEXT( GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height );
 */
GLE_API void glNamedRenderbufferStorageEXT( GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height );

/**
 * @brief void glGetNamedRenderbufferParameterivEXT( GLuint renderbuffer, GLenum pname, GLint *params );
 */
GLE_API void glGetNamedRenderbufferParameterivEXT( GLuint renderbuffer, GLenum pname, GLint *params );

/**
 * @brief GLenum glCheckNamedFramebufferStatusEXT( GLuint framebuffer, GLenum target );
 */
GLE_API GLenum glCheckNamedFramebufferStatusEXT( GLuint framebuffer, GLenum target );

/**
 * @brief void glNamedFramebufferTexture1DEXT( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level );
 */
GLE_API void glNamedFramebufferTexture1DEXT( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level );

/**
 * @brief void glNamedFramebufferTexture2DEXT( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level );
 */
GLE_API void glNamedFramebufferTexture2DEXT( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level );

/**
 * @brief void glNamedFramebufferTexture3DEXT( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset );
 */
GLE_API void glNamedFramebufferTexture3DEXT( GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset );

/**
 * @brief void glNamedFramebufferRenderbufferEXT( GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer );
 */
GLE_API void glNamedFramebufferRenderbufferEXT( GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer );

/**
 * @brief void glGetNamedFramebufferAttachmentParameterivEXT( GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params );
 */
GLE_API void glGetNamedFramebufferAttachmentParameterivEXT( GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params );

/**
 * @brief void glGenerateTextureMipmapEXT( GLuint texture, GLenum target );
 */
GLE_API void glGenerateTextureMipmapEXT( GLuint texture, GLenum target );

/**
 * @brief void glGenerateMultiTexMipmapEXT( GLenum texunit, GLenum target );
 */
GLE_API void glGenerateMultiTexMipmapEXT( GLenum texunit, GLenum target );

/**
 * @brief void glFramebufferDrawBufferEXT( GLuint framebuffer, GLenum mode );
 */
GLE_API void glFramebufferDrawBufferEXT( GLuint framebuffer, GLenum mode );

/**
 * @brief void glFramebufferDrawBuffersEXT( GLuint framebuffer, GLsizei n, const GLenum *bufs );
 */
GLE_API void glFramebufferDrawBuffersEXT( GLuint framebuffer, GLsizei n, const GLenum *bufs );

/**
 * @brief void glFramebufferReadBufferEXT( GLuint framebuffer, GLenum mode );
 */
GLE_API void glFramebufferReadBufferEXT( GLuint framebuffer, GLenum mode );

/**
 * @brief void glGetFramebufferParameterivEXT( GLuint framebuffer, GLenum pname, GLint *params );
 */
GLE_API void glGetFramebufferParameterivEXT( GLuint framebuffer, GLenum pname, GLint *params );

/**
 * @brief void glNamedRenderbufferStorageMultisampleEXT( GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height );
 */
GLE_API void glNamedRenderbufferStorageMultisampleEXT( GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height );

/**
 * @brief void glNamedRenderbufferStorageMultisampleCoverageEXT( GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height );
 */
GLE_API void glNamedRenderbufferStorageMultisampleCoverageEXT( GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height );

/**
 * @brief void glNamedFramebufferTextureEXT( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level );
 */
GLE_API void glNamedFramebufferTextureEXT( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level );

/**
 * @brief void glNamedFramebufferTextureLayerEXT( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer );
 */
GLE_API void glNamedFramebufferTextureLayerEXT( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer );

/**
 * @brief void glNamedFramebufferTextureFaceEXT( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face );
 */
GLE_API void glNamedFramebufferTextureFaceEXT( GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face );

/**
 * @brief void glTextureRenderbufferEXT( GLuint texture, GLenum target, GLuint renderbuffer );
 */
GLE_API void glTextureRenderbufferEXT( GLuint texture, GLenum target, GLuint renderbuffer );

/**
 * @brief void glMultiTexRenderbufferEXT( GLenum texunit, GLenum target, GLuint renderbuffer );
 */
GLE_API void glMultiTexRenderbufferEXT( GLenum texunit, GLenum target, GLuint renderbuffer );

//@}


/**
 * @defgroup GL_EXT_draw_buffers2 GL_EXT_draw_buffers2
 * Extension number in OpenGL registry : 340
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/draw_buffers2.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_draw_buffers2 is supported.
 * @return Returns \c true if \b GL_EXT_draw_buffers2 is supported, false otherwise.
 */
GLE_API bool isGL_EXT_draw_buffers2();

/**
 * @brief void glColorMaskIndexedEXT( GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a );
 */
GLE_API void glColorMaskIndexedEXT( GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a );

/**
 * @brief void glGetBooleanIndexedvEXT( GLenum target, GLuint index, GLboolean *data );
 */
GLE_API void glGetBooleanIndexedvEXT( GLenum target, GLuint index, GLboolean *data );

/**
 * @brief void glGetIntegerIndexedvEXT( GLenum target, GLuint index, GLint *data );
 */
GLE_API void glGetIntegerIndexedvEXT( GLenum target, GLuint index, GLint *data );

/**
 * @brief void glEnableIndexedEXT( GLenum target, GLuint index );
 */
GLE_API void glEnableIndexedEXT( GLenum target, GLuint index );

/**
 * @brief void glDisableIndexedEXT( GLenum target, GLuint index );
 */
GLE_API void glDisableIndexedEXT( GLenum target, GLuint index );

/**
 * @brief GLboolean glIsEnabledIndexedEXT( GLenum target, GLuint index );
 */
GLE_API GLboolean glIsEnabledIndexedEXT( GLenum target, GLuint index );

//@}


/**
 * @defgroup GL_EXT_draw_instanced GL_EXT_draw_instanced
 * Extension number in OpenGL registry : 327
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/draw_instanced.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_draw_instanced is supported.
 * @return Returns \c true if \b GL_EXT_draw_instanced is supported, false otherwise.
 */
GLE_API bool isGL_EXT_draw_instanced();

/**
 * @brief void glDrawArraysInstancedEXT( GLenum mode, GLint start, GLsizei count, GLsizei primcount );
 */
GLE_API void glDrawArraysInstancedEXT( GLenum mode, GLint start, GLsizei count, GLsizei primcount );

/**
 * @brief void glDrawElementsInstancedEXT( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount );
 */
GLE_API void glDrawElementsInstancedEXT( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount );

//@}


/**
 * @defgroup GL_EXT_draw_range_elements GL_EXT_draw_range_elements
 * Extension number in OpenGL registry : 112
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/draw_range_elements.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_fog_coord GL_EXT_fog_coord
 * Extension number in OpenGL registry : 149
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/fog_coord.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_framebuffer_blit GL_EXT_framebuffer_blit
 * Extension number in OpenGL registry : 316
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/framebuffer_blit.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_framebuffer_blit is supported.
 * @return Returns \c true if \b GL_EXT_framebuffer_blit is supported, false otherwise.
 */
GLE_API bool isGL_EXT_framebuffer_blit();

/**
 * @brief void glBlitFramebufferEXT( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter );
 */
GLE_API void glBlitFramebufferEXT( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter );

//@}


/**
 * @defgroup GL_EXT_framebuffer_multisample GL_EXT_framebuffer_multisample
 * Extension number in OpenGL registry : 317
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/framebuffer_multisample.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_framebuffer_multisample is supported.
 * @return Returns \c true if \b GL_EXT_framebuffer_multisample is supported, false otherwise.
 */
GLE_API bool isGL_EXT_framebuffer_multisample();

/**
 * @brief void glRenderbufferStorageMultisampleEXT( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height );
 */
GLE_API void glRenderbufferStorageMultisampleEXT( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height );

//@}


/**
 * @defgroup GL_EXT_framebuffer_object GL_EXT_framebuffer_object
 * Extension number in OpenGL registry : 310
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/framebuffer_object.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_framebuffer_sRGB GL_EXT_framebuffer_sRGB
 * Extension number in OpenGL registry : 337
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/framebuffer_sRGB.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_framebuffer_sRGB is supported.
 * @return Returns \c true if \b GL_EXT_framebuffer_sRGB is supported, false otherwise.
 */
GLE_API bool isGL_EXT_framebuffer_sRGB();

//@}


/**
 * @defgroup GL_EXT_geometry_shader4 GL_EXT_geometry_shader4
 * Extension number in OpenGL registry : 324
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/geometry_shader4.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_geometry_shader4 is supported.
 * @return Returns \c true if \b GL_EXT_geometry_shader4 is supported, false otherwise.
 */
GLE_API bool isGL_EXT_geometry_shader4();

/**
 * @brief void glProgramParameteriEXT( GLuint program, GLenum pname, GLint value );
 */
GLE_API void glProgramParameteriEXT( GLuint program, GLenum pname, GLint value );

//@}


/**
 * @defgroup GL_EXT_gpu_program_parameters GL_EXT_gpu_program_parameters
 * Extension number in OpenGL registry : 320
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/gpu_program_parameters.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_gpu_program_parameters is supported.
 * @return Returns \c true if \b GL_EXT_gpu_program_parameters is supported, false otherwise.
 */
GLE_API bool isGL_EXT_gpu_program_parameters();

/**
 * @brief void glProgramEnvParameters4fvEXT( GLenum target, GLuint index, GLsizei count, const GLfloat *params );
 */
GLE_API void glProgramEnvParameters4fvEXT( GLenum target, GLuint index, GLsizei count, const GLfloat *params );

/**
 * @brief void glProgramLocalParameters4fvEXT( GLenum target, GLuint index, GLsizei count, const GLfloat *params );
 */
GLE_API void glProgramLocalParameters4fvEXT( GLenum target, GLuint index, GLsizei count, const GLfloat *params );

//@}


/**
 * @defgroup GL_EXT_gpu_shader4 GL_EXT_gpu_shader4
 * Extension number in OpenGL registry : 326
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/gpu_shader4.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_gpu_shader4 is supported.
 * @return Returns \c true if \b GL_EXT_gpu_shader4 is supported, false otherwise.
 */
GLE_API bool isGL_EXT_gpu_shader4();

/**
 * @brief void glGetUniformuivEXT( GLuint program, GLint location, GLuint *params );
 */
GLE_API void glGetUniformuivEXT( GLuint program, GLint location, GLuint *params );

/**
 * @brief void glBindFragDataLocationEXT( GLuint program, GLuint color, const GLchar *name );
 */
GLE_API void glBindFragDataLocationEXT( GLuint program, GLuint color, const GLchar *name );

/**
 * @brief GLint glGetFragDataLocationEXT( GLuint program, const GLchar *name );
 */
GLE_API GLint glGetFragDataLocationEXT( GLuint program, const GLchar *name );

/**
 * @brief void glUniform1uiEXT( GLint location, GLuint v0 );
 */
GLE_API void glUniform1uiEXT( GLint location, GLuint v0 );

/**
 * @brief void glUniform2uiEXT( GLint location, GLuint v0, GLuint v1 );
 */
GLE_API void glUniform2uiEXT( GLint location, GLuint v0, GLuint v1 );

/**
 * @brief void glUniform3uiEXT( GLint location, GLuint v0, GLuint v1, GLuint v2 );
 */
GLE_API void glUniform3uiEXT( GLint location, GLuint v0, GLuint v1, GLuint v2 );

/**
 * @brief void glUniform4uiEXT( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 );
 */
GLE_API void glUniform4uiEXT( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 );

/**
 * @brief void glUniform1uivEXT( GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glUniform1uivEXT( GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glUniform2uivEXT( GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glUniform2uivEXT( GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glUniform3uivEXT( GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glUniform3uivEXT( GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glUniform4uivEXT( GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glUniform4uivEXT( GLint location, GLsizei count, const GLuint *value );

//@}


/**
 * @defgroup GL_EXT_histogram GL_EXT_histogram
 * Extension number in OpenGL registry : 11
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/histogram.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_index_array_formats GL_EXT_index_array_formats
 * Extension number in OpenGL registry : 96
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/index_array_formats.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_index_array_formats is supported.
 * @return Returns \c true if \b GL_EXT_index_array_formats is supported, false otherwise.
 */
GLE_API bool isGL_EXT_index_array_formats();

//@}


/**
 * @defgroup GL_EXT_index_func GL_EXT_index_func
 * Extension number in OpenGL registry : 95
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/index_func.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_index_material GL_EXT_index_material
 * Extension number in OpenGL registry : 94
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/index_material.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_index_texture GL_EXT_index_texture
 * Extension number in OpenGL registry : 93
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/index_texture.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_index_texture is supported.
 * @return Returns \c true if \b GL_EXT_index_texture is supported, false otherwise.
 */
GLE_API bool isGL_EXT_index_texture();

//@}


/**
 * @defgroup GL_EXT_light_texture GL_EXT_light_texture
 * Extension number in OpenGL registry : 117
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/light_texture.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_misc_attribute GL_EXT_misc_attribute
 * Extension number in OpenGL registry : 31
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/misc_attribute.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_misc_attribute is supported.
 * @return Returns \c true if \b GL_EXT_misc_attribute is supported, false otherwise.
 */
GLE_API bool isGL_EXT_misc_attribute();

//@}


/**
 * @defgroup GL_EXT_multi_draw_arrays GL_EXT_multi_draw_arrays
 * Extension number in OpenGL registry : 148
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/multi_draw_arrays.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_multisample GL_EXT_multisample
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
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
 * @defgroup GL_EXT_packed_depth_stencil GL_EXT_packed_depth_stencil
 * Extension number in OpenGL registry : 312
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/packed_depth_stencil.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_packed_depth_stencil is supported.
 * @return Returns \c true if \b GL_EXT_packed_depth_stencil is supported, false otherwise.
 */
GLE_API bool isGL_EXT_packed_depth_stencil();

//@}


/**
 * @defgroup GL_EXT_packed_float GL_EXT_packed_float
 * Extension number in OpenGL registry : 328
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/packed_float.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_packed_float is supported.
 * @return Returns \c true if \b GL_EXT_packed_float is supported, false otherwise.
 */
GLE_API bool isGL_EXT_packed_float();

//@}


/**
 * @defgroup GL_EXT_packed_pixels GL_EXT_packed_pixels
 * Extension number in OpenGL registry : 23
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/packed_pixels.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_packed_pixels is supported.
 * @return Returns \c true if \b GL_EXT_packed_pixels is supported, false otherwise.
 */
GLE_API bool isGL_EXT_packed_pixels();

//@}


/**
 * @defgroup GL_EXT_paletted_texture GL_EXT_paletted_texture
 * Extension number in OpenGL registry : 78
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/paletted_texture.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_pixel_buffer_object GL_EXT_pixel_buffer_object
 * Extension number in OpenGL registry : 302
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/pixel_buffer_object.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_pixel_buffer_object is supported.
 * @return Returns \c true if \b GL_EXT_pixel_buffer_object is supported, false otherwise.
 */
GLE_API bool isGL_EXT_pixel_buffer_object();

//@}


/**
 * @defgroup GL_EXT_pixel_transform GL_EXT_pixel_transform
 * Extension number in OpenGL registry : 138
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/pixel_transform.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_pixel_transform_color_table GL_EXT_pixel_transform_color_table
 * Extension number in OpenGL registry : 139
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/pixel_transform_color_table.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_pixel_transform_color_table is supported.
 * @return Returns \c true if \b GL_EXT_pixel_transform_color_table is supported, false otherwise.
 */
GLE_API bool isGL_EXT_pixel_transform_color_table();

//@}


/**
 * @defgroup GL_EXT_point_parameters GL_EXT_point_parameters
 * Extension number in OpenGL registry : 54
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/point_parameters.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_polygon_offset GL_EXT_polygon_offset
 * Extension number in OpenGL registry : 3
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/polygon_offset.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_provoking_vertex GL_EXT_provoking_vertex
 * Extension number in OpenGL registry : 364
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/provoking_vertex.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_provoking_vertex is supported.
 * @return Returns \c true if \b GL_EXT_provoking_vertex is supported, false otherwise.
 */
GLE_API bool isGL_EXT_provoking_vertex();

/**
 * @brief void glProvokingVertexEXT( GLenum mode );
 */
GLE_API void glProvokingVertexEXT( GLenum mode );

//@}


/**
 * @defgroup GL_EXT_rescale_normal GL_EXT_rescale_normal
 * Extension number in OpenGL registry : 27
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/rescale_normal.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_rescale_normal is supported.
 * @return Returns \c true if \b GL_EXT_rescale_normal is supported, false otherwise.
 */
GLE_API bool isGL_EXT_rescale_normal();

//@}


/**
 * @defgroup GL_EXT_secondary_color GL_EXT_secondary_color
 * Extension number in OpenGL registry : 145
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/secondary_color.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_separate_specular_color GL_EXT_separate_specular_color
 * Extension number in OpenGL registry : 144
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/separate_specular_color.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_separate_specular_color is supported.
 * @return Returns \c true if \b GL_EXT_separate_specular_color is supported, false otherwise.
 */
GLE_API bool isGL_EXT_separate_specular_color();

//@}


/**
 * @defgroup GL_EXT_shadow_funcs GL_EXT_shadow_funcs
 * Extension number in OpenGL registry : 267
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/shadow_funcs.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_shadow_funcs is supported.
 * @return Returns \c true if \b GL_EXT_shadow_funcs is supported, false otherwise.
 */
GLE_API bool isGL_EXT_shadow_funcs();

//@}


/**
 * @defgroup GL_EXT_shared_texture_palette GL_EXT_shared_texture_palette
 * Extension number in OpenGL registry : 141
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/shared_texture_palette.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_shared_texture_palette is supported.
 * @return Returns \c true if \b GL_EXT_shared_texture_palette is supported, false otherwise.
 */
GLE_API bool isGL_EXT_shared_texture_palette();

//@}


/**
 * @defgroup GL_EXT_stencil_clear_tag GL_EXT_stencil_clear_tag
 * Extension number in OpenGL registry : 314
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/stencil_clear_tag.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_stencil_clear_tag is supported.
 * @return Returns \c true if \b GL_EXT_stencil_clear_tag is supported, false otherwise.
 */
GLE_API bool isGL_EXT_stencil_clear_tag();

/**
 * @brief void glStencilClearTagEXT( GLsizei stencilTagBits, GLuint stencilClearTag );
 */
GLE_API void glStencilClearTagEXT( GLsizei stencilTagBits, GLuint stencilClearTag );

//@}


/**
 * @defgroup GL_EXT_stencil_two_side GL_EXT_stencil_two_side
 * Extension number in OpenGL registry : 268
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/stencil_two_side.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_stencil_wrap GL_EXT_stencil_wrap
 * Extension number in OpenGL registry : 176
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/stencil_wrap.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_stencil_wrap is supported.
 * @return Returns \c true if \b GL_EXT_stencil_wrap is supported, false otherwise.
 */
GLE_API bool isGL_EXT_stencil_wrap();

//@}


/**
 * @defgroup GL_EXT_subtexture GL_EXT_subtexture
 * Extension number in OpenGL registry : 9
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/subtexture.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_texture GL_EXT_texture
 * Extension number in OpenGL registry : 4
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture is supported.
 * @return Returns \c true if \b GL_EXT_texture is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture();

//@}


/**
 * @defgroup GL_EXT_texture3D GL_EXT_texture3D
 * Extension number in OpenGL registry : 6
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture3D.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_texture_array GL_EXT_texture_array
 * Extension number in OpenGL registry : 329
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_array.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_array is supported.
 * @return Returns \c true if \b GL_EXT_texture_array is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_array();

//@}


/**
 * @defgroup GL_EXT_texture_buffer_object GL_EXT_texture_buffer_object
 * Extension number in OpenGL registry : 330
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_buffer_object.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_buffer_object is supported.
 * @return Returns \c true if \b GL_EXT_texture_buffer_object is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_buffer_object();

/**
 * @brief void glTexBufferEXT( GLenum target, GLenum internalformat, GLuint buffer );
 */
GLE_API void glTexBufferEXT( GLenum target, GLenum internalformat, GLuint buffer );

//@}


/**
 * @defgroup GL_EXT_texture_compression_latc GL_EXT_texture_compression_latc
 * Extension number in OpenGL registry : 331
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_compression_latc.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_compression_latc is supported.
 * @return Returns \c true if \b GL_EXT_texture_compression_latc is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_compression_latc();

//@}


/**
 * @defgroup GL_EXT_texture_compression_rgtc GL_EXT_texture_compression_rgtc
 * Extension number in OpenGL registry : 332
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_compression_rgtc.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_compression_rgtc is supported.
 * @return Returns \c true if \b GL_EXT_texture_compression_rgtc is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_compression_rgtc();

//@}


/**
 * @defgroup GL_EXT_texture_compression_s3tc GL_EXT_texture_compression_s3tc
 * Extension number in OpenGL registry : 198
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_compression_s3tc.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_compression_s3tc is supported.
 * @return Returns \c true if \b GL_EXT_texture_compression_s3tc is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_compression_s3tc();

//@}

			
/**	
 * @defgroup GL_EXT_texture_cube_map GL_EXT_texture_cube_map
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_cube_map is supported.
 * @return Returns \c true if \b GL_EXT_texture_cube_map is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_cube_map();

//@}


/**
 * @defgroup GL_EXT_texture_env_add GL_EXT_texture_env_add
 * Extension number in OpenGL registry : 185
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_env_add.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_env_add is supported.
 * @return Returns \c true if \b GL_EXT_texture_env_add is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_env_add();

//@}


/**
 * @defgroup GL_EXT_texture_env_combine GL_EXT_texture_env_combine
 * Extension number in OpenGL registry : 158
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_env_combine.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_env_combine is supported.
 * @return Returns \c true if \b GL_EXT_texture_env_combine is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_env_combine();

//@}


/**
 * @defgroup GL_EXT_texture_env_dot3 GL_EXT_texture_env_dot3
 * Extension number in OpenGL registry : 220
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_env_dot3.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_env_dot3 is supported.
 * @return Returns \c true if \b GL_EXT_texture_env_dot3 is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_env_dot3();

//@}


/**
 * @defgroup GL_EXT_texture_filter_anisotropic GL_EXT_texture_filter_anisotropic
 * Extension number in OpenGL registry : 187
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_filter_anisotropic.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_filter_anisotropic is supported.
 * @return Returns \c true if \b GL_EXT_texture_filter_anisotropic is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_filter_anisotropic();

//@}


/**
 * @defgroup GL_EXT_texture_integer GL_EXT_texture_integer
 * Extension number in OpenGL registry : 343
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_integer.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_integer is supported.
 * @return Returns \c true if \b GL_EXT_texture_integer is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_integer();

/**
 * @brief void glTexParameterIivEXT( GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glTexParameterIivEXT( GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glTexParameterIuivEXT( GLenum target, GLenum pname, const GLuint *params );
 */
GLE_API void glTexParameterIuivEXT( GLenum target, GLenum pname, const GLuint *params );

/**
 * @brief void glGetTexParameterIivEXT( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetTexParameterIivEXT( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetTexParameterIuivEXT( GLenum target, GLenum pname, GLuint *params );
 */
GLE_API void glGetTexParameterIuivEXT( GLenum target, GLenum pname, GLuint *params );

/**
 * @brief void glClearColorIiEXT( GLint red, GLint green, GLint blue, GLint alpha );
 */
GLE_API void glClearColorIiEXT( GLint red, GLint green, GLint blue, GLint alpha );

/**
 * @brief void glClearColorIuiEXT( GLuint red, GLuint green, GLuint blue, GLuint alpha );
 */
GLE_API void glClearColorIuiEXT( GLuint red, GLuint green, GLuint blue, GLuint alpha );

//@}


/**
 * @defgroup GL_EXT_texture_lod_bias GL_EXT_texture_lod_bias
 * Extension number in OpenGL registry : 186
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_lod_bias.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_lod_bias is supported.
 * @return Returns \c true if \b GL_EXT_texture_lod_bias is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_lod_bias();

//@}


/**
 * @defgroup GL_EXT_texture_mirror_clamp GL_EXT_texture_mirror_clamp
 * Extension number in OpenGL registry : 298
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_mirror_clamp.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_mirror_clamp is supported.
 * @return Returns \c true if \b GL_EXT_texture_mirror_clamp is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_mirror_clamp();

//@}


/**
 * @defgroup GL_EXT_texture_object GL_EXT_texture_object
 * Extension number in OpenGL registry : 20
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_object.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_texture_perturb_normal GL_EXT_texture_perturb_normal
 * Extension number in OpenGL registry : 147
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_perturb_normal.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_texture_sRGB GL_EXT_texture_sRGB
 * Extension number in OpenGL registry : 315
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_sRGB.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_sRGB is supported.
 * @return Returns \c true if \b GL_EXT_texture_sRGB is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_sRGB();

//@}


/**
 * @defgroup GL_EXT_texture_shared_exponent GL_EXT_texture_shared_exponent
 * Extension number in OpenGL registry : 333
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_shared_exponent.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_shared_exponent is supported.
 * @return Returns \c true if \b GL_EXT_texture_shared_exponent is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_shared_exponent();

//@}


/**
 * @defgroup GL_EXT_texture_swizzle GL_EXT_texture_swizzle
 * Extension number in OpenGL registry : 356
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_swizzle.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_texture_swizzle is supported.
 * @return Returns \c true if \b GL_EXT_texture_swizzle is supported, false otherwise.
 */
GLE_API bool isGL_EXT_texture_swizzle();

//@}


/**
 * @defgroup GL_EXT_timer_query GL_EXT_timer_query
 * Extension number in OpenGL registry : 319
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/timer_query.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_timer_query is supported.
 * @return Returns \c true if \b GL_EXT_timer_query is supported, false otherwise.
 */
GLE_API bool isGL_EXT_timer_query();

/**
 * @brief void glGetQueryObjecti64vEXT( GLuint id, GLenum pname, GLint64EXT *params );
 */
GLE_API void glGetQueryObjecti64vEXT( GLuint id, GLenum pname, GLint64EXT *params );

/**
 * @brief void glGetQueryObjectui64vEXT( GLuint id, GLenum pname, GLuint64EXT *params );
 */
GLE_API void glGetQueryObjectui64vEXT( GLuint id, GLenum pname, GLuint64EXT *params );

//@}


/**
 * @defgroup GL_EXT_transform_feedback GL_EXT_transform_feedback
 * Extension number in OpenGL registry : 352
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/transform_feedback.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_transform_feedback is supported.
 * @return Returns \c true if \b GL_EXT_transform_feedback is supported, false otherwise.
 */
GLE_API bool isGL_EXT_transform_feedback();

/**
 * @brief void glBeginTransformFeedbackEXT( GLenum primitiveMode );
 */
GLE_API void glBeginTransformFeedbackEXT( GLenum primitiveMode );

/**
 * @brief void glEndTransformFeedbackEXT( void );
 */
GLE_API void glEndTransformFeedbackEXT( void );

/**
 * @brief void glBindBufferRangeEXT( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size );
 */
GLE_API void glBindBufferRangeEXT( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size );

/**
 * @brief void glBindBufferOffsetEXT( GLenum target, GLuint index, GLuint buffer, GLintptr offset );
 */
GLE_API void glBindBufferOffsetEXT( GLenum target, GLuint index, GLuint buffer, GLintptr offset );

/**
 * @brief void glBindBufferBaseEXT( GLenum target, GLuint index, GLuint buffer );
 */
GLE_API void glBindBufferBaseEXT( GLenum target, GLuint index, GLuint buffer );

/**
 * @brief void glTransformFeedbackVaryingsEXT( GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode );
 */
GLE_API void glTransformFeedbackVaryingsEXT( GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode );

/**
 * @brief void glGetTransformFeedbackVaryingEXT( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name );
 */
GLE_API void glGetTransformFeedbackVaryingEXT( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name );

//@}


/**
 * @defgroup GL_EXT_vertex_array GL_EXT_vertex_array
 * Extension number in OpenGL registry : 30
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/vertex_array.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_vertex_array_bgra GL_EXT_vertex_array_bgra
 * Extension number in OpenGL registry : 354
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/vertex_array_bgra.txt
 * @ingroup g_GL_EXT g_extensions
 */
//@{
/**
 * @brief Test if \b GL_EXT_vertex_array_bgra is supported.
 * @return Returns \c true if \b GL_EXT_vertex_array_bgra is supported, false otherwise.
 */
GLE_API bool isGL_EXT_vertex_array_bgra();

//@}


/**
 * @defgroup GL_EXT_vertex_shader GL_EXT_vertex_shader
 * Extension number in OpenGL registry : 248
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/vertex_shader.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_EXT_vertex_weighting GL_EXT_vertex_weighting
 * Extension number in OpenGL registry : 188
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/vertex_weighting.txt
 * @ingroup g_GL_EXT g_extensions
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
 * @defgroup GL_FfdMaskSGIX GL_FfdMaskSGIX
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_FfdMaskSGIX is supported.
 * @return Returns \c true if \b GL_FfdMaskSGIX is supported, false otherwise.
 */
GLE_API bool isGL_FfdMaskSGIX();

//@}


/**
 * @defgroup GL_GREMEDY_frame_terminator GL_GREMEDY_frame_terminator
 * Extension number in OpenGL registry : 345
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/GREMEDY/frame_terminator.txt
 * @ingroup g_GL_GREMEDY g_extensions
 */
//@{
/**
 * @brief Test if \b GL_GREMEDY_frame_terminator is supported.
 * @return Returns \c true if \b GL_GREMEDY_frame_terminator is supported, false otherwise.
 */
GLE_API bool isGL_GREMEDY_frame_terminator();

/**
 * @brief void glFrameTerminatorGREMEDY( void );
 */
GLE_API void glFrameTerminatorGREMEDY( void );

//@}


/**
 * @defgroup GL_GREMEDY_string_marker GL_GREMEDY_string_marker
 * Extension number in OpenGL registry : 311
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/GREMEDY/string_marker.txt
 * @ingroup g_GL_GREMEDY g_extensions
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
 * @defgroup GL_HP_convolution_border_modes GL_HP_convolution_border_modes
 * Extension number in OpenGL registry : 67
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/HP/convolution_border_modes.txt
 * @ingroup g_GL_HP g_extensions
 */
//@{
/**
 * @brief Test if \b GL_HP_convolution_border_modes is supported.
 * @return Returns \c true if \b GL_HP_convolution_border_modes is supported, false otherwise.
 */
GLE_API bool isGL_HP_convolution_border_modes();

//@}


/**
 * @defgroup GL_HP_image_transform GL_HP_image_transform
 * Extension number in OpenGL registry : 66
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/HP/image_transform.txt
 * @ingroup g_GL_HP g_extensions
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
 * @defgroup GL_HP_occlusion_test GL_HP_occlusion_test
 * Extension number in OpenGL registry : 137
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/HP/occlusion_test.txt
 * @ingroup g_GL_HP g_extensions
 */
//@{
/**
 * @brief Test if \b GL_HP_occlusion_test is supported.
 * @return Returns \c true if \b GL_HP_occlusion_test is supported, false otherwise.
 */
GLE_API bool isGL_HP_occlusion_test();

//@}


/**
 * @defgroup GL_HP_texture_lighting GL_HP_texture_lighting
 * Extension number in OpenGL registry : 111
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/HP/texture_lighting.txt
 * @ingroup g_GL_HP g_extensions
 */
//@{
/**
 * @brief Test if \b GL_HP_texture_lighting is supported.
 * @return Returns \c true if \b GL_HP_texture_lighting is supported, false otherwise.
 */
GLE_API bool isGL_HP_texture_lighting();

//@}


/**
 * @defgroup GL_IBM_cull_vertex GL_IBM_cull_vertex
 * Extension number in OpenGL registry : 199
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/IBM/cull_vertex.txt
 * @ingroup g_GL_IBM g_extensions
 */
//@{
/**
 * @brief Test if \b GL_IBM_cull_vertex is supported.
 * @return Returns \c true if \b GL_IBM_cull_vertex is supported, false otherwise.
 */
GLE_API bool isGL_IBM_cull_vertex();

//@}


/**
 * @defgroup GL_IBM_multimode_draw_arrays GL_IBM_multimode_draw_arrays
 * Extension number in OpenGL registry : 200
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/IBM/multimode_draw_arrays.txt
 * @ingroup g_GL_IBM g_extensions
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
 * @defgroup GL_IBM_rasterpos_clip GL_IBM_rasterpos_clip
 * Extension number in OpenGL registry : 110
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/IBM/rasterpos_clip.txt
 * @ingroup g_GL_IBM g_extensions
 */
//@{
/**
 * @brief Test if \b GL_IBM_rasterpos_clip is supported.
 * @return Returns \c true if \b GL_IBM_rasterpos_clip is supported, false otherwise.
 */
GLE_API bool isGL_IBM_rasterpos_clip();

//@}


/**
 * @defgroup GL_IBM_texture_mirrored_repeat GL_IBM_texture_mirrored_repeat
 * Extension number in OpenGL registry : 224
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/IBM/texture_mirrored_repeat.txt
 * @ingroup g_GL_IBM g_extensions
 */
//@{
/**
 * @brief Test if \b GL_IBM_texture_mirrored_repeat is supported.
 * @return Returns \c true if \b GL_IBM_texture_mirrored_repeat is supported, false otherwise.
 */
GLE_API bool isGL_IBM_texture_mirrored_repeat();

//@}


/**
 * @defgroup GL_IBM_vertex_array_lists GL_IBM_vertex_array_lists
 * Extension number in OpenGL registry : 201
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/IBM/vertex_array_lists.txt
 * @ingroup g_GL_IBM g_extensions
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
 * @defgroup GL_INGR_blend_func_separate GL_INGR_blend_func_separate
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
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
 * @defgroup GL_INGR_color_clamp GL_INGR_color_clamp
 * Extension number in OpenGL registry : 174
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/INGR/color_clamp.txt
 * @ingroup g_GL_INGR g_extensions
 */
//@{
/**
 * @brief Test if \b GL_INGR_color_clamp is supported.
 * @return Returns \c true if \b GL_INGR_color_clamp is supported, false otherwise.
 */
GLE_API bool isGL_INGR_color_clamp();

//@}


/**
 * @defgroup GL_INGR_interlace_read GL_INGR_interlace_read
 * Extension number in OpenGL registry : 175
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/INGR/interlace_read.txt
 * @ingroup g_GL_INGR g_extensions
 */
//@{
/**
 * @brief Test if \b GL_INGR_interlace_read is supported.
 * @return Returns \c true if \b GL_INGR_interlace_read is supported, false otherwise.
 */
GLE_API bool isGL_INGR_interlace_read();

//@}

			
/**	
 * @defgroup GL_INGR_palette_buffer GL_INGR_palette_buffer
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_INGR_palette_buffer is supported.
 * @return Returns \c true if \b GL_INGR_palette_buffer is supported, false otherwise.
 */
GLE_API bool isGL_INGR_palette_buffer();

//@}


/**
 * @defgroup GL_INTEL_parallel_arrays GL_INTEL_parallel_arrays
 * Extension number in OpenGL registry : 136
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/INTEL/parallel_arrays.txt
 * @ingroup g_GL_INTEL g_extensions
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
 * @defgroup GL_INTEL_texture_scissor GL_INTEL_texture_scissor
 * Extension number in OpenGL registry : 135
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/INTEL/texture_scissor.txt
 * @ingroup g_GL_INTEL g_extensions
 */
//@{
/**
 * @brief Test if \b GL_INTEL_texture_scissor is supported.
 * @return Returns \c true if \b GL_INTEL_texture_scissor is supported, false otherwise.
 */
GLE_API bool isGL_INTEL_texture_scissor();

//@}


/**
 * @defgroup GL_MESAX_texture_stack GL_MESAX_texture_stack
 * Extension number in OpenGL registry : 318
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESAX/texture_stack.txt
 * @ingroup g_GL_MESAX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_MESAX_texture_stack is supported.
 * @return Returns \c true if \b GL_MESAX_texture_stack is supported, false otherwise.
 */
GLE_API bool isGL_MESAX_texture_stack();

//@}


/**
 * @defgroup GL_MESA_pack_invert GL_MESA_pack_invert
 * Extension number in OpenGL registry : 300
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESA/pack_invert.txt
 * @ingroup g_GL_MESA g_extensions
 */
//@{
/**
 * @brief Test if \b GL_MESA_pack_invert is supported.
 * @return Returns \c true if \b GL_MESA_pack_invert is supported, false otherwise.
 */
GLE_API bool isGL_MESA_pack_invert();

//@}


/**
 * @defgroup GL_MESA_resize_buffers GL_MESA_resize_buffers
 * Extension number in OpenGL registry : 196
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESA/resize_buffers.txt
 * @ingroup g_GL_MESA g_extensions
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
 * @defgroup GL_MESA_window_pos GL_MESA_window_pos
 * Extension number in OpenGL registry : 197
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESA/window_pos.txt
 * @ingroup g_GL_MESA g_extensions
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
 * @defgroup GL_MESA_ycbcr_texture GL_MESA_ycbcr_texture
 * Extension number in OpenGL registry : 301
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESA/ycbcr_texture.txt
 * @ingroup g_GL_MESA g_extensions
 */
//@{
/**
 * @brief Test if \b GL_MESA_ycbcr_texture is supported.
 * @return Returns \c true if \b GL_MESA_ycbcr_texture is supported, false otherwise.
 */
GLE_API bool isGL_MESA_ycbcr_texture();

//@}


/**
 * @defgroup GL_NV_blend_square GL_NV_blend_square
 * Extension number in OpenGL registry : 194
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/blend_square.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_blend_square is supported.
 * @return Returns \c true if \b GL_NV_blend_square is supported, false otherwise.
 */
GLE_API bool isGL_NV_blend_square();

//@}


/**
 * @defgroup GL_NV_conditional_render GL_NV_conditional_render
 * Extension number in OpenGL registry : 346
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/conditional_render.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_conditional_render is supported.
 * @return Returns \c true if \b GL_NV_conditional_render is supported, false otherwise.
 */
GLE_API bool isGL_NV_conditional_render();

/**
 * @brief void glBeginConditionalRenderNV( GLuint id, GLenum mode );
 */
GLE_API void glBeginConditionalRenderNV( GLuint id, GLenum mode );

/**
 * @brief void glEndConditionalRenderNV( void );
 */
GLE_API void glEndConditionalRenderNV( void );

//@}


/**
 * @defgroup GL_NV_copy_depth_to_color GL_NV_copy_depth_to_color
 * Extension number in OpenGL registry : 243
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/copy_depth_to_color.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_copy_depth_to_color is supported.
 * @return Returns \c true if \b GL_NV_copy_depth_to_color is supported, false otherwise.
 */
GLE_API bool isGL_NV_copy_depth_to_color();

//@}


/**
 * @defgroup GL_NV_depth_buffer_float GL_NV_depth_buffer_float
 * Extension number in OpenGL registry : 334
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/depth_buffer_float.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_depth_buffer_float is supported.
 * @return Returns \c true if \b GL_NV_depth_buffer_float is supported, false otherwise.
 */
GLE_API bool isGL_NV_depth_buffer_float();

/**
 * @brief void glDepthRangedNV( GLdouble zNear, GLdouble zFar );
 */
GLE_API void glDepthRangedNV( GLdouble zNear, GLdouble zFar );

/**
 * @brief void glClearDepthdNV( GLdouble depth );
 */
GLE_API void glClearDepthdNV( GLdouble depth );

/**
 * @brief void glDepthBoundsdNV( GLdouble zmin, GLdouble zmax );
 */
GLE_API void glDepthBoundsdNV( GLdouble zmin, GLdouble zmax );

//@}


/**
 * @defgroup GL_NV_depth_clamp GL_NV_depth_clamp
 * Extension number in OpenGL registry : 260
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/depth_clamp.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_depth_clamp is supported.
 * @return Returns \c true if \b GL_NV_depth_clamp is supported, false otherwise.
 */
GLE_API bool isGL_NV_depth_clamp();

//@}


/**
 * @defgroup GL_NV_evaluators GL_NV_evaluators
 * Extension number in OpenGL registry : 225
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/evaluators.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_explicit_multisample GL_NV_explicit_multisample
 * Extension number in OpenGL registry : 357
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/explicit_multisample.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_explicit_multisample is supported.
 * @return Returns \c true if \b GL_NV_explicit_multisample is supported, false otherwise.
 */
GLE_API bool isGL_NV_explicit_multisample();

/**
 * @brief void glGetMultisamplefvNV( GLenum pname, GLuint index, GLfloat *val );
 */
GLE_API void glGetMultisamplefvNV( GLenum pname, GLuint index, GLfloat *val );

/**
 * @brief void glSampleMaskIndexedNV( GLuint index, GLbitfield mask );
 */
GLE_API void glSampleMaskIndexedNV( GLuint index, GLbitfield mask );

/**
 * @brief void glTexRenderbufferNV( GLenum target, GLuint renderbuffer );
 */
GLE_API void glTexRenderbufferNV( GLenum target, GLuint renderbuffer );

//@}


/**
 * @defgroup GL_NV_fence GL_NV_fence
 * Extension number in OpenGL registry : 222
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/fence.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_float_buffer GL_NV_float_buffer
 * Extension number in OpenGL registry : 281
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/float_buffer.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_float_buffer is supported.
 * @return Returns \c true if \b GL_NV_float_buffer is supported, false otherwise.
 */
GLE_API bool isGL_NV_float_buffer();

//@}


/**
 * @defgroup GL_NV_fog_distance GL_NV_fog_distance
 * Extension number in OpenGL registry : 192
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/fog_distance.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_fog_distance is supported.
 * @return Returns \c true if \b GL_NV_fog_distance is supported, false otherwise.
 */
GLE_API bool isGL_NV_fog_distance();

//@}


/**
 * @defgroup GL_NV_fragment_program GL_NV_fragment_program
 * Extension number in OpenGL registry : 282
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/fragment_program.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_fragment_program2 GL_NV_fragment_program2
 * Extension number in OpenGL registry : 304
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/fragment_program2.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_fragment_program2 is supported.
 * @return Returns \c true if \b GL_NV_fragment_program2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_fragment_program2();

//@}


/**
 * @defgroup GL_NV_fragment_program4 GL_NV_fragment_program4
 * Extension number in OpenGL registry : 335
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/fragment_program4.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_fragment_program4 is supported.
 * @return Returns \c true if \b GL_NV_fragment_program4 is supported, false otherwise.
 */
GLE_API bool isGL_NV_fragment_program4();

//@}


/**
 * @defgroup GL_NV_fragment_program_option GL_NV_fragment_program_option
 * Extension number in OpenGL registry : 303
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/fragment_program_option.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_fragment_program_option is supported.
 * @return Returns \c true if \b GL_NV_fragment_program_option is supported, false otherwise.
 */
GLE_API bool isGL_NV_fragment_program_option();

//@}


/**
 * @defgroup GL_NV_framebuffer_multisample_coverage GL_NV_framebuffer_multisample_coverage
 * Extension number in OpenGL registry : 336
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/framebuffer_multisample_coverage.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_framebuffer_multisample_coverage is supported.
 * @return Returns \c true if \b GL_NV_framebuffer_multisample_coverage is supported, false otherwise.
 */
GLE_API bool isGL_NV_framebuffer_multisample_coverage();

/**
 * @brief void glRenderbufferStorageMultisampleCoverageNV( GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height );
 */
GLE_API void glRenderbufferStorageMultisampleCoverageNV( GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height );

//@}


/**
 * @defgroup GL_NV_geometry_program4 GL_NV_geometry_program4
 * Extension number in OpenGL registry : 323
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/geometry_program4.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_geometry_program4 is supported.
 * @return Returns \c true if \b GL_NV_geometry_program4 is supported, false otherwise.
 */
GLE_API bool isGL_NV_geometry_program4();

/**
 * @brief void glProgramVertexLimitNV( GLenum target, GLint limit );
 */
GLE_API void glProgramVertexLimitNV( GLenum target, GLint limit );

/**
 * @brief void glFramebufferTextureEXT( GLenum target, GLenum attachment, GLuint texture, GLint level );
 */
GLE_API void glFramebufferTextureEXT( GLenum target, GLenum attachment, GLuint texture, GLint level );

/**
 * @brief void glFramebufferTextureLayerEXT( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer );
 */
GLE_API void glFramebufferTextureLayerEXT( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer );

/**
 * @brief void glFramebufferTextureFaceEXT( GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face );
 */
GLE_API void glFramebufferTextureFaceEXT( GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face );

//@}


/**
 * @defgroup GL_NV_geometry_shader4 GL_NV_geometry_shader4
 * Extension number in OpenGL registry : 338
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/geometry_shader4.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_geometry_shader4 is supported.
 * @return Returns \c true if \b GL_NV_geometry_shader4 is supported, false otherwise.
 */
GLE_API bool isGL_NV_geometry_shader4();

//@}


/**
 * @defgroup GL_NV_gpu_program4 GL_NV_gpu_program4
 * Extension number in OpenGL registry : 322
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/gpu_program4.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_gpu_program4 is supported.
 * @return Returns \c true if \b GL_NV_gpu_program4 is supported, false otherwise.
 */
GLE_API bool isGL_NV_gpu_program4();

/**
 * @brief void glProgramLocalParameterI4iNV( GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w );
 */
GLE_API void glProgramLocalParameterI4iNV( GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w );

/**
 * @brief void glProgramLocalParameterI4ivNV( GLenum target, GLuint index, const GLint *params );
 */
GLE_API void glProgramLocalParameterI4ivNV( GLenum target, GLuint index, const GLint *params );

/**
 * @brief void glProgramLocalParametersI4ivNV( GLenum target, GLuint index, GLsizei count, const GLint *params );
 */
GLE_API void glProgramLocalParametersI4ivNV( GLenum target, GLuint index, GLsizei count, const GLint *params );

/**
 * @brief void glProgramLocalParameterI4uiNV( GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );
 */
GLE_API void glProgramLocalParameterI4uiNV( GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );

/**
 * @brief void glProgramLocalParameterI4uivNV( GLenum target, GLuint index, const GLuint *params );
 */
GLE_API void glProgramLocalParameterI4uivNV( GLenum target, GLuint index, const GLuint *params );

/**
 * @brief void glProgramLocalParametersI4uivNV( GLenum target, GLuint index, GLsizei count, const GLuint *params );
 */
GLE_API void glProgramLocalParametersI4uivNV( GLenum target, GLuint index, GLsizei count, const GLuint *params );

/**
 * @brief void glProgramEnvParameterI4iNV( GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w );
 */
GLE_API void glProgramEnvParameterI4iNV( GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w );

/**
 * @brief void glProgramEnvParameterI4ivNV( GLenum target, GLuint index, const GLint *params );
 */
GLE_API void glProgramEnvParameterI4ivNV( GLenum target, GLuint index, const GLint *params );

/**
 * @brief void glProgramEnvParametersI4ivNV( GLenum target, GLuint index, GLsizei count, const GLint *params );
 */
GLE_API void glProgramEnvParametersI4ivNV( GLenum target, GLuint index, GLsizei count, const GLint *params );

/**
 * @brief void glProgramEnvParameterI4uiNV( GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );
 */
GLE_API void glProgramEnvParameterI4uiNV( GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );

/**
 * @brief void glProgramEnvParameterI4uivNV( GLenum target, GLuint index, const GLuint *params );
 */
GLE_API void glProgramEnvParameterI4uivNV( GLenum target, GLuint index, const GLuint *params );

/**
 * @brief void glProgramEnvParametersI4uivNV( GLenum target, GLuint index, GLsizei count, const GLuint *params );
 */
GLE_API void glProgramEnvParametersI4uivNV( GLenum target, GLuint index, GLsizei count, const GLuint *params );

/**
 * @brief void glGetProgramLocalParameterIivNV( GLenum target, GLuint index, GLint *params );
 */
GLE_API void glGetProgramLocalParameterIivNV( GLenum target, GLuint index, GLint *params );

/**
 * @brief void glGetProgramLocalParameterIuivNV( GLenum target, GLuint index, GLuint *params );
 */
GLE_API void glGetProgramLocalParameterIuivNV( GLenum target, GLuint index, GLuint *params );

/**
 * @brief void glGetProgramEnvParameterIivNV( GLenum target, GLuint index, GLint *params );
 */
GLE_API void glGetProgramEnvParameterIivNV( GLenum target, GLuint index, GLint *params );

/**
 * @brief void glGetProgramEnvParameterIuivNV( GLenum target, GLuint index, GLuint *params );
 */
GLE_API void glGetProgramEnvParameterIuivNV( GLenum target, GLuint index, GLuint *params );

//@}


/**
 * @defgroup GL_NV_half_float GL_NV_half_float
 * Extension number in OpenGL registry : 283
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/half_float.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_light_max_exponent GL_NV_light_max_exponent
 * Extension number in OpenGL registry : 189
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/light_max_exponent.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_light_max_exponent is supported.
 * @return Returns \c true if \b GL_NV_light_max_exponent is supported, false otherwise.
 */
GLE_API bool isGL_NV_light_max_exponent();

//@}


/**
 * @defgroup GL_NV_multisample_filter_hint GL_NV_multisample_filter_hint
 * Extension number in OpenGL registry : 259
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/multisample_filter_hint.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_multisample_filter_hint is supported.
 * @return Returns \c true if \b GL_NV_multisample_filter_hint is supported, false otherwise.
 */
GLE_API bool isGL_NV_multisample_filter_hint();

//@}


/**
 * @defgroup GL_NV_occlusion_query GL_NV_occlusion_query
 * Extension number in OpenGL registry : 261
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/occlusion_query.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_packed_depth_stencil GL_NV_packed_depth_stencil
 * Extension number in OpenGL registry : 226
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/packed_depth_stencil.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_packed_depth_stencil is supported.
 * @return Returns \c true if \b GL_NV_packed_depth_stencil is supported, false otherwise.
 */
GLE_API bool isGL_NV_packed_depth_stencil();

//@}


/**
 * @defgroup GL_NV_parameter_buffer_object GL_NV_parameter_buffer_object
 * Extension number in OpenGL registry : 339
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/parameter_buffer_object.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_parameter_buffer_object is supported.
 * @return Returns \c true if \b GL_NV_parameter_buffer_object is supported, false otherwise.
 */
GLE_API bool isGL_NV_parameter_buffer_object();

/**
 * @brief void glProgramBufferParametersfvNV( GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params );
 */
GLE_API void glProgramBufferParametersfvNV( GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params );

/**
 * @brief void glProgramBufferParametersIivNV( GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params );
 */
GLE_API void glProgramBufferParametersIivNV( GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params );

/**
 * @brief void glProgramBufferParametersIuivNV( GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params );
 */
GLE_API void glProgramBufferParametersIuivNV( GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params );

//@}


/**
 * @defgroup GL_NV_pixel_data_range GL_NV_pixel_data_range
 * Extension number in OpenGL registry : 284
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/pixel_data_range.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_point_sprite GL_NV_point_sprite
 * Extension number in OpenGL registry : 262
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/point_sprite.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_present_video GL_NV_present_video
 * Extension number in OpenGL registry : 347
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/present_video.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_present_video is supported.
 * @return Returns \c true if \b GL_NV_present_video is supported, false otherwise.
 */
GLE_API bool isGL_NV_present_video();

/**
 * @brief void glPresentFrameKeyedNV( GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1 );
 */
GLE_API void glPresentFrameKeyedNV( GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1 );

/**
 * @brief void glPresentFrameDualFillNV( GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3 );
 */
GLE_API void glPresentFrameDualFillNV( GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3 );

/**
 * @brief void glGetVideoivNV( GLuint video_slot, GLenum pname, GLint *params );
 */
GLE_API void glGetVideoivNV( GLuint video_slot, GLenum pname, GLint *params );

/**
 * @brief void glGetVideouivNV( GLuint video_slot, GLenum pname, GLuint *params );
 */
GLE_API void glGetVideouivNV( GLuint video_slot, GLenum pname, GLuint *params );

/**
 * @brief void glGetVideoi64vNV( GLuint video_slot, GLenum pname, GLint64EXT *params );
 */
GLE_API void glGetVideoi64vNV( GLuint video_slot, GLenum pname, GLint64EXT *params );

/**
 * @brief void glGetVideoui64vNV( GLuint video_slot, GLenum pname, GLuint64EXT *params );
 */
GLE_API void glGetVideoui64vNV( GLuint video_slot, GLenum pname, GLuint64EXT *params );

//@}


/**
 * @defgroup GL_NV_primitive_restart GL_NV_primitive_restart
 * Extension number in OpenGL registry : 285
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/primitive_restart.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_register_combiners GL_NV_register_combiners
 * Extension number in OpenGL registry : 191
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/register_combiners.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_register_combiners2 GL_NV_register_combiners2
 * Extension number in OpenGL registry : 227
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/register_combiners2.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_texgen_emboss GL_NV_texgen_emboss
 * Extension number in OpenGL registry : 193
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/texgen_emboss.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_texgen_emboss is supported.
 * @return Returns \c true if \b GL_NV_texgen_emboss is supported, false otherwise.
 */
GLE_API bool isGL_NV_texgen_emboss();

//@}


/**
 * @defgroup GL_NV_texgen_reflection GL_NV_texgen_reflection
 * Extension number in OpenGL registry : 179
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/texgen_reflection.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_texgen_reflection is supported.
 * @return Returns \c true if \b GL_NV_texgen_reflection is supported, false otherwise.
 */
GLE_API bool isGL_NV_texgen_reflection();

//@}


/**
 * @defgroup GL_NV_texture_compression_vtc GL_NV_texture_compression_vtc
 * Extension number in OpenGL registry : 228
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/texture_compression_vtc.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_compression_vtc is supported.
 * @return Returns \c true if \b GL_NV_texture_compression_vtc is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_compression_vtc();

//@}


/**
 * @defgroup GL_NV_texture_env_combine4 GL_NV_texture_env_combine4
 * Extension number in OpenGL registry : 195
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/texture_env_combine4.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_env_combine4 is supported.
 * @return Returns \c true if \b GL_NV_texture_env_combine4 is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_env_combine4();

//@}


/**
 * @defgroup GL_NV_texture_expand_normal GL_NV_texture_expand_normal
 * Extension number in OpenGL registry : 286
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/texture_expand_normal.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_expand_normal is supported.
 * @return Returns \c true if \b GL_NV_texture_expand_normal is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_expand_normal();

//@}


/**
 * @defgroup GL_NV_texture_rectangle GL_NV_texture_rectangle
 * Extension number in OpenGL registry : 229
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/texture_rectangle.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_rectangle is supported.
 * @return Returns \c true if \b GL_NV_texture_rectangle is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_rectangle();

//@}


/**
 * @defgroup GL_NV_texture_shader GL_NV_texture_shader
 * Extension number in OpenGL registry : 230
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/texture_shader.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_shader is supported.
 * @return Returns \c true if \b GL_NV_texture_shader is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_shader();

//@}


/**
 * @defgroup GL_NV_texture_shader2 GL_NV_texture_shader2
 * Extension number in OpenGL registry : 231
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/texture_shader2.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_shader2 is supported.
 * @return Returns \c true if \b GL_NV_texture_shader2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_shader2();

//@}


/**
 * @defgroup GL_NV_texture_shader3 GL_NV_texture_shader3
 * Extension number in OpenGL registry : 265
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/texture_shader3.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_texture_shader3 is supported.
 * @return Returns \c true if \b GL_NV_texture_shader3 is supported, false otherwise.
 */
GLE_API bool isGL_NV_texture_shader3();

//@}


/**
 * @defgroup GL_NV_transform_feedback GL_NV_transform_feedback
 * Extension number in OpenGL registry : 341
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/transform_feedback.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_transform_feedback is supported.
 * @return Returns \c true if \b GL_NV_transform_feedback is supported, false otherwise.
 */
GLE_API bool isGL_NV_transform_feedback();

/**
 * @brief void glBeginTransformFeedbackNV( GLenum primitiveMode );
 */
GLE_API void glBeginTransformFeedbackNV( GLenum primitiveMode );

/**
 * @brief void glEndTransformFeedbackNV( void );
 */
GLE_API void glEndTransformFeedbackNV( void );

/**
 * @brief void glTransformFeedbackAttribsNV( GLuint count, const GLint *attribs, GLenum bufferMode );
 */
GLE_API void glTransformFeedbackAttribsNV( GLuint count, const GLint *attribs, GLenum bufferMode );

/**
 * @brief void glBindBufferRangeNV( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size );
 */
GLE_API void glBindBufferRangeNV( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size );

/**
 * @brief void glBindBufferOffsetNV( GLenum target, GLuint index, GLuint buffer, GLintptr offset );
 */
GLE_API void glBindBufferOffsetNV( GLenum target, GLuint index, GLuint buffer, GLintptr offset );

/**
 * @brief void glBindBufferBaseNV( GLenum target, GLuint index, GLuint buffer );
 */
GLE_API void glBindBufferBaseNV( GLenum target, GLuint index, GLuint buffer );

/**
 * @brief void glTransformFeedbackVaryingsNV( GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode );
 */
GLE_API void glTransformFeedbackVaryingsNV( GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode );

/**
 * @brief void glActiveVaryingNV( GLuint program, const GLchar *name );
 */
GLE_API void glActiveVaryingNV( GLuint program, const GLchar *name );

/**
 * @brief GLint glGetVaryingLocationNV( GLuint program, const GLchar *name );
 */
GLE_API GLint glGetVaryingLocationNV( GLuint program, const GLchar *name );

/**
 * @brief void glGetActiveVaryingNV( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name );
 */
GLE_API void glGetActiveVaryingNV( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name );

/**
 * @brief void glGetTransformFeedbackVaryingNV( GLuint program, GLuint index, GLint *location );
 */
GLE_API void glGetTransformFeedbackVaryingNV( GLuint program, GLuint index, GLint *location );

//@}


/**
 * @defgroup GL_NV_transform_feedback2 GL_NV_transform_feedback2
 * Extension number in OpenGL registry : 358
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/transform_feedback2.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_transform_feedback2 is supported.
 * @return Returns \c true if \b GL_NV_transform_feedback2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_transform_feedback2();

/**
 * @brief void glBindTransformFeedbackNV( GLenum target, GLuint id );
 */
GLE_API void glBindTransformFeedbackNV( GLenum target, GLuint id );

/**
 * @brief void glDeleteTransformFeedbacksNV( GLsizei n, const GLuint *ids );
 */
GLE_API void glDeleteTransformFeedbacksNV( GLsizei n, const GLuint *ids );

/**
 * @brief void glGenTransformFeedbacksNV( GLsizei n, GLuint *ids );
 */
GLE_API void glGenTransformFeedbacksNV( GLsizei n, GLuint *ids );

/**
 * @brief GLboolean glIsTransformFeedbackNV( GLuint id );
 */
GLE_API GLboolean glIsTransformFeedbackNV( GLuint id );

/**
 * @brief void glPauseTransformFeedbackNV( void );
 */
GLE_API void glPauseTransformFeedbackNV( void );

/**
 * @brief void glResumeTransformFeedbackNV( void );
 */
GLE_API void glResumeTransformFeedbackNV( void );

/**
 * @brief void glDrawTransformFeedbackNV( GLenum mode, GLuint id );
 */
GLE_API void glDrawTransformFeedbackNV( GLenum mode, GLuint id );

//@}


/**
 * @defgroup GL_NV_vertex_array_range GL_NV_vertex_array_range
 * Extension number in OpenGL registry : 190
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/vertex_array_range.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_vertex_array_range2 GL_NV_vertex_array_range2
 * Extension number in OpenGL registry : 232
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/vertex_array_range2.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_array_range2 is supported.
 * @return Returns \c true if \b GL_NV_vertex_array_range2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_array_range2();

//@}


/**
 * @defgroup GL_NV_vertex_program GL_NV_vertex_program
 * Extension number in OpenGL registry : 233
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/vertex_program.txt
 * @ingroup g_GL_NV g_extensions
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
 * @defgroup GL_NV_vertex_program1_1 GL_NV_vertex_program1_1
 * Extension number in OpenGL registry : 266
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/vertex_program1_1.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program1_1 is supported.
 * @return Returns \c true if \b GL_NV_vertex_program1_1 is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program1_1();

//@}


/**
 * @defgroup GL_NV_vertex_program2 GL_NV_vertex_program2
 * Extension number in OpenGL registry : 287
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/vertex_program2.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program2 is supported.
 * @return Returns \c true if \b GL_NV_vertex_program2 is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program2();

//@}


/**
 * @defgroup GL_NV_vertex_program2_option GL_NV_vertex_program2_option
 * Extension number in OpenGL registry : 305
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/vertex_program2_option.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program2_option is supported.
 * @return Returns \c true if \b GL_NV_vertex_program2_option is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program2_option();

//@}


/**
 * @defgroup GL_NV_vertex_program3 GL_NV_vertex_program3
 * Extension number in OpenGL registry : 306
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/vertex_program3.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program3 is supported.
 * @return Returns \c true if \b GL_NV_vertex_program3 is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program3();

//@}


/**
 * @defgroup GL_NV_vertex_program4 GL_NV_vertex_program4
 * Extension number in OpenGL registry : 325
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/vertex_program4.txt
 * @ingroup g_GL_NV g_extensions
 */
//@{
/**
 * @brief Test if \b GL_NV_vertex_program4 is supported.
 * @return Returns \c true if \b GL_NV_vertex_program4 is supported, false otherwise.
 */
GLE_API bool isGL_NV_vertex_program4();

/**
 * @brief void glVertexAttribI1iEXT( GLuint index, GLint x );
 */
GLE_API void glVertexAttribI1iEXT( GLuint index, GLint x );

/**
 * @brief void glVertexAttribI2iEXT( GLuint index, GLint x, GLint y );
 */
GLE_API void glVertexAttribI2iEXT( GLuint index, GLint x, GLint y );

/**
 * @brief void glVertexAttribI3iEXT( GLuint index, GLint x, GLint y, GLint z );
 */
GLE_API void glVertexAttribI3iEXT( GLuint index, GLint x, GLint y, GLint z );

/**
 * @brief void glVertexAttribI4iEXT( GLuint index, GLint x, GLint y, GLint z, GLint w );
 */
GLE_API void glVertexAttribI4iEXT( GLuint index, GLint x, GLint y, GLint z, GLint w );

/**
 * @brief void glVertexAttribI1uiEXT( GLuint index, GLuint x );
 */
GLE_API void glVertexAttribI1uiEXT( GLuint index, GLuint x );

/**
 * @brief void glVertexAttribI2uiEXT( GLuint index, GLuint x, GLuint y );
 */
GLE_API void glVertexAttribI2uiEXT( GLuint index, GLuint x, GLuint y );

/**
 * @brief void glVertexAttribI3uiEXT( GLuint index, GLuint x, GLuint y, GLuint z );
 */
GLE_API void glVertexAttribI3uiEXT( GLuint index, GLuint x, GLuint y, GLuint z );

/**
 * @brief void glVertexAttribI4uiEXT( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );
 */
GLE_API void glVertexAttribI4uiEXT( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );

/**
 * @brief void glVertexAttribI1ivEXT( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttribI1ivEXT( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttribI2ivEXT( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttribI2ivEXT( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttribI3ivEXT( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttribI3ivEXT( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttribI4ivEXT( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttribI4ivEXT( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttribI1uivEXT( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttribI1uivEXT( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttribI2uivEXT( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttribI2uivEXT( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttribI3uivEXT( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttribI3uivEXT( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttribI4uivEXT( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttribI4uivEXT( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttribI4bvEXT( GLuint index, const GLbyte *v );
 */
GLE_API void glVertexAttribI4bvEXT( GLuint index, const GLbyte *v );

/**
 * @brief void glVertexAttribI4svEXT( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttribI4svEXT( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttribI4ubvEXT( GLuint index, const GLubyte *v );
 */
GLE_API void glVertexAttribI4ubvEXT( GLuint index, const GLubyte *v );

/**
 * @brief void glVertexAttribI4usvEXT( GLuint index, const GLushort *v );
 */
GLE_API void glVertexAttribI4usvEXT( GLuint index, const GLushort *v );

/**
 * @brief void glVertexAttribIPointerEXT( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glVertexAttribIPointerEXT( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );

/**
 * @brief void glGetVertexAttribIivEXT( GLuint index, GLenum pname, GLint *params );
 */
GLE_API void glGetVertexAttribIivEXT( GLuint index, GLenum pname, GLint *params );

/**
 * @brief void glGetVertexAttribIuivEXT( GLuint index, GLenum pname, GLuint *params );
 */
GLE_API void glGetVertexAttribIuivEXT( GLuint index, GLenum pname, GLuint *params );

//@}


/**
 * @defgroup GL_OES_read_format GL_OES_read_format
 * Extension number in OpenGL registry : 295
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/OES/OES_read_format.txt
 * @ingroup g_GL_OES g_extensions
 */
//@{
/**
 * @brief Test if \b GL_OES_read_format is supported.
 * @return Returns \c true if \b GL_OES_read_format is supported, false otherwise.
 */
GLE_API bool isGL_OES_read_format();

//@}


/**
 * @defgroup GL_OML_interlace GL_OML_interlace
 * Extension number in OpenGL registry : 239
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/OML/interlace.txt
 * @ingroup g_GL_OML g_extensions
 */
//@{
/**
 * @brief Test if \b GL_OML_interlace is supported.
 * @return Returns \c true if \b GL_OML_interlace is supported, false otherwise.
 */
GLE_API bool isGL_OML_interlace();

//@}


/**
 * @defgroup GL_OML_resample GL_OML_resample
 * Extension number in OpenGL registry : 241
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/OML/resample.txt
 * @ingroup g_GL_OML g_extensions
 */
//@{
/**
 * @brief Test if \b GL_OML_resample is supported.
 * @return Returns \c true if \b GL_OML_resample is supported, false otherwise.
 */
GLE_API bool isGL_OML_resample();

//@}


/**
 * @defgroup GL_OML_subsample GL_OML_subsample
 * Extension number in OpenGL registry : 240
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/OML/subsample.txt
 * @ingroup g_GL_OML g_extensions
 */
//@{
/**
 * @brief Test if \b GL_OML_subsample is supported.
 * @return Returns \c true if \b GL_OML_subsample is supported, false otherwise.
 */
GLE_API bool isGL_OML_subsample();

//@}


/**
 * @defgroup GL_PGI_misc_hints GL_PGI_misc_hints
 * Extension number in OpenGL registry : 77
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/PGI/misc_hints.txt
 * @ingroup g_GL_PGI g_extensions
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
 * @defgroup GL_PGI_vertex_hints GL_PGI_vertex_hints
 * Extension number in OpenGL registry : 76
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/PGI/vertex_hints.txt
 * @ingroup g_GL_PGI g_extensions
 */
//@{
/**
 * @brief Test if \b GL_PGI_vertex_hints is supported.
 * @return Returns \c true if \b GL_PGI_vertex_hints is supported, false otherwise.
 */
GLE_API bool isGL_PGI_vertex_hints();

//@}


/**
 * @defgroup GL_REND_screen_coordinates GL_REND_screen_coordinates
 * Extension number in OpenGL registry : 155
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/REND/screen_coordinates.txt
 * @ingroup g_GL_REND g_extensions
 */
//@{
/**
 * @brief Test if \b GL_REND_screen_coordinates is supported.
 * @return Returns \c true if \b GL_REND_screen_coordinates is supported, false otherwise.
 */
GLE_API bool isGL_REND_screen_coordinates();

//@}


/**
 * @defgroup GL_S3_s3tc GL_S3_s3tc
 * Extension number in OpenGL registry : 276
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/S3/s3tc.txt
 * @ingroup g_GL_S3 g_extensions
 */
//@{
/**
 * @brief Test if \b GL_S3_s3tc is supported.
 * @return Returns \c true if \b GL_S3_s3tc is supported, false otherwise.
 */
GLE_API bool isGL_S3_s3tc();

//@}


/**
 * @defgroup GL_SGIS_detail_texture GL_SGIS_detail_texture
 * Extension number in OpenGL registry : 21
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/detail_texture.txt
 * @ingroup g_GL_SGIS g_extensions
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
 * @defgroup GL_SGIS_fog_function GL_SGIS_fog_function
 * Extension number in OpenGL registry : 64
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/fog_func.txt
 * @ingroup g_GL_SGIS g_extensions
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
 * @defgroup GL_SGIS_generate_mipmap GL_SGIS_generate_mipmap
 * Extension number in OpenGL registry : 32
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/generate_mipmap.txt
 * @ingroup g_GL_SGIS g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIS_generate_mipmap is supported.
 * @return Returns \c true if \b GL_SGIS_generate_mipmap is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_generate_mipmap();

//@}


/**
 * @defgroup GL_SGIS_multisample GL_SGIS_multisample
 * Extension number in OpenGL registry : 25
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/multisample.txt
 * @ingroup g_GL_SGIS g_extensions
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
 * @defgroup GL_SGIS_pixel_texture GL_SGIS_pixel_texture
 * Extension number in OpenGL registry : 15
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/pixel_texture.txt
 * @ingroup g_GL_SGIS g_extensions
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
 * @defgroup GL_SGIS_point_line_texgen GL_SGIS_point_line_texgen
 * Extension number in OpenGL registry : 213
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/point_line_texgen.txt
 * @ingroup g_GL_SGIS g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIS_point_line_texgen is supported.
 * @return Returns \c true if \b GL_SGIS_point_line_texgen is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_point_line_texgen();

//@}

			
/**	
 * @defgroup GL_SGIS_point_parameters GL_SGIS_point_parameters
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
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
 * @defgroup GL_SGIS_sharpen_texture GL_SGIS_sharpen_texture
 * Extension number in OpenGL registry : 22
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/sharpen_texture.txt
 * @ingroup g_GL_SGIS g_extensions
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
 * @defgroup GL_SGIS_texture4D GL_SGIS_texture4D
 * Extension number in OpenGL registry : 16
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/texture4D.txt
 * @ingroup g_GL_SGIS g_extensions
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
 * @defgroup GL_SGIS_texture_border_clamp GL_SGIS_texture_border_clamp
 * Extension number in OpenGL registry : 36
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/texture_border_clamp.txt
 * @ingroup g_GL_SGIS g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_border_clamp is supported.
 * @return Returns \c true if \b GL_SGIS_texture_border_clamp is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_border_clamp();

//@}


/**
 * @defgroup GL_SGIS_texture_color_mask GL_SGIS_texture_color_mask
 * Extension number in OpenGL registry : 214
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/texture_color_mask.txt
 * @ingroup g_GL_SGIS g_extensions
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
 * @defgroup GL_SGIS_texture_edge_clamp GL_SGIS_texture_edge_clamp
 * Extension number in OpenGL registry : 35
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/texture_edge_clamp.txt
 * @ingroup g_GL_SGIS g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_edge_clamp is supported.
 * @return Returns \c true if \b GL_SGIS_texture_edge_clamp is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_edge_clamp();

//@}


/**
 * @defgroup GL_SGIS_texture_filter4 GL_SGIS_texture_filter4
 * Extension number in OpenGL registry : 7
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/texture_filter4.txt
 * @ingroup g_GL_SGIS g_extensions
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
 * @defgroup GL_SGIS_texture_lod GL_SGIS_texture_lod
 * Extension number in OpenGL registry : 24
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/texture_lod.txt
 * @ingroup g_GL_SGIS g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_lod is supported.
 * @return Returns \c true if \b GL_SGIS_texture_lod is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_lod();

//@}


/**
 * @defgroup GL_SGIS_texture_select GL_SGIS_texture_select
 * Extension number in OpenGL registry : 51
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/texture_select.txt
 * @ingroup g_GL_SGIS g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIS_texture_select is supported.
 * @return Returns \c true if \b GL_SGIS_texture_select is supported, false otherwise.
 */
GLE_API bool isGL_SGIS_texture_select();

//@}


/**
 * @defgroup GL_SGIX_async GL_SGIX_async
 * Extension number in OpenGL registry : 132
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/async.txt
 * @ingroup g_GL_SGIX g_extensions
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
 * @defgroup GL_SGIX_async_histogram GL_SGIX_async_histogram
 * Extension number in OpenGL registry : 134
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/async_histogram.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_async_histogram is supported.
 * @return Returns \c true if \b GL_SGIX_async_histogram is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_async_histogram();

//@}


/**
 * @defgroup GL_SGIX_async_pixel GL_SGIX_async_pixel
 * Extension number in OpenGL registry : 133
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/async_pixel.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_async_pixel is supported.
 * @return Returns \c true if \b GL_SGIX_async_pixel is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_async_pixel();

//@}


/**
 * @defgroup GL_SGIX_blend_alpha_minmax GL_SGIX_blend_alpha_minmax
 * Extension number in OpenGL registry : 119
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/blend_alpha_minmax.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_blend_alpha_minmax is supported.
 * @return Returns \c true if \b GL_SGIX_blend_alpha_minmax is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_blend_alpha_minmax();

//@}

			
/**	
 * @defgroup GL_SGIX_calligraphic_fragment GL_SGIX_calligraphic_fragment
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_calligraphic_fragment is supported.
 * @return Returns \c true if \b GL_SGIX_calligraphic_fragment is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_calligraphic_fragment();

//@}


/**
 * @defgroup GL_SGIX_clipmap GL_SGIX_clipmap
 * Extension number in OpenGL registry : 33
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/clipmap.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_clipmap is supported.
 * @return Returns \c true if \b GL_SGIX_clipmap is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_clipmap();

//@}


/**
 * @defgroup GL_SGIX_convolution_accuracy GL_SGIX_convolution_accuracy
 * Extension number in OpenGL registry : 211
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/convolution_accuracy.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_convolution_accuracy is supported.
 * @return Returns \c true if \b GL_SGIX_convolution_accuracy is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_convolution_accuracy();

//@}

			
/**	
 * @defgroup GL_SGIX_depth_pass_instrument GL_SGIX_depth_pass_instrument
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_depth_pass_instrument is supported.
 * @return Returns \c true if \b GL_SGIX_depth_pass_instrument is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_depth_pass_instrument();

//@}


/**
 * @defgroup GL_SGIX_depth_texture GL_SGIX_depth_texture
 * Extension number in OpenGL registry : 63
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/depth_texture.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_depth_texture is supported.
 * @return Returns \c true if \b GL_SGIX_depth_texture is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_depth_texture();

//@}


/**
 * @defgroup GL_SGIX_flush_raster GL_SGIX_flush_raster
 * Extension number in OpenGL registry : 61
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/flush_raster.txt
 * @ingroup g_GL_SGIX g_extensions
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
 * @defgroup GL_SGIX_fog_offset GL_SGIX_fog_offset
 * Extension number in OpenGL registry : 65
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/fog_offset.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_fog_offset is supported.
 * @return Returns \c true if \b GL_SGIX_fog_offset is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_fog_offset();

//@}

			
/**	
 * @defgroup GL_SGIX_fog_scale GL_SGIX_fog_scale
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_fog_scale is supported.
 * @return Returns \c true if \b GL_SGIX_fog_scale is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_fog_scale();

//@}

			
/**	
 * @defgroup GL_SGIX_fragment_lighting GL_SGIX_fragment_lighting
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
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
 * @defgroup GL_SGIX_framezoom GL_SGIX_framezoom
 * Extension number in OpenGL registry : 57
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/framezoom.txt
 * @ingroup g_GL_SGIX g_extensions
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
 * @defgroup GL_SGIX_igloo_interface GL_SGIX_igloo_interface
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
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
 * @defgroup GL_SGIX_impact_pixel_texture GL_SGIX_impact_pixel_texture
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_impact_pixel_texture is supported.
 * @return Returns \c true if \b GL_SGIX_impact_pixel_texture is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_impact_pixel_texture();

//@}


/**
 * @defgroup GL_SGIX_instruments GL_SGIX_instruments
 * Extension number in OpenGL registry : 55
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/instruments.txt
 * @ingroup g_GL_SGIX g_extensions
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
 * @defgroup GL_SGIX_interlace GL_SGIX_interlace
 * Extension number in OpenGL registry : 45
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/interlace.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_interlace is supported.
 * @return Returns \c true if \b GL_SGIX_interlace is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_interlace();

//@}


/**
 * @defgroup GL_SGIX_ir_instrument1 GL_SGIX_ir_instrument1
 * Extension number in OpenGL registry : 81
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/ir_instrument1.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_ir_instrument1 is supported.
 * @return Returns \c true if \b GL_SGIX_ir_instrument1 is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_ir_instrument1();

//@}


/**
 * @defgroup GL_SGIX_list_priority GL_SGIX_list_priority
 * Extension number in OpenGL registry : 80
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/list_priority.txt
 * @ingroup g_GL_SGIX g_extensions
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
 * @defgroup GL_SGIX_pixel_texture GL_SGIX_pixel_texture
 * Extension number in OpenGL registry : 15a
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/sgix_pixel_texture.txt
 * @ingroup g_GL_SGIX g_extensions
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
 * @defgroup GL_SGIX_pixel_tiles GL_SGIX_pixel_tiles
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_pixel_tiles is supported.
 * @return Returns \c true if \b GL_SGIX_pixel_tiles is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_pixel_tiles();

//@}

			
/**	
 * @defgroup GL_SGIX_polynomial_ffd GL_SGIX_polynomial_ffd
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
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
 * @defgroup GL_SGIX_reference_plane GL_SGIX_reference_plane
 * Extension number in OpenGL registry : 60
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/reference_plane.txt
 * @ingroup g_GL_SGIX g_extensions
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
 * @defgroup GL_SGIX_resample GL_SGIX_resample
 * Extension number in OpenGL registry : 212
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/resample.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_resample is supported.
 * @return Returns \c true if \b GL_SGIX_resample is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_resample();

//@}

			
/**	
 * @defgroup GL_SGIX_scalebias_hint GL_SGIX_scalebias_hint
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_scalebias_hint is supported.
 * @return Returns \c true if \b GL_SGIX_scalebias_hint is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_scalebias_hint();

//@}


/**
 * @defgroup GL_SGIX_shadow GL_SGIX_shadow
 * Extension number in OpenGL registry : 34
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/shadow.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_shadow is supported.
 * @return Returns \c true if \b GL_SGIX_shadow is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_shadow();

//@}


/**
 * @defgroup GL_SGIX_shadow_ambient GL_SGIX_shadow_ambient
 * Extension number in OpenGL registry : 90
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/shadow_ambient.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_shadow_ambient is supported.
 * @return Returns \c true if \b GL_SGIX_shadow_ambient is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_shadow_ambient();

//@}


/**
 * @defgroup GL_SGIX_sprite GL_SGIX_sprite
 * Extension number in OpenGL registry : 52
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/sprite.txt
 * @ingroup g_GL_SGIX g_extensions
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
 * @defgroup GL_SGIX_subsample GL_SGIX_subsample
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_subsample is supported.
 * @return Returns \c true if \b GL_SGIX_subsample is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_subsample();

//@}


/**
 * @defgroup GL_SGIX_tag_sample_buffer GL_SGIX_tag_sample_buffer
 * Extension number in OpenGL registry : 58
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/tag_sample_buffer.txt
 * @ingroup g_GL_SGIX g_extensions
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
 * @defgroup GL_SGIX_texture_add_env GL_SGIX_texture_add_env
 * Extension number in OpenGL registry : 69
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/texture_env_add.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_add_env is supported.
 * @return Returns \c true if \b GL_SGIX_texture_add_env is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_add_env();

//@}


/**
 * @defgroup GL_SGIX_texture_coordinate_clamp GL_SGIX_texture_coordinate_clamp
 * Extension number in OpenGL registry : 235
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/texture_coordinate_clamp.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_coordinate_clamp is supported.
 * @return Returns \c true if \b GL_SGIX_texture_coordinate_clamp is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_coordinate_clamp();

//@}


/**
 * @defgroup GL_SGIX_texture_lod_bias GL_SGIX_texture_lod_bias
 * Extension number in OpenGL registry : 84
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/texture_lod_bias.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_lod_bias is supported.
 * @return Returns \c true if \b GL_SGIX_texture_lod_bias is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_lod_bias();

//@}


/**
 * @defgroup GL_SGIX_texture_multi_buffer GL_SGIX_texture_multi_buffer
 * Extension number in OpenGL registry : 53
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/texture_multi_buffer.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_multi_buffer is supported.
 * @return Returns \c true if \b GL_SGIX_texture_multi_buffer is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_multi_buffer();

//@}


/**
 * @defgroup GL_SGIX_texture_scale_bias GL_SGIX_texture_scale_bias
 * Extension number in OpenGL registry : 56
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/texture_scale_bias.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_scale_bias is supported.
 * @return Returns \c true if \b GL_SGIX_texture_scale_bias is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_scale_bias();

//@}

			
/**	
 * @defgroup GL_SGIX_texture_select GL_SGIX_texture_select
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_texture_select is supported.
 * @return Returns \c true if \b GL_SGIX_texture_select is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_texture_select();

//@}


/**
 * @defgroup GL_SGIX_vertex_preclip GL_SGIX_vertex_preclip
 * Extension number in OpenGL registry : 210
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/vertex_preclip.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_vertex_preclip is supported.
 * @return Returns \c true if \b GL_SGIX_vertex_preclip is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_vertex_preclip();

//@}


/**
 * @defgroup GL_SGIX_ycrcb GL_SGIX_ycrcb
 * Extension number in OpenGL registry : 101
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/ycrcb.txt
 * @ingroup g_GL_SGIX g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_ycrcb is supported.
 * @return Returns \c true if \b GL_SGIX_ycrcb is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_ycrcb();

//@}

			
/**	
 * @defgroup GL_SGIX_ycrcb_subsample GL_SGIX_ycrcb_subsample
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_ycrcb_subsample is supported.
 * @return Returns \c true if \b GL_SGIX_ycrcb_subsample is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_ycrcb_subsample();

//@}

			
/**	
 * @defgroup GL_SGIX_ycrcba GL_SGIX_ycrcba
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGIX_ycrcba is supported.
 * @return Returns \c true if \b GL_SGIX_ycrcba is supported, false otherwise.
 */
GLE_API bool isGL_SGIX_ycrcba();

//@}


/**
 * @defgroup GL_SGI_color_matrix GL_SGI_color_matrix
 * Extension number in OpenGL registry : 13
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGI/color_matrix.txt
 * @ingroup g_GL_SGI g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGI_color_matrix is supported.
 * @return Returns \c true if \b GL_SGI_color_matrix is supported, false otherwise.
 */
GLE_API bool isGL_SGI_color_matrix();

//@}


/**
 * @defgroup GL_SGI_color_table GL_SGI_color_table
 * Extension number in OpenGL registry : 14
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGI/color_table.txt
 * @ingroup g_GL_SGI g_extensions
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
 * @defgroup GL_SGI_depth_pass_instrument GL_SGI_depth_pass_instrument
 * Extension not found in OpenGL extensions registry !!!
 * @ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGI_depth_pass_instrument is supported.
 * @return Returns \c true if \b GL_SGI_depth_pass_instrument is supported, false otherwise.
 */
GLE_API bool isGL_SGI_depth_pass_instrument();

//@}


/**
 * @defgroup GL_SGI_texture_color_table GL_SGI_texture_color_table
 * Extension number in OpenGL registry : 17
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGI/texture_color_table.txt
 * @ingroup g_GL_SGI g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SGI_texture_color_table is supported.
 * @return Returns \c true if \b GL_SGI_texture_color_table is supported, false otherwise.
 */
GLE_API bool isGL_SGI_texture_color_table();

//@}


/**
 * @defgroup GL_SUNX_constant_data GL_SUNX_constant_data
 * Extension number in OpenGL registry : 163
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SUNX/constant_data.txt
 * @ingroup g_GL_SUNX g_extensions
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
 * @defgroup GL_SUN_convolution_border_modes GL_SUN_convolution_border_modes
 * Extension number in OpenGL registry : 182
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SUN/convolution_border_modes.txt
 * @ingroup g_GL_SUN g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SUN_convolution_border_modes is supported.
 * @return Returns \c true if \b GL_SUN_convolution_border_modes is supported, false otherwise.
 */
GLE_API bool isGL_SUN_convolution_border_modes();

//@}


/**
 * @defgroup GL_SUN_global_alpha GL_SUN_global_alpha
 * Extension number in OpenGL registry : 164
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SUN/global_alpha.txt
 * @ingroup g_GL_SUN g_extensions
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
 * @defgroup GL_SUN_mesh_array GL_SUN_mesh_array
 * Extension number in OpenGL registry : 257
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SUN/mesh_array.txt
 * @ingroup g_GL_SUN g_extensions
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
 * @defgroup GL_SUN_slice_accum GL_SUN_slice_accum
 * Extension number in OpenGL registry : 258
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SUN/slice_accum.txt
 * @ingroup g_GL_SUN g_extensions
 */
//@{
/**
 * @brief Test if \b GL_SUN_slice_accum is supported.
 * @return Returns \c true if \b GL_SUN_slice_accum is supported, false otherwise.
 */
GLE_API bool isGL_SUN_slice_accum();

//@}


/**
 * @defgroup GL_SUN_triangle_list GL_SUN_triangle_list
 * Extension number in OpenGL registry : 165
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SUN/triangle_list.txt
 * @ingroup g_GL_SUN g_extensions
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
 * @defgroup GL_SUN_vertex GL_SUN_vertex
 * Extension number in OpenGL registry : 166
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SUN/vertex.txt
 * @ingroup g_GL_SUN g_extensions
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
 * @defgroup GL_VERSION_1_2 GL_VERSION_1_2
 * @ingroup g_virtualExtensions
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
 * @defgroup GL_VERSION_1_2_DEPRECATED GL_VERSION_1_2_DEPRECATED
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_1_2_DEPRECATED is supported.
 * @return Returns \c true if \b GL_VERSION_1_2_DEPRECATED is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_1_2_DEPRECATED();

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

//@}


/**
 * @defgroup GL_VERSION_1_3 GL_VERSION_1_3
 * @ingroup g_virtualExtensions
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
 * @defgroup GL_VERSION_1_3_DEPRECATED GL_VERSION_1_3_DEPRECATED
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_1_3_DEPRECATED is supported.
 * @return Returns \c true if \b GL_VERSION_1_3_DEPRECATED is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_1_3_DEPRECATED();

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

//@}


/**
 * @defgroup GL_VERSION_1_4 GL_VERSION_1_4
 * @ingroup g_virtualExtensions
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

//@}


/**
 * @defgroup GL_VERSION_1_4_DEPRECATED GL_VERSION_1_4_DEPRECATED
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_1_4_DEPRECATED is supported.
 * @return Returns \c true if \b GL_VERSION_1_4_DEPRECATED is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_1_4_DEPRECATED();

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
 * @defgroup GL_VERSION_1_5 GL_VERSION_1_5
 * @ingroup g_virtualExtensions
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
 * @defgroup GL_VERSION_1_5_DEPRECATED GL_VERSION_1_5_DEPRECATED
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_1_5_DEPRECATED is supported.
 * @return Returns \c true if \b GL_VERSION_1_5_DEPRECATED is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_1_5_DEPRECATED();

//@}


/**
 * @defgroup GL_VERSION_2_0 GL_VERSION_2_0
 * @ingroup g_virtualExtensions
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
 * @defgroup GL_VERSION_2_0_DEPRECATED GL_VERSION_2_0_DEPRECATED
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_2_0_DEPRECATED is supported.
 * @return Returns \c true if \b GL_VERSION_2_0_DEPRECATED is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_2_0_DEPRECATED();

//@}


/**
 * @defgroup GL_VERSION_2_1 GL_VERSION_2_1
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_2_1 is supported.
 * @return Returns \c true if \b GL_VERSION_2_1 is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_2_1();

/**
 * @brief void glUniformMatrix2x3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix2x3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glUniformMatrix3x2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix3x2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glUniformMatrix2x4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix2x4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glUniformMatrix4x2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix4x2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glUniformMatrix3x4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix3x4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

/**
 * @brief void glUniformMatrix4x3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );
 */
GLE_API void glUniformMatrix4x3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value );

//@}


/**
 * @defgroup GL_VERSION_2_1_DEPRECATED GL_VERSION_2_1_DEPRECATED
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_2_1_DEPRECATED is supported.
 * @return Returns \c true if \b GL_VERSION_2_1_DEPRECATED is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_2_1_DEPRECATED();

//@}


/**
 * @defgroup GL_VERSION_3_0 GL_VERSION_3_0
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_3_0 is supported.
 * @return Returns \c true if \b GL_VERSION_3_0 is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_3_0();

/**
 * @brief void glColorMaski( GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a );
 */
GLE_API void glColorMaski( GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a );

/**
 * @brief void glGetBooleani_v( GLenum target, GLuint index, GLboolean *data );
 */
GLE_API void glGetBooleani_v( GLenum target, GLuint index, GLboolean *data );

/**
 * @brief void glGetIntegeri_v( GLenum target, GLuint index, GLint *data );
 */
GLE_API void glGetIntegeri_v( GLenum target, GLuint index, GLint *data );

/**
 * @brief void glEnablei( GLenum target, GLuint index );
 */
GLE_API void glEnablei( GLenum target, GLuint index );

/**
 * @brief void glDisablei( GLenum target, GLuint index );
 */
GLE_API void glDisablei( GLenum target, GLuint index );

/**
 * @brief GLboolean glIsEnabledi( GLenum target, GLuint index );
 */
GLE_API GLboolean glIsEnabledi( GLenum target, GLuint index );

/**
 * @brief void glBeginTransformFeedback( GLenum primitiveMode );
 */
GLE_API void glBeginTransformFeedback( GLenum primitiveMode );

/**
 * @brief void glEndTransformFeedback( void );
 */
GLE_API void glEndTransformFeedback( void );

/**
 * @brief void glBindBufferRange( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size );
 */
GLE_API void glBindBufferRange( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size );

/**
 * @brief void glBindBufferBase( GLenum target, GLuint index, GLuint buffer );
 */
GLE_API void glBindBufferBase( GLenum target, GLuint index, GLuint buffer );

/**
 * @brief void glTransformFeedbackVaryings( GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode );
 */
GLE_API void glTransformFeedbackVaryings( GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode );

/**
 * @brief void glGetTransformFeedbackVarying( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name );
 */
GLE_API void glGetTransformFeedbackVarying( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name );

/**
 * @brief void glClampColor( GLenum target, GLenum clamp );
 */
GLE_API void glClampColor( GLenum target, GLenum clamp );

/**
 * @brief void glBeginConditionalRender( GLuint id, GLenum mode );
 */
GLE_API void glBeginConditionalRender( GLuint id, GLenum mode );

/**
 * @brief void glEndConditionalRender( void );
 */
GLE_API void glEndConditionalRender( void );

/**
 * @brief void glVertexAttribIPointer( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
 */
GLE_API void glVertexAttribIPointer( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );

/**
 * @brief void glGetVertexAttribIiv( GLuint index, GLenum pname, GLint *params );
 */
GLE_API void glGetVertexAttribIiv( GLuint index, GLenum pname, GLint *params );

/**
 * @brief void glGetVertexAttribIuiv( GLuint index, GLenum pname, GLuint *params );
 */
GLE_API void glGetVertexAttribIuiv( GLuint index, GLenum pname, GLuint *params );

/**
 * @brief void glGetUniformuiv( GLuint program, GLint location, GLuint *params );
 */
GLE_API void glGetUniformuiv( GLuint program, GLint location, GLuint *params );

/**
 * @brief void glBindFragDataLocation( GLuint program, GLuint color, const GLchar *name );
 */
GLE_API void glBindFragDataLocation( GLuint program, GLuint color, const GLchar *name );

/**
 * @brief GLint glGetFragDataLocation( GLuint program, const GLchar *name );
 */
GLE_API GLint glGetFragDataLocation( GLuint program, const GLchar *name );

/**
 * @brief void glUniform1ui( GLint location, GLuint v0 );
 */
GLE_API void glUniform1ui( GLint location, GLuint v0 );

/**
 * @brief void glUniform2ui( GLint location, GLuint v0, GLuint v1 );
 */
GLE_API void glUniform2ui( GLint location, GLuint v0, GLuint v1 );

/**
 * @brief void glUniform3ui( GLint location, GLuint v0, GLuint v1, GLuint v2 );
 */
GLE_API void glUniform3ui( GLint location, GLuint v0, GLuint v1, GLuint v2 );

/**
 * @brief void glUniform4ui( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 );
 */
GLE_API void glUniform4ui( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 );

/**
 * @brief void glUniform1uiv( GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glUniform1uiv( GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glUniform2uiv( GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glUniform2uiv( GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glUniform3uiv( GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glUniform3uiv( GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glUniform4uiv( GLint location, GLsizei count, const GLuint *value );
 */
GLE_API void glUniform4uiv( GLint location, GLsizei count, const GLuint *value );

/**
 * @brief void glTexParameterIiv( GLenum target, GLenum pname, const GLint *params );
 */
GLE_API void glTexParameterIiv( GLenum target, GLenum pname, const GLint *params );

/**
 * @brief void glTexParameterIuiv( GLenum target, GLenum pname, const GLuint *params );
 */
GLE_API void glTexParameterIuiv( GLenum target, GLenum pname, const GLuint *params );

/**
 * @brief void glGetTexParameterIiv( GLenum target, GLenum pname, GLint *params );
 */
GLE_API void glGetTexParameterIiv( GLenum target, GLenum pname, GLint *params );

/**
 * @brief void glGetTexParameterIuiv( GLenum target, GLenum pname, GLuint *params );
 */
GLE_API void glGetTexParameterIuiv( GLenum target, GLenum pname, GLuint *params );

/**
 * @brief void glClearBufferiv( GLenum buffer, GLint drawbuffer, const GLint *value );
 */
GLE_API void glClearBufferiv( GLenum buffer, GLint drawbuffer, const GLint *value );

/**
 * @brief void glClearBufferuiv( GLenum buffer, GLint drawbuffer, const GLuint *value );
 */
GLE_API void glClearBufferuiv( GLenum buffer, GLint drawbuffer, const GLuint *value );

/**
 * @brief void glClearBufferfv( GLenum buffer, GLint drawbuffer, const GLfloat *value );
 */
GLE_API void glClearBufferfv( GLenum buffer, GLint drawbuffer, const GLfloat *value );

/**
 * @brief void glClearBufferfi( GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil );
 */
GLE_API void glClearBufferfi( GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil );

/**
 * @brief const GLubyte * glGetStringi( GLenum name, GLuint index );
 */
GLE_API const GLubyte * glGetStringi( GLenum name, GLuint index );

//@}


/**
 * @defgroup GL_VERSION_3_0_DEPRECATED GL_VERSION_3_0_DEPRECATED
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_3_0_DEPRECATED is supported.
 * @return Returns \c true if \b GL_VERSION_3_0_DEPRECATED is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_3_0_DEPRECATED();

/**
 * @brief void glVertexAttribI1i( GLuint index, GLint x );
 */
GLE_API void glVertexAttribI1i( GLuint index, GLint x );

/**
 * @brief void glVertexAttribI2i( GLuint index, GLint x, GLint y );
 */
GLE_API void glVertexAttribI2i( GLuint index, GLint x, GLint y );

/**
 * @brief void glVertexAttribI3i( GLuint index, GLint x, GLint y, GLint z );
 */
GLE_API void glVertexAttribI3i( GLuint index, GLint x, GLint y, GLint z );

/**
 * @brief void glVertexAttribI4i( GLuint index, GLint x, GLint y, GLint z, GLint w );
 */
GLE_API void glVertexAttribI4i( GLuint index, GLint x, GLint y, GLint z, GLint w );

/**
 * @brief void glVertexAttribI1ui( GLuint index, GLuint x );
 */
GLE_API void glVertexAttribI1ui( GLuint index, GLuint x );

/**
 * @brief void glVertexAttribI2ui( GLuint index, GLuint x, GLuint y );
 */
GLE_API void glVertexAttribI2ui( GLuint index, GLuint x, GLuint y );

/**
 * @brief void glVertexAttribI3ui( GLuint index, GLuint x, GLuint y, GLuint z );
 */
GLE_API void glVertexAttribI3ui( GLuint index, GLuint x, GLuint y, GLuint z );

/**
 * @brief void glVertexAttribI4ui( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );
 */
GLE_API void glVertexAttribI4ui( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w );

/**
 * @brief void glVertexAttribI1iv( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttribI1iv( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttribI2iv( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttribI2iv( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttribI3iv( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttribI3iv( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttribI4iv( GLuint index, const GLint *v );
 */
GLE_API void glVertexAttribI4iv( GLuint index, const GLint *v );

/**
 * @brief void glVertexAttribI1uiv( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttribI1uiv( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttribI2uiv( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttribI2uiv( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttribI3uiv( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttribI3uiv( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttribI4uiv( GLuint index, const GLuint *v );
 */
GLE_API void glVertexAttribI4uiv( GLuint index, const GLuint *v );

/**
 * @brief void glVertexAttribI4bv( GLuint index, const GLbyte *v );
 */
GLE_API void glVertexAttribI4bv( GLuint index, const GLbyte *v );

/**
 * @brief void glVertexAttribI4sv( GLuint index, const GLshort *v );
 */
GLE_API void glVertexAttribI4sv( GLuint index, const GLshort *v );

/**
 * @brief void glVertexAttribI4ubv( GLuint index, const GLubyte *v );
 */
GLE_API void glVertexAttribI4ubv( GLuint index, const GLubyte *v );

/**
 * @brief void glVertexAttribI4usv( GLuint index, const GLushort *v );
 */
GLE_API void glVertexAttribI4usv( GLuint index, const GLushort *v );

//@}


/**
 * @defgroup GL_VERSION_3_1 GL_VERSION_3_1
 * @ingroup g_virtualExtensions
 */
//@{
/**
 * @brief Test if \b GL_VERSION_3_1 is supported.
 * @return Returns \c true if \b GL_VERSION_3_1 is supported, false otherwise.
 */
GLE_API bool isGL_VERSION_3_1();

/**
 * @brief void glDrawArraysInstanced( GLenum mode, GLint first, GLsizei count, GLsizei primcount );
 */
GLE_API void glDrawArraysInstanced( GLenum mode, GLint first, GLsizei count, GLsizei primcount );

/**
 * @brief void glDrawElementsInstanced( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount );
 */
GLE_API void glDrawElementsInstanced( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount );

/**
 * @brief void glTexBuffer( GLenum target, GLenum internalformat, GLuint buffer );
 */
GLE_API void glTexBuffer( GLenum target, GLenum internalformat, GLuint buffer );

/**
 * @brief void glPrimitiveRestartIndex( GLuint index );
 */
GLE_API void glPrimitiveRestartIndex( GLuint index );

//@}


/**
 * @defgroup GL_WIN_phong_shading GL_WIN_phong_shading
 * Extension number in OpenGL registry : 113
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/WIN/phong_shading.txt
 * @ingroup g_GL_WIN g_extensions
 */
//@{
/**
 * @brief Test if \b GL_WIN_phong_shading is supported.
 * @return Returns \c true if \b GL_WIN_phong_shading is supported, false otherwise.
 */
GLE_API bool isGL_WIN_phong_shading();

//@}


/**
 * @defgroup GL_WIN_specular_fog GL_WIN_specular_fog
 * Extension number in OpenGL registry : 114
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/WIN/specular_fog.txt
 * @ingroup g_GL_WIN g_extensions
 */
//@{
/**
 * @brief Test if \b GL_WIN_specular_fog is supported.
 * @return Returns \c true if \b GL_WIN_specular_fog is supported, false otherwise.
 */
GLE_API bool isGL_WIN_specular_fog();

//@}


#endif // #ifndef _GLE_WRAPPERGEN_HPP
