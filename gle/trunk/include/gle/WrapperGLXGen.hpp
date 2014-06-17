#ifndef _GLE_WRAPPERGLXGEN_HPP
#define _GLE_WRAPPERGLXGEN_HPP

#include "gle/gle.hpp"


#ifdef POSIX
/**
 * @defgroup GLX_3DFX_multisample GLX_3DFX_multisample
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_3DFX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_3DFX_multisample is supported.
 * @return Returns \c true if \b GLX_3DFX_multisample is supported, \c false otherwise.
 */
GLE_API bool isGLX_3DFX_multisample();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_AMD_gpu_association GLX_AMD_gpu_association
 * Extension number in OpenGL registry : 398
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/AMD/glx_gpu_association.txt
 * @ingroup g_GLX_AMD g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_AMD_gpu_association is supported.
 * @return Returns \c true if \b GLX_AMD_gpu_association is supported, \c false otherwise.
 */
GLE_API bool isGLX_AMD_gpu_association();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_ARB_create_context GLX_ARB_create_context
 * Extension number in OpenGL registry : 56
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/glx_create_context.txt
 * @ingroup g_GLX_ARB g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_ARB_create_context is supported.
 * @return Returns \c true if \b GLX_ARB_create_context is supported, \c false otherwise.
 */
GLE_API bool isGLX_ARB_create_context();



/**
 * @brief GLXContext glXCreateContextAttribsARB(Display *dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int *attrib_list)
 */
GLE_API GLXContext glXCreateContextAttribsARB(Display *dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int *attrib_list);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_ARB_create_context_profile GLX_ARB_create_context_profile
 * Extension number in OpenGL registry : 75
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/glx_create_context.txt
 * @ingroup g_GLX_ARB g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_ARB_create_context_profile is supported.
 * @return Returns \c true if \b GLX_ARB_create_context_profile is supported, \c false otherwise.
 */
GLE_API bool isGLX_ARB_create_context_profile();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_ARB_create_context_robustness GLX_ARB_create_context_robustness
 * Extension number in OpenGL registry : 101
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/glx_create_context_robustness.txt
 * @ingroup g_GLX_ARB g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_ARB_create_context_robustness is supported.
 * @return Returns \c true if \b GLX_ARB_create_context_robustness is supported, \c false otherwise.
 */
GLE_API bool isGLX_ARB_create_context_robustness();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_ARB_fbconfig_float GLX_ARB_fbconfig_float
 * Extension number in OpenGL registry : 39
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/color_buffer_float.txt
 * @ingroup g_GLX_ARB g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_ARB_fbconfig_float is supported.
 * @return Returns \c true if \b GLX_ARB_fbconfig_float is supported, \c false otherwise.
 */
GLE_API bool isGLX_ARB_fbconfig_float();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_ARB_framebuffer_sRGB GLX_ARB_framebuffer_sRGB
 * Extension number in OpenGL registry : 46
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/framebuffer_sRGB.txt
 * @ingroup g_GLX_ARB g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_ARB_framebuffer_sRGB is supported.
 * @return Returns \c true if \b GLX_ARB_framebuffer_sRGB is supported, \c false otherwise.
 */
GLE_API bool isGLX_ARB_framebuffer_sRGB();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_ARB_get_proc_address GLX_ARB_get_proc_address
 * Extension number in OpenGL registry : 2
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/get_proc_address.txt
 * @ingroup g_GLX_ARB g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_ARB_get_proc_address is supported.
 * @return Returns \c true if \b GLX_ARB_get_proc_address is supported, \c false otherwise.
 */
GLE_API bool isGLX_ARB_get_proc_address();



/**
 * @brief __GLXextFuncPtr glXGetProcAddressARB(const GLubyte *procName)
 */
GLE_API __GLXextFuncPtr glXGetProcAddressARB(const GLubyte *procName);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_ARB_multisample GLX_ARB_multisample
 * Extension number in OpenGL registry : 5
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/ARB/multisample.txt
 * @ingroup g_GLX_ARB g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_ARB_multisample is supported.
 * @return Returns \c true if \b GLX_ARB_multisample is supported, \c false otherwise.
 */
GLE_API bool isGLX_ARB_multisample();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_ARB_vertex_buffer_object GLX_ARB_vertex_buffer_object
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_ARB g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_ARB_vertex_buffer_object is supported.
 * @return Returns \c true if \b GLX_ARB_vertex_buffer_object is supported, \c false otherwise.
 */
