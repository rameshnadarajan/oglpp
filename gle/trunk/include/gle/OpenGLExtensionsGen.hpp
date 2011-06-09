// This file was generated at Thu, 09 Jun 2011 07:05:03 +0000 with gle, please do not modify.

// GLE - Copyright (C) 2004, 2005, 2007, 2008, 2009, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

// This file was generated using :
// /* glext.h last updated $Date: 2011-06-06 12:06:38 -0700 (Mon, 06 Jun 2011) $ */
// #define GL_GLEXT_VERSION 70
// /* glxext.h last updated 2010/08/06 */
// #define GLX_GLXEXT_VERSION 32
// /* wglext.h last updated 2011/04/13 */
// #define WGL_WGLEXT_VERSION 23

#ifndef _GLE_OPENGLEXTENSIONSGEN_HPP
#define _GLE_OPENGLEXTENSIONSGEN_HPP

#include <vector>

#include "gle/gle.hpp"
#include "gle/OpenGLExtensions.hpp"

/**
 * @addtogroup g_gle
 *
 * Some statistics about supported extensions :
 * - Stamp = Thu, 09 Jun 2011 07:05:03 +0000
 * - Number of tokens							= 0
 * - Number of functions						= 2157
 * - Number of extensions found(in headers)		= 518
 * - Number of extensions in OpenGL registry	= 483
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
	 * @name Initialization methods
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
	 * @brief Initialize the GLX_3DFX extension group.
	 */
	void initializeGLX_3DFX();

	/** 
	 * @brief Initialize the GLX_AMD extension group.
	 */
	void initializeGLX_AMD();

	/** 
	 * @brief Initialize the GLX_ARB extension group.
	 */
	void initializeGLX_ARB();

	/** 
	 * @brief Initialize the GLX_EXT extension group.
	 */
	void initializeGLX_EXT();

	/** 
	 * @brief Initialize the GLX_INTEL extension group.
	 */
	void initializeGLX_INTEL();

	/** 
	 * @brief Initialize the GLX_MESA extension group.
	 */
	void initializeGLX_MESA();

	/** 
	 * @brief Initialize the GLX_NV extension group.
	 */
	void initializeGLX_NV();

	/** 
	 * @brief Initialize the GLX_OML extension group.
	 */
	void initializeGLX_OML();

	/** 
	 * @brief Initialize the GLX_SGI extension group.
	 */
	void initializeGLX_SGI();

	/** 
	 * @brief Initialize the GLX_SGIS extension group.
	 */
	void initializeGLX_SGIS();

	/** 
	 * @brief Initialize the GLX_SGIX extension group.
	 */
	void initializeGLX_SGIX();

	/** 
	 * @brief Initialize the GLX_SUN extension group.
	 */
	void initializeGLX_SUN();

	/** 
	 * @brief Initialize the GLX_VERSION extension group.
	 */
	void initializeGLX_VERSION();

	/** 
	 * @brief Initialize the GL_3DFX extension group.
	 */
	void initializeGL_3DFX();

	/** 
	 * @brief Initialize the GL_AMD extension group.
	 */
	void initializeGL_AMD();

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
	 * @brief Initialize the GL_MESAX extension group.
	 */
	void initializeGL_MESAX();

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
	 * @brief Initialize the WGL_3DFX extension group.
	 */
	void initializeWGL_3DFX();

	/** 
	 * @brief Initialize the WGL_3DL extension group.
	 */
	void initializeWGL_3DL();

	/** 
	 * @brief Initialize the WGL_AMD extension group.
	 */
	void initializeWGL_AMD();

	/** 
	 * @brief Initialize the WGL_ARB extension group.
	 */
	void initializeWGL_ARB();

	/** 
	 * @brief Initialize the WGL_ATI extension group.
	 */
	void initializeWGL_ATI();

	/** 
	 * @brief Initialize the WGL_EXT extension group.
	 */
	void initializeWGL_EXT();

	/** 
	 * @brief Initialize the WGL_I3D extension group.
	 */
	void initializeWGL_I3D();

	/** 
	 * @brief Initialize the WGL_NV extension group.
	 */
	void initializeWGL_NV();

	/** 
	 * @brief Initialize the WGL_OML extension group.
	 */
	void initializeWGL_OML();






#ifdef POSIX
	// ****** GLX_3DFX_multisample ******

	/**
	 * @brief Returns \c true if \b GLX_3DFX_multisample is supported, false otherwise.
	 */
	bool isGLX_3DFX_multisample;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_AMD_gpu_association ******

	/**
	 * @brief Returns \c true if \b GLX_AMD_gpu_association is supported, false otherwise.
	 */
	bool isGLX_AMD_gpu_association;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_ARB_create_context ******

	/**
	 * @brief Returns \c true if \b GLX_ARB_create_context is supported, false otherwise.
	 */
	bool isGLX_ARB_create_context;


	/**
	 * @brief GLXContext glXCreateContextAttribsARB(Display *dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int *attrib_list)
	 */
	PFNGLXCREATECONTEXTATTRIBSARBPROC glXCreateContextAttribsARB;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_ARB_create_context_profile ******

	/**
	 * @brief Returns \c true if \b GLX_ARB_create_context_profile is supported, false otherwise.
	 */
	bool isGLX_ARB_create_context_profile;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_ARB_create_context_robustness ******

	/**
	 * @brief Returns \c true if \b GLX_ARB_create_context_robustness is supported, false otherwise.
	 */
	bool isGLX_ARB_create_context_robustness;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_ARB_fbconfig_float ******

	/**
	 * @brief Returns \c true if \b GLX_ARB_fbconfig_float is supported, false otherwise.
	 */
	bool isGLX_ARB_fbconfig_float;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_ARB_framebuffer_sRGB ******

	/**
	 * @brief Returns \c true if \b GLX_ARB_framebuffer_sRGB is supported, false otherwise.
	 */
	bool isGLX_ARB_framebuffer_sRGB;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_ARB_get_proc_address ******

	/**
	 * @brief Returns \c true if \b GLX_ARB_get_proc_address is supported, false otherwise.
	 */
	bool isGLX_ARB_get_proc_address;


	/**
	 * @brief __GLXextFuncPtr glXGetProcAddressARB(const GLubyte *procName)
	 */
	PFNGLXGETPROCADDRESSARBPROC glXGetProcAddressARB;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_ARB_multisample ******

	/**
	 * @brief Returns \c true if \b GLX_ARB_multisample is supported, false otherwise.
	 */
	bool isGLX_ARB_multisample;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_ARB_vertex_buffer_object ******

	/**
	 * @brief Returns \c true if \b GLX_ARB_vertex_buffer_object is supported, false otherwise.
	 */
	bool isGLX_ARB_vertex_buffer_object;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_EXT_create_context_es2_profile ******

	/**
	 * @brief Returns \c true if \b GLX_EXT_create_context_es2_profile is supported, false otherwise.
	 */
	bool isGLX_EXT_create_context_es2_profile;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_EXT_fbconfig_packed_float ******

	/**
	 * @brief Returns \c true if \b GLX_EXT_fbconfig_packed_float is supported, false otherwise.
	 */
	bool isGLX_EXT_fbconfig_packed_float;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_EXT_framebuffer_sRGB ******

	/**
	 * @brief Returns \c true if \b GLX_EXT_framebuffer_sRGB is supported, false otherwise.
	 */
	bool isGLX_EXT_framebuffer_sRGB;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_EXT_import_context ******

	/**
	 * @brief Returns \c true if \b GLX_EXT_import_context is supported, false otherwise.
	 */
	bool isGLX_EXT_import_context;


	/**
	 * @brief void glXFreeContextEXT(Display *dpy, GLXContext context)
	 */
	PFNGLXFREECONTEXTEXTPROC glXFreeContextEXT;

	/**
	 * @brief GLXContextID glXGetContextIDEXT(const GLXContext context)
	 */
	PFNGLXGETCONTEXTIDEXTPROC glXGetContextIDEXT;

	/**
	 * @brief Display * glXGetCurrentDisplayEXT(void)
	 */
	PFNGLXGETCURRENTDISPLAYEXTPROC glXGetCurrentDisplayEXT;

	/**
	 * @brief GLXContext glXImportContextEXT(Display *dpy, GLXContextID contextID)
	 */
	PFNGLXIMPORTCONTEXTEXTPROC glXImportContextEXT;

	/**
	 * @brief int glXQueryContextInfoEXT(Display *dpy, GLXContext context, int attribute, int *value)
	 */
	PFNGLXQUERYCONTEXTINFOEXTPROC glXQueryContextInfoEXT;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_EXT_swap_control ******

	/**
	 * @brief Returns \c true if \b GLX_EXT_swap_control is supported, false otherwise.
	 */
	bool isGLX_EXT_swap_control;


	/**
	 * @brief int glXSwapIntervalEXT(Display *dpy, GLXDrawable drawable, int interval)
	 */
	PFNGLXSWAPINTERVALEXTPROC glXSwapIntervalEXT;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_EXT_texture_from_pixmap ******

	/**
	 * @brief Returns \c true if \b GLX_EXT_texture_from_pixmap is supported, false otherwise.
	 */
	bool isGLX_EXT_texture_from_pixmap;


	/**
	 * @brief void glXBindTexImageEXT(Display *dpy, GLXDrawable drawable, int buffer, const int *attrib_list)
	 */
	PFNGLXBINDTEXIMAGEEXTPROC glXBindTexImageEXT;

	/**
	 * @brief void glXReleaseTexImageEXT(Display *dpy, GLXDrawable drawable, int buffer)
	 */
	PFNGLXRELEASETEXIMAGEEXTPROC glXReleaseTexImageEXT;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_EXT_visual_info ******

	/**
	 * @brief Returns \c true if \b GLX_EXT_visual_info is supported, false otherwise.
	 */
	bool isGLX_EXT_visual_info;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_EXT_visual_rating ******

	/**
	 * @brief Returns \c true if \b GLX_EXT_visual_rating is supported, false otherwise.
	 */
	bool isGLX_EXT_visual_rating;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_INTEL_swap_event ******

	/**
	 * @brief Returns \c true if \b GLX_INTEL_swap_event is supported, false otherwise.
	 */
	bool isGLX_INTEL_swap_event;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_MESA_agp_offset ******

	/**
	 * @brief Returns \c true if \b GLX_MESA_agp_offset is supported, false otherwise.
	 */
	bool isGLX_MESA_agp_offset;


	/**
	 * @brief unsigned int glXGetAGPOffsetMESA(const void *pointer)
	 */
	PFNGLXGETAGPOFFSETMESAPROC glXGetAGPOffsetMESA;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_MESA_copy_sub_buffer ******

	/**
	 * @brief Returns \c true if \b GLX_MESA_copy_sub_buffer is supported, false otherwise.
	 */
	bool isGLX_MESA_copy_sub_buffer;


	/**
	 * @brief void glXCopySubBufferMESA(Display *dpy, GLXDrawable drawable, int x, int y, int width, int height)
	 */
	PFNGLXCOPYSUBBUFFERMESAPROC glXCopySubBufferMESA;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_MESA_pixmap_colormap ******

	/**
	 * @brief Returns \c true if \b GLX_MESA_pixmap_colormap is supported, false otherwise.
	 */
	bool isGLX_MESA_pixmap_colormap;


	/**
	 * @brief GLXPixmap glXCreateGLXPixmapMESA(Display *dpy, XVisualInfo *visual, Pixmap pixmap, Colormap cmap)
	 */
	PFNGLXCREATEGLXPIXMAPMESAPROC glXCreateGLXPixmapMESA;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_MESA_release_buffers ******

	/**
	 * @brief Returns \c true if \b GLX_MESA_release_buffers is supported, false otherwise.
	 */
	bool isGLX_MESA_release_buffers;


	/**
	 * @brief Bool glXReleaseBuffersMESA(Display *dpy, GLXDrawable drawable)
	 */
	PFNGLXRELEASEBUFFERSMESAPROC glXReleaseBuffersMESA;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_MESA_set_3dfx_mode ******

	/**
	 * @brief Returns \c true if \b GLX_MESA_set_3dfx_mode is supported, false otherwise.
	 */
	bool isGLX_MESA_set_3dfx_mode;


	/**
	 * @brief Bool glXSet3DfxModeMESA(int mode)
	 */
	PFNGLXSET3DFXMODEMESAPROC glXSet3DfxModeMESA;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_NV_copy_image ******

	/**
	 * @brief Returns \c true if \b GLX_NV_copy_image is supported, false otherwise.
	 */
	bool isGLX_NV_copy_image;


	/**
	 * @brief void glXCopyImageSubDataNV(Display *dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
	 */
	PFNGLXCOPYIMAGESUBDATANVPROC glXCopyImageSubDataNV;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_NV_float_buffer ******

	/**
	 * @brief Returns \c true if \b GLX_NV_float_buffer is supported, false otherwise.
	 */
	bool isGLX_NV_float_buffer;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_NV_multisample_coverage ******

	/**
	 * @brief Returns \c true if \b GLX_NV_multisample_coverage is supported, false otherwise.
	 */
	bool isGLX_NV_multisample_coverage;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_NV_present_video ******

	/**
	 * @brief Returns \c true if \b GLX_NV_present_video is supported, false otherwise.
	 */
	bool isGLX_NV_present_video;


	/**
	 * @brief int glXBindVideoDeviceNV(Display *dpy, unsigned int video_slot, unsigned int video_device, const int *attrib_list)
	 */
	PFNGLXBINDVIDEODEVICENVPROC glXBindVideoDeviceNV;

	/**
	 * @brief unsigned int * glXEnumerateVideoDevicesNV(Display *dpy, int screen, int *nelements)
	 */
	PFNGLXENUMERATEVIDEODEVICESNVPROC glXEnumerateVideoDevicesNV;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_NV_swap_group ******

	/**
	 * @brief Returns \c true if \b GLX_NV_swap_group is supported, false otherwise.
	 */
	bool isGLX_NV_swap_group;


	/**
	 * @brief Bool glXBindSwapBarrierNV(Display *dpy, GLuint group, GLuint barrier)
	 */
	PFNGLXBINDSWAPBARRIERNVPROC glXBindSwapBarrierNV;

	/**
	 * @brief Bool glXJoinSwapGroupNV(Display *dpy, GLXDrawable drawable, GLuint group)
	 */
	PFNGLXJOINSWAPGROUPNVPROC glXJoinSwapGroupNV;

	/**
	 * @brief Bool glXQueryFrameCountNV(Display *dpy, int screen, GLuint *count)
	 */
	PFNGLXQUERYFRAMECOUNTNVPROC glXQueryFrameCountNV;

	/**
	 * @brief Bool glXQueryMaxSwapGroupsNV(Display *dpy, int screen, GLuint *maxGroups, GLuint *maxBarriers)
	 */
	PFNGLXQUERYMAXSWAPGROUPSNVPROC glXQueryMaxSwapGroupsNV;

	/**
	 * @brief Bool glXQuerySwapGroupNV(Display *dpy, GLXDrawable drawable, GLuint *group, GLuint *barrier)
	 */
	PFNGLXQUERYSWAPGROUPNVPROC glXQuerySwapGroupNV;

	/**
	 * @brief Bool glXResetFrameCountNV(Display *dpy, int screen)
	 */
	PFNGLXRESETFRAMECOUNTNVPROC glXResetFrameCountNV;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_NV_video_capture ******

	/**
	 * @brief Returns \c true if \b GLX_NV_video_capture is supported, false otherwise.
	 */
	bool isGLX_NV_video_capture;


	/**
	 * @brief int glXBindVideoCaptureDeviceNV(Display *dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device)
	 */
	PFNGLXBINDVIDEOCAPTUREDEVICENVPROC glXBindVideoCaptureDeviceNV;

	/**
	 * @brief GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV(Display *dpy, int screen, int *nelements)
	 */
	PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC glXEnumerateVideoCaptureDevicesNV;

	/**
	 * @brief void glXLockVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device)
	 */
	PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC glXLockVideoCaptureDeviceNV;

	/**
	 * @brief int glXQueryVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device, int attribute, int *value)
	 */
	PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC glXQueryVideoCaptureDeviceNV;

	/**
	 * @brief void glXReleaseVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device)
	 */
	PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC glXReleaseVideoCaptureDeviceNV;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_NV_video_out ******

	/**
	 * @brief Returns \c true if \b GLX_NV_video_out is supported, false otherwise.
	 */
	bool isGLX_NV_video_out;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_NV_video_output ******

	/**
	 * @brief Returns \c true if \b GLX_NV_video_output is supported, false otherwise.
	 */
	bool isGLX_NV_video_output;


	/**
	 * @brief int glXBindVideoImageNV(Display *dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer)
	 */
	PFNGLXBINDVIDEOIMAGENVPROC glXBindVideoImageNV;

	/**
	 * @brief int glXGetVideoDeviceNV(Display *dpy, int screen, int numVideoDevices, GLXVideoDeviceNV *pVideoDevice)
	 */
	PFNGLXGETVIDEODEVICENVPROC glXGetVideoDeviceNV;

	/**
	 * @brief int glXGetVideoInfoNV(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo)
	 */
	PFNGLXGETVIDEOINFONVPROC glXGetVideoInfoNV;

	/**
	 * @brief int glXReleaseVideoDeviceNV(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice)
	 */
	PFNGLXRELEASEVIDEODEVICENVPROC glXReleaseVideoDeviceNV;

	/**
	 * @brief int glXReleaseVideoImageNV(Display *dpy, GLXPbuffer pbuf)
	 */
	PFNGLXRELEASEVIDEOIMAGENVPROC glXReleaseVideoImageNV;

	/**
	 * @brief int glXSendPbufferToVideoNV(Display *dpy, GLXPbuffer pbuf, int iBufferType, unsigned long *pulCounterPbuffer, GLboolean bBlock)
	 */
	PFNGLXSENDPBUFFERTOVIDEONVPROC glXSendPbufferToVideoNV;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_OML_swap_method ******

	/**
	 * @brief Returns \c true if \b GLX_OML_swap_method is supported, false otherwise.
	 */
	bool isGLX_OML_swap_method;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_OML_sync_control ******

	/**
	 * @brief Returns \c true if \b GLX_OML_sync_control is supported, false otherwise.
	 */
	bool isGLX_OML_sync_control;


	/**
	 * @brief Bool glXGetMscRateOML(Display *dpy, GLXDrawable drawable, int32_t *numerator, int32_t *denominator)
	 */
	PFNGLXGETMSCRATEOMLPROC glXGetMscRateOML;

	/**
	 * @brief Bool glXGetSyncValuesOML(Display *dpy, GLXDrawable drawable, int64_t *ust, int64_t *msc, int64_t *sbc)
	 */
	PFNGLXGETSYNCVALUESOMLPROC glXGetSyncValuesOML;

	/**
	 * @brief int64_t glXSwapBuffersMscOML(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder)
	 */
	PFNGLXSWAPBUFFERSMSCOMLPROC glXSwapBuffersMscOML;

	/**
	 * @brief Bool glXWaitForMscOML(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t *ust, int64_t *msc, int64_t *sbc)
	 */
	PFNGLXWAITFORMSCOMLPROC glXWaitForMscOML;

	/**
	 * @brief Bool glXWaitForSbcOML(Display *dpy, GLXDrawable drawable, int64_t target_sbc, int64_t *ust, int64_t *msc, int64_t *sbc)
	 */
	PFNGLXWAITFORSBCOMLPROC glXWaitForSbcOML;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIS_blended_overlay ******

	/**
	 * @brief Returns \c true if \b GLX_SGIS_blended_overlay is supported, false otherwise.
	 */
	bool isGLX_SGIS_blended_overlay;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIS_multisample ******

	/**
	 * @brief Returns \c true if \b GLX_SGIS_multisample is supported, false otherwise.
	 */
	bool isGLX_SGIS_multisample;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIS_shared_multisample ******

	/**
	 * @brief Returns \c true if \b GLX_SGIS_shared_multisample is supported, false otherwise.
	 */
	bool isGLX_SGIS_shared_multisample;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIX_dmbuffer ******

	/**
	 * @brief Returns \c true if \b GLX_SGIX_dmbuffer is supported, false otherwise.
	 */
	bool isGLX_SGIX_dmbuffer;


	/**
	 * @brief Bool glXAssociateDMPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuffer, DMparams *params, DMbuffer dmbuffer)
	 */
	PFNGLXASSOCIATEDMPBUFFERSGIXPROC glXAssociateDMPbufferSGIX;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIX_fbconfig ******

	/**
	 * @brief Returns \c true if \b GLX_SGIX_fbconfig is supported, false otherwise.
	 */
	bool isGLX_SGIX_fbconfig;


	/**
	 * @brief GLXFBConfigSGIX * glXChooseFBConfigSGIX(Display *dpy, int screen, int *attrib_list, int *nelements)
	 */
	PFNGLXCHOOSEFBCONFIGSGIXPROC glXChooseFBConfigSGIX;

	/**
	 * @brief GLXContext glXCreateContextWithConfigSGIX(Display *dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct)
	 */
	PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC glXCreateContextWithConfigSGIX;

	/**
	 * @brief GLXPixmap glXCreateGLXPixmapWithConfigSGIX(Display *dpy, GLXFBConfigSGIX config, Pixmap pixmap)
	 */
	PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC glXCreateGLXPixmapWithConfigSGIX;

	/**
	 * @brief int glXGetFBConfigAttribSGIX(Display *dpy, GLXFBConfigSGIX config, int attribute, int *value)
	 */
	PFNGLXGETFBCONFIGATTRIBSGIXPROC glXGetFBConfigAttribSGIX;

	/**
	 * @brief GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX(Display *dpy, XVisualInfo *vis)
	 */
	PFNGLXGETFBCONFIGFROMVISUALSGIXPROC glXGetFBConfigFromVisualSGIX;

	/**
	 * @brief XVisualInfo * glXGetVisualFromFBConfigSGIX(Display *dpy, GLXFBConfigSGIX config)
	 */
	PFNGLXGETVISUALFROMFBCONFIGSGIXPROC glXGetVisualFromFBConfigSGIX;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIX_hyperpipe ******

	/**
	 * @brief Returns \c true if \b GLX_SGIX_hyperpipe is supported, false otherwise.
	 */
	bool isGLX_SGIX_hyperpipe;


	/**
	 * @brief int glXBindHyperpipeSGIX(Display *dpy, int hpId)
	 */
	PFNGLXBINDHYPERPIPESGIXPROC glXBindHyperpipeSGIX;

	/**
	 * @brief int glXDestroyHyperpipeConfigSGIX(Display *dpy, int hpId)
	 */
	PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC glXDestroyHyperpipeConfigSGIX;

	/**
	 * @brief int glXHyperpipeAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *attribList)
	 */
	PFNGLXHYPERPIPEATTRIBSGIXPROC glXHyperpipeAttribSGIX;

	/**
	 * @brief int glXHyperpipeConfigSGIX(Display *dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX *cfg, int *hpId)
	 */
	PFNGLXHYPERPIPECONFIGSGIXPROC glXHyperpipeConfigSGIX;

	/**
	 * @brief int glXQueryHyperpipeAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *returnAttribList)
	 */
	PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC glXQueryHyperpipeAttribSGIX;

	/**
	 * @brief int glXQueryHyperpipeBestAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *attribList, void *returnAttribList)
	 */
	PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC glXQueryHyperpipeBestAttribSGIX;

	/**
	 * @brief GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX(Display *dpy, int hpId, int *npipes)
	 */
	PFNGLXQUERYHYPERPIPECONFIGSGIXPROC glXQueryHyperpipeConfigSGIX;

	/**
	 * @brief GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX(Display *dpy, int *npipes)
	 */
	PFNGLXQUERYHYPERPIPENETWORKSGIXPROC glXQueryHyperpipeNetworkSGIX;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIX_pbuffer ******

	/**
	 * @brief Returns \c true if \b GLX_SGIX_pbuffer is supported, false otherwise.
	 */
	bool isGLX_SGIX_pbuffer;


	/**
	 * @brief GLXPbufferSGIX glXCreateGLXPbufferSGIX(Display *dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int *attrib_list)
	 */
	PFNGLXCREATEGLXPBUFFERSGIXPROC glXCreateGLXPbufferSGIX;

	/**
	 * @brief void glXDestroyGLXPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuf)
	 */
	PFNGLXDESTROYGLXPBUFFERSGIXPROC glXDestroyGLXPbufferSGIX;

	/**
	 * @brief void glXGetSelectedEventSGIX(Display *dpy, GLXDrawable drawable, unsigned long *mask)
	 */
	PFNGLXGETSELECTEDEVENTSGIXPROC glXGetSelectedEventSGIX;

	/**
	 * @brief int glXQueryGLXPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int *value)
	 */
	PFNGLXQUERYGLXPBUFFERSGIXPROC glXQueryGLXPbufferSGIX;

	/**
	 * @brief void glXSelectEventSGIX(Display *dpy, GLXDrawable drawable, unsigned long mask)
	 */
	PFNGLXSELECTEVENTSGIXPROC glXSelectEventSGIX;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIX_swap_barrier ******

	/**
	 * @brief Returns \c true if \b GLX_SGIX_swap_barrier is supported, false otherwise.
	 */
	bool isGLX_SGIX_swap_barrier;


	/**
	 * @brief void glXBindSwapBarrierSGIX(Display *dpy, GLXDrawable drawable, int barrier)
	 */
	PFNGLXBINDSWAPBARRIERSGIXPROC glXBindSwapBarrierSGIX;

	/**
	 * @brief Bool glXQueryMaxSwapBarriersSGIX(Display *dpy, int screen, int *max)
	 */
	PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC glXQueryMaxSwapBarriersSGIX;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIX_swap_group ******

	/**
	 * @brief Returns \c true if \b GLX_SGIX_swap_group is supported, false otherwise.
	 */
	bool isGLX_SGIX_swap_group;


	/**
	 * @brief void glXJoinSwapGroupSGIX(Display *dpy, GLXDrawable drawable, GLXDrawable member)
	 */
	PFNGLXJOINSWAPGROUPSGIXPROC glXJoinSwapGroupSGIX;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIX_video_resize ******

	/**
	 * @brief Returns \c true if \b GLX_SGIX_video_resize is supported, false otherwise.
	 */
	bool isGLX_SGIX_video_resize;


	/**
	 * @brief int glXBindChannelToWindowSGIX(Display *display, int screen, int channel, Window window)
	 */
	PFNGLXBINDCHANNELTOWINDOWSGIXPROC glXBindChannelToWindowSGIX;

	/**
	 * @brief int glXChannelRectSGIX(Display *display, int screen, int channel, int x, int y, int w, int h)
	 */
	PFNGLXCHANNELRECTSGIXPROC glXChannelRectSGIX;

	/**
	 * @brief int glXChannelRectSyncSGIX(Display *display, int screen, int channel, GLenum synctype)
	 */
	PFNGLXCHANNELRECTSYNCSGIXPROC glXChannelRectSyncSGIX;

	/**
	 * @brief int glXQueryChannelDeltasSGIX(Display *display, int screen, int channel, int *x, int *y, int *w, int *h)
	 */
	PFNGLXQUERYCHANNELDELTASSGIXPROC glXQueryChannelDeltasSGIX;

	/**
	 * @brief int glXQueryChannelRectSGIX(Display *display, int screen, int channel, int *dx, int *dy, int *dw, int *dh)
	 */
	PFNGLXQUERYCHANNELRECTSGIXPROC glXQueryChannelRectSGIX;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIX_video_source ******

	/**
	 * @brief Returns \c true if \b GLX_SGIX_video_source is supported, false otherwise.
	 */
	bool isGLX_SGIX_video_source;


	/**
	 * @brief GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(Display *display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode)
	 */
	PFNGLXCREATEGLXVIDEOSOURCESGIXPROC glXCreateGLXVideoSourceSGIX;

	/**
	 * @brief void glXDestroyGLXVideoSourceSGIX(Display *dpy, GLXVideoSourceSGIX glxvideosource)
	 */
	PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC glXDestroyGLXVideoSourceSGIX;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGIX_visual_select_group ******

	/**
	 * @brief Returns \c true if \b GLX_SGIX_visual_select_group is supported, false otherwise.
	 */
	bool isGLX_SGIX_visual_select_group;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGI_cushion ******

	/**
	 * @brief Returns \c true if \b GLX_SGI_cushion is supported, false otherwise.
	 */
	bool isGLX_SGI_cushion;


	/**
	 * @brief void glXCushionSGI(Display *dpy, Window window, float cushion)
	 */
	PFNGLXCUSHIONSGIPROC glXCushionSGI;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGI_make_current_read ******

	/**
	 * @brief Returns \c true if \b GLX_SGI_make_current_read is supported, false otherwise.
	 */
	bool isGLX_SGI_make_current_read;


	/**
	 * @brief GLXDrawable glXGetCurrentReadDrawableSGI(void)
	 */
	PFNGLXGETCURRENTREADDRAWABLESGIPROC glXGetCurrentReadDrawableSGI;

	/**
	 * @brief Bool glXMakeCurrentReadSGI(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
	 */
	PFNGLXMAKECURRENTREADSGIPROC glXMakeCurrentReadSGI;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGI_swap_control ******

	/**
	 * @brief Returns \c true if \b GLX_SGI_swap_control is supported, false otherwise.
	 */
	bool isGLX_SGI_swap_control;


	/**
	 * @brief int glXSwapIntervalSGI(int interval)
	 */
	PFNGLXSWAPINTERVALSGIPROC glXSwapIntervalSGI;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SGI_video_sync ******

	/**
	 * @brief Returns \c true if \b GLX_SGI_video_sync is supported, false otherwise.
	 */
	bool isGLX_SGI_video_sync;


	/**
	 * @brief int glXGetVideoSyncSGI(unsigned int *count)
	 */
	PFNGLXGETVIDEOSYNCSGIPROC glXGetVideoSyncSGI;

	/**
	 * @brief int glXWaitVideoSyncSGI(int divisor, int remainder, unsigned int *count)
	 */
	PFNGLXWAITVIDEOSYNCSGIPROC glXWaitVideoSyncSGI;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_SUN_get_transparent_index ******

	/**
	 * @brief Returns \c true if \b GLX_SUN_get_transparent_index is supported, false otherwise.
	 */
	bool isGLX_SUN_get_transparent_index;


	/**
	 * @brief Status glXGetTransparentIndexSUN(Display *dpy, Window overlay, Window underlay, long *pTransparentIndex)
	 */
	PFNGLXGETTRANSPARENTINDEXSUNPROC glXGetTransparentIndexSUN;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_VERSION_1_3 ******

	/**
	 * @brief Returns \c true if \b GLX_VERSION_1_3 is supported, false otherwise.
	 */
	bool isGLX_VERSION_1_3;


	/**
	 * @brief GLXFBConfig * glXChooseFBConfig(Display *dpy, int screen, const int *attrib_list, int *nelements)
	 */
	PFNGLXCHOOSEFBCONFIGPROC glXChooseFBConfig;

	/**
	 * @brief GLXContext glXCreateNewContext(Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct)
	 */
	PFNGLXCREATENEWCONTEXTPROC glXCreateNewContext;

	/**
	 * @brief GLXPbuffer glXCreatePbuffer(Display *dpy, GLXFBConfig config, const int *attrib_list)
	 */
	PFNGLXCREATEPBUFFERPROC glXCreatePbuffer;

	/**
	 * @brief GLXPixmap glXCreatePixmap(Display *dpy, GLXFBConfig config, Pixmap pixmap, const int *attrib_list)
	 */
	PFNGLXCREATEPIXMAPPROC glXCreatePixmap;

	/**
	 * @brief GLXWindow glXCreateWindow(Display *dpy, GLXFBConfig config, Window win, const int *attrib_list)
	 */
	PFNGLXCREATEWINDOWPROC glXCreateWindow;

	/**
	 * @brief void glXDestroyPbuffer(Display *dpy, GLXPbuffer pbuf)
	 */
	PFNGLXDESTROYPBUFFERPROC glXDestroyPbuffer;

	/**
	 * @brief void glXDestroyPixmap(Display *dpy, GLXPixmap pixmap)
	 */
	PFNGLXDESTROYPIXMAPPROC glXDestroyPixmap;

	/**
	 * @brief void glXDestroyWindow(Display *dpy, GLXWindow win)
	 */
	PFNGLXDESTROYWINDOWPROC glXDestroyWindow;

	/**
	 * @brief Display * glXGetCurrentDisplay(void)
	 */
	PFNGLXGETCURRENTDISPLAYPROC glXGetCurrentDisplay;

	/**
	 * @brief GLXDrawable glXGetCurrentReadDrawable(void)
	 */
	PFNGLXGETCURRENTREADDRAWABLEPROC glXGetCurrentReadDrawable;

	/**
	 * @brief int glXGetFBConfigAttrib(Display *dpy, GLXFBConfig config, int attribute, int *value)
	 */
	PFNGLXGETFBCONFIGATTRIBPROC glXGetFBConfigAttrib;

	/**
	 * @brief GLXFBConfig * glXGetFBConfigs(Display *dpy, int screen, int *nelements)
	 */
	PFNGLXGETFBCONFIGSPROC glXGetFBConfigs;

	/**
	 * @brief void glXGetSelectedEvent(Display *dpy, GLXDrawable draw, unsigned long *event_mask)
	 */
	PFNGLXGETSELECTEDEVENTPROC glXGetSelectedEvent;

	/**
	 * @brief XVisualInfo * glXGetVisualFromFBConfig(Display *dpy, GLXFBConfig config)
	 */
	PFNGLXGETVISUALFROMFBCONFIGPROC glXGetVisualFromFBConfig;

	/**
	 * @brief Bool glXMakeContextCurrent(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
	 */
	PFNGLXMAKECONTEXTCURRENTPROC glXMakeContextCurrent;

	/**
	 * @brief int glXQueryContext(Display *dpy, GLXContext ctx, int attribute, int *value)
	 */
	PFNGLXQUERYCONTEXTPROC glXQueryContext;

	/**
	 * @brief void glXQueryDrawable(Display *dpy, GLXDrawable draw, int attribute, unsigned int *value)
	 */
	PFNGLXQUERYDRAWABLEPROC glXQueryDrawable;

	/**
	 * @brief void glXSelectEvent(Display *dpy, GLXDrawable draw, unsigned long event_mask)
	 */
	PFNGLXSELECTEVENTPROC glXSelectEvent;
#endif //POSIX



#ifdef POSIX
	// ****** GLX_VERSION_1_4 ******

	/**
	 * @brief Returns \c true if \b GLX_VERSION_1_4 is supported, false otherwise.
	 */
	bool isGLX_VERSION_1_4;


	/**
	 * @brief __GLXextFuncPtr glXGetProcAddress(const GLubyte *procName)
	 */
	PFNGLXGETPROCADDRESSPROC glXGetProcAddress;
#endif //POSIX




	// ****** GL_3DFX_multisample ******

	/**
	 * @brief Returns \c true if \b GL_3DFX_multisample is supported, false otherwise.
	 */
	bool isGL_3DFX_multisample;




	// ****** GL_3DFX_tbuffer ******

	/**
	 * @brief Returns \c true if \b GL_3DFX_tbuffer is supported, false otherwise.
	 */
	bool isGL_3DFX_tbuffer;


	/**
	 * @brief void glTbufferMask3DFX(GLuint mask)
	 */
	PFNGLTBUFFERMASK3DFXPROC glTbufferMask3DFX;




	// ****** GL_3DFX_texture_compression_FXT1 ******

	/**
	 * @brief Returns \c true if \b GL_3DFX_texture_compression_FXT1 is supported, false otherwise.
	 */
	bool isGL_3DFX_texture_compression_FXT1;




	// ****** GL_AMD_blend_minmax_factor ******

	/**
	 * @brief Returns \c true if \b GL_AMD_blend_minmax_factor is supported, false otherwise.
	 */
	bool isGL_AMD_blend_minmax_factor;




	// ****** GL_AMD_conservative_depth ******

	/**
	 * @brief Returns \c true if \b GL_AMD_conservative_depth is supported, false otherwise.
	 */
	bool isGL_AMD_conservative_depth;




	// ****** GL_AMD_debug_output ******

	/**
	 * @brief Returns \c true if \b GL_AMD_debug_output is supported, false otherwise.
	 */
	bool isGL_AMD_debug_output;


	/**
	 * @brief void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, GLvoid *userParam)
	 */
	PFNGLDEBUGMESSAGECALLBACKAMDPROC glDebugMessageCallbackAMD;

	/**
	 * @brief void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled)
	 */
	PFNGLDEBUGMESSAGEENABLEAMDPROC glDebugMessageEnableAMD;

	/**
	 * @brief void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar *buf)
	 */
	PFNGLDEBUGMESSAGEINSERTAMDPROC glDebugMessageInsertAMD;

	/**
	 * @brief GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum *categories, GLuint *severities, GLuint *ids, GLsizei *lengths, GLchar *message)
	 */
	PFNGLGETDEBUGMESSAGELOGAMDPROC glGetDebugMessageLogAMD;




	// ****** GL_AMD_depth_clamp_separate ******

	/**
	 * @brief Returns \c true if \b GL_AMD_depth_clamp_separate is supported, false otherwise.
	 */
	bool isGL_AMD_depth_clamp_separate;




	// ****** GL_AMD_draw_buffers_blend ******

	/**
	 * @brief Returns \c true if \b GL_AMD_draw_buffers_blend is supported, false otherwise.
	 */
	bool isGL_AMD_draw_buffers_blend;


	/**
	 * @brief void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
	 */
	PFNGLBLENDEQUATIONINDEXEDAMDPROC glBlendEquationIndexedAMD;

	/**
	 * @brief void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
	 */
	PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC glBlendEquationSeparateIndexedAMD;

	/**
	 * @brief void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
	 */
	PFNGLBLENDFUNCINDEXEDAMDPROC glBlendFuncIndexedAMD;

	/**
	 * @brief void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
	 */
	PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC glBlendFuncSeparateIndexedAMD;




	// ****** GL_AMD_multi_draw_indirect ******

	/**
	 * @brief Returns \c true if \b GL_AMD_multi_draw_indirect is supported, false otherwise.
	 */
	bool isGL_AMD_multi_draw_indirect;


	/**
	 * @brief void glMultiDrawArraysIndirectAMD(GLenum mode, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
	 */
	PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC glMultiDrawArraysIndirectAMD;

	/**
	 * @brief void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
	 */
	PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC glMultiDrawElementsIndirectAMD;




	// ****** GL_AMD_name_gen_delete ******

	/**
	 * @brief Returns \c true if \b GL_AMD_name_gen_delete is supported, false otherwise.
	 */
	bool isGL_AMD_name_gen_delete;


	/**
	 * @brief void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint *names)
	 */
	PFNGLDELETENAMESAMDPROC glDeleteNamesAMD;

	/**
	 * @brief void glGenNamesAMD(GLenum identifier, GLuint num, GLuint *names)
	 */
	PFNGLGENNAMESAMDPROC glGenNamesAMD;

	/**
	 * @brief GLboolean glIsNameAMD(GLenum identifier, GLuint name)
	 */
	PFNGLISNAMEAMDPROC glIsNameAMD;




	// ****** GL_AMD_performance_monitor ******

	/**
	 * @brief Returns \c true if \b GL_AMD_performance_monitor is supported, false otherwise.
	 */
	bool isGL_AMD_performance_monitor;


	/**
	 * @brief void glBeginPerfMonitorAMD(GLuint monitor)
	 */
	PFNGLBEGINPERFMONITORAMDPROC glBeginPerfMonitorAMD;

	/**
	 * @brief void glDeletePerfMonitorsAMD(GLsizei n, GLuint *monitors)
	 */
	PFNGLDELETEPERFMONITORSAMDPROC glDeletePerfMonitorsAMD;

	/**
	 * @brief void glEndPerfMonitorAMD(GLuint monitor)
	 */
	PFNGLENDPERFMONITORAMDPROC glEndPerfMonitorAMD;

	/**
	 * @brief void glGenPerfMonitorsAMD(GLsizei n, GLuint *monitors)
	 */
	PFNGLGENPERFMONITORSAMDPROC glGenPerfMonitorsAMD;

	/**
	 * @brief void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten)
	 */
	PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glGetPerfMonitorCounterDataAMD;

	/**
	 * @brief void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, GLvoid *data)
	 */
	PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glGetPerfMonitorCounterInfoAMD;

	/**
	 * @brief void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString)
	 */
	PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD;

	/**
	 * @brief void glGetPerfMonitorCountersAMD(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters)
	 */
	PFNGLGETPERFMONITORCOUNTERSAMDPROC glGetPerfMonitorCountersAMD;

	/**
	 * @brief void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString)
	 */
	PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glGetPerfMonitorGroupStringAMD;

	/**
	 * @brief void glGetPerfMonitorGroupsAMD(GLint *numGroups, GLsizei groupsSize, GLuint *groups)
	 */
	PFNGLGETPERFMONITORGROUPSAMDPROC glGetPerfMonitorGroupsAMD;

	/**
	 * @brief void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList)
	 */
	PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glSelectPerfMonitorCountersAMD;




	// ****** GL_AMD_sample_positions ******

	/**
	 * @brief Returns \c true if \b GL_AMD_sample_positions is supported, false otherwise.
	 */
	bool isGL_AMD_sample_positions;


	/**
	 * @brief void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat *val)
	 */
	PFNGLSETMULTISAMPLEFVAMDPROC glSetMultisamplefvAMD;




	// ****** GL_AMD_seamless_cubemap_per_texture ******

	/**
	 * @brief Returns \c true if \b GL_AMD_seamless_cubemap_per_texture is supported, false otherwise.
	 */
	bool isGL_AMD_seamless_cubemap_per_texture;




	// ****** GL_AMD_shader_stencil_export ******

	/**
	 * @brief Returns \c true if \b GL_AMD_shader_stencil_export is supported, false otherwise.
	 */
	bool isGL_AMD_shader_stencil_export;




	// ****** GL_AMD_texture_texture4 ******

	/**
	 * @brief Returns \c true if \b GL_AMD_texture_texture4 is supported, false otherwise.
	 */
	bool isGL_AMD_texture_texture4;




	// ****** GL_AMD_transform_feedback3_lines_triangles ******

	/**
	 * @brief Returns \c true if \b GL_AMD_transform_feedback3_lines_triangles is supported, false otherwise.
	 */
	bool isGL_AMD_transform_feedback3_lines_triangles;




	// ****** GL_AMD_vertex_shader_tesselator ******

	/**
	 * @brief Returns \c true if \b GL_AMD_vertex_shader_tesselator is supported, false otherwise.
	 */
	bool isGL_AMD_vertex_shader_tesselator;


	/**
	 * @brief void glTessellationFactorAMD(GLfloat factor)
	 */
	PFNGLTESSELLATIONFACTORAMDPROC glTessellationFactorAMD;

	/**
	 * @brief void glTessellationModeAMD(GLenum mode)
	 */
	PFNGLTESSELLATIONMODEAMDPROC glTessellationModeAMD;




	// ****** GL_APPLE_aux_depth_stencil ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_aux_depth_stencil is supported, false otherwise.
	 */
	bool isGL_APPLE_aux_depth_stencil;




	// ****** GL_APPLE_client_storage ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_client_storage is supported, false otherwise.
	 */
	bool isGL_APPLE_client_storage;




	// ****** GL_APPLE_element_array ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_element_array is supported, false otherwise.
	 */
	bool isGL_APPLE_element_array;


	/**
	 * @brief void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
	 */
	PFNGLDRAWELEMENTARRAYAPPLEPROC glDrawElementArrayAPPLE;

	/**
	 * @brief void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
	 */
	PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glDrawRangeElementArrayAPPLE;

	/**
	 * @brief void glElementPointerAPPLE(GLenum type, const GLvoid *pointer)
	 */
	PFNGLELEMENTPOINTERAPPLEPROC glElementPointerAPPLE;

	/**
	 * @brief void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
	 */
	PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glMultiDrawElementArrayAPPLE;

	/**
	 * @brief void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount)
	 */
	PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC glMultiDrawRangeElementArrayAPPLE;




	// ****** GL_APPLE_fence ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_fence is supported, false otherwise.
	 */
	bool isGL_APPLE_fence;


	/**
	 * @brief void glDeleteFencesAPPLE(GLsizei n, const GLuint *fences)
	 */
	PFNGLDELETEFENCESAPPLEPROC glDeleteFencesAPPLE;

	/**
	 * @brief void glFinishFenceAPPLE(GLuint fence)
	 */
	PFNGLFINISHFENCEAPPLEPROC glFinishFenceAPPLE;

	/**
	 * @brief void glFinishObjectAPPLE(GLenum object, GLint name)
	 */
	PFNGLFINISHOBJECTAPPLEPROC glFinishObjectAPPLE;

	/**
	 * @brief void glGenFencesAPPLE(GLsizei n, GLuint *fences)
	 */
	PFNGLGENFENCESAPPLEPROC glGenFencesAPPLE;

	/**
	 * @brief GLboolean glIsFenceAPPLE(GLuint fence)
	 */
	PFNGLISFENCEAPPLEPROC glIsFenceAPPLE;

	/**
	 * @brief void glSetFenceAPPLE(GLuint fence)
	 */
	PFNGLSETFENCEAPPLEPROC glSetFenceAPPLE;

	/**
	 * @brief GLboolean glTestFenceAPPLE(GLuint fence)
	 */
	PFNGLTESTFENCEAPPLEPROC glTestFenceAPPLE;

	/**
	 * @brief GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
	 */
	PFNGLTESTOBJECTAPPLEPROC glTestObjectAPPLE;




	// ****** GL_APPLE_float_pixels ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_float_pixels is supported, false otherwise.
	 */
	bool isGL_APPLE_float_pixels;




	// ****** GL_APPLE_flush_buffer_range ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_flush_buffer_range is supported, false otherwise.
	 */
	bool isGL_APPLE_flush_buffer_range;


	/**
	 * @brief void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
	 */
	PFNGLBUFFERPARAMETERIAPPLEPROC glBufferParameteriAPPLE;

	/**
	 * @brief void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
	 */
	PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC glFlushMappedBufferRangeAPPLE;




	// ****** GL_APPLE_object_purgeable ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_object_purgeable is supported, false otherwise.
	 */
	bool isGL_APPLE_object_purgeable;


	/**
	 * @brief void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint *params)
	 */
	PFNGLGETOBJECTPARAMETERIVAPPLEPROC glGetObjectParameterivAPPLE;

	/**
	 * @brief GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
	 */
	PFNGLOBJECTPURGEABLEAPPLEPROC glObjectPurgeableAPPLE;

	/**
	 * @brief GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
	 */
	PFNGLOBJECTUNPURGEABLEAPPLEPROC glObjectUnpurgeableAPPLE;




	// ****** GL_APPLE_rgb_422 ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_rgb_422 is supported, false otherwise.
	 */
	bool isGL_APPLE_rgb_422;




	// ****** GL_APPLE_row_bytes ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_row_bytes is supported, false otherwise.
	 */
	bool isGL_APPLE_row_bytes;




	// ****** GL_APPLE_specular_vector ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_specular_vector is supported, false otherwise.
	 */
	bool isGL_APPLE_specular_vector;




	// ****** GL_APPLE_texture_range ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_texture_range is supported, false otherwise.
	 */
	bool isGL_APPLE_texture_range;


	/**
	 * @brief void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, GLvoid* *params)
	 */
	PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC glGetTexParameterPointervAPPLE;

	/**
	 * @brief void glTextureRangeAPPLE(GLenum target, GLsizei length, const GLvoid *pointer)
	 */
	PFNGLTEXTURERANGEAPPLEPROC glTextureRangeAPPLE;




	// ****** GL_APPLE_transform_hint ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_transform_hint is supported, false otherwise.
	 */
	bool isGL_APPLE_transform_hint;




	// ****** GL_APPLE_vertex_array_object ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_vertex_array_object is supported, false otherwise.
	 */
	bool isGL_APPLE_vertex_array_object;


	/**
	 * @brief void glBindVertexArrayAPPLE(GLuint array)
	 */
	PFNGLBINDVERTEXARRAYAPPLEPROC glBindVertexArrayAPPLE;

	/**
	 * @brief void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint *arrays)
	 */
	PFNGLDELETEVERTEXARRAYSAPPLEPROC glDeleteVertexArraysAPPLE;

	/**
	 * @brief void glGenVertexArraysAPPLE(GLsizei n, GLuint *arrays)
	 */
	PFNGLGENVERTEXARRAYSAPPLEPROC glGenVertexArraysAPPLE;

	/**
	 * @brief GLboolean glIsVertexArrayAPPLE(GLuint array)
	 */
	PFNGLISVERTEXARRAYAPPLEPROC glIsVertexArrayAPPLE;




	// ****** GL_APPLE_vertex_array_range ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_vertex_array_range is supported, false otherwise.
	 */
	bool isGL_APPLE_vertex_array_range;


	/**
	 * @brief void glFlushVertexArrayRangeAPPLE(GLsizei length, GLvoid *pointer)
	 */
	PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC glFlushVertexArrayRangeAPPLE;

	/**
	 * @brief void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
	 */
	PFNGLVERTEXARRAYPARAMETERIAPPLEPROC glVertexArrayParameteriAPPLE;

	/**
	 * @brief void glVertexArrayRangeAPPLE(GLsizei length, GLvoid *pointer)
	 */
	PFNGLVERTEXARRAYRANGEAPPLEPROC glVertexArrayRangeAPPLE;




	// ****** GL_APPLE_vertex_program_evaluators ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_vertex_program_evaluators is supported, false otherwise.
	 */
	bool isGL_APPLE_vertex_program_evaluators;


	/**
	 * @brief void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
	 */
	PFNGLDISABLEVERTEXATTRIBAPPLEPROC glDisableVertexAttribAPPLE;

	/**
	 * @brief void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
	 */
	PFNGLENABLEVERTEXATTRIBAPPLEPROC glEnableVertexAttribAPPLE;

	/**
	 * @brief GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
	 */
	PFNGLISVERTEXATTRIBENABLEDAPPLEPROC glIsVertexAttribEnabledAPPLE;

	/**
	 * @brief void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
	 */
	PFNGLMAPVERTEXATTRIB1DAPPLEPROC glMapVertexAttrib1dAPPLE;

	/**
	 * @brief void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
	 */
	PFNGLMAPVERTEXATTRIB1FAPPLEPROC glMapVertexAttrib1fAPPLE;

	/**
	 * @brief void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
	 */
	PFNGLMAPVERTEXATTRIB2DAPPLEPROC glMapVertexAttrib2dAPPLE;

	/**
	 * @brief void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
	 */
	PFNGLMAPVERTEXATTRIB2FAPPLEPROC glMapVertexAttrib2fAPPLE;




	// ****** GL_APPLE_ycbcr_422 ******

	/**
	 * @brief Returns \c true if \b GL_APPLE_ycbcr_422 is supported, false otherwise.
	 */
	bool isGL_APPLE_ycbcr_422;




	// ****** GL_ARB_ES2_compatibility ******

	/**
	 * @brief Returns \c true if \b GL_ARB_ES2_compatibility is supported, false otherwise.
	 */
	bool isGL_ARB_ES2_compatibility;


	/**
	 * @brief void glClearDepthf(GLclampf d)
	 */
	PFNGLCLEARDEPTHFPROC glClearDepthf;

	/**
	 * @brief void glDepthRangef(GLclampf n, GLclampf f)
	 */
	PFNGLDEPTHRANGEFPROC glDepthRangef;

	/**
	 * @brief void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision)
	 */
	PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat;

	/**
	 * @brief void glReleaseShaderCompiler(void)
	 */
	PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler;

	/**
	 * @brief void glShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryformat, const GLvoid *binary, GLsizei length)
	 */
	PFNGLSHADERBINARYPROC glShaderBinary;




	// ****** GL_ARB_blend_func_extended ******

	/**
	 * @brief Returns \c true if \b GL_ARB_blend_func_extended is supported, false otherwise.
	 */
	bool isGL_ARB_blend_func_extended;


	/**
	 * @brief void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name)
	 */
	PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;

	/**
	 * @brief GLint glGetFragDataIndex(GLuint program, const GLchar *name)
	 */
	PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex;




	// ****** GL_ARB_cl_event ******

	/**
	 * @brief Returns \c true if \b GL_ARB_cl_event is supported, false otherwise.
	 */
	bool isGL_ARB_cl_event;


	/**
	 * @brief GLsync glCreateSyncFromCLeventARB(struct _cl_context * context, struct _cl_event * event, GLbitfield flags)
	 */
	PFNGLCREATESYNCFROMCLEVENTARBPROC glCreateSyncFromCLeventARB;




	// ****** GL_ARB_color_buffer_float ******

	/**
	 * @brief Returns \c true if \b GL_ARB_color_buffer_float is supported, false otherwise.
	 */
	bool isGL_ARB_color_buffer_float;


	/**
	 * @brief void glClampColorARB(GLenum target, GLenum clamp)
	 */
	PFNGLCLAMPCOLORARBPROC glClampColorARB;




	// ****** GL_ARB_compatibility ******

	/**
	 * @brief Returns \c true if \b GL_ARB_compatibility is supported, false otherwise.
	 */
	bool isGL_ARB_compatibility;




	// ****** GL_ARB_copy_buffer ******

	/**
	 * @brief Returns \c true if \b GL_ARB_copy_buffer is supported, false otherwise.
	 */
	bool isGL_ARB_copy_buffer;


	/**
	 * @brief void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
	 */
	PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;




	// ****** GL_ARB_debug_output ******

	/**
	 * @brief Returns \c true if \b GL_ARB_debug_output is supported, false otherwise.
	 */
	bool isGL_ARB_debug_output;


	/**
	 * @brief void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const GLvoid *userParam)
	 */
	PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallbackARB;

	/**
	 * @brief void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled)
	 */
	PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControlARB;

	/**
	 * @brief void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf)
	 */
	PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsertARB;

	/**
	 * @brief GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufsize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog)
	 */
	PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLogARB;




	// ****** GL_ARB_depth_buffer_float ******

	/**
	 * @brief Returns \c true if \b GL_ARB_depth_buffer_float is supported, false otherwise.
	 */
	bool isGL_ARB_depth_buffer_float;




	// ****** GL_ARB_depth_clamp ******

	/**
	 * @brief Returns \c true if \b GL_ARB_depth_clamp is supported, false otherwise.
	 */
	bool isGL_ARB_depth_clamp;




	// ****** GL_ARB_depth_texture ******

	/**
	 * @brief Returns \c true if \b GL_ARB_depth_texture is supported, false otherwise.
	 */
	bool isGL_ARB_depth_texture;




	// ****** GL_ARB_draw_buffers ******

	/**
	 * @brief Returns \c true if \b GL_ARB_draw_buffers is supported, false otherwise.
	 */
	bool isGL_ARB_draw_buffers;


	/**
	 * @brief void glDrawBuffersARB(GLsizei n, const GLenum *bufs)
	 */
	PFNGLDRAWBUFFERSARBPROC glDrawBuffersARB;




	// ****** GL_ARB_draw_buffers_blend ******

	/**
	 * @brief Returns \c true if \b GL_ARB_draw_buffers_blend is supported, false otherwise.
	 */
	bool isGL_ARB_draw_buffers_blend;


	/**
	 * @brief void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
	 */
	PFNGLBLENDEQUATIONSEPARATEIARBPROC glBlendEquationSeparateiARB;

	/**
	 * @brief void glBlendEquationiARB(GLuint buf, GLenum mode)
	 */
	PFNGLBLENDEQUATIONIARBPROC glBlendEquationiARB;

	/**
	 * @brief void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
	 */
	PFNGLBLENDFUNCSEPARATEIARBPROC glBlendFuncSeparateiARB;

	/**
	 * @brief void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
	 */
	PFNGLBLENDFUNCIARBPROC glBlendFunciARB;




	// ****** GL_ARB_draw_elements_base_vertex ******

	/**
	 * @brief Returns \c true if \b GL_ARB_draw_elements_base_vertex is supported, false otherwise.
	 */
	bool isGL_ARB_draw_elements_base_vertex;


	/**
	 * @brief void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex)
	 */
	PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;

	/**
	 * @brief void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex)
	 */
	PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;

	/**
	 * @brief void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex)
	 */
	PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;

	/**
	 * @brief void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount, const GLint *basevertex)
	 */
	PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;




	// ****** GL_ARB_draw_indirect ******

	/**
	 * @brief Returns \c true if \b GL_ARB_draw_indirect is supported, false otherwise.
	 */
	bool isGL_ARB_draw_indirect;


	/**
	 * @brief void glDrawArraysIndirect(GLenum mode, const GLvoid *indirect)
	 */
	PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect;

	/**
	 * @brief void glDrawElementsIndirect(GLenum mode, GLenum type, const GLvoid *indirect)
	 */
	PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect;




	// ****** GL_ARB_draw_instanced ******

	/**
	 * @brief Returns \c true if \b GL_ARB_draw_instanced is supported, false otherwise.
	 */
	bool isGL_ARB_draw_instanced;


	/**
	 * @brief void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
	 */
	PFNGLDRAWARRAYSINSTANCEDARBPROC glDrawArraysInstancedARB;

	/**
	 * @brief void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
	 */
	PFNGLDRAWELEMENTSINSTANCEDARBPROC glDrawElementsInstancedARB;




	// ****** GL_ARB_explicit_attrib_location ******

	/**
	 * @brief Returns \c true if \b GL_ARB_explicit_attrib_location is supported, false otherwise.
	 */
	bool isGL_ARB_explicit_attrib_location;




	// ****** GL_ARB_fragment_coord_conventions ******

	/**
	 * @brief Returns \c true if \b GL_ARB_fragment_coord_conventions is supported, false otherwise.
	 */
	bool isGL_ARB_fragment_coord_conventions;




	// ****** GL_ARB_fragment_program ******

	/**
	 * @brief Returns \c true if \b GL_ARB_fragment_program is supported, false otherwise.
	 */
	bool isGL_ARB_fragment_program;




	// ****** GL_ARB_fragment_program_shadow ******

	/**
	 * @brief Returns \c true if \b GL_ARB_fragment_program_shadow is supported, false otherwise.
	 */
	bool isGL_ARB_fragment_program_shadow;




	// ****** GL_ARB_fragment_shader ******

	/**
	 * @brief Returns \c true if \b GL_ARB_fragment_shader is supported, false otherwise.
	 */
	bool isGL_ARB_fragment_shader;




	// ****** GL_ARB_framebuffer_object ******

	/**
	 * @brief Returns \c true if \b GL_ARB_framebuffer_object is supported, false otherwise.
	 */
	bool isGL_ARB_framebuffer_object;


	/**
	 * @brief void glBindFramebuffer(GLenum target, GLuint framebuffer)
	 */
	PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;

	/**
	 * @brief void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
	 */
	PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;

	/**
	 * @brief void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
	 */
	PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;

	/**
	 * @brief GLenum glCheckFramebufferStatus(GLenum target)
	 */
	PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;

	/**
	 * @brief void glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers)
	 */
	PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;

	/**
	 * @brief void glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers)
	 */
	PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;

	/**
	 * @brief void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
	 */
	PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;

	/**
	 * @brief void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	 */
	PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D;

	/**
	 * @brief void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	 */
	PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;

	/**
	 * @brief void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
	 */
	PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D;

	/**
	 * @brief void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
	 */
	PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;

	/**
	 * @brief void glGenFramebuffers(GLsizei n, GLuint *framebuffers)
	 */
	PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;

	/**
	 * @brief void glGenRenderbuffers(GLsizei n, GLuint *renderbuffers)
	 */
	PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;

	/**
	 * @brief void glGenerateMipmap(GLenum target)
	 */
	PFNGLGENERATEMIPMAPPROC glGenerateMipmap;

	/**
	 * @brief void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params)
	 */
	PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;

	/**
	 * @brief void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;

	/**
	 * @brief GLboolean glIsFramebuffer(GLuint framebuffer)
	 */
	PFNGLISFRAMEBUFFERPROC glIsFramebuffer;

	/**
	 * @brief GLboolean glIsRenderbuffer(GLuint renderbuffer)
	 */
	PFNGLISRENDERBUFFERPROC glIsRenderbuffer;

	/**
	 * @brief void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
	 */
	PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;

	/**
	 * @brief void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
	 */
	PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;




	// ****** GL_ARB_framebuffer_object_DEPRECATED ******

	/**
	 * @brief Returns \c true if \b GL_ARB_framebuffer_object_DEPRECATED is supported, false otherwise.
	 */
	bool isGL_ARB_framebuffer_object_DEPRECATED;




	// ****** GL_ARB_framebuffer_sRGB ******

	/**
	 * @brief Returns \c true if \b GL_ARB_framebuffer_sRGB is supported, false otherwise.
	 */
	bool isGL_ARB_framebuffer_sRGB;




	// ****** GL_ARB_geometry_shader4 ******

	/**
	 * @brief Returns \c true if \b GL_ARB_geometry_shader4 is supported, false otherwise.
	 */
	bool isGL_ARB_geometry_shader4;


	/**
	 * @brief void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
	 */
	PFNGLFRAMEBUFFERTEXTUREARBPROC glFramebufferTextureARB;

	/**
	 * @brief void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
	 */
	PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glFramebufferTextureFaceARB;

	/**
	 * @brief void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
	 */
	PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glFramebufferTextureLayerARB;

	/**
	 * @brief void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
	 */
	PFNGLPROGRAMPARAMETERIARBPROC glProgramParameteriARB;




	// ****** GL_ARB_get_program_binary ******

	/**
	 * @brief Returns \c true if \b GL_ARB_get_program_binary is supported, false otherwise.
	 */
	bool isGL_ARB_get_program_binary;


	/**
	 * @brief void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, GLvoid *binary)
	 */
	PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;

	/**
	 * @brief void glProgramBinary(GLuint program, GLenum binaryFormat, const GLvoid *binary, GLsizei length)
	 */
	PFNGLPROGRAMBINARYPROC glProgramBinary;

	/**
	 * @brief void glProgramParameteri(GLuint program, GLenum pname, GLint value)
	 */
	PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;




	// ****** GL_ARB_gpu_shader5 ******

	/**
	 * @brief Returns \c true if \b GL_ARB_gpu_shader5 is supported, false otherwise.
	 */
	bool isGL_ARB_gpu_shader5;




	// ****** GL_ARB_gpu_shader_fp64 ******

	/**
	 * @brief Returns \c true if \b GL_ARB_gpu_shader_fp64 is supported, false otherwise.
	 */
	bool isGL_ARB_gpu_shader_fp64;


	/**
	 * @brief void glGetUniformdv(GLuint program, GLint location, GLdouble *params)
	 */
	PFNGLGETUNIFORMDVPROC glGetUniformdv;

	/**
	 * @brief void glUniform1d(GLint location, GLdouble x)
	 */
	PFNGLUNIFORM1DPROC glUniform1d;

	/**
	 * @brief void glUniform1dv(GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLUNIFORM1DVPROC glUniform1dv;

	/**
	 * @brief void glUniform2d(GLint location, GLdouble x, GLdouble y)
	 */
	PFNGLUNIFORM2DPROC glUniform2d;

	/**
	 * @brief void glUniform2dv(GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLUNIFORM2DVPROC glUniform2dv;

	/**
	 * @brief void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLUNIFORM3DPROC glUniform3d;

	/**
	 * @brief void glUniform3dv(GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLUNIFORM3DVPROC glUniform3dv;

	/**
	 * @brief void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLUNIFORM4DPROC glUniform4d;

	/**
	 * @brief void glUniform4dv(GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLUNIFORM4DVPROC glUniform4dv;

	/**
	 * @brief void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv;

	/**
	 * @brief void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv;

	/**
	 * @brief void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv;

	/**
	 * @brief void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv;

	/**
	 * @brief void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv;

	/**
	 * @brief void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv;

	/**
	 * @brief void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv;

	/**
	 * @brief void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv;

	/**
	 * @brief void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv;




	// ****** GL_ARB_half_float_pixel ******

	/**
	 * @brief Returns \c true if \b GL_ARB_half_float_pixel is supported, false otherwise.
	 */
	bool isGL_ARB_half_float_pixel;




	// ****** GL_ARB_half_float_vertex ******

	/**
	 * @brief Returns \c true if \b GL_ARB_half_float_vertex is supported, false otherwise.
	 */
	bool isGL_ARB_half_float_vertex;




	// ****** GL_ARB_imaging ******

	/**
	 * @brief Returns \c true if \b GL_ARB_imaging is supported, false otherwise.
	 */
	bool isGL_ARB_imaging;




	// ****** GL_ARB_imaging_DEPRECATED ******

	/**
	 * @brief Returns \c true if \b GL_ARB_imaging_DEPRECATED is supported, false otherwise.
	 */
	bool isGL_ARB_imaging_DEPRECATED;




	// ****** GL_ARB_instanced_arrays ******

	/**
	 * @brief Returns \c true if \b GL_ARB_instanced_arrays is supported, false otherwise.
	 */
	bool isGL_ARB_instanced_arrays;


	/**
	 * @brief void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
	 */
	PFNGLVERTEXATTRIBDIVISORARBPROC glVertexAttribDivisorARB;




	// ****** GL_ARB_map_buffer_range ******

	/**
	 * @brief Returns \c true if \b GL_ARB_map_buffer_range is supported, false otherwise.
	 */
	bool isGL_ARB_map_buffer_range;


	/**
	 * @brief void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
	 */
	PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;

	/**
	 * @brief GLvoid* glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
	 */
	PFNGLMAPBUFFERRANGEPROC glMapBufferRange;




	// ****** GL_ARB_matrix_palette ******

	/**
	 * @brief Returns \c true if \b GL_ARB_matrix_palette is supported, false otherwise.
	 */
	bool isGL_ARB_matrix_palette;


	/**
	 * @brief void glCurrentPaletteMatrixARB(GLint index)
	 */
	PFNGLCURRENTPALETTEMATRIXARBPROC glCurrentPaletteMatrixARB;

	/**
	 * @brief void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLMATRIXINDEXPOINTERARBPROC glMatrixIndexPointerARB;

	/**
	 * @brief void glMatrixIndexubvARB(GLint size, const GLubyte *indices)
	 */
	PFNGLMATRIXINDEXUBVARBPROC glMatrixIndexubvARB;

	/**
	 * @brief void glMatrixIndexuivARB(GLint size, const GLuint *indices)
	 */
	PFNGLMATRIXINDEXUIVARBPROC glMatrixIndexuivARB;

	/**
	 * @brief void glMatrixIndexusvARB(GLint size, const GLushort *indices)
	 */
	PFNGLMATRIXINDEXUSVARBPROC glMatrixIndexusvARB;




	// ****** GL_ARB_multisample ******

	/**
	 * @brief Returns \c true if \b GL_ARB_multisample is supported, false otherwise.
	 */
	bool isGL_ARB_multisample;


	/**
	 * @brief void glSampleCoverageARB(GLclampf value, GLboolean invert)
	 */
	PFNGLSAMPLECOVERAGEARBPROC glSampleCoverageARB;




	// ****** GL_ARB_multitexture ******

	/**
	 * @brief Returns \c true if \b GL_ARB_multitexture is supported, false otherwise.
	 */
	bool isGL_ARB_multitexture;


	/**
	 * @brief void glActiveTextureARB(GLenum texture)
	 */
	PFNGLACTIVETEXTUREARBPROC glActiveTextureARB;

	/**
	 * @brief void glClientActiveTextureARB(GLenum texture)
	 */
	PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB;

	/**
	 * @brief void glMultiTexCoord1dARB(GLenum target, GLdouble s)
	 */
	PFNGLMULTITEXCOORD1DARBPROC glMultiTexCoord1dARB;

	/**
	 * @brief void glMultiTexCoord1dvARB(GLenum target, const GLdouble *v)
	 */
	PFNGLMULTITEXCOORD1DVARBPROC glMultiTexCoord1dvARB;

	/**
	 * @brief void glMultiTexCoord1fARB(GLenum target, GLfloat s)
	 */
	PFNGLMULTITEXCOORD1FARBPROC glMultiTexCoord1fARB;

	/**
	 * @brief void glMultiTexCoord1fvARB(GLenum target, const GLfloat *v)
	 */
	PFNGLMULTITEXCOORD1FVARBPROC glMultiTexCoord1fvARB;

	/**
	 * @brief void glMultiTexCoord1iARB(GLenum target, GLint s)
	 */
	PFNGLMULTITEXCOORD1IARBPROC glMultiTexCoord1iARB;

	/**
	 * @brief void glMultiTexCoord1ivARB(GLenum target, const GLint *v)
	 */
	PFNGLMULTITEXCOORD1IVARBPROC glMultiTexCoord1ivARB;

	/**
	 * @brief void glMultiTexCoord1sARB(GLenum target, GLshort s)
	 */
	PFNGLMULTITEXCOORD1SARBPROC glMultiTexCoord1sARB;

	/**
	 * @brief void glMultiTexCoord1svARB(GLenum target, const GLshort *v)
	 */
	PFNGLMULTITEXCOORD1SVARBPROC glMultiTexCoord1svARB;

	/**
	 * @brief void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
	 */
	PFNGLMULTITEXCOORD2DARBPROC glMultiTexCoord2dARB;

	/**
	 * @brief void glMultiTexCoord2dvARB(GLenum target, const GLdouble *v)
	 */
	PFNGLMULTITEXCOORD2DVARBPROC glMultiTexCoord2dvARB;

	/**
	 * @brief void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
	 */
	PFNGLMULTITEXCOORD2FARBPROC glMultiTexCoord2fARB;

	/**
	 * @brief void glMultiTexCoord2fvARB(GLenum target, const GLfloat *v)
	 */
	PFNGLMULTITEXCOORD2FVARBPROC glMultiTexCoord2fvARB;

	/**
	 * @brief void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
	 */
	PFNGLMULTITEXCOORD2IARBPROC glMultiTexCoord2iARB;

	/**
	 * @brief void glMultiTexCoord2ivARB(GLenum target, const GLint *v)
	 */
	PFNGLMULTITEXCOORD2IVARBPROC glMultiTexCoord2ivARB;

	/**
	 * @brief void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
	 */
	PFNGLMULTITEXCOORD2SARBPROC glMultiTexCoord2sARB;

	/**
	 * @brief void glMultiTexCoord2svARB(GLenum target, const GLshort *v)
	 */
	PFNGLMULTITEXCOORD2SVARBPROC glMultiTexCoord2svARB;

	/**
	 * @brief void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
	 */
	PFNGLMULTITEXCOORD3DARBPROC glMultiTexCoord3dARB;

	/**
	 * @brief void glMultiTexCoord3dvARB(GLenum target, const GLdouble *v)
	 */
	PFNGLMULTITEXCOORD3DVARBPROC glMultiTexCoord3dvARB;

	/**
	 * @brief void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
	 */
	PFNGLMULTITEXCOORD3FARBPROC glMultiTexCoord3fARB;

	/**
	 * @brief void glMultiTexCoord3fvARB(GLenum target, const GLfloat *v)
	 */
	PFNGLMULTITEXCOORD3FVARBPROC glMultiTexCoord3fvARB;

	/**
	 * @brief void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
	 */
	PFNGLMULTITEXCOORD3IARBPROC glMultiTexCoord3iARB;

	/**
	 * @brief void glMultiTexCoord3ivARB(GLenum target, const GLint *v)
	 */
	PFNGLMULTITEXCOORD3IVARBPROC glMultiTexCoord3ivARB;

	/**
	 * @brief void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
	 */
	PFNGLMULTITEXCOORD3SARBPROC glMultiTexCoord3sARB;

	/**
	 * @brief void glMultiTexCoord3svARB(GLenum target, const GLshort *v)
	 */
	PFNGLMULTITEXCOORD3SVARBPROC glMultiTexCoord3svARB;

	/**
	 * @brief void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
	 */
	PFNGLMULTITEXCOORD4DARBPROC glMultiTexCoord4dARB;

	/**
	 * @brief void glMultiTexCoord4dvARB(GLenum target, const GLdouble *v)
	 */
	PFNGLMULTITEXCOORD4DVARBPROC glMultiTexCoord4dvARB;

	/**
	 * @brief void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
	 */
	PFNGLMULTITEXCOORD4FARBPROC glMultiTexCoord4fARB;

	/**
	 * @brief void glMultiTexCoord4fvARB(GLenum target, const GLfloat *v)
	 */
	PFNGLMULTITEXCOORD4FVARBPROC glMultiTexCoord4fvARB;

	/**
	 * @brief void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
	 */
	PFNGLMULTITEXCOORD4IARBPROC glMultiTexCoord4iARB;

	/**
	 * @brief void glMultiTexCoord4ivARB(GLenum target, const GLint *v)
	 */
	PFNGLMULTITEXCOORD4IVARBPROC glMultiTexCoord4ivARB;

	/**
	 * @brief void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
	 */
	PFNGLMULTITEXCOORD4SARBPROC glMultiTexCoord4sARB;

	/**
	 * @brief void glMultiTexCoord4svARB(GLenum target, const GLshort *v)
	 */
	PFNGLMULTITEXCOORD4SVARBPROC glMultiTexCoord4svARB;




	// ****** GL_ARB_occlusion_query ******

	/**
	 * @brief Returns \c true if \b GL_ARB_occlusion_query is supported, false otherwise.
	 */
	bool isGL_ARB_occlusion_query;


	/**
	 * @brief void glBeginQueryARB(GLenum target, GLuint id)
	 */
	PFNGLBEGINQUERYARBPROC glBeginQueryARB;

	/**
	 * @brief void glDeleteQueriesARB(GLsizei n, const GLuint *ids)
	 */
	PFNGLDELETEQUERIESARBPROC glDeleteQueriesARB;

	/**
	 * @brief void glEndQueryARB(GLenum target)
	 */
	PFNGLENDQUERYARBPROC glEndQueryARB;

	/**
	 * @brief void glGenQueriesARB(GLsizei n, GLuint *ids)
	 */
	PFNGLGENQUERIESARBPROC glGenQueriesARB;

	/**
	 * @brief void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint *params)
	 */
	PFNGLGETQUERYOBJECTIVARBPROC glGetQueryObjectivARB;

	/**
	 * @brief void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint *params)
	 */
	PFNGLGETQUERYOBJECTUIVARBPROC glGetQueryObjectuivARB;

	/**
	 * @brief void glGetQueryivARB(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETQUERYIVARBPROC glGetQueryivARB;

	/**
	 * @brief GLboolean glIsQueryARB(GLuint id)
	 */
	PFNGLISQUERYARBPROC glIsQueryARB;




	// ****** GL_ARB_occlusion_query2 ******

	/**
	 * @brief Returns \c true if \b GL_ARB_occlusion_query2 is supported, false otherwise.
	 */
	bool isGL_ARB_occlusion_query2;




	// ****** GL_ARB_pixel_buffer_object ******

	/**
	 * @brief Returns \c true if \b GL_ARB_pixel_buffer_object is supported, false otherwise.
	 */
	bool isGL_ARB_pixel_buffer_object;




	// ****** GL_ARB_point_parameters ******

	/**
	 * @brief Returns \c true if \b GL_ARB_point_parameters is supported, false otherwise.
	 */
	bool isGL_ARB_point_parameters;


	/**
	 * @brief void glPointParameterfARB(GLenum pname, GLfloat param)
	 */
	PFNGLPOINTPARAMETERFARBPROC glPointParameterfARB;

	/**
	 * @brief void glPointParameterfvARB(GLenum pname, const GLfloat *params)
	 */
	PFNGLPOINTPARAMETERFVARBPROC glPointParameterfvARB;




	// ****** GL_ARB_point_sprite ******

	/**
	 * @brief Returns \c true if \b GL_ARB_point_sprite is supported, false otherwise.
	 */
	bool isGL_ARB_point_sprite;




	// ****** GL_ARB_provoking_vertex ******

	/**
	 * @brief Returns \c true if \b GL_ARB_provoking_vertex is supported, false otherwise.
	 */
	bool isGL_ARB_provoking_vertex;


	/**
	 * @brief void glProvokingVertex(GLenum mode)
	 */
	PFNGLPROVOKINGVERTEXPROC glProvokingVertex;




	// ****** GL_ARB_robustness ******

	/**
	 * @brief Returns \c true if \b GL_ARB_robustness is supported, false otherwise.
	 */
	bool isGL_ARB_robustness;


	/**
	 * @brief GLenum glGetGraphicsResetStatusARB(void)
	 */
	PFNGLGETGRAPHICSRESETSTATUSARBPROC glGetGraphicsResetStatusARB;

	/**
	 * @brief void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *table)
	 */
	PFNGLGETNCOLORTABLEARBPROC glGetnColorTableARB;

	/**
	 * @brief void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, GLvoid *img)
	 */
	PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glGetnCompressedTexImageARB;

	/**
	 * @brief void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *image)
	 */
	PFNGLGETNCONVOLUTIONFILTERARBPROC glGetnConvolutionFilterARB;

	/**
	 * @brief void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values)
	 */
	PFNGLGETNHISTOGRAMARBPROC glGetnHistogramARB;

	/**
	 * @brief void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v)
	 */
	PFNGLGETNMAPDVARBPROC glGetnMapdvARB;

	/**
	 * @brief void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v)
	 */
	PFNGLGETNMAPFVARBPROC glGetnMapfvARB;

	/**
	 * @brief void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint *v)
	 */
	PFNGLGETNMAPIVARBPROC glGetnMapivARB;

	/**
	 * @brief void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values)
	 */
	PFNGLGETNMINMAXARBPROC glGetnMinmaxARB;

	/**
	 * @brief void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat *values)
	 */
	PFNGLGETNPIXELMAPFVARBPROC glGetnPixelMapfvARB;

	/**
	 * @brief void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint *values)
	 */
	PFNGLGETNPIXELMAPUIVARBPROC glGetnPixelMapuivARB;

	/**
	 * @brief void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort *values)
	 */
	PFNGLGETNPIXELMAPUSVARBPROC glGetnPixelMapusvARB;

	/**
	 * @brief void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte *pattern)
	 */
	PFNGLGETNPOLYGONSTIPPLEARBPROC glGetnPolygonStippleARB;

	/**
	 * @brief void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid *row, GLsizei columnBufSize, GLvoid *column, GLvoid *span)
	 */
	PFNGLGETNSEPARABLEFILTERARBPROC glGetnSeparableFilterARB;

	/**
	 * @brief void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid *img)
	 */
	PFNGLGETNTEXIMAGEARBPROC glGetnTexImageARB;

	/**
	 * @brief void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble *params)
	 */
	PFNGLGETNUNIFORMDVARBPROC glGetnUniformdvARB;

	/**
	 * @brief void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat *params)
	 */
	PFNGLGETNUNIFORMFVARBPROC glGetnUniformfvARB;

	/**
	 * @brief void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint *params)
	 */
	PFNGLGETNUNIFORMIVARBPROC glGetnUniformivARB;

	/**
	 * @brief void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint *params)
	 */
	PFNGLGETNUNIFORMUIVARBPROC glGetnUniformuivARB;

	/**
	 * @brief void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data)
	 */
	PFNGLREADNPIXELSARBPROC glReadnPixelsARB;




	// ****** GL_ARB_sample_shading ******

	/**
	 * @brief Returns \c true if \b GL_ARB_sample_shading is supported, false otherwise.
	 */
	bool isGL_ARB_sample_shading;


	/**
	 * @brief void glMinSampleShadingARB(GLclampf value)
	 */
	PFNGLMINSAMPLESHADINGARBPROC glMinSampleShadingARB;




	// ****** GL_ARB_sampler_objects ******

	/**
	 * @brief Returns \c true if \b GL_ARB_sampler_objects is supported, false otherwise.
	 */
	bool isGL_ARB_sampler_objects;


	/**
	 * @brief void glBindSampler(GLuint unit, GLuint sampler)
	 */
	PFNGLBINDSAMPLERPROC glBindSampler;

	/**
	 * @brief void glDeleteSamplers(GLsizei count, const GLuint *samplers)
	 */
	PFNGLDELETESAMPLERSPROC glDeleteSamplers;

	/**
	 * @brief void glGenSamplers(GLsizei count, GLuint *samplers)
	 */
	PFNGLGENSAMPLERSPROC glGenSamplers;

	/**
	 * @brief void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint *params)
	 */
	PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv;

	/**
	 * @brief void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint *params)
	 */
	PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv;

	/**
	 * @brief void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat *params)
	 */
	PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;

	/**
	 * @brief void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint *params)
	 */
	PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;

	/**
	 * @brief GLboolean glIsSampler(GLuint sampler)
	 */
	PFNGLISSAMPLERPROC glIsSampler;

	/**
	 * @brief void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint *param)
	 */
	PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv;

	/**
	 * @brief void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint *param)
	 */
	PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv;

	/**
	 * @brief void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
	 */
	PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf;

	/**
	 * @brief void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat *param)
	 */
	PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv;

	/**
	 * @brief void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
	 */
	PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;

	/**
	 * @brief void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint *param)
	 */
	PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv;




	// ****** GL_ARB_seamless_cube_map ******

	/**
	 * @brief Returns \c true if \b GL_ARB_seamless_cube_map is supported, false otherwise.
	 */
	bool isGL_ARB_seamless_cube_map;




	// ****** GL_ARB_separate_shader_objects ******

	/**
	 * @brief Returns \c true if \b GL_ARB_separate_shader_objects is supported, false otherwise.
	 */
	bool isGL_ARB_separate_shader_objects;


	/**
	 * @brief void glActiveShaderProgram(GLuint pipeline, GLuint program)
	 */
	PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram;

	/**
	 * @brief void glBindProgramPipeline(GLuint pipeline)
	 */
	PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline;

	/**
	 * @brief GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar* *strings)
	 */
	PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv;

	/**
	 * @brief void glDeleteProgramPipelines(GLsizei n, const GLuint *pipelines)
	 */
	PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines;

	/**
	 * @brief void glGenProgramPipelines(GLsizei n, GLuint *pipelines)
	 */
	PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines;

	/**
	 * @brief void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
	 */
	PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog;

	/**
	 * @brief void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params)
	 */
	PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv;

	/**
	 * @brief GLboolean glIsProgramPipeline(GLuint pipeline)
	 */
	PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline;

	/**
	 * @brief void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
	 */
	PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d;

	/**
	 * @brief void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv;

	/**
	 * @brief void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
	 */
	PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f;

	/**
	 * @brief void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv;

	/**
	 * @brief void glProgramUniform1i(GLuint program, GLint location, GLint v0)
	 */
	PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i;

	/**
	 * @brief void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv;

	/**
	 * @brief void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
	 */
	PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui;

	/**
	 * @brief void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv;

	/**
	 * @brief void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
	 */
	PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d;

	/**
	 * @brief void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv;

	/**
	 * @brief void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
	 */
	PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f;

	/**
	 * @brief void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv;

	/**
	 * @brief void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
	 */
	PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i;

	/**
	 * @brief void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv;

	/**
	 * @brief void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
	 */
	PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui;

	/**
	 * @brief void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv;

	/**
	 * @brief void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
	 */
	PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d;

	/**
	 * @brief void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv;

	/**
	 * @brief void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
	 */
	PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f;

	/**
	 * @brief void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv;

	/**
	 * @brief void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
	 */
	PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i;

	/**
	 * @brief void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv;

	/**
	 * @brief void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
	 */
	PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui;

	/**
	 * @brief void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv;

	/**
	 * @brief void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
	 */
	PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d;

	/**
	 * @brief void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv;

	/**
	 * @brief void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
	 */
	PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f;

	/**
	 * @brief void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv;

	/**
	 * @brief void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
	 */
	PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i;

	/**
	 * @brief void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv;

	/**
	 * @brief void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
	 */
	PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui;

	/**
	 * @brief void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv;

	/**
	 * @brief void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv;

	/**
	 * @brief void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv;

	/**
	 * @brief void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv;

	/**
	 * @brief void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv;

	/**
	 * @brief void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv;

	/**
	 * @brief void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv;

	/**
	 * @brief void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv;

	/**
	 * @brief void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv;

	/**
	 * @brief void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv;

	/**
	 * @brief void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv;

	/**
	 * @brief void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv;

	/**
	 * @brief void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv;

	/**
	 * @brief void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv;

	/**
	 * @brief void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv;

	/**
	 * @brief void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv;

	/**
	 * @brief void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv;

	/**
	 * @brief void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv;

	/**
	 * @brief void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv;

	/**
	 * @brief void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
	 */
	PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages;

	/**
	 * @brief void glValidateProgramPipeline(GLuint pipeline)
	 */
	PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline;




	// ****** GL_ARB_shader_bit_encoding ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shader_bit_encoding is supported, false otherwise.
	 */
	bool isGL_ARB_shader_bit_encoding;




	// ****** GL_ARB_shader_objects ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shader_objects is supported, false otherwise.
	 */
	bool isGL_ARB_shader_objects;


	/**
	 * @brief void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
	 */
	PFNGLATTACHOBJECTARBPROC glAttachObjectARB;

	/**
	 * @brief void glCompileShaderARB(GLhandleARB shaderObj)
	 */
	PFNGLCOMPILESHADERARBPROC glCompileShaderARB;

	/**
	 * @brief GLhandleARB glCreateProgramObjectARB(void)
	 */
	PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB;

	/**
	 * @brief GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
	 */
	PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB;

	/**
	 * @brief void glDeleteObjectARB(GLhandleARB obj)
	 */
	PFNGLDELETEOBJECTARBPROC glDeleteObjectARB;

	/**
	 * @brief void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
	 */
	PFNGLDETACHOBJECTARBPROC glDetachObjectARB;

	/**
	 * @brief void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
	 */
	PFNGLGETACTIVEUNIFORMARBPROC glGetActiveUniformARB;

	/**
	 * @brief void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj)
	 */
	PFNGLGETATTACHEDOBJECTSARBPROC glGetAttachedObjectsARB;

	/**
	 * @brief GLhandleARB glGetHandleARB(GLenum pname)
	 */
	PFNGLGETHANDLEARBPROC glGetHandleARB;

	/**
	 * @brief void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog)
	 */
	PFNGLGETINFOLOGARBPROC glGetInfoLogARB;

	/**
	 * @brief void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat *params)
	 */
	PFNGLGETOBJECTPARAMETERFVARBPROC glGetObjectParameterfvARB;

	/**
	 * @brief void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint *params)
	 */
	PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB;

	/**
	 * @brief void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source)
	 */
	PFNGLGETSHADERSOURCEARBPROC glGetShaderSourceARB;

	/**
	 * @brief GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB *name)
	 */
	PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocationARB;

	/**
	 * @brief void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat *params)
	 */
	PFNGLGETUNIFORMFVARBPROC glGetUniformfvARB;

	/**
	 * @brief void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint *params)
	 */
	PFNGLGETUNIFORMIVARBPROC glGetUniformivARB;

	/**
	 * @brief void glLinkProgramARB(GLhandleARB programObj)
	 */
	PFNGLLINKPROGRAMARBPROC glLinkProgramARB;

	/**
	 * @brief void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length)
	 */
	PFNGLSHADERSOURCEARBPROC glShaderSourceARB;

	/**
	 * @brief void glUniform1fARB(GLint location, GLfloat v0)
	 */
	PFNGLUNIFORM1FARBPROC glUniform1fARB;

	/**
	 * @brief void glUniform1fvARB(GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLUNIFORM1FVARBPROC glUniform1fvARB;

	/**
	 * @brief void glUniform1iARB(GLint location, GLint v0)
	 */
	PFNGLUNIFORM1IARBPROC glUniform1iARB;

	/**
	 * @brief void glUniform1ivARB(GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLUNIFORM1IVARBPROC glUniform1ivARB;

	/**
	 * @brief void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
	 */
	PFNGLUNIFORM2FARBPROC glUniform2fARB;

	/**
	 * @brief void glUniform2fvARB(GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLUNIFORM2FVARBPROC glUniform2fvARB;

	/**
	 * @brief void glUniform2iARB(GLint location, GLint v0, GLint v1)
	 */
	PFNGLUNIFORM2IARBPROC glUniform2iARB;

	/**
	 * @brief void glUniform2ivARB(GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLUNIFORM2IVARBPROC glUniform2ivARB;

	/**
	 * @brief void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
	 */
	PFNGLUNIFORM3FARBPROC glUniform3fARB;

	/**
	 * @brief void glUniform3fvARB(GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLUNIFORM3FVARBPROC glUniform3fvARB;

	/**
	 * @brief void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
	 */
	PFNGLUNIFORM3IARBPROC glUniform3iARB;

	/**
	 * @brief void glUniform3ivARB(GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLUNIFORM3IVARBPROC glUniform3ivARB;

	/**
	 * @brief void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
	 */
	PFNGLUNIFORM4FARBPROC glUniform4fARB;

	/**
	 * @brief void glUniform4fvARB(GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLUNIFORM4FVARBPROC glUniform4fvARB;

	/**
	 * @brief void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
	 */
	PFNGLUNIFORM4IARBPROC glUniform4iARB;

	/**
	 * @brief void glUniform4ivARB(GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLUNIFORM4IVARBPROC glUniform4ivARB;

	/**
	 * @brief void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX2FVARBPROC glUniformMatrix2fvARB;

	/**
	 * @brief void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX3FVARBPROC glUniformMatrix3fvARB;

	/**
	 * @brief void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX4FVARBPROC glUniformMatrix4fvARB;

	/**
	 * @brief void glUseProgramObjectARB(GLhandleARB programObj)
	 */
	PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB;

	/**
	 * @brief void glValidateProgramARB(GLhandleARB programObj)
	 */
	PFNGLVALIDATEPROGRAMARBPROC glValidateProgramARB;




	// ****** GL_ARB_shader_precision ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shader_precision is supported, false otherwise.
	 */
	bool isGL_ARB_shader_precision;




	// ****** GL_ARB_shader_stencil_export ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shader_stencil_export is supported, false otherwise.
	 */
	bool isGL_ARB_shader_stencil_export;




	// ****** GL_ARB_shader_subroutine ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shader_subroutine is supported, false otherwise.
	 */
	bool isGL_ARB_shader_subroutine;


	/**
	 * @brief void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name)
	 */
	PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName;

	/**
	 * @brief void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name)
	 */
	PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName;

	/**
	 * @brief void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values)
	 */
	PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv;

	/**
	 * @brief void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint *values)
	 */
	PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv;

	/**
	 * @brief GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar *name)
	 */
	PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex;

	/**
	 * @brief GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar *name)
	 */
	PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation;

	/**
	 * @brief void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint *params)
	 */
	PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv;

	/**
	 * @brief void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint *indices)
	 */
	PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv;




	// ****** GL_ARB_shader_texture_lod ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shader_texture_lod is supported, false otherwise.
	 */
	bool isGL_ARB_shader_texture_lod;




	// ****** GL_ARB_shading_language_100 ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shading_language_100 is supported, false otherwise.
	 */
	bool isGL_ARB_shading_language_100;




	// ****** GL_ARB_shading_language_include ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shading_language_include is supported, false otherwise.
	 */
	bool isGL_ARB_shading_language_include;


	/**
	 * @brief void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar* *path, const GLint *length)
	 */
	PFNGLCOMPILESHADERINCLUDEARBPROC glCompileShaderIncludeARB;

	/**
	 * @brief void glDeleteNamedStringARB(GLint namelen, const GLchar *name)
	 */
	PFNGLDELETENAMEDSTRINGARBPROC glDeleteNamedStringARB;

	/**
	 * @brief void glGetNamedStringARB(GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string)
	 */
	PFNGLGETNAMEDSTRINGARBPROC glGetNamedStringARB;

	/**
	 * @brief void glGetNamedStringivARB(GLint namelen, const GLchar *name, GLenum pname, GLint *params)
	 */
	PFNGLGETNAMEDSTRINGIVARBPROC glGetNamedStringivARB;

	/**
	 * @brief GLboolean glIsNamedStringARB(GLint namelen, const GLchar *name)
	 */
	PFNGLISNAMEDSTRINGARBPROC glIsNamedStringARB;

	/**
	 * @brief void glNamedStringARB(GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string)
	 */
	PFNGLNAMEDSTRINGARBPROC glNamedStringARB;




	// ****** GL_ARB_shadow ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shadow is supported, false otherwise.
	 */
	bool isGL_ARB_shadow;




	// ****** GL_ARB_shadow_ambient ******

	/**
	 * @brief Returns \c true if \b GL_ARB_shadow_ambient is supported, false otherwise.
	 */
	bool isGL_ARB_shadow_ambient;




	// ****** GL_ARB_sync ******

	/**
	 * @brief Returns \c true if \b GL_ARB_sync is supported, false otherwise.
	 */
	bool isGL_ARB_sync;


	/**
	 * @brief GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
	 */
	PFNGLCLIENTWAITSYNCPROC glClientWaitSync;

	/**
	 * @brief void glDeleteSync(GLsync sync)
	 */
	PFNGLDELETESYNCPROC glDeleteSync;

	/**
	 * @brief GLsync glFenceSync(GLenum condition, GLbitfield flags)
	 */
	PFNGLFENCESYNCPROC glFenceSync;

	/**
	 * @brief void glGetInteger64v(GLenum pname, GLint64 *params)
	 */
	PFNGLGETINTEGER64VPROC glGetInteger64v;

	/**
	 * @brief void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values)
	 */
	PFNGLGETSYNCIVPROC glGetSynciv;

	/**
	 * @brief GLboolean glIsSync(GLsync sync)
	 */
	PFNGLISSYNCPROC glIsSync;

	/**
	 * @brief void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
	 */
	PFNGLWAITSYNCPROC glWaitSync;




	// ****** GL_ARB_tessellation_shader ******

	/**
	 * @brief Returns \c true if \b GL_ARB_tessellation_shader is supported, false otherwise.
	 */
	bool isGL_ARB_tessellation_shader;


	/**
	 * @brief void glPatchParameterfv(GLenum pname, const GLfloat *values)
	 */
	PFNGLPATCHPARAMETERFVPROC glPatchParameterfv;

	/**
	 * @brief void glPatchParameteri(GLenum pname, GLint value)
	 */
	PFNGLPATCHPARAMETERIPROC glPatchParameteri;




	// ****** GL_ARB_texture_border_clamp ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_border_clamp is supported, false otherwise.
	 */
	bool isGL_ARB_texture_border_clamp;




	// ****** GL_ARB_texture_buffer_object ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_buffer_object is supported, false otherwise.
	 */
	bool isGL_ARB_texture_buffer_object;


	/**
	 * @brief void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
	 */
	PFNGLTEXBUFFERARBPROC glTexBufferARB;




	// ****** GL_ARB_texture_buffer_object_rgb32 ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_buffer_object_rgb32 is supported, false otherwise.
	 */
	bool isGL_ARB_texture_buffer_object_rgb32;




	// ****** GL_ARB_texture_compression ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_compression is supported, false otherwise.
	 */
	bool isGL_ARB_texture_compression;


	/**
	 * @brief void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glCompressedTexImage1DARB;

	/**
	 * @brief void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glCompressedTexImage2DARB;

	/**
	 * @brief void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glCompressedTexImage3DARB;

	/**
	 * @brief void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glCompressedTexSubImage1DARB;

	/**
	 * @brief void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glCompressedTexSubImage2DARB;

	/**
	 * @brief void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glCompressedTexSubImage3DARB;

	/**
	 * @brief void glGetCompressedTexImageARB(GLenum target, GLint level, GLvoid *img)
	 */
	PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glGetCompressedTexImageARB;




	// ****** GL_ARB_texture_compression_bptc ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_compression_bptc is supported, false otherwise.
	 */
	bool isGL_ARB_texture_compression_bptc;




	// ****** GL_ARB_texture_compression_rgtc ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_compression_rgtc is supported, false otherwise.
	 */
	bool isGL_ARB_texture_compression_rgtc;




	// ****** GL_ARB_texture_cube_map ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_cube_map is supported, false otherwise.
	 */
	bool isGL_ARB_texture_cube_map;




	// ****** GL_ARB_texture_cube_map_array ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_cube_map_array is supported, false otherwise.
	 */
	bool isGL_ARB_texture_cube_map_array;




	// ****** GL_ARB_texture_env_add ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_env_add is supported, false otherwise.
	 */
	bool isGL_ARB_texture_env_add;




	// ****** GL_ARB_texture_env_combine ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_env_combine is supported, false otherwise.
	 */
	bool isGL_ARB_texture_env_combine;




	// ****** GL_ARB_texture_env_crossbar ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_env_crossbar is supported, false otherwise.
	 */
	bool isGL_ARB_texture_env_crossbar;




	// ****** GL_ARB_texture_env_dot3 ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_env_dot3 is supported, false otherwise.
	 */
	bool isGL_ARB_texture_env_dot3;




	// ****** GL_ARB_texture_float ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_float is supported, false otherwise.
	 */
	bool isGL_ARB_texture_float;




	// ****** GL_ARB_texture_gather ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_gather is supported, false otherwise.
	 */
	bool isGL_ARB_texture_gather;




	// ****** GL_ARB_texture_mirrored_repeat ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_mirrored_repeat is supported, false otherwise.
	 */
	bool isGL_ARB_texture_mirrored_repeat;




	// ****** GL_ARB_texture_multisample ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_multisample is supported, false otherwise.
	 */
	bool isGL_ARB_texture_multisample;


	/**
	 * @brief void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat *val)
	 */
	PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv;

	/**
	 * @brief void glSampleMaski(GLuint index, GLbitfield mask)
	 */
	PFNGLSAMPLEMASKIPROC glSampleMaski;

	/**
	 * @brief void glTexImage2DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
	 */
	PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;

	/**
	 * @brief void glTexImage3DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
	 */
	PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample;




	// ****** GL_ARB_texture_non_power_of_two ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_non_power_of_two is supported, false otherwise.
	 */
	bool isGL_ARB_texture_non_power_of_two;




	// ****** GL_ARB_texture_query_lod ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_query_lod is supported, false otherwise.
	 */
	bool isGL_ARB_texture_query_lod;




	// ****** GL_ARB_texture_rectangle ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_rectangle is supported, false otherwise.
	 */
	bool isGL_ARB_texture_rectangle;




	// ****** GL_ARB_texture_rg ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_rg is supported, false otherwise.
	 */
	bool isGL_ARB_texture_rg;




	// ****** GL_ARB_texture_rgb10_a2ui ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_rgb10_a2ui is supported, false otherwise.
	 */
	bool isGL_ARB_texture_rgb10_a2ui;




	// ****** GL_ARB_texture_swizzle ******

	/**
	 * @brief Returns \c true if \b GL_ARB_texture_swizzle is supported, false otherwise.
	 */
	bool isGL_ARB_texture_swizzle;




	// ****** GL_ARB_timer_query ******

	/**
	 * @brief Returns \c true if \b GL_ARB_timer_query is supported, false otherwise.
	 */
	bool isGL_ARB_timer_query;


	/**
	 * @brief void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 *params)
	 */
	PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v;

	/**
	 * @brief void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 *params)
	 */
	PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v;

	/**
	 * @brief void glQueryCounter(GLuint id, GLenum target)
	 */
	PFNGLQUERYCOUNTERPROC glQueryCounter;




	// ****** GL_ARB_transform_feedback2 ******

	/**
	 * @brief Returns \c true if \b GL_ARB_transform_feedback2 is supported, false otherwise.
	 */
	bool isGL_ARB_transform_feedback2;


	/**
	 * @brief void glBindTransformFeedback(GLenum target, GLuint id)
	 */
	PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback;

	/**
	 * @brief void glDeleteTransformFeedbacks(GLsizei n, const GLuint *ids)
	 */
	PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks;

	/**
	 * @brief void glDrawTransformFeedback(GLenum mode, GLuint id)
	 */
	PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback;

	/**
	 * @brief void glGenTransformFeedbacks(GLsizei n, GLuint *ids)
	 */
	PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks;

	/**
	 * @brief GLboolean glIsTransformFeedback(GLuint id)
	 */
	PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback;

	/**
	 * @brief void glPauseTransformFeedback(void)
	 */
	PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback;

	/**
	 * @brief void glResumeTransformFeedback(void)
	 */
	PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback;




	// ****** GL_ARB_transform_feedback3 ******

	/**
	 * @brief Returns \c true if \b GL_ARB_transform_feedback3 is supported, false otherwise.
	 */
	bool isGL_ARB_transform_feedback3;


	/**
	 * @brief void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
	 */
	PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed;

	/**
	 * @brief void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
	 */
	PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream;

	/**
	 * @brief void glEndQueryIndexed(GLenum target, GLuint index)
	 */
	PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed;

	/**
	 * @brief void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint *params)
	 */
	PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv;




	// ****** GL_ARB_transpose_matrix ******

	/**
	 * @brief Returns \c true if \b GL_ARB_transpose_matrix is supported, false otherwise.
	 */
	bool isGL_ARB_transpose_matrix;


	/**
	 * @brief void glLoadTransposeMatrixdARB(const GLdouble *m)
	 */
	PFNGLLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixdARB;

	/**
	 * @brief void glLoadTransposeMatrixfARB(const GLfloat *m)
	 */
	PFNGLLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixfARB;

	/**
	 * @brief void glMultTransposeMatrixdARB(const GLdouble *m)
	 */
	PFNGLMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixdARB;

	/**
	 * @brief void glMultTransposeMatrixfARB(const GLfloat *m)
	 */
	PFNGLMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixfARB;




	// ****** GL_ARB_uniform_buffer_object ******

	/**
	 * @brief Returns \c true if \b GL_ARB_uniform_buffer_object is supported, false otherwise.
	 */
	bool isGL_ARB_uniform_buffer_object;


	/**
	 * @brief void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName)
	 */
	PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;

	/**
	 * @brief void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params)
	 */
	PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;

	/**
	 * @brief void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName)
	 */
	PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;

	/**
	 * @brief void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params)
	 */
	PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;

	/**
	 * @brief GLuint glGetUniformBlockIndex(GLuint program, const GLchar *uniformBlockName)
	 */
	PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;

	/**
	 * @brief void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar* *uniformNames, GLuint *uniformIndices)
	 */
	PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;

	/**
	 * @brief void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
	 */
	PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;




	// ****** GL_ARB_vertex_array_bgra ******

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_array_bgra is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_array_bgra;




	// ****** GL_ARB_vertex_array_object ******

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_array_object is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_array_object;


	/**
	 * @brief void glBindVertexArray(GLuint array)
	 */
	PFNGLBINDVERTEXARRAYPROC glBindVertexArray;

	/**
	 * @brief void glDeleteVertexArrays(GLsizei n, const GLuint *arrays)
	 */
	PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;

	/**
	 * @brief void glGenVertexArrays(GLsizei n, GLuint *arrays)
	 */
	PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;

	/**
	 * @brief GLboolean glIsVertexArray(GLuint array)
	 */
	PFNGLISVERTEXARRAYPROC glIsVertexArray;




	// ****** GL_ARB_vertex_attrib_64bit ******

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_attrib_64bit is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_attrib_64bit;


	/**
	 * @brief void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble *params)
	 */
	PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv;

	/**
	 * @brief void glVertexAttribL1d(GLuint index, GLdouble x)
	 */
	PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d;

	/**
	 * @brief void glVertexAttribL1dv(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv;

	/**
	 * @brief void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
	 */
	PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d;

	/**
	 * @brief void glVertexAttribL2dv(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv;

	/**
	 * @brief void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d;

	/**
	 * @brief void glVertexAttribL3dv(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv;

	/**
	 * @brief void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d;

	/**
	 * @brief void glVertexAttribL4dv(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv;

	/**
	 * @brief void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;




	// ****** GL_ARB_vertex_blend ******

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_blend is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_blend;


	/**
	 * @brief void glVertexBlendARB(GLint count)
	 */
	PFNGLVERTEXBLENDARBPROC glVertexBlendARB;

	/**
	 * @brief void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLWEIGHTPOINTERARBPROC glWeightPointerARB;

	/**
	 * @brief void glWeightbvARB(GLint size, const GLbyte *weights)
	 */
	PFNGLWEIGHTBVARBPROC glWeightbvARB;

	/**
	 * @brief void glWeightdvARB(GLint size, const GLdouble *weights)
	 */
	PFNGLWEIGHTDVARBPROC glWeightdvARB;

	/**
	 * @brief void glWeightfvARB(GLint size, const GLfloat *weights)
	 */
	PFNGLWEIGHTFVARBPROC glWeightfvARB;

	/**
	 * @brief void glWeightivARB(GLint size, const GLint *weights)
	 */
	PFNGLWEIGHTIVARBPROC glWeightivARB;

	/**
	 * @brief void glWeightsvARB(GLint size, const GLshort *weights)
	 */
	PFNGLWEIGHTSVARBPROC glWeightsvARB;

	/**
	 * @brief void glWeightubvARB(GLint size, const GLubyte *weights)
	 */
	PFNGLWEIGHTUBVARBPROC glWeightubvARB;

	/**
	 * @brief void glWeightuivARB(GLint size, const GLuint *weights)
	 */
	PFNGLWEIGHTUIVARBPROC glWeightuivARB;

	/**
	 * @brief void glWeightusvARB(GLint size, const GLushort *weights)
	 */
	PFNGLWEIGHTUSVARBPROC glWeightusvARB;




	// ****** GL_ARB_vertex_buffer_object ******

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_buffer_object is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_buffer_object;


	/**
	 * @brief void glBindBufferARB(GLenum target, GLuint buffer)
	 */
	PFNGLBINDBUFFERARBPROC glBindBufferARB;

	/**
	 * @brief void glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage)
	 */
	PFNGLBUFFERDATAARBPROC glBufferDataARB;

	/**
	 * @brief void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data)
	 */
	PFNGLBUFFERSUBDATAARBPROC glBufferSubDataARB;

	/**
	 * @brief void glDeleteBuffersARB(GLsizei n, const GLuint *buffers)
	 */
	PFNGLDELETEBUFFERSARBPROC glDeleteBuffersARB;

	/**
	 * @brief void glGenBuffersARB(GLsizei n, GLuint *buffers)
	 */
	PFNGLGENBUFFERSARBPROC glGenBuffersARB;

	/**
	 * @brief void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETBUFFERPARAMETERIVARBPROC glGetBufferParameterivARB;

	/**
	 * @brief void glGetBufferPointervARB(GLenum target, GLenum pname, GLvoid* *params)
	 */
	PFNGLGETBUFFERPOINTERVARBPROC glGetBufferPointervARB;

	/**
	 * @brief void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data)
	 */
	PFNGLGETBUFFERSUBDATAARBPROC glGetBufferSubDataARB;

	/**
	 * @brief GLboolean glIsBufferARB(GLuint buffer)
	 */
	PFNGLISBUFFERARBPROC glIsBufferARB;

	/**
	 * @brief GLvoid* glMapBufferARB(GLenum target, GLenum access)
	 */
	PFNGLMAPBUFFERARBPROC glMapBufferARB;

	/**
	 * @brief GLboolean glUnmapBufferARB(GLenum target)
	 */
	PFNGLUNMAPBUFFERARBPROC glUnmapBufferARB;




	// ****** GL_ARB_vertex_program ******

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_program is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_program;


	/**
	 * @brief void glBindProgramARB(GLenum target, GLuint program)
	 */
	PFNGLBINDPROGRAMARBPROC glBindProgramARB;

	/**
	 * @brief void glDeleteProgramsARB(GLsizei n, const GLuint *programs)
	 */
	PFNGLDELETEPROGRAMSARBPROC glDeleteProgramsARB;

	/**
	 * @brief void glDisableVertexAttribArrayARB(GLuint index)
	 */
	PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glDisableVertexAttribArrayARB;

	/**
	 * @brief void glEnableVertexAttribArrayARB(GLuint index)
	 */
	PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArrayARB;

	/**
	 * @brief void glGenProgramsARB(GLsizei n, GLuint *programs)
	 */
	PFNGLGENPROGRAMSARBPROC glGenProgramsARB;

	/**
	 * @brief void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble *params)
	 */
	PFNGLGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB;

	/**
	 * @brief void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat *params)
	 */
	PFNGLGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB;

	/**
	 * @brief void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble *params)
	 */
	PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB;

	/**
	 * @brief void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat *params)
	 */
	PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB;

	/**
	 * @brief void glGetProgramStringARB(GLenum target, GLenum pname, GLvoid *string)
	 */
	PFNGLGETPROGRAMSTRINGARBPROC glGetProgramStringARB;

	/**
	 * @brief void glGetProgramivARB(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETPROGRAMIVARBPROC glGetProgramivARB;

	/**
	 * @brief void glGetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid* *pointer)
	 */
	PFNGLGETVERTEXATTRIBPOINTERVARBPROC glGetVertexAttribPointervARB;

	/**
	 * @brief void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble *params)
	 */
	PFNGLGETVERTEXATTRIBDVARBPROC glGetVertexAttribdvARB;

	/**
	 * @brief void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat *params)
	 */
	PFNGLGETVERTEXATTRIBFVARBPROC glGetVertexAttribfvARB;

	/**
	 * @brief void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint *params)
	 */
	PFNGLGETVERTEXATTRIBIVARBPROC glGetVertexAttribivARB;

	/**
	 * @brief GLboolean glIsProgramARB(GLuint program)
	 */
	PFNGLISPROGRAMARBPROC glIsProgramARB;

	/**
	 * @brief void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB;

	/**
	 * @brief void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble *params)
	 */
	PFNGLPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB;

	/**
	 * @brief void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB;

	/**
	 * @brief void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat *params)
	 */
	PFNGLPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB;

	/**
	 * @brief void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB;

	/**
	 * @brief void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble *params)
	 */
	PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB;

	/**
	 * @brief void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB;

	/**
	 * @brief void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params)
	 */
	PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB;

	/**
	 * @brief void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid *string)
	 */
	PFNGLPROGRAMSTRINGARBPROC glProgramStringARB;

	/**
	 * @brief void glVertexAttrib1dARB(GLuint index, GLdouble x)
	 */
	PFNGLVERTEXATTRIB1DARBPROC glVertexAttrib1dARB;

	/**
	 * @brief void glVertexAttrib1dvARB(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB1DVARBPROC glVertexAttrib1dvARB;

	/**
	 * @brief void glVertexAttrib1fARB(GLuint index, GLfloat x)
	 */
	PFNGLVERTEXATTRIB1FARBPROC glVertexAttrib1fARB;

	/**
	 * @brief void glVertexAttrib1fvARB(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB1FVARBPROC glVertexAttrib1fvARB;

	/**
	 * @brief void glVertexAttrib1sARB(GLuint index, GLshort x)
	 */
	PFNGLVERTEXATTRIB1SARBPROC glVertexAttrib1sARB;

	/**
	 * @brief void glVertexAttrib1svARB(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB1SVARBPROC glVertexAttrib1svARB;

	/**
	 * @brief void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
	 */
	PFNGLVERTEXATTRIB2DARBPROC glVertexAttrib2dARB;

	/**
	 * @brief void glVertexAttrib2dvARB(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB2DVARBPROC glVertexAttrib2dvARB;

	/**
	 * @brief void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
	 */
	PFNGLVERTEXATTRIB2FARBPROC glVertexAttrib2fARB;

	/**
	 * @brief void glVertexAttrib2fvARB(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB2FVARBPROC glVertexAttrib2fvARB;

	/**
	 * @brief void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
	 */
	PFNGLVERTEXATTRIB2SARBPROC glVertexAttrib2sARB;

	/**
	 * @brief void glVertexAttrib2svARB(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB2SVARBPROC glVertexAttrib2svARB;

	/**
	 * @brief void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLVERTEXATTRIB3DARBPROC glVertexAttrib3dARB;

	/**
	 * @brief void glVertexAttrib3dvARB(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB3DVARBPROC glVertexAttrib3dvARB;

	/**
	 * @brief void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLVERTEXATTRIB3FARBPROC glVertexAttrib3fARB;

	/**
	 * @brief void glVertexAttrib3fvARB(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB3FVARBPROC glVertexAttrib3fvARB;

	/**
	 * @brief void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
	 */
	PFNGLVERTEXATTRIB3SARBPROC glVertexAttrib3sARB;

	/**
	 * @brief void glVertexAttrib3svARB(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB3SVARBPROC glVertexAttrib3svARB;

	/**
	 * @brief void glVertexAttrib4NbvARB(GLuint index, const GLbyte *v)
	 */
	PFNGLVERTEXATTRIB4NBVARBPROC glVertexAttrib4NbvARB;

	/**
	 * @brief void glVertexAttrib4NivARB(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIB4NIVARBPROC glVertexAttrib4NivARB;

	/**
	 * @brief void glVertexAttrib4NsvARB(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB4NSVARBPROC glVertexAttrib4NsvARB;

	/**
	 * @brief void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
	 */
	PFNGLVERTEXATTRIB4NUBARBPROC glVertexAttrib4NubARB;

	/**
	 * @brief void glVertexAttrib4NubvARB(GLuint index, const GLubyte *v)
	 */
	PFNGLVERTEXATTRIB4NUBVARBPROC glVertexAttrib4NubvARB;

	/**
	 * @brief void glVertexAttrib4NuivARB(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIB4NUIVARBPROC glVertexAttrib4NuivARB;

	/**
	 * @brief void glVertexAttrib4NusvARB(GLuint index, const GLushort *v)
	 */
	PFNGLVERTEXATTRIB4NUSVARBPROC glVertexAttrib4NusvARB;

	/**
	 * @brief void glVertexAttrib4bvARB(GLuint index, const GLbyte *v)
	 */
	PFNGLVERTEXATTRIB4BVARBPROC glVertexAttrib4bvARB;

	/**
	 * @brief void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLVERTEXATTRIB4DARBPROC glVertexAttrib4dARB;

	/**
	 * @brief void glVertexAttrib4dvARB(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB4DVARBPROC glVertexAttrib4dvARB;

	/**
	 * @brief void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLVERTEXATTRIB4FARBPROC glVertexAttrib4fARB;

	/**
	 * @brief void glVertexAttrib4fvARB(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB4FVARBPROC glVertexAttrib4fvARB;

	/**
	 * @brief void glVertexAttrib4ivARB(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIB4IVARBPROC glVertexAttrib4ivARB;

	/**
	 * @brief void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
	 */
	PFNGLVERTEXATTRIB4SARBPROC glVertexAttrib4sARB;

	/**
	 * @brief void glVertexAttrib4svARB(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB4SVARBPROC glVertexAttrib4svARB;

	/**
	 * @brief void glVertexAttrib4ubvARB(GLuint index, const GLubyte *v)
	 */
	PFNGLVERTEXATTRIB4UBVARBPROC glVertexAttrib4ubvARB;

	/**
	 * @brief void glVertexAttrib4uivARB(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIB4UIVARBPROC glVertexAttrib4uivARB;

	/**
	 * @brief void glVertexAttrib4usvARB(GLuint index, const GLushort *v)
	 */
	PFNGLVERTEXATTRIB4USVARBPROC glVertexAttrib4usvARB;

	/**
	 * @brief void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointerARB;




	// ****** GL_ARB_vertex_shader ******

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_shader is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_shader;


	/**
	 * @brief void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB *name)
	 */
	PFNGLBINDATTRIBLOCATIONARBPROC glBindAttribLocationARB;

	/**
	 * @brief void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
	 */
	PFNGLGETACTIVEATTRIBARBPROC glGetActiveAttribARB;

	/**
	 * @brief GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB *name)
	 */
	PFNGLGETATTRIBLOCATIONARBPROC glGetAttribLocationARB;




	// ****** GL_ARB_vertex_type_2_10_10_10_rev ******

	/**
	 * @brief Returns \c true if \b GL_ARB_vertex_type_2_10_10_10_rev is supported, false otherwise.
	 */
	bool isGL_ARB_vertex_type_2_10_10_10_rev;


	/**
	 * @brief void glColorP3ui(GLenum type, GLuint color)
	 */
	PFNGLCOLORP3UIPROC glColorP3ui;

	/**
	 * @brief void glColorP3uiv(GLenum type, const GLuint *color)
	 */
	PFNGLCOLORP3UIVPROC glColorP3uiv;

	/**
	 * @brief void glColorP4ui(GLenum type, GLuint color)
	 */
	PFNGLCOLORP4UIPROC glColorP4ui;

	/**
	 * @brief void glColorP4uiv(GLenum type, const GLuint *color)
	 */
	PFNGLCOLORP4UIVPROC glColorP4uiv;

	/**
	 * @brief void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
	 */
	PFNGLMULTITEXCOORDP1UIPROC glMultiTexCoordP1ui;

	/**
	 * @brief void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint *coords)
	 */
	PFNGLMULTITEXCOORDP1UIVPROC glMultiTexCoordP1uiv;

	/**
	 * @brief void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
	 */
	PFNGLMULTITEXCOORDP2UIPROC glMultiTexCoordP2ui;

	/**
	 * @brief void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint *coords)
	 */
	PFNGLMULTITEXCOORDP2UIVPROC glMultiTexCoordP2uiv;

	/**
	 * @brief void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
	 */
	PFNGLMULTITEXCOORDP3UIPROC glMultiTexCoordP3ui;

	/**
	 * @brief void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint *coords)
	 */
	PFNGLMULTITEXCOORDP3UIVPROC glMultiTexCoordP3uiv;

	/**
	 * @brief void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
	 */
	PFNGLMULTITEXCOORDP4UIPROC glMultiTexCoordP4ui;

	/**
	 * @brief void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint *coords)
	 */
	PFNGLMULTITEXCOORDP4UIVPROC glMultiTexCoordP4uiv;

	/**
	 * @brief void glNormalP3ui(GLenum type, GLuint coords)
	 */
	PFNGLNORMALP3UIPROC glNormalP3ui;

	/**
	 * @brief void glNormalP3uiv(GLenum type, const GLuint *coords)
	 */
	PFNGLNORMALP3UIVPROC glNormalP3uiv;

	/**
	 * @brief void glSecondaryColorP3ui(GLenum type, GLuint color)
	 */
	PFNGLSECONDARYCOLORP3UIPROC glSecondaryColorP3ui;

	/**
	 * @brief void glSecondaryColorP3uiv(GLenum type, const GLuint *color)
	 */
	PFNGLSECONDARYCOLORP3UIVPROC glSecondaryColorP3uiv;

	/**
	 * @brief void glTexCoordP1ui(GLenum type, GLuint coords)
	 */
	PFNGLTEXCOORDP1UIPROC glTexCoordP1ui;

	/**
	 * @brief void glTexCoordP1uiv(GLenum type, const GLuint *coords)
	 */
	PFNGLTEXCOORDP1UIVPROC glTexCoordP1uiv;

	/**
	 * @brief void glTexCoordP2ui(GLenum type, GLuint coords)
	 */
	PFNGLTEXCOORDP2UIPROC glTexCoordP2ui;

	/**
	 * @brief void glTexCoordP2uiv(GLenum type, const GLuint *coords)
	 */
	PFNGLTEXCOORDP2UIVPROC glTexCoordP2uiv;

	/**
	 * @brief void glTexCoordP3ui(GLenum type, GLuint coords)
	 */
	PFNGLTEXCOORDP3UIPROC glTexCoordP3ui;

	/**
	 * @brief void glTexCoordP3uiv(GLenum type, const GLuint *coords)
	 */
	PFNGLTEXCOORDP3UIVPROC glTexCoordP3uiv;

	/**
	 * @brief void glTexCoordP4ui(GLenum type, GLuint coords)
	 */
	PFNGLTEXCOORDP4UIPROC glTexCoordP4ui;

	/**
	 * @brief void glTexCoordP4uiv(GLenum type, const GLuint *coords)
	 */
	PFNGLTEXCOORDP4UIVPROC glTexCoordP4uiv;

	/**
	 * @brief void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
	 */
	PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui;

	/**
	 * @brief void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value)
	 */
	PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv;

	/**
	 * @brief void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
	 */
	PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui;

	/**
	 * @brief void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value)
	 */
	PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv;

	/**
	 * @brief void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
	 */
	PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui;

	/**
	 * @brief void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value)
	 */
	PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv;

	/**
	 * @brief void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
	 */
	PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui;

	/**
	 * @brief void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value)
	 */
	PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv;

	/**
	 * @brief void glVertexP2ui(GLenum type, GLuint value)
	 */
	PFNGLVERTEXP2UIPROC glVertexP2ui;

	/**
	 * @brief void glVertexP2uiv(GLenum type, const GLuint *value)
	 */
	PFNGLVERTEXP2UIVPROC glVertexP2uiv;

	/**
	 * @brief void glVertexP3ui(GLenum type, GLuint value)
	 */
	PFNGLVERTEXP3UIPROC glVertexP3ui;

	/**
	 * @brief void glVertexP3uiv(GLenum type, const GLuint *value)
	 */
	PFNGLVERTEXP3UIVPROC glVertexP3uiv;

	/**
	 * @brief void glVertexP4ui(GLenum type, GLuint value)
	 */
	PFNGLVERTEXP4UIPROC glVertexP4ui;

	/**
	 * @brief void glVertexP4uiv(GLenum type, const GLuint *value)
	 */
	PFNGLVERTEXP4UIVPROC glVertexP4uiv;




	// ****** GL_ARB_viewport_array ******

	/**
	 * @brief Returns \c true if \b GL_ARB_viewport_array is supported, false otherwise.
	 */
	bool isGL_ARB_viewport_array;


	/**
	 * @brief void glDepthRangeArrayv(GLuint first, GLsizei count, const GLclampd *v)
	 */
	PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv;

	/**
	 * @brief void glDepthRangeIndexed(GLuint index, GLclampd n, GLclampd f)
	 */
	PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed;

	/**
	 * @brief void glGetDoublei_v(GLenum target, GLuint index, GLdouble *data)
	 */
	PFNGLGETDOUBLEI_VPROC glGetDoublei_v;

	/**
	 * @brief void glGetFloati_v(GLenum target, GLuint index, GLfloat *data)
	 */
	PFNGLGETFLOATI_VPROC glGetFloati_v;

	/**
	 * @brief void glScissorArrayv(GLuint first, GLsizei count, const GLint *v)
	 */
	PFNGLSCISSORARRAYVPROC glScissorArrayv;

	/**
	 * @brief void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
	 */
	PFNGLSCISSORINDEXEDPROC glScissorIndexed;

	/**
	 * @brief void glScissorIndexedv(GLuint index, const GLint *v)
	 */
	PFNGLSCISSORINDEXEDVPROC glScissorIndexedv;

	/**
	 * @brief void glViewportArrayv(GLuint first, GLsizei count, const GLfloat *v)
	 */
	PFNGLVIEWPORTARRAYVPROC glViewportArrayv;

	/**
	 * @brief void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
	 */
	PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf;

	/**
	 * @brief void glViewportIndexedfv(GLuint index, const GLfloat *v)
	 */
	PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv;




	// ****** GL_ARB_window_pos ******

	/**
	 * @brief Returns \c true if \b GL_ARB_window_pos is supported, false otherwise.
	 */
	bool isGL_ARB_window_pos;


	/**
	 * @brief void glWindowPos2dARB(GLdouble x, GLdouble y)
	 */
	PFNGLWINDOWPOS2DARBPROC glWindowPos2dARB;

	/**
	 * @brief void glWindowPos2dvARB(const GLdouble *v)
	 */
	PFNGLWINDOWPOS2DVARBPROC glWindowPos2dvARB;

	/**
	 * @brief void glWindowPos2fARB(GLfloat x, GLfloat y)
	 */
	PFNGLWINDOWPOS2FARBPROC glWindowPos2fARB;

	/**
	 * @brief void glWindowPos2fvARB(const GLfloat *v)
	 */
	PFNGLWINDOWPOS2FVARBPROC glWindowPos2fvARB;

	/**
	 * @brief void glWindowPos2iARB(GLint x, GLint y)
	 */
	PFNGLWINDOWPOS2IARBPROC glWindowPos2iARB;

	/**
	 * @brief void glWindowPos2ivARB(const GLint *v)
	 */
	PFNGLWINDOWPOS2IVARBPROC glWindowPos2ivARB;

	/**
	 * @brief void glWindowPos2sARB(GLshort x, GLshort y)
	 */
	PFNGLWINDOWPOS2SARBPROC glWindowPos2sARB;

	/**
	 * @brief void glWindowPos2svARB(const GLshort *v)
	 */
	PFNGLWINDOWPOS2SVARBPROC glWindowPos2svARB;

	/**
	 * @brief void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLWINDOWPOS3DARBPROC glWindowPos3dARB;

	/**
	 * @brief void glWindowPos3dvARB(const GLdouble *v)
	 */
	PFNGLWINDOWPOS3DVARBPROC glWindowPos3dvARB;

	/**
	 * @brief void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLWINDOWPOS3FARBPROC glWindowPos3fARB;

	/**
	 * @brief void glWindowPos3fvARB(const GLfloat *v)
	 */
	PFNGLWINDOWPOS3FVARBPROC glWindowPos3fvARB;

	/**
	 * @brief void glWindowPos3iARB(GLint x, GLint y, GLint z)
	 */
	PFNGLWINDOWPOS3IARBPROC glWindowPos3iARB;

	/**
	 * @brief void glWindowPos3ivARB(const GLint *v)
	 */
	PFNGLWINDOWPOS3IVARBPROC glWindowPos3ivARB;

	/**
	 * @brief void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
	 */
	PFNGLWINDOWPOS3SARBPROC glWindowPos3sARB;

	/**
	 * @brief void glWindowPos3svARB(const GLshort *v)
	 */
	PFNGLWINDOWPOS3SVARBPROC glWindowPos3svARB;




	// ****** GL_ATI_draw_buffers ******

	/**
	 * @brief Returns \c true if \b GL_ATI_draw_buffers is supported, false otherwise.
	 */
	bool isGL_ATI_draw_buffers;


	/**
	 * @brief void glDrawBuffersATI(GLsizei n, const GLenum *bufs)
	 */
	PFNGLDRAWBUFFERSATIPROC glDrawBuffersATI;




	// ****** GL_ATI_element_array ******

	/**
	 * @brief Returns \c true if \b GL_ATI_element_array is supported, false otherwise.
	 */
	bool isGL_ATI_element_array;


	/**
	 * @brief void glDrawElementArrayATI(GLenum mode, GLsizei count)
	 */
	PFNGLDRAWELEMENTARRAYATIPROC glDrawElementArrayATI;

	/**
	 * @brief void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
	 */
	PFNGLDRAWRANGEELEMENTARRAYATIPROC glDrawRangeElementArrayATI;

	/**
	 * @brief void glElementPointerATI(GLenum type, const GLvoid *pointer)
	 */
	PFNGLELEMENTPOINTERATIPROC glElementPointerATI;




	// ****** GL_ATI_envmap_bumpmap ******

	/**
	 * @brief Returns \c true if \b GL_ATI_envmap_bumpmap is supported, false otherwise.
	 */
	bool isGL_ATI_envmap_bumpmap;


	/**
	 * @brief void glGetTexBumpParameterfvATI(GLenum pname, GLfloat *param)
	 */
	PFNGLGETTEXBUMPPARAMETERFVATIPROC glGetTexBumpParameterfvATI;

	/**
	 * @brief void glGetTexBumpParameterivATI(GLenum pname, GLint *param)
	 */
	PFNGLGETTEXBUMPPARAMETERIVATIPROC glGetTexBumpParameterivATI;

	/**
	 * @brief void glTexBumpParameterfvATI(GLenum pname, const GLfloat *param)
	 */
	PFNGLTEXBUMPPARAMETERFVATIPROC glTexBumpParameterfvATI;

	/**
	 * @brief void glTexBumpParameterivATI(GLenum pname, const GLint *param)
	 */
	PFNGLTEXBUMPPARAMETERIVATIPROC glTexBumpParameterivATI;




	// ****** GL_ATI_fragment_shader ******

	/**
	 * @brief Returns \c true if \b GL_ATI_fragment_shader is supported, false otherwise.
	 */
	bool isGL_ATI_fragment_shader;


	/**
	 * @brief void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
	 */
	PFNGLALPHAFRAGMENTOP1ATIPROC glAlphaFragmentOp1ATI;

	/**
	 * @brief void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
	 */
	PFNGLALPHAFRAGMENTOP2ATIPROC glAlphaFragmentOp2ATI;

	/**
	 * @brief void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
	 */
	PFNGLALPHAFRAGMENTOP3ATIPROC glAlphaFragmentOp3ATI;

	/**
	 * @brief void glBeginFragmentShaderATI(void)
	 */
	PFNGLBEGINFRAGMENTSHADERATIPROC glBeginFragmentShaderATI;

	/**
	 * @brief void glBindFragmentShaderATI(GLuint id)
	 */
	PFNGLBINDFRAGMENTSHADERATIPROC glBindFragmentShaderATI;

	/**
	 * @brief void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
	 */
	PFNGLCOLORFRAGMENTOP1ATIPROC glColorFragmentOp1ATI;

	/**
	 * @brief void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
	 */
	PFNGLCOLORFRAGMENTOP2ATIPROC glColorFragmentOp2ATI;

	/**
	 * @brief void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
	 */
	PFNGLCOLORFRAGMENTOP3ATIPROC glColorFragmentOp3ATI;

	/**
	 * @brief void glDeleteFragmentShaderATI(GLuint id)
	 */
	PFNGLDELETEFRAGMENTSHADERATIPROC glDeleteFragmentShaderATI;

	/**
	 * @brief void glEndFragmentShaderATI(void)
	 */
	PFNGLENDFRAGMENTSHADERATIPROC glEndFragmentShaderATI;

	/**
	 * @brief GLuint glGenFragmentShadersATI(GLuint range)
	 */
	PFNGLGENFRAGMENTSHADERSATIPROC glGenFragmentShadersATI;

	/**
	 * @brief void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
	 */
	PFNGLPASSTEXCOORDATIPROC glPassTexCoordATI;

	/**
	 * @brief void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
	 */
	PFNGLSAMPLEMAPATIPROC glSampleMapATI;

	/**
	 * @brief void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat *value)
	 */
	PFNGLSETFRAGMENTSHADERCONSTANTATIPROC glSetFragmentShaderConstantATI;




	// ****** GL_ATI_map_object_buffer ******

	/**
	 * @brief Returns \c true if \b GL_ATI_map_object_buffer is supported, false otherwise.
	 */
	bool isGL_ATI_map_object_buffer;


	/**
	 * @brief GLvoid* glMapObjectBufferATI(GLuint buffer)
	 */
	PFNGLMAPOBJECTBUFFERATIPROC glMapObjectBufferATI;

	/**
	 * @brief void glUnmapObjectBufferATI(GLuint buffer)
	 */
	PFNGLUNMAPOBJECTBUFFERATIPROC glUnmapObjectBufferATI;




	// ****** GL_ATI_meminfo ******

	/**
	 * @brief Returns \c true if \b GL_ATI_meminfo is supported, false otherwise.
	 */
	bool isGL_ATI_meminfo;




	// ****** GL_ATI_pixel_format_float ******

	/**
	 * @brief Returns \c true if \b GL_ATI_pixel_format_float is supported, false otherwise.
	 */
	bool isGL_ATI_pixel_format_float;




	// ****** GL_ATI_pn_triangles ******

	/**
	 * @brief Returns \c true if \b GL_ATI_pn_triangles is supported, false otherwise.
	 */
	bool isGL_ATI_pn_triangles;


	/**
	 * @brief void glPNTrianglesfATI(GLenum pname, GLfloat param)
	 */
	PFNGLPNTRIANGLESFATIPROC glPNTrianglesfATI;

	/**
	 * @brief void glPNTrianglesiATI(GLenum pname, GLint param)
	 */
	PFNGLPNTRIANGLESIATIPROC glPNTrianglesiATI;




	// ****** GL_ATI_separate_stencil ******

	/**
	 * @brief Returns \c true if \b GL_ATI_separate_stencil is supported, false otherwise.
	 */
	bool isGL_ATI_separate_stencil;


	/**
	 * @brief void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
	 */
	PFNGLSTENCILFUNCSEPARATEATIPROC glStencilFuncSeparateATI;

	/**
	 * @brief void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
	 */
	PFNGLSTENCILOPSEPARATEATIPROC glStencilOpSeparateATI;




	// ****** GL_ATI_text_fragment_shader ******

	/**
	 * @brief Returns \c true if \b GL_ATI_text_fragment_shader is supported, false otherwise.
	 */
	bool isGL_ATI_text_fragment_shader;




	// ****** GL_ATI_texture_env_combine3 ******

	/**
	 * @brief Returns \c true if \b GL_ATI_texture_env_combine3 is supported, false otherwise.
	 */
	bool isGL_ATI_texture_env_combine3;




	// ****** GL_ATI_texture_float ******

	/**
	 * @brief Returns \c true if \b GL_ATI_texture_float is supported, false otherwise.
	 */
	bool isGL_ATI_texture_float;




	// ****** GL_ATI_texture_mirror_once ******

	/**
	 * @brief Returns \c true if \b GL_ATI_texture_mirror_once is supported, false otherwise.
	 */
	bool isGL_ATI_texture_mirror_once;




	// ****** GL_ATI_vertex_array_object ******

	/**
	 * @brief Returns \c true if \b GL_ATI_vertex_array_object is supported, false otherwise.
	 */
	bool isGL_ATI_vertex_array_object;


	/**
	 * @brief void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
	 */
	PFNGLARRAYOBJECTATIPROC glArrayObjectATI;

	/**
	 * @brief void glFreeObjectBufferATI(GLuint buffer)
	 */
	PFNGLFREEOBJECTBUFFERATIPROC glFreeObjectBufferATI;

	/**
	 * @brief void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat *params)
	 */
	PFNGLGETARRAYOBJECTFVATIPROC glGetArrayObjectfvATI;

	/**
	 * @brief void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint *params)
	 */
	PFNGLGETARRAYOBJECTIVATIPROC glGetArrayObjectivATI;

	/**
	 * @brief void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat *params)
	 */
	PFNGLGETOBJECTBUFFERFVATIPROC glGetObjectBufferfvATI;

	/**
	 * @brief void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint *params)
	 */
	PFNGLGETOBJECTBUFFERIVATIPROC glGetObjectBufferivATI;

	/**
	 * @brief void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat *params)
	 */
	PFNGLGETVARIANTARRAYOBJECTFVATIPROC glGetVariantArrayObjectfvATI;

	/**
	 * @brief void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint *params)
	 */
	PFNGLGETVARIANTARRAYOBJECTIVATIPROC glGetVariantArrayObjectivATI;

	/**
	 * @brief GLboolean glIsObjectBufferATI(GLuint buffer)
	 */
	PFNGLISOBJECTBUFFERATIPROC glIsObjectBufferATI;

	/**
	 * @brief GLuint glNewObjectBufferATI(GLsizei size, const GLvoid *pointer, GLenum usage)
	 */
	PFNGLNEWOBJECTBUFFERATIPROC glNewObjectBufferATI;

	/**
	 * @brief void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve)
	 */
	PFNGLUPDATEOBJECTBUFFERATIPROC glUpdateObjectBufferATI;

	/**
	 * @brief void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
	 */
	PFNGLVARIANTARRAYOBJECTATIPROC glVariantArrayObjectATI;




	// ****** GL_ATI_vertex_attrib_array_object ******

	/**
	 * @brief Returns \c true if \b GL_ATI_vertex_attrib_array_object is supported, false otherwise.
	 */
	bool isGL_ATI_vertex_attrib_array_object;


	/**
	 * @brief void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat *params)
	 */
	PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC glGetVertexAttribArrayObjectfvATI;

	/**
	 * @brief void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint *params)
	 */
	PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC glGetVertexAttribArrayObjectivATI;

	/**
	 * @brief void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
	 */
	PFNGLVERTEXATTRIBARRAYOBJECTATIPROC glVertexAttribArrayObjectATI;




	// ****** GL_ATI_vertex_streams ******

	/**
	 * @brief Returns \c true if \b GL_ATI_vertex_streams is supported, false otherwise.
	 */
	bool isGL_ATI_vertex_streams;


	/**
	 * @brief void glClientActiveVertexStreamATI(GLenum stream)
	 */
	PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC glClientActiveVertexStreamATI;

	/**
	 * @brief void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
	 */
	PFNGLNORMALSTREAM3BATIPROC glNormalStream3bATI;

	/**
	 * @brief void glNormalStream3bvATI(GLenum stream, const GLbyte *coords)
	 */
	PFNGLNORMALSTREAM3BVATIPROC glNormalStream3bvATI;

	/**
	 * @brief void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
	 */
	PFNGLNORMALSTREAM3DATIPROC glNormalStream3dATI;

	/**
	 * @brief void glNormalStream3dvATI(GLenum stream, const GLdouble *coords)
	 */
	PFNGLNORMALSTREAM3DVATIPROC glNormalStream3dvATI;

	/**
	 * @brief void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
	 */
	PFNGLNORMALSTREAM3FATIPROC glNormalStream3fATI;

	/**
	 * @brief void glNormalStream3fvATI(GLenum stream, const GLfloat *coords)
	 */
	PFNGLNORMALSTREAM3FVATIPROC glNormalStream3fvATI;

	/**
	 * @brief void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
	 */
	PFNGLNORMALSTREAM3IATIPROC glNormalStream3iATI;

	/**
	 * @brief void glNormalStream3ivATI(GLenum stream, const GLint *coords)
	 */
	PFNGLNORMALSTREAM3IVATIPROC glNormalStream3ivATI;

	/**
	 * @brief void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
	 */
	PFNGLNORMALSTREAM3SATIPROC glNormalStream3sATI;

	/**
	 * @brief void glNormalStream3svATI(GLenum stream, const GLshort *coords)
	 */
	PFNGLNORMALSTREAM3SVATIPROC glNormalStream3svATI;

	/**
	 * @brief void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
	 */
	PFNGLVERTEXBLENDENVFATIPROC glVertexBlendEnvfATI;

	/**
	 * @brief void glVertexBlendEnviATI(GLenum pname, GLint param)
	 */
	PFNGLVERTEXBLENDENVIATIPROC glVertexBlendEnviATI;

	/**
	 * @brief void glVertexStream1dATI(GLenum stream, GLdouble x)
	 */
	PFNGLVERTEXSTREAM1DATIPROC glVertexStream1dATI;

	/**
	 * @brief void glVertexStream1dvATI(GLenum stream, const GLdouble *coords)
	 */
	PFNGLVERTEXSTREAM1DVATIPROC glVertexStream1dvATI;

	/**
	 * @brief void glVertexStream1fATI(GLenum stream, GLfloat x)
	 */
	PFNGLVERTEXSTREAM1FATIPROC glVertexStream1fATI;

	/**
	 * @brief void glVertexStream1fvATI(GLenum stream, const GLfloat *coords)
	 */
	PFNGLVERTEXSTREAM1FVATIPROC glVertexStream1fvATI;

	/**
	 * @brief void glVertexStream1iATI(GLenum stream, GLint x)
	 */
	PFNGLVERTEXSTREAM1IATIPROC glVertexStream1iATI;

	/**
	 * @brief void glVertexStream1ivATI(GLenum stream, const GLint *coords)
	 */
	PFNGLVERTEXSTREAM1IVATIPROC glVertexStream1ivATI;

	/**
	 * @brief void glVertexStream1sATI(GLenum stream, GLshort x)
	 */
	PFNGLVERTEXSTREAM1SATIPROC glVertexStream1sATI;

	/**
	 * @brief void glVertexStream1svATI(GLenum stream, const GLshort *coords)
	 */
	PFNGLVERTEXSTREAM1SVATIPROC glVertexStream1svATI;

	/**
	 * @brief void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
	 */
	PFNGLVERTEXSTREAM2DATIPROC glVertexStream2dATI;

	/**
	 * @brief void glVertexStream2dvATI(GLenum stream, const GLdouble *coords)
	 */
	PFNGLVERTEXSTREAM2DVATIPROC glVertexStream2dvATI;

	/**
	 * @brief void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
	 */
	PFNGLVERTEXSTREAM2FATIPROC glVertexStream2fATI;

	/**
	 * @brief void glVertexStream2fvATI(GLenum stream, const GLfloat *coords)
	 */
	PFNGLVERTEXSTREAM2FVATIPROC glVertexStream2fvATI;

	/**
	 * @brief void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
	 */
	PFNGLVERTEXSTREAM2IATIPROC glVertexStream2iATI;

	/**
	 * @brief void glVertexStream2ivATI(GLenum stream, const GLint *coords)
	 */
	PFNGLVERTEXSTREAM2IVATIPROC glVertexStream2ivATI;

	/**
	 * @brief void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
	 */
	PFNGLVERTEXSTREAM2SATIPROC glVertexStream2sATI;

	/**
	 * @brief void glVertexStream2svATI(GLenum stream, const GLshort *coords)
	 */
	PFNGLVERTEXSTREAM2SVATIPROC glVertexStream2svATI;

	/**
	 * @brief void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLVERTEXSTREAM3DATIPROC glVertexStream3dATI;

	/**
	 * @brief void glVertexStream3dvATI(GLenum stream, const GLdouble *coords)
	 */
	PFNGLVERTEXSTREAM3DVATIPROC glVertexStream3dvATI;

	/**
	 * @brief void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLVERTEXSTREAM3FATIPROC glVertexStream3fATI;

	/**
	 * @brief void glVertexStream3fvATI(GLenum stream, const GLfloat *coords)
	 */
	PFNGLVERTEXSTREAM3FVATIPROC glVertexStream3fvATI;

	/**
	 * @brief void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
	 */
	PFNGLVERTEXSTREAM3IATIPROC glVertexStream3iATI;

	/**
	 * @brief void glVertexStream3ivATI(GLenum stream, const GLint *coords)
	 */
	PFNGLVERTEXSTREAM3IVATIPROC glVertexStream3ivATI;

	/**
	 * @brief void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
	 */
	PFNGLVERTEXSTREAM3SATIPROC glVertexStream3sATI;

	/**
	 * @brief void glVertexStream3svATI(GLenum stream, const GLshort *coords)
	 */
	PFNGLVERTEXSTREAM3SVATIPROC glVertexStream3svATI;

	/**
	 * @brief void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLVERTEXSTREAM4DATIPROC glVertexStream4dATI;

	/**
	 * @brief void glVertexStream4dvATI(GLenum stream, const GLdouble *coords)
	 */
	PFNGLVERTEXSTREAM4DVATIPROC glVertexStream4dvATI;

	/**
	 * @brief void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLVERTEXSTREAM4FATIPROC glVertexStream4fATI;

	/**
	 * @brief void glVertexStream4fvATI(GLenum stream, const GLfloat *coords)
	 */
	PFNGLVERTEXSTREAM4FVATIPROC glVertexStream4fvATI;

	/**
	 * @brief void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
	 */
	PFNGLVERTEXSTREAM4IATIPROC glVertexStream4iATI;

	/**
	 * @brief void glVertexStream4ivATI(GLenum stream, const GLint *coords)
	 */
	PFNGLVERTEXSTREAM4IVATIPROC glVertexStream4ivATI;

	/**
	 * @brief void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
	 */
	PFNGLVERTEXSTREAM4SATIPROC glVertexStream4sATI;

	/**
	 * @brief void glVertexStream4svATI(GLenum stream, const GLshort *coords)
	 */
	PFNGLVERTEXSTREAM4SVATIPROC glVertexStream4svATI;




	// ****** GL_EXT_422_pixels ******

	/**
	 * @brief Returns \c true if \b GL_EXT_422_pixels is supported, false otherwise.
	 */
	bool isGL_EXT_422_pixels;




	// ****** GL_EXT_abgr ******

	/**
	 * @brief Returns \c true if \b GL_EXT_abgr is supported, false otherwise.
	 */
	bool isGL_EXT_abgr;




	// ****** GL_EXT_bgra ******

	/**
	 * @brief Returns \c true if \b GL_EXT_bgra is supported, false otherwise.
	 */
	bool isGL_EXT_bgra;




	// ****** GL_EXT_bindable_uniform ******

	/**
	 * @brief Returns \c true if \b GL_EXT_bindable_uniform is supported, false otherwise.
	 */
	bool isGL_EXT_bindable_uniform;


	/**
	 * @brief GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
	 */
	PFNGLGETUNIFORMBUFFERSIZEEXTPROC glGetUniformBufferSizeEXT;

	/**
	 * @brief GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
	 */
	PFNGLGETUNIFORMOFFSETEXTPROC glGetUniformOffsetEXT;

	/**
	 * @brief void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
	 */
	PFNGLUNIFORMBUFFEREXTPROC glUniformBufferEXT;




	// ****** GL_EXT_blend_color ******

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_color is supported, false otherwise.
	 */
	bool isGL_EXT_blend_color;


	/**
	 * @brief void glBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
	 */
	PFNGLBLENDCOLOREXTPROC glBlendColorEXT;




	// ****** GL_EXT_blend_equation_separate ******

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_equation_separate is supported, false otherwise.
	 */
	bool isGL_EXT_blend_equation_separate;


	/**
	 * @brief void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
	 */
	PFNGLBLENDEQUATIONSEPARATEEXTPROC glBlendEquationSeparateEXT;




	// ****** GL_EXT_blend_func_separate ******

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_func_separate is supported, false otherwise.
	 */
	bool isGL_EXT_blend_func_separate;


	/**
	 * @brief void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
	 */
	PFNGLBLENDFUNCSEPARATEEXTPROC glBlendFuncSeparateEXT;




	// ****** GL_EXT_blend_logic_op ******

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_logic_op is supported, false otherwise.
	 */
	bool isGL_EXT_blend_logic_op;




	// ****** GL_EXT_blend_minmax ******

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_minmax is supported, false otherwise.
	 */
	bool isGL_EXT_blend_minmax;


	/**
	 * @brief void glBlendEquationEXT(GLenum mode)
	 */
	PFNGLBLENDEQUATIONEXTPROC glBlendEquationEXT;




	// ****** GL_EXT_blend_subtract ******

	/**
	 * @brief Returns \c true if \b GL_EXT_blend_subtract is supported, false otherwise.
	 */
	bool isGL_EXT_blend_subtract;




	// ****** GL_EXT_clip_volume_hint ******

	/**
	 * @brief Returns \c true if \b GL_EXT_clip_volume_hint is supported, false otherwise.
	 */
	bool isGL_EXT_clip_volume_hint;




	// ****** GL_EXT_cmyka ******

	/**
	 * @brief Returns \c true if \b GL_EXT_cmyka is supported, false otherwise.
	 */
	bool isGL_EXT_cmyka;




	// ****** GL_EXT_color_subtable ******

	/**
	 * @brief Returns \c true if \b GL_EXT_color_subtable is supported, false otherwise.
	 */
	bool isGL_EXT_color_subtable;


	/**
	 * @brief void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data)
	 */
	PFNGLCOLORSUBTABLEEXTPROC glColorSubTableEXT;

	/**
	 * @brief void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
	 */
	PFNGLCOPYCOLORSUBTABLEEXTPROC glCopyColorSubTableEXT;




	// ****** GL_EXT_compiled_vertex_array ******

	/**
	 * @brief Returns \c true if \b GL_EXT_compiled_vertex_array is supported, false otherwise.
	 */
	bool isGL_EXT_compiled_vertex_array;


	/**
	 * @brief void glLockArraysEXT(GLint first, GLsizei count)
	 */
	PFNGLLOCKARRAYSEXTPROC glLockArraysEXT;

	/**
	 * @brief void glUnlockArraysEXT(void)
	 */
	PFNGLUNLOCKARRAYSEXTPROC glUnlockArraysEXT;




	// ****** GL_EXT_convolution ******

	/**
	 * @brief Returns \c true if \b GL_EXT_convolution is supported, false otherwise.
	 */
	bool isGL_EXT_convolution;


	/**
	 * @brief void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image)
	 */
	PFNGLCONVOLUTIONFILTER1DEXTPROC glConvolutionFilter1DEXT;

	/**
	 * @brief void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image)
	 */
	PFNGLCONVOLUTIONFILTER2DEXTPROC glConvolutionFilter2DEXT;

	/**
	 * @brief void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
	 */
	PFNGLCONVOLUTIONPARAMETERFEXTPROC glConvolutionParameterfEXT;

	/**
	 * @brief void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLCONVOLUTIONPARAMETERFVEXTPROC glConvolutionParameterfvEXT;

	/**
	 * @brief void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
	 */
	PFNGLCONVOLUTIONPARAMETERIEXTPROC glConvolutionParameteriEXT;

	/**
	 * @brief void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLCONVOLUTIONPARAMETERIVEXTPROC glConvolutionParameterivEXT;

	/**
	 * @brief void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
	 */
	PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glCopyConvolutionFilter1DEXT;

	/**
	 * @brief void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
	 */
	PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glCopyConvolutionFilter2DEXT;

	/**
	 * @brief void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, GLvoid *image)
	 */
	PFNGLGETCONVOLUTIONFILTEREXTPROC glGetConvolutionFilterEXT;

	/**
	 * @brief void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glGetConvolutionParameterfvEXT;

	/**
	 * @brief void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glGetConvolutionParameterivEXT;

	/**
	 * @brief void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
	 */
	PFNGLGETSEPARABLEFILTEREXTPROC glGetSeparableFilterEXT;

	/**
	 * @brief void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column)
	 */
	PFNGLSEPARABLEFILTER2DEXTPROC glSeparableFilter2DEXT;




	// ****** GL_EXT_coordinate_frame ******

	/**
	 * @brief Returns \c true if \b GL_EXT_coordinate_frame is supported, false otherwise.
	 */
	bool isGL_EXT_coordinate_frame;


	/**
	 * @brief void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
	 */
	PFNGLBINORMAL3BEXTPROC glBinormal3bEXT;

	/**
	 * @brief void glBinormal3bvEXT(const GLbyte *v)
	 */
	PFNGLBINORMAL3BVEXTPROC glBinormal3bvEXT;

	/**
	 * @brief void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
	 */
	PFNGLBINORMAL3DEXTPROC glBinormal3dEXT;

	/**
	 * @brief void glBinormal3dvEXT(const GLdouble *v)
	 */
	PFNGLBINORMAL3DVEXTPROC glBinormal3dvEXT;

	/**
	 * @brief void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
	 */
	PFNGLBINORMAL3FEXTPROC glBinormal3fEXT;

	/**
	 * @brief void glBinormal3fvEXT(const GLfloat *v)
	 */
	PFNGLBINORMAL3FVEXTPROC glBinormal3fvEXT;

	/**
	 * @brief void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
	 */
	PFNGLBINORMAL3IEXTPROC glBinormal3iEXT;

	/**
	 * @brief void glBinormal3ivEXT(const GLint *v)
	 */
	PFNGLBINORMAL3IVEXTPROC glBinormal3ivEXT;

	/**
	 * @brief void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
	 */
	PFNGLBINORMAL3SEXTPROC glBinormal3sEXT;

	/**
	 * @brief void glBinormal3svEXT(const GLshort *v)
	 */
	PFNGLBINORMAL3SVEXTPROC glBinormal3svEXT;

	/**
	 * @brief void glBinormalPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLBINORMALPOINTEREXTPROC glBinormalPointerEXT;

	/**
	 * @brief void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
	 */
	PFNGLTANGENT3BEXTPROC glTangent3bEXT;

	/**
	 * @brief void glTangent3bvEXT(const GLbyte *v)
	 */
	PFNGLTANGENT3BVEXTPROC glTangent3bvEXT;

	/**
	 * @brief void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
	 */
	PFNGLTANGENT3DEXTPROC glTangent3dEXT;

	/**
	 * @brief void glTangent3dvEXT(const GLdouble *v)
	 */
	PFNGLTANGENT3DVEXTPROC glTangent3dvEXT;

	/**
	 * @brief void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
	 */
	PFNGLTANGENT3FEXTPROC glTangent3fEXT;

	/**
	 * @brief void glTangent3fvEXT(const GLfloat *v)
	 */
	PFNGLTANGENT3FVEXTPROC glTangent3fvEXT;

	/**
	 * @brief void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
	 */
	PFNGLTANGENT3IEXTPROC glTangent3iEXT;

	/**
	 * @brief void glTangent3ivEXT(const GLint *v)
	 */
	PFNGLTANGENT3IVEXTPROC glTangent3ivEXT;

	/**
	 * @brief void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
	 */
	PFNGLTANGENT3SEXTPROC glTangent3sEXT;

	/**
	 * @brief void glTangent3svEXT(const GLshort *v)
	 */
	PFNGLTANGENT3SVEXTPROC glTangent3svEXT;

	/**
	 * @brief void glTangentPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLTANGENTPOINTEREXTPROC glTangentPointerEXT;




	// ****** GL_EXT_copy_texture ******

	/**
	 * @brief Returns \c true if \b GL_EXT_copy_texture is supported, false otherwise.
	 */
	bool isGL_EXT_copy_texture;


	/**
	 * @brief void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
	 */
	PFNGLCOPYTEXIMAGE1DEXTPROC glCopyTexImage1DEXT;

	/**
	 * @brief void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
	 */
	PFNGLCOPYTEXIMAGE2DEXTPROC glCopyTexImage2DEXT;

	/**
	 * @brief void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
	 */
	PFNGLCOPYTEXSUBIMAGE1DEXTPROC glCopyTexSubImage1DEXT;

	/**
	 * @brief void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	 */
	PFNGLCOPYTEXSUBIMAGE2DEXTPROC glCopyTexSubImage2DEXT;

	/**
	 * @brief void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	 */
	PFNGLCOPYTEXSUBIMAGE3DEXTPROC glCopyTexSubImage3DEXT;




	// ****** GL_EXT_cull_vertex ******

	/**
	 * @brief Returns \c true if \b GL_EXT_cull_vertex is supported, false otherwise.
	 */
	bool isGL_EXT_cull_vertex;


	/**
	 * @brief void glCullParameterdvEXT(GLenum pname, GLdouble *params)
	 */
	PFNGLCULLPARAMETERDVEXTPROC glCullParameterdvEXT;

	/**
	 * @brief void glCullParameterfvEXT(GLenum pname, GLfloat *params)
	 */
	PFNGLCULLPARAMETERFVEXTPROC glCullParameterfvEXT;




	// ****** GL_EXT_depth_bounds_test ******

	/**
	 * @brief Returns \c true if \b GL_EXT_depth_bounds_test is supported, false otherwise.
	 */
	bool isGL_EXT_depth_bounds_test;


	/**
	 * @brief void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
	 */
	PFNGLDEPTHBOUNDSEXTPROC glDepthBoundsEXT;




	// ****** GL_EXT_direct_state_access ******

	/**
	 * @brief Returns \c true if \b GL_EXT_direct_state_access is supported, false otherwise.
	 */
	bool isGL_EXT_direct_state_access;


	/**
	 * @brief void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
	 */
	PFNGLBINDMULTITEXTUREEXTPROC glBindMultiTextureEXT;

	/**
	 * @brief GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
	 */
	PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glCheckNamedFramebufferStatusEXT;

	/**
	 * @brief void glClientAttribDefaultEXT(GLbitfield mask)
	 */
	PFNGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT;

	/**
	 * @brief void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glCompressedMultiTexImage1DEXT;

	/**
	 * @brief void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glCompressedMultiTexImage2DEXT;

	/**
	 * @brief void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glCompressedMultiTexImage3DEXT;

	/**
	 * @brief void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC glCompressedMultiTexSubImage1DEXT;

	/**
	 * @brief void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC glCompressedMultiTexSubImage2DEXT;

	/**
	 * @brief void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC glCompressedMultiTexSubImage3DEXT;

	/**
	 * @brief void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glCompressedTextureImage1DEXT;

	/**
	 * @brief void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glCompressedTextureImage2DEXT;

	/**
	 * @brief void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glCompressedTextureImage3DEXT;

	/**
	 * @brief void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glCompressedTextureSubImage1DEXT;

	/**
	 * @brief void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glCompressedTextureSubImage2DEXT;

	/**
	 * @brief void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits)
	 */
	PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glCompressedTextureSubImage3DEXT;

	/**
	 * @brief void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
	 */
	PFNGLCOPYMULTITEXIMAGE1DEXTPROC glCopyMultiTexImage1DEXT;

	/**
	 * @brief void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
	 */
	PFNGLCOPYMULTITEXIMAGE2DEXTPROC glCopyMultiTexImage2DEXT;

	/**
	 * @brief void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
	 */
	PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glCopyMultiTexSubImage1DEXT;

	/**
	 * @brief void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	 */
	PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glCopyMultiTexSubImage2DEXT;

	/**
	 * @brief void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	 */
	PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glCopyMultiTexSubImage3DEXT;

	/**
	 * @brief void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
	 */
	PFNGLCOPYTEXTUREIMAGE1DEXTPROC glCopyTextureImage1DEXT;

	/**
	 * @brief void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
	 */
	PFNGLCOPYTEXTUREIMAGE2DEXTPROC glCopyTextureImage2DEXT;

	/**
	 * @brief void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
	 */
	PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glCopyTextureSubImage1DEXT;

	/**
	 * @brief void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	 */
	PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glCopyTextureSubImage2DEXT;

	/**
	 * @brief void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	 */
	PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glCopyTextureSubImage3DEXT;

	/**
	 * @brief void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
	 */
	PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT;

	/**
	 * @brief void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
	 */
	PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT;

	/**
	 * @brief void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
	 */
	PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glFlushMappedNamedBufferRangeEXT;

	/**
	 * @brief void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
	 */
	PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glFramebufferDrawBufferEXT;

	/**
	 * @brief void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum *bufs)
	 */
	PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glFramebufferDrawBuffersEXT;

	/**
	 * @brief void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
	 */
	PFNGLFRAMEBUFFERREADBUFFEREXTPROC glFramebufferReadBufferEXT;

	/**
	 * @brief void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
	 */
	PFNGLGENERATEMULTITEXMIPMAPEXTPROC glGenerateMultiTexMipmapEXT;

	/**
	 * @brief void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
	 */
	PFNGLGENERATETEXTUREMIPMAPEXTPROC glGenerateTextureMipmapEXT;

	/**
	 * @brief void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, GLvoid *img)
	 */
	PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glGetCompressedMultiTexImageEXT;

	/**
	 * @brief void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, GLvoid *img)
	 */
	PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glGetCompressedTextureImageEXT;

	/**
	 * @brief void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble *data)
	 */
	PFNGLGETDOUBLEINDEXEDVEXTPROC glGetDoubleIndexedvEXT;

	/**
	 * @brief void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat *data)
	 */
	PFNGLGETFLOATINDEXEDVEXTPROC glGetFloatIndexedvEXT;

	/**
	 * @brief void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint *params)
	 */
	PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glGetFramebufferParameterivEXT;

	/**
	 * @brief void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETMULTITEXENVFVEXTPROC glGetMultiTexEnvfvEXT;

	/**
	 * @brief void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETMULTITEXENVIVEXTPROC glGetMultiTexEnvivEXT;

	/**
	 * @brief void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params)
	 */
	PFNGLGETMULTITEXGENDVEXTPROC glGetMultiTexGendvEXT;

	/**
	 * @brief void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params)
	 */
	PFNGLGETMULTITEXGENFVEXTPROC glGetMultiTexGenfvEXT;

	/**
	 * @brief void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint *params)
	 */
	PFNGLGETMULTITEXGENIVEXTPROC glGetMultiTexGenivEXT;

	/**
	 * @brief void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
	 */
	PFNGLGETMULTITEXIMAGEEXTPROC glGetMultiTexImageEXT;

	/**
	 * @brief void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params)
	 */
	PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glGetMultiTexLevelParameterfvEXT;

	/**
	 * @brief void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params)
	 */
	PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glGetMultiTexLevelParameterivEXT;

	/**
	 * @brief void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETMULTITEXPARAMETERIIVEXTPROC glGetMultiTexParameterIivEXT;

	/**
	 * @brief void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint *params)
	 */
	PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glGetMultiTexParameterIuivEXT;

	/**
	 * @brief void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETMULTITEXPARAMETERFVEXTPROC glGetMultiTexParameterfvEXT;

	/**
	 * @brief void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETMULTITEXPARAMETERIVEXTPROC glGetMultiTexParameterivEXT;

	/**
	 * @brief void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint *params)
	 */
	PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glGetNamedBufferParameterivEXT;

	/**
	 * @brief void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, GLvoid* *params)
	 */
	PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glGetNamedBufferPointervEXT;

	/**
	 * @brief void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid *data)
	 */
	PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glGetNamedBufferSubDataEXT;

	/**
	 * @brief void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params)
	 */
	PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetNamedFramebufferAttachmentParameterivEXT;

	/**
	 * @brief void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint *params)
	 */
	PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC glGetNamedProgramLocalParameterIivEXT;

	/**
	 * @brief void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint *params)
	 */
	PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC glGetNamedProgramLocalParameterIuivEXT;

	/**
	 * @brief void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble *params)
	 */
	PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC glGetNamedProgramLocalParameterdvEXT;

	/**
	 * @brief void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat *params)
	 */
	PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC glGetNamedProgramLocalParameterfvEXT;

	/**
	 * @brief void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, GLvoid *string)
	 */
	PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glGetNamedProgramStringEXT;

	/**
	 * @brief void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETNAMEDPROGRAMIVEXTPROC glGetNamedProgramivEXT;

	/**
	 * @brief void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint *params)
	 */
	PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC glGetNamedRenderbufferParameterivEXT;

	/**
	 * @brief void glGetPointerIndexedvEXT(GLenum target, GLuint index, GLvoid* *data)
	 */
	PFNGLGETPOINTERINDEXEDVEXTPROC glGetPointerIndexedvEXT;

	/**
	 * @brief void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
	 */
	PFNGLGETTEXTUREIMAGEEXTPROC glGetTextureImageEXT;

	/**
	 * @brief void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params)
	 */
	PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glGetTextureLevelParameterfvEXT;

	/**
	 * @brief void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params)
	 */
	PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glGetTextureLevelParameterivEXT;

	/**
	 * @brief void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETTEXTUREPARAMETERIIVEXTPROC glGetTextureParameterIivEXT;

	/**
	 * @brief void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint *params)
	 */
	PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glGetTextureParameterIuivEXT;

	/**
	 * @brief void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETTEXTUREPARAMETERFVEXTPROC glGetTextureParameterfvEXT;

	/**
	 * @brief void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETTEXTUREPARAMETERIVEXTPROC glGetTextureParameterivEXT;

	/**
	 * @brief GLvoid* glMapNamedBufferEXT(GLuint buffer, GLenum access)
	 */
	PFNGLMAPNAMEDBUFFEREXTPROC glMapNamedBufferEXT;

	/**
	 * @brief GLvoid* glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access)
	 */
	PFNGLMAPNAMEDBUFFERRANGEEXTPROC glMapNamedBufferRangeEXT;

	/**
	 * @brief void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
	 */
	PFNGLMATRIXFRUSTUMEXTPROC glMatrixFrustumEXT;

	/**
	 * @brief void glMatrixLoadIdentityEXT(GLenum mode)
	 */
	PFNGLMATRIXLOADIDENTITYEXTPROC glMatrixLoadIdentityEXT;

	/**
	 * @brief void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble *m)
	 */
	PFNGLMATRIXLOADTRANSPOSEDEXTPROC glMatrixLoadTransposedEXT;

	/**
	 * @brief void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat *m)
	 */
	PFNGLMATRIXLOADTRANSPOSEFEXTPROC glMatrixLoadTransposefEXT;

	/**
	 * @brief void glMatrixLoaddEXT(GLenum mode, const GLdouble *m)
	 */
	PFNGLMATRIXLOADDEXTPROC glMatrixLoaddEXT;

	/**
	 * @brief void glMatrixLoadfEXT(GLenum mode, const GLfloat *m)
	 */
	PFNGLMATRIXLOADFEXTPROC glMatrixLoadfEXT;

	/**
	 * @brief void glMatrixMultTransposedEXT(GLenum mode, const GLdouble *m)
	 */
	PFNGLMATRIXMULTTRANSPOSEDEXTPROC glMatrixMultTransposedEXT;

	/**
	 * @brief void glMatrixMultTransposefEXT(GLenum mode, const GLfloat *m)
	 */
	PFNGLMATRIXMULTTRANSPOSEFEXTPROC glMatrixMultTransposefEXT;

	/**
	 * @brief void glMatrixMultdEXT(GLenum mode, const GLdouble *m)
	 */
	PFNGLMATRIXMULTDEXTPROC glMatrixMultdEXT;

	/**
	 * @brief void glMatrixMultfEXT(GLenum mode, const GLfloat *m)
	 */
	PFNGLMATRIXMULTFEXTPROC glMatrixMultfEXT;

	/**
	 * @brief void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
	 */
	PFNGLMATRIXORTHOEXTPROC glMatrixOrthoEXT;

	/**
	 * @brief void glMatrixPopEXT(GLenum mode)
	 */
	PFNGLMATRIXPOPEXTPROC glMatrixPopEXT;

	/**
	 * @brief void glMatrixPushEXT(GLenum mode)
	 */
	PFNGLMATRIXPUSHEXTPROC glMatrixPushEXT;

	/**
	 * @brief void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLMATRIXROTATEDEXTPROC glMatrixRotatedEXT;

	/**
	 * @brief void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLMATRIXROTATEFEXTPROC glMatrixRotatefEXT;

	/**
	 * @brief void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLMATRIXSCALEDEXTPROC glMatrixScaledEXT;

	/**
	 * @brief void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLMATRIXSCALEFEXTPROC glMatrixScalefEXT;

	/**
	 * @brief void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLMATRIXTRANSLATEDEXTPROC glMatrixTranslatedEXT;

	/**
	 * @brief void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLMATRIXTRANSLATEFEXTPROC glMatrixTranslatefEXT;

	/**
	 * @brief void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
	 */
	PFNGLMULTITEXBUFFEREXTPROC glMultiTexBufferEXT;

	/**
	 * @brief void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT;

	/**
	 * @brief void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
	 */
	PFNGLMULTITEXENVFEXTPROC glMultiTexEnvfEXT;

	/**
	 * @brief void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLMULTITEXENVFVEXTPROC glMultiTexEnvfvEXT;

	/**
	 * @brief void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
	 */
	PFNGLMULTITEXENVIEXTPROC glMultiTexEnviEXT;

	/**
	 * @brief void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLMULTITEXENVIVEXTPROC glMultiTexEnvivEXT;

	/**
	 * @brief void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
	 */
	PFNGLMULTITEXGENDEXTPROC glMultiTexGendEXT;

	/**
	 * @brief void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params)
	 */
	PFNGLMULTITEXGENDVEXTPROC glMultiTexGendvEXT;

	/**
	 * @brief void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
	 */
	PFNGLMULTITEXGENFEXTPROC glMultiTexGenfEXT;

	/**
	 * @brief void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params)
	 */
	PFNGLMULTITEXGENFVEXTPROC glMultiTexGenfvEXT;

	/**
	 * @brief void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
	 */
	PFNGLMULTITEXGENIEXTPROC glMultiTexGeniEXT;

	/**
	 * @brief void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint *params)
	 */
	PFNGLMULTITEXGENIVEXTPROC glMultiTexGenivEXT;

	/**
	 * @brief void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLMULTITEXIMAGE1DEXTPROC glMultiTexImage1DEXT;

	/**
	 * @brief void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLMULTITEXIMAGE2DEXTPROC glMultiTexImage2DEXT;

	/**
	 * @brief void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLMULTITEXIMAGE3DEXTPROC glMultiTexImage3DEXT;

	/**
	 * @brief void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLMULTITEXPARAMETERIIVEXTPROC glMultiTexParameterIivEXT;

	/**
	 * @brief void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint *params)
	 */
	PFNGLMULTITEXPARAMETERIUIVEXTPROC glMultiTexParameterIuivEXT;

	/**
	 * @brief void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
	 */
	PFNGLMULTITEXPARAMETERFEXTPROC glMultiTexParameterfEXT;

	/**
	 * @brief void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLMULTITEXPARAMETERFVEXTPROC glMultiTexParameterfvEXT;

	/**
	 * @brief void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
	 */
	PFNGLMULTITEXPARAMETERIEXTPROC glMultiTexParameteriEXT;

	/**
	 * @brief void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLMULTITEXPARAMETERIVEXTPROC glMultiTexParameterivEXT;

	/**
	 * @brief void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
	 */
	PFNGLMULTITEXRENDERBUFFEREXTPROC glMultiTexRenderbufferEXT;

	/**
	 * @brief void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLMULTITEXSUBIMAGE1DEXTPROC glMultiTexSubImage1DEXT;

	/**
	 * @brief void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLMULTITEXSUBIMAGE2DEXTPROC glMultiTexSubImage2DEXT;

	/**
	 * @brief void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLMULTITEXSUBIMAGE3DEXTPROC glMultiTexSubImage3DEXT;

	/**
	 * @brief void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const GLvoid *data, GLenum usage)
	 */
	PFNGLNAMEDBUFFERDATAEXTPROC glNamedBufferDataEXT;

	/**
	 * @brief void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid *data)
	 */
	PFNGLNAMEDBUFFERSUBDATAEXTPROC glNamedBufferSubDataEXT;

	/**
	 * @brief void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
	 */
	PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glNamedCopyBufferSubDataEXT;

	/**
	 * @brief void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
	 */
	PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC glNamedFramebufferRenderbufferEXT;

	/**
	 * @brief void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	 */
	PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glNamedFramebufferTexture1DEXT;

	/**
	 * @brief void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	 */
	PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glNamedFramebufferTexture2DEXT;

	/**
	 * @brief void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
	 */
	PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glNamedFramebufferTexture3DEXT;

	/**
	 * @brief void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
	 */
	PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glNamedFramebufferTextureEXT;

	/**
	 * @brief void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
	 */
	PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glNamedFramebufferTextureFaceEXT;

	/**
	 * @brief void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
	 */
	PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC glNamedFramebufferTextureLayerEXT;

	/**
	 * @brief void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC glNamedProgramLocalParameter4dEXT;

	/**
	 * @brief void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble *params)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC glNamedProgramLocalParameter4dvEXT;

	/**
	 * @brief void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC glNamedProgramLocalParameter4fEXT;

	/**
	 * @brief void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat *params)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC glNamedProgramLocalParameter4fvEXT;

	/**
	 * @brief void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC glNamedProgramLocalParameterI4iEXT;

	/**
	 * @brief void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint *params)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC glNamedProgramLocalParameterI4ivEXT;

	/**
	 * @brief void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC glNamedProgramLocalParameterI4uiEXT;

	/**
	 * @brief void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint *params)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC glNamedProgramLocalParameterI4uivEXT;

	/**
	 * @brief void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC glNamedProgramLocalParameters4fvEXT;

	/**
	 * @brief void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC glNamedProgramLocalParametersI4ivEXT;

	/**
	 * @brief void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params)
	 */
	PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC glNamedProgramLocalParametersI4uivEXT;

	/**
	 * @brief void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const GLvoid *string)
	 */
	PFNGLNAMEDPROGRAMSTRINGEXTPROC glNamedProgramStringEXT;

	/**
	 * @brief void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
	 */
	PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glNamedRenderbufferStorageEXT;

	/**
	 * @brief void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
	 */
	PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC glNamedRenderbufferStorageMultisampleCoverageEXT;

	/**
	 * @brief void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
	 */
	PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glNamedRenderbufferStorageMultisampleEXT;

	/**
	 * @brief void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
	 */
	PFNGLPROGRAMUNIFORM1DEXTPROC glProgramUniform1dEXT;

	/**
	 * @brief void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORM1DVEXTPROC glProgramUniform1dvEXT;

	/**
	 * @brief void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
	 */
	PFNGLPROGRAMUNIFORM1FEXTPROC glProgramUniform1fEXT;

	/**
	 * @brief void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORM1FVEXTPROC glProgramUniform1fvEXT;

	/**
	 * @brief void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
	 */
	PFNGLPROGRAMUNIFORM1IEXTPROC glProgramUniform1iEXT;

	/**
	 * @brief void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLPROGRAMUNIFORM1IVEXTPROC glProgramUniform1ivEXT;

	/**
	 * @brief void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
	 */
	PFNGLPROGRAMUNIFORM1UIEXTPROC glProgramUniform1uiEXT;

	/**
	 * @brief void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLPROGRAMUNIFORM1UIVEXTPROC glProgramUniform1uivEXT;

	/**
	 * @brief void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
	 */
	PFNGLPROGRAMUNIFORM2DEXTPROC glProgramUniform2dEXT;

	/**
	 * @brief void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORM2DVEXTPROC glProgramUniform2dvEXT;

	/**
	 * @brief void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
	 */
	PFNGLPROGRAMUNIFORM2FEXTPROC glProgramUniform2fEXT;

	/**
	 * @brief void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORM2FVEXTPROC glProgramUniform2fvEXT;

	/**
	 * @brief void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
	 */
	PFNGLPROGRAMUNIFORM2IEXTPROC glProgramUniform2iEXT;

	/**
	 * @brief void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLPROGRAMUNIFORM2IVEXTPROC glProgramUniform2ivEXT;

	/**
	 * @brief void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
	 */
	PFNGLPROGRAMUNIFORM2UIEXTPROC glProgramUniform2uiEXT;

	/**
	 * @brief void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLPROGRAMUNIFORM2UIVEXTPROC glProgramUniform2uivEXT;

	/**
	 * @brief void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLPROGRAMUNIFORM3DEXTPROC glProgramUniform3dEXT;

	/**
	 * @brief void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORM3DVEXTPROC glProgramUniform3dvEXT;

	/**
	 * @brief void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
	 */
	PFNGLPROGRAMUNIFORM3FEXTPROC glProgramUniform3fEXT;

	/**
	 * @brief void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORM3FVEXTPROC glProgramUniform3fvEXT;

	/**
	 * @brief void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
	 */
	PFNGLPROGRAMUNIFORM3IEXTPROC glProgramUniform3iEXT;

	/**
	 * @brief void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLPROGRAMUNIFORM3IVEXTPROC glProgramUniform3ivEXT;

	/**
	 * @brief void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
	 */
	PFNGLPROGRAMUNIFORM3UIEXTPROC glProgramUniform3uiEXT;

	/**
	 * @brief void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLPROGRAMUNIFORM3UIVEXTPROC glProgramUniform3uivEXT;

	/**
	 * @brief void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLPROGRAMUNIFORM4DEXTPROC glProgramUniform4dEXT;

	/**
	 * @brief void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORM4DVEXTPROC glProgramUniform4dvEXT;

	/**
	 * @brief void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
	 */
	PFNGLPROGRAMUNIFORM4FEXTPROC glProgramUniform4fEXT;

	/**
	 * @brief void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORM4FVEXTPROC glProgramUniform4fvEXT;

	/**
	 * @brief void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
	 */
	PFNGLPROGRAMUNIFORM4IEXTPROC glProgramUniform4iEXT;

	/**
	 * @brief void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLPROGRAMUNIFORM4IVEXTPROC glProgramUniform4ivEXT;

	/**
	 * @brief void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
	 */
	PFNGLPROGRAMUNIFORM4UIEXTPROC glProgramUniform4uiEXT;

	/**
	 * @brief void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLPROGRAMUNIFORM4UIVEXTPROC glProgramUniform4uivEXT;

	/**
	 * @brief void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glProgramUniformMatrix2dvEXT;

	/**
	 * @brief void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glProgramUniformMatrix2fvEXT;

	/**
	 * @brief void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glProgramUniformMatrix2x3dvEXT;

	/**
	 * @brief void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT;

	/**
	 * @brief void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glProgramUniformMatrix2x4dvEXT;

	/**
	 * @brief void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT;

	/**
	 * @brief void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glProgramUniformMatrix3dvEXT;

	/**
	 * @brief void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glProgramUniformMatrix3fvEXT;

	/**
	 * @brief void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glProgramUniformMatrix3x2dvEXT;

	/**
	 * @brief void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT;

	/**
	 * @brief void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glProgramUniformMatrix3x4dvEXT;

	/**
	 * @brief void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT;

	/**
	 * @brief void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glProgramUniformMatrix4dvEXT;

	/**
	 * @brief void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glProgramUniformMatrix4fvEXT;

	/**
	 * @brief void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glProgramUniformMatrix4x2dvEXT;

	/**
	 * @brief void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT;

	/**
	 * @brief void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glProgramUniformMatrix4x3dvEXT;

	/**
	 * @brief void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT;

	/**
	 * @brief void glPushClientAttribDefaultEXT(GLbitfield mask)
	 */
	PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT;

	/**
	 * @brief void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
	 */
	PFNGLTEXTUREBUFFEREXTPROC glTextureBufferEXT;

	/**
	 * @brief void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXTUREIMAGE1DEXTPROC glTextureImage1DEXT;

	/**
	 * @brief void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXTUREIMAGE2DEXTPROC glTextureImage2DEXT;

	/**
	 * @brief void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXTUREIMAGE3DEXTPROC glTextureImage3DEXT;

	/**
	 * @brief void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLTEXTUREPARAMETERIIVEXTPROC glTextureParameterIivEXT;

	/**
	 * @brief void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint *params)
	 */
	PFNGLTEXTUREPARAMETERIUIVEXTPROC glTextureParameterIuivEXT;

	/**
	 * @brief void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
	 */
	PFNGLTEXTUREPARAMETERFEXTPROC glTextureParameterfEXT;

	/**
	 * @brief void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLTEXTUREPARAMETERFVEXTPROC glTextureParameterfvEXT;

	/**
	 * @brief void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
	 */
	PFNGLTEXTUREPARAMETERIEXTPROC glTextureParameteriEXT;

	/**
	 * @brief void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLTEXTUREPARAMETERIVEXTPROC glTextureParameterivEXT;

	/**
	 * @brief void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
	 */
	PFNGLTEXTURERENDERBUFFEREXTPROC glTextureRenderbufferEXT;

	/**
	 * @brief void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXTURESUBIMAGE1DEXTPROC glTextureSubImage1DEXT;

	/**
	 * @brief void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXTURESUBIMAGE2DEXTPROC glTextureSubImage2DEXT;

	/**
	 * @brief void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXTURESUBIMAGE3DEXTPROC glTextureSubImage3DEXT;

	/**
	 * @brief GLboolean glUnmapNamedBufferEXT(GLuint buffer)
	 */
	PFNGLUNMAPNAMEDBUFFEREXTPROC glUnmapNamedBufferEXT;




	// ****** GL_EXT_draw_buffers2 ******

	/**
	 * @brief Returns \c true if \b GL_EXT_draw_buffers2 is supported, false otherwise.
	 */
	bool isGL_EXT_draw_buffers2;


	/**
	 * @brief void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
	 */
	PFNGLCOLORMASKINDEXEDEXTPROC glColorMaskIndexedEXT;

	/**
	 * @brief void glDisableIndexedEXT(GLenum target, GLuint index)
	 */
	PFNGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT;

	/**
	 * @brief void glEnableIndexedEXT(GLenum target, GLuint index)
	 */
	PFNGLENABLEINDEXEDEXTPROC glEnableIndexedEXT;

	/**
	 * @brief void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean *data)
	 */
	PFNGLGETBOOLEANINDEXEDVEXTPROC glGetBooleanIndexedvEXT;

	/**
	 * @brief void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint *data)
	 */
	PFNGLGETINTEGERINDEXEDVEXTPROC glGetIntegerIndexedvEXT;

	/**
	 * @brief GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
	 */
	PFNGLISENABLEDINDEXEDEXTPROC glIsEnabledIndexedEXT;




	// ****** GL_EXT_draw_instanced ******

	/**
	 * @brief Returns \c true if \b GL_EXT_draw_instanced is supported, false otherwise.
	 */
	bool isGL_EXT_draw_instanced;


	/**
	 * @brief void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
	 */
	PFNGLDRAWARRAYSINSTANCEDEXTPROC glDrawArraysInstancedEXT;

	/**
	 * @brief void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
	 */
	PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;




	// ****** GL_EXT_draw_range_elements ******

	/**
	 * @brief Returns \c true if \b GL_EXT_draw_range_elements is supported, false otherwise.
	 */
	bool isGL_EXT_draw_range_elements;


	/**
	 * @brief void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
	 */
	PFNGLDRAWRANGEELEMENTSEXTPROC glDrawRangeElementsEXT;




	// ****** GL_EXT_fog_coord ******

	/**
	 * @brief Returns \c true if \b GL_EXT_fog_coord is supported, false otherwise.
	 */
	bool isGL_EXT_fog_coord;


	/**
	 * @brief void glFogCoordPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLFOGCOORDPOINTEREXTPROC glFogCoordPointerEXT;

	/**
	 * @brief void glFogCoorddEXT(GLdouble coord)
	 */
	PFNGLFOGCOORDDEXTPROC glFogCoorddEXT;

	/**
	 * @brief void glFogCoorddvEXT(const GLdouble *coord)
	 */
	PFNGLFOGCOORDDVEXTPROC glFogCoorddvEXT;

	/**
	 * @brief void glFogCoordfEXT(GLfloat coord)
	 */
	PFNGLFOGCOORDFEXTPROC glFogCoordfEXT;

	/**
	 * @brief void glFogCoordfvEXT(const GLfloat *coord)
	 */
	PFNGLFOGCOORDFVEXTPROC glFogCoordfvEXT;




	// ****** GL_EXT_framebuffer_blit ******

	/**
	 * @brief Returns \c true if \b GL_EXT_framebuffer_blit is supported, false otherwise.
	 */
	bool isGL_EXT_framebuffer_blit;


	/**
	 * @brief void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
	 */
	PFNGLBLITFRAMEBUFFEREXTPROC glBlitFramebufferEXT;




	// ****** GL_EXT_framebuffer_multisample ******

	/**
	 * @brief Returns \c true if \b GL_EXT_framebuffer_multisample is supported, false otherwise.
	 */
	bool isGL_EXT_framebuffer_multisample;


	/**
	 * @brief void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
	 */
	PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glRenderbufferStorageMultisampleEXT;




	// ****** GL_EXT_framebuffer_object ******

	/**
	 * @brief Returns \c true if \b GL_EXT_framebuffer_object is supported, false otherwise.
	 */
	bool isGL_EXT_framebuffer_object;


	/**
	 * @brief void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
	 */
	PFNGLBINDFRAMEBUFFEREXTPROC glBindFramebufferEXT;

	/**
	 * @brief void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
	 */
	PFNGLBINDRENDERBUFFEREXTPROC glBindRenderbufferEXT;

	/**
	 * @brief GLenum glCheckFramebufferStatusEXT(GLenum target)
	 */
	PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC glCheckFramebufferStatusEXT;

	/**
	 * @brief void glDeleteFramebuffersEXT(GLsizei n, const GLuint *framebuffers)
	 */
	PFNGLDELETEFRAMEBUFFERSEXTPROC glDeleteFramebuffersEXT;

	/**
	 * @brief void glDeleteRenderbuffersEXT(GLsizei n, const GLuint *renderbuffers)
	 */
	PFNGLDELETERENDERBUFFERSEXTPROC glDeleteRenderbuffersEXT;

	/**
	 * @brief void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
	 */
	PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC glFramebufferRenderbufferEXT;

	/**
	 * @brief void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	 */
	PFNGLFRAMEBUFFERTEXTURE1DEXTPROC glFramebufferTexture1DEXT;

	/**
	 * @brief void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
	 */
	PFNGLFRAMEBUFFERTEXTURE2DEXTPROC glFramebufferTexture2DEXT;

	/**
	 * @brief void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
	 */
	PFNGLFRAMEBUFFERTEXTURE3DEXTPROC glFramebufferTexture3DEXT;

	/**
	 * @brief void glGenFramebuffersEXT(GLsizei n, GLuint *framebuffers)
	 */
	PFNGLGENFRAMEBUFFERSEXTPROC glGenFramebuffersEXT;

	/**
	 * @brief void glGenRenderbuffersEXT(GLsizei n, GLuint *renderbuffers)
	 */
	PFNGLGENRENDERBUFFERSEXTPROC glGenRenderbuffersEXT;

	/**
	 * @brief void glGenerateMipmapEXT(GLenum target)
	 */
	PFNGLGENERATEMIPMAPEXTPROC glGenerateMipmapEXT;

	/**
	 * @brief void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint *params)
	 */
	PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetFramebufferAttachmentParameterivEXT;

	/**
	 * @brief void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC glGetRenderbufferParameterivEXT;

	/**
	 * @brief GLboolean glIsFramebufferEXT(GLuint framebuffer)
	 */
	PFNGLISFRAMEBUFFEREXTPROC glIsFramebufferEXT;

	/**
	 * @brief GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
	 */
	PFNGLISRENDERBUFFEREXTPROC glIsRenderbufferEXT;

	/**
	 * @brief void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
	 */
	PFNGLRENDERBUFFERSTORAGEEXTPROC glRenderbufferStorageEXT;




	// ****** GL_EXT_framebuffer_sRGB ******

	/**
	 * @brief Returns \c true if \b GL_EXT_framebuffer_sRGB is supported, false otherwise.
	 */
	bool isGL_EXT_framebuffer_sRGB;




	// ****** GL_EXT_geometry_shader4 ******

	/**
	 * @brief Returns \c true if \b GL_EXT_geometry_shader4 is supported, false otherwise.
	 */
	bool isGL_EXT_geometry_shader4;


	/**
	 * @brief void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
	 */
	PFNGLPROGRAMPARAMETERIEXTPROC glProgramParameteriEXT;




	// ****** GL_EXT_gpu_program_parameters ******

	/**
	 * @brief Returns \c true if \b GL_EXT_gpu_program_parameters is supported, false otherwise.
	 */
	bool isGL_EXT_gpu_program_parameters;


	/**
	 * @brief void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params)
	 */
	PFNGLPROGRAMENVPARAMETERS4FVEXTPROC glProgramEnvParameters4fvEXT;

	/**
	 * @brief void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params)
	 */
	PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC glProgramLocalParameters4fvEXT;




	// ****** GL_EXT_gpu_shader4 ******

	/**
	 * @brief Returns \c true if \b GL_EXT_gpu_shader4 is supported, false otherwise.
	 */
	bool isGL_EXT_gpu_shader4;


	/**
	 * @brief void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar *name)
	 */
	PFNGLBINDFRAGDATALOCATIONEXTPROC glBindFragDataLocationEXT;

	/**
	 * @brief GLint glGetFragDataLocationEXT(GLuint program, const GLchar *name)
	 */
	PFNGLGETFRAGDATALOCATIONEXTPROC glGetFragDataLocationEXT;

	/**
	 * @brief void glGetUniformuivEXT(GLuint program, GLint location, GLuint *params)
	 */
	PFNGLGETUNIFORMUIVEXTPROC glGetUniformuivEXT;

	/**
	 * @brief void glUniform1uiEXT(GLint location, GLuint v0)
	 */
	PFNGLUNIFORM1UIEXTPROC glUniform1uiEXT;

	/**
	 * @brief void glUniform1uivEXT(GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLUNIFORM1UIVEXTPROC glUniform1uivEXT;

	/**
	 * @brief void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
	 */
	PFNGLUNIFORM2UIEXTPROC glUniform2uiEXT;

	/**
	 * @brief void glUniform2uivEXT(GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLUNIFORM2UIVEXTPROC glUniform2uivEXT;

	/**
	 * @brief void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
	 */
	PFNGLUNIFORM3UIEXTPROC glUniform3uiEXT;

	/**
	 * @brief void glUniform3uivEXT(GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLUNIFORM3UIVEXTPROC glUniform3uivEXT;

	/**
	 * @brief void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
	 */
	PFNGLUNIFORM4UIEXTPROC glUniform4uiEXT;

	/**
	 * @brief void glUniform4uivEXT(GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLUNIFORM4UIVEXTPROC glUniform4uivEXT;




	// ****** GL_EXT_histogram ******

	/**
	 * @brief Returns \c true if \b GL_EXT_histogram is supported, false otherwise.
	 */
	bool isGL_EXT_histogram;


	/**
	 * @brief void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
	 */
	PFNGLGETHISTOGRAMEXTPROC glGetHistogramEXT;

	/**
	 * @brief void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glGetHistogramParameterfvEXT;

	/**
	 * @brief void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glGetHistogramParameterivEXT;

	/**
	 * @brief void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
	 */
	PFNGLGETMINMAXEXTPROC glGetMinmaxEXT;

	/**
	 * @brief void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETMINMAXPARAMETERFVEXTPROC glGetMinmaxParameterfvEXT;

	/**
	 * @brief void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETMINMAXPARAMETERIVEXTPROC glGetMinmaxParameterivEXT;

	/**
	 * @brief void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
	 */
	PFNGLHISTOGRAMEXTPROC glHistogramEXT;

	/**
	 * @brief void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
	 */
	PFNGLMINMAXEXTPROC glMinmaxEXT;

	/**
	 * @brief void glResetHistogramEXT(GLenum target)
	 */
	PFNGLRESETHISTOGRAMEXTPROC glResetHistogramEXT;

	/**
	 * @brief void glResetMinmaxEXT(GLenum target)
	 */
	PFNGLRESETMINMAXEXTPROC glResetMinmaxEXT;




	// ****** GL_EXT_index_array_formats ******

	/**
	 * @brief Returns \c true if \b GL_EXT_index_array_formats is supported, false otherwise.
	 */
	bool isGL_EXT_index_array_formats;




	// ****** GL_EXT_index_func ******

	/**
	 * @brief Returns \c true if \b GL_EXT_index_func is supported, false otherwise.
	 */
	bool isGL_EXT_index_func;


	/**
	 * @brief void glIndexFuncEXT(GLenum func, GLclampf ref)
	 */
	PFNGLINDEXFUNCEXTPROC glIndexFuncEXT;




	// ****** GL_EXT_index_material ******

	/**
	 * @brief Returns \c true if \b GL_EXT_index_material is supported, false otherwise.
	 */
	bool isGL_EXT_index_material;


	/**
	 * @brief void glIndexMaterialEXT(GLenum face, GLenum mode)
	 */
	PFNGLINDEXMATERIALEXTPROC glIndexMaterialEXT;




	// ****** GL_EXT_index_texture ******

	/**
	 * @brief Returns \c true if \b GL_EXT_index_texture is supported, false otherwise.
	 */
	bool isGL_EXT_index_texture;




	// ****** GL_EXT_light_texture ******

	/**
	 * @brief Returns \c true if \b GL_EXT_light_texture is supported, false otherwise.
	 */
	bool isGL_EXT_light_texture;


	/**
	 * @brief void glApplyTextureEXT(GLenum mode)
	 */
	PFNGLAPPLYTEXTUREEXTPROC glApplyTextureEXT;

	/**
	 * @brief void glTextureLightEXT(GLenum pname)
	 */
	PFNGLTEXTURELIGHTEXTPROC glTextureLightEXT;

	/**
	 * @brief void glTextureMaterialEXT(GLenum face, GLenum mode)
	 */
	PFNGLTEXTUREMATERIALEXTPROC glTextureMaterialEXT;




	// ****** GL_EXT_misc_attribute ******

	/**
	 * @brief Returns \c true if \b GL_EXT_misc_attribute is supported, false otherwise.
	 */
	bool isGL_EXT_misc_attribute;




	// ****** GL_EXT_multi_draw_arrays ******

	/**
	 * @brief Returns \c true if \b GL_EXT_multi_draw_arrays is supported, false otherwise.
	 */
	bool isGL_EXT_multi_draw_arrays;


	/**
	 * @brief void glMultiDrawArraysEXT(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
	 */
	PFNGLMULTIDRAWARRAYSEXTPROC glMultiDrawArraysEXT;

	/**
	 * @brief void glMultiDrawElementsEXT(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount)
	 */
	PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT;




	// ****** GL_EXT_multisample ******

	/**
	 * @brief Returns \c true if \b GL_EXT_multisample is supported, false otherwise.
	 */
	bool isGL_EXT_multisample;


	/**
	 * @brief void glSampleMaskEXT(GLclampf value, GLboolean invert)
	 */
	PFNGLSAMPLEMASKEXTPROC glSampleMaskEXT;

	/**
	 * @brief void glSamplePatternEXT(GLenum pattern)
	 */
	PFNGLSAMPLEPATTERNEXTPROC glSamplePatternEXT;




	// ****** GL_EXT_packed_depth_stencil ******

	/**
	 * @brief Returns \c true if \b GL_EXT_packed_depth_stencil is supported, false otherwise.
	 */
	bool isGL_EXT_packed_depth_stencil;




	// ****** GL_EXT_packed_float ******

	/**
	 * @brief Returns \c true if \b GL_EXT_packed_float is supported, false otherwise.
	 */
	bool isGL_EXT_packed_float;




	// ****** GL_EXT_packed_pixels ******

	/**
	 * @brief Returns \c true if \b GL_EXT_packed_pixels is supported, false otherwise.
	 */
	bool isGL_EXT_packed_pixels;




	// ****** GL_EXT_paletted_texture ******

	/**
	 * @brief Returns \c true if \b GL_EXT_paletted_texture is supported, false otherwise.
	 */
	bool isGL_EXT_paletted_texture;


	/**
	 * @brief void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
	 */
	PFNGLCOLORTABLEEXTPROC glColorTableEXT;

	/**
	 * @brief void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, GLvoid *data)
	 */
	PFNGLGETCOLORTABLEEXTPROC glGetColorTableEXT;

	/**
	 * @brief void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glGetColorTableParameterfvEXT;

	/**
	 * @brief void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glGetColorTableParameterivEXT;




	// ****** GL_EXT_pixel_buffer_object ******

	/**
	 * @brief Returns \c true if \b GL_EXT_pixel_buffer_object is supported, false otherwise.
	 */
	bool isGL_EXT_pixel_buffer_object;




	// ****** GL_EXT_pixel_transform ******

	/**
	 * @brief Returns \c true if \b GL_EXT_pixel_transform is supported, false otherwise.
	 */
	bool isGL_EXT_pixel_transform;


	/**
	 * @brief void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
	 */
	PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glPixelTransformParameterfEXT;

	/**
	 * @brief void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glPixelTransformParameterfvEXT;

	/**
	 * @brief void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
	 */
	PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glPixelTransformParameteriEXT;

	/**
	 * @brief void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glPixelTransformParameterivEXT;




	// ****** GL_EXT_pixel_transform_color_table ******

	/**
	 * @brief Returns \c true if \b GL_EXT_pixel_transform_color_table is supported, false otherwise.
	 */
	bool isGL_EXT_pixel_transform_color_table;




	// ****** GL_EXT_point_parameters ******

	/**
	 * @brief Returns \c true if \b GL_EXT_point_parameters is supported, false otherwise.
	 */
	bool isGL_EXT_point_parameters;


	/**
	 * @brief void glPointParameterfEXT(GLenum pname, GLfloat param)
	 */
	PFNGLPOINTPARAMETERFEXTPROC glPointParameterfEXT;

	/**
	 * @brief void glPointParameterfvEXT(GLenum pname, const GLfloat *params)
	 */
	PFNGLPOINTPARAMETERFVEXTPROC glPointParameterfvEXT;




	// ****** GL_EXT_polygon_offset ******

	/**
	 * @brief Returns \c true if \b GL_EXT_polygon_offset is supported, false otherwise.
	 */
	bool isGL_EXT_polygon_offset;


	/**
	 * @brief void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
	 */
	PFNGLPOLYGONOFFSETEXTPROC glPolygonOffsetEXT;




	// ****** GL_EXT_provoking_vertex ******

	/**
	 * @brief Returns \c true if \b GL_EXT_provoking_vertex is supported, false otherwise.
	 */
	bool isGL_EXT_provoking_vertex;


	/**
	 * @brief void glProvokingVertexEXT(GLenum mode)
	 */
	PFNGLPROVOKINGVERTEXEXTPROC glProvokingVertexEXT;




	// ****** GL_EXT_rescale_normal ******

	/**
	 * @brief Returns \c true if \b GL_EXT_rescale_normal is supported, false otherwise.
	 */
	bool isGL_EXT_rescale_normal;




	// ****** GL_EXT_secondary_color ******

	/**
	 * @brief Returns \c true if \b GL_EXT_secondary_color is supported, false otherwise.
	 */
	bool isGL_EXT_secondary_color;


	/**
	 * @brief void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
	 */
	PFNGLSECONDARYCOLOR3BEXTPROC glSecondaryColor3bEXT;

	/**
	 * @brief void glSecondaryColor3bvEXT(const GLbyte *v)
	 */
	PFNGLSECONDARYCOLOR3BVEXTPROC glSecondaryColor3bvEXT;

	/**
	 * @brief void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
	 */
	PFNGLSECONDARYCOLOR3DEXTPROC glSecondaryColor3dEXT;

	/**
	 * @brief void glSecondaryColor3dvEXT(const GLdouble *v)
	 */
	PFNGLSECONDARYCOLOR3DVEXTPROC glSecondaryColor3dvEXT;

	/**
	 * @brief void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
	 */
	PFNGLSECONDARYCOLOR3FEXTPROC glSecondaryColor3fEXT;

	/**
	 * @brief void glSecondaryColor3fvEXT(const GLfloat *v)
	 */
	PFNGLSECONDARYCOLOR3FVEXTPROC glSecondaryColor3fvEXT;

	/**
	 * @brief void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
	 */
	PFNGLSECONDARYCOLOR3IEXTPROC glSecondaryColor3iEXT;

	/**
	 * @brief void glSecondaryColor3ivEXT(const GLint *v)
	 */
	PFNGLSECONDARYCOLOR3IVEXTPROC glSecondaryColor3ivEXT;

	/**
	 * @brief void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
	 */
	PFNGLSECONDARYCOLOR3SEXTPROC glSecondaryColor3sEXT;

	/**
	 * @brief void glSecondaryColor3svEXT(const GLshort *v)
	 */
	PFNGLSECONDARYCOLOR3SVEXTPROC glSecondaryColor3svEXT;

	/**
	 * @brief void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
	 */
	PFNGLSECONDARYCOLOR3UBEXTPROC glSecondaryColor3ubEXT;

	/**
	 * @brief void glSecondaryColor3ubvEXT(const GLubyte *v)
	 */
	PFNGLSECONDARYCOLOR3UBVEXTPROC glSecondaryColor3ubvEXT;

	/**
	 * @brief void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
	 */
	PFNGLSECONDARYCOLOR3UIEXTPROC glSecondaryColor3uiEXT;

	/**
	 * @brief void glSecondaryColor3uivEXT(const GLuint *v)
	 */
	PFNGLSECONDARYCOLOR3UIVEXTPROC glSecondaryColor3uivEXT;

	/**
	 * @brief void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
	 */
	PFNGLSECONDARYCOLOR3USEXTPROC glSecondaryColor3usEXT;

	/**
	 * @brief void glSecondaryColor3usvEXT(const GLushort *v)
	 */
	PFNGLSECONDARYCOLOR3USVEXTPROC glSecondaryColor3usvEXT;

	/**
	 * @brief void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLSECONDARYCOLORPOINTEREXTPROC glSecondaryColorPointerEXT;




	// ****** GL_EXT_separate_shader_objects ******

	/**
	 * @brief Returns \c true if \b GL_EXT_separate_shader_objects is supported, false otherwise.
	 */
	bool isGL_EXT_separate_shader_objects;


	/**
	 * @brief void glActiveProgramEXT(GLuint program)
	 */
	PFNGLACTIVEPROGRAMEXTPROC glActiveProgramEXT;

	/**
	 * @brief GLuint glCreateShaderProgramEXT(GLenum type, const GLchar *string)
	 */
	PFNGLCREATESHADERPROGRAMEXTPROC glCreateShaderProgramEXT;

	/**
	 * @brief void glUseShaderProgramEXT(GLenum type, GLuint program)
	 */
	PFNGLUSESHADERPROGRAMEXTPROC glUseShaderProgramEXT;




	// ****** GL_EXT_separate_specular_color ******

	/**
	 * @brief Returns \c true if \b GL_EXT_separate_specular_color is supported, false otherwise.
	 */
	bool isGL_EXT_separate_specular_color;




	// ****** GL_EXT_shader_image_load_store ******

	/**
	 * @brief Returns \c true if \b GL_EXT_shader_image_load_store is supported, false otherwise.
	 */
	bool isGL_EXT_shader_image_load_store;


	/**
	 * @brief void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
	 */
	PFNGLBINDIMAGETEXTUREEXTPROC glBindImageTextureEXT;

	/**
	 * @brief void glMemoryBarrierEXT(GLbitfield barriers)
	 */
	PFNGLMEMORYBARRIEREXTPROC glMemoryBarrierEXT;




	// ****** GL_EXT_shadow_funcs ******

	/**
	 * @brief Returns \c true if \b GL_EXT_shadow_funcs is supported, false otherwise.
	 */
	bool isGL_EXT_shadow_funcs;




	// ****** GL_EXT_shared_texture_palette ******

	/**
	 * @brief Returns \c true if \b GL_EXT_shared_texture_palette is supported, false otherwise.
	 */
	bool isGL_EXT_shared_texture_palette;




	// ****** GL_EXT_stencil_clear_tag ******

	/**
	 * @brief Returns \c true if \b GL_EXT_stencil_clear_tag is supported, false otherwise.
	 */
	bool isGL_EXT_stencil_clear_tag;


	/**
	 * @brief void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
	 */
	PFNGLSTENCILCLEARTAGEXTPROC glStencilClearTagEXT;




	// ****** GL_EXT_stencil_two_side ******

	/**
	 * @brief Returns \c true if \b GL_EXT_stencil_two_side is supported, false otherwise.
	 */
	bool isGL_EXT_stencil_two_side;


	/**
	 * @brief void glActiveStencilFaceEXT(GLenum face)
	 */
	PFNGLACTIVESTENCILFACEEXTPROC glActiveStencilFaceEXT;




	// ****** GL_EXT_stencil_wrap ******

	/**
	 * @brief Returns \c true if \b GL_EXT_stencil_wrap is supported, false otherwise.
	 */
	bool isGL_EXT_stencil_wrap;




	// ****** GL_EXT_subtexture ******

	/**
	 * @brief Returns \c true if \b GL_EXT_subtexture is supported, false otherwise.
	 */
	bool isGL_EXT_subtexture;


	/**
	 * @brief void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXSUBIMAGE1DEXTPROC glTexSubImage1DEXT;

	/**
	 * @brief void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXSUBIMAGE2DEXTPROC glTexSubImage2DEXT;




	// ****** GL_EXT_texture ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture is supported, false otherwise.
	 */
	bool isGL_EXT_texture;




	// ****** GL_EXT_texture3D ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture3D is supported, false otherwise.
	 */
	bool isGL_EXT_texture3D;


	/**
	 * @brief void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXIMAGE3DEXTPROC glTexImage3DEXT;

	/**
	 * @brief void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXSUBIMAGE3DEXTPROC glTexSubImage3DEXT;




	// ****** GL_EXT_texture_array ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_array is supported, false otherwise.
	 */
	bool isGL_EXT_texture_array;




	// ****** GL_EXT_texture_buffer_object ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_buffer_object is supported, false otherwise.
	 */
	bool isGL_EXT_texture_buffer_object;


	/**
	 * @brief void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
	 */
	PFNGLTEXBUFFEREXTPROC glTexBufferEXT;




	// ****** GL_EXT_texture_compression_latc ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_compression_latc is supported, false otherwise.
	 */
	bool isGL_EXT_texture_compression_latc;




	// ****** GL_EXT_texture_compression_rgtc ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_compression_rgtc is supported, false otherwise.
	 */
	bool isGL_EXT_texture_compression_rgtc;




	// ****** GL_EXT_texture_compression_s3tc ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_compression_s3tc is supported, false otherwise.
	 */
	bool isGL_EXT_texture_compression_s3tc;




	// ****** GL_EXT_texture_cube_map ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_cube_map is supported, false otherwise.
	 */
	bool isGL_EXT_texture_cube_map;




	// ****** GL_EXT_texture_env_add ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_env_add is supported, false otherwise.
	 */
	bool isGL_EXT_texture_env_add;




	// ****** GL_EXT_texture_env_combine ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_env_combine is supported, false otherwise.
	 */
	bool isGL_EXT_texture_env_combine;




	// ****** GL_EXT_texture_env_dot3 ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_env_dot3 is supported, false otherwise.
	 */
	bool isGL_EXT_texture_env_dot3;




	// ****** GL_EXT_texture_filter_anisotropic ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_filter_anisotropic is supported, false otherwise.
	 */
	bool isGL_EXT_texture_filter_anisotropic;




	// ****** GL_EXT_texture_integer ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_integer is supported, false otherwise.
	 */
	bool isGL_EXT_texture_integer;


	/**
	 * @brief void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
	 */
	PFNGLCLEARCOLORIIEXTPROC glClearColorIiEXT;

	/**
	 * @brief void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
	 */
	PFNGLCLEARCOLORIUIEXTPROC glClearColorIuiEXT;

	/**
	 * @brief void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETTEXPARAMETERIIVEXTPROC glGetTexParameterIivEXT;

	/**
	 * @brief void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint *params)
	 */
	PFNGLGETTEXPARAMETERIUIVEXTPROC glGetTexParameterIuivEXT;

	/**
	 * @brief void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLTEXPARAMETERIIVEXTPROC glTexParameterIivEXT;

	/**
	 * @brief void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint *params)
	 */
	PFNGLTEXPARAMETERIUIVEXTPROC glTexParameterIuivEXT;




	// ****** GL_EXT_texture_lod_bias ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_lod_bias is supported, false otherwise.
	 */
	bool isGL_EXT_texture_lod_bias;




	// ****** GL_EXT_texture_mirror_clamp ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_mirror_clamp is supported, false otherwise.
	 */
	bool isGL_EXT_texture_mirror_clamp;




	// ****** GL_EXT_texture_object ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_object is supported, false otherwise.
	 */
	bool isGL_EXT_texture_object;


	/**
	 * @brief GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint *textures, GLboolean *residences)
	 */
	PFNGLARETEXTURESRESIDENTEXTPROC glAreTexturesResidentEXT;

	/**
	 * @brief void glBindTextureEXT(GLenum target, GLuint texture)
	 */
	PFNGLBINDTEXTUREEXTPROC glBindTextureEXT;

	/**
	 * @brief void glDeleteTexturesEXT(GLsizei n, const GLuint *textures)
	 */
	PFNGLDELETETEXTURESEXTPROC glDeleteTexturesEXT;

	/**
	 * @brief void glGenTexturesEXT(GLsizei n, GLuint *textures)
	 */
	PFNGLGENTEXTURESEXTPROC glGenTexturesEXT;

	/**
	 * @brief GLboolean glIsTextureEXT(GLuint texture)
	 */
	PFNGLISTEXTUREEXTPROC glIsTextureEXT;

	/**
	 * @brief void glPrioritizeTexturesEXT(GLsizei n, const GLuint *textures, const GLclampf *priorities)
	 */
	PFNGLPRIORITIZETEXTURESEXTPROC glPrioritizeTexturesEXT;




	// ****** GL_EXT_texture_perturb_normal ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_perturb_normal is supported, false otherwise.
	 */
	bool isGL_EXT_texture_perturb_normal;


	/**
	 * @brief void glTextureNormalEXT(GLenum mode)
	 */
	PFNGLTEXTURENORMALEXTPROC glTextureNormalEXT;




	// ****** GL_EXT_texture_sRGB ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_sRGB is supported, false otherwise.
	 */
	bool isGL_EXT_texture_sRGB;




	// ****** GL_EXT_texture_sRGB_decode ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_sRGB_decode is supported, false otherwise.
	 */
	bool isGL_EXT_texture_sRGB_decode;




	// ****** GL_EXT_texture_shared_exponent ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_shared_exponent is supported, false otherwise.
	 */
	bool isGL_EXT_texture_shared_exponent;




	// ****** GL_EXT_texture_snorm ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_snorm is supported, false otherwise.
	 */
	bool isGL_EXT_texture_snorm;




	// ****** GL_EXT_texture_swizzle ******

	/**
	 * @brief Returns \c true if \b GL_EXT_texture_swizzle is supported, false otherwise.
	 */
	bool isGL_EXT_texture_swizzle;




	// ****** GL_EXT_timer_query ******

	/**
	 * @brief Returns \c true if \b GL_EXT_timer_query is supported, false otherwise.
	 */
	bool isGL_EXT_timer_query;


	/**
	 * @brief void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64EXT *params)
	 */
	PFNGLGETQUERYOBJECTI64VEXTPROC glGetQueryObjecti64vEXT;

	/**
	 * @brief void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64EXT *params)
	 */
	PFNGLGETQUERYOBJECTUI64VEXTPROC glGetQueryObjectui64vEXT;




	// ****** GL_EXT_transform_feedback ******

	/**
	 * @brief Returns \c true if \b GL_EXT_transform_feedback is supported, false otherwise.
	 */
	bool isGL_EXT_transform_feedback;


	/**
	 * @brief void glBeginTransformFeedbackEXT(GLenum primitiveMode)
	 */
	PFNGLBEGINTRANSFORMFEEDBACKEXTPROC glBeginTransformFeedbackEXT;

	/**
	 * @brief void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
	 */
	PFNGLBINDBUFFERBASEEXTPROC glBindBufferBaseEXT;

	/**
	 * @brief void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
	 */
	PFNGLBINDBUFFEROFFSETEXTPROC glBindBufferOffsetEXT;

	/**
	 * @brief void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
	 */
	PFNGLBINDBUFFERRANGEEXTPROC glBindBufferRangeEXT;

	/**
	 * @brief void glEndTransformFeedbackEXT(void)
	 */
	PFNGLENDTRANSFORMFEEDBACKEXTPROC glEndTransformFeedbackEXT;

	/**
	 * @brief void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
	 */
	PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC glGetTransformFeedbackVaryingEXT;

	/**
	 * @brief void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode)
	 */
	PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC glTransformFeedbackVaryingsEXT;




	// ****** GL_EXT_vertex_array ******

	/**
	 * @brief Returns \c true if \b GL_EXT_vertex_array is supported, false otherwise.
	 */
	bool isGL_EXT_vertex_array;


	/**
	 * @brief void glArrayElementEXT(GLint i)
	 */
	PFNGLARRAYELEMENTEXTPROC glArrayElementEXT;

	/**
	 * @brief void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
	 */
	PFNGLCOLORPOINTEREXTPROC glColorPointerEXT;

	/**
	 * @brief void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
	 */
	PFNGLDRAWARRAYSEXTPROC glDrawArraysEXT;

	/**
	 * @brief void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean *pointer)
	 */
	PFNGLEDGEFLAGPOINTEREXTPROC glEdgeFlagPointerEXT;

	/**
	 * @brief void glGetPointervEXT(GLenum pname, GLvoid* *params)
	 */
	PFNGLGETPOINTERVEXTPROC glGetPointervEXT;

	/**
	 * @brief void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
	 */
	PFNGLINDEXPOINTEREXTPROC glIndexPointerEXT;

	/**
	 * @brief void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
	 */
	PFNGLNORMALPOINTEREXTPROC glNormalPointerEXT;

	/**
	 * @brief void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
	 */
	PFNGLTEXCOORDPOINTEREXTPROC glTexCoordPointerEXT;

	/**
	 * @brief void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
	 */
	PFNGLVERTEXPOINTEREXTPROC glVertexPointerEXT;




	// ****** GL_EXT_vertex_array_bgra ******

	/**
	 * @brief Returns \c true if \b GL_EXT_vertex_array_bgra is supported, false otherwise.
	 */
	bool isGL_EXT_vertex_array_bgra;




	// ****** GL_EXT_vertex_attrib_64bit ******

	/**
	 * @brief Returns \c true if \b GL_EXT_vertex_attrib_64bit is supported, false otherwise.
	 */
	bool isGL_EXT_vertex_attrib_64bit;


	/**
	 * @brief void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble *params)
	 */
	PFNGLGETVERTEXATTRIBLDVEXTPROC glGetVertexAttribLdvEXT;

	/**
	 * @brief void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
	 */
	PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC glVertexArrayVertexAttribLOffsetEXT;

	/**
	 * @brief void glVertexAttribL1dEXT(GLuint index, GLdouble x)
	 */
	PFNGLVERTEXATTRIBL1DEXTPROC glVertexAttribL1dEXT;

	/**
	 * @brief void glVertexAttribL1dvEXT(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBL1DVEXTPROC glVertexAttribL1dvEXT;

	/**
	 * @brief void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
	 */
	PFNGLVERTEXATTRIBL2DEXTPROC glVertexAttribL2dEXT;

	/**
	 * @brief void glVertexAttribL2dvEXT(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBL2DVEXTPROC glVertexAttribL2dvEXT;

	/**
	 * @brief void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLVERTEXATTRIBL3DEXTPROC glVertexAttribL3dEXT;

	/**
	 * @brief void glVertexAttribL3dvEXT(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBL3DVEXTPROC glVertexAttribL3dvEXT;

	/**
	 * @brief void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLVERTEXATTRIBL4DEXTPROC glVertexAttribL4dEXT;

	/**
	 * @brief void glVertexAttribL4dvEXT(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBL4DVEXTPROC glVertexAttribL4dvEXT;

	/**
	 * @brief void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLVERTEXATTRIBLPOINTEREXTPROC glVertexAttribLPointerEXT;




	// ****** GL_EXT_vertex_shader ******

	/**
	 * @brief Returns \c true if \b GL_EXT_vertex_shader is supported, false otherwise.
	 */
	bool isGL_EXT_vertex_shader;


	/**
	 * @brief void glBeginVertexShaderEXT(void)
	 */
	PFNGLBEGINVERTEXSHADEREXTPROC glBeginVertexShaderEXT;

	/**
	 * @brief GLuint glBindLightParameterEXT(GLenum light, GLenum value)
	 */
	PFNGLBINDLIGHTPARAMETEREXTPROC glBindLightParameterEXT;

	/**
	 * @brief GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
	 */
	PFNGLBINDMATERIALPARAMETEREXTPROC glBindMaterialParameterEXT;

	/**
	 * @brief GLuint glBindParameterEXT(GLenum value)
	 */
	PFNGLBINDPARAMETEREXTPROC glBindParameterEXT;

	/**
	 * @brief GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
	 */
	PFNGLBINDTEXGENPARAMETEREXTPROC glBindTexGenParameterEXT;

	/**
	 * @brief GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
	 */
	PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glBindTextureUnitParameterEXT;

	/**
	 * @brief void glBindVertexShaderEXT(GLuint id)
	 */
	PFNGLBINDVERTEXSHADEREXTPROC glBindVertexShaderEXT;

	/**
	 * @brief void glDeleteVertexShaderEXT(GLuint id)
	 */
	PFNGLDELETEVERTEXSHADEREXTPROC glDeleteVertexShaderEXT;

	/**
	 * @brief void glDisableVariantClientStateEXT(GLuint id)
	 */
	PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glDisableVariantClientStateEXT;

	/**
	 * @brief void glEnableVariantClientStateEXT(GLuint id)
	 */
	PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glEnableVariantClientStateEXT;

	/**
	 * @brief void glEndVertexShaderEXT(void)
	 */
	PFNGLENDVERTEXSHADEREXTPROC glEndVertexShaderEXT;

	/**
	 * @brief void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
	 */
	PFNGLEXTRACTCOMPONENTEXTPROC glExtractComponentEXT;

	/**
	 * @brief GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
	 */
	PFNGLGENSYMBOLSEXTPROC glGenSymbolsEXT;

	/**
	 * @brief GLuint glGenVertexShadersEXT(GLuint range)
	 */
	PFNGLGENVERTEXSHADERSEXTPROC glGenVertexShadersEXT;

	/**
	 * @brief void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean *data)
	 */
	PFNGLGETINVARIANTBOOLEANVEXTPROC glGetInvariantBooleanvEXT;

	/**
	 * @brief void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat *data)
	 */
	PFNGLGETINVARIANTFLOATVEXTPROC glGetInvariantFloatvEXT;

	/**
	 * @brief void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint *data)
	 */
	PFNGLGETINVARIANTINTEGERVEXTPROC glGetInvariantIntegervEXT;

	/**
	 * @brief void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean *data)
	 */
	PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glGetLocalConstantBooleanvEXT;

	/**
	 * @brief void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat *data)
	 */
	PFNGLGETLOCALCONSTANTFLOATVEXTPROC glGetLocalConstantFloatvEXT;

	/**
	 * @brief void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint *data)
	 */
	PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glGetLocalConstantIntegervEXT;

	/**
	 * @brief void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean *data)
	 */
	PFNGLGETVARIANTBOOLEANVEXTPROC glGetVariantBooleanvEXT;

	/**
	 * @brief void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat *data)
	 */
	PFNGLGETVARIANTFLOATVEXTPROC glGetVariantFloatvEXT;

	/**
	 * @brief void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint *data)
	 */
	PFNGLGETVARIANTINTEGERVEXTPROC glGetVariantIntegervEXT;

	/**
	 * @brief void glGetVariantPointervEXT(GLuint id, GLenum value, GLvoid* *data)
	 */
	PFNGLGETVARIANTPOINTERVEXTPROC glGetVariantPointervEXT;

	/**
	 * @brief void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
	 */
	PFNGLINSERTCOMPONENTEXTPROC glInsertComponentEXT;

	/**
	 * @brief GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
	 */
	PFNGLISVARIANTENABLEDEXTPROC glIsVariantEnabledEXT;

	/**
	 * @brief void glSetInvariantEXT(GLuint id, GLenum type, const GLvoid *addr)
	 */
	PFNGLSETINVARIANTEXTPROC glSetInvariantEXT;

	/**
	 * @brief void glSetLocalConstantEXT(GLuint id, GLenum type, const GLvoid *addr)
	 */
	PFNGLSETLOCALCONSTANTEXTPROC glSetLocalConstantEXT;

	/**
	 * @brief void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
	 */
	PFNGLSHADEROP1EXTPROC glShaderOp1EXT;

	/**
	 * @brief void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
	 */
	PFNGLSHADEROP2EXTPROC glShaderOp2EXT;

	/**
	 * @brief void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
	 */
	PFNGLSHADEROP3EXTPROC glShaderOp3EXT;

	/**
	 * @brief void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
	 */
	PFNGLSWIZZLEEXTPROC glSwizzleEXT;

	/**
	 * @brief void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const GLvoid *addr)
	 */
	PFNGLVARIANTPOINTEREXTPROC glVariantPointerEXT;

	/**
	 * @brief void glVariantbvEXT(GLuint id, const GLbyte *addr)
	 */
	PFNGLVARIANTBVEXTPROC glVariantbvEXT;

	/**
	 * @brief void glVariantdvEXT(GLuint id, const GLdouble *addr)
	 */
	PFNGLVARIANTDVEXTPROC glVariantdvEXT;

	/**
	 * @brief void glVariantfvEXT(GLuint id, const GLfloat *addr)
	 */
	PFNGLVARIANTFVEXTPROC glVariantfvEXT;

	/**
	 * @brief void glVariantivEXT(GLuint id, const GLint *addr)
	 */
	PFNGLVARIANTIVEXTPROC glVariantivEXT;

	/**
	 * @brief void glVariantsvEXT(GLuint id, const GLshort *addr)
	 */
	PFNGLVARIANTSVEXTPROC glVariantsvEXT;

	/**
	 * @brief void glVariantubvEXT(GLuint id, const GLubyte *addr)
	 */
	PFNGLVARIANTUBVEXTPROC glVariantubvEXT;

	/**
	 * @brief void glVariantuivEXT(GLuint id, const GLuint *addr)
	 */
	PFNGLVARIANTUIVEXTPROC glVariantuivEXT;

	/**
	 * @brief void glVariantusvEXT(GLuint id, const GLushort *addr)
	 */
	PFNGLVARIANTUSVEXTPROC glVariantusvEXT;

	/**
	 * @brief void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
	 */
	PFNGLWRITEMASKEXTPROC glWriteMaskEXT;




	// ****** GL_EXT_vertex_weighting ******

	/**
	 * @brief Returns \c true if \b GL_EXT_vertex_weighting is supported, false otherwise.
	 */
	bool isGL_EXT_vertex_weighting;


	/**
	 * @brief void glVertexWeightPointerEXT(GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLVERTEXWEIGHTPOINTEREXTPROC glVertexWeightPointerEXT;

	/**
	 * @brief void glVertexWeightfEXT(GLfloat weight)
	 */
	PFNGLVERTEXWEIGHTFEXTPROC glVertexWeightfEXT;

	/**
	 * @brief void glVertexWeightfvEXT(const GLfloat *weight)
	 */
	PFNGLVERTEXWEIGHTFVEXTPROC glVertexWeightfvEXT;




	// ****** GL_EXT_x11_sync_object ******

	/**
	 * @brief Returns \c true if \b GL_EXT_x11_sync_object is supported, false otherwise.
	 */
	bool isGL_EXT_x11_sync_object;


	/**
	 * @brief GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags)
	 */
	PFNGLIMPORTSYNCEXTPROC glImportSyncEXT;




	// ****** GL_FfdMaskSGIX ******

	/**
	 * @brief Returns \c true if \b GL_FfdMaskSGIX is supported, false otherwise.
	 */
	bool isGL_FfdMaskSGIX;




	// ****** GL_GREMEDY_frame_terminator ******

	/**
	 * @brief Returns \c true if \b GL_GREMEDY_frame_terminator is supported, false otherwise.
	 */
	bool isGL_GREMEDY_frame_terminator;


	/**
	 * @brief void glFrameTerminatorGREMEDY(void)
	 */
	PFNGLFRAMETERMINATORGREMEDYPROC glFrameTerminatorGREMEDY;




	// ****** GL_GREMEDY_string_marker ******

	/**
	 * @brief Returns \c true if \b GL_GREMEDY_string_marker is supported, false otherwise.
	 */
	bool isGL_GREMEDY_string_marker;


	/**
	 * @brief void glStringMarkerGREMEDY(GLsizei len, const GLvoid *string)
	 */
	PFNGLSTRINGMARKERGREMEDYPROC glStringMarkerGREMEDY;




	// ****** GL_HP_convolution_border_modes ******

	/**
	 * @brief Returns \c true if \b GL_HP_convolution_border_modes is supported, false otherwise.
	 */
	bool isGL_HP_convolution_border_modes;




	// ****** GL_HP_image_transform ******

	/**
	 * @brief Returns \c true if \b GL_HP_image_transform is supported, false otherwise.
	 */
	bool isGL_HP_image_transform;


	/**
	 * @brief void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC glGetImageTransformParameterfvHP;

	/**
	 * @brief void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC glGetImageTransformParameterivHP;

	/**
	 * @brief void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
	 */
	PFNGLIMAGETRANSFORMPARAMETERFHPPROC glImageTransformParameterfHP;

	/**
	 * @brief void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLIMAGETRANSFORMPARAMETERFVHPPROC glImageTransformParameterfvHP;

	/**
	 * @brief void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
	 */
	PFNGLIMAGETRANSFORMPARAMETERIHPPROC glImageTransformParameteriHP;

	/**
	 * @brief void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLIMAGETRANSFORMPARAMETERIVHPPROC glImageTransformParameterivHP;




	// ****** GL_HP_occlusion_test ******

	/**
	 * @brief Returns \c true if \b GL_HP_occlusion_test is supported, false otherwise.
	 */
	bool isGL_HP_occlusion_test;




	// ****** GL_HP_texture_lighting ******

	/**
	 * @brief Returns \c true if \b GL_HP_texture_lighting is supported, false otherwise.
	 */
	bool isGL_HP_texture_lighting;




	// ****** GL_IBM_cull_vertex ******

	/**
	 * @brief Returns \c true if \b GL_IBM_cull_vertex is supported, false otherwise.
	 */
	bool isGL_IBM_cull_vertex;




	// ****** GL_IBM_multimode_draw_arrays ******

	/**
	 * @brief Returns \c true if \b GL_IBM_multimode_draw_arrays is supported, false otherwise.
	 */
	bool isGL_IBM_multimode_draw_arrays;


	/**
	 * @brief void glMultiModeDrawArraysIBM(const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride)
	 */
	PFNGLMULTIMODEDRAWARRAYSIBMPROC glMultiModeDrawArraysIBM;

	/**
	 * @brief void glMultiModeDrawElementsIBM(const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride)
	 */
	PFNGLMULTIMODEDRAWELEMENTSIBMPROC glMultiModeDrawElementsIBM;




	// ****** GL_IBM_rasterpos_clip ******

	/**
	 * @brief Returns \c true if \b GL_IBM_rasterpos_clip is supported, false otherwise.
	 */
	bool isGL_IBM_rasterpos_clip;




	// ****** GL_IBM_texture_mirrored_repeat ******

	/**
	 * @brief Returns \c true if \b GL_IBM_texture_mirrored_repeat is supported, false otherwise.
	 */
	bool isGL_IBM_texture_mirrored_repeat;




	// ****** GL_IBM_vertex_array_lists ******

	/**
	 * @brief Returns \c true if \b GL_IBM_vertex_array_lists is supported, false otherwise.
	 */
	bool isGL_IBM_vertex_array_lists;


	/**
	 * @brief void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
	 */
	PFNGLCOLORPOINTERLISTIBMPROC glColorPointerListIBM;

	/**
	 * @brief void glEdgeFlagPointerListIBM(GLint stride, const GLboolean* *pointer, GLint ptrstride)
	 */
	PFNGLEDGEFLAGPOINTERLISTIBMPROC glEdgeFlagPointerListIBM;

	/**
	 * @brief void glFogCoordPointerListIBM(GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
	 */
	PFNGLFOGCOORDPOINTERLISTIBMPROC glFogCoordPointerListIBM;

	/**
	 * @brief void glIndexPointerListIBM(GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
	 */
	PFNGLINDEXPOINTERLISTIBMPROC glIndexPointerListIBM;

	/**
	 * @brief void glNormalPointerListIBM(GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
	 */
	PFNGLNORMALPOINTERLISTIBMPROC glNormalPointerListIBM;

	/**
	 * @brief void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
	 */
	PFNGLSECONDARYCOLORPOINTERLISTIBMPROC glSecondaryColorPointerListIBM;

	/**
	 * @brief void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
	 */
	PFNGLTEXCOORDPOINTERLISTIBMPROC glTexCoordPointerListIBM;

	/**
	 * @brief void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
	 */
	PFNGLVERTEXPOINTERLISTIBMPROC glVertexPointerListIBM;




	// ****** GL_INGR_blend_func_separate ******

	/**
	 * @brief Returns \c true if \b GL_INGR_blend_func_separate is supported, false otherwise.
	 */
	bool isGL_INGR_blend_func_separate;


	/**
	 * @brief void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
	 */
	PFNGLBLENDFUNCSEPARATEINGRPROC glBlendFuncSeparateINGR;




	// ****** GL_INGR_color_clamp ******

	/**
	 * @brief Returns \c true if \b GL_INGR_color_clamp is supported, false otherwise.
	 */
	bool isGL_INGR_color_clamp;




	// ****** GL_INGR_interlace_read ******

	/**
	 * @brief Returns \c true if \b GL_INGR_interlace_read is supported, false otherwise.
	 */
	bool isGL_INGR_interlace_read;




	// ****** GL_INGR_palette_buffer ******

	/**
	 * @brief Returns \c true if \b GL_INGR_palette_buffer is supported, false otherwise.
	 */
	bool isGL_INGR_palette_buffer;




	// ****** GL_INTEL_parallel_arrays ******

	/**
	 * @brief Returns \c true if \b GL_INTEL_parallel_arrays is supported, false otherwise.
	 */
	bool isGL_INTEL_parallel_arrays;


	/**
	 * @brief void glColorPointervINTEL(GLint size, GLenum type, const GLvoid* *pointer)
	 */
	PFNGLCOLORPOINTERVINTELPROC glColorPointervINTEL;

	/**
	 * @brief void glNormalPointervINTEL(GLenum type, const GLvoid* *pointer)
	 */
	PFNGLNORMALPOINTERVINTELPROC glNormalPointervINTEL;

	/**
	 * @brief void glTexCoordPointervINTEL(GLint size, GLenum type, const GLvoid* *pointer)
	 */
	PFNGLTEXCOORDPOINTERVINTELPROC glTexCoordPointervINTEL;

	/**
	 * @brief void glVertexPointervINTEL(GLint size, GLenum type, const GLvoid* *pointer)
	 */
	PFNGLVERTEXPOINTERVINTELPROC glVertexPointervINTEL;




	// ****** GL_INTEL_texture_scissor ******

	/**
	 * @brief Returns \c true if \b GL_INTEL_texture_scissor is supported, false otherwise.
	 */
	bool isGL_INTEL_texture_scissor;




	// ****** GL_MESAX_texture_stack ******

	/**
	 * @brief Returns \c true if \b GL_MESAX_texture_stack is supported, false otherwise.
	 */
	bool isGL_MESAX_texture_stack;




	// ****** GL_MESA_pack_invert ******

	/**
	 * @brief Returns \c true if \b GL_MESA_pack_invert is supported, false otherwise.
	 */
	bool isGL_MESA_pack_invert;




	// ****** GL_MESA_resize_buffers ******

	/**
	 * @brief Returns \c true if \b GL_MESA_resize_buffers is supported, false otherwise.
	 */
	bool isGL_MESA_resize_buffers;


	/**
	 * @brief void glResizeBuffersMESA(void)
	 */
	PFNGLRESIZEBUFFERSMESAPROC glResizeBuffersMESA;




	// ****** GL_MESA_window_pos ******

	/**
	 * @brief Returns \c true if \b GL_MESA_window_pos is supported, false otherwise.
	 */
	bool isGL_MESA_window_pos;


	/**
	 * @brief void glWindowPos2dMESA(GLdouble x, GLdouble y)
	 */
	PFNGLWINDOWPOS2DMESAPROC glWindowPos2dMESA;

	/**
	 * @brief void glWindowPos2dvMESA(const GLdouble *v)
	 */
	PFNGLWINDOWPOS2DVMESAPROC glWindowPos2dvMESA;

	/**
	 * @brief void glWindowPos2fMESA(GLfloat x, GLfloat y)
	 */
	PFNGLWINDOWPOS2FMESAPROC glWindowPos2fMESA;

	/**
	 * @brief void glWindowPos2fvMESA(const GLfloat *v)
	 */
	PFNGLWINDOWPOS2FVMESAPROC glWindowPos2fvMESA;

	/**
	 * @brief void glWindowPos2iMESA(GLint x, GLint y)
	 */
	PFNGLWINDOWPOS2IMESAPROC glWindowPos2iMESA;

	/**
	 * @brief void glWindowPos2ivMESA(const GLint *v)
	 */
	PFNGLWINDOWPOS2IVMESAPROC glWindowPos2ivMESA;

	/**
	 * @brief void glWindowPos2sMESA(GLshort x, GLshort y)
	 */
	PFNGLWINDOWPOS2SMESAPROC glWindowPos2sMESA;

	/**
	 * @brief void glWindowPos2svMESA(const GLshort *v)
	 */
	PFNGLWINDOWPOS2SVMESAPROC glWindowPos2svMESA;

	/**
	 * @brief void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLWINDOWPOS3DMESAPROC glWindowPos3dMESA;

	/**
	 * @brief void glWindowPos3dvMESA(const GLdouble *v)
	 */
	PFNGLWINDOWPOS3DVMESAPROC glWindowPos3dvMESA;

	/**
	 * @brief void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLWINDOWPOS3FMESAPROC glWindowPos3fMESA;

	/**
	 * @brief void glWindowPos3fvMESA(const GLfloat *v)
	 */
	PFNGLWINDOWPOS3FVMESAPROC glWindowPos3fvMESA;

	/**
	 * @brief void glWindowPos3iMESA(GLint x, GLint y, GLint z)
	 */
	PFNGLWINDOWPOS3IMESAPROC glWindowPos3iMESA;

	/**
	 * @brief void glWindowPos3ivMESA(const GLint *v)
	 */
	PFNGLWINDOWPOS3IVMESAPROC glWindowPos3ivMESA;

	/**
	 * @brief void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
	 */
	PFNGLWINDOWPOS3SMESAPROC glWindowPos3sMESA;

	/**
	 * @brief void glWindowPos3svMESA(const GLshort *v)
	 */
	PFNGLWINDOWPOS3SVMESAPROC glWindowPos3svMESA;

	/**
	 * @brief void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLWINDOWPOS4DMESAPROC glWindowPos4dMESA;

	/**
	 * @brief void glWindowPos4dvMESA(const GLdouble *v)
	 */
	PFNGLWINDOWPOS4DVMESAPROC glWindowPos4dvMESA;

	/**
	 * @brief void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLWINDOWPOS4FMESAPROC glWindowPos4fMESA;

	/**
	 * @brief void glWindowPos4fvMESA(const GLfloat *v)
	 */
	PFNGLWINDOWPOS4FVMESAPROC glWindowPos4fvMESA;

	/**
	 * @brief void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
	 */
	PFNGLWINDOWPOS4IMESAPROC glWindowPos4iMESA;

	/**
	 * @brief void glWindowPos4ivMESA(const GLint *v)
	 */
	PFNGLWINDOWPOS4IVMESAPROC glWindowPos4ivMESA;

	/**
	 * @brief void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
	 */
	PFNGLWINDOWPOS4SMESAPROC glWindowPos4sMESA;

	/**
	 * @brief void glWindowPos4svMESA(const GLshort *v)
	 */
	PFNGLWINDOWPOS4SVMESAPROC glWindowPos4svMESA;




	// ****** GL_MESA_ycbcr_texture ******

	/**
	 * @brief Returns \c true if \b GL_MESA_ycbcr_texture is supported, false otherwise.
	 */
	bool isGL_MESA_ycbcr_texture;




	// ****** GL_NV_blend_square ******

	/**
	 * @brief Returns \c true if \b GL_NV_blend_square is supported, false otherwise.
	 */
	bool isGL_NV_blend_square;




	// ****** GL_NV_conditional_render ******

	/**
	 * @brief Returns \c true if \b GL_NV_conditional_render is supported, false otherwise.
	 */
	bool isGL_NV_conditional_render;


	/**
	 * @brief void glBeginConditionalRenderNV(GLuint id, GLenum mode)
	 */
	PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV;

	/**
	 * @brief void glEndConditionalRenderNV(void)
	 */
	PFNGLENDCONDITIONALRENDERNVPROC glEndConditionalRenderNV;




	// ****** GL_NV_copy_depth_to_color ******

	/**
	 * @brief Returns \c true if \b GL_NV_copy_depth_to_color is supported, false otherwise.
	 */
	bool isGL_NV_copy_depth_to_color;




	// ****** GL_NV_copy_image ******

	/**
	 * @brief Returns \c true if \b GL_NV_copy_image is supported, false otherwise.
	 */
	bool isGL_NV_copy_image;


	/**
	 * @brief void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
	 */
	PFNGLCOPYIMAGESUBDATANVPROC glCopyImageSubDataNV;




	// ****** GL_NV_depth_buffer_float ******

	/**
	 * @brief Returns \c true if \b GL_NV_depth_buffer_float is supported, false otherwise.
	 */
	bool isGL_NV_depth_buffer_float;


	/**
	 * @brief void glClearDepthdNV(GLdouble depth)
	 */
	PFNGLCLEARDEPTHDNVPROC glClearDepthdNV;

	/**
	 * @brief void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
	 */
	PFNGLDEPTHBOUNDSDNVPROC glDepthBoundsdNV;

	/**
	 * @brief void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
	 */
	PFNGLDEPTHRANGEDNVPROC glDepthRangedNV;




	// ****** GL_NV_depth_clamp ******

	/**
	 * @brief Returns \c true if \b GL_NV_depth_clamp is supported, false otherwise.
	 */
	bool isGL_NV_depth_clamp;




	// ****** GL_NV_evaluators ******

	/**
	 * @brief Returns \c true if \b GL_NV_evaluators is supported, false otherwise.
	 */
	bool isGL_NV_evaluators;


	/**
	 * @brief void glEvalMapsNV(GLenum target, GLenum mode)
	 */
	PFNGLEVALMAPSNVPROC glEvalMapsNV;

	/**
	 * @brief void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params)
	 */
	PFNGLGETMAPATTRIBPARAMETERFVNVPROC glGetMapAttribParameterfvNV;

	/**
	 * @brief void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint *params)
	 */
	PFNGLGETMAPATTRIBPARAMETERIVNVPROC glGetMapAttribParameterivNV;

	/**
	 * @brief void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points)
	 */
	PFNGLGETMAPCONTROLPOINTSNVPROC glGetMapControlPointsNV;

	/**
	 * @brief void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETMAPPARAMETERFVNVPROC glGetMapParameterfvNV;

	/**
	 * @brief void glGetMapParameterivNV(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETMAPPARAMETERIVNVPROC glGetMapParameterivNV;

	/**
	 * @brief void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points)
	 */
	PFNGLMAPCONTROLPOINTSNVPROC glMapControlPointsNV;

	/**
	 * @brief void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLMAPPARAMETERFVNVPROC glMapParameterfvNV;

	/**
	 * @brief void glMapParameterivNV(GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLMAPPARAMETERIVNVPROC glMapParameterivNV;




	// ****** GL_NV_explicit_multisample ******

	/**
	 * @brief Returns \c true if \b GL_NV_explicit_multisample is supported, false otherwise.
	 */
	bool isGL_NV_explicit_multisample;


	/**
	 * @brief void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat *val)
	 */
	PFNGLGETMULTISAMPLEFVNVPROC glGetMultisamplefvNV;

	/**
	 * @brief void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
	 */
	PFNGLSAMPLEMASKINDEXEDNVPROC glSampleMaskIndexedNV;

	/**
	 * @brief void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
	 */
	PFNGLTEXRENDERBUFFERNVPROC glTexRenderbufferNV;




	// ****** GL_NV_fence ******

	/**
	 * @brief Returns \c true if \b GL_NV_fence is supported, false otherwise.
	 */
	bool isGL_NV_fence;


	/**
	 * @brief void glDeleteFencesNV(GLsizei n, const GLuint *fences)
	 */
	PFNGLDELETEFENCESNVPROC glDeleteFencesNV;

	/**
	 * @brief void glFinishFenceNV(GLuint fence)
	 */
	PFNGLFINISHFENCENVPROC glFinishFenceNV;

	/**
	 * @brief void glGenFencesNV(GLsizei n, GLuint *fences)
	 */
	PFNGLGENFENCESNVPROC glGenFencesNV;

	/**
	 * @brief void glGetFenceivNV(GLuint fence, GLenum pname, GLint *params)
	 */
	PFNGLGETFENCEIVNVPROC glGetFenceivNV;

	/**
	 * @brief GLboolean glIsFenceNV(GLuint fence)
	 */
	PFNGLISFENCENVPROC glIsFenceNV;

	/**
	 * @brief void glSetFenceNV(GLuint fence, GLenum condition)
	 */
	PFNGLSETFENCENVPROC glSetFenceNV;

	/**
	 * @brief GLboolean glTestFenceNV(GLuint fence)
	 */
	PFNGLTESTFENCENVPROC glTestFenceNV;




	// ****** GL_NV_float_buffer ******

	/**
	 * @brief Returns \c true if \b GL_NV_float_buffer is supported, false otherwise.
	 */
	bool isGL_NV_float_buffer;




	// ****** GL_NV_fog_distance ******

	/**
	 * @brief Returns \c true if \b GL_NV_fog_distance is supported, false otherwise.
	 */
	bool isGL_NV_fog_distance;




	// ****** GL_NV_fragment_program ******

	/**
	 * @brief Returns \c true if \b GL_NV_fragment_program is supported, false otherwise.
	 */
	bool isGL_NV_fragment_program;


	/**
	 * @brief void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble *params)
	 */
	PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC glGetProgramNamedParameterdvNV;

	/**
	 * @brief void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat *params)
	 */
	PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC glGetProgramNamedParameterfvNV;

	/**
	 * @brief void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLPROGRAMNAMEDPARAMETER4DNVPROC glProgramNamedParameter4dNV;

	/**
	 * @brief void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v)
	 */
	PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC glProgramNamedParameter4dvNV;

	/**
	 * @brief void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLPROGRAMNAMEDPARAMETER4FNVPROC glProgramNamedParameter4fNV;

	/**
	 * @brief void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v)
	 */
	PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC glProgramNamedParameter4fvNV;




	// ****** GL_NV_fragment_program2 ******

	/**
	 * @brief Returns \c true if \b GL_NV_fragment_program2 is supported, false otherwise.
	 */
	bool isGL_NV_fragment_program2;




	// ****** GL_NV_fragment_program4 ******

	/**
	 * @brief Returns \c true if \b GL_NV_fragment_program4 is supported, false otherwise.
	 */
	bool isGL_NV_fragment_program4;




	// ****** GL_NV_fragment_program_option ******

	/**
	 * @brief Returns \c true if \b GL_NV_fragment_program_option is supported, false otherwise.
	 */
	bool isGL_NV_fragment_program_option;




	// ****** GL_NV_framebuffer_multisample_coverage ******

	/**
	 * @brief Returns \c true if \b GL_NV_framebuffer_multisample_coverage is supported, false otherwise.
	 */
	bool isGL_NV_framebuffer_multisample_coverage;


	/**
	 * @brief void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
	 */
	PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC glRenderbufferStorageMultisampleCoverageNV;




	// ****** GL_NV_geometry_program4 ******

	/**
	 * @brief Returns \c true if \b GL_NV_geometry_program4 is supported, false otherwise.
	 */
	bool isGL_NV_geometry_program4;


	/**
	 * @brief void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
	 */
	PFNGLFRAMEBUFFERTEXTUREEXTPROC glFramebufferTextureEXT;

	/**
	 * @brief void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
	 */
	PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC glFramebufferTextureFaceEXT;

	/**
	 * @brief void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
	 */
	PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC glFramebufferTextureLayerEXT;

	/**
	 * @brief void glProgramVertexLimitNV(GLenum target, GLint limit)
	 */
	PFNGLPROGRAMVERTEXLIMITNVPROC glProgramVertexLimitNV;




	// ****** GL_NV_geometry_shader4 ******

	/**
	 * @brief Returns \c true if \b GL_NV_geometry_shader4 is supported, false otherwise.
	 */
	bool isGL_NV_geometry_shader4;




	// ****** GL_NV_gpu_program4 ******

	/**
	 * @brief Returns \c true if \b GL_NV_gpu_program4 is supported, false otherwise.
	 */
	bool isGL_NV_gpu_program4;


	/**
	 * @brief void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint *params)
	 */
	PFNGLGETPROGRAMENVPARAMETERIIVNVPROC glGetProgramEnvParameterIivNV;

	/**
	 * @brief void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint *params)
	 */
	PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC glGetProgramEnvParameterIuivNV;

	/**
	 * @brief void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint *params)
	 */
	PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC glGetProgramLocalParameterIivNV;

	/**
	 * @brief void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint *params)
	 */
	PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC glGetProgramLocalParameterIuivNV;

	/**
	 * @brief void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
	 */
	PFNGLPROGRAMENVPARAMETERI4INVPROC glProgramEnvParameterI4iNV;

	/**
	 * @brief void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint *params)
	 */
	PFNGLPROGRAMENVPARAMETERI4IVNVPROC glProgramEnvParameterI4ivNV;

	/**
	 * @brief void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
	 */
	PFNGLPROGRAMENVPARAMETERI4UINVPROC glProgramEnvParameterI4uiNV;

	/**
	 * @brief void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint *params)
	 */
	PFNGLPROGRAMENVPARAMETERI4UIVNVPROC glProgramEnvParameterI4uivNV;

	/**
	 * @brief void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint *params)
	 */
	PFNGLPROGRAMENVPARAMETERSI4IVNVPROC glProgramEnvParametersI4ivNV;

	/**
	 * @brief void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint *params)
	 */
	PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC glProgramEnvParametersI4uivNV;

	/**
	 * @brief void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
	 */
	PFNGLPROGRAMLOCALPARAMETERI4INVPROC glProgramLocalParameterI4iNV;

	/**
	 * @brief void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint *params)
	 */
	PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC glProgramLocalParameterI4ivNV;

	/**
	 * @brief void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
	 */
	PFNGLPROGRAMLOCALPARAMETERI4UINVPROC glProgramLocalParameterI4uiNV;

	/**
	 * @brief void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint *params)
	 */
	PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC glProgramLocalParameterI4uivNV;

	/**
	 * @brief void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint *params)
	 */
	PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC glProgramLocalParametersI4ivNV;

	/**
	 * @brief void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint *params)
	 */
	PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC glProgramLocalParametersI4uivNV;




	// ****** GL_NV_gpu_program5 ******

	/**
	 * @brief Returns \c true if \b GL_NV_gpu_program5 is supported, false otherwise.
	 */
	bool isGL_NV_gpu_program5;


	/**
	 * @brief void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint *param)
	 */
	PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC glGetProgramSubroutineParameteruivNV;

	/**
	 * @brief void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint *params)
	 */
	PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC glProgramSubroutineParametersuivNV;




	// ****** GL_NV_gpu_shader5 ******

	/**
	 * @brief Returns \c true if \b GL_NV_gpu_shader5 is supported, false otherwise.
	 */
	bool isGL_NV_gpu_shader5;


	/**
	 * @brief void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT *params)
	 */
	PFNGLGETUNIFORMI64VNVPROC glGetUniformi64vNV;

	/**
	 * @brief void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
	 */
	PFNGLPROGRAMUNIFORM1I64NVPROC glProgramUniform1i64NV;

	/**
	 * @brief void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value)
	 */
	PFNGLPROGRAMUNIFORM1I64VNVPROC glProgramUniform1i64vNV;

	/**
	 * @brief void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
	 */
	PFNGLPROGRAMUNIFORM1UI64NVPROC glProgramUniform1ui64NV;

	/**
	 * @brief void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV;

	/**
	 * @brief void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
	 */
	PFNGLPROGRAMUNIFORM2I64NVPROC glProgramUniform2i64NV;

	/**
	 * @brief void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value)
	 */
	PFNGLPROGRAMUNIFORM2I64VNVPROC glProgramUniform2i64vNV;

	/**
	 * @brief void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
	 */
	PFNGLPROGRAMUNIFORM2UI64NVPROC glProgramUniform2ui64NV;

	/**
	 * @brief void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV;

	/**
	 * @brief void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
	 */
	PFNGLPROGRAMUNIFORM3I64NVPROC glProgramUniform3i64NV;

	/**
	 * @brief void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value)
	 */
	PFNGLPROGRAMUNIFORM3I64VNVPROC glProgramUniform3i64vNV;

	/**
	 * @brief void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
	 */
	PFNGLPROGRAMUNIFORM3UI64NVPROC glProgramUniform3ui64NV;

	/**
	 * @brief void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV;

	/**
	 * @brief void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
	 */
	PFNGLPROGRAMUNIFORM4I64NVPROC glProgramUniform4i64NV;

	/**
	 * @brief void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value)
	 */
	PFNGLPROGRAMUNIFORM4I64VNVPROC glProgramUniform4i64vNV;

	/**
	 * @brief void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
	 */
	PFNGLPROGRAMUNIFORM4UI64NVPROC glProgramUniform4ui64NV;

	/**
	 * @brief void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV;

	/**
	 * @brief void glUniform1i64NV(GLint location, GLint64EXT x)
	 */
	PFNGLUNIFORM1I64NVPROC glUniform1i64NV;

	/**
	 * @brief void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT *value)
	 */
	PFNGLUNIFORM1I64VNVPROC glUniform1i64vNV;

	/**
	 * @brief void glUniform1ui64NV(GLint location, GLuint64EXT x)
	 */
	PFNGLUNIFORM1UI64NVPROC glUniform1ui64NV;

	/**
	 * @brief void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLUNIFORM1UI64VNVPROC glUniform1ui64vNV;

	/**
	 * @brief void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
	 */
	PFNGLUNIFORM2I64NVPROC glUniform2i64NV;

	/**
	 * @brief void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT *value)
	 */
	PFNGLUNIFORM2I64VNVPROC glUniform2i64vNV;

	/**
	 * @brief void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
	 */
	PFNGLUNIFORM2UI64NVPROC glUniform2ui64NV;

	/**
	 * @brief void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLUNIFORM2UI64VNVPROC glUniform2ui64vNV;

	/**
	 * @brief void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
	 */
	PFNGLUNIFORM3I64NVPROC glUniform3i64NV;

	/**
	 * @brief void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT *value)
	 */
	PFNGLUNIFORM3I64VNVPROC glUniform3i64vNV;

	/**
	 * @brief void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
	 */
	PFNGLUNIFORM3UI64NVPROC glUniform3ui64NV;

	/**
	 * @brief void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLUNIFORM3UI64VNVPROC glUniform3ui64vNV;

	/**
	 * @brief void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
	 */
	PFNGLUNIFORM4I64NVPROC glUniform4i64NV;

	/**
	 * @brief void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT *value)
	 */
	PFNGLUNIFORM4I64VNVPROC glUniform4i64vNV;

	/**
	 * @brief void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
	 */
	PFNGLUNIFORM4UI64NVPROC glUniform4ui64NV;

	/**
	 * @brief void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLUNIFORM4UI64VNVPROC glUniform4ui64vNV;




	// ****** GL_NV_half_float ******

	/**
	 * @brief Returns \c true if \b GL_NV_half_float is supported, false otherwise.
	 */
	bool isGL_NV_half_float;


	/**
	 * @brief void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
	 */
	PFNGLCOLOR3HNVPROC glColor3hNV;

	/**
	 * @brief void glColor3hvNV(const GLhalfNV *v)
	 */
	PFNGLCOLOR3HVNVPROC glColor3hvNV;

	/**
	 * @brief void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
	 */
	PFNGLCOLOR4HNVPROC glColor4hNV;

	/**
	 * @brief void glColor4hvNV(const GLhalfNV *v)
	 */
	PFNGLCOLOR4HVNVPROC glColor4hvNV;

	/**
	 * @brief void glFogCoordhNV(GLhalfNV fog)
	 */
	PFNGLFOGCOORDHNVPROC glFogCoordhNV;

	/**
	 * @brief void glFogCoordhvNV(const GLhalfNV *fog)
	 */
	PFNGLFOGCOORDHVNVPROC glFogCoordhvNV;

	/**
	 * @brief void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
	 */
	PFNGLMULTITEXCOORD1HNVPROC glMultiTexCoord1hNV;

	/**
	 * @brief void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV *v)
	 */
	PFNGLMULTITEXCOORD1HVNVPROC glMultiTexCoord1hvNV;

	/**
	 * @brief void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
	 */
	PFNGLMULTITEXCOORD2HNVPROC glMultiTexCoord2hNV;

	/**
	 * @brief void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV *v)
	 */
	PFNGLMULTITEXCOORD2HVNVPROC glMultiTexCoord2hvNV;

	/**
	 * @brief void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
	 */
	PFNGLMULTITEXCOORD3HNVPROC glMultiTexCoord3hNV;

	/**
	 * @brief void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV *v)
	 */
	PFNGLMULTITEXCOORD3HVNVPROC glMultiTexCoord3hvNV;

	/**
	 * @brief void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
	 */
	PFNGLMULTITEXCOORD4HNVPROC glMultiTexCoord4hNV;

	/**
	 * @brief void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV *v)
	 */
	PFNGLMULTITEXCOORD4HVNVPROC glMultiTexCoord4hvNV;

	/**
	 * @brief void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
	 */
	PFNGLNORMAL3HNVPROC glNormal3hNV;

	/**
	 * @brief void glNormal3hvNV(const GLhalfNV *v)
	 */
	PFNGLNORMAL3HVNVPROC glNormal3hvNV;

	/**
	 * @brief void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
	 */
	PFNGLSECONDARYCOLOR3HNVPROC glSecondaryColor3hNV;

	/**
	 * @brief void glSecondaryColor3hvNV(const GLhalfNV *v)
	 */
	PFNGLSECONDARYCOLOR3HVNVPROC glSecondaryColor3hvNV;

	/**
	 * @brief void glTexCoord1hNV(GLhalfNV s)
	 */
	PFNGLTEXCOORD1HNVPROC glTexCoord1hNV;

	/**
	 * @brief void glTexCoord1hvNV(const GLhalfNV *v)
	 */
	PFNGLTEXCOORD1HVNVPROC glTexCoord1hvNV;

	/**
	 * @brief void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
	 */
	PFNGLTEXCOORD2HNVPROC glTexCoord2hNV;

	/**
	 * @brief void glTexCoord2hvNV(const GLhalfNV *v)
	 */
	PFNGLTEXCOORD2HVNVPROC glTexCoord2hvNV;

	/**
	 * @brief void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
	 */
	PFNGLTEXCOORD3HNVPROC glTexCoord3hNV;

	/**
	 * @brief void glTexCoord3hvNV(const GLhalfNV *v)
	 */
	PFNGLTEXCOORD3HVNVPROC glTexCoord3hvNV;

	/**
	 * @brief void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
	 */
	PFNGLTEXCOORD4HNVPROC glTexCoord4hNV;

	/**
	 * @brief void glTexCoord4hvNV(const GLhalfNV *v)
	 */
	PFNGLTEXCOORD4HVNVPROC glTexCoord4hvNV;

	/**
	 * @brief void glVertex2hNV(GLhalfNV x, GLhalfNV y)
	 */
	PFNGLVERTEX2HNVPROC glVertex2hNV;

	/**
	 * @brief void glVertex2hvNV(const GLhalfNV *v)
	 */
	PFNGLVERTEX2HVNVPROC glVertex2hvNV;

	/**
	 * @brief void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
	 */
	PFNGLVERTEX3HNVPROC glVertex3hNV;

	/**
	 * @brief void glVertex3hvNV(const GLhalfNV *v)
	 */
	PFNGLVERTEX3HVNVPROC glVertex3hvNV;

	/**
	 * @brief void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
	 */
	PFNGLVERTEX4HNVPROC glVertex4hNV;

	/**
	 * @brief void glVertex4hvNV(const GLhalfNV *v)
	 */
	PFNGLVERTEX4HVNVPROC glVertex4hvNV;

	/**
	 * @brief void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
	 */
	PFNGLVERTEXATTRIB1HNVPROC glVertexAttrib1hNV;

	/**
	 * @brief void glVertexAttrib1hvNV(GLuint index, const GLhalfNV *v)
	 */
	PFNGLVERTEXATTRIB1HVNVPROC glVertexAttrib1hvNV;

	/**
	 * @brief void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
	 */
	PFNGLVERTEXATTRIB2HNVPROC glVertexAttrib2hNV;

	/**
	 * @brief void glVertexAttrib2hvNV(GLuint index, const GLhalfNV *v)
	 */
	PFNGLVERTEXATTRIB2HVNVPROC glVertexAttrib2hvNV;

	/**
	 * @brief void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
	 */
	PFNGLVERTEXATTRIB3HNVPROC glVertexAttrib3hNV;

	/**
	 * @brief void glVertexAttrib3hvNV(GLuint index, const GLhalfNV *v)
	 */
	PFNGLVERTEXATTRIB3HVNVPROC glVertexAttrib3hvNV;

	/**
	 * @brief void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
	 */
	PFNGLVERTEXATTRIB4HNVPROC glVertexAttrib4hNV;

	/**
	 * @brief void glVertexAttrib4hvNV(GLuint index, const GLhalfNV *v)
	 */
	PFNGLVERTEXATTRIB4HVNVPROC glVertexAttrib4hvNV;

	/**
	 * @brief void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
	 */
	PFNGLVERTEXATTRIBS1HVNVPROC glVertexAttribs1hvNV;

	/**
	 * @brief void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
	 */
	PFNGLVERTEXATTRIBS2HVNVPROC glVertexAttribs2hvNV;

	/**
	 * @brief void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
	 */
	PFNGLVERTEXATTRIBS3HVNVPROC glVertexAttribs3hvNV;

	/**
	 * @brief void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
	 */
	PFNGLVERTEXATTRIBS4HVNVPROC glVertexAttribs4hvNV;

	/**
	 * @brief void glVertexWeighthNV(GLhalfNV weight)
	 */
	PFNGLVERTEXWEIGHTHNVPROC glVertexWeighthNV;

	/**
	 * @brief void glVertexWeighthvNV(const GLhalfNV *weight)
	 */
	PFNGLVERTEXWEIGHTHVNVPROC glVertexWeighthvNV;




	// ****** GL_NV_light_max_exponent ******

	/**
	 * @brief Returns \c true if \b GL_NV_light_max_exponent is supported, false otherwise.
	 */
	bool isGL_NV_light_max_exponent;




	// ****** GL_NV_multisample_coverage ******

	/**
	 * @brief Returns \c true if \b GL_NV_multisample_coverage is supported, false otherwise.
	 */
	bool isGL_NV_multisample_coverage;




	// ****** GL_NV_multisample_filter_hint ******

	/**
	 * @brief Returns \c true if \b GL_NV_multisample_filter_hint is supported, false otherwise.
	 */
	bool isGL_NV_multisample_filter_hint;




	// ****** GL_NV_occlusion_query ******

	/**
	 * @brief Returns \c true if \b GL_NV_occlusion_query is supported, false otherwise.
	 */
	bool isGL_NV_occlusion_query;


	/**
	 * @brief void glBeginOcclusionQueryNV(GLuint id)
	 */
	PFNGLBEGINOCCLUSIONQUERYNVPROC glBeginOcclusionQueryNV;

	/**
	 * @brief void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint *ids)
	 */
	PFNGLDELETEOCCLUSIONQUERIESNVPROC glDeleteOcclusionQueriesNV;

	/**
	 * @brief void glEndOcclusionQueryNV(void)
	 */
	PFNGLENDOCCLUSIONQUERYNVPROC glEndOcclusionQueryNV;

	/**
	 * @brief void glGenOcclusionQueriesNV(GLsizei n, GLuint *ids)
	 */
	PFNGLGENOCCLUSIONQUERIESNVPROC glGenOcclusionQueriesNV;

	/**
	 * @brief void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint *params)
	 */
	PFNGLGETOCCLUSIONQUERYIVNVPROC glGetOcclusionQueryivNV;

	/**
	 * @brief void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint *params)
	 */
	PFNGLGETOCCLUSIONQUERYUIVNVPROC glGetOcclusionQueryuivNV;

	/**
	 * @brief GLboolean glIsOcclusionQueryNV(GLuint id)
	 */
	PFNGLISOCCLUSIONQUERYNVPROC glIsOcclusionQueryNV;




	// ****** GL_NV_packed_depth_stencil ******

	/**
	 * @brief Returns \c true if \b GL_NV_packed_depth_stencil is supported, false otherwise.
	 */
	bool isGL_NV_packed_depth_stencil;




	// ****** GL_NV_parameter_buffer_object ******

	/**
	 * @brief Returns \c true if \b GL_NV_parameter_buffer_object is supported, false otherwise.
	 */
	bool isGL_NV_parameter_buffer_object;


	/**
	 * @brief void glProgramBufferParametersIivNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params)
	 */
	PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC glProgramBufferParametersIivNV;

	/**
	 * @brief void glProgramBufferParametersIuivNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params)
	 */
	PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC glProgramBufferParametersIuivNV;

	/**
	 * @brief void glProgramBufferParametersfvNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params)
	 */
	PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC glProgramBufferParametersfvNV;




	// ****** GL_NV_parameter_buffer_object2 ******

	/**
	 * @brief Returns \c true if \b GL_NV_parameter_buffer_object2 is supported, false otherwise.
	 */
	bool isGL_NV_parameter_buffer_object2;




	// ****** GL_NV_pixel_data_range ******

	/**
	 * @brief Returns \c true if \b GL_NV_pixel_data_range is supported, false otherwise.
	 */
	bool isGL_NV_pixel_data_range;


	/**
	 * @brief void glFlushPixelDataRangeNV(GLenum target)
	 */
	PFNGLFLUSHPIXELDATARANGENVPROC glFlushPixelDataRangeNV;

	/**
	 * @brief void glPixelDataRangeNV(GLenum target, GLsizei length, GLvoid *pointer)
	 */
	PFNGLPIXELDATARANGENVPROC glPixelDataRangeNV;




	// ****** GL_NV_point_sprite ******

	/**
	 * @brief Returns \c true if \b GL_NV_point_sprite is supported, false otherwise.
	 */
	bool isGL_NV_point_sprite;


	/**
	 * @brief void glPointParameteriNV(GLenum pname, GLint param)
	 */
	PFNGLPOINTPARAMETERINVPROC glPointParameteriNV;

	/**
	 * @brief void glPointParameterivNV(GLenum pname, const GLint *params)
	 */
	PFNGLPOINTPARAMETERIVNVPROC glPointParameterivNV;




	// ****** GL_NV_present_video ******

	/**
	 * @brief Returns \c true if \b GL_NV_present_video is supported, false otherwise.
	 */
	bool isGL_NV_present_video;


	/**
	 * @brief void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT *params)
	 */
	PFNGLGETVIDEOI64VNVPROC glGetVideoi64vNV;

	/**
	 * @brief void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint *params)
	 */
	PFNGLGETVIDEOIVNVPROC glGetVideoivNV;

	/**
	 * @brief void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT *params)
	 */
	PFNGLGETVIDEOUI64VNVPROC glGetVideoui64vNV;

	/**
	 * @brief void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint *params)
	 */
	PFNGLGETVIDEOUIVNVPROC glGetVideouivNV;

	/**
	 * @brief void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
	 */
	PFNGLPRESENTFRAMEDUALFILLNVPROC glPresentFrameDualFillNV;

	/**
	 * @brief void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
	 */
	PFNGLPRESENTFRAMEKEYEDNVPROC glPresentFrameKeyedNV;




	// ****** GL_NV_primitive_restart ******

	/**
	 * @brief Returns \c true if \b GL_NV_primitive_restart is supported, false otherwise.
	 */
	bool isGL_NV_primitive_restart;


	/**
	 * @brief void glPrimitiveRestartIndexNV(GLuint index)
	 */
	PFNGLPRIMITIVERESTARTINDEXNVPROC glPrimitiveRestartIndexNV;

	/**
	 * @brief void glPrimitiveRestartNV(void)
	 */
	PFNGLPRIMITIVERESTARTNVPROC glPrimitiveRestartNV;




	// ****** GL_NV_register_combiners ******

	/**
	 * @brief Returns \c true if \b GL_NV_register_combiners is supported, false otherwise.
	 */
	bool isGL_NV_register_combiners;


	/**
	 * @brief void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
	 */
	PFNGLCOMBINERINPUTNVPROC glCombinerInputNV;

	/**
	 * @brief void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
	 */
	PFNGLCOMBINEROUTPUTNVPROC glCombinerOutputNV;

	/**
	 * @brief void glCombinerParameterfNV(GLenum pname, GLfloat param)
	 */
	PFNGLCOMBINERPARAMETERFNVPROC glCombinerParameterfNV;

	/**
	 * @brief void glCombinerParameterfvNV(GLenum pname, const GLfloat *params)
	 */
	PFNGLCOMBINERPARAMETERFVNVPROC glCombinerParameterfvNV;

	/**
	 * @brief void glCombinerParameteriNV(GLenum pname, GLint param)
	 */
	PFNGLCOMBINERPARAMETERINVPROC glCombinerParameteriNV;

	/**
	 * @brief void glCombinerParameterivNV(GLenum pname, const GLint *params)
	 */
	PFNGLCOMBINERPARAMETERIVNVPROC glCombinerParameterivNV;

	/**
	 * @brief void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
	 */
	PFNGLFINALCOMBINERINPUTNVPROC glFinalCombinerInputNV;

	/**
	 * @brief void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params)
	 */
	PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC glGetCombinerInputParameterfvNV;

	/**
	 * @brief void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params)
	 */
	PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC glGetCombinerInputParameterivNV;

	/**
	 * @brief void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat *params)
	 */
	PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC glGetCombinerOutputParameterfvNV;

	/**
	 * @brief void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint *params)
	 */
	PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC glGetCombinerOutputParameterivNV;

	/**
	 * @brief void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat *params)
	 */
	PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC glGetFinalCombinerInputParameterfvNV;

	/**
	 * @brief void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint *params)
	 */
	PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC glGetFinalCombinerInputParameterivNV;




	// ****** GL_NV_register_combiners2 ******

	/**
	 * @brief Returns \c true if \b GL_NV_register_combiners2 is supported, false otherwise.
	 */
	bool isGL_NV_register_combiners2;


	/**
	 * @brief void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat *params)
	 */
	PFNGLCOMBINERSTAGEPARAMETERFVNVPROC glCombinerStageParameterfvNV;

	/**
	 * @brief void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat *params)
	 */
	PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC glGetCombinerStageParameterfvNV;




	// ****** GL_NV_shader_buffer_load ******

	/**
	 * @brief Returns \c true if \b GL_NV_shader_buffer_load is supported, false otherwise.
	 */
	bool isGL_NV_shader_buffer_load;


	/**
	 * @brief void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT *params)
	 */
	PFNGLGETBUFFERPARAMETERUI64VNVPROC glGetBufferParameterui64vNV;

	/**
	 * @brief void glGetIntegerui64vNV(GLenum value, GLuint64EXT *result)
	 */
	PFNGLGETINTEGERUI64VNVPROC glGetIntegerui64vNV;

	/**
	 * @brief void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT *params)
	 */
	PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC glGetNamedBufferParameterui64vNV;

	/**
	 * @brief void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT *params)
	 */
	PFNGLGETUNIFORMUI64VNVPROC glGetUniformui64vNV;

	/**
	 * @brief GLboolean glIsBufferResidentNV(GLenum target)
	 */
	PFNGLISBUFFERRESIDENTNVPROC glIsBufferResidentNV;

	/**
	 * @brief GLboolean glIsNamedBufferResidentNV(GLuint buffer)
	 */
	PFNGLISNAMEDBUFFERRESIDENTNVPROC glIsNamedBufferResidentNV;

	/**
	 * @brief void glMakeBufferNonResidentNV(GLenum target)
	 */
	PFNGLMAKEBUFFERNONRESIDENTNVPROC glMakeBufferNonResidentNV;

	/**
	 * @brief void glMakeBufferResidentNV(GLenum target, GLenum access)
	 */
	PFNGLMAKEBUFFERRESIDENTNVPROC glMakeBufferResidentNV;

	/**
	 * @brief void glMakeNamedBufferNonResidentNV(GLuint buffer)
	 */
	PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC glMakeNamedBufferNonResidentNV;

	/**
	 * @brief void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
	 */
	PFNGLMAKENAMEDBUFFERRESIDENTNVPROC glMakeNamedBufferResidentNV;

	/**
	 * @brief void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
	 */
	PFNGLPROGRAMUNIFORMUI64NVPROC glProgramUniformui64NV;

	/**
	 * @brief void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLPROGRAMUNIFORMUI64VNVPROC glProgramUniformui64vNV;

	/**
	 * @brief void glUniformui64NV(GLint location, GLuint64EXT value)
	 */
	PFNGLUNIFORMUI64NVPROC glUniformui64NV;

	/**
	 * @brief void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
	 */
	PFNGLUNIFORMUI64VNVPROC glUniformui64vNV;




	// ****** GL_NV_shader_buffer_store ******

	/**
	 * @brief Returns \c true if \b GL_NV_shader_buffer_store is supported, false otherwise.
	 */
	bool isGL_NV_shader_buffer_store;




	// ****** GL_NV_tessellation_program5 ******

	/**
	 * @brief Returns \c true if \b GL_NV_tessellation_program5 is supported, false otherwise.
	 */
	bool isGL_NV_tessellation_program5;




	// ****** GL_NV_texgen_emboss ******

	/**
	 * @brief Returns \c true if \b GL_NV_texgen_emboss is supported, false otherwise.
	 */
	bool isGL_NV_texgen_emboss;




	// ****** GL_NV_texgen_reflection ******

	/**
	 * @brief Returns \c true if \b GL_NV_texgen_reflection is supported, false otherwise.
	 */
	bool isGL_NV_texgen_reflection;




	// ****** GL_NV_texture_barrier ******

	/**
	 * @brief Returns \c true if \b GL_NV_texture_barrier is supported, false otherwise.
	 */
	bool isGL_NV_texture_barrier;


	/**
	 * @brief void glTextureBarrierNV(void)
	 */
	PFNGLTEXTUREBARRIERNVPROC glTextureBarrierNV;




	// ****** GL_NV_texture_compression_vtc ******

	/**
	 * @brief Returns \c true if \b GL_NV_texture_compression_vtc is supported, false otherwise.
	 */
	bool isGL_NV_texture_compression_vtc;




	// ****** GL_NV_texture_env_combine4 ******

	/**
	 * @brief Returns \c true if \b GL_NV_texture_env_combine4 is supported, false otherwise.
	 */
	bool isGL_NV_texture_env_combine4;




	// ****** GL_NV_texture_expand_normal ******

	/**
	 * @brief Returns \c true if \b GL_NV_texture_expand_normal is supported, false otherwise.
	 */
	bool isGL_NV_texture_expand_normal;




	// ****** GL_NV_texture_multisample ******

	/**
	 * @brief Returns \c true if \b GL_NV_texture_multisample is supported, false otherwise.
	 */
	bool isGL_NV_texture_multisample;


	/**
	 * @brief void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
	 */
	PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC glTexImage2DMultisampleCoverageNV;

	/**
	 * @brief void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
	 */
	PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC glTexImage3DMultisampleCoverageNV;

	/**
	 * @brief void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
	 */
	PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC glTextureImage2DMultisampleCoverageNV;

	/**
	 * @brief void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
	 */
	PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC glTextureImage2DMultisampleNV;

	/**
	 * @brief void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
	 */
	PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC glTextureImage3DMultisampleCoverageNV;

	/**
	 * @brief void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
	 */
	PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC glTextureImage3DMultisampleNV;




	// ****** GL_NV_texture_rectangle ******

	/**
	 * @brief Returns \c true if \b GL_NV_texture_rectangle is supported, false otherwise.
	 */
	bool isGL_NV_texture_rectangle;




	// ****** GL_NV_texture_shader ******

	/**
	 * @brief Returns \c true if \b GL_NV_texture_shader is supported, false otherwise.
	 */
	bool isGL_NV_texture_shader;




	// ****** GL_NV_texture_shader2 ******

	/**
	 * @brief Returns \c true if \b GL_NV_texture_shader2 is supported, false otherwise.
	 */
	bool isGL_NV_texture_shader2;




	// ****** GL_NV_texture_shader3 ******

	/**
	 * @brief Returns \c true if \b GL_NV_texture_shader3 is supported, false otherwise.
	 */
	bool isGL_NV_texture_shader3;




	// ****** GL_NV_transform_feedback ******

	/**
	 * @brief Returns \c true if \b GL_NV_transform_feedback is supported, false otherwise.
	 */
	bool isGL_NV_transform_feedback;


	/**
	 * @brief void glActiveVaryingNV(GLuint program, const GLchar *name)
	 */
	PFNGLACTIVEVARYINGNVPROC glActiveVaryingNV;

	/**
	 * @brief void glBeginTransformFeedbackNV(GLenum primitiveMode)
	 */
	PFNGLBEGINTRANSFORMFEEDBACKNVPROC glBeginTransformFeedbackNV;

	/**
	 * @brief void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
	 */
	PFNGLBINDBUFFERBASENVPROC glBindBufferBaseNV;

	/**
	 * @brief void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
	 */
	PFNGLBINDBUFFEROFFSETNVPROC glBindBufferOffsetNV;

	/**
	 * @brief void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
	 */
	PFNGLBINDBUFFERRANGENVPROC glBindBufferRangeNV;

	/**
	 * @brief void glEndTransformFeedbackNV(void)
	 */
	PFNGLENDTRANSFORMFEEDBACKNVPROC glEndTransformFeedbackNV;

	/**
	 * @brief void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
	 */
	PFNGLGETACTIVEVARYINGNVPROC glGetActiveVaryingNV;

	/**
	 * @brief void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint *location)
	 */
	PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC glGetTransformFeedbackVaryingNV;

	/**
	 * @brief GLint glGetVaryingLocationNV(GLuint program, const GLchar *name)
	 */
	PFNGLGETVARYINGLOCATIONNVPROC glGetVaryingLocationNV;

	/**
	 * @brief void glTransformFeedbackAttribsNV(GLuint count, const GLint *attribs, GLenum bufferMode)
	 */
	PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC glTransformFeedbackAttribsNV;

	/**
	 * @brief void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint *attribs, GLsizei nbuffers, const GLint *bufstreams, GLenum bufferMode)
	 */
	PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC glTransformFeedbackStreamAttribsNV;

	/**
	 * @brief void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode)
	 */
	PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC glTransformFeedbackVaryingsNV;




	// ****** GL_NV_transform_feedback2 ******

	/**
	 * @brief Returns \c true if \b GL_NV_transform_feedback2 is supported, false otherwise.
	 */
	bool isGL_NV_transform_feedback2;


	/**
	 * @brief void glBindTransformFeedbackNV(GLenum target, GLuint id)
	 */
	PFNGLBINDTRANSFORMFEEDBACKNVPROC glBindTransformFeedbackNV;

	/**
	 * @brief void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint *ids)
	 */
	PFNGLDELETETRANSFORMFEEDBACKSNVPROC glDeleteTransformFeedbacksNV;

	/**
	 * @brief void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
	 */
	PFNGLDRAWTRANSFORMFEEDBACKNVPROC glDrawTransformFeedbackNV;

	/**
	 * @brief void glGenTransformFeedbacksNV(GLsizei n, GLuint *ids)
	 */
	PFNGLGENTRANSFORMFEEDBACKSNVPROC glGenTransformFeedbacksNV;

	/**
	 * @brief GLboolean glIsTransformFeedbackNV(GLuint id)
	 */
	PFNGLISTRANSFORMFEEDBACKNVPROC glIsTransformFeedbackNV;

	/**
	 * @brief void glPauseTransformFeedbackNV(void)
	 */
	PFNGLPAUSETRANSFORMFEEDBACKNVPROC glPauseTransformFeedbackNV;

	/**
	 * @brief void glResumeTransformFeedbackNV(void)
	 */
	PFNGLRESUMETRANSFORMFEEDBACKNVPROC glResumeTransformFeedbackNV;




	// ****** GL_NV_vdpau_interop ******

	/**
	 * @brief Returns \c true if \b GL_NV_vdpau_interop is supported, false otherwise.
	 */
	bool isGL_NV_vdpau_interop;


	/**
	 * @brief void glVDPAUFiniNV(void)
	 */
	PFNGLVDPAUFININVPROC glVDPAUFiniNV;

	/**
	 * @brief void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values)
	 */
	PFNGLVDPAUGETSURFACEIVNVPROC glVDPAUGetSurfaceivNV;

	/**
	 * @brief void glVDPAUInitNV(const GLvoid *vdpDevice, const GLvoid *getProcAddress)
	 */
	PFNGLVDPAUINITNVPROC glVDPAUInitNV;

	/**
	 * @brief void glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
	 */
	PFNGLVDPAUISSURFACENVPROC glVDPAUIsSurfaceNV;

	/**
	 * @brief void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV *surfaces)
	 */
	PFNGLVDPAUMAPSURFACESNVPROC glVDPAUMapSurfacesNV;

	/**
	 * @brief GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(GLvoid *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames)
	 */
	PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC glVDPAURegisterOutputSurfaceNV;

	/**
	 * @brief GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(GLvoid *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames)
	 */
	PFNGLVDPAUREGISTERVIDEOSURFACENVPROC glVDPAURegisterVideoSurfaceNV;

	/**
	 * @brief void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
	 */
	PFNGLVDPAUSURFACEACCESSNVPROC glVDPAUSurfaceAccessNV;

	/**
	 * @brief void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV *surfaces)
	 */
	PFNGLVDPAUUNMAPSURFACESNVPROC glVDPAUUnmapSurfacesNV;

	/**
	 * @brief void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
	 */
	PFNGLVDPAUUNREGISTERSURFACENVPROC glVDPAUUnregisterSurfaceNV;




	// ****** GL_NV_vertex_array_range ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_array_range is supported, false otherwise.
	 */
	bool isGL_NV_vertex_array_range;


	/**
	 * @brief void glFlushVertexArrayRangeNV(void)
	 */
	PFNGLFLUSHVERTEXARRAYRANGENVPROC glFlushVertexArrayRangeNV;

	/**
	 * @brief void glVertexArrayRangeNV(GLsizei length, const GLvoid *pointer)
	 */
	PFNGLVERTEXARRAYRANGENVPROC glVertexArrayRangeNV;




	// ****** GL_NV_vertex_array_range2 ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_array_range2 is supported, false otherwise.
	 */
	bool isGL_NV_vertex_array_range2;




	// ****** GL_NV_vertex_attrib_integer_64bit ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_attrib_integer_64bit is supported, false otherwise.
	 */
	bool isGL_NV_vertex_attrib_integer_64bit;


	/**
	 * @brief void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT *params)
	 */
	PFNGLGETVERTEXATTRIBLI64VNVPROC glGetVertexAttribLi64vNV;

	/**
	 * @brief void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT *params)
	 */
	PFNGLGETVERTEXATTRIBLUI64VNVPROC glGetVertexAttribLui64vNV;

	/**
	 * @brief void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
	 */
	PFNGLVERTEXATTRIBL1I64NVPROC glVertexAttribL1i64NV;

	/**
	 * @brief void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT *v)
	 */
	PFNGLVERTEXATTRIBL1I64VNVPROC glVertexAttribL1i64vNV;

	/**
	 * @brief void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
	 */
	PFNGLVERTEXATTRIBL1UI64NVPROC glVertexAttribL1ui64NV;

	/**
	 * @brief void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT *v)
	 */
	PFNGLVERTEXATTRIBL1UI64VNVPROC glVertexAttribL1ui64vNV;

	/**
	 * @brief void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
	 */
	PFNGLVERTEXATTRIBL2I64NVPROC glVertexAttribL2i64NV;

	/**
	 * @brief void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT *v)
	 */
	PFNGLVERTEXATTRIBL2I64VNVPROC glVertexAttribL2i64vNV;

	/**
	 * @brief void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
	 */
	PFNGLVERTEXATTRIBL2UI64NVPROC glVertexAttribL2ui64NV;

	/**
	 * @brief void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT *v)
	 */
	PFNGLVERTEXATTRIBL2UI64VNVPROC glVertexAttribL2ui64vNV;

	/**
	 * @brief void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
	 */
	PFNGLVERTEXATTRIBL3I64NVPROC glVertexAttribL3i64NV;

	/**
	 * @brief void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT *v)
	 */
	PFNGLVERTEXATTRIBL3I64VNVPROC glVertexAttribL3i64vNV;

	/**
	 * @brief void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
	 */
	PFNGLVERTEXATTRIBL3UI64NVPROC glVertexAttribL3ui64NV;

	/**
	 * @brief void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT *v)
	 */
	PFNGLVERTEXATTRIBL3UI64VNVPROC glVertexAttribL3ui64vNV;

	/**
	 * @brief void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
	 */
	PFNGLVERTEXATTRIBL4I64NVPROC glVertexAttribL4i64NV;

	/**
	 * @brief void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT *v)
	 */
	PFNGLVERTEXATTRIBL4I64VNVPROC glVertexAttribL4i64vNV;

	/**
	 * @brief void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
	 */
	PFNGLVERTEXATTRIBL4UI64NVPROC glVertexAttribL4ui64NV;

	/**
	 * @brief void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT *v)
	 */
	PFNGLVERTEXATTRIBL4UI64VNVPROC glVertexAttribL4ui64vNV;

	/**
	 * @brief void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
	 */
	PFNGLVERTEXATTRIBLFORMATNVPROC glVertexAttribLFormatNV;




	// ****** GL_NV_vertex_buffer_unified_memory ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_buffer_unified_memory is supported, false otherwise.
	 */
	bool isGL_NV_vertex_buffer_unified_memory;


	/**
	 * @brief void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
	 */
	PFNGLBUFFERADDRESSRANGENVPROC glBufferAddressRangeNV;

	/**
	 * @brief void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
	 */
	PFNGLCOLORFORMATNVPROC glColorFormatNV;

	/**
	 * @brief void glEdgeFlagFormatNV(GLsizei stride)
	 */
	PFNGLEDGEFLAGFORMATNVPROC glEdgeFlagFormatNV;

	/**
	 * @brief void glFogCoordFormatNV(GLenum type, GLsizei stride)
	 */
	PFNGLFOGCOORDFORMATNVPROC glFogCoordFormatNV;

	/**
	 * @brief void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT *result)
	 */
	PFNGLGETINTEGERUI64I_VNVPROC glGetIntegerui64i_vNV;

	/**
	 * @brief void glIndexFormatNV(GLenum type, GLsizei stride)
	 */
	PFNGLINDEXFORMATNVPROC glIndexFormatNV;

	/**
	 * @brief void glNormalFormatNV(GLenum type, GLsizei stride)
	 */
	PFNGLNORMALFORMATNVPROC glNormalFormatNV;

	/**
	 * @brief void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
	 */
	PFNGLSECONDARYCOLORFORMATNVPROC glSecondaryColorFormatNV;

	/**
	 * @brief void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
	 */
	PFNGLTEXCOORDFORMATNVPROC glTexCoordFormatNV;

	/**
	 * @brief void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
	 */
	PFNGLVERTEXATTRIBFORMATNVPROC glVertexAttribFormatNV;

	/**
	 * @brief void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
	 */
	PFNGLVERTEXATTRIBIFORMATNVPROC glVertexAttribIFormatNV;

	/**
	 * @brief void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
	 */
	PFNGLVERTEXFORMATNVPROC glVertexFormatNV;




	// ****** GL_NV_vertex_program ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program;


	/**
	 * @brief GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint *programs, GLboolean *residences)
	 */
	PFNGLAREPROGRAMSRESIDENTNVPROC glAreProgramsResidentNV;

	/**
	 * @brief void glBindProgramNV(GLenum target, GLuint id)
	 */
	PFNGLBINDPROGRAMNVPROC glBindProgramNV;

	/**
	 * @brief void glDeleteProgramsNV(GLsizei n, const GLuint *programs)
	 */
	PFNGLDELETEPROGRAMSNVPROC glDeleteProgramsNV;

	/**
	 * @brief void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat *params)
	 */
	PFNGLEXECUTEPROGRAMNVPROC glExecuteProgramNV;

	/**
	 * @brief void glGenProgramsNV(GLsizei n, GLuint *programs)
	 */
	PFNGLGENPROGRAMSNVPROC glGenProgramsNV;

	/**
	 * @brief void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble *params)
	 */
	PFNGLGETPROGRAMPARAMETERDVNVPROC glGetProgramParameterdvNV;

	/**
	 * @brief void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params)
	 */
	PFNGLGETPROGRAMPARAMETERFVNVPROC glGetProgramParameterfvNV;

	/**
	 * @brief void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte *program)
	 */
	PFNGLGETPROGRAMSTRINGNVPROC glGetProgramStringNV;

	/**
	 * @brief void glGetProgramivNV(GLuint id, GLenum pname, GLint *params)
	 */
	PFNGLGETPROGRAMIVNVPROC glGetProgramivNV;

	/**
	 * @brief void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint *params)
	 */
	PFNGLGETTRACKMATRIXIVNVPROC glGetTrackMatrixivNV;

	/**
	 * @brief void glGetVertexAttribPointervNV(GLuint index, GLenum pname, GLvoid* *pointer)
	 */
	PFNGLGETVERTEXATTRIBPOINTERVNVPROC glGetVertexAttribPointervNV;

	/**
	 * @brief void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble *params)
	 */
	PFNGLGETVERTEXATTRIBDVNVPROC glGetVertexAttribdvNV;

	/**
	 * @brief void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat *params)
	 */
	PFNGLGETVERTEXATTRIBFVNVPROC glGetVertexAttribfvNV;

	/**
	 * @brief void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint *params)
	 */
	PFNGLGETVERTEXATTRIBIVNVPROC glGetVertexAttribivNV;

	/**
	 * @brief GLboolean glIsProgramNV(GLuint id)
	 */
	PFNGLISPROGRAMNVPROC glIsProgramNV;

	/**
	 * @brief void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte *program)
	 */
	PFNGLLOADPROGRAMNVPROC glLoadProgramNV;

	/**
	 * @brief void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLPROGRAMPARAMETER4DNVPROC glProgramParameter4dNV;

	/**
	 * @brief void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble *v)
	 */
	PFNGLPROGRAMPARAMETER4DVNVPROC glProgramParameter4dvNV;

	/**
	 * @brief void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLPROGRAMPARAMETER4FNVPROC glProgramParameter4fNV;

	/**
	 * @brief void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat *v)
	 */
	PFNGLPROGRAMPARAMETER4FVNVPROC glProgramParameter4fvNV;

	/**
	 * @brief void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble *v)
	 */
	PFNGLPROGRAMPARAMETERS4DVNVPROC glProgramParameters4dvNV;

	/**
	 * @brief void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat *v)
	 */
	PFNGLPROGRAMPARAMETERS4FVNVPROC glProgramParameters4fvNV;

	/**
	 * @brief void glRequestResidentProgramsNV(GLsizei n, const GLuint *programs)
	 */
	PFNGLREQUESTRESIDENTPROGRAMSNVPROC glRequestResidentProgramsNV;

	/**
	 * @brief void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
	 */
	PFNGLTRACKMATRIXNVPROC glTrackMatrixNV;

	/**
	 * @brief void glVertexAttrib1dNV(GLuint index, GLdouble x)
	 */
	PFNGLVERTEXATTRIB1DNVPROC glVertexAttrib1dNV;

	/**
	 * @brief void glVertexAttrib1dvNV(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB1DVNVPROC glVertexAttrib1dvNV;

	/**
	 * @brief void glVertexAttrib1fNV(GLuint index, GLfloat x)
	 */
	PFNGLVERTEXATTRIB1FNVPROC glVertexAttrib1fNV;

	/**
	 * @brief void glVertexAttrib1fvNV(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB1FVNVPROC glVertexAttrib1fvNV;

	/**
	 * @brief void glVertexAttrib1sNV(GLuint index, GLshort x)
	 */
	PFNGLVERTEXATTRIB1SNVPROC glVertexAttrib1sNV;

	/**
	 * @brief void glVertexAttrib1svNV(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB1SVNVPROC glVertexAttrib1svNV;

	/**
	 * @brief void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
	 */
	PFNGLVERTEXATTRIB2DNVPROC glVertexAttrib2dNV;

	/**
	 * @brief void glVertexAttrib2dvNV(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB2DVNVPROC glVertexAttrib2dvNV;

	/**
	 * @brief void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
	 */
	PFNGLVERTEXATTRIB2FNVPROC glVertexAttrib2fNV;

	/**
	 * @brief void glVertexAttrib2fvNV(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB2FVNVPROC glVertexAttrib2fvNV;

	/**
	 * @brief void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
	 */
	PFNGLVERTEXATTRIB2SNVPROC glVertexAttrib2sNV;

	/**
	 * @brief void glVertexAttrib2svNV(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB2SVNVPROC glVertexAttrib2svNV;

	/**
	 * @brief void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLVERTEXATTRIB3DNVPROC glVertexAttrib3dNV;

	/**
	 * @brief void glVertexAttrib3dvNV(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB3DVNVPROC glVertexAttrib3dvNV;

	/**
	 * @brief void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLVERTEXATTRIB3FNVPROC glVertexAttrib3fNV;

	/**
	 * @brief void glVertexAttrib3fvNV(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB3FVNVPROC glVertexAttrib3fvNV;

	/**
	 * @brief void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
	 */
	PFNGLVERTEXATTRIB3SNVPROC glVertexAttrib3sNV;

	/**
	 * @brief void glVertexAttrib3svNV(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB3SVNVPROC glVertexAttrib3svNV;

	/**
	 * @brief void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLVERTEXATTRIB4DNVPROC glVertexAttrib4dNV;

	/**
	 * @brief void glVertexAttrib4dvNV(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB4DVNVPROC glVertexAttrib4dvNV;

	/**
	 * @brief void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLVERTEXATTRIB4FNVPROC glVertexAttrib4fNV;

	/**
	 * @brief void glVertexAttrib4fvNV(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB4FVNVPROC glVertexAttrib4fvNV;

	/**
	 * @brief void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
	 */
	PFNGLVERTEXATTRIB4SNVPROC glVertexAttrib4sNV;

	/**
	 * @brief void glVertexAttrib4svNV(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB4SVNVPROC glVertexAttrib4svNV;

	/**
	 * @brief void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
	 */
	PFNGLVERTEXATTRIB4UBNVPROC glVertexAttrib4ubNV;

	/**
	 * @brief void glVertexAttrib4ubvNV(GLuint index, const GLubyte *v)
	 */
	PFNGLVERTEXATTRIB4UBVNVPROC glVertexAttrib4ubvNV;

	/**
	 * @brief void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLVERTEXATTRIBPOINTERNVPROC glVertexAttribPointerNV;

	/**
	 * @brief void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBS1DVNVPROC glVertexAttribs1dvNV;

	/**
	 * @brief void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIBS1FVNVPROC glVertexAttribs1fvNV;

	/**
	 * @brief void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort *v)
	 */
	PFNGLVERTEXATTRIBS1SVNVPROC glVertexAttribs1svNV;

	/**
	 * @brief void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBS2DVNVPROC glVertexAttribs2dvNV;

	/**
	 * @brief void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIBS2FVNVPROC glVertexAttribs2fvNV;

	/**
	 * @brief void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort *v)
	 */
	PFNGLVERTEXATTRIBS2SVNVPROC glVertexAttribs2svNV;

	/**
	 * @brief void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBS3DVNVPROC glVertexAttribs3dvNV;

	/**
	 * @brief void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIBS3FVNVPROC glVertexAttribs3fvNV;

	/**
	 * @brief void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort *v)
	 */
	PFNGLVERTEXATTRIBS3SVNVPROC glVertexAttribs3svNV;

	/**
	 * @brief void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIBS4DVNVPROC glVertexAttribs4dvNV;

	/**
	 * @brief void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIBS4FVNVPROC glVertexAttribs4fvNV;

	/**
	 * @brief void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort *v)
	 */
	PFNGLVERTEXATTRIBS4SVNVPROC glVertexAttribs4svNV;

	/**
	 * @brief void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte *v)
	 */
	PFNGLVERTEXATTRIBS4UBVNVPROC glVertexAttribs4ubvNV;




	// ****** GL_NV_vertex_program1_1 ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program1_1 is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program1_1;




	// ****** GL_NV_vertex_program2 ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program2 is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program2;




	// ****** GL_NV_vertex_program2_option ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program2_option is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program2_option;




	// ****** GL_NV_vertex_program3 ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program3 is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program3;




	// ****** GL_NV_vertex_program4 ******

	/**
	 * @brief Returns \c true if \b GL_NV_vertex_program4 is supported, false otherwise.
	 */
	bool isGL_NV_vertex_program4;


	/**
	 * @brief void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint *params)
	 */
	PFNGLGETVERTEXATTRIBIIVEXTPROC glGetVertexAttribIivEXT;

	/**
	 * @brief void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint *params)
	 */
	PFNGLGETVERTEXATTRIBIUIVEXTPROC glGetVertexAttribIuivEXT;

	/**
	 * @brief void glVertexAttribI1iEXT(GLuint index, GLint x)
	 */
	PFNGLVERTEXATTRIBI1IEXTPROC glVertexAttribI1iEXT;

	/**
	 * @brief void glVertexAttribI1ivEXT(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIBI1IVEXTPROC glVertexAttribI1ivEXT;

	/**
	 * @brief void glVertexAttribI1uiEXT(GLuint index, GLuint x)
	 */
	PFNGLVERTEXATTRIBI1UIEXTPROC glVertexAttribI1uiEXT;

	/**
	 * @brief void glVertexAttribI1uivEXT(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIBI1UIVEXTPROC glVertexAttribI1uivEXT;

	/**
	 * @brief void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
	 */
	PFNGLVERTEXATTRIBI2IEXTPROC glVertexAttribI2iEXT;

	/**
	 * @brief void glVertexAttribI2ivEXT(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIBI2IVEXTPROC glVertexAttribI2ivEXT;

	/**
	 * @brief void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
	 */
	PFNGLVERTEXATTRIBI2UIEXTPROC glVertexAttribI2uiEXT;

	/**
	 * @brief void glVertexAttribI2uivEXT(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIBI2UIVEXTPROC glVertexAttribI2uivEXT;

	/**
	 * @brief void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
	 */
	PFNGLVERTEXATTRIBI3IEXTPROC glVertexAttribI3iEXT;

	/**
	 * @brief void glVertexAttribI3ivEXT(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIBI3IVEXTPROC glVertexAttribI3ivEXT;

	/**
	 * @brief void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
	 */
	PFNGLVERTEXATTRIBI3UIEXTPROC glVertexAttribI3uiEXT;

	/**
	 * @brief void glVertexAttribI3uivEXT(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIBI3UIVEXTPROC glVertexAttribI3uivEXT;

	/**
	 * @brief void glVertexAttribI4bvEXT(GLuint index, const GLbyte *v)
	 */
	PFNGLVERTEXATTRIBI4BVEXTPROC glVertexAttribI4bvEXT;

	/**
	 * @brief void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
	 */
	PFNGLVERTEXATTRIBI4IEXTPROC glVertexAttribI4iEXT;

	/**
	 * @brief void glVertexAttribI4ivEXT(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIBI4IVEXTPROC glVertexAttribI4ivEXT;

	/**
	 * @brief void glVertexAttribI4svEXT(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIBI4SVEXTPROC glVertexAttribI4svEXT;

	/**
	 * @brief void glVertexAttribI4ubvEXT(GLuint index, const GLubyte *v)
	 */
	PFNGLVERTEXATTRIBI4UBVEXTPROC glVertexAttribI4ubvEXT;

	/**
	 * @brief void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
	 */
	PFNGLVERTEXATTRIBI4UIEXTPROC glVertexAttribI4uiEXT;

	/**
	 * @brief void glVertexAttribI4uivEXT(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIBI4UIVEXTPROC glVertexAttribI4uivEXT;

	/**
	 * @brief void glVertexAttribI4usvEXT(GLuint index, const GLushort *v)
	 */
	PFNGLVERTEXATTRIBI4USVEXTPROC glVertexAttribI4usvEXT;

	/**
	 * @brief void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLVERTEXATTRIBIPOINTEREXTPROC glVertexAttribIPointerEXT;




	// ****** GL_NV_video_capture ******

	/**
	 * @brief Returns \c true if \b GL_NV_video_capture is supported, false otherwise.
	 */
	bool isGL_NV_video_capture;


	/**
	 * @brief void glBeginVideoCaptureNV(GLuint video_capture_slot)
	 */
	PFNGLBEGINVIDEOCAPTURENVPROC glBeginVideoCaptureNV;

	/**
	 * @brief void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
	 */
	PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC glBindVideoCaptureStreamBufferNV;

	/**
	 * @brief void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
	 */
	PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC glBindVideoCaptureStreamTextureNV;

	/**
	 * @brief void glEndVideoCaptureNV(GLuint video_capture_slot)
	 */
	PFNGLENDVIDEOCAPTURENVPROC glEndVideoCaptureNV;

	/**
	 * @brief void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params)
	 */
	PFNGLGETVIDEOCAPTURESTREAMDVNVPROC glGetVideoCaptureStreamdvNV;

	/**
	 * @brief void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params)
	 */
	PFNGLGETVIDEOCAPTURESTREAMFVNVPROC glGetVideoCaptureStreamfvNV;

	/**
	 * @brief void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params)
	 */
	PFNGLGETVIDEOCAPTURESTREAMIVNVPROC glGetVideoCaptureStreamivNV;

	/**
	 * @brief void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint *params)
	 */
	PFNGLGETVIDEOCAPTUREIVNVPROC glGetVideoCaptureivNV;

	/**
	 * @brief GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time)
	 */
	PFNGLVIDEOCAPTURENVPROC glVideoCaptureNV;

	/**
	 * @brief void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble *params)
	 */
	PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC glVideoCaptureStreamParameterdvNV;

	/**
	 * @brief void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat *params)
	 */
	PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC glVideoCaptureStreamParameterfvNV;

	/**
	 * @brief void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint *params)
	 */
	PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC glVideoCaptureStreamParameterivNV;




	// ****** GL_OES_read_format ******

	/**
	 * @brief Returns \c true if \b GL_OES_read_format is supported, false otherwise.
	 */
	bool isGL_OES_read_format;




	// ****** GL_OML_interlace ******

	/**
	 * @brief Returns \c true if \b GL_OML_interlace is supported, false otherwise.
	 */
	bool isGL_OML_interlace;




	// ****** GL_OML_resample ******

	/**
	 * @brief Returns \c true if \b GL_OML_resample is supported, false otherwise.
	 */
	bool isGL_OML_resample;




	// ****** GL_OML_subsample ******

	/**
	 * @brief Returns \c true if \b GL_OML_subsample is supported, false otherwise.
	 */
	bool isGL_OML_subsample;




	// ****** GL_PGI_misc_hints ******

	/**
	 * @brief Returns \c true if \b GL_PGI_misc_hints is supported, false otherwise.
	 */
	bool isGL_PGI_misc_hints;


	/**
	 * @brief void glHintPGI(GLenum target, GLint mode)
	 */
	PFNGLHINTPGIPROC glHintPGI;




	// ****** GL_PGI_vertex_hints ******

	/**
	 * @brief Returns \c true if \b GL_PGI_vertex_hints is supported, false otherwise.
	 */
	bool isGL_PGI_vertex_hints;




	// ****** GL_REND_screen_coordinates ******

	/**
	 * @brief Returns \c true if \b GL_REND_screen_coordinates is supported, false otherwise.
	 */
	bool isGL_REND_screen_coordinates;




	// ****** GL_S3_s3tc ******

	/**
	 * @brief Returns \c true if \b GL_S3_s3tc is supported, false otherwise.
	 */
	bool isGL_S3_s3tc;




	// ****** GL_SGIS_detail_texture ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_detail_texture is supported, false otherwise.
	 */
	bool isGL_SGIS_detail_texture;


	/**
	 * @brief void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat *points)
	 */
	PFNGLDETAILTEXFUNCSGISPROC glDetailTexFuncSGIS;

	/**
	 * @brief void glGetDetailTexFuncSGIS(GLenum target, GLfloat *points)
	 */
	PFNGLGETDETAILTEXFUNCSGISPROC glGetDetailTexFuncSGIS;




	// ****** GL_SGIS_fog_function ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_fog_function is supported, false otherwise.
	 */
	bool isGL_SGIS_fog_function;


	/**
	 * @brief void glFogFuncSGIS(GLsizei n, const GLfloat *points)
	 */
	PFNGLFOGFUNCSGISPROC glFogFuncSGIS;

	/**
	 * @brief void glGetFogFuncSGIS(GLfloat *points)
	 */
	PFNGLGETFOGFUNCSGISPROC glGetFogFuncSGIS;




	// ****** GL_SGIS_generate_mipmap ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_generate_mipmap is supported, false otherwise.
	 */
	bool isGL_SGIS_generate_mipmap;




	// ****** GL_SGIS_multisample ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_multisample is supported, false otherwise.
	 */
	bool isGL_SGIS_multisample;


	/**
	 * @brief void glSampleMaskSGIS(GLclampf value, GLboolean invert)
	 */
	PFNGLSAMPLEMASKSGISPROC glSampleMaskSGIS;

	/**
	 * @brief void glSamplePatternSGIS(GLenum pattern)
	 */
	PFNGLSAMPLEPATTERNSGISPROC glSamplePatternSGIS;




	// ****** GL_SGIS_pixel_texture ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_pixel_texture is supported, false otherwise.
	 */
	bool isGL_SGIS_pixel_texture;


	/**
	 * @brief void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat *params)
	 */
	PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC glGetPixelTexGenParameterfvSGIS;

	/**
	 * @brief void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint *params)
	 */
	PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC glGetPixelTexGenParameterivSGIS;

	/**
	 * @brief void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
	 */
	PFNGLPIXELTEXGENPARAMETERFSGISPROC glPixelTexGenParameterfSGIS;

	/**
	 * @brief void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat *params)
	 */
	PFNGLPIXELTEXGENPARAMETERFVSGISPROC glPixelTexGenParameterfvSGIS;

	/**
	 * @brief void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
	 */
	PFNGLPIXELTEXGENPARAMETERISGISPROC glPixelTexGenParameteriSGIS;

	/**
	 * @brief void glPixelTexGenParameterivSGIS(GLenum pname, const GLint *params)
	 */
	PFNGLPIXELTEXGENPARAMETERIVSGISPROC glPixelTexGenParameterivSGIS;




	// ****** GL_SGIS_point_line_texgen ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_point_line_texgen is supported, false otherwise.
	 */
	bool isGL_SGIS_point_line_texgen;




	// ****** GL_SGIS_point_parameters ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_point_parameters is supported, false otherwise.
	 */
	bool isGL_SGIS_point_parameters;


	/**
	 * @brief void glPointParameterfSGIS(GLenum pname, GLfloat param)
	 */
	PFNGLPOINTPARAMETERFSGISPROC glPointParameterfSGIS;

	/**
	 * @brief void glPointParameterfvSGIS(GLenum pname, const GLfloat *params)
	 */
	PFNGLPOINTPARAMETERFVSGISPROC glPointParameterfvSGIS;




	// ****** GL_SGIS_sharpen_texture ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_sharpen_texture is supported, false otherwise.
	 */
	bool isGL_SGIS_sharpen_texture;


	/**
	 * @brief void glGetSharpenTexFuncSGIS(GLenum target, GLfloat *points)
	 */
	PFNGLGETSHARPENTEXFUNCSGISPROC glGetSharpenTexFuncSGIS;

	/**
	 * @brief void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat *points)
	 */
	PFNGLSHARPENTEXFUNCSGISPROC glSharpenTexFuncSGIS;




	// ****** GL_SGIS_texture4D ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture4D is supported, false otherwise.
	 */
	bool isGL_SGIS_texture4D;


	/**
	 * @brief void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXIMAGE4DSGISPROC glTexImage4DSGIS;

	/**
	 * @brief void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXSUBIMAGE4DSGISPROC glTexSubImage4DSGIS;




	// ****** GL_SGIS_texture_border_clamp ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_border_clamp is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_border_clamp;




	// ****** GL_SGIS_texture_color_mask ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_color_mask is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_color_mask;


	/**
	 * @brief void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
	 */
	PFNGLTEXTURECOLORMASKSGISPROC glTextureColorMaskSGIS;




	// ****** GL_SGIS_texture_edge_clamp ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_edge_clamp is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_edge_clamp;




	// ****** GL_SGIS_texture_filter4 ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_filter4 is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_filter4;


	/**
	 * @brief void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat *weights)
	 */
	PFNGLGETTEXFILTERFUNCSGISPROC glGetTexFilterFuncSGIS;

	/**
	 * @brief void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat *weights)
	 */
	PFNGLTEXFILTERFUNCSGISPROC glTexFilterFuncSGIS;




	// ****** GL_SGIS_texture_lod ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_lod is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_lod;




	// ****** GL_SGIS_texture_select ******

	/**
	 * @brief Returns \c true if \b GL_SGIS_texture_select is supported, false otherwise.
	 */
	bool isGL_SGIS_texture_select;




	// ****** GL_SGIX_async ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_async is supported, false otherwise.
	 */
	bool isGL_SGIX_async;


	/**
	 * @brief void glAsyncMarkerSGIX(GLuint marker)
	 */
	PFNGLASYNCMARKERSGIXPROC glAsyncMarkerSGIX;

	/**
	 * @brief void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
	 */
	PFNGLDELETEASYNCMARKERSSGIXPROC glDeleteAsyncMarkersSGIX;

	/**
	 * @brief GLint glFinishAsyncSGIX(GLuint *markerp)
	 */
	PFNGLFINISHASYNCSGIXPROC glFinishAsyncSGIX;

	/**
	 * @brief GLuint glGenAsyncMarkersSGIX(GLsizei range)
	 */
	PFNGLGENASYNCMARKERSSGIXPROC glGenAsyncMarkersSGIX;

	/**
	 * @brief GLboolean glIsAsyncMarkerSGIX(GLuint marker)
	 */
	PFNGLISASYNCMARKERSGIXPROC glIsAsyncMarkerSGIX;

	/**
	 * @brief GLint glPollAsyncSGIX(GLuint *markerp)
	 */
	PFNGLPOLLASYNCSGIXPROC glPollAsyncSGIX;




	// ****** GL_SGIX_async_histogram ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_async_histogram is supported, false otherwise.
	 */
	bool isGL_SGIX_async_histogram;




	// ****** GL_SGIX_async_pixel ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_async_pixel is supported, false otherwise.
	 */
	bool isGL_SGIX_async_pixel;




	// ****** GL_SGIX_blend_alpha_minmax ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_blend_alpha_minmax is supported, false otherwise.
	 */
	bool isGL_SGIX_blend_alpha_minmax;




	// ****** GL_SGIX_calligraphic_fragment ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_calligraphic_fragment is supported, false otherwise.
	 */
	bool isGL_SGIX_calligraphic_fragment;




	// ****** GL_SGIX_clipmap ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_clipmap is supported, false otherwise.
	 */
	bool isGL_SGIX_clipmap;




	// ****** GL_SGIX_convolution_accuracy ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_convolution_accuracy is supported, false otherwise.
	 */
	bool isGL_SGIX_convolution_accuracy;




	// ****** GL_SGIX_depth_pass_instrument ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_depth_pass_instrument is supported, false otherwise.
	 */
	bool isGL_SGIX_depth_pass_instrument;




	// ****** GL_SGIX_depth_texture ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_depth_texture is supported, false otherwise.
	 */
	bool isGL_SGIX_depth_texture;




	// ****** GL_SGIX_flush_raster ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_flush_raster is supported, false otherwise.
	 */
	bool isGL_SGIX_flush_raster;


	/**
	 * @brief void glFlushRasterSGIX(void)
	 */
	PFNGLFLUSHRASTERSGIXPROC glFlushRasterSGIX;




	// ****** GL_SGIX_fog_offset ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_fog_offset is supported, false otherwise.
	 */
	bool isGL_SGIX_fog_offset;




	// ****** GL_SGIX_fog_scale ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_fog_scale is supported, false otherwise.
	 */
	bool isGL_SGIX_fog_scale;




	// ****** GL_SGIX_fragment_lighting ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_fragment_lighting is supported, false otherwise.
	 */
	bool isGL_SGIX_fragment_lighting;


	/**
	 * @brief void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
	 */
	PFNGLFRAGMENTCOLORMATERIALSGIXPROC glFragmentColorMaterialSGIX;

	/**
	 * @brief void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
	 */
	PFNGLFRAGMENTLIGHTMODELFSGIXPROC glFragmentLightModelfSGIX;

	/**
	 * @brief void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat *params)
	 */
	PFNGLFRAGMENTLIGHTMODELFVSGIXPROC glFragmentLightModelfvSGIX;

	/**
	 * @brief void glFragmentLightModeliSGIX(GLenum pname, GLint param)
	 */
	PFNGLFRAGMENTLIGHTMODELISGIXPROC glFragmentLightModeliSGIX;

	/**
	 * @brief void glFragmentLightModelivSGIX(GLenum pname, const GLint *params)
	 */
	PFNGLFRAGMENTLIGHTMODELIVSGIXPROC glFragmentLightModelivSGIX;

	/**
	 * @brief void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
	 */
	PFNGLFRAGMENTLIGHTFSGIXPROC glFragmentLightfSGIX;

	/**
	 * @brief void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat *params)
	 */
	PFNGLFRAGMENTLIGHTFVSGIXPROC glFragmentLightfvSGIX;

	/**
	 * @brief void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
	 */
	PFNGLFRAGMENTLIGHTISGIXPROC glFragmentLightiSGIX;

	/**
	 * @brief void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint *params)
	 */
	PFNGLFRAGMENTLIGHTIVSGIXPROC glFragmentLightivSGIX;

	/**
	 * @brief void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
	 */
	PFNGLFRAGMENTMATERIALFSGIXPROC glFragmentMaterialfSGIX;

	/**
	 * @brief void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat *params)
	 */
	PFNGLFRAGMENTMATERIALFVSGIXPROC glFragmentMaterialfvSGIX;

	/**
	 * @brief void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
	 */
	PFNGLFRAGMENTMATERIALISGIXPROC glFragmentMaterialiSGIX;

	/**
	 * @brief void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint *params)
	 */
	PFNGLFRAGMENTMATERIALIVSGIXPROC glFragmentMaterialivSGIX;

	/**
	 * @brief void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat *params)
	 */
	PFNGLGETFRAGMENTLIGHTFVSGIXPROC glGetFragmentLightfvSGIX;

	/**
	 * @brief void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint *params)
	 */
	PFNGLGETFRAGMENTLIGHTIVSGIXPROC glGetFragmentLightivSGIX;

	/**
	 * @brief void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat *params)
	 */
	PFNGLGETFRAGMENTMATERIALFVSGIXPROC glGetFragmentMaterialfvSGIX;

	/**
	 * @brief void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint *params)
	 */
	PFNGLGETFRAGMENTMATERIALIVSGIXPROC glGetFragmentMaterialivSGIX;

	/**
	 * @brief void glLightEnviSGIX(GLenum pname, GLint param)
	 */
	PFNGLLIGHTENVISGIXPROC glLightEnviSGIX;




	// ****** GL_SGIX_framezoom ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_framezoom is supported, false otherwise.
	 */
	bool isGL_SGIX_framezoom;


	/**
	 * @brief void glFrameZoomSGIX(GLint factor)
	 */
	PFNGLFRAMEZOOMSGIXPROC glFrameZoomSGIX;




	// ****** GL_SGIX_igloo_interface ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_igloo_interface is supported, false otherwise.
	 */
	bool isGL_SGIX_igloo_interface;


	/**
	 * @brief void glIglooInterfaceSGIX(GLenum pname, const GLvoid *params)
	 */
	PFNGLIGLOOINTERFACESGIXPROC glIglooInterfaceSGIX;




	// ****** GL_SGIX_impact_pixel_texture ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_impact_pixel_texture is supported, false otherwise.
	 */
	bool isGL_SGIX_impact_pixel_texture;




	// ****** GL_SGIX_instruments ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_instruments is supported, false otherwise.
	 */
	bool isGL_SGIX_instruments;


	/**
	 * @brief GLint glGetInstrumentsSGIX(void)
	 */
	PFNGLGETINSTRUMENTSSGIXPROC glGetInstrumentsSGIX;

	/**
	 * @brief void glInstrumentsBufferSGIX(GLsizei size, GLint *buffer)
	 */
	PFNGLINSTRUMENTSBUFFERSGIXPROC glInstrumentsBufferSGIX;

	/**
	 * @brief GLint glPollInstrumentsSGIX(GLint *marker_p)
	 */
	PFNGLPOLLINSTRUMENTSSGIXPROC glPollInstrumentsSGIX;

	/**
	 * @brief void glReadInstrumentsSGIX(GLint marker)
	 */
	PFNGLREADINSTRUMENTSSGIXPROC glReadInstrumentsSGIX;

	/**
	 * @brief void glStartInstrumentsSGIX(void)
	 */
	PFNGLSTARTINSTRUMENTSSGIXPROC glStartInstrumentsSGIX;

	/**
	 * @brief void glStopInstrumentsSGIX(GLint marker)
	 */
	PFNGLSTOPINSTRUMENTSSGIXPROC glStopInstrumentsSGIX;




	// ****** GL_SGIX_interlace ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_interlace is supported, false otherwise.
	 */
	bool isGL_SGIX_interlace;




	// ****** GL_SGIX_ir_instrument1 ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_ir_instrument1 is supported, false otherwise.
	 */
	bool isGL_SGIX_ir_instrument1;




	// ****** GL_SGIX_list_priority ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_list_priority is supported, false otherwise.
	 */
	bool isGL_SGIX_list_priority;


	/**
	 * @brief void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat *params)
	 */
	PFNGLGETLISTPARAMETERFVSGIXPROC glGetListParameterfvSGIX;

	/**
	 * @brief void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint *params)
	 */
	PFNGLGETLISTPARAMETERIVSGIXPROC glGetListParameterivSGIX;

	/**
	 * @brief void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
	 */
	PFNGLLISTPARAMETERFSGIXPROC glListParameterfSGIX;

	/**
	 * @brief void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat *params)
	 */
	PFNGLLISTPARAMETERFVSGIXPROC glListParameterfvSGIX;

	/**
	 * @brief void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
	 */
	PFNGLLISTPARAMETERISGIXPROC glListParameteriSGIX;

	/**
	 * @brief void glListParameterivSGIX(GLuint list, GLenum pname, const GLint *params)
	 */
	PFNGLLISTPARAMETERIVSGIXPROC glListParameterivSGIX;




	// ****** GL_SGIX_pixel_texture ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_pixel_texture is supported, false otherwise.
	 */
	bool isGL_SGIX_pixel_texture;


	/**
	 * @brief void glPixelTexGenSGIX(GLenum mode)
	 */
	PFNGLPIXELTEXGENSGIXPROC glPixelTexGenSGIX;




	// ****** GL_SGIX_pixel_tiles ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_pixel_tiles is supported, false otherwise.
	 */
	bool isGL_SGIX_pixel_tiles;




	// ****** GL_SGIX_polynomial_ffd ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_polynomial_ffd is supported, false otherwise.
	 */
	bool isGL_SGIX_polynomial_ffd;


	/**
	 * @brief void glDeformSGIX(GLbitfield mask)
	 */
	PFNGLDEFORMSGIXPROC glDeformSGIX;

	/**
	 * @brief void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points)
	 */
	PFNGLDEFORMATIONMAP3DSGIXPROC glDeformationMap3dSGIX;

	/**
	 * @brief void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points)
	 */
	PFNGLDEFORMATIONMAP3FSGIXPROC glDeformationMap3fSGIX;

	/**
	 * @brief void glLoadIdentityDeformationMapSGIX(GLbitfield mask)
	 */
	PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC glLoadIdentityDeformationMapSGIX;




	// ****** GL_SGIX_reference_plane ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_reference_plane is supported, false otherwise.
	 */
	bool isGL_SGIX_reference_plane;


	/**
	 * @brief void glReferencePlaneSGIX(const GLdouble *equation)
	 */
	PFNGLREFERENCEPLANESGIXPROC glReferencePlaneSGIX;




	// ****** GL_SGIX_resample ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_resample is supported, false otherwise.
	 */
	bool isGL_SGIX_resample;




	// ****** GL_SGIX_scalebias_hint ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_scalebias_hint is supported, false otherwise.
	 */
	bool isGL_SGIX_scalebias_hint;




	// ****** GL_SGIX_shadow ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_shadow is supported, false otherwise.
	 */
	bool isGL_SGIX_shadow;




	// ****** GL_SGIX_shadow_ambient ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_shadow_ambient is supported, false otherwise.
	 */
	bool isGL_SGIX_shadow_ambient;




	// ****** GL_SGIX_sprite ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_sprite is supported, false otherwise.
	 */
	bool isGL_SGIX_sprite;


	/**
	 * @brief void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
	 */
	PFNGLSPRITEPARAMETERFSGIXPROC glSpriteParameterfSGIX;

	/**
	 * @brief void glSpriteParameterfvSGIX(GLenum pname, const GLfloat *params)
	 */
	PFNGLSPRITEPARAMETERFVSGIXPROC glSpriteParameterfvSGIX;

	/**
	 * @brief void glSpriteParameteriSGIX(GLenum pname, GLint param)
	 */
	PFNGLSPRITEPARAMETERISGIXPROC glSpriteParameteriSGIX;

	/**
	 * @brief void glSpriteParameterivSGIX(GLenum pname, const GLint *params)
	 */
	PFNGLSPRITEPARAMETERIVSGIXPROC glSpriteParameterivSGIX;




	// ****** GL_SGIX_subsample ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_subsample is supported, false otherwise.
	 */
	bool isGL_SGIX_subsample;




	// ****** GL_SGIX_tag_sample_buffer ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_tag_sample_buffer is supported, false otherwise.
	 */
	bool isGL_SGIX_tag_sample_buffer;


	/**
	 * @brief void glTagSampleBufferSGIX(void)
	 */
	PFNGLTAGSAMPLEBUFFERSGIXPROC glTagSampleBufferSGIX;




	// ****** GL_SGIX_texture_add_env ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_add_env is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_add_env;




	// ****** GL_SGIX_texture_coordinate_clamp ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_coordinate_clamp is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_coordinate_clamp;




	// ****** GL_SGIX_texture_lod_bias ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_lod_bias is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_lod_bias;




	// ****** GL_SGIX_texture_multi_buffer ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_multi_buffer is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_multi_buffer;




	// ****** GL_SGIX_texture_scale_bias ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_scale_bias is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_scale_bias;




	// ****** GL_SGIX_texture_select ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_texture_select is supported, false otherwise.
	 */
	bool isGL_SGIX_texture_select;




	// ****** GL_SGIX_vertex_preclip ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_vertex_preclip is supported, false otherwise.
	 */
	bool isGL_SGIX_vertex_preclip;




	// ****** GL_SGIX_ycrcb ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_ycrcb is supported, false otherwise.
	 */
	bool isGL_SGIX_ycrcb;




	// ****** GL_SGIX_ycrcb_subsample ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_ycrcb_subsample is supported, false otherwise.
	 */
	bool isGL_SGIX_ycrcb_subsample;




	// ****** GL_SGIX_ycrcba ******

	/**
	 * @brief Returns \c true if \b GL_SGIX_ycrcba is supported, false otherwise.
	 */
	bool isGL_SGIX_ycrcba;




	// ****** GL_SGI_color_matrix ******

	/**
	 * @brief Returns \c true if \b GL_SGI_color_matrix is supported, false otherwise.
	 */
	bool isGL_SGI_color_matrix;




	// ****** GL_SGI_color_table ******

	/**
	 * @brief Returns \c true if \b GL_SGI_color_table is supported, false otherwise.
	 */
	bool isGL_SGI_color_table;


	/**
	 * @brief void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLCOLORTABLEPARAMETERFVSGIPROC glColorTableParameterfvSGI;

	/**
	 * @brief void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLCOLORTABLEPARAMETERIVSGIPROC glColorTableParameterivSGI;

	/**
	 * @brief void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
	 */
	PFNGLCOLORTABLESGIPROC glColorTableSGI;

	/**
	 * @brief void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
	 */
	PFNGLCOPYCOLORTABLESGIPROC glCopyColorTableSGI;

	/**
	 * @brief void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETCOLORTABLEPARAMETERFVSGIPROC glGetColorTableParameterfvSGI;

	/**
	 * @brief void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETCOLORTABLEPARAMETERIVSGIPROC glGetColorTableParameterivSGI;

	/**
	 * @brief void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, GLvoid *table)
	 */
	PFNGLGETCOLORTABLESGIPROC glGetColorTableSGI;




	// ****** GL_SGI_depth_pass_instrument ******

	/**
	 * @brief Returns \c true if \b GL_SGI_depth_pass_instrument is supported, false otherwise.
	 */
	bool isGL_SGI_depth_pass_instrument;




	// ****** GL_SGI_texture_color_table ******

	/**
	 * @brief Returns \c true if \b GL_SGI_texture_color_table is supported, false otherwise.
	 */
	bool isGL_SGI_texture_color_table;




	// ****** GL_SUNX_constant_data ******

	/**
	 * @brief Returns \c true if \b GL_SUNX_constant_data is supported, false otherwise.
	 */
	bool isGL_SUNX_constant_data;


	/**
	 * @brief void glFinishTextureSUNX(void)
	 */
	PFNGLFINISHTEXTURESUNXPROC glFinishTextureSUNX;




	// ****** GL_SUN_convolution_border_modes ******

	/**
	 * @brief Returns \c true if \b GL_SUN_convolution_border_modes is supported, false otherwise.
	 */
	bool isGL_SUN_convolution_border_modes;




	// ****** GL_SUN_global_alpha ******

	/**
	 * @brief Returns \c true if \b GL_SUN_global_alpha is supported, false otherwise.
	 */
	bool isGL_SUN_global_alpha;


	/**
	 * @brief void glGlobalAlphaFactorbSUN(GLbyte factor)
	 */
	PFNGLGLOBALALPHAFACTORBSUNPROC glGlobalAlphaFactorbSUN;

	/**
	 * @brief void glGlobalAlphaFactordSUN(GLdouble factor)
	 */
	PFNGLGLOBALALPHAFACTORDSUNPROC glGlobalAlphaFactordSUN;

	/**
	 * @brief void glGlobalAlphaFactorfSUN(GLfloat factor)
	 */
	PFNGLGLOBALALPHAFACTORFSUNPROC glGlobalAlphaFactorfSUN;

	/**
	 * @brief void glGlobalAlphaFactoriSUN(GLint factor)
	 */
	PFNGLGLOBALALPHAFACTORISUNPROC glGlobalAlphaFactoriSUN;

	/**
	 * @brief void glGlobalAlphaFactorsSUN(GLshort factor)
	 */
	PFNGLGLOBALALPHAFACTORSSUNPROC glGlobalAlphaFactorsSUN;

	/**
	 * @brief void glGlobalAlphaFactorubSUN(GLubyte factor)
	 */
	PFNGLGLOBALALPHAFACTORUBSUNPROC glGlobalAlphaFactorubSUN;

	/**
	 * @brief void glGlobalAlphaFactoruiSUN(GLuint factor)
	 */
	PFNGLGLOBALALPHAFACTORUISUNPROC glGlobalAlphaFactoruiSUN;

	/**
	 * @brief void glGlobalAlphaFactorusSUN(GLushort factor)
	 */
	PFNGLGLOBALALPHAFACTORUSSUNPROC glGlobalAlphaFactorusSUN;




	// ****** GL_SUN_mesh_array ******

	/**
	 * @brief Returns \c true if \b GL_SUN_mesh_array is supported, false otherwise.
	 */
	bool isGL_SUN_mesh_array;


	/**
	 * @brief void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
	 */
	PFNGLDRAWMESHARRAYSSUNPROC glDrawMeshArraysSUN;




	// ****** GL_SUN_slice_accum ******

	/**
	 * @brief Returns \c true if \b GL_SUN_slice_accum is supported, false otherwise.
	 */
	bool isGL_SUN_slice_accum;




	// ****** GL_SUN_triangle_list ******

	/**
	 * @brief Returns \c true if \b GL_SUN_triangle_list is supported, false otherwise.
	 */
	bool isGL_SUN_triangle_list;


	/**
	 * @brief void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const GLvoid* *pointer)
	 */
	PFNGLREPLACEMENTCODEPOINTERSUNPROC glReplacementCodePointerSUN;

	/**
	 * @brief void glReplacementCodeubSUN(GLubyte code)
	 */
	PFNGLREPLACEMENTCODEUBSUNPROC glReplacementCodeubSUN;

	/**
	 * @brief void glReplacementCodeubvSUN(const GLubyte *code)
	 */
	PFNGLREPLACEMENTCODEUBVSUNPROC glReplacementCodeubvSUN;

	/**
	 * @brief void glReplacementCodeuiSUN(GLuint code)
	 */
	PFNGLREPLACEMENTCODEUISUNPROC glReplacementCodeuiSUN;

	/**
	 * @brief void glReplacementCodeuivSUN(const GLuint *code)
	 */
	PFNGLREPLACEMENTCODEUIVSUNPROC glReplacementCodeuivSUN;

	/**
	 * @brief void glReplacementCodeusSUN(GLushort code)
	 */
	PFNGLREPLACEMENTCODEUSSUNPROC glReplacementCodeusSUN;

	/**
	 * @brief void glReplacementCodeusvSUN(const GLushort *code)
	 */
	PFNGLREPLACEMENTCODEUSVSUNPROC glReplacementCodeusvSUN;




	// ****** GL_SUN_vertex ******

	/**
	 * @brief Returns \c true if \b GL_SUN_vertex is supported, false otherwise.
	 */
	bool isGL_SUN_vertex;


	/**
	 * @brief void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLCOLOR3FVERTEX3FSUNPROC glColor3fVertex3fSUN;

	/**
	 * @brief void glColor3fVertex3fvSUN(const GLfloat *c, const GLfloat *v)
	 */
	PFNGLCOLOR3FVERTEX3FVSUNPROC glColor3fVertex3fvSUN;

	/**
	 * @brief void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC glColor4fNormal3fVertex3fSUN;

	/**
	 * @brief void glColor4fNormal3fVertex3fvSUN(const GLfloat *c, const GLfloat *n, const GLfloat *v)
	 */
	PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC glColor4fNormal3fVertex3fvSUN;

	/**
	 * @brief void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
	 */
	PFNGLCOLOR4UBVERTEX2FSUNPROC glColor4ubVertex2fSUN;

	/**
	 * @brief void glColor4ubVertex2fvSUN(const GLubyte *c, const GLfloat *v)
	 */
	PFNGLCOLOR4UBVERTEX2FVSUNPROC glColor4ubVertex2fvSUN;

	/**
	 * @brief void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLCOLOR4UBVERTEX3FSUNPROC glColor4ubVertex3fSUN;

	/**
	 * @brief void glColor4ubVertex3fvSUN(const GLubyte *c, const GLfloat *v)
	 */
	PFNGLCOLOR4UBVERTEX3FVSUNPROC glColor4ubVertex3fvSUN;

	/**
	 * @brief void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLNORMAL3FVERTEX3FSUNPROC glNormal3fVertex3fSUN;

	/**
	 * @brief void glNormal3fVertex3fvSUN(const GLfloat *n, const GLfloat *v)
	 */
	PFNGLNORMAL3FVERTEX3FVSUNPROC glNormal3fVertex3fvSUN;

	/**
	 * @brief void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC glReplacementCodeuiColor3fVertex3fSUN;

	/**
	 * @brief void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint *rc, const GLfloat *c, const GLfloat *v)
	 */
	PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC glReplacementCodeuiColor3fVertex3fvSUN;

	/**
	 * @brief void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fSUN;

	/**
	 * @brief void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
	 */
	PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fvSUN;

	/**
	 * @brief void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC glReplacementCodeuiColor4ubVertex3fSUN;

	/**
	 * @brief void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint *rc, const GLubyte *c, const GLfloat *v)
	 */
	PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC glReplacementCodeuiColor4ubVertex3fvSUN;

	/**
	 * @brief void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC glReplacementCodeuiNormal3fVertex3fSUN;

	/**
	 * @brief void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *n, const GLfloat *v)
	 */
	PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiNormal3fVertex3fvSUN;

	/**
	 * @brief void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;

	/**
	 * @brief void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
	 */
	PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;

	/**
	 * @brief void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;

	/**
	 * @brief void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v)
	 */
	PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;

	/**
	 * @brief void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fVertex3fSUN;

	/**
	 * @brief void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *v)
	 */
	PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fVertex3fvSUN;

	/**
	 * @brief void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC glReplacementCodeuiVertex3fSUN;

	/**
	 * @brief void glReplacementCodeuiVertex3fvSUN(const GLuint *rc, const GLfloat *v)
	 */
	PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC glReplacementCodeuiVertex3fvSUN;

	/**
	 * @brief void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC glTexCoord2fColor3fVertex3fSUN;

	/**
	 * @brief void glTexCoord2fColor3fVertex3fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *v)
	 */
	PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC glTexCoord2fColor3fVertex3fvSUN;

	/**
	 * @brief void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glTexCoord2fColor4fNormal3fVertex3fSUN;

	/**
	 * @brief void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
	 */
	PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fColor4fNormal3fVertex3fvSUN;

	/**
	 * @brief void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC glTexCoord2fColor4ubVertex3fSUN;

	/**
	 * @brief void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat *tc, const GLubyte *c, const GLfloat *v)
	 */
	PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC glTexCoord2fColor4ubVertex3fvSUN;

	/**
	 * @brief void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC glTexCoord2fNormal3fVertex3fSUN;

	/**
	 * @brief void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat *tc, const GLfloat *n, const GLfloat *v)
	 */
	PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fNormal3fVertex3fvSUN;

	/**
	 * @brief void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLTEXCOORD2FVERTEX3FSUNPROC glTexCoord2fVertex3fSUN;

	/**
	 * @brief void glTexCoord2fVertex3fvSUN(const GLfloat *tc, const GLfloat *v)
	 */
	PFNGLTEXCOORD2FVERTEX3FVSUNPROC glTexCoord2fVertex3fvSUN;

	/**
	 * @brief void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC glTexCoord4fColor4fNormal3fVertex4fSUN;

	/**
	 * @brief void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
	 */
	PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC glTexCoord4fColor4fNormal3fVertex4fvSUN;

	/**
	 * @brief void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLTEXCOORD4FVERTEX4FSUNPROC glTexCoord4fVertex4fSUN;

	/**
	 * @brief void glTexCoord4fVertex4fvSUN(const GLfloat *tc, const GLfloat *v)
	 */
	PFNGLTEXCOORD4FVERTEX4FVSUNPROC glTexCoord4fVertex4fvSUN;




	// ****** GL_VERSION_1_2 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_2 is supported, false otherwise.
	 */
	bool isGL_VERSION_1_2;


	/**
	 * @brief void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
	 */
	PFNGLBLENDCOLORPROC glBlendColor;

	/**
	 * @brief void glBlendEquation(GLenum mode)
	 */
	PFNGLBLENDEQUATIONPROC glBlendEquation;

	/**
	 * @brief void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
	 */
	PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;

	/**
	 * @brief void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
	 */
	PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements;

	/**
	 * @brief void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXIMAGE3DPROC glTexImage3D;

	/**
	 * @brief void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
	 */
	PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D;




	// ****** GL_VERSION_1_2_DEPRECATED ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_2_DEPRECATED is supported, false otherwise.
	 */
	bool isGL_VERSION_1_2_DEPRECATED;


	/**
	 * @brief void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data)
	 */
	PFNGLCOLORSUBTABLEPROC glColorSubTable;

	/**
	 * @brief void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
	 */
	PFNGLCOLORTABLEPROC glColorTable;

	/**
	 * @brief void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLCOLORTABLEPARAMETERFVPROC glColorTableParameterfv;

	/**
	 * @brief void glColorTableParameteriv(GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLCOLORTABLEPARAMETERIVPROC glColorTableParameteriv;

	/**
	 * @brief void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image)
	 */
	PFNGLCONVOLUTIONFILTER1DPROC glConvolutionFilter1D;

	/**
	 * @brief void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image)
	 */
	PFNGLCONVOLUTIONFILTER2DPROC glConvolutionFilter2D;

	/**
	 * @brief void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
	 */
	PFNGLCONVOLUTIONPARAMETERFPROC glConvolutionParameterf;

	/**
	 * @brief void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat *params)
	 */
	PFNGLCONVOLUTIONPARAMETERFVPROC glConvolutionParameterfv;

	/**
	 * @brief void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
	 */
	PFNGLCONVOLUTIONPARAMETERIPROC glConvolutionParameteri;

	/**
	 * @brief void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLCONVOLUTIONPARAMETERIVPROC glConvolutionParameteriv;

	/**
	 * @brief void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
	 */
	PFNGLCOPYCOLORSUBTABLEPROC glCopyColorSubTable;

	/**
	 * @brief void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
	 */
	PFNGLCOPYCOLORTABLEPROC glCopyColorTable;

	/**
	 * @brief void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
	 */
	PFNGLCOPYCONVOLUTIONFILTER1DPROC glCopyConvolutionFilter1D;

	/**
	 * @brief void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
	 */
	PFNGLCOPYCONVOLUTIONFILTER2DPROC glCopyConvolutionFilter2D;

	/**
	 * @brief void glGetColorTable(GLenum target, GLenum format, GLenum type, GLvoid *table)
	 */
	PFNGLGETCOLORTABLEPROC glGetColorTable;

	/**
	 * @brief void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETCOLORTABLEPARAMETERFVPROC glGetColorTableParameterfv;

	/**
	 * @brief void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETCOLORTABLEPARAMETERIVPROC glGetColorTableParameteriv;

	/**
	 * @brief void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, GLvoid *image)
	 */
	PFNGLGETCONVOLUTIONFILTERPROC glGetConvolutionFilter;

	/**
	 * @brief void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETCONVOLUTIONPARAMETERFVPROC glGetConvolutionParameterfv;

	/**
	 * @brief void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETCONVOLUTIONPARAMETERIVPROC glGetConvolutionParameteriv;

	/**
	 * @brief void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
	 */
	PFNGLGETHISTOGRAMPROC glGetHistogram;

	/**
	 * @brief void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETHISTOGRAMPARAMETERFVPROC glGetHistogramParameterfv;

	/**
	 * @brief void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETHISTOGRAMPARAMETERIVPROC glGetHistogramParameteriv;

	/**
	 * @brief void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
	 */
	PFNGLGETMINMAXPROC glGetMinmax;

	/**
	 * @brief void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat *params)
	 */
	PFNGLGETMINMAXPARAMETERFVPROC glGetMinmaxParameterfv;

	/**
	 * @brief void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETMINMAXPARAMETERIVPROC glGetMinmaxParameteriv;

	/**
	 * @brief void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
	 */
	PFNGLGETSEPARABLEFILTERPROC glGetSeparableFilter;

	/**
	 * @brief void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
	 */
	PFNGLHISTOGRAMPROC glHistogram;

	/**
	 * @brief void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
	 */
	PFNGLMINMAXPROC glMinmax;

	/**
	 * @brief void glResetHistogram(GLenum target)
	 */
	PFNGLRESETHISTOGRAMPROC glResetHistogram;

	/**
	 * @brief void glResetMinmax(GLenum target)
	 */
	PFNGLRESETMINMAXPROC glResetMinmax;

	/**
	 * @brief void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column)
	 */
	PFNGLSEPARABLEFILTER2DPROC glSeparableFilter2D;




	// ****** GL_VERSION_1_3 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_3 is supported, false otherwise.
	 */
	bool isGL_VERSION_1_3;


	/**
	 * @brief void glActiveTexture(GLenum texture)
	 */
	PFNGLACTIVETEXTUREPROC glActiveTexture;

	/**
	 * @brief void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;

	/**
	 * @brief void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;

	/**
	 * @brief void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;

	/**
	 * @brief void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;

	/**
	 * @brief void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;

	/**
	 * @brief void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data)
	 */
	PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;

	/**
	 * @brief void glGetCompressedTexImage(GLenum target, GLint level, GLvoid *img)
	 */
	PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;

	/**
	 * @brief void glSampleCoverage(GLclampf value, GLboolean invert)
	 */
	PFNGLSAMPLECOVERAGEPROC glSampleCoverage;




	// ****** GL_VERSION_1_3_DEPRECATED ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_3_DEPRECATED is supported, false otherwise.
	 */
	bool isGL_VERSION_1_3_DEPRECATED;


	/**
	 * @brief void glClientActiveTexture(GLenum texture)
	 */
	PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;

	/**
	 * @brief void glLoadTransposeMatrixd(const GLdouble *m)
	 */
	PFNGLLOADTRANSPOSEMATRIXDPROC glLoadTransposeMatrixd;

	/**
	 * @brief void glLoadTransposeMatrixf(const GLfloat *m)
	 */
	PFNGLLOADTRANSPOSEMATRIXFPROC glLoadTransposeMatrixf;

	/**
	 * @brief void glMultTransposeMatrixd(const GLdouble *m)
	 */
	PFNGLMULTTRANSPOSEMATRIXDPROC glMultTransposeMatrixd;

	/**
	 * @brief void glMultTransposeMatrixf(const GLfloat *m)
	 */
	PFNGLMULTTRANSPOSEMATRIXFPROC glMultTransposeMatrixf;

	/**
	 * @brief void glMultiTexCoord1d(GLenum target, GLdouble s)
	 */
	PFNGLMULTITEXCOORD1DPROC glMultiTexCoord1d;

	/**
	 * @brief void glMultiTexCoord1dv(GLenum target, const GLdouble *v)
	 */
	PFNGLMULTITEXCOORD1DVPROC glMultiTexCoord1dv;

	/**
	 * @brief void glMultiTexCoord1f(GLenum target, GLfloat s)
	 */
	PFNGLMULTITEXCOORD1FPROC glMultiTexCoord1f;

	/**
	 * @brief void glMultiTexCoord1fv(GLenum target, const GLfloat *v)
	 */
	PFNGLMULTITEXCOORD1FVPROC glMultiTexCoord1fv;

	/**
	 * @brief void glMultiTexCoord1i(GLenum target, GLint s)
	 */
	PFNGLMULTITEXCOORD1IPROC glMultiTexCoord1i;

	/**
	 * @brief void glMultiTexCoord1iv(GLenum target, const GLint *v)
	 */
	PFNGLMULTITEXCOORD1IVPROC glMultiTexCoord1iv;

	/**
	 * @brief void glMultiTexCoord1s(GLenum target, GLshort s)
	 */
	PFNGLMULTITEXCOORD1SPROC glMultiTexCoord1s;

	/**
	 * @brief void glMultiTexCoord1sv(GLenum target, const GLshort *v)
	 */
	PFNGLMULTITEXCOORD1SVPROC glMultiTexCoord1sv;

	/**
	 * @brief void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
	 */
	PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2d;

	/**
	 * @brief void glMultiTexCoord2dv(GLenum target, const GLdouble *v)
	 */
	PFNGLMULTITEXCOORD2DVPROC glMultiTexCoord2dv;

	/**
	 * @brief void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
	 */
	PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f;

	/**
	 * @brief void glMultiTexCoord2fv(GLenum target, const GLfloat *v)
	 */
	PFNGLMULTITEXCOORD2FVPROC glMultiTexCoord2fv;

	/**
	 * @brief void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
	 */
	PFNGLMULTITEXCOORD2IPROC glMultiTexCoord2i;

	/**
	 * @brief void glMultiTexCoord2iv(GLenum target, const GLint *v)
	 */
	PFNGLMULTITEXCOORD2IVPROC glMultiTexCoord2iv;

	/**
	 * @brief void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
	 */
	PFNGLMULTITEXCOORD2SPROC glMultiTexCoord2s;

	/**
	 * @brief void glMultiTexCoord2sv(GLenum target, const GLshort *v)
	 */
	PFNGLMULTITEXCOORD2SVPROC glMultiTexCoord2sv;

	/**
	 * @brief void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
	 */
	PFNGLMULTITEXCOORD3DPROC glMultiTexCoord3d;

	/**
	 * @brief void glMultiTexCoord3dv(GLenum target, const GLdouble *v)
	 */
	PFNGLMULTITEXCOORD3DVPROC glMultiTexCoord3dv;

	/**
	 * @brief void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
	 */
	PFNGLMULTITEXCOORD3FPROC glMultiTexCoord3f;

	/**
	 * @brief void glMultiTexCoord3fv(GLenum target, const GLfloat *v)
	 */
	PFNGLMULTITEXCOORD3FVPROC glMultiTexCoord3fv;

	/**
	 * @brief void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
	 */
	PFNGLMULTITEXCOORD3IPROC glMultiTexCoord3i;

	/**
	 * @brief void glMultiTexCoord3iv(GLenum target, const GLint *v)
	 */
	PFNGLMULTITEXCOORD3IVPROC glMultiTexCoord3iv;

	/**
	 * @brief void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
	 */
	PFNGLMULTITEXCOORD3SPROC glMultiTexCoord3s;

	/**
	 * @brief void glMultiTexCoord3sv(GLenum target, const GLshort *v)
	 */
	PFNGLMULTITEXCOORD3SVPROC glMultiTexCoord3sv;

	/**
	 * @brief void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
	 */
	PFNGLMULTITEXCOORD4DPROC glMultiTexCoord4d;

	/**
	 * @brief void glMultiTexCoord4dv(GLenum target, const GLdouble *v)
	 */
	PFNGLMULTITEXCOORD4DVPROC glMultiTexCoord4dv;

	/**
	 * @brief void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
	 */
	PFNGLMULTITEXCOORD4FPROC glMultiTexCoord4f;

	/**
	 * @brief void glMultiTexCoord4fv(GLenum target, const GLfloat *v)
	 */
	PFNGLMULTITEXCOORD4FVPROC glMultiTexCoord4fv;

	/**
	 * @brief void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
	 */
	PFNGLMULTITEXCOORD4IPROC glMultiTexCoord4i;

	/**
	 * @brief void glMultiTexCoord4iv(GLenum target, const GLint *v)
	 */
	PFNGLMULTITEXCOORD4IVPROC glMultiTexCoord4iv;

	/**
	 * @brief void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
	 */
	PFNGLMULTITEXCOORD4SPROC glMultiTexCoord4s;

	/**
	 * @brief void glMultiTexCoord4sv(GLenum target, const GLshort *v)
	 */
	PFNGLMULTITEXCOORD4SVPROC glMultiTexCoord4sv;




	// ****** GL_VERSION_1_4 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_4 is supported, false otherwise.
	 */
	bool isGL_VERSION_1_4;


	/**
	 * @brief void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
	 */
	PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;

	/**
	 * @brief void glMultiDrawArrays(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
	 */
	PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays;

	/**
	 * @brief void glMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount)
	 */
	PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements;

	/**
	 * @brief void glPointParameterf(GLenum pname, GLfloat param)
	 */
	PFNGLPOINTPARAMETERFPROC glPointParameterf;

	/**
	 * @brief void glPointParameterfv(GLenum pname, const GLfloat *params)
	 */
	PFNGLPOINTPARAMETERFVPROC glPointParameterfv;

	/**
	 * @brief void glPointParameteri(GLenum pname, GLint param)
	 */
	PFNGLPOINTPARAMETERIPROC glPointParameteri;

	/**
	 * @brief void glPointParameteriv(GLenum pname, const GLint *params)
	 */
	PFNGLPOINTPARAMETERIVPROC glPointParameteriv;




	// ****** GL_VERSION_1_4_DEPRECATED ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_4_DEPRECATED is supported, false otherwise.
	 */
	bool isGL_VERSION_1_4_DEPRECATED;


	/**
	 * @brief void glFogCoordPointer(GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLFOGCOORDPOINTERPROC glFogCoordPointer;

	/**
	 * @brief void glFogCoordd(GLdouble coord)
	 */
	PFNGLFOGCOORDDPROC glFogCoordd;

	/**
	 * @brief void glFogCoorddv(const GLdouble *coord)
	 */
	PFNGLFOGCOORDDVPROC glFogCoorddv;

	/**
	 * @brief void glFogCoordf(GLfloat coord)
	 */
	PFNGLFOGCOORDFPROC glFogCoordf;

	/**
	 * @brief void glFogCoordfv(const GLfloat *coord)
	 */
	PFNGLFOGCOORDFVPROC glFogCoordfv;

	/**
	 * @brief void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
	 */
	PFNGLSECONDARYCOLOR3BPROC glSecondaryColor3b;

	/**
	 * @brief void glSecondaryColor3bv(const GLbyte *v)
	 */
	PFNGLSECONDARYCOLOR3BVPROC glSecondaryColor3bv;

	/**
	 * @brief void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
	 */
	PFNGLSECONDARYCOLOR3DPROC glSecondaryColor3d;

	/**
	 * @brief void glSecondaryColor3dv(const GLdouble *v)
	 */
	PFNGLSECONDARYCOLOR3DVPROC glSecondaryColor3dv;

	/**
	 * @brief void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
	 */
	PFNGLSECONDARYCOLOR3FPROC glSecondaryColor3f;

	/**
	 * @brief void glSecondaryColor3fv(const GLfloat *v)
	 */
	PFNGLSECONDARYCOLOR3FVPROC glSecondaryColor3fv;

	/**
	 * @brief void glSecondaryColor3i(GLint red, GLint green, GLint blue)
	 */
	PFNGLSECONDARYCOLOR3IPROC glSecondaryColor3i;

	/**
	 * @brief void glSecondaryColor3iv(const GLint *v)
	 */
	PFNGLSECONDARYCOLOR3IVPROC glSecondaryColor3iv;

	/**
	 * @brief void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
	 */
	PFNGLSECONDARYCOLOR3SPROC glSecondaryColor3s;

	/**
	 * @brief void glSecondaryColor3sv(const GLshort *v)
	 */
	PFNGLSECONDARYCOLOR3SVPROC glSecondaryColor3sv;

	/**
	 * @brief void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
	 */
	PFNGLSECONDARYCOLOR3UBPROC glSecondaryColor3ub;

	/**
	 * @brief void glSecondaryColor3ubv(const GLubyte *v)
	 */
	PFNGLSECONDARYCOLOR3UBVPROC glSecondaryColor3ubv;

	/**
	 * @brief void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
	 */
	PFNGLSECONDARYCOLOR3UIPROC glSecondaryColor3ui;

	/**
	 * @brief void glSecondaryColor3uiv(const GLuint *v)
	 */
	PFNGLSECONDARYCOLOR3UIVPROC glSecondaryColor3uiv;

	/**
	 * @brief void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
	 */
	PFNGLSECONDARYCOLOR3USPROC glSecondaryColor3us;

	/**
	 * @brief void glSecondaryColor3usv(const GLushort *v)
	 */
	PFNGLSECONDARYCOLOR3USVPROC glSecondaryColor3usv;

	/**
	 * @brief void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer;

	/**
	 * @brief void glWindowPos2d(GLdouble x, GLdouble y)
	 */
	PFNGLWINDOWPOS2DPROC glWindowPos2d;

	/**
	 * @brief void glWindowPos2dv(const GLdouble *v)
	 */
	PFNGLWINDOWPOS2DVPROC glWindowPos2dv;

	/**
	 * @brief void glWindowPos2f(GLfloat x, GLfloat y)
	 */
	PFNGLWINDOWPOS2FPROC glWindowPos2f;

	/**
	 * @brief void glWindowPos2fv(const GLfloat *v)
	 */
	PFNGLWINDOWPOS2FVPROC glWindowPos2fv;

	/**
	 * @brief void glWindowPos2i(GLint x, GLint y)
	 */
	PFNGLWINDOWPOS2IPROC glWindowPos2i;

	/**
	 * @brief void glWindowPos2iv(const GLint *v)
	 */
	PFNGLWINDOWPOS2IVPROC glWindowPos2iv;

	/**
	 * @brief void glWindowPos2s(GLshort x, GLshort y)
	 */
	PFNGLWINDOWPOS2SPROC glWindowPos2s;

	/**
	 * @brief void glWindowPos2sv(const GLshort *v)
	 */
	PFNGLWINDOWPOS2SVPROC glWindowPos2sv;

	/**
	 * @brief void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLWINDOWPOS3DPROC glWindowPos3d;

	/**
	 * @brief void glWindowPos3dv(const GLdouble *v)
	 */
	PFNGLWINDOWPOS3DVPROC glWindowPos3dv;

	/**
	 * @brief void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLWINDOWPOS3FPROC glWindowPos3f;

	/**
	 * @brief void glWindowPos3fv(const GLfloat *v)
	 */
	PFNGLWINDOWPOS3FVPROC glWindowPos3fv;

	/**
	 * @brief void glWindowPos3i(GLint x, GLint y, GLint z)
	 */
	PFNGLWINDOWPOS3IPROC glWindowPos3i;

	/**
	 * @brief void glWindowPos3iv(const GLint *v)
	 */
	PFNGLWINDOWPOS3IVPROC glWindowPos3iv;

	/**
	 * @brief void glWindowPos3s(GLshort x, GLshort y, GLshort z)
	 */
	PFNGLWINDOWPOS3SPROC glWindowPos3s;

	/**
	 * @brief void glWindowPos3sv(const GLshort *v)
	 */
	PFNGLWINDOWPOS3SVPROC glWindowPos3sv;




	// ****** GL_VERSION_1_5 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_5 is supported, false otherwise.
	 */
	bool isGL_VERSION_1_5;


	/**
	 * @brief void glBeginQuery(GLenum target, GLuint id)
	 */
	PFNGLBEGINQUERYPROC glBeginQuery;

	/**
	 * @brief void glBindBuffer(GLenum target, GLuint buffer)
	 */
	PFNGLBINDBUFFERPROC glBindBuffer;

	/**
	 * @brief void glBufferData(GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage)
	 */
	PFNGLBUFFERDATAPROC glBufferData;

	/**
	 * @brief void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data)
	 */
	PFNGLBUFFERSUBDATAPROC glBufferSubData;

	/**
	 * @brief void glDeleteBuffers(GLsizei n, const GLuint *buffers)
	 */
	PFNGLDELETEBUFFERSPROC glDeleteBuffers;

	/**
	 * @brief void glDeleteQueries(GLsizei n, const GLuint *ids)
	 */
	PFNGLDELETEQUERIESPROC glDeleteQueries;

	/**
	 * @brief void glEndQuery(GLenum target)
	 */
	PFNGLENDQUERYPROC glEndQuery;

	/**
	 * @brief void glGenBuffers(GLsizei n, GLuint *buffers)
	 */
	PFNGLGENBUFFERSPROC glGenBuffers;

	/**
	 * @brief void glGenQueries(GLsizei n, GLuint *ids)
	 */
	PFNGLGENQUERIESPROC glGenQueries;

	/**
	 * @brief void glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;

	/**
	 * @brief void glGetBufferPointerv(GLenum target, GLenum pname, GLvoid* *params)
	 */
	PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv;

	/**
	 * @brief void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data)
	 */
	PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData;

	/**
	 * @brief void glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params)
	 */
	PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv;

	/**
	 * @brief void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params)
	 */
	PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;

	/**
	 * @brief void glGetQueryiv(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETQUERYIVPROC glGetQueryiv;

	/**
	 * @brief GLboolean glIsBuffer(GLuint buffer)
	 */
	PFNGLISBUFFERPROC glIsBuffer;

	/**
	 * @brief GLboolean glIsQuery(GLuint id)
	 */
	PFNGLISQUERYPROC glIsQuery;

	/**
	 * @brief GLvoid* glMapBuffer(GLenum target, GLenum access)
	 */
	PFNGLMAPBUFFERPROC glMapBuffer;

	/**
	 * @brief GLboolean glUnmapBuffer(GLenum target)
	 */
	PFNGLUNMAPBUFFERPROC glUnmapBuffer;




	// ****** GL_VERSION_1_5_DEPRECATED ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_1_5_DEPRECATED is supported, false otherwise.
	 */
	bool isGL_VERSION_1_5_DEPRECATED;




	// ****** GL_VERSION_2_0 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_2_0 is supported, false otherwise.
	 */
	bool isGL_VERSION_2_0;


	/**
	 * @brief void glAttachShader(GLuint program, GLuint shader)
	 */
	PFNGLATTACHSHADERPROC glAttachShader;

	/**
	 * @brief void glBindAttribLocation(GLuint program, GLuint index, const GLchar *name)
	 */
	PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;

	/**
	 * @brief void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
	 */
	PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate;

	/**
	 * @brief void glCompileShader(GLuint shader)
	 */
	PFNGLCOMPILESHADERPROC glCompileShader;

	/**
	 * @brief GLuint glCreateProgram(void)
	 */
	PFNGLCREATEPROGRAMPROC glCreateProgram;

	/**
	 * @brief GLuint glCreateShader(GLenum type)
	 */
	PFNGLCREATESHADERPROC glCreateShader;

	/**
	 * @brief void glDeleteProgram(GLuint program)
	 */
	PFNGLDELETEPROGRAMPROC glDeleteProgram;

	/**
	 * @brief void glDeleteShader(GLuint shader)
	 */
	PFNGLDELETESHADERPROC glDeleteShader;

	/**
	 * @brief void glDetachShader(GLuint program, GLuint shader)
	 */
	PFNGLDETACHSHADERPROC glDetachShader;

	/**
	 * @brief void glDisableVertexAttribArray(GLuint index)
	 */
	PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;

	/**
	 * @brief void glDrawBuffers(GLsizei n, const GLenum *bufs)
	 */
	PFNGLDRAWBUFFERSPROC glDrawBuffers;

	/**
	 * @brief void glEnableVertexAttribArray(GLuint index)
	 */
	PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;

	/**
	 * @brief void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
	 */
	PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib;

	/**
	 * @brief void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
	 */
	PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform;

	/**
	 * @brief void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj)
	 */
	PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders;

	/**
	 * @brief GLint glGetAttribLocation(GLuint program, const GLchar *name)
	 */
	PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;

	/**
	 * @brief void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
	 */
	PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;

	/**
	 * @brief void glGetProgramiv(GLuint program, GLenum pname, GLint *params)
	 */
	PFNGLGETPROGRAMIVPROC glGetProgramiv;

	/**
	 * @brief void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
	 */
	PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;

	/**
	 * @brief void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
	 */
	PFNGLGETSHADERSOURCEPROC glGetShaderSource;

	/**
	 * @brief void glGetShaderiv(GLuint shader, GLenum pname, GLint *params)
	 */
	PFNGLGETSHADERIVPROC glGetShaderiv;

	/**
	 * @brief GLint glGetUniformLocation(GLuint program, const GLchar *name)
	 */
	PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;

	/**
	 * @brief void glGetUniformfv(GLuint program, GLint location, GLfloat *params)
	 */
	PFNGLGETUNIFORMFVPROC glGetUniformfv;

	/**
	 * @brief void glGetUniformiv(GLuint program, GLint location, GLint *params)
	 */
	PFNGLGETUNIFORMIVPROC glGetUniformiv;

	/**
	 * @brief void glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid* *pointer)
	 */
	PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv;

	/**
	 * @brief void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble *params)
	 */
	PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv;

	/**
	 * @brief void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params)
	 */
	PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv;

	/**
	 * @brief void glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params)
	 */
	PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv;

	/**
	 * @brief GLboolean glIsProgram(GLuint program)
	 */
	PFNGLISPROGRAMPROC glIsProgram;

	/**
	 * @brief GLboolean glIsShader(GLuint shader)
	 */
	PFNGLISSHADERPROC glIsShader;

	/**
	 * @brief void glLinkProgram(GLuint program)
	 */
	PFNGLLINKPROGRAMPROC glLinkProgram;

	/**
	 * @brief void glShaderSource(GLuint shader, GLsizei count, const GLchar* *string, const GLint *length)
	 */
	PFNGLSHADERSOURCEPROC glShaderSource;

	/**
	 * @brief void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
	 */
	PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate;

	/**
	 * @brief void glStencilMaskSeparate(GLenum face, GLuint mask)
	 */
	PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate;

	/**
	 * @brief void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
	 */
	PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate;

	/**
	 * @brief void glUniform1f(GLint location, GLfloat v0)
	 */
	PFNGLUNIFORM1FPROC glUniform1f;

	/**
	 * @brief void glUniform1fv(GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLUNIFORM1FVPROC glUniform1fv;

	/**
	 * @brief void glUniform1i(GLint location, GLint v0)
	 */
	PFNGLUNIFORM1IPROC glUniform1i;

	/**
	 * @brief void glUniform1iv(GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLUNIFORM1IVPROC glUniform1iv;

	/**
	 * @brief void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
	 */
	PFNGLUNIFORM2FPROC glUniform2f;

	/**
	 * @brief void glUniform2fv(GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLUNIFORM2FVPROC glUniform2fv;

	/**
	 * @brief void glUniform2i(GLint location, GLint v0, GLint v1)
	 */
	PFNGLUNIFORM2IPROC glUniform2i;

	/**
	 * @brief void glUniform2iv(GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLUNIFORM2IVPROC glUniform2iv;

	/**
	 * @brief void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
	 */
	PFNGLUNIFORM3FPROC glUniform3f;

	/**
	 * @brief void glUniform3fv(GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLUNIFORM3FVPROC glUniform3fv;

	/**
	 * @brief void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
	 */
	PFNGLUNIFORM3IPROC glUniform3i;

	/**
	 * @brief void glUniform3iv(GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLUNIFORM3IVPROC glUniform3iv;

	/**
	 * @brief void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
	 */
	PFNGLUNIFORM4FPROC glUniform4f;

	/**
	 * @brief void glUniform4fv(GLint location, GLsizei count, const GLfloat *value)
	 */
	PFNGLUNIFORM4FVPROC glUniform4fv;

	/**
	 * @brief void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
	 */
	PFNGLUNIFORM4IPROC glUniform4i;

	/**
	 * @brief void glUniform4iv(GLint location, GLsizei count, const GLint *value)
	 */
	PFNGLUNIFORM4IVPROC glUniform4iv;

	/**
	 * @brief void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv;

	/**
	 * @brief void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;

	/**
	 * @brief void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;

	/**
	 * @brief void glUseProgram(GLuint program)
	 */
	PFNGLUSEPROGRAMPROC glUseProgram;

	/**
	 * @brief void glValidateProgram(GLuint program)
	 */
	PFNGLVALIDATEPROGRAMPROC glValidateProgram;

	/**
	 * @brief void glVertexAttrib1d(GLuint index, GLdouble x)
	 */
	PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d;

	/**
	 * @brief void glVertexAttrib1dv(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv;

	/**
	 * @brief void glVertexAttrib1f(GLuint index, GLfloat x)
	 */
	PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f;

	/**
	 * @brief void glVertexAttrib1fv(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv;

	/**
	 * @brief void glVertexAttrib1s(GLuint index, GLshort x)
	 */
	PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s;

	/**
	 * @brief void glVertexAttrib1sv(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv;

	/**
	 * @brief void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
	 */
	PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d;

	/**
	 * @brief void glVertexAttrib2dv(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv;

	/**
	 * @brief void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
	 */
	PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f;

	/**
	 * @brief void glVertexAttrib2fv(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv;

	/**
	 * @brief void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
	 */
	PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s;

	/**
	 * @brief void glVertexAttrib2sv(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv;

	/**
	 * @brief void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
	 */
	PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d;

	/**
	 * @brief void glVertexAttrib3dv(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv;

	/**
	 * @brief void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
	 */
	PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f;

	/**
	 * @brief void glVertexAttrib3fv(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv;

	/**
	 * @brief void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
	 */
	PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s;

	/**
	 * @brief void glVertexAttrib3sv(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv;

	/**
	 * @brief void glVertexAttrib4Nbv(GLuint index, const GLbyte *v)
	 */
	PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv;

	/**
	 * @brief void glVertexAttrib4Niv(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv;

	/**
	 * @brief void glVertexAttrib4Nsv(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv;

	/**
	 * @brief void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
	 */
	PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub;

	/**
	 * @brief void glVertexAttrib4Nubv(GLuint index, const GLubyte *v)
	 */
	PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv;

	/**
	 * @brief void glVertexAttrib4Nuiv(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv;

	/**
	 * @brief void glVertexAttrib4Nusv(GLuint index, const GLushort *v)
	 */
	PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv;

	/**
	 * @brief void glVertexAttrib4bv(GLuint index, const GLbyte *v)
	 */
	PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv;

	/**
	 * @brief void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
	 */
	PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d;

	/**
	 * @brief void glVertexAttrib4dv(GLuint index, const GLdouble *v)
	 */
	PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv;

	/**
	 * @brief void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
	 */
	PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;

	/**
	 * @brief void glVertexAttrib4fv(GLuint index, const GLfloat *v)
	 */
	PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;

	/**
	 * @brief void glVertexAttrib4iv(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv;

	/**
	 * @brief void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
	 */
	PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s;

	/**
	 * @brief void glVertexAttrib4sv(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv;

	/**
	 * @brief void glVertexAttrib4ubv(GLuint index, const GLubyte *v)
	 */
	PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv;

	/**
	 * @brief void glVertexAttrib4uiv(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv;

	/**
	 * @brief void glVertexAttrib4usv(GLuint index, const GLushort *v)
	 */
	PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv;

	/**
	 * @brief void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;




	// ****** GL_VERSION_2_0_DEPRECATED ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_2_0_DEPRECATED is supported, false otherwise.
	 */
	bool isGL_VERSION_2_0_DEPRECATED;




	// ****** GL_VERSION_2_1 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_2_1 is supported, false otherwise.
	 */
	bool isGL_VERSION_2_1;


	/**
	 * @brief void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv;

	/**
	 * @brief void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv;

	/**
	 * @brief void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv;

	/**
	 * @brief void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;

	/**
	 * @brief void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv;

	/**
	 * @brief void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
	 */
	PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;




	// ****** GL_VERSION_2_1_DEPRECATED ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_2_1_DEPRECATED is supported, false otherwise.
	 */
	bool isGL_VERSION_2_1_DEPRECATED;




	// ****** GL_VERSION_3_0 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_3_0 is supported, false otherwise.
	 */
	bool isGL_VERSION_3_0;


	/**
	 * @brief void glBeginConditionalRender(GLuint id, GLenum mode)
	 */
	PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender;

	/**
	 * @brief void glBeginTransformFeedback(GLenum primitiveMode)
	 */
	PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;

	/**
	 * @brief void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
	 */
	PFNGLBINDBUFFERBASEPROC glBindBufferBase;

	/**
	 * @brief void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
	 */
	PFNGLBINDBUFFERRANGEPROC glBindBufferRange;

	/**
	 * @brief void glBindFragDataLocation(GLuint program, GLuint color, const GLchar *name)
	 */
	PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation;

	/**
	 * @brief void glClampColor(GLenum target, GLenum clamp)
	 */
	PFNGLCLAMPCOLORPROC glClampColor;

	/**
	 * @brief void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
	 */
	PFNGLCLEARBUFFERFIPROC glClearBufferfi;

	/**
	 * @brief void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat *value)
	 */
	PFNGLCLEARBUFFERFVPROC glClearBufferfv;

	/**
	 * @brief void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint *value)
	 */
	PFNGLCLEARBUFFERIVPROC glClearBufferiv;

	/**
	 * @brief void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint *value)
	 */
	PFNGLCLEARBUFFERUIVPROC glClearBufferuiv;

	/**
	 * @brief void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
	 */
	PFNGLCOLORMASKIPROC glColorMaski;

	/**
	 * @brief void glDisablei(GLenum target, GLuint index)
	 */
	PFNGLDISABLEIPROC glDisablei;

	/**
	 * @brief void glEnablei(GLenum target, GLuint index)
	 */
	PFNGLENABLEIPROC glEnablei;

	/**
	 * @brief void glEndConditionalRender(void)
	 */
	PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender;

	/**
	 * @brief void glEndTransformFeedback(void)
	 */
	PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;

	/**
	 * @brief void glGetBooleani_v(GLenum target, GLuint index, GLboolean *data)
	 */
	PFNGLGETBOOLEANI_VPROC glGetBooleani_v;

	/**
	 * @brief GLint glGetFragDataLocation(GLuint program, const GLchar *name)
	 */
	PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation;

	/**
	 * @brief void glGetIntegeri_v(GLenum target, GLuint index, GLint *data)
	 */
	PFNGLGETINTEGERI_VPROC glGetIntegeri_v;

	/**
	 * @brief const GLubyte * glGetStringi(GLenum name, GLuint index)
	 */
	PFNGLGETSTRINGIPROC glGetStringi;

	/**
	 * @brief void glGetTexParameterIiv(GLenum target, GLenum pname, GLint *params)
	 */
	PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv;

	/**
	 * @brief void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint *params)
	 */
	PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv;

	/**
	 * @brief void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
	 */
	PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;

	/**
	 * @brief void glGetUniformuiv(GLuint program, GLint location, GLuint *params)
	 */
	PFNGLGETUNIFORMUIVPROC glGetUniformuiv;

	/**
	 * @brief void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint *params)
	 */
	PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;

	/**
	 * @brief void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint *params)
	 */
	PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;

	/**
	 * @brief GLboolean glIsEnabledi(GLenum target, GLuint index)
	 */
	PFNGLISENABLEDIPROC glIsEnabledi;

	/**
	 * @brief void glTexParameterIiv(GLenum target, GLenum pname, const GLint *params)
	 */
	PFNGLTEXPARAMETERIIVPROC glTexParameterIiv;

	/**
	 * @brief void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint *params)
	 */
	PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv;

	/**
	 * @brief void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode)
	 */
	PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;

	/**
	 * @brief void glUniform1ui(GLint location, GLuint v0)
	 */
	PFNGLUNIFORM1UIPROC glUniform1ui;

	/**
	 * @brief void glUniform1uiv(GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLUNIFORM1UIVPROC glUniform1uiv;

	/**
	 * @brief void glUniform2ui(GLint location, GLuint v0, GLuint v1)
	 */
	PFNGLUNIFORM2UIPROC glUniform2ui;

	/**
	 * @brief void glUniform2uiv(GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLUNIFORM2UIVPROC glUniform2uiv;

	/**
	 * @brief void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
	 */
	PFNGLUNIFORM3UIPROC glUniform3ui;

	/**
	 * @brief void glUniform3uiv(GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLUNIFORM3UIVPROC glUniform3uiv;

	/**
	 * @brief void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
	 */
	PFNGLUNIFORM4UIPROC glUniform4ui;

	/**
	 * @brief void glUniform4uiv(GLint location, GLsizei count, const GLuint *value)
	 */
	PFNGLUNIFORM4UIVPROC glUniform4uiv;

	/**
	 * @brief void glVertexAttribI1i(GLuint index, GLint x)
	 */
	PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i;

	/**
	 * @brief void glVertexAttribI1iv(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv;

	/**
	 * @brief void glVertexAttribI1ui(GLuint index, GLuint x)
	 */
	PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui;

	/**
	 * @brief void glVertexAttribI1uiv(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv;

	/**
	 * @brief void glVertexAttribI2i(GLuint index, GLint x, GLint y)
	 */
	PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i;

	/**
	 * @brief void glVertexAttribI2iv(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv;

	/**
	 * @brief void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
	 */
	PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui;

	/**
	 * @brief void glVertexAttribI2uiv(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv;

	/**
	 * @brief void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
	 */
	PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i;

	/**
	 * @brief void glVertexAttribI3iv(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv;

	/**
	 * @brief void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
	 */
	PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui;

	/**
	 * @brief void glVertexAttribI3uiv(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv;

	/**
	 * @brief void glVertexAttribI4bv(GLuint index, const GLbyte *v)
	 */
	PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv;

	/**
	 * @brief void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
	 */
	PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i;

	/**
	 * @brief void glVertexAttribI4iv(GLuint index, const GLint *v)
	 */
	PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;

	/**
	 * @brief void glVertexAttribI4sv(GLuint index, const GLshort *v)
	 */
	PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv;

	/**
	 * @brief void glVertexAttribI4ubv(GLuint index, const GLubyte *v)
	 */
	PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv;

	/**
	 * @brief void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
	 */
	PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;

	/**
	 * @brief void glVertexAttribI4uiv(GLuint index, const GLuint *v)
	 */
	PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;

	/**
	 * @brief void glVertexAttribI4usv(GLuint index, const GLushort *v)
	 */
	PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv;

	/**
	 * @brief void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
	 */
	PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;




	// ****** GL_VERSION_3_0_DEPRECATED ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_3_0_DEPRECATED is supported, false otherwise.
	 */
	bool isGL_VERSION_3_0_DEPRECATED;




	// ****** GL_VERSION_3_1 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_3_1 is supported, false otherwise.
	 */
	bool isGL_VERSION_3_1;


	/**
	 * @brief void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
	 */
	PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;

	/**
	 * @brief void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
	 */
	PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;

	/**
	 * @brief void glPrimitiveRestartIndex(GLuint index)
	 */
	PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;

	/**
	 * @brief void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
	 */
	PFNGLTEXBUFFERPROC glTexBuffer;




	// ****** GL_VERSION_3_2 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_3_2 is supported, false otherwise.
	 */
	bool isGL_VERSION_3_2;


	/**
	 * @brief void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
	 */
	PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;

	/**
	 * @brief void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 *params)
	 */
	PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;

	/**
	 * @brief void glGetInteger64i_v(GLenum target, GLuint index, GLint64 *data)
	 */
	PFNGLGETINTEGER64I_VPROC glGetInteger64i_v;




	// ****** GL_VERSION_3_3 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_3_3 is supported, false otherwise.
	 */
	bool isGL_VERSION_3_3;


	/**
	 * @brief void glVertexAttribDivisor(GLuint index, GLuint divisor)
	 */
	PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;




	// ****** GL_VERSION_4_0 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_4_0 is supported, false otherwise.
	 */
	bool isGL_VERSION_4_0;


	/**
	 * @brief void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
	 */
	PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei;

	/**
	 * @brief void glBlendEquationi(GLuint buf, GLenum mode)
	 */
	PFNGLBLENDEQUATIONIPROC glBlendEquationi;

	/**
	 * @brief void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
	 */
	PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei;

	/**
	 * @brief void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
	 */
	PFNGLBLENDFUNCIPROC glBlendFunci;

	/**
	 * @brief void glMinSampleShading(GLclampf value)
	 */
	PFNGLMINSAMPLESHADINGPROC glMinSampleShading;




	// ****** GL_VERSION_4_1 ******

	/**
	 * @brief Returns \c true if \b GL_VERSION_4_1 is supported, false otherwise.
	 */
	bool isGL_VERSION_4_1;




	// ****** GL_WIN_phong_shading ******

	/**
	 * @brief Returns \c true if \b GL_WIN_phong_shading is supported, false otherwise.
	 */
	bool isGL_WIN_phong_shading;




	// ****** GL_WIN_specular_fog ******

	/**
	 * @brief Returns \c true if \b GL_WIN_specular_fog is supported, false otherwise.
	 */
	bool isGL_WIN_specular_fog;



#ifdef WIN32
	// ****** WGL_3DFX_multisample ******

	/**
	 * @brief Returns \c true if \b WGL_3DFX_multisample is supported, false otherwise.
	 */
	bool isWGL_3DFX_multisample;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_3DL_stereo_control ******

	/**
	 * @brief Returns \c true if \b WGL_3DL_stereo_control is supported, false otherwise.
	 */
	bool isWGL_3DL_stereo_control;


	/**
	 * @brief BOOL wglSetStereoEmitterState3DL(HDC hDC, UINT uState)
	 */
	PFNWGLSETSTEREOEMITTERSTATE3DLPROC wglSetStereoEmitterState3DL;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_AMD_gpu_association ******

	/**
	 * @brief Returns \c true if \b WGL_AMD_gpu_association is supported, false otherwise.
	 */
	bool isWGL_AMD_gpu_association;


	/**
	 * @brief VOID wglBlitContextFramebufferAMD(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
	 */
	PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC wglBlitContextFramebufferAMD;

	/**
	 * @brief HGLRC wglCreateAssociatedContextAMD(UINT id)
	 */
	PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC wglCreateAssociatedContextAMD;

	/**
	 * @brief HGLRC wglCreateAssociatedContextAttribsAMD(UINT id, HGLRC hShareContext, const int *attribList)
	 */
	PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC wglCreateAssociatedContextAttribsAMD;

	/**
	 * @brief BOOL wglDeleteAssociatedContextAMD(HGLRC hglrc)
	 */
	PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC wglDeleteAssociatedContextAMD;

	/**
	 * @brief UINT wglGetContextGPUIDAMD(HGLRC hglrc)
	 */
	PFNWGLGETCONTEXTGPUIDAMDPROC wglGetContextGPUIDAMD;

	/**
	 * @brief HGLRC wglGetCurrentAssociatedContextAMD(void)
	 */
	PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC wglGetCurrentAssociatedContextAMD;

	/**
	 * @brief UINT wglGetGPUIDsAMD(UINT maxCount, UINT *ids)
	 */
	PFNWGLGETGPUIDSAMDPROC wglGetGPUIDsAMD;

	/**
	 * @brief INT wglGetGPUInfoAMD(UINT id, int property, GLenum dataType, UINT size, void *data)
	 */
	PFNWGLGETGPUINFOAMDPROC wglGetGPUInfoAMD;

	/**
	 * @brief BOOL wglMakeAssociatedContextCurrentAMD(HGLRC hglrc)
	 */
	PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC wglMakeAssociatedContextCurrentAMD;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_buffer_region ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_buffer_region is supported, false otherwise.
	 */
	bool isWGL_ARB_buffer_region;


	/**
	 * @brief HANDLE wglCreateBufferRegionARB(HDC hDC, int iLayerPlane, UINT uType)
	 */
	PFNWGLCREATEBUFFERREGIONARBPROC wglCreateBufferRegionARB;

	/**
	 * @brief VOID wglDeleteBufferRegionARB(HANDLE hRegion)
	 */
	PFNWGLDELETEBUFFERREGIONARBPROC wglDeleteBufferRegionARB;

	/**
	 * @brief BOOL wglRestoreBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc)
	 */
	PFNWGLRESTOREBUFFERREGIONARBPROC wglRestoreBufferRegionARB;

	/**
	 * @brief BOOL wglSaveBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height)
	 */
	PFNWGLSAVEBUFFERREGIONARBPROC wglSaveBufferRegionARB;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_create_context ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_create_context is supported, false otherwise.
	 */
	bool isWGL_ARB_create_context;


	/**
	 * @brief HGLRC wglCreateContextAttribsARB(HDC hDC, HGLRC hShareContext, const int *attribList)
	 */
	PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_create_context_profile ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_create_context_profile is supported, false otherwise.
	 */
	bool isWGL_ARB_create_context_profile;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_create_context_robustness ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_create_context_robustness is supported, false otherwise.
	 */
	bool isWGL_ARB_create_context_robustness;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_extensions_string ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_extensions_string is supported, false otherwise.
	 */
	bool isWGL_ARB_extensions_string;


	/**
	 * @brief const char * wglGetExtensionsStringARB(HDC hdc)
	 */
	PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_framebuffer_sRGB ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_framebuffer_sRGB is supported, false otherwise.
	 */
	bool isWGL_ARB_framebuffer_sRGB;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_make_current_read ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_make_current_read is supported, false otherwise.
	 */
	bool isWGL_ARB_make_current_read;


	/**
	 * @brief HDC wglGetCurrentReadDCARB(void)
	 */
	PFNWGLGETCURRENTREADDCARBPROC wglGetCurrentReadDCARB;

	/**
	 * @brief BOOL wglMakeContextCurrentARB(HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
	 */
	PFNWGLMAKECONTEXTCURRENTARBPROC wglMakeContextCurrentARB;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_multisample ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_multisample is supported, false otherwise.
	 */
	bool isWGL_ARB_multisample;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_pbuffer ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_pbuffer is supported, false otherwise.
	 */
	bool isWGL_ARB_pbuffer;


	/**
	 * @brief HPBUFFERARB wglCreatePbufferARB(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList)
	 */
	PFNWGLCREATEPBUFFERARBPROC wglCreatePbufferARB;

	/**
	 * @brief BOOL wglDestroyPbufferARB(HPBUFFERARB hPbuffer)
	 */
	PFNWGLDESTROYPBUFFERARBPROC wglDestroyPbufferARB;

	/**
	 * @brief HDC wglGetPbufferDCARB(HPBUFFERARB hPbuffer)
	 */
	PFNWGLGETPBUFFERDCARBPROC wglGetPbufferDCARB;

	/**
	 * @brief BOOL wglQueryPbufferARB(HPBUFFERARB hPbuffer, int iAttribute, int *piValue)
	 */
	PFNWGLQUERYPBUFFERARBPROC wglQueryPbufferARB;

	/**
	 * @brief int wglReleasePbufferDCARB(HPBUFFERARB hPbuffer, HDC hDC)
	 */
	PFNWGLRELEASEPBUFFERDCARBPROC wglReleasePbufferDCARB;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_pixel_format ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_pixel_format is supported, false otherwise.
	 */
	bool isWGL_ARB_pixel_format;


	/**
	 * @brief BOOL wglChoosePixelFormatARB(HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats)
	 */
	PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;

	/**
	 * @brief BOOL wglGetPixelFormatAttribfvARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, FLOAT *pfValues)
	 */
	PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB;

	/**
	 * @brief BOOL wglGetPixelFormatAttribivARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, int *piValues)
	 */
	PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_pixel_format_float ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_pixel_format_float is supported, false otherwise.
	 */
	bool isWGL_ARB_pixel_format_float;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ARB_render_texture ******

	/**
	 * @brief Returns \c true if \b WGL_ARB_render_texture is supported, false otherwise.
	 */
	bool isWGL_ARB_render_texture;


	/**
	 * @brief BOOL wglBindTexImageARB(HPBUFFERARB hPbuffer, int iBuffer)
	 */
	PFNWGLBINDTEXIMAGEARBPROC wglBindTexImageARB;

	/**
	 * @brief BOOL wglReleaseTexImageARB(HPBUFFERARB hPbuffer, int iBuffer)
	 */
	PFNWGLRELEASETEXIMAGEARBPROC wglReleaseTexImageARB;

	/**
	 * @brief BOOL wglSetPbufferAttribARB(HPBUFFERARB hPbuffer, const int *piAttribList)
	 */
	PFNWGLSETPBUFFERATTRIBARBPROC wglSetPbufferAttribARB;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_ATI_pixel_format_float ******

	/**
	 * @brief Returns \c true if \b WGL_ATI_pixel_format_float is supported, false otherwise.
	 */
	bool isWGL_ATI_pixel_format_float;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_create_context_es2_profile ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_create_context_es2_profile is supported, false otherwise.
	 */
	bool isWGL_EXT_create_context_es2_profile;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_depth_float ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_depth_float is supported, false otherwise.
	 */
	bool isWGL_EXT_depth_float;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_display_color_table ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_display_color_table is supported, false otherwise.
	 */
	bool isWGL_EXT_display_color_table;


	/**
	 * @brief GLboolean wglBindDisplayColorTableEXT(GLushort id)
	 */
	PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT;

	/**
	 * @brief GLboolean wglCreateDisplayColorTableEXT(GLushort id)
	 */
	PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC wglCreateDisplayColorTableEXT;

	/**
	 * @brief VOID wglDestroyDisplayColorTableEXT(GLushort id)
	 */
	PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT;

	/**
	 * @brief GLboolean wglLoadDisplayColorTableEXT(const GLushort *table, GLuint length)
	 */
	PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_extensions_string ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_extensions_string is supported, false otherwise.
	 */
	bool isWGL_EXT_extensions_string;


	/**
	 * @brief const char * wglGetExtensionsStringEXT(void)
	 */
	PFNWGLGETEXTENSIONSSTRINGEXTPROC wglGetExtensionsStringEXT;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_framebuffer_sRGB ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_framebuffer_sRGB is supported, false otherwise.
	 */
	bool isWGL_EXT_framebuffer_sRGB;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_make_current_read ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_make_current_read is supported, false otherwise.
	 */
	bool isWGL_EXT_make_current_read;


	/**
	 * @brief HDC wglGetCurrentReadDCEXT(void)
	 */
	PFNWGLGETCURRENTREADDCEXTPROC wglGetCurrentReadDCEXT;

	/**
	 * @brief BOOL wglMakeContextCurrentEXT(HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
	 */
	PFNWGLMAKECONTEXTCURRENTEXTPROC wglMakeContextCurrentEXT;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_multisample ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_multisample is supported, false otherwise.
	 */
	bool isWGL_EXT_multisample;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_pbuffer ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_pbuffer is supported, false otherwise.
	 */
	bool isWGL_EXT_pbuffer;


	/**
	 * @brief HPBUFFEREXT wglCreatePbufferEXT(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList)
	 */
	PFNWGLCREATEPBUFFEREXTPROC wglCreatePbufferEXT;

	/**
	 * @brief BOOL wglDestroyPbufferEXT(HPBUFFEREXT hPbuffer)
	 */
	PFNWGLDESTROYPBUFFEREXTPROC wglDestroyPbufferEXT;

	/**
	 * @brief HDC wglGetPbufferDCEXT(HPBUFFEREXT hPbuffer)
	 */
	PFNWGLGETPBUFFERDCEXTPROC wglGetPbufferDCEXT;

	/**
	 * @brief BOOL wglQueryPbufferEXT(HPBUFFEREXT hPbuffer, int iAttribute, int *piValue)
	 */
	PFNWGLQUERYPBUFFEREXTPROC wglQueryPbufferEXT;

	/**
	 * @brief int wglReleasePbufferDCEXT(HPBUFFEREXT hPbuffer, HDC hDC)
	 */
	PFNWGLRELEASEPBUFFERDCEXTPROC wglReleasePbufferDCEXT;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_pixel_format ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_pixel_format is supported, false otherwise.
	 */
	bool isWGL_EXT_pixel_format;


	/**
	 * @brief BOOL wglChoosePixelFormatEXT(HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats)
	 */
	PFNWGLCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT;

	/**
	 * @brief BOOL wglGetPixelFormatAttribfvEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues)
	 */
	PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT;

	/**
	 * @brief BOOL wglGetPixelFormatAttribivEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues)
	 */
	PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_pixel_format_packed_float ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_pixel_format_packed_float is supported, false otherwise.
	 */
	bool isWGL_EXT_pixel_format_packed_float;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_EXT_swap_control ******

	/**
	 * @brief Returns \c true if \b WGL_EXT_swap_control is supported, false otherwise.
	 */
	bool isWGL_EXT_swap_control;


	/**
	 * @brief int wglGetSwapIntervalEXT(void)
	 */
	PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT;

	/**
	 * @brief BOOL wglSwapIntervalEXT(int interval)
	 */
	PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_I3D_digital_video_control ******

	/**
	 * @brief Returns \c true if \b WGL_I3D_digital_video_control is supported, false otherwise.
	 */
	bool isWGL_I3D_digital_video_control;


	/**
	 * @brief BOOL wglGetDigitalVideoParametersI3D(HDC hDC, int iAttribute, int *piValue)
	 */
	PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC wglGetDigitalVideoParametersI3D;

	/**
	 * @brief BOOL wglSetDigitalVideoParametersI3D(HDC hDC, int iAttribute, const int *piValue)
	 */
	PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC wglSetDigitalVideoParametersI3D;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_I3D_gamma ******

	/**
	 * @brief Returns \c true if \b WGL_I3D_gamma is supported, false otherwise.
	 */
	bool isWGL_I3D_gamma;


	/**
	 * @brief BOOL wglGetGammaTableI3D(HDC hDC, int iEntries, USHORT *puRed, USHORT *puGreen, USHORT *puBlue)
	 */
	PFNWGLGETGAMMATABLEI3DPROC wglGetGammaTableI3D;

	/**
	 * @brief BOOL wglGetGammaTableParametersI3D(HDC hDC, int iAttribute, int *piValue)
	 */
	PFNWGLGETGAMMATABLEPARAMETERSI3DPROC wglGetGammaTableParametersI3D;

	/**
	 * @brief BOOL wglSetGammaTableI3D(HDC hDC, int iEntries, const USHORT *puRed, const USHORT *puGreen, const USHORT *puBlue)
	 */
	PFNWGLSETGAMMATABLEI3DPROC wglSetGammaTableI3D;

	/**
	 * @brief BOOL wglSetGammaTableParametersI3D(HDC hDC, int iAttribute, const int *piValue)
	 */
	PFNWGLSETGAMMATABLEPARAMETERSI3DPROC wglSetGammaTableParametersI3D;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_I3D_genlock ******

	/**
	 * @brief Returns \c true if \b WGL_I3D_genlock is supported, false otherwise.
	 */
	bool isWGL_I3D_genlock;


	/**
	 * @brief BOOL wglDisableGenlockI3D(HDC hDC)
	 */
	PFNWGLDISABLEGENLOCKI3DPROC wglDisableGenlockI3D;

	/**
	 * @brief BOOL wglEnableGenlockI3D(HDC hDC)
	 */
	PFNWGLENABLEGENLOCKI3DPROC wglEnableGenlockI3D;

	/**
	 * @brief BOOL wglGenlockSampleRateI3D(HDC hDC, UINT uRate)
	 */
	PFNWGLGENLOCKSAMPLERATEI3DPROC wglGenlockSampleRateI3D;

	/**
	 * @brief BOOL wglGenlockSourceDelayI3D(HDC hDC, UINT uDelay)
	 */
	PFNWGLGENLOCKSOURCEDELAYI3DPROC wglGenlockSourceDelayI3D;

	/**
	 * @brief BOOL wglGenlockSourceEdgeI3D(HDC hDC, UINT uEdge)
	 */
	PFNWGLGENLOCKSOURCEEDGEI3DPROC wglGenlockSourceEdgeI3D;

	/**
	 * @brief BOOL wglGenlockSourceI3D(HDC hDC, UINT uSource)
	 */
	PFNWGLGENLOCKSOURCEI3DPROC wglGenlockSourceI3D;

	/**
	 * @brief BOOL wglGetGenlockSampleRateI3D(HDC hDC, UINT *uRate)
	 */
	PFNWGLGETGENLOCKSAMPLERATEI3DPROC wglGetGenlockSampleRateI3D;

	/**
	 * @brief BOOL wglGetGenlockSourceDelayI3D(HDC hDC, UINT *uDelay)
	 */
	PFNWGLGETGENLOCKSOURCEDELAYI3DPROC wglGetGenlockSourceDelayI3D;

	/**
	 * @brief BOOL wglGetGenlockSourceEdgeI3D(HDC hDC, UINT *uEdge)
	 */
	PFNWGLGETGENLOCKSOURCEEDGEI3DPROC wglGetGenlockSourceEdgeI3D;

	/**
	 * @brief BOOL wglGetGenlockSourceI3D(HDC hDC, UINT *uSource)
	 */
	PFNWGLGETGENLOCKSOURCEI3DPROC wglGetGenlockSourceI3D;

	/**
	 * @brief BOOL wglIsEnabledGenlockI3D(HDC hDC, BOOL *pFlag)
	 */
	PFNWGLISENABLEDGENLOCKI3DPROC wglIsEnabledGenlockI3D;

	/**
	 * @brief BOOL wglQueryGenlockMaxSourceDelayI3D(HDC hDC, UINT *uMaxLineDelay, UINT *uMaxPixelDelay)
	 */
	PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC wglQueryGenlockMaxSourceDelayI3D;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_I3D_image_buffer ******

	/**
	 * @brief Returns \c true if \b WGL_I3D_image_buffer is supported, false otherwise.
	 */
	bool isWGL_I3D_image_buffer;


	/**
	 * @brief BOOL wglAssociateImageBufferEventsI3D(HDC hDC, const HANDLE *pEvent, const LPVOID *pAddress, const DWORD *pSize, UINT count)
	 */
	PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC wglAssociateImageBufferEventsI3D;

	/**
	 * @brief LPVOID wglCreateImageBufferI3D(HDC hDC, DWORD dwSize, UINT uFlags)
	 */
	PFNWGLCREATEIMAGEBUFFERI3DPROC wglCreateImageBufferI3D;

	/**
	 * @brief BOOL wglDestroyImageBufferI3D(HDC hDC, LPVOID pAddress)
	 */
	PFNWGLDESTROYIMAGEBUFFERI3DPROC wglDestroyImageBufferI3D;

	/**
	 * @brief BOOL wglReleaseImageBufferEventsI3D(HDC hDC, const LPVOID *pAddress, UINT count)
	 */
	PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC wglReleaseImageBufferEventsI3D;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_I3D_swap_frame_lock ******

	/**
	 * @brief Returns \c true if \b WGL_I3D_swap_frame_lock is supported, false otherwise.
	 */
	bool isWGL_I3D_swap_frame_lock;


	/**
	 * @brief BOOL wglDisableFrameLockI3D(void)
	 */
	PFNWGLDISABLEFRAMELOCKI3DPROC wglDisableFrameLockI3D;

	/**
	 * @brief BOOL wglEnableFrameLockI3D(void)
	 */
	PFNWGLENABLEFRAMELOCKI3DPROC wglEnableFrameLockI3D;

	/**
	 * @brief BOOL wglIsEnabledFrameLockI3D(BOOL *pFlag)
	 */
	PFNWGLISENABLEDFRAMELOCKI3DPROC wglIsEnabledFrameLockI3D;

	/**
	 * @brief BOOL wglQueryFrameLockMasterI3D(BOOL *pFlag)
	 */
	PFNWGLQUERYFRAMELOCKMASTERI3DPROC wglQueryFrameLockMasterI3D;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_I3D_swap_frame_usage ******

	/**
	 * @brief Returns \c true if \b WGL_I3D_swap_frame_usage is supported, false otherwise.
	 */
	bool isWGL_I3D_swap_frame_usage;


	/**
	 * @brief BOOL wglBeginFrameTrackingI3D(void)
	 */
	PFNWGLBEGINFRAMETRACKINGI3DPROC wglBeginFrameTrackingI3D;

	/**
	 * @brief BOOL wglEndFrameTrackingI3D(void)
	 */
	PFNWGLENDFRAMETRACKINGI3DPROC wglEndFrameTrackingI3D;

	/**
	 * @brief BOOL wglGetFrameUsageI3D(float *pUsage)
	 */
	PFNWGLGETFRAMEUSAGEI3DPROC wglGetFrameUsageI3D;

	/**
	 * @brief BOOL wglQueryFrameTrackingI3D(DWORD *pFrameCount, DWORD *pMissedFrames, float *pLastMissedUsage)
	 */
	PFNWGLQUERYFRAMETRACKINGI3DPROC wglQueryFrameTrackingI3D;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_DX_interop ******

	/**
	 * @brief Returns \c true if \b WGL_NV_DX_interop is supported, false otherwise.
	 */
	bool isWGL_NV_DX_interop;


	/**
	 * @brief BOOL wglDXCloseDeviceNV(HANDLE hDevice)
	 */
	PFNWGLDXCLOSEDEVICENVPROC wglDXCloseDeviceNV;

	/**
	 * @brief BOOL wglDXLockObjectsNV(HANDLE hDevice, GLint count, HANDLE *hObjects)
	 */
	PFNWGLDXLOCKOBJECTSNVPROC wglDXLockObjectsNV;

	/**
	 * @brief BOOL wglDXObjectAccessNV(HANDLE hObject, GLenum access)
	 */
	PFNWGLDXOBJECTACCESSNVPROC wglDXObjectAccessNV;

	/**
	 * @brief HANDLE wglDXOpenDeviceNV(void *dxDevice)
	 */
	PFNWGLDXOPENDEVICENVPROC wglDXOpenDeviceNV;

	/**
	 * @brief HANDLE wglDXRegisterObjectNV(HANDLE hDevice, void *dxObject, GLuint name, GLenum type, GLenum access)
	 */
	PFNWGLDXREGISTEROBJECTNVPROC wglDXRegisterObjectNV;

	/**
	 * @brief BOOL wglDXSetResourceShareHandleNV(void *dxObject, HANDLE shareHandle)
	 */
	PFNWGLDXSETRESOURCESHAREHANDLENVPROC wglDXSetResourceShareHandleNV;

	/**
	 * @brief BOOL wglDXUnlockObjectsNV(HANDLE hDevice, GLint count, HANDLE *hObjects)
	 */
	PFNWGLDXUNLOCKOBJECTSNVPROC wglDXUnlockObjectsNV;

	/**
	 * @brief BOOL wglDXUnregisterObjectNV(HANDLE hDevice, HANDLE hObject)
	 */
	PFNWGLDXUNREGISTEROBJECTNVPROC wglDXUnregisterObjectNV;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_copy_image ******

	/**
	 * @brief Returns \c true if \b WGL_NV_copy_image is supported, false otherwise.
	 */
	bool isWGL_NV_copy_image;


	/**
	 * @brief BOOL wglCopyImageSubDataNV(HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
	 */
	PFNWGLCOPYIMAGESUBDATANVPROC wglCopyImageSubDataNV;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_float_buffer ******

	/**
	 * @brief Returns \c true if \b WGL_NV_float_buffer is supported, false otherwise.
	 */
	bool isWGL_NV_float_buffer;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_gpu_affinity ******

	/**
	 * @brief Returns \c true if \b WGL_NV_gpu_affinity is supported, false otherwise.
	 */
	bool isWGL_NV_gpu_affinity;


	/**
	 * @brief HDC wglCreateAffinityDCNV(const HGPUNV *phGpuList)
	 */
	PFNWGLCREATEAFFINITYDCNVPROC wglCreateAffinityDCNV;

	/**
	 * @brief BOOL wglDeleteDCNV(HDC hdc)
	 */
	PFNWGLDELETEDCNVPROC wglDeleteDCNV;

	/**
	 * @brief BOOL wglEnumGpuDevicesNV(HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice)
	 */
	PFNWGLENUMGPUDEVICESNVPROC wglEnumGpuDevicesNV;

	/**
	 * @brief BOOL wglEnumGpusFromAffinityDCNV(HDC hAffinityDC, UINT iGpuIndex, HGPUNV *hGpu)
	 */
	PFNWGLENUMGPUSFROMAFFINITYDCNVPROC wglEnumGpusFromAffinityDCNV;

	/**
	 * @brief BOOL wglEnumGpusNV(UINT iGpuIndex, HGPUNV *phGpu)
	 */
	PFNWGLENUMGPUSNVPROC wglEnumGpusNV;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_multisample_coverage ******

	/**
	 * @brief Returns \c true if \b WGL_NV_multisample_coverage is supported, false otherwise.
	 */
	bool isWGL_NV_multisample_coverage;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_present_video ******

	/**
	 * @brief Returns \c true if \b WGL_NV_present_video is supported, false otherwise.
	 */
	bool isWGL_NV_present_video;


	/**
	 * @brief BOOL wglBindVideoDeviceNV(HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int *piAttribList)
	 */
	PFNWGLBINDVIDEODEVICENVPROC wglBindVideoDeviceNV;

	/**
	 * @brief int wglEnumerateVideoDevicesNV(HDC hDC, HVIDEOOUTPUTDEVICENV *phDeviceList)
	 */
	PFNWGLENUMERATEVIDEODEVICESNVPROC wglEnumerateVideoDevicesNV;

	/**
	 * @brief BOOL wglQueryCurrentContextNV(int iAttribute, int *piValue)
	 */
	PFNWGLQUERYCURRENTCONTEXTNVPROC wglQueryCurrentContextNV;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_render_depth_texture ******

	/**
	 * @brief Returns \c true if \b WGL_NV_render_depth_texture is supported, false otherwise.
	 */
	bool isWGL_NV_render_depth_texture;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_render_texture_rectangle ******

	/**
	 * @brief Returns \c true if \b WGL_NV_render_texture_rectangle is supported, false otherwise.
	 */
	bool isWGL_NV_render_texture_rectangle;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_swap_group ******

	/**
	 * @brief Returns \c true if \b WGL_NV_swap_group is supported, false otherwise.
	 */
	bool isWGL_NV_swap_group;


	/**
	 * @brief BOOL wglBindSwapBarrierNV(GLuint group, GLuint barrier)
	 */
	PFNWGLBINDSWAPBARRIERNVPROC wglBindSwapBarrierNV;

	/**
	 * @brief BOOL wglJoinSwapGroupNV(HDC hDC, GLuint group)
	 */
	PFNWGLJOINSWAPGROUPNVPROC wglJoinSwapGroupNV;

	/**
	 * @brief BOOL wglQueryFrameCountNV(HDC hDC, GLuint *count)
	 */
	PFNWGLQUERYFRAMECOUNTNVPROC wglQueryFrameCountNV;

	/**
	 * @brief BOOL wglQueryMaxSwapGroupsNV(HDC hDC, GLuint *maxGroups, GLuint *maxBarriers)
	 */
	PFNWGLQUERYMAXSWAPGROUPSNVPROC wglQueryMaxSwapGroupsNV;

	/**
	 * @brief BOOL wglQuerySwapGroupNV(HDC hDC, GLuint *group, GLuint *barrier)
	 */
	PFNWGLQUERYSWAPGROUPNVPROC wglQuerySwapGroupNV;

	/**
	 * @brief BOOL wglResetFrameCountNV(HDC hDC)
	 */
	PFNWGLRESETFRAMECOUNTNVPROC wglResetFrameCountNV;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_vertex_array_range ******

	/**
	 * @brief Returns \c true if \b WGL_NV_vertex_array_range is supported, false otherwise.
	 */
	bool isWGL_NV_vertex_array_range;


	/**
	 * @brief void* wglAllocateMemoryNV(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority)
	 */
	PFNWGLALLOCATEMEMORYNVPROC wglAllocateMemoryNV;

	/**
	 * @brief void wglFreeMemoryNV(void *pointer)
	 */
	PFNWGLFREEMEMORYNVPROC wglFreeMemoryNV;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_video_capture ******

	/**
	 * @brief Returns \c true if \b WGL_NV_video_capture is supported, false otherwise.
	 */
	bool isWGL_NV_video_capture;


	/**
	 * @brief BOOL wglBindVideoCaptureDeviceNV(UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice)
	 */
	PFNWGLBINDVIDEOCAPTUREDEVICENVPROC wglBindVideoCaptureDeviceNV;

	/**
	 * @brief UINT wglEnumerateVideoCaptureDevicesNV(HDC hDc, HVIDEOINPUTDEVICENV *phDeviceList)
	 */
	PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC wglEnumerateVideoCaptureDevicesNV;

	/**
	 * @brief BOOL wglLockVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice)
	 */
	PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC wglLockVideoCaptureDeviceNV;

	/**
	 * @brief BOOL wglQueryVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int *piValue)
	 */
	PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC wglQueryVideoCaptureDeviceNV;

	/**
	 * @brief BOOL wglReleaseVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice)
	 */
	PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC wglReleaseVideoCaptureDeviceNV;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_video_out ******

	/**
	 * @brief Returns \c true if \b WGL_NV_video_out is supported, false otherwise.
	 */
	bool isWGL_NV_video_out;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_NV_video_output ******

	/**
	 * @brief Returns \c true if \b WGL_NV_video_output is supported, false otherwise.
	 */
	bool isWGL_NV_video_output;


	/**
	 * @brief BOOL wglBindVideoImageNV(HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer)
	 */
	PFNWGLBINDVIDEOIMAGENVPROC wglBindVideoImageNV;

	/**
	 * @brief BOOL wglGetVideoDeviceNV(HDC hDC, int numDevices, HPVIDEODEV *hVideoDevice)
	 */
	PFNWGLGETVIDEODEVICENVPROC wglGetVideoDeviceNV;

	/**
	 * @brief BOOL wglGetVideoInfoNV(HPVIDEODEV hpVideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo)
	 */
	PFNWGLGETVIDEOINFONVPROC wglGetVideoInfoNV;

	/**
	 * @brief BOOL wglReleaseVideoDeviceNV(HPVIDEODEV hVideoDevice)
	 */
	PFNWGLRELEASEVIDEODEVICENVPROC wglReleaseVideoDeviceNV;

	/**
	 * @brief BOOL wglReleaseVideoImageNV(HPBUFFERARB hPbuffer, int iVideoBuffer)
	 */
	PFNWGLRELEASEVIDEOIMAGENVPROC wglReleaseVideoImageNV;

	/**
	 * @brief BOOL wglSendPbufferToVideoNV(HPBUFFERARB hPbuffer, int iBufferType, unsigned long *pulCounterPbuffer, BOOL bBlock)
	 */
	PFNWGLSENDPBUFFERTOVIDEONVPROC wglSendPbufferToVideoNV;
#endif //WIN32



#ifdef WIN32
	// ****** WGL_OML_sync_control ******

	/**
	 * @brief Returns \c true if \b WGL_OML_sync_control is supported, false otherwise.
	 */
	bool isWGL_OML_sync_control;


	/**
	 * @brief BOOL wglGetMscRateOML(HDC hdc, INT32 *numerator, INT32 *denominator)
	 */
	PFNWGLGETMSCRATEOMLPROC wglGetMscRateOML;

	/**
	 * @brief BOOL wglGetSyncValuesOML(HDC hdc, INT64 *ust, INT64 *msc, INT64 *sbc)
	 */
	PFNWGLGETSYNCVALUESOMLPROC wglGetSyncValuesOML;

	/**
	 * @brief INT64 wglSwapBuffersMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder)
	 */
	PFNWGLSWAPBUFFERSMSCOMLPROC wglSwapBuffersMscOML;

	/**
	 * @brief INT64 wglSwapLayerBuffersMscOML(HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder)
	 */
	PFNWGLSWAPLAYERBUFFERSMSCOMLPROC wglSwapLayerBuffersMscOML;

	/**
	 * @brief BOOL wglWaitForMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 *ust, INT64 *msc, INT64 *sbc)
	 */
	PFNWGLWAITFORMSCOMLPROC wglWaitForMscOML;

	/**
	 * @brief BOOL wglWaitForSbcOML(HDC hdc, INT64 target_sbc, INT64 *ust, INT64 *msc, INT64 *sbc)
	 */
	PFNWGLWAITFORSBCOMLPROC wglWaitForSbcOML;
#endif //WIN32



private:
	/**
	 * @brief Smart extension detection (SED) state.
	 */
	bool	m_isSEDEnable;



	/**
	 * @name Data for statistics
	 */
	//@{

	/**
	 * @brief Count the number of extension initialized at run-time.
	 */
	int			m_initializedExtensionCount;

	/**
	 * @brief Count the number of procedure pointer initialized ar run-time.
	 */
	int			m_initializedProcCount;

	/**
	 * @brief Vector with all extensions initialized at run-time.
	 */
	std::vector< std::string >	m_initializedExtensions;

	
	/**
	 * @brief Count the number of extension supported by gle.
	 */
	static const int			m_supportedExtensionCount;
	
	/**
	 * @brief Count the number of procedure pointer supported by gle.
	 */
	static const int			m_supportedProcCount;
	//@}

}; // struct OpenGLExtensionsGen



} //namespace gle

#endif // #ifndef _GLE_OPENGLEXTENSIONSGEN_HPP
