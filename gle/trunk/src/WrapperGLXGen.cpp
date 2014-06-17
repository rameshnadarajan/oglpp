#include "gle/WrapperGLXGen.hpp"

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
// ********* GLX_EXT_buffer_age *********
bool isGLX_EXT_buffer_age()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_buffer_age;

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
// ********* GLX_EXT_create_context_es_profile *********
bool isGLX_EXT_create_context_es_profile()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_create_context_es_profile;

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


void glXSwapIntervalEXT(Display *dpy, GLXDrawable drawable, int interval)
{
	gleGetCurrent()->glXSwapIntervalEXT( dpy, drawable, interval );
}
#endif //POSIX



#ifdef POSIX
// ********* GLX_EXT_swap_control_tear *********
bool isGLX_EXT_swap_control_tear()
{
	const bool isSupported = gleGetCurrent()->isGLX_EXT_swap_control_tear;

	return isSupported;
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


// Bool glXAssociateDMPbufferSGIX(Display *dpy, GLXPbufferSGIX pbuffer, DMparams *params, DMbuffer dmbuffer)
// {
	// return gleGetCurrent()->glXAssociateDMPbufferSGIX( dpy, pbuffer, params, dmbuffer );
// }
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


// GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX(Display *display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode)
// {
//	 return gleGetCurrent()->glXCreateGLXVideoSourceSGIX( display, screen, server, path, nodeClass, drainNode );
// }

// void glXDestroyGLXVideoSourceSGIX(Display *dpy, GLXVideoSourceSGIX glxvideosource)
// {
//	 gleGetCurrent()->glXDestroyGLXVideoSourceSGIX( dpy, glxvideosource );
// }
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