GLE_API bool isGLX_ARB_vertex_buffer_object();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_buffer_age GLX_EXT_buffer_age
 * Extension number in OpenGL registry : 427
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/glx_buffer_age.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_buffer_age is supported.
 * @return Returns \c true if \b GLX_EXT_buffer_age is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_buffer_age();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_create_context_es2_profile GLX_EXT_create_context_es2_profile
 * Extension number in OpenGL registry : 399
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/glx_create_context_es2_profile.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_create_context_es2_profile is supported.
 * @return Returns \c true if \b GLX_EXT_create_context_es2_profile is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_create_context_es2_profile();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_create_context_es_profile GLX_EXT_create_context_es_profile
 * Extension number in OpenGL registry : 399
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/glx_create_context_es2_profile.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_create_context_es_profile is supported.
 * @return Returns \c true if \b GLX_EXT_create_context_es_profile is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_create_context_es_profile();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_fbconfig_packed_float GLX_EXT_fbconfig_packed_float
 * Extension number in OpenGL registry : 328
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/packed_float.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_fbconfig_packed_float is supported.
 * @return Returns \c true if \b GLX_EXT_fbconfig_packed_float is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_fbconfig_packed_float();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_framebuffer_sRGB GLX_EXT_framebuffer_sRGB
 * Extension number in OpenGL registry : 337
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/framebuffer_sRGB.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_framebuffer_sRGB is supported.
 * @return Returns \c true if \b GLX_EXT_framebuffer_sRGB is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_framebuffer_sRGB();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_import_context GLX_EXT_import_context
 * Extension number in OpenGL registry : 47
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/import_context.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_import_context is supported.
 * @return Returns \c true if \b GLX_EXT_import_context is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_import_context();



/**
 * @brief void glXFreeContextEXT(Display *dpy, GLXContext context)
 */
GLE_API void glXFreeContextEXT(Display *dpy, GLXContext context);

/**
 * @brief GLXContextID glXGetContextIDEXT(const GLXContext context)
 */
GLE_API GLXContextID glXGetContextIDEXT(const GLXContext context);

/**
 * @brief Display * glXGetCurrentDisplayEXT(void)
 */
GLE_API Display * glXGetCurrentDisplayEXT(void);

/**
 * @brief GLXContext glXImportContextEXT(Display *dpy, GLXContextID contextID)
 */
GLE_API GLXContext glXImportContextEXT(Display *dpy, GLXContextID contextID);

/**
 * @brief int glXQueryContextInfoEXT(Display *dpy, GLXContext context, int attribute, int *value)
 */
GLE_API int glXQueryContextInfoEXT(Display *dpy, GLXContext context, int attribute, int *value);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_swap_control GLX_EXT_swap_control
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_swap_control is supported.
 * @return Returns \c true if \b GLX_EXT_swap_control is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_swap_control();



/**
 * @brief void glXSwapIntervalEXT(Display *dpy, GLXDrawable drawable, int interval)
 */
GLE_API void glXSwapIntervalEXT(Display *dpy, GLXDrawable drawable, int interval);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_swap_control_tear GLX_EXT_swap_control_tear
 * Extension number in OpenGL registry : 414
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/glx_swap_control_tear.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_swap_control_tear is supported.
 * @return Returns \c true if \b GLX_EXT_swap_control_tear is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_swap_control_tear();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_texture_from_pixmap GLX_EXT_texture_from_pixmap
 * Extension number in OpenGL registry : 344
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/texture_from_pixmap.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_texture_from_pixmap is supported.
 * @return Returns \c true if \b GLX_EXT_texture_from_pixmap is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_texture_from_pixmap();



/**
 * @brief void glXBindTexImageEXT(Display *dpy, GLXDrawable drawable, int buffer, const int *attrib_list)
 */
GLE_API void glXBindTexImageEXT(Display *dpy, GLXDrawable drawable, int buffer, const int *attrib_list);

/**
 * @brief void glXReleaseTexImageEXT(Display *dpy, GLXDrawable drawable, int buffer)
 */
GLE_API void glXReleaseTexImageEXT(Display *dpy, GLXDrawable drawable, int buffer);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_visual_info GLX_EXT_visual_info
 * Extension number in OpenGL registry : 28
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/visual_info.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_visual_info is supported.
 * @return Returns \c true if \b GLX_EXT_visual_info is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_visual_info();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_EXT_visual_rating GLX_EXT_visual_rating
 * Extension number in OpenGL registry : 44
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/EXT/visual_rating.txt
 * @ingroup g_GLX_EXT g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_EXT_visual_rating is supported.
 * @return Returns \c true if \b GLX_EXT_visual_rating is supported, \c false otherwise.
 */
GLE_API bool isGLX_EXT_visual_rating();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_INTEL_swap_event GLX_INTEL_swap_event
 * Extension number in OpenGL registry : 384
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/INTEL/swap_event.txt
 * @ingroup g_GLX_INTEL g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_INTEL_swap_event is supported.
 * @return Returns \c true if \b GLX_INTEL_swap_event is supported, \c false otherwise.
 */
GLE_API bool isGLX_INTEL_swap_event();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_MESA_agp_offset GLX_MESA_agp_offset
 * Extension number in OpenGL registry : 308
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESA/agp_offset.txt
 * @ingroup g_GLX_MESA g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_MESA_agp_offset is supported.
 * @return Returns \c true if \b GLX_MESA_agp_offset is supported, \c false otherwise.
 */
GLE_API bool isGLX_MESA_agp_offset();



