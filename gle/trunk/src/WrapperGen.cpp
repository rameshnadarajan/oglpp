// This file was generated at Mon, 19 Dec 2011 15:15:53 +0000 with gle, please do not modify.

// GLE - Copyright (C) 2004, 2005, 2007, 2008, 2009, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

// This file was generated using :
// /* glext.h last updated $Date: 2011-12-19 02:48:12 -0800 (Mon, 19 Dec 2011) $ */
// #define GL_GLEXT_VERSION 74
// /* glxext.h last updated 2010/08/06 */
// #define GLX_GLXEXT_VERSION 32
// /* wglext.h last updated 2011/04/13 */
// #define WGL_WGLEXT_VERSION 23

#include "gle/WrapperGen.hpp"

#include "gle/OpenGLExtensionsGen.hpp"
#include "gle/Wrapper.hpp"



#ifdef POSIX
// ********* GLX_3DFX_multisample *********
bool isGLX_3DFX_multisample()
{
	const bool isSupported = gleGetCurrent()->isGLX_3DFX_multisample;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_AMD_gpu_association *********
bool isGLX_AMD_gpu_association()
{
	const bool isSupported = gleGetCurrent()->isGLX_AMD_gpu_association;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_ARB_create_context *********
bool isGLX_ARB_create_context()
{
	const bool isSupported = gleGetCurrent()->isGLX_ARB_create_context;

	return isSupported;
}


GLXContext glXCreateContextAttribsARB(Display *dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int *attrib_list)
{
	return gleGetCurrent()->glXCreateContextAttribsARB( dpy, config, share_context, direct, attrib_list );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_ARB_create_context_profile *********
bool isGLX_ARB_create_context_profile()
{
	const bool isSupported = gleGetCurrent()->isGLX_ARB_create_context_profile;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_ARB_create_context_robustness *********
bool isGLX_ARB_create_context_robustness()
{
	const bool isSupported = gleGetCurrent()->isGLX_ARB_create_context_robustness;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_ARB_fbconfig_float *********
bool isGLX_ARB_fbconfig_float()
{
	const bool isSupported = gleGetCurrent()->isGLX_ARB_fbconfig_float;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_ARB_framebuffer_sRGB *********
bool isGLX_ARB_framebuffer_sRGB()
{
	const bool isSupported = gleGetCurrent()->isGLX_ARB_framebuffer_sRGB;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_ARB_get_proc_address *********
bool isGLX_ARB_get_proc_address()
{
	const bool isSupported = gleGetCurrent()->isGLX_ARB_get_proc_address;

	return isSupported;
}


__GLXextFuncPtr glXGetProcAddressARB(const GLubyte *procName)
{
	return gleGetCurrent()->glXGetProcAddressARB( procName );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_ARB_multisample *********
bool isGLX_ARB_multisample()
{
	const bool isSupported = gleGetCurrent()->isGLX_ARB_multisample;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_ARB_vertex_buffer_object *********
bool isGLX_ARB_vertex_buffer_object()
{
	const bool isSupported = gleGetCurrent()->isGLX_ARB_vertex_buffer_object;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_EXT_create_context_es2_profile *********
bool isGLX_EXT_create_context_es2_profile()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_create_context_es2_profile;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_EXT_fbconfig_packed_float *********
bool isGLX_EXT_fbconfig_packed_float()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_fbconfig_packed_float;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_EXT_framebuffer_sRGB *********
bool isGLX_EXT_framebuffer_sRGB()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_framebuffer_sRGB;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_EXT_import_context *********
bool isGLX_EXT_import_context()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_import_context;

	return isSupported;
}


void glXFreeContextEXT(Display *dpy, GLXContext context)
{
	gleGetCurrent()->glXFreeContextEXT( dpy, context );
}

GLXContextID glXGetContextIDEXT(const GLXContext context)
{
	return gleGetCurrent()->glXGetContextIDEXT( context );
}

Display * glXGetCurrentDisplayEXT(void)
{
	return gleGetCurrent()->glXGetCurrentDisplayEXT(  );
}

GLXContext glXImportContextEXT(Display *dpy, GLXContextID contextID)
{
	return gleGetCurrent()->glXImportContextEXT( dpy, contextID );
}

int glXQueryContextInfoEXT(Display *dpy, GLXContext context, int attribute, int *value)
{
	return gleGetCurrent()->glXQueryContextInfoEXT( dpy, context, attribute, value );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_EXT_swap_control *********
bool isGLX_EXT_swap_control()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_swap_control;

	return isSupported;
}


int glXSwapIntervalEXT(Display *dpy, GLXDrawable drawable, int interval)
{
	return gleGetCurrent()->glXSwapIntervalEXT( dpy, drawable, interval );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_EXT_texture_from_pixmap *********
bool isGLX_EXT_texture_from_pixmap()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_texture_from_pixmap;

	return isSupported;
}


void glXBindTexImageEXT(Display *dpy, GLXDrawable drawable, int buffer, const int *attrib_list)
{
	gleGetCurrent()->glXBindTexImageEXT( dpy, drawable, buffer, attrib_list );
}

void glXReleaseTexImageEXT(Display *dpy, GLXDrawable drawable, int buffer)
{
	gleGetCurrent()->glXReleaseTexImageEXT( dpy, drawable, buffer );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_EXT_visual_info *********
bool isGLX_EXT_visual_info()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_visual_info;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_EXT_visual_rating *********
bool isGLX_EXT_visual_rating()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_visual_rating;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_INTEL_swap_event *********
bool isGLX_INTEL_swap_event()
{
	const bool isSupported = gleGetCurrent()->isGLX_INTEL_swap_event;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_MESA_agp_offset *********
bool isGLX_MESA_agp_offset()
{
	const bool isSupported = gleGetCurrent()->isGLX_MESA_agp_offset;

	return isSupported;
}


unsigned int glXGetAGPOffsetMESA(const void *pointer)
{
	return gleGetCurrent()->glXGetAGPOffsetMESA( pointer );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_MESA_copy_sub_buffer *********
bool isGLX_MESA_copy_sub_buffer()
{
	const bool isSupported = gleGetCurrent()->isGLX_MESA_copy_sub_buffer;

	return isSupported;
}


void glXCopySubBufferMESA(Display *dpy, GLXDrawable drawable, int x, int y, int width, int height)
{
	gleGetCurrent()->glXCopySubBufferMESA( dpy, drawable, x, y, width, height );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_MESA_pixmap_colormap *********
bool isGLX_MESA_pixmap_colormap()
{
	const bool isSupported = gleGetCurrent()->isGLX_MESA_pixmap_colormap;

	return isSupported;
}


GLXPixmap glXCreateGLXPixmapMESA(Display *dpy, XVisualInfo *visual, Pixmap pixmap, Colormap cmap)
{
	return gleGetCurrent()->glXCreateGLXPixmapMESA( dpy, visual, pixmap, cmap );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_MESA_release_buffers *********
bool isGLX_MESA_release_buffers()
{
	const bool isSupported = gleGetCurrent()->isGLX_MESA_release_buffers;

	return isSupported;
}


Bool glXReleaseBuffersMESA(Display *dpy, GLXDrawable drawable)
{
	return gleGetCurrent()->glXReleaseBuffersMESA( dpy, drawable );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_MESA_set_3dfx_mode *********
bool isGLX_MESA_set_3dfx_mode()
{
	const bool isSupported = gleGetCurrent()->isGLX_MESA_set_3dfx_mode;

	return isSupported;
}


Bool glXSet3DfxModeMESA(int mode)
{
	return gleGetCurrent()->glXSet3DfxModeMESA( mode );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_NV_copy_image *********
bool isGLX_NV_copy_image()
{
	const bool isSupported = gleGetCurrent()->isGLX_NV_copy_image;

	return isSupported;
}


void glXCopyImageSubDataNV(Display *dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
	gleGetCurrent()->glXCopyImageSubDataNV( dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_NV_float_buffer *********
bool isGLX_NV_float_buffer()
{
	const bool isSupported = gleGetCurrent()->isGLX_NV_float_buffer;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_NV_multisample_coverage *********
bool isGLX_NV_multisample_coverage()
{
	const bool isSupported = gleGetCurrent()->isGLX_NV_multisample_coverage;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_NV_present_video *********
bool isGLX_NV_present_video()
{
	const bool isSupported = gleGetCurrent()->isGLX_NV_present_video;

	return isSupported;
}


int glXBindVideoDeviceNV(Display *dpy, unsigned int video_slot, unsigned int video_device, const int *attrib_list)
{
	return gleGetCurrent()->glXBindVideoDeviceNV( dpy, video_slot, video_device, attrib_list );
}

unsigned int * glXEnumerateVideoDevicesNV(Display *dpy, int screen, int *nelements)
{
	return gleGetCurrent()->glXEnumerateVideoDevicesNV( dpy, screen, nelements );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_NV_swap_group *********
bool isGLX_NV_swap_group()
{
	const bool isSupported = gleGetCurrent()->isGLX_NV_swap_group;

	return isSupported;
}


Bool glXBindSwapBarrierNV(Display *dpy, GLuint group, GLuint barrier)
{
	return gleGetCurrent()->glXBindSwapBarrierNV( dpy, group, barrier );
}

Bool glXJoinSwapGroupNV(Display *dpy, GLXDrawable drawable, GLuint group)
{
	return gleGetCurrent()->glXJoinSwapGroupNV( dpy, drawable, group );
}

Bool glXQueryFrameCountNV(Display *dpy, int screen, GLuint *count)
{
	return gleGetCurrent()->glXQueryFrameCountNV( dpy, screen, count );
}

Bool glXQueryMaxSwapGroupsNV(Display *dpy, int screen, GLuint *maxGroups, GLuint *maxBarriers)
{
	return gleGetCurrent()->glXQueryMaxSwapGroupsNV( dpy, screen, maxGroups, maxBarriers );
}

Bool glXQuerySwapGroupNV(Display *dpy, GLXDrawable drawable, GLuint *group, GLuint *barrier)
{
	return gleGetCurrent()->glXQuerySwapGroupNV( dpy, drawable, group, barrier );
}

Bool glXResetFrameCountNV(Display *dpy, int screen)
{
	return gleGetCurrent()->glXResetFrameCountNV( dpy, screen );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_NV_video_capture *********
bool isGLX_NV_video_capture()
{
	const bool isSupported = gleGetCurrent()->isGLX_NV_video_capture;

	return isSupported;
}


int glXBindVideoCaptureDeviceNV(Display *dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device)
{
	return gleGetCurrent()->glXBindVideoCaptureDeviceNV( dpy, video_capture_slot, device );
}

GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV(Display *dpy, int screen, int *nelements)
{
	return gleGetCurrent()->glXEnumerateVideoCaptureDevicesNV( dpy, screen, nelements );
}

void glXLockVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device)
{
	gleGetCurrent()->glXLockVideoCaptureDeviceNV( dpy, device );
}

int glXQueryVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device, int attribute, int *value)
{
	return gleGetCurrent()->glXQueryVideoCaptureDeviceNV( dpy, device, attribute, value );
}

void glXReleaseVideoCaptureDeviceNV(Display *dpy, GLXVideoCaptureDeviceNV device)
{
	gleGetCurrent()->glXReleaseVideoCaptureDeviceNV( dpy, device );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_NV_video_out *********
bool isGLX_NV_video_out()
{
	const bool isSupported = gleGetCurrent()->isGLX_NV_video_out;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_NV_video_output *********
bool isGLX_NV_video_output()
{
	const bool isSupported = gleGetCurrent()->isGLX_NV_video_output;

	return isSupported;
}


int glXBindVideoImageNV(Display *dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer)
{
	return gleGetCurrent()->glXBindVideoImageNV( dpy, VideoDevice, pbuf, iVideoBuffer );
}

int glXGetVideoDeviceNV(Display *dpy, int screen, int numVideoDevices, GLXVideoDeviceNV *pVideoDevice)
{
	return gleGetCurrent()->glXGetVideoDeviceNV( dpy, screen, numVideoDevices, pVideoDevice );
}

int glXGetVideoInfoNV(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo)
{
	return gleGetCurrent()->glXGetVideoInfoNV( dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo );
}

int glXReleaseVideoDeviceNV(Display *dpy, int screen, GLXVideoDeviceNV VideoDevice)
{
	return gleGetCurrent()->glXReleaseVideoDeviceNV( dpy, screen, VideoDevice );
}

int glXReleaseVideoImageNV(Display *dpy, GLXPbuffer pbuf)
{
	return gleGetCurrent()->glXReleaseVideoImageNV( dpy, pbuf );
}

int glXSendPbufferToVideoNV(Display *dpy, GLXPbuffer pbuf, int iBufferType, unsigned long *pulCounterPbuffer, GLboolean bBlock)
{
	return gleGetCurrent()->glXSendPbufferToVideoNV( dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_OML_swap_method *********
bool isGLX_OML_swap_method()
{
	const bool isSupported = gleGetCurrent()->isGLX_OML_swap_method;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_OML_sync_control *********
bool isGLX_OML_sync_control()
{
	const bool isSupported = gleGetCurrent()->isGLX_OML_sync_control;

	return isSupported;
}


Bool glXGetMscRateOML(Display *dpy, GLXDrawable drawable, int32_t *numerator, int32_t *denominator)
{
	return gleGetCurrent()->glXGetMscRateOML( dpy, drawable, numerator, denominator );
}

Bool glXGetSyncValuesOML(Display *dpy, GLXDrawable drawable, int64_t *ust, int64_t *msc, int64_t *sbc)
{
	return gleGetCurrent()->glXGetSyncValuesOML( dpy, drawable, ust, msc, sbc );
}

int64_t glXSwapBuffersMscOML(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder)
{
	return gleGetCurrent()->glXSwapBuffersMscOML( dpy, drawable, target_msc, divisor, remainder );
}

Bool glXWaitForMscOML(Display *dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t *ust, int64_t *msc, int64_t *sbc)
{
	return gleGetCurrent()->glXWaitForMscOML( dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc );
}

Bool glXWaitForSbcOML(Display *dpy, GLXDrawable drawable, int64_t target_sbc, int64_t *ust, int64_t *msc, int64_t *sbc)
{
	return gleGetCurrent()->glXWaitForSbcOML( dpy, drawable, target_sbc, ust, msc, sbc );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIS_blended_overlay *********
bool isGLX_SGIS_blended_overlay()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIS_blended_overlay;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIS_multisample *********
bool isGLX_SGIS_multisample()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIS_multisample;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIS_shared_multisample *********
bool isGLX_SGIS_shared_multisample()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIS_shared_multisample;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIX_dmbuffer *********
bool isGLX_SGIX_dmbuffer()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIX_dmbuffer;

	return isSupported;
}


Bool glXAssociateDMPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuffer, DMparams *params, DMbuffer dmbuffer)
{
	return gleGetCurrent()->glXAssociateDMPbufferSGIX( dpy, pbuffer, params, dmbuffer );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIX_fbconfig *********
bool isGLX_SGIX_fbconfig()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIX_fbconfig;

	return isSupported;
}


GLXFBConfigSGIX * glXChooseFBConfigSGIX(Display *dpy, int screen, int *attrib_list, int *nelements)
{
	return gleGetCurrent()->glXChooseFBConfigSGIX( dpy, screen, attrib_list, nelements );
}

GLXContext glXCreateContextWithConfigSGIX(Display *dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct)
{
	return gleGetCurrent()->glXCreateContextWithConfigSGIX( dpy, config, render_type, share_list, direct );
}

GLXPixmap glXCreateGLXPixmapWithConfigSGIX(Display *dpy, GLXFBConfigSGIX config, Pixmap pixmap)
{
	return gleGetCurrent()->glXCreateGLXPixmapWithConfigSGIX( dpy, config, pixmap );
}

int glXGetFBConfigAttribSGIX(Display *dpy, GLXFBConfigSGIX config, int attribute, int *value)
{
	return gleGetCurrent()->glXGetFBConfigAttribSGIX( dpy, config, attribute, value );
}

GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX(Display *dpy, XVisualInfo *vis)
{
	return gleGetCurrent()->glXGetFBConfigFromVisualSGIX( dpy, vis );
}

XVisualInfo * glXGetVisualFromFBConfigSGIX(Display *dpy, GLXFBConfigSGIX config)
{
	return gleGetCurrent()->glXGetVisualFromFBConfigSGIX( dpy, config );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIX_hyperpipe *********
bool isGLX_SGIX_hyperpipe()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIX_hyperpipe;

	return isSupported;
}


int glXBindHyperpipeSGIX(Display *dpy, int hpId)
{
	return gleGetCurrent()->glXBindHyperpipeSGIX( dpy, hpId );
}

int glXDestroyHyperpipeConfigSGIX(Display *dpy, int hpId)
{
	return gleGetCurrent()->glXDestroyHyperpipeConfigSGIX( dpy, hpId );
}

int glXHyperpipeAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *attribList)
{
	return gleGetCurrent()->glXHyperpipeAttribSGIX( dpy, timeSlice, attrib, size, attribList );
}

int glXHyperpipeConfigSGIX(Display *dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX *cfg, int *hpId)
{
	return gleGetCurrent()->glXHyperpipeConfigSGIX( dpy, networkId, npipes, cfg, hpId );
}

int glXQueryHyperpipeAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *returnAttribList)
{
	return gleGetCurrent()->glXQueryHyperpipeAttribSGIX( dpy, timeSlice, attrib, size, returnAttribList );
}

int glXQueryHyperpipeBestAttribSGIX(Display *dpy, int timeSlice, int attrib, int size, void *attribList, void *returnAttribList)
{
	return gleGetCurrent()->glXQueryHyperpipeBestAttribSGIX( dpy, timeSlice, attrib, size, attribList, returnAttribList );
}

GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX(Display *dpy, int hpId, int *npipes)
{
	return gleGetCurrent()->glXQueryHyperpipeConfigSGIX( dpy, hpId, npipes );
}

GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX(Display *dpy, int *npipes)
{
	return gleGetCurrent()->glXQueryHyperpipeNetworkSGIX( dpy, npipes );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIX_pbuffer *********
bool isGLX_SGIX_pbuffer()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIX_pbuffer;

	return isSupported;
}


GLXPbufferSGIX glXCreateGLXPbufferSGIX(Display *dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int *attrib_list)
{
	return gleGetCurrent()->glXCreateGLXPbufferSGIX( dpy, config, width, height, attrib_list );
}

void glXDestroyGLXPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuf)
{
	gleGetCurrent()->glXDestroyGLXPbufferSGIX( dpy, pbuf );
}

void glXGetSelectedEventSGIX(Display *dpy, GLXDrawable drawable, unsigned long *mask)
{
	gleGetCurrent()->glXGetSelectedEventSGIX( dpy, drawable, mask );
}

int glXQueryGLXPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int *value)
{
	return gleGetCurrent()->glXQueryGLXPbufferSGIX( dpy, pbuf, attribute, value );
}

void glXSelectEventSGIX(Display *dpy, GLXDrawable drawable, unsigned long mask)
{
	gleGetCurrent()->glXSelectEventSGIX( dpy, drawable, mask );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIX_swap_barrier *********
bool isGLX_SGIX_swap_barrier()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIX_swap_barrier;

	return isSupported;
}


void glXBindSwapBarrierSGIX(Display *dpy, GLXDrawable drawable, int barrier)
{
	gleGetCurrent()->glXBindSwapBarrierSGIX( dpy, drawable, barrier );
}

Bool glXQueryMaxSwapBarriersSGIX(Display *dpy, int screen, int *max)
{
	return gleGetCurrent()->glXQueryMaxSwapBarriersSGIX( dpy, screen, max );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIX_swap_group *********
bool isGLX_SGIX_swap_group()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIX_swap_group;

	return isSupported;
}


void glXJoinSwapGroupSGIX(Display *dpy, GLXDrawable drawable, GLXDrawable member)
{
	gleGetCurrent()->glXJoinSwapGroupSGIX( dpy, drawable, member );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIX_video_resize *********
bool isGLX_SGIX_video_resize()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIX_video_resize;

	return isSupported;
}


int glXBindChannelToWindowSGIX(Display *display, int screen, int channel, Window window)
{
	return gleGetCurrent()->glXBindChannelToWindowSGIX( display, screen, channel, window );
}

int glXChannelRectSGIX(Display *display, int screen, int channel, int x, int y, int w, int h)
{
	return gleGetCurrent()->glXChannelRectSGIX( display, screen, channel, x, y, w, h );
}

int glXChannelRectSyncSGIX(Display *display, int screen, int channel, GLenum synctype)
{
	return gleGetCurrent()->glXChannelRectSyncSGIX( display, screen, channel, synctype );
}

int glXQueryChannelDeltasSGIX(Display *display, int screen, int channel, int *x, int *y, int *w, int *h)
{
	return gleGetCurrent()->glXQueryChannelDeltasSGIX( display, screen, channel, x, y, w, h );
}

int glXQueryChannelRectSGIX(Display *display, int screen, int channel, int *dx, int *dy, int *dw, int *dh)
{
	return gleGetCurrent()->glXQueryChannelRectSGIX( display, screen, channel, dx, dy, dw, dh );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIX_video_source *********
bool isGLX_SGIX_video_source()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIX_video_source;

	return isSupported;
}


GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(Display *display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode)
{
	return gleGetCurrent()->glXCreateGLXVideoSourceSGIX( display, screen, server, path, nodeClass, drainNode );
}

void glXDestroyGLXVideoSourceSGIX(Display *dpy, GLXVideoSourceSGIX glxvideosource)
{
	gleGetCurrent()->glXDestroyGLXVideoSourceSGIX( dpy, glxvideosource );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGIX_visual_select_group *********
bool isGLX_SGIX_visual_select_group()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGIX_visual_select_group;

	return isSupported;
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGI_cushion *********
bool isGLX_SGI_cushion()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGI_cushion;

	return isSupported;
}


void glXCushionSGI(Display *dpy, Window window, float cushion)
{
	gleGetCurrent()->glXCushionSGI( dpy, window, cushion );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGI_make_current_read *********
bool isGLX_SGI_make_current_read()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGI_make_current_read;

	return isSupported;
}


GLXDrawable glXGetCurrentReadDrawableSGI(void)
{
	return gleGetCurrent()->glXGetCurrentReadDrawableSGI(  );
}

Bool glXMakeCurrentReadSGI(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
{
	return gleGetCurrent()->glXMakeCurrentReadSGI( dpy, draw, read, ctx );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGI_swap_control *********
bool isGLX_SGI_swap_control()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGI_swap_control;

	return isSupported;
}


int glXSwapIntervalSGI(int interval)
{
	return gleGetCurrent()->glXSwapIntervalSGI( interval );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SGI_video_sync *********
bool isGLX_SGI_video_sync()
{
	const bool isSupported = gleGetCurrent()->isGLX_SGI_video_sync;

	return isSupported;
}


int glXGetVideoSyncSGI(unsigned int *count)
{
	return gleGetCurrent()->glXGetVideoSyncSGI( count );
}

int glXWaitVideoSyncSGI(int divisor, int remainder, unsigned int *count)
{
	return gleGetCurrent()->glXWaitVideoSyncSGI( divisor, remainder, count );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_SUN_get_transparent_index *********
bool isGLX_SUN_get_transparent_index()
{
	const bool isSupported = gleGetCurrent()->isGLX_SUN_get_transparent_index;

	return isSupported;
}


Status glXGetTransparentIndexSUN(Display *dpy, Window overlay, Window underlay, long *pTransparentIndex)
{
	return gleGetCurrent()->glXGetTransparentIndexSUN( dpy, overlay, underlay, pTransparentIndex );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_VERSION_1_3 *********
bool isGLX_VERSION_1_3()
{
	const bool isSupported = gleGetCurrent()->isGLX_VERSION_1_3;

	return isSupported;
}


GLXFBConfig * glXChooseFBConfig(Display *dpy, int screen, const int *attrib_list, int *nelements)
{
	return gleGetCurrent()->glXChooseFBConfig( dpy, screen, attrib_list, nelements );
}

GLXContext glXCreateNewContext(Display *dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct)
{
	return gleGetCurrent()->glXCreateNewContext( dpy, config, render_type, share_list, direct );
}

GLXPbuffer glXCreatePbuffer(Display *dpy, GLXFBConfig config, const int *attrib_list)
{
	return gleGetCurrent()->glXCreatePbuffer( dpy, config, attrib_list );
}

GLXPixmap glXCreatePixmap(Display *dpy, GLXFBConfig config, Pixmap pixmap, const int *attrib_list)
{
	return gleGetCurrent()->glXCreatePixmap( dpy, config, pixmap, attrib_list );
}

GLXWindow glXCreateWindow(Display *dpy, GLXFBConfig config, Window win, const int *attrib_list)
{
	return gleGetCurrent()->glXCreateWindow( dpy, config, win, attrib_list );
}

void glXDestroyPbuffer(Display *dpy, GLXPbuffer pbuf)
{
	gleGetCurrent()->glXDestroyPbuffer( dpy, pbuf );
}

void glXDestroyPixmap(Display *dpy, GLXPixmap pixmap)
{
	gleGetCurrent()->glXDestroyPixmap( dpy, pixmap );
}

void glXDestroyWindow(Display *dpy, GLXWindow win)
{
	gleGetCurrent()->glXDestroyWindow( dpy, win );
}

Display * glXGetCurrentDisplay(void)
{
	return gleGetCurrent()->glXGetCurrentDisplay(  );
}

GLXDrawable glXGetCurrentReadDrawable(void)
{
	return gleGetCurrent()->glXGetCurrentReadDrawable(  );
}

int glXGetFBConfigAttrib(Display *dpy, GLXFBConfig config, int attribute, int *value)
{
	return gleGetCurrent()->glXGetFBConfigAttrib( dpy, config, attribute, value );
}

GLXFBConfig * glXGetFBConfigs(Display *dpy, int screen, int *nelements)
{
	return gleGetCurrent()->glXGetFBConfigs( dpy, screen, nelements );
}

void glXGetSelectedEvent(Display *dpy, GLXDrawable draw, unsigned long *event_mask)
{
	gleGetCurrent()->glXGetSelectedEvent( dpy, draw, event_mask );
}

XVisualInfo * glXGetVisualFromFBConfig(Display *dpy, GLXFBConfig config)
{
	return gleGetCurrent()->glXGetVisualFromFBConfig( dpy, config );
}

Bool glXMakeContextCurrent(Display *dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
{
	return gleGetCurrent()->glXMakeContextCurrent( dpy, draw, read, ctx );
}

int glXQueryContext(Display *dpy, GLXContext ctx, int attribute, int *value)
{
	return gleGetCurrent()->glXQueryContext( dpy, ctx, attribute, value );
}

void glXQueryDrawable(Display *dpy, GLXDrawable draw, int attribute, unsigned int *value)
{
	gleGetCurrent()->glXQueryDrawable( dpy, draw, attribute, value );
}

void glXSelectEvent(Display *dpy, GLXDrawable draw, unsigned long event_mask)
{
	gleGetCurrent()->glXSelectEvent( dpy, draw, event_mask );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_VERSION_1_4 *********
bool isGLX_VERSION_1_4()
{
	const bool isSupported = gleGetCurrent()->isGLX_VERSION_1_4;

	return isSupported;
}


__GLXextFuncPtr glXGetProcAddress(const GLubyte *procName)
{
	return gleGetCurrent()->glXGetProcAddress( procName );
}
#endif //POSIX




// ********* GL_3DFX_multisample *********
bool isGL_3DFX_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_3DFX_multisample;

	return isSupported;
}




// ********* GL_3DFX_tbuffer *********
bool isGL_3DFX_tbuffer()
{
	const bool isSupported = gleGetCurrent()->isGL_3DFX_tbuffer;

	return isSupported;
}


void glTbufferMask3DFX(GLuint mask)
{
	gleGetCurrent()->glTbufferMask3DFX( mask );
}




// ********* GL_3DFX_texture_compression_FXT1 *********
bool isGL_3DFX_texture_compression_FXT1()
{
	const bool isSupported = gleGetCurrent()->isGL_3DFX_texture_compression_FXT1;

	return isSupported;
}




// ********* GL_AMD_blend_minmax_factor *********
bool isGL_AMD_blend_minmax_factor()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_blend_minmax_factor;

	return isSupported;
}




// ********* GL_AMD_conservative_depth *********
bool isGL_AMD_conservative_depth()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_conservative_depth;

	return isSupported;
}




// ********* GL_AMD_debug_output *********
bool isGL_AMD_debug_output()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_debug_output;

	return isSupported;
}


void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, GLvoid *userParam)
{
	gleGetCurrent()->glDebugMessageCallbackAMD( callback, userParam );
}

void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled)
{
	gleGetCurrent()->glDebugMessageEnableAMD( category, severity, count, ids, enabled );
}

void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar *buf)
{
	gleGetCurrent()->glDebugMessageInsertAMD( category, severity, id, length, buf );
}

GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum *categories, GLuint *severities, GLuint *ids, GLsizei *lengths, GLchar *message)
{
	return gleGetCurrent()->glGetDebugMessageLogAMD( count, bufsize, categories, severities, ids, lengths, message );
}




// ********* GL_AMD_depth_clamp_separate *********
bool isGL_AMD_depth_clamp_separate()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_depth_clamp_separate;

	return isSupported;
}




// ********* GL_AMD_draw_buffers_blend *********
bool isGL_AMD_draw_buffers_blend()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_draw_buffers_blend;

	return isSupported;
}


void glBlendEquationIndexedAMD(GLuint buf, GLenum mode)
{
	gleGetCurrent()->glBlendEquationIndexedAMD( buf, mode );
}

void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	gleGetCurrent()->glBlendEquationSeparateIndexedAMD( buf, modeRGB, modeAlpha );
}

void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst)
{
	gleGetCurrent()->glBlendFuncIndexedAMD( buf, src, dst );
}

void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	gleGetCurrent()->glBlendFuncSeparateIndexedAMD( buf, srcRGB, dstRGB, srcAlpha, dstAlpha );
}




// ********* GL_AMD_multi_draw_indirect *********
bool isGL_AMD_multi_draw_indirect()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_multi_draw_indirect;

	return isSupported;
}


void glMultiDrawArraysIndirectAMD(GLenum mode, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
	gleGetCurrent()->glMultiDrawArraysIndirectAMD( mode, indirect, primcount, stride );
}

void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const GLvoid *indirect, GLsizei primcount, GLsizei stride)
{
	gleGetCurrent()->glMultiDrawElementsIndirectAMD( mode, type, indirect, primcount, stride );
}




// ********* GL_AMD_name_gen_delete *********
bool isGL_AMD_name_gen_delete()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_name_gen_delete;

	return isSupported;
}


void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint *names)
{
	gleGetCurrent()->glDeleteNamesAMD( identifier, num, names );
}

void glGenNamesAMD(GLenum identifier, GLuint num, GLuint *names)
{
	gleGetCurrent()->glGenNamesAMD( identifier, num, names );
}

GLboolean glIsNameAMD(GLenum identifier, GLuint name)
{
	return gleGetCurrent()->glIsNameAMD( identifier, name );
}




// ********* GL_AMD_performance_monitor *********
bool isGL_AMD_performance_monitor()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_performance_monitor;

	return isSupported;
}


void glBeginPerfMonitorAMD(GLuint monitor)
{
	gleGetCurrent()->glBeginPerfMonitorAMD( monitor );
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint *monitors)
{
	gleGetCurrent()->glDeletePerfMonitorsAMD( n, monitors );
}

void glEndPerfMonitorAMD(GLuint monitor)
{
	gleGetCurrent()->glEndPerfMonitorAMD( monitor );
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint *monitors)
{
	gleGetCurrent()->glGenPerfMonitorsAMD( n, monitors );
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten)
{
	gleGetCurrent()->glGetPerfMonitorCounterDataAMD( monitor, pname, dataSize, data, bytesWritten );
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, GLvoid *data)
{
	gleGetCurrent()->glGetPerfMonitorCounterInfoAMD( group, counter, pname, data );
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString)
{
	gleGetCurrent()->glGetPerfMonitorCounterStringAMD( group, counter, bufSize, length, counterString );
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters)
{
	gleGetCurrent()->glGetPerfMonitorCountersAMD( group, numCounters, maxActiveCounters, counterSize, counters );
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString)
{
	gleGetCurrent()->glGetPerfMonitorGroupStringAMD( group, bufSize, length, groupString );
}

void glGetPerfMonitorGroupsAMD(GLint *numGroups, GLsizei groupsSize, GLuint *groups)
{
	gleGetCurrent()->glGetPerfMonitorGroupsAMD( numGroups, groupsSize, groups );
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList)
{
	gleGetCurrent()->glSelectPerfMonitorCountersAMD( monitor, enable, group, numCounters, counterList );
}




// ********* GL_AMD_pinned_memory *********
bool isGL_AMD_pinned_memory()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_pinned_memory;

	return isSupported;
}




// ********* GL_AMD_sample_positions *********
bool isGL_AMD_sample_positions()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_sample_positions;

	return isSupported;
}


void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat *val)
{
	gleGetCurrent()->glSetMultisamplefvAMD( pname, index, val );
}




// ********* GL_AMD_seamless_cubemap_per_texture *********
bool isGL_AMD_seamless_cubemap_per_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_seamless_cubemap_per_texture;

	return isSupported;
}




// ********* GL_AMD_shader_stencil_export *********
bool isGL_AMD_shader_stencil_export()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_shader_stencil_export;

	return isSupported;
}




// ********* GL_AMD_texture_texture4 *********
bool isGL_AMD_texture_texture4()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_texture_texture4;

	return isSupported;
}




// ********* GL_AMD_transform_feedback3_lines_triangles *********
bool isGL_AMD_transform_feedback3_lines_triangles()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_transform_feedback3_lines_triangles;

	return isSupported;
}




// ********* GL_AMD_vertex_shader_tesselator *********
bool isGL_AMD_vertex_shader_tesselator()
{
	const bool isSupported = gleGetCurrent()->isGL_AMD_vertex_shader_tesselator;

	return isSupported;
}


void glTessellationFactorAMD(GLfloat factor)
{
	gleGetCurrent()->glTessellationFactorAMD( factor );
}

void glTessellationModeAMD(GLenum mode)
{
	gleGetCurrent()->glTessellationModeAMD( mode );
}




// ********* GL_APPLE_aux_depth_stencil *********
bool isGL_APPLE_aux_depth_stencil()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_aux_depth_stencil;

	return isSupported;
}




// ********* GL_APPLE_client_storage *********
bool isGL_APPLE_client_storage()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_client_storage;

	return isSupported;
}




// ********* GL_APPLE_element_array *********
bool isGL_APPLE_element_array()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_element_array;

	return isSupported;
}


void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count)
{
	gleGetCurrent()->glDrawElementArrayAPPLE( mode, first, count );
}

void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count)
{
	gleGetCurrent()->glDrawRangeElementArrayAPPLE( mode, start, end, first, count );
}

void glElementPointerAPPLE(GLenum type, const GLvoid *pointer)
{
	gleGetCurrent()->glElementPointerAPPLE( type, pointer );
}

void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
	gleGetCurrent()->glMultiDrawElementArrayAPPLE( mode, first, count, primcount );
}

void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount)
{
	gleGetCurrent()->glMultiDrawRangeElementArrayAPPLE( mode, start, end, first, count, primcount );
}




// ********* GL_APPLE_fence *********
bool isGL_APPLE_fence()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_fence;

	return isSupported;
}


void glDeleteFencesAPPLE(GLsizei n, const GLuint *fences)
{
	gleGetCurrent()->glDeleteFencesAPPLE( n, fences );
}

void glFinishFenceAPPLE(GLuint fence)
{
	gleGetCurrent()->glFinishFenceAPPLE( fence );
}

void glFinishObjectAPPLE(GLenum object, GLint name)
{
	gleGetCurrent()->glFinishObjectAPPLE( object, name );
}

void glGenFencesAPPLE(GLsizei n, GLuint *fences)
{
	gleGetCurrent()->glGenFencesAPPLE( n, fences );
}

GLboolean glIsFenceAPPLE(GLuint fence)
{
	return gleGetCurrent()->glIsFenceAPPLE( fence );
}

void glSetFenceAPPLE(GLuint fence)
{
	gleGetCurrent()->glSetFenceAPPLE( fence );
}

GLboolean glTestFenceAPPLE(GLuint fence)
{
	return gleGetCurrent()->glTestFenceAPPLE( fence );
}

GLboolean glTestObjectAPPLE(GLenum object, GLuint name)
{
	return gleGetCurrent()->glTestObjectAPPLE( object, name );
}




// ********* GL_APPLE_float_pixels *********
bool isGL_APPLE_float_pixels()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_float_pixels;

	return isSupported;
}




// ********* GL_APPLE_flush_buffer_range *********
bool isGL_APPLE_flush_buffer_range()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_flush_buffer_range;

	return isSupported;
}


void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param)
{
	gleGetCurrent()->glBufferParameteriAPPLE( target, pname, param );
}

void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size)
{
	gleGetCurrent()->glFlushMappedBufferRangeAPPLE( target, offset, size );
}




// ********* GL_APPLE_object_purgeable *********
bool isGL_APPLE_object_purgeable()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_object_purgeable;

	return isSupported;
}


void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetObjectParameterivAPPLE( objectType, name, pname, params );
}

GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
	return gleGetCurrent()->glObjectPurgeableAPPLE( objectType, name, option );
}

GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option)
{
	return gleGetCurrent()->glObjectUnpurgeableAPPLE( objectType, name, option );
}




// ********* GL_APPLE_rgb_422 *********
bool isGL_APPLE_rgb_422()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_rgb_422;

	return isSupported;
}




// ********* GL_APPLE_row_bytes *********
bool isGL_APPLE_row_bytes()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_row_bytes;

	return isSupported;
}




// ********* GL_APPLE_specular_vector *********
bool isGL_APPLE_specular_vector()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_specular_vector;

	return isSupported;
}




// ********* GL_APPLE_texture_range *********
bool isGL_APPLE_texture_range()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_texture_range;

	return isSupported;
}


void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, GLvoid* *params)
{
	gleGetCurrent()->glGetTexParameterPointervAPPLE( target, pname, params );
}

void glTextureRangeAPPLE(GLenum target, GLsizei length, const GLvoid *pointer)
{
	gleGetCurrent()->glTextureRangeAPPLE( target, length, pointer );
}




// ********* GL_APPLE_transform_hint *********
bool isGL_APPLE_transform_hint()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_transform_hint;

	return isSupported;
}




// ********* GL_APPLE_vertex_array_object *********
bool isGL_APPLE_vertex_array_object()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_vertex_array_object;

	return isSupported;
}


void glBindVertexArrayAPPLE(GLuint array)
{
	gleGetCurrent()->glBindVertexArrayAPPLE( array );
}

void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint *arrays)
{
	gleGetCurrent()->glDeleteVertexArraysAPPLE( n, arrays );
}

void glGenVertexArraysAPPLE(GLsizei n, GLuint *arrays)
{
	gleGetCurrent()->glGenVertexArraysAPPLE( n, arrays );
}

GLboolean glIsVertexArrayAPPLE(GLuint array)
{
	return gleGetCurrent()->glIsVertexArrayAPPLE( array );
}




// ********* GL_APPLE_vertex_array_range *********
bool isGL_APPLE_vertex_array_range()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_vertex_array_range;

	return isSupported;
}


void glFlushVertexArrayRangeAPPLE(GLsizei length, GLvoid *pointer)
{
	gleGetCurrent()->glFlushVertexArrayRangeAPPLE( length, pointer );
}

void glVertexArrayParameteriAPPLE(GLenum pname, GLint param)
{
	gleGetCurrent()->glVertexArrayParameteriAPPLE( pname, param );
}

void glVertexArrayRangeAPPLE(GLsizei length, GLvoid *pointer)
{
	gleGetCurrent()->glVertexArrayRangeAPPLE( length, pointer );
}




// ********* GL_APPLE_vertex_program_evaluators *********
bool isGL_APPLE_vertex_program_evaluators()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_vertex_program_evaluators;

	return isSupported;
}


void glDisableVertexAttribAPPLE(GLuint index, GLenum pname)
{
	gleGetCurrent()->glDisableVertexAttribAPPLE( index, pname );
}

void glEnableVertexAttribAPPLE(GLuint index, GLenum pname)
{
	gleGetCurrent()->glEnableVertexAttribAPPLE( index, pname );
}

GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname)
{
	return gleGetCurrent()->glIsVertexAttribEnabledAPPLE( index, pname );
}

void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
{
	gleGetCurrent()->glMapVertexAttrib1dAPPLE( index, size, u1, u2, stride, order, points );
}

void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
{
	gleGetCurrent()->glMapVertexAttrib1fAPPLE( index, size, u1, u2, stride, order, points );
}

void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
{
	gleGetCurrent()->glMapVertexAttrib2dAPPLE( index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points );
}

void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
{
	gleGetCurrent()->glMapVertexAttrib2fAPPLE( index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points );
}




// ********* GL_APPLE_ycbcr_422 *********
bool isGL_APPLE_ycbcr_422()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_ycbcr_422;

	return isSupported;
}




// ********* GL_ARB_ES2_compatibility *********
bool isGL_ARB_ES2_compatibility()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_ES2_compatibility;

	return isSupported;
}


void glClearDepthf(GLclampf d)
{
	gleGetCurrent()->glClearDepthf( d );
}

void glDepthRangef(GLclampf n, GLclampf f)
{
	gleGetCurrent()->glDepthRangef( n, f );
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision)
{
	gleGetCurrent()->glGetShaderPrecisionFormat( shadertype, precisiontype, range, precision );
}

void glReleaseShaderCompiler(void)
{
	gleGetCurrent()->glReleaseShaderCompiler(  );
}

void glShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryformat, const GLvoid *binary, GLsizei length)
{
	gleGetCurrent()->glShaderBinary( count, shaders, binaryformat, binary, length );
}




// ********* GL_ARB_base_instance *********
bool isGL_ARB_base_instance()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_base_instance;

	return isSupported;
}


void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei primcount, GLuint baseinstance)
{
	gleGetCurrent()->glDrawArraysInstancedBaseInstance( mode, first, count, primcount, baseinstance );
}

void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLuint baseinstance)
{
	gleGetCurrent()->glDrawElementsInstancedBaseInstance( mode, count, type, indices, primcount, baseinstance );
}

void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLint basevertex, GLuint baseinstance)
{
	gleGetCurrent()->glDrawElementsInstancedBaseVertexBaseInstance( mode, count, type, indices, primcount, basevertex, baseinstance );
}




// ********* GL_ARB_blend_func_extended *********
bool isGL_ARB_blend_func_extended()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_blend_func_extended;

	return isSupported;
}


void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name)
{
	gleGetCurrent()->glBindFragDataLocationIndexed( program, colorNumber, index, name );
}

GLint glGetFragDataIndex(GLuint program, const GLchar *name)
{
	return gleGetCurrent()->glGetFragDataIndex( program, name );
}




// ********* GL_ARB_cl_event *********
bool isGL_ARB_cl_event()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_cl_event;

	return isSupported;
}


GLsync glCreateSyncFromCLeventARB(struct _cl_context * context, struct _cl_event * event, GLbitfield flags)
{
	return gleGetCurrent()->glCreateSyncFromCLeventARB( context, event, flags );
}




// ********* GL_ARB_color_buffer_float *********
bool isGL_ARB_color_buffer_float()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_color_buffer_float;

	return isSupported;
}


void glClampColorARB(GLenum target, GLenum clamp)
{
	gleGetCurrent()->glClampColorARB( target, clamp );
}




// ********* GL_ARB_compatibility *********
bool isGL_ARB_compatibility()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_compatibility;

	return isSupported;
}




// ********* GL_ARB_compressed_texture_pixel_storage *********
bool isGL_ARB_compressed_texture_pixel_storage()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_compressed_texture_pixel_storage;

	return isSupported;
}




// ********* GL_ARB_conservative_depth *********
bool isGL_ARB_conservative_depth()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_conservative_depth;

	return isSupported;
}




// ********* GL_ARB_copy_buffer *********
bool isGL_ARB_copy_buffer()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_copy_buffer;

	return isSupported;
}


void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	gleGetCurrent()->glCopyBufferSubData( readTarget, writeTarget, readOffset, writeOffset, size );
}




// ********* GL_ARB_debug_output *********
bool isGL_ARB_debug_output()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_debug_output;

	return isSupported;
}


void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const GLvoid *userParam)
{
	gleGetCurrent()->glDebugMessageCallbackARB( callback, userParam );
}

void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled)
{
	gleGetCurrent()->glDebugMessageControlARB( source, type, severity, count, ids, enabled );
}

void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf)
{
	gleGetCurrent()->glDebugMessageInsertARB( source, type, id, severity, length, buf );
}

GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufsize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog)
{
	return gleGetCurrent()->glGetDebugMessageLogARB( count, bufsize, sources, types, ids, severities, lengths, messageLog );
}




// ********* GL_ARB_depth_buffer_float *********
bool isGL_ARB_depth_buffer_float()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_depth_buffer_float;

	return isSupported;
}




// ********* GL_ARB_depth_clamp *********
bool isGL_ARB_depth_clamp()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_depth_clamp;

	return isSupported;
}




// ********* GL_ARB_depth_texture *********
bool isGL_ARB_depth_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_depth_texture;

	return isSupported;
}




// ********* GL_ARB_draw_buffers *********
bool isGL_ARB_draw_buffers()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_draw_buffers;

	return isSupported;
}


void glDrawBuffersARB(GLsizei n, const GLenum *bufs)
{
	gleGetCurrent()->glDrawBuffersARB( n, bufs );
}




// ********* GL_ARB_draw_buffers_blend *********
bool isGL_ARB_draw_buffers_blend()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_draw_buffers_blend;

	return isSupported;
}


void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	gleGetCurrent()->glBlendEquationSeparateiARB( buf, modeRGB, modeAlpha );
}

void glBlendEquationiARB(GLuint buf, GLenum mode)
{
	gleGetCurrent()->glBlendEquationiARB( buf, mode );
}

void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	gleGetCurrent()->glBlendFuncSeparateiARB( buf, srcRGB, dstRGB, srcAlpha, dstAlpha );
}

void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst)
{
	gleGetCurrent()->glBlendFunciARB( buf, src, dst );
}




// ********* GL_ARB_draw_elements_base_vertex *********
bool isGL_ARB_draw_elements_base_vertex()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_draw_elements_base_vertex;

	return isSupported;
}


void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex)
{
	gleGetCurrent()->glDrawElementsBaseVertex( mode, count, type, indices, basevertex );
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount, GLint basevertex)
{
	gleGetCurrent()->glDrawElementsInstancedBaseVertex( mode, count, type, indices, primcount, basevertex );
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex)
{
	gleGetCurrent()->glDrawRangeElementsBaseVertex( mode, start, end, count, type, indices, basevertex );
}

void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount, const GLint *basevertex)
{
	gleGetCurrent()->glMultiDrawElementsBaseVertex( mode, count, type, indices, primcount, basevertex );
}




// ********* GL_ARB_draw_indirect *********
bool isGL_ARB_draw_indirect()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_draw_indirect;

	return isSupported;
}


void glDrawArraysIndirect(GLenum mode, const GLvoid *indirect)
{
	gleGetCurrent()->glDrawArraysIndirect( mode, indirect );
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const GLvoid *indirect)
{
	gleGetCurrent()->glDrawElementsIndirect( mode, type, indirect );
}




// ********* GL_ARB_draw_instanced *********
bool isGL_ARB_draw_instanced()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_draw_instanced;

	return isSupported;
}


void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	gleGetCurrent()->glDrawArraysInstancedARB( mode, first, count, primcount );
}

void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
	gleGetCurrent()->glDrawElementsInstancedARB( mode, count, type, indices, primcount );
}




// ********* GL_ARB_explicit_attrib_location *********
bool isGL_ARB_explicit_attrib_location()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_explicit_attrib_location;

	return isSupported;
}




// ********* GL_ARB_fragment_coord_conventions *********
bool isGL_ARB_fragment_coord_conventions()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_fragment_coord_conventions;

	return isSupported;
}




// ********* GL_ARB_fragment_program *********
bool isGL_ARB_fragment_program()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_fragment_program;

	return isSupported;
}




// ********* GL_ARB_fragment_program_shadow *********
bool isGL_ARB_fragment_program_shadow()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_fragment_program_shadow;

	return isSupported;
}




// ********* GL_ARB_fragment_shader *********
bool isGL_ARB_fragment_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_fragment_shader;

	return isSupported;
}




// ********* GL_ARB_framebuffer_object *********
bool isGL_ARB_framebuffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_framebuffer_object;

	return isSupported;
}


void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
	gleGetCurrent()->glBindFramebuffer( target, framebuffer );
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
	gleGetCurrent()->glBindRenderbuffer( target, renderbuffer );
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	gleGetCurrent()->glBlitFramebuffer( srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter );
}

GLenum glCheckFramebufferStatus(GLenum target)
{
	return gleGetCurrent()->glCheckFramebufferStatus( target );
}

void glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers)
{
	gleGetCurrent()->glDeleteFramebuffers( n, framebuffers );
}

void glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers)
{
	gleGetCurrent()->glDeleteRenderbuffers( n, renderbuffers );
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	gleGetCurrent()->glFramebufferRenderbuffer( target, attachment, renderbuffertarget, renderbuffer );
}

void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	gleGetCurrent()->glFramebufferTexture1D( target, attachment, textarget, texture, level );
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	gleGetCurrent()->glFramebufferTexture2D( target, attachment, textarget, texture, level );
}

void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	gleGetCurrent()->glFramebufferTexture3D( target, attachment, textarget, texture, level, zoffset );
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	gleGetCurrent()->glFramebufferTextureLayer( target, attachment, texture, level, layer );
}

void glGenFramebuffers(GLsizei n, GLuint *framebuffers)
{
	gleGetCurrent()->glGenFramebuffers( n, framebuffers );
}

void glGenRenderbuffers(GLsizei n, GLuint *renderbuffers)
{
	gleGetCurrent()->glGenRenderbuffers( n, renderbuffers );
}

void glGenerateMipmap(GLenum target)
{
	gleGetCurrent()->glGenerateMipmap( target );
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetFramebufferAttachmentParameteriv( target, attachment, pname, params );
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetRenderbufferParameteriv( target, pname, params );
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
	return gleGetCurrent()->glIsFramebuffer( framebuffer );
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
	return gleGetCurrent()->glIsRenderbuffer( renderbuffer );
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glRenderbufferStorage( target, internalformat, width, height );
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glRenderbufferStorageMultisample( target, samples, internalformat, width, height );
}




// ********* GL_ARB_framebuffer_object_DEPRECATED *********
bool isGL_ARB_framebuffer_object_DEPRECATED()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_framebuffer_object_DEPRECATED;

	return isSupported;
}




// ********* GL_ARB_framebuffer_sRGB *********
bool isGL_ARB_framebuffer_sRGB()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_framebuffer_sRGB;

	return isSupported;
}




// ********* GL_ARB_geometry_shader4 *********
bool isGL_ARB_geometry_shader4()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_geometry_shader4;

	return isSupported;
}


void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	gleGetCurrent()->glFramebufferTextureARB( target, attachment, texture, level );
}

void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
	gleGetCurrent()->glFramebufferTextureFaceARB( target, attachment, texture, level, face );
}

void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	gleGetCurrent()->glFramebufferTextureLayerARB( target, attachment, texture, level, layer );
}

void glProgramParameteriARB(GLuint program, GLenum pname, GLint value)
{
	gleGetCurrent()->glProgramParameteriARB( program, pname, value );
}




// ********* GL_ARB_get_program_binary *********
bool isGL_ARB_get_program_binary()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_get_program_binary;

	return isSupported;
}


void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, GLvoid *binary)
{
	gleGetCurrent()->glGetProgramBinary( program, bufSize, length, binaryFormat, binary );
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const GLvoid *binary, GLsizei length)
{
	gleGetCurrent()->glProgramBinary( program, binaryFormat, binary, length );
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
	gleGetCurrent()->glProgramParameteri( program, pname, value );
}




// ********* GL_ARB_gpu_shader5 *********
bool isGL_ARB_gpu_shader5()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_gpu_shader5;

	return isSupported;
}




// ********* GL_ARB_gpu_shader_fp64 *********
bool isGL_ARB_gpu_shader_fp64()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_gpu_shader_fp64;

	return isSupported;
}


void glGetUniformdv(GLuint program, GLint location, GLdouble *params)
{
	gleGetCurrent()->glGetUniformdv( program, location, params );
}

void glUniform1d(GLint location, GLdouble x)
{
	gleGetCurrent()->glUniform1d( location, x );
}

void glUniform1dv(GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glUniform1dv( location, count, value );
}

void glUniform2d(GLint location, GLdouble x, GLdouble y)
{
	gleGetCurrent()->glUniform2d( location, x, y );
}

void glUniform2dv(GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glUniform2dv( location, count, value );
}

void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glUniform3d( location, x, y, z );
}

void glUniform3dv(GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glUniform3dv( location, count, value );
}

void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glUniform4d( location, x, y, z, w );
}

void glUniform4dv(GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glUniform4dv( location, count, value );
}

void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glUniformMatrix2dv( location, count, transpose, value );
}

void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glUniformMatrix2x3dv( location, count, transpose, value );
}

void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glUniformMatrix2x4dv( location, count, transpose, value );
}

void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glUniformMatrix3dv( location, count, transpose, value );
}

void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glUniformMatrix3x2dv( location, count, transpose, value );
}

void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glUniformMatrix3x4dv( location, count, transpose, value );
}

void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glUniformMatrix4dv( location, count, transpose, value );
}

void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glUniformMatrix4x2dv( location, count, transpose, value );
}

void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glUniformMatrix4x3dv( location, count, transpose, value );
}




// ********* GL_ARB_half_float_pixel *********
bool isGL_ARB_half_float_pixel()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_half_float_pixel;

	return isSupported;
}




// ********* GL_ARB_half_float_vertex *********
bool isGL_ARB_half_float_vertex()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_half_float_vertex;

	return isSupported;
}




// ********* GL_ARB_imaging *********
bool isGL_ARB_imaging()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_imaging;

	return isSupported;
}




// ********* GL_ARB_imaging_DEPRECATED *********
bool isGL_ARB_imaging_DEPRECATED()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_imaging_DEPRECATED;

	return isSupported;
}




// ********* GL_ARB_instanced_arrays *********
bool isGL_ARB_instanced_arrays()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_instanced_arrays;

	return isSupported;
}


void glVertexAttribDivisorARB(GLuint index, GLuint divisor)
{
	gleGetCurrent()->glVertexAttribDivisorARB( index, divisor );
}




// ********* GL_ARB_internalformat_query *********
bool isGL_ARB_internalformat_query()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_internalformat_query;

	return isSupported;
}


void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params)
{
	gleGetCurrent()->glGetInternalformativ( target, internalformat, pname, bufSize, params );
}




// ********* GL_ARB_map_buffer_alignment *********
bool isGL_ARB_map_buffer_alignment()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_map_buffer_alignment;

	return isSupported;
}




// ********* GL_ARB_map_buffer_range *********
bool isGL_ARB_map_buffer_range()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_map_buffer_range;

	return isSupported;
}


void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
	gleGetCurrent()->glFlushMappedBufferRange( target, offset, length );
}

GLvoid* glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	return gleGetCurrent()->glMapBufferRange( target, offset, length, access );
}




// ********* GL_ARB_matrix_palette *********
bool isGL_ARB_matrix_palette()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_matrix_palette;

	return isSupported;
}


void glCurrentPaletteMatrixARB(GLint index)
{
	gleGetCurrent()->glCurrentPaletteMatrixARB( index );
}

void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glMatrixIndexPointerARB( size, type, stride, pointer );
}

void glMatrixIndexubvARB(GLint size, const GLubyte *indices)
{
	gleGetCurrent()->glMatrixIndexubvARB( size, indices );
}

void glMatrixIndexuivARB(GLint size, const GLuint *indices)
{
	gleGetCurrent()->glMatrixIndexuivARB( size, indices );
}

void glMatrixIndexusvARB(GLint size, const GLushort *indices)
{
	gleGetCurrent()->glMatrixIndexusvARB( size, indices );
}




// ********* GL_ARB_multisample *********
bool isGL_ARB_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_multisample;

	return isSupported;
}


void glSampleCoverageARB(GLclampf value, GLboolean invert)
{
	gleGetCurrent()->glSampleCoverageARB( value, invert );
}




// ********* GL_ARB_multitexture *********
bool isGL_ARB_multitexture()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_multitexture;

	return isSupported;
}


void glActiveTextureARB(GLenum texture)
{
	gleGetCurrent()->glActiveTextureARB( texture );
}

void glClientActiveTextureARB(GLenum texture)
{
	gleGetCurrent()->glClientActiveTextureARB( texture );
}

void glMultiTexCoord1dARB(GLenum target, GLdouble s)
{
	gleGetCurrent()->glMultiTexCoord1dARB( target, s );
}

void glMultiTexCoord1dvARB(GLenum target, const GLdouble *v)
{
	gleGetCurrent()->glMultiTexCoord1dvARB( target, v );
}

void glMultiTexCoord1fARB(GLenum target, GLfloat s)
{
	gleGetCurrent()->glMultiTexCoord1fARB( target, s );
}

void glMultiTexCoord1fvARB(GLenum target, const GLfloat *v)
{
	gleGetCurrent()->glMultiTexCoord1fvARB( target, v );
}

void glMultiTexCoord1iARB(GLenum target, GLint s)
{
	gleGetCurrent()->glMultiTexCoord1iARB( target, s );
}

void glMultiTexCoord1ivARB(GLenum target, const GLint *v)
{
	gleGetCurrent()->glMultiTexCoord1ivARB( target, v );
}

void glMultiTexCoord1sARB(GLenum target, GLshort s)
{
	gleGetCurrent()->glMultiTexCoord1sARB( target, s );
}

void glMultiTexCoord1svARB(GLenum target, const GLshort *v)
{
	gleGetCurrent()->glMultiTexCoord1svARB( target, v );
}

void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t)
{
	gleGetCurrent()->glMultiTexCoord2dARB( target, s, t );
}

void glMultiTexCoord2dvARB(GLenum target, const GLdouble *v)
{
	gleGetCurrent()->glMultiTexCoord2dvARB( target, v );
}

void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
	gleGetCurrent()->glMultiTexCoord2fARB( target, s, t );
}

void glMultiTexCoord2fvARB(GLenum target, const GLfloat *v)
{
	gleGetCurrent()->glMultiTexCoord2fvARB( target, v );
}

void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t)
{
	gleGetCurrent()->glMultiTexCoord2iARB( target, s, t );
}

void glMultiTexCoord2ivARB(GLenum target, const GLint *v)
{
	gleGetCurrent()->glMultiTexCoord2ivARB( target, v );
}

void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t)
{
	gleGetCurrent()->glMultiTexCoord2sARB( target, s, t );
}

void glMultiTexCoord2svARB(GLenum target, const GLshort *v)
{
	gleGetCurrent()->glMultiTexCoord2svARB( target, v );
}

void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
	gleGetCurrent()->glMultiTexCoord3dARB( target, s, t, r );
}

void glMultiTexCoord3dvARB(GLenum target, const GLdouble *v)
{
	gleGetCurrent()->glMultiTexCoord3dvARB( target, v );
}

void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
	gleGetCurrent()->glMultiTexCoord3fARB( target, s, t, r );
}

void glMultiTexCoord3fvARB(GLenum target, const GLfloat *v)
{
	gleGetCurrent()->glMultiTexCoord3fvARB( target, v );
}

void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r)
{
	gleGetCurrent()->glMultiTexCoord3iARB( target, s, t, r );
}

void glMultiTexCoord3ivARB(GLenum target, const GLint *v)
{
	gleGetCurrent()->glMultiTexCoord3ivARB( target, v );
}

void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r)
{
	gleGetCurrent()->glMultiTexCoord3sARB( target, s, t, r );
}

void glMultiTexCoord3svARB(GLenum target, const GLshort *v)
{
	gleGetCurrent()->glMultiTexCoord3svARB( target, v );
}

void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	gleGetCurrent()->glMultiTexCoord4dARB( target, s, t, r, q );
}

void glMultiTexCoord4dvARB(GLenum target, const GLdouble *v)
{
	gleGetCurrent()->glMultiTexCoord4dvARB( target, v );
}

void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	gleGetCurrent()->glMultiTexCoord4fARB( target, s, t, r, q );
}

void glMultiTexCoord4fvARB(GLenum target, const GLfloat *v)
{
	gleGetCurrent()->glMultiTexCoord4fvARB( target, v );
}

void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
	gleGetCurrent()->glMultiTexCoord4iARB( target, s, t, r, q );
}

void glMultiTexCoord4ivARB(GLenum target, const GLint *v)
{
	gleGetCurrent()->glMultiTexCoord4ivARB( target, v );
}

void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
	gleGetCurrent()->glMultiTexCoord4sARB( target, s, t, r, q );
}

void glMultiTexCoord4svARB(GLenum target, const GLshort *v)
{
	gleGetCurrent()->glMultiTexCoord4svARB( target, v );
}




// ********* GL_ARB_occlusion_query *********
bool isGL_ARB_occlusion_query()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_occlusion_query;

	return isSupported;
}


void glBeginQueryARB(GLenum target, GLuint id)
{
	gleGetCurrent()->glBeginQueryARB( target, id );
}

void glDeleteQueriesARB(GLsizei n, const GLuint *ids)
{
	gleGetCurrent()->glDeleteQueriesARB( n, ids );
}

void glEndQueryARB(GLenum target)
{
	gleGetCurrent()->glEndQueryARB( target );
}

void glGenQueriesARB(GLsizei n, GLuint *ids)
{
	gleGetCurrent()->glGenQueriesARB( n, ids );
}

void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetQueryObjectivARB( id, pname, params );
}

void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetQueryObjectuivARB( id, pname, params );
}

void glGetQueryivARB(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetQueryivARB( target, pname, params );
}

GLboolean glIsQueryARB(GLuint id)
{
	return gleGetCurrent()->glIsQueryARB( id );
}




// ********* GL_ARB_occlusion_query2 *********
bool isGL_ARB_occlusion_query2()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_occlusion_query2;

	return isSupported;
}




// ********* GL_ARB_pixel_buffer_object *********
bool isGL_ARB_pixel_buffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_pixel_buffer_object;

	return isSupported;
}




// ********* GL_ARB_point_parameters *********
bool isGL_ARB_point_parameters()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_point_parameters;

	return isSupported;
}


void glPointParameterfARB(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glPointParameterfARB( pname, param );
}

void glPointParameterfvARB(GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glPointParameterfvARB( pname, params );
}




// ********* GL_ARB_point_sprite *********
bool isGL_ARB_point_sprite()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_point_sprite;

	return isSupported;
}




// ********* GL_ARB_provoking_vertex *********
bool isGL_ARB_provoking_vertex()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_provoking_vertex;

	return isSupported;
}


void glProvokingVertex(GLenum mode)
{
	gleGetCurrent()->glProvokingVertex( mode );
}




// ********* GL_ARB_robustness *********
bool isGL_ARB_robustness()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_robustness;

	return isSupported;
}


GLenum glGetGraphicsResetStatusARB(void)
{
	return gleGetCurrent()->glGetGraphicsResetStatusARB(  );
}

void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *table)
{
	gleGetCurrent()->glGetnColorTableARB( target, format, type, bufSize, table );
}

void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, GLvoid *img)
{
	gleGetCurrent()->glGetnCompressedTexImageARB( target, lod, bufSize, img );
}

void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *image)
{
	gleGetCurrent()->glGetnConvolutionFilterARB( target, format, type, bufSize, image );
}

void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values)
{
	gleGetCurrent()->glGetnHistogramARB( target, reset, format, type, bufSize, values );
}

void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v)
{
	gleGetCurrent()->glGetnMapdvARB( target, query, bufSize, v );
}

void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v)
{
	gleGetCurrent()->glGetnMapfvARB( target, query, bufSize, v );
}

void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint *v)
{
	gleGetCurrent()->glGetnMapivARB( target, query, bufSize, v );
}

void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values)
{
	gleGetCurrent()->glGetnMinmaxARB( target, reset, format, type, bufSize, values );
}

void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat *values)
{
	gleGetCurrent()->glGetnPixelMapfvARB( map, bufSize, values );
}

void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint *values)
{
	gleGetCurrent()->glGetnPixelMapuivARB( map, bufSize, values );
}

void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort *values)
{
	gleGetCurrent()->glGetnPixelMapusvARB( map, bufSize, values );
}

void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte *pattern)
{
	gleGetCurrent()->glGetnPolygonStippleARB( bufSize, pattern );
}

void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid *row, GLsizei columnBufSize, GLvoid *column, GLvoid *span)
{
	gleGetCurrent()->glGetnSeparableFilterARB( target, format, type, rowBufSize, row, columnBufSize, column, span );
}

void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid *img)
{
	gleGetCurrent()->glGetnTexImageARB( target, level, format, type, bufSize, img );
}

void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble *params)
{
	gleGetCurrent()->glGetnUniformdvARB( program, location, bufSize, params );
}

void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat *params)
{
	gleGetCurrent()->glGetnUniformfvARB( program, location, bufSize, params );
}

void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint *params)
{
	gleGetCurrent()->glGetnUniformivARB( program, location, bufSize, params );
}

void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint *params)
{
	gleGetCurrent()->glGetnUniformuivARB( program, location, bufSize, params );
}

void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data)
{
	gleGetCurrent()->glReadnPixelsARB( x, y, width, height, format, type, bufSize, data );
}




// ********* GL_ARB_sample_shading *********
bool isGL_ARB_sample_shading()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_sample_shading;

	return isSupported;
}


void glMinSampleShadingARB(GLclampf value)
{
	gleGetCurrent()->glMinSampleShadingARB( value );
}




// ********* GL_ARB_sampler_objects *********
bool isGL_ARB_sampler_objects()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_sampler_objects;

	return isSupported;
}


void glBindSampler(GLuint unit, GLuint sampler)
{
	gleGetCurrent()->glBindSampler( unit, sampler );
}

void glDeleteSamplers(GLsizei count, const GLuint *samplers)
{
	gleGetCurrent()->glDeleteSamplers( count, samplers );
}

void glGenSamplers(GLsizei count, GLuint *samplers)
{
	gleGetCurrent()->glGenSamplers( count, samplers );
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetSamplerParameterIiv( sampler, pname, params );
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetSamplerParameterIuiv( sampler, pname, params );
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetSamplerParameterfv( sampler, pname, params );
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetSamplerParameteriv( sampler, pname, params );
}

GLboolean glIsSampler(GLuint sampler)
{
	return gleGetCurrent()->glIsSampler( sampler );
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint *param)
{
	gleGetCurrent()->glSamplerParameterIiv( sampler, pname, param );
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint *param)
{
	gleGetCurrent()->glSamplerParameterIuiv( sampler, pname, param );
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glSamplerParameterf( sampler, pname, param );
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat *param)
{
	gleGetCurrent()->glSamplerParameterfv( sampler, pname, param );
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
	gleGetCurrent()->glSamplerParameteri( sampler, pname, param );
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint *param)
{
	gleGetCurrent()->glSamplerParameteriv( sampler, pname, param );
}




// ********* GL_ARB_seamless_cube_map *********
bool isGL_ARB_seamless_cube_map()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_seamless_cube_map;

	return isSupported;
}




// ********* GL_ARB_separate_shader_objects *********
bool isGL_ARB_separate_shader_objects()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_separate_shader_objects;

	return isSupported;
}


void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
	gleGetCurrent()->glActiveShaderProgram( pipeline, program );
}

void glBindProgramPipeline(GLuint pipeline)
{
	gleGetCurrent()->glBindProgramPipeline( pipeline );
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar* *strings)
{
	return gleGetCurrent()->glCreateShaderProgramv( type, count, strings );
}

void glDeleteProgramPipelines(GLsizei n, const GLuint *pipelines)
{
	gleGetCurrent()->glDeleteProgramPipelines( n, pipelines );
}

void glGenProgramPipelines(GLsizei n, GLuint *pipelines)
{
	gleGetCurrent()->glGenProgramPipelines( n, pipelines );
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
	gleGetCurrent()->glGetProgramPipelineInfoLog( pipeline, bufSize, length, infoLog );
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetProgramPipelineiv( pipeline, pname, params );
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
	return gleGetCurrent()->glIsProgramPipeline( pipeline );
}

void glProgramUniform1d(GLuint program, GLint location, GLdouble v0)
{
	gleGetCurrent()->glProgramUniform1d( program, location, v0 );
}

void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniform1dv( program, location, count, value );
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
	gleGetCurrent()->glProgramUniform1f( program, location, v0 );
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniform1fv( program, location, count, value );
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
	gleGetCurrent()->glProgramUniform1i( program, location, v0 );
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glProgramUniform1iv( program, location, count, value );
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
	gleGetCurrent()->glProgramUniform1ui( program, location, v0 );
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glProgramUniform1uiv( program, location, count, value );
}

void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
	gleGetCurrent()->glProgramUniform2d( program, location, v0, v1 );
}

void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniform2dv( program, location, count, value );
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
	gleGetCurrent()->glProgramUniform2f( program, location, v0, v1 );
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniform2fv( program, location, count, value );
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
	gleGetCurrent()->glProgramUniform2i( program, location, v0, v1 );
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glProgramUniform2iv( program, location, count, value );
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
	gleGetCurrent()->glProgramUniform2ui( program, location, v0, v1 );
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glProgramUniform2uiv( program, location, count, value );
}

void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
	gleGetCurrent()->glProgramUniform3d( program, location, v0, v1, v2 );
}

void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniform3dv( program, location, count, value );
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	gleGetCurrent()->glProgramUniform3f( program, location, v0, v1, v2 );
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniform3fv( program, location, count, value );
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
	gleGetCurrent()->glProgramUniform3i( program, location, v0, v1, v2 );
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glProgramUniform3iv( program, location, count, value );
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	gleGetCurrent()->glProgramUniform3ui( program, location, v0, v1, v2 );
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glProgramUniform3uiv( program, location, count, value );
}

void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
	gleGetCurrent()->glProgramUniform4d( program, location, v0, v1, v2, v3 );
}

void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniform4dv( program, location, count, value );
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	gleGetCurrent()->glProgramUniform4f( program, location, v0, v1, v2, v3 );
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniform4fv( program, location, count, value );
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	gleGetCurrent()->glProgramUniform4i( program, location, v0, v1, v2, v3 );
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glProgramUniform4iv( program, location, count, value );
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	gleGetCurrent()->glProgramUniform4ui( program, location, v0, v1, v2, v3 );
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glProgramUniform4uiv( program, location, count, value );
}

void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix2dv( program, location, count, transpose, value );
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix2fv( program, location, count, transpose, value );
}

void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix2x3dv( program, location, count, transpose, value );
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix2x3fv( program, location, count, transpose, value );
}

void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix2x4dv( program, location, count, transpose, value );
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix2x4fv( program, location, count, transpose, value );
}

void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix3dv( program, location, count, transpose, value );
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix3fv( program, location, count, transpose, value );
}

void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix3x2dv( program, location, count, transpose, value );
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix3x2fv( program, location, count, transpose, value );
}

void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix3x4dv( program, location, count, transpose, value );
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix3x4fv( program, location, count, transpose, value );
}

void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix4dv( program, location, count, transpose, value );
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix4fv( program, location, count, transpose, value );
}

void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix4x2dv( program, location, count, transpose, value );
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix4x2fv( program, location, count, transpose, value );
}

void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix4x3dv( program, location, count, transpose, value );
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix4x3fv( program, location, count, transpose, value );
}

void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
{
	gleGetCurrent()->glUseProgramStages( pipeline, stages, program );
}

void glValidateProgramPipeline(GLuint pipeline)
{
	gleGetCurrent()->glValidateProgramPipeline( pipeline );
}




// ********* GL_ARB_shader_atomic_counters *********
bool isGL_ARB_shader_atomic_counters()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shader_atomic_counters;

	return isSupported;
}


void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetActiveAtomicCounterBufferiv( program, bufferIndex, pname, params );
}




// ********* GL_ARB_shader_bit_encoding *********
bool isGL_ARB_shader_bit_encoding()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shader_bit_encoding;

	return isSupported;
}




// ********* GL_ARB_shader_image_load_store *********
bool isGL_ARB_shader_image_load_store()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shader_image_load_store;

	return isSupported;
}


void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
	gleGetCurrent()->glBindImageTexture( unit, texture, level, layered, layer, access, format );
}

void glMemoryBarrier(GLbitfield barriers)
{
	gleGetCurrent()->glMemoryBarrier( barriers );
}




// ********* GL_ARB_shader_objects *********
bool isGL_ARB_shader_objects()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shader_objects;

	return isSupported;
}


void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
	gleGetCurrent()->glAttachObjectARB( containerObj, obj );
}

void glCompileShaderARB(GLhandleARB shaderObj)
{
	gleGetCurrent()->glCompileShaderARB( shaderObj );
}

GLhandleARB glCreateProgramObjectARB(void)
{
	return gleGetCurrent()->glCreateProgramObjectARB(  );
}

GLhandleARB glCreateShaderObjectARB(GLenum shaderType)
{
	return gleGetCurrent()->glCreateShaderObjectARB( shaderType );
}

void glDeleteObjectARB(GLhandleARB obj)
{
	gleGetCurrent()->glDeleteObjectARB( obj );
}

void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
	gleGetCurrent()->glDetachObjectARB( containerObj, attachedObj );
}

void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
{
	gleGetCurrent()->glGetActiveUniformARB( programObj, index, maxLength, length, size, type, name );
}

void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj)
{
	gleGetCurrent()->glGetAttachedObjectsARB( containerObj, maxCount, count, obj );
}

GLhandleARB glGetHandleARB(GLenum pname)
{
	return gleGetCurrent()->glGetHandleARB( pname );
}

void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog)
{
	gleGetCurrent()->glGetInfoLogARB( obj, maxLength, length, infoLog );
}

void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetObjectParameterfvARB( obj, pname, params );
}

void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetObjectParameterivARB( obj, pname, params );
}

void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source)
{
	gleGetCurrent()->glGetShaderSourceARB( obj, maxLength, length, source );
}

GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB *name)
{
	return gleGetCurrent()->glGetUniformLocationARB( programObj, name );
}

void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat *params)
{
	gleGetCurrent()->glGetUniformfvARB( programObj, location, params );
}

void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint *params)
{
	gleGetCurrent()->glGetUniformivARB( programObj, location, params );
}

void glLinkProgramARB(GLhandleARB programObj)
{
	gleGetCurrent()->glLinkProgramARB( programObj );
}

void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length)
{
	gleGetCurrent()->glShaderSourceARB( shaderObj, count, string, length );
}

void glUniform1fARB(GLint location, GLfloat v0)
{
	gleGetCurrent()->glUniform1fARB( location, v0 );
}

void glUniform1fvARB(GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glUniform1fvARB( location, count, value );
}

void glUniform1iARB(GLint location, GLint v0)
{
	gleGetCurrent()->glUniform1iARB( location, v0 );
}

void glUniform1ivARB(GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glUniform1ivARB( location, count, value );
}

void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
	gleGetCurrent()->glUniform2fARB( location, v0, v1 );
}

void glUniform2fvARB(GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glUniform2fvARB( location, count, value );
}

void glUniform2iARB(GLint location, GLint v0, GLint v1)
{
	gleGetCurrent()->glUniform2iARB( location, v0, v1 );
}

void glUniform2ivARB(GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glUniform2ivARB( location, count, value );
}

void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	gleGetCurrent()->glUniform3fARB( location, v0, v1, v2 );
}

void glUniform3fvARB(GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glUniform3fvARB( location, count, value );
}

void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
	gleGetCurrent()->glUniform3iARB( location, v0, v1, v2 );
}

void glUniform3ivARB(GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glUniform3ivARB( location, count, value );
}

void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	gleGetCurrent()->glUniform4fARB( location, v0, v1, v2, v3 );
}

void glUniform4fvARB(GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glUniform4fvARB( location, count, value );
}

void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	gleGetCurrent()->glUniform4iARB( location, v0, v1, v2, v3 );
}

void glUniform4ivARB(GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glUniform4ivARB( location, count, value );
}

void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix2fvARB( location, count, transpose, value );
}

void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix3fvARB( location, count, transpose, value );
}

void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix4fvARB( location, count, transpose, value );
}

void glUseProgramObjectARB(GLhandleARB programObj)
{
	gleGetCurrent()->glUseProgramObjectARB( programObj );
}

void glValidateProgramARB(GLhandleARB programObj)
{
	gleGetCurrent()->glValidateProgramARB( programObj );
}




// ********* GL_ARB_shader_precision *********
bool isGL_ARB_shader_precision()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shader_precision;

	return isSupported;
}




// ********* GL_ARB_shader_stencil_export *********
bool isGL_ARB_shader_stencil_export()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shader_stencil_export;

	return isSupported;
}




// ********* GL_ARB_shader_subroutine *********
bool isGL_ARB_shader_subroutine()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shader_subroutine;

	return isSupported;
}


void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name)
{
	gleGetCurrent()->glGetActiveSubroutineName( program, shadertype, index, bufsize, length, name );
}

void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name)
{
	gleGetCurrent()->glGetActiveSubroutineUniformName( program, shadertype, index, bufsize, length, name );
}

void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values)
{
	gleGetCurrent()->glGetActiveSubroutineUniformiv( program, shadertype, index, pname, values );
}

void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint *values)
{
	gleGetCurrent()->glGetProgramStageiv( program, shadertype, pname, values );
}

GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar *name)
{
	return gleGetCurrent()->glGetSubroutineIndex( program, shadertype, name );
}

GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar *name)
{
	return gleGetCurrent()->glGetSubroutineUniformLocation( program, shadertype, name );
}

void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint *params)
{
	gleGetCurrent()->glGetUniformSubroutineuiv( shadertype, location, params );
}

void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint *indices)
{
	gleGetCurrent()->glUniformSubroutinesuiv( shadertype, count, indices );
}




// ********* GL_ARB_shader_texture_lod *********
bool isGL_ARB_shader_texture_lod()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shader_texture_lod;

	return isSupported;
}




// ********* GL_ARB_shading_language_100 *********
bool isGL_ARB_shading_language_100()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shading_language_100;

	return isSupported;
}




// ********* GL_ARB_shading_language_420pack *********
bool isGL_ARB_shading_language_420pack()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shading_language_420pack;

	return isSupported;
}




// ********* GL_ARB_shading_language_include *********
bool isGL_ARB_shading_language_include()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shading_language_include;

	return isSupported;
}


void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar* *path, const GLint *length)
{
	gleGetCurrent()->glCompileShaderIncludeARB( shader, count, path, length );
}

void glDeleteNamedStringARB(GLint namelen, const GLchar *name)
{
	gleGetCurrent()->glDeleteNamedStringARB( namelen, name );
}

void glGetNamedStringARB(GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string)
{
	gleGetCurrent()->glGetNamedStringARB( namelen, name, bufSize, stringlen, string );
}

void glGetNamedStringivARB(GLint namelen, const GLchar *name, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetNamedStringivARB( namelen, name, pname, params );
}

GLboolean glIsNamedStringARB(GLint namelen, const GLchar *name)
{
	return gleGetCurrent()->glIsNamedStringARB( namelen, name );
}

void glNamedStringARB(GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string)
{
	gleGetCurrent()->glNamedStringARB( type, namelen, name, stringlen, string );
}




// ********* GL_ARB_shading_language_packing *********
bool isGL_ARB_shading_language_packing()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shading_language_packing;

	return isSupported;
}




// ********* GL_ARB_shadow *********
bool isGL_ARB_shadow()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shadow;

	return isSupported;
}




// ********* GL_ARB_shadow_ambient *********
bool isGL_ARB_shadow_ambient()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shadow_ambient;

	return isSupported;
}




// ********* GL_ARB_sync *********
bool isGL_ARB_sync()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_sync;

	return isSupported;
}


GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	return gleGetCurrent()->glClientWaitSync( sync, flags, timeout );
}

void glDeleteSync(GLsync sync)
{
	gleGetCurrent()->glDeleteSync( sync );
}

GLsync glFenceSync(GLenum condition, GLbitfield flags)
{
	return gleGetCurrent()->glFenceSync( condition, flags );
}

void glGetInteger64v(GLenum pname, GLint64 *params)
{
	gleGetCurrent()->glGetInteger64v( pname, params );
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values)
{
	gleGetCurrent()->glGetSynciv( sync, pname, bufSize, length, values );
}

GLboolean glIsSync(GLsync sync)
{
	return gleGetCurrent()->glIsSync( sync );
}

void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	gleGetCurrent()->glWaitSync( sync, flags, timeout );
}




// ********* GL_ARB_tessellation_shader *********
bool isGL_ARB_tessellation_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_tessellation_shader;

	return isSupported;
}


void glPatchParameterfv(GLenum pname, const GLfloat *values)
{
	gleGetCurrent()->glPatchParameterfv( pname, values );
}

void glPatchParameteri(GLenum pname, GLint value)
{
	gleGetCurrent()->glPatchParameteri( pname, value );
}




// ********* GL_ARB_texture_border_clamp *********
bool isGL_ARB_texture_border_clamp()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_border_clamp;

	return isSupported;
}




// ********* GL_ARB_texture_buffer_object *********
bool isGL_ARB_texture_buffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_buffer_object;

	return isSupported;
}


void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer)
{
	gleGetCurrent()->glTexBufferARB( target, internalformat, buffer );
}




// ********* GL_ARB_texture_buffer_object_rgb32 *********
bool isGL_ARB_texture_buffer_object_rgb32()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_buffer_object_rgb32;

	return isSupported;
}




// ********* GL_ARB_texture_compression *********
bool isGL_ARB_texture_compression()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_compression;

	return isSupported;
}


void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexImage1DARB( target, level, internalformat, width, border, imageSize, data );
}

void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexImage2DARB( target, level, internalformat, width, height, border, imageSize, data );
}

void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexImage3DARB( target, level, internalformat, width, height, depth, border, imageSize, data );
}

void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexSubImage1DARB( target, level, xoffset, width, format, imageSize, data );
}

void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexSubImage2DARB( target, level, xoffset, yoffset, width, height, format, imageSize, data );
}

void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexSubImage3DARB( target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data );
}

void glGetCompressedTexImageARB(GLenum target, GLint level, GLvoid *img)
{
	gleGetCurrent()->glGetCompressedTexImageARB( target, level, img );
}




// ********* GL_ARB_texture_compression_bptc *********
bool isGL_ARB_texture_compression_bptc()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_compression_bptc;

	return isSupported;
}




// ********* GL_ARB_texture_compression_rgtc *********
bool isGL_ARB_texture_compression_rgtc()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_compression_rgtc;

	return isSupported;
}




// ********* GL_ARB_texture_cube_map *********
bool isGL_ARB_texture_cube_map()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_cube_map;

	return isSupported;
}




// ********* GL_ARB_texture_cube_map_array *********
bool isGL_ARB_texture_cube_map_array()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_cube_map_array;

	return isSupported;
}




// ********* GL_ARB_texture_env_add *********
bool isGL_ARB_texture_env_add()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_env_add;

	return isSupported;
}




// ********* GL_ARB_texture_env_combine *********
bool isGL_ARB_texture_env_combine()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_env_combine;

	return isSupported;
}




// ********* GL_ARB_texture_env_crossbar *********
bool isGL_ARB_texture_env_crossbar()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_env_crossbar;

	return isSupported;
}




// ********* GL_ARB_texture_env_dot3 *********
bool isGL_ARB_texture_env_dot3()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_env_dot3;

	return isSupported;
}




// ********* GL_ARB_texture_float *********
bool isGL_ARB_texture_float()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_float;

	return isSupported;
}




// ********* GL_ARB_texture_gather *********
bool isGL_ARB_texture_gather()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_gather;

	return isSupported;
}




// ********* GL_ARB_texture_mirrored_repeat *********
bool isGL_ARB_texture_mirrored_repeat()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_mirrored_repeat;

	return isSupported;
}




// ********* GL_ARB_texture_multisample *********
bool isGL_ARB_texture_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_multisample;

	return isSupported;
}


void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat *val)
{
	gleGetCurrent()->glGetMultisamplefv( pname, index, val );
}

void glSampleMaski(GLuint index, GLbitfield mask)
{
	gleGetCurrent()->glSampleMaski( index, mask );
}

void glTexImage2DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
	gleGetCurrent()->glTexImage2DMultisample( target, samples, internalformat, width, height, fixedsamplelocations );
}

void glTexImage3DMultisample(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
	gleGetCurrent()->glTexImage3DMultisample( target, samples, internalformat, width, height, depth, fixedsamplelocations );
}




// ********* GL_ARB_texture_non_power_of_two *********
bool isGL_ARB_texture_non_power_of_two()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_non_power_of_two;

	return isSupported;
}




// ********* GL_ARB_texture_query_lod *********
bool isGL_ARB_texture_query_lod()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_query_lod;

	return isSupported;
}




// ********* GL_ARB_texture_rectangle *********
bool isGL_ARB_texture_rectangle()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_rectangle;

	return isSupported;
}




// ********* GL_ARB_texture_rg *********
bool isGL_ARB_texture_rg()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_rg;

	return isSupported;
}




// ********* GL_ARB_texture_rgb10_a2ui *********
bool isGL_ARB_texture_rgb10_a2ui()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_rgb10_a2ui;

	return isSupported;
}




// ********* GL_ARB_texture_storage *********
bool isGL_ARB_texture_storage()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_storage;

	return isSupported;
}


void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	gleGetCurrent()->glTexStorage1D( target, levels, internalformat, width );
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glTexStorage2D( target, levels, internalformat, width, height );
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	gleGetCurrent()->glTexStorage3D( target, levels, internalformat, width, height, depth );
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	gleGetCurrent()->glTextureStorage1DEXT( texture, target, levels, internalformat, width );
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glTextureStorage2DEXT( texture, target, levels, internalformat, width, height );
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	gleGetCurrent()->glTextureStorage3DEXT( texture, target, levels, internalformat, width, height, depth );
}




// ********* GL_ARB_texture_swizzle *********
bool isGL_ARB_texture_swizzle()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_swizzle;

	return isSupported;
}




// ********* GL_ARB_timer_query *********
bool isGL_ARB_timer_query()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_timer_query;

	return isSupported;
}


void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 *params)
{
	gleGetCurrent()->glGetQueryObjecti64v( id, pname, params );
}

void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 *params)
{
	gleGetCurrent()->glGetQueryObjectui64v( id, pname, params );
}

void glQueryCounter(GLuint id, GLenum target)
{
	gleGetCurrent()->glQueryCounter( id, target );
}




// ********* GL_ARB_transform_feedback2 *********
bool isGL_ARB_transform_feedback2()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_transform_feedback2;

	return isSupported;
}


void glBindTransformFeedback(GLenum target, GLuint id)
{
	gleGetCurrent()->glBindTransformFeedback( target, id );
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint *ids)
{
	gleGetCurrent()->glDeleteTransformFeedbacks( n, ids );
}

void glDrawTransformFeedback(GLenum mode, GLuint id)
{
	gleGetCurrent()->glDrawTransformFeedback( mode, id );
}

void glGenTransformFeedbacks(GLsizei n, GLuint *ids)
{
	gleGetCurrent()->glGenTransformFeedbacks( n, ids );
}

GLboolean glIsTransformFeedback(GLuint id)
{
	return gleGetCurrent()->glIsTransformFeedback( id );
}

void glPauseTransformFeedback(void)
{
	gleGetCurrent()->glPauseTransformFeedback(  );
}

void glResumeTransformFeedback(void)
{
	gleGetCurrent()->glResumeTransformFeedback(  );
}




// ********* GL_ARB_transform_feedback3 *********
bool isGL_ARB_transform_feedback3()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_transform_feedback3;

	return isSupported;
}


void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id)
{
	gleGetCurrent()->glBeginQueryIndexed( target, index, id );
}

void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream)
{
	gleGetCurrent()->glDrawTransformFeedbackStream( mode, id, stream );
}

void glEndQueryIndexed(GLenum target, GLuint index)
{
	gleGetCurrent()->glEndQueryIndexed( target, index );
}

void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetQueryIndexediv( target, index, pname, params );
}




// ********* GL_ARB_transform_feedback_instanced *********
bool isGL_ARB_transform_feedback_instanced()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_transform_feedback_instanced;

	return isSupported;
}


void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei primcount)
{
	gleGetCurrent()->glDrawTransformFeedbackInstanced( mode, id, primcount );
}

void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei primcount)
{
	gleGetCurrent()->glDrawTransformFeedbackStreamInstanced( mode, id, stream, primcount );
}




// ********* GL_ARB_transpose_matrix *********
bool isGL_ARB_transpose_matrix()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_transpose_matrix;

	return isSupported;
}


void glLoadTransposeMatrixdARB(const GLdouble *m)
{
	gleGetCurrent()->glLoadTransposeMatrixdARB( m );
}

void glLoadTransposeMatrixfARB(const GLfloat *m)
{
	gleGetCurrent()->glLoadTransposeMatrixfARB( m );
}

void glMultTransposeMatrixdARB(const GLdouble *m)
{
	gleGetCurrent()->glMultTransposeMatrixdARB( m );
}

void glMultTransposeMatrixfARB(const GLfloat *m)
{
	gleGetCurrent()->glMultTransposeMatrixfARB( m );
}




// ********* GL_ARB_uniform_buffer_object *********
bool isGL_ARB_uniform_buffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_uniform_buffer_object;

	return isSupported;
}


void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName)
{
	gleGetCurrent()->glGetActiveUniformBlockName( program, uniformBlockIndex, bufSize, length, uniformBlockName );
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetActiveUniformBlockiv( program, uniformBlockIndex, pname, params );
}

void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName)
{
	gleGetCurrent()->glGetActiveUniformName( program, uniformIndex, bufSize, length, uniformName );
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetActiveUniformsiv( program, uniformCount, uniformIndices, pname, params );
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar *uniformBlockName)
{
	return gleGetCurrent()->glGetUniformBlockIndex( program, uniformBlockName );
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar* *uniformNames, GLuint *uniformIndices)
{
	gleGetCurrent()->glGetUniformIndices( program, uniformCount, uniformNames, uniformIndices );
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
	gleGetCurrent()->glUniformBlockBinding( program, uniformBlockIndex, uniformBlockBinding );
}




// ********* GL_ARB_vertex_array_bgra *********
bool isGL_ARB_vertex_array_bgra()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_array_bgra;

	return isSupported;
}




// ********* GL_ARB_vertex_array_object *********
bool isGL_ARB_vertex_array_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_array_object;

	return isSupported;
}


void glBindVertexArray(GLuint array)
{
	gleGetCurrent()->glBindVertexArray( array );
}

void glDeleteVertexArrays(GLsizei n, const GLuint *arrays)
{
	gleGetCurrent()->glDeleteVertexArrays( n, arrays );
}

void glGenVertexArrays(GLsizei n, GLuint *arrays)
{
	gleGetCurrent()->glGenVertexArrays( n, arrays );
}

GLboolean glIsVertexArray(GLuint array)
{
	return gleGetCurrent()->glIsVertexArray( array );
}




// ********* GL_ARB_vertex_attrib_64bit *********
bool isGL_ARB_vertex_attrib_64bit()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_attrib_64bit;

	return isSupported;
}


void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble *params)
{
	gleGetCurrent()->glGetVertexAttribLdv( index, pname, params );
}

void glVertexAttribL1d(GLuint index, GLdouble x)
{
	gleGetCurrent()->glVertexAttribL1d( index, x );
}

void glVertexAttribL1dv(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribL1dv( index, v );
}

void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y)
{
	gleGetCurrent()->glVertexAttribL2d( index, x, y );
}

void glVertexAttribL2dv(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribL2dv( index, v );
}

void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glVertexAttribL3d( index, x, y, z );
}

void glVertexAttribL3dv(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribL3dv( index, v );
}

void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glVertexAttribL4d( index, x, y, z, w );
}

void glVertexAttribL4dv(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribL4dv( index, v );
}

void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexAttribLPointer( index, size, type, stride, pointer );
}




// ********* GL_ARB_vertex_blend *********
bool isGL_ARB_vertex_blend()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_blend;

	return isSupported;
}


void glVertexBlendARB(GLint count)
{
	gleGetCurrent()->glVertexBlendARB( count );
}

void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glWeightPointerARB( size, type, stride, pointer );
}

void glWeightbvARB(GLint size, const GLbyte *weights)
{
	gleGetCurrent()->glWeightbvARB( size, weights );
}

void glWeightdvARB(GLint size, const GLdouble *weights)
{
	gleGetCurrent()->glWeightdvARB( size, weights );
}

void glWeightfvARB(GLint size, const GLfloat *weights)
{
	gleGetCurrent()->glWeightfvARB( size, weights );
}

void glWeightivARB(GLint size, const GLint *weights)
{
	gleGetCurrent()->glWeightivARB( size, weights );
}

void glWeightsvARB(GLint size, const GLshort *weights)
{
	gleGetCurrent()->glWeightsvARB( size, weights );
}

void glWeightubvARB(GLint size, const GLubyte *weights)
{
	gleGetCurrent()->glWeightubvARB( size, weights );
}

void glWeightuivARB(GLint size, const GLuint *weights)
{
	gleGetCurrent()->glWeightuivARB( size, weights );
}

void glWeightusvARB(GLint size, const GLushort *weights)
{
	gleGetCurrent()->glWeightusvARB( size, weights );
}




// ********* GL_ARB_vertex_buffer_object *********
bool isGL_ARB_vertex_buffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_buffer_object;

	return isSupported;
}


void glBindBufferARB(GLenum target, GLuint buffer)
{
	gleGetCurrent()->glBindBufferARB( target, buffer );
}

void glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage)
{
	gleGetCurrent()->glBufferDataARB( target, size, data, usage );
}

void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data)
{
	gleGetCurrent()->glBufferSubDataARB( target, offset, size, data );
}

void glDeleteBuffersARB(GLsizei n, const GLuint *buffers)
{
	gleGetCurrent()->glDeleteBuffersARB( n, buffers );
}

void glGenBuffersARB(GLsizei n, GLuint *buffers)
{
	gleGetCurrent()->glGenBuffersARB( n, buffers );
}

void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetBufferParameterivARB( target, pname, params );
}

void glGetBufferPointervARB(GLenum target, GLenum pname, GLvoid* *params)
{
	gleGetCurrent()->glGetBufferPointervARB( target, pname, params );
}

void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data)
{
	gleGetCurrent()->glGetBufferSubDataARB( target, offset, size, data );
}

GLboolean glIsBufferARB(GLuint buffer)
{
	return gleGetCurrent()->glIsBufferARB( buffer );
}

GLvoid* glMapBufferARB(GLenum target, GLenum access)
{
	return gleGetCurrent()->glMapBufferARB( target, access );
}

GLboolean glUnmapBufferARB(GLenum target)
{
	return gleGetCurrent()->glUnmapBufferARB( target );
}




// ********* GL_ARB_vertex_program *********
bool isGL_ARB_vertex_program()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_program;

	return isSupported;
}


void glBindProgramARB(GLenum target, GLuint program)
{
	gleGetCurrent()->glBindProgramARB( target, program );
}

void glDeleteProgramsARB(GLsizei n, const GLuint *programs)
{
	gleGetCurrent()->glDeleteProgramsARB( n, programs );
}

void glDisableVertexAttribArrayARB(GLuint index)
{
	gleGetCurrent()->glDisableVertexAttribArrayARB( index );
}

void glEnableVertexAttribArrayARB(GLuint index)
{
	gleGetCurrent()->glEnableVertexAttribArrayARB( index );
}

void glGenProgramsARB(GLsizei n, GLuint *programs)
{
	gleGetCurrent()->glGenProgramsARB( n, programs );
}

void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble *params)
{
	gleGetCurrent()->glGetProgramEnvParameterdvARB( target, index, params );
}

void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat *params)
{
	gleGetCurrent()->glGetProgramEnvParameterfvARB( target, index, params );
}

void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble *params)
{
	gleGetCurrent()->glGetProgramLocalParameterdvARB( target, index, params );
}

void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat *params)
{
	gleGetCurrent()->glGetProgramLocalParameterfvARB( target, index, params );
}

void glGetProgramStringARB(GLenum target, GLenum pname, GLvoid *string)
{
	gleGetCurrent()->glGetProgramStringARB( target, pname, string );
}

void glGetProgramivARB(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetProgramivARB( target, pname, params );
}

void glGetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid* *pointer)
{
	gleGetCurrent()->glGetVertexAttribPointervARB( index, pname, pointer );
}

void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble *params)
{
	gleGetCurrent()->glGetVertexAttribdvARB( index, pname, params );
}

void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetVertexAttribfvARB( index, pname, params );
}

void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVertexAttribivARB( index, pname, params );
}

GLboolean glIsProgramARB(GLuint program)
{
	return gleGetCurrent()->glIsProgramARB( program );
}

void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glProgramEnvParameter4dARB( target, index, x, y, z, w );
}

void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble *params)
{
	gleGetCurrent()->glProgramEnvParameter4dvARB( target, index, params );
}

void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glProgramEnvParameter4fARB( target, index, x, y, z, w );
}

void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat *params)
{
	gleGetCurrent()->glProgramEnvParameter4fvARB( target, index, params );
}

void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glProgramLocalParameter4dARB( target, index, x, y, z, w );
}

void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble *params)
{
	gleGetCurrent()->glProgramLocalParameter4dvARB( target, index, params );
}

void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glProgramLocalParameter4fARB( target, index, x, y, z, w );
}

void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params)
{
	gleGetCurrent()->glProgramLocalParameter4fvARB( target, index, params );
}

void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid *string)
{
	gleGetCurrent()->glProgramStringARB( target, format, len, string );
}

void glVertexAttrib1dARB(GLuint index, GLdouble x)
{
	gleGetCurrent()->glVertexAttrib1dARB( index, x );
}

void glVertexAttrib1dvARB(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib1dvARB( index, v );
}

void glVertexAttrib1fARB(GLuint index, GLfloat x)
{
	gleGetCurrent()->glVertexAttrib1fARB( index, x );
}

void glVertexAttrib1fvARB(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib1fvARB( index, v );
}

void glVertexAttrib1sARB(GLuint index, GLshort x)
{
	gleGetCurrent()->glVertexAttrib1sARB( index, x );
}

void glVertexAttrib1svARB(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib1svARB( index, v );
}

void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
	gleGetCurrent()->glVertexAttrib2dARB( index, x, y );
}

void glVertexAttrib2dvARB(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib2dvARB( index, v );
}

void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
	gleGetCurrent()->glVertexAttrib2fARB( index, x, y );
}

void glVertexAttrib2fvARB(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib2fvARB( index, v );
}

void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
	gleGetCurrent()->glVertexAttrib2sARB( index, x, y );
}

void glVertexAttrib2svARB(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib2svARB( index, v );
}

void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glVertexAttrib3dARB( index, x, y, z );
}

void glVertexAttrib3dvARB(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib3dvARB( index, v );
}

void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glVertexAttrib3fARB( index, x, y, z );
}

void glVertexAttrib3fvARB(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib3fvARB( index, v );
}

void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
	gleGetCurrent()->glVertexAttrib3sARB( index, x, y, z );
}

void glVertexAttrib3svARB(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib3svARB( index, v );
}

void glVertexAttrib4NbvARB(GLuint index, const GLbyte *v)
{
	gleGetCurrent()->glVertexAttrib4NbvARB( index, v );
}

void glVertexAttrib4NivARB(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttrib4NivARB( index, v );
}

void glVertexAttrib4NsvARB(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib4NsvARB( index, v );
}

void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	gleGetCurrent()->glVertexAttrib4NubARB( index, x, y, z, w );
}

void glVertexAttrib4NubvARB(GLuint index, const GLubyte *v)
{
	gleGetCurrent()->glVertexAttrib4NubvARB( index, v );
}

void glVertexAttrib4NuivARB(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttrib4NuivARB( index, v );
}

void glVertexAttrib4NusvARB(GLuint index, const GLushort *v)
{
	gleGetCurrent()->glVertexAttrib4NusvARB( index, v );
}

void glVertexAttrib4bvARB(GLuint index, const GLbyte *v)
{
	gleGetCurrent()->glVertexAttrib4bvARB( index, v );
}

void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glVertexAttrib4dARB( index, x, y, z, w );
}

void glVertexAttrib4dvARB(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib4dvARB( index, v );
}

void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glVertexAttrib4fARB( index, x, y, z, w );
}

void glVertexAttrib4fvARB(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib4fvARB( index, v );
}

void glVertexAttrib4ivARB(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttrib4ivARB( index, v );
}

void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	gleGetCurrent()->glVertexAttrib4sARB( index, x, y, z, w );
}

void glVertexAttrib4svARB(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib4svARB( index, v );
}

void glVertexAttrib4ubvARB(GLuint index, const GLubyte *v)
{
	gleGetCurrent()->glVertexAttrib4ubvARB( index, v );
}

void glVertexAttrib4uivARB(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttrib4uivARB( index, v );
}

void glVertexAttrib4usvARB(GLuint index, const GLushort *v)
{
	gleGetCurrent()->glVertexAttrib4usvARB( index, v );
}

void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexAttribPointerARB( index, size, type, normalized, stride, pointer );
}




// ********* GL_ARB_vertex_shader *********
bool isGL_ARB_vertex_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_shader;

	return isSupported;
}


void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB *name)
{
	gleGetCurrent()->glBindAttribLocationARB( programObj, index, name );
}

void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name)
{
	gleGetCurrent()->glGetActiveAttribARB( programObj, index, maxLength, length, size, type, name );
}

GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB *name)
{
	return gleGetCurrent()->glGetAttribLocationARB( programObj, name );
}




// ********* GL_ARB_vertex_type_2_10_10_10_rev *********
bool isGL_ARB_vertex_type_2_10_10_10_rev()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_type_2_10_10_10_rev;

	return isSupported;
}


void glColorP3ui(GLenum type, GLuint color)
{
	gleGetCurrent()->glColorP3ui( type, color );
}

void glColorP3uiv(GLenum type, const GLuint *color)
{
	gleGetCurrent()->glColorP3uiv( type, color );
}

void glColorP4ui(GLenum type, GLuint color)
{
	gleGetCurrent()->glColorP4ui( type, color );
}

void glColorP4uiv(GLenum type, const GLuint *color)
{
	gleGetCurrent()->glColorP4uiv( type, color );
}

void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords)
{
	gleGetCurrent()->glMultiTexCoordP1ui( texture, type, coords );
}

void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint *coords)
{
	gleGetCurrent()->glMultiTexCoordP1uiv( texture, type, coords );
}

void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords)
{
	gleGetCurrent()->glMultiTexCoordP2ui( texture, type, coords );
}

void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint *coords)
{
	gleGetCurrent()->glMultiTexCoordP2uiv( texture, type, coords );
}

void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords)
{
	gleGetCurrent()->glMultiTexCoordP3ui( texture, type, coords );
}

void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint *coords)
{
	gleGetCurrent()->glMultiTexCoordP3uiv( texture, type, coords );
}

void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords)
{
	gleGetCurrent()->glMultiTexCoordP4ui( texture, type, coords );
}

void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint *coords)
{
	gleGetCurrent()->glMultiTexCoordP4uiv( texture, type, coords );
}

void glNormalP3ui(GLenum type, GLuint coords)
{
	gleGetCurrent()->glNormalP3ui( type, coords );
}

void glNormalP3uiv(GLenum type, const GLuint *coords)
{
	gleGetCurrent()->glNormalP3uiv( type, coords );
}

void glSecondaryColorP3ui(GLenum type, GLuint color)
{
	gleGetCurrent()->glSecondaryColorP3ui( type, color );
}

void glSecondaryColorP3uiv(GLenum type, const GLuint *color)
{
	gleGetCurrent()->glSecondaryColorP3uiv( type, color );
}

void glTexCoordP1ui(GLenum type, GLuint coords)
{
	gleGetCurrent()->glTexCoordP1ui( type, coords );
}

void glTexCoordP1uiv(GLenum type, const GLuint *coords)
{
	gleGetCurrent()->glTexCoordP1uiv( type, coords );
}

void glTexCoordP2ui(GLenum type, GLuint coords)
{
	gleGetCurrent()->glTexCoordP2ui( type, coords );
}

void glTexCoordP2uiv(GLenum type, const GLuint *coords)
{
	gleGetCurrent()->glTexCoordP2uiv( type, coords );
}

void glTexCoordP3ui(GLenum type, GLuint coords)
{
	gleGetCurrent()->glTexCoordP3ui( type, coords );
}

void glTexCoordP3uiv(GLenum type, const GLuint *coords)
{
	gleGetCurrent()->glTexCoordP3uiv( type, coords );
}

void glTexCoordP4ui(GLenum type, GLuint coords)
{
	gleGetCurrent()->glTexCoordP4ui( type, coords );
}

void glTexCoordP4uiv(GLenum type, const GLuint *coords)
{
	gleGetCurrent()->glTexCoordP4uiv( type, coords );
}

void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	gleGetCurrent()->glVertexAttribP1ui( index, type, normalized, value );
}

void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value)
{
	gleGetCurrent()->glVertexAttribP1uiv( index, type, normalized, value );
}

void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	gleGetCurrent()->glVertexAttribP2ui( index, type, normalized, value );
}

void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value)
{
	gleGetCurrent()->glVertexAttribP2uiv( index, type, normalized, value );
}

void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	gleGetCurrent()->glVertexAttribP3ui( index, type, normalized, value );
}

void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value)
{
	gleGetCurrent()->glVertexAttribP3uiv( index, type, normalized, value );
}

void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
	gleGetCurrent()->glVertexAttribP4ui( index, type, normalized, value );
}

void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value)
{
	gleGetCurrent()->glVertexAttribP4uiv( index, type, normalized, value );
}

void glVertexP2ui(GLenum type, GLuint value)
{
	gleGetCurrent()->glVertexP2ui( type, value );
}

void glVertexP2uiv(GLenum type, const GLuint *value)
{
	gleGetCurrent()->glVertexP2uiv( type, value );
}

void glVertexP3ui(GLenum type, GLuint value)
{
	gleGetCurrent()->glVertexP3ui( type, value );
}

void glVertexP3uiv(GLenum type, const GLuint *value)
{
	gleGetCurrent()->glVertexP3uiv( type, value );
}

void glVertexP4ui(GLenum type, GLuint value)
{
	gleGetCurrent()->glVertexP4ui( type, value );
}

void glVertexP4uiv(GLenum type, const GLuint *value)
{
	gleGetCurrent()->glVertexP4uiv( type, value );
}




// ********* GL_ARB_viewport_array *********
bool isGL_ARB_viewport_array()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_viewport_array;

	return isSupported;
}


void glDepthRangeArrayv(GLuint first, GLsizei count, const GLclampd *v)
{
	gleGetCurrent()->glDepthRangeArrayv( first, count, v );
}

void glDepthRangeIndexed(GLuint index, GLclampd n, GLclampd f)
{
	gleGetCurrent()->glDepthRangeIndexed( index, n, f );
}

void glGetDoublei_v(GLenum target, GLuint index, GLdouble *data)
{
	gleGetCurrent()->glGetDoublei_v( target, index, data );
}

void glGetFloati_v(GLenum target, GLuint index, GLfloat *data)
{
	gleGetCurrent()->glGetFloati_v( target, index, data );
}

void glScissorArrayv(GLuint first, GLsizei count, const GLint *v)
{
	gleGetCurrent()->glScissorArrayv( first, count, v );
}

void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glScissorIndexed( index, left, bottom, width, height );
}

void glScissorIndexedv(GLuint index, const GLint *v)
{
	gleGetCurrent()->glScissorIndexedv( index, v );
}

void glViewportArrayv(GLuint first, GLsizei count, const GLfloat *v)
{
	gleGetCurrent()->glViewportArrayv( first, count, v );
}

void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
	gleGetCurrent()->glViewportIndexedf( index, x, y, w, h );
}

void glViewportIndexedfv(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glViewportIndexedfv( index, v );
}




// ********* GL_ARB_window_pos *********
bool isGL_ARB_window_pos()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_window_pos;

	return isSupported;
}


void glWindowPos2dARB(GLdouble x, GLdouble y)
{
	gleGetCurrent()->glWindowPos2dARB( x, y );
}

void glWindowPos2dvARB(const GLdouble *v)
{
	gleGetCurrent()->glWindowPos2dvARB( v );
}

void glWindowPos2fARB(GLfloat x, GLfloat y)
{
	gleGetCurrent()->glWindowPos2fARB( x, y );
}

void glWindowPos2fvARB(const GLfloat *v)
{
	gleGetCurrent()->glWindowPos2fvARB( v );
}

void glWindowPos2iARB(GLint x, GLint y)
{
	gleGetCurrent()->glWindowPos2iARB( x, y );
}

void glWindowPos2ivARB(const GLint *v)
{
	gleGetCurrent()->glWindowPos2ivARB( v );
}

void glWindowPos2sARB(GLshort x, GLshort y)
{
	gleGetCurrent()->glWindowPos2sARB( x, y );
}

void glWindowPos2svARB(const GLshort *v)
{
	gleGetCurrent()->glWindowPos2svARB( v );
}

void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glWindowPos3dARB( x, y, z );
}

void glWindowPos3dvARB(const GLdouble *v)
{
	gleGetCurrent()->glWindowPos3dvARB( v );
}

void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glWindowPos3fARB( x, y, z );
}

void glWindowPos3fvARB(const GLfloat *v)
{
	gleGetCurrent()->glWindowPos3fvARB( v );
}

void glWindowPos3iARB(GLint x, GLint y, GLint z)
{
	gleGetCurrent()->glWindowPos3iARB( x, y, z );
}

void glWindowPos3ivARB(const GLint *v)
{
	gleGetCurrent()->glWindowPos3ivARB( v );
}

void glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
	gleGetCurrent()->glWindowPos3sARB( x, y, z );
}

void glWindowPos3svARB(const GLshort *v)
{
	gleGetCurrent()->glWindowPos3svARB( v );
}




// ********* GL_ATI_draw_buffers *********
bool isGL_ATI_draw_buffers()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_draw_buffers;

	return isSupported;
}


void glDrawBuffersATI(GLsizei n, const GLenum *bufs)
{
	gleGetCurrent()->glDrawBuffersATI( n, bufs );
}




// ********* GL_ATI_element_array *********
bool isGL_ATI_element_array()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_element_array;

	return isSupported;
}


void glDrawElementArrayATI(GLenum mode, GLsizei count)
{
	gleGetCurrent()->glDrawElementArrayATI( mode, count );
}

void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count)
{
	gleGetCurrent()->glDrawRangeElementArrayATI( mode, start, end, count );
}

void glElementPointerATI(GLenum type, const GLvoid *pointer)
{
	gleGetCurrent()->glElementPointerATI( type, pointer );
}




// ********* GL_ATI_envmap_bumpmap *********
bool isGL_ATI_envmap_bumpmap()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_envmap_bumpmap;

	return isSupported;
}


void glGetTexBumpParameterfvATI(GLenum pname, GLfloat *param)
{
	gleGetCurrent()->glGetTexBumpParameterfvATI( pname, param );
}

void glGetTexBumpParameterivATI(GLenum pname, GLint *param)
{
	gleGetCurrent()->glGetTexBumpParameterivATI( pname, param );
}

void glTexBumpParameterfvATI(GLenum pname, const GLfloat *param)
{
	gleGetCurrent()->glTexBumpParameterfvATI( pname, param );
}

void glTexBumpParameterivATI(GLenum pname, const GLint *param)
{
	gleGetCurrent()->glTexBumpParameterivATI( pname, param );
}




// ********* GL_ATI_fragment_shader *********
bool isGL_ATI_fragment_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_fragment_shader;

	return isSupported;
}


void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
	gleGetCurrent()->glAlphaFragmentOp1ATI( op, dst, dstMod, arg1, arg1Rep, arg1Mod );
}

void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
	gleGetCurrent()->glAlphaFragmentOp2ATI( op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod );
}

void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
	gleGetCurrent()->glAlphaFragmentOp3ATI( op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod );
}

void glBeginFragmentShaderATI(void)
{
	gleGetCurrent()->glBeginFragmentShaderATI(  );
}

void glBindFragmentShaderATI(GLuint id)
{
	gleGetCurrent()->glBindFragmentShaderATI( id );
}

void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod)
{
	gleGetCurrent()->glColorFragmentOp1ATI( op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod );
}

void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod)
{
	gleGetCurrent()->glColorFragmentOp2ATI( op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod );
}

void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod)
{
	gleGetCurrent()->glColorFragmentOp3ATI( op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod );
}

void glDeleteFragmentShaderATI(GLuint id)
{
	gleGetCurrent()->glDeleteFragmentShaderATI( id );
}

void glEndFragmentShaderATI(void)
{
	gleGetCurrent()->glEndFragmentShaderATI(  );
}

GLuint glGenFragmentShadersATI(GLuint range)
{
	return gleGetCurrent()->glGenFragmentShadersATI( range );
}

void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle)
{
	gleGetCurrent()->glPassTexCoordATI( dst, coord, swizzle );
}

void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle)
{
	gleGetCurrent()->glSampleMapATI( dst, interp, swizzle );
}

void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat *value)
{
	gleGetCurrent()->glSetFragmentShaderConstantATI( dst, value );
}




// ********* GL_ATI_map_object_buffer *********
bool isGL_ATI_map_object_buffer()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_map_object_buffer;

	return isSupported;
}


GLvoid* glMapObjectBufferATI(GLuint buffer)
{
	return gleGetCurrent()->glMapObjectBufferATI( buffer );
}

void glUnmapObjectBufferATI(GLuint buffer)
{
	gleGetCurrent()->glUnmapObjectBufferATI( buffer );
}




// ********* GL_ATI_meminfo *********
bool isGL_ATI_meminfo()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_meminfo;

	return isSupported;
}




// ********* GL_ATI_pixel_format_float *********
bool isGL_ATI_pixel_format_float()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_pixel_format_float;

	return isSupported;
}




// ********* GL_ATI_pn_triangles *********
bool isGL_ATI_pn_triangles()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_pn_triangles;

	return isSupported;
}


void glPNTrianglesfATI(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glPNTrianglesfATI( pname, param );
}

void glPNTrianglesiATI(GLenum pname, GLint param)
{
	gleGetCurrent()->glPNTrianglesiATI( pname, param );
}




// ********* GL_ATI_separate_stencil *********
bool isGL_ATI_separate_stencil()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_separate_stencil;

	return isSupported;
}


void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
	gleGetCurrent()->glStencilFuncSeparateATI( frontfunc, backfunc, ref, mask );
}

void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
	gleGetCurrent()->glStencilOpSeparateATI( face, sfail, dpfail, dppass );
}




// ********* GL_ATI_text_fragment_shader *********
bool isGL_ATI_text_fragment_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_text_fragment_shader;

	return isSupported;
}




// ********* GL_ATI_texture_env_combine3 *********
bool isGL_ATI_texture_env_combine3()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_texture_env_combine3;

	return isSupported;
}




// ********* GL_ATI_texture_float *********
bool isGL_ATI_texture_float()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_texture_float;

	return isSupported;
}




// ********* GL_ATI_texture_mirror_once *********
bool isGL_ATI_texture_mirror_once()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_texture_mirror_once;

	return isSupported;
}




// ********* GL_ATI_vertex_array_object *********
bool isGL_ATI_vertex_array_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_vertex_array_object;

	return isSupported;
}


void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
	gleGetCurrent()->glArrayObjectATI( array, size, type, stride, buffer, offset );
}

void glFreeObjectBufferATI(GLuint buffer)
{
	gleGetCurrent()->glFreeObjectBufferATI( buffer );
}

void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetArrayObjectfvATI( array, pname, params );
}

void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetArrayObjectivATI( array, pname, params );
}

void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetObjectBufferfvATI( buffer, pname, params );
}

void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetObjectBufferivATI( buffer, pname, params );
}

void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetVariantArrayObjectfvATI( id, pname, params );
}

void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVariantArrayObjectivATI( id, pname, params );
}

GLboolean glIsObjectBufferATI(GLuint buffer)
{
	return gleGetCurrent()->glIsObjectBufferATI( buffer );
}

GLuint glNewObjectBufferATI(GLsizei size, const GLvoid *pointer, GLenum usage)
{
	return gleGetCurrent()->glNewObjectBufferATI( size, pointer, usage );
}

void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve)
{
	gleGetCurrent()->glUpdateObjectBufferATI( buffer, offset, size, pointer, preserve );
}

void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset)
{
	gleGetCurrent()->glVariantArrayObjectATI( id, type, stride, buffer, offset );
}




// ********* GL_ATI_vertex_attrib_array_object *********
bool isGL_ATI_vertex_attrib_array_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_vertex_attrib_array_object;

	return isSupported;
}


void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetVertexAttribArrayObjectfvATI( index, pname, params );
}

void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVertexAttribArrayObjectivATI( index, pname, params );
}

void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset)
{
	gleGetCurrent()->glVertexAttribArrayObjectATI( index, size, type, normalized, stride, buffer, offset );
}




// ********* GL_ATI_vertex_streams *********
bool isGL_ATI_vertex_streams()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_vertex_streams;

	return isSupported;
}


void glClientActiveVertexStreamATI(GLenum stream)
{
	gleGetCurrent()->glClientActiveVertexStreamATI( stream );
}

void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz)
{
	gleGetCurrent()->glNormalStream3bATI( stream, nx, ny, nz );
}

void glNormalStream3bvATI(GLenum stream, const GLbyte *coords)
{
	gleGetCurrent()->glNormalStream3bvATI( stream, coords );
}

void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz)
{
	gleGetCurrent()->glNormalStream3dATI( stream, nx, ny, nz );
}

void glNormalStream3dvATI(GLenum stream, const GLdouble *coords)
{
	gleGetCurrent()->glNormalStream3dvATI( stream, coords );
}

void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz)
{
	gleGetCurrent()->glNormalStream3fATI( stream, nx, ny, nz );
}

void glNormalStream3fvATI(GLenum stream, const GLfloat *coords)
{
	gleGetCurrent()->glNormalStream3fvATI( stream, coords );
}

void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz)
{
	gleGetCurrent()->glNormalStream3iATI( stream, nx, ny, nz );
}

void glNormalStream3ivATI(GLenum stream, const GLint *coords)
{
	gleGetCurrent()->glNormalStream3ivATI( stream, coords );
}

void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz)
{
	gleGetCurrent()->glNormalStream3sATI( stream, nx, ny, nz );
}

void glNormalStream3svATI(GLenum stream, const GLshort *coords)
{
	gleGetCurrent()->glNormalStream3svATI( stream, coords );
}

void glVertexBlendEnvfATI(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glVertexBlendEnvfATI( pname, param );
}

void glVertexBlendEnviATI(GLenum pname, GLint param)
{
	gleGetCurrent()->glVertexBlendEnviATI( pname, param );
}

void glVertexStream1dATI(GLenum stream, GLdouble x)
{
	gleGetCurrent()->glVertexStream1dATI( stream, x );
}

void glVertexStream1dvATI(GLenum stream, const GLdouble *coords)
{
	gleGetCurrent()->glVertexStream1dvATI( stream, coords );
}

void glVertexStream1fATI(GLenum stream, GLfloat x)
{
	gleGetCurrent()->glVertexStream1fATI( stream, x );
}

void glVertexStream1fvATI(GLenum stream, const GLfloat *coords)
{
	gleGetCurrent()->glVertexStream1fvATI( stream, coords );
}

void glVertexStream1iATI(GLenum stream, GLint x)
{
	gleGetCurrent()->glVertexStream1iATI( stream, x );
}

void glVertexStream1ivATI(GLenum stream, const GLint *coords)
{
	gleGetCurrent()->glVertexStream1ivATI( stream, coords );
}

void glVertexStream1sATI(GLenum stream, GLshort x)
{
	gleGetCurrent()->glVertexStream1sATI( stream, x );
}

void glVertexStream1svATI(GLenum stream, const GLshort *coords)
{
	gleGetCurrent()->glVertexStream1svATI( stream, coords );
}

void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y)
{
	gleGetCurrent()->glVertexStream2dATI( stream, x, y );
}

void glVertexStream2dvATI(GLenum stream, const GLdouble *coords)
{
	gleGetCurrent()->glVertexStream2dvATI( stream, coords );
}

void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y)
{
	gleGetCurrent()->glVertexStream2fATI( stream, x, y );
}

void glVertexStream2fvATI(GLenum stream, const GLfloat *coords)
{
	gleGetCurrent()->glVertexStream2fvATI( stream, coords );
}

void glVertexStream2iATI(GLenum stream, GLint x, GLint y)
{
	gleGetCurrent()->glVertexStream2iATI( stream, x, y );
}

void glVertexStream2ivATI(GLenum stream, const GLint *coords)
{
	gleGetCurrent()->glVertexStream2ivATI( stream, coords );
}

void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y)
{
	gleGetCurrent()->glVertexStream2sATI( stream, x, y );
}

void glVertexStream2svATI(GLenum stream, const GLshort *coords)
{
	gleGetCurrent()->glVertexStream2svATI( stream, coords );
}

void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glVertexStream3dATI( stream, x, y, z );
}

void glVertexStream3dvATI(GLenum stream, const GLdouble *coords)
{
	gleGetCurrent()->glVertexStream3dvATI( stream, coords );
}

void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glVertexStream3fATI( stream, x, y, z );
}

void glVertexStream3fvATI(GLenum stream, const GLfloat *coords)
{
	gleGetCurrent()->glVertexStream3fvATI( stream, coords );
}

void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z)
{
	gleGetCurrent()->glVertexStream3iATI( stream, x, y, z );
}

void glVertexStream3ivATI(GLenum stream, const GLint *coords)
{
	gleGetCurrent()->glVertexStream3ivATI( stream, coords );
}

void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z)
{
	gleGetCurrent()->glVertexStream3sATI( stream, x, y, z );
}

void glVertexStream3svATI(GLenum stream, const GLshort *coords)
{
	gleGetCurrent()->glVertexStream3svATI( stream, coords );
}

void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glVertexStream4dATI( stream, x, y, z, w );
}

void glVertexStream4dvATI(GLenum stream, const GLdouble *coords)
{
	gleGetCurrent()->glVertexStream4dvATI( stream, coords );
}

void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glVertexStream4fATI( stream, x, y, z, w );
}

void glVertexStream4fvATI(GLenum stream, const GLfloat *coords)
{
	gleGetCurrent()->glVertexStream4fvATI( stream, coords );
}

void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w)
{
	gleGetCurrent()->glVertexStream4iATI( stream, x, y, z, w );
}

void glVertexStream4ivATI(GLenum stream, const GLint *coords)
{
	gleGetCurrent()->glVertexStream4ivATI( stream, coords );
}

void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w)
{
	gleGetCurrent()->glVertexStream4sATI( stream, x, y, z, w );
}

void glVertexStream4svATI(GLenum stream, const GLshort *coords)
{
	gleGetCurrent()->glVertexStream4svATI( stream, coords );
}




// ********* GL_EXT_422_pixels *********
bool isGL_EXT_422_pixels()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_422_pixels;

	return isSupported;
}




// ********* GL_EXT_abgr *********
bool isGL_EXT_abgr()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_abgr;

	return isSupported;
}




// ********* GL_EXT_bgra *********
bool isGL_EXT_bgra()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_bgra;

	return isSupported;
}




// ********* GL_EXT_bindable_uniform *********
bool isGL_EXT_bindable_uniform()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_bindable_uniform;

	return isSupported;
}


GLint glGetUniformBufferSizeEXT(GLuint program, GLint location)
{
	return gleGetCurrent()->glGetUniformBufferSizeEXT( program, location );
}

GLintptr glGetUniformOffsetEXT(GLuint program, GLint location)
{
	return gleGetCurrent()->glGetUniformOffsetEXT( program, location );
}

void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer)
{
	gleGetCurrent()->glUniformBufferEXT( program, location, buffer );
}




// ********* GL_EXT_blend_color *********
bool isGL_EXT_blend_color()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_blend_color;

	return isSupported;
}


void glBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	gleGetCurrent()->glBlendColorEXT( red, green, blue, alpha );
}




// ********* GL_EXT_blend_equation_separate *********
bool isGL_EXT_blend_equation_separate()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_blend_equation_separate;

	return isSupported;
}


void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
	gleGetCurrent()->glBlendEquationSeparateEXT( modeRGB, modeAlpha );
}




// ********* GL_EXT_blend_func_separate *********
bool isGL_EXT_blend_func_separate()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_blend_func_separate;

	return isSupported;
}


void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	gleGetCurrent()->glBlendFuncSeparateEXT( sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha );
}




// ********* GL_EXT_blend_logic_op *********
bool isGL_EXT_blend_logic_op()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_blend_logic_op;

	return isSupported;
}




// ********* GL_EXT_blend_minmax *********
bool isGL_EXT_blend_minmax()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_blend_minmax;

	return isSupported;
}


void glBlendEquationEXT(GLenum mode)
{
	gleGetCurrent()->glBlendEquationEXT( mode );
}




// ********* GL_EXT_blend_subtract *********
bool isGL_EXT_blend_subtract()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_blend_subtract;

	return isSupported;
}




// ********* GL_EXT_clip_volume_hint *********
bool isGL_EXT_clip_volume_hint()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_clip_volume_hint;

	return isSupported;
}




// ********* GL_EXT_cmyka *********
bool isGL_EXT_cmyka()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_cmyka;

	return isSupported;
}




// ********* GL_EXT_color_subtable *********
bool isGL_EXT_color_subtable()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_color_subtable;

	return isSupported;
}


void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data)
{
	gleGetCurrent()->glColorSubTableEXT( target, start, count, format, type, data );
}

void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
	gleGetCurrent()->glCopyColorSubTableEXT( target, start, x, y, width );
}




// ********* GL_EXT_compiled_vertex_array *********
bool isGL_EXT_compiled_vertex_array()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_compiled_vertex_array;

	return isSupported;
}


void glLockArraysEXT(GLint first, GLsizei count)
{
	gleGetCurrent()->glLockArraysEXT( first, count );
}

void glUnlockArraysEXT(void)
{
	gleGetCurrent()->glUnlockArraysEXT(  );
}




// ********* GL_EXT_convolution *********
bool isGL_EXT_convolution()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_convolution;

	return isSupported;
}


void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image)
{
	gleGetCurrent()->glConvolutionFilter1DEXT( target, internalformat, width, format, type, image );
}

void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image)
{
	gleGetCurrent()->glConvolutionFilter2DEXT( target, internalformat, width, height, format, type, image );
}

void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params)
{
	gleGetCurrent()->glConvolutionParameterfEXT( target, pname, params );
}

void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glConvolutionParameterfvEXT( target, pname, params );
}

void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params)
{
	gleGetCurrent()->glConvolutionParameteriEXT( target, pname, params );
}

void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glConvolutionParameterivEXT( target, pname, params );
}

void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	gleGetCurrent()->glCopyConvolutionFilter1DEXT( target, internalformat, x, y, width );
}

void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glCopyConvolutionFilter2DEXT( target, internalformat, x, y, width, height );
}

void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, GLvoid *image)
{
	gleGetCurrent()->glGetConvolutionFilterEXT( target, format, type, image );
}

void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetConvolutionParameterfvEXT( target, pname, params );
}

void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetConvolutionParameterivEXT( target, pname, params );
}

void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
{
	gleGetCurrent()->glGetSeparableFilterEXT( target, format, type, row, column, span );
}

void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column)
{
	gleGetCurrent()->glSeparableFilter2DEXT( target, internalformat, width, height, format, type, row, column );
}




// ********* GL_EXT_coordinate_frame *********
bool isGL_EXT_coordinate_frame()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_coordinate_frame;

	return isSupported;
}


void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz)
{
	gleGetCurrent()->glBinormal3bEXT( bx, by, bz );
}

void glBinormal3bvEXT(const GLbyte *v)
{
	gleGetCurrent()->glBinormal3bvEXT( v );
}

void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz)
{
	gleGetCurrent()->glBinormal3dEXT( bx, by, bz );
}

void glBinormal3dvEXT(const GLdouble *v)
{
	gleGetCurrent()->glBinormal3dvEXT( v );
}

void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz)
{
	gleGetCurrent()->glBinormal3fEXT( bx, by, bz );
}

void glBinormal3fvEXT(const GLfloat *v)
{
	gleGetCurrent()->glBinormal3fvEXT( v );
}

void glBinormal3iEXT(GLint bx, GLint by, GLint bz)
{
	gleGetCurrent()->glBinormal3iEXT( bx, by, bz );
}

void glBinormal3ivEXT(const GLint *v)
{
	gleGetCurrent()->glBinormal3ivEXT( v );
}

void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz)
{
	gleGetCurrent()->glBinormal3sEXT( bx, by, bz );
}

void glBinormal3svEXT(const GLshort *v)
{
	gleGetCurrent()->glBinormal3svEXT( v );
}

void glBinormalPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glBinormalPointerEXT( type, stride, pointer );
}

void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz)
{
	gleGetCurrent()->glTangent3bEXT( tx, ty, tz );
}

void glTangent3bvEXT(const GLbyte *v)
{
	gleGetCurrent()->glTangent3bvEXT( v );
}

void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz)
{
	gleGetCurrent()->glTangent3dEXT( tx, ty, tz );
}

void glTangent3dvEXT(const GLdouble *v)
{
	gleGetCurrent()->glTangent3dvEXT( v );
}

void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz)
{
	gleGetCurrent()->glTangent3fEXT( tx, ty, tz );
}

void glTangent3fvEXT(const GLfloat *v)
{
	gleGetCurrent()->glTangent3fvEXT( v );
}

void glTangent3iEXT(GLint tx, GLint ty, GLint tz)
{
	gleGetCurrent()->glTangent3iEXT( tx, ty, tz );
}

void glTangent3ivEXT(const GLint *v)
{
	gleGetCurrent()->glTangent3ivEXT( v );
}

void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz)
{
	gleGetCurrent()->glTangent3sEXT( tx, ty, tz );
}

void glTangent3svEXT(const GLshort *v)
{
	gleGetCurrent()->glTangent3svEXT( v );
}

void glTangentPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glTangentPointerEXT( type, stride, pointer );
}




// ********* GL_EXT_copy_texture *********
bool isGL_EXT_copy_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_copy_texture;

	return isSupported;
}


void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	gleGetCurrent()->glCopyTexImage1DEXT( target, level, internalformat, x, y, width, border );
}

void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	gleGetCurrent()->glCopyTexImage2DEXT( target, level, internalformat, x, y, width, height, border );
}

void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	gleGetCurrent()->glCopyTexSubImage1DEXT( target, level, xoffset, x, y, width );
}

void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glCopyTexSubImage2DEXT( target, level, xoffset, yoffset, x, y, width, height );
}

void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glCopyTexSubImage3DEXT( target, level, xoffset, yoffset, zoffset, x, y, width, height );
}




// ********* GL_EXT_cull_vertex *********
bool isGL_EXT_cull_vertex()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_cull_vertex;

	return isSupported;
}


void glCullParameterdvEXT(GLenum pname, GLdouble *params)
{
	gleGetCurrent()->glCullParameterdvEXT( pname, params );
}

void glCullParameterfvEXT(GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glCullParameterfvEXT( pname, params );
}




// ********* GL_EXT_depth_bounds_test *********
bool isGL_EXT_depth_bounds_test()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_depth_bounds_test;

	return isSupported;
}


void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax)
{
	gleGetCurrent()->glDepthBoundsEXT( zmin, zmax );
}




// ********* GL_EXT_direct_state_access *********
bool isGL_EXT_direct_state_access()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_direct_state_access;

	return isSupported;
}


void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture)
{
	gleGetCurrent()->glBindMultiTextureEXT( texunit, target, texture );
}

GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target)
{
	return gleGetCurrent()->glCheckNamedFramebufferStatusEXT( framebuffer, target );
}

void glClientAttribDefaultEXT(GLbitfield mask)
{
	gleGetCurrent()->glClientAttribDefaultEXT( mask );
}

void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedMultiTexImage1DEXT( texunit, target, level, internalformat, width, border, imageSize, bits );
}

void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedMultiTexImage2DEXT( texunit, target, level, internalformat, width, height, border, imageSize, bits );
}

void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedMultiTexImage3DEXT( texunit, target, level, internalformat, width, height, depth, border, imageSize, bits );
}

void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedMultiTexSubImage1DEXT( texunit, target, level, xoffset, width, format, imageSize, bits );
}

void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedMultiTexSubImage2DEXT( texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits );
}

void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedMultiTexSubImage3DEXT( texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits );
}

void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedTextureImage1DEXT( texture, target, level, internalformat, width, border, imageSize, bits );
}

void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedTextureImage2DEXT( texture, target, level, internalformat, width, height, border, imageSize, bits );
}

void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedTextureImage3DEXT( texture, target, level, internalformat, width, height, depth, border, imageSize, bits );
}

void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedTextureSubImage1DEXT( texture, target, level, xoffset, width, format, imageSize, bits );
}

void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedTextureSubImage2DEXT( texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits );
}

void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits)
{
	gleGetCurrent()->glCompressedTextureSubImage3DEXT( texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits );
}

void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	gleGetCurrent()->glCopyMultiTexImage1DEXT( texunit, target, level, internalformat, x, y, width, border );
}

void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	gleGetCurrent()->glCopyMultiTexImage2DEXT( texunit, target, level, internalformat, x, y, width, height, border );
}

void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	gleGetCurrent()->glCopyMultiTexSubImage1DEXT( texunit, target, level, xoffset, x, y, width );
}

void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glCopyMultiTexSubImage2DEXT( texunit, target, level, xoffset, yoffset, x, y, width, height );
}

void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glCopyMultiTexSubImage3DEXT( texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height );
}

void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
	gleGetCurrent()->glCopyTextureImage1DEXT( texture, target, level, internalformat, x, y, width, border );
}

void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	gleGetCurrent()->glCopyTextureImage2DEXT( texture, target, level, internalformat, x, y, width, height, border );
}

void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	gleGetCurrent()->glCopyTextureSubImage1DEXT( texture, target, level, xoffset, x, y, width );
}

void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glCopyTextureSubImage2DEXT( texture, target, level, xoffset, yoffset, x, y, width, height );
}

void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glCopyTextureSubImage3DEXT( texture, target, level, xoffset, yoffset, zoffset, x, y, width, height );
}

void glDisableClientStateIndexedEXT(GLenum array, GLuint index)
{
	gleGetCurrent()->glDisableClientStateIndexedEXT( array, index );
}

void glEnableClientStateIndexedEXT(GLenum array, GLuint index)
{
	gleGetCurrent()->glEnableClientStateIndexedEXT( array, index );
}

void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length)
{
	gleGetCurrent()->glFlushMappedNamedBufferRangeEXT( buffer, offset, length );
}

void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode)
{
	gleGetCurrent()->glFramebufferDrawBufferEXT( framebuffer, mode );
}

void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum *bufs)
{
	gleGetCurrent()->glFramebufferDrawBuffersEXT( framebuffer, n, bufs );
}

void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode)
{
	gleGetCurrent()->glFramebufferReadBufferEXT( framebuffer, mode );
}

void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target)
{
	gleGetCurrent()->glGenerateMultiTexMipmapEXT( texunit, target );
}

void glGenerateTextureMipmapEXT(GLuint texture, GLenum target)
{
	gleGetCurrent()->glGenerateTextureMipmapEXT( texture, target );
}

void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, GLvoid *img)
{
	gleGetCurrent()->glGetCompressedMultiTexImageEXT( texunit, target, lod, img );
}

void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, GLvoid *img)
{
	gleGetCurrent()->glGetCompressedTextureImageEXT( texture, target, lod, img );
}

void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble *data)
{
	gleGetCurrent()->glGetDoubleIndexedvEXT( target, index, data );
}

void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat *data)
{
	gleGetCurrent()->glGetFloatIndexedvEXT( target, index, data );
}

void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetFramebufferParameterivEXT( framebuffer, pname, params );
}

void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetMultiTexEnvfvEXT( texunit, target, pname, params );
}

void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetMultiTexEnvivEXT( texunit, target, pname, params );
}

void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params)
{
	gleGetCurrent()->glGetMultiTexGendvEXT( texunit, coord, pname, params );
}

void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetMultiTexGenfvEXT( texunit, coord, pname, params );
}

void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetMultiTexGenivEXT( texunit, coord, pname, params );
}

void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
{
	gleGetCurrent()->glGetMultiTexImageEXT( texunit, target, level, format, type, pixels );
}

void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetMultiTexLevelParameterfvEXT( texunit, target, level, pname, params );
}

void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetMultiTexLevelParameterivEXT( texunit, target, level, pname, params );
}

void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetMultiTexParameterIivEXT( texunit, target, pname, params );
}

void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetMultiTexParameterIuivEXT( texunit, target, pname, params );
}

void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetMultiTexParameterfvEXT( texunit, target, pname, params );
}

void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetMultiTexParameterivEXT( texunit, target, pname, params );
}

void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetNamedBufferParameterivEXT( buffer, pname, params );
}

void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, GLvoid* *params)
{
	gleGetCurrent()->glGetNamedBufferPointervEXT( buffer, pname, params );
}

void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid *data)
{
	gleGetCurrent()->glGetNamedBufferSubDataEXT( buffer, offset, size, data );
}

void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetNamedFramebufferAttachmentParameterivEXT( framebuffer, attachment, pname, params );
}

void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint *params)
{
	gleGetCurrent()->glGetNamedProgramLocalParameterIivEXT( program, target, index, params );
}

void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint *params)
{
	gleGetCurrent()->glGetNamedProgramLocalParameterIuivEXT( program, target, index, params );
}

void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble *params)
{
	gleGetCurrent()->glGetNamedProgramLocalParameterdvEXT( program, target, index, params );
}

void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat *params)
{
	gleGetCurrent()->glGetNamedProgramLocalParameterfvEXT( program, target, index, params );
}

void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, GLvoid *string)
{
	gleGetCurrent()->glGetNamedProgramStringEXT( program, target, pname, string );
}

void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetNamedProgramivEXT( program, target, pname, params );
}

void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetNamedRenderbufferParameterivEXT( renderbuffer, pname, params );
}

void glGetPointerIndexedvEXT(GLenum target, GLuint index, GLvoid* *data)
{
	gleGetCurrent()->glGetPointerIndexedvEXT( target, index, data );
}

void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
{
	gleGetCurrent()->glGetTextureImageEXT( texture, target, level, format, type, pixels );
}

void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetTextureLevelParameterfvEXT( texture, target, level, pname, params );
}

void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetTextureLevelParameterivEXT( texture, target, level, pname, params );
}

void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetTextureParameterIivEXT( texture, target, pname, params );
}

void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetTextureParameterIuivEXT( texture, target, pname, params );
}

void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetTextureParameterfvEXT( texture, target, pname, params );
}

void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetTextureParameterivEXT( texture, target, pname, params );
}

GLvoid* glMapNamedBufferEXT(GLuint buffer, GLenum access)
{
	return gleGetCurrent()->glMapNamedBufferEXT( buffer, access );
}

GLvoid* glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	return gleGetCurrent()->glMapNamedBufferRangeEXT( buffer, offset, length, access );
}

void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	gleGetCurrent()->glMatrixFrustumEXT( mode, left, right, bottom, top, zNear, zFar );
}

void glMatrixLoadIdentityEXT(GLenum mode)
{
	gleGetCurrent()->glMatrixLoadIdentityEXT( mode );
}

void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble *m)
{
	gleGetCurrent()->glMatrixLoadTransposedEXT( mode, m );
}

void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat *m)
{
	gleGetCurrent()->glMatrixLoadTransposefEXT( mode, m );
}

void glMatrixLoaddEXT(GLenum mode, const GLdouble *m)
{
	gleGetCurrent()->glMatrixLoaddEXT( mode, m );
}

void glMatrixLoadfEXT(GLenum mode, const GLfloat *m)
{
	gleGetCurrent()->glMatrixLoadfEXT( mode, m );
}

void glMatrixMultTransposedEXT(GLenum mode, const GLdouble *m)
{
	gleGetCurrent()->glMatrixMultTransposedEXT( mode, m );
}

void glMatrixMultTransposefEXT(GLenum mode, const GLfloat *m)
{
	gleGetCurrent()->glMatrixMultTransposefEXT( mode, m );
}

void glMatrixMultdEXT(GLenum mode, const GLdouble *m)
{
	gleGetCurrent()->glMatrixMultdEXT( mode, m );
}

void glMatrixMultfEXT(GLenum mode, const GLfloat *m)
{
	gleGetCurrent()->glMatrixMultfEXT( mode, m );
}

void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	gleGetCurrent()->glMatrixOrthoEXT( mode, left, right, bottom, top, zNear, zFar );
}

void glMatrixPopEXT(GLenum mode)
{
	gleGetCurrent()->glMatrixPopEXT( mode );
}

void glMatrixPushEXT(GLenum mode)
{
	gleGetCurrent()->glMatrixPushEXT( mode );
}

void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glMatrixRotatedEXT( mode, angle, x, y, z );
}

void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glMatrixRotatefEXT( mode, angle, x, y, z );
}

void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glMatrixScaledEXT( mode, x, y, z );
}

void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glMatrixScalefEXT( mode, x, y, z );
}

void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glMatrixTranslatedEXT( mode, x, y, z );
}

void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glMatrixTranslatefEXT( mode, x, y, z );
}

void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer)
{
	gleGetCurrent()->glMultiTexBufferEXT( texunit, target, internalformat, buffer );
}

void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glMultiTexCoordPointerEXT( texunit, size, type, stride, pointer );
}

void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glMultiTexEnvfEXT( texunit, target, pname, param );
}

void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glMultiTexEnvfvEXT( texunit, target, pname, params );
}

void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
	gleGetCurrent()->glMultiTexEnviEXT( texunit, target, pname, param );
}

void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glMultiTexEnvivEXT( texunit, target, pname, params );
}

void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param)
{
	gleGetCurrent()->glMultiTexGendEXT( texunit, coord, pname, param );
}

void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params)
{
	gleGetCurrent()->glMultiTexGendvEXT( texunit, coord, pname, params );
}

void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glMultiTexGenfEXT( texunit, coord, pname, param );
}

void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glMultiTexGenfvEXT( texunit, coord, pname, params );
}

void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param)
{
	gleGetCurrent()->glMultiTexGeniEXT( texunit, coord, pname, param );
}

void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glMultiTexGenivEXT( texunit, coord, pname, params );
}

void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glMultiTexImage1DEXT( texunit, target, level, internalformat, width, border, format, type, pixels );
}

void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glMultiTexImage2DEXT( texunit, target, level, internalformat, width, height, border, format, type, pixels );
}

void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glMultiTexImage3DEXT( texunit, target, level, internalformat, width, height, depth, border, format, type, pixels );
}

void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glMultiTexParameterIivEXT( texunit, target, pname, params );
}

void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint *params)
{
	gleGetCurrent()->glMultiTexParameterIuivEXT( texunit, target, pname, params );
}

void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glMultiTexParameterfEXT( texunit, target, pname, param );
}

void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glMultiTexParameterfvEXT( texunit, target, pname, params );
}

void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param)
{
	gleGetCurrent()->glMultiTexParameteriEXT( texunit, target, pname, param );
}

void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glMultiTexParameterivEXT( texunit, target, pname, params );
}

void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer)
{
	gleGetCurrent()->glMultiTexRenderbufferEXT( texunit, target, renderbuffer );
}

void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glMultiTexSubImage1DEXT( texunit, target, level, xoffset, width, format, type, pixels );
}

void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glMultiTexSubImage2DEXT( texunit, target, level, xoffset, yoffset, width, height, format, type, pixels );
}

void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glMultiTexSubImage3DEXT( texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}

void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const GLvoid *data, GLenum usage)
{
	gleGetCurrent()->glNamedBufferDataEXT( buffer, size, data, usage );
}

void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid *data)
{
	gleGetCurrent()->glNamedBufferSubDataEXT( buffer, offset, size, data );
}

void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	gleGetCurrent()->glNamedCopyBufferSubDataEXT( readBuffer, writeBuffer, readOffset, writeOffset, size );
}

void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	gleGetCurrent()->glNamedFramebufferRenderbufferEXT( framebuffer, attachment, renderbuffertarget, renderbuffer );
}

void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	gleGetCurrent()->glNamedFramebufferTexture1DEXT( framebuffer, attachment, textarget, texture, level );
}

void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	gleGetCurrent()->glNamedFramebufferTexture2DEXT( framebuffer, attachment, textarget, texture, level );
}

void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	gleGetCurrent()->glNamedFramebufferTexture3DEXT( framebuffer, attachment, textarget, texture, level, zoffset );
}

void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
	gleGetCurrent()->glNamedFramebufferTextureEXT( framebuffer, attachment, texture, level );
}

void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
	gleGetCurrent()->glNamedFramebufferTextureFaceEXT( framebuffer, attachment, texture, level, face );
}

void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	gleGetCurrent()->glNamedFramebufferTextureLayerEXT( framebuffer, attachment, texture, level, layer );
}

void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glNamedProgramLocalParameter4dEXT( program, target, index, x, y, z, w );
}

void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble *params)
{
	gleGetCurrent()->glNamedProgramLocalParameter4dvEXT( program, target, index, params );
}

void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glNamedProgramLocalParameter4fEXT( program, target, index, x, y, z, w );
}

void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat *params)
{
	gleGetCurrent()->glNamedProgramLocalParameter4fvEXT( program, target, index, params );
}

void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	gleGetCurrent()->glNamedProgramLocalParameterI4iEXT( program, target, index, x, y, z, w );
}

void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint *params)
{
	gleGetCurrent()->glNamedProgramLocalParameterI4ivEXT( program, target, index, params );
}

void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	gleGetCurrent()->glNamedProgramLocalParameterI4uiEXT( program, target, index, x, y, z, w );
}

void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint *params)
{
	gleGetCurrent()->glNamedProgramLocalParameterI4uivEXT( program, target, index, params );
}

void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params)
{
	gleGetCurrent()->glNamedProgramLocalParameters4fvEXT( program, target, index, count, params );
}

void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params)
{
	gleGetCurrent()->glNamedProgramLocalParametersI4ivEXT( program, target, index, count, params );
}

void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params)
{
	gleGetCurrent()->glNamedProgramLocalParametersI4uivEXT( program, target, index, count, params );
}

void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const GLvoid *string)
{
	gleGetCurrent()->glNamedProgramStringEXT( program, target, format, len, string );
}

void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glNamedRenderbufferStorageEXT( renderbuffer, internalformat, width, height );
}

void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glNamedRenderbufferStorageMultisampleCoverageEXT( renderbuffer, coverageSamples, colorSamples, internalformat, width, height );
}

void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glNamedRenderbufferStorageMultisampleEXT( renderbuffer, samples, internalformat, width, height );
}

void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x)
{
	gleGetCurrent()->glProgramUniform1dEXT( program, location, x );
}

void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniform1dvEXT( program, location, count, value );
}

void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0)
{
	gleGetCurrent()->glProgramUniform1fEXT( program, location, v0 );
}

void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniform1fvEXT( program, location, count, value );
}

void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0)
{
	gleGetCurrent()->glProgramUniform1iEXT( program, location, v0 );
}

void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glProgramUniform1ivEXT( program, location, count, value );
}

void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0)
{
	gleGetCurrent()->glProgramUniform1uiEXT( program, location, v0 );
}

void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glProgramUniform1uivEXT( program, location, count, value );
}

void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y)
{
	gleGetCurrent()->glProgramUniform2dEXT( program, location, x, y );
}

void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniform2dvEXT( program, location, count, value );
}

void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
	gleGetCurrent()->glProgramUniform2fEXT( program, location, v0, v1 );
}

void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniform2fvEXT( program, location, count, value );
}

void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1)
{
	gleGetCurrent()->glProgramUniform2iEXT( program, location, v0, v1 );
}

void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glProgramUniform2ivEXT( program, location, count, value );
}

void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1)
{
	gleGetCurrent()->glProgramUniform2uiEXT( program, location, v0, v1 );
}

void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glProgramUniform2uivEXT( program, location, count, value );
}

void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glProgramUniform3dEXT( program, location, x, y, z );
}

void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniform3dvEXT( program, location, count, value );
}

void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	gleGetCurrent()->glProgramUniform3fEXT( program, location, v0, v1, v2 );
}

void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniform3fvEXT( program, location, count, value );
}

void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
	gleGetCurrent()->glProgramUniform3iEXT( program, location, v0, v1, v2 );
}

void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glProgramUniform3ivEXT( program, location, count, value );
}

void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	gleGetCurrent()->glProgramUniform3uiEXT( program, location, v0, v1, v2 );
}

void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glProgramUniform3uivEXT( program, location, count, value );
}

void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glProgramUniform4dEXT( program, location, x, y, z, w );
}

void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniform4dvEXT( program, location, count, value );
}

void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	gleGetCurrent()->glProgramUniform4fEXT( program, location, v0, v1, v2, v3 );
}

void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniform4fvEXT( program, location, count, value );
}

void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	gleGetCurrent()->glProgramUniform4iEXT( program, location, v0, v1, v2, v3 );
}

void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glProgramUniform4ivEXT( program, location, count, value );
}

void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	gleGetCurrent()->glProgramUniform4uiEXT( program, location, v0, v1, v2, v3 );
}

void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glProgramUniform4uivEXT( program, location, count, value );
}

void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix2dvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix2fvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix2x3dvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix2x3fvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix2x4dvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix2x4fvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix3dvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix3fvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix3x2dvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix3x2fvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix3x4dvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix3x4fvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix4dvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix4fvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix4x2dvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix4x2fvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value)
{
	gleGetCurrent()->glProgramUniformMatrix4x3dvEXT( program, location, count, transpose, value );
}

void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glProgramUniformMatrix4x3fvEXT( program, location, count, transpose, value );
}

void glPushClientAttribDefaultEXT(GLbitfield mask)
{
	gleGetCurrent()->glPushClientAttribDefaultEXT( mask );
}

void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer)
{
	gleGetCurrent()->glTextureBufferEXT( texture, target, internalformat, buffer );
}

void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTextureImage1DEXT( texture, target, level, internalformat, width, border, format, type, pixels );
}

void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTextureImage2DEXT( texture, target, level, internalformat, width, height, border, format, type, pixels );
}

void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTextureImage3DEXT( texture, target, level, internalformat, width, height, depth, border, format, type, pixels );
}

void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glTextureParameterIivEXT( texture, target, pname, params );
}

void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint *params)
{
	gleGetCurrent()->glTextureParameterIuivEXT( texture, target, pname, params );
}

void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glTextureParameterfEXT( texture, target, pname, param );
}

void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glTextureParameterfvEXT( texture, target, pname, params );
}

void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param)
{
	gleGetCurrent()->glTextureParameteriEXT( texture, target, pname, param );
}

void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glTextureParameterivEXT( texture, target, pname, params );
}

void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer)
{
	gleGetCurrent()->glTextureRenderbufferEXT( texture, target, renderbuffer );
}

void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTextureSubImage1DEXT( texture, target, level, xoffset, width, format, type, pixels );
}

void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTextureSubImage2DEXT( texture, target, level, xoffset, yoffset, width, height, format, type, pixels );
}

void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTextureSubImage3DEXT( texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}

GLboolean glUnmapNamedBufferEXT(GLuint buffer)
{
	return gleGetCurrent()->glUnmapNamedBufferEXT( buffer );
}




// ********* GL_EXT_draw_buffers2 *********
bool isGL_EXT_draw_buffers2()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_draw_buffers2;

	return isSupported;
}


void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	gleGetCurrent()->glColorMaskIndexedEXT( index, r, g, b, a );
}

void glDisableIndexedEXT(GLenum target, GLuint index)
{
	gleGetCurrent()->glDisableIndexedEXT( target, index );
}

void glEnableIndexedEXT(GLenum target, GLuint index)
{
	gleGetCurrent()->glEnableIndexedEXT( target, index );
}

void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean *data)
{
	gleGetCurrent()->glGetBooleanIndexedvEXT( target, index, data );
}

void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint *data)
{
	gleGetCurrent()->glGetIntegerIndexedvEXT( target, index, data );
}

GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index)
{
	return gleGetCurrent()->glIsEnabledIndexedEXT( target, index );
}




// ********* GL_EXT_draw_instanced *********
bool isGL_EXT_draw_instanced()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_draw_instanced;

	return isSupported;
}


void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
	gleGetCurrent()->glDrawArraysInstancedEXT( mode, start, count, primcount );
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
	gleGetCurrent()->glDrawElementsInstancedEXT( mode, count, type, indices, primcount );
}




// ********* GL_EXT_draw_range_elements *********
bool isGL_EXT_draw_range_elements()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_draw_range_elements;

	return isSupported;
}


void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
{
	gleGetCurrent()->glDrawRangeElementsEXT( mode, start, end, count, type, indices );
}




// ********* GL_EXT_fog_coord *********
bool isGL_EXT_fog_coord()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_fog_coord;

	return isSupported;
}


void glFogCoordPointerEXT(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glFogCoordPointerEXT( type, stride, pointer );
}

void glFogCoorddEXT(GLdouble coord)
{
	gleGetCurrent()->glFogCoorddEXT( coord );
}

void glFogCoorddvEXT(const GLdouble *coord)
{
	gleGetCurrent()->glFogCoorddvEXT( coord );
}

void glFogCoordfEXT(GLfloat coord)
{
	gleGetCurrent()->glFogCoordfEXT( coord );
}

void glFogCoordfvEXT(const GLfloat *coord)
{
	gleGetCurrent()->glFogCoordfvEXT( coord );
}




// ********* GL_EXT_framebuffer_blit *********
bool isGL_EXT_framebuffer_blit()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_framebuffer_blit;

	return isSupported;
}


void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	gleGetCurrent()->glBlitFramebufferEXT( srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter );
}




// ********* GL_EXT_framebuffer_multisample *********
bool isGL_EXT_framebuffer_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_framebuffer_multisample;

	return isSupported;
}


void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glRenderbufferStorageMultisampleEXT( target, samples, internalformat, width, height );
}




// ********* GL_EXT_framebuffer_multisample_blit_scaled *********
bool isGL_EXT_framebuffer_multisample_blit_scaled()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_framebuffer_multisample_blit_scaled;

	return isSupported;
}




// ********* GL_EXT_framebuffer_object *********
bool isGL_EXT_framebuffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_framebuffer_object;

	return isSupported;
}


void glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
	gleGetCurrent()->glBindFramebufferEXT( target, framebuffer );
}

void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
	gleGetCurrent()->glBindRenderbufferEXT( target, renderbuffer );
}

GLenum glCheckFramebufferStatusEXT(GLenum target)
{
	return gleGetCurrent()->glCheckFramebufferStatusEXT( target );
}

void glDeleteFramebuffersEXT(GLsizei n, const GLuint *framebuffers)
{
	gleGetCurrent()->glDeleteFramebuffersEXT( n, framebuffers );
}

void glDeleteRenderbuffersEXT(GLsizei n, const GLuint *renderbuffers)
{
	gleGetCurrent()->glDeleteRenderbuffersEXT( n, renderbuffers );
}

void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	gleGetCurrent()->glFramebufferRenderbufferEXT( target, attachment, renderbuffertarget, renderbuffer );
}

void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	gleGetCurrent()->glFramebufferTexture1DEXT( target, attachment, textarget, texture, level );
}

void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	gleGetCurrent()->glFramebufferTexture2DEXT( target, attachment, textarget, texture, level );
}

void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	gleGetCurrent()->glFramebufferTexture3DEXT( target, attachment, textarget, texture, level, zoffset );
}

void glGenFramebuffersEXT(GLsizei n, GLuint *framebuffers)
{
	gleGetCurrent()->glGenFramebuffersEXT( n, framebuffers );
}

void glGenRenderbuffersEXT(GLsizei n, GLuint *renderbuffers)
{
	gleGetCurrent()->glGenRenderbuffersEXT( n, renderbuffers );
}

void glGenerateMipmapEXT(GLenum target)
{
	gleGetCurrent()->glGenerateMipmapEXT( target );
}

void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetFramebufferAttachmentParameterivEXT( target, attachment, pname, params );
}

void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetRenderbufferParameterivEXT( target, pname, params );
}

GLboolean glIsFramebufferEXT(GLuint framebuffer)
{
	return gleGetCurrent()->glIsFramebufferEXT( framebuffer );
}

GLboolean glIsRenderbufferEXT(GLuint renderbuffer)
{
	return gleGetCurrent()->glIsRenderbufferEXT( renderbuffer );
}

void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glRenderbufferStorageEXT( target, internalformat, width, height );
}




// ********* GL_EXT_framebuffer_sRGB *********
bool isGL_EXT_framebuffer_sRGB()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_framebuffer_sRGB;

	return isSupported;
}




// ********* GL_EXT_geometry_shader4 *********
bool isGL_EXT_geometry_shader4()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_geometry_shader4;

	return isSupported;
}


void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
	gleGetCurrent()->glProgramParameteriEXT( program, pname, value );
}




// ********* GL_EXT_gpu_program_parameters *********
bool isGL_EXT_gpu_program_parameters()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_gpu_program_parameters;

	return isSupported;
}


void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params)
{
	gleGetCurrent()->glProgramEnvParameters4fvEXT( target, index, count, params );
}

void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params)
{
	gleGetCurrent()->glProgramLocalParameters4fvEXT( target, index, count, params );
}




// ********* GL_EXT_gpu_shader4 *********
bool isGL_EXT_gpu_shader4()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_gpu_shader4;

	return isSupported;
}


void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar *name)
{
	gleGetCurrent()->glBindFragDataLocationEXT( program, color, name );
}

GLint glGetFragDataLocationEXT(GLuint program, const GLchar *name)
{
	return gleGetCurrent()->glGetFragDataLocationEXT( program, name );
}

void glGetUniformuivEXT(GLuint program, GLint location, GLuint *params)
{
	gleGetCurrent()->glGetUniformuivEXT( program, location, params );
}

void glUniform1uiEXT(GLint location, GLuint v0)
{
	gleGetCurrent()->glUniform1uiEXT( location, v0 );
}

void glUniform1uivEXT(GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glUniform1uivEXT( location, count, value );
}

void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1)
{
	gleGetCurrent()->glUniform2uiEXT( location, v0, v1 );
}

void glUniform2uivEXT(GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glUniform2uivEXT( location, count, value );
}

void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	gleGetCurrent()->glUniform3uiEXT( location, v0, v1, v2 );
}

void glUniform3uivEXT(GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glUniform3uivEXT( location, count, value );
}

void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	gleGetCurrent()->glUniform4uiEXT( location, v0, v1, v2, v3 );
}

void glUniform4uivEXT(GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glUniform4uivEXT( location, count, value );
}




// ********* GL_EXT_histogram *********
bool isGL_EXT_histogram()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_histogram;

	return isSupported;
}


void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
{
	gleGetCurrent()->glGetHistogramEXT( target, reset, format, type, values );
}

void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetHistogramParameterfvEXT( target, pname, params );
}

void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetHistogramParameterivEXT( target, pname, params );
}

void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
{
	gleGetCurrent()->glGetMinmaxEXT( target, reset, format, type, values );
}

void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetMinmaxParameterfvEXT( target, pname, params );
}

void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetMinmaxParameterivEXT( target, pname, params );
}

void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
	gleGetCurrent()->glHistogramEXT( target, width, internalformat, sink );
}

void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink)
{
	gleGetCurrent()->glMinmaxEXT( target, internalformat, sink );
}

void glResetHistogramEXT(GLenum target)
{
	gleGetCurrent()->glResetHistogramEXT( target );
}

void glResetMinmaxEXT(GLenum target)
{
	gleGetCurrent()->glResetMinmaxEXT( target );
}




// ********* GL_EXT_index_array_formats *********
bool isGL_EXT_index_array_formats()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_index_array_formats;

	return isSupported;
}




// ********* GL_EXT_index_func *********
bool isGL_EXT_index_func()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_index_func;

	return isSupported;
}


void glIndexFuncEXT(GLenum func, GLclampf ref)
{
	gleGetCurrent()->glIndexFuncEXT( func, ref );
}




// ********* GL_EXT_index_material *********
bool isGL_EXT_index_material()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_index_material;

	return isSupported;
}


void glIndexMaterialEXT(GLenum face, GLenum mode)
{
	gleGetCurrent()->glIndexMaterialEXT( face, mode );
}




// ********* GL_EXT_index_texture *********
bool isGL_EXT_index_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_index_texture;

	return isSupported;
}




// ********* GL_EXT_light_texture *********
bool isGL_EXT_light_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_light_texture;

	return isSupported;
}


void glApplyTextureEXT(GLenum mode)
{
	gleGetCurrent()->glApplyTextureEXT( mode );
}

void glTextureLightEXT(GLenum pname)
{
	gleGetCurrent()->glTextureLightEXT( pname );
}

void glTextureMaterialEXT(GLenum face, GLenum mode)
{
	gleGetCurrent()->glTextureMaterialEXT( face, mode );
}




// ********* GL_EXT_misc_attribute *********
bool isGL_EXT_misc_attribute()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_misc_attribute;

	return isSupported;
}




// ********* GL_EXT_multi_draw_arrays *********
bool isGL_EXT_multi_draw_arrays()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_multi_draw_arrays;

	return isSupported;
}


void glMultiDrawArraysEXT(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
	gleGetCurrent()->glMultiDrawArraysEXT( mode, first, count, primcount );
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount)
{
	gleGetCurrent()->glMultiDrawElementsEXT( mode, count, type, indices, primcount );
}




// ********* GL_EXT_multisample *********
bool isGL_EXT_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_multisample;

	return isSupported;
}


void glSampleMaskEXT(GLclampf value, GLboolean invert)
{
	gleGetCurrent()->glSampleMaskEXT( value, invert );
}

void glSamplePatternEXT(GLenum pattern)
{
	gleGetCurrent()->glSamplePatternEXT( pattern );
}




// ********* GL_EXT_packed_depth_stencil *********
bool isGL_EXT_packed_depth_stencil()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_packed_depth_stencil;

	return isSupported;
}




// ********* GL_EXT_packed_float *********
bool isGL_EXT_packed_float()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_packed_float;

	return isSupported;
}




// ********* GL_EXT_packed_pixels *********
bool isGL_EXT_packed_pixels()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_packed_pixels;

	return isSupported;
}




// ********* GL_EXT_paletted_texture *********
bool isGL_EXT_paletted_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_paletted_texture;

	return isSupported;
}


void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
{
	gleGetCurrent()->glColorTableEXT( target, internalFormat, width, format, type, table );
}

void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, GLvoid *data)
{
	gleGetCurrent()->glGetColorTableEXT( target, format, type, data );
}

void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetColorTableParameterfvEXT( target, pname, params );
}

void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetColorTableParameterivEXT( target, pname, params );
}




// ********* GL_EXT_pixel_buffer_object *********
bool isGL_EXT_pixel_buffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_pixel_buffer_object;

	return isSupported;
}




// ********* GL_EXT_pixel_transform *********
bool isGL_EXT_pixel_transform()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_pixel_transform;

	return isSupported;
}


void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glPixelTransformParameterfEXT( target, pname, param );
}

void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glPixelTransformParameterfvEXT( target, pname, params );
}

void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param)
{
	gleGetCurrent()->glPixelTransformParameteriEXT( target, pname, param );
}

void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glPixelTransformParameterivEXT( target, pname, params );
}




// ********* GL_EXT_pixel_transform_color_table *********
bool isGL_EXT_pixel_transform_color_table()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_pixel_transform_color_table;

	return isSupported;
}




// ********* GL_EXT_point_parameters *********
bool isGL_EXT_point_parameters()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_point_parameters;

	return isSupported;
}


void glPointParameterfEXT(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glPointParameterfEXT( pname, param );
}

void glPointParameterfvEXT(GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glPointParameterfvEXT( pname, params );
}




// ********* GL_EXT_polygon_offset *********
bool isGL_EXT_polygon_offset()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_polygon_offset;

	return isSupported;
}


void glPolygonOffsetEXT(GLfloat factor, GLfloat bias)
{
	gleGetCurrent()->glPolygonOffsetEXT( factor, bias );
}




// ********* GL_EXT_provoking_vertex *********
bool isGL_EXT_provoking_vertex()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_provoking_vertex;

	return isSupported;
}


void glProvokingVertexEXT(GLenum mode)
{
	gleGetCurrent()->glProvokingVertexEXT( mode );
}




// ********* GL_EXT_rescale_normal *********
bool isGL_EXT_rescale_normal()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_rescale_normal;

	return isSupported;
}




// ********* GL_EXT_secondary_color *********
bool isGL_EXT_secondary_color()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_secondary_color;

	return isSupported;
}


void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
	gleGetCurrent()->glSecondaryColor3bEXT( red, green, blue );
}

void glSecondaryColor3bvEXT(const GLbyte *v)
{
	gleGetCurrent()->glSecondaryColor3bvEXT( v );
}

void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
	gleGetCurrent()->glSecondaryColor3dEXT( red, green, blue );
}

void glSecondaryColor3dvEXT(const GLdouble *v)
{
	gleGetCurrent()->glSecondaryColor3dvEXT( v );
}

void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
	gleGetCurrent()->glSecondaryColor3fEXT( red, green, blue );
}

void glSecondaryColor3fvEXT(const GLfloat *v)
{
	gleGetCurrent()->glSecondaryColor3fvEXT( v );
}

void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
	gleGetCurrent()->glSecondaryColor3iEXT( red, green, blue );
}

void glSecondaryColor3ivEXT(const GLint *v)
{
	gleGetCurrent()->glSecondaryColor3ivEXT( v );
}

void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
	gleGetCurrent()->glSecondaryColor3sEXT( red, green, blue );
}

void glSecondaryColor3svEXT(const GLshort *v)
{
	gleGetCurrent()->glSecondaryColor3svEXT( v );
}

void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
	gleGetCurrent()->glSecondaryColor3ubEXT( red, green, blue );
}

void glSecondaryColor3ubvEXT(const GLubyte *v)
{
	gleGetCurrent()->glSecondaryColor3ubvEXT( v );
}

void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
	gleGetCurrent()->glSecondaryColor3uiEXT( red, green, blue );
}

void glSecondaryColor3uivEXT(const GLuint *v)
{
	gleGetCurrent()->glSecondaryColor3uivEXT( v );
}

void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
	gleGetCurrent()->glSecondaryColor3usEXT( red, green, blue );
}

void glSecondaryColor3usvEXT(const GLushort *v)
{
	gleGetCurrent()->glSecondaryColor3usvEXT( v );
}

void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glSecondaryColorPointerEXT( size, type, stride, pointer );
}




// ********* GL_EXT_separate_shader_objects *********
bool isGL_EXT_separate_shader_objects()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_separate_shader_objects;

	return isSupported;
}


void glActiveProgramEXT(GLuint program)
{
	gleGetCurrent()->glActiveProgramEXT( program );
}

GLuint glCreateShaderProgramEXT(GLenum type, const GLchar *string)
{
	return gleGetCurrent()->glCreateShaderProgramEXT( type, string );
}

void glUseShaderProgramEXT(GLenum type, GLuint program)
{
	gleGetCurrent()->glUseShaderProgramEXT( type, program );
}




// ********* GL_EXT_separate_specular_color *********
bool isGL_EXT_separate_specular_color()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_separate_specular_color;

	return isSupported;
}




// ********* GL_EXT_shader_image_load_store *********
bool isGL_EXT_shader_image_load_store()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_shader_image_load_store;

	return isSupported;
}


void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format)
{
	gleGetCurrent()->glBindImageTextureEXT( index, texture, level, layered, layer, access, format );
}

void glMemoryBarrierEXT(GLbitfield barriers)
{
	gleGetCurrent()->glMemoryBarrierEXT( barriers );
}




// ********* GL_EXT_shadow_funcs *********
bool isGL_EXT_shadow_funcs()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_shadow_funcs;

	return isSupported;
}




// ********* GL_EXT_shared_texture_palette *********
bool isGL_EXT_shared_texture_palette()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_shared_texture_palette;

	return isSupported;
}




// ********* GL_EXT_stencil_clear_tag *********
bool isGL_EXT_stencil_clear_tag()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_stencil_clear_tag;

	return isSupported;
}


void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag)
{
	gleGetCurrent()->glStencilClearTagEXT( stencilTagBits, stencilClearTag );
}




// ********* GL_EXT_stencil_two_side *********
bool isGL_EXT_stencil_two_side()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_stencil_two_side;

	return isSupported;
}


void glActiveStencilFaceEXT(GLenum face)
{
	gleGetCurrent()->glActiveStencilFaceEXT( face );
}




// ********* GL_EXT_stencil_wrap *********
bool isGL_EXT_stencil_wrap()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_stencil_wrap;

	return isSupported;
}




// ********* GL_EXT_subtexture *********
bool isGL_EXT_subtexture()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_subtexture;

	return isSupported;
}


void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTexSubImage1DEXT( target, level, xoffset, width, format, type, pixels );
}

void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTexSubImage2DEXT( target, level, xoffset, yoffset, width, height, format, type, pixels );
}




// ********* GL_EXT_texture *********
bool isGL_EXT_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture;

	return isSupported;
}




// ********* GL_EXT_texture3D *********
bool isGL_EXT_texture3D()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture3D;

	return isSupported;
}


void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTexImage3DEXT( target, level, internalformat, width, height, depth, border, format, type, pixels );
}

void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTexSubImage3DEXT( target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}




// ********* GL_EXT_texture_array *********
bool isGL_EXT_texture_array()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_array;

	return isSupported;
}




// ********* GL_EXT_texture_buffer_object *********
bool isGL_EXT_texture_buffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_buffer_object;

	return isSupported;
}


void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
	gleGetCurrent()->glTexBufferEXT( target, internalformat, buffer );
}




// ********* GL_EXT_texture_compression_latc *********
bool isGL_EXT_texture_compression_latc()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_compression_latc;

	return isSupported;
}




// ********* GL_EXT_texture_compression_rgtc *********
bool isGL_EXT_texture_compression_rgtc()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_compression_rgtc;

	return isSupported;
}




// ********* GL_EXT_texture_compression_s3tc *********
bool isGL_EXT_texture_compression_s3tc()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_compression_s3tc;

	return isSupported;
}




// ********* GL_EXT_texture_cube_map *********
bool isGL_EXT_texture_cube_map()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_cube_map;

	return isSupported;
}




// ********* GL_EXT_texture_env_add *********
bool isGL_EXT_texture_env_add()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_env_add;

	return isSupported;
}




// ********* GL_EXT_texture_env_combine *********
bool isGL_EXT_texture_env_combine()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_env_combine;

	return isSupported;
}




// ********* GL_EXT_texture_env_dot3 *********
bool isGL_EXT_texture_env_dot3()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_env_dot3;

	return isSupported;
}




// ********* GL_EXT_texture_filter_anisotropic *********
bool isGL_EXT_texture_filter_anisotropic()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_filter_anisotropic;

	return isSupported;
}




// ********* GL_EXT_texture_integer *********
bool isGL_EXT_texture_integer()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_integer;

	return isSupported;
}


void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha)
{
	gleGetCurrent()->glClearColorIiEXT( red, green, blue, alpha );
}

void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	gleGetCurrent()->glClearColorIuiEXT( red, green, blue, alpha );
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetTexParameterIivEXT( target, pname, params );
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetTexParameterIuivEXT( target, pname, params );
}

void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glTexParameterIivEXT( target, pname, params );
}

void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint *params)
{
	gleGetCurrent()->glTexParameterIuivEXT( target, pname, params );
}




// ********* GL_EXT_texture_lod_bias *********
bool isGL_EXT_texture_lod_bias()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_lod_bias;

	return isSupported;
}




// ********* GL_EXT_texture_mirror_clamp *********
bool isGL_EXT_texture_mirror_clamp()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_mirror_clamp;

	return isSupported;
}




// ********* GL_EXT_texture_object *********
bool isGL_EXT_texture_object()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_object;

	return isSupported;
}


GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint *textures, GLboolean *residences)
{
	return gleGetCurrent()->glAreTexturesResidentEXT( n, textures, residences );
}

void glBindTextureEXT(GLenum target, GLuint texture)
{
	gleGetCurrent()->glBindTextureEXT( target, texture );
}

void glDeleteTexturesEXT(GLsizei n, const GLuint *textures)
{
	gleGetCurrent()->glDeleteTexturesEXT( n, textures );
}

void glGenTexturesEXT(GLsizei n, GLuint *textures)
{
	gleGetCurrent()->glGenTexturesEXT( n, textures );
}

GLboolean glIsTextureEXT(GLuint texture)
{
	return gleGetCurrent()->glIsTextureEXT( texture );
}

void glPrioritizeTexturesEXT(GLsizei n, const GLuint *textures, const GLclampf *priorities)
{
	gleGetCurrent()->glPrioritizeTexturesEXT( n, textures, priorities );
}




// ********* GL_EXT_texture_perturb_normal *********
bool isGL_EXT_texture_perturb_normal()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_perturb_normal;

	return isSupported;
}


void glTextureNormalEXT(GLenum mode)
{
	gleGetCurrent()->glTextureNormalEXT( mode );
}




// ********* GL_EXT_texture_sRGB *********
bool isGL_EXT_texture_sRGB()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_sRGB;

	return isSupported;
}




// ********* GL_EXT_texture_sRGB_decode *********
bool isGL_EXT_texture_sRGB_decode()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_sRGB_decode;

	return isSupported;
}




// ********* GL_EXT_texture_shared_exponent *********
bool isGL_EXT_texture_shared_exponent()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_shared_exponent;

	return isSupported;
}




// ********* GL_EXT_texture_snorm *********
bool isGL_EXT_texture_snorm()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_snorm;

	return isSupported;
}




// ********* GL_EXT_texture_swizzle *********
bool isGL_EXT_texture_swizzle()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_swizzle;

	return isSupported;
}




// ********* GL_EXT_timer_query *********
bool isGL_EXT_timer_query()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_timer_query;

	return isSupported;
}


void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64EXT *params)
{
	gleGetCurrent()->glGetQueryObjecti64vEXT( id, pname, params );
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64EXT *params)
{
	gleGetCurrent()->glGetQueryObjectui64vEXT( id, pname, params );
}




// ********* GL_EXT_transform_feedback *********
bool isGL_EXT_transform_feedback()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_transform_feedback;

	return isSupported;
}


void glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
	gleGetCurrent()->glBeginTransformFeedbackEXT( primitiveMode );
}

void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer)
{
	gleGetCurrent()->glBindBufferBaseEXT( target, index, buffer );
}

void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
	gleGetCurrent()->glBindBufferOffsetEXT( target, index, buffer, offset );
}

void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	gleGetCurrent()->glBindBufferRangeEXT( target, index, buffer, offset, size );
}

void glEndTransformFeedbackEXT(void)
{
	gleGetCurrent()->glEndTransformFeedbackEXT(  );
}

void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
{
	gleGetCurrent()->glGetTransformFeedbackVaryingEXT( program, index, bufSize, length, size, type, name );
}

void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode)
{
	gleGetCurrent()->glTransformFeedbackVaryingsEXT( program, count, varyings, bufferMode );
}




// ********* GL_EXT_vertex_array *********
bool isGL_EXT_vertex_array()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_vertex_array;

	return isSupported;
}


void glArrayElementEXT(GLint i)
{
	gleGetCurrent()->glArrayElementEXT( i );
}

void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	gleGetCurrent()->glColorPointerEXT( size, type, stride, count, pointer );
}

void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count)
{
	gleGetCurrent()->glDrawArraysEXT( mode, first, count );
}

void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean *pointer)
{
	gleGetCurrent()->glEdgeFlagPointerEXT( stride, count, pointer );
}

void glGetPointervEXT(GLenum pname, GLvoid* *params)
{
	gleGetCurrent()->glGetPointervEXT( pname, params );
}

void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	gleGetCurrent()->glIndexPointerEXT( type, stride, count, pointer );
}

void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	gleGetCurrent()->glNormalPointerEXT( type, stride, count, pointer );
}

void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	gleGetCurrent()->glTexCoordPointerEXT( size, type, stride, count, pointer );
}

void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexPointerEXT( size, type, stride, count, pointer );
}




// ********* GL_EXT_vertex_array_bgra *********
bool isGL_EXT_vertex_array_bgra()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_vertex_array_bgra;

	return isSupported;
}




// ********* GL_EXT_vertex_attrib_64bit *********
bool isGL_EXT_vertex_attrib_64bit()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_vertex_attrib_64bit;

	return isSupported;
}


void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble *params)
{
	gleGetCurrent()->glGetVertexAttribLdvEXT( index, pname, params );
}

void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset)
{
	gleGetCurrent()->glVertexArrayVertexAttribLOffsetEXT( vaobj, buffer, index, size, type, stride, offset );
}

void glVertexAttribL1dEXT(GLuint index, GLdouble x)
{
	gleGetCurrent()->glVertexAttribL1dEXT( index, x );
}

void glVertexAttribL1dvEXT(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribL1dvEXT( index, v );
}

void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y)
{
	gleGetCurrent()->glVertexAttribL2dEXT( index, x, y );
}

void glVertexAttribL2dvEXT(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribL2dvEXT( index, v );
}

void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glVertexAttribL3dEXT( index, x, y, z );
}

void glVertexAttribL3dvEXT(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribL3dvEXT( index, v );
}

void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glVertexAttribL4dEXT( index, x, y, z, w );
}

void glVertexAttribL4dvEXT(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribL4dvEXT( index, v );
}

void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexAttribLPointerEXT( index, size, type, stride, pointer );
}




// ********* GL_EXT_vertex_shader *********
bool isGL_EXT_vertex_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_vertex_shader;

	return isSupported;
}


void glBeginVertexShaderEXT(void)
{
	gleGetCurrent()->glBeginVertexShaderEXT(  );
}

GLuint glBindLightParameterEXT(GLenum light, GLenum value)
{
	return gleGetCurrent()->glBindLightParameterEXT( light, value );
}

GLuint glBindMaterialParameterEXT(GLenum face, GLenum value)
{
	return gleGetCurrent()->glBindMaterialParameterEXT( face, value );
}

GLuint glBindParameterEXT(GLenum value)
{
	return gleGetCurrent()->glBindParameterEXT( value );
}

GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value)
{
	return gleGetCurrent()->glBindTexGenParameterEXT( unit, coord, value );
}

GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value)
{
	return gleGetCurrent()->glBindTextureUnitParameterEXT( unit, value );
}

void glBindVertexShaderEXT(GLuint id)
{
	gleGetCurrent()->glBindVertexShaderEXT( id );
}

void glDeleteVertexShaderEXT(GLuint id)
{
	gleGetCurrent()->glDeleteVertexShaderEXT( id );
}

void glDisableVariantClientStateEXT(GLuint id)
{
	gleGetCurrent()->glDisableVariantClientStateEXT( id );
}

void glEnableVariantClientStateEXT(GLuint id)
{
	gleGetCurrent()->glEnableVariantClientStateEXT( id );
}

void glEndVertexShaderEXT(void)
{
	gleGetCurrent()->glEndVertexShaderEXT(  );
}

void glExtractComponentEXT(GLuint res, GLuint src, GLuint num)
{
	gleGetCurrent()->glExtractComponentEXT( res, src, num );
}

GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components)
{
	return gleGetCurrent()->glGenSymbolsEXT( datatype, storagetype, range, components );
}

GLuint glGenVertexShadersEXT(GLuint range)
{
	return gleGetCurrent()->glGenVertexShadersEXT( range );
}

void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean *data)
{
	gleGetCurrent()->glGetInvariantBooleanvEXT( id, value, data );
}

void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat *data)
{
	gleGetCurrent()->glGetInvariantFloatvEXT( id, value, data );
}

void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint *data)
{
	gleGetCurrent()->glGetInvariantIntegervEXT( id, value, data );
}

void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean *data)
{
	gleGetCurrent()->glGetLocalConstantBooleanvEXT( id, value, data );
}

void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat *data)
{
	gleGetCurrent()->glGetLocalConstantFloatvEXT( id, value, data );
}

void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint *data)
{
	gleGetCurrent()->glGetLocalConstantIntegervEXT( id, value, data );
}

void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean *data)
{
	gleGetCurrent()->glGetVariantBooleanvEXT( id, value, data );
}

void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat *data)
{
	gleGetCurrent()->glGetVariantFloatvEXT( id, value, data );
}

void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint *data)
{
	gleGetCurrent()->glGetVariantIntegervEXT( id, value, data );
}

void glGetVariantPointervEXT(GLuint id, GLenum value, GLvoid* *data)
{
	gleGetCurrent()->glGetVariantPointervEXT( id, value, data );
}

void glInsertComponentEXT(GLuint res, GLuint src, GLuint num)
{
	gleGetCurrent()->glInsertComponentEXT( res, src, num );
}

GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap)
{
	return gleGetCurrent()->glIsVariantEnabledEXT( id, cap );
}

void glSetInvariantEXT(GLuint id, GLenum type, const GLvoid *addr)
{
	gleGetCurrent()->glSetInvariantEXT( id, type, addr );
}

void glSetLocalConstantEXT(GLuint id, GLenum type, const GLvoid *addr)
{
	gleGetCurrent()->glSetLocalConstantEXT( id, type, addr );
}

void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1)
{
	gleGetCurrent()->glShaderOp1EXT( op, res, arg1 );
}

void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2)
{
	gleGetCurrent()->glShaderOp2EXT( op, res, arg1, arg2 );
}

void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3)
{
	gleGetCurrent()->glShaderOp3EXT( op, res, arg1, arg2, arg3 );
}

void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
	gleGetCurrent()->glSwizzleEXT( res, in, outX, outY, outZ, outW );
}

void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const GLvoid *addr)
{
	gleGetCurrent()->glVariantPointerEXT( id, type, stride, addr );
}

void glVariantbvEXT(GLuint id, const GLbyte *addr)
{
	gleGetCurrent()->glVariantbvEXT( id, addr );
}

void glVariantdvEXT(GLuint id, const GLdouble *addr)
{
	gleGetCurrent()->glVariantdvEXT( id, addr );
}

void glVariantfvEXT(GLuint id, const GLfloat *addr)
{
	gleGetCurrent()->glVariantfvEXT( id, addr );
}

void glVariantivEXT(GLuint id, const GLint *addr)
{
	gleGetCurrent()->glVariantivEXT( id, addr );
}

void glVariantsvEXT(GLuint id, const GLshort *addr)
{
	gleGetCurrent()->glVariantsvEXT( id, addr );
}

void glVariantubvEXT(GLuint id, const GLubyte *addr)
{
	gleGetCurrent()->glVariantubvEXT( id, addr );
}

void glVariantuivEXT(GLuint id, const GLuint *addr)
{
	gleGetCurrent()->glVariantuivEXT( id, addr );
}

void glVariantusvEXT(GLuint id, const GLushort *addr)
{
	gleGetCurrent()->glVariantusvEXT( id, addr );
}

void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW)
{
	gleGetCurrent()->glWriteMaskEXT( res, in, outX, outY, outZ, outW );
}




// ********* GL_EXT_vertex_weighting *********
bool isGL_EXT_vertex_weighting()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_vertex_weighting;

	return isSupported;
}


void glVertexWeightPointerEXT(GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexWeightPointerEXT( size, type, stride, pointer );
}

void glVertexWeightfEXT(GLfloat weight)
{
	gleGetCurrent()->glVertexWeightfEXT( weight );
}

void glVertexWeightfvEXT(const GLfloat *weight)
{
	gleGetCurrent()->glVertexWeightfvEXT( weight );
}




// ********* GL_EXT_x11_sync_object *********
bool isGL_EXT_x11_sync_object()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_x11_sync_object;

	return isSupported;
}


GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags)
{
	return gleGetCurrent()->glImportSyncEXT( external_sync_type, external_sync, flags );
}




// ********* GL_FfdMaskSGIX *********
bool isGL_FfdMaskSGIX()
{
	const bool isSupported = gleGetCurrent()->isGL_FfdMaskSGIX;

	return isSupported;
}




// ********* GL_GREMEDY_frame_terminator *********
bool isGL_GREMEDY_frame_terminator()
{
	const bool isSupported = gleGetCurrent()->isGL_GREMEDY_frame_terminator;

	return isSupported;
}


void glFrameTerminatorGREMEDY(void)
{
	gleGetCurrent()->glFrameTerminatorGREMEDY(  );
}




// ********* GL_GREMEDY_string_marker *********
bool isGL_GREMEDY_string_marker()
{
	const bool isSupported = gleGetCurrent()->isGL_GREMEDY_string_marker;

	return isSupported;
}


void glStringMarkerGREMEDY(GLsizei len, const GLvoid *string)
{
	gleGetCurrent()->glStringMarkerGREMEDY( len, string );
}




// ********* GL_HP_convolution_border_modes *********
bool isGL_HP_convolution_border_modes()
{
	const bool isSupported = gleGetCurrent()->isGL_HP_convolution_border_modes;

	return isSupported;
}




// ********* GL_HP_image_transform *********
bool isGL_HP_image_transform()
{
	const bool isSupported = gleGetCurrent()->isGL_HP_image_transform;

	return isSupported;
}


void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetImageTransformParameterfvHP( target, pname, params );
}

void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetImageTransformParameterivHP( target, pname, params );
}

void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glImageTransformParameterfHP( target, pname, param );
}

void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glImageTransformParameterfvHP( target, pname, params );
}

void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param)
{
	gleGetCurrent()->glImageTransformParameteriHP( target, pname, param );
}

void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glImageTransformParameterivHP( target, pname, params );
}




// ********* GL_HP_occlusion_test *********
bool isGL_HP_occlusion_test()
{
	const bool isSupported = gleGetCurrent()->isGL_HP_occlusion_test;

	return isSupported;
}




// ********* GL_HP_texture_lighting *********
bool isGL_HP_texture_lighting()
{
	const bool isSupported = gleGetCurrent()->isGL_HP_texture_lighting;

	return isSupported;
}




// ********* GL_IBM_cull_vertex *********
bool isGL_IBM_cull_vertex()
{
	const bool isSupported = gleGetCurrent()->isGL_IBM_cull_vertex;

	return isSupported;
}




// ********* GL_IBM_multimode_draw_arrays *********
bool isGL_IBM_multimode_draw_arrays()
{
	const bool isSupported = gleGetCurrent()->isGL_IBM_multimode_draw_arrays;

	return isSupported;
}


void glMultiModeDrawArraysIBM(const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride)
{
	gleGetCurrent()->glMultiModeDrawArraysIBM( mode, first, count, primcount, modestride );
}

void glMultiModeDrawElementsIBM(const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride)
{
	gleGetCurrent()->glMultiModeDrawElementsIBM( mode, count, type, indices, primcount, modestride );
}




// ********* GL_IBM_rasterpos_clip *********
bool isGL_IBM_rasterpos_clip()
{
	const bool isSupported = gleGetCurrent()->isGL_IBM_rasterpos_clip;

	return isSupported;
}




// ********* GL_IBM_texture_mirrored_repeat *********
bool isGL_IBM_texture_mirrored_repeat()
{
	const bool isSupported = gleGetCurrent()->isGL_IBM_texture_mirrored_repeat;

	return isSupported;
}




// ********* GL_IBM_vertex_array_lists *********
bool isGL_IBM_vertex_array_lists()
{
	const bool isSupported = gleGetCurrent()->isGL_IBM_vertex_array_lists;

	return isSupported;
}


void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	gleGetCurrent()->glColorPointerListIBM( size, type, stride, pointer, ptrstride );
}

void glEdgeFlagPointerListIBM(GLint stride, const GLboolean* *pointer, GLint ptrstride)
{
	gleGetCurrent()->glEdgeFlagPointerListIBM( stride, pointer, ptrstride );
}

void glFogCoordPointerListIBM(GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	gleGetCurrent()->glFogCoordPointerListIBM( type, stride, pointer, ptrstride );
}

void glIndexPointerListIBM(GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	gleGetCurrent()->glIndexPointerListIBM( type, stride, pointer, ptrstride );
}

void glNormalPointerListIBM(GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	gleGetCurrent()->glNormalPointerListIBM( type, stride, pointer, ptrstride );
}

void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	gleGetCurrent()->glSecondaryColorPointerListIBM( size, type, stride, pointer, ptrstride );
}

void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	gleGetCurrent()->glTexCoordPointerListIBM( size, type, stride, pointer, ptrstride );
}

void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride)
{
	gleGetCurrent()->glVertexPointerListIBM( size, type, stride, pointer, ptrstride );
}




// ********* GL_INGR_blend_func_separate *********
bool isGL_INGR_blend_func_separate()
{
	const bool isSupported = gleGetCurrent()->isGL_INGR_blend_func_separate;

	return isSupported;
}


void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	gleGetCurrent()->glBlendFuncSeparateINGR( sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha );
}




// ********* GL_INGR_color_clamp *********
bool isGL_INGR_color_clamp()
{
	const bool isSupported = gleGetCurrent()->isGL_INGR_color_clamp;

	return isSupported;
}




// ********* GL_INGR_interlace_read *********
bool isGL_INGR_interlace_read()
{
	const bool isSupported = gleGetCurrent()->isGL_INGR_interlace_read;

	return isSupported;
}




// ********* GL_INGR_palette_buffer *********
bool isGL_INGR_palette_buffer()
{
	const bool isSupported = gleGetCurrent()->isGL_INGR_palette_buffer;

	return isSupported;
}




// ********* GL_INTEL_parallel_arrays *********
bool isGL_INTEL_parallel_arrays()
{
	const bool isSupported = gleGetCurrent()->isGL_INTEL_parallel_arrays;

	return isSupported;
}


void glColorPointervINTEL(GLint size, GLenum type, const GLvoid* *pointer)
{
	gleGetCurrent()->glColorPointervINTEL( size, type, pointer );
}

void glNormalPointervINTEL(GLenum type, const GLvoid* *pointer)
{
	gleGetCurrent()->glNormalPointervINTEL( type, pointer );
}

void glTexCoordPointervINTEL(GLint size, GLenum type, const GLvoid* *pointer)
{
	gleGetCurrent()->glTexCoordPointervINTEL( size, type, pointer );
}

void glVertexPointervINTEL(GLint size, GLenum type, const GLvoid* *pointer)
{
	gleGetCurrent()->glVertexPointervINTEL( size, type, pointer );
}




// ********* GL_INTEL_texture_scissor *********
bool isGL_INTEL_texture_scissor()
{
	const bool isSupported = gleGetCurrent()->isGL_INTEL_texture_scissor;

	return isSupported;
}




// ********* GL_MESAX_texture_stack *********
bool isGL_MESAX_texture_stack()
{
	const bool isSupported = gleGetCurrent()->isGL_MESAX_texture_stack;

	return isSupported;
}




// ********* GL_MESA_pack_invert *********
bool isGL_MESA_pack_invert()
{
	const bool isSupported = gleGetCurrent()->isGL_MESA_pack_invert;

	return isSupported;
}




// ********* GL_MESA_resize_buffers *********
bool isGL_MESA_resize_buffers()
{
	const bool isSupported = gleGetCurrent()->isGL_MESA_resize_buffers;

	return isSupported;
}


void glResizeBuffersMESA(void)
{
	gleGetCurrent()->glResizeBuffersMESA(  );
}




// ********* GL_MESA_window_pos *********
bool isGL_MESA_window_pos()
{
	const bool isSupported = gleGetCurrent()->isGL_MESA_window_pos;

	return isSupported;
}


void glWindowPos2dMESA(GLdouble x, GLdouble y)
{
	gleGetCurrent()->glWindowPos2dMESA( x, y );
}

void glWindowPos2dvMESA(const GLdouble *v)
{
	gleGetCurrent()->glWindowPos2dvMESA( v );
}

void glWindowPos2fMESA(GLfloat x, GLfloat y)
{
	gleGetCurrent()->glWindowPos2fMESA( x, y );
}

void glWindowPos2fvMESA(const GLfloat *v)
{
	gleGetCurrent()->glWindowPos2fvMESA( v );
}

void glWindowPos2iMESA(GLint x, GLint y)
{
	gleGetCurrent()->glWindowPos2iMESA( x, y );
}

void glWindowPos2ivMESA(const GLint *v)
{
	gleGetCurrent()->glWindowPos2ivMESA( v );
}

void glWindowPos2sMESA(GLshort x, GLshort y)
{
	gleGetCurrent()->glWindowPos2sMESA( x, y );
}

void glWindowPos2svMESA(const GLshort *v)
{
	gleGetCurrent()->glWindowPos2svMESA( v );
}

void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glWindowPos3dMESA( x, y, z );
}

void glWindowPos3dvMESA(const GLdouble *v)
{
	gleGetCurrent()->glWindowPos3dvMESA( v );
}

void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glWindowPos3fMESA( x, y, z );
}

void glWindowPos3fvMESA(const GLfloat *v)
{
	gleGetCurrent()->glWindowPos3fvMESA( v );
}

void glWindowPos3iMESA(GLint x, GLint y, GLint z)
{
	gleGetCurrent()->glWindowPos3iMESA( x, y, z );
}

void glWindowPos3ivMESA(const GLint *v)
{
	gleGetCurrent()->glWindowPos3ivMESA( v );
}

void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z)
{
	gleGetCurrent()->glWindowPos3sMESA( x, y, z );
}

void glWindowPos3svMESA(const GLshort *v)
{
	gleGetCurrent()->glWindowPos3svMESA( v );
}

void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glWindowPos4dMESA( x, y, z, w );
}

void glWindowPos4dvMESA(const GLdouble *v)
{
	gleGetCurrent()->glWindowPos4dvMESA( v );
}

void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glWindowPos4fMESA( x, y, z, w );
}

void glWindowPos4fvMESA(const GLfloat *v)
{
	gleGetCurrent()->glWindowPos4fvMESA( v );
}

void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w)
{
	gleGetCurrent()->glWindowPos4iMESA( x, y, z, w );
}

void glWindowPos4ivMESA(const GLint *v)
{
	gleGetCurrent()->glWindowPos4ivMESA( v );
}

void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w)
{
	gleGetCurrent()->glWindowPos4sMESA( x, y, z, w );
}

void glWindowPos4svMESA(const GLshort *v)
{
	gleGetCurrent()->glWindowPos4svMESA( v );
}




// ********* GL_MESA_ycbcr_texture *********
bool isGL_MESA_ycbcr_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_MESA_ycbcr_texture;

	return isSupported;
}




// ********* GL_NV_blend_square *********
bool isGL_NV_blend_square()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_blend_square;

	return isSupported;
}




// ********* GL_NV_conditional_render *********
bool isGL_NV_conditional_render()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_conditional_render;

	return isSupported;
}


void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
	gleGetCurrent()->glBeginConditionalRenderNV( id, mode );
}

void glEndConditionalRenderNV(void)
{
	gleGetCurrent()->glEndConditionalRenderNV(  );
}




// ********* GL_NV_copy_depth_to_color *********
bool isGL_NV_copy_depth_to_color()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_copy_depth_to_color;

	return isSupported;
}




// ********* GL_NV_copy_image *********
bool isGL_NV_copy_image()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_copy_image;

	return isSupported;
}


void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
	gleGetCurrent()->glCopyImageSubDataNV( srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth );
}




// ********* GL_NV_depth_buffer_float *********
bool isGL_NV_depth_buffer_float()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_depth_buffer_float;

	return isSupported;
}


void glClearDepthdNV(GLdouble depth)
{
	gleGetCurrent()->glClearDepthdNV( depth );
}

void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax)
{
	gleGetCurrent()->glDepthBoundsdNV( zmin, zmax );
}

void glDepthRangedNV(GLdouble zNear, GLdouble zFar)
{
	gleGetCurrent()->glDepthRangedNV( zNear, zFar );
}




// ********* GL_NV_depth_clamp *********
bool isGL_NV_depth_clamp()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_depth_clamp;

	return isSupported;
}




// ********* GL_NV_evaluators *********
bool isGL_NV_evaluators()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_evaluators;

	return isSupported;
}


void glEvalMapsNV(GLenum target, GLenum mode)
{
	gleGetCurrent()->glEvalMapsNV( target, mode );
}

void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetMapAttribParameterfvNV( target, index, pname, params );
}

void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetMapAttribParameterivNV( target, index, pname, params );
}

void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points)
{
	gleGetCurrent()->glGetMapControlPointsNV( target, index, type, ustride, vstride, packed, points );
}

void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetMapParameterfvNV( target, pname, params );
}

void glGetMapParameterivNV(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetMapParameterivNV( target, pname, params );
}

void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points)
{
	gleGetCurrent()->glMapControlPointsNV( target, index, type, ustride, vstride, uorder, vorder, packed, points );
}

void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glMapParameterfvNV( target, pname, params );
}

void glMapParameterivNV(GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glMapParameterivNV( target, pname, params );
}




// ********* GL_NV_explicit_multisample *********
bool isGL_NV_explicit_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_explicit_multisample;

	return isSupported;
}


void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat *val)
{
	gleGetCurrent()->glGetMultisamplefvNV( pname, index, val );
}

void glSampleMaskIndexedNV(GLuint index, GLbitfield mask)
{
	gleGetCurrent()->glSampleMaskIndexedNV( index, mask );
}

void glTexRenderbufferNV(GLenum target, GLuint renderbuffer)
{
	gleGetCurrent()->glTexRenderbufferNV( target, renderbuffer );
}




// ********* GL_NV_fence *********
bool isGL_NV_fence()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_fence;

	return isSupported;
}


void glDeleteFencesNV(GLsizei n, const GLuint *fences)
{
	gleGetCurrent()->glDeleteFencesNV( n, fences );
}

void glFinishFenceNV(GLuint fence)
{
	gleGetCurrent()->glFinishFenceNV( fence );
}

void glGenFencesNV(GLsizei n, GLuint *fences)
{
	gleGetCurrent()->glGenFencesNV( n, fences );
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetFenceivNV( fence, pname, params );
}

GLboolean glIsFenceNV(GLuint fence)
{
	return gleGetCurrent()->glIsFenceNV( fence );
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
	gleGetCurrent()->glSetFenceNV( fence, condition );
}

GLboolean glTestFenceNV(GLuint fence)
{
	return gleGetCurrent()->glTestFenceNV( fence );
}




// ********* GL_NV_float_buffer *********
bool isGL_NV_float_buffer()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_float_buffer;

	return isSupported;
}




// ********* GL_NV_fog_distance *********
bool isGL_NV_fog_distance()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_fog_distance;

	return isSupported;
}




// ********* GL_NV_fragment_program *********
bool isGL_NV_fragment_program()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_fragment_program;

	return isSupported;
}


void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble *params)
{
	gleGetCurrent()->glGetProgramNamedParameterdvNV( id, len, name, params );
}

void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat *params)
{
	gleGetCurrent()->glGetProgramNamedParameterfvNV( id, len, name, params );
}

void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glProgramNamedParameter4dNV( id, len, name, x, y, z, w );
}

void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v)
{
	gleGetCurrent()->glProgramNamedParameter4dvNV( id, len, name, v );
}

void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glProgramNamedParameter4fNV( id, len, name, x, y, z, w );
}

void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v)
{
	gleGetCurrent()->glProgramNamedParameter4fvNV( id, len, name, v );
}




// ********* GL_NV_fragment_program2 *********
bool isGL_NV_fragment_program2()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_fragment_program2;

	return isSupported;
}




// ********* GL_NV_fragment_program4 *********
bool isGL_NV_fragment_program4()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_fragment_program4;

	return isSupported;
}




// ********* GL_NV_fragment_program_option *********
bool isGL_NV_fragment_program_option()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_fragment_program_option;

	return isSupported;
}




// ********* GL_NV_framebuffer_multisample_coverage *********
bool isGL_NV_framebuffer_multisample_coverage()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_framebuffer_multisample_coverage;

	return isSupported;
}


void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glRenderbufferStorageMultisampleCoverageNV( target, coverageSamples, colorSamples, internalformat, width, height );
}




// ********* GL_NV_geometry_program4 *********
bool isGL_NV_geometry_program4()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_geometry_program4;

	return isSupported;
}


void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	gleGetCurrent()->glFramebufferTextureEXT( target, attachment, texture, level );
}

void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face)
{
	gleGetCurrent()->glFramebufferTextureFaceEXT( target, attachment, texture, level, face );
}

void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	gleGetCurrent()->glFramebufferTextureLayerEXT( target, attachment, texture, level, layer );
}

void glProgramVertexLimitNV(GLenum target, GLint limit)
{
	gleGetCurrent()->glProgramVertexLimitNV( target, limit );
}




// ********* GL_NV_geometry_shader4 *********
bool isGL_NV_geometry_shader4()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_geometry_shader4;

	return isSupported;
}




// ********* GL_NV_gpu_program4 *********
bool isGL_NV_gpu_program4()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_gpu_program4;

	return isSupported;
}


void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint *params)
{
	gleGetCurrent()->glGetProgramEnvParameterIivNV( target, index, params );
}

void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint *params)
{
	gleGetCurrent()->glGetProgramEnvParameterIuivNV( target, index, params );
}

void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint *params)
{
	gleGetCurrent()->glGetProgramLocalParameterIivNV( target, index, params );
}

void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint *params)
{
	gleGetCurrent()->glGetProgramLocalParameterIuivNV( target, index, params );
}

void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	gleGetCurrent()->glProgramEnvParameterI4iNV( target, index, x, y, z, w );
}

void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint *params)
{
	gleGetCurrent()->glProgramEnvParameterI4ivNV( target, index, params );
}

void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	gleGetCurrent()->glProgramEnvParameterI4uiNV( target, index, x, y, z, w );
}

void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint *params)
{
	gleGetCurrent()->glProgramEnvParameterI4uivNV( target, index, params );
}

void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint *params)
{
	gleGetCurrent()->glProgramEnvParametersI4ivNV( target, index, count, params );
}

void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint *params)
{
	gleGetCurrent()->glProgramEnvParametersI4uivNV( target, index, count, params );
}

void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	gleGetCurrent()->glProgramLocalParameterI4iNV( target, index, x, y, z, w );
}

void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint *params)
{
	gleGetCurrent()->glProgramLocalParameterI4ivNV( target, index, params );
}

void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	gleGetCurrent()->glProgramLocalParameterI4uiNV( target, index, x, y, z, w );
}

void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint *params)
{
	gleGetCurrent()->glProgramLocalParameterI4uivNV( target, index, params );
}

void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint *params)
{
	gleGetCurrent()->glProgramLocalParametersI4ivNV( target, index, count, params );
}

void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint *params)
{
	gleGetCurrent()->glProgramLocalParametersI4uivNV( target, index, count, params );
}




// ********* GL_NV_gpu_program5 *********
bool isGL_NV_gpu_program5()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_gpu_program5;

	return isSupported;
}


void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint *param)
{
	gleGetCurrent()->glGetProgramSubroutineParameteruivNV( target, index, param );
}

void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint *params)
{
	gleGetCurrent()->glProgramSubroutineParametersuivNV( target, count, params );
}




// ********* GL_NV_gpu_shader5 *********
bool isGL_NV_gpu_shader5()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_gpu_shader5;

	return isSupported;
}


void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT *params)
{
	gleGetCurrent()->glGetUniformi64vNV( program, location, params );
}

void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x)
{
	gleGetCurrent()->glProgramUniform1i64NV( program, location, x );
}

void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value)
{
	gleGetCurrent()->glProgramUniform1i64vNV( program, location, count, value );
}

void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x)
{
	gleGetCurrent()->glProgramUniform1ui64NV( program, location, x );
}

void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glProgramUniform1ui64vNV( program, location, count, value );
}

void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
	gleGetCurrent()->glProgramUniform2i64NV( program, location, x, y );
}

void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value)
{
	gleGetCurrent()->glProgramUniform2i64vNV( program, location, count, value );
}

void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
	gleGetCurrent()->glProgramUniform2ui64NV( program, location, x, y );
}

void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glProgramUniform2ui64vNV( program, location, count, value );
}

void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
	gleGetCurrent()->glProgramUniform3i64NV( program, location, x, y, z );
}

void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value)
{
	gleGetCurrent()->glProgramUniform3i64vNV( program, location, count, value );
}

void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
	gleGetCurrent()->glProgramUniform3ui64NV( program, location, x, y, z );
}

void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glProgramUniform3ui64vNV( program, location, count, value );
}

void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
	gleGetCurrent()->glProgramUniform4i64NV( program, location, x, y, z, w );
}

void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value)
{
	gleGetCurrent()->glProgramUniform4i64vNV( program, location, count, value );
}

void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
	gleGetCurrent()->glProgramUniform4ui64NV( program, location, x, y, z, w );
}

void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glProgramUniform4ui64vNV( program, location, count, value );
}

void glUniform1i64NV(GLint location, GLint64EXT x)
{
	gleGetCurrent()->glUniform1i64NV( location, x );
}

void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT *value)
{
	gleGetCurrent()->glUniform1i64vNV( location, count, value );
}

void glUniform1ui64NV(GLint location, GLuint64EXT x)
{
	gleGetCurrent()->glUniform1ui64NV( location, x );
}

void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glUniform1ui64vNV( location, count, value );
}

void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y)
{
	gleGetCurrent()->glUniform2i64NV( location, x, y );
}

void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT *value)
{
	gleGetCurrent()->glUniform2i64vNV( location, count, value );
}

void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y)
{
	gleGetCurrent()->glUniform2ui64NV( location, x, y );
}

void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glUniform2ui64vNV( location, count, value );
}

void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
	gleGetCurrent()->glUniform3i64NV( location, x, y, z );
}

void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT *value)
{
	gleGetCurrent()->glUniform3i64vNV( location, count, value );
}

void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
	gleGetCurrent()->glUniform3ui64NV( location, x, y, z );
}

void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glUniform3ui64vNV( location, count, value );
}

void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
	gleGetCurrent()->glUniform4i64NV( location, x, y, z, w );
}

void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT *value)
{
	gleGetCurrent()->glUniform4i64vNV( location, count, value );
}

void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
	gleGetCurrent()->glUniform4ui64NV( location, x, y, z, w );
}

void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glUniform4ui64vNV( location, count, value );
}




// ********* GL_NV_half_float *********
bool isGL_NV_half_float()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_half_float;

	return isSupported;
}


void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
	gleGetCurrent()->glColor3hNV( red, green, blue );
}

void glColor3hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glColor3hvNV( v );
}

void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha)
{
	gleGetCurrent()->glColor4hNV( red, green, blue, alpha );
}

void glColor4hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glColor4hvNV( v );
}

void glFogCoordhNV(GLhalfNV fog)
{
	gleGetCurrent()->glFogCoordhNV( fog );
}

void glFogCoordhvNV(const GLhalfNV *fog)
{
	gleGetCurrent()->glFogCoordhvNV( fog );
}

void glMultiTexCoord1hNV(GLenum target, GLhalfNV s)
{
	gleGetCurrent()->glMultiTexCoord1hNV( target, s );
}

void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV *v)
{
	gleGetCurrent()->glMultiTexCoord1hvNV( target, v );
}

void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t)
{
	gleGetCurrent()->glMultiTexCoord2hNV( target, s, t );
}

void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV *v)
{
	gleGetCurrent()->glMultiTexCoord2hvNV( target, v );
}

void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
	gleGetCurrent()->glMultiTexCoord3hNV( target, s, t, r );
}

void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV *v)
{
	gleGetCurrent()->glMultiTexCoord3hvNV( target, v );
}

void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
	gleGetCurrent()->glMultiTexCoord4hNV( target, s, t, r, q );
}

void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV *v)
{
	gleGetCurrent()->glMultiTexCoord4hvNV( target, v );
}

void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz)
{
	gleGetCurrent()->glNormal3hNV( nx, ny, nz );
}

void glNormal3hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glNormal3hvNV( v );
}

void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue)
{
	gleGetCurrent()->glSecondaryColor3hNV( red, green, blue );
}

void glSecondaryColor3hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glSecondaryColor3hvNV( v );
}

void glTexCoord1hNV(GLhalfNV s)
{
	gleGetCurrent()->glTexCoord1hNV( s );
}

void glTexCoord1hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glTexCoord1hvNV( v );
}

void glTexCoord2hNV(GLhalfNV s, GLhalfNV t)
{
	gleGetCurrent()->glTexCoord2hNV( s, t );
}

void glTexCoord2hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glTexCoord2hvNV( v );
}

void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r)
{
	gleGetCurrent()->glTexCoord3hNV( s, t, r );
}

void glTexCoord3hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glTexCoord3hvNV( v );
}

void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q)
{
	gleGetCurrent()->glTexCoord4hNV( s, t, r, q );
}

void glTexCoord4hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glTexCoord4hvNV( v );
}

void glVertex2hNV(GLhalfNV x, GLhalfNV y)
{
	gleGetCurrent()->glVertex2hNV( x, y );
}

void glVertex2hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glVertex2hvNV( v );
}

void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
	gleGetCurrent()->glVertex3hNV( x, y, z );
}

void glVertex3hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glVertex3hvNV( v );
}

void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
	gleGetCurrent()->glVertex4hNV( x, y, z, w );
}

void glVertex4hvNV(const GLhalfNV *v)
{
	gleGetCurrent()->glVertex4hvNV( v );
}

void glVertexAttrib1hNV(GLuint index, GLhalfNV x)
{
	gleGetCurrent()->glVertexAttrib1hNV( index, x );
}

void glVertexAttrib1hvNV(GLuint index, const GLhalfNV *v)
{
	gleGetCurrent()->glVertexAttrib1hvNV( index, v );
}

void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y)
{
	gleGetCurrent()->glVertexAttrib2hNV( index, x, y );
}

void glVertexAttrib2hvNV(GLuint index, const GLhalfNV *v)
{
	gleGetCurrent()->glVertexAttrib2hvNV( index, v );
}

void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z)
{
	gleGetCurrent()->glVertexAttrib3hNV( index, x, y, z );
}

void glVertexAttrib3hvNV(GLuint index, const GLhalfNV *v)
{
	gleGetCurrent()->glVertexAttrib3hvNV( index, v );
}

void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w)
{
	gleGetCurrent()->glVertexAttrib4hNV( index, x, y, z, w );
}

void glVertexAttrib4hvNV(GLuint index, const GLhalfNV *v)
{
	gleGetCurrent()->glVertexAttrib4hvNV( index, v );
}

void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
{
	gleGetCurrent()->glVertexAttribs1hvNV( index, n, v );
}

void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
{
	gleGetCurrent()->glVertexAttribs2hvNV( index, n, v );
}

void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
{
	gleGetCurrent()->glVertexAttribs3hvNV( index, n, v );
}

void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV *v)
{
	gleGetCurrent()->glVertexAttribs4hvNV( index, n, v );
}

void glVertexWeighthNV(GLhalfNV weight)
{
	gleGetCurrent()->glVertexWeighthNV( weight );
}

void glVertexWeighthvNV(const GLhalfNV *weight)
{
	gleGetCurrent()->glVertexWeighthvNV( weight );
}




// ********* GL_NV_light_max_exponent *********
bool isGL_NV_light_max_exponent()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_light_max_exponent;

	return isSupported;
}




// ********* GL_NV_multisample_coverage *********
bool isGL_NV_multisample_coverage()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_multisample_coverage;

	return isSupported;
}




// ********* GL_NV_multisample_filter_hint *********
bool isGL_NV_multisample_filter_hint()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_multisample_filter_hint;

	return isSupported;
}




// ********* GL_NV_occlusion_query *********
bool isGL_NV_occlusion_query()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_occlusion_query;

	return isSupported;
}


void glBeginOcclusionQueryNV(GLuint id)
{
	gleGetCurrent()->glBeginOcclusionQueryNV( id );
}

void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint *ids)
{
	gleGetCurrent()->glDeleteOcclusionQueriesNV( n, ids );
}

void glEndOcclusionQueryNV(void)
{
	gleGetCurrent()->glEndOcclusionQueryNV(  );
}

void glGenOcclusionQueriesNV(GLsizei n, GLuint *ids)
{
	gleGetCurrent()->glGenOcclusionQueriesNV( n, ids );
}

void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetOcclusionQueryivNV( id, pname, params );
}

void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetOcclusionQueryuivNV( id, pname, params );
}

GLboolean glIsOcclusionQueryNV(GLuint id)
{
	return gleGetCurrent()->glIsOcclusionQueryNV( id );
}




// ********* GL_NV_packed_depth_stencil *********
bool isGL_NV_packed_depth_stencil()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_packed_depth_stencil;

	return isSupported;
}




// ********* GL_NV_parameter_buffer_object *********
bool isGL_NV_parameter_buffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_parameter_buffer_object;

	return isSupported;
}


void glProgramBufferParametersIivNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params)
{
	gleGetCurrent()->glProgramBufferParametersIivNV( target, buffer, index, count, params );
}

void glProgramBufferParametersIuivNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params)
{
	gleGetCurrent()->glProgramBufferParametersIuivNV( target, buffer, index, count, params );
}

void glProgramBufferParametersfvNV(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params)
{
	gleGetCurrent()->glProgramBufferParametersfvNV( target, buffer, index, count, params );
}




// ********* GL_NV_parameter_buffer_object2 *********
bool isGL_NV_parameter_buffer_object2()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_parameter_buffer_object2;

	return isSupported;
}




// ********* GL_NV_path_rendering *********
bool isGL_NV_path_rendering()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_path_rendering;

	return isSupported;
}


void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
	gleGetCurrent()->glCopyPathNV( resultPath, srcPath );
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues)
{
	gleGetCurrent()->glCoverFillPathInstancedNV( numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues );
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
	gleGetCurrent()->glCoverFillPathNV( path, coverMode );
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues)
{
	gleGetCurrent()->glCoverStrokePathInstancedNV( numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues );
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
	gleGetCurrent()->glCoverStrokePathNV( path, coverMode );
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
	gleGetCurrent()->glDeletePathsNV( path, range );
}

GLuint glGenPathsNV(GLsizei range)
{
	return gleGetCurrent()->glGenPathsNV( range );
}

void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat *value)
{
	gleGetCurrent()->glGetPathColorGenfvNV( color, pname, value );
}

void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint *value)
{
	gleGetCurrent()->glGetPathColorGenivNV( color, pname, value );
}

void glGetPathCommandsNV(GLuint path, GLubyte *commands)
{
	gleGetCurrent()->glGetPathCommandsNV( path, commands );
}

void glGetPathCoordsNV(GLuint path, GLfloat *coords)
{
	gleGetCurrent()->glGetPathCoordsNV( path, coords );
}

void glGetPathDashArrayNV(GLuint path, GLfloat *dashArray)
{
	gleGetCurrent()->glGetPathDashArrayNV( path, dashArray );
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
	return gleGetCurrent()->glGetPathLengthNV( path, startSegment, numSegments );
}

void glGetPathMetricRangeNV(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics)
{
	gleGetCurrent()->glGetPathMetricRangeNV( metricQueryMask, firstPathName, numPaths, stride, metrics );
}

void glGetPathMetricsNV(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics)
{
	gleGetCurrent()->glGetPathMetricsNV( metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics );
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat *value)
{
	gleGetCurrent()->glGetPathParameterfvNV( path, pname, value );
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint *value)
{
	gleGetCurrent()->glGetPathParameterivNV( path, pname, value );
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing)
{
	gleGetCurrent()->glGetPathSpacingNV( pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing );
}

void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat *value)
{
	gleGetCurrent()->glGetPathTexGenfvNV( texCoordSet, pname, value );
}

void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint *value)
{
	gleGetCurrent()->glGetPathTexGenivNV( texCoordSet, pname, value );
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
	gleGetCurrent()->glInterpolatePathsNV( resultPath, pathA, pathB, weight );
}

GLboolean glIsPathNV(GLuint path)
{
	return gleGetCurrent()->glIsPathNV( path );
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
	return gleGetCurrent()->glIsPointInFillPathNV( path, mask, x, y );
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
	return gleGetCurrent()->glIsPointInStrokePathNV( path, x, y );
}

void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat *coeffs)
{
	gleGetCurrent()->glPathColorGenNV( color, genMode, colorFormat, coeffs );
}

void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const GLvoid *coords)
{
	gleGetCurrent()->glPathCommandsNV( path, numCommands, commands, numCoords, coordType, coords );
}

void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const GLvoid *coords)
{
	gleGetCurrent()->glPathCoordsNV( path, numCoords, coordType, coords );
}

void glPathCoverDepthFuncNV(GLenum func)
{
	gleGetCurrent()->glPathCoverDepthFuncNV( func );
}

void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat *dashArray)
{
	gleGetCurrent()->glPathDashArrayNV( path, dashCount, dashArray );
}

void glPathFogGenNV(GLenum genMode)
{
	gleGetCurrent()->glPathFogGenNV( genMode );
}

void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const GLvoid *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
	gleGetCurrent()->glPathGlyphRangeNV( firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale );
}

void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const GLvoid *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const GLvoid *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
	gleGetCurrent()->glPathGlyphsNV( firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale );
}

void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
	gleGetCurrent()->glPathParameterfNV( path, pname, value );
}

void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat *value)
{
	gleGetCurrent()->glPathParameterfvNV( path, pname, value );
}

void glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
	gleGetCurrent()->glPathParameteriNV( path, pname, value );
}

void glPathParameterivNV(GLuint path, GLenum pname, const GLint *value)
{
	gleGetCurrent()->glPathParameterivNV( path, pname, value );
}

void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
	gleGetCurrent()->glPathStencilDepthOffsetNV( factor, units );
}

void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
	gleGetCurrent()->glPathStencilFuncNV( func, ref, mask );
}

void glPathStringNV(GLuint path, GLenum format, GLsizei length, const GLvoid *pathString)
{
	gleGetCurrent()->glPathStringNV( path, format, length, pathString );
}

void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const GLvoid *coords)
{
	gleGetCurrent()->glPathSubCommandsNV( path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords );
}

void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const GLvoid *coords)
{
	gleGetCurrent()->glPathSubCoordsNV( path, coordStart, numCoords, coordType, coords );
}

void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat *coeffs)
{
	gleGetCurrent()->glPathTexGenNV( texCoordSet, genMode, components, coeffs );
}

GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY)
{
	return gleGetCurrent()->glPointAlongPathNV( path, startSegment, numSegments, distance, x, y, tangentX, tangentY );
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues)
{
	gleGetCurrent()->glStencilFillPathInstancedNV( numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues );
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
	gleGetCurrent()->glStencilFillPathNV( path, fillMode, mask );
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues)
{
	gleGetCurrent()->glStencilStrokePathInstancedNV( numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues );
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
	gleGetCurrent()->glStencilStrokePathNV( path, reference, mask );
}

void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues)
{
	gleGetCurrent()->glTransformPathNV( resultPath, srcPath, transformType, transformValues );
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights)
{
	gleGetCurrent()->glWeightPathsNV( resultPath, numPaths, paths, weights );
}




// ********* GL_NV_pixel_data_range *********
bool isGL_NV_pixel_data_range()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_pixel_data_range;

	return isSupported;
}


void glFlushPixelDataRangeNV(GLenum target)
{
	gleGetCurrent()->glFlushPixelDataRangeNV( target );
}

void glPixelDataRangeNV(GLenum target, GLsizei length, GLvoid *pointer)
{
	gleGetCurrent()->glPixelDataRangeNV( target, length, pointer );
}




// ********* GL_NV_point_sprite *********
bool isGL_NV_point_sprite()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_point_sprite;

	return isSupported;
}


void glPointParameteriNV(GLenum pname, GLint param)
{
	gleGetCurrent()->glPointParameteriNV( pname, param );
}

void glPointParameterivNV(GLenum pname, const GLint *params)
{
	gleGetCurrent()->glPointParameterivNV( pname, params );
}




// ********* GL_NV_present_video *********
bool isGL_NV_present_video()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_present_video;

	return isSupported;
}


void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT *params)
{
	gleGetCurrent()->glGetVideoi64vNV( video_slot, pname, params );
}

void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVideoivNV( video_slot, pname, params );
}

void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT *params)
{
	gleGetCurrent()->glGetVideoui64vNV( video_slot, pname, params );
}

void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetVideouivNV( video_slot, pname, params );
}

void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3)
{
	gleGetCurrent()->glPresentFrameDualFillNV( video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3 );
}

void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1)
{
	gleGetCurrent()->glPresentFrameKeyedNV( video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1 );
}




// ********* GL_NV_primitive_restart *********
bool isGL_NV_primitive_restart()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_primitive_restart;

	return isSupported;
}


void glPrimitiveRestartIndexNV(GLuint index)
{
	gleGetCurrent()->glPrimitiveRestartIndexNV( index );
}

void glPrimitiveRestartNV(void)
{
	gleGetCurrent()->glPrimitiveRestartNV(  );
}




// ********* GL_NV_register_combiners *********
bool isGL_NV_register_combiners()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_register_combiners;

	return isSupported;
}


void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
	gleGetCurrent()->glCombinerInputNV( stage, portion, variable, input, mapping, componentUsage );
}

void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
	gleGetCurrent()->glCombinerOutputNV( stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum );
}

void glCombinerParameterfNV(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glCombinerParameterfNV( pname, param );
}

void glCombinerParameterfvNV(GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glCombinerParameterfvNV( pname, params );
}

void glCombinerParameteriNV(GLenum pname, GLint param)
{
	gleGetCurrent()->glCombinerParameteriNV( pname, param );
}

void glCombinerParameterivNV(GLenum pname, const GLint *params)
{
	gleGetCurrent()->glCombinerParameterivNV( pname, params );
}

void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
	gleGetCurrent()->glFinalCombinerInputNV( variable, input, mapping, componentUsage );
}

void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetCombinerInputParameterfvNV( stage, portion, variable, pname, params );
}

void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetCombinerInputParameterivNV( stage, portion, variable, pname, params );
}

void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetCombinerOutputParameterfvNV( stage, portion, pname, params );
}

void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetCombinerOutputParameterivNV( stage, portion, pname, params );
}

void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetFinalCombinerInputParameterfvNV( variable, pname, params );
}

void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetFinalCombinerInputParameterivNV( variable, pname, params );
}




// ********* GL_NV_register_combiners2 *********
bool isGL_NV_register_combiners2()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_register_combiners2;

	return isSupported;
}


void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glCombinerStageParameterfvNV( stage, pname, params );
}

void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetCombinerStageParameterfvNV( stage, pname, params );
}




// ********* GL_NV_shader_buffer_load *********
bool isGL_NV_shader_buffer_load()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_shader_buffer_load;

	return isSupported;
}


void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT *params)
{
	gleGetCurrent()->glGetBufferParameterui64vNV( target, pname, params );
}

void glGetIntegerui64vNV(GLenum value, GLuint64EXT *result)
{
	gleGetCurrent()->glGetIntegerui64vNV( value, result );
}

void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT *params)
{
	gleGetCurrent()->glGetNamedBufferParameterui64vNV( buffer, pname, params );
}

void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT *params)
{
	gleGetCurrent()->glGetUniformui64vNV( program, location, params );
}

GLboolean glIsBufferResidentNV(GLenum target)
{
	return gleGetCurrent()->glIsBufferResidentNV( target );
}

GLboolean glIsNamedBufferResidentNV(GLuint buffer)
{
	return gleGetCurrent()->glIsNamedBufferResidentNV( buffer );
}

void glMakeBufferNonResidentNV(GLenum target)
{
	gleGetCurrent()->glMakeBufferNonResidentNV( target );
}

void glMakeBufferResidentNV(GLenum target, GLenum access)
{
	gleGetCurrent()->glMakeBufferResidentNV( target, access );
}

void glMakeNamedBufferNonResidentNV(GLuint buffer)
{
	gleGetCurrent()->glMakeNamedBufferNonResidentNV( buffer );
}

void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access)
{
	gleGetCurrent()->glMakeNamedBufferResidentNV( buffer, access );
}

void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value)
{
	gleGetCurrent()->glProgramUniformui64NV( program, location, value );
}

void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glProgramUniformui64vNV( program, location, count, value );
}

void glUniformui64NV(GLint location, GLuint64EXT value)
{
	gleGetCurrent()->glUniformui64NV( location, value );
}

void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT *value)
{
	gleGetCurrent()->glUniformui64vNV( location, count, value );
}




// ********* GL_NV_shader_buffer_store *********
bool isGL_NV_shader_buffer_store()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_shader_buffer_store;

	return isSupported;
}




// ********* GL_NV_tessellation_program5 *********
bool isGL_NV_tessellation_program5()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_tessellation_program5;

	return isSupported;
}




// ********* GL_NV_texgen_emboss *********
bool isGL_NV_texgen_emboss()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texgen_emboss;

	return isSupported;
}




// ********* GL_NV_texgen_reflection *********
bool isGL_NV_texgen_reflection()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texgen_reflection;

	return isSupported;
}




// ********* GL_NV_texture_barrier *********
bool isGL_NV_texture_barrier()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texture_barrier;

	return isSupported;
}


void glTextureBarrierNV(void)
{
	gleGetCurrent()->glTextureBarrierNV(  );
}




// ********* GL_NV_texture_compression_vtc *********
bool isGL_NV_texture_compression_vtc()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texture_compression_vtc;

	return isSupported;
}




// ********* GL_NV_texture_env_combine4 *********
bool isGL_NV_texture_env_combine4()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texture_env_combine4;

	return isSupported;
}




// ********* GL_NV_texture_expand_normal *********
bool isGL_NV_texture_expand_normal()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texture_expand_normal;

	return isSupported;
}




// ********* GL_NV_texture_multisample *********
bool isGL_NV_texture_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texture_multisample;

	return isSupported;
}


void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
	gleGetCurrent()->glTexImage2DMultisampleCoverageNV( target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations );
}

void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
	gleGetCurrent()->glTexImage3DMultisampleCoverageNV( target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations );
}

void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
	gleGetCurrent()->glTextureImage2DMultisampleCoverageNV( texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations );
}

void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations)
{
	gleGetCurrent()->glTextureImage2DMultisampleNV( texture, target, samples, internalFormat, width, height, fixedSampleLocations );
}

void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
	gleGetCurrent()->glTextureImage3DMultisampleCoverageNV( texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations );
}

void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations)
{
	gleGetCurrent()->glTextureImage3DMultisampleNV( texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations );
}




// ********* GL_NV_texture_rectangle *********
bool isGL_NV_texture_rectangle()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texture_rectangle;

	return isSupported;
}




// ********* GL_NV_texture_shader *********
bool isGL_NV_texture_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texture_shader;

	return isSupported;
}




// ********* GL_NV_texture_shader2 *********
bool isGL_NV_texture_shader2()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texture_shader2;

	return isSupported;
}




// ********* GL_NV_texture_shader3 *********
bool isGL_NV_texture_shader3()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_texture_shader3;

	return isSupported;
}




// ********* GL_NV_transform_feedback *********
bool isGL_NV_transform_feedback()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_transform_feedback;

	return isSupported;
}


void glActiveVaryingNV(GLuint program, const GLchar *name)
{
	gleGetCurrent()->glActiveVaryingNV( program, name );
}

void glBeginTransformFeedbackNV(GLenum primitiveMode)
{
	gleGetCurrent()->glBeginTransformFeedbackNV( primitiveMode );
}

void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer)
{
	gleGetCurrent()->glBindBufferBaseNV( target, index, buffer );
}

void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset)
{
	gleGetCurrent()->glBindBufferOffsetNV( target, index, buffer, offset );
}

void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	gleGetCurrent()->glBindBufferRangeNV( target, index, buffer, offset, size );
}

void glEndTransformFeedbackNV(void)
{
	gleGetCurrent()->glEndTransformFeedbackNV(  );
}

void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
{
	gleGetCurrent()->glGetActiveVaryingNV( program, index, bufSize, length, size, type, name );
}

void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint *location)
{
	gleGetCurrent()->glGetTransformFeedbackVaryingNV( program, index, location );
}

GLint glGetVaryingLocationNV(GLuint program, const GLchar *name)
{
	return gleGetCurrent()->glGetVaryingLocationNV( program, name );
}

void glTransformFeedbackAttribsNV(GLuint count, const GLint *attribs, GLenum bufferMode)
{
	gleGetCurrent()->glTransformFeedbackAttribsNV( count, attribs, bufferMode );
}

void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint *attribs, GLsizei nbuffers, const GLint *bufstreams, GLenum bufferMode)
{
	gleGetCurrent()->glTransformFeedbackStreamAttribsNV( count, attribs, nbuffers, bufstreams, bufferMode );
}

void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode)
{
	gleGetCurrent()->glTransformFeedbackVaryingsNV( program, count, locations, bufferMode );
}




// ********* GL_NV_transform_feedback2 *********
bool isGL_NV_transform_feedback2()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_transform_feedback2;

	return isSupported;
}


void glBindTransformFeedbackNV(GLenum target, GLuint id)
{
	gleGetCurrent()->glBindTransformFeedbackNV( target, id );
}

void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint *ids)
{
	gleGetCurrent()->glDeleteTransformFeedbacksNV( n, ids );
}

void glDrawTransformFeedbackNV(GLenum mode, GLuint id)
{
	gleGetCurrent()->glDrawTransformFeedbackNV( mode, id );
}

void glGenTransformFeedbacksNV(GLsizei n, GLuint *ids)
{
	gleGetCurrent()->glGenTransformFeedbacksNV( n, ids );
}

GLboolean glIsTransformFeedbackNV(GLuint id)
{
	return gleGetCurrent()->glIsTransformFeedbackNV( id );
}

void glPauseTransformFeedbackNV(void)
{
	gleGetCurrent()->glPauseTransformFeedbackNV(  );
}

void glResumeTransformFeedbackNV(void)
{
	gleGetCurrent()->glResumeTransformFeedbackNV(  );
}




// ********* GL_NV_vdpau_interop *********
bool isGL_NV_vdpau_interop()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vdpau_interop;

	return isSupported;
}


void glVDPAUFiniNV(void)
{
	gleGetCurrent()->glVDPAUFiniNV(  );
}

void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values)
{
	gleGetCurrent()->glVDPAUGetSurfaceivNV( surface, pname, bufSize, length, values );
}

void glVDPAUInitNV(const GLvoid *vdpDevice, const GLvoid *getProcAddress)
{
	gleGetCurrent()->glVDPAUInitNV( vdpDevice, getProcAddress );
}

void glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface)
{
	gleGetCurrent()->glVDPAUIsSurfaceNV( surface );
}

void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV *surfaces)
{
	gleGetCurrent()->glVDPAUMapSurfacesNV( numSurfaces, surfaces );
}

GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(GLvoid *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames)
{
	return gleGetCurrent()->glVDPAURegisterOutputSurfaceNV( vdpSurface, target, numTextureNames, textureNames );
}

GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(GLvoid *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames)
{
	return gleGetCurrent()->glVDPAURegisterVideoSurfaceNV( vdpSurface, target, numTextureNames, textureNames );
}

void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access)
{
	gleGetCurrent()->glVDPAUSurfaceAccessNV( surface, access );
}

void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV *surfaces)
{
	gleGetCurrent()->glVDPAUUnmapSurfacesNV( numSurface, surfaces );
}

void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface)
{
	gleGetCurrent()->glVDPAUUnregisterSurfaceNV( surface );
}




// ********* GL_NV_vertex_array_range *********
bool isGL_NV_vertex_array_range()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_array_range;

	return isSupported;
}


void glFlushVertexArrayRangeNV(void)
{
	gleGetCurrent()->glFlushVertexArrayRangeNV(  );
}

void glVertexArrayRangeNV(GLsizei length, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexArrayRangeNV( length, pointer );
}




// ********* GL_NV_vertex_array_range2 *********
bool isGL_NV_vertex_array_range2()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_array_range2;

	return isSupported;
}




// ********* GL_NV_vertex_attrib_integer_64bit *********
bool isGL_NV_vertex_attrib_integer_64bit()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_attrib_integer_64bit;

	return isSupported;
}


void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT *params)
{
	gleGetCurrent()->glGetVertexAttribLi64vNV( index, pname, params );
}

void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT *params)
{
	gleGetCurrent()->glGetVertexAttribLui64vNV( index, pname, params );
}

void glVertexAttribL1i64NV(GLuint index, GLint64EXT x)
{
	gleGetCurrent()->glVertexAttribL1i64NV( index, x );
}

void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT *v)
{
	gleGetCurrent()->glVertexAttribL1i64vNV( index, v );
}

void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x)
{
	gleGetCurrent()->glVertexAttribL1ui64NV( index, x );
}

void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT *v)
{
	gleGetCurrent()->glVertexAttribL1ui64vNV( index, v );
}

void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y)
{
	gleGetCurrent()->glVertexAttribL2i64NV( index, x, y );
}

void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT *v)
{
	gleGetCurrent()->glVertexAttribL2i64vNV( index, v );
}

void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y)
{
	gleGetCurrent()->glVertexAttribL2ui64NV( index, x, y );
}

void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT *v)
{
	gleGetCurrent()->glVertexAttribL2ui64vNV( index, v );
}

void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
	gleGetCurrent()->glVertexAttribL3i64NV( index, x, y, z );
}

void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT *v)
{
	gleGetCurrent()->glVertexAttribL3i64vNV( index, v );
}

void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
	gleGetCurrent()->glVertexAttribL3ui64NV( index, x, y, z );
}

void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT *v)
{
	gleGetCurrent()->glVertexAttribL3ui64vNV( index, v );
}

void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
	gleGetCurrent()->glVertexAttribL4i64NV( index, x, y, z, w );
}

void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT *v)
{
	gleGetCurrent()->glVertexAttribL4i64vNV( index, v );
}

void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
	gleGetCurrent()->glVertexAttribL4ui64NV( index, x, y, z, w );
}

void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT *v)
{
	gleGetCurrent()->glVertexAttribL4ui64vNV( index, v );
}

void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
	gleGetCurrent()->glVertexAttribLFormatNV( index, size, type, stride );
}




// ********* GL_NV_vertex_buffer_unified_memory *********
bool isGL_NV_vertex_buffer_unified_memory()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_buffer_unified_memory;

	return isSupported;
}


void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length)
{
	gleGetCurrent()->glBufferAddressRangeNV( pname, index, address, length );
}

void glColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
	gleGetCurrent()->glColorFormatNV( size, type, stride );
}

void glEdgeFlagFormatNV(GLsizei stride)
{
	gleGetCurrent()->glEdgeFlagFormatNV( stride );
}

void glFogCoordFormatNV(GLenum type, GLsizei stride)
{
	gleGetCurrent()->glFogCoordFormatNV( type, stride );
}

void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT *result)
{
	gleGetCurrent()->glGetIntegerui64i_vNV( value, index, result );
}

void glIndexFormatNV(GLenum type, GLsizei stride)
{
	gleGetCurrent()->glIndexFormatNV( type, stride );
}

void glNormalFormatNV(GLenum type, GLsizei stride)
{
	gleGetCurrent()->glNormalFormatNV( type, stride );
}

void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride)
{
	gleGetCurrent()->glSecondaryColorFormatNV( size, type, stride );
}

void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride)
{
	gleGetCurrent()->glTexCoordFormatNV( size, type, stride );
}

void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride)
{
	gleGetCurrent()->glVertexAttribFormatNV( index, size, type, normalized, stride );
}

void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride)
{
	gleGetCurrent()->glVertexAttribIFormatNV( index, size, type, stride );
}

void glVertexFormatNV(GLint size, GLenum type, GLsizei stride)
{
	gleGetCurrent()->glVertexFormatNV( size, type, stride );
}




// ********* GL_NV_vertex_program *********
bool isGL_NV_vertex_program()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_program;

	return isSupported;
}


GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint *programs, GLboolean *residences)
{
	return gleGetCurrent()->glAreProgramsResidentNV( n, programs, residences );
}

void glBindProgramNV(GLenum target, GLuint id)
{
	gleGetCurrent()->glBindProgramNV( target, id );
}

void glDeleteProgramsNV(GLsizei n, const GLuint *programs)
{
	gleGetCurrent()->glDeleteProgramsNV( n, programs );
}

void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat *params)
{
	gleGetCurrent()->glExecuteProgramNV( target, id, params );
}

void glGenProgramsNV(GLsizei n, GLuint *programs)
{
	gleGetCurrent()->glGenProgramsNV( n, programs );
}

void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble *params)
{
	gleGetCurrent()->glGetProgramParameterdvNV( target, index, pname, params );
}

void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetProgramParameterfvNV( target, index, pname, params );
}

void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte *program)
{
	gleGetCurrent()->glGetProgramStringNV( id, pname, program );
}

void glGetProgramivNV(GLuint id, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetProgramivNV( id, pname, params );
}

void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetTrackMatrixivNV( target, address, pname, params );
}

void glGetVertexAttribPointervNV(GLuint index, GLenum pname, GLvoid* *pointer)
{
	gleGetCurrent()->glGetVertexAttribPointervNV( index, pname, pointer );
}

void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble *params)
{
	gleGetCurrent()->glGetVertexAttribdvNV( index, pname, params );
}

void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetVertexAttribfvNV( index, pname, params );
}

void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVertexAttribivNV( index, pname, params );
}

GLboolean glIsProgramNV(GLuint id)
{
	return gleGetCurrent()->glIsProgramNV( id );
}

void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte *program)
{
	gleGetCurrent()->glLoadProgramNV( target, id, len, program );
}

void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glProgramParameter4dNV( target, index, x, y, z, w );
}

void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glProgramParameter4dvNV( target, index, v );
}

void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glProgramParameter4fNV( target, index, x, y, z, w );
}

void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glProgramParameter4fvNV( target, index, v );
}

void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble *v)
{
	gleGetCurrent()->glProgramParameters4dvNV( target, index, count, v );
}

void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat *v)
{
	gleGetCurrent()->glProgramParameters4fvNV( target, index, count, v );
}

void glRequestResidentProgramsNV(GLsizei n, const GLuint *programs)
{
	gleGetCurrent()->glRequestResidentProgramsNV( n, programs );
}

void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
	gleGetCurrent()->glTrackMatrixNV( target, address, matrix, transform );
}

void glVertexAttrib1dNV(GLuint index, GLdouble x)
{
	gleGetCurrent()->glVertexAttrib1dNV( index, x );
}

void glVertexAttrib1dvNV(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib1dvNV( index, v );
}

void glVertexAttrib1fNV(GLuint index, GLfloat x)
{
	gleGetCurrent()->glVertexAttrib1fNV( index, x );
}

void glVertexAttrib1fvNV(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib1fvNV( index, v );
}

void glVertexAttrib1sNV(GLuint index, GLshort x)
{
	gleGetCurrent()->glVertexAttrib1sNV( index, x );
}

void glVertexAttrib1svNV(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib1svNV( index, v );
}

void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
	gleGetCurrent()->glVertexAttrib2dNV( index, x, y );
}

void glVertexAttrib2dvNV(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib2dvNV( index, v );
}

void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
	gleGetCurrent()->glVertexAttrib2fNV( index, x, y );
}

void glVertexAttrib2fvNV(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib2fvNV( index, v );
}

void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
	gleGetCurrent()->glVertexAttrib2sNV( index, x, y );
}

void glVertexAttrib2svNV(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib2svNV( index, v );
}

void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glVertexAttrib3dNV( index, x, y, z );
}

void glVertexAttrib3dvNV(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib3dvNV( index, v );
}

void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glVertexAttrib3fNV( index, x, y, z );
}

void glVertexAttrib3fvNV(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib3fvNV( index, v );
}

void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
	gleGetCurrent()->glVertexAttrib3sNV( index, x, y, z );
}

void glVertexAttrib3svNV(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib3svNV( index, v );
}

void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glVertexAttrib4dNV( index, x, y, z, w );
}

void glVertexAttrib4dvNV(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib4dvNV( index, v );
}

void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glVertexAttrib4fNV( index, x, y, z, w );
}

void glVertexAttrib4fvNV(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib4fvNV( index, v );
}

void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	gleGetCurrent()->glVertexAttrib4sNV( index, x, y, z, w );
}

void glVertexAttrib4svNV(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib4svNV( index, v );
}

void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	gleGetCurrent()->glVertexAttrib4ubNV( index, x, y, z, w );
}

void glVertexAttrib4ubvNV(GLuint index, const GLubyte *v)
{
	gleGetCurrent()->glVertexAttrib4ubvNV( index, v );
}

void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexAttribPointerNV( index, fsize, type, stride, pointer );
}

void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribs1dvNV( index, count, v );
}

void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttribs1fvNV( index, count, v );
}

void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort *v)
{
	gleGetCurrent()->glVertexAttribs1svNV( index, count, v );
}

void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribs2dvNV( index, count, v );
}

void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttribs2fvNV( index, count, v );
}

void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort *v)
{
	gleGetCurrent()->glVertexAttribs2svNV( index, count, v );
}

void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribs3dvNV( index, count, v );
}

void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttribs3fvNV( index, count, v );
}

void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort *v)
{
	gleGetCurrent()->glVertexAttribs3svNV( index, count, v );
}

void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttribs4dvNV( index, count, v );
}

void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttribs4fvNV( index, count, v );
}

void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort *v)
{
	gleGetCurrent()->glVertexAttribs4svNV( index, count, v );
}

void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte *v)
{
	gleGetCurrent()->glVertexAttribs4ubvNV( index, count, v );
}




// ********* GL_NV_vertex_program1_1 *********
bool isGL_NV_vertex_program1_1()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_program1_1;

	return isSupported;
}




// ********* GL_NV_vertex_program2 *********
bool isGL_NV_vertex_program2()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_program2;

	return isSupported;
}




// ********* GL_NV_vertex_program2_option *********
bool isGL_NV_vertex_program2_option()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_program2_option;

	return isSupported;
}




// ********* GL_NV_vertex_program3 *********
bool isGL_NV_vertex_program3()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_program3;

	return isSupported;
}




// ********* GL_NV_vertex_program4 *********
bool isGL_NV_vertex_program4()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_program4;

	return isSupported;
}


void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVertexAttribIivEXT( index, pname, params );
}

void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetVertexAttribIuivEXT( index, pname, params );
}

void glVertexAttribI1iEXT(GLuint index, GLint x)
{
	gleGetCurrent()->glVertexAttribI1iEXT( index, x );
}

void glVertexAttribI1ivEXT(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttribI1ivEXT( index, v );
}

void glVertexAttribI1uiEXT(GLuint index, GLuint x)
{
	gleGetCurrent()->glVertexAttribI1uiEXT( index, x );
}

void glVertexAttribI1uivEXT(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttribI1uivEXT( index, v );
}

void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y)
{
	gleGetCurrent()->glVertexAttribI2iEXT( index, x, y );
}

void glVertexAttribI2ivEXT(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttribI2ivEXT( index, v );
}

void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y)
{
	gleGetCurrent()->glVertexAttribI2uiEXT( index, x, y );
}

void glVertexAttribI2uivEXT(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttribI2uivEXT( index, v );
}

void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z)
{
	gleGetCurrent()->glVertexAttribI3iEXT( index, x, y, z );
}

void glVertexAttribI3ivEXT(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttribI3ivEXT( index, v );
}

void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z)
{
	gleGetCurrent()->glVertexAttribI3uiEXT( index, x, y, z );
}

void glVertexAttribI3uivEXT(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttribI3uivEXT( index, v );
}

void glVertexAttribI4bvEXT(GLuint index, const GLbyte *v)
{
	gleGetCurrent()->glVertexAttribI4bvEXT( index, v );
}

void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	gleGetCurrent()->glVertexAttribI4iEXT( index, x, y, z, w );
}

void glVertexAttribI4ivEXT(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttribI4ivEXT( index, v );
}

void glVertexAttribI4svEXT(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttribI4svEXT( index, v );
}

void glVertexAttribI4ubvEXT(GLuint index, const GLubyte *v)
{
	gleGetCurrent()->glVertexAttribI4ubvEXT( index, v );
}

void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	gleGetCurrent()->glVertexAttribI4uiEXT( index, x, y, z, w );
}

void glVertexAttribI4uivEXT(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttribI4uivEXT( index, v );
}

void glVertexAttribI4usvEXT(GLuint index, const GLushort *v)
{
	gleGetCurrent()->glVertexAttribI4usvEXT( index, v );
}

void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexAttribIPointerEXT( index, size, type, stride, pointer );
}




// ********* GL_NV_video_capture *********
bool isGL_NV_video_capture()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_video_capture;

	return isSupported;
}


void glBeginVideoCaptureNV(GLuint video_capture_slot)
{
	gleGetCurrent()->glBeginVideoCaptureNV( video_capture_slot );
}

void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset)
{
	gleGetCurrent()->glBindVideoCaptureStreamBufferNV( video_capture_slot, stream, frame_region, offset );
}

void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture)
{
	gleGetCurrent()->glBindVideoCaptureStreamTextureNV( video_capture_slot, stream, frame_region, target, texture );
}

void glEndVideoCaptureNV(GLuint video_capture_slot)
{
	gleGetCurrent()->glEndVideoCaptureNV( video_capture_slot );
}

void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params)
{
	gleGetCurrent()->glGetVideoCaptureStreamdvNV( video_capture_slot, stream, pname, params );
}

void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetVideoCaptureStreamfvNV( video_capture_slot, stream, pname, params );
}

void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVideoCaptureStreamivNV( video_capture_slot, stream, pname, params );
}

void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVideoCaptureivNV( video_capture_slot, pname, params );
}

GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time)
{
	return gleGetCurrent()->glVideoCaptureNV( video_capture_slot, sequence_num, capture_time );
}

void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble *params)
{
	gleGetCurrent()->glVideoCaptureStreamParameterdvNV( video_capture_slot, stream, pname, params );
}

void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glVideoCaptureStreamParameterfvNV( video_capture_slot, stream, pname, params );
}

void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glVideoCaptureStreamParameterivNV( video_capture_slot, stream, pname, params );
}




// ********* GL_OES_read_format *********
bool isGL_OES_read_format()
{
	const bool isSupported = gleGetCurrent()->isGL_OES_read_format;

	return isSupported;
}




// ********* GL_OML_interlace *********
bool isGL_OML_interlace()
{
	const bool isSupported = gleGetCurrent()->isGL_OML_interlace;

	return isSupported;
}




// ********* GL_OML_resample *********
bool isGL_OML_resample()
{
	const bool isSupported = gleGetCurrent()->isGL_OML_resample;

	return isSupported;
}




// ********* GL_OML_subsample *********
bool isGL_OML_subsample()
{
	const bool isSupported = gleGetCurrent()->isGL_OML_subsample;

	return isSupported;
}




// ********* GL_PGI_misc_hints *********
bool isGL_PGI_misc_hints()
{
	const bool isSupported = gleGetCurrent()->isGL_PGI_misc_hints;

	return isSupported;
}


void glHintPGI(GLenum target, GLint mode)
{
	gleGetCurrent()->glHintPGI( target, mode );
}




// ********* GL_PGI_vertex_hints *********
bool isGL_PGI_vertex_hints()
{
	const bool isSupported = gleGetCurrent()->isGL_PGI_vertex_hints;

	return isSupported;
}




// ********* GL_REND_screen_coordinates *********
bool isGL_REND_screen_coordinates()
{
	const bool isSupported = gleGetCurrent()->isGL_REND_screen_coordinates;

	return isSupported;
}




// ********* GL_S3_s3tc *********
bool isGL_S3_s3tc()
{
	const bool isSupported = gleGetCurrent()->isGL_S3_s3tc;

	return isSupported;
}




// ********* GL_SGIS_detail_texture *********
bool isGL_SGIS_detail_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_detail_texture;

	return isSupported;
}


void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat *points)
{
	gleGetCurrent()->glDetailTexFuncSGIS( target, n, points );
}

void glGetDetailTexFuncSGIS(GLenum target, GLfloat *points)
{
	gleGetCurrent()->glGetDetailTexFuncSGIS( target, points );
}




// ********* GL_SGIS_fog_function *********
bool isGL_SGIS_fog_function()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_fog_function;

	return isSupported;
}


void glFogFuncSGIS(GLsizei n, const GLfloat *points)
{
	gleGetCurrent()->glFogFuncSGIS( n, points );
}

void glGetFogFuncSGIS(GLfloat *points)
{
	gleGetCurrent()->glGetFogFuncSGIS( points );
}




// ********* GL_SGIS_generate_mipmap *********
bool isGL_SGIS_generate_mipmap()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_generate_mipmap;

	return isSupported;
}




// ********* GL_SGIS_multisample *********
bool isGL_SGIS_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_multisample;

	return isSupported;
}


void glSampleMaskSGIS(GLclampf value, GLboolean invert)
{
	gleGetCurrent()->glSampleMaskSGIS( value, invert );
}

void glSamplePatternSGIS(GLenum pattern)
{
	gleGetCurrent()->glSamplePatternSGIS( pattern );
}




// ********* GL_SGIS_pixel_texture *********
bool isGL_SGIS_pixel_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_pixel_texture;

	return isSupported;
}


void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetPixelTexGenParameterfvSGIS( pname, params );
}

void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetPixelTexGenParameterivSGIS( pname, params );
}

void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glPixelTexGenParameterfSGIS( pname, param );
}

void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glPixelTexGenParameterfvSGIS( pname, params );
}

void glPixelTexGenParameteriSGIS(GLenum pname, GLint param)
{
	gleGetCurrent()->glPixelTexGenParameteriSGIS( pname, param );
}

void glPixelTexGenParameterivSGIS(GLenum pname, const GLint *params)
{
	gleGetCurrent()->glPixelTexGenParameterivSGIS( pname, params );
}




// ********* GL_SGIS_point_line_texgen *********
bool isGL_SGIS_point_line_texgen()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_point_line_texgen;

	return isSupported;
}




// ********* GL_SGIS_point_parameters *********
bool isGL_SGIS_point_parameters()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_point_parameters;

	return isSupported;
}


void glPointParameterfSGIS(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glPointParameterfSGIS( pname, param );
}

void glPointParameterfvSGIS(GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glPointParameterfvSGIS( pname, params );
}




// ********* GL_SGIS_sharpen_texture *********
bool isGL_SGIS_sharpen_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_sharpen_texture;

	return isSupported;
}


void glGetSharpenTexFuncSGIS(GLenum target, GLfloat *points)
{
	gleGetCurrent()->glGetSharpenTexFuncSGIS( target, points );
}

void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat *points)
{
	gleGetCurrent()->glSharpenTexFuncSGIS( target, n, points );
}




// ********* GL_SGIS_texture4D *********
bool isGL_SGIS_texture4D()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_texture4D;

	return isSupported;
}


void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTexImage4DSGIS( target, level, internalformat, width, height, depth, size4d, border, format, type, pixels );
}

void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTexSubImage4DSGIS( target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels );
}




// ********* GL_SGIS_texture_border_clamp *********
bool isGL_SGIS_texture_border_clamp()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_texture_border_clamp;

	return isSupported;
}




// ********* GL_SGIS_texture_color_mask *********
bool isGL_SGIS_texture_color_mask()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_texture_color_mask;

	return isSupported;
}


void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	gleGetCurrent()->glTextureColorMaskSGIS( red, green, blue, alpha );
}




// ********* GL_SGIS_texture_edge_clamp *********
bool isGL_SGIS_texture_edge_clamp()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_texture_edge_clamp;

	return isSupported;
}




// ********* GL_SGIS_texture_filter4 *********
bool isGL_SGIS_texture_filter4()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_texture_filter4;

	return isSupported;
}


void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat *weights)
{
	gleGetCurrent()->glGetTexFilterFuncSGIS( target, filter, weights );
}

void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat *weights)
{
	gleGetCurrent()->glTexFilterFuncSGIS( target, filter, n, weights );
}




// ********* GL_SGIS_texture_lod *********
bool isGL_SGIS_texture_lod()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_texture_lod;

	return isSupported;
}




// ********* GL_SGIS_texture_select *********
bool isGL_SGIS_texture_select()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_texture_select;

	return isSupported;
}




// ********* GL_SGIX_async *********
bool isGL_SGIX_async()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_async;

	return isSupported;
}


void glAsyncMarkerSGIX(GLuint marker)
{
	gleGetCurrent()->glAsyncMarkerSGIX( marker );
}

void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range)
{
	gleGetCurrent()->glDeleteAsyncMarkersSGIX( marker, range );
}

GLint glFinishAsyncSGIX(GLuint *markerp)
{
	return gleGetCurrent()->glFinishAsyncSGIX( markerp );
}

GLuint glGenAsyncMarkersSGIX(GLsizei range)
{
	return gleGetCurrent()->glGenAsyncMarkersSGIX( range );
}

GLboolean glIsAsyncMarkerSGIX(GLuint marker)
{
	return gleGetCurrent()->glIsAsyncMarkerSGIX( marker );
}

GLint glPollAsyncSGIX(GLuint *markerp)
{
	return gleGetCurrent()->glPollAsyncSGIX( markerp );
}




// ********* GL_SGIX_async_histogram *********
bool isGL_SGIX_async_histogram()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_async_histogram;

	return isSupported;
}




// ********* GL_SGIX_async_pixel *********
bool isGL_SGIX_async_pixel()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_async_pixel;

	return isSupported;
}




// ********* GL_SGIX_blend_alpha_minmax *********
bool isGL_SGIX_blend_alpha_minmax()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_blend_alpha_minmax;

	return isSupported;
}




// ********* GL_SGIX_calligraphic_fragment *********
bool isGL_SGIX_calligraphic_fragment()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_calligraphic_fragment;

	return isSupported;
}




// ********* GL_SGIX_clipmap *********
bool isGL_SGIX_clipmap()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_clipmap;

	return isSupported;
}




// ********* GL_SGIX_convolution_accuracy *********
bool isGL_SGIX_convolution_accuracy()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_convolution_accuracy;

	return isSupported;
}




// ********* GL_SGIX_depth_pass_instrument *********
bool isGL_SGIX_depth_pass_instrument()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_depth_pass_instrument;

	return isSupported;
}




// ********* GL_SGIX_depth_texture *********
bool isGL_SGIX_depth_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_depth_texture;

	return isSupported;
}




// ********* GL_SGIX_flush_raster *********
bool isGL_SGIX_flush_raster()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_flush_raster;

	return isSupported;
}


void glFlushRasterSGIX(void)
{
	gleGetCurrent()->glFlushRasterSGIX(  );
}




// ********* GL_SGIX_fog_offset *********
bool isGL_SGIX_fog_offset()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_fog_offset;

	return isSupported;
}




// ********* GL_SGIX_fog_scale *********
bool isGL_SGIX_fog_scale()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_fog_scale;

	return isSupported;
}




// ********* GL_SGIX_fragment_lighting *********
bool isGL_SGIX_fragment_lighting()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_fragment_lighting;

	return isSupported;
}


void glFragmentColorMaterialSGIX(GLenum face, GLenum mode)
{
	gleGetCurrent()->glFragmentColorMaterialSGIX( face, mode );
}

void glFragmentLightModelfSGIX(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glFragmentLightModelfSGIX( pname, param );
}

void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glFragmentLightModelfvSGIX( pname, params );
}

void glFragmentLightModeliSGIX(GLenum pname, GLint param)
{
	gleGetCurrent()->glFragmentLightModeliSGIX( pname, param );
}

void glFragmentLightModelivSGIX(GLenum pname, const GLint *params)
{
	gleGetCurrent()->glFragmentLightModelivSGIX( pname, params );
}

void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glFragmentLightfSGIX( light, pname, param );
}

void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glFragmentLightfvSGIX( light, pname, params );
}

void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param)
{
	gleGetCurrent()->glFragmentLightiSGIX( light, pname, param );
}

void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glFragmentLightivSGIX( light, pname, params );
}

void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glFragmentMaterialfSGIX( face, pname, param );
}

void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glFragmentMaterialfvSGIX( face, pname, params );
}

void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param)
{
	gleGetCurrent()->glFragmentMaterialiSGIX( face, pname, param );
}

void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glFragmentMaterialivSGIX( face, pname, params );
}

void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetFragmentLightfvSGIX( light, pname, params );
}

void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetFragmentLightivSGIX( light, pname, params );
}

void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetFragmentMaterialfvSGIX( face, pname, params );
}

void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetFragmentMaterialivSGIX( face, pname, params );
}

void glLightEnviSGIX(GLenum pname, GLint param)
{
	gleGetCurrent()->glLightEnviSGIX( pname, param );
}




// ********* GL_SGIX_framezoom *********
bool isGL_SGIX_framezoom()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_framezoom;

	return isSupported;
}


void glFrameZoomSGIX(GLint factor)
{
	gleGetCurrent()->glFrameZoomSGIX( factor );
}




// ********* GL_SGIX_igloo_interface *********
bool isGL_SGIX_igloo_interface()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_igloo_interface;

	return isSupported;
}


void glIglooInterfaceSGIX(GLenum pname, const GLvoid *params)
{
	gleGetCurrent()->glIglooInterfaceSGIX( pname, params );
}




// ********* GL_SGIX_impact_pixel_texture *********
bool isGL_SGIX_impact_pixel_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_impact_pixel_texture;

	return isSupported;
}




// ********* GL_SGIX_instruments *********
bool isGL_SGIX_instruments()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_instruments;

	return isSupported;
}


GLint glGetInstrumentsSGIX(void)
{
	return gleGetCurrent()->glGetInstrumentsSGIX(  );
}

void glInstrumentsBufferSGIX(GLsizei size, GLint *buffer)
{
	gleGetCurrent()->glInstrumentsBufferSGIX( size, buffer );
}

GLint glPollInstrumentsSGIX(GLint *marker_p)
{
	return gleGetCurrent()->glPollInstrumentsSGIX( marker_p );
}

void glReadInstrumentsSGIX(GLint marker)
{
	gleGetCurrent()->glReadInstrumentsSGIX( marker );
}

void glStartInstrumentsSGIX(void)
{
	gleGetCurrent()->glStartInstrumentsSGIX(  );
}

void glStopInstrumentsSGIX(GLint marker)
{
	gleGetCurrent()->glStopInstrumentsSGIX( marker );
}




// ********* GL_SGIX_interlace *********
bool isGL_SGIX_interlace()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_interlace;

	return isSupported;
}




// ********* GL_SGIX_ir_instrument1 *********
bool isGL_SGIX_ir_instrument1()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_ir_instrument1;

	return isSupported;
}




// ********* GL_SGIX_list_priority *********
bool isGL_SGIX_list_priority()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_list_priority;

	return isSupported;
}


void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetListParameterfvSGIX( list, pname, params );
}

void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetListParameterivSGIX( list, pname, params );
}

void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param)
{
	gleGetCurrent()->glListParameterfSGIX( list, pname, param );
}

void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glListParameterfvSGIX( list, pname, params );
}

void glListParameteriSGIX(GLuint list, GLenum pname, GLint param)
{
	gleGetCurrent()->glListParameteriSGIX( list, pname, param );
}

void glListParameterivSGIX(GLuint list, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glListParameterivSGIX( list, pname, params );
}




// ********* GL_SGIX_pixel_texture *********
bool isGL_SGIX_pixel_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_pixel_texture;

	return isSupported;
}


void glPixelTexGenSGIX(GLenum mode)
{
	gleGetCurrent()->glPixelTexGenSGIX( mode );
}




// ********* GL_SGIX_pixel_tiles *********
bool isGL_SGIX_pixel_tiles()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_pixel_tiles;

	return isSupported;
}




// ********* GL_SGIX_polynomial_ffd *********
bool isGL_SGIX_polynomial_ffd()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_polynomial_ffd;

	return isSupported;
}


void glDeformSGIX(GLbitfield mask)
{
	gleGetCurrent()->glDeformSGIX( mask );
}

void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points)
{
	gleGetCurrent()->glDeformationMap3dSGIX( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points );
}

void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points)
{
	gleGetCurrent()->glDeformationMap3fSGIX( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points );
}

void glLoadIdentityDeformationMapSGIX(GLbitfield mask)
{
	gleGetCurrent()->glLoadIdentityDeformationMapSGIX( mask );
}




// ********* GL_SGIX_reference_plane *********
bool isGL_SGIX_reference_plane()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_reference_plane;

	return isSupported;
}


void glReferencePlaneSGIX(const GLdouble *equation)
{
	gleGetCurrent()->glReferencePlaneSGIX( equation );
}




// ********* GL_SGIX_resample *********
bool isGL_SGIX_resample()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_resample;

	return isSupported;
}




// ********* GL_SGIX_scalebias_hint *********
bool isGL_SGIX_scalebias_hint()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_scalebias_hint;

	return isSupported;
}




// ********* GL_SGIX_shadow *********
bool isGL_SGIX_shadow()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_shadow;

	return isSupported;
}




// ********* GL_SGIX_shadow_ambient *********
bool isGL_SGIX_shadow_ambient()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_shadow_ambient;

	return isSupported;
}




// ********* GL_SGIX_sprite *********
bool isGL_SGIX_sprite()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_sprite;

	return isSupported;
}


void glSpriteParameterfSGIX(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glSpriteParameterfSGIX( pname, param );
}

void glSpriteParameterfvSGIX(GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glSpriteParameterfvSGIX( pname, params );
}

void glSpriteParameteriSGIX(GLenum pname, GLint param)
{
	gleGetCurrent()->glSpriteParameteriSGIX( pname, param );
}

void glSpriteParameterivSGIX(GLenum pname, const GLint *params)
{
	gleGetCurrent()->glSpriteParameterivSGIX( pname, params );
}




// ********* GL_SGIX_subsample *********
bool isGL_SGIX_subsample()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_subsample;

	return isSupported;
}




// ********* GL_SGIX_tag_sample_buffer *********
bool isGL_SGIX_tag_sample_buffer()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_tag_sample_buffer;

	return isSupported;
}


void glTagSampleBufferSGIX(void)
{
	gleGetCurrent()->glTagSampleBufferSGIX(  );
}




// ********* GL_SGIX_texture_add_env *********
bool isGL_SGIX_texture_add_env()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_texture_add_env;

	return isSupported;
}




// ********* GL_SGIX_texture_coordinate_clamp *********
bool isGL_SGIX_texture_coordinate_clamp()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_texture_coordinate_clamp;

	return isSupported;
}




// ********* GL_SGIX_texture_lod_bias *********
bool isGL_SGIX_texture_lod_bias()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_texture_lod_bias;

	return isSupported;
}




// ********* GL_SGIX_texture_multi_buffer *********
bool isGL_SGIX_texture_multi_buffer()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_texture_multi_buffer;

	return isSupported;
}




// ********* GL_SGIX_texture_scale_bias *********
bool isGL_SGIX_texture_scale_bias()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_texture_scale_bias;

	return isSupported;
}




// ********* GL_SGIX_texture_select *********
bool isGL_SGIX_texture_select()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_texture_select;

	return isSupported;
}




// ********* GL_SGIX_vertex_preclip *********
bool isGL_SGIX_vertex_preclip()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_vertex_preclip;

	return isSupported;
}




// ********* GL_SGIX_ycrcb *********
bool isGL_SGIX_ycrcb()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_ycrcb;

	return isSupported;
}




// ********* GL_SGIX_ycrcb_subsample *********
bool isGL_SGIX_ycrcb_subsample()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_ycrcb_subsample;

	return isSupported;
}




// ********* GL_SGIX_ycrcba *********
bool isGL_SGIX_ycrcba()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_ycrcba;

	return isSupported;
}




// ********* GL_SGI_color_matrix *********
bool isGL_SGI_color_matrix()
{
	const bool isSupported = gleGetCurrent()->isGL_SGI_color_matrix;

	return isSupported;
}




// ********* GL_SGI_color_table *********
bool isGL_SGI_color_table()
{
	const bool isSupported = gleGetCurrent()->isGL_SGI_color_table;

	return isSupported;
}


void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glColorTableParameterfvSGI( target, pname, params );
}

void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glColorTableParameterivSGI( target, pname, params );
}

void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
{
	gleGetCurrent()->glColorTableSGI( target, internalformat, width, format, type, table );
}

void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	gleGetCurrent()->glCopyColorTableSGI( target, internalformat, x, y, width );
}

void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetColorTableParameterfvSGI( target, pname, params );
}

void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetColorTableParameterivSGI( target, pname, params );
}

void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, GLvoid *table)
{
	gleGetCurrent()->glGetColorTableSGI( target, format, type, table );
}




// ********* GL_SGI_depth_pass_instrument *********
bool isGL_SGI_depth_pass_instrument()
{
	const bool isSupported = gleGetCurrent()->isGL_SGI_depth_pass_instrument;

	return isSupported;
}




// ********* GL_SGI_texture_color_table *********
bool isGL_SGI_texture_color_table()
{
	const bool isSupported = gleGetCurrent()->isGL_SGI_texture_color_table;

	return isSupported;
}




// ********* GL_SUNX_constant_data *********
bool isGL_SUNX_constant_data()
{
	const bool isSupported = gleGetCurrent()->isGL_SUNX_constant_data;

	return isSupported;
}


void glFinishTextureSUNX(void)
{
	gleGetCurrent()->glFinishTextureSUNX(  );
}




// ********* GL_SUN_convolution_border_modes *********
bool isGL_SUN_convolution_border_modes()
{
	const bool isSupported = gleGetCurrent()->isGL_SUN_convolution_border_modes;

	return isSupported;
}




// ********* GL_SUN_global_alpha *********
bool isGL_SUN_global_alpha()
{
	const bool isSupported = gleGetCurrent()->isGL_SUN_global_alpha;

	return isSupported;
}


void glGlobalAlphaFactorbSUN(GLbyte factor)
{
	gleGetCurrent()->glGlobalAlphaFactorbSUN( factor );
}

void glGlobalAlphaFactordSUN(GLdouble factor)
{
	gleGetCurrent()->glGlobalAlphaFactordSUN( factor );
}

void glGlobalAlphaFactorfSUN(GLfloat factor)
{
	gleGetCurrent()->glGlobalAlphaFactorfSUN( factor );
}

void glGlobalAlphaFactoriSUN(GLint factor)
{
	gleGetCurrent()->glGlobalAlphaFactoriSUN( factor );
}

void glGlobalAlphaFactorsSUN(GLshort factor)
{
	gleGetCurrent()->glGlobalAlphaFactorsSUN( factor );
}

void glGlobalAlphaFactorubSUN(GLubyte factor)
{
	gleGetCurrent()->glGlobalAlphaFactorubSUN( factor );
}

void glGlobalAlphaFactoruiSUN(GLuint factor)
{
	gleGetCurrent()->glGlobalAlphaFactoruiSUN( factor );
}

void glGlobalAlphaFactorusSUN(GLushort factor)
{
	gleGetCurrent()->glGlobalAlphaFactorusSUN( factor );
}




// ********* GL_SUN_mesh_array *********
bool isGL_SUN_mesh_array()
{
	const bool isSupported = gleGetCurrent()->isGL_SUN_mesh_array;

	return isSupported;
}


void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width)
{
	gleGetCurrent()->glDrawMeshArraysSUN( mode, first, count, width );
}




// ********* GL_SUN_slice_accum *********
bool isGL_SUN_slice_accum()
{
	const bool isSupported = gleGetCurrent()->isGL_SUN_slice_accum;

	return isSupported;
}




// ********* GL_SUN_triangle_list *********
bool isGL_SUN_triangle_list()
{
	const bool isSupported = gleGetCurrent()->isGL_SUN_triangle_list;

	return isSupported;
}


void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const GLvoid* *pointer)
{
	gleGetCurrent()->glReplacementCodePointerSUN( type, stride, pointer );
}

void glReplacementCodeubSUN(GLubyte code)
{
	gleGetCurrent()->glReplacementCodeubSUN( code );
}

void glReplacementCodeubvSUN(const GLubyte *code)
{
	gleGetCurrent()->glReplacementCodeubvSUN( code );
}

void glReplacementCodeuiSUN(GLuint code)
{
	gleGetCurrent()->glReplacementCodeuiSUN( code );
}

void glReplacementCodeuivSUN(const GLuint *code)
{
	gleGetCurrent()->glReplacementCodeuivSUN( code );
}

void glReplacementCodeusSUN(GLushort code)
{
	gleGetCurrent()->glReplacementCodeusSUN( code );
}

void glReplacementCodeusvSUN(const GLushort *code)
{
	gleGetCurrent()->glReplacementCodeusvSUN( code );
}




// ********* GL_SUN_vertex *********
bool isGL_SUN_vertex()
{
	const bool isSupported = gleGetCurrent()->isGL_SUN_vertex;

	return isSupported;
}


void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glColor3fVertex3fSUN( r, g, b, x, y, z );
}

void glColor3fVertex3fvSUN(const GLfloat *c, const GLfloat *v)
{
	gleGetCurrent()->glColor3fVertex3fvSUN( c, v );
}

void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glColor4fNormal3fVertex3fSUN( r, g, b, a, nx, ny, nz, x, y, z );
}

void glColor4fNormal3fVertex3fvSUN(const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	gleGetCurrent()->glColor4fNormal3fVertex3fvSUN( c, n, v );
}

void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y)
{
	gleGetCurrent()->glColor4ubVertex2fSUN( r, g, b, a, x, y );
}

void glColor4ubVertex2fvSUN(const GLubyte *c, const GLfloat *v)
{
	gleGetCurrent()->glColor4ubVertex2fvSUN( c, v );
}

void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glColor4ubVertex3fSUN( r, g, b, a, x, y, z );
}

void glColor4ubVertex3fvSUN(const GLubyte *c, const GLfloat *v)
{
	gleGetCurrent()->glColor4ubVertex3fvSUN( c, v );
}

void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glNormal3fVertex3fSUN( nx, ny, nz, x, y, z );
}

void glNormal3fVertex3fvSUN(const GLfloat *n, const GLfloat *v)
{
	gleGetCurrent()->glNormal3fVertex3fvSUN( n, v );
}

void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glReplacementCodeuiColor3fVertex3fSUN( rc, r, g, b, x, y, z );
}

void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint *rc, const GLfloat *c, const GLfloat *v)
{
	gleGetCurrent()->glReplacementCodeuiColor3fVertex3fvSUN( rc, c, v );
}

void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glReplacementCodeuiColor4fNormal3fVertex3fSUN( rc, r, g, b, a, nx, ny, nz, x, y, z );
}

void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	gleGetCurrent()->glReplacementCodeuiColor4fNormal3fVertex3fvSUN( rc, c, n, v );
}

void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glReplacementCodeuiColor4ubVertex3fSUN( rc, r, g, b, a, x, y, z );
}

void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint *rc, const GLubyte *c, const GLfloat *v)
{
	gleGetCurrent()->glReplacementCodeuiColor4ubVertex3fvSUN( rc, c, v );
}

void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glReplacementCodeuiNormal3fVertex3fSUN( rc, nx, ny, nz, x, y, z );
}

void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *n, const GLfloat *v)
{
	gleGetCurrent()->glReplacementCodeuiNormal3fVertex3fvSUN( rc, n, v );
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN( rc, s, t, r, g, b, a, nx, ny, nz, x, y, z );
}

void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN( rc, tc, c, n, v );
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN( rc, s, t, nx, ny, nz, x, y, z );
}

void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v)
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN( rc, tc, n, v );
}

void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fVertex3fSUN( rc, s, t, x, y, z );
}

void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *v)
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fVertex3fvSUN( rc, tc, v );
}

void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glReplacementCodeuiVertex3fSUN( rc, x, y, z );
}

void glReplacementCodeuiVertex3fvSUN(const GLuint *rc, const GLfloat *v)
{
	gleGetCurrent()->glReplacementCodeuiVertex3fvSUN( rc, v );
}

void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glTexCoord2fColor3fVertex3fSUN( s, t, r, g, b, x, y, z );
}

void glTexCoord2fColor3fVertex3fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *v)
{
	gleGetCurrent()->glTexCoord2fColor3fVertex3fvSUN( tc, c, v );
}

void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glTexCoord2fColor4fNormal3fVertex3fSUN( s, t, r, g, b, a, nx, ny, nz, x, y, z );
}

void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	gleGetCurrent()->glTexCoord2fColor4fNormal3fVertex3fvSUN( tc, c, n, v );
}

void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glTexCoord2fColor4ubVertex3fSUN( s, t, r, g, b, a, x, y, z );
}

void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat *tc, const GLubyte *c, const GLfloat *v)
{
	gleGetCurrent()->glTexCoord2fColor4ubVertex3fvSUN( tc, c, v );
}

void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glTexCoord2fNormal3fVertex3fSUN( s, t, nx, ny, nz, x, y, z );
}

void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat *tc, const GLfloat *n, const GLfloat *v)
{
	gleGetCurrent()->glTexCoord2fNormal3fVertex3fvSUN( tc, n, v );
}

void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glTexCoord2fVertex3fSUN( s, t, x, y, z );
}

void glTexCoord2fVertex3fvSUN(const GLfloat *tc, const GLfloat *v)
{
	gleGetCurrent()->glTexCoord2fVertex3fvSUN( tc, v );
}

void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glTexCoord4fColor4fNormal3fVertex4fSUN( s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w );
}

void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v)
{
	gleGetCurrent()->glTexCoord4fColor4fNormal3fVertex4fvSUN( tc, c, n, v );
}

void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glTexCoord4fVertex4fSUN( s, t, p, q, x, y, z, w );
}

void glTexCoord4fVertex4fvSUN(const GLfloat *tc, const GLfloat *v)
{
	gleGetCurrent()->glTexCoord4fVertex4fvSUN( tc, v );
}




// ********* GL_VERSION_1_2 *********
bool isGL_VERSION_1_2()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_2;

	return isSupported;
}


void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	gleGetCurrent()->glBlendColor( red, green, blue, alpha );
}

void glBlendEquation(GLenum mode)
{
	gleGetCurrent()->glBlendEquation( mode );
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glCopyTexSubImage3D( target, level, xoffset, yoffset, zoffset, x, y, width, height );
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices)
{
	gleGetCurrent()->glDrawRangeElements( mode, start, end, count, type, indices );
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTexImage3D( target, level, internalformat, width, height, depth, border, format, type, pixels );
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels)
{
	gleGetCurrent()->glTexSubImage3D( target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}




// ********* GL_VERSION_1_2_DEPRECATED *********
bool isGL_VERSION_1_2_DEPRECATED()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_2_DEPRECATED;

	return isSupported;
}


void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data)
{
	gleGetCurrent()->glColorSubTable( target, start, count, format, type, data );
}

void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table)
{
	gleGetCurrent()->glColorTable( target, internalformat, width, format, type, table );
}

void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glColorTableParameterfv( target, pname, params );
}

void glColorTableParameteriv(GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glColorTableParameteriv( target, pname, params );
}

void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image)
{
	gleGetCurrent()->glConvolutionFilter1D( target, internalformat, width, format, type, image );
}

void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image)
{
	gleGetCurrent()->glConvolutionFilter2D( target, internalformat, width, height, format, type, image );
}

void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
	gleGetCurrent()->glConvolutionParameterf( target, pname, params );
}

void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glConvolutionParameterfv( target, pname, params );
}

void glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
	gleGetCurrent()->glConvolutionParameteri( target, pname, params );
}

void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glConvolutionParameteriv( target, pname, params );
}

void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
	gleGetCurrent()->glCopyColorSubTable( target, start, x, y, width );
}

void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	gleGetCurrent()->glCopyColorTable( target, internalformat, x, y, width );
}

void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width)
{
	gleGetCurrent()->glCopyConvolutionFilter1D( target, internalformat, x, y, width );
}

void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height)
{
	gleGetCurrent()->glCopyConvolutionFilter2D( target, internalformat, x, y, width, height );
}

void glGetColorTable(GLenum target, GLenum format, GLenum type, GLvoid *table)
{
	gleGetCurrent()->glGetColorTable( target, format, type, table );
}

void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetColorTableParameterfv( target, pname, params );
}

void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetColorTableParameteriv( target, pname, params );
}

void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, GLvoid *image)
{
	gleGetCurrent()->glGetConvolutionFilter( target, format, type, image );
}

void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetConvolutionParameterfv( target, pname, params );
}

void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetConvolutionParameteriv( target, pname, params );
}

void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
{
	gleGetCurrent()->glGetHistogram( target, reset, format, type, values );
}

void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetHistogramParameterfv( target, pname, params );
}

void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetHistogramParameteriv( target, pname, params );
}

void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values)
{
	gleGetCurrent()->glGetMinmax( target, reset, format, type, values );
}

void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetMinmaxParameterfv( target, pname, params );
}

void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetMinmaxParameteriv( target, pname, params );
}

void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span)
{
	gleGetCurrent()->glGetSeparableFilter( target, format, type, row, column, span );
}

void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink)
{
	gleGetCurrent()->glHistogram( target, width, internalformat, sink );
}

void glMinmax(GLenum target, GLenum internalformat, GLboolean sink)
{
	gleGetCurrent()->glMinmax( target, internalformat, sink );
}

void glResetHistogram(GLenum target)
{
	gleGetCurrent()->glResetHistogram( target );
}

void glResetMinmax(GLenum target)
{
	gleGetCurrent()->glResetMinmax( target );
}

void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column)
{
	gleGetCurrent()->glSeparableFilter2D( target, internalformat, width, height, format, type, row, column );
}




// ********* GL_VERSION_1_3 *********
bool isGL_VERSION_1_3()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_3;

	return isSupported;
}


void glActiveTexture(GLenum texture)
{
	gleGetCurrent()->glActiveTexture( texture );
}

void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexImage1D( target, level, internalformat, width, border, imageSize, data );
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexImage2D( target, level, internalformat, width, height, border, imageSize, data );
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexImage3D( target, level, internalformat, width, height, depth, border, imageSize, data );
}

void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexSubImage1D( target, level, xoffset, width, format, imageSize, data );
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexSubImage2D( target, level, xoffset, yoffset, width, height, format, imageSize, data );
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data)
{
	gleGetCurrent()->glCompressedTexSubImage3D( target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data );
}

void glGetCompressedTexImage(GLenum target, GLint level, GLvoid *img)
{
	gleGetCurrent()->glGetCompressedTexImage( target, level, img );
}

void glSampleCoverage(GLclampf value, GLboolean invert)
{
	gleGetCurrent()->glSampleCoverage( value, invert );
}




// ********* GL_VERSION_1_3_DEPRECATED *********
bool isGL_VERSION_1_3_DEPRECATED()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_3_DEPRECATED;

	return isSupported;
}


void glClientActiveTexture(GLenum texture)
{
	gleGetCurrent()->glClientActiveTexture( texture );
}

void glLoadTransposeMatrixd(const GLdouble *m)
{
	gleGetCurrent()->glLoadTransposeMatrixd( m );
}

void glLoadTransposeMatrixf(const GLfloat *m)
{
	gleGetCurrent()->glLoadTransposeMatrixf( m );
}

void glMultTransposeMatrixd(const GLdouble *m)
{
	gleGetCurrent()->glMultTransposeMatrixd( m );
}

void glMultTransposeMatrixf(const GLfloat *m)
{
	gleGetCurrent()->glMultTransposeMatrixf( m );
}

void glMultiTexCoord1d(GLenum target, GLdouble s)
{
	gleGetCurrent()->glMultiTexCoord1d( target, s );
}

void glMultiTexCoord1dv(GLenum target, const GLdouble *v)
{
	gleGetCurrent()->glMultiTexCoord1dv( target, v );
}

void glMultiTexCoord1f(GLenum target, GLfloat s)
{
	gleGetCurrent()->glMultiTexCoord1f( target, s );
}

void glMultiTexCoord1fv(GLenum target, const GLfloat *v)
{
	gleGetCurrent()->glMultiTexCoord1fv( target, v );
}

void glMultiTexCoord1i(GLenum target, GLint s)
{
	gleGetCurrent()->glMultiTexCoord1i( target, s );
}

void glMultiTexCoord1iv(GLenum target, const GLint *v)
{
	gleGetCurrent()->glMultiTexCoord1iv( target, v );
}

void glMultiTexCoord1s(GLenum target, GLshort s)
{
	gleGetCurrent()->glMultiTexCoord1s( target, s );
}

void glMultiTexCoord1sv(GLenum target, const GLshort *v)
{
	gleGetCurrent()->glMultiTexCoord1sv( target, v );
}

void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
	gleGetCurrent()->glMultiTexCoord2d( target, s, t );
}

void glMultiTexCoord2dv(GLenum target, const GLdouble *v)
{
	gleGetCurrent()->glMultiTexCoord2dv( target, v );
}

void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
	gleGetCurrent()->glMultiTexCoord2f( target, s, t );
}

void glMultiTexCoord2fv(GLenum target, const GLfloat *v)
{
	gleGetCurrent()->glMultiTexCoord2fv( target, v );
}

void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
	gleGetCurrent()->glMultiTexCoord2i( target, s, t );
}

void glMultiTexCoord2iv(GLenum target, const GLint *v)
{
	gleGetCurrent()->glMultiTexCoord2iv( target, v );
}

void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
	gleGetCurrent()->glMultiTexCoord2s( target, s, t );
}

void glMultiTexCoord2sv(GLenum target, const GLshort *v)
{
	gleGetCurrent()->glMultiTexCoord2sv( target, v );
}

void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
	gleGetCurrent()->glMultiTexCoord3d( target, s, t, r );
}

void glMultiTexCoord3dv(GLenum target, const GLdouble *v)
{
	gleGetCurrent()->glMultiTexCoord3dv( target, v );
}

void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
	gleGetCurrent()->glMultiTexCoord3f( target, s, t, r );
}

void glMultiTexCoord3fv(GLenum target, const GLfloat *v)
{
	gleGetCurrent()->glMultiTexCoord3fv( target, v );
}

void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
	gleGetCurrent()->glMultiTexCoord3i( target, s, t, r );
}

void glMultiTexCoord3iv(GLenum target, const GLint *v)
{
	gleGetCurrent()->glMultiTexCoord3iv( target, v );
}

void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
	gleGetCurrent()->glMultiTexCoord3s( target, s, t, r );
}

void glMultiTexCoord3sv(GLenum target, const GLshort *v)
{
	gleGetCurrent()->glMultiTexCoord3sv( target, v );
}

void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	gleGetCurrent()->glMultiTexCoord4d( target, s, t, r, q );
}

void glMultiTexCoord4dv(GLenum target, const GLdouble *v)
{
	gleGetCurrent()->glMultiTexCoord4dv( target, v );
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	gleGetCurrent()->glMultiTexCoord4f( target, s, t, r, q );
}

void glMultiTexCoord4fv(GLenum target, const GLfloat *v)
{
	gleGetCurrent()->glMultiTexCoord4fv( target, v );
}

void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
	gleGetCurrent()->glMultiTexCoord4i( target, s, t, r, q );
}

void glMultiTexCoord4iv(GLenum target, const GLint *v)
{
	gleGetCurrent()->glMultiTexCoord4iv( target, v );
}

void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
	gleGetCurrent()->glMultiTexCoord4s( target, s, t, r, q );
}

void glMultiTexCoord4sv(GLenum target, const GLshort *v)
{
	gleGetCurrent()->glMultiTexCoord4sv( target, v );
}




// ********* GL_VERSION_1_4 *********
bool isGL_VERSION_1_4()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_4;

	return isSupported;
}


void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	gleGetCurrent()->glBlendFuncSeparate( sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha );
}

void glMultiDrawArrays(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
	gleGetCurrent()->glMultiDrawArrays( mode, first, count, primcount );
}

void glMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount)
{
	gleGetCurrent()->glMultiDrawElements( mode, count, type, indices, primcount );
}

void glPointParameterf(GLenum pname, GLfloat param)
{
	gleGetCurrent()->glPointParameterf( pname, param );
}

void glPointParameterfv(GLenum pname, const GLfloat *params)
{
	gleGetCurrent()->glPointParameterfv( pname, params );
}

void glPointParameteri(GLenum pname, GLint param)
{
	gleGetCurrent()->glPointParameteri( pname, param );
}

void glPointParameteriv(GLenum pname, const GLint *params)
{
	gleGetCurrent()->glPointParameteriv( pname, params );
}




// ********* GL_VERSION_1_4_DEPRECATED *********
bool isGL_VERSION_1_4_DEPRECATED()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_4_DEPRECATED;

	return isSupported;
}


void glFogCoordPointer(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glFogCoordPointer( type, stride, pointer );
}

void glFogCoordd(GLdouble coord)
{
	gleGetCurrent()->glFogCoordd( coord );
}

void glFogCoorddv(const GLdouble *coord)
{
	gleGetCurrent()->glFogCoorddv( coord );
}

void glFogCoordf(GLfloat coord)
{
	gleGetCurrent()->glFogCoordf( coord );
}

void glFogCoordfv(const GLfloat *coord)
{
	gleGetCurrent()->glFogCoordfv( coord );
}

void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
	gleGetCurrent()->glSecondaryColor3b( red, green, blue );
}

void glSecondaryColor3bv(const GLbyte *v)
{
	gleGetCurrent()->glSecondaryColor3bv( v );
}

void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
	gleGetCurrent()->glSecondaryColor3d( red, green, blue );
}

void glSecondaryColor3dv(const GLdouble *v)
{
	gleGetCurrent()->glSecondaryColor3dv( v );
}

void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	gleGetCurrent()->glSecondaryColor3f( red, green, blue );
}

void glSecondaryColor3fv(const GLfloat *v)
{
	gleGetCurrent()->glSecondaryColor3fv( v );
}

void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
	gleGetCurrent()->glSecondaryColor3i( red, green, blue );
}

void glSecondaryColor3iv(const GLint *v)
{
	gleGetCurrent()->glSecondaryColor3iv( v );
}

void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
	gleGetCurrent()->glSecondaryColor3s( red, green, blue );
}

void glSecondaryColor3sv(const GLshort *v)
{
	gleGetCurrent()->glSecondaryColor3sv( v );
}

void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	gleGetCurrent()->glSecondaryColor3ub( red, green, blue );
}

void glSecondaryColor3ubv(const GLubyte *v)
{
	gleGetCurrent()->glSecondaryColor3ubv( v );
}

void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
	gleGetCurrent()->glSecondaryColor3ui( red, green, blue );
}

void glSecondaryColor3uiv(const GLuint *v)
{
	gleGetCurrent()->glSecondaryColor3uiv( v );
}

void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
	gleGetCurrent()->glSecondaryColor3us( red, green, blue );
}

void glSecondaryColor3usv(const GLushort *v)
{
	gleGetCurrent()->glSecondaryColor3usv( v );
}

void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glSecondaryColorPointer( size, type, stride, pointer );
}

void glWindowPos2d(GLdouble x, GLdouble y)
{
	gleGetCurrent()->glWindowPos2d( x, y );
}

void glWindowPos2dv(const GLdouble *v)
{
	gleGetCurrent()->glWindowPos2dv( v );
}

void glWindowPos2f(GLfloat x, GLfloat y)
{
	gleGetCurrent()->glWindowPos2f( x, y );
}

void glWindowPos2fv(const GLfloat *v)
{
	gleGetCurrent()->glWindowPos2fv( v );
}

void glWindowPos2i(GLint x, GLint y)
{
	gleGetCurrent()->glWindowPos2i( x, y );
}

void glWindowPos2iv(const GLint *v)
{
	gleGetCurrent()->glWindowPos2iv( v );
}

void glWindowPos2s(GLshort x, GLshort y)
{
	gleGetCurrent()->glWindowPos2s( x, y );
}

void glWindowPos2sv(const GLshort *v)
{
	gleGetCurrent()->glWindowPos2sv( v );
}

void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glWindowPos3d( x, y, z );
}

void glWindowPos3dv(const GLdouble *v)
{
	gleGetCurrent()->glWindowPos3dv( v );
}

void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glWindowPos3f( x, y, z );
}

void glWindowPos3fv(const GLfloat *v)
{
	gleGetCurrent()->glWindowPos3fv( v );
}

void glWindowPos3i(GLint x, GLint y, GLint z)
{
	gleGetCurrent()->glWindowPos3i( x, y, z );
}

void glWindowPos3iv(const GLint *v)
{
	gleGetCurrent()->glWindowPos3iv( v );
}

void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
	gleGetCurrent()->glWindowPos3s( x, y, z );
}

void glWindowPos3sv(const GLshort *v)
{
	gleGetCurrent()->glWindowPos3sv( v );
}




// ********* GL_VERSION_1_5 *********
bool isGL_VERSION_1_5()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_5;

	return isSupported;
}


void glBeginQuery(GLenum target, GLuint id)
{
	gleGetCurrent()->glBeginQuery( target, id );
}

void glBindBuffer(GLenum target, GLuint buffer)
{
	gleGetCurrent()->glBindBuffer( target, buffer );
}

void glBufferData(GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage)
{
	gleGetCurrent()->glBufferData( target, size, data, usage );
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data)
{
	gleGetCurrent()->glBufferSubData( target, offset, size, data );
}

void glDeleteBuffers(GLsizei n, const GLuint *buffers)
{
	gleGetCurrent()->glDeleteBuffers( n, buffers );
}

void glDeleteQueries(GLsizei n, const GLuint *ids)
{
	gleGetCurrent()->glDeleteQueries( n, ids );
}

void glEndQuery(GLenum target)
{
	gleGetCurrent()->glEndQuery( target );
}

void glGenBuffers(GLsizei n, GLuint *buffers)
{
	gleGetCurrent()->glGenBuffers( n, buffers );
}

void glGenQueries(GLsizei n, GLuint *ids)
{
	gleGetCurrent()->glGenQueries( n, ids );
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetBufferParameteriv( target, pname, params );
}

void glGetBufferPointerv(GLenum target, GLenum pname, GLvoid* *params)
{
	gleGetCurrent()->glGetBufferPointerv( target, pname, params );
}

void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data)
{
	gleGetCurrent()->glGetBufferSubData( target, offset, size, data );
}

void glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetQueryObjectiv( id, pname, params );
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetQueryObjectuiv( id, pname, params );
}

void glGetQueryiv(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetQueryiv( target, pname, params );
}

GLboolean glIsBuffer(GLuint buffer)
{
	return gleGetCurrent()->glIsBuffer( buffer );
}

GLboolean glIsQuery(GLuint id)
{
	return gleGetCurrent()->glIsQuery( id );
}

GLvoid* glMapBuffer(GLenum target, GLenum access)
{
	return gleGetCurrent()->glMapBuffer( target, access );
}

GLboolean glUnmapBuffer(GLenum target)
{
	return gleGetCurrent()->glUnmapBuffer( target );
}




// ********* GL_VERSION_1_5_DEPRECATED *********
bool isGL_VERSION_1_5_DEPRECATED()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_5_DEPRECATED;

	return isSupported;
}




// ********* GL_VERSION_2_0 *********
bool isGL_VERSION_2_0()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_2_0;

	return isSupported;
}


void glAttachShader(GLuint program, GLuint shader)
{
	gleGetCurrent()->glAttachShader( program, shader );
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar *name)
{
	gleGetCurrent()->glBindAttribLocation( program, index, name );
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
	gleGetCurrent()->glBlendEquationSeparate( modeRGB, modeAlpha );
}

void glCompileShader(GLuint shader)
{
	gleGetCurrent()->glCompileShader( shader );
}

GLuint glCreateProgram(void)
{
	return gleGetCurrent()->glCreateProgram(  );
}

GLuint glCreateShader(GLenum type)
{
	return gleGetCurrent()->glCreateShader( type );
}

void glDeleteProgram(GLuint program)
{
	gleGetCurrent()->glDeleteProgram( program );
}

void glDeleteShader(GLuint shader)
{
	gleGetCurrent()->glDeleteShader( shader );
}

void glDetachShader(GLuint program, GLuint shader)
{
	gleGetCurrent()->glDetachShader( program, shader );
}

void glDisableVertexAttribArray(GLuint index)
{
	gleGetCurrent()->glDisableVertexAttribArray( index );
}

void glDrawBuffers(GLsizei n, const GLenum *bufs)
{
	gleGetCurrent()->glDrawBuffers( n, bufs );
}

void glEnableVertexAttribArray(GLuint index)
{
	gleGetCurrent()->glEnableVertexAttribArray( index );
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
	gleGetCurrent()->glGetActiveAttrib( program, index, bufSize, length, size, type, name );
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
	gleGetCurrent()->glGetActiveUniform( program, index, bufSize, length, size, type, name );
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj)
{
	gleGetCurrent()->glGetAttachedShaders( program, maxCount, count, obj );
}

GLint glGetAttribLocation(GLuint program, const GLchar *name)
{
	return gleGetCurrent()->glGetAttribLocation( program, name );
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
	gleGetCurrent()->glGetProgramInfoLog( program, bufSize, length, infoLog );
}

void glGetProgramiv(GLuint program, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetProgramiv( program, pname, params );
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
	gleGetCurrent()->glGetShaderInfoLog( shader, bufSize, length, infoLog );
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
{
	gleGetCurrent()->glGetShaderSource( shader, bufSize, length, source );
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetShaderiv( shader, pname, params );
}

GLint glGetUniformLocation(GLuint program, const GLchar *name)
{
	return gleGetCurrent()->glGetUniformLocation( program, name );
}

void glGetUniformfv(GLuint program, GLint location, GLfloat *params)
{
	gleGetCurrent()->glGetUniformfv( program, location, params );
}

void glGetUniformiv(GLuint program, GLint location, GLint *params)
{
	gleGetCurrent()->glGetUniformiv( program, location, params );
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid* *pointer)
{
	gleGetCurrent()->glGetVertexAttribPointerv( index, pname, pointer );
}

void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble *params)
{
	gleGetCurrent()->glGetVertexAttribdv( index, pname, params );
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params)
{
	gleGetCurrent()->glGetVertexAttribfv( index, pname, params );
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVertexAttribiv( index, pname, params );
}

GLboolean glIsProgram(GLuint program)
{
	return gleGetCurrent()->glIsProgram( program );
}

GLboolean glIsShader(GLuint shader)
{
	return gleGetCurrent()->glIsShader( shader );
}

void glLinkProgram(GLuint program)
{
	gleGetCurrent()->glLinkProgram( program );
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar* *string, const GLint *length)
{
	gleGetCurrent()->glShaderSource( shader, count, string, length );
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
	gleGetCurrent()->glStencilFuncSeparate( face, func, ref, mask );
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
	gleGetCurrent()->glStencilMaskSeparate( face, mask );
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
	gleGetCurrent()->glStencilOpSeparate( face, sfail, dpfail, dppass );
}

void glUniform1f(GLint location, GLfloat v0)
{
	gleGetCurrent()->glUniform1f( location, v0 );
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glUniform1fv( location, count, value );
}

void glUniform1i(GLint location, GLint v0)
{
	gleGetCurrent()->glUniform1i( location, v0 );
}

void glUniform1iv(GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glUniform1iv( location, count, value );
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
	gleGetCurrent()->glUniform2f( location, v0, v1 );
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glUniform2fv( location, count, value );
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
	gleGetCurrent()->glUniform2i( location, v0, v1 );
}

void glUniform2iv(GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glUniform2iv( location, count, value );
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	gleGetCurrent()->glUniform3f( location, v0, v1, v2 );
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glUniform3fv( location, count, value );
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
	gleGetCurrent()->glUniform3i( location, v0, v1, v2 );
}

void glUniform3iv(GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glUniform3iv( location, count, value );
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	gleGetCurrent()->glUniform4f( location, v0, v1, v2, v3 );
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat *value)
{
	gleGetCurrent()->glUniform4fv( location, count, value );
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	gleGetCurrent()->glUniform4i( location, v0, v1, v2, v3 );
}

void glUniform4iv(GLint location, GLsizei count, const GLint *value)
{
	gleGetCurrent()->glUniform4iv( location, count, value );
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix2fv( location, count, transpose, value );
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix3fv( location, count, transpose, value );
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix4fv( location, count, transpose, value );
}

void glUseProgram(GLuint program)
{
	gleGetCurrent()->glUseProgram( program );
}

void glValidateProgram(GLuint program)
{
	gleGetCurrent()->glValidateProgram( program );
}

void glVertexAttrib1d(GLuint index, GLdouble x)
{
	gleGetCurrent()->glVertexAttrib1d( index, x );
}

void glVertexAttrib1dv(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib1dv( index, v );
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
	gleGetCurrent()->glVertexAttrib1f( index, x );
}

void glVertexAttrib1fv(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib1fv( index, v );
}

void glVertexAttrib1s(GLuint index, GLshort x)
{
	gleGetCurrent()->glVertexAttrib1s( index, x );
}

void glVertexAttrib1sv(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib1sv( index, v );
}

void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
	gleGetCurrent()->glVertexAttrib2d( index, x, y );
}

void glVertexAttrib2dv(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib2dv( index, v );
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
	gleGetCurrent()->glVertexAttrib2f( index, x, y );
}

void glVertexAttrib2fv(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib2fv( index, v );
}

void glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
	gleGetCurrent()->glVertexAttrib2s( index, x, y );
}

void glVertexAttrib2sv(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib2sv( index, v );
}

void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
	gleGetCurrent()->glVertexAttrib3d( index, x, y, z );
}

void glVertexAttrib3dv(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib3dv( index, v );
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	gleGetCurrent()->glVertexAttrib3f( index, x, y, z );
}

void glVertexAttrib3fv(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib3fv( index, v );
}

void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
	gleGetCurrent()->glVertexAttrib3s( index, x, y, z );
}

void glVertexAttrib3sv(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib3sv( index, v );
}

void glVertexAttrib4Nbv(GLuint index, const GLbyte *v)
{
	gleGetCurrent()->glVertexAttrib4Nbv( index, v );
}

void glVertexAttrib4Niv(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttrib4Niv( index, v );
}

void glVertexAttrib4Nsv(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib4Nsv( index, v );
}

void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
	gleGetCurrent()->glVertexAttrib4Nub( index, x, y, z, w );
}

void glVertexAttrib4Nubv(GLuint index, const GLubyte *v)
{
	gleGetCurrent()->glVertexAttrib4Nubv( index, v );
}

void glVertexAttrib4Nuiv(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttrib4Nuiv( index, v );
}

void glVertexAttrib4Nusv(GLuint index, const GLushort *v)
{
	gleGetCurrent()->glVertexAttrib4Nusv( index, v );
}

void glVertexAttrib4bv(GLuint index, const GLbyte *v)
{
	gleGetCurrent()->glVertexAttrib4bv( index, v );
}

void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	gleGetCurrent()->glVertexAttrib4d( index, x, y, z, w );
}

void glVertexAttrib4dv(GLuint index, const GLdouble *v)
{
	gleGetCurrent()->glVertexAttrib4dv( index, v );
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gleGetCurrent()->glVertexAttrib4f( index, x, y, z, w );
}

void glVertexAttrib4fv(GLuint index, const GLfloat *v)
{
	gleGetCurrent()->glVertexAttrib4fv( index, v );
}

void glVertexAttrib4iv(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttrib4iv( index, v );
}

void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
	gleGetCurrent()->glVertexAttrib4s( index, x, y, z, w );
}

void glVertexAttrib4sv(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttrib4sv( index, v );
}

void glVertexAttrib4ubv(GLuint index, const GLubyte *v)
{
	gleGetCurrent()->glVertexAttrib4ubv( index, v );
}

void glVertexAttrib4uiv(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttrib4uiv( index, v );
}

void glVertexAttrib4usv(GLuint index, const GLushort *v)
{
	gleGetCurrent()->glVertexAttrib4usv( index, v );
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexAttribPointer( index, size, type, normalized, stride, pointer );
}




// ********* GL_VERSION_2_0_DEPRECATED *********
bool isGL_VERSION_2_0_DEPRECATED()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_2_0_DEPRECATED;

	return isSupported;
}




// ********* GL_VERSION_2_1 *********
bool isGL_VERSION_2_1()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_2_1;

	return isSupported;
}


void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix2x3fv( location, count, transpose, value );
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix2x4fv( location, count, transpose, value );
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix3x2fv( location, count, transpose, value );
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix3x4fv( location, count, transpose, value );
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix4x2fv( location, count, transpose, value );
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
	gleGetCurrent()->glUniformMatrix4x3fv( location, count, transpose, value );
}




// ********* GL_VERSION_2_1_DEPRECATED *********
bool isGL_VERSION_2_1_DEPRECATED()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_2_1_DEPRECATED;

	return isSupported;
}




// ********* GL_VERSION_3_0 *********
bool isGL_VERSION_3_0()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_3_0;

	return isSupported;
}


void glBeginConditionalRender(GLuint id, GLenum mode)
{
	gleGetCurrent()->glBeginConditionalRender( id, mode );
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
	gleGetCurrent()->glBeginTransformFeedback( primitiveMode );
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
	gleGetCurrent()->glBindBufferBase( target, index, buffer );
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	gleGetCurrent()->glBindBufferRange( target, index, buffer, offset, size );
}

void glBindFragDataLocation(GLuint program, GLuint color, const GLchar *name)
{
	gleGetCurrent()->glBindFragDataLocation( program, color, name );
}

void glClampColor(GLenum target, GLenum clamp)
{
	gleGetCurrent()->glClampColor( target, clamp );
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
	gleGetCurrent()->glClearBufferfi( buffer, drawbuffer, depth, stencil );
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat *value)
{
	gleGetCurrent()->glClearBufferfv( buffer, drawbuffer, value );
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint *value)
{
	gleGetCurrent()->glClearBufferiv( buffer, drawbuffer, value );
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint *value)
{
	gleGetCurrent()->glClearBufferuiv( buffer, drawbuffer, value );
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	gleGetCurrent()->glColorMaski( index, r, g, b, a );
}

void glDisablei(GLenum target, GLuint index)
{
	gleGetCurrent()->glDisablei( target, index );
}

void glEnablei(GLenum target, GLuint index)
{
	gleGetCurrent()->glEnablei( target, index );
}

void glEndConditionalRender(void)
{
	gleGetCurrent()->glEndConditionalRender(  );
}

void glEndTransformFeedback(void)
{
	gleGetCurrent()->glEndTransformFeedback(  );
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean *data)
{
	gleGetCurrent()->glGetBooleani_v( target, index, data );
}

GLint glGetFragDataLocation(GLuint program, const GLchar *name)
{
	return gleGetCurrent()->glGetFragDataLocation( program, name );
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint *data)
{
	gleGetCurrent()->glGetIntegeri_v( target, index, data );
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
	return gleGetCurrent()->glGetStringi( name, index );
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetTexParameterIiv( target, pname, params );
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetTexParameterIuiv( target, pname, params );
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
{
	gleGetCurrent()->glGetTransformFeedbackVarying( program, index, bufSize, length, size, type, name );
}

void glGetUniformuiv(GLuint program, GLint location, GLuint *params)
{
	gleGetCurrent()->glGetUniformuiv( program, location, params );
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint *params)
{
	gleGetCurrent()->glGetVertexAttribIiv( index, pname, params );
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint *params)
{
	gleGetCurrent()->glGetVertexAttribIuiv( index, pname, params );
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
	return gleGetCurrent()->glIsEnabledi( target, index );
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint *params)
{
	gleGetCurrent()->glTexParameterIiv( target, pname, params );
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint *params)
{
	gleGetCurrent()->glTexParameterIuiv( target, pname, params );
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode)
{
	gleGetCurrent()->glTransformFeedbackVaryings( program, count, varyings, bufferMode );
}

void glUniform1ui(GLint location, GLuint v0)
{
	gleGetCurrent()->glUniform1ui( location, v0 );
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glUniform1uiv( location, count, value );
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
	gleGetCurrent()->glUniform2ui( location, v0, v1 );
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glUniform2uiv( location, count, value );
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	gleGetCurrent()->glUniform3ui( location, v0, v1, v2 );
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glUniform3uiv( location, count, value );
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	gleGetCurrent()->glUniform4ui( location, v0, v1, v2, v3 );
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint *value)
{
	gleGetCurrent()->glUniform4uiv( location, count, value );
}

void glVertexAttribI1i(GLuint index, GLint x)
{
	gleGetCurrent()->glVertexAttribI1i( index, x );
}

void glVertexAttribI1iv(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttribI1iv( index, v );
}

void glVertexAttribI1ui(GLuint index, GLuint x)
{
	gleGetCurrent()->glVertexAttribI1ui( index, x );
}

void glVertexAttribI1uiv(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttribI1uiv( index, v );
}

void glVertexAttribI2i(GLuint index, GLint x, GLint y)
{
	gleGetCurrent()->glVertexAttribI2i( index, x, y );
}

void glVertexAttribI2iv(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttribI2iv( index, v );
}

void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y)
{
	gleGetCurrent()->glVertexAttribI2ui( index, x, y );
}

void glVertexAttribI2uiv(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttribI2uiv( index, v );
}

void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z)
{
	gleGetCurrent()->glVertexAttribI3i( index, x, y, z );
}

void glVertexAttribI3iv(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttribI3iv( index, v );
}

void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z)
{
	gleGetCurrent()->glVertexAttribI3ui( index, x, y, z );
}

void glVertexAttribI3uiv(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttribI3uiv( index, v );
}

void glVertexAttribI4bv(GLuint index, const GLbyte *v)
{
	gleGetCurrent()->glVertexAttribI4bv( index, v );
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	gleGetCurrent()->glVertexAttribI4i( index, x, y, z, w );
}

void glVertexAttribI4iv(GLuint index, const GLint *v)
{
	gleGetCurrent()->glVertexAttribI4iv( index, v );
}

void glVertexAttribI4sv(GLuint index, const GLshort *v)
{
	gleGetCurrent()->glVertexAttribI4sv( index, v );
}

void glVertexAttribI4ubv(GLuint index, const GLubyte *v)
{
	gleGetCurrent()->glVertexAttribI4ubv( index, v );
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	gleGetCurrent()->glVertexAttribI4ui( index, x, y, z, w );
}

void glVertexAttribI4uiv(GLuint index, const GLuint *v)
{
	gleGetCurrent()->glVertexAttribI4uiv( index, v );
}

void glVertexAttribI4usv(GLuint index, const GLushort *v)
{
	gleGetCurrent()->glVertexAttribI4usv( index, v );
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	gleGetCurrent()->glVertexAttribIPointer( index, size, type, stride, pointer );
}




// ********* GL_VERSION_3_0_DEPRECATED *********
bool isGL_VERSION_3_0_DEPRECATED()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_3_0_DEPRECATED;

	return isSupported;
}




// ********* GL_VERSION_3_1 *********
bool isGL_VERSION_3_1()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_3_1;

	return isSupported;
}


void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	gleGetCurrent()->glDrawArraysInstanced( mode, first, count, primcount );
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount)
{
	gleGetCurrent()->glDrawElementsInstanced( mode, count, type, indices, primcount );
}

void glPrimitiveRestartIndex(GLuint index)
{
	gleGetCurrent()->glPrimitiveRestartIndex( index );
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
	gleGetCurrent()->glTexBuffer( target, internalformat, buffer );
}




// ********* GL_VERSION_3_2 *********
bool isGL_VERSION_3_2()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_3_2;

	return isSupported;
}


void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	gleGetCurrent()->glFramebufferTexture( target, attachment, texture, level );
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 *params)
{
	gleGetCurrent()->glGetBufferParameteri64v( target, pname, params );
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 *data)
{
	gleGetCurrent()->glGetInteger64i_v( target, index, data );
}




// ********* GL_VERSION_3_3 *********
bool isGL_VERSION_3_3()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_3_3;

	return isSupported;
}


void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
	gleGetCurrent()->glVertexAttribDivisor( index, divisor );
}




// ********* GL_VERSION_4_0 *********
bool isGL_VERSION_4_0()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_4_0;

	return isSupported;
}


void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	gleGetCurrent()->glBlendEquationSeparatei( buf, modeRGB, modeAlpha );
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
	gleGetCurrent()->glBlendEquationi( buf, mode );
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	gleGetCurrent()->glBlendFuncSeparatei( buf, srcRGB, dstRGB, srcAlpha, dstAlpha );
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
	gleGetCurrent()->glBlendFunci( buf, src, dst );
}

void glMinSampleShading(GLclampf value)
{
	gleGetCurrent()->glMinSampleShading( value );
}




// ********* GL_VERSION_4_1 *********
bool isGL_VERSION_4_1()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_4_1;

	return isSupported;
}




// ********* GL_VERSION_4_2 *********
bool isGL_VERSION_4_2()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_4_2;

	return isSupported;
}




// ********* GL_WIN_phong_shading *********
bool isGL_WIN_phong_shading()
{
	const bool isSupported = gleGetCurrent()->isGL_WIN_phong_shading;

	return isSupported;
}




// ********* GL_WIN_specular_fog *********
bool isGL_WIN_specular_fog()
{
	const bool isSupported = gleGetCurrent()->isGL_WIN_specular_fog;

	return isSupported;
}



#ifdef WIN32
// ********* WGL_3DFX_multisample *********
bool isWGL_3DFX_multisample()
{
	const bool isSupported = gleGetCurrent()->isWGL_3DFX_multisample;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_3DL_stereo_control *********
bool isWGL_3DL_stereo_control()
{
	const bool isSupported = gleGetCurrent()->isWGL_3DL_stereo_control;

	return isSupported;
}


BOOL wglSetStereoEmitterState3DL(HDC hDC, UINT uState)
{
	return gleGetCurrent()->wglSetStereoEmitterState3DL( hDC, uState );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_AMD_gpu_association *********
bool isWGL_AMD_gpu_association()
{
	const bool isSupported = gleGetCurrent()->isWGL_AMD_gpu_association;

	return isSupported;
}


VOID wglBlitContextFramebufferAMD(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	return gleGetCurrent()->wglBlitContextFramebufferAMD( dstCtx, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter );
}

HGLRC wglCreateAssociatedContextAMD(UINT id)
{
	return gleGetCurrent()->wglCreateAssociatedContextAMD( id );
}

HGLRC wglCreateAssociatedContextAttribsAMD(UINT id, HGLRC hShareContext, const int *attribList)
{
	return gleGetCurrent()->wglCreateAssociatedContextAttribsAMD( id, hShareContext, attribList );
}

BOOL wglDeleteAssociatedContextAMD(HGLRC hglrc)
{
	return gleGetCurrent()->wglDeleteAssociatedContextAMD( hglrc );
}

UINT wglGetContextGPUIDAMD(HGLRC hglrc)
{
	return gleGetCurrent()->wglGetContextGPUIDAMD( hglrc );
}

HGLRC wglGetCurrentAssociatedContextAMD(void)
{
	return gleGetCurrent()->wglGetCurrentAssociatedContextAMD(  );
}

UINT wglGetGPUIDsAMD(UINT maxCount, UINT *ids)
{
	return gleGetCurrent()->wglGetGPUIDsAMD( maxCount, ids );
}

INT wglGetGPUInfoAMD(UINT id, int property, GLenum dataType, UINT size, void *data)
{
	return gleGetCurrent()->wglGetGPUInfoAMD( id, property, dataType, size, data );
}

BOOL wglMakeAssociatedContextCurrentAMD(HGLRC hglrc)
{
	return gleGetCurrent()->wglMakeAssociatedContextCurrentAMD( hglrc );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_buffer_region *********
bool isWGL_ARB_buffer_region()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_buffer_region;

	return isSupported;
}


HANDLE wglCreateBufferRegionARB(HDC hDC, int iLayerPlane, UINT uType)
{
	return gleGetCurrent()->wglCreateBufferRegionARB( hDC, iLayerPlane, uType );
}

VOID wglDeleteBufferRegionARB(HANDLE hRegion)
{
	return gleGetCurrent()->wglDeleteBufferRegionARB( hRegion );
}

BOOL wglRestoreBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc)
{
	return gleGetCurrent()->wglRestoreBufferRegionARB( hRegion, x, y, width, height, xSrc, ySrc );
}

BOOL wglSaveBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height)
{
	return gleGetCurrent()->wglSaveBufferRegionARB( hRegion, x, y, width, height );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_create_context *********
bool isWGL_ARB_create_context()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_create_context;

	return isSupported;
}


HGLRC wglCreateContextAttribsARB(HDC hDC, HGLRC hShareContext, const int *attribList)
{
	return gleGetCurrent()->wglCreateContextAttribsARB( hDC, hShareContext, attribList );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_create_context_profile *********
bool isWGL_ARB_create_context_profile()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_create_context_profile;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_create_context_robustness *********
bool isWGL_ARB_create_context_robustness()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_create_context_robustness;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_extensions_string *********
bool isWGL_ARB_extensions_string()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_extensions_string;

	return isSupported;
}


const char * wglGetExtensionsStringARB(HDC hdc)
{
	return gleGetCurrent()->wglGetExtensionsStringARB( hdc );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_framebuffer_sRGB *********
bool isWGL_ARB_framebuffer_sRGB()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_framebuffer_sRGB;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_make_current_read *********
bool isWGL_ARB_make_current_read()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_make_current_read;

	return isSupported;
}


HDC wglGetCurrentReadDCARB(void)
{
	return gleGetCurrent()->wglGetCurrentReadDCARB(  );
}

BOOL wglMakeContextCurrentARB(HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
{
	return gleGetCurrent()->wglMakeContextCurrentARB( hDrawDC, hReadDC, hglrc );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_multisample *********
bool isWGL_ARB_multisample()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_multisample;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_pbuffer *********
bool isWGL_ARB_pbuffer()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_pbuffer;

	return isSupported;
}


HPBUFFERARB wglCreatePbufferARB(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList)
{
	return gleGetCurrent()->wglCreatePbufferARB( hDC, iPixelFormat, iWidth, iHeight, piAttribList );
}

BOOL wglDestroyPbufferARB(HPBUFFERARB hPbuffer)
{
	return gleGetCurrent()->wglDestroyPbufferARB( hPbuffer );
}

HDC wglGetPbufferDCARB(HPBUFFERARB hPbuffer)
{
	return gleGetCurrent()->wglGetPbufferDCARB( hPbuffer );
}

BOOL wglQueryPbufferARB(HPBUFFERARB hPbuffer, int iAttribute, int *piValue)
{
	return gleGetCurrent()->wglQueryPbufferARB( hPbuffer, iAttribute, piValue );
}

int wglReleasePbufferDCARB(HPBUFFERARB hPbuffer, HDC hDC)
{
	return gleGetCurrent()->wglReleasePbufferDCARB( hPbuffer, hDC );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_pixel_format *********
bool isWGL_ARB_pixel_format()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_pixel_format;

	return isSupported;
}


BOOL wglChoosePixelFormatARB(HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats)
{
	return gleGetCurrent()->wglChoosePixelFormatARB( hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats );
}

BOOL wglGetPixelFormatAttribfvARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, FLOAT *pfValues)
{
	return gleGetCurrent()->wglGetPixelFormatAttribfvARB( hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues );
}

BOOL wglGetPixelFormatAttribivARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int *piAttributes, int *piValues)
{
	return gleGetCurrent()->wglGetPixelFormatAttribivARB( hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_pixel_format_float *********
bool isWGL_ARB_pixel_format_float()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_pixel_format_float;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ARB_render_texture *********
bool isWGL_ARB_render_texture()
{
	const bool isSupported = gleGetCurrent()->isWGL_ARB_render_texture;

	return isSupported;
}


BOOL wglBindTexImageARB(HPBUFFERARB hPbuffer, int iBuffer)
{
	return gleGetCurrent()->wglBindTexImageARB( hPbuffer, iBuffer );
}

BOOL wglReleaseTexImageARB(HPBUFFERARB hPbuffer, int iBuffer)
{
	return gleGetCurrent()->wglReleaseTexImageARB( hPbuffer, iBuffer );
}

BOOL wglSetPbufferAttribARB(HPBUFFERARB hPbuffer, const int *piAttribList)
{
	return gleGetCurrent()->wglSetPbufferAttribARB( hPbuffer, piAttribList );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_ATI_pixel_format_float *********
bool isWGL_ATI_pixel_format_float()
{
	const bool isSupported = gleGetCurrent()->isWGL_ATI_pixel_format_float;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_create_context_es2_profile *********
bool isWGL_EXT_create_context_es2_profile()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_create_context_es2_profile;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_depth_float *********
bool isWGL_EXT_depth_float()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_depth_float;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_display_color_table *********
bool isWGL_EXT_display_color_table()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_display_color_table;

	return isSupported;
}


GLboolean wglBindDisplayColorTableEXT(GLushort id)
{
	return gleGetCurrent()->wglBindDisplayColorTableEXT( id );
}

GLboolean wglCreateDisplayColorTableEXT(GLushort id)
{
	return gleGetCurrent()->wglCreateDisplayColorTableEXT( id );
}

VOID wglDestroyDisplayColorTableEXT(GLushort id)
{
	return gleGetCurrent()->wglDestroyDisplayColorTableEXT( id );
}

GLboolean wglLoadDisplayColorTableEXT(const GLushort *table, GLuint length)
{
	return gleGetCurrent()->wglLoadDisplayColorTableEXT( table, length );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_extensions_string *********
bool isWGL_EXT_extensions_string()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_extensions_string;

	return isSupported;
}


const char * wglGetExtensionsStringEXT(void)
{
	return gleGetCurrent()->wglGetExtensionsStringEXT(  );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_framebuffer_sRGB *********
bool isWGL_EXT_framebuffer_sRGB()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_framebuffer_sRGB;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_make_current_read *********
bool isWGL_EXT_make_current_read()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_make_current_read;

	return isSupported;
}


HDC wglGetCurrentReadDCEXT(void)
{
	return gleGetCurrent()->wglGetCurrentReadDCEXT(  );
}

BOOL wglMakeContextCurrentEXT(HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
{
	return gleGetCurrent()->wglMakeContextCurrentEXT( hDrawDC, hReadDC, hglrc );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_multisample *********
bool isWGL_EXT_multisample()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_multisample;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_pbuffer *********
bool isWGL_EXT_pbuffer()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_pbuffer;

	return isSupported;
}


HPBUFFEREXT wglCreatePbufferEXT(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int *piAttribList)
{
	return gleGetCurrent()->wglCreatePbufferEXT( hDC, iPixelFormat, iWidth, iHeight, piAttribList );
}

BOOL wglDestroyPbufferEXT(HPBUFFEREXT hPbuffer)
{
	return gleGetCurrent()->wglDestroyPbufferEXT( hPbuffer );
}

HDC wglGetPbufferDCEXT(HPBUFFEREXT hPbuffer)
{
	return gleGetCurrent()->wglGetPbufferDCEXT( hPbuffer );
}

BOOL wglQueryPbufferEXT(HPBUFFEREXT hPbuffer, int iAttribute, int *piValue)
{
	return gleGetCurrent()->wglQueryPbufferEXT( hPbuffer, iAttribute, piValue );
}

int wglReleasePbufferDCEXT(HPBUFFEREXT hPbuffer, HDC hDC)
{
	return gleGetCurrent()->wglReleasePbufferDCEXT( hPbuffer, hDC );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_pixel_format *********
bool isWGL_EXT_pixel_format()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_pixel_format;

	return isSupported;
}


BOOL wglChoosePixelFormatEXT(HDC hdc, const int *piAttribIList, const FLOAT *pfAttribFList, UINT nMaxFormats, int *piFormats, UINT *nNumFormats)
{
	return gleGetCurrent()->wglChoosePixelFormatEXT( hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats );
}

BOOL wglGetPixelFormatAttribfvEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, FLOAT *pfValues)
{
	return gleGetCurrent()->wglGetPixelFormatAttribfvEXT( hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues );
}

BOOL wglGetPixelFormatAttribivEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int *piAttributes, int *piValues)
{
	return gleGetCurrent()->wglGetPixelFormatAttribivEXT( hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_pixel_format_packed_float *********
bool isWGL_EXT_pixel_format_packed_float()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_pixel_format_packed_float;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_EXT_swap_control *********
bool isWGL_EXT_swap_control()
{
	const bool isSupported = gleGetCurrent()->isWGL_EXT_swap_control;

	return isSupported;
}


int wglGetSwapIntervalEXT(void)
{
	return gleGetCurrent()->wglGetSwapIntervalEXT(  );
}

BOOL wglSwapIntervalEXT(int interval)
{
	return gleGetCurrent()->wglSwapIntervalEXT( interval );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_I3D_digital_video_control *********
bool isWGL_I3D_digital_video_control()
{
	const bool isSupported = gleGetCurrent()->isWGL_I3D_digital_video_control;

	return isSupported;
}


BOOL wglGetDigitalVideoParametersI3D(HDC hDC, int iAttribute, int *piValue)
{
	return gleGetCurrent()->wglGetDigitalVideoParametersI3D( hDC, iAttribute, piValue );
}

BOOL wglSetDigitalVideoParametersI3D(HDC hDC, int iAttribute, const int *piValue)
{
	return gleGetCurrent()->wglSetDigitalVideoParametersI3D( hDC, iAttribute, piValue );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_I3D_gamma *********
bool isWGL_I3D_gamma()
{
	const bool isSupported = gleGetCurrent()->isWGL_I3D_gamma;

	return isSupported;
}


BOOL wglGetGammaTableI3D(HDC hDC, int iEntries, USHORT *puRed, USHORT *puGreen, USHORT *puBlue)
{
	return gleGetCurrent()->wglGetGammaTableI3D( hDC, iEntries, puRed, puGreen, puBlue );
}

BOOL wglGetGammaTableParametersI3D(HDC hDC, int iAttribute, int *piValue)
{
	return gleGetCurrent()->wglGetGammaTableParametersI3D( hDC, iAttribute, piValue );
}

BOOL wglSetGammaTableI3D(HDC hDC, int iEntries, const USHORT *puRed, const USHORT *puGreen, const USHORT *puBlue)
{
	return gleGetCurrent()->wglSetGammaTableI3D( hDC, iEntries, puRed, puGreen, puBlue );
}

BOOL wglSetGammaTableParametersI3D(HDC hDC, int iAttribute, const int *piValue)
{
	return gleGetCurrent()->wglSetGammaTableParametersI3D( hDC, iAttribute, piValue );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_I3D_genlock *********
bool isWGL_I3D_genlock()
{
	const bool isSupported = gleGetCurrent()->isWGL_I3D_genlock;

	return isSupported;
}


BOOL wglDisableGenlockI3D(HDC hDC)
{
	return gleGetCurrent()->wglDisableGenlockI3D( hDC );
}

BOOL wglEnableGenlockI3D(HDC hDC)
{
	return gleGetCurrent()->wglEnableGenlockI3D( hDC );
}

BOOL wglGenlockSampleRateI3D(HDC hDC, UINT uRate)
{
	return gleGetCurrent()->wglGenlockSampleRateI3D( hDC, uRate );
}

BOOL wglGenlockSourceDelayI3D(HDC hDC, UINT uDelay)
{
	return gleGetCurrent()->wglGenlockSourceDelayI3D( hDC, uDelay );
}

BOOL wglGenlockSourceEdgeI3D(HDC hDC, UINT uEdge)
{
	return gleGetCurrent()->wglGenlockSourceEdgeI3D( hDC, uEdge );
}

BOOL wglGenlockSourceI3D(HDC hDC, UINT uSource)
{
	return gleGetCurrent()->wglGenlockSourceI3D( hDC, uSource );
}

BOOL wglGetGenlockSampleRateI3D(HDC hDC, UINT *uRate)
{
	return gleGetCurrent()->wglGetGenlockSampleRateI3D( hDC, uRate );
}

BOOL wglGetGenlockSourceDelayI3D(HDC hDC, UINT *uDelay)
{
	return gleGetCurrent()->wglGetGenlockSourceDelayI3D( hDC, uDelay );
}

BOOL wglGetGenlockSourceEdgeI3D(HDC hDC, UINT *uEdge)
{
	return gleGetCurrent()->wglGetGenlockSourceEdgeI3D( hDC, uEdge );
}

BOOL wglGetGenlockSourceI3D(HDC hDC, UINT *uSource)
{
	return gleGetCurrent()->wglGetGenlockSourceI3D( hDC, uSource );
}

BOOL wglIsEnabledGenlockI3D(HDC hDC, BOOL *pFlag)
{
	return gleGetCurrent()->wglIsEnabledGenlockI3D( hDC, pFlag );
}

BOOL wglQueryGenlockMaxSourceDelayI3D(HDC hDC, UINT *uMaxLineDelay, UINT *uMaxPixelDelay)
{
	return gleGetCurrent()->wglQueryGenlockMaxSourceDelayI3D( hDC, uMaxLineDelay, uMaxPixelDelay );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_I3D_image_buffer *********
bool isWGL_I3D_image_buffer()
{
	const bool isSupported = gleGetCurrent()->isWGL_I3D_image_buffer;

	return isSupported;
}


BOOL wglAssociateImageBufferEventsI3D(HDC hDC, const HANDLE *pEvent, const LPVOID *pAddress, const DWORD *pSize, UINT count)
{
	return gleGetCurrent()->wglAssociateImageBufferEventsI3D( hDC, pEvent, pAddress, pSize, count );
}

LPVOID wglCreateImageBufferI3D(HDC hDC, DWORD dwSize, UINT uFlags)
{
	return gleGetCurrent()->wglCreateImageBufferI3D( hDC, dwSize, uFlags );
}

BOOL wglDestroyImageBufferI3D(HDC hDC, LPVOID pAddress)
{
	return gleGetCurrent()->wglDestroyImageBufferI3D( hDC, pAddress );
}

BOOL wglReleaseImageBufferEventsI3D(HDC hDC, const LPVOID *pAddress, UINT count)
{
	return gleGetCurrent()->wglReleaseImageBufferEventsI3D( hDC, pAddress, count );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_I3D_swap_frame_lock *********
bool isWGL_I3D_swap_frame_lock()
{
	const bool isSupported = gleGetCurrent()->isWGL_I3D_swap_frame_lock;

	return isSupported;
}


BOOL wglDisableFrameLockI3D(void)
{
	return gleGetCurrent()->wglDisableFrameLockI3D(  );
}

BOOL wglEnableFrameLockI3D(void)
{
	return gleGetCurrent()->wglEnableFrameLockI3D(  );
}

BOOL wglIsEnabledFrameLockI3D(BOOL *pFlag)
{
	return gleGetCurrent()->wglIsEnabledFrameLockI3D( pFlag );
}

BOOL wglQueryFrameLockMasterI3D(BOOL *pFlag)
{
	return gleGetCurrent()->wglQueryFrameLockMasterI3D( pFlag );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_I3D_swap_frame_usage *********
bool isWGL_I3D_swap_frame_usage()
{
	const bool isSupported = gleGetCurrent()->isWGL_I3D_swap_frame_usage;

	return isSupported;
}


BOOL wglBeginFrameTrackingI3D(void)
{
	return gleGetCurrent()->wglBeginFrameTrackingI3D(  );
}

BOOL wglEndFrameTrackingI3D(void)
{
	return gleGetCurrent()->wglEndFrameTrackingI3D(  );
}

BOOL wglGetFrameUsageI3D(float *pUsage)
{
	return gleGetCurrent()->wglGetFrameUsageI3D( pUsage );
}

BOOL wglQueryFrameTrackingI3D(DWORD *pFrameCount, DWORD *pMissedFrames, float *pLastMissedUsage)
{
	return gleGetCurrent()->wglQueryFrameTrackingI3D( pFrameCount, pMissedFrames, pLastMissedUsage );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_DX_interop *********
bool isWGL_NV_DX_interop()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_DX_interop;

	return isSupported;
}


BOOL wglDXCloseDeviceNV(HANDLE hDevice)
{
	return gleGetCurrent()->wglDXCloseDeviceNV( hDevice );
}

BOOL wglDXLockObjectsNV(HANDLE hDevice, GLint count, HANDLE *hObjects)
{
	return gleGetCurrent()->wglDXLockObjectsNV( hDevice, count, hObjects );
}

BOOL wglDXObjectAccessNV(HANDLE hObject, GLenum access)
{
	return gleGetCurrent()->wglDXObjectAccessNV( hObject, access );
}

HANDLE wglDXOpenDeviceNV(void *dxDevice)
{
	return gleGetCurrent()->wglDXOpenDeviceNV( dxDevice );
}

HANDLE wglDXRegisterObjectNV(HANDLE hDevice, void *dxObject, GLuint name, GLenum type, GLenum access)
{
	return gleGetCurrent()->wglDXRegisterObjectNV( hDevice, dxObject, name, type, access );
}

BOOL wglDXSetResourceShareHandleNV(void *dxObject, HANDLE shareHandle)
{
	return gleGetCurrent()->wglDXSetResourceShareHandleNV( dxObject, shareHandle );
}

BOOL wglDXUnlockObjectsNV(HANDLE hDevice, GLint count, HANDLE *hObjects)
{
	return gleGetCurrent()->wglDXUnlockObjectsNV( hDevice, count, hObjects );
}

BOOL wglDXUnregisterObjectNV(HANDLE hDevice, HANDLE hObject)
{
	return gleGetCurrent()->wglDXUnregisterObjectNV( hDevice, hObject );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_copy_image *********
bool isWGL_NV_copy_image()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_copy_image;

	return isSupported;
}


BOOL wglCopyImageSubDataNV(HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
	return gleGetCurrent()->wglCopyImageSubDataNV( hSrcRC, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, hDstRC, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_float_buffer *********
bool isWGL_NV_float_buffer()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_float_buffer;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_gpu_affinity *********
bool isWGL_NV_gpu_affinity()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_gpu_affinity;

	return isSupported;
}


HDC wglCreateAffinityDCNV(const HGPUNV *phGpuList)
{
	return gleGetCurrent()->wglCreateAffinityDCNV( phGpuList );
}

BOOL wglDeleteDCNV(HDC hdc)
{
	return gleGetCurrent()->wglDeleteDCNV( hdc );
}

BOOL wglEnumGpuDevicesNV(HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice)
{
	return gleGetCurrent()->wglEnumGpuDevicesNV( hGpu, iDeviceIndex, lpGpuDevice );
}

BOOL wglEnumGpusFromAffinityDCNV(HDC hAffinityDC, UINT iGpuIndex, HGPUNV *hGpu)
{
	return gleGetCurrent()->wglEnumGpusFromAffinityDCNV( hAffinityDC, iGpuIndex, hGpu );
}

BOOL wglEnumGpusNV(UINT iGpuIndex, HGPUNV *phGpu)
{
	return gleGetCurrent()->wglEnumGpusNV( iGpuIndex, phGpu );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_multisample_coverage *********
bool isWGL_NV_multisample_coverage()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_multisample_coverage;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_present_video *********
bool isWGL_NV_present_video()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_present_video;

	return isSupported;
}


BOOL wglBindVideoDeviceNV(HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int *piAttribList)
{
	return gleGetCurrent()->wglBindVideoDeviceNV( hDC, uVideoSlot, hVideoDevice, piAttribList );
}

int wglEnumerateVideoDevicesNV(HDC hDC, HVIDEOOUTPUTDEVICENV *phDeviceList)
{
	return gleGetCurrent()->wglEnumerateVideoDevicesNV( hDC, phDeviceList );
}

BOOL wglQueryCurrentContextNV(int iAttribute, int *piValue)
{
	return gleGetCurrent()->wglQueryCurrentContextNV( iAttribute, piValue );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_render_depth_texture *********
bool isWGL_NV_render_depth_texture()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_render_depth_texture;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_render_texture_rectangle *********
bool isWGL_NV_render_texture_rectangle()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_render_texture_rectangle;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_swap_group *********
bool isWGL_NV_swap_group()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_swap_group;

	return isSupported;
}


BOOL wglBindSwapBarrierNV(GLuint group, GLuint barrier)
{
	return gleGetCurrent()->wglBindSwapBarrierNV( group, barrier );
}

BOOL wglJoinSwapGroupNV(HDC hDC, GLuint group)
{
	return gleGetCurrent()->wglJoinSwapGroupNV( hDC, group );
}

BOOL wglQueryFrameCountNV(HDC hDC, GLuint *count)
{
	return gleGetCurrent()->wglQueryFrameCountNV( hDC, count );
}

BOOL wglQueryMaxSwapGroupsNV(HDC hDC, GLuint *maxGroups, GLuint *maxBarriers)
{
	return gleGetCurrent()->wglQueryMaxSwapGroupsNV( hDC, maxGroups, maxBarriers );
}

BOOL wglQuerySwapGroupNV(HDC hDC, GLuint *group, GLuint *barrier)
{
	return gleGetCurrent()->wglQuerySwapGroupNV( hDC, group, barrier );
}

BOOL wglResetFrameCountNV(HDC hDC)
{
	return gleGetCurrent()->wglResetFrameCountNV( hDC );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_vertex_array_range *********
bool isWGL_NV_vertex_array_range()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_vertex_array_range;

	return isSupported;
}


void* wglAllocateMemoryNV(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority)
{
	return gleGetCurrent()->wglAllocateMemoryNV( size, readfreq, writefreq, priority );
}

void wglFreeMemoryNV(void *pointer)
{
	gleGetCurrent()->wglFreeMemoryNV( pointer );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_video_capture *********
bool isWGL_NV_video_capture()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_video_capture;

	return isSupported;
}


BOOL wglBindVideoCaptureDeviceNV(UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice)
{
	return gleGetCurrent()->wglBindVideoCaptureDeviceNV( uVideoSlot, hDevice );
}

UINT wglEnumerateVideoCaptureDevicesNV(HDC hDc, HVIDEOINPUTDEVICENV *phDeviceList)
{
	return gleGetCurrent()->wglEnumerateVideoCaptureDevicesNV( hDc, phDeviceList );
}

BOOL wglLockVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice)
{
	return gleGetCurrent()->wglLockVideoCaptureDeviceNV( hDc, hDevice );
}

BOOL wglQueryVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int *piValue)
{
	return gleGetCurrent()->wglQueryVideoCaptureDeviceNV( hDc, hDevice, iAttribute, piValue );
}

BOOL wglReleaseVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice)
{
	return gleGetCurrent()->wglReleaseVideoCaptureDeviceNV( hDc, hDevice );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_video_out *********
bool isWGL_NV_video_out()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_video_out;

	return isSupported;
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_NV_video_output *********
bool isWGL_NV_video_output()
{
	const bool isSupported = gleGetCurrent()->isWGL_NV_video_output;

	return isSupported;
}


BOOL wglBindVideoImageNV(HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer)
{
	return gleGetCurrent()->wglBindVideoImageNV( hVideoDevice, hPbuffer, iVideoBuffer );
}

BOOL wglGetVideoDeviceNV(HDC hDC, int numDevices, HPVIDEODEV *hVideoDevice)
{
	return gleGetCurrent()->wglGetVideoDeviceNV( hDC, numDevices, hVideoDevice );
}

BOOL wglGetVideoInfoNV(HPVIDEODEV hpVideoDevice, unsigned long *pulCounterOutputPbuffer, unsigned long *pulCounterOutputVideo)
{
	return gleGetCurrent()->wglGetVideoInfoNV( hpVideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo );
}

BOOL wglReleaseVideoDeviceNV(HPVIDEODEV hVideoDevice)
{
	return gleGetCurrent()->wglReleaseVideoDeviceNV( hVideoDevice );
}

BOOL wglReleaseVideoImageNV(HPBUFFERARB hPbuffer, int iVideoBuffer)
{
	return gleGetCurrent()->wglReleaseVideoImageNV( hPbuffer, iVideoBuffer );
}

BOOL wglSendPbufferToVideoNV(HPBUFFERARB hPbuffer, int iBufferType, unsigned long *pulCounterPbuffer, BOOL bBlock)
{
	return gleGetCurrent()->wglSendPbufferToVideoNV( hPbuffer, iBufferType, pulCounterPbuffer, bBlock );
}
#endif //WIN32



#ifdef WIN32
// ********* WGL_OML_sync_control *********
bool isWGL_OML_sync_control()
{
	const bool isSupported = gleGetCurrent()->isWGL_OML_sync_control;

	return isSupported;
}


BOOL wglGetMscRateOML(HDC hdc, INT32 *numerator, INT32 *denominator)
{
	return gleGetCurrent()->wglGetMscRateOML( hdc, numerator, denominator );
}

BOOL wglGetSyncValuesOML(HDC hdc, INT64 *ust, INT64 *msc, INT64 *sbc)
{
	return gleGetCurrent()->wglGetSyncValuesOML( hdc, ust, msc, sbc );
}

INT64 wglSwapBuffersMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder)
{
	return gleGetCurrent()->wglSwapBuffersMscOML( hdc, target_msc, divisor, remainder );
}

INT64 wglSwapLayerBuffersMscOML(HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder)
{
	return gleGetCurrent()->wglSwapLayerBuffersMscOML( hdc, fuPlanes, target_msc, divisor, remainder );
}

BOOL wglWaitForMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 *ust, INT64 *msc, INT64 *sbc)
{
	return gleGetCurrent()->wglWaitForMscOML( hdc, target_msc, divisor, remainder, ust, msc, sbc );
}

BOOL wglWaitForSbcOML(HDC hdc, INT64 target_sbc, INT64 *ust, INT64 *msc, INT64 *sbc)
{
	return gleGetCurrent()->wglWaitForSbcOML( hdc, target_sbc, ust, msc, sbc );
}
#endif //WIN32