/**
 * @brief unsigned int glXGetAGPOffsetMESA(const void *pointer)
 */
GLE_API unsigned int glXGetAGPOffsetMESA(const void *pointer);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_MESA_copy_sub_buffer GLX_MESA_copy_sub_buffer
 * Extension number in OpenGL registry : 215
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESA/copy_sub_buffer.txt
 * @ingroup g_GLX_MESA g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_MESA_copy_sub_buffer is supported.
 * @return Returns \c true if \b GLX_MESA_copy_sub_buffer is supported, \c false otherwise.
 */
GLE_API bool isGLX_MESA_copy_sub_buffer();



/**
 * @brief void glXCopySubBufferMESA(Display *dpy, GLXDrawable drawable, int x, int y, int width, int height)
 */
GLE_API void glXCopySubBufferMESA(Display *dpy, GLXDrawable drawable, int x, int y, int width, int height);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_MESA_pixmap_colormap GLX_MESA_pixmap_colormap
 * Extension number in OpenGL registry : 216
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESA/pixmap_colormap.txt
 * @ingroup g_GLX_MESA g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_MESA_pixmap_colormap is supported.
 * @return Returns \c true if \b GLX_MESA_pixmap_colormap is supported, \c false otherwise.
 */
GLE_API bool isGLX_MESA_pixmap_colormap();



/**
 * @brief GLXPixmap glXCreateGLXPixmapMESA(Display *dpy, XVisualInfo *visual, Pixmap pixmap, Colormap cmap)
 */
GLE_API GLXPixmap glXCreateGLXPixmapMESA(Display *dpy, XVisualInfo *visual, Pixmap pixmap, Colormap cmap);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_MESA_release_buffers GLX_MESA_release_buffers
 * Extension number in OpenGL registry : 217
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESA/release_buffers.txt
 * @ingroup g_GLX_MESA g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_MESA_release_buffers is supported.
 * @return Returns \c true if \b GLX_MESA_release_buffers is supported, \c false otherwise.
 */
GLE_API bool isGLX_MESA_release_buffers();



/**
 * @brief Bool glXReleaseBuffersMESA(Display *dpy, GLXDrawable drawable)
 */
GLE_API Bool glXReleaseBuffersMESA(Display *dpy, GLXDrawable drawable);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_MESA_set_3dfx_mode GLX_MESA_set_3dfx_mode
 * Extension number in OpenGL registry : 218
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/MESA/set_3dfx_mode.txt
 * @ingroup g_GLX_MESA g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_MESA_set_3dfx_mode is supported.
 * @return Returns \c true if \b GLX_MESA_set_3dfx_mode is supported, \c false otherwise.
 */
GLE_API bool isGLX_MESA_set_3dfx_mode();



/**
 * @brief Bool glXSet3DfxModeMESA(int mode)
 */
GLE_API Bool glXSet3DfxModeMESA(int mode);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_NV_copy_image GLX_NV_copy_image
 * Extension number in OpenGL registry : 376
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/copy_image.txt
 * @ingroup g_GLX_NV g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_NV_copy_image is supported.
 * @return Returns \c true if \b GLX_NV_copy_image is supported, \c false otherwise.
 */
GLE_API bool isGLX_NV_copy_image();



/**
 * @brief void glXCopyImageSubDataNV(Display *dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
 */
GLE_API void glXCopyImageSubDataNV(Display *dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_NV_float_buffer GLX_NV_float_buffer
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_NV g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_NV_float_buffer is supported.
 * @return Returns \c true if \b GLX_NV_float_buffer is supported, \c false otherwise.
 */
GLE_API bool isGLX_NV_float_buffer();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_NV_multisample_coverage GLX_NV_multisample_coverage
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_NV g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_NV_multisample_coverage is supported.
 * @return Returns \c true if \b GLX_NV_multisample_coverage is supported, \c false otherwise.
 */
GLE_API bool isGLX_NV_multisample_coverage();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_NV_present_video GLX_NV_present_video
 * Extension number in OpenGL registry : 347
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/present_video.txt
 * @ingroup g_GLX_NV g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_NV_present_video is supported.
 * @return Returns \c true if \b GLX_NV_present_video is supported, \c false otherwise.
 */
GLE_API bool isGLX_NV_present_video();



/**
 * @brief int glXBindVideoDeviceNV(Display *dpy, unsigned int video_slot, unsigned int video_device, const int *attrib_list)
 */
GLE_API int glXBindVideoDeviceNV(Display *dpy, unsigned int video_slot, unsigned int video_device, const int *attrib_list);

/**
 * @brief unsigned int * glXEnumerateVideoDevicesNV(Display *dpy, int screen, int *nelements)
 */
GLE_API unsigned int * glXEnumerateVideoDevicesNV(Display *dpy, int screen, int *nelements);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_NV_swap_group GLX_NV_swap_group
 * Extension number in OpenGL registry : 350
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/glx_swap_group.txt
 * @ingroup g_GLX_NV g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_NV_swap_group is supported.
 * @return Returns \c true if \b GLX_NV_swap_group is supported, \c false otherwise.
 */
GLE_API bool isGLX_NV_swap_group();



/**
 * @brief Bool glXBindSwapBarrierNV(Display *dpy, GLuint group, GLuint barrier)
 */
GLE_API Bool glXBindSwapBarrierNV(Display *dpy, GLuint group, GLuint barrier);

/**
 * @brief Bool glXJoinSwapGroupNV(Display *dpy, GLXDrawable drawable, GLuint group)
 */
GLE_API Bool glXJoinSwapGroupNV(Display *dpy, GLXDrawable drawable, GLuint group);

/**
 * @brief Bool glXQueryFrameCountNV(Display *dpy, int screen, GLuint *count)
 */
GLE_API Bool glXQueryFrameCountNV(Display *dpy, int screen, GLuint *count);

/**
 * @brief Bool glXQueryMaxSwapGroupsNV(Display *dpy, int screen, GLuint *maxGroups, GLuint *maxBarriers)
 */
GLE_API Bool glXQueryMaxSwapGroupsNV(Display *dpy, int screen, GLuint *maxGroups, GLuint *maxBarriers);

/**
 * @brief Bool glXQuerySwapGroupNV(Display *dpy, GLXDrawable drawable, GLuint *group, GLuint *barrier)
 */
GLE_API Bool glXQuerySwapGroupNV(Display *dpy, GLXDrawable drawable, GLuint *group, GLuint *barrier);

/**
 * @brief Bool glXResetFrameCountNV(Display *dpy, int screen)
 */
GLE_API Bool glXResetFrameCountNV(Display *dpy, int screen);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_NV_video_capture GLX_NV_video_capture
 * Extension number in OpenGL registry : 374
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/video_capture.txt
 * @ingroup g_GLX_NV g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_NV_video_capture is supported.
 * @return Returns \c true if \b GLX_NV_video_capture is supported, \c false otherwise.
 */
GLE_API bool isGLX_NV_video_capture();



/**
 * @brief int glXBindVideoCaptureDeviceNV(Display *dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device)
 */
GLE_API int glXBindVideoCaptureDeviceNV(Display *dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);

/**
 * @brief GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV(Display *dpy, int screen, int *nelements)
 */
GLE_API GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV(Display *dpy, int screen, int *nelements);

/**
 * @brief void glXLockVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device)
 */
GLE_API void glXLockVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device);

/**
 * @brief int glXQueryVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device, int attribute, int *value)
 */
GLE_API int glXQueryVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device, int attribute, int *value);

/**
 * @brief void glXReleaseVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device)
 */
GLE_API void glXReleaseVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_NV_video_out GLX_NV_video_out
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_NV g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_NV_video_out is supported.
 * @return Returns \c true if \b GLX_NV_video_out is supported, \c false otherwise.
 */
GLE_API bool isGLX_NV_video_out();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_NV_video_output GLX_NV_video_output
 * Extension number in OpenGL registry : 348
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/NV/glx_video_output.txt
 * @ingroup g_GLX_NV g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_NV_video_output is supported.
 * @return Returns \c true if \b GLX_NV_video_output is supported, \c false otherwise.
 */
GLE_API bool isGLX_NV_video_output();



/**
 * @brief int glXBindVideoImageNV(Display *dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer)
 */
GLE_API int glXBindVideoImageNV(Display *dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);

/**
 * @brief int glXGetVideoDeviceNV(Display *dpy, int screen, int numVideoDevices, GLXVideoDeviceNV *pVideoDevice)
 */
GLE_API int glXGetVideoDeviceNV(Display *dpy, int screen, int numVideoDevices, GLXVideoDeviceNV *pVideoDevice);

/**
 * @brief int glXGetVideoInfoNV(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo)
 */
GLE_API int glXGetVideoInfoNV(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo);

/**
 * @brief int glXReleaseVideoDeviceNV(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice)
 */
GLE_API int glXReleaseVideoDeviceNV(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice);

/**
 * @brief int glXReleaseVideoImageNV(Display *dpy, GLXPbuffer pbuf)
 */
GLE_API int glXReleaseVideoImageNV(Display *dpy, GLXPbuffer pbuf);

/**
 * @brief int glXSendPbufferToVideoNV(Display *dpy, GLXPbuffer pbuf, int iBufferType, unsigned long *pulCounterPbuffer, GLboolean bBlock)
 */
GLE_API int glXSendPbufferToVideoNV(Display *dpy, GLXPbuffer pbuf, int iBufferType, unsigned long *pulCounterPbuffer, GLboolean bBlock);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_OML_swap_method GLX_OML_swap_method
 * Extension number in OpenGL registry : 237
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/OML/glx_swap_method.txt
 * @ingroup g_GLX_OML g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_OML_swap_method is supported.
 * @return Returns \c true if \b GLX_OML_swap_method is supported, \c false otherwise.
 */
GLE_API bool isGLX_OML_swap_method();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_OML_sync_control GLX_OML_sync_control
 * Extension number in OpenGL registry : 238
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/OML/glx_sync_control.txt
 * @ingroup g_GLX_OML g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_OML_sync_control is supported.
 * @return Returns \c true if \b GLX_OML_sync_control is supported, \c false otherwise.
 */
GLE_API bool isGLX_OML_sync_control();



/**
 * @brief Bool glXGetMscRateOML(Display *dpy, GLXDrawable drawable, int32_t *numerator, int32_t *denominator)
 */
GLE_API Bool glXGetMscRateOML(Display *dpy, GLXDrawable drawable, int32_t *numerator, int32_t *denominator);

/**
 * @brief Bool glXGetSyncValuesOML(Display *dpy, GLXDrawable drawable, int64_t *ust, int64_t *msc, int64_t *sbc)
 */
GLE_API Bool glXGetSyncValuesOML(Display *dpy, GLXDrawable drawable, int64_t *ust, int64_t *msc, int64_t *sbc);

/**
 * @brief int64_t glXSwapBuffersMscOML(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder)
 */
GLE_API int64_t glXSwapBuffersMscOML(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);

/**
 * @brief Bool glXWaitForMscOML(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t *ust, int64_t *msc, int64_t *sbc)
 */
GLE_API Bool glXWaitForMscOML(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t *ust, int64_t *msc, int64_t *sbc);

/**
 * @brief Bool glXWaitForSbcOML(Display *dpy, GLXDrawable drawable, int64_t target_sbc, int64_t *ust, int64_t *msc, int64_t *sbc)
 */
GLE_API Bool glXWaitForSbcOML(Display *dpy, GLXDrawable drawable, int64_t target_sbc, int64_t *ust, int64_t *msc, int64_t *sbc);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIS_blended_overlay GLX_SGIS_blended_overlay
 * Extension number in OpenGL registry : 142
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/blended_overlay.txt
 * @ingroup g_GLX_SGIS g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIS_blended_overlay is supported.
 * @return Returns \c true if \b GLX_SGIS_blended_overlay is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIS_blended_overlay();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIS_multisample GLX_SGIS_multisample
 * Extension number in OpenGL registry : 25
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIS/multisample.txt
 * @ingroup g_GLX_SGIS g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIS_multisample is supported.
 * @return Returns \c true if \b GLX_SGIS_multisample is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIS_multisample();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIS_shared_multisample GLX_SGIS_shared_multisample
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_SGIS g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIS_shared_multisample is supported.
 * @return Returns \c true if \b GLX_SGIS_shared_multisample is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIS_shared_multisample();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIX_dmbuffer GLX_SGIX_dmbuffer
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_SGIX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIX_dmbuffer is supported.
 * @return Returns \c true if \b GLX_SGIX_dmbuffer is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIX_dmbuffer();



/**
 * @brief Bool glXAssociateDMPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuffer, DMparams *params, DMbuffer dmbuffer)
 */
//GLE_API Bool glXAssociateDMPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuffer, DMparams *params, DMbuffer dmbuffer);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIX_fbconfig GLX_SGIX_fbconfig
 * Extension number in OpenGL registry : 49
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/fbconfig.txt
 * @ingroup g_GLX_SGIX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIX_fbconfig is supported.
 * @return Returns \c true if \b GLX_SGIX_fbconfig is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIX_fbconfig();



/**
 * @brief GLXFBConfigSGIX * glXChooseFBConfigSGIX(Display *dpy, int screen, int *attrib_list, int *nelements)
 */
GLE_API GLXFBConfigSGIX * glXChooseFBConfigSGIX(Display *dpy, int screen, int *attrib_list, int *nelements);

/**
 * @brief GLXContext glXCreateContextWithConfigSGIX(Display *dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct)
 */
GLE_API GLXContext glXCreateContextWithConfigSGIX(Display *dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);

/**
 * @brief GLXPixmap glXCreateGLXPixmapWithConfigSGIX(Display *dpy, GLXFBConfigSGIX config, Pixmap pixmap)
 */
GLE_API GLXPixmap glXCreateGLXPixmapWithConfigSGIX(Display *dpy, GLXFBConfigSGIX config, Pixmap pixmap);

/**
 * @brief int glXGetFBConfigAttribSGIX(Display *dpy, GLXFBConfigSGIX config, int attribute, int *value)
 */
GLE_API int glXGetFBConfigAttribSGIX(Display *dpy, GLXFBConfigSGIX config, int attribute, int *value);

/**
 * @brief GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX(Display *dpy, XVisualInfo *vis)
 */
GLE_API GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX(Display *dpy, XVisualInfo *vis);

/**
 * @brief XVisualInfo * glXGetVisualFromFBConfigSGIX(Display *dpy, GLXFBConfigSGIX config)
 */
GLE_API XVisualInfo * glXGetVisualFromFBConfigSGIX(Display *dpy, GLXFBConfigSGIX config);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIX_hyperpipe GLX_SGIX_hyperpipe
 * Extension number in OpenGL registry : 307
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/hyperpipe_group.txt
 * @ingroup g_GLX_SGIX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIX_hyperpipe is supported.
 * @return Returns \c true if \b GLX_SGIX_hyperpipe is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIX_hyperpipe();



/**
 * @brief int glXBindHyperpipeSGIX(Display *dpy, int hpId)
 */
GLE_API int glXBindHyperpipeSGIX(Display *dpy, int hpId);

/**
 * @brief int glXDestroyHyperpipeConfigSGIX(Display *dpy, int hpId)
 */
GLE_API int glXDestroyHyperpipeConfigSGIX(Display *dpy, int hpId);

/**
 * @brief int glXHyperpipeAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *attribList)
 */
GLE_API int glXHyperpipeAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *attribList);

/**
 * @brief int glXHyperpipeConfigSGIX(Display *dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX *cfg, int *hpId)
 */
GLE_API int glXHyperpipeConfigSGIX(Display *dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX *cfg, int *hpId);

/**
 * @brief int glXQueryHyperpipeAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *returnAttribList)
 */
GLE_API int glXQueryHyperpipeAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *returnAttribList);

/**
 * @brief int glXQueryHyperpipeBestAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *attribList, void *returnAttribList)
 */
GLE_API int glXQueryHyperpipeBestAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *attribList, void *returnAttribList);

/**
 * @brief GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX(Display *dpy, int hpId, int *npipes)
 */
GLE_API GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX(Display *dpy, int hpId, int *npipes);

/**
 * @brief GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX(Display *dpy, int *npipes)
 */
GLE_API GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX(Display *dpy, int *npipes);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIX_pbuffer GLX_SGIX_pbuffer
 * Extension number in OpenGL registry : 50
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/pbuffer.txt
 * @ingroup g_GLX_SGIX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIX_pbuffer is supported.
 * @return Returns \c true if \b GLX_SGIX_pbuffer is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIX_pbuffer();



/**
 * @brief GLXPbufferSGIX glXCreateGLXPbufferSGIX(Display *dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int *attrib_list)
 */
GLE_API GLXPbufferSGIX glXCreateGLXPbufferSGIX(Display *dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int *attrib_list);

/**
 * @brief void glXDestroyGLXPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuf)
 */
GLE_API void glXDestroyGLXPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuf);

/**
 * @brief void glXGetSelectedEventSGIX(Display *dpy, GLXDrawable drawable, unsigned long *mask)
 */
GLE_API void glXGetSelectedEventSGIX(Display *dpy, GLXDrawable drawable, unsigned long *mask);

/**
 * @brief int glXQueryGLXPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int *value)
 */
GLE_API int glXQueryGLXPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int *value);

/**
 * @brief void glXSelectEventSGIX(Display *dpy, GLXDrawable drawable, unsigned long mask)
 */
GLE_API void glXSelectEventSGIX(Display *dpy, GLXDrawable drawable, unsigned long mask);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIX_swap_barrier GLX_SGIX_swap_barrier
 * Extension number in OpenGL registry : 92
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/swap_barrier.txt
 * @ingroup g_GLX_SGIX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIX_swap_barrier is supported.
 * @return Returns \c true if \b GLX_SGIX_swap_barrier is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIX_swap_barrier();



/**
 * @brief void glXBindSwapBarrierSGIX(Display *dpy, GLXDrawable drawable, int barrier)
 */
GLE_API void glXBindSwapBarrierSGIX(Display *dpy, GLXDrawable drawable, int barrier);

/**
 * @brief Bool glXQueryMaxSwapBarriersSGIX(Display *dpy, int screen, int *max)
 */
GLE_API Bool glXQueryMaxSwapBarriersSGIX(Display *dpy, int screen, int *max);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIX_swap_group GLX_SGIX_swap_group
 * Extension number in OpenGL registry : 91
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/swap_group.txt
 * @ingroup g_GLX_SGIX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIX_swap_group is supported.
 * @return Returns \c true if \b GLX_SGIX_swap_group is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIX_swap_group();



/**
 * @brief void glXJoinSwapGroupSGIX(Display *dpy, GLXDrawable drawable, GLXDrawable member)
 */
GLE_API void glXJoinSwapGroupSGIX(Display *dpy, GLXDrawable drawable, GLXDrawable member);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIX_video_resize GLX_SGIX_video_resize
 * Extension number in OpenGL registry : 83
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/video_resize.txt
 * @ingroup g_GLX_SGIX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIX_video_resize is supported.
 * @return Returns \c true if \b GLX_SGIX_video_resize is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIX_video_resize();



/**
 * @brief int glXBindChannelToWindowSGIX(Display *display, int screen, int channel, Window window)
 */
GLE_API int glXBindChannelToWindowSGIX(Display *display, int screen, int channel, Window window);

/**
 * @brief int glXChannelRectSGIX(Display *display, int screen, int channel, int x, int y, int w, int h)
 */
GLE_API int glXChannelRectSGIX(Display *display, int screen, int channel, int x, int y, int w, int h);

/**
 * @brief int glXChannelRectSyncSGIX(Display *display, int screen, int channel, GLenum synctype)
 */
GLE_API int glXChannelRectSyncSGIX(Display *display, int screen, int channel, GLenum synctype);

/**
 * @brief int glXQueryChannelDeltasSGIX(Display *display, int screen, int channel, int *x, int *y, int *w, int *h)
 */
GLE_API int glXQueryChannelDeltasSGIX(Display *display, int screen, int channel, int *x, int *y, int *w, int *h);

/**
 * @brief int glXQueryChannelRectSGIX(Display *display, int screen, int channel, int *dx, int *dy, int *dw, int *dh)
 */
GLE_API int glXQueryChannelRectSGIX(Display *display, int screen, int channel, int *dx, int *dy, int *dw, int *dh);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIX_video_source GLX_SGIX_video_source
 * Extension number in OpenGL registry : 43
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/video_source.txt
 * @ingroup g_GLX_SGIX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIX_video_source is supported.
 * @return Returns \c true if \b GLX_SGIX_video_source is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIX_video_source();



/**
 * @brief GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(Display *display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode)
 */
//GLE_API GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(Display *display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);

/**
 * @brief void glXDestroyGLXVideoSourceSGIX(Display *dpy, GLXVideoSourceSGIX glxvideosource)
 */
//GLE_API void glXDestroyGLXVideoSourceSGIX(Display *dpy, GLXVideoSourceSGIX glxvideosource);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGIX_visual_select_group GLX_SGIX_visual_select_group
 * Extension number in OpenGL registry : 234
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGIX/visual_select_group.txt
 * @ingroup g_GLX_SGIX g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGIX_visual_select_group is supported.
 * @return Returns \c true if \b GLX_SGIX_visual_select_group is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGIX_visual_select_group();


//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGI_cushion GLX_SGI_cushion
 * Extension number in OpenGL registry : 62
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGI/cushion.txt
 * @ingroup g_GLX_SGI g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGI_cushion is supported.
 * @return Returns \c true if \b GLX_SGI_cushion is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGI_cushion();



/**
 * @brief void glXCushionSGI(Display *dpy, Window window, float cushion)
 */
GLE_API void glXCushionSGI(Display *dpy, Window window, float cushion);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGI_make_current_read GLX_SGI_make_current_read
 * Extension number in OpenGL registry : 42
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGI/make_current_read.txt
 * @ingroup g_GLX_SGI g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGI_make_current_read is supported.
 * @return Returns \c true if \b GLX_SGI_make_current_read is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGI_make_current_read();



/**
 * @brief GLXDrawable glXGetCurrentReadDrawableSGI(void)
 */
GLE_API GLXDrawable glXGetCurrentReadDrawableSGI(void);

/**
 * @brief Bool glXMakeCurrentReadSGI(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
 */
GLE_API Bool glXMakeCurrentReadSGI(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGI_swap_control GLX_SGI_swap_control
 * Extension number in OpenGL registry : 40
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGI/swap_control.txt
 * @ingroup g_GLX_SGI g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGI_swap_control is supported.
 * @return Returns \c true if \b GLX_SGI_swap_control is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGI_swap_control();



/**
 * @brief int glXSwapIntervalSGI(int interval)
 */
GLE_API int glXSwapIntervalSGI(int interval);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SGI_video_sync GLX_SGI_video_sync
 * Extension number in OpenGL registry : 41
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SGI/video_sync.txt
 * @ingroup g_GLX_SGI g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SGI_video_sync is supported.
 * @return Returns \c true if \b GLX_SGI_video_sync is supported, \c false otherwise.
 */
GLE_API bool isGLX_SGI_video_sync();



/**
 * @brief int glXGetVideoSyncSGI(unsigned int *count)
 */
GLE_API int glXGetVideoSyncSGI(unsigned int *count);

/**
 * @brief int glXWaitVideoSyncSGI(int divisor, int remainder, unsigned int *count)
 */
GLE_API int glXWaitVideoSyncSGI(int divisor, int remainder, unsigned int *count);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_SUN_get_transparent_index GLX_SUN_get_transparent_index
 * Extension number in OpenGL registry : 183
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/specs/SUN/get_transparent_index.txt
 * @ingroup g_GLX_SUN g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_SUN_get_transparent_index is supported.
 * @return Returns \c true if \b GLX_SUN_get_transparent_index is supported, \c false otherwise.
 */
GLE_API bool isGLX_SUN_get_transparent_index();



/**
 * @brief Status glXGetTransparentIndexSUN(Display *dpy, Window overlay, Window underlay, long *pTransparentIndex)
 */
GLE_API Status glXGetTransparentIndexSUN(Display *dpy, Window overlay, Window underlay, long *pTransparentIndex);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_VERSION_1_3 GLX_VERSION_1_3
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_VERSION g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_VERSION_1_3 is supported.
 * @return Returns \c true if \b GLX_VERSION_1_3 is supported, \c false otherwise.
 */
GLE_API bool isGLX_VERSION_1_3();



/**
 * @brief GLXFBConfig * glXChooseFBConfig(Display *dpy, int screen, const int *attrib_list, int *nelements)
 */
GLE_API GLXFBConfig * glXChooseFBConfig(Display *dpy, int screen, const int *attrib_list, int *nelements);

/**
 * @brief GLXContext glXCreateNewContext(Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct)
 */
GLE_API GLXContext glXCreateNewContext(Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);

/**
 * @brief GLXPbuffer glXCreatePbuffer(Display *dpy, GLXFBConfig config, const int *attrib_list)
 */
GLE_API GLXPbuffer glXCreatePbuffer(Display *dpy, GLXFBConfig config, const int *attrib_list);

/**
 * @brief GLXPixmap glXCreatePixmap(Display *dpy, GLXFBConfig config, Pixmap pixmap, const int *attrib_list)
 */
GLE_API GLXPixmap glXCreatePixmap(Display *dpy, GLXFBConfig config, Pixmap pixmap, const int *attrib_list);

/**
 * @brief GLXWindow glXCreateWindow(Display *dpy, GLXFBConfig config, Window win, const int *attrib_list)
 */
GLE_API GLXWindow glXCreateWindow(Display *dpy, GLXFBConfig config, Window win, const int *attrib_list);

/**
 * @brief void glXDestroyPbuffer(Display *dpy, GLXPbuffer pbuf)
 */
GLE_API void glXDestroyPbuffer(Display *dpy, GLXPbuffer pbuf);

/**
 * @brief void glXDestroyPixmap(Display *dpy, GLXPixmap pixmap)
 */
GLE_API void glXDestroyPixmap(Display *dpy, GLXPixmap pixmap);

/**
 * @brief void glXDestroyWindow(Display *dpy, GLXWindow win)
 */
GLE_API void glXDestroyWindow(Display *dpy, GLXWindow win);

/**
 * @brief Display * glXGetCurrentDisplay(void)
 */
GLE_API Display * glXGetCurrentDisplay(void);

/**
 * @brief GLXDrawable glXGetCurrentReadDrawable(void)
 */
GLE_API GLXDrawable glXGetCurrentReadDrawable(void);

/**
 * @brief int glXGetFBConfigAttrib(Display *dpy, GLXFBConfig config, int attribute, int *value)
 */
GLE_API int glXGetFBConfigAttrib(Display *dpy, GLXFBConfig config, int attribute, int *value);

/**
 * @brief GLXFBConfig * glXGetFBConfigs(Display *dpy, int screen, int *nelements)
 */
GLE_API GLXFBConfig * glXGetFBConfigs(Display *dpy, int screen, int *nelements);

/**
 * @brief void glXGetSelectedEvent(Display *dpy, GLXDrawable draw, unsigned long *event_mask)
 */
GLE_API void glXGetSelectedEvent(Display *dpy, GLXDrawable draw, unsigned long *event_mask);

/**
 * @brief XVisualInfo * glXGetVisualFromFBConfig(Display *dpy, GLXFBConfig config)
 */
GLE_API XVisualInfo * glXGetVisualFromFBConfig(Display *dpy, GLXFBConfig config);

/**
 * @brief Bool glXMakeContextCurrent(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
 */
GLE_API Bool glXMakeContextCurrent(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);

/**
 * @brief int glXQueryContext(Display *dpy, GLXContext ctx, int attribute, int *value)
 */
GLE_API int glXQueryContext(Display *dpy, GLXContext ctx, int attribute, int *value);

/**
 * @brief void glXQueryDrawable(Display *dpy, GLXDrawable draw, int attribute, unsigned int *value)
 */
GLE_API void glXQueryDrawable(Display *dpy, GLXDrawable draw, int attribute, unsigned int *value);

/**
 * @brief void glXSelectEvent(Display *dpy, GLXDrawable draw, unsigned long event_mask)
 */
GLE_API void glXSelectEvent(Display *dpy, GLXDrawable draw, unsigned long event_mask);

//@}
#endif //POSIX



#ifdef POSIX
/**
 * @defgroup GLX_VERSION_1_4 GLX_VERSION_1_4
 * Extension number in OpenGL registry : NA
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/#
 * @ingroup g_GLX_VERSION g_extensions
 */
//@{

/**
 * @brief  Tests if \b GLX_VERSION_1_4 is supported.
 * @return Returns \c true if \b GLX_VERSION_1_4 is supported, \c false otherwise.
 */
GLE_API bool isGLX_VERSION_1_4();



/**
 * @brief __GLXextFuncPtr glXGetProcAddress(const GLubyte *procName)
 */
GLE_API __GLXextFuncPtr glXGetProcAddress(const GLubyte *procName);

//@}
#endif //POSIX


#endif // _GLE_WRAPPERGLXGEN_HPP