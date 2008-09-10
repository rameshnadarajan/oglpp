// This file was generated at Fri Jun 20 14:40:22 2008 with gle, please do not modify.

// GLE - Copyright (C) 2004, 2005, 2007, 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "gle/OpenGLExtensionsGen.hpp"

#include <algorithm>
#include <functional>
#include <iterator>
#include <sstream>


namespace gle
{


const int	OpenGLExtensionsGen::m_supportedExtensionCount	= 294;
const int	OpenGLExtensionsGen::m_supportedProcCount		= 1193;


OpenGLExtensionsGen::OpenGLExtensionsGen( std::ostream* pOS ) :
	OpenGLExtensions( pOS ),
	m_isSEDEnable( false )
{
	clear();
}


void OpenGLExtensionsGen::clear()
{
	m_initializedExtensionCount	= 0;
	m_initializedProcCount		= 0;
	m_initializedExtensions.clear();

	// ****** GL_3DFX_multisample ******
	isGL_3DFX_multisample                                         = false;


	// ****** GL_3DFX_tbuffer ******
	isGL_3DFX_tbuffer                                             = false;
	glTbufferMask3DFX                                             = 0;


	// ****** GL_3DFX_texture_compression_FXT1 ******
	isGL_3DFX_texture_compression_FXT1                            = false;


	// ****** GL_APPLE_client_storage ******
	isGL_APPLE_client_storage                                     = false;


	// ****** GL_APPLE_element_array ******
	isGL_APPLE_element_array                                      = false;

	glElementPointerAPPLE                                         = 0;
	glDrawElementArrayAPPLE                                       = 0;
	glDrawRangeElementArrayAPPLE                                  = 0;
	glMultiDrawElementArrayAPPLE                                  = 0;
	glMultiDrawRangeElementArrayAPPLE                             = 0;


	// ****** GL_APPLE_fence ******
	isGL_APPLE_fence                                              = false;

	glGenFencesAPPLE                                              = 0;
	glDeleteFencesAPPLE                                           = 0;
	glSetFenceAPPLE                                               = 0;
	glIsFenceAPPLE                                                = 0;
	glTestFenceAPPLE                                              = 0;
	glFinishFenceAPPLE                                            = 0;
	glTestObjectAPPLE                                             = 0;
	glFinishObjectAPPLE                                           = 0;


	// ****** GL_APPLE_flush_buffer_range ******
	isGL_APPLE_flush_buffer_range                                 = false;

	glBufferParameteriAPPLE                                       = 0;
	glFlushMappedBufferRangeAPPLE                                 = 0;


	// ****** GL_APPLE_specular_vector ******
	isGL_APPLE_specular_vector                                    = false;


	// ****** GL_APPLE_transform_hint ******
	isGL_APPLE_transform_hint                                     = false;


	// ****** GL_APPLE_vertex_array_object ******
	isGL_APPLE_vertex_array_object                                = false;

	glBindVertexArrayAPPLE                                        = 0;
	glDeleteVertexArraysAPPLE                                     = 0;
	glGenVertexArraysAPPLE                                        = 0;
	glIsVertexArrayAPPLE                                          = 0;


	// ****** GL_APPLE_vertex_array_range ******
	isGL_APPLE_vertex_array_range                                 = false;

	glVertexArrayRangeAPPLE                                       = 0;
	glFlushVertexArrayRangeAPPLE                                  = 0;
	glVertexArrayParameteriAPPLE                                  = 0;


	// ****** GL_APPLE_ycbcr_422 ******
	isGL_APPLE_ycbcr_422                                          = false;


	// ****** GL_ARB_color_buffer_float ******
	isGL_ARB_color_buffer_float                                   = false;
	glClampColorARB                                               = 0;


	// ****** GL_ARB_depth_texture ******
	isGL_ARB_depth_texture                                        = false;


	// ****** GL_ARB_draw_buffers ******
	isGL_ARB_draw_buffers                                         = false;
	glDrawBuffersARB                                              = 0;


	// ****** GL_ARB_fragment_program ******
	isGL_ARB_fragment_program                                     = false;


	// ****** GL_ARB_fragment_program_shadow ******
	isGL_ARB_fragment_program_shadow                              = false;


	// ****** GL_ARB_fragment_shader ******
	isGL_ARB_fragment_shader                                      = false;


	// ****** GL_ARB_half_float_pixel ******
	isGL_ARB_half_float_pixel                                     = false;


	// ****** GL_ARB_imaging ******
	isGL_ARB_imaging                                              = false;


	// ****** GL_ARB_matrix_palette ******
	isGL_ARB_matrix_palette                                       = false;

	glCurrentPaletteMatrixARB                                     = 0;
	glMatrixIndexubvARB                                           = 0;
	glMatrixIndexusvARB                                           = 0;
	glMatrixIndexuivARB                                           = 0;
	glMatrixIndexPointerARB                                       = 0;


	// ****** GL_ARB_multisample ******
	isGL_ARB_multisample                                          = false;
	glSampleCoverageARB                                           = 0;


	// ****** GL_ARB_multitexture ******
	isGL_ARB_multitexture                                         = false;

	glActiveTextureARB                                            = 0;
	glClientActiveTextureARB                                      = 0;
	glMultiTexCoord1dARB                                          = 0;
	glMultiTexCoord1dvARB                                         = 0;
	glMultiTexCoord1fARB                                          = 0;
	glMultiTexCoord1fvARB                                         = 0;
	glMultiTexCoord1iARB                                          = 0;
	glMultiTexCoord1ivARB                                         = 0;
	glMultiTexCoord1sARB                                          = 0;
	glMultiTexCoord1svARB                                         = 0;
	glMultiTexCoord2dARB                                          = 0;
	glMultiTexCoord2dvARB                                         = 0;
	glMultiTexCoord2fARB                                          = 0;
	glMultiTexCoord2fvARB                                         = 0;
	glMultiTexCoord2iARB                                          = 0;
	glMultiTexCoord2ivARB                                         = 0;
	glMultiTexCoord2sARB                                          = 0;
	glMultiTexCoord2svARB                                         = 0;
	glMultiTexCoord3dARB                                          = 0;
	glMultiTexCoord3dvARB                                         = 0;
	glMultiTexCoord3fARB                                          = 0;
	glMultiTexCoord3fvARB                                         = 0;
	glMultiTexCoord3iARB                                          = 0;
	glMultiTexCoord3ivARB                                         = 0;
	glMultiTexCoord3sARB                                          = 0;
	glMultiTexCoord3svARB                                         = 0;
	glMultiTexCoord4dARB                                          = 0;
	glMultiTexCoord4dvARB                                         = 0;
	glMultiTexCoord4fARB                                          = 0;
	glMultiTexCoord4fvARB                                         = 0;
	glMultiTexCoord4iARB                                          = 0;
	glMultiTexCoord4ivARB                                         = 0;
	glMultiTexCoord4sARB                                          = 0;
	glMultiTexCoord4svARB                                         = 0;


	// ****** GL_ARB_occlusion_query ******
	isGL_ARB_occlusion_query                                      = false;

	glGenQueriesARB                                               = 0;
	glDeleteQueriesARB                                            = 0;
	glIsQueryARB                                                  = 0;
	glBeginQueryARB                                               = 0;
	glEndQueryARB                                                 = 0;
	glGetQueryivARB                                               = 0;
	glGetQueryObjectivARB                                         = 0;
	glGetQueryObjectuivARB                                        = 0;


	// ****** GL_ARB_pixel_buffer_object ******
	isGL_ARB_pixel_buffer_object                                  = false;


	// ****** GL_ARB_point_parameters ******
	isGL_ARB_point_parameters                                     = false;

	glPointParameterfARB                                          = 0;
	glPointParameterfvARB                                         = 0;


	// ****** GL_ARB_point_sprite ******
	isGL_ARB_point_sprite                                         = false;


	// ****** GL_ARB_shader_objects ******
	isGL_ARB_shader_objects                                       = false;

	glDeleteObjectARB                                             = 0;
	glGetHandleARB                                                = 0;
	glDetachObjectARB                                             = 0;
	glCreateShaderObjectARB                                       = 0;
	glShaderSourceARB                                             = 0;
	glCompileShaderARB                                            = 0;
	glCreateProgramObjectARB                                      = 0;
	glAttachObjectARB                                             = 0;
	glLinkProgramARB                                              = 0;
	glUseProgramObjectARB                                         = 0;
	glValidateProgramARB                                          = 0;
	glUniform1fARB                                                = 0;
	glUniform2fARB                                                = 0;
	glUniform3fARB                                                = 0;
	glUniform4fARB                                                = 0;
	glUniform1iARB                                                = 0;
	glUniform2iARB                                                = 0;
	glUniform3iARB                                                = 0;
	glUniform4iARB                                                = 0;
	glUniform1fvARB                                               = 0;
	glUniform2fvARB                                               = 0;
	glUniform3fvARB                                               = 0;
	glUniform4fvARB                                               = 0;
	glUniform1ivARB                                               = 0;
	glUniform2ivARB                                               = 0;
	glUniform3ivARB                                               = 0;
	glUniform4ivARB                                               = 0;
	glUniformMatrix2fvARB                                         = 0;
	glUniformMatrix3fvARB                                         = 0;
	glUniformMatrix4fvARB                                         = 0;
	glGetObjectParameterfvARB                                     = 0;
	glGetObjectParameterivARB                                     = 0;
	glGetInfoLogARB                                               = 0;
	glGetAttachedObjectsARB                                       = 0;
	glGetUniformLocationARB                                       = 0;
	glGetActiveUniformARB                                         = 0;
	glGetUniformfvARB                                             = 0;
	glGetUniformivARB                                             = 0;
	glGetShaderSourceARB                                          = 0;


	// ****** GL_ARB_shading_language_100 ******
	isGL_ARB_shading_language_100                                 = false;


	// ****** GL_ARB_shadow ******
	isGL_ARB_shadow                                               = false;


	// ****** GL_ARB_shadow_ambient ******
	isGL_ARB_shadow_ambient                                       = false;


	// ****** GL_ARB_texture_border_clamp ******
	isGL_ARB_texture_border_clamp                                 = false;


	// ****** GL_ARB_texture_compression ******
	isGL_ARB_texture_compression                                  = false;

	glCompressedTexImage3DARB                                     = 0;
	glCompressedTexImage2DARB                                     = 0;
	glCompressedTexImage1DARB                                     = 0;
	glCompressedTexSubImage3DARB                                  = 0;
	glCompressedTexSubImage2DARB                                  = 0;
	glCompressedTexSubImage1DARB                                  = 0;
	glGetCompressedTexImageARB                                    = 0;


	// ****** GL_ARB_texture_cube_map ******
	isGL_ARB_texture_cube_map                                     = false;


	// ****** GL_ARB_texture_env_add ******
	isGL_ARB_texture_env_add                                      = false;


	// ****** GL_ARB_texture_env_combine ******
	isGL_ARB_texture_env_combine                                  = false;


	// ****** GL_ARB_texture_env_crossbar ******
	isGL_ARB_texture_env_crossbar                                 = false;


	// ****** GL_ARB_texture_env_dot3 ******
	isGL_ARB_texture_env_dot3                                     = false;


	// ****** GL_ARB_texture_float ******
	isGL_ARB_texture_float                                        = false;


	// ****** GL_ARB_texture_mirrored_repeat ******
	isGL_ARB_texture_mirrored_repeat                              = false;


	// ****** GL_ARB_texture_non_power_of_two ******
	isGL_ARB_texture_non_power_of_two                             = false;


	// ****** GL_ARB_texture_rectangle ******
	isGL_ARB_texture_rectangle                                    = false;


	// ****** GL_ARB_transpose_matrix ******
	isGL_ARB_transpose_matrix                                     = false;

	glLoadTransposeMatrixfARB                                     = 0;
	glLoadTransposeMatrixdARB                                     = 0;
	glMultTransposeMatrixfARB                                     = 0;
	glMultTransposeMatrixdARB                                     = 0;


	// ****** GL_ARB_vertex_blend ******
	isGL_ARB_vertex_blend                                         = false;

	glWeightbvARB                                                 = 0;
	glWeightsvARB                                                 = 0;
	glWeightivARB                                                 = 0;
	glWeightfvARB                                                 = 0;
	glWeightdvARB                                                 = 0;
	glWeightubvARB                                                = 0;
	glWeightusvARB                                                = 0;
	glWeightuivARB                                                = 0;
	glWeightPointerARB                                            = 0;
	glVertexBlendARB                                              = 0;


	// ****** GL_ARB_vertex_buffer_object ******
	isGL_ARB_vertex_buffer_object                                 = false;

	glBindBufferARB                                               = 0;
	glDeleteBuffersARB                                            = 0;
	glGenBuffersARB                                               = 0;
	glIsBufferARB                                                 = 0;
	glBufferDataARB                                               = 0;
	glBufferSubDataARB                                            = 0;
	glGetBufferSubDataARB                                         = 0;
	glMapBufferARB                                                = 0;
	glUnmapBufferARB                                              = 0;
	glGetBufferParameterivARB                                     = 0;
	glGetBufferPointervARB                                        = 0;


	// ****** GL_ARB_vertex_program ******
	isGL_ARB_vertex_program                                       = false;

	glVertexAttrib1dARB                                           = 0;
	glVertexAttrib1dvARB                                          = 0;
	glVertexAttrib1fARB                                           = 0;
	glVertexAttrib1fvARB                                          = 0;
	glVertexAttrib1sARB                                           = 0;
	glVertexAttrib1svARB                                          = 0;
	glVertexAttrib2dARB                                           = 0;
	glVertexAttrib2dvARB                                          = 0;
	glVertexAttrib2fARB                                           = 0;
	glVertexAttrib2fvARB                                          = 0;
	glVertexAttrib2sARB                                           = 0;
	glVertexAttrib2svARB                                          = 0;
	glVertexAttrib3dARB                                           = 0;
	glVertexAttrib3dvARB                                          = 0;
	glVertexAttrib3fARB                                           = 0;
	glVertexAttrib3fvARB                                          = 0;
	glVertexAttrib3sARB                                           = 0;
	glVertexAttrib3svARB                                          = 0;
	glVertexAttrib4NbvARB                                         = 0;
	glVertexAttrib4NivARB                                         = 0;
	glVertexAttrib4NsvARB                                         = 0;
	glVertexAttrib4NubARB                                         = 0;
	glVertexAttrib4NubvARB                                        = 0;
	glVertexAttrib4NuivARB                                        = 0;
	glVertexAttrib4NusvARB                                        = 0;
	glVertexAttrib4bvARB                                          = 0;
	glVertexAttrib4dARB                                           = 0;
	glVertexAttrib4dvARB                                          = 0;
	glVertexAttrib4fARB                                           = 0;
	glVertexAttrib4fvARB                                          = 0;
	glVertexAttrib4ivARB                                          = 0;
	glVertexAttrib4sARB                                           = 0;
	glVertexAttrib4svARB                                          = 0;
	glVertexAttrib4ubvARB                                         = 0;
	glVertexAttrib4uivARB                                         = 0;
	glVertexAttrib4usvARB                                         = 0;
	glVertexAttribPointerARB                                      = 0;
	glEnableVertexAttribArrayARB                                  = 0;
	glDisableVertexAttribArrayARB                                 = 0;
	glProgramStringARB                                            = 0;
	glBindProgramARB                                              = 0;
	glDeleteProgramsARB                                           = 0;
	glGenProgramsARB                                              = 0;
	glProgramEnvParameter4dARB                                    = 0;
	glProgramEnvParameter4dvARB                                   = 0;
	glProgramEnvParameter4fARB                                    = 0;
	glProgramEnvParameter4fvARB                                   = 0;
	glProgramLocalParameter4dARB                                  = 0;
	glProgramLocalParameter4dvARB                                 = 0;
	glProgramLocalParameter4fARB                                  = 0;
	glProgramLocalParameter4fvARB                                 = 0;
	glGetProgramEnvParameterdvARB                                 = 0;
	glGetProgramEnvParameterfvARB                                 = 0;
	glGetProgramLocalParameterdvARB                               = 0;
	glGetProgramLocalParameterfvARB                               = 0;
	glGetProgramivARB                                             = 0;
	glGetProgramStringARB                                         = 0;
	glGetVertexAttribdvARB                                        = 0;
	glGetVertexAttribfvARB                                        = 0;
	glGetVertexAttribivARB                                        = 0;
	glGetVertexAttribPointervARB                                  = 0;
	glIsProgramARB                                                = 0;


	// ****** GL_ARB_vertex_shader ******
	isGL_ARB_vertex_shader                                        = false;

	glBindAttribLocationARB                                       = 0;
	glGetActiveAttribARB                                          = 0;
	glGetAttribLocationARB                                        = 0;


	// ****** GL_ARB_window_pos ******
	isGL_ARB_window_pos                                           = false;

	glWindowPos2dARB                                              = 0;
	glWindowPos2dvARB                                             = 0;
	glWindowPos2fARB                                              = 0;
	glWindowPos2fvARB                                             = 0;
	glWindowPos2iARB                                              = 0;
	glWindowPos2ivARB                                             = 0;
	glWindowPos2sARB                                              = 0;
	glWindowPos2svARB                                             = 0;
	glWindowPos3dARB                                              = 0;
	glWindowPos3dvARB                                             = 0;
	glWindowPos3fARB                                              = 0;
	glWindowPos3fvARB                                             = 0;
	glWindowPos3iARB                                              = 0;
	glWindowPos3ivARB                                             = 0;
	glWindowPos3sARB                                              = 0;
	glWindowPos3svARB                                             = 0;


	// ****** GL_ATI_draw_buffers ******
	isGL_ATI_draw_buffers                                         = false;
	glDrawBuffersATI                                              = 0;


	// ****** GL_ATI_element_array ******
	isGL_ATI_element_array                                        = false;

	glElementPointerATI                                           = 0;
	glDrawElementArrayATI                                         = 0;
	glDrawRangeElementArrayATI                                    = 0;


	// ****** GL_ATI_envmap_bumpmap ******
	isGL_ATI_envmap_bumpmap                                       = false;

	glTexBumpParameterivATI                                       = 0;
	glTexBumpParameterfvATI                                       = 0;
	glGetTexBumpParameterivATI                                    = 0;
	glGetTexBumpParameterfvATI                                    = 0;


	// ****** GL_ATI_fragment_shader ******
	isGL_ATI_fragment_shader                                      = false;

	glGenFragmentShadersATI                                       = 0;
	glBindFragmentShaderATI                                       = 0;
	glDeleteFragmentShaderATI                                     = 0;
	glBeginFragmentShaderATI                                      = 0;
	glEndFragmentShaderATI                                        = 0;
	glPassTexCoordATI                                             = 0;
	glSampleMapATI                                                = 0;
	glColorFragmentOp1ATI                                         = 0;
	glColorFragmentOp2ATI                                         = 0;
	glColorFragmentOp3ATI                                         = 0;
	glAlphaFragmentOp1ATI                                         = 0;
	glAlphaFragmentOp2ATI                                         = 0;
	glAlphaFragmentOp3ATI                                         = 0;
	glSetFragmentShaderConstantATI                                = 0;


	// ****** GL_ATI_map_object_buffer ******
	isGL_ATI_map_object_buffer                                    = false;

	glMapObjectBufferATI                                          = 0;
	glUnmapObjectBufferATI                                        = 0;


	// ****** GL_ATI_pixel_format_float ******
	isGL_ATI_pixel_format_float                                   = false;


	// ****** GL_ATI_pn_triangles ******
	isGL_ATI_pn_triangles                                         = false;

	glPNTrianglesiATI                                             = 0;
	glPNTrianglesfATI                                             = 0;


	// ****** GL_ATI_separate_stencil ******
	isGL_ATI_separate_stencil                                     = false;

	glStencilOpSeparateATI                                        = 0;
	glStencilFuncSeparateATI                                      = 0;


	// ****** GL_ATI_text_fragment_shader ******
	isGL_ATI_text_fragment_shader                                 = false;


	// ****** GL_ATI_texture_env_combine3 ******
	isGL_ATI_texture_env_combine3                                 = false;


	// ****** GL_ATI_texture_float ******
	isGL_ATI_texture_float                                        = false;


	// ****** GL_ATI_texture_mirror_once ******
	isGL_ATI_texture_mirror_once                                  = false;


	// ****** GL_ATI_vertex_array_object ******
	isGL_ATI_vertex_array_object                                  = false;

	glNewObjectBufferATI                                          = 0;
	glIsObjectBufferATI                                           = 0;
	glUpdateObjectBufferATI                                       = 0;
	glGetObjectBufferfvATI                                        = 0;
	glGetObjectBufferivATI                                        = 0;
	glFreeObjectBufferATI                                         = 0;
	glArrayObjectATI                                              = 0;
	glGetArrayObjectfvATI                                         = 0;
	glGetArrayObjectivATI                                         = 0;
	glVariantArrayObjectATI                                       = 0;
	glGetVariantArrayObjectfvATI                                  = 0;
	glGetVariantArrayObjectivATI                                  = 0;


	// ****** GL_ATI_vertex_attrib_array_object ******
	isGL_ATI_vertex_attrib_array_object                           = false;

	glVertexAttribArrayObjectATI                                  = 0;
	glGetVertexAttribArrayObjectfvATI                             = 0;
	glGetVertexAttribArrayObjectivATI                             = 0;


	// ****** GL_ATI_vertex_streams ******
	isGL_ATI_vertex_streams                                       = false;

	glVertexStream1sATI                                           = 0;
	glVertexStream1svATI                                          = 0;
	glVertexStream1iATI                                           = 0;
	glVertexStream1ivATI                                          = 0;
	glVertexStream1fATI                                           = 0;
	glVertexStream1fvATI                                          = 0;
	glVertexStream1dATI                                           = 0;
	glVertexStream1dvATI                                          = 0;
	glVertexStream2sATI                                           = 0;
	glVertexStream2svATI                                          = 0;
	glVertexStream2iATI                                           = 0;
	glVertexStream2ivATI                                          = 0;
	glVertexStream2fATI                                           = 0;
	glVertexStream2fvATI                                          = 0;
	glVertexStream2dATI                                           = 0;
	glVertexStream2dvATI                                          = 0;
	glVertexStream3sATI                                           = 0;
	glVertexStream3svATI                                          = 0;
	glVertexStream3iATI                                           = 0;
	glVertexStream3ivATI                                          = 0;
	glVertexStream3fATI                                           = 0;
	glVertexStream3fvATI                                          = 0;
	glVertexStream3dATI                                           = 0;
	glVertexStream3dvATI                                          = 0;
	glVertexStream4sATI                                           = 0;
	glVertexStream4svATI                                          = 0;
	glVertexStream4iATI                                           = 0;
	glVertexStream4ivATI                                          = 0;
	glVertexStream4fATI                                           = 0;
	glVertexStream4fvATI                                          = 0;
	glVertexStream4dATI                                           = 0;
	glVertexStream4dvATI                                          = 0;
	glNormalStream3bATI                                           = 0;
	glNormalStream3bvATI                                          = 0;
	glNormalStream3sATI                                           = 0;
	glNormalStream3svATI                                          = 0;
	glNormalStream3iATI                                           = 0;
	glNormalStream3ivATI                                          = 0;
	glNormalStream3fATI                                           = 0;
	glNormalStream3fvATI                                          = 0;
	glNormalStream3dATI                                           = 0;
	glNormalStream3dvATI                                          = 0;
	glClientActiveVertexStreamATI                                 = 0;
	glVertexBlendEnviATI                                          = 0;
	glVertexBlendEnvfATI                                          = 0;


	// ****** GL_EXT_422_pixels ******
	isGL_EXT_422_pixels                                           = false;


	// ****** GL_EXT_abgr ******
	isGL_EXT_abgr                                                 = false;


	// ****** GL_EXT_bgra ******
	isGL_EXT_bgra                                                 = false;


	// ****** GL_EXT_bindable_uniform ******
	isGL_EXT_bindable_uniform                                     = false;

	glUniformBufferEXT                                            = 0;
	glGetUniformBufferSizeEXT                                     = 0;
	glGetUniformOffsetEXT                                         = 0;


	// ****** GL_EXT_blend_color ******
	isGL_EXT_blend_color                                          = false;
	glBlendColorEXT                                               = 0;


	// ****** GL_EXT_blend_equation_separate ******
	isGL_EXT_blend_equation_separate                              = false;
	glBlendEquationSeparateEXT                                    = 0;


	// ****** GL_EXT_blend_func_separate ******
	isGL_EXT_blend_func_separate                                  = false;
	glBlendFuncSeparateEXT                                        = 0;


	// ****** GL_EXT_blend_logic_op ******
	isGL_EXT_blend_logic_op                                       = false;


	// ****** GL_EXT_blend_minmax ******
	isGL_EXT_blend_minmax                                         = false;
	glBlendEquationEXT                                            = 0;


	// ****** GL_EXT_blend_subtract ******
	isGL_EXT_blend_subtract                                       = false;


	// ****** GL_EXT_clip_volume_hint ******
	isGL_EXT_clip_volume_hint                                     = false;


	// ****** GL_EXT_cmyka ******
	isGL_EXT_cmyka                                                = false;


	// ****** GL_EXT_color_subtable ******
	isGL_EXT_color_subtable                                       = false;

	glColorSubTableEXT                                            = 0;
	glCopyColorSubTableEXT                                        = 0;


	// ****** GL_EXT_compiled_vertex_array ******
	isGL_EXT_compiled_vertex_array                                = false;

	glLockArraysEXT                                               = 0;
	glUnlockArraysEXT                                             = 0;


	// ****** GL_EXT_convolution ******
	isGL_EXT_convolution                                          = false;

	glConvolutionFilter1DEXT                                      = 0;
	glConvolutionFilter2DEXT                                      = 0;
	glConvolutionParameterfEXT                                    = 0;
	glConvolutionParameterfvEXT                                   = 0;
	glConvolutionParameteriEXT                                    = 0;
	glConvolutionParameterivEXT                                   = 0;
	glCopyConvolutionFilter1DEXT                                  = 0;
	glCopyConvolutionFilter2DEXT                                  = 0;
	glGetConvolutionFilterEXT                                     = 0;
	glGetConvolutionParameterfvEXT                                = 0;
	glGetConvolutionParameterivEXT                                = 0;
	glGetSeparableFilterEXT                                       = 0;
	glSeparableFilter2DEXT                                        = 0;


	// ****** GL_EXT_coordinate_frame ******
	isGL_EXT_coordinate_frame                                     = false;

	glTangent3bEXT                                                = 0;
	glTangent3bvEXT                                               = 0;
	glTangent3dEXT                                                = 0;
	glTangent3dvEXT                                               = 0;
	glTangent3fEXT                                                = 0;
	glTangent3fvEXT                                               = 0;
	glTangent3iEXT                                                = 0;
	glTangent3ivEXT                                               = 0;
	glTangent3sEXT                                                = 0;
	glTangent3svEXT                                               = 0;
	glBinormal3bEXT                                               = 0;
	glBinormal3bvEXT                                              = 0;
	glBinormal3dEXT                                               = 0;
	glBinormal3dvEXT                                              = 0;
	glBinormal3fEXT                                               = 0;
	glBinormal3fvEXT                                              = 0;
	glBinormal3iEXT                                               = 0;
	glBinormal3ivEXT                                              = 0;
	glBinormal3sEXT                                               = 0;
	glBinormal3svEXT                                              = 0;
	glTangentPointerEXT                                           = 0;
	glBinormalPointerEXT                                          = 0;


	// ****** GL_EXT_copy_texture ******
	isGL_EXT_copy_texture                                         = false;

	glCopyTexImage1DEXT                                           = 0;
	glCopyTexImage2DEXT                                           = 0;
	glCopyTexSubImage1DEXT                                        = 0;
	glCopyTexSubImage2DEXT                                        = 0;
	glCopyTexSubImage3DEXT                                        = 0;


	// ****** GL_EXT_cull_vertex ******
	isGL_EXT_cull_vertex                                          = false;

	glCullParameterdvEXT                                          = 0;
	glCullParameterfvEXT                                          = 0;


	// ****** GL_EXT_depth_bounds_test ******
	isGL_EXT_depth_bounds_test                                    = false;
	glDepthBoundsEXT                                              = 0;


	// ****** GL_EXT_draw_buffers2 ******
	isGL_EXT_draw_buffers2                                        = false;

	glColorMaskIndexedEXT                                         = 0;
	glGetBooleanIndexedvEXT                                       = 0;
	glGetIntegerIndexedvEXT                                       = 0;
	glEnableIndexedEXT                                            = 0;
	glDisableIndexedEXT                                           = 0;
	glIsEnabledIndexedEXT                                         = 0;


	// ****** GL_EXT_draw_instanced ******
	isGL_EXT_draw_instanced                                       = false;

	glDrawArraysInstancedEXT                                      = 0;
	glDrawElementsInstancedEXT                                    = 0;


	// ****** GL_EXT_draw_range_elements ******
	isGL_EXT_draw_range_elements                                  = false;
	glDrawRangeElementsEXT                                        = 0;


	// ****** GL_EXT_fog_coord ******
	isGL_EXT_fog_coord                                            = false;

	glFogCoordfEXT                                                = 0;
	glFogCoordfvEXT                                               = 0;
	glFogCoorddEXT                                                = 0;
	glFogCoorddvEXT                                               = 0;
	glFogCoordPointerEXT                                          = 0;


	// ****** GL_EXT_framebuffer_blit ******
	isGL_EXT_framebuffer_blit                                     = false;
	glBlitFramebufferEXT                                          = 0;


	// ****** GL_EXT_framebuffer_multisample ******
	isGL_EXT_framebuffer_multisample                              = false;
	glRenderbufferStorageMultisampleEXT                           = 0;


	// ****** GL_EXT_framebuffer_object ******
	isGL_EXT_framebuffer_object                                   = false;

	glIsRenderbufferEXT                                           = 0;
	glBindRenderbufferEXT                                         = 0;
	glDeleteRenderbuffersEXT                                      = 0;
	glGenRenderbuffersEXT                                         = 0;
	glRenderbufferStorageEXT                                      = 0;
	glGetRenderbufferParameterivEXT                               = 0;
	glIsFramebufferEXT                                            = 0;
	glBindFramebufferEXT                                          = 0;
	glDeleteFramebuffersEXT                                       = 0;
	glGenFramebuffersEXT                                          = 0;
	glCheckFramebufferStatusEXT                                   = 0;
	glFramebufferTexture1DEXT                                     = 0;
	glFramebufferTexture2DEXT                                     = 0;
	glFramebufferTexture3DEXT                                     = 0;
	glFramebufferRenderbufferEXT                                  = 0;
	glGetFramebufferAttachmentParameterivEXT                      = 0;
	glGenerateMipmapEXT                                           = 0;


	// ****** GL_EXT_framebuffer_sRGB ******
	isGL_EXT_framebuffer_sRGB                                     = false;


	// ****** GL_EXT_geometry_shader4 ******
	isGL_EXT_geometry_shader4                                     = false;
	glProgramParameteriEXT                                        = 0;


	// ****** GL_EXT_gpu_program_parameters ******
	isGL_EXT_gpu_program_parameters                               = false;

	glProgramEnvParameters4fvEXT                                  = 0;
	glProgramLocalParameters4fvEXT                                = 0;


	// ****** GL_EXT_gpu_shader4 ******
	isGL_EXT_gpu_shader4                                          = false;

	glGetUniformuivEXT                                            = 0;
	glBindFragDataLocationEXT                                     = 0;
	glGetFragDataLocationEXT                                      = 0;
	glUniform1uiEXT                                               = 0;
	glUniform2uiEXT                                               = 0;
	glUniform3uiEXT                                               = 0;
	glUniform4uiEXT                                               = 0;
	glUniform1uivEXT                                              = 0;
	glUniform2uivEXT                                              = 0;
	glUniform3uivEXT                                              = 0;
	glUniform4uivEXT                                              = 0;


	// ****** GL_EXT_histogram ******
	isGL_EXT_histogram                                            = false;

	glGetHistogramEXT                                             = 0;
	glGetHistogramParameterfvEXT                                  = 0;
	glGetHistogramParameterivEXT                                  = 0;
	glGetMinmaxEXT                                                = 0;
	glGetMinmaxParameterfvEXT                                     = 0;
	glGetMinmaxParameterivEXT                                     = 0;
	glHistogramEXT                                                = 0;
	glMinmaxEXT                                                   = 0;
	glResetHistogramEXT                                           = 0;
	glResetMinmaxEXT                                              = 0;


	// ****** GL_EXT_index_array_formats ******
	isGL_EXT_index_array_formats                                  = false;


	// ****** GL_EXT_index_func ******
	isGL_EXT_index_func                                           = false;
	glIndexFuncEXT                                                = 0;


	// ****** GL_EXT_index_material ******
	isGL_EXT_index_material                                       = false;
	glIndexMaterialEXT                                            = 0;


	// ****** GL_EXT_index_texture ******
	isGL_EXT_index_texture                                        = false;


	// ****** GL_EXT_light_texture ******
	isGL_EXT_light_texture                                        = false;

	glApplyTextureEXT                                             = 0;
	glTextureLightEXT                                             = 0;
	glTextureMaterialEXT                                          = 0;


	// ****** GL_EXT_misc_attribute ******
	isGL_EXT_misc_attribute                                       = false;


	// ****** GL_EXT_multi_draw_arrays ******
	isGL_EXT_multi_draw_arrays                                    = false;

	glMultiDrawArraysEXT                                          = 0;
	glMultiDrawElementsEXT                                        = 0;


	// ****** GL_EXT_multisample ******
	isGL_EXT_multisample                                          = false;

	glSampleMaskEXT                                               = 0;
	glSamplePatternEXT                                            = 0;


	// ****** GL_EXT_packed_depth_stencil ******
	isGL_EXT_packed_depth_stencil                                 = false;


	// ****** GL_EXT_packed_float ******
	isGL_EXT_packed_float                                         = false;


	// ****** GL_EXT_packed_pixels ******
	isGL_EXT_packed_pixels                                        = false;


	// ****** GL_EXT_paletted_texture ******
	isGL_EXT_paletted_texture                                     = false;

	glColorTableEXT                                               = 0;
	glGetColorTableEXT                                            = 0;
	glGetColorTableParameterivEXT                                 = 0;
	glGetColorTableParameterfvEXT                                 = 0;


	// ****** GL_EXT_pixel_buffer_object ******
	isGL_EXT_pixel_buffer_object                                  = false;


	// ****** GL_EXT_pixel_transform ******
	isGL_EXT_pixel_transform                                      = false;

	glPixelTransformParameteriEXT                                 = 0;
	glPixelTransformParameterfEXT                                 = 0;
	glPixelTransformParameterivEXT                                = 0;
	glPixelTransformParameterfvEXT                                = 0;


	// ****** GL_EXT_pixel_transform_color_table ******
	isGL_EXT_pixel_transform_color_table                          = false;


	// ****** GL_EXT_point_parameters ******
	isGL_EXT_point_parameters                                     = false;

	glPointParameterfEXT                                          = 0;
	glPointParameterfvEXT                                         = 0;


	// ****** GL_EXT_polygon_offset ******
	isGL_EXT_polygon_offset                                       = false;
	glPolygonOffsetEXT                                            = 0;


	// ****** GL_EXT_rescale_normal ******
	isGL_EXT_rescale_normal                                       = false;


	// ****** GL_EXT_secondary_color ******
	isGL_EXT_secondary_color                                      = false;

	glSecondaryColor3bEXT                                         = 0;
	glSecondaryColor3bvEXT                                        = 0;
	glSecondaryColor3dEXT                                         = 0;
	glSecondaryColor3dvEXT                                        = 0;
	glSecondaryColor3fEXT                                         = 0;
	glSecondaryColor3fvEXT                                        = 0;
	glSecondaryColor3iEXT                                         = 0;
	glSecondaryColor3ivEXT                                        = 0;
	glSecondaryColor3sEXT                                         = 0;
	glSecondaryColor3svEXT                                        = 0;
	glSecondaryColor3ubEXT                                        = 0;
	glSecondaryColor3ubvEXT                                       = 0;
	glSecondaryColor3uiEXT                                        = 0;
	glSecondaryColor3uivEXT                                       = 0;
	glSecondaryColor3usEXT                                        = 0;
	glSecondaryColor3usvEXT                                       = 0;
	glSecondaryColorPointerEXT                                    = 0;


	// ****** GL_EXT_separate_specular_color ******
	isGL_EXT_separate_specular_color                              = false;


	// ****** GL_EXT_shadow_funcs ******
	isGL_EXT_shadow_funcs                                         = false;


	// ****** GL_EXT_shared_texture_palette ******
	isGL_EXT_shared_texture_palette                               = false;


	// ****** GL_EXT_stencil_clear_tag ******
	isGL_EXT_stencil_clear_tag                                    = false;
	glStencilClearTagEXT                                          = 0;


	// ****** GL_EXT_stencil_two_side ******
	isGL_EXT_stencil_two_side                                     = false;
	glActiveStencilFaceEXT                                        = 0;


	// ****** GL_EXT_stencil_wrap ******
	isGL_EXT_stencil_wrap                                         = false;


	// ****** GL_EXT_subtexture ******
	isGL_EXT_subtexture                                           = false;

	glTexSubImage1DEXT                                            = 0;
	glTexSubImage2DEXT                                            = 0;


	// ****** GL_EXT_texture ******
	isGL_EXT_texture                                              = false;


	// ****** GL_EXT_texture3D ******
	isGL_EXT_texture3D                                            = false;

	glTexImage3DEXT                                               = 0;
	glTexSubImage3DEXT                                            = 0;


	// ****** GL_EXT_texture_array ******
	isGL_EXT_texture_array                                        = false;


	// ****** GL_EXT_texture_buffer_object ******
	isGL_EXT_texture_buffer_object                                = false;
	glTexBufferEXT                                                = 0;


	// ****** GL_EXT_texture_compression_latc ******
	isGL_EXT_texture_compression_latc                             = false;


	// ****** GL_EXT_texture_compression_rgtc ******
	isGL_EXT_texture_compression_rgtc                             = false;


	// ****** GL_EXT_texture_compression_s3tc ******
	isGL_EXT_texture_compression_s3tc                             = false;


	// ****** GL_EXT_texture_cube_map ******
	isGL_EXT_texture_cube_map                                     = false;


	// ****** GL_EXT_texture_env_add ******
	isGL_EXT_texture_env_add                                      = false;


	// ****** GL_EXT_texture_env_combine ******
	isGL_EXT_texture_env_combine                                  = false;


	// ****** GL_EXT_texture_env_dot3 ******
	isGL_EXT_texture_env_dot3                                     = false;


	// ****** GL_EXT_texture_filter_anisotropic ******
	isGL_EXT_texture_filter_anisotropic                           = false;


	// ****** GL_EXT_texture_integer ******
	isGL_EXT_texture_integer                                      = false;

	glTexParameterIivEXT                                          = 0;
	glTexParameterIuivEXT                                         = 0;
	glGetTexParameterIivEXT                                       = 0;
	glGetTexParameterIuivEXT                                      = 0;
	glClearColorIiEXT                                             = 0;
	glClearColorIuiEXT                                            = 0;


	// ****** GL_EXT_texture_lod_bias ******
	isGL_EXT_texture_lod_bias                                     = false;


	// ****** GL_EXT_texture_mirror_clamp ******
	isGL_EXT_texture_mirror_clamp                                 = false;


	// ****** GL_EXT_texture_object ******
	isGL_EXT_texture_object                                       = false;

	glAreTexturesResidentEXT                                      = 0;
	glBindTextureEXT                                              = 0;
	glDeleteTexturesEXT                                           = 0;
	glGenTexturesEXT                                              = 0;
	glIsTextureEXT                                                = 0;
	glPrioritizeTexturesEXT                                       = 0;


	// ****** GL_EXT_texture_perturb_normal ******
	isGL_EXT_texture_perturb_normal                               = false;
	glTextureNormalEXT                                            = 0;


	// ****** GL_EXT_texture_sRGB ******
	isGL_EXT_texture_sRGB                                         = false;


	// ****** GL_EXT_texture_shared_exponent ******
	isGL_EXT_texture_shared_exponent                              = false;


	// ****** GL_EXT_timer_query ******
	isGL_EXT_timer_query                                          = false;

	glGetQueryObjecti64vEXT                                       = 0;
	glGetQueryObjectui64vEXT                                      = 0;


	// ****** GL_EXT_vertex_array ******
	isGL_EXT_vertex_array                                         = false;

	glArrayElementEXT                                             = 0;
	glColorPointerEXT                                             = 0;
	glDrawArraysEXT                                               = 0;
	glEdgeFlagPointerEXT                                          = 0;
	glGetPointervEXT                                              = 0;
	glIndexPointerEXT                                             = 0;
	glNormalPointerEXT                                            = 0;
	glTexCoordPointerEXT                                          = 0;
	glVertexPointerEXT                                            = 0;


	// ****** GL_EXT_vertex_shader ******
	isGL_EXT_vertex_shader                                        = false;

	glBeginVertexShaderEXT                                        = 0;
	glEndVertexShaderEXT                                          = 0;
	glBindVertexShaderEXT                                         = 0;
	glGenVertexShadersEXT                                         = 0;
	glDeleteVertexShaderEXT                                       = 0;
	glShaderOp1EXT                                                = 0;
	glShaderOp2EXT                                                = 0;
	glShaderOp3EXT                                                = 0;
	glSwizzleEXT                                                  = 0;
	glWriteMaskEXT                                                = 0;
	glInsertComponentEXT                                          = 0;
	glExtractComponentEXT                                         = 0;
	glGenSymbolsEXT                                               = 0;
	glSetInvariantEXT                                             = 0;
	glSetLocalConstantEXT                                         = 0;
	glVariantbvEXT                                                = 0;
	glVariantsvEXT                                                = 0;
	glVariantivEXT                                                = 0;
	glVariantfvEXT                                                = 0;
	glVariantdvEXT                                                = 0;
	glVariantubvEXT                                               = 0;
	glVariantusvEXT                                               = 0;
	glVariantuivEXT                                               = 0;
	glVariantPointerEXT                                           = 0;
	glEnableVariantClientStateEXT                                 = 0;
	glDisableVariantClientStateEXT                                = 0;
	glBindLightParameterEXT                                       = 0;
	glBindMaterialParameterEXT                                    = 0;
	glBindTexGenParameterEXT                                      = 0;
	glBindTextureUnitParameterEXT                                 = 0;
	glBindParameterEXT                                            = 0;
	glIsVariantEnabledEXT                                         = 0;
	glGetVariantBooleanvEXT                                       = 0;
	glGetVariantIntegervEXT                                       = 0;
	glGetVariantFloatvEXT                                         = 0;
	glGetVariantPointervEXT                                       = 0;
	glGetInvariantBooleanvEXT                                     = 0;
	glGetInvariantIntegervEXT                                     = 0;
	glGetInvariantFloatvEXT                                       = 0;
	glGetLocalConstantBooleanvEXT                                 = 0;
	glGetLocalConstantIntegervEXT                                 = 0;
	glGetLocalConstantFloatvEXT                                   = 0;


	// ****** GL_EXT_vertex_weighting ******
	isGL_EXT_vertex_weighting                                     = false;

	glVertexWeightfEXT                                            = 0;
	glVertexWeightfvEXT                                           = 0;
	glVertexWeightPointerEXT                                      = 0;


	// ****** GL_FfdMaskSGIX ******
	isGL_FfdMaskSGIX                                              = false;


	// ****** GL_GREMEDY_frame_terminator ******
	isGL_GREMEDY_frame_terminator                                 = false;
	glFrameTerminatorGREMEDY                                      = 0;


	// ****** GL_GREMEDY_string_marker ******
	isGL_GREMEDY_string_marker                                    = false;
	glStringMarkerGREMEDY                                         = 0;


	// ****** GL_HP_convolution_border_modes ******
	isGL_HP_convolution_border_modes                              = false;


	// ****** GL_HP_image_transform ******
	isGL_HP_image_transform                                       = false;

	glImageTransformParameteriHP                                  = 0;
	glImageTransformParameterfHP                                  = 0;
	glImageTransformParameterivHP                                 = 0;
	glImageTransformParameterfvHP                                 = 0;
	glGetImageTransformParameterivHP                              = 0;
	glGetImageTransformParameterfvHP                              = 0;


	// ****** GL_HP_occlusion_test ******
	isGL_HP_occlusion_test                                        = false;


	// ****** GL_HP_texture_lighting ******
	isGL_HP_texture_lighting                                      = false;


	// ****** GL_IBM_cull_vertex ******
	isGL_IBM_cull_vertex                                          = false;


	// ****** GL_IBM_multimode_draw_arrays ******
	isGL_IBM_multimode_draw_arrays                                = false;

	glMultiModeDrawArraysIBM                                      = 0;
	glMultiModeDrawElementsIBM                                    = 0;


	// ****** GL_IBM_rasterpos_clip ******
	isGL_IBM_rasterpos_clip                                       = false;


	// ****** GL_IBM_texture_mirrored_repeat ******
	isGL_IBM_texture_mirrored_repeat                              = false;


	// ****** GL_IBM_vertex_array_lists ******
	isGL_IBM_vertex_array_lists                                   = false;

	glColorPointerListIBM                                         = 0;
	glSecondaryColorPointerListIBM                                = 0;
	glEdgeFlagPointerListIBM                                      = 0;
	glFogCoordPointerListIBM                                      = 0;
	glIndexPointerListIBM                                         = 0;
	glNormalPointerListIBM                                        = 0;
	glTexCoordPointerListIBM                                      = 0;
	glVertexPointerListIBM                                        = 0;


	// ****** GL_INGR_blend_func_separate ******
	isGL_INGR_blend_func_separate                                 = false;
	glBlendFuncSeparateINGR                                       = 0;


	// ****** GL_INGR_color_clamp ******
	isGL_INGR_color_clamp                                         = false;


	// ****** GL_INGR_interlace_read ******
	isGL_INGR_interlace_read                                      = false;


	// ****** GL_INGR_palette_buffer ******
	isGL_INGR_palette_buffer                                      = false;


	// ****** GL_INTEL_parallel_arrays ******
	isGL_INTEL_parallel_arrays                                    = false;

	glVertexPointervINTEL                                         = 0;
	glNormalPointervINTEL                                         = 0;
	glColorPointervINTEL                                          = 0;
	glTexCoordPointervINTEL                                       = 0;


	// ****** GL_INTEL_texture_scissor ******
	isGL_INTEL_texture_scissor                                    = false;


	// ****** GL_MESAX_texture_stack ******
	isGL_MESAX_texture_stack                                      = false;


	// ****** GL_MESA_pack_invert ******
	isGL_MESA_pack_invert                                         = false;


	// ****** GL_MESA_resize_buffers ******
	isGL_MESA_resize_buffers                                      = false;
	glResizeBuffersMESA                                           = 0;


	// ****** GL_MESA_window_pos ******
	isGL_MESA_window_pos                                          = false;

	glWindowPos2dMESA                                             = 0;
	glWindowPos2dvMESA                                            = 0;
	glWindowPos2fMESA                                             = 0;
	glWindowPos2fvMESA                                            = 0;
	glWindowPos2iMESA                                             = 0;
	glWindowPos2ivMESA                                            = 0;
	glWindowPos2sMESA                                             = 0;
	glWindowPos2svMESA                                            = 0;
	glWindowPos3dMESA                                             = 0;
	glWindowPos3dvMESA                                            = 0;
	glWindowPos3fMESA                                             = 0;
	glWindowPos3fvMESA                                            = 0;
	glWindowPos3iMESA                                             = 0;
	glWindowPos3ivMESA                                            = 0;
	glWindowPos3sMESA                                             = 0;
	glWindowPos3svMESA                                            = 0;
	glWindowPos4dMESA                                             = 0;
	glWindowPos4dvMESA                                            = 0;
	glWindowPos4fMESA                                             = 0;
	glWindowPos4fvMESA                                            = 0;
	glWindowPos4iMESA                                             = 0;
	glWindowPos4ivMESA                                            = 0;
	glWindowPos4sMESA                                             = 0;
	glWindowPos4svMESA                                            = 0;


	// ****** GL_MESA_ycbcr_texture ******
	isGL_MESA_ycbcr_texture                                       = false;


	// ****** GL_NV_blend_square ******
	isGL_NV_blend_square                                          = false;


	// ****** GL_NV_copy_depth_to_color ******
	isGL_NV_copy_depth_to_color                                   = false;


	// ****** GL_NV_depth_buffer_float ******
	isGL_NV_depth_buffer_float                                    = false;

	glDepthRangedNV                                               = 0;
	glClearDepthdNV                                               = 0;
	glDepthBoundsdNV                                              = 0;


	// ****** GL_NV_depth_clamp ******
	isGL_NV_depth_clamp                                           = false;


	// ****** GL_NV_evaluators ******
	isGL_NV_evaluators                                            = false;

	glMapControlPointsNV                                          = 0;
	glMapParameterivNV                                            = 0;
	glMapParameterfvNV                                            = 0;
	glGetMapControlPointsNV                                       = 0;
	glGetMapParameterivNV                                         = 0;
	glGetMapParameterfvNV                                         = 0;
	glGetMapAttribParameterivNV                                   = 0;
	glGetMapAttribParameterfvNV                                   = 0;
	glEvalMapsNV                                                  = 0;


	// ****** GL_NV_fence ******
	isGL_NV_fence                                                 = false;

	glDeleteFencesNV                                              = 0;
	glGenFencesNV                                                 = 0;
	glIsFenceNV                                                   = 0;
	glTestFenceNV                                                 = 0;
	glGetFenceivNV                                                = 0;
	glFinishFenceNV                                               = 0;
	glSetFenceNV                                                  = 0;


	// ****** GL_NV_float_buffer ******
	isGL_NV_float_buffer                                          = false;


	// ****** GL_NV_fog_distance ******
	isGL_NV_fog_distance                                          = false;


	// ****** GL_NV_fragment_program ******
	isGL_NV_fragment_program                                      = false;

	glProgramNamedParameter4fNV                                   = 0;
	glProgramNamedParameter4dNV                                   = 0;
	glProgramNamedParameter4fvNV                                  = 0;
	glProgramNamedParameter4dvNV                                  = 0;
	glGetProgramNamedParameterfvNV                                = 0;
	glGetProgramNamedParameterdvNV                                = 0;


	// ****** GL_NV_fragment_program2 ******
	isGL_NV_fragment_program2                                     = false;


	// ****** GL_NV_fragment_program4 ******
	isGL_NV_fragment_program4                                     = false;


	// ****** GL_NV_fragment_program_option ******
	isGL_NV_fragment_program_option                               = false;


	// ****** GL_NV_framebuffer_multisample_coverage ******
	isGL_NV_framebuffer_multisample_coverage                      = false;
	glRenderbufferStorageMultisampleCoverageNV                    = 0;


	// ****** GL_NV_geometry_program4 ******
	isGL_NV_geometry_program4                                     = false;

	glProgramVertexLimitNV                                        = 0;
	glFramebufferTextureEXT                                       = 0;
	glFramebufferTextureLayerEXT                                  = 0;
	glFramebufferTextureFaceEXT                                   = 0;


	// ****** GL_NV_geometry_shader4 ******
	isGL_NV_geometry_shader4                                      = false;


	// ****** GL_NV_gpu_program4 ******
	isGL_NV_gpu_program4                                          = false;

	glProgramLocalParameterI4iNV                                  = 0;
	glProgramLocalParameterI4ivNV                                 = 0;
	glProgramLocalParametersI4ivNV                                = 0;
	glProgramLocalParameterI4uiNV                                 = 0;
	glProgramLocalParameterI4uivNV                                = 0;
	glProgramLocalParametersI4uivNV                               = 0;
	glProgramEnvParameterI4iNV                                    = 0;
	glProgramEnvParameterI4ivNV                                   = 0;
	glProgramEnvParametersI4ivNV                                  = 0;
	glProgramEnvParameterI4uiNV                                   = 0;
	glProgramEnvParameterI4uivNV                                  = 0;
	glProgramEnvParametersI4uivNV                                 = 0;
	glGetProgramLocalParameterIivNV                               = 0;
	glGetProgramLocalParameterIuivNV                              = 0;
	glGetProgramEnvParameterIivNV                                 = 0;
	glGetProgramEnvParameterIuivNV                                = 0;


	// ****** GL_NV_half_float ******
	isGL_NV_half_float                                            = false;

	glVertex2hNV                                                  = 0;
	glVertex2hvNV                                                 = 0;
	glVertex3hNV                                                  = 0;
	glVertex3hvNV                                                 = 0;
	glVertex4hNV                                                  = 0;
	glVertex4hvNV                                                 = 0;
	glNormal3hNV                                                  = 0;
	glNormal3hvNV                                                 = 0;
	glColor3hNV                                                   = 0;
	glColor3hvNV                                                  = 0;
	glColor4hNV                                                   = 0;
	glColor4hvNV                                                  = 0;
	glTexCoord1hNV                                                = 0;
	glTexCoord1hvNV                                               = 0;
	glTexCoord2hNV                                                = 0;
	glTexCoord2hvNV                                               = 0;
	glTexCoord3hNV                                                = 0;
	glTexCoord3hvNV                                               = 0;
	glTexCoord4hNV                                                = 0;
	glTexCoord4hvNV                                               = 0;
	glMultiTexCoord1hNV                                           = 0;
	glMultiTexCoord1hvNV                                          = 0;
	glMultiTexCoord2hNV                                           = 0;
	glMultiTexCoord2hvNV                                          = 0;
	glMultiTexCoord3hNV                                           = 0;
	glMultiTexCoord3hvNV                                          = 0;
	glMultiTexCoord4hNV                                           = 0;
	glMultiTexCoord4hvNV                                          = 0;
	glFogCoordhNV                                                 = 0;
	glFogCoordhvNV                                                = 0;
	glSecondaryColor3hNV                                          = 0;
	glSecondaryColor3hvNV                                         = 0;
	glVertexWeighthNV                                             = 0;
	glVertexWeighthvNV                                            = 0;
	glVertexAttrib1hNV                                            = 0;
	glVertexAttrib1hvNV                                           = 0;
	glVertexAttrib2hNV                                            = 0;
	glVertexAttrib2hvNV                                           = 0;
	glVertexAttrib3hNV                                            = 0;
	glVertexAttrib3hvNV                                           = 0;
	glVertexAttrib4hNV                                            = 0;
	glVertexAttrib4hvNV                                           = 0;
	glVertexAttribs1hvNV                                          = 0;
	glVertexAttribs2hvNV                                          = 0;
	glVertexAttribs3hvNV                                          = 0;
	glVertexAttribs4hvNV                                          = 0;


	// ****** GL_NV_light_max_exponent ******
	isGL_NV_light_max_exponent                                    = false;


	// ****** GL_NV_multisample_filter_hint ******
	isGL_NV_multisample_filter_hint                               = false;


	// ****** GL_NV_occlusion_query ******
	isGL_NV_occlusion_query                                       = false;

	glGenOcclusionQueriesNV                                       = 0;
	glDeleteOcclusionQueriesNV                                    = 0;
	glIsOcclusionQueryNV                                          = 0;
	glBeginOcclusionQueryNV                                       = 0;
	glEndOcclusionQueryNV                                         = 0;
	glGetOcclusionQueryivNV                                       = 0;
	glGetOcclusionQueryuivNV                                      = 0;


	// ****** GL_NV_packed_depth_stencil ******
	isGL_NV_packed_depth_stencil                                  = false;


	// ****** GL_NV_parameter_buffer_object ******
	isGL_NV_parameter_buffer_object                               = false;

	glProgramBufferParametersfvNV                                 = 0;
	glProgramBufferParametersIivNV                                = 0;
	glProgramBufferParametersIuivNV                               = 0;


	// ****** GL_NV_pixel_data_range ******
	isGL_NV_pixel_data_range                                      = false;

	glPixelDataRangeNV                                            = 0;
	glFlushPixelDataRangeNV                                       = 0;


	// ****** GL_NV_point_sprite ******
	isGL_NV_point_sprite                                          = false;

	glPointParameteriNV                                           = 0;
	glPointParameterivNV                                          = 0;


	// ****** GL_NV_primitive_restart ******
	isGL_NV_primitive_restart                                     = false;

	glPrimitiveRestartNV                                          = 0;
	glPrimitiveRestartIndexNV                                     = 0;


	// ****** GL_NV_register_combiners ******
	isGL_NV_register_combiners                                    = false;

	glCombinerParameterfvNV                                       = 0;
	glCombinerParameterfNV                                        = 0;
	glCombinerParameterivNV                                       = 0;
	glCombinerParameteriNV                                        = 0;
	glCombinerInputNV                                             = 0;
	glCombinerOutputNV                                            = 0;
	glFinalCombinerInputNV                                        = 0;
	glGetCombinerInputParameterfvNV                               = 0;
	glGetCombinerInputParameterivNV                               = 0;
	glGetCombinerOutputParameterfvNV                              = 0;
	glGetCombinerOutputParameterivNV                              = 0;
	glGetFinalCombinerInputParameterfvNV                          = 0;
	glGetFinalCombinerInputParameterivNV                          = 0;


	// ****** GL_NV_register_combiners2 ******
	isGL_NV_register_combiners2                                   = false;

	glCombinerStageParameterfvNV                                  = 0;
	glGetCombinerStageParameterfvNV                               = 0;


	// ****** GL_NV_texgen_emboss ******
	isGL_NV_texgen_emboss                                         = false;


	// ****** GL_NV_texgen_reflection ******
	isGL_NV_texgen_reflection                                     = false;


	// ****** GL_NV_texture_compression_vtc ******
	isGL_NV_texture_compression_vtc                               = false;


	// ****** GL_NV_texture_env_combine4 ******
	isGL_NV_texture_env_combine4                                  = false;


	// ****** GL_NV_texture_expand_normal ******
	isGL_NV_texture_expand_normal                                 = false;


	// ****** GL_NV_texture_rectangle ******
	isGL_NV_texture_rectangle                                     = false;


	// ****** GL_NV_texture_shader ******
	isGL_NV_texture_shader                                        = false;


	// ****** GL_NV_texture_shader2 ******
	isGL_NV_texture_shader2                                       = false;


	// ****** GL_NV_texture_shader3 ******
	isGL_NV_texture_shader3                                       = false;


	// ****** GL_NV_transform_feedback ******
	isGL_NV_transform_feedback                                    = false;

	glBeginTransformFeedbackNV                                    = 0;
	glEndTransformFeedbackNV                                      = 0;
	glTransformFeedbackAttribsNV                                  = 0;
	glBindBufferRangeNV                                           = 0;
	glBindBufferOffsetNV                                          = 0;
	glBindBufferBaseNV                                            = 0;
	glTransformFeedbackVaryingsNV                                 = 0;
	glActiveVaryingNV                                             = 0;
	glGetVaryingLocationNV                                        = 0;
	glGetActiveVaryingNV                                          = 0;
	glGetTransformFeedbackVaryingNV                               = 0;


	// ****** GL_NV_vertex_array_range ******
	isGL_NV_vertex_array_range                                    = false;

	glFlushVertexArrayRangeNV                                     = 0;
	glVertexArrayRangeNV                                          = 0;


	// ****** GL_NV_vertex_array_range2 ******
	isGL_NV_vertex_array_range2                                   = false;


	// ****** GL_NV_vertex_program ******
	isGL_NV_vertex_program                                        = false;

	glAreProgramsResidentNV                                       = 0;
	glBindProgramNV                                               = 0;
	glDeleteProgramsNV                                            = 0;
	glExecuteProgramNV                                            = 0;
	glGenProgramsNV                                               = 0;
	glGetProgramParameterdvNV                                     = 0;
	glGetProgramParameterfvNV                                     = 0;
	glGetProgramivNV                                              = 0;
	glGetProgramStringNV                                          = 0;
	glGetTrackMatrixivNV                                          = 0;
	glGetVertexAttribdvNV                                         = 0;
	glGetVertexAttribfvNV                                         = 0;
	glGetVertexAttribivNV                                         = 0;
	glGetVertexAttribPointervNV                                   = 0;
	glIsProgramNV                                                 = 0;
	glLoadProgramNV                                               = 0;
	glProgramParameter4dNV                                        = 0;
	glProgramParameter4dvNV                                       = 0;
	glProgramParameter4fNV                                        = 0;
	glProgramParameter4fvNV                                       = 0;
	glProgramParameters4dvNV                                      = 0;
	glProgramParameters4fvNV                                      = 0;
	glRequestResidentProgramsNV                                   = 0;
	glTrackMatrixNV                                               = 0;
	glVertexAttribPointerNV                                       = 0;
	glVertexAttrib1dNV                                            = 0;
	glVertexAttrib1dvNV                                           = 0;
	glVertexAttrib1fNV                                            = 0;
	glVertexAttrib1fvNV                                           = 0;
	glVertexAttrib1sNV                                            = 0;
	glVertexAttrib1svNV                                           = 0;
	glVertexAttrib2dNV                                            = 0;
	glVertexAttrib2dvNV                                           = 0;
	glVertexAttrib2fNV                                            = 0;
	glVertexAttrib2fvNV                                           = 0;
	glVertexAttrib2sNV                                            = 0;
	glVertexAttrib2svNV                                           = 0;
	glVertexAttrib3dNV                                            = 0;
	glVertexAttrib3dvNV                                           = 0;
	glVertexAttrib3fNV                                            = 0;
	glVertexAttrib3fvNV                                           = 0;
	glVertexAttrib3sNV                                            = 0;
	glVertexAttrib3svNV                                           = 0;
	glVertexAttrib4dNV                                            = 0;
	glVertexAttrib4dvNV                                           = 0;
	glVertexAttrib4fNV                                            = 0;
	glVertexAttrib4fvNV                                           = 0;
	glVertexAttrib4sNV                                            = 0;
	glVertexAttrib4svNV                                           = 0;
	glVertexAttrib4ubNV                                           = 0;
	glVertexAttrib4ubvNV                                          = 0;
	glVertexAttribs1dvNV                                          = 0;
	glVertexAttribs1fvNV                                          = 0;
	glVertexAttribs1svNV                                          = 0;
	glVertexAttribs2dvNV                                          = 0;
	glVertexAttribs2fvNV                                          = 0;
	glVertexAttribs2svNV                                          = 0;
	glVertexAttribs3dvNV                                          = 0;
	glVertexAttribs3fvNV                                          = 0;
	glVertexAttribs3svNV                                          = 0;
	glVertexAttribs4dvNV                                          = 0;
	glVertexAttribs4fvNV                                          = 0;
	glVertexAttribs4svNV                                          = 0;
	glVertexAttribs4ubvNV                                         = 0;


	// ****** GL_NV_vertex_program1_1 ******
	isGL_NV_vertex_program1_1                                     = false;


	// ****** GL_NV_vertex_program2 ******
	isGL_NV_vertex_program2                                       = false;


	// ****** GL_NV_vertex_program2_option ******
	isGL_NV_vertex_program2_option                                = false;


	// ****** GL_NV_vertex_program3 ******
	isGL_NV_vertex_program3                                       = false;


	// ****** GL_NV_vertex_program4 ******
	isGL_NV_vertex_program4                                       = false;

	glVertexAttribI1iEXT                                          = 0;
	glVertexAttribI2iEXT                                          = 0;
	glVertexAttribI3iEXT                                          = 0;
	glVertexAttribI4iEXT                                          = 0;
	glVertexAttribI1uiEXT                                         = 0;
	glVertexAttribI2uiEXT                                         = 0;
	glVertexAttribI3uiEXT                                         = 0;
	glVertexAttribI4uiEXT                                         = 0;
	glVertexAttribI1ivEXT                                         = 0;
	glVertexAttribI2ivEXT                                         = 0;
	glVertexAttribI3ivEXT                                         = 0;
	glVertexAttribI4ivEXT                                         = 0;
	glVertexAttribI1uivEXT                                        = 0;
	glVertexAttribI2uivEXT                                        = 0;
	glVertexAttribI3uivEXT                                        = 0;
	glVertexAttribI4uivEXT                                        = 0;
	glVertexAttribI4bvEXT                                         = 0;
	glVertexAttribI4svEXT                                         = 0;
	glVertexAttribI4ubvEXT                                        = 0;
	glVertexAttribI4usvEXT                                        = 0;
	glVertexAttribIPointerEXT                                     = 0;
	glGetVertexAttribIivEXT                                       = 0;
	glGetVertexAttribIuivEXT                                      = 0;


	// ****** GL_OES_read_format ******
	isGL_OES_read_format                                          = false;


	// ****** GL_OML_interlace ******
	isGL_OML_interlace                                            = false;


	// ****** GL_OML_resample ******
	isGL_OML_resample                                             = false;


	// ****** GL_OML_subsample ******
	isGL_OML_subsample                                            = false;


	// ****** GL_PGI_misc_hints ******
	isGL_PGI_misc_hints                                           = false;
	glHintPGI                                                     = 0;


	// ****** GL_PGI_vertex_hints ******
	isGL_PGI_vertex_hints                                         = false;


	// ****** GL_REND_screen_coordinates ******
	isGL_REND_screen_coordinates                                  = false;


	// ****** GL_S3_s3tc ******
	isGL_S3_s3tc                                                  = false;


	// ****** GL_SGIS_detail_texture ******
	isGL_SGIS_detail_texture                                      = false;

	glDetailTexFuncSGIS                                           = 0;
	glGetDetailTexFuncSGIS                                        = 0;


	// ****** GL_SGIS_fog_function ******
	isGL_SGIS_fog_function                                        = false;

	glFogFuncSGIS                                                 = 0;
	glGetFogFuncSGIS                                              = 0;


	// ****** GL_SGIS_generate_mipmap ******
	isGL_SGIS_generate_mipmap                                     = false;


	// ****** GL_SGIS_multisample ******
	isGL_SGIS_multisample                                         = false;

	glSampleMaskSGIS                                              = 0;
	glSamplePatternSGIS                                           = 0;


	// ****** GL_SGIS_pixel_texture ******
	isGL_SGIS_pixel_texture                                       = false;

	glPixelTexGenParameteriSGIS                                   = 0;
	glPixelTexGenParameterivSGIS                                  = 0;
	glPixelTexGenParameterfSGIS                                   = 0;
	glPixelTexGenParameterfvSGIS                                  = 0;
	glGetPixelTexGenParameterivSGIS                               = 0;
	glGetPixelTexGenParameterfvSGIS                               = 0;


	// ****** GL_SGIS_point_line_texgen ******
	isGL_SGIS_point_line_texgen                                   = false;


	// ****** GL_SGIS_point_parameters ******
	isGL_SGIS_point_parameters                                    = false;

	glPointParameterfSGIS                                         = 0;
	glPointParameterfvSGIS                                        = 0;


	// ****** GL_SGIS_sharpen_texture ******
	isGL_SGIS_sharpen_texture                                     = false;

	glSharpenTexFuncSGIS                                          = 0;
	glGetSharpenTexFuncSGIS                                       = 0;


	// ****** GL_SGIS_texture4D ******
	isGL_SGIS_texture4D                                           = false;

	glTexImage4DSGIS                                              = 0;
	glTexSubImage4DSGIS                                           = 0;


	// ****** GL_SGIS_texture_border_clamp ******
	isGL_SGIS_texture_border_clamp                                = false;


	// ****** GL_SGIS_texture_color_mask ******
	isGL_SGIS_texture_color_mask                                  = false;
	glTextureColorMaskSGIS                                        = 0;


	// ****** GL_SGIS_texture_edge_clamp ******
	isGL_SGIS_texture_edge_clamp                                  = false;


	// ****** GL_SGIS_texture_filter4 ******
	isGL_SGIS_texture_filter4                                     = false;

	glGetTexFilterFuncSGIS                                        = 0;
	glTexFilterFuncSGIS                                           = 0;


	// ****** GL_SGIS_texture_lod ******
	isGL_SGIS_texture_lod                                         = false;


	// ****** GL_SGIS_texture_select ******
	isGL_SGIS_texture_select                                      = false;


	// ****** GL_SGIX_async ******
	isGL_SGIX_async                                               = false;

	glAsyncMarkerSGIX                                             = 0;
	glFinishAsyncSGIX                                             = 0;
	glPollAsyncSGIX                                               = 0;
	glGenAsyncMarkersSGIX                                         = 0;
	glDeleteAsyncMarkersSGIX                                      = 0;
	glIsAsyncMarkerSGIX                                           = 0;


	// ****** GL_SGIX_async_histogram ******
	isGL_SGIX_async_histogram                                     = false;


	// ****** GL_SGIX_async_pixel ******
	isGL_SGIX_async_pixel                                         = false;


	// ****** GL_SGIX_blend_alpha_minmax ******
	isGL_SGIX_blend_alpha_minmax                                  = false;


	// ****** GL_SGIX_calligraphic_fragment ******
	isGL_SGIX_calligraphic_fragment                               = false;


	// ****** GL_SGIX_clipmap ******
	isGL_SGIX_clipmap                                             = false;


	// ****** GL_SGIX_convolution_accuracy ******
	isGL_SGIX_convolution_accuracy                                = false;


	// ****** GL_SGIX_depth_pass_instrument ******
	isGL_SGIX_depth_pass_instrument                               = false;


	// ****** GL_SGIX_depth_texture ******
	isGL_SGIX_depth_texture                                       = false;


	// ****** GL_SGIX_flush_raster ******
	isGL_SGIX_flush_raster                                        = false;
	glFlushRasterSGIX                                             = 0;


	// ****** GL_SGIX_fog_offset ******
	isGL_SGIX_fog_offset                                          = false;


	// ****** GL_SGIX_fog_scale ******
	isGL_SGIX_fog_scale                                           = false;


	// ****** GL_SGIX_fragment_lighting ******
	isGL_SGIX_fragment_lighting                                   = false;

	glFragmentColorMaterialSGIX                                   = 0;
	glFragmentLightfSGIX                                          = 0;
	glFragmentLightfvSGIX                                         = 0;
	glFragmentLightiSGIX                                          = 0;
	glFragmentLightivSGIX                                         = 0;
	glFragmentLightModelfSGIX                                     = 0;
	glFragmentLightModelfvSGIX                                    = 0;
	glFragmentLightModeliSGIX                                     = 0;
	glFragmentLightModelivSGIX                                    = 0;
	glFragmentMaterialfSGIX                                       = 0;
	glFragmentMaterialfvSGIX                                      = 0;
	glFragmentMaterialiSGIX                                       = 0;
	glFragmentMaterialivSGIX                                      = 0;
	glGetFragmentLightfvSGIX                                      = 0;
	glGetFragmentLightivSGIX                                      = 0;
	glGetFragmentMaterialfvSGIX                                   = 0;
	glGetFragmentMaterialivSGIX                                   = 0;
	glLightEnviSGIX                                               = 0;


	// ****** GL_SGIX_framezoom ******
	isGL_SGIX_framezoom                                           = false;
	glFrameZoomSGIX                                               = 0;


	// ****** GL_SGIX_igloo_interface ******
	isGL_SGIX_igloo_interface                                     = false;
	glIglooInterfaceSGIX                                          = 0;


	// ****** GL_SGIX_impact_pixel_texture ******
	isGL_SGIX_impact_pixel_texture                                = false;


	// ****** GL_SGIX_instruments ******
	isGL_SGIX_instruments                                         = false;

	glGetInstrumentsSGIX                                          = 0;
	glInstrumentsBufferSGIX                                       = 0;
	glPollInstrumentsSGIX                                         = 0;
	glReadInstrumentsSGIX                                         = 0;
	glStartInstrumentsSGIX                                        = 0;
	glStopInstrumentsSGIX                                         = 0;


	// ****** GL_SGIX_interlace ******
	isGL_SGIX_interlace                                           = false;


	// ****** GL_SGIX_ir_instrument1 ******
	isGL_SGIX_ir_instrument1                                      = false;


	// ****** GL_SGIX_list_priority ******
	isGL_SGIX_list_priority                                       = false;

	glGetListParameterfvSGIX                                      = 0;
	glGetListParameterivSGIX                                      = 0;
	glListParameterfSGIX                                          = 0;
	glListParameterfvSGIX                                         = 0;
	glListParameteriSGIX                                          = 0;
	glListParameterivSGIX                                         = 0;


	// ****** GL_SGIX_pixel_texture ******
	isGL_SGIX_pixel_texture                                       = false;
	glPixelTexGenSGIX                                             = 0;


	// ****** GL_SGIX_pixel_tiles ******
	isGL_SGIX_pixel_tiles                                         = false;


	// ****** GL_SGIX_polynomial_ffd ******
	isGL_SGIX_polynomial_ffd                                      = false;

	glDeformationMap3dSGIX                                        = 0;
	glDeformationMap3fSGIX                                        = 0;
	glDeformSGIX                                                  = 0;
	glLoadIdentityDeformationMapSGIX                              = 0;


	// ****** GL_SGIX_reference_plane ******
	isGL_SGIX_reference_plane                                     = false;
	glReferencePlaneSGIX                                          = 0;


	// ****** GL_SGIX_resample ******
	isGL_SGIX_resample                                            = false;


	// ****** GL_SGIX_scalebias_hint ******
	isGL_SGIX_scalebias_hint                                      = false;


	// ****** GL_SGIX_shadow ******
	isGL_SGIX_shadow                                              = false;


	// ****** GL_SGIX_shadow_ambient ******
	isGL_SGIX_shadow_ambient                                      = false;


	// ****** GL_SGIX_sprite ******
	isGL_SGIX_sprite                                              = false;

	glSpriteParameterfSGIX                                        = 0;
	glSpriteParameterfvSGIX                                       = 0;
	glSpriteParameteriSGIX                                        = 0;
	glSpriteParameterivSGIX                                       = 0;


	// ****** GL_SGIX_subsample ******
	isGL_SGIX_subsample                                           = false;


	// ****** GL_SGIX_tag_sample_buffer ******
	isGL_SGIX_tag_sample_buffer                                   = false;
	glTagSampleBufferSGIX                                         = 0;


	// ****** GL_SGIX_texture_add_env ******
	isGL_SGIX_texture_add_env                                     = false;


	// ****** GL_SGIX_texture_coordinate_clamp ******
	isGL_SGIX_texture_coordinate_clamp                            = false;


	// ****** GL_SGIX_texture_lod_bias ******
	isGL_SGIX_texture_lod_bias                                    = false;


	// ****** GL_SGIX_texture_multi_buffer ******
	isGL_SGIX_texture_multi_buffer                                = false;


	// ****** GL_SGIX_texture_scale_bias ******
	isGL_SGIX_texture_scale_bias                                  = false;


	// ****** GL_SGIX_texture_select ******
	isGL_SGIX_texture_select                                      = false;


	// ****** GL_SGIX_vertex_preclip ******
	isGL_SGIX_vertex_preclip                                      = false;


	// ****** GL_SGIX_ycrcb ******
	isGL_SGIX_ycrcb                                               = false;


	// ****** GL_SGIX_ycrcb_subsample ******
	isGL_SGIX_ycrcb_subsample                                     = false;


	// ****** GL_SGIX_ycrcba ******
	isGL_SGIX_ycrcba                                              = false;


	// ****** GL_SGI_color_matrix ******
	isGL_SGI_color_matrix                                         = false;


	// ****** GL_SGI_color_table ******
	isGL_SGI_color_table                                          = false;

	glColorTableSGI                                               = 0;
	glColorTableParameterfvSGI                                    = 0;
	glColorTableParameterivSGI                                    = 0;
	glCopyColorTableSGI                                           = 0;
	glGetColorTableSGI                                            = 0;
	glGetColorTableParameterfvSGI                                 = 0;
	glGetColorTableParameterivSGI                                 = 0;


	// ****** GL_SGI_depth_pass_instrument ******
	isGL_SGI_depth_pass_instrument                                = false;


	// ****** GL_SGI_texture_color_table ******
	isGL_SGI_texture_color_table                                  = false;


	// ****** GL_SUNX_constant_data ******
	isGL_SUNX_constant_data                                       = false;
	glFinishTextureSUNX                                           = 0;


	// ****** GL_SUN_convolution_border_modes ******
	isGL_SUN_convolution_border_modes                             = false;


	// ****** GL_SUN_global_alpha ******
	isGL_SUN_global_alpha                                         = false;

	glGlobalAlphaFactorbSUN                                       = 0;
	glGlobalAlphaFactorsSUN                                       = 0;
	glGlobalAlphaFactoriSUN                                       = 0;
	glGlobalAlphaFactorfSUN                                       = 0;
	glGlobalAlphaFactordSUN                                       = 0;
	glGlobalAlphaFactorubSUN                                      = 0;
	glGlobalAlphaFactorusSUN                                      = 0;
	glGlobalAlphaFactoruiSUN                                      = 0;


	// ****** GL_SUN_mesh_array ******
	isGL_SUN_mesh_array                                           = false;
	glDrawMeshArraysSUN                                           = 0;


	// ****** GL_SUN_slice_accum ******
	isGL_SUN_slice_accum                                          = false;


	// ****** GL_SUN_triangle_list ******
	isGL_SUN_triangle_list                                        = false;

	glReplacementCodeuiSUN                                        = 0;
	glReplacementCodeusSUN                                        = 0;
	glReplacementCodeubSUN                                        = 0;
	glReplacementCodeuivSUN                                       = 0;
	glReplacementCodeusvSUN                                       = 0;
	glReplacementCodeubvSUN                                       = 0;
	glReplacementCodePointerSUN                                   = 0;


	// ****** GL_SUN_vertex ******
	isGL_SUN_vertex                                               = false;

	glColor4ubVertex2fSUN                                         = 0;
	glColor4ubVertex2fvSUN                                        = 0;
	glColor4ubVertex3fSUN                                         = 0;
	glColor4ubVertex3fvSUN                                        = 0;
	glColor3fVertex3fSUN                                          = 0;
	glColor3fVertex3fvSUN                                         = 0;
	glNormal3fVertex3fSUN                                         = 0;
	glNormal3fVertex3fvSUN                                        = 0;
	glColor4fNormal3fVertex3fSUN                                  = 0;
	glColor4fNormal3fVertex3fvSUN                                 = 0;
	glTexCoord2fVertex3fSUN                                       = 0;
	glTexCoord2fVertex3fvSUN                                      = 0;
	glTexCoord4fVertex4fSUN                                       = 0;
	glTexCoord4fVertex4fvSUN                                      = 0;
	glTexCoord2fColor4ubVertex3fSUN                               = 0;
	glTexCoord2fColor4ubVertex3fvSUN                              = 0;
	glTexCoord2fColor3fVertex3fSUN                                = 0;
	glTexCoord2fColor3fVertex3fvSUN                               = 0;
	glTexCoord2fNormal3fVertex3fSUN                               = 0;
	glTexCoord2fNormal3fVertex3fvSUN                              = 0;
	glTexCoord2fColor4fNormal3fVertex3fSUN                        = 0;
	glTexCoord2fColor4fNormal3fVertex3fvSUN                       = 0;
	glTexCoord4fColor4fNormal3fVertex4fSUN                        = 0;
	glTexCoord4fColor4fNormal3fVertex4fvSUN                       = 0;
	glReplacementCodeuiVertex3fSUN                                = 0;
	glReplacementCodeuiVertex3fvSUN                               = 0;
	glReplacementCodeuiColor4ubVertex3fSUN                        = 0;
	glReplacementCodeuiColor4ubVertex3fvSUN                       = 0;
	glReplacementCodeuiColor3fVertex3fSUN                         = 0;
	glReplacementCodeuiColor3fVertex3fvSUN                        = 0;
	glReplacementCodeuiNormal3fVertex3fSUN                        = 0;
	glReplacementCodeuiNormal3fVertex3fvSUN                       = 0;
	glReplacementCodeuiColor4fNormal3fVertex3fSUN                 = 0;
	glReplacementCodeuiColor4fNormal3fVertex3fvSUN                = 0;
	glReplacementCodeuiTexCoord2fVertex3fSUN                      = 0;
	glReplacementCodeuiTexCoord2fVertex3fvSUN                     = 0;
	glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN              = 0;
	glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN             = 0;
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN       = 0;
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN      = 0;


	// ****** GL_VERSION_1_2 ******
	isGL_VERSION_1_2                                              = false;

	glBlendColor                                                  = 0;
	glBlendEquation                                               = 0;
	glDrawRangeElements                                           = 0;
	glColorTable                                                  = 0;
	glColorTableParameterfv                                       = 0;
	glColorTableParameteriv                                       = 0;
	glCopyColorTable                                              = 0;
	glGetColorTable                                               = 0;
	glGetColorTableParameterfv                                    = 0;
	glGetColorTableParameteriv                                    = 0;
	glColorSubTable                                               = 0;
	glCopyColorSubTable                                           = 0;
	glConvolutionFilter1D                                         = 0;
	glConvolutionFilter2D                                         = 0;
	glConvolutionParameterf                                       = 0;
	glConvolutionParameterfv                                      = 0;
	glConvolutionParameteri                                       = 0;
	glConvolutionParameteriv                                      = 0;
	glCopyConvolutionFilter1D                                     = 0;
	glCopyConvolutionFilter2D                                     = 0;
	glGetConvolutionFilter                                        = 0;
	glGetConvolutionParameterfv                                   = 0;
	glGetConvolutionParameteriv                                   = 0;
	glGetSeparableFilter                                          = 0;
	glSeparableFilter2D                                           = 0;
	glGetHistogram                                                = 0;
	glGetHistogramParameterfv                                     = 0;
	glGetHistogramParameteriv                                     = 0;
	glGetMinmax                                                   = 0;
	glGetMinmaxParameterfv                                        = 0;
	glGetMinmaxParameteriv                                        = 0;
	glHistogram                                                   = 0;
	glMinmax                                                      = 0;
	glResetHistogram                                              = 0;
	glResetMinmax                                                 = 0;
	glTexImage3D                                                  = 0;
	glTexSubImage3D                                               = 0;
	glCopyTexSubImage3D                                           = 0;


	// ****** GL_VERSION_1_3 ******
	isGL_VERSION_1_3                                              = false;

	glActiveTexture                                               = 0;
	glClientActiveTexture                                         = 0;
	glMultiTexCoord1d                                             = 0;
	glMultiTexCoord1dv                                            = 0;
	glMultiTexCoord1f                                             = 0;
	glMultiTexCoord1fv                                            = 0;
	glMultiTexCoord1i                                             = 0;
	glMultiTexCoord1iv                                            = 0;
	glMultiTexCoord1s                                             = 0;
	glMultiTexCoord1sv                                            = 0;
	glMultiTexCoord2d                                             = 0;
	glMultiTexCoord2dv                                            = 0;
	glMultiTexCoord2f                                             = 0;
	glMultiTexCoord2fv                                            = 0;
	glMultiTexCoord2i                                             = 0;
	glMultiTexCoord2iv                                            = 0;
	glMultiTexCoord2s                                             = 0;
	glMultiTexCoord2sv                                            = 0;
	glMultiTexCoord3d                                             = 0;
	glMultiTexCoord3dv                                            = 0;
	glMultiTexCoord3f                                             = 0;
	glMultiTexCoord3fv                                            = 0;
	glMultiTexCoord3i                                             = 0;
	glMultiTexCoord3iv                                            = 0;
	glMultiTexCoord3s                                             = 0;
	glMultiTexCoord3sv                                            = 0;
	glMultiTexCoord4d                                             = 0;
	glMultiTexCoord4dv                                            = 0;
	glMultiTexCoord4f                                             = 0;
	glMultiTexCoord4fv                                            = 0;
	glMultiTexCoord4i                                             = 0;
	glMultiTexCoord4iv                                            = 0;
	glMultiTexCoord4s                                             = 0;
	glMultiTexCoord4sv                                            = 0;
	glLoadTransposeMatrixf                                        = 0;
	glLoadTransposeMatrixd                                        = 0;
	glMultTransposeMatrixf                                        = 0;
	glMultTransposeMatrixd                                        = 0;
	glSampleCoverage                                              = 0;
	glCompressedTexImage3D                                        = 0;
	glCompressedTexImage2D                                        = 0;
	glCompressedTexImage1D                                        = 0;
	glCompressedTexSubImage3D                                     = 0;
	glCompressedTexSubImage2D                                     = 0;
	glCompressedTexSubImage1D                                     = 0;
	glGetCompressedTexImage                                       = 0;


	// ****** GL_VERSION_1_4 ******
	isGL_VERSION_1_4                                              = false;

	glBlendFuncSeparate                                           = 0;
	glFogCoordf                                                   = 0;
	glFogCoordfv                                                  = 0;
	glFogCoordd                                                   = 0;
	glFogCoorddv                                                  = 0;
	glFogCoordPointer                                             = 0;
	glMultiDrawArrays                                             = 0;
	glMultiDrawElements                                           = 0;
	glPointParameterf                                             = 0;
	glPointParameterfv                                            = 0;
	glPointParameteri                                             = 0;
	glPointParameteriv                                            = 0;
	glSecondaryColor3b                                            = 0;
	glSecondaryColor3bv                                           = 0;
	glSecondaryColor3d                                            = 0;
	glSecondaryColor3dv                                           = 0;
	glSecondaryColor3f                                            = 0;
	glSecondaryColor3fv                                           = 0;
	glSecondaryColor3i                                            = 0;
	glSecondaryColor3iv                                           = 0;
	glSecondaryColor3s                                            = 0;
	glSecondaryColor3sv                                           = 0;
	glSecondaryColor3ub                                           = 0;
	glSecondaryColor3ubv                                          = 0;
	glSecondaryColor3ui                                           = 0;
	glSecondaryColor3uiv                                          = 0;
	glSecondaryColor3us                                           = 0;
	glSecondaryColor3usv                                          = 0;
	glSecondaryColorPointer                                       = 0;
	glWindowPos2d                                                 = 0;
	glWindowPos2dv                                                = 0;
	glWindowPos2f                                                 = 0;
	glWindowPos2fv                                                = 0;
	glWindowPos2i                                                 = 0;
	glWindowPos2iv                                                = 0;
	glWindowPos2s                                                 = 0;
	glWindowPos2sv                                                = 0;
	glWindowPos3d                                                 = 0;
	glWindowPos3dv                                                = 0;
	glWindowPos3f                                                 = 0;
	glWindowPos3fv                                                = 0;
	glWindowPos3i                                                 = 0;
	glWindowPos3iv                                                = 0;
	glWindowPos3s                                                 = 0;
	glWindowPos3sv                                                = 0;


	// ****** GL_VERSION_1_5 ******
	isGL_VERSION_1_5                                              = false;

	glGenQueries                                                  = 0;
	glDeleteQueries                                               = 0;
	glIsQuery                                                     = 0;
	glBeginQuery                                                  = 0;
	glEndQuery                                                    = 0;
	glGetQueryiv                                                  = 0;
	glGetQueryObjectiv                                            = 0;
	glGetQueryObjectuiv                                           = 0;
	glBindBuffer                                                  = 0;
	glDeleteBuffers                                               = 0;
	glGenBuffers                                                  = 0;
	glIsBuffer                                                    = 0;
	glBufferData                                                  = 0;
	glBufferSubData                                               = 0;
	glGetBufferSubData                                            = 0;
	glMapBuffer                                                   = 0;
	glUnmapBuffer                                                 = 0;
	glGetBufferParameteriv                                        = 0;
	glGetBufferPointerv                                           = 0;


	// ****** GL_VERSION_2_0 ******
	isGL_VERSION_2_0                                              = false;

	glBlendEquationSeparate                                       = 0;
	glDrawBuffers                                                 = 0;
	glStencilOpSeparate                                           = 0;
	glStencilFuncSeparate                                         = 0;
	glStencilMaskSeparate                                         = 0;
	glAttachShader                                                = 0;
	glBindAttribLocation                                          = 0;
	glCompileShader                                               = 0;
	glCreateProgram                                               = 0;
	glCreateShader                                                = 0;
	glDeleteProgram                                               = 0;
	glDeleteShader                                                = 0;
	glDetachShader                                                = 0;
	glDisableVertexAttribArray                                    = 0;
	glEnableVertexAttribArray                                     = 0;
	glGetActiveAttrib                                             = 0;
	glGetActiveUniform                                            = 0;
	glGetAttachedShaders                                          = 0;
	glGetAttribLocation                                           = 0;
	glGetProgramiv                                                = 0;
	glGetProgramInfoLog                                           = 0;
	glGetShaderiv                                                 = 0;
	glGetShaderInfoLog                                            = 0;
	glGetShaderSource                                             = 0;
	glGetUniformLocation                                          = 0;
	glGetUniformfv                                                = 0;
	glGetUniformiv                                                = 0;
	glGetVertexAttribdv                                           = 0;
	glGetVertexAttribfv                                           = 0;
	glGetVertexAttribiv                                           = 0;
	glGetVertexAttribPointerv                                     = 0;
	glIsProgram                                                   = 0;
	glIsShader                                                    = 0;
	glLinkProgram                                                 = 0;
	glShaderSource                                                = 0;
	glUseProgram                                                  = 0;
	glUniform1f                                                   = 0;
	glUniform2f                                                   = 0;
	glUniform3f                                                   = 0;
	glUniform4f                                                   = 0;
	glUniform1i                                                   = 0;
	glUniform2i                                                   = 0;
	glUniform3i                                                   = 0;
	glUniform4i                                                   = 0;
	glUniform1fv                                                  = 0;
	glUniform2fv                                                  = 0;
	glUniform3fv                                                  = 0;
	glUniform4fv                                                  = 0;
	glUniform1iv                                                  = 0;
	glUniform2iv                                                  = 0;
	glUniform3iv                                                  = 0;
	glUniform4iv                                                  = 0;
	glUniformMatrix2fv                                            = 0;
	glUniformMatrix3fv                                            = 0;
	glUniformMatrix4fv                                            = 0;
	glValidateProgram                                             = 0;
	glVertexAttrib1d                                              = 0;
	glVertexAttrib1dv                                             = 0;
	glVertexAttrib1f                                              = 0;
	glVertexAttrib1fv                                             = 0;
	glVertexAttrib1s                                              = 0;
	glVertexAttrib1sv                                             = 0;
	glVertexAttrib2d                                              = 0;
	glVertexAttrib2dv                                             = 0;
	glVertexAttrib2f                                              = 0;
	glVertexAttrib2fv                                             = 0;
	glVertexAttrib2s                                              = 0;
	glVertexAttrib2sv                                             = 0;
	glVertexAttrib3d                                              = 0;
	glVertexAttrib3dv                                             = 0;
	glVertexAttrib3f                                              = 0;
	glVertexAttrib3fv                                             = 0;
	glVertexAttrib3s                                              = 0;
	glVertexAttrib3sv                                             = 0;
	glVertexAttrib4Nbv                                            = 0;
	glVertexAttrib4Niv                                            = 0;
	glVertexAttrib4Nsv                                            = 0;
	glVertexAttrib4Nub                                            = 0;
	glVertexAttrib4Nubv                                           = 0;
	glVertexAttrib4Nuiv                                           = 0;
	glVertexAttrib4Nusv                                           = 0;
	glVertexAttrib4bv                                             = 0;
	glVertexAttrib4d                                              = 0;
	glVertexAttrib4dv                                             = 0;
	glVertexAttrib4f                                              = 0;
	glVertexAttrib4fv                                             = 0;
	glVertexAttrib4iv                                             = 0;
	glVertexAttrib4s                                              = 0;
	glVertexAttrib4sv                                             = 0;
	glVertexAttrib4ubv                                            = 0;
	glVertexAttrib4uiv                                            = 0;
	glVertexAttrib4usv                                            = 0;
	glVertexAttribPointer                                         = 0;


	// ****** GL_VERSION_2_1 ******
	isGL_VERSION_2_1                                              = false;

	glUniformMatrix2x3fv                                          = 0;
	glUniformMatrix3x2fv                                          = 0;
	glUniformMatrix2x4fv                                          = 0;
	glUniformMatrix4x2fv                                          = 0;
	glUniformMatrix3x4fv                                          = 0;
	glUniformMatrix4x3fv                                          = 0;


	// ****** GL_WIN_phong_shading ******
	isGL_WIN_phong_shading                                        = false;


	// ****** GL_WIN_specular_fog ******
	isGL_WIN_specular_fog                                         = false;

} // clear()


void OpenGLExtensionsGen::initialize()
{
	assert( m_initializedExtensionCount		== 0	&& "call clear() before initialize()" );
	assert( m_initializedProcCount			== 0	&& "call clear() before initialize()" );
	assert( m_initializedExtensions.size()	== 0	&& "call clear() before initialize()" );

	// Statistics
	std::vector< std::string > extensions	= getExtensionsVector();
	std::vector< std::string > wextensions	= getWExtensionsVector();

	// *** Informations from drivers ***
	logEndl("Drivers informations :");
	logEndl( getInformations( 3 ) );
	logEndl("");

	// *** Informations from gle ***
	logEndl("gle detailed informations :");


	initializeGL_3DFX();


	initializeGL_APPLE();


	initializeGL_ARB();


	initializeGL_ATI();


	initializeGL_EXT();


	initializeGL_FfdMaskSGIX();


	initializeGL_GREMEDY();


	initializeGL_HP();


	initializeGL_IBM();


	initializeGL_INGR();


	initializeGL_INTEL();


	initializeGL_MESA();


	initializeGL_MESAX();


	initializeGL_NV();


	initializeGL_OES();


	initializeGL_OML();


	initializeGL_PGI();


	initializeGL_REND();


	initializeGL_S3();


	initializeGL_SGI();


	initializeGL_SGIS();


	initializeGL_SGIX();


	initializeGL_SUN();


	initializeGL_SUNX();


	initializeGL_VERSION();


	initializeGL_WIN();


	initializeNot_in_OpenGL_Extension_Registry();

	logEndl("");
	logEndl("gle informations :");
	
	std::stringstream strStream;
	strStream << m_initializedExtensionCount << "/" << m_supportedExtensionCount << " extensions initialized, ";
	strStream << m_initializedProcCount << "/" << m_supportedProcCount << " procedure pointers initialized." << std::ends;
	logEndl( strStream.str() );

	std::stringstream strStream2;
	strStream2 << m_initializedExtensionCount << "/" << static_cast<int>(extensions.size() + wextensions.size());
	strStream2 << " (" << 100.f * static_cast<float>(m_initializedExtensionCount)/static_cast<float>(extensions.size() + wextensions.size());
	strStream2 << "%) extensions initialized." << std::ends;
	logEndl( strStream2.str() );

	// gleInitializedExtensions
	std::vector< std::string > gleInitializedExtensions( m_initializedExtensions );
	
	std::stable_sort( gleInitializedExtensions.begin(), gleInitializedExtensions.end() );

	logEndl("Initialized extensions :");	
	log( gleInitializedExtensions );
	logEndl("");

	// driversAllExtensions
	std::vector< std::string > driversAllExtensions( getExtensionsVector() );
	std::vector< std::string > driversWExtensions(	getWExtensionsVector() );
	driversAllExtensions.insert( driversAllExtensions.end(), driversWExtensions.begin(), driversWExtensions.end() );

	std::stable_sort( driversAllExtensions.begin(), driversAllExtensions.end() );
	
	// difference.
	logEndl("Extensions not initialized but exposed by drivers (should be empty :)");

	std::vector< std::string >	difference;
	
	std::insert_iterator< std::vector< std::string > > differenceInserter( difference, difference.begin() );
	
	std::set_difference(	driversAllExtensions.begin(), driversAllExtensions.end(),
								gleInitializedExtensions.begin(), gleInitializedExtensions.end(),
								differenceInserter );
								
	log( difference );
	logEndl("");
}


void OpenGLExtensionsGen::initializeGL_3DFX()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_3DFX_multisample ******
	
	isGL_3DFX_multisample = isExtensionSupported("GL_3DFX_multisample");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_3DFX_multisample )
	{
		std::stringstream strStream;
		strStream << "GL_3DFX_multisample                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_3DFX_multisample                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_3DFX_multisample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_3DFX_multisample                                         : not detected." );
	}
	
	// ****** GL_3DFX_tbuffer ******
	
	isGL_3DFX_tbuffer = isExtensionSupported("GL_3DFX_tbuffer");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_3DFX_tbuffer ) // || isSEDEnable()
	{

		glTbufferMask3DFX = (PFNGLTBUFFERMASK3DFXPROC) getExtensionPtr( "glTbufferMask3DFX" );
		if ( glTbufferMask3DFX != 0 )	++localInitializedProcCount;
	} // if ( isGL_3DFX_tbuffer || isSEDEnable() )
	
	if ( isGL_3DFX_tbuffer )
	{
		std::stringstream strStream;
		strStream << "GL_3DFX_tbuffer                                             : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_3DFX_tbuffer                                             : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_3DFX_tbuffer") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_3DFX_tbuffer                                             : not detected." );
	}
	
	// ****** GL_3DFX_texture_compression_FXT1 ******
	
	isGL_3DFX_texture_compression_FXT1 = isExtensionSupported("GL_3DFX_texture_compression_FXT1");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_3DFX_texture_compression_FXT1 )
	{
		std::stringstream strStream;
		strStream << "GL_3DFX_texture_compression_FXT1                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_3DFX_texture_compression_FXT1                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_3DFX_texture_compression_FXT1") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_3DFX_texture_compression_FXT1                            : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_APPLE()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_APPLE_client_storage ******
	
	isGL_APPLE_client_storage = isExtensionSupported("GL_APPLE_client_storage");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_APPLE_client_storage )
	{
		std::stringstream strStream;
		strStream << "GL_APPLE_client_storage                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_APPLE_client_storage                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_APPLE_client_storage") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_APPLE_client_storage                                     : not detected." );
	}
	
	// ****** GL_APPLE_element_array ******
	
	isGL_APPLE_element_array = isExtensionSupported("GL_APPLE_element_array");
	
	localSupportedProcCount		= 5;
	localInitializedProcCount	= 0;
	
	if ( isGL_APPLE_element_array ) // || isSEDEnable()
	{

		glElementPointerAPPLE = (PFNGLELEMENTPOINTERAPPLEPROC) getExtensionPtr( "glElementPointerAPPLE" );
		if ( glElementPointerAPPLE != 0 )	++localInitializedProcCount;

		glDrawElementArrayAPPLE = (PFNGLDRAWELEMENTARRAYAPPLEPROC) getExtensionPtr( "glDrawElementArrayAPPLE" );
		if ( glDrawElementArrayAPPLE != 0 )	++localInitializedProcCount;

		glDrawRangeElementArrayAPPLE = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC) getExtensionPtr( "glDrawRangeElementArrayAPPLE" );
		if ( glDrawRangeElementArrayAPPLE != 0 )	++localInitializedProcCount;

		glMultiDrawElementArrayAPPLE = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC) getExtensionPtr( "glMultiDrawElementArrayAPPLE" );
		if ( glMultiDrawElementArrayAPPLE != 0 )	++localInitializedProcCount;

		glMultiDrawRangeElementArrayAPPLE = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC) getExtensionPtr( "glMultiDrawRangeElementArrayAPPLE" );
		if ( glMultiDrawRangeElementArrayAPPLE != 0 )	++localInitializedProcCount;
	} // if ( isGL_APPLE_element_array || isSEDEnable() )
	
	if ( isGL_APPLE_element_array )
	{
		std::stringstream strStream;
		strStream << "GL_APPLE_element_array                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_APPLE_element_array                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_APPLE_element_array") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_APPLE_element_array                                      : not detected." );
	}
	
	// ****** GL_APPLE_fence ******
	
	isGL_APPLE_fence = isExtensionSupported("GL_APPLE_fence");
	
	localSupportedProcCount		= 8;
	localInitializedProcCount	= 0;
	
	if ( isGL_APPLE_fence ) // || isSEDEnable()
	{

		glGenFencesAPPLE = (PFNGLGENFENCESAPPLEPROC) getExtensionPtr( "glGenFencesAPPLE" );
		if ( glGenFencesAPPLE != 0 )	++localInitializedProcCount;

		glDeleteFencesAPPLE = (PFNGLDELETEFENCESAPPLEPROC) getExtensionPtr( "glDeleteFencesAPPLE" );
		if ( glDeleteFencesAPPLE != 0 )	++localInitializedProcCount;

		glSetFenceAPPLE = (PFNGLSETFENCEAPPLEPROC) getExtensionPtr( "glSetFenceAPPLE" );
		if ( glSetFenceAPPLE != 0 )	++localInitializedProcCount;

		glIsFenceAPPLE = (PFNGLISFENCEAPPLEPROC) getExtensionPtr( "glIsFenceAPPLE" );
		if ( glIsFenceAPPLE != 0 )	++localInitializedProcCount;

		glTestFenceAPPLE = (PFNGLTESTFENCEAPPLEPROC) getExtensionPtr( "glTestFenceAPPLE" );
		if ( glTestFenceAPPLE != 0 )	++localInitializedProcCount;

		glFinishFenceAPPLE = (PFNGLFINISHFENCEAPPLEPROC) getExtensionPtr( "glFinishFenceAPPLE" );
		if ( glFinishFenceAPPLE != 0 )	++localInitializedProcCount;

		glTestObjectAPPLE = (PFNGLTESTOBJECTAPPLEPROC) getExtensionPtr( "glTestObjectAPPLE" );
		if ( glTestObjectAPPLE != 0 )	++localInitializedProcCount;

		glFinishObjectAPPLE = (PFNGLFINISHOBJECTAPPLEPROC) getExtensionPtr( "glFinishObjectAPPLE" );
		if ( glFinishObjectAPPLE != 0 )	++localInitializedProcCount;
	} // if ( isGL_APPLE_fence || isSEDEnable() )
	
	if ( isGL_APPLE_fence )
	{
		std::stringstream strStream;
		strStream << "GL_APPLE_fence                                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_APPLE_fence                                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_APPLE_fence") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_APPLE_fence                                              : not detected." );
	}
	
	// ****** GL_APPLE_flush_buffer_range ******
	
	isGL_APPLE_flush_buffer_range = isExtensionSupported("GL_APPLE_flush_buffer_range");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_APPLE_flush_buffer_range ) // || isSEDEnable()
	{

		glBufferParameteriAPPLE = (PFNGLBUFFERPARAMETERIAPPLEPROC) getExtensionPtr( "glBufferParameteriAPPLE" );
		if ( glBufferParameteriAPPLE != 0 )	++localInitializedProcCount;

		glFlushMappedBufferRangeAPPLE = (PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC) getExtensionPtr( "glFlushMappedBufferRangeAPPLE" );
		if ( glFlushMappedBufferRangeAPPLE != 0 )	++localInitializedProcCount;
	} // if ( isGL_APPLE_flush_buffer_range || isSEDEnable() )
	
	if ( isGL_APPLE_flush_buffer_range )
	{
		std::stringstream strStream;
		strStream << "GL_APPLE_flush_buffer_range                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_APPLE_flush_buffer_range                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_APPLE_flush_buffer_range") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_APPLE_flush_buffer_range                                 : not detected." );
	}
	
	// ****** GL_APPLE_specular_vector ******
	
	isGL_APPLE_specular_vector = isExtensionSupported("GL_APPLE_specular_vector");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_APPLE_specular_vector )
	{
		std::stringstream strStream;
		strStream << "GL_APPLE_specular_vector                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_APPLE_specular_vector                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_APPLE_specular_vector") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_APPLE_specular_vector                                    : not detected." );
	}
	
	// ****** GL_APPLE_transform_hint ******
	
	isGL_APPLE_transform_hint = isExtensionSupported("GL_APPLE_transform_hint");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_APPLE_transform_hint )
	{
		std::stringstream strStream;
		strStream << "GL_APPLE_transform_hint                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_APPLE_transform_hint                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_APPLE_transform_hint") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_APPLE_transform_hint                                     : not detected." );
	}
	
	// ****** GL_APPLE_vertex_array_object ******
	
	isGL_APPLE_vertex_array_object = isExtensionSupported("GL_APPLE_vertex_array_object");
	
	localSupportedProcCount		= 4;
	localInitializedProcCount	= 0;
	
	if ( isGL_APPLE_vertex_array_object ) // || isSEDEnable()
	{

		glBindVertexArrayAPPLE = (PFNGLBINDVERTEXARRAYAPPLEPROC) getExtensionPtr( "glBindVertexArrayAPPLE" );
		if ( glBindVertexArrayAPPLE != 0 )	++localInitializedProcCount;

		glDeleteVertexArraysAPPLE = (PFNGLDELETEVERTEXARRAYSAPPLEPROC) getExtensionPtr( "glDeleteVertexArraysAPPLE" );
		if ( glDeleteVertexArraysAPPLE != 0 )	++localInitializedProcCount;

		glGenVertexArraysAPPLE = (PFNGLGENVERTEXARRAYSAPPLEPROC) getExtensionPtr( "glGenVertexArraysAPPLE" );
		if ( glGenVertexArraysAPPLE != 0 )	++localInitializedProcCount;

		glIsVertexArrayAPPLE = (PFNGLISVERTEXARRAYAPPLEPROC) getExtensionPtr( "glIsVertexArrayAPPLE" );
		if ( glIsVertexArrayAPPLE != 0 )	++localInitializedProcCount;
	} // if ( isGL_APPLE_vertex_array_object || isSEDEnable() )
	
	if ( isGL_APPLE_vertex_array_object )
	{
		std::stringstream strStream;
		strStream << "GL_APPLE_vertex_array_object                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_APPLE_vertex_array_object                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_APPLE_vertex_array_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_APPLE_vertex_array_object                                : not detected." );
	}
	
	// ****** GL_APPLE_vertex_array_range ******
	
	isGL_APPLE_vertex_array_range = isExtensionSupported("GL_APPLE_vertex_array_range");
	
	localSupportedProcCount		= 3;
	localInitializedProcCount	= 0;
	
	if ( isGL_APPLE_vertex_array_range ) // || isSEDEnable()
	{

		glVertexArrayRangeAPPLE = (PFNGLVERTEXARRAYRANGEAPPLEPROC) getExtensionPtr( "glVertexArrayRangeAPPLE" );
		if ( glVertexArrayRangeAPPLE != 0 )	++localInitializedProcCount;

		glFlushVertexArrayRangeAPPLE = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC) getExtensionPtr( "glFlushVertexArrayRangeAPPLE" );
		if ( glFlushVertexArrayRangeAPPLE != 0 )	++localInitializedProcCount;

		glVertexArrayParameteriAPPLE = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC) getExtensionPtr( "glVertexArrayParameteriAPPLE" );
		if ( glVertexArrayParameteriAPPLE != 0 )	++localInitializedProcCount;
	} // if ( isGL_APPLE_vertex_array_range || isSEDEnable() )
	
	if ( isGL_APPLE_vertex_array_range )
	{
		std::stringstream strStream;
		strStream << "GL_APPLE_vertex_array_range                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_APPLE_vertex_array_range                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_APPLE_vertex_array_range") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_APPLE_vertex_array_range                                 : not detected." );
	}
	
	// ****** GL_APPLE_ycbcr_422 ******
	
	isGL_APPLE_ycbcr_422 = isExtensionSupported("GL_APPLE_ycbcr_422");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_APPLE_ycbcr_422 )
	{
		std::stringstream strStream;
		strStream << "GL_APPLE_ycbcr_422                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_APPLE_ycbcr_422                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_APPLE_ycbcr_422") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_APPLE_ycbcr_422                                          : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_ARB()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_ARB_color_buffer_float ******
	
	isGL_ARB_color_buffer_float = isExtensionSupported("GL_ARB_color_buffer_float");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_color_buffer_float ) // || isSEDEnable()
	{

		glClampColorARB = (PFNGLCLAMPCOLORARBPROC) getExtensionPtr( "glClampColorARB" );
		if ( glClampColorARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_color_buffer_float || isSEDEnable() )
	
	if ( isGL_ARB_color_buffer_float )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_color_buffer_float                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_color_buffer_float                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_color_buffer_float") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_color_buffer_float                                   : not detected." );
	}
	
	// ****** GL_ARB_depth_texture ******
	
	isGL_ARB_depth_texture = isExtensionSupported("GL_ARB_depth_texture");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_depth_texture )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_depth_texture                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_depth_texture                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_depth_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_depth_texture                                        : not detected." );
	}
	
	// ****** GL_ARB_draw_buffers ******
	
	isGL_ARB_draw_buffers = isExtensionSupported("GL_ARB_draw_buffers");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_draw_buffers ) // || isSEDEnable()
	{

		glDrawBuffersARB = (PFNGLDRAWBUFFERSARBPROC) getExtensionPtr( "glDrawBuffersARB" );
		if ( glDrawBuffersARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_draw_buffers || isSEDEnable() )
	
	if ( isGL_ARB_draw_buffers )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_draw_buffers                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_draw_buffers                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_draw_buffers") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_draw_buffers                                         : not detected." );
	}
	
	// ****** GL_ARB_fragment_program ******
	
	isGL_ARB_fragment_program = isExtensionSupported("GL_ARB_fragment_program");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_fragment_program )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_fragment_program                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_fragment_program                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_fragment_program") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_fragment_program                                     : not detected." );
	}
	
	// ****** GL_ARB_fragment_program_shadow ******
	
	isGL_ARB_fragment_program_shadow = isExtensionSupported("GL_ARB_fragment_program_shadow");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_fragment_program_shadow )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_fragment_program_shadow                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_fragment_program_shadow                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_fragment_program_shadow") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_fragment_program_shadow                              : not detected." );
	}
	
	// ****** GL_ARB_fragment_shader ******
	
	isGL_ARB_fragment_shader = isExtensionSupported("GL_ARB_fragment_shader");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_fragment_shader )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_fragment_shader                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_fragment_shader                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_fragment_shader") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_fragment_shader                                      : not detected." );
	}
	
	// ****** GL_ARB_half_float_pixel ******
	
	isGL_ARB_half_float_pixel = isExtensionSupported("GL_ARB_half_float_pixel");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_half_float_pixel )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_half_float_pixel                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_half_float_pixel                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_half_float_pixel") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_half_float_pixel                                     : not detected." );
	}
	
	// ****** GL_ARB_imaging ******
	
	isGL_ARB_imaging = isExtensionSupported("GL_ARB_imaging");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_imaging )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_imaging                                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_imaging                                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_imaging") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_imaging                                              : not detected." );
	}
	
	// ****** GL_ARB_matrix_palette ******
	
	isGL_ARB_matrix_palette = isExtensionSupported("GL_ARB_matrix_palette");
	
	localSupportedProcCount		= 5;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_matrix_palette ) // || isSEDEnable()
	{

		glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC) getExtensionPtr( "glCurrentPaletteMatrixARB" );
		if ( glCurrentPaletteMatrixARB != 0 )	++localInitializedProcCount;

		glMatrixIndexubvARB = (PFNGLMATRIXINDEXUBVARBPROC) getExtensionPtr( "glMatrixIndexubvARB" );
		if ( glMatrixIndexubvARB != 0 )	++localInitializedProcCount;

		glMatrixIndexusvARB = (PFNGLMATRIXINDEXUSVARBPROC) getExtensionPtr( "glMatrixIndexusvARB" );
		if ( glMatrixIndexusvARB != 0 )	++localInitializedProcCount;

		glMatrixIndexuivARB = (PFNGLMATRIXINDEXUIVARBPROC) getExtensionPtr( "glMatrixIndexuivARB" );
		if ( glMatrixIndexuivARB != 0 )	++localInitializedProcCount;

		glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC) getExtensionPtr( "glMatrixIndexPointerARB" );
		if ( glMatrixIndexPointerARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_matrix_palette || isSEDEnable() )
	
	if ( isGL_ARB_matrix_palette )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_matrix_palette                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_matrix_palette                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_matrix_palette") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_matrix_palette                                       : not detected." );
	}
	
	// ****** GL_ARB_multisample ******
	
	isGL_ARB_multisample = isExtensionSupported("GL_ARB_multisample");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_multisample ) // || isSEDEnable()
	{

		glSampleCoverageARB = (PFNGLSAMPLECOVERAGEARBPROC) getExtensionPtr( "glSampleCoverageARB" );
		if ( glSampleCoverageARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_multisample || isSEDEnable() )
	
	if ( isGL_ARB_multisample )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_multisample                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_multisample                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_multisample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_multisample                                          : not detected." );
	}
	
	// ****** GL_ARB_multitexture ******
	
	isGL_ARB_multitexture = isExtensionSupported("GL_ARB_multitexture");
	
	localSupportedProcCount		= 34;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_multitexture ) // || isSEDEnable()
	{

		glActiveTextureARB = (PFNGLACTIVETEXTUREARBPROC) getExtensionPtr( "glActiveTextureARB" );
		if ( glActiveTextureARB != 0 )	++localInitializedProcCount;

		glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC) getExtensionPtr( "glClientActiveTextureARB" );
		if ( glClientActiveTextureARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord1dARB = (PFNGLMULTITEXCOORD1DARBPROC) getExtensionPtr( "glMultiTexCoord1dARB" );
		if ( glMultiTexCoord1dARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord1dvARB = (PFNGLMULTITEXCOORD1DVARBPROC) getExtensionPtr( "glMultiTexCoord1dvARB" );
		if ( glMultiTexCoord1dvARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord1fARB = (PFNGLMULTITEXCOORD1FARBPROC) getExtensionPtr( "glMultiTexCoord1fARB" );
		if ( glMultiTexCoord1fARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord1fvARB = (PFNGLMULTITEXCOORD1FVARBPROC) getExtensionPtr( "glMultiTexCoord1fvARB" );
		if ( glMultiTexCoord1fvARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord1iARB = (PFNGLMULTITEXCOORD1IARBPROC) getExtensionPtr( "glMultiTexCoord1iARB" );
		if ( glMultiTexCoord1iARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord1ivARB = (PFNGLMULTITEXCOORD1IVARBPROC) getExtensionPtr( "glMultiTexCoord1ivARB" );
		if ( glMultiTexCoord1ivARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord1sARB = (PFNGLMULTITEXCOORD1SARBPROC) getExtensionPtr( "glMultiTexCoord1sARB" );
		if ( glMultiTexCoord1sARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord1svARB = (PFNGLMULTITEXCOORD1SVARBPROC) getExtensionPtr( "glMultiTexCoord1svARB" );
		if ( glMultiTexCoord1svARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DARBPROC) getExtensionPtr( "glMultiTexCoord2dARB" );
		if ( glMultiTexCoord2dARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord2dvARB = (PFNGLMULTITEXCOORD2DVARBPROC) getExtensionPtr( "glMultiTexCoord2dvARB" );
		if ( glMultiTexCoord2dvARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord2fARB = (PFNGLMULTITEXCOORD2FARBPROC) getExtensionPtr( "glMultiTexCoord2fARB" );
		if ( glMultiTexCoord2fARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord2fvARB = (PFNGLMULTITEXCOORD2FVARBPROC) getExtensionPtr( "glMultiTexCoord2fvARB" );
		if ( glMultiTexCoord2fvARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord2iARB = (PFNGLMULTITEXCOORD2IARBPROC) getExtensionPtr( "glMultiTexCoord2iARB" );
		if ( glMultiTexCoord2iARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord2ivARB = (PFNGLMULTITEXCOORD2IVARBPROC) getExtensionPtr( "glMultiTexCoord2ivARB" );
		if ( glMultiTexCoord2ivARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord2sARB = (PFNGLMULTITEXCOORD2SARBPROC) getExtensionPtr( "glMultiTexCoord2sARB" );
		if ( glMultiTexCoord2sARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord2svARB = (PFNGLMULTITEXCOORD2SVARBPROC) getExtensionPtr( "glMultiTexCoord2svARB" );
		if ( glMultiTexCoord2svARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord3dARB = (PFNGLMULTITEXCOORD3DARBPROC) getExtensionPtr( "glMultiTexCoord3dARB" );
		if ( glMultiTexCoord3dARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord3dvARB = (PFNGLMULTITEXCOORD3DVARBPROC) getExtensionPtr( "glMultiTexCoord3dvARB" );
		if ( glMultiTexCoord3dvARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord3fARB = (PFNGLMULTITEXCOORD3FARBPROC) getExtensionPtr( "glMultiTexCoord3fARB" );
		if ( glMultiTexCoord3fARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord3fvARB = (PFNGLMULTITEXCOORD3FVARBPROC) getExtensionPtr( "glMultiTexCoord3fvARB" );
		if ( glMultiTexCoord3fvARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord3iARB = (PFNGLMULTITEXCOORD3IARBPROC) getExtensionPtr( "glMultiTexCoord3iARB" );
		if ( glMultiTexCoord3iARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord3ivARB = (PFNGLMULTITEXCOORD3IVARBPROC) getExtensionPtr( "glMultiTexCoord3ivARB" );
		if ( glMultiTexCoord3ivARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord3sARB = (PFNGLMULTITEXCOORD3SARBPROC) getExtensionPtr( "glMultiTexCoord3sARB" );
		if ( glMultiTexCoord3sARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord3svARB = (PFNGLMULTITEXCOORD3SVARBPROC) getExtensionPtr( "glMultiTexCoord3svARB" );
		if ( glMultiTexCoord3svARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord4dARB = (PFNGLMULTITEXCOORD4DARBPROC) getExtensionPtr( "glMultiTexCoord4dARB" );
		if ( glMultiTexCoord4dARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord4dvARB = (PFNGLMULTITEXCOORD4DVARBPROC) getExtensionPtr( "glMultiTexCoord4dvARB" );
		if ( glMultiTexCoord4dvARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord4fARB = (PFNGLMULTITEXCOORD4FARBPROC) getExtensionPtr( "glMultiTexCoord4fARB" );
		if ( glMultiTexCoord4fARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord4fvARB = (PFNGLMULTITEXCOORD4FVARBPROC) getExtensionPtr( "glMultiTexCoord4fvARB" );
		if ( glMultiTexCoord4fvARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord4iARB = (PFNGLMULTITEXCOORD4IARBPROC) getExtensionPtr( "glMultiTexCoord4iARB" );
		if ( glMultiTexCoord4iARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord4ivARB = (PFNGLMULTITEXCOORD4IVARBPROC) getExtensionPtr( "glMultiTexCoord4ivARB" );
		if ( glMultiTexCoord4ivARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord4sARB = (PFNGLMULTITEXCOORD4SARBPROC) getExtensionPtr( "glMultiTexCoord4sARB" );
		if ( glMultiTexCoord4sARB != 0 )	++localInitializedProcCount;

		glMultiTexCoord4svARB = (PFNGLMULTITEXCOORD4SVARBPROC) getExtensionPtr( "glMultiTexCoord4svARB" );
		if ( glMultiTexCoord4svARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_multitexture || isSEDEnable() )
	
	if ( isGL_ARB_multitexture )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_multitexture                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_multitexture                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_multitexture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_multitexture                                         : not detected." );
	}
	
	// ****** GL_ARB_occlusion_query ******
	
	isGL_ARB_occlusion_query = isExtensionSupported("GL_ARB_occlusion_query");
	
	localSupportedProcCount		= 8;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_occlusion_query ) // || isSEDEnable()
	{

		glGenQueriesARB = (PFNGLGENQUERIESARBPROC) getExtensionPtr( "glGenQueriesARB" );
		if ( glGenQueriesARB != 0 )	++localInitializedProcCount;

		glDeleteQueriesARB = (PFNGLDELETEQUERIESARBPROC) getExtensionPtr( "glDeleteQueriesARB" );
		if ( glDeleteQueriesARB != 0 )	++localInitializedProcCount;

		glIsQueryARB = (PFNGLISQUERYARBPROC) getExtensionPtr( "glIsQueryARB" );
		if ( glIsQueryARB != 0 )	++localInitializedProcCount;

		glBeginQueryARB = (PFNGLBEGINQUERYARBPROC) getExtensionPtr( "glBeginQueryARB" );
		if ( glBeginQueryARB != 0 )	++localInitializedProcCount;

		glEndQueryARB = (PFNGLENDQUERYARBPROC) getExtensionPtr( "glEndQueryARB" );
		if ( glEndQueryARB != 0 )	++localInitializedProcCount;

		glGetQueryivARB = (PFNGLGETQUERYIVARBPROC) getExtensionPtr( "glGetQueryivARB" );
		if ( glGetQueryivARB != 0 )	++localInitializedProcCount;

		glGetQueryObjectivARB = (PFNGLGETQUERYOBJECTIVARBPROC) getExtensionPtr( "glGetQueryObjectivARB" );
		if ( glGetQueryObjectivARB != 0 )	++localInitializedProcCount;

		glGetQueryObjectuivARB = (PFNGLGETQUERYOBJECTUIVARBPROC) getExtensionPtr( "glGetQueryObjectuivARB" );
		if ( glGetQueryObjectuivARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_occlusion_query || isSEDEnable() )
	
	if ( isGL_ARB_occlusion_query )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_occlusion_query                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_occlusion_query                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_occlusion_query") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_occlusion_query                                      : not detected." );
	}
	
	// ****** GL_ARB_pixel_buffer_object ******
	
	isGL_ARB_pixel_buffer_object = isExtensionSupported("GL_ARB_pixel_buffer_object");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_pixel_buffer_object )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_pixel_buffer_object                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_pixel_buffer_object                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_pixel_buffer_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_pixel_buffer_object                                  : not detected." );
	}
	
	// ****** GL_ARB_point_parameters ******
	
	isGL_ARB_point_parameters = isExtensionSupported("GL_ARB_point_parameters");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_point_parameters ) // || isSEDEnable()
	{

		glPointParameterfARB = (PFNGLPOINTPARAMETERFARBPROC) getExtensionPtr( "glPointParameterfARB" );
		if ( glPointParameterfARB != 0 )	++localInitializedProcCount;

		glPointParameterfvARB = (PFNGLPOINTPARAMETERFVARBPROC) getExtensionPtr( "glPointParameterfvARB" );
		if ( glPointParameterfvARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_point_parameters || isSEDEnable() )
	
	if ( isGL_ARB_point_parameters )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_point_parameters                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_point_parameters                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_point_parameters") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_point_parameters                                     : not detected." );
	}
	
	// ****** GL_ARB_point_sprite ******
	
	isGL_ARB_point_sprite = isExtensionSupported("GL_ARB_point_sprite");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_point_sprite )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_point_sprite                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_point_sprite                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_point_sprite") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_point_sprite                                         : not detected." );
	}
	
	// ****** GL_ARB_shader_objects ******
	
	isGL_ARB_shader_objects = isExtensionSupported("GL_ARB_shader_objects");
	
	localSupportedProcCount		= 39;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_shader_objects ) // || isSEDEnable()
	{

		glDeleteObjectARB = (PFNGLDELETEOBJECTARBPROC) getExtensionPtr( "glDeleteObjectARB" );
		if ( glDeleteObjectARB != 0 )	++localInitializedProcCount;

		glGetHandleARB = (PFNGLGETHANDLEARBPROC) getExtensionPtr( "glGetHandleARB" );
		if ( glGetHandleARB != 0 )	++localInitializedProcCount;

		glDetachObjectARB = (PFNGLDETACHOBJECTARBPROC) getExtensionPtr( "glDetachObjectARB" );
		if ( glDetachObjectARB != 0 )	++localInitializedProcCount;

		glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC) getExtensionPtr( "glCreateShaderObjectARB" );
		if ( glCreateShaderObjectARB != 0 )	++localInitializedProcCount;

		glShaderSourceARB = (PFNGLSHADERSOURCEARBPROC) getExtensionPtr( "glShaderSourceARB" );
		if ( glShaderSourceARB != 0 )	++localInitializedProcCount;

		glCompileShaderARB = (PFNGLCOMPILESHADERARBPROC) getExtensionPtr( "glCompileShaderARB" );
		if ( glCompileShaderARB != 0 )	++localInitializedProcCount;

		glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC) getExtensionPtr( "glCreateProgramObjectARB" );
		if ( glCreateProgramObjectARB != 0 )	++localInitializedProcCount;

		glAttachObjectARB = (PFNGLATTACHOBJECTARBPROC) getExtensionPtr( "glAttachObjectARB" );
		if ( glAttachObjectARB != 0 )	++localInitializedProcCount;

		glLinkProgramARB = (PFNGLLINKPROGRAMARBPROC) getExtensionPtr( "glLinkProgramARB" );
		if ( glLinkProgramARB != 0 )	++localInitializedProcCount;

		glUseProgramObjectARB = (PFNGLUSEPROGRAMOBJECTARBPROC) getExtensionPtr( "glUseProgramObjectARB" );
		if ( glUseProgramObjectARB != 0 )	++localInitializedProcCount;

		glValidateProgramARB = (PFNGLVALIDATEPROGRAMARBPROC) getExtensionPtr( "glValidateProgramARB" );
		if ( glValidateProgramARB != 0 )	++localInitializedProcCount;

		glUniform1fARB = (PFNGLUNIFORM1FARBPROC) getExtensionPtr( "glUniform1fARB" );
		if ( glUniform1fARB != 0 )	++localInitializedProcCount;

		glUniform2fARB = (PFNGLUNIFORM2FARBPROC) getExtensionPtr( "glUniform2fARB" );
		if ( glUniform2fARB != 0 )	++localInitializedProcCount;

		glUniform3fARB = (PFNGLUNIFORM3FARBPROC) getExtensionPtr( "glUniform3fARB" );
		if ( glUniform3fARB != 0 )	++localInitializedProcCount;

		glUniform4fARB = (PFNGLUNIFORM4FARBPROC) getExtensionPtr( "glUniform4fARB" );
		if ( glUniform4fARB != 0 )	++localInitializedProcCount;

		glUniform1iARB = (PFNGLUNIFORM1IARBPROC) getExtensionPtr( "glUniform1iARB" );
		if ( glUniform1iARB != 0 )	++localInitializedProcCount;

		glUniform2iARB = (PFNGLUNIFORM2IARBPROC) getExtensionPtr( "glUniform2iARB" );
		if ( glUniform2iARB != 0 )	++localInitializedProcCount;

		glUniform3iARB = (PFNGLUNIFORM3IARBPROC) getExtensionPtr( "glUniform3iARB" );
		if ( glUniform3iARB != 0 )	++localInitializedProcCount;

		glUniform4iARB = (PFNGLUNIFORM4IARBPROC) getExtensionPtr( "glUniform4iARB" );
		if ( glUniform4iARB != 0 )	++localInitializedProcCount;

		glUniform1fvARB = (PFNGLUNIFORM1FVARBPROC) getExtensionPtr( "glUniform1fvARB" );
		if ( glUniform1fvARB != 0 )	++localInitializedProcCount;

		glUniform2fvARB = (PFNGLUNIFORM2FVARBPROC) getExtensionPtr( "glUniform2fvARB" );
		if ( glUniform2fvARB != 0 )	++localInitializedProcCount;

		glUniform3fvARB = (PFNGLUNIFORM3FVARBPROC) getExtensionPtr( "glUniform3fvARB" );
		if ( glUniform3fvARB != 0 )	++localInitializedProcCount;

		glUniform4fvARB = (PFNGLUNIFORM4FVARBPROC) getExtensionPtr( "glUniform4fvARB" );
		if ( glUniform4fvARB != 0 )	++localInitializedProcCount;

		glUniform1ivARB = (PFNGLUNIFORM1IVARBPROC) getExtensionPtr( "glUniform1ivARB" );
		if ( glUniform1ivARB != 0 )	++localInitializedProcCount;

		glUniform2ivARB = (PFNGLUNIFORM2IVARBPROC) getExtensionPtr( "glUniform2ivARB" );
		if ( glUniform2ivARB != 0 )	++localInitializedProcCount;

		glUniform3ivARB = (PFNGLUNIFORM3IVARBPROC) getExtensionPtr( "glUniform3ivARB" );
		if ( glUniform3ivARB != 0 )	++localInitializedProcCount;

		glUniform4ivARB = (PFNGLUNIFORM4IVARBPROC) getExtensionPtr( "glUniform4ivARB" );
		if ( glUniform4ivARB != 0 )	++localInitializedProcCount;

		glUniformMatrix2fvARB = (PFNGLUNIFORMMATRIX2FVARBPROC) getExtensionPtr( "glUniformMatrix2fvARB" );
		if ( glUniformMatrix2fvARB != 0 )	++localInitializedProcCount;

		glUniformMatrix3fvARB = (PFNGLUNIFORMMATRIX3FVARBPROC) getExtensionPtr( "glUniformMatrix3fvARB" );
		if ( glUniformMatrix3fvARB != 0 )	++localInitializedProcCount;

		glUniformMatrix4fvARB = (PFNGLUNIFORMMATRIX4FVARBPROC) getExtensionPtr( "glUniformMatrix4fvARB" );
		if ( glUniformMatrix4fvARB != 0 )	++localInitializedProcCount;

		glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC) getExtensionPtr( "glGetObjectParameterfvARB" );
		if ( glGetObjectParameterfvARB != 0 )	++localInitializedProcCount;

		glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC) getExtensionPtr( "glGetObjectParameterivARB" );
		if ( glGetObjectParameterivARB != 0 )	++localInitializedProcCount;

		glGetInfoLogARB = (PFNGLGETINFOLOGARBPROC) getExtensionPtr( "glGetInfoLogARB" );
		if ( glGetInfoLogARB != 0 )	++localInitializedProcCount;

		glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC) getExtensionPtr( "glGetAttachedObjectsARB" );
		if ( glGetAttachedObjectsARB != 0 )	++localInitializedProcCount;

		glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC) getExtensionPtr( "glGetUniformLocationARB" );
		if ( glGetUniformLocationARB != 0 )	++localInitializedProcCount;

		glGetActiveUniformARB = (PFNGLGETACTIVEUNIFORMARBPROC) getExtensionPtr( "glGetActiveUniformARB" );
		if ( glGetActiveUniformARB != 0 )	++localInitializedProcCount;

		glGetUniformfvARB = (PFNGLGETUNIFORMFVARBPROC) getExtensionPtr( "glGetUniformfvARB" );
		if ( glGetUniformfvARB != 0 )	++localInitializedProcCount;

		glGetUniformivARB = (PFNGLGETUNIFORMIVARBPROC) getExtensionPtr( "glGetUniformivARB" );
		if ( glGetUniformivARB != 0 )	++localInitializedProcCount;

		glGetShaderSourceARB = (PFNGLGETSHADERSOURCEARBPROC) getExtensionPtr( "glGetShaderSourceARB" );
		if ( glGetShaderSourceARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_shader_objects || isSEDEnable() )
	
	if ( isGL_ARB_shader_objects )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_shader_objects                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_shader_objects                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_shader_objects") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_shader_objects                                       : not detected." );
	}
	
	// ****** GL_ARB_shading_language_100 ******
	
	isGL_ARB_shading_language_100 = isExtensionSupported("GL_ARB_shading_language_100");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_shading_language_100 )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_shading_language_100                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_shading_language_100                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_shading_language_100") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_shading_language_100                                 : not detected." );
	}
	
	// ****** GL_ARB_shadow ******
	
	isGL_ARB_shadow = isExtensionSupported("GL_ARB_shadow");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_shadow )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_shadow                                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_shadow                                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_shadow") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_shadow                                               : not detected." );
	}
	
	// ****** GL_ARB_shadow_ambient ******
	
	isGL_ARB_shadow_ambient = isExtensionSupported("GL_ARB_shadow_ambient");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_shadow_ambient )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_shadow_ambient                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_shadow_ambient                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_shadow_ambient") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_shadow_ambient                                       : not detected." );
	}
	
	// ****** GL_ARB_texture_border_clamp ******
	
	isGL_ARB_texture_border_clamp = isExtensionSupported("GL_ARB_texture_border_clamp");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_border_clamp )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_border_clamp                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_border_clamp                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_border_clamp") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_border_clamp                                 : not detected." );
	}
	
	// ****** GL_ARB_texture_compression ******
	
	isGL_ARB_texture_compression = isExtensionSupported("GL_ARB_texture_compression");
	
	localSupportedProcCount		= 7;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_texture_compression ) // || isSEDEnable()
	{

		glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC) getExtensionPtr( "glCompressedTexImage3DARB" );
		if ( glCompressedTexImage3DARB != 0 )	++localInitializedProcCount;

		glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC) getExtensionPtr( "glCompressedTexImage2DARB" );
		if ( glCompressedTexImage2DARB != 0 )	++localInitializedProcCount;

		glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC) getExtensionPtr( "glCompressedTexImage1DARB" );
		if ( glCompressedTexImage1DARB != 0 )	++localInitializedProcCount;

		glCompressedTexSubImage3DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC) getExtensionPtr( "glCompressedTexSubImage3DARB" );
		if ( glCompressedTexSubImage3DARB != 0 )	++localInitializedProcCount;

		glCompressedTexSubImage2DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC) getExtensionPtr( "glCompressedTexSubImage2DARB" );
		if ( glCompressedTexSubImage2DARB != 0 )	++localInitializedProcCount;

		glCompressedTexSubImage1DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC) getExtensionPtr( "glCompressedTexSubImage1DARB" );
		if ( glCompressedTexSubImage1DARB != 0 )	++localInitializedProcCount;

		glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC) getExtensionPtr( "glGetCompressedTexImageARB" );
		if ( glGetCompressedTexImageARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_texture_compression || isSEDEnable() )
	
	if ( isGL_ARB_texture_compression )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_compression                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_compression                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_compression") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_compression                                  : not detected." );
	}
	
	// ****** GL_ARB_texture_cube_map ******
	
	isGL_ARB_texture_cube_map = isExtensionSupported("GL_ARB_texture_cube_map");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_cube_map )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_cube_map                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_cube_map                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_cube_map") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_cube_map                                     : not detected." );
	}
	
	// ****** GL_ARB_texture_env_add ******
	
	isGL_ARB_texture_env_add = isExtensionSupported("GL_ARB_texture_env_add");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_env_add )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_env_add                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_env_add                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_env_add") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_env_add                                      : not detected." );
	}
	
	// ****** GL_ARB_texture_env_combine ******
	
	isGL_ARB_texture_env_combine = isExtensionSupported("GL_ARB_texture_env_combine");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_env_combine )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_env_combine                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_env_combine                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_env_combine") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_env_combine                                  : not detected." );
	}
	
	// ****** GL_ARB_texture_env_crossbar ******
	
	isGL_ARB_texture_env_crossbar = isExtensionSupported("GL_ARB_texture_env_crossbar");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_env_crossbar )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_env_crossbar                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_env_crossbar                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_env_crossbar") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_env_crossbar                                 : not detected." );
	}
	
	// ****** GL_ARB_texture_env_dot3 ******
	
	isGL_ARB_texture_env_dot3 = isExtensionSupported("GL_ARB_texture_env_dot3");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_env_dot3 )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_env_dot3                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_env_dot3                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_env_dot3") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_env_dot3                                     : not detected." );
	}
	
	// ****** GL_ARB_texture_float ******
	
	isGL_ARB_texture_float = isExtensionSupported("GL_ARB_texture_float");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_float )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_float                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_float                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_float") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_float                                        : not detected." );
	}
	
	// ****** GL_ARB_texture_mirrored_repeat ******
	
	isGL_ARB_texture_mirrored_repeat = isExtensionSupported("GL_ARB_texture_mirrored_repeat");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_mirrored_repeat )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_mirrored_repeat                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_mirrored_repeat                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_mirrored_repeat") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_mirrored_repeat                              : not detected." );
	}
	
	// ****** GL_ARB_texture_non_power_of_two ******
	
	isGL_ARB_texture_non_power_of_two = isExtensionSupported("GL_ARB_texture_non_power_of_two");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_non_power_of_two )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_non_power_of_two                             : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_non_power_of_two                             : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_non_power_of_two") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_non_power_of_two                             : not detected." );
	}
	
	// ****** GL_ARB_texture_rectangle ******
	
	isGL_ARB_texture_rectangle = isExtensionSupported("GL_ARB_texture_rectangle");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ARB_texture_rectangle )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_texture_rectangle                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_texture_rectangle                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_texture_rectangle") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_texture_rectangle                                    : not detected." );
	}
	
	// ****** GL_ARB_transpose_matrix ******
	
	isGL_ARB_transpose_matrix = isExtensionSupported("GL_ARB_transpose_matrix");
	
	localSupportedProcCount		= 4;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_transpose_matrix ) // || isSEDEnable()
	{

		glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC) getExtensionPtr( "glLoadTransposeMatrixfARB" );
		if ( glLoadTransposeMatrixfARB != 0 )	++localInitializedProcCount;

		glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC) getExtensionPtr( "glLoadTransposeMatrixdARB" );
		if ( glLoadTransposeMatrixdARB != 0 )	++localInitializedProcCount;

		glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC) getExtensionPtr( "glMultTransposeMatrixfARB" );
		if ( glMultTransposeMatrixfARB != 0 )	++localInitializedProcCount;

		glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC) getExtensionPtr( "glMultTransposeMatrixdARB" );
		if ( glMultTransposeMatrixdARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_transpose_matrix || isSEDEnable() )
	
	if ( isGL_ARB_transpose_matrix )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_transpose_matrix                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_transpose_matrix                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_transpose_matrix") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_transpose_matrix                                     : not detected." );
	}
	
	// ****** GL_ARB_vertex_blend ******
	
	isGL_ARB_vertex_blend = isExtensionSupported("GL_ARB_vertex_blend");
	
	localSupportedProcCount		= 10;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_vertex_blend ) // || isSEDEnable()
	{

		glWeightbvARB = (PFNGLWEIGHTBVARBPROC) getExtensionPtr( "glWeightbvARB" );
		if ( glWeightbvARB != 0 )	++localInitializedProcCount;

		glWeightsvARB = (PFNGLWEIGHTSVARBPROC) getExtensionPtr( "glWeightsvARB" );
		if ( glWeightsvARB != 0 )	++localInitializedProcCount;

		glWeightivARB = (PFNGLWEIGHTIVARBPROC) getExtensionPtr( "glWeightivARB" );
		if ( glWeightivARB != 0 )	++localInitializedProcCount;

		glWeightfvARB = (PFNGLWEIGHTFVARBPROC) getExtensionPtr( "glWeightfvARB" );
		if ( glWeightfvARB != 0 )	++localInitializedProcCount;

		glWeightdvARB = (PFNGLWEIGHTDVARBPROC) getExtensionPtr( "glWeightdvARB" );
		if ( glWeightdvARB != 0 )	++localInitializedProcCount;

		glWeightubvARB = (PFNGLWEIGHTUBVARBPROC) getExtensionPtr( "glWeightubvARB" );
		if ( glWeightubvARB != 0 )	++localInitializedProcCount;

		glWeightusvARB = (PFNGLWEIGHTUSVARBPROC) getExtensionPtr( "glWeightusvARB" );
		if ( glWeightusvARB != 0 )	++localInitializedProcCount;

		glWeightuivARB = (PFNGLWEIGHTUIVARBPROC) getExtensionPtr( "glWeightuivARB" );
		if ( glWeightuivARB != 0 )	++localInitializedProcCount;

		glWeightPointerARB = (PFNGLWEIGHTPOINTERARBPROC) getExtensionPtr( "glWeightPointerARB" );
		if ( glWeightPointerARB != 0 )	++localInitializedProcCount;

		glVertexBlendARB = (PFNGLVERTEXBLENDARBPROC) getExtensionPtr( "glVertexBlendARB" );
		if ( glVertexBlendARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_vertex_blend || isSEDEnable() )
	
	if ( isGL_ARB_vertex_blend )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_vertex_blend                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_vertex_blend                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_vertex_blend") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_vertex_blend                                         : not detected." );
	}
	
	// ****** GL_ARB_vertex_buffer_object ******
	
	isGL_ARB_vertex_buffer_object = isExtensionSupported("GL_ARB_vertex_buffer_object");
	
	localSupportedProcCount		= 11;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_vertex_buffer_object ) // || isSEDEnable()
	{

		glBindBufferARB = (PFNGLBINDBUFFERARBPROC) getExtensionPtr( "glBindBufferARB" );
		if ( glBindBufferARB != 0 )	++localInitializedProcCount;

		glDeleteBuffersARB = (PFNGLDELETEBUFFERSARBPROC) getExtensionPtr( "glDeleteBuffersARB" );
		if ( glDeleteBuffersARB != 0 )	++localInitializedProcCount;

		glGenBuffersARB = (PFNGLGENBUFFERSARBPROC) getExtensionPtr( "glGenBuffersARB" );
		if ( glGenBuffersARB != 0 )	++localInitializedProcCount;

		glIsBufferARB = (PFNGLISBUFFERARBPROC) getExtensionPtr( "glIsBufferARB" );
		if ( glIsBufferARB != 0 )	++localInitializedProcCount;

		glBufferDataARB = (PFNGLBUFFERDATAARBPROC) getExtensionPtr( "glBufferDataARB" );
		if ( glBufferDataARB != 0 )	++localInitializedProcCount;

		glBufferSubDataARB = (PFNGLBUFFERSUBDATAARBPROC) getExtensionPtr( "glBufferSubDataARB" );
		if ( glBufferSubDataARB != 0 )	++localInitializedProcCount;

		glGetBufferSubDataARB = (PFNGLGETBUFFERSUBDATAARBPROC) getExtensionPtr( "glGetBufferSubDataARB" );
		if ( glGetBufferSubDataARB != 0 )	++localInitializedProcCount;

		glMapBufferARB = (PFNGLMAPBUFFERARBPROC) getExtensionPtr( "glMapBufferARB" );
		if ( glMapBufferARB != 0 )	++localInitializedProcCount;

		glUnmapBufferARB = (PFNGLUNMAPBUFFERARBPROC) getExtensionPtr( "glUnmapBufferARB" );
		if ( glUnmapBufferARB != 0 )	++localInitializedProcCount;

		glGetBufferParameterivARB = (PFNGLGETBUFFERPARAMETERIVARBPROC) getExtensionPtr( "glGetBufferParameterivARB" );
		if ( glGetBufferParameterivARB != 0 )	++localInitializedProcCount;

		glGetBufferPointervARB = (PFNGLGETBUFFERPOINTERVARBPROC) getExtensionPtr( "glGetBufferPointervARB" );
		if ( glGetBufferPointervARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_vertex_buffer_object || isSEDEnable() )
	
	if ( isGL_ARB_vertex_buffer_object )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_vertex_buffer_object                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_vertex_buffer_object                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_vertex_buffer_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_vertex_buffer_object                                 : not detected." );
	}
	
	// ****** GL_ARB_vertex_program ******
	
	isGL_ARB_vertex_program = isExtensionSupported("GL_ARB_vertex_program");
	
	localSupportedProcCount		= 62;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_vertex_program ) // || isSEDEnable()
	{

		glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC) getExtensionPtr( "glVertexAttrib1dARB" );
		if ( glVertexAttrib1dARB != 0 )	++localInitializedProcCount;

		glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC) getExtensionPtr( "glVertexAttrib1dvARB" );
		if ( glVertexAttrib1dvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC) getExtensionPtr( "glVertexAttrib1fARB" );
		if ( glVertexAttrib1fARB != 0 )	++localInitializedProcCount;

		glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC) getExtensionPtr( "glVertexAttrib1fvARB" );
		if ( glVertexAttrib1fvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC) getExtensionPtr( "glVertexAttrib1sARB" );
		if ( glVertexAttrib1sARB != 0 )	++localInitializedProcCount;

		glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC) getExtensionPtr( "glVertexAttrib1svARB" );
		if ( glVertexAttrib1svARB != 0 )	++localInitializedProcCount;

		glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC) getExtensionPtr( "glVertexAttrib2dARB" );
		if ( glVertexAttrib2dARB != 0 )	++localInitializedProcCount;

		glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC) getExtensionPtr( "glVertexAttrib2dvARB" );
		if ( glVertexAttrib2dvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC) getExtensionPtr( "glVertexAttrib2fARB" );
		if ( glVertexAttrib2fARB != 0 )	++localInitializedProcCount;

		glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC) getExtensionPtr( "glVertexAttrib2fvARB" );
		if ( glVertexAttrib2fvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC) getExtensionPtr( "glVertexAttrib2sARB" );
		if ( glVertexAttrib2sARB != 0 )	++localInitializedProcCount;

		glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC) getExtensionPtr( "glVertexAttrib2svARB" );
		if ( glVertexAttrib2svARB != 0 )	++localInitializedProcCount;

		glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC) getExtensionPtr( "glVertexAttrib3dARB" );
		if ( glVertexAttrib3dARB != 0 )	++localInitializedProcCount;

		glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC) getExtensionPtr( "glVertexAttrib3dvARB" );
		if ( glVertexAttrib3dvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC) getExtensionPtr( "glVertexAttrib3fARB" );
		if ( glVertexAttrib3fARB != 0 )	++localInitializedProcCount;

		glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC) getExtensionPtr( "glVertexAttrib3fvARB" );
		if ( glVertexAttrib3fvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC) getExtensionPtr( "glVertexAttrib3sARB" );
		if ( glVertexAttrib3sARB != 0 )	++localInitializedProcCount;

		glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC) getExtensionPtr( "glVertexAttrib3svARB" );
		if ( glVertexAttrib3svARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC) getExtensionPtr( "glVertexAttrib4NbvARB" );
		if ( glVertexAttrib4NbvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC) getExtensionPtr( "glVertexAttrib4NivARB" );
		if ( glVertexAttrib4NivARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC) getExtensionPtr( "glVertexAttrib4NsvARB" );
		if ( glVertexAttrib4NsvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC) getExtensionPtr( "glVertexAttrib4NubARB" );
		if ( glVertexAttrib4NubARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC) getExtensionPtr( "glVertexAttrib4NubvARB" );
		if ( glVertexAttrib4NubvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC) getExtensionPtr( "glVertexAttrib4NuivARB" );
		if ( glVertexAttrib4NuivARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC) getExtensionPtr( "glVertexAttrib4NusvARB" );
		if ( glVertexAttrib4NusvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC) getExtensionPtr( "glVertexAttrib4bvARB" );
		if ( glVertexAttrib4bvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC) getExtensionPtr( "glVertexAttrib4dARB" );
		if ( glVertexAttrib4dARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC) getExtensionPtr( "glVertexAttrib4dvARB" );
		if ( glVertexAttrib4dvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC) getExtensionPtr( "glVertexAttrib4fARB" );
		if ( glVertexAttrib4fARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC) getExtensionPtr( "glVertexAttrib4fvARB" );
		if ( glVertexAttrib4fvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC) getExtensionPtr( "glVertexAttrib4ivARB" );
		if ( glVertexAttrib4ivARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC) getExtensionPtr( "glVertexAttrib4sARB" );
		if ( glVertexAttrib4sARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC) getExtensionPtr( "glVertexAttrib4svARB" );
		if ( glVertexAttrib4svARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC) getExtensionPtr( "glVertexAttrib4ubvARB" );
		if ( glVertexAttrib4ubvARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC) getExtensionPtr( "glVertexAttrib4uivARB" );
		if ( glVertexAttrib4uivARB != 0 )	++localInitializedProcCount;

		glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC) getExtensionPtr( "glVertexAttrib4usvARB" );
		if ( glVertexAttrib4usvARB != 0 )	++localInitializedProcCount;

		glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC) getExtensionPtr( "glVertexAttribPointerARB" );
		if ( glVertexAttribPointerARB != 0 )	++localInitializedProcCount;

		glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC) getExtensionPtr( "glEnableVertexAttribArrayARB" );
		if ( glEnableVertexAttribArrayARB != 0 )	++localInitializedProcCount;

		glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC) getExtensionPtr( "glDisableVertexAttribArrayARB" );
		if ( glDisableVertexAttribArrayARB != 0 )	++localInitializedProcCount;

		glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC) getExtensionPtr( "glProgramStringARB" );
		if ( glProgramStringARB != 0 )	++localInitializedProcCount;

		glBindProgramARB = (PFNGLBINDPROGRAMARBPROC) getExtensionPtr( "glBindProgramARB" );
		if ( glBindProgramARB != 0 )	++localInitializedProcCount;

		glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC) getExtensionPtr( "glDeleteProgramsARB" );
		if ( glDeleteProgramsARB != 0 )	++localInitializedProcCount;

		glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC) getExtensionPtr( "glGenProgramsARB" );
		if ( glGenProgramsARB != 0 )	++localInitializedProcCount;

		glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC) getExtensionPtr( "glProgramEnvParameter4dARB" );
		if ( glProgramEnvParameter4dARB != 0 )	++localInitializedProcCount;

		glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC) getExtensionPtr( "glProgramEnvParameter4dvARB" );
		if ( glProgramEnvParameter4dvARB != 0 )	++localInitializedProcCount;

		glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC) getExtensionPtr( "glProgramEnvParameter4fARB" );
		if ( glProgramEnvParameter4fARB != 0 )	++localInitializedProcCount;

		glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC) getExtensionPtr( "glProgramEnvParameter4fvARB" );
		if ( glProgramEnvParameter4fvARB != 0 )	++localInitializedProcCount;

		glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC) getExtensionPtr( "glProgramLocalParameter4dARB" );
		if ( glProgramLocalParameter4dARB != 0 )	++localInitializedProcCount;

		glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC) getExtensionPtr( "glProgramLocalParameter4dvARB" );
		if ( glProgramLocalParameter4dvARB != 0 )	++localInitializedProcCount;

		glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC) getExtensionPtr( "glProgramLocalParameter4fARB" );
		if ( glProgramLocalParameter4fARB != 0 )	++localInitializedProcCount;

		glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC) getExtensionPtr( "glProgramLocalParameter4fvARB" );
		if ( glProgramLocalParameter4fvARB != 0 )	++localInitializedProcCount;

		glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC) getExtensionPtr( "glGetProgramEnvParameterdvARB" );
		if ( glGetProgramEnvParameterdvARB != 0 )	++localInitializedProcCount;

		glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC) getExtensionPtr( "glGetProgramEnvParameterfvARB" );
		if ( glGetProgramEnvParameterfvARB != 0 )	++localInitializedProcCount;

		glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC) getExtensionPtr( "glGetProgramLocalParameterdvARB" );
		if ( glGetProgramLocalParameterdvARB != 0 )	++localInitializedProcCount;

		glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC) getExtensionPtr( "glGetProgramLocalParameterfvARB" );
		if ( glGetProgramLocalParameterfvARB != 0 )	++localInitializedProcCount;

		glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC) getExtensionPtr( "glGetProgramivARB" );
		if ( glGetProgramivARB != 0 )	++localInitializedProcCount;

		glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC) getExtensionPtr( "glGetProgramStringARB" );
		if ( glGetProgramStringARB != 0 )	++localInitializedProcCount;

		glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC) getExtensionPtr( "glGetVertexAttribdvARB" );
		if ( glGetVertexAttribdvARB != 0 )	++localInitializedProcCount;

		glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC) getExtensionPtr( "glGetVertexAttribfvARB" );
		if ( glGetVertexAttribfvARB != 0 )	++localInitializedProcCount;

		glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC) getExtensionPtr( "glGetVertexAttribivARB" );
		if ( glGetVertexAttribivARB != 0 )	++localInitializedProcCount;

		glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC) getExtensionPtr( "glGetVertexAttribPointervARB" );
		if ( glGetVertexAttribPointervARB != 0 )	++localInitializedProcCount;

		glIsProgramARB = (PFNGLISPROGRAMARBPROC) getExtensionPtr( "glIsProgramARB" );
		if ( glIsProgramARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_vertex_program || isSEDEnable() )
	
	if ( isGL_ARB_vertex_program )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_vertex_program                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_vertex_program                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_vertex_program") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_vertex_program                                       : not detected." );
	}
	
	// ****** GL_ARB_vertex_shader ******
	
	isGL_ARB_vertex_shader = isExtensionSupported("GL_ARB_vertex_shader");
	
	localSupportedProcCount		= 3;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_vertex_shader ) // || isSEDEnable()
	{

		glBindAttribLocationARB = (PFNGLBINDATTRIBLOCATIONARBPROC) getExtensionPtr( "glBindAttribLocationARB" );
		if ( glBindAttribLocationARB != 0 )	++localInitializedProcCount;

		glGetActiveAttribARB = (PFNGLGETACTIVEATTRIBARBPROC) getExtensionPtr( "glGetActiveAttribARB" );
		if ( glGetActiveAttribARB != 0 )	++localInitializedProcCount;

		glGetAttribLocationARB = (PFNGLGETATTRIBLOCATIONARBPROC) getExtensionPtr( "glGetAttribLocationARB" );
		if ( glGetAttribLocationARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_vertex_shader || isSEDEnable() )
	
	if ( isGL_ARB_vertex_shader )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_vertex_shader                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_vertex_shader                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_vertex_shader") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_vertex_shader                                        : not detected." );
	}
	
	// ****** GL_ARB_window_pos ******
	
	isGL_ARB_window_pos = isExtensionSupported("GL_ARB_window_pos");
	
	localSupportedProcCount		= 16;
	localInitializedProcCount	= 0;
	
	if ( isGL_ARB_window_pos ) // || isSEDEnable()
	{

		glWindowPos2dARB = (PFNGLWINDOWPOS2DARBPROC) getExtensionPtr( "glWindowPos2dARB" );
		if ( glWindowPos2dARB != 0 )	++localInitializedProcCount;

		glWindowPos2dvARB = (PFNGLWINDOWPOS2DVARBPROC) getExtensionPtr( "glWindowPos2dvARB" );
		if ( glWindowPos2dvARB != 0 )	++localInitializedProcCount;

		glWindowPos2fARB = (PFNGLWINDOWPOS2FARBPROC) getExtensionPtr( "glWindowPos2fARB" );
		if ( glWindowPos2fARB != 0 )	++localInitializedProcCount;

		glWindowPos2fvARB = (PFNGLWINDOWPOS2FVARBPROC) getExtensionPtr( "glWindowPos2fvARB" );
		if ( glWindowPos2fvARB != 0 )	++localInitializedProcCount;

		glWindowPos2iARB = (PFNGLWINDOWPOS2IARBPROC) getExtensionPtr( "glWindowPos2iARB" );
		if ( glWindowPos2iARB != 0 )	++localInitializedProcCount;

		glWindowPos2ivARB = (PFNGLWINDOWPOS2IVARBPROC) getExtensionPtr( "glWindowPos2ivARB" );
		if ( glWindowPos2ivARB != 0 )	++localInitializedProcCount;

		glWindowPos2sARB = (PFNGLWINDOWPOS2SARBPROC) getExtensionPtr( "glWindowPos2sARB" );
		if ( glWindowPos2sARB != 0 )	++localInitializedProcCount;

		glWindowPos2svARB = (PFNGLWINDOWPOS2SVARBPROC) getExtensionPtr( "glWindowPos2svARB" );
		if ( glWindowPos2svARB != 0 )	++localInitializedProcCount;

		glWindowPos3dARB = (PFNGLWINDOWPOS3DARBPROC) getExtensionPtr( "glWindowPos3dARB" );
		if ( glWindowPos3dARB != 0 )	++localInitializedProcCount;

		glWindowPos3dvARB = (PFNGLWINDOWPOS3DVARBPROC) getExtensionPtr( "glWindowPos3dvARB" );
		if ( glWindowPos3dvARB != 0 )	++localInitializedProcCount;

		glWindowPos3fARB = (PFNGLWINDOWPOS3FARBPROC) getExtensionPtr( "glWindowPos3fARB" );
		if ( glWindowPos3fARB != 0 )	++localInitializedProcCount;

		glWindowPos3fvARB = (PFNGLWINDOWPOS3FVARBPROC) getExtensionPtr( "glWindowPos3fvARB" );
		if ( glWindowPos3fvARB != 0 )	++localInitializedProcCount;

		glWindowPos3iARB = (PFNGLWINDOWPOS3IARBPROC) getExtensionPtr( "glWindowPos3iARB" );
		if ( glWindowPos3iARB != 0 )	++localInitializedProcCount;

		glWindowPos3ivARB = (PFNGLWINDOWPOS3IVARBPROC) getExtensionPtr( "glWindowPos3ivARB" );
		if ( glWindowPos3ivARB != 0 )	++localInitializedProcCount;

		glWindowPos3sARB = (PFNGLWINDOWPOS3SARBPROC) getExtensionPtr( "glWindowPos3sARB" );
		if ( glWindowPos3sARB != 0 )	++localInitializedProcCount;

		glWindowPos3svARB = (PFNGLWINDOWPOS3SVARBPROC) getExtensionPtr( "glWindowPos3svARB" );
		if ( glWindowPos3svARB != 0 )	++localInitializedProcCount;
	} // if ( isGL_ARB_window_pos || isSEDEnable() )
	
	if ( isGL_ARB_window_pos )
	{
		std::stringstream strStream;
		strStream << "GL_ARB_window_pos                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ARB_window_pos                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ARB_window_pos") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ARB_window_pos                                           : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_ATI()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_ATI_draw_buffers ******
	
	isGL_ATI_draw_buffers = isExtensionSupported("GL_ATI_draw_buffers");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_draw_buffers ) // || isSEDEnable()
	{

		glDrawBuffersATI = (PFNGLDRAWBUFFERSATIPROC) getExtensionPtr( "glDrawBuffersATI" );
		if ( glDrawBuffersATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_draw_buffers || isSEDEnable() )
	
	if ( isGL_ATI_draw_buffers )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_draw_buffers                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_draw_buffers                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_draw_buffers") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_draw_buffers                                         : not detected." );
	}
	
	// ****** GL_ATI_element_array ******
	
	isGL_ATI_element_array = isExtensionSupported("GL_ATI_element_array");
	
	localSupportedProcCount		= 3;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_element_array ) // || isSEDEnable()
	{

		glElementPointerATI = (PFNGLELEMENTPOINTERATIPROC) getExtensionPtr( "glElementPointerATI" );
		if ( glElementPointerATI != 0 )	++localInitializedProcCount;

		glDrawElementArrayATI = (PFNGLDRAWELEMENTARRAYATIPROC) getExtensionPtr( "glDrawElementArrayATI" );
		if ( glDrawElementArrayATI != 0 )	++localInitializedProcCount;

		glDrawRangeElementArrayATI = (PFNGLDRAWRANGEELEMENTARRAYATIPROC) getExtensionPtr( "glDrawRangeElementArrayATI" );
		if ( glDrawRangeElementArrayATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_element_array || isSEDEnable() )
	
	if ( isGL_ATI_element_array )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_element_array                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_element_array                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_element_array") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_element_array                                        : not detected." );
	}
	
	// ****** GL_ATI_envmap_bumpmap ******
	
	isGL_ATI_envmap_bumpmap = isExtensionSupported("GL_ATI_envmap_bumpmap");
	
	localSupportedProcCount		= 4;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_envmap_bumpmap ) // || isSEDEnable()
	{

		glTexBumpParameterivATI = (PFNGLTEXBUMPPARAMETERIVATIPROC) getExtensionPtr( "glTexBumpParameterivATI" );
		if ( glTexBumpParameterivATI != 0 )	++localInitializedProcCount;

		glTexBumpParameterfvATI = (PFNGLTEXBUMPPARAMETERFVATIPROC) getExtensionPtr( "glTexBumpParameterfvATI" );
		if ( glTexBumpParameterfvATI != 0 )	++localInitializedProcCount;

		glGetTexBumpParameterivATI = (PFNGLGETTEXBUMPPARAMETERIVATIPROC) getExtensionPtr( "glGetTexBumpParameterivATI" );
		if ( glGetTexBumpParameterivATI != 0 )	++localInitializedProcCount;

		glGetTexBumpParameterfvATI = (PFNGLGETTEXBUMPPARAMETERFVATIPROC) getExtensionPtr( "glGetTexBumpParameterfvATI" );
		if ( glGetTexBumpParameterfvATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_envmap_bumpmap || isSEDEnable() )
	
	if ( isGL_ATI_envmap_bumpmap )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_envmap_bumpmap                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_envmap_bumpmap                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_envmap_bumpmap") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_envmap_bumpmap                                       : not detected." );
	}
	
	// ****** GL_ATI_fragment_shader ******
	
	isGL_ATI_fragment_shader = isExtensionSupported("GL_ATI_fragment_shader");
	
	localSupportedProcCount		= 14;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_fragment_shader ) // || isSEDEnable()
	{

		glGenFragmentShadersATI = (PFNGLGENFRAGMENTSHADERSATIPROC) getExtensionPtr( "glGenFragmentShadersATI" );
		if ( glGenFragmentShadersATI != 0 )	++localInitializedProcCount;

		glBindFragmentShaderATI = (PFNGLBINDFRAGMENTSHADERATIPROC) getExtensionPtr( "glBindFragmentShaderATI" );
		if ( glBindFragmentShaderATI != 0 )	++localInitializedProcCount;

		glDeleteFragmentShaderATI = (PFNGLDELETEFRAGMENTSHADERATIPROC) getExtensionPtr( "glDeleteFragmentShaderATI" );
		if ( glDeleteFragmentShaderATI != 0 )	++localInitializedProcCount;

		glBeginFragmentShaderATI = (PFNGLBEGINFRAGMENTSHADERATIPROC) getExtensionPtr( "glBeginFragmentShaderATI" );
		if ( glBeginFragmentShaderATI != 0 )	++localInitializedProcCount;

		glEndFragmentShaderATI = (PFNGLENDFRAGMENTSHADERATIPROC) getExtensionPtr( "glEndFragmentShaderATI" );
		if ( glEndFragmentShaderATI != 0 )	++localInitializedProcCount;

		glPassTexCoordATI = (PFNGLPASSTEXCOORDATIPROC) getExtensionPtr( "glPassTexCoordATI" );
		if ( glPassTexCoordATI != 0 )	++localInitializedProcCount;

		glSampleMapATI = (PFNGLSAMPLEMAPATIPROC) getExtensionPtr( "glSampleMapATI" );
		if ( glSampleMapATI != 0 )	++localInitializedProcCount;

		glColorFragmentOp1ATI = (PFNGLCOLORFRAGMENTOP1ATIPROC) getExtensionPtr( "glColorFragmentOp1ATI" );
		if ( glColorFragmentOp1ATI != 0 )	++localInitializedProcCount;

		glColorFragmentOp2ATI = (PFNGLCOLORFRAGMENTOP2ATIPROC) getExtensionPtr( "glColorFragmentOp2ATI" );
		if ( glColorFragmentOp2ATI != 0 )	++localInitializedProcCount;

		glColorFragmentOp3ATI = (PFNGLCOLORFRAGMENTOP3ATIPROC) getExtensionPtr( "glColorFragmentOp3ATI" );
		if ( glColorFragmentOp3ATI != 0 )	++localInitializedProcCount;

		glAlphaFragmentOp1ATI = (PFNGLALPHAFRAGMENTOP1ATIPROC) getExtensionPtr( "glAlphaFragmentOp1ATI" );
		if ( glAlphaFragmentOp1ATI != 0 )	++localInitializedProcCount;

		glAlphaFragmentOp2ATI = (PFNGLALPHAFRAGMENTOP2ATIPROC) getExtensionPtr( "glAlphaFragmentOp2ATI" );
		if ( glAlphaFragmentOp2ATI != 0 )	++localInitializedProcCount;

		glAlphaFragmentOp3ATI = (PFNGLALPHAFRAGMENTOP3ATIPROC) getExtensionPtr( "glAlphaFragmentOp3ATI" );
		if ( glAlphaFragmentOp3ATI != 0 )	++localInitializedProcCount;

		glSetFragmentShaderConstantATI = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC) getExtensionPtr( "glSetFragmentShaderConstantATI" );
		if ( glSetFragmentShaderConstantATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_fragment_shader || isSEDEnable() )
	
	if ( isGL_ATI_fragment_shader )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_fragment_shader                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_fragment_shader                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_fragment_shader") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_fragment_shader                                      : not detected." );
	}
	
	// ****** GL_ATI_map_object_buffer ******
	
	isGL_ATI_map_object_buffer = isExtensionSupported("GL_ATI_map_object_buffer");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_map_object_buffer ) // || isSEDEnable()
	{

		glMapObjectBufferATI = (PFNGLMAPOBJECTBUFFERATIPROC) getExtensionPtr( "glMapObjectBufferATI" );
		if ( glMapObjectBufferATI != 0 )	++localInitializedProcCount;

		glUnmapObjectBufferATI = (PFNGLUNMAPOBJECTBUFFERATIPROC) getExtensionPtr( "glUnmapObjectBufferATI" );
		if ( glUnmapObjectBufferATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_map_object_buffer || isSEDEnable() )
	
	if ( isGL_ATI_map_object_buffer )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_map_object_buffer                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_map_object_buffer                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_map_object_buffer") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_map_object_buffer                                    : not detected." );
	}
	
	// ****** GL_ATI_pixel_format_float ******
	
	isGL_ATI_pixel_format_float = isExtensionSupported("GL_ATI_pixel_format_float");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ATI_pixel_format_float )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_pixel_format_float                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_pixel_format_float                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_pixel_format_float") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_pixel_format_float                                   : not detected." );
	}
	
	// ****** GL_ATI_pn_triangles ******
	
	isGL_ATI_pn_triangles = isExtensionSupported("GL_ATI_pn_triangles");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_pn_triangles ) // || isSEDEnable()
	{

		glPNTrianglesiATI = (PFNGLPNTRIANGLESIATIPROC) getExtensionPtr( "glPNTrianglesiATI" );
		if ( glPNTrianglesiATI != 0 )	++localInitializedProcCount;

		glPNTrianglesfATI = (PFNGLPNTRIANGLESFATIPROC) getExtensionPtr( "glPNTrianglesfATI" );
		if ( glPNTrianglesfATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_pn_triangles || isSEDEnable() )
	
	if ( isGL_ATI_pn_triangles )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_pn_triangles                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_pn_triangles                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_pn_triangles") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_pn_triangles                                         : not detected." );
	}
	
	// ****** GL_ATI_separate_stencil ******
	
	isGL_ATI_separate_stencil = isExtensionSupported("GL_ATI_separate_stencil");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_separate_stencil ) // || isSEDEnable()
	{

		glStencilOpSeparateATI = (PFNGLSTENCILOPSEPARATEATIPROC) getExtensionPtr( "glStencilOpSeparateATI" );
		if ( glStencilOpSeparateATI != 0 )	++localInitializedProcCount;

		glStencilFuncSeparateATI = (PFNGLSTENCILFUNCSEPARATEATIPROC) getExtensionPtr( "glStencilFuncSeparateATI" );
		if ( glStencilFuncSeparateATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_separate_stencil || isSEDEnable() )
	
	if ( isGL_ATI_separate_stencil )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_separate_stencil                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_separate_stencil                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_separate_stencil") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_separate_stencil                                     : not detected." );
	}
	
	// ****** GL_ATI_text_fragment_shader ******
	
	isGL_ATI_text_fragment_shader = isExtensionSupported("GL_ATI_text_fragment_shader");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ATI_text_fragment_shader )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_text_fragment_shader                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_text_fragment_shader                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_text_fragment_shader") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_text_fragment_shader                                 : not detected." );
	}
	
	// ****** GL_ATI_texture_env_combine3 ******
	
	isGL_ATI_texture_env_combine3 = isExtensionSupported("GL_ATI_texture_env_combine3");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ATI_texture_env_combine3 )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_texture_env_combine3                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_texture_env_combine3                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_texture_env_combine3") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_texture_env_combine3                                 : not detected." );
	}
	
	// ****** GL_ATI_texture_float ******
	
	isGL_ATI_texture_float = isExtensionSupported("GL_ATI_texture_float");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ATI_texture_float )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_texture_float                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_texture_float                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_texture_float") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_texture_float                                        : not detected." );
	}
	
	// ****** GL_ATI_texture_mirror_once ******
	
	isGL_ATI_texture_mirror_once = isExtensionSupported("GL_ATI_texture_mirror_once");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_ATI_texture_mirror_once )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_texture_mirror_once                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_texture_mirror_once                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_texture_mirror_once") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_texture_mirror_once                                  : not detected." );
	}
	
	// ****** GL_ATI_vertex_array_object ******
	
	isGL_ATI_vertex_array_object = isExtensionSupported("GL_ATI_vertex_array_object");
	
	localSupportedProcCount		= 12;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_vertex_array_object ) // || isSEDEnable()
	{

		glNewObjectBufferATI = (PFNGLNEWOBJECTBUFFERATIPROC) getExtensionPtr( "glNewObjectBufferATI" );
		if ( glNewObjectBufferATI != 0 )	++localInitializedProcCount;

		glIsObjectBufferATI = (PFNGLISOBJECTBUFFERATIPROC) getExtensionPtr( "glIsObjectBufferATI" );
		if ( glIsObjectBufferATI != 0 )	++localInitializedProcCount;

		glUpdateObjectBufferATI = (PFNGLUPDATEOBJECTBUFFERATIPROC) getExtensionPtr( "glUpdateObjectBufferATI" );
		if ( glUpdateObjectBufferATI != 0 )	++localInitializedProcCount;

		glGetObjectBufferfvATI = (PFNGLGETOBJECTBUFFERFVATIPROC) getExtensionPtr( "glGetObjectBufferfvATI" );
		if ( glGetObjectBufferfvATI != 0 )	++localInitializedProcCount;

		glGetObjectBufferivATI = (PFNGLGETOBJECTBUFFERIVATIPROC) getExtensionPtr( "glGetObjectBufferivATI" );
		if ( glGetObjectBufferivATI != 0 )	++localInitializedProcCount;

		glFreeObjectBufferATI = (PFNGLFREEOBJECTBUFFERATIPROC) getExtensionPtr( "glFreeObjectBufferATI" );
		if ( glFreeObjectBufferATI != 0 )	++localInitializedProcCount;

		glArrayObjectATI = (PFNGLARRAYOBJECTATIPROC) getExtensionPtr( "glArrayObjectATI" );
		if ( glArrayObjectATI != 0 )	++localInitializedProcCount;

		glGetArrayObjectfvATI = (PFNGLGETARRAYOBJECTFVATIPROC) getExtensionPtr( "glGetArrayObjectfvATI" );
		if ( glGetArrayObjectfvATI != 0 )	++localInitializedProcCount;

		glGetArrayObjectivATI = (PFNGLGETARRAYOBJECTIVATIPROC) getExtensionPtr( "glGetArrayObjectivATI" );
		if ( glGetArrayObjectivATI != 0 )	++localInitializedProcCount;

		glVariantArrayObjectATI = (PFNGLVARIANTARRAYOBJECTATIPROC) getExtensionPtr( "glVariantArrayObjectATI" );
		if ( glVariantArrayObjectATI != 0 )	++localInitializedProcCount;

		glGetVariantArrayObjectfvATI = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC) getExtensionPtr( "glGetVariantArrayObjectfvATI" );
		if ( glGetVariantArrayObjectfvATI != 0 )	++localInitializedProcCount;

		glGetVariantArrayObjectivATI = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC) getExtensionPtr( "glGetVariantArrayObjectivATI" );
		if ( glGetVariantArrayObjectivATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_vertex_array_object || isSEDEnable() )
	
	if ( isGL_ATI_vertex_array_object )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_vertex_array_object                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_vertex_array_object                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_vertex_array_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_vertex_array_object                                  : not detected." );
	}
	
	// ****** GL_ATI_vertex_attrib_array_object ******
	
	isGL_ATI_vertex_attrib_array_object = isExtensionSupported("GL_ATI_vertex_attrib_array_object");
	
	localSupportedProcCount		= 3;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_vertex_attrib_array_object ) // || isSEDEnable()
	{

		glVertexAttribArrayObjectATI = (PFNGLVERTEXATTRIBARRAYOBJECTATIPROC) getExtensionPtr( "glVertexAttribArrayObjectATI" );
		if ( glVertexAttribArrayObjectATI != 0 )	++localInitializedProcCount;

		glGetVertexAttribArrayObjectfvATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC) getExtensionPtr( "glGetVertexAttribArrayObjectfvATI" );
		if ( glGetVertexAttribArrayObjectfvATI != 0 )	++localInitializedProcCount;

		glGetVertexAttribArrayObjectivATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC) getExtensionPtr( "glGetVertexAttribArrayObjectivATI" );
		if ( glGetVertexAttribArrayObjectivATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_vertex_attrib_array_object || isSEDEnable() )
	
	if ( isGL_ATI_vertex_attrib_array_object )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_vertex_attrib_array_object                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_vertex_attrib_array_object                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_vertex_attrib_array_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_vertex_attrib_array_object                           : not detected." );
	}
	
	// ****** GL_ATI_vertex_streams ******
	
	isGL_ATI_vertex_streams = isExtensionSupported("GL_ATI_vertex_streams");
	
	localSupportedProcCount		= 45;
	localInitializedProcCount	= 0;
	
	if ( isGL_ATI_vertex_streams ) // || isSEDEnable()
	{

		glVertexStream1sATI = (PFNGLVERTEXSTREAM1SATIPROC) getExtensionPtr( "glVertexStream1sATI" );
		if ( glVertexStream1sATI != 0 )	++localInitializedProcCount;

		glVertexStream1svATI = (PFNGLVERTEXSTREAM1SVATIPROC) getExtensionPtr( "glVertexStream1svATI" );
		if ( glVertexStream1svATI != 0 )	++localInitializedProcCount;

		glVertexStream1iATI = (PFNGLVERTEXSTREAM1IATIPROC) getExtensionPtr( "glVertexStream1iATI" );
		if ( glVertexStream1iATI != 0 )	++localInitializedProcCount;

		glVertexStream1ivATI = (PFNGLVERTEXSTREAM1IVATIPROC) getExtensionPtr( "glVertexStream1ivATI" );
		if ( glVertexStream1ivATI != 0 )	++localInitializedProcCount;

		glVertexStream1fATI = (PFNGLVERTEXSTREAM1FATIPROC) getExtensionPtr( "glVertexStream1fATI" );
		if ( glVertexStream1fATI != 0 )	++localInitializedProcCount;

		glVertexStream1fvATI = (PFNGLVERTEXSTREAM1FVATIPROC) getExtensionPtr( "glVertexStream1fvATI" );
		if ( glVertexStream1fvATI != 0 )	++localInitializedProcCount;

		glVertexStream1dATI = (PFNGLVERTEXSTREAM1DATIPROC) getExtensionPtr( "glVertexStream1dATI" );
		if ( glVertexStream1dATI != 0 )	++localInitializedProcCount;

		glVertexStream1dvATI = (PFNGLVERTEXSTREAM1DVATIPROC) getExtensionPtr( "glVertexStream1dvATI" );
		if ( glVertexStream1dvATI != 0 )	++localInitializedProcCount;

		glVertexStream2sATI = (PFNGLVERTEXSTREAM2SATIPROC) getExtensionPtr( "glVertexStream2sATI" );
		if ( glVertexStream2sATI != 0 )	++localInitializedProcCount;

		glVertexStream2svATI = (PFNGLVERTEXSTREAM2SVATIPROC) getExtensionPtr( "glVertexStream2svATI" );
		if ( glVertexStream2svATI != 0 )	++localInitializedProcCount;

		glVertexStream2iATI = (PFNGLVERTEXSTREAM2IATIPROC) getExtensionPtr( "glVertexStream2iATI" );
		if ( glVertexStream2iATI != 0 )	++localInitializedProcCount;

		glVertexStream2ivATI = (PFNGLVERTEXSTREAM2IVATIPROC) getExtensionPtr( "glVertexStream2ivATI" );
		if ( glVertexStream2ivATI != 0 )	++localInitializedProcCount;

		glVertexStream2fATI = (PFNGLVERTEXSTREAM2FATIPROC) getExtensionPtr( "glVertexStream2fATI" );
		if ( glVertexStream2fATI != 0 )	++localInitializedProcCount;

		glVertexStream2fvATI = (PFNGLVERTEXSTREAM2FVATIPROC) getExtensionPtr( "glVertexStream2fvATI" );
		if ( glVertexStream2fvATI != 0 )	++localInitializedProcCount;

		glVertexStream2dATI = (PFNGLVERTEXSTREAM2DATIPROC) getExtensionPtr( "glVertexStream2dATI" );
		if ( glVertexStream2dATI != 0 )	++localInitializedProcCount;

		glVertexStream2dvATI = (PFNGLVERTEXSTREAM2DVATIPROC) getExtensionPtr( "glVertexStream2dvATI" );
		if ( glVertexStream2dvATI != 0 )	++localInitializedProcCount;

		glVertexStream3sATI = (PFNGLVERTEXSTREAM3SATIPROC) getExtensionPtr( "glVertexStream3sATI" );
		if ( glVertexStream3sATI != 0 )	++localInitializedProcCount;

		glVertexStream3svATI = (PFNGLVERTEXSTREAM3SVATIPROC) getExtensionPtr( "glVertexStream3svATI" );
		if ( glVertexStream3svATI != 0 )	++localInitializedProcCount;

		glVertexStream3iATI = (PFNGLVERTEXSTREAM3IATIPROC) getExtensionPtr( "glVertexStream3iATI" );
		if ( glVertexStream3iATI != 0 )	++localInitializedProcCount;

		glVertexStream3ivATI = (PFNGLVERTEXSTREAM3IVATIPROC) getExtensionPtr( "glVertexStream3ivATI" );
		if ( glVertexStream3ivATI != 0 )	++localInitializedProcCount;

		glVertexStream3fATI = (PFNGLVERTEXSTREAM3FATIPROC) getExtensionPtr( "glVertexStream3fATI" );
		if ( glVertexStream3fATI != 0 )	++localInitializedProcCount;

		glVertexStream3fvATI = (PFNGLVERTEXSTREAM3FVATIPROC) getExtensionPtr( "glVertexStream3fvATI" );
		if ( glVertexStream3fvATI != 0 )	++localInitializedProcCount;

		glVertexStream3dATI = (PFNGLVERTEXSTREAM3DATIPROC) getExtensionPtr( "glVertexStream3dATI" );
		if ( glVertexStream3dATI != 0 )	++localInitializedProcCount;

		glVertexStream3dvATI = (PFNGLVERTEXSTREAM3DVATIPROC) getExtensionPtr( "glVertexStream3dvATI" );
		if ( glVertexStream3dvATI != 0 )	++localInitializedProcCount;

		glVertexStream4sATI = (PFNGLVERTEXSTREAM4SATIPROC) getExtensionPtr( "glVertexStream4sATI" );
		if ( glVertexStream4sATI != 0 )	++localInitializedProcCount;

		glVertexStream4svATI = (PFNGLVERTEXSTREAM4SVATIPROC) getExtensionPtr( "glVertexStream4svATI" );
		if ( glVertexStream4svATI != 0 )	++localInitializedProcCount;

		glVertexStream4iATI = (PFNGLVERTEXSTREAM4IATIPROC) getExtensionPtr( "glVertexStream4iATI" );
		if ( glVertexStream4iATI != 0 )	++localInitializedProcCount;

		glVertexStream4ivATI = (PFNGLVERTEXSTREAM4IVATIPROC) getExtensionPtr( "glVertexStream4ivATI" );
		if ( glVertexStream4ivATI != 0 )	++localInitializedProcCount;

		glVertexStream4fATI = (PFNGLVERTEXSTREAM4FATIPROC) getExtensionPtr( "glVertexStream4fATI" );
		if ( glVertexStream4fATI != 0 )	++localInitializedProcCount;

		glVertexStream4fvATI = (PFNGLVERTEXSTREAM4FVATIPROC) getExtensionPtr( "glVertexStream4fvATI" );
		if ( glVertexStream4fvATI != 0 )	++localInitializedProcCount;

		glVertexStream4dATI = (PFNGLVERTEXSTREAM4DATIPROC) getExtensionPtr( "glVertexStream4dATI" );
		if ( glVertexStream4dATI != 0 )	++localInitializedProcCount;

		glVertexStream4dvATI = (PFNGLVERTEXSTREAM4DVATIPROC) getExtensionPtr( "glVertexStream4dvATI" );
		if ( glVertexStream4dvATI != 0 )	++localInitializedProcCount;

		glNormalStream3bATI = (PFNGLNORMALSTREAM3BATIPROC) getExtensionPtr( "glNormalStream3bATI" );
		if ( glNormalStream3bATI != 0 )	++localInitializedProcCount;

		glNormalStream3bvATI = (PFNGLNORMALSTREAM3BVATIPROC) getExtensionPtr( "glNormalStream3bvATI" );
		if ( glNormalStream3bvATI != 0 )	++localInitializedProcCount;

		glNormalStream3sATI = (PFNGLNORMALSTREAM3SATIPROC) getExtensionPtr( "glNormalStream3sATI" );
		if ( glNormalStream3sATI != 0 )	++localInitializedProcCount;

		glNormalStream3svATI = (PFNGLNORMALSTREAM3SVATIPROC) getExtensionPtr( "glNormalStream3svATI" );
		if ( glNormalStream3svATI != 0 )	++localInitializedProcCount;

		glNormalStream3iATI = (PFNGLNORMALSTREAM3IATIPROC) getExtensionPtr( "glNormalStream3iATI" );
		if ( glNormalStream3iATI != 0 )	++localInitializedProcCount;

		glNormalStream3ivATI = (PFNGLNORMALSTREAM3IVATIPROC) getExtensionPtr( "glNormalStream3ivATI" );
		if ( glNormalStream3ivATI != 0 )	++localInitializedProcCount;

		glNormalStream3fATI = (PFNGLNORMALSTREAM3FATIPROC) getExtensionPtr( "glNormalStream3fATI" );
		if ( glNormalStream3fATI != 0 )	++localInitializedProcCount;

		glNormalStream3fvATI = (PFNGLNORMALSTREAM3FVATIPROC) getExtensionPtr( "glNormalStream3fvATI" );
		if ( glNormalStream3fvATI != 0 )	++localInitializedProcCount;

		glNormalStream3dATI = (PFNGLNORMALSTREAM3DATIPROC) getExtensionPtr( "glNormalStream3dATI" );
		if ( glNormalStream3dATI != 0 )	++localInitializedProcCount;

		glNormalStream3dvATI = (PFNGLNORMALSTREAM3DVATIPROC) getExtensionPtr( "glNormalStream3dvATI" );
		if ( glNormalStream3dvATI != 0 )	++localInitializedProcCount;

		glClientActiveVertexStreamATI = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC) getExtensionPtr( "glClientActiveVertexStreamATI" );
		if ( glClientActiveVertexStreamATI != 0 )	++localInitializedProcCount;

		glVertexBlendEnviATI = (PFNGLVERTEXBLENDENVIATIPROC) getExtensionPtr( "glVertexBlendEnviATI" );
		if ( glVertexBlendEnviATI != 0 )	++localInitializedProcCount;

		glVertexBlendEnvfATI = (PFNGLVERTEXBLENDENVFATIPROC) getExtensionPtr( "glVertexBlendEnvfATI" );
		if ( glVertexBlendEnvfATI != 0 )	++localInitializedProcCount;
	} // if ( isGL_ATI_vertex_streams || isSEDEnable() )
	
	if ( isGL_ATI_vertex_streams )
	{
		std::stringstream strStream;
		strStream << "GL_ATI_vertex_streams                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_ATI_vertex_streams                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_ATI_vertex_streams") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_ATI_vertex_streams                                       : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_EXT()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_EXT_422_pixels ******
	
	isGL_EXT_422_pixels = isExtensionSupported("GL_EXT_422_pixels");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_422_pixels )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_422_pixels                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_422_pixels                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_422_pixels") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_422_pixels                                           : not detected." );
	}
	
	// ****** GL_EXT_abgr ******
	
	isGL_EXT_abgr = isExtensionSupported("GL_EXT_abgr");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_abgr )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_abgr                                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_abgr                                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_abgr") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_abgr                                                 : not detected." );
	}
	
	// ****** GL_EXT_bgra ******
	
	isGL_EXT_bgra = isExtensionSupported("GL_EXT_bgra");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_bgra )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_bgra                                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_bgra                                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_bgra") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_bgra                                                 : not detected." );
	}
	
	// ****** GL_EXT_bindable_uniform ******
	
	isGL_EXT_bindable_uniform = isExtensionSupported("GL_EXT_bindable_uniform");
	
	localSupportedProcCount		= 3;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_bindable_uniform ) // || isSEDEnable()
	{

		glUniformBufferEXT = (PFNGLUNIFORMBUFFEREXTPROC) getExtensionPtr( "glUniformBufferEXT" );
		if ( glUniformBufferEXT != 0 )	++localInitializedProcCount;

		glGetUniformBufferSizeEXT = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC) getExtensionPtr( "glGetUniformBufferSizeEXT" );
		if ( glGetUniformBufferSizeEXT != 0 )	++localInitializedProcCount;

		glGetUniformOffsetEXT = (PFNGLGETUNIFORMOFFSETEXTPROC) getExtensionPtr( "glGetUniformOffsetEXT" );
		if ( glGetUniformOffsetEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_bindable_uniform || isSEDEnable() )
	
	if ( isGL_EXT_bindable_uniform )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_bindable_uniform                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_bindable_uniform                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_bindable_uniform") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_bindable_uniform                                     : not detected." );
	}
	
	// ****** GL_EXT_blend_color ******
	
	isGL_EXT_blend_color = isExtensionSupported("GL_EXT_blend_color");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_blend_color ) // || isSEDEnable()
	{

		glBlendColorEXT = (PFNGLBLENDCOLOREXTPROC) getExtensionPtr( "glBlendColorEXT" );
		if ( glBlendColorEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_blend_color || isSEDEnable() )
	
	if ( isGL_EXT_blend_color )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_blend_color                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_blend_color                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_blend_color") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_blend_color                                          : not detected." );
	}
	
	// ****** GL_EXT_blend_equation_separate ******
	
	isGL_EXT_blend_equation_separate = isExtensionSupported("GL_EXT_blend_equation_separate");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_blend_equation_separate ) // || isSEDEnable()
	{

		glBlendEquationSeparateEXT = (PFNGLBLENDEQUATIONSEPARATEEXTPROC) getExtensionPtr( "glBlendEquationSeparateEXT" );
		if ( glBlendEquationSeparateEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_blend_equation_separate || isSEDEnable() )
	
	if ( isGL_EXT_blend_equation_separate )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_blend_equation_separate                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_blend_equation_separate                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_blend_equation_separate") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_blend_equation_separate                              : not detected." );
	}
	
	// ****** GL_EXT_blend_func_separate ******
	
	isGL_EXT_blend_func_separate = isExtensionSupported("GL_EXT_blend_func_separate");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_blend_func_separate ) // || isSEDEnable()
	{

		glBlendFuncSeparateEXT = (PFNGLBLENDFUNCSEPARATEEXTPROC) getExtensionPtr( "glBlendFuncSeparateEXT" );
		if ( glBlendFuncSeparateEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_blend_func_separate || isSEDEnable() )
	
	if ( isGL_EXT_blend_func_separate )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_blend_func_separate                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_blend_func_separate                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_blend_func_separate") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_blend_func_separate                                  : not detected." );
	}
	
	// ****** GL_EXT_blend_logic_op ******
	
	isGL_EXT_blend_logic_op = isExtensionSupported("GL_EXT_blend_logic_op");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_blend_logic_op )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_blend_logic_op                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_blend_logic_op                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_blend_logic_op") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_blend_logic_op                                       : not detected." );
	}
	
	// ****** GL_EXT_blend_minmax ******
	
	isGL_EXT_blend_minmax = isExtensionSupported("GL_EXT_blend_minmax");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_blend_minmax ) // || isSEDEnable()
	{

		glBlendEquationEXT = (PFNGLBLENDEQUATIONEXTPROC) getExtensionPtr( "glBlendEquationEXT" );
		if ( glBlendEquationEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_blend_minmax || isSEDEnable() )
	
	if ( isGL_EXT_blend_minmax )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_blend_minmax                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_blend_minmax                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_blend_minmax") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_blend_minmax                                         : not detected." );
	}
	
	// ****** GL_EXT_blend_subtract ******
	
	isGL_EXT_blend_subtract = isExtensionSupported("GL_EXT_blend_subtract");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_blend_subtract )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_blend_subtract                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_blend_subtract                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_blend_subtract") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_blend_subtract                                       : not detected." );
	}
	
	// ****** GL_EXT_clip_volume_hint ******
	
	isGL_EXT_clip_volume_hint = isExtensionSupported("GL_EXT_clip_volume_hint");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_clip_volume_hint )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_clip_volume_hint                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_clip_volume_hint                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_clip_volume_hint") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_clip_volume_hint                                     : not detected." );
	}
	
	// ****** GL_EXT_cmyka ******
	
	isGL_EXT_cmyka = isExtensionSupported("GL_EXT_cmyka");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_cmyka )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_cmyka                                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_cmyka                                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_cmyka") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_cmyka                                                : not detected." );
	}
	
	// ****** GL_EXT_color_subtable ******
	
	isGL_EXT_color_subtable = isExtensionSupported("GL_EXT_color_subtable");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_color_subtable ) // || isSEDEnable()
	{

		glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC) getExtensionPtr( "glColorSubTableEXT" );
		if ( glColorSubTableEXT != 0 )	++localInitializedProcCount;

		glCopyColorSubTableEXT = (PFNGLCOPYCOLORSUBTABLEEXTPROC) getExtensionPtr( "glCopyColorSubTableEXT" );
		if ( glCopyColorSubTableEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_color_subtable || isSEDEnable() )
	
	if ( isGL_EXT_color_subtable )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_color_subtable                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_color_subtable                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_color_subtable") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_color_subtable                                       : not detected." );
	}
	
	// ****** GL_EXT_compiled_vertex_array ******
	
	isGL_EXT_compiled_vertex_array = isExtensionSupported("GL_EXT_compiled_vertex_array");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_compiled_vertex_array ) // || isSEDEnable()
	{

		glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC) getExtensionPtr( "glLockArraysEXT" );
		if ( glLockArraysEXT != 0 )	++localInitializedProcCount;

		glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC) getExtensionPtr( "glUnlockArraysEXT" );
		if ( glUnlockArraysEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_compiled_vertex_array || isSEDEnable() )
	
	if ( isGL_EXT_compiled_vertex_array )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_compiled_vertex_array                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_compiled_vertex_array                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_compiled_vertex_array") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_compiled_vertex_array                                : not detected." );
	}
	
	// ****** GL_EXT_convolution ******
	
	isGL_EXT_convolution = isExtensionSupported("GL_EXT_convolution");
	
	localSupportedProcCount		= 13;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_convolution ) // || isSEDEnable()
	{

		glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC) getExtensionPtr( "glConvolutionFilter1DEXT" );
		if ( glConvolutionFilter1DEXT != 0 )	++localInitializedProcCount;

		glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC) getExtensionPtr( "glConvolutionFilter2DEXT" );
		if ( glConvolutionFilter2DEXT != 0 )	++localInitializedProcCount;

		glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC) getExtensionPtr( "glConvolutionParameterfEXT" );
		if ( glConvolutionParameterfEXT != 0 )	++localInitializedProcCount;

		glConvolutionParameterfvEXT = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC) getExtensionPtr( "glConvolutionParameterfvEXT" );
		if ( glConvolutionParameterfvEXT != 0 )	++localInitializedProcCount;

		glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC) getExtensionPtr( "glConvolutionParameteriEXT" );
		if ( glConvolutionParameteriEXT != 0 )	++localInitializedProcCount;

		glConvolutionParameterivEXT = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC) getExtensionPtr( "glConvolutionParameterivEXT" );
		if ( glConvolutionParameterivEXT != 0 )	++localInitializedProcCount;

		glCopyConvolutionFilter1DEXT = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC) getExtensionPtr( "glCopyConvolutionFilter1DEXT" );
		if ( glCopyConvolutionFilter1DEXT != 0 )	++localInitializedProcCount;

		glCopyConvolutionFilter2DEXT = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC) getExtensionPtr( "glCopyConvolutionFilter2DEXT" );
		if ( glCopyConvolutionFilter2DEXT != 0 )	++localInitializedProcCount;

		glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC) getExtensionPtr( "glGetConvolutionFilterEXT" );
		if ( glGetConvolutionFilterEXT != 0 )	++localInitializedProcCount;

		glGetConvolutionParameterfvEXT = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC) getExtensionPtr( "glGetConvolutionParameterfvEXT" );
		if ( glGetConvolutionParameterfvEXT != 0 )	++localInitializedProcCount;

		glGetConvolutionParameterivEXT = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC) getExtensionPtr( "glGetConvolutionParameterivEXT" );
		if ( glGetConvolutionParameterivEXT != 0 )	++localInitializedProcCount;

		glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC) getExtensionPtr( "glGetSeparableFilterEXT" );
		if ( glGetSeparableFilterEXT != 0 )	++localInitializedProcCount;

		glSeparableFilter2DEXT = (PFNGLSEPARABLEFILTER2DEXTPROC) getExtensionPtr( "glSeparableFilter2DEXT" );
		if ( glSeparableFilter2DEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_convolution || isSEDEnable() )
	
	if ( isGL_EXT_convolution )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_convolution                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_convolution                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_convolution") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_convolution                                          : not detected." );
	}
	
	// ****** GL_EXT_coordinate_frame ******
	
	isGL_EXT_coordinate_frame = isExtensionSupported("GL_EXT_coordinate_frame");
	
	localSupportedProcCount		= 22;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_coordinate_frame ) // || isSEDEnable()
	{

		glTangent3bEXT = (PFNGLTANGENT3BEXTPROC) getExtensionPtr( "glTangent3bEXT" );
		if ( glTangent3bEXT != 0 )	++localInitializedProcCount;

		glTangent3bvEXT = (PFNGLTANGENT3BVEXTPROC) getExtensionPtr( "glTangent3bvEXT" );
		if ( glTangent3bvEXT != 0 )	++localInitializedProcCount;

		glTangent3dEXT = (PFNGLTANGENT3DEXTPROC) getExtensionPtr( "glTangent3dEXT" );
		if ( glTangent3dEXT != 0 )	++localInitializedProcCount;

		glTangent3dvEXT = (PFNGLTANGENT3DVEXTPROC) getExtensionPtr( "glTangent3dvEXT" );
		if ( glTangent3dvEXT != 0 )	++localInitializedProcCount;

		glTangent3fEXT = (PFNGLTANGENT3FEXTPROC) getExtensionPtr( "glTangent3fEXT" );
		if ( glTangent3fEXT != 0 )	++localInitializedProcCount;

		glTangent3fvEXT = (PFNGLTANGENT3FVEXTPROC) getExtensionPtr( "glTangent3fvEXT" );
		if ( glTangent3fvEXT != 0 )	++localInitializedProcCount;

		glTangent3iEXT = (PFNGLTANGENT3IEXTPROC) getExtensionPtr( "glTangent3iEXT" );
		if ( glTangent3iEXT != 0 )	++localInitializedProcCount;

		glTangent3ivEXT = (PFNGLTANGENT3IVEXTPROC) getExtensionPtr( "glTangent3ivEXT" );
		if ( glTangent3ivEXT != 0 )	++localInitializedProcCount;

		glTangent3sEXT = (PFNGLTANGENT3SEXTPROC) getExtensionPtr( "glTangent3sEXT" );
		if ( glTangent3sEXT != 0 )	++localInitializedProcCount;

		glTangent3svEXT = (PFNGLTANGENT3SVEXTPROC) getExtensionPtr( "glTangent3svEXT" );
		if ( glTangent3svEXT != 0 )	++localInitializedProcCount;

		glBinormal3bEXT = (PFNGLBINORMAL3BEXTPROC) getExtensionPtr( "glBinormal3bEXT" );
		if ( glBinormal3bEXT != 0 )	++localInitializedProcCount;

		glBinormal3bvEXT = (PFNGLBINORMAL3BVEXTPROC) getExtensionPtr( "glBinormal3bvEXT" );
		if ( glBinormal3bvEXT != 0 )	++localInitializedProcCount;

		glBinormal3dEXT = (PFNGLBINORMAL3DEXTPROC) getExtensionPtr( "glBinormal3dEXT" );
		if ( glBinormal3dEXT != 0 )	++localInitializedProcCount;

		glBinormal3dvEXT = (PFNGLBINORMAL3DVEXTPROC) getExtensionPtr( "glBinormal3dvEXT" );
		if ( glBinormal3dvEXT != 0 )	++localInitializedProcCount;

		glBinormal3fEXT = (PFNGLBINORMAL3FEXTPROC) getExtensionPtr( "glBinormal3fEXT" );
		if ( glBinormal3fEXT != 0 )	++localInitializedProcCount;

		glBinormal3fvEXT = (PFNGLBINORMAL3FVEXTPROC) getExtensionPtr( "glBinormal3fvEXT" );
		if ( glBinormal3fvEXT != 0 )	++localInitializedProcCount;

		glBinormal3iEXT = (PFNGLBINORMAL3IEXTPROC) getExtensionPtr( "glBinormal3iEXT" );
		if ( glBinormal3iEXT != 0 )	++localInitializedProcCount;

		glBinormal3ivEXT = (PFNGLBINORMAL3IVEXTPROC) getExtensionPtr( "glBinormal3ivEXT" );
		if ( glBinormal3ivEXT != 0 )	++localInitializedProcCount;

		glBinormal3sEXT = (PFNGLBINORMAL3SEXTPROC) getExtensionPtr( "glBinormal3sEXT" );
		if ( glBinormal3sEXT != 0 )	++localInitializedProcCount;

		glBinormal3svEXT = (PFNGLBINORMAL3SVEXTPROC) getExtensionPtr( "glBinormal3svEXT" );
		if ( glBinormal3svEXT != 0 )	++localInitializedProcCount;

		glTangentPointerEXT = (PFNGLTANGENTPOINTEREXTPROC) getExtensionPtr( "glTangentPointerEXT" );
		if ( glTangentPointerEXT != 0 )	++localInitializedProcCount;

		glBinormalPointerEXT = (PFNGLBINORMALPOINTEREXTPROC) getExtensionPtr( "glBinormalPointerEXT" );
		if ( glBinormalPointerEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_coordinate_frame || isSEDEnable() )
	
	if ( isGL_EXT_coordinate_frame )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_coordinate_frame                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_coordinate_frame                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_coordinate_frame") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_coordinate_frame                                     : not detected." );
	}
	
	// ****** GL_EXT_copy_texture ******
	
	isGL_EXT_copy_texture = isExtensionSupported("GL_EXT_copy_texture");
	
	localSupportedProcCount		= 5;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_copy_texture ) // || isSEDEnable()
	{

		glCopyTexImage1DEXT = (PFNGLCOPYTEXIMAGE1DEXTPROC) getExtensionPtr( "glCopyTexImage1DEXT" );
		if ( glCopyTexImage1DEXT != 0 )	++localInitializedProcCount;

		glCopyTexImage2DEXT = (PFNGLCOPYTEXIMAGE2DEXTPROC) getExtensionPtr( "glCopyTexImage2DEXT" );
		if ( glCopyTexImage2DEXT != 0 )	++localInitializedProcCount;

		glCopyTexSubImage1DEXT = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC) getExtensionPtr( "glCopyTexSubImage1DEXT" );
		if ( glCopyTexSubImage1DEXT != 0 )	++localInitializedProcCount;

		glCopyTexSubImage2DEXT = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC) getExtensionPtr( "glCopyTexSubImage2DEXT" );
		if ( glCopyTexSubImage2DEXT != 0 )	++localInitializedProcCount;

		glCopyTexSubImage3DEXT = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC) getExtensionPtr( "glCopyTexSubImage3DEXT" );
		if ( glCopyTexSubImage3DEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_copy_texture || isSEDEnable() )
	
	if ( isGL_EXT_copy_texture )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_copy_texture                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_copy_texture                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_copy_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_copy_texture                                         : not detected." );
	}
	
	// ****** GL_EXT_cull_vertex ******
	
	isGL_EXT_cull_vertex = isExtensionSupported("GL_EXT_cull_vertex");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_cull_vertex ) // || isSEDEnable()
	{

		glCullParameterdvEXT = (PFNGLCULLPARAMETERDVEXTPROC) getExtensionPtr( "glCullParameterdvEXT" );
		if ( glCullParameterdvEXT != 0 )	++localInitializedProcCount;

		glCullParameterfvEXT = (PFNGLCULLPARAMETERFVEXTPROC) getExtensionPtr( "glCullParameterfvEXT" );
		if ( glCullParameterfvEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_cull_vertex || isSEDEnable() )
	
	if ( isGL_EXT_cull_vertex )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_cull_vertex                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_cull_vertex                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_cull_vertex") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_cull_vertex                                          : not detected." );
	}
	
	// ****** GL_EXT_depth_bounds_test ******
	
	isGL_EXT_depth_bounds_test = isExtensionSupported("GL_EXT_depth_bounds_test");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_depth_bounds_test ) // || isSEDEnable()
	{

		glDepthBoundsEXT = (PFNGLDEPTHBOUNDSEXTPROC) getExtensionPtr( "glDepthBoundsEXT" );
		if ( glDepthBoundsEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_depth_bounds_test || isSEDEnable() )
	
	if ( isGL_EXT_depth_bounds_test )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_depth_bounds_test                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_depth_bounds_test                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_depth_bounds_test") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_depth_bounds_test                                    : not detected." );
	}
	
	// ****** GL_EXT_draw_buffers2 ******
	
	isGL_EXT_draw_buffers2 = isExtensionSupported("GL_EXT_draw_buffers2");
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_draw_buffers2 ) // || isSEDEnable()
	{

		glColorMaskIndexedEXT = (PFNGLCOLORMASKINDEXEDEXTPROC) getExtensionPtr( "glColorMaskIndexedEXT" );
		if ( glColorMaskIndexedEXT != 0 )	++localInitializedProcCount;

		glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC) getExtensionPtr( "glGetBooleanIndexedvEXT" );
		if ( glGetBooleanIndexedvEXT != 0 )	++localInitializedProcCount;

		glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC) getExtensionPtr( "glGetIntegerIndexedvEXT" );
		if ( glGetIntegerIndexedvEXT != 0 )	++localInitializedProcCount;

		glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC) getExtensionPtr( "glEnableIndexedEXT" );
		if ( glEnableIndexedEXT != 0 )	++localInitializedProcCount;

		glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC) getExtensionPtr( "glDisableIndexedEXT" );
		if ( glDisableIndexedEXT != 0 )	++localInitializedProcCount;

		glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC) getExtensionPtr( "glIsEnabledIndexedEXT" );
		if ( glIsEnabledIndexedEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_draw_buffers2 || isSEDEnable() )
	
	if ( isGL_EXT_draw_buffers2 )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_draw_buffers2                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_draw_buffers2                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_draw_buffers2") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_draw_buffers2                                        : not detected." );
	}
	
	// ****** GL_EXT_draw_instanced ******
	
	isGL_EXT_draw_instanced = isExtensionSupported("GL_EXT_draw_instanced");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_draw_instanced ) // || isSEDEnable()
	{

		glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) getExtensionPtr( "glDrawArraysInstancedEXT" );
		if ( glDrawArraysInstancedEXT != 0 )	++localInitializedProcCount;

		glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) getExtensionPtr( "glDrawElementsInstancedEXT" );
		if ( glDrawElementsInstancedEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_draw_instanced || isSEDEnable() )
	
	if ( isGL_EXT_draw_instanced )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_draw_instanced                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_draw_instanced                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_draw_instanced") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_draw_instanced                                       : not detected." );
	}
	
	// ****** GL_EXT_draw_range_elements ******
	
	isGL_EXT_draw_range_elements = isExtensionSupported("GL_EXT_draw_range_elements");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_draw_range_elements ) // || isSEDEnable()
	{

		glDrawRangeElementsEXT = (PFNGLDRAWRANGEELEMENTSEXTPROC) getExtensionPtr( "glDrawRangeElementsEXT" );
		if ( glDrawRangeElementsEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_draw_range_elements || isSEDEnable() )
	
	if ( isGL_EXT_draw_range_elements )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_draw_range_elements                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_draw_range_elements                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_draw_range_elements") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_draw_range_elements                                  : not detected." );
	}
	
	// ****** GL_EXT_fog_coord ******
	
	isGL_EXT_fog_coord = isExtensionSupported("GL_EXT_fog_coord");
	
	localSupportedProcCount		= 5;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_fog_coord ) // || isSEDEnable()
	{

		glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC) getExtensionPtr( "glFogCoordfEXT" );
		if ( glFogCoordfEXT != 0 )	++localInitializedProcCount;

		glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC) getExtensionPtr( "glFogCoordfvEXT" );
		if ( glFogCoordfvEXT != 0 )	++localInitializedProcCount;

		glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC) getExtensionPtr( "glFogCoorddEXT" );
		if ( glFogCoorddEXT != 0 )	++localInitializedProcCount;

		glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC) getExtensionPtr( "glFogCoorddvEXT" );
		if ( glFogCoorddvEXT != 0 )	++localInitializedProcCount;

		glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC) getExtensionPtr( "glFogCoordPointerEXT" );
		if ( glFogCoordPointerEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_fog_coord || isSEDEnable() )
	
	if ( isGL_EXT_fog_coord )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_fog_coord                                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_fog_coord                                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_fog_coord") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_fog_coord                                            : not detected." );
	}
	
	// ****** GL_EXT_framebuffer_blit ******
	
	isGL_EXT_framebuffer_blit = isExtensionSupported("GL_EXT_framebuffer_blit");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_framebuffer_blit ) // || isSEDEnable()
	{

		glBlitFramebufferEXT = (PFNGLBLITFRAMEBUFFEREXTPROC) getExtensionPtr( "glBlitFramebufferEXT" );
		if ( glBlitFramebufferEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_framebuffer_blit || isSEDEnable() )
	
	if ( isGL_EXT_framebuffer_blit )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_framebuffer_blit                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_framebuffer_blit                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_framebuffer_blit") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_framebuffer_blit                                     : not detected." );
	}
	
	// ****** GL_EXT_framebuffer_multisample ******
	
	isGL_EXT_framebuffer_multisample = isExtensionSupported("GL_EXT_framebuffer_multisample");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_framebuffer_multisample ) // || isSEDEnable()
	{

		glRenderbufferStorageMultisampleEXT = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) getExtensionPtr( "glRenderbufferStorageMultisampleEXT" );
		if ( glRenderbufferStorageMultisampleEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_framebuffer_multisample || isSEDEnable() )
	
	if ( isGL_EXT_framebuffer_multisample )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_framebuffer_multisample                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_framebuffer_multisample                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_framebuffer_multisample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_framebuffer_multisample                              : not detected." );
	}
	
	// ****** GL_EXT_framebuffer_object ******
	
	isGL_EXT_framebuffer_object = isExtensionSupported("GL_EXT_framebuffer_object");
	
	localSupportedProcCount		= 17;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_framebuffer_object ) // || isSEDEnable()
	{

		glIsRenderbufferEXT = (PFNGLISRENDERBUFFEREXTPROC) getExtensionPtr( "glIsRenderbufferEXT" );
		if ( glIsRenderbufferEXT != 0 )	++localInitializedProcCount;

		glBindRenderbufferEXT = (PFNGLBINDRENDERBUFFEREXTPROC) getExtensionPtr( "glBindRenderbufferEXT" );
		if ( glBindRenderbufferEXT != 0 )	++localInitializedProcCount;

		glDeleteRenderbuffersEXT = (PFNGLDELETERENDERBUFFERSEXTPROC) getExtensionPtr( "glDeleteRenderbuffersEXT" );
		if ( glDeleteRenderbuffersEXT != 0 )	++localInitializedProcCount;

		glGenRenderbuffersEXT = (PFNGLGENRENDERBUFFERSEXTPROC) getExtensionPtr( "glGenRenderbuffersEXT" );
		if ( glGenRenderbuffersEXT != 0 )	++localInitializedProcCount;

		glRenderbufferStorageEXT = (PFNGLRENDERBUFFERSTORAGEEXTPROC) getExtensionPtr( "glRenderbufferStorageEXT" );
		if ( glRenderbufferStorageEXT != 0 )	++localInitializedProcCount;

		glGetRenderbufferParameterivEXT = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC) getExtensionPtr( "glGetRenderbufferParameterivEXT" );
		if ( glGetRenderbufferParameterivEXT != 0 )	++localInitializedProcCount;

		glIsFramebufferEXT = (PFNGLISFRAMEBUFFEREXTPROC) getExtensionPtr( "glIsFramebufferEXT" );
		if ( glIsFramebufferEXT != 0 )	++localInitializedProcCount;

		glBindFramebufferEXT = (PFNGLBINDFRAMEBUFFEREXTPROC) getExtensionPtr( "glBindFramebufferEXT" );
		if ( glBindFramebufferEXT != 0 )	++localInitializedProcCount;

		glDeleteFramebuffersEXT = (PFNGLDELETEFRAMEBUFFERSEXTPROC) getExtensionPtr( "glDeleteFramebuffersEXT" );
		if ( glDeleteFramebuffersEXT != 0 )	++localInitializedProcCount;

		glGenFramebuffersEXT = (PFNGLGENFRAMEBUFFERSEXTPROC) getExtensionPtr( "glGenFramebuffersEXT" );
		if ( glGenFramebuffersEXT != 0 )	++localInitializedProcCount;

		glCheckFramebufferStatusEXT = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC) getExtensionPtr( "glCheckFramebufferStatusEXT" );
		if ( glCheckFramebufferStatusEXT != 0 )	++localInitializedProcCount;

		glFramebufferTexture1DEXT = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC) getExtensionPtr( "glFramebufferTexture1DEXT" );
		if ( glFramebufferTexture1DEXT != 0 )	++localInitializedProcCount;

		glFramebufferTexture2DEXT = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC) getExtensionPtr( "glFramebufferTexture2DEXT" );
		if ( glFramebufferTexture2DEXT != 0 )	++localInitializedProcCount;

		glFramebufferTexture3DEXT = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC) getExtensionPtr( "glFramebufferTexture3DEXT" );
		if ( glFramebufferTexture3DEXT != 0 )	++localInitializedProcCount;

		glFramebufferRenderbufferEXT = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC) getExtensionPtr( "glFramebufferRenderbufferEXT" );
		if ( glFramebufferRenderbufferEXT != 0 )	++localInitializedProcCount;

		glGetFramebufferAttachmentParameterivEXT = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) getExtensionPtr( "glGetFramebufferAttachmentParameterivEXT" );
		if ( glGetFramebufferAttachmentParameterivEXT != 0 )	++localInitializedProcCount;

		glGenerateMipmapEXT = (PFNGLGENERATEMIPMAPEXTPROC) getExtensionPtr( "glGenerateMipmapEXT" );
		if ( glGenerateMipmapEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_framebuffer_object || isSEDEnable() )
	
	if ( isGL_EXT_framebuffer_object )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_framebuffer_object                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_framebuffer_object                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_framebuffer_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_framebuffer_object                                   : not detected." );
	}
	
	// ****** GL_EXT_framebuffer_sRGB ******
	
	isGL_EXT_framebuffer_sRGB = isExtensionSupported("GL_EXT_framebuffer_sRGB");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_framebuffer_sRGB )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_framebuffer_sRGB                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_framebuffer_sRGB                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_framebuffer_sRGB") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_framebuffer_sRGB                                     : not detected." );
	}
	
	// ****** GL_EXT_geometry_shader4 ******
	
	isGL_EXT_geometry_shader4 = isExtensionSupported("GL_EXT_geometry_shader4");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_geometry_shader4 ) // || isSEDEnable()
	{

		glProgramParameteriEXT = (PFNGLPROGRAMPARAMETERIEXTPROC) getExtensionPtr( "glProgramParameteriEXT" );
		if ( glProgramParameteriEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_geometry_shader4 || isSEDEnable() )
	
	if ( isGL_EXT_geometry_shader4 )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_geometry_shader4                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_geometry_shader4                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_geometry_shader4") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_geometry_shader4                                     : not detected." );
	}
	
	// ****** GL_EXT_gpu_program_parameters ******
	
	isGL_EXT_gpu_program_parameters = isExtensionSupported("GL_EXT_gpu_program_parameters");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_gpu_program_parameters ) // || isSEDEnable()
	{

		glProgramEnvParameters4fvEXT = (PFNGLPROGRAMENVPARAMETERS4FVEXTPROC) getExtensionPtr( "glProgramEnvParameters4fvEXT" );
		if ( glProgramEnvParameters4fvEXT != 0 )	++localInitializedProcCount;

		glProgramLocalParameters4fvEXT = (PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC) getExtensionPtr( "glProgramLocalParameters4fvEXT" );
		if ( glProgramLocalParameters4fvEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_gpu_program_parameters || isSEDEnable() )
	
	if ( isGL_EXT_gpu_program_parameters )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_gpu_program_parameters                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_gpu_program_parameters                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_gpu_program_parameters") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_gpu_program_parameters                               : not detected." );
	}
	
	// ****** GL_EXT_gpu_shader4 ******
	
	isGL_EXT_gpu_shader4 = isExtensionSupported("GL_EXT_gpu_shader4");
	
	localSupportedProcCount		= 11;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_gpu_shader4 ) // || isSEDEnable()
	{

		glGetUniformuivEXT = (PFNGLGETUNIFORMUIVEXTPROC) getExtensionPtr( "glGetUniformuivEXT" );
		if ( glGetUniformuivEXT != 0 )	++localInitializedProcCount;

		glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC) getExtensionPtr( "glBindFragDataLocationEXT" );
		if ( glBindFragDataLocationEXT != 0 )	++localInitializedProcCount;

		glGetFragDataLocationEXT = (PFNGLGETFRAGDATALOCATIONEXTPROC) getExtensionPtr( "glGetFragDataLocationEXT" );
		if ( glGetFragDataLocationEXT != 0 )	++localInitializedProcCount;

		glUniform1uiEXT = (PFNGLUNIFORM1UIEXTPROC) getExtensionPtr( "glUniform1uiEXT" );
		if ( glUniform1uiEXT != 0 )	++localInitializedProcCount;

		glUniform2uiEXT = (PFNGLUNIFORM2UIEXTPROC) getExtensionPtr( "glUniform2uiEXT" );
		if ( glUniform2uiEXT != 0 )	++localInitializedProcCount;

		glUniform3uiEXT = (PFNGLUNIFORM3UIEXTPROC) getExtensionPtr( "glUniform3uiEXT" );
		if ( glUniform3uiEXT != 0 )	++localInitializedProcCount;

		glUniform4uiEXT = (PFNGLUNIFORM4UIEXTPROC) getExtensionPtr( "glUniform4uiEXT" );
		if ( glUniform4uiEXT != 0 )	++localInitializedProcCount;

		glUniform1uivEXT = (PFNGLUNIFORM1UIVEXTPROC) getExtensionPtr( "glUniform1uivEXT" );
		if ( glUniform1uivEXT != 0 )	++localInitializedProcCount;

		glUniform2uivEXT = (PFNGLUNIFORM2UIVEXTPROC) getExtensionPtr( "glUniform2uivEXT" );
		if ( glUniform2uivEXT != 0 )	++localInitializedProcCount;

		glUniform3uivEXT = (PFNGLUNIFORM3UIVEXTPROC) getExtensionPtr( "glUniform3uivEXT" );
		if ( glUniform3uivEXT != 0 )	++localInitializedProcCount;

		glUniform4uivEXT = (PFNGLUNIFORM4UIVEXTPROC) getExtensionPtr( "glUniform4uivEXT" );
		if ( glUniform4uivEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_gpu_shader4 || isSEDEnable() )
	
	if ( isGL_EXT_gpu_shader4 )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_gpu_shader4                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_gpu_shader4                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_gpu_shader4") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_gpu_shader4                                          : not detected." );
	}
	
	// ****** GL_EXT_histogram ******
	
	isGL_EXT_histogram = isExtensionSupported("GL_EXT_histogram");
	
	localSupportedProcCount		= 10;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_histogram ) // || isSEDEnable()
	{

		glGetHistogramEXT = (PFNGLGETHISTOGRAMEXTPROC) getExtensionPtr( "glGetHistogramEXT" );
		if ( glGetHistogramEXT != 0 )	++localInitializedProcCount;

		glGetHistogramParameterfvEXT = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC) getExtensionPtr( "glGetHistogramParameterfvEXT" );
		if ( glGetHistogramParameterfvEXT != 0 )	++localInitializedProcCount;

		glGetHistogramParameterivEXT = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC) getExtensionPtr( "glGetHistogramParameterivEXT" );
		if ( glGetHistogramParameterivEXT != 0 )	++localInitializedProcCount;

		glGetMinmaxEXT = (PFNGLGETMINMAXEXTPROC) getExtensionPtr( "glGetMinmaxEXT" );
		if ( glGetMinmaxEXT != 0 )	++localInitializedProcCount;

		glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC) getExtensionPtr( "glGetMinmaxParameterfvEXT" );
		if ( glGetMinmaxParameterfvEXT != 0 )	++localInitializedProcCount;

		glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC) getExtensionPtr( "glGetMinmaxParameterivEXT" );
		if ( glGetMinmaxParameterivEXT != 0 )	++localInitializedProcCount;

		glHistogramEXT = (PFNGLHISTOGRAMEXTPROC) getExtensionPtr( "glHistogramEXT" );
		if ( glHistogramEXT != 0 )	++localInitializedProcCount;

		glMinmaxEXT = (PFNGLMINMAXEXTPROC) getExtensionPtr( "glMinmaxEXT" );
		if ( glMinmaxEXT != 0 )	++localInitializedProcCount;

		glResetHistogramEXT = (PFNGLRESETHISTOGRAMEXTPROC) getExtensionPtr( "glResetHistogramEXT" );
		if ( glResetHistogramEXT != 0 )	++localInitializedProcCount;

		glResetMinmaxEXT = (PFNGLRESETMINMAXEXTPROC) getExtensionPtr( "glResetMinmaxEXT" );
		if ( glResetMinmaxEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_histogram || isSEDEnable() )
	
	if ( isGL_EXT_histogram )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_histogram                                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_histogram                                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_histogram") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_histogram                                            : not detected." );
	}
	
	// ****** GL_EXT_index_array_formats ******
	
	isGL_EXT_index_array_formats = isExtensionSupported("GL_EXT_index_array_formats");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_index_array_formats )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_index_array_formats                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_index_array_formats                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_index_array_formats") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_index_array_formats                                  : not detected." );
	}
	
	// ****** GL_EXT_index_func ******
	
	isGL_EXT_index_func = isExtensionSupported("GL_EXT_index_func");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_index_func ) // || isSEDEnable()
	{

		glIndexFuncEXT = (PFNGLINDEXFUNCEXTPROC) getExtensionPtr( "glIndexFuncEXT" );
		if ( glIndexFuncEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_index_func || isSEDEnable() )
	
	if ( isGL_EXT_index_func )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_index_func                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_index_func                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_index_func") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_index_func                                           : not detected." );
	}
	
	// ****** GL_EXT_index_material ******
	
	isGL_EXT_index_material = isExtensionSupported("GL_EXT_index_material");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_index_material ) // || isSEDEnable()
	{

		glIndexMaterialEXT = (PFNGLINDEXMATERIALEXTPROC) getExtensionPtr( "glIndexMaterialEXT" );
		if ( glIndexMaterialEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_index_material || isSEDEnable() )
	
	if ( isGL_EXT_index_material )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_index_material                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_index_material                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_index_material") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_index_material                                       : not detected." );
	}
	
	// ****** GL_EXT_index_texture ******
	
	isGL_EXT_index_texture = isExtensionSupported("GL_EXT_index_texture");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_index_texture )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_index_texture                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_index_texture                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_index_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_index_texture                                        : not detected." );
	}
	
	// ****** GL_EXT_light_texture ******
	
	isGL_EXT_light_texture = isExtensionSupported("GL_EXT_light_texture");
	
	localSupportedProcCount		= 3;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_light_texture ) // || isSEDEnable()
	{

		glApplyTextureEXT = (PFNGLAPPLYTEXTUREEXTPROC) getExtensionPtr( "glApplyTextureEXT" );
		if ( glApplyTextureEXT != 0 )	++localInitializedProcCount;

		glTextureLightEXT = (PFNGLTEXTURELIGHTEXTPROC) getExtensionPtr( "glTextureLightEXT" );
		if ( glTextureLightEXT != 0 )	++localInitializedProcCount;

		glTextureMaterialEXT = (PFNGLTEXTUREMATERIALEXTPROC) getExtensionPtr( "glTextureMaterialEXT" );
		if ( glTextureMaterialEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_light_texture || isSEDEnable() )
	
	if ( isGL_EXT_light_texture )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_light_texture                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_light_texture                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_light_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_light_texture                                        : not detected." );
	}
	
	// ****** GL_EXT_misc_attribute ******
	
	isGL_EXT_misc_attribute = isExtensionSupported("GL_EXT_misc_attribute");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_misc_attribute )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_misc_attribute                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_misc_attribute                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_misc_attribute") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_misc_attribute                                       : not detected." );
	}
	
	// ****** GL_EXT_multi_draw_arrays ******
	
	isGL_EXT_multi_draw_arrays = isExtensionSupported("GL_EXT_multi_draw_arrays");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_multi_draw_arrays ) // || isSEDEnable()
	{

		glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC) getExtensionPtr( "glMultiDrawArraysEXT" );
		if ( glMultiDrawArraysEXT != 0 )	++localInitializedProcCount;

		glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC) getExtensionPtr( "glMultiDrawElementsEXT" );
		if ( glMultiDrawElementsEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_multi_draw_arrays || isSEDEnable() )
	
	if ( isGL_EXT_multi_draw_arrays )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_multi_draw_arrays                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_multi_draw_arrays                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_multi_draw_arrays") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_multi_draw_arrays                                    : not detected." );
	}
	
	// ****** GL_EXT_multisample ******
	
	isGL_EXT_multisample = isExtensionSupported("GL_EXT_multisample");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_multisample ) // || isSEDEnable()
	{

		glSampleMaskEXT = (PFNGLSAMPLEMASKEXTPROC) getExtensionPtr( "glSampleMaskEXT" );
		if ( glSampleMaskEXT != 0 )	++localInitializedProcCount;

		glSamplePatternEXT = (PFNGLSAMPLEPATTERNEXTPROC) getExtensionPtr( "glSamplePatternEXT" );
		if ( glSamplePatternEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_multisample || isSEDEnable() )
	
	if ( isGL_EXT_multisample )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_multisample                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_multisample                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_multisample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_multisample                                          : not detected." );
	}
	
	// ****** GL_EXT_packed_depth_stencil ******
	
	isGL_EXT_packed_depth_stencil = isExtensionSupported("GL_EXT_packed_depth_stencil");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_packed_depth_stencil )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_packed_depth_stencil                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_packed_depth_stencil                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_packed_depth_stencil") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_packed_depth_stencil                                 : not detected." );
	}
	
	// ****** GL_EXT_packed_float ******
	
	isGL_EXT_packed_float = isExtensionSupported("GL_EXT_packed_float");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_packed_float )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_packed_float                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_packed_float                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_packed_float") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_packed_float                                         : not detected." );
	}
	
	// ****** GL_EXT_packed_pixels ******
	
	isGL_EXT_packed_pixels = isExtensionSupported("GL_EXT_packed_pixels");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_packed_pixels )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_packed_pixels                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_packed_pixels                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_packed_pixels") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_packed_pixels                                        : not detected." );
	}
	
	// ****** GL_EXT_paletted_texture ******
	
	isGL_EXT_paletted_texture = isExtensionSupported("GL_EXT_paletted_texture");
	
	localSupportedProcCount		= 4;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_paletted_texture ) // || isSEDEnable()
	{

		glColorTableEXT = (PFNGLCOLORTABLEEXTPROC) getExtensionPtr( "glColorTableEXT" );
		if ( glColorTableEXT != 0 )	++localInitializedProcCount;

		glGetColorTableEXT = (PFNGLGETCOLORTABLEEXTPROC) getExtensionPtr( "glGetColorTableEXT" );
		if ( glGetColorTableEXT != 0 )	++localInitializedProcCount;

		glGetColorTableParameterivEXT = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC) getExtensionPtr( "glGetColorTableParameterivEXT" );
		if ( glGetColorTableParameterivEXT != 0 )	++localInitializedProcCount;

		glGetColorTableParameterfvEXT = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC) getExtensionPtr( "glGetColorTableParameterfvEXT" );
		if ( glGetColorTableParameterfvEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_paletted_texture || isSEDEnable() )
	
	if ( isGL_EXT_paletted_texture )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_paletted_texture                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_paletted_texture                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_paletted_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_paletted_texture                                     : not detected." );
	}
	
	// ****** GL_EXT_pixel_buffer_object ******
	
	isGL_EXT_pixel_buffer_object = isExtensionSupported("GL_EXT_pixel_buffer_object");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_pixel_buffer_object )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_pixel_buffer_object                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_pixel_buffer_object                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_pixel_buffer_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_pixel_buffer_object                                  : not detected." );
	}
	
	// ****** GL_EXT_pixel_transform ******
	
	isGL_EXT_pixel_transform = isExtensionSupported("GL_EXT_pixel_transform");
	
	localSupportedProcCount		= 4;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_pixel_transform ) // || isSEDEnable()
	{

		glPixelTransformParameteriEXT = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC) getExtensionPtr( "glPixelTransformParameteriEXT" );
		if ( glPixelTransformParameteriEXT != 0 )	++localInitializedProcCount;

		glPixelTransformParameterfEXT = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC) getExtensionPtr( "glPixelTransformParameterfEXT" );
		if ( glPixelTransformParameterfEXT != 0 )	++localInitializedProcCount;

		glPixelTransformParameterivEXT = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC) getExtensionPtr( "glPixelTransformParameterivEXT" );
		if ( glPixelTransformParameterivEXT != 0 )	++localInitializedProcCount;

		glPixelTransformParameterfvEXT = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC) getExtensionPtr( "glPixelTransformParameterfvEXT" );
		if ( glPixelTransformParameterfvEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_pixel_transform || isSEDEnable() )
	
	if ( isGL_EXT_pixel_transform )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_pixel_transform                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_pixel_transform                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_pixel_transform") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_pixel_transform                                      : not detected." );
	}
	
	// ****** GL_EXT_pixel_transform_color_table ******
	
	isGL_EXT_pixel_transform_color_table = isExtensionSupported("GL_EXT_pixel_transform_color_table");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_pixel_transform_color_table )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_pixel_transform_color_table                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_pixel_transform_color_table                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_pixel_transform_color_table") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_pixel_transform_color_table                          : not detected." );
	}
	
	// ****** GL_EXT_point_parameters ******
	
	isGL_EXT_point_parameters = isExtensionSupported("GL_EXT_point_parameters");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_point_parameters ) // || isSEDEnable()
	{

		glPointParameterfEXT = (PFNGLPOINTPARAMETERFEXTPROC) getExtensionPtr( "glPointParameterfEXT" );
		if ( glPointParameterfEXT != 0 )	++localInitializedProcCount;

		glPointParameterfvEXT = (PFNGLPOINTPARAMETERFVEXTPROC) getExtensionPtr( "glPointParameterfvEXT" );
		if ( glPointParameterfvEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_point_parameters || isSEDEnable() )
	
	if ( isGL_EXT_point_parameters )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_point_parameters                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_point_parameters                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_point_parameters") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_point_parameters                                     : not detected." );
	}
	
	// ****** GL_EXT_polygon_offset ******
	
	isGL_EXT_polygon_offset = isExtensionSupported("GL_EXT_polygon_offset");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_polygon_offset ) // || isSEDEnable()
	{

		glPolygonOffsetEXT = (PFNGLPOLYGONOFFSETEXTPROC) getExtensionPtr( "glPolygonOffsetEXT" );
		if ( glPolygonOffsetEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_polygon_offset || isSEDEnable() )
	
	if ( isGL_EXT_polygon_offset )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_polygon_offset                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_polygon_offset                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_polygon_offset") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_polygon_offset                                       : not detected." );
	}
	
	// ****** GL_EXT_rescale_normal ******
	
	isGL_EXT_rescale_normal = isExtensionSupported("GL_EXT_rescale_normal");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_rescale_normal )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_rescale_normal                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_rescale_normal                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_rescale_normal") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_rescale_normal                                       : not detected." );
	}
	
	// ****** GL_EXT_secondary_color ******
	
	isGL_EXT_secondary_color = isExtensionSupported("GL_EXT_secondary_color");
	
	localSupportedProcCount		= 17;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_secondary_color ) // || isSEDEnable()
	{

		glSecondaryColor3bEXT = (PFNGLSECONDARYCOLOR3BEXTPROC) getExtensionPtr( "glSecondaryColor3bEXT" );
		if ( glSecondaryColor3bEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3bvEXT = (PFNGLSECONDARYCOLOR3BVEXTPROC) getExtensionPtr( "glSecondaryColor3bvEXT" );
		if ( glSecondaryColor3bvEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3dEXT = (PFNGLSECONDARYCOLOR3DEXTPROC) getExtensionPtr( "glSecondaryColor3dEXT" );
		if ( glSecondaryColor3dEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3dvEXT = (PFNGLSECONDARYCOLOR3DVEXTPROC) getExtensionPtr( "glSecondaryColor3dvEXT" );
		if ( glSecondaryColor3dvEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3fEXT = (PFNGLSECONDARYCOLOR3FEXTPROC) getExtensionPtr( "glSecondaryColor3fEXT" );
		if ( glSecondaryColor3fEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3fvEXT = (PFNGLSECONDARYCOLOR3FVEXTPROC) getExtensionPtr( "glSecondaryColor3fvEXT" );
		if ( glSecondaryColor3fvEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3iEXT = (PFNGLSECONDARYCOLOR3IEXTPROC) getExtensionPtr( "glSecondaryColor3iEXT" );
		if ( glSecondaryColor3iEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3ivEXT = (PFNGLSECONDARYCOLOR3IVEXTPROC) getExtensionPtr( "glSecondaryColor3ivEXT" );
		if ( glSecondaryColor3ivEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3sEXT = (PFNGLSECONDARYCOLOR3SEXTPROC) getExtensionPtr( "glSecondaryColor3sEXT" );
		if ( glSecondaryColor3sEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3svEXT = (PFNGLSECONDARYCOLOR3SVEXTPROC) getExtensionPtr( "glSecondaryColor3svEXT" );
		if ( glSecondaryColor3svEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3ubEXT = (PFNGLSECONDARYCOLOR3UBEXTPROC) getExtensionPtr( "glSecondaryColor3ubEXT" );
		if ( glSecondaryColor3ubEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC) getExtensionPtr( "glSecondaryColor3ubvEXT" );
		if ( glSecondaryColor3ubvEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3uiEXT = (PFNGLSECONDARYCOLOR3UIEXTPROC) getExtensionPtr( "glSecondaryColor3uiEXT" );
		if ( glSecondaryColor3uiEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC) getExtensionPtr( "glSecondaryColor3uivEXT" );
		if ( glSecondaryColor3uivEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3usEXT = (PFNGLSECONDARYCOLOR3USEXTPROC) getExtensionPtr( "glSecondaryColor3usEXT" );
		if ( glSecondaryColor3usEXT != 0 )	++localInitializedProcCount;

		glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC) getExtensionPtr( "glSecondaryColor3usvEXT" );
		if ( glSecondaryColor3usvEXT != 0 )	++localInitializedProcCount;

		glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC) getExtensionPtr( "glSecondaryColorPointerEXT" );
		if ( glSecondaryColorPointerEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_secondary_color || isSEDEnable() )
	
	if ( isGL_EXT_secondary_color )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_secondary_color                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_secondary_color                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_secondary_color") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_secondary_color                                      : not detected." );
	}
	
	// ****** GL_EXT_separate_specular_color ******
	
	isGL_EXT_separate_specular_color = isExtensionSupported("GL_EXT_separate_specular_color");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_separate_specular_color )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_separate_specular_color                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_separate_specular_color                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_separate_specular_color") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_separate_specular_color                              : not detected." );
	}
	
	// ****** GL_EXT_shadow_funcs ******
	
	isGL_EXT_shadow_funcs = isExtensionSupported("GL_EXT_shadow_funcs");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_shadow_funcs )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_shadow_funcs                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_shadow_funcs                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_shadow_funcs") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_shadow_funcs                                         : not detected." );
	}
	
	// ****** GL_EXT_shared_texture_palette ******
	
	isGL_EXT_shared_texture_palette = isExtensionSupported("GL_EXT_shared_texture_palette");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_shared_texture_palette )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_shared_texture_palette                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_shared_texture_palette                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_shared_texture_palette") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_shared_texture_palette                               : not detected." );
	}
	
	// ****** GL_EXT_stencil_clear_tag ******
	
	isGL_EXT_stencil_clear_tag = isExtensionSupported("GL_EXT_stencil_clear_tag");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_stencil_clear_tag ) // || isSEDEnable()
	{

		glStencilClearTagEXT = (PFNGLSTENCILCLEARTAGEXTPROC) getExtensionPtr( "glStencilClearTagEXT" );
		if ( glStencilClearTagEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_stencil_clear_tag || isSEDEnable() )
	
	if ( isGL_EXT_stencil_clear_tag )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_stencil_clear_tag                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_stencil_clear_tag                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_stencil_clear_tag") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_stencil_clear_tag                                    : not detected." );
	}
	
	// ****** GL_EXT_stencil_two_side ******
	
	isGL_EXT_stencil_two_side = isExtensionSupported("GL_EXT_stencil_two_side");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_stencil_two_side ) // || isSEDEnable()
	{

		glActiveStencilFaceEXT = (PFNGLACTIVESTENCILFACEEXTPROC) getExtensionPtr( "glActiveStencilFaceEXT" );
		if ( glActiveStencilFaceEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_stencil_two_side || isSEDEnable() )
	
	if ( isGL_EXT_stencil_two_side )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_stencil_two_side                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_stencil_two_side                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_stencil_two_side") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_stencil_two_side                                     : not detected." );
	}
	
	// ****** GL_EXT_stencil_wrap ******
	
	isGL_EXT_stencil_wrap = isExtensionSupported("GL_EXT_stencil_wrap");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_stencil_wrap )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_stencil_wrap                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_stencil_wrap                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_stencil_wrap") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_stencil_wrap                                         : not detected." );
	}
	
	// ****** GL_EXT_subtexture ******
	
	isGL_EXT_subtexture = isExtensionSupported("GL_EXT_subtexture");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_subtexture ) // || isSEDEnable()
	{

		glTexSubImage1DEXT = (PFNGLTEXSUBIMAGE1DEXTPROC) getExtensionPtr( "glTexSubImage1DEXT" );
		if ( glTexSubImage1DEXT != 0 )	++localInitializedProcCount;

		glTexSubImage2DEXT = (PFNGLTEXSUBIMAGE2DEXTPROC) getExtensionPtr( "glTexSubImage2DEXT" );
		if ( glTexSubImage2DEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_subtexture || isSEDEnable() )
	
	if ( isGL_EXT_subtexture )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_subtexture                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_subtexture                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_subtexture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_subtexture                                           : not detected." );
	}
	
	// ****** GL_EXT_texture ******
	
	isGL_EXT_texture = isExtensionSupported("GL_EXT_texture");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture                                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture                                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture                                              : not detected." );
	}
	
	// ****** GL_EXT_texture3D ******
	
	isGL_EXT_texture3D = isExtensionSupported("GL_EXT_texture3D");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_texture3D ) // || isSEDEnable()
	{

		glTexImage3DEXT = (PFNGLTEXIMAGE3DEXTPROC) getExtensionPtr( "glTexImage3DEXT" );
		if ( glTexImage3DEXT != 0 )	++localInitializedProcCount;

		glTexSubImage3DEXT = (PFNGLTEXSUBIMAGE3DEXTPROC) getExtensionPtr( "glTexSubImage3DEXT" );
		if ( glTexSubImage3DEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_texture3D || isSEDEnable() )
	
	if ( isGL_EXT_texture3D )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture3D                                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture3D                                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture3D") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture3D                                            : not detected." );
	}
	
	// ****** GL_EXT_texture_array ******
	
	isGL_EXT_texture_array = isExtensionSupported("GL_EXT_texture_array");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_array )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_array                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_array                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_array") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_array                                        : not detected." );
	}
	
	// ****** GL_EXT_texture_buffer_object ******
	
	isGL_EXT_texture_buffer_object = isExtensionSupported("GL_EXT_texture_buffer_object");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_texture_buffer_object ) // || isSEDEnable()
	{

		glTexBufferEXT = (PFNGLTEXBUFFEREXTPROC) getExtensionPtr( "glTexBufferEXT" );
		if ( glTexBufferEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_texture_buffer_object || isSEDEnable() )
	
	if ( isGL_EXT_texture_buffer_object )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_buffer_object                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_buffer_object                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_buffer_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_buffer_object                                : not detected." );
	}
	
	// ****** GL_EXT_texture_compression_latc ******
	
	isGL_EXT_texture_compression_latc = isExtensionSupported("GL_EXT_texture_compression_latc");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_compression_latc )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_compression_latc                             : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_compression_latc                             : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_compression_latc") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_compression_latc                             : not detected." );
	}
	
	// ****** GL_EXT_texture_compression_rgtc ******
	
	isGL_EXT_texture_compression_rgtc = isExtensionSupported("GL_EXT_texture_compression_rgtc");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_compression_rgtc )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_compression_rgtc                             : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_compression_rgtc                             : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_compression_rgtc") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_compression_rgtc                             : not detected." );
	}
	
	// ****** GL_EXT_texture_compression_s3tc ******
	
	isGL_EXT_texture_compression_s3tc = isExtensionSupported("GL_EXT_texture_compression_s3tc");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_compression_s3tc )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_compression_s3tc                             : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_compression_s3tc                             : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_compression_s3tc") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_compression_s3tc                             : not detected." );
	}
	
	// ****** GL_EXT_texture_cube_map ******
	
	isGL_EXT_texture_cube_map = isExtensionSupported("GL_EXT_texture_cube_map");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_cube_map )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_cube_map                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_cube_map                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_cube_map") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_cube_map                                     : not detected." );
	}
	
	// ****** GL_EXT_texture_env_add ******
	
	isGL_EXT_texture_env_add = isExtensionSupported("GL_EXT_texture_env_add");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_env_add )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_env_add                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_env_add                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_env_add") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_env_add                                      : not detected." );
	}
	
	// ****** GL_EXT_texture_env_combine ******
	
	isGL_EXT_texture_env_combine = isExtensionSupported("GL_EXT_texture_env_combine");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_env_combine )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_env_combine                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_env_combine                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_env_combine") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_env_combine                                  : not detected." );
	}
	
	// ****** GL_EXT_texture_env_dot3 ******
	
	isGL_EXT_texture_env_dot3 = isExtensionSupported("GL_EXT_texture_env_dot3");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_env_dot3 )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_env_dot3                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_env_dot3                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_env_dot3") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_env_dot3                                     : not detected." );
	}
	
	// ****** GL_EXT_texture_filter_anisotropic ******
	
	isGL_EXT_texture_filter_anisotropic = isExtensionSupported("GL_EXT_texture_filter_anisotropic");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_filter_anisotropic )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_filter_anisotropic                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_filter_anisotropic                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_filter_anisotropic") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_filter_anisotropic                           : not detected." );
	}
	
	// ****** GL_EXT_texture_integer ******
	
	isGL_EXT_texture_integer = isExtensionSupported("GL_EXT_texture_integer");
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_texture_integer ) // || isSEDEnable()
	{

		glTexParameterIivEXT = (PFNGLTEXPARAMETERIIVEXTPROC) getExtensionPtr( "glTexParameterIivEXT" );
		if ( glTexParameterIivEXT != 0 )	++localInitializedProcCount;

		glTexParameterIuivEXT = (PFNGLTEXPARAMETERIUIVEXTPROC) getExtensionPtr( "glTexParameterIuivEXT" );
		if ( glTexParameterIuivEXT != 0 )	++localInitializedProcCount;

		glGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC) getExtensionPtr( "glGetTexParameterIivEXT" );
		if ( glGetTexParameterIivEXT != 0 )	++localInitializedProcCount;

		glGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC) getExtensionPtr( "glGetTexParameterIuivEXT" );
		if ( glGetTexParameterIuivEXT != 0 )	++localInitializedProcCount;

		glClearColorIiEXT = (PFNGLCLEARCOLORIIEXTPROC) getExtensionPtr( "glClearColorIiEXT" );
		if ( glClearColorIiEXT != 0 )	++localInitializedProcCount;

		glClearColorIuiEXT = (PFNGLCLEARCOLORIUIEXTPROC) getExtensionPtr( "glClearColorIuiEXT" );
		if ( glClearColorIuiEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_texture_integer || isSEDEnable() )
	
	if ( isGL_EXT_texture_integer )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_integer                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_integer                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_integer") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_integer                                      : not detected." );
	}
	
	// ****** GL_EXT_texture_lod_bias ******
	
	isGL_EXT_texture_lod_bias = isExtensionSupported("GL_EXT_texture_lod_bias");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_lod_bias )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_lod_bias                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_lod_bias                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_lod_bias") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_lod_bias                                     : not detected." );
	}
	
	// ****** GL_EXT_texture_mirror_clamp ******
	
	isGL_EXT_texture_mirror_clamp = isExtensionSupported("GL_EXT_texture_mirror_clamp");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_mirror_clamp )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_mirror_clamp                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_mirror_clamp                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_mirror_clamp") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_mirror_clamp                                 : not detected." );
	}
	
	// ****** GL_EXT_texture_object ******
	
	isGL_EXT_texture_object = isExtensionSupported("GL_EXT_texture_object");
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_texture_object ) // || isSEDEnable()
	{

		glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC) getExtensionPtr( "glAreTexturesResidentEXT" );
		if ( glAreTexturesResidentEXT != 0 )	++localInitializedProcCount;

		glBindTextureEXT = (PFNGLBINDTEXTUREEXTPROC) getExtensionPtr( "glBindTextureEXT" );
		if ( glBindTextureEXT != 0 )	++localInitializedProcCount;

		glDeleteTexturesEXT = (PFNGLDELETETEXTURESEXTPROC) getExtensionPtr( "glDeleteTexturesEXT" );
		if ( glDeleteTexturesEXT != 0 )	++localInitializedProcCount;

		glGenTexturesEXT = (PFNGLGENTEXTURESEXTPROC) getExtensionPtr( "glGenTexturesEXT" );
		if ( glGenTexturesEXT != 0 )	++localInitializedProcCount;

		glIsTextureEXT = (PFNGLISTEXTUREEXTPROC) getExtensionPtr( "glIsTextureEXT" );
		if ( glIsTextureEXT != 0 )	++localInitializedProcCount;

		glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC) getExtensionPtr( "glPrioritizeTexturesEXT" );
		if ( glPrioritizeTexturesEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_texture_object || isSEDEnable() )
	
	if ( isGL_EXT_texture_object )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_object                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_object                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_object                                       : not detected." );
	}
	
	// ****** GL_EXT_texture_perturb_normal ******
	
	isGL_EXT_texture_perturb_normal = isExtensionSupported("GL_EXT_texture_perturb_normal");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_texture_perturb_normal ) // || isSEDEnable()
	{

		glTextureNormalEXT = (PFNGLTEXTURENORMALEXTPROC) getExtensionPtr( "glTextureNormalEXT" );
		if ( glTextureNormalEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_texture_perturb_normal || isSEDEnable() )
	
	if ( isGL_EXT_texture_perturb_normal )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_perturb_normal                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_perturb_normal                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_perturb_normal") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_perturb_normal                               : not detected." );
	}
	
	// ****** GL_EXT_texture_sRGB ******
	
	isGL_EXT_texture_sRGB = isExtensionSupported("GL_EXT_texture_sRGB");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_sRGB )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_sRGB                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_sRGB                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_sRGB") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_sRGB                                         : not detected." );
	}
	
	// ****** GL_EXT_texture_shared_exponent ******
	
	isGL_EXT_texture_shared_exponent = isExtensionSupported("GL_EXT_texture_shared_exponent");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_EXT_texture_shared_exponent )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_texture_shared_exponent                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_texture_shared_exponent                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_texture_shared_exponent") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_texture_shared_exponent                              : not detected." );
	}
	
	// ****** GL_EXT_timer_query ******
	
	isGL_EXT_timer_query = isExtensionSupported("GL_EXT_timer_query");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_timer_query ) // || isSEDEnable()
	{

		glGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC) getExtensionPtr( "glGetQueryObjecti64vEXT" );
		if ( glGetQueryObjecti64vEXT != 0 )	++localInitializedProcCount;

		glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC) getExtensionPtr( "glGetQueryObjectui64vEXT" );
		if ( glGetQueryObjectui64vEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_timer_query || isSEDEnable() )
	
	if ( isGL_EXT_timer_query )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_timer_query                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_timer_query                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_timer_query") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_timer_query                                          : not detected." );
	}
	
	// ****** GL_EXT_vertex_array ******
	
	isGL_EXT_vertex_array = isExtensionSupported("GL_EXT_vertex_array");
	
	localSupportedProcCount		= 9;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_vertex_array ) // || isSEDEnable()
	{

		glArrayElementEXT = (PFNGLARRAYELEMENTEXTPROC) getExtensionPtr( "glArrayElementEXT" );
		if ( glArrayElementEXT != 0 )	++localInitializedProcCount;

		glColorPointerEXT = (PFNGLCOLORPOINTEREXTPROC) getExtensionPtr( "glColorPointerEXT" );
		if ( glColorPointerEXT != 0 )	++localInitializedProcCount;

		glDrawArraysEXT = (PFNGLDRAWARRAYSEXTPROC) getExtensionPtr( "glDrawArraysEXT" );
		if ( glDrawArraysEXT != 0 )	++localInitializedProcCount;

		glEdgeFlagPointerEXT = (PFNGLEDGEFLAGPOINTEREXTPROC) getExtensionPtr( "glEdgeFlagPointerEXT" );
		if ( glEdgeFlagPointerEXT != 0 )	++localInitializedProcCount;

		glGetPointervEXT = (PFNGLGETPOINTERVEXTPROC) getExtensionPtr( "glGetPointervEXT" );
		if ( glGetPointervEXT != 0 )	++localInitializedProcCount;

		glIndexPointerEXT = (PFNGLINDEXPOINTEREXTPROC) getExtensionPtr( "glIndexPointerEXT" );
		if ( glIndexPointerEXT != 0 )	++localInitializedProcCount;

		glNormalPointerEXT = (PFNGLNORMALPOINTEREXTPROC) getExtensionPtr( "glNormalPointerEXT" );
		if ( glNormalPointerEXT != 0 )	++localInitializedProcCount;

		glTexCoordPointerEXT = (PFNGLTEXCOORDPOINTEREXTPROC) getExtensionPtr( "glTexCoordPointerEXT" );
		if ( glTexCoordPointerEXT != 0 )	++localInitializedProcCount;

		glVertexPointerEXT = (PFNGLVERTEXPOINTEREXTPROC) getExtensionPtr( "glVertexPointerEXT" );
		if ( glVertexPointerEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_vertex_array || isSEDEnable() )
	
	if ( isGL_EXT_vertex_array )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_vertex_array                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_vertex_array                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_vertex_array") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_vertex_array                                         : not detected." );
	}
	
	// ****** GL_EXT_vertex_shader ******
	
	isGL_EXT_vertex_shader = isExtensionSupported("GL_EXT_vertex_shader");
	
	localSupportedProcCount		= 42;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_vertex_shader ) // || isSEDEnable()
	{

		glBeginVertexShaderEXT = (PFNGLBEGINVERTEXSHADEREXTPROC) getExtensionPtr( "glBeginVertexShaderEXT" );
		if ( glBeginVertexShaderEXT != 0 )	++localInitializedProcCount;

		glEndVertexShaderEXT = (PFNGLENDVERTEXSHADEREXTPROC) getExtensionPtr( "glEndVertexShaderEXT" );
		if ( glEndVertexShaderEXT != 0 )	++localInitializedProcCount;

		glBindVertexShaderEXT = (PFNGLBINDVERTEXSHADEREXTPROC) getExtensionPtr( "glBindVertexShaderEXT" );
		if ( glBindVertexShaderEXT != 0 )	++localInitializedProcCount;

		glGenVertexShadersEXT = (PFNGLGENVERTEXSHADERSEXTPROC) getExtensionPtr( "glGenVertexShadersEXT" );
		if ( glGenVertexShadersEXT != 0 )	++localInitializedProcCount;

		glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC) getExtensionPtr( "glDeleteVertexShaderEXT" );
		if ( glDeleteVertexShaderEXT != 0 )	++localInitializedProcCount;

		glShaderOp1EXT = (PFNGLSHADEROP1EXTPROC) getExtensionPtr( "glShaderOp1EXT" );
		if ( glShaderOp1EXT != 0 )	++localInitializedProcCount;

		glShaderOp2EXT = (PFNGLSHADEROP2EXTPROC) getExtensionPtr( "glShaderOp2EXT" );
		if ( glShaderOp2EXT != 0 )	++localInitializedProcCount;

		glShaderOp3EXT = (PFNGLSHADEROP3EXTPROC) getExtensionPtr( "glShaderOp3EXT" );
		if ( glShaderOp3EXT != 0 )	++localInitializedProcCount;

		glSwizzleEXT = (PFNGLSWIZZLEEXTPROC) getExtensionPtr( "glSwizzleEXT" );
		if ( glSwizzleEXT != 0 )	++localInitializedProcCount;

		glWriteMaskEXT = (PFNGLWRITEMASKEXTPROC) getExtensionPtr( "glWriteMaskEXT" );
		if ( glWriteMaskEXT != 0 )	++localInitializedProcCount;

		glInsertComponentEXT = (PFNGLINSERTCOMPONENTEXTPROC) getExtensionPtr( "glInsertComponentEXT" );
		if ( glInsertComponentEXT != 0 )	++localInitializedProcCount;

		glExtractComponentEXT = (PFNGLEXTRACTCOMPONENTEXTPROC) getExtensionPtr( "glExtractComponentEXT" );
		if ( glExtractComponentEXT != 0 )	++localInitializedProcCount;

		glGenSymbolsEXT = (PFNGLGENSYMBOLSEXTPROC) getExtensionPtr( "glGenSymbolsEXT" );
		if ( glGenSymbolsEXT != 0 )	++localInitializedProcCount;

		glSetInvariantEXT = (PFNGLSETINVARIANTEXTPROC) getExtensionPtr( "glSetInvariantEXT" );
		if ( glSetInvariantEXT != 0 )	++localInitializedProcCount;

		glSetLocalConstantEXT = (PFNGLSETLOCALCONSTANTEXTPROC) getExtensionPtr( "glSetLocalConstantEXT" );
		if ( glSetLocalConstantEXT != 0 )	++localInitializedProcCount;

		glVariantbvEXT = (PFNGLVARIANTBVEXTPROC) getExtensionPtr( "glVariantbvEXT" );
		if ( glVariantbvEXT != 0 )	++localInitializedProcCount;

		glVariantsvEXT = (PFNGLVARIANTSVEXTPROC) getExtensionPtr( "glVariantsvEXT" );
		if ( glVariantsvEXT != 0 )	++localInitializedProcCount;

		glVariantivEXT = (PFNGLVARIANTIVEXTPROC) getExtensionPtr( "glVariantivEXT" );
		if ( glVariantivEXT != 0 )	++localInitializedProcCount;

		glVariantfvEXT = (PFNGLVARIANTFVEXTPROC) getExtensionPtr( "glVariantfvEXT" );
		if ( glVariantfvEXT != 0 )	++localInitializedProcCount;

		glVariantdvEXT = (PFNGLVARIANTDVEXTPROC) getExtensionPtr( "glVariantdvEXT" );
		if ( glVariantdvEXT != 0 )	++localInitializedProcCount;

		glVariantubvEXT = (PFNGLVARIANTUBVEXTPROC) getExtensionPtr( "glVariantubvEXT" );
		if ( glVariantubvEXT != 0 )	++localInitializedProcCount;

		glVariantusvEXT = (PFNGLVARIANTUSVEXTPROC) getExtensionPtr( "glVariantusvEXT" );
		if ( glVariantusvEXT != 0 )	++localInitializedProcCount;

		glVariantuivEXT = (PFNGLVARIANTUIVEXTPROC) getExtensionPtr( "glVariantuivEXT" );
		if ( glVariantuivEXT != 0 )	++localInitializedProcCount;

		glVariantPointerEXT = (PFNGLVARIANTPOINTEREXTPROC) getExtensionPtr( "glVariantPointerEXT" );
		if ( glVariantPointerEXT != 0 )	++localInitializedProcCount;

		glEnableVariantClientStateEXT = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC) getExtensionPtr( "glEnableVariantClientStateEXT" );
		if ( glEnableVariantClientStateEXT != 0 )	++localInitializedProcCount;

		glDisableVariantClientStateEXT = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC) getExtensionPtr( "glDisableVariantClientStateEXT" );
		if ( glDisableVariantClientStateEXT != 0 )	++localInitializedProcCount;

		glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC) getExtensionPtr( "glBindLightParameterEXT" );
		if ( glBindLightParameterEXT != 0 )	++localInitializedProcCount;

		glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC) getExtensionPtr( "glBindMaterialParameterEXT" );
		if ( glBindMaterialParameterEXT != 0 )	++localInitializedProcCount;

		glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC) getExtensionPtr( "glBindTexGenParameterEXT" );
		if ( glBindTexGenParameterEXT != 0 )	++localInitializedProcCount;

		glBindTextureUnitParameterEXT = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC) getExtensionPtr( "glBindTextureUnitParameterEXT" );
		if ( glBindTextureUnitParameterEXT != 0 )	++localInitializedProcCount;

		glBindParameterEXT = (PFNGLBINDPARAMETEREXTPROC) getExtensionPtr( "glBindParameterEXT" );
		if ( glBindParameterEXT != 0 )	++localInitializedProcCount;

		glIsVariantEnabledEXT = (PFNGLISVARIANTENABLEDEXTPROC) getExtensionPtr( "glIsVariantEnabledEXT" );
		if ( glIsVariantEnabledEXT != 0 )	++localInitializedProcCount;

		glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC) getExtensionPtr( "glGetVariantBooleanvEXT" );
		if ( glGetVariantBooleanvEXT != 0 )	++localInitializedProcCount;

		glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC) getExtensionPtr( "glGetVariantIntegervEXT" );
		if ( glGetVariantIntegervEXT != 0 )	++localInitializedProcCount;

		glGetVariantFloatvEXT = (PFNGLGETVARIANTFLOATVEXTPROC) getExtensionPtr( "glGetVariantFloatvEXT" );
		if ( glGetVariantFloatvEXT != 0 )	++localInitializedProcCount;

		glGetVariantPointervEXT = (PFNGLGETVARIANTPOINTERVEXTPROC) getExtensionPtr( "glGetVariantPointervEXT" );
		if ( glGetVariantPointervEXT != 0 )	++localInitializedProcCount;

		glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC) getExtensionPtr( "glGetInvariantBooleanvEXT" );
		if ( glGetInvariantBooleanvEXT != 0 )	++localInitializedProcCount;

		glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC) getExtensionPtr( "glGetInvariantIntegervEXT" );
		if ( glGetInvariantIntegervEXT != 0 )	++localInitializedProcCount;

		glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC) getExtensionPtr( "glGetInvariantFloatvEXT" );
		if ( glGetInvariantFloatvEXT != 0 )	++localInitializedProcCount;

		glGetLocalConstantBooleanvEXT = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC) getExtensionPtr( "glGetLocalConstantBooleanvEXT" );
		if ( glGetLocalConstantBooleanvEXT != 0 )	++localInitializedProcCount;

		glGetLocalConstantIntegervEXT = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC) getExtensionPtr( "glGetLocalConstantIntegervEXT" );
		if ( glGetLocalConstantIntegervEXT != 0 )	++localInitializedProcCount;

		glGetLocalConstantFloatvEXT = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC) getExtensionPtr( "glGetLocalConstantFloatvEXT" );
		if ( glGetLocalConstantFloatvEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_vertex_shader || isSEDEnable() )
	
	if ( isGL_EXT_vertex_shader )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_vertex_shader                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_vertex_shader                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_vertex_shader") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_vertex_shader                                        : not detected." );
	}
	
	// ****** GL_EXT_vertex_weighting ******
	
	isGL_EXT_vertex_weighting = isExtensionSupported("GL_EXT_vertex_weighting");
	
	localSupportedProcCount		= 3;
	localInitializedProcCount	= 0;
	
	if ( isGL_EXT_vertex_weighting ) // || isSEDEnable()
	{

		glVertexWeightfEXT = (PFNGLVERTEXWEIGHTFEXTPROC) getExtensionPtr( "glVertexWeightfEXT" );
		if ( glVertexWeightfEXT != 0 )	++localInitializedProcCount;

		glVertexWeightfvEXT = (PFNGLVERTEXWEIGHTFVEXTPROC) getExtensionPtr( "glVertexWeightfvEXT" );
		if ( glVertexWeightfvEXT != 0 )	++localInitializedProcCount;

		glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC) getExtensionPtr( "glVertexWeightPointerEXT" );
		if ( glVertexWeightPointerEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_EXT_vertex_weighting || isSEDEnable() )
	
	if ( isGL_EXT_vertex_weighting )
	{
		std::stringstream strStream;
		strStream << "GL_EXT_vertex_weighting                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_EXT_vertex_weighting                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_EXT_vertex_weighting") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_EXT_vertex_weighting                                     : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_FfdMaskSGIX()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_FfdMaskSGIX ******
	
	isGL_FfdMaskSGIX = isExtensionSupported("GL_FfdMaskSGIX");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_FfdMaskSGIX )
	{
		std::stringstream strStream;
		strStream << "GL_FfdMaskSGIX                                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_FfdMaskSGIX                                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_FfdMaskSGIX") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_FfdMaskSGIX                                              : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_GREMEDY()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_GREMEDY_frame_terminator ******
	
	isGL_GREMEDY_frame_terminator = isExtensionSupported("GL_GREMEDY_frame_terminator");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_GREMEDY_frame_terminator ) // || isSEDEnable()
	{

		glFrameTerminatorGREMEDY = (PFNGLFRAMETERMINATORGREMEDYPROC) getExtensionPtr( "glFrameTerminatorGREMEDY" );
		if ( glFrameTerminatorGREMEDY != 0 )	++localInitializedProcCount;
	} // if ( isGL_GREMEDY_frame_terminator || isSEDEnable() )
	
	if ( isGL_GREMEDY_frame_terminator )
	{
		std::stringstream strStream;
		strStream << "GL_GREMEDY_frame_terminator                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_GREMEDY_frame_terminator                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_GREMEDY_frame_terminator") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_GREMEDY_frame_terminator                                 : not detected." );
	}
	
	// ****** GL_GREMEDY_string_marker ******
	
	isGL_GREMEDY_string_marker = isExtensionSupported("GL_GREMEDY_string_marker");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_GREMEDY_string_marker ) // || isSEDEnable()
	{

		glStringMarkerGREMEDY = (PFNGLSTRINGMARKERGREMEDYPROC) getExtensionPtr( "glStringMarkerGREMEDY" );
		if ( glStringMarkerGREMEDY != 0 )	++localInitializedProcCount;
	} // if ( isGL_GREMEDY_string_marker || isSEDEnable() )
	
	if ( isGL_GREMEDY_string_marker )
	{
		std::stringstream strStream;
		strStream << "GL_GREMEDY_string_marker                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_GREMEDY_string_marker                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_GREMEDY_string_marker") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_GREMEDY_string_marker                                    : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_HP()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_HP_convolution_border_modes ******
	
	isGL_HP_convolution_border_modes = isExtensionSupported("GL_HP_convolution_border_modes");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_HP_convolution_border_modes )
	{
		std::stringstream strStream;
		strStream << "GL_HP_convolution_border_modes                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_HP_convolution_border_modes                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_HP_convolution_border_modes") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_HP_convolution_border_modes                              : not detected." );
	}
	
	// ****** GL_HP_image_transform ******
	
	isGL_HP_image_transform = isExtensionSupported("GL_HP_image_transform");
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
	
	if ( isGL_HP_image_transform ) // || isSEDEnable()
	{

		glImageTransformParameteriHP = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC) getExtensionPtr( "glImageTransformParameteriHP" );
		if ( glImageTransformParameteriHP != 0 )	++localInitializedProcCount;

		glImageTransformParameterfHP = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC) getExtensionPtr( "glImageTransformParameterfHP" );
		if ( glImageTransformParameterfHP != 0 )	++localInitializedProcCount;

		glImageTransformParameterivHP = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC) getExtensionPtr( "glImageTransformParameterivHP" );
		if ( glImageTransformParameterivHP != 0 )	++localInitializedProcCount;

		glImageTransformParameterfvHP = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC) getExtensionPtr( "glImageTransformParameterfvHP" );
		if ( glImageTransformParameterfvHP != 0 )	++localInitializedProcCount;

		glGetImageTransformParameterivHP = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC) getExtensionPtr( "glGetImageTransformParameterivHP" );
		if ( glGetImageTransformParameterivHP != 0 )	++localInitializedProcCount;

		glGetImageTransformParameterfvHP = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC) getExtensionPtr( "glGetImageTransformParameterfvHP" );
		if ( glGetImageTransformParameterfvHP != 0 )	++localInitializedProcCount;
	} // if ( isGL_HP_image_transform || isSEDEnable() )
	
	if ( isGL_HP_image_transform )
	{
		std::stringstream strStream;
		strStream << "GL_HP_image_transform                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_HP_image_transform                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_HP_image_transform") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_HP_image_transform                                       : not detected." );
	}
	
	// ****** GL_HP_occlusion_test ******
	
	isGL_HP_occlusion_test = isExtensionSupported("GL_HP_occlusion_test");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_HP_occlusion_test )
	{
		std::stringstream strStream;
		strStream << "GL_HP_occlusion_test                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_HP_occlusion_test                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_HP_occlusion_test") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_HP_occlusion_test                                        : not detected." );
	}
	
	// ****** GL_HP_texture_lighting ******
	
	isGL_HP_texture_lighting = isExtensionSupported("GL_HP_texture_lighting");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_HP_texture_lighting )
	{
		std::stringstream strStream;
		strStream << "GL_HP_texture_lighting                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_HP_texture_lighting                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_HP_texture_lighting") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_HP_texture_lighting                                      : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_IBM()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_IBM_cull_vertex ******
	
	isGL_IBM_cull_vertex = isExtensionSupported("GL_IBM_cull_vertex");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_IBM_cull_vertex )
	{
		std::stringstream strStream;
		strStream << "GL_IBM_cull_vertex                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_IBM_cull_vertex                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_IBM_cull_vertex") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_IBM_cull_vertex                                          : not detected." );
	}
	
	// ****** GL_IBM_multimode_draw_arrays ******
	
	isGL_IBM_multimode_draw_arrays = isExtensionSupported("GL_IBM_multimode_draw_arrays");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_IBM_multimode_draw_arrays ) // || isSEDEnable()
	{

		glMultiModeDrawArraysIBM = (PFNGLMULTIMODEDRAWARRAYSIBMPROC) getExtensionPtr( "glMultiModeDrawArraysIBM" );
		if ( glMultiModeDrawArraysIBM != 0 )	++localInitializedProcCount;

		glMultiModeDrawElementsIBM = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC) getExtensionPtr( "glMultiModeDrawElementsIBM" );
		if ( glMultiModeDrawElementsIBM != 0 )	++localInitializedProcCount;
	} // if ( isGL_IBM_multimode_draw_arrays || isSEDEnable() )
	
	if ( isGL_IBM_multimode_draw_arrays )
	{
		std::stringstream strStream;
		strStream << "GL_IBM_multimode_draw_arrays                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_IBM_multimode_draw_arrays                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_IBM_multimode_draw_arrays") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_IBM_multimode_draw_arrays                                : not detected." );
	}
	
	// ****** GL_IBM_rasterpos_clip ******
	
	isGL_IBM_rasterpos_clip = isExtensionSupported("GL_IBM_rasterpos_clip");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_IBM_rasterpos_clip )
	{
		std::stringstream strStream;
		strStream << "GL_IBM_rasterpos_clip                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_IBM_rasterpos_clip                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_IBM_rasterpos_clip") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_IBM_rasterpos_clip                                       : not detected." );
	}
	
	// ****** GL_IBM_texture_mirrored_repeat ******
	
	isGL_IBM_texture_mirrored_repeat = isExtensionSupported("GL_IBM_texture_mirrored_repeat");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_IBM_texture_mirrored_repeat )
	{
		std::stringstream strStream;
		strStream << "GL_IBM_texture_mirrored_repeat                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_IBM_texture_mirrored_repeat                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_IBM_texture_mirrored_repeat") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_IBM_texture_mirrored_repeat                              : not detected." );
	}
	
	// ****** GL_IBM_vertex_array_lists ******
	
	isGL_IBM_vertex_array_lists = isExtensionSupported("GL_IBM_vertex_array_lists");
	
	localSupportedProcCount		= 8;
	localInitializedProcCount	= 0;
	
	if ( isGL_IBM_vertex_array_lists ) // || isSEDEnable()
	{

		glColorPointerListIBM = (PFNGLCOLORPOINTERLISTIBMPROC) getExtensionPtr( "glColorPointerListIBM" );
		if ( glColorPointerListIBM != 0 )	++localInitializedProcCount;

		glSecondaryColorPointerListIBM = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC) getExtensionPtr( "glSecondaryColorPointerListIBM" );
		if ( glSecondaryColorPointerListIBM != 0 )	++localInitializedProcCount;

		glEdgeFlagPointerListIBM = (PFNGLEDGEFLAGPOINTERLISTIBMPROC) getExtensionPtr( "glEdgeFlagPointerListIBM" );
		if ( glEdgeFlagPointerListIBM != 0 )	++localInitializedProcCount;

		glFogCoordPointerListIBM = (PFNGLFOGCOORDPOINTERLISTIBMPROC) getExtensionPtr( "glFogCoordPointerListIBM" );
		if ( glFogCoordPointerListIBM != 0 )	++localInitializedProcCount;

		glIndexPointerListIBM = (PFNGLINDEXPOINTERLISTIBMPROC) getExtensionPtr( "glIndexPointerListIBM" );
		if ( glIndexPointerListIBM != 0 )	++localInitializedProcCount;

		glNormalPointerListIBM = (PFNGLNORMALPOINTERLISTIBMPROC) getExtensionPtr( "glNormalPointerListIBM" );
		if ( glNormalPointerListIBM != 0 )	++localInitializedProcCount;

		glTexCoordPointerListIBM = (PFNGLTEXCOORDPOINTERLISTIBMPROC) getExtensionPtr( "glTexCoordPointerListIBM" );
		if ( glTexCoordPointerListIBM != 0 )	++localInitializedProcCount;

		glVertexPointerListIBM = (PFNGLVERTEXPOINTERLISTIBMPROC) getExtensionPtr( "glVertexPointerListIBM" );
		if ( glVertexPointerListIBM != 0 )	++localInitializedProcCount;
	} // if ( isGL_IBM_vertex_array_lists || isSEDEnable() )
	
	if ( isGL_IBM_vertex_array_lists )
	{
		std::stringstream strStream;
		strStream << "GL_IBM_vertex_array_lists                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_IBM_vertex_array_lists                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_IBM_vertex_array_lists") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_IBM_vertex_array_lists                                   : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_INGR()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_INGR_blend_func_separate ******
	
	isGL_INGR_blend_func_separate = isExtensionSupported("GL_INGR_blend_func_separate");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_INGR_blend_func_separate ) // || isSEDEnable()
	{

		glBlendFuncSeparateINGR = (PFNGLBLENDFUNCSEPARATEINGRPROC) getExtensionPtr( "glBlendFuncSeparateINGR" );
		if ( glBlendFuncSeparateINGR != 0 )	++localInitializedProcCount;
	} // if ( isGL_INGR_blend_func_separate || isSEDEnable() )
	
	if ( isGL_INGR_blend_func_separate )
	{
		std::stringstream strStream;
		strStream << "GL_INGR_blend_func_separate                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_INGR_blend_func_separate                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_INGR_blend_func_separate") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_INGR_blend_func_separate                                 : not detected." );
	}
	
	// ****** GL_INGR_color_clamp ******
	
	isGL_INGR_color_clamp = isExtensionSupported("GL_INGR_color_clamp");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_INGR_color_clamp )
	{
		std::stringstream strStream;
		strStream << "GL_INGR_color_clamp                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_INGR_color_clamp                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_INGR_color_clamp") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_INGR_color_clamp                                         : not detected." );
	}
	
	// ****** GL_INGR_interlace_read ******
	
	isGL_INGR_interlace_read = isExtensionSupported("GL_INGR_interlace_read");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_INGR_interlace_read )
	{
		std::stringstream strStream;
		strStream << "GL_INGR_interlace_read                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_INGR_interlace_read                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_INGR_interlace_read") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_INGR_interlace_read                                      : not detected." );
	}
	
	// ****** GL_INGR_palette_buffer ******
	
	isGL_INGR_palette_buffer = isExtensionSupported("GL_INGR_palette_buffer");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_INGR_palette_buffer )
	{
		std::stringstream strStream;
		strStream << "GL_INGR_palette_buffer                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_INGR_palette_buffer                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_INGR_palette_buffer") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_INGR_palette_buffer                                      : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_INTEL()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_INTEL_parallel_arrays ******
	
	isGL_INTEL_parallel_arrays = isExtensionSupported("GL_INTEL_parallel_arrays");
	
	localSupportedProcCount		= 4;
	localInitializedProcCount	= 0;
	
	if ( isGL_INTEL_parallel_arrays ) // || isSEDEnable()
	{

		glVertexPointervINTEL = (PFNGLVERTEXPOINTERVINTELPROC) getExtensionPtr( "glVertexPointervINTEL" );
		if ( glVertexPointervINTEL != 0 )	++localInitializedProcCount;

		glNormalPointervINTEL = (PFNGLNORMALPOINTERVINTELPROC) getExtensionPtr( "glNormalPointervINTEL" );
		if ( glNormalPointervINTEL != 0 )	++localInitializedProcCount;

		glColorPointervINTEL = (PFNGLCOLORPOINTERVINTELPROC) getExtensionPtr( "glColorPointervINTEL" );
		if ( glColorPointervINTEL != 0 )	++localInitializedProcCount;

		glTexCoordPointervINTEL = (PFNGLTEXCOORDPOINTERVINTELPROC) getExtensionPtr( "glTexCoordPointervINTEL" );
		if ( glTexCoordPointervINTEL != 0 )	++localInitializedProcCount;
	} // if ( isGL_INTEL_parallel_arrays || isSEDEnable() )
	
	if ( isGL_INTEL_parallel_arrays )
	{
		std::stringstream strStream;
		strStream << "GL_INTEL_parallel_arrays                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_INTEL_parallel_arrays                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_INTEL_parallel_arrays") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_INTEL_parallel_arrays                                    : not detected." );
	}
	
	// ****** GL_INTEL_texture_scissor ******
	
	isGL_INTEL_texture_scissor = isExtensionSupported("GL_INTEL_texture_scissor");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_INTEL_texture_scissor )
	{
		std::stringstream strStream;
		strStream << "GL_INTEL_texture_scissor                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_INTEL_texture_scissor                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_INTEL_texture_scissor") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_INTEL_texture_scissor                                    : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_MESA()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_MESA_pack_invert ******
	
	isGL_MESA_pack_invert = isExtensionSupported("GL_MESA_pack_invert");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_MESA_pack_invert )
	{
		std::stringstream strStream;
		strStream << "GL_MESA_pack_invert                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_MESA_pack_invert                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_MESA_pack_invert") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_MESA_pack_invert                                         : not detected." );
	}
	
	// ****** GL_MESA_resize_buffers ******
	
	isGL_MESA_resize_buffers = isExtensionSupported("GL_MESA_resize_buffers");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_MESA_resize_buffers ) // || isSEDEnable()
	{

		glResizeBuffersMESA = (PFNGLRESIZEBUFFERSMESAPROC) getExtensionPtr( "glResizeBuffersMESA" );
		if ( glResizeBuffersMESA != 0 )	++localInitializedProcCount;
	} // if ( isGL_MESA_resize_buffers || isSEDEnable() )
	
	if ( isGL_MESA_resize_buffers )
	{
		std::stringstream strStream;
		strStream << "GL_MESA_resize_buffers                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_MESA_resize_buffers                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_MESA_resize_buffers") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_MESA_resize_buffers                                      : not detected." );
	}
	
	// ****** GL_MESA_window_pos ******
	
	isGL_MESA_window_pos = isExtensionSupported("GL_MESA_window_pos");
	
	localSupportedProcCount		= 24;
	localInitializedProcCount	= 0;
	
	if ( isGL_MESA_window_pos ) // || isSEDEnable()
	{

		glWindowPos2dMESA = (PFNGLWINDOWPOS2DMESAPROC) getExtensionPtr( "glWindowPos2dMESA" );
		if ( glWindowPos2dMESA != 0 )	++localInitializedProcCount;

		glWindowPos2dvMESA = (PFNGLWINDOWPOS2DVMESAPROC) getExtensionPtr( "glWindowPos2dvMESA" );
		if ( glWindowPos2dvMESA != 0 )	++localInitializedProcCount;

		glWindowPos2fMESA = (PFNGLWINDOWPOS2FMESAPROC) getExtensionPtr( "glWindowPos2fMESA" );
		if ( glWindowPos2fMESA != 0 )	++localInitializedProcCount;

		glWindowPos2fvMESA = (PFNGLWINDOWPOS2FVMESAPROC) getExtensionPtr( "glWindowPos2fvMESA" );
		if ( glWindowPos2fvMESA != 0 )	++localInitializedProcCount;

		glWindowPos2iMESA = (PFNGLWINDOWPOS2IMESAPROC) getExtensionPtr( "glWindowPos2iMESA" );
		if ( glWindowPos2iMESA != 0 )	++localInitializedProcCount;

		glWindowPos2ivMESA = (PFNGLWINDOWPOS2IVMESAPROC) getExtensionPtr( "glWindowPos2ivMESA" );
		if ( glWindowPos2ivMESA != 0 )	++localInitializedProcCount;

		glWindowPos2sMESA = (PFNGLWINDOWPOS2SMESAPROC) getExtensionPtr( "glWindowPos2sMESA" );
		if ( glWindowPos2sMESA != 0 )	++localInitializedProcCount;

		glWindowPos2svMESA = (PFNGLWINDOWPOS2SVMESAPROC) getExtensionPtr( "glWindowPos2svMESA" );
		if ( glWindowPos2svMESA != 0 )	++localInitializedProcCount;

		glWindowPos3dMESA = (PFNGLWINDOWPOS3DMESAPROC) getExtensionPtr( "glWindowPos3dMESA" );
		if ( glWindowPos3dMESA != 0 )	++localInitializedProcCount;

		glWindowPos3dvMESA = (PFNGLWINDOWPOS3DVMESAPROC) getExtensionPtr( "glWindowPos3dvMESA" );
		if ( glWindowPos3dvMESA != 0 )	++localInitializedProcCount;

		glWindowPos3fMESA = (PFNGLWINDOWPOS3FMESAPROC) getExtensionPtr( "glWindowPos3fMESA" );
		if ( glWindowPos3fMESA != 0 )	++localInitializedProcCount;

		glWindowPos3fvMESA = (PFNGLWINDOWPOS3FVMESAPROC) getExtensionPtr( "glWindowPos3fvMESA" );
		if ( glWindowPos3fvMESA != 0 )	++localInitializedProcCount;

		glWindowPos3iMESA = (PFNGLWINDOWPOS3IMESAPROC) getExtensionPtr( "glWindowPos3iMESA" );
		if ( glWindowPos3iMESA != 0 )	++localInitializedProcCount;

		glWindowPos3ivMESA = (PFNGLWINDOWPOS3IVMESAPROC) getExtensionPtr( "glWindowPos3ivMESA" );
		if ( glWindowPos3ivMESA != 0 )	++localInitializedProcCount;

		glWindowPos3sMESA = (PFNGLWINDOWPOS3SMESAPROC) getExtensionPtr( "glWindowPos3sMESA" );
		if ( glWindowPos3sMESA != 0 )	++localInitializedProcCount;

		glWindowPos3svMESA = (PFNGLWINDOWPOS3SVMESAPROC) getExtensionPtr( "glWindowPos3svMESA" );
		if ( glWindowPos3svMESA != 0 )	++localInitializedProcCount;

		glWindowPos4dMESA = (PFNGLWINDOWPOS4DMESAPROC) getExtensionPtr( "glWindowPos4dMESA" );
		if ( glWindowPos4dMESA != 0 )	++localInitializedProcCount;

		glWindowPos4dvMESA = (PFNGLWINDOWPOS4DVMESAPROC) getExtensionPtr( "glWindowPos4dvMESA" );
		if ( glWindowPos4dvMESA != 0 )	++localInitializedProcCount;

		glWindowPos4fMESA = (PFNGLWINDOWPOS4FMESAPROC) getExtensionPtr( "glWindowPos4fMESA" );
		if ( glWindowPos4fMESA != 0 )	++localInitializedProcCount;

		glWindowPos4fvMESA = (PFNGLWINDOWPOS4FVMESAPROC) getExtensionPtr( "glWindowPos4fvMESA" );
		if ( glWindowPos4fvMESA != 0 )	++localInitializedProcCount;

		glWindowPos4iMESA = (PFNGLWINDOWPOS4IMESAPROC) getExtensionPtr( "glWindowPos4iMESA" );
		if ( glWindowPos4iMESA != 0 )	++localInitializedProcCount;

		glWindowPos4ivMESA = (PFNGLWINDOWPOS4IVMESAPROC) getExtensionPtr( "glWindowPos4ivMESA" );
		if ( glWindowPos4ivMESA != 0 )	++localInitializedProcCount;

		glWindowPos4sMESA = (PFNGLWINDOWPOS4SMESAPROC) getExtensionPtr( "glWindowPos4sMESA" );
		if ( glWindowPos4sMESA != 0 )	++localInitializedProcCount;

		glWindowPos4svMESA = (PFNGLWINDOWPOS4SVMESAPROC) getExtensionPtr( "glWindowPos4svMESA" );
		if ( glWindowPos4svMESA != 0 )	++localInitializedProcCount;
	} // if ( isGL_MESA_window_pos || isSEDEnable() )
	
	if ( isGL_MESA_window_pos )
	{
		std::stringstream strStream;
		strStream << "GL_MESA_window_pos                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_MESA_window_pos                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_MESA_window_pos") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_MESA_window_pos                                          : not detected." );
	}
	
	// ****** GL_MESA_ycbcr_texture ******
	
	isGL_MESA_ycbcr_texture = isExtensionSupported("GL_MESA_ycbcr_texture");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_MESA_ycbcr_texture )
	{
		std::stringstream strStream;
		strStream << "GL_MESA_ycbcr_texture                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_MESA_ycbcr_texture                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_MESA_ycbcr_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_MESA_ycbcr_texture                                       : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_MESAX()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_MESAX_texture_stack ******
	
	isGL_MESAX_texture_stack = isExtensionSupported("GL_MESAX_texture_stack");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_MESAX_texture_stack )
	{
		std::stringstream strStream;
		strStream << "GL_MESAX_texture_stack                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_MESAX_texture_stack                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_MESAX_texture_stack") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_MESAX_texture_stack                                      : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_NV()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_NV_blend_square ******
	
	isGL_NV_blend_square = isExtensionSupported("GL_NV_blend_square");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_blend_square )
	{
		std::stringstream strStream;
		strStream << "GL_NV_blend_square                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_blend_square                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_blend_square") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_blend_square                                          : not detected." );
	}
	
	// ****** GL_NV_copy_depth_to_color ******
	
	isGL_NV_copy_depth_to_color = isExtensionSupported("GL_NV_copy_depth_to_color");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_copy_depth_to_color )
	{
		std::stringstream strStream;
		strStream << "GL_NV_copy_depth_to_color                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_copy_depth_to_color                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_copy_depth_to_color") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_copy_depth_to_color                                   : not detected." );
	}
	
	// ****** GL_NV_depth_buffer_float ******
	
	isGL_NV_depth_buffer_float = isExtensionSupported("GL_NV_depth_buffer_float");
	
	localSupportedProcCount		= 3;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_depth_buffer_float ) // || isSEDEnable()
	{

		glDepthRangedNV = (PFNGLDEPTHRANGEDNVPROC) getExtensionPtr( "glDepthRangedNV" );
		if ( glDepthRangedNV != 0 )	++localInitializedProcCount;

		glClearDepthdNV = (PFNGLCLEARDEPTHDNVPROC) getExtensionPtr( "glClearDepthdNV" );
		if ( glClearDepthdNV != 0 )	++localInitializedProcCount;

		glDepthBoundsdNV = (PFNGLDEPTHBOUNDSDNVPROC) getExtensionPtr( "glDepthBoundsdNV" );
		if ( glDepthBoundsdNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_depth_buffer_float || isSEDEnable() )
	
	if ( isGL_NV_depth_buffer_float )
	{
		std::stringstream strStream;
		strStream << "GL_NV_depth_buffer_float                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_depth_buffer_float                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_depth_buffer_float") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_depth_buffer_float                                    : not detected." );
	}
	
	// ****** GL_NV_depth_clamp ******
	
	isGL_NV_depth_clamp = isExtensionSupported("GL_NV_depth_clamp");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_depth_clamp )
	{
		std::stringstream strStream;
		strStream << "GL_NV_depth_clamp                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_depth_clamp                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_depth_clamp") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_depth_clamp                                           : not detected." );
	}
	
	// ****** GL_NV_evaluators ******
	
	isGL_NV_evaluators = isExtensionSupported("GL_NV_evaluators");
	
	localSupportedProcCount		= 9;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_evaluators ) // || isSEDEnable()
	{

		glMapControlPointsNV = (PFNGLMAPCONTROLPOINTSNVPROC) getExtensionPtr( "glMapControlPointsNV" );
		if ( glMapControlPointsNV != 0 )	++localInitializedProcCount;

		glMapParameterivNV = (PFNGLMAPPARAMETERIVNVPROC) getExtensionPtr( "glMapParameterivNV" );
		if ( glMapParameterivNV != 0 )	++localInitializedProcCount;

		glMapParameterfvNV = (PFNGLMAPPARAMETERFVNVPROC) getExtensionPtr( "glMapParameterfvNV" );
		if ( glMapParameterfvNV != 0 )	++localInitializedProcCount;

		glGetMapControlPointsNV = (PFNGLGETMAPCONTROLPOINTSNVPROC) getExtensionPtr( "glGetMapControlPointsNV" );
		if ( glGetMapControlPointsNV != 0 )	++localInitializedProcCount;

		glGetMapParameterivNV = (PFNGLGETMAPPARAMETERIVNVPROC) getExtensionPtr( "glGetMapParameterivNV" );
		if ( glGetMapParameterivNV != 0 )	++localInitializedProcCount;

		glGetMapParameterfvNV = (PFNGLGETMAPPARAMETERFVNVPROC) getExtensionPtr( "glGetMapParameterfvNV" );
		if ( glGetMapParameterfvNV != 0 )	++localInitializedProcCount;

		glGetMapAttribParameterivNV = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC) getExtensionPtr( "glGetMapAttribParameterivNV" );
		if ( glGetMapAttribParameterivNV != 0 )	++localInitializedProcCount;

		glGetMapAttribParameterfvNV = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC) getExtensionPtr( "glGetMapAttribParameterfvNV" );
		if ( glGetMapAttribParameterfvNV != 0 )	++localInitializedProcCount;

		glEvalMapsNV = (PFNGLEVALMAPSNVPROC) getExtensionPtr( "glEvalMapsNV" );
		if ( glEvalMapsNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_evaluators || isSEDEnable() )
	
	if ( isGL_NV_evaluators )
	{
		std::stringstream strStream;
		strStream << "GL_NV_evaluators                                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_evaluators                                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_evaluators") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_evaluators                                            : not detected." );
	}
	
	// ****** GL_NV_fence ******
	
	isGL_NV_fence = isExtensionSupported("GL_NV_fence");
	
	localSupportedProcCount		= 7;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_fence ) // || isSEDEnable()
	{

		glDeleteFencesNV = (PFNGLDELETEFENCESNVPROC) getExtensionPtr( "glDeleteFencesNV" );
		if ( glDeleteFencesNV != 0 )	++localInitializedProcCount;

		glGenFencesNV = (PFNGLGENFENCESNVPROC) getExtensionPtr( "glGenFencesNV" );
		if ( glGenFencesNV != 0 )	++localInitializedProcCount;

		glIsFenceNV = (PFNGLISFENCENVPROC) getExtensionPtr( "glIsFenceNV" );
		if ( glIsFenceNV != 0 )	++localInitializedProcCount;

		glTestFenceNV = (PFNGLTESTFENCENVPROC) getExtensionPtr( "glTestFenceNV" );
		if ( glTestFenceNV != 0 )	++localInitializedProcCount;

		glGetFenceivNV = (PFNGLGETFENCEIVNVPROC) getExtensionPtr( "glGetFenceivNV" );
		if ( glGetFenceivNV != 0 )	++localInitializedProcCount;

		glFinishFenceNV = (PFNGLFINISHFENCENVPROC) getExtensionPtr( "glFinishFenceNV" );
		if ( glFinishFenceNV != 0 )	++localInitializedProcCount;

		glSetFenceNV = (PFNGLSETFENCENVPROC) getExtensionPtr( "glSetFenceNV" );
		if ( glSetFenceNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_fence || isSEDEnable() )
	
	if ( isGL_NV_fence )
	{
		std::stringstream strStream;
		strStream << "GL_NV_fence                                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_fence                                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_fence") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_fence                                                 : not detected." );
	}
	
	// ****** GL_NV_float_buffer ******
	
	isGL_NV_float_buffer = isExtensionSupported("GL_NV_float_buffer");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_float_buffer )
	{
		std::stringstream strStream;
		strStream << "GL_NV_float_buffer                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_float_buffer                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_float_buffer") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_float_buffer                                          : not detected." );
	}
	
	// ****** GL_NV_fog_distance ******
	
	isGL_NV_fog_distance = isExtensionSupported("GL_NV_fog_distance");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_fog_distance )
	{
		std::stringstream strStream;
		strStream << "GL_NV_fog_distance                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_fog_distance                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_fog_distance") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_fog_distance                                          : not detected." );
	}
	
	// ****** GL_NV_fragment_program ******
	
	isGL_NV_fragment_program = isExtensionSupported("GL_NV_fragment_program");
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_fragment_program ) // || isSEDEnable()
	{

		glProgramNamedParameter4fNV = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC) getExtensionPtr( "glProgramNamedParameter4fNV" );
		if ( glProgramNamedParameter4fNV != 0 )	++localInitializedProcCount;

		glProgramNamedParameter4dNV = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC) getExtensionPtr( "glProgramNamedParameter4dNV" );
		if ( glProgramNamedParameter4dNV != 0 )	++localInitializedProcCount;

		glProgramNamedParameter4fvNV = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC) getExtensionPtr( "glProgramNamedParameter4fvNV" );
		if ( glProgramNamedParameter4fvNV != 0 )	++localInitializedProcCount;

		glProgramNamedParameter4dvNV = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC) getExtensionPtr( "glProgramNamedParameter4dvNV" );
		if ( glProgramNamedParameter4dvNV != 0 )	++localInitializedProcCount;

		glGetProgramNamedParameterfvNV = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC) getExtensionPtr( "glGetProgramNamedParameterfvNV" );
		if ( glGetProgramNamedParameterfvNV != 0 )	++localInitializedProcCount;

		glGetProgramNamedParameterdvNV = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC) getExtensionPtr( "glGetProgramNamedParameterdvNV" );
		if ( glGetProgramNamedParameterdvNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_fragment_program || isSEDEnable() )
	
	if ( isGL_NV_fragment_program )
	{
		std::stringstream strStream;
		strStream << "GL_NV_fragment_program                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_fragment_program                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_fragment_program") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_fragment_program                                      : not detected." );
	}
	
	// ****** GL_NV_fragment_program2 ******
	
	isGL_NV_fragment_program2 = isExtensionSupported("GL_NV_fragment_program2");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_fragment_program2 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_fragment_program2                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_fragment_program2                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_fragment_program2") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_fragment_program2                                     : not detected." );
	}
	
	// ****** GL_NV_fragment_program4 ******
	
	isGL_NV_fragment_program4 = isExtensionSupported("GL_NV_fragment_program4");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_fragment_program4 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_fragment_program4                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_fragment_program4                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_fragment_program4") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_fragment_program4                                     : not detected." );
	}
	
	// ****** GL_NV_fragment_program_option ******
	
	isGL_NV_fragment_program_option = isExtensionSupported("GL_NV_fragment_program_option");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_fragment_program_option )
	{
		std::stringstream strStream;
		strStream << "GL_NV_fragment_program_option                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_fragment_program_option                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_fragment_program_option") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_fragment_program_option                               : not detected." );
	}
	
	// ****** GL_NV_framebuffer_multisample_coverage ******
	
	isGL_NV_framebuffer_multisample_coverage = isExtensionSupported("GL_NV_framebuffer_multisample_coverage");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_framebuffer_multisample_coverage ) // || isSEDEnable()
	{

		glRenderbufferStorageMultisampleCoverageNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) getExtensionPtr( "glRenderbufferStorageMultisampleCoverageNV" );
		if ( glRenderbufferStorageMultisampleCoverageNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_framebuffer_multisample_coverage || isSEDEnable() )
	
	if ( isGL_NV_framebuffer_multisample_coverage )
	{
		std::stringstream strStream;
		strStream << "GL_NV_framebuffer_multisample_coverage                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_framebuffer_multisample_coverage                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_framebuffer_multisample_coverage") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_framebuffer_multisample_coverage                      : not detected." );
	}
	
	// ****** GL_NV_geometry_program4 ******
	
	isGL_NV_geometry_program4 = isExtensionSupported("GL_NV_geometry_program4");
	
	localSupportedProcCount		= 4;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_geometry_program4 ) // || isSEDEnable()
	{

		glProgramVertexLimitNV = (PFNGLPROGRAMVERTEXLIMITNVPROC) getExtensionPtr( "glProgramVertexLimitNV" );
		if ( glProgramVertexLimitNV != 0 )	++localInitializedProcCount;

		glFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC) getExtensionPtr( "glFramebufferTextureEXT" );
		if ( glFramebufferTextureEXT != 0 )	++localInitializedProcCount;

		glFramebufferTextureLayerEXT = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC) getExtensionPtr( "glFramebufferTextureLayerEXT" );
		if ( glFramebufferTextureLayerEXT != 0 )	++localInitializedProcCount;

		glFramebufferTextureFaceEXT = (PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC) getExtensionPtr( "glFramebufferTextureFaceEXT" );
		if ( glFramebufferTextureFaceEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_geometry_program4 || isSEDEnable() )
	
	if ( isGL_NV_geometry_program4 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_geometry_program4                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_geometry_program4                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_geometry_program4") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_geometry_program4                                     : not detected." );
	}
	
	// ****** GL_NV_geometry_shader4 ******
	
	isGL_NV_geometry_shader4 = isExtensionSupported("GL_NV_geometry_shader4");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_geometry_shader4 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_geometry_shader4                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_geometry_shader4                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_geometry_shader4") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_geometry_shader4                                      : not detected." );
	}
	
	// ****** GL_NV_gpu_program4 ******
	
	isGL_NV_gpu_program4 = isExtensionSupported("GL_NV_gpu_program4");
	
	localSupportedProcCount		= 16;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_gpu_program4 ) // || isSEDEnable()
	{

		glProgramLocalParameterI4iNV = (PFNGLPROGRAMLOCALPARAMETERI4INVPROC) getExtensionPtr( "glProgramLocalParameterI4iNV" );
		if ( glProgramLocalParameterI4iNV != 0 )	++localInitializedProcCount;

		glProgramLocalParameterI4ivNV = (PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC) getExtensionPtr( "glProgramLocalParameterI4ivNV" );
		if ( glProgramLocalParameterI4ivNV != 0 )	++localInitializedProcCount;

		glProgramLocalParametersI4ivNV = (PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC) getExtensionPtr( "glProgramLocalParametersI4ivNV" );
		if ( glProgramLocalParametersI4ivNV != 0 )	++localInitializedProcCount;

		glProgramLocalParameterI4uiNV = (PFNGLPROGRAMLOCALPARAMETERI4UINVPROC) getExtensionPtr( "glProgramLocalParameterI4uiNV" );
		if ( glProgramLocalParameterI4uiNV != 0 )	++localInitializedProcCount;

		glProgramLocalParameterI4uivNV = (PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC) getExtensionPtr( "glProgramLocalParameterI4uivNV" );
		if ( glProgramLocalParameterI4uivNV != 0 )	++localInitializedProcCount;

		glProgramLocalParametersI4uivNV = (PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC) getExtensionPtr( "glProgramLocalParametersI4uivNV" );
		if ( glProgramLocalParametersI4uivNV != 0 )	++localInitializedProcCount;

		glProgramEnvParameterI4iNV = (PFNGLPROGRAMENVPARAMETERI4INVPROC) getExtensionPtr( "glProgramEnvParameterI4iNV" );
		if ( glProgramEnvParameterI4iNV != 0 )	++localInitializedProcCount;

		glProgramEnvParameterI4ivNV = (PFNGLPROGRAMENVPARAMETERI4IVNVPROC) getExtensionPtr( "glProgramEnvParameterI4ivNV" );
		if ( glProgramEnvParameterI4ivNV != 0 )	++localInitializedProcCount;

		glProgramEnvParametersI4ivNV = (PFNGLPROGRAMENVPARAMETERSI4IVNVPROC) getExtensionPtr( "glProgramEnvParametersI4ivNV" );
		if ( glProgramEnvParametersI4ivNV != 0 )	++localInitializedProcCount;

		glProgramEnvParameterI4uiNV = (PFNGLPROGRAMENVPARAMETERI4UINVPROC) getExtensionPtr( "glProgramEnvParameterI4uiNV" );
		if ( glProgramEnvParameterI4uiNV != 0 )	++localInitializedProcCount;

		glProgramEnvParameterI4uivNV = (PFNGLPROGRAMENVPARAMETERI4UIVNVPROC) getExtensionPtr( "glProgramEnvParameterI4uivNV" );
		if ( glProgramEnvParameterI4uivNV != 0 )	++localInitializedProcCount;

		glProgramEnvParametersI4uivNV = (PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC) getExtensionPtr( "glProgramEnvParametersI4uivNV" );
		if ( glProgramEnvParametersI4uivNV != 0 )	++localInitializedProcCount;

		glGetProgramLocalParameterIivNV = (PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC) getExtensionPtr( "glGetProgramLocalParameterIivNV" );
		if ( glGetProgramLocalParameterIivNV != 0 )	++localInitializedProcCount;

		glGetProgramLocalParameterIuivNV = (PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC) getExtensionPtr( "glGetProgramLocalParameterIuivNV" );
		if ( glGetProgramLocalParameterIuivNV != 0 )	++localInitializedProcCount;

		glGetProgramEnvParameterIivNV = (PFNGLGETPROGRAMENVPARAMETERIIVNVPROC) getExtensionPtr( "glGetProgramEnvParameterIivNV" );
		if ( glGetProgramEnvParameterIivNV != 0 )	++localInitializedProcCount;

		glGetProgramEnvParameterIuivNV = (PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC) getExtensionPtr( "glGetProgramEnvParameterIuivNV" );
		if ( glGetProgramEnvParameterIuivNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_gpu_program4 || isSEDEnable() )
	
	if ( isGL_NV_gpu_program4 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_gpu_program4                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_gpu_program4                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_gpu_program4") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_gpu_program4                                          : not detected." );
	}
	
	// ****** GL_NV_half_float ******
	
	isGL_NV_half_float = isExtensionSupported("GL_NV_half_float");
	
	localSupportedProcCount		= 46;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_half_float ) // || isSEDEnable()
	{

		glVertex2hNV = (PFNGLVERTEX2HNVPROC) getExtensionPtr( "glVertex2hNV" );
		if ( glVertex2hNV != 0 )	++localInitializedProcCount;

		glVertex2hvNV = (PFNGLVERTEX2HVNVPROC) getExtensionPtr( "glVertex2hvNV" );
		if ( glVertex2hvNV != 0 )	++localInitializedProcCount;

		glVertex3hNV = (PFNGLVERTEX3HNVPROC) getExtensionPtr( "glVertex3hNV" );
		if ( glVertex3hNV != 0 )	++localInitializedProcCount;

		glVertex3hvNV = (PFNGLVERTEX3HVNVPROC) getExtensionPtr( "glVertex3hvNV" );
		if ( glVertex3hvNV != 0 )	++localInitializedProcCount;

		glVertex4hNV = (PFNGLVERTEX4HNVPROC) getExtensionPtr( "glVertex4hNV" );
		if ( glVertex4hNV != 0 )	++localInitializedProcCount;

		glVertex4hvNV = (PFNGLVERTEX4HVNVPROC) getExtensionPtr( "glVertex4hvNV" );
		if ( glVertex4hvNV != 0 )	++localInitializedProcCount;

		glNormal3hNV = (PFNGLNORMAL3HNVPROC) getExtensionPtr( "glNormal3hNV" );
		if ( glNormal3hNV != 0 )	++localInitializedProcCount;

		glNormal3hvNV = (PFNGLNORMAL3HVNVPROC) getExtensionPtr( "glNormal3hvNV" );
		if ( glNormal3hvNV != 0 )	++localInitializedProcCount;

		glColor3hNV = (PFNGLCOLOR3HNVPROC) getExtensionPtr( "glColor3hNV" );
		if ( glColor3hNV != 0 )	++localInitializedProcCount;

		glColor3hvNV = (PFNGLCOLOR3HVNVPROC) getExtensionPtr( "glColor3hvNV" );
		if ( glColor3hvNV != 0 )	++localInitializedProcCount;

		glColor4hNV = (PFNGLCOLOR4HNVPROC) getExtensionPtr( "glColor4hNV" );
		if ( glColor4hNV != 0 )	++localInitializedProcCount;

		glColor4hvNV = (PFNGLCOLOR4HVNVPROC) getExtensionPtr( "glColor4hvNV" );
		if ( glColor4hvNV != 0 )	++localInitializedProcCount;

		glTexCoord1hNV = (PFNGLTEXCOORD1HNVPROC) getExtensionPtr( "glTexCoord1hNV" );
		if ( glTexCoord1hNV != 0 )	++localInitializedProcCount;

		glTexCoord1hvNV = (PFNGLTEXCOORD1HVNVPROC) getExtensionPtr( "glTexCoord1hvNV" );
		if ( glTexCoord1hvNV != 0 )	++localInitializedProcCount;

		glTexCoord2hNV = (PFNGLTEXCOORD2HNVPROC) getExtensionPtr( "glTexCoord2hNV" );
		if ( glTexCoord2hNV != 0 )	++localInitializedProcCount;

		glTexCoord2hvNV = (PFNGLTEXCOORD2HVNVPROC) getExtensionPtr( "glTexCoord2hvNV" );
		if ( glTexCoord2hvNV != 0 )	++localInitializedProcCount;

		glTexCoord3hNV = (PFNGLTEXCOORD3HNVPROC) getExtensionPtr( "glTexCoord3hNV" );
		if ( glTexCoord3hNV != 0 )	++localInitializedProcCount;

		glTexCoord3hvNV = (PFNGLTEXCOORD3HVNVPROC) getExtensionPtr( "glTexCoord3hvNV" );
		if ( glTexCoord3hvNV != 0 )	++localInitializedProcCount;

		glTexCoord4hNV = (PFNGLTEXCOORD4HNVPROC) getExtensionPtr( "glTexCoord4hNV" );
		if ( glTexCoord4hNV != 0 )	++localInitializedProcCount;

		glTexCoord4hvNV = (PFNGLTEXCOORD4HVNVPROC) getExtensionPtr( "glTexCoord4hvNV" );
		if ( glTexCoord4hvNV != 0 )	++localInitializedProcCount;

		glMultiTexCoord1hNV = (PFNGLMULTITEXCOORD1HNVPROC) getExtensionPtr( "glMultiTexCoord1hNV" );
		if ( glMultiTexCoord1hNV != 0 )	++localInitializedProcCount;

		glMultiTexCoord1hvNV = (PFNGLMULTITEXCOORD1HVNVPROC) getExtensionPtr( "glMultiTexCoord1hvNV" );
		if ( glMultiTexCoord1hvNV != 0 )	++localInitializedProcCount;

		glMultiTexCoord2hNV = (PFNGLMULTITEXCOORD2HNVPROC) getExtensionPtr( "glMultiTexCoord2hNV" );
		if ( glMultiTexCoord2hNV != 0 )	++localInitializedProcCount;

		glMultiTexCoord2hvNV = (PFNGLMULTITEXCOORD2HVNVPROC) getExtensionPtr( "glMultiTexCoord2hvNV" );
		if ( glMultiTexCoord2hvNV != 0 )	++localInitializedProcCount;

		glMultiTexCoord3hNV = (PFNGLMULTITEXCOORD3HNVPROC) getExtensionPtr( "glMultiTexCoord3hNV" );
		if ( glMultiTexCoord3hNV != 0 )	++localInitializedProcCount;

		glMultiTexCoord3hvNV = (PFNGLMULTITEXCOORD3HVNVPROC) getExtensionPtr( "glMultiTexCoord3hvNV" );
		if ( glMultiTexCoord3hvNV != 0 )	++localInitializedProcCount;

		glMultiTexCoord4hNV = (PFNGLMULTITEXCOORD4HNVPROC) getExtensionPtr( "glMultiTexCoord4hNV" );
		if ( glMultiTexCoord4hNV != 0 )	++localInitializedProcCount;

		glMultiTexCoord4hvNV = (PFNGLMULTITEXCOORD4HVNVPROC) getExtensionPtr( "glMultiTexCoord4hvNV" );
		if ( glMultiTexCoord4hvNV != 0 )	++localInitializedProcCount;

		glFogCoordhNV = (PFNGLFOGCOORDHNVPROC) getExtensionPtr( "glFogCoordhNV" );
		if ( glFogCoordhNV != 0 )	++localInitializedProcCount;

		glFogCoordhvNV = (PFNGLFOGCOORDHVNVPROC) getExtensionPtr( "glFogCoordhvNV" );
		if ( glFogCoordhvNV != 0 )	++localInitializedProcCount;

		glSecondaryColor3hNV = (PFNGLSECONDARYCOLOR3HNVPROC) getExtensionPtr( "glSecondaryColor3hNV" );
		if ( glSecondaryColor3hNV != 0 )	++localInitializedProcCount;

		glSecondaryColor3hvNV = (PFNGLSECONDARYCOLOR3HVNVPROC) getExtensionPtr( "glSecondaryColor3hvNV" );
		if ( glSecondaryColor3hvNV != 0 )	++localInitializedProcCount;

		glVertexWeighthNV = (PFNGLVERTEXWEIGHTHNVPROC) getExtensionPtr( "glVertexWeighthNV" );
		if ( glVertexWeighthNV != 0 )	++localInitializedProcCount;

		glVertexWeighthvNV = (PFNGLVERTEXWEIGHTHVNVPROC) getExtensionPtr( "glVertexWeighthvNV" );
		if ( glVertexWeighthvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib1hNV = (PFNGLVERTEXATTRIB1HNVPROC) getExtensionPtr( "glVertexAttrib1hNV" );
		if ( glVertexAttrib1hNV != 0 )	++localInitializedProcCount;

		glVertexAttrib1hvNV = (PFNGLVERTEXATTRIB1HVNVPROC) getExtensionPtr( "glVertexAttrib1hvNV" );
		if ( glVertexAttrib1hvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib2hNV = (PFNGLVERTEXATTRIB2HNVPROC) getExtensionPtr( "glVertexAttrib2hNV" );
		if ( glVertexAttrib2hNV != 0 )	++localInitializedProcCount;

		glVertexAttrib2hvNV = (PFNGLVERTEXATTRIB2HVNVPROC) getExtensionPtr( "glVertexAttrib2hvNV" );
		if ( glVertexAttrib2hvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib3hNV = (PFNGLVERTEXATTRIB3HNVPROC) getExtensionPtr( "glVertexAttrib3hNV" );
		if ( glVertexAttrib3hNV != 0 )	++localInitializedProcCount;

		glVertexAttrib3hvNV = (PFNGLVERTEXATTRIB3HVNVPROC) getExtensionPtr( "glVertexAttrib3hvNV" );
		if ( glVertexAttrib3hvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4hNV = (PFNGLVERTEXATTRIB4HNVPROC) getExtensionPtr( "glVertexAttrib4hNV" );
		if ( glVertexAttrib4hNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4hvNV = (PFNGLVERTEXATTRIB4HVNVPROC) getExtensionPtr( "glVertexAttrib4hvNV" );
		if ( glVertexAttrib4hvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs1hvNV = (PFNGLVERTEXATTRIBS1HVNVPROC) getExtensionPtr( "glVertexAttribs1hvNV" );
		if ( glVertexAttribs1hvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs2hvNV = (PFNGLVERTEXATTRIBS2HVNVPROC) getExtensionPtr( "glVertexAttribs2hvNV" );
		if ( glVertexAttribs2hvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs3hvNV = (PFNGLVERTEXATTRIBS3HVNVPROC) getExtensionPtr( "glVertexAttribs3hvNV" );
		if ( glVertexAttribs3hvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs4hvNV = (PFNGLVERTEXATTRIBS4HVNVPROC) getExtensionPtr( "glVertexAttribs4hvNV" );
		if ( glVertexAttribs4hvNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_half_float || isSEDEnable() )
	
	if ( isGL_NV_half_float )
	{
		std::stringstream strStream;
		strStream << "GL_NV_half_float                                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_half_float                                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_half_float") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_half_float                                            : not detected." );
	}
	
	// ****** GL_NV_light_max_exponent ******
	
	isGL_NV_light_max_exponent = isExtensionSupported("GL_NV_light_max_exponent");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_light_max_exponent )
	{
		std::stringstream strStream;
		strStream << "GL_NV_light_max_exponent                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_light_max_exponent                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_light_max_exponent") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_light_max_exponent                                    : not detected." );
	}
	
	// ****** GL_NV_multisample_filter_hint ******
	
	isGL_NV_multisample_filter_hint = isExtensionSupported("GL_NV_multisample_filter_hint");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_multisample_filter_hint )
	{
		std::stringstream strStream;
		strStream << "GL_NV_multisample_filter_hint                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_multisample_filter_hint                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_multisample_filter_hint") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_multisample_filter_hint                               : not detected." );
	}
	
	// ****** GL_NV_occlusion_query ******
	
	isGL_NV_occlusion_query = isExtensionSupported("GL_NV_occlusion_query");
	
	localSupportedProcCount		= 7;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_occlusion_query ) // || isSEDEnable()
	{

		glGenOcclusionQueriesNV = (PFNGLGENOCCLUSIONQUERIESNVPROC) getExtensionPtr( "glGenOcclusionQueriesNV" );
		if ( glGenOcclusionQueriesNV != 0 )	++localInitializedProcCount;

		glDeleteOcclusionQueriesNV = (PFNGLDELETEOCCLUSIONQUERIESNVPROC) getExtensionPtr( "glDeleteOcclusionQueriesNV" );
		if ( glDeleteOcclusionQueriesNV != 0 )	++localInitializedProcCount;

		glIsOcclusionQueryNV = (PFNGLISOCCLUSIONQUERYNVPROC) getExtensionPtr( "glIsOcclusionQueryNV" );
		if ( glIsOcclusionQueryNV != 0 )	++localInitializedProcCount;

		glBeginOcclusionQueryNV = (PFNGLBEGINOCCLUSIONQUERYNVPROC) getExtensionPtr( "glBeginOcclusionQueryNV" );
		if ( glBeginOcclusionQueryNV != 0 )	++localInitializedProcCount;

		glEndOcclusionQueryNV = (PFNGLENDOCCLUSIONQUERYNVPROC) getExtensionPtr( "glEndOcclusionQueryNV" );
		if ( glEndOcclusionQueryNV != 0 )	++localInitializedProcCount;

		glGetOcclusionQueryivNV = (PFNGLGETOCCLUSIONQUERYIVNVPROC) getExtensionPtr( "glGetOcclusionQueryivNV" );
		if ( glGetOcclusionQueryivNV != 0 )	++localInitializedProcCount;

		glGetOcclusionQueryuivNV = (PFNGLGETOCCLUSIONQUERYUIVNVPROC) getExtensionPtr( "glGetOcclusionQueryuivNV" );
		if ( glGetOcclusionQueryuivNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_occlusion_query || isSEDEnable() )
	
	if ( isGL_NV_occlusion_query )
	{
		std::stringstream strStream;
		strStream << "GL_NV_occlusion_query                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_occlusion_query                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_occlusion_query") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_occlusion_query                                       : not detected." );
	}
	
	// ****** GL_NV_packed_depth_stencil ******
	
	isGL_NV_packed_depth_stencil = isExtensionSupported("GL_NV_packed_depth_stencil");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_packed_depth_stencil )
	{
		std::stringstream strStream;
		strStream << "GL_NV_packed_depth_stencil                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_packed_depth_stencil                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_packed_depth_stencil") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_packed_depth_stencil                                  : not detected." );
	}
	
	// ****** GL_NV_parameter_buffer_object ******
	
	isGL_NV_parameter_buffer_object = isExtensionSupported("GL_NV_parameter_buffer_object");
	
	localSupportedProcCount		= 3;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_parameter_buffer_object ) // || isSEDEnable()
	{

		glProgramBufferParametersfvNV = (PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC) getExtensionPtr( "glProgramBufferParametersfvNV" );
		if ( glProgramBufferParametersfvNV != 0 )	++localInitializedProcCount;

		glProgramBufferParametersIivNV = (PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC) getExtensionPtr( "glProgramBufferParametersIivNV" );
		if ( glProgramBufferParametersIivNV != 0 )	++localInitializedProcCount;

		glProgramBufferParametersIuivNV = (PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC) getExtensionPtr( "glProgramBufferParametersIuivNV" );
		if ( glProgramBufferParametersIuivNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_parameter_buffer_object || isSEDEnable() )
	
	if ( isGL_NV_parameter_buffer_object )
	{
		std::stringstream strStream;
		strStream << "GL_NV_parameter_buffer_object                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_parameter_buffer_object                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_parameter_buffer_object") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_parameter_buffer_object                               : not detected." );
	}
	
	// ****** GL_NV_pixel_data_range ******
	
	isGL_NV_pixel_data_range = isExtensionSupported("GL_NV_pixel_data_range");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_pixel_data_range ) // || isSEDEnable()
	{

		glPixelDataRangeNV = (PFNGLPIXELDATARANGENVPROC) getExtensionPtr( "glPixelDataRangeNV" );
		if ( glPixelDataRangeNV != 0 )	++localInitializedProcCount;

		glFlushPixelDataRangeNV = (PFNGLFLUSHPIXELDATARANGENVPROC) getExtensionPtr( "glFlushPixelDataRangeNV" );
		if ( glFlushPixelDataRangeNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_pixel_data_range || isSEDEnable() )
	
	if ( isGL_NV_pixel_data_range )
	{
		std::stringstream strStream;
		strStream << "GL_NV_pixel_data_range                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_pixel_data_range                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_pixel_data_range") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_pixel_data_range                                      : not detected." );
	}
	
	// ****** GL_NV_point_sprite ******
	
	isGL_NV_point_sprite = isExtensionSupported("GL_NV_point_sprite");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_point_sprite ) // || isSEDEnable()
	{

		glPointParameteriNV = (PFNGLPOINTPARAMETERINVPROC) getExtensionPtr( "glPointParameteriNV" );
		if ( glPointParameteriNV != 0 )	++localInitializedProcCount;

		glPointParameterivNV = (PFNGLPOINTPARAMETERIVNVPROC) getExtensionPtr( "glPointParameterivNV" );
		if ( glPointParameterivNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_point_sprite || isSEDEnable() )
	
	if ( isGL_NV_point_sprite )
	{
		std::stringstream strStream;
		strStream << "GL_NV_point_sprite                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_point_sprite                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_point_sprite") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_point_sprite                                          : not detected." );
	}
	
	// ****** GL_NV_primitive_restart ******
	
	isGL_NV_primitive_restart = isExtensionSupported("GL_NV_primitive_restart");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_primitive_restart ) // || isSEDEnable()
	{

		glPrimitiveRestartNV = (PFNGLPRIMITIVERESTARTNVPROC) getExtensionPtr( "glPrimitiveRestartNV" );
		if ( glPrimitiveRestartNV != 0 )	++localInitializedProcCount;

		glPrimitiveRestartIndexNV = (PFNGLPRIMITIVERESTARTINDEXNVPROC) getExtensionPtr( "glPrimitiveRestartIndexNV" );
		if ( glPrimitiveRestartIndexNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_primitive_restart || isSEDEnable() )
	
	if ( isGL_NV_primitive_restart )
	{
		std::stringstream strStream;
		strStream << "GL_NV_primitive_restart                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_primitive_restart                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_primitive_restart") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_primitive_restart                                     : not detected." );
	}
	
	// ****** GL_NV_register_combiners ******
	
	isGL_NV_register_combiners = isExtensionSupported("GL_NV_register_combiners");
	
	localSupportedProcCount		= 13;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_register_combiners ) // || isSEDEnable()
	{

		glCombinerParameterfvNV = (PFNGLCOMBINERPARAMETERFVNVPROC) getExtensionPtr( "glCombinerParameterfvNV" );
		if ( glCombinerParameterfvNV != 0 )	++localInitializedProcCount;

		glCombinerParameterfNV = (PFNGLCOMBINERPARAMETERFNVPROC) getExtensionPtr( "glCombinerParameterfNV" );
		if ( glCombinerParameterfNV != 0 )	++localInitializedProcCount;

		glCombinerParameterivNV = (PFNGLCOMBINERPARAMETERIVNVPROC) getExtensionPtr( "glCombinerParameterivNV" );
		if ( glCombinerParameterivNV != 0 )	++localInitializedProcCount;

		glCombinerParameteriNV = (PFNGLCOMBINERPARAMETERINVPROC) getExtensionPtr( "glCombinerParameteriNV" );
		if ( glCombinerParameteriNV != 0 )	++localInitializedProcCount;

		glCombinerInputNV = (PFNGLCOMBINERINPUTNVPROC) getExtensionPtr( "glCombinerInputNV" );
		if ( glCombinerInputNV != 0 )	++localInitializedProcCount;

		glCombinerOutputNV = (PFNGLCOMBINEROUTPUTNVPROC) getExtensionPtr( "glCombinerOutputNV" );
		if ( glCombinerOutputNV != 0 )	++localInitializedProcCount;

		glFinalCombinerInputNV = (PFNGLFINALCOMBINERINPUTNVPROC) getExtensionPtr( "glFinalCombinerInputNV" );
		if ( glFinalCombinerInputNV != 0 )	++localInitializedProcCount;

		glGetCombinerInputParameterfvNV = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC) getExtensionPtr( "glGetCombinerInputParameterfvNV" );
		if ( glGetCombinerInputParameterfvNV != 0 )	++localInitializedProcCount;

		glGetCombinerInputParameterivNV = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC) getExtensionPtr( "glGetCombinerInputParameterivNV" );
		if ( glGetCombinerInputParameterivNV != 0 )	++localInitializedProcCount;

		glGetCombinerOutputParameterfvNV = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC) getExtensionPtr( "glGetCombinerOutputParameterfvNV" );
		if ( glGetCombinerOutputParameterfvNV != 0 )	++localInitializedProcCount;

		glGetCombinerOutputParameterivNV = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC) getExtensionPtr( "glGetCombinerOutputParameterivNV" );
		if ( glGetCombinerOutputParameterivNV != 0 )	++localInitializedProcCount;

		glGetFinalCombinerInputParameterfvNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC) getExtensionPtr( "glGetFinalCombinerInputParameterfvNV" );
		if ( glGetFinalCombinerInputParameterfvNV != 0 )	++localInitializedProcCount;

		glGetFinalCombinerInputParameterivNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC) getExtensionPtr( "glGetFinalCombinerInputParameterivNV" );
		if ( glGetFinalCombinerInputParameterivNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_register_combiners || isSEDEnable() )
	
	if ( isGL_NV_register_combiners )
	{
		std::stringstream strStream;
		strStream << "GL_NV_register_combiners                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_register_combiners                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_register_combiners") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_register_combiners                                    : not detected." );
	}
	
	// ****** GL_NV_register_combiners2 ******
	
	isGL_NV_register_combiners2 = isExtensionSupported("GL_NV_register_combiners2");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_register_combiners2 ) // || isSEDEnable()
	{

		glCombinerStageParameterfvNV = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC) getExtensionPtr( "glCombinerStageParameterfvNV" );
		if ( glCombinerStageParameterfvNV != 0 )	++localInitializedProcCount;

		glGetCombinerStageParameterfvNV = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC) getExtensionPtr( "glGetCombinerStageParameterfvNV" );
		if ( glGetCombinerStageParameterfvNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_register_combiners2 || isSEDEnable() )
	
	if ( isGL_NV_register_combiners2 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_register_combiners2                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_register_combiners2                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_register_combiners2") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_register_combiners2                                   : not detected." );
	}
	
	// ****** GL_NV_texgen_emboss ******
	
	isGL_NV_texgen_emboss = isExtensionSupported("GL_NV_texgen_emboss");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_texgen_emboss )
	{
		std::stringstream strStream;
		strStream << "GL_NV_texgen_emboss                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_texgen_emboss                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_texgen_emboss") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_texgen_emboss                                         : not detected." );
	}
	
	// ****** GL_NV_texgen_reflection ******
	
	isGL_NV_texgen_reflection = isExtensionSupported("GL_NV_texgen_reflection");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_texgen_reflection )
	{
		std::stringstream strStream;
		strStream << "GL_NV_texgen_reflection                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_texgen_reflection                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_texgen_reflection") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_texgen_reflection                                     : not detected." );
	}
	
	// ****** GL_NV_texture_compression_vtc ******
	
	isGL_NV_texture_compression_vtc = isExtensionSupported("GL_NV_texture_compression_vtc");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_texture_compression_vtc )
	{
		std::stringstream strStream;
		strStream << "GL_NV_texture_compression_vtc                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_texture_compression_vtc                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_texture_compression_vtc") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_texture_compression_vtc                               : not detected." );
	}
	
	// ****** GL_NV_texture_env_combine4 ******
	
	isGL_NV_texture_env_combine4 = isExtensionSupported("GL_NV_texture_env_combine4");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_texture_env_combine4 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_texture_env_combine4                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_texture_env_combine4                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_texture_env_combine4") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_texture_env_combine4                                  : not detected." );
	}
	
	// ****** GL_NV_texture_expand_normal ******
	
	isGL_NV_texture_expand_normal = isExtensionSupported("GL_NV_texture_expand_normal");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_texture_expand_normal )
	{
		std::stringstream strStream;
		strStream << "GL_NV_texture_expand_normal                                 : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_texture_expand_normal                                 : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_texture_expand_normal") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_texture_expand_normal                                 : not detected." );
	}
	
	// ****** GL_NV_texture_rectangle ******
	
	isGL_NV_texture_rectangle = isExtensionSupported("GL_NV_texture_rectangle");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_texture_rectangle )
	{
		std::stringstream strStream;
		strStream << "GL_NV_texture_rectangle                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_texture_rectangle                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_texture_rectangle") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_texture_rectangle                                     : not detected." );
	}
	
	// ****** GL_NV_texture_shader ******
	
	isGL_NV_texture_shader = isExtensionSupported("GL_NV_texture_shader");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_texture_shader )
	{
		std::stringstream strStream;
		strStream << "GL_NV_texture_shader                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_texture_shader                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_texture_shader") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_texture_shader                                        : not detected." );
	}
	
	// ****** GL_NV_texture_shader2 ******
	
	isGL_NV_texture_shader2 = isExtensionSupported("GL_NV_texture_shader2");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_texture_shader2 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_texture_shader2                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_texture_shader2                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_texture_shader2") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_texture_shader2                                       : not detected." );
	}
	
	// ****** GL_NV_texture_shader3 ******
	
	isGL_NV_texture_shader3 = isExtensionSupported("GL_NV_texture_shader3");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_texture_shader3 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_texture_shader3                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_texture_shader3                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_texture_shader3") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_texture_shader3                                       : not detected." );
	}
	
	// ****** GL_NV_transform_feedback ******
	
	isGL_NV_transform_feedback = isExtensionSupported("GL_NV_transform_feedback");
	
	localSupportedProcCount		= 11;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_transform_feedback ) // || isSEDEnable()
	{

		glBeginTransformFeedbackNV = (PFNGLBEGINTRANSFORMFEEDBACKNVPROC) getExtensionPtr( "glBeginTransformFeedbackNV" );
		if ( glBeginTransformFeedbackNV != 0 )	++localInitializedProcCount;

		glEndTransformFeedbackNV = (PFNGLENDTRANSFORMFEEDBACKNVPROC) getExtensionPtr( "glEndTransformFeedbackNV" );
		if ( glEndTransformFeedbackNV != 0 )	++localInitializedProcCount;

		glTransformFeedbackAttribsNV = (PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC) getExtensionPtr( "glTransformFeedbackAttribsNV" );
		if ( glTransformFeedbackAttribsNV != 0 )	++localInitializedProcCount;

		glBindBufferRangeNV = (PFNGLBINDBUFFERRANGENVPROC) getExtensionPtr( "glBindBufferRangeNV" );
		if ( glBindBufferRangeNV != 0 )	++localInitializedProcCount;

		glBindBufferOffsetNV = (PFNGLBINDBUFFEROFFSETNVPROC) getExtensionPtr( "glBindBufferOffsetNV" );
		if ( glBindBufferOffsetNV != 0 )	++localInitializedProcCount;

		glBindBufferBaseNV = (PFNGLBINDBUFFERBASENVPROC) getExtensionPtr( "glBindBufferBaseNV" );
		if ( glBindBufferBaseNV != 0 )	++localInitializedProcCount;

		glTransformFeedbackVaryingsNV = (PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC) getExtensionPtr( "glTransformFeedbackVaryingsNV" );
		if ( glTransformFeedbackVaryingsNV != 0 )	++localInitializedProcCount;

		glActiveVaryingNV = (PFNGLACTIVEVARYINGNVPROC) getExtensionPtr( "glActiveVaryingNV" );
		if ( glActiveVaryingNV != 0 )	++localInitializedProcCount;

		glGetVaryingLocationNV = (PFNGLGETVARYINGLOCATIONNVPROC) getExtensionPtr( "glGetVaryingLocationNV" );
		if ( glGetVaryingLocationNV != 0 )	++localInitializedProcCount;

		glGetActiveVaryingNV = (PFNGLGETACTIVEVARYINGNVPROC) getExtensionPtr( "glGetActiveVaryingNV" );
		if ( glGetActiveVaryingNV != 0 )	++localInitializedProcCount;

		glGetTransformFeedbackVaryingNV = (PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC) getExtensionPtr( "glGetTransformFeedbackVaryingNV" );
		if ( glGetTransformFeedbackVaryingNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_transform_feedback || isSEDEnable() )
	
	if ( isGL_NV_transform_feedback )
	{
		std::stringstream strStream;
		strStream << "GL_NV_transform_feedback                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_transform_feedback                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_transform_feedback") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_transform_feedback                                    : not detected." );
	}
	
	// ****** GL_NV_vertex_array_range ******
	
	isGL_NV_vertex_array_range = isExtensionSupported("GL_NV_vertex_array_range");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_vertex_array_range ) // || isSEDEnable()
	{

		glFlushVertexArrayRangeNV = (PFNGLFLUSHVERTEXARRAYRANGENVPROC) getExtensionPtr( "glFlushVertexArrayRangeNV" );
		if ( glFlushVertexArrayRangeNV != 0 )	++localInitializedProcCount;

		glVertexArrayRangeNV = (PFNGLVERTEXARRAYRANGENVPROC) getExtensionPtr( "glVertexArrayRangeNV" );
		if ( glVertexArrayRangeNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_vertex_array_range || isSEDEnable() )
	
	if ( isGL_NV_vertex_array_range )
	{
		std::stringstream strStream;
		strStream << "GL_NV_vertex_array_range                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_vertex_array_range                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_vertex_array_range") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_vertex_array_range                                    : not detected." );
	}
	
	// ****** GL_NV_vertex_array_range2 ******
	
	isGL_NV_vertex_array_range2 = isExtensionSupported("GL_NV_vertex_array_range2");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_vertex_array_range2 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_vertex_array_range2                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_vertex_array_range2                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_vertex_array_range2") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_vertex_array_range2                                   : not detected." );
	}
	
	// ****** GL_NV_vertex_program ******
	
	isGL_NV_vertex_program = isExtensionSupported("GL_NV_vertex_program");
	
	localSupportedProcCount		= 64;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_vertex_program ) // || isSEDEnable()
	{

		glAreProgramsResidentNV = (PFNGLAREPROGRAMSRESIDENTNVPROC) getExtensionPtr( "glAreProgramsResidentNV" );
		if ( glAreProgramsResidentNV != 0 )	++localInitializedProcCount;

		glBindProgramNV = (PFNGLBINDPROGRAMNVPROC) getExtensionPtr( "glBindProgramNV" );
		if ( glBindProgramNV != 0 )	++localInitializedProcCount;

		glDeleteProgramsNV = (PFNGLDELETEPROGRAMSNVPROC) getExtensionPtr( "glDeleteProgramsNV" );
		if ( glDeleteProgramsNV != 0 )	++localInitializedProcCount;

		glExecuteProgramNV = (PFNGLEXECUTEPROGRAMNVPROC) getExtensionPtr( "glExecuteProgramNV" );
		if ( glExecuteProgramNV != 0 )	++localInitializedProcCount;

		glGenProgramsNV = (PFNGLGENPROGRAMSNVPROC) getExtensionPtr( "glGenProgramsNV" );
		if ( glGenProgramsNV != 0 )	++localInitializedProcCount;

		glGetProgramParameterdvNV = (PFNGLGETPROGRAMPARAMETERDVNVPROC) getExtensionPtr( "glGetProgramParameterdvNV" );
		if ( glGetProgramParameterdvNV != 0 )	++localInitializedProcCount;

		glGetProgramParameterfvNV = (PFNGLGETPROGRAMPARAMETERFVNVPROC) getExtensionPtr( "glGetProgramParameterfvNV" );
		if ( glGetProgramParameterfvNV != 0 )	++localInitializedProcCount;

		glGetProgramivNV = (PFNGLGETPROGRAMIVNVPROC) getExtensionPtr( "glGetProgramivNV" );
		if ( glGetProgramivNV != 0 )	++localInitializedProcCount;

		glGetProgramStringNV = (PFNGLGETPROGRAMSTRINGNVPROC) getExtensionPtr( "glGetProgramStringNV" );
		if ( glGetProgramStringNV != 0 )	++localInitializedProcCount;

		glGetTrackMatrixivNV = (PFNGLGETTRACKMATRIXIVNVPROC) getExtensionPtr( "glGetTrackMatrixivNV" );
		if ( glGetTrackMatrixivNV != 0 )	++localInitializedProcCount;

		glGetVertexAttribdvNV = (PFNGLGETVERTEXATTRIBDVNVPROC) getExtensionPtr( "glGetVertexAttribdvNV" );
		if ( glGetVertexAttribdvNV != 0 )	++localInitializedProcCount;

		glGetVertexAttribfvNV = (PFNGLGETVERTEXATTRIBFVNVPROC) getExtensionPtr( "glGetVertexAttribfvNV" );
		if ( glGetVertexAttribfvNV != 0 )	++localInitializedProcCount;

		glGetVertexAttribivNV = (PFNGLGETVERTEXATTRIBIVNVPROC) getExtensionPtr( "glGetVertexAttribivNV" );
		if ( glGetVertexAttribivNV != 0 )	++localInitializedProcCount;

		glGetVertexAttribPointervNV = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC) getExtensionPtr( "glGetVertexAttribPointervNV" );
		if ( glGetVertexAttribPointervNV != 0 )	++localInitializedProcCount;

		glIsProgramNV = (PFNGLISPROGRAMNVPROC) getExtensionPtr( "glIsProgramNV" );
		if ( glIsProgramNV != 0 )	++localInitializedProcCount;

		glLoadProgramNV = (PFNGLLOADPROGRAMNVPROC) getExtensionPtr( "glLoadProgramNV" );
		if ( glLoadProgramNV != 0 )	++localInitializedProcCount;

		glProgramParameter4dNV = (PFNGLPROGRAMPARAMETER4DNVPROC) getExtensionPtr( "glProgramParameter4dNV" );
		if ( glProgramParameter4dNV != 0 )	++localInitializedProcCount;

		glProgramParameter4dvNV = (PFNGLPROGRAMPARAMETER4DVNVPROC) getExtensionPtr( "glProgramParameter4dvNV" );
		if ( glProgramParameter4dvNV != 0 )	++localInitializedProcCount;

		glProgramParameter4fNV = (PFNGLPROGRAMPARAMETER4FNVPROC) getExtensionPtr( "glProgramParameter4fNV" );
		if ( glProgramParameter4fNV != 0 )	++localInitializedProcCount;

		glProgramParameter4fvNV = (PFNGLPROGRAMPARAMETER4FVNVPROC) getExtensionPtr( "glProgramParameter4fvNV" );
		if ( glProgramParameter4fvNV != 0 )	++localInitializedProcCount;

		glProgramParameters4dvNV = (PFNGLPROGRAMPARAMETERS4DVNVPROC) getExtensionPtr( "glProgramParameters4dvNV" );
		if ( glProgramParameters4dvNV != 0 )	++localInitializedProcCount;

		glProgramParameters4fvNV = (PFNGLPROGRAMPARAMETERS4FVNVPROC) getExtensionPtr( "glProgramParameters4fvNV" );
		if ( glProgramParameters4fvNV != 0 )	++localInitializedProcCount;

		glRequestResidentProgramsNV = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC) getExtensionPtr( "glRequestResidentProgramsNV" );
		if ( glRequestResidentProgramsNV != 0 )	++localInitializedProcCount;

		glTrackMatrixNV = (PFNGLTRACKMATRIXNVPROC) getExtensionPtr( "glTrackMatrixNV" );
		if ( glTrackMatrixNV != 0 )	++localInitializedProcCount;

		glVertexAttribPointerNV = (PFNGLVERTEXATTRIBPOINTERNVPROC) getExtensionPtr( "glVertexAttribPointerNV" );
		if ( glVertexAttribPointerNV != 0 )	++localInitializedProcCount;

		glVertexAttrib1dNV = (PFNGLVERTEXATTRIB1DNVPROC) getExtensionPtr( "glVertexAttrib1dNV" );
		if ( glVertexAttrib1dNV != 0 )	++localInitializedProcCount;

		glVertexAttrib1dvNV = (PFNGLVERTEXATTRIB1DVNVPROC) getExtensionPtr( "glVertexAttrib1dvNV" );
		if ( glVertexAttrib1dvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib1fNV = (PFNGLVERTEXATTRIB1FNVPROC) getExtensionPtr( "glVertexAttrib1fNV" );
		if ( glVertexAttrib1fNV != 0 )	++localInitializedProcCount;

		glVertexAttrib1fvNV = (PFNGLVERTEXATTRIB1FVNVPROC) getExtensionPtr( "glVertexAttrib1fvNV" );
		if ( glVertexAttrib1fvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib1sNV = (PFNGLVERTEXATTRIB1SNVPROC) getExtensionPtr( "glVertexAttrib1sNV" );
		if ( glVertexAttrib1sNV != 0 )	++localInitializedProcCount;

		glVertexAttrib1svNV = (PFNGLVERTEXATTRIB1SVNVPROC) getExtensionPtr( "glVertexAttrib1svNV" );
		if ( glVertexAttrib1svNV != 0 )	++localInitializedProcCount;

		glVertexAttrib2dNV = (PFNGLVERTEXATTRIB2DNVPROC) getExtensionPtr( "glVertexAttrib2dNV" );
		if ( glVertexAttrib2dNV != 0 )	++localInitializedProcCount;

		glVertexAttrib2dvNV = (PFNGLVERTEXATTRIB2DVNVPROC) getExtensionPtr( "glVertexAttrib2dvNV" );
		if ( glVertexAttrib2dvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib2fNV = (PFNGLVERTEXATTRIB2FNVPROC) getExtensionPtr( "glVertexAttrib2fNV" );
		if ( glVertexAttrib2fNV != 0 )	++localInitializedProcCount;

		glVertexAttrib2fvNV = (PFNGLVERTEXATTRIB2FVNVPROC) getExtensionPtr( "glVertexAttrib2fvNV" );
		if ( glVertexAttrib2fvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib2sNV = (PFNGLVERTEXATTRIB2SNVPROC) getExtensionPtr( "glVertexAttrib2sNV" );
		if ( glVertexAttrib2sNV != 0 )	++localInitializedProcCount;

		glVertexAttrib2svNV = (PFNGLVERTEXATTRIB2SVNVPROC) getExtensionPtr( "glVertexAttrib2svNV" );
		if ( glVertexAttrib2svNV != 0 )	++localInitializedProcCount;

		glVertexAttrib3dNV = (PFNGLVERTEXATTRIB3DNVPROC) getExtensionPtr( "glVertexAttrib3dNV" );
		if ( glVertexAttrib3dNV != 0 )	++localInitializedProcCount;

		glVertexAttrib3dvNV = (PFNGLVERTEXATTRIB3DVNVPROC) getExtensionPtr( "glVertexAttrib3dvNV" );
		if ( glVertexAttrib3dvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib3fNV = (PFNGLVERTEXATTRIB3FNVPROC) getExtensionPtr( "glVertexAttrib3fNV" );
		if ( glVertexAttrib3fNV != 0 )	++localInitializedProcCount;

		glVertexAttrib3fvNV = (PFNGLVERTEXATTRIB3FVNVPROC) getExtensionPtr( "glVertexAttrib3fvNV" );
		if ( glVertexAttrib3fvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib3sNV = (PFNGLVERTEXATTRIB3SNVPROC) getExtensionPtr( "glVertexAttrib3sNV" );
		if ( glVertexAttrib3sNV != 0 )	++localInitializedProcCount;

		glVertexAttrib3svNV = (PFNGLVERTEXATTRIB3SVNVPROC) getExtensionPtr( "glVertexAttrib3svNV" );
		if ( glVertexAttrib3svNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4dNV = (PFNGLVERTEXATTRIB4DNVPROC) getExtensionPtr( "glVertexAttrib4dNV" );
		if ( glVertexAttrib4dNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4dvNV = (PFNGLVERTEXATTRIB4DVNVPROC) getExtensionPtr( "glVertexAttrib4dvNV" );
		if ( glVertexAttrib4dvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4fNV = (PFNGLVERTEXATTRIB4FNVPROC) getExtensionPtr( "glVertexAttrib4fNV" );
		if ( glVertexAttrib4fNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4fvNV = (PFNGLVERTEXATTRIB4FVNVPROC) getExtensionPtr( "glVertexAttrib4fvNV" );
		if ( glVertexAttrib4fvNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4sNV = (PFNGLVERTEXATTRIB4SNVPROC) getExtensionPtr( "glVertexAttrib4sNV" );
		if ( glVertexAttrib4sNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4svNV = (PFNGLVERTEXATTRIB4SVNVPROC) getExtensionPtr( "glVertexAttrib4svNV" );
		if ( glVertexAttrib4svNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4ubNV = (PFNGLVERTEXATTRIB4UBNVPROC) getExtensionPtr( "glVertexAttrib4ubNV" );
		if ( glVertexAttrib4ubNV != 0 )	++localInitializedProcCount;

		glVertexAttrib4ubvNV = (PFNGLVERTEXATTRIB4UBVNVPROC) getExtensionPtr( "glVertexAttrib4ubvNV" );
		if ( glVertexAttrib4ubvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs1dvNV = (PFNGLVERTEXATTRIBS1DVNVPROC) getExtensionPtr( "glVertexAttribs1dvNV" );
		if ( glVertexAttribs1dvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs1fvNV = (PFNGLVERTEXATTRIBS1FVNVPROC) getExtensionPtr( "glVertexAttribs1fvNV" );
		if ( glVertexAttribs1fvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs1svNV = (PFNGLVERTEXATTRIBS1SVNVPROC) getExtensionPtr( "glVertexAttribs1svNV" );
		if ( glVertexAttribs1svNV != 0 )	++localInitializedProcCount;

		glVertexAttribs2dvNV = (PFNGLVERTEXATTRIBS2DVNVPROC) getExtensionPtr( "glVertexAttribs2dvNV" );
		if ( glVertexAttribs2dvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs2fvNV = (PFNGLVERTEXATTRIBS2FVNVPROC) getExtensionPtr( "glVertexAttribs2fvNV" );
		if ( glVertexAttribs2fvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs2svNV = (PFNGLVERTEXATTRIBS2SVNVPROC) getExtensionPtr( "glVertexAttribs2svNV" );
		if ( glVertexAttribs2svNV != 0 )	++localInitializedProcCount;

		glVertexAttribs3dvNV = (PFNGLVERTEXATTRIBS3DVNVPROC) getExtensionPtr( "glVertexAttribs3dvNV" );
		if ( glVertexAttribs3dvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs3fvNV = (PFNGLVERTEXATTRIBS3FVNVPROC) getExtensionPtr( "glVertexAttribs3fvNV" );
		if ( glVertexAttribs3fvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs3svNV = (PFNGLVERTEXATTRIBS3SVNVPROC) getExtensionPtr( "glVertexAttribs3svNV" );
		if ( glVertexAttribs3svNV != 0 )	++localInitializedProcCount;

		glVertexAttribs4dvNV = (PFNGLVERTEXATTRIBS4DVNVPROC) getExtensionPtr( "glVertexAttribs4dvNV" );
		if ( glVertexAttribs4dvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs4fvNV = (PFNGLVERTEXATTRIBS4FVNVPROC) getExtensionPtr( "glVertexAttribs4fvNV" );
		if ( glVertexAttribs4fvNV != 0 )	++localInitializedProcCount;

		glVertexAttribs4svNV = (PFNGLVERTEXATTRIBS4SVNVPROC) getExtensionPtr( "glVertexAttribs4svNV" );
		if ( glVertexAttribs4svNV != 0 )	++localInitializedProcCount;

		glVertexAttribs4ubvNV = (PFNGLVERTEXATTRIBS4UBVNVPROC) getExtensionPtr( "glVertexAttribs4ubvNV" );
		if ( glVertexAttribs4ubvNV != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_vertex_program || isSEDEnable() )
	
	if ( isGL_NV_vertex_program )
	{
		std::stringstream strStream;
		strStream << "GL_NV_vertex_program                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_vertex_program                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_vertex_program") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_vertex_program                                        : not detected." );
	}
	
	// ****** GL_NV_vertex_program1_1 ******
	
	isGL_NV_vertex_program1_1 = isExtensionSupported("GL_NV_vertex_program1_1");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_vertex_program1_1 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_vertex_program1_1                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_vertex_program1_1                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_vertex_program1_1") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_vertex_program1_1                                     : not detected." );
	}
	
	// ****** GL_NV_vertex_program2 ******
	
	isGL_NV_vertex_program2 = isExtensionSupported("GL_NV_vertex_program2");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_vertex_program2 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_vertex_program2                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_vertex_program2                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_vertex_program2") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_vertex_program2                                       : not detected." );
	}
	
	// ****** GL_NV_vertex_program2_option ******
	
	isGL_NV_vertex_program2_option = isExtensionSupported("GL_NV_vertex_program2_option");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_vertex_program2_option )
	{
		std::stringstream strStream;
		strStream << "GL_NV_vertex_program2_option                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_vertex_program2_option                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_vertex_program2_option") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_vertex_program2_option                                : not detected." );
	}
	
	// ****** GL_NV_vertex_program3 ******
	
	isGL_NV_vertex_program3 = isExtensionSupported("GL_NV_vertex_program3");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_NV_vertex_program3 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_vertex_program3                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_vertex_program3                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_vertex_program3") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_vertex_program3                                       : not detected." );
	}
	
	// ****** GL_NV_vertex_program4 ******
	
	isGL_NV_vertex_program4 = isExtensionSupported("GL_NV_vertex_program4");
	
	localSupportedProcCount		= 23;
	localInitializedProcCount	= 0;
	
	if ( isGL_NV_vertex_program4 ) // || isSEDEnable()
	{

		glVertexAttribI1iEXT = (PFNGLVERTEXATTRIBI1IEXTPROC) getExtensionPtr( "glVertexAttribI1iEXT" );
		if ( glVertexAttribI1iEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI2iEXT = (PFNGLVERTEXATTRIBI2IEXTPROC) getExtensionPtr( "glVertexAttribI2iEXT" );
		if ( glVertexAttribI2iEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI3iEXT = (PFNGLVERTEXATTRIBI3IEXTPROC) getExtensionPtr( "glVertexAttribI3iEXT" );
		if ( glVertexAttribI3iEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI4iEXT = (PFNGLVERTEXATTRIBI4IEXTPROC) getExtensionPtr( "glVertexAttribI4iEXT" );
		if ( glVertexAttribI4iEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI1uiEXT = (PFNGLVERTEXATTRIBI1UIEXTPROC) getExtensionPtr( "glVertexAttribI1uiEXT" );
		if ( glVertexAttribI1uiEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI2uiEXT = (PFNGLVERTEXATTRIBI2UIEXTPROC) getExtensionPtr( "glVertexAttribI2uiEXT" );
		if ( glVertexAttribI2uiEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI3uiEXT = (PFNGLVERTEXATTRIBI3UIEXTPROC) getExtensionPtr( "glVertexAttribI3uiEXT" );
		if ( glVertexAttribI3uiEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI4uiEXT = (PFNGLVERTEXATTRIBI4UIEXTPROC) getExtensionPtr( "glVertexAttribI4uiEXT" );
		if ( glVertexAttribI4uiEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI1ivEXT = (PFNGLVERTEXATTRIBI1IVEXTPROC) getExtensionPtr( "glVertexAttribI1ivEXT" );
		if ( glVertexAttribI1ivEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI2ivEXT = (PFNGLVERTEXATTRIBI2IVEXTPROC) getExtensionPtr( "glVertexAttribI2ivEXT" );
		if ( glVertexAttribI2ivEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI3ivEXT = (PFNGLVERTEXATTRIBI3IVEXTPROC) getExtensionPtr( "glVertexAttribI3ivEXT" );
		if ( glVertexAttribI3ivEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI4ivEXT = (PFNGLVERTEXATTRIBI4IVEXTPROC) getExtensionPtr( "glVertexAttribI4ivEXT" );
		if ( glVertexAttribI4ivEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI1uivEXT = (PFNGLVERTEXATTRIBI1UIVEXTPROC) getExtensionPtr( "glVertexAttribI1uivEXT" );
		if ( glVertexAttribI1uivEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI2uivEXT = (PFNGLVERTEXATTRIBI2UIVEXTPROC) getExtensionPtr( "glVertexAttribI2uivEXT" );
		if ( glVertexAttribI2uivEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI3uivEXT = (PFNGLVERTEXATTRIBI3UIVEXTPROC) getExtensionPtr( "glVertexAttribI3uivEXT" );
		if ( glVertexAttribI3uivEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI4uivEXT = (PFNGLVERTEXATTRIBI4UIVEXTPROC) getExtensionPtr( "glVertexAttribI4uivEXT" );
		if ( glVertexAttribI4uivEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI4bvEXT = (PFNGLVERTEXATTRIBI4BVEXTPROC) getExtensionPtr( "glVertexAttribI4bvEXT" );
		if ( glVertexAttribI4bvEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI4svEXT = (PFNGLVERTEXATTRIBI4SVEXTPROC) getExtensionPtr( "glVertexAttribI4svEXT" );
		if ( glVertexAttribI4svEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI4ubvEXT = (PFNGLVERTEXATTRIBI4UBVEXTPROC) getExtensionPtr( "glVertexAttribI4ubvEXT" );
		if ( glVertexAttribI4ubvEXT != 0 )	++localInitializedProcCount;

		glVertexAttribI4usvEXT = (PFNGLVERTEXATTRIBI4USVEXTPROC) getExtensionPtr( "glVertexAttribI4usvEXT" );
		if ( glVertexAttribI4usvEXT != 0 )	++localInitializedProcCount;

		glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC) getExtensionPtr( "glVertexAttribIPointerEXT" );
		if ( glVertexAttribIPointerEXT != 0 )	++localInitializedProcCount;

		glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC) getExtensionPtr( "glGetVertexAttribIivEXT" );
		if ( glGetVertexAttribIivEXT != 0 )	++localInitializedProcCount;

		glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC) getExtensionPtr( "glGetVertexAttribIuivEXT" );
		if ( glGetVertexAttribIuivEXT != 0 )	++localInitializedProcCount;
	} // if ( isGL_NV_vertex_program4 || isSEDEnable() )
	
	if ( isGL_NV_vertex_program4 )
	{
		std::stringstream strStream;
		strStream << "GL_NV_vertex_program4                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_NV_vertex_program4                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_NV_vertex_program4") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_NV_vertex_program4                                       : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_OES()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_OES_read_format ******
	
	isGL_OES_read_format = isExtensionSupported("GL_OES_read_format");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_OES_read_format )
	{
		std::stringstream strStream;
		strStream << "GL_OES_read_format                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_OES_read_format                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_OES_read_format") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_OES_read_format                                          : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_OML()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_OML_interlace ******
	
	isGL_OML_interlace = isExtensionSupported("GL_OML_interlace");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_OML_interlace )
	{
		std::stringstream strStream;
		strStream << "GL_OML_interlace                                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_OML_interlace                                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_OML_interlace") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_OML_interlace                                            : not detected." );
	}
	
	// ****** GL_OML_resample ******
	
	isGL_OML_resample = isExtensionSupported("GL_OML_resample");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_OML_resample )
	{
		std::stringstream strStream;
		strStream << "GL_OML_resample                                             : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_OML_resample                                             : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_OML_resample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_OML_resample                                             : not detected." );
	}
	
	// ****** GL_OML_subsample ******
	
	isGL_OML_subsample = isExtensionSupported("GL_OML_subsample");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_OML_subsample )
	{
		std::stringstream strStream;
		strStream << "GL_OML_subsample                                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_OML_subsample                                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_OML_subsample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_OML_subsample                                            : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_PGI()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_PGI_misc_hints ******
	
	isGL_PGI_misc_hints = isExtensionSupported("GL_PGI_misc_hints");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_PGI_misc_hints ) // || isSEDEnable()
	{

		glHintPGI = (PFNGLHINTPGIPROC) getExtensionPtr( "glHintPGI" );
		if ( glHintPGI != 0 )	++localInitializedProcCount;
	} // if ( isGL_PGI_misc_hints || isSEDEnable() )
	
	if ( isGL_PGI_misc_hints )
	{
		std::stringstream strStream;
		strStream << "GL_PGI_misc_hints                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_PGI_misc_hints                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_PGI_misc_hints") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_PGI_misc_hints                                           : not detected." );
	}
	
	// ****** GL_PGI_vertex_hints ******
	
	isGL_PGI_vertex_hints = isExtensionSupported("GL_PGI_vertex_hints");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_PGI_vertex_hints )
	{
		std::stringstream strStream;
		strStream << "GL_PGI_vertex_hints                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_PGI_vertex_hints                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_PGI_vertex_hints") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_PGI_vertex_hints                                         : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_REND()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_REND_screen_coordinates ******
	
	isGL_REND_screen_coordinates = isExtensionSupported("GL_REND_screen_coordinates");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_REND_screen_coordinates )
	{
		std::stringstream strStream;
		strStream << "GL_REND_screen_coordinates                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_REND_screen_coordinates                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_REND_screen_coordinates") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_REND_screen_coordinates                                  : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_S3()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_S3_s3tc ******
	
	isGL_S3_s3tc = isExtensionSupported("GL_S3_s3tc");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_S3_s3tc )
	{
		std::stringstream strStream;
		strStream << "GL_S3_s3tc                                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_S3_s3tc                                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_S3_s3tc") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_S3_s3tc                                                  : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_SGI()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_SGI_color_matrix ******
	
	isGL_SGI_color_matrix = isExtensionSupported("GL_SGI_color_matrix");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGI_color_matrix )
	{
		std::stringstream strStream;
		strStream << "GL_SGI_color_matrix                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGI_color_matrix                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGI_color_matrix") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGI_color_matrix                                         : not detected." );
	}
	
	// ****** GL_SGI_color_table ******
	
	isGL_SGI_color_table = isExtensionSupported("GL_SGI_color_table");
	
	localSupportedProcCount		= 7;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGI_color_table ) // || isSEDEnable()
	{

		glColorTableSGI = (PFNGLCOLORTABLESGIPROC) getExtensionPtr( "glColorTableSGI" );
		if ( glColorTableSGI != 0 )	++localInitializedProcCount;

		glColorTableParameterfvSGI = (PFNGLCOLORTABLEPARAMETERFVSGIPROC) getExtensionPtr( "glColorTableParameterfvSGI" );
		if ( glColorTableParameterfvSGI != 0 )	++localInitializedProcCount;

		glColorTableParameterivSGI = (PFNGLCOLORTABLEPARAMETERIVSGIPROC) getExtensionPtr( "glColorTableParameterivSGI" );
		if ( glColorTableParameterivSGI != 0 )	++localInitializedProcCount;

		glCopyColorTableSGI = (PFNGLCOPYCOLORTABLESGIPROC) getExtensionPtr( "glCopyColorTableSGI" );
		if ( glCopyColorTableSGI != 0 )	++localInitializedProcCount;

		glGetColorTableSGI = (PFNGLGETCOLORTABLESGIPROC) getExtensionPtr( "glGetColorTableSGI" );
		if ( glGetColorTableSGI != 0 )	++localInitializedProcCount;

		glGetColorTableParameterfvSGI = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC) getExtensionPtr( "glGetColorTableParameterfvSGI" );
		if ( glGetColorTableParameterfvSGI != 0 )	++localInitializedProcCount;

		glGetColorTableParameterivSGI = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC) getExtensionPtr( "glGetColorTableParameterivSGI" );
		if ( glGetColorTableParameterivSGI != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGI_color_table || isSEDEnable() )
	
	if ( isGL_SGI_color_table )
	{
		std::stringstream strStream;
		strStream << "GL_SGI_color_table                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGI_color_table                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGI_color_table") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGI_color_table                                          : not detected." );
	}
	
	// ****** GL_SGI_depth_pass_instrument ******
	
	isGL_SGI_depth_pass_instrument = isExtensionSupported("GL_SGI_depth_pass_instrument");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGI_depth_pass_instrument )
	{
		std::stringstream strStream;
		strStream << "GL_SGI_depth_pass_instrument                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGI_depth_pass_instrument                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGI_depth_pass_instrument") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGI_depth_pass_instrument                                : not detected." );
	}
	
	// ****** GL_SGI_texture_color_table ******
	
	isGL_SGI_texture_color_table = isExtensionSupported("GL_SGI_texture_color_table");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGI_texture_color_table )
	{
		std::stringstream strStream;
		strStream << "GL_SGI_texture_color_table                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGI_texture_color_table                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGI_texture_color_table") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGI_texture_color_table                                  : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_SGIS()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_SGIS_detail_texture ******
	
	isGL_SGIS_detail_texture = isExtensionSupported("GL_SGIS_detail_texture");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIS_detail_texture ) // || isSEDEnable()
	{

		glDetailTexFuncSGIS = (PFNGLDETAILTEXFUNCSGISPROC) getExtensionPtr( "glDetailTexFuncSGIS" );
		if ( glDetailTexFuncSGIS != 0 )	++localInitializedProcCount;

		glGetDetailTexFuncSGIS = (PFNGLGETDETAILTEXFUNCSGISPROC) getExtensionPtr( "glGetDetailTexFuncSGIS" );
		if ( glGetDetailTexFuncSGIS != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIS_detail_texture || isSEDEnable() )
	
	if ( isGL_SGIS_detail_texture )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_detail_texture                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_detail_texture                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_detail_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_detail_texture                                      : not detected." );
	}
	
	// ****** GL_SGIS_fog_function ******
	
	isGL_SGIS_fog_function = isExtensionSupported("GL_SGIS_fog_function");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIS_fog_function ) // || isSEDEnable()
	{

		glFogFuncSGIS = (PFNGLFOGFUNCSGISPROC) getExtensionPtr( "glFogFuncSGIS" );
		if ( glFogFuncSGIS != 0 )	++localInitializedProcCount;

		glGetFogFuncSGIS = (PFNGLGETFOGFUNCSGISPROC) getExtensionPtr( "glGetFogFuncSGIS" );
		if ( glGetFogFuncSGIS != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIS_fog_function || isSEDEnable() )
	
	if ( isGL_SGIS_fog_function )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_fog_function                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_fog_function                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_fog_function") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_fog_function                                        : not detected." );
	}
	
	// ****** GL_SGIS_generate_mipmap ******
	
	isGL_SGIS_generate_mipmap = isExtensionSupported("GL_SGIS_generate_mipmap");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIS_generate_mipmap )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_generate_mipmap                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_generate_mipmap                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_generate_mipmap") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_generate_mipmap                                     : not detected." );
	}
	
	// ****** GL_SGIS_multisample ******
	
	isGL_SGIS_multisample = isExtensionSupported("GL_SGIS_multisample");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIS_multisample ) // || isSEDEnable()
	{

		glSampleMaskSGIS = (PFNGLSAMPLEMASKSGISPROC) getExtensionPtr( "glSampleMaskSGIS" );
		if ( glSampleMaskSGIS != 0 )	++localInitializedProcCount;

		glSamplePatternSGIS = (PFNGLSAMPLEPATTERNSGISPROC) getExtensionPtr( "glSamplePatternSGIS" );
		if ( glSamplePatternSGIS != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIS_multisample || isSEDEnable() )
	
	if ( isGL_SGIS_multisample )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_multisample                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_multisample                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_multisample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_multisample                                         : not detected." );
	}
	
	// ****** GL_SGIS_pixel_texture ******
	
	isGL_SGIS_pixel_texture = isExtensionSupported("GL_SGIS_pixel_texture");
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIS_pixel_texture ) // || isSEDEnable()
	{

		glPixelTexGenParameteriSGIS = (PFNGLPIXELTEXGENPARAMETERISGISPROC) getExtensionPtr( "glPixelTexGenParameteriSGIS" );
		if ( glPixelTexGenParameteriSGIS != 0 )	++localInitializedProcCount;

		glPixelTexGenParameterivSGIS = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC) getExtensionPtr( "glPixelTexGenParameterivSGIS" );
		if ( glPixelTexGenParameterivSGIS != 0 )	++localInitializedProcCount;

		glPixelTexGenParameterfSGIS = (PFNGLPIXELTEXGENPARAMETERFSGISPROC) getExtensionPtr( "glPixelTexGenParameterfSGIS" );
		if ( glPixelTexGenParameterfSGIS != 0 )	++localInitializedProcCount;

		glPixelTexGenParameterfvSGIS = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC) getExtensionPtr( "glPixelTexGenParameterfvSGIS" );
		if ( glPixelTexGenParameterfvSGIS != 0 )	++localInitializedProcCount;

		glGetPixelTexGenParameterivSGIS = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC) getExtensionPtr( "glGetPixelTexGenParameterivSGIS" );
		if ( glGetPixelTexGenParameterivSGIS != 0 )	++localInitializedProcCount;

		glGetPixelTexGenParameterfvSGIS = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC) getExtensionPtr( "glGetPixelTexGenParameterfvSGIS" );
		if ( glGetPixelTexGenParameterfvSGIS != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIS_pixel_texture || isSEDEnable() )
	
	if ( isGL_SGIS_pixel_texture )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_pixel_texture                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_pixel_texture                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_pixel_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_pixel_texture                                       : not detected." );
	}
	
	// ****** GL_SGIS_point_line_texgen ******
	
	isGL_SGIS_point_line_texgen = isExtensionSupported("GL_SGIS_point_line_texgen");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIS_point_line_texgen )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_point_line_texgen                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_point_line_texgen                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_point_line_texgen") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_point_line_texgen                                   : not detected." );
	}
	
	// ****** GL_SGIS_point_parameters ******
	
	isGL_SGIS_point_parameters = isExtensionSupported("GL_SGIS_point_parameters");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIS_point_parameters ) // || isSEDEnable()
	{

		glPointParameterfSGIS = (PFNGLPOINTPARAMETERFSGISPROC) getExtensionPtr( "glPointParameterfSGIS" );
		if ( glPointParameterfSGIS != 0 )	++localInitializedProcCount;

		glPointParameterfvSGIS = (PFNGLPOINTPARAMETERFVSGISPROC) getExtensionPtr( "glPointParameterfvSGIS" );
		if ( glPointParameterfvSGIS != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIS_point_parameters || isSEDEnable() )
	
	if ( isGL_SGIS_point_parameters )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_point_parameters                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_point_parameters                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_point_parameters") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_point_parameters                                    : not detected." );
	}
	
	// ****** GL_SGIS_sharpen_texture ******
	
	isGL_SGIS_sharpen_texture = isExtensionSupported("GL_SGIS_sharpen_texture");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIS_sharpen_texture ) // || isSEDEnable()
	{

		glSharpenTexFuncSGIS = (PFNGLSHARPENTEXFUNCSGISPROC) getExtensionPtr( "glSharpenTexFuncSGIS" );
		if ( glSharpenTexFuncSGIS != 0 )	++localInitializedProcCount;

		glGetSharpenTexFuncSGIS = (PFNGLGETSHARPENTEXFUNCSGISPROC) getExtensionPtr( "glGetSharpenTexFuncSGIS" );
		if ( glGetSharpenTexFuncSGIS != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIS_sharpen_texture || isSEDEnable() )
	
	if ( isGL_SGIS_sharpen_texture )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_sharpen_texture                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_sharpen_texture                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_sharpen_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_sharpen_texture                                     : not detected." );
	}
	
	// ****** GL_SGIS_texture4D ******
	
	isGL_SGIS_texture4D = isExtensionSupported("GL_SGIS_texture4D");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIS_texture4D ) // || isSEDEnable()
	{

		glTexImage4DSGIS = (PFNGLTEXIMAGE4DSGISPROC) getExtensionPtr( "glTexImage4DSGIS" );
		if ( glTexImage4DSGIS != 0 )	++localInitializedProcCount;

		glTexSubImage4DSGIS = (PFNGLTEXSUBIMAGE4DSGISPROC) getExtensionPtr( "glTexSubImage4DSGIS" );
		if ( glTexSubImage4DSGIS != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIS_texture4D || isSEDEnable() )
	
	if ( isGL_SGIS_texture4D )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_texture4D                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_texture4D                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_texture4D") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_texture4D                                           : not detected." );
	}
	
	// ****** GL_SGIS_texture_border_clamp ******
	
	isGL_SGIS_texture_border_clamp = isExtensionSupported("GL_SGIS_texture_border_clamp");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIS_texture_border_clamp )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_texture_border_clamp                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_texture_border_clamp                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_texture_border_clamp") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_texture_border_clamp                                : not detected." );
	}
	
	// ****** GL_SGIS_texture_color_mask ******
	
	isGL_SGIS_texture_color_mask = isExtensionSupported("GL_SGIS_texture_color_mask");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIS_texture_color_mask ) // || isSEDEnable()
	{

		glTextureColorMaskSGIS = (PFNGLTEXTURECOLORMASKSGISPROC) getExtensionPtr( "glTextureColorMaskSGIS" );
		if ( glTextureColorMaskSGIS != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIS_texture_color_mask || isSEDEnable() )
	
	if ( isGL_SGIS_texture_color_mask )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_texture_color_mask                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_texture_color_mask                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_texture_color_mask") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_texture_color_mask                                  : not detected." );
	}
	
	// ****** GL_SGIS_texture_edge_clamp ******
	
	isGL_SGIS_texture_edge_clamp = isExtensionSupported("GL_SGIS_texture_edge_clamp");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIS_texture_edge_clamp )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_texture_edge_clamp                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_texture_edge_clamp                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_texture_edge_clamp") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_texture_edge_clamp                                  : not detected." );
	}
	
	// ****** GL_SGIS_texture_filter4 ******
	
	isGL_SGIS_texture_filter4 = isExtensionSupported("GL_SGIS_texture_filter4");
	
	localSupportedProcCount		= 2;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIS_texture_filter4 ) // || isSEDEnable()
	{

		glGetTexFilterFuncSGIS = (PFNGLGETTEXFILTERFUNCSGISPROC) getExtensionPtr( "glGetTexFilterFuncSGIS" );
		if ( glGetTexFilterFuncSGIS != 0 )	++localInitializedProcCount;

		glTexFilterFuncSGIS = (PFNGLTEXFILTERFUNCSGISPROC) getExtensionPtr( "glTexFilterFuncSGIS" );
		if ( glTexFilterFuncSGIS != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIS_texture_filter4 || isSEDEnable() )
	
	if ( isGL_SGIS_texture_filter4 )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_texture_filter4                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_texture_filter4                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_texture_filter4") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_texture_filter4                                     : not detected." );
	}
	
	// ****** GL_SGIS_texture_lod ******
	
	isGL_SGIS_texture_lod = isExtensionSupported("GL_SGIS_texture_lod");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIS_texture_lod )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_texture_lod                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_texture_lod                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_texture_lod") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_texture_lod                                         : not detected." );
	}
	
	// ****** GL_SGIS_texture_select ******
	
	isGL_SGIS_texture_select = isExtensionSupported("GL_SGIS_texture_select");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIS_texture_select )
	{
		std::stringstream strStream;
		strStream << "GL_SGIS_texture_select                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIS_texture_select                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIS_texture_select") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIS_texture_select                                      : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_SGIX()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_SGIX_async ******
	
	isGL_SGIX_async = isExtensionSupported("GL_SGIX_async");
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_async ) // || isSEDEnable()
	{

		glAsyncMarkerSGIX = (PFNGLASYNCMARKERSGIXPROC) getExtensionPtr( "glAsyncMarkerSGIX" );
		if ( glAsyncMarkerSGIX != 0 )	++localInitializedProcCount;

		glFinishAsyncSGIX = (PFNGLFINISHASYNCSGIXPROC) getExtensionPtr( "glFinishAsyncSGIX" );
		if ( glFinishAsyncSGIX != 0 )	++localInitializedProcCount;

		glPollAsyncSGIX = (PFNGLPOLLASYNCSGIXPROC) getExtensionPtr( "glPollAsyncSGIX" );
		if ( glPollAsyncSGIX != 0 )	++localInitializedProcCount;

		glGenAsyncMarkersSGIX = (PFNGLGENASYNCMARKERSSGIXPROC) getExtensionPtr( "glGenAsyncMarkersSGIX" );
		if ( glGenAsyncMarkersSGIX != 0 )	++localInitializedProcCount;

		glDeleteAsyncMarkersSGIX = (PFNGLDELETEASYNCMARKERSSGIXPROC) getExtensionPtr( "glDeleteAsyncMarkersSGIX" );
		if ( glDeleteAsyncMarkersSGIX != 0 )	++localInitializedProcCount;

		glIsAsyncMarkerSGIX = (PFNGLISASYNCMARKERSGIXPROC) getExtensionPtr( "glIsAsyncMarkerSGIX" );
		if ( glIsAsyncMarkerSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_async || isSEDEnable() )
	
	if ( isGL_SGIX_async )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_async                                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_async                                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_async") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_async                                               : not detected." );
	}
	
	// ****** GL_SGIX_async_histogram ******
	
	isGL_SGIX_async_histogram = isExtensionSupported("GL_SGIX_async_histogram");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_async_histogram )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_async_histogram                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_async_histogram                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_async_histogram") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_async_histogram                                     : not detected." );
	}
	
	// ****** GL_SGIX_async_pixel ******
	
	isGL_SGIX_async_pixel = isExtensionSupported("GL_SGIX_async_pixel");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_async_pixel )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_async_pixel                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_async_pixel                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_async_pixel") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_async_pixel                                         : not detected." );
	}
	
	// ****** GL_SGIX_blend_alpha_minmax ******
	
	isGL_SGIX_blend_alpha_minmax = isExtensionSupported("GL_SGIX_blend_alpha_minmax");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_blend_alpha_minmax )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_blend_alpha_minmax                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_blend_alpha_minmax                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_blend_alpha_minmax") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_blend_alpha_minmax                                  : not detected." );
	}
	
	// ****** GL_SGIX_calligraphic_fragment ******
	
	isGL_SGIX_calligraphic_fragment = isExtensionSupported("GL_SGIX_calligraphic_fragment");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_calligraphic_fragment )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_calligraphic_fragment                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_calligraphic_fragment                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_calligraphic_fragment") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_calligraphic_fragment                               : not detected." );
	}
	
	// ****** GL_SGIX_clipmap ******
	
	isGL_SGIX_clipmap = isExtensionSupported("GL_SGIX_clipmap");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_clipmap )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_clipmap                                             : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_clipmap                                             : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_clipmap") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_clipmap                                             : not detected." );
	}
	
	// ****** GL_SGIX_convolution_accuracy ******
	
	isGL_SGIX_convolution_accuracy = isExtensionSupported("GL_SGIX_convolution_accuracy");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_convolution_accuracy )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_convolution_accuracy                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_convolution_accuracy                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_convolution_accuracy") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_convolution_accuracy                                : not detected." );
	}
	
	// ****** GL_SGIX_depth_pass_instrument ******
	
	isGL_SGIX_depth_pass_instrument = isExtensionSupported("GL_SGIX_depth_pass_instrument");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_depth_pass_instrument )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_depth_pass_instrument                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_depth_pass_instrument                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_depth_pass_instrument") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_depth_pass_instrument                               : not detected." );
	}
	
	// ****** GL_SGIX_depth_texture ******
	
	isGL_SGIX_depth_texture = isExtensionSupported("GL_SGIX_depth_texture");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_depth_texture )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_depth_texture                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_depth_texture                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_depth_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_depth_texture                                       : not detected." );
	}
	
	// ****** GL_SGIX_flush_raster ******
	
	isGL_SGIX_flush_raster = isExtensionSupported("GL_SGIX_flush_raster");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_flush_raster ) // || isSEDEnable()
	{

		glFlushRasterSGIX = (PFNGLFLUSHRASTERSGIXPROC) getExtensionPtr( "glFlushRasterSGIX" );
		if ( glFlushRasterSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_flush_raster || isSEDEnable() )
	
	if ( isGL_SGIX_flush_raster )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_flush_raster                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_flush_raster                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_flush_raster") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_flush_raster                                        : not detected." );
	}
	
	// ****** GL_SGIX_fog_offset ******
	
	isGL_SGIX_fog_offset = isExtensionSupported("GL_SGIX_fog_offset");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_fog_offset )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_fog_offset                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_fog_offset                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_fog_offset") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_fog_offset                                          : not detected." );
	}
	
	// ****** GL_SGIX_fog_scale ******
	
	isGL_SGIX_fog_scale = isExtensionSupported("GL_SGIX_fog_scale");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_fog_scale )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_fog_scale                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_fog_scale                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_fog_scale") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_fog_scale                                           : not detected." );
	}
	
	// ****** GL_SGIX_fragment_lighting ******
	
	isGL_SGIX_fragment_lighting = isExtensionSupported("GL_SGIX_fragment_lighting");
	
	localSupportedProcCount		= 18;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_fragment_lighting ) // || isSEDEnable()
	{

		glFragmentColorMaterialSGIX = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC) getExtensionPtr( "glFragmentColorMaterialSGIX" );
		if ( glFragmentColorMaterialSGIX != 0 )	++localInitializedProcCount;

		glFragmentLightfSGIX = (PFNGLFRAGMENTLIGHTFSGIXPROC) getExtensionPtr( "glFragmentLightfSGIX" );
		if ( glFragmentLightfSGIX != 0 )	++localInitializedProcCount;

		glFragmentLightfvSGIX = (PFNGLFRAGMENTLIGHTFVSGIXPROC) getExtensionPtr( "glFragmentLightfvSGIX" );
		if ( glFragmentLightfvSGIX != 0 )	++localInitializedProcCount;

		glFragmentLightiSGIX = (PFNGLFRAGMENTLIGHTISGIXPROC) getExtensionPtr( "glFragmentLightiSGIX" );
		if ( glFragmentLightiSGIX != 0 )	++localInitializedProcCount;

		glFragmentLightivSGIX = (PFNGLFRAGMENTLIGHTIVSGIXPROC) getExtensionPtr( "glFragmentLightivSGIX" );
		if ( glFragmentLightivSGIX != 0 )	++localInitializedProcCount;

		glFragmentLightModelfSGIX = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC) getExtensionPtr( "glFragmentLightModelfSGIX" );
		if ( glFragmentLightModelfSGIX != 0 )	++localInitializedProcCount;

		glFragmentLightModelfvSGIX = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC) getExtensionPtr( "glFragmentLightModelfvSGIX" );
		if ( glFragmentLightModelfvSGIX != 0 )	++localInitializedProcCount;

		glFragmentLightModeliSGIX = (PFNGLFRAGMENTLIGHTMODELISGIXPROC) getExtensionPtr( "glFragmentLightModeliSGIX" );
		if ( glFragmentLightModeliSGIX != 0 )	++localInitializedProcCount;

		glFragmentLightModelivSGIX = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC) getExtensionPtr( "glFragmentLightModelivSGIX" );
		if ( glFragmentLightModelivSGIX != 0 )	++localInitializedProcCount;

		glFragmentMaterialfSGIX = (PFNGLFRAGMENTMATERIALFSGIXPROC) getExtensionPtr( "glFragmentMaterialfSGIX" );
		if ( glFragmentMaterialfSGIX != 0 )	++localInitializedProcCount;

		glFragmentMaterialfvSGIX = (PFNGLFRAGMENTMATERIALFVSGIXPROC) getExtensionPtr( "glFragmentMaterialfvSGIX" );
		if ( glFragmentMaterialfvSGIX != 0 )	++localInitializedProcCount;

		glFragmentMaterialiSGIX = (PFNGLFRAGMENTMATERIALISGIXPROC) getExtensionPtr( "glFragmentMaterialiSGIX" );
		if ( glFragmentMaterialiSGIX != 0 )	++localInitializedProcCount;

		glFragmentMaterialivSGIX = (PFNGLFRAGMENTMATERIALIVSGIXPROC) getExtensionPtr( "glFragmentMaterialivSGIX" );
		if ( glFragmentMaterialivSGIX != 0 )	++localInitializedProcCount;

		glGetFragmentLightfvSGIX = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC) getExtensionPtr( "glGetFragmentLightfvSGIX" );
		if ( glGetFragmentLightfvSGIX != 0 )	++localInitializedProcCount;

		glGetFragmentLightivSGIX = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC) getExtensionPtr( "glGetFragmentLightivSGIX" );
		if ( glGetFragmentLightivSGIX != 0 )	++localInitializedProcCount;

		glGetFragmentMaterialfvSGIX = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC) getExtensionPtr( "glGetFragmentMaterialfvSGIX" );
		if ( glGetFragmentMaterialfvSGIX != 0 )	++localInitializedProcCount;

		glGetFragmentMaterialivSGIX = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC) getExtensionPtr( "glGetFragmentMaterialivSGIX" );
		if ( glGetFragmentMaterialivSGIX != 0 )	++localInitializedProcCount;

		glLightEnviSGIX = (PFNGLLIGHTENVISGIXPROC) getExtensionPtr( "glLightEnviSGIX" );
		if ( glLightEnviSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_fragment_lighting || isSEDEnable() )
	
	if ( isGL_SGIX_fragment_lighting )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_fragment_lighting                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_fragment_lighting                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_fragment_lighting") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_fragment_lighting                                   : not detected." );
	}
	
	// ****** GL_SGIX_framezoom ******
	
	isGL_SGIX_framezoom = isExtensionSupported("GL_SGIX_framezoom");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_framezoom ) // || isSEDEnable()
	{

		glFrameZoomSGIX = (PFNGLFRAMEZOOMSGIXPROC) getExtensionPtr( "glFrameZoomSGIX" );
		if ( glFrameZoomSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_framezoom || isSEDEnable() )
	
	if ( isGL_SGIX_framezoom )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_framezoom                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_framezoom                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_framezoom") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_framezoom                                           : not detected." );
	}
	
	// ****** GL_SGIX_igloo_interface ******
	
	isGL_SGIX_igloo_interface = isExtensionSupported("GL_SGIX_igloo_interface");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_igloo_interface ) // || isSEDEnable()
	{

		glIglooInterfaceSGIX = (PFNGLIGLOOINTERFACESGIXPROC) getExtensionPtr( "glIglooInterfaceSGIX" );
		if ( glIglooInterfaceSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_igloo_interface || isSEDEnable() )
	
	if ( isGL_SGIX_igloo_interface )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_igloo_interface                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_igloo_interface                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_igloo_interface") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_igloo_interface                                     : not detected." );
	}
	
	// ****** GL_SGIX_impact_pixel_texture ******
	
	isGL_SGIX_impact_pixel_texture = isExtensionSupported("GL_SGIX_impact_pixel_texture");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_impact_pixel_texture )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_impact_pixel_texture                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_impact_pixel_texture                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_impact_pixel_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_impact_pixel_texture                                : not detected." );
	}
	
	// ****** GL_SGIX_instruments ******
	
	isGL_SGIX_instruments = isExtensionSupported("GL_SGIX_instruments");
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_instruments ) // || isSEDEnable()
	{

		glGetInstrumentsSGIX = (PFNGLGETINSTRUMENTSSGIXPROC) getExtensionPtr( "glGetInstrumentsSGIX" );
		if ( glGetInstrumentsSGIX != 0 )	++localInitializedProcCount;

		glInstrumentsBufferSGIX = (PFNGLINSTRUMENTSBUFFERSGIXPROC) getExtensionPtr( "glInstrumentsBufferSGIX" );
		if ( glInstrumentsBufferSGIX != 0 )	++localInitializedProcCount;

		glPollInstrumentsSGIX = (PFNGLPOLLINSTRUMENTSSGIXPROC) getExtensionPtr( "glPollInstrumentsSGIX" );
		if ( glPollInstrumentsSGIX != 0 )	++localInitializedProcCount;

		glReadInstrumentsSGIX = (PFNGLREADINSTRUMENTSSGIXPROC) getExtensionPtr( "glReadInstrumentsSGIX" );
		if ( glReadInstrumentsSGIX != 0 )	++localInitializedProcCount;

		glStartInstrumentsSGIX = (PFNGLSTARTINSTRUMENTSSGIXPROC) getExtensionPtr( "glStartInstrumentsSGIX" );
		if ( glStartInstrumentsSGIX != 0 )	++localInitializedProcCount;

		glStopInstrumentsSGIX = (PFNGLSTOPINSTRUMENTSSGIXPROC) getExtensionPtr( "glStopInstrumentsSGIX" );
		if ( glStopInstrumentsSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_instruments || isSEDEnable() )
	
	if ( isGL_SGIX_instruments )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_instruments                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_instruments                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_instruments") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_instruments                                         : not detected." );
	}
	
	// ****** GL_SGIX_interlace ******
	
	isGL_SGIX_interlace = isExtensionSupported("GL_SGIX_interlace");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_interlace )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_interlace                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_interlace                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_interlace") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_interlace                                           : not detected." );
	}
	
	// ****** GL_SGIX_ir_instrument1 ******
	
	isGL_SGIX_ir_instrument1 = isExtensionSupported("GL_SGIX_ir_instrument1");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_ir_instrument1 )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_ir_instrument1                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_ir_instrument1                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_ir_instrument1") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_ir_instrument1                                      : not detected." );
	}
	
	// ****** GL_SGIX_list_priority ******
	
	isGL_SGIX_list_priority = isExtensionSupported("GL_SGIX_list_priority");
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_list_priority ) // || isSEDEnable()
	{

		glGetListParameterfvSGIX = (PFNGLGETLISTPARAMETERFVSGIXPROC) getExtensionPtr( "glGetListParameterfvSGIX" );
		if ( glGetListParameterfvSGIX != 0 )	++localInitializedProcCount;

		glGetListParameterivSGIX = (PFNGLGETLISTPARAMETERIVSGIXPROC) getExtensionPtr( "glGetListParameterivSGIX" );
		if ( glGetListParameterivSGIX != 0 )	++localInitializedProcCount;

		glListParameterfSGIX = (PFNGLLISTPARAMETERFSGIXPROC) getExtensionPtr( "glListParameterfSGIX" );
		if ( glListParameterfSGIX != 0 )	++localInitializedProcCount;

		glListParameterfvSGIX = (PFNGLLISTPARAMETERFVSGIXPROC) getExtensionPtr( "glListParameterfvSGIX" );
		if ( glListParameterfvSGIX != 0 )	++localInitializedProcCount;

		glListParameteriSGIX = (PFNGLLISTPARAMETERISGIXPROC) getExtensionPtr( "glListParameteriSGIX" );
		if ( glListParameteriSGIX != 0 )	++localInitializedProcCount;

		glListParameterivSGIX = (PFNGLLISTPARAMETERIVSGIXPROC) getExtensionPtr( "glListParameterivSGIX" );
		if ( glListParameterivSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_list_priority || isSEDEnable() )
	
	if ( isGL_SGIX_list_priority )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_list_priority                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_list_priority                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_list_priority") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_list_priority                                       : not detected." );
	}
	
	// ****** GL_SGIX_pixel_texture ******
	
	isGL_SGIX_pixel_texture = isExtensionSupported("GL_SGIX_pixel_texture");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_pixel_texture ) // || isSEDEnable()
	{

		glPixelTexGenSGIX = (PFNGLPIXELTEXGENSGIXPROC) getExtensionPtr( "glPixelTexGenSGIX" );
		if ( glPixelTexGenSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_pixel_texture || isSEDEnable() )
	
	if ( isGL_SGIX_pixel_texture )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_pixel_texture                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_pixel_texture                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_pixel_texture") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_pixel_texture                                       : not detected." );
	}
	
	// ****** GL_SGIX_pixel_tiles ******
	
	isGL_SGIX_pixel_tiles = isExtensionSupported("GL_SGIX_pixel_tiles");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_pixel_tiles )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_pixel_tiles                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_pixel_tiles                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_pixel_tiles") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_pixel_tiles                                         : not detected." );
	}
	
	// ****** GL_SGIX_polynomial_ffd ******
	
	isGL_SGIX_polynomial_ffd = isExtensionSupported("GL_SGIX_polynomial_ffd");
	
	localSupportedProcCount		= 4;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_polynomial_ffd ) // || isSEDEnable()
	{

		glDeformationMap3dSGIX = (PFNGLDEFORMATIONMAP3DSGIXPROC) getExtensionPtr( "glDeformationMap3dSGIX" );
		if ( glDeformationMap3dSGIX != 0 )	++localInitializedProcCount;

		glDeformationMap3fSGIX = (PFNGLDEFORMATIONMAP3FSGIXPROC) getExtensionPtr( "glDeformationMap3fSGIX" );
		if ( glDeformationMap3fSGIX != 0 )	++localInitializedProcCount;

		glDeformSGIX = (PFNGLDEFORMSGIXPROC) getExtensionPtr( "glDeformSGIX" );
		if ( glDeformSGIX != 0 )	++localInitializedProcCount;

		glLoadIdentityDeformationMapSGIX = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC) getExtensionPtr( "glLoadIdentityDeformationMapSGIX" );
		if ( glLoadIdentityDeformationMapSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_polynomial_ffd || isSEDEnable() )
	
	if ( isGL_SGIX_polynomial_ffd )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_polynomial_ffd                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_polynomial_ffd                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_polynomial_ffd") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_polynomial_ffd                                      : not detected." );
	}
	
	// ****** GL_SGIX_reference_plane ******
	
	isGL_SGIX_reference_plane = isExtensionSupported("GL_SGIX_reference_plane");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_reference_plane ) // || isSEDEnable()
	{

		glReferencePlaneSGIX = (PFNGLREFERENCEPLANESGIXPROC) getExtensionPtr( "glReferencePlaneSGIX" );
		if ( glReferencePlaneSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_reference_plane || isSEDEnable() )
	
	if ( isGL_SGIX_reference_plane )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_reference_plane                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_reference_plane                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_reference_plane") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_reference_plane                                     : not detected." );
	}
	
	// ****** GL_SGIX_resample ******
	
	isGL_SGIX_resample = isExtensionSupported("GL_SGIX_resample");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_resample )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_resample                                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_resample                                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_resample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_resample                                            : not detected." );
	}
	
	// ****** GL_SGIX_scalebias_hint ******
	
	isGL_SGIX_scalebias_hint = isExtensionSupported("GL_SGIX_scalebias_hint");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_scalebias_hint )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_scalebias_hint                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_scalebias_hint                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_scalebias_hint") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_scalebias_hint                                      : not detected." );
	}
	
	// ****** GL_SGIX_shadow ******
	
	isGL_SGIX_shadow = isExtensionSupported("GL_SGIX_shadow");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_shadow )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_shadow                                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_shadow                                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_shadow") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_shadow                                              : not detected." );
	}
	
	// ****** GL_SGIX_shadow_ambient ******
	
	isGL_SGIX_shadow_ambient = isExtensionSupported("GL_SGIX_shadow_ambient");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_shadow_ambient )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_shadow_ambient                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_shadow_ambient                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_shadow_ambient") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_shadow_ambient                                      : not detected." );
	}
	
	// ****** GL_SGIX_sprite ******
	
	isGL_SGIX_sprite = isExtensionSupported("GL_SGIX_sprite");
	
	localSupportedProcCount		= 4;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_sprite ) // || isSEDEnable()
	{

		glSpriteParameterfSGIX = (PFNGLSPRITEPARAMETERFSGIXPROC) getExtensionPtr( "glSpriteParameterfSGIX" );
		if ( glSpriteParameterfSGIX != 0 )	++localInitializedProcCount;

		glSpriteParameterfvSGIX = (PFNGLSPRITEPARAMETERFVSGIXPROC) getExtensionPtr( "glSpriteParameterfvSGIX" );
		if ( glSpriteParameterfvSGIX != 0 )	++localInitializedProcCount;

		glSpriteParameteriSGIX = (PFNGLSPRITEPARAMETERISGIXPROC) getExtensionPtr( "glSpriteParameteriSGIX" );
		if ( glSpriteParameteriSGIX != 0 )	++localInitializedProcCount;

		glSpriteParameterivSGIX = (PFNGLSPRITEPARAMETERIVSGIXPROC) getExtensionPtr( "glSpriteParameterivSGIX" );
		if ( glSpriteParameterivSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_sprite || isSEDEnable() )
	
	if ( isGL_SGIX_sprite )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_sprite                                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_sprite                                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_sprite") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_sprite                                              : not detected." );
	}
	
	// ****** GL_SGIX_subsample ******
	
	isGL_SGIX_subsample = isExtensionSupported("GL_SGIX_subsample");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_subsample )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_subsample                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_subsample                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_subsample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_subsample                                           : not detected." );
	}
	
	// ****** GL_SGIX_tag_sample_buffer ******
	
	isGL_SGIX_tag_sample_buffer = isExtensionSupported("GL_SGIX_tag_sample_buffer");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_SGIX_tag_sample_buffer ) // || isSEDEnable()
	{

		glTagSampleBufferSGIX = (PFNGLTAGSAMPLEBUFFERSGIXPROC) getExtensionPtr( "glTagSampleBufferSGIX" );
		if ( glTagSampleBufferSGIX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SGIX_tag_sample_buffer || isSEDEnable() )
	
	if ( isGL_SGIX_tag_sample_buffer )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_tag_sample_buffer                                   : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_tag_sample_buffer                                   : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_tag_sample_buffer") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_tag_sample_buffer                                   : not detected." );
	}
	
	// ****** GL_SGIX_texture_add_env ******
	
	isGL_SGIX_texture_add_env = isExtensionSupported("GL_SGIX_texture_add_env");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_texture_add_env )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_texture_add_env                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_texture_add_env                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_texture_add_env") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_texture_add_env                                     : not detected." );
	}
	
	// ****** GL_SGIX_texture_coordinate_clamp ******
	
	isGL_SGIX_texture_coordinate_clamp = isExtensionSupported("GL_SGIX_texture_coordinate_clamp");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_texture_coordinate_clamp )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_texture_coordinate_clamp                            : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_texture_coordinate_clamp                            : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_texture_coordinate_clamp") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_texture_coordinate_clamp                            : not detected." );
	}
	
	// ****** GL_SGIX_texture_lod_bias ******
	
	isGL_SGIX_texture_lod_bias = isExtensionSupported("GL_SGIX_texture_lod_bias");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_texture_lod_bias )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_texture_lod_bias                                    : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_texture_lod_bias                                    : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_texture_lod_bias") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_texture_lod_bias                                    : not detected." );
	}
	
	// ****** GL_SGIX_texture_multi_buffer ******
	
	isGL_SGIX_texture_multi_buffer = isExtensionSupported("GL_SGIX_texture_multi_buffer");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_texture_multi_buffer )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_texture_multi_buffer                                : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_texture_multi_buffer                                : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_texture_multi_buffer") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_texture_multi_buffer                                : not detected." );
	}
	
	// ****** GL_SGIX_texture_scale_bias ******
	
	isGL_SGIX_texture_scale_bias = isExtensionSupported("GL_SGIX_texture_scale_bias");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_texture_scale_bias )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_texture_scale_bias                                  : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_texture_scale_bias                                  : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_texture_scale_bias") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_texture_scale_bias                                  : not detected." );
	}
	
	// ****** GL_SGIX_texture_select ******
	
	isGL_SGIX_texture_select = isExtensionSupported("GL_SGIX_texture_select");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_texture_select )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_texture_select                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_texture_select                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_texture_select") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_texture_select                                      : not detected." );
	}
	
	// ****** GL_SGIX_vertex_preclip ******
	
	isGL_SGIX_vertex_preclip = isExtensionSupported("GL_SGIX_vertex_preclip");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_vertex_preclip )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_vertex_preclip                                      : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_vertex_preclip                                      : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_vertex_preclip") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_vertex_preclip                                      : not detected." );
	}
	
	// ****** GL_SGIX_ycrcb ******
	
	isGL_SGIX_ycrcb = isExtensionSupported("GL_SGIX_ycrcb");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_ycrcb )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_ycrcb                                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_ycrcb                                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_ycrcb") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_ycrcb                                               : not detected." );
	}
	
	// ****** GL_SGIX_ycrcb_subsample ******
	
	isGL_SGIX_ycrcb_subsample = isExtensionSupported("GL_SGIX_ycrcb_subsample");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_ycrcb_subsample )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_ycrcb_subsample                                     : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_ycrcb_subsample                                     : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_ycrcb_subsample") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_ycrcb_subsample                                     : not detected." );
	}
	
	// ****** GL_SGIX_ycrcba ******
	
	isGL_SGIX_ycrcba = isExtensionSupported("GL_SGIX_ycrcba");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SGIX_ycrcba )
	{
		std::stringstream strStream;
		strStream << "GL_SGIX_ycrcba                                              : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SGIX_ycrcba                                              : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SGIX_ycrcba") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SGIX_ycrcba                                              : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_SUN()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_SUN_convolution_border_modes ******
	
	isGL_SUN_convolution_border_modes = isExtensionSupported("GL_SUN_convolution_border_modes");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SUN_convolution_border_modes )
	{
		std::stringstream strStream;
		strStream << "GL_SUN_convolution_border_modes                             : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SUN_convolution_border_modes                             : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SUN_convolution_border_modes") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SUN_convolution_border_modes                             : not detected." );
	}
	
	// ****** GL_SUN_global_alpha ******
	
	isGL_SUN_global_alpha = isExtensionSupported("GL_SUN_global_alpha");
	
	localSupportedProcCount		= 8;
	localInitializedProcCount	= 0;
	
	if ( isGL_SUN_global_alpha ) // || isSEDEnable()
	{

		glGlobalAlphaFactorbSUN = (PFNGLGLOBALALPHAFACTORBSUNPROC) getExtensionPtr( "glGlobalAlphaFactorbSUN" );
		if ( glGlobalAlphaFactorbSUN != 0 )	++localInitializedProcCount;

		glGlobalAlphaFactorsSUN = (PFNGLGLOBALALPHAFACTORSSUNPROC) getExtensionPtr( "glGlobalAlphaFactorsSUN" );
		if ( glGlobalAlphaFactorsSUN != 0 )	++localInitializedProcCount;

		glGlobalAlphaFactoriSUN = (PFNGLGLOBALALPHAFACTORISUNPROC) getExtensionPtr( "glGlobalAlphaFactoriSUN" );
		if ( glGlobalAlphaFactoriSUN != 0 )	++localInitializedProcCount;

		glGlobalAlphaFactorfSUN = (PFNGLGLOBALALPHAFACTORFSUNPROC) getExtensionPtr( "glGlobalAlphaFactorfSUN" );
		if ( glGlobalAlphaFactorfSUN != 0 )	++localInitializedProcCount;

		glGlobalAlphaFactordSUN = (PFNGLGLOBALALPHAFACTORDSUNPROC) getExtensionPtr( "glGlobalAlphaFactordSUN" );
		if ( glGlobalAlphaFactordSUN != 0 )	++localInitializedProcCount;

		glGlobalAlphaFactorubSUN = (PFNGLGLOBALALPHAFACTORUBSUNPROC) getExtensionPtr( "glGlobalAlphaFactorubSUN" );
		if ( glGlobalAlphaFactorubSUN != 0 )	++localInitializedProcCount;

		glGlobalAlphaFactorusSUN = (PFNGLGLOBALALPHAFACTORUSSUNPROC) getExtensionPtr( "glGlobalAlphaFactorusSUN" );
		if ( glGlobalAlphaFactorusSUN != 0 )	++localInitializedProcCount;

		glGlobalAlphaFactoruiSUN = (PFNGLGLOBALALPHAFACTORUISUNPROC) getExtensionPtr( "glGlobalAlphaFactoruiSUN" );
		if ( glGlobalAlphaFactoruiSUN != 0 )	++localInitializedProcCount;
	} // if ( isGL_SUN_global_alpha || isSEDEnable() )
	
	if ( isGL_SUN_global_alpha )
	{
		std::stringstream strStream;
		strStream << "GL_SUN_global_alpha                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SUN_global_alpha                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SUN_global_alpha") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SUN_global_alpha                                         : not detected." );
	}
	
	// ****** GL_SUN_mesh_array ******
	
	isGL_SUN_mesh_array = isExtensionSupported("GL_SUN_mesh_array");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_SUN_mesh_array ) // || isSEDEnable()
	{

		glDrawMeshArraysSUN = (PFNGLDRAWMESHARRAYSSUNPROC) getExtensionPtr( "glDrawMeshArraysSUN" );
		if ( glDrawMeshArraysSUN != 0 )	++localInitializedProcCount;
	} // if ( isGL_SUN_mesh_array || isSEDEnable() )
	
	if ( isGL_SUN_mesh_array )
	{
		std::stringstream strStream;
		strStream << "GL_SUN_mesh_array                                           : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SUN_mesh_array                                           : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SUN_mesh_array") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SUN_mesh_array                                           : not detected." );
	}
	
	// ****** GL_SUN_slice_accum ******
	
	isGL_SUN_slice_accum = isExtensionSupported("GL_SUN_slice_accum");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_SUN_slice_accum )
	{
		std::stringstream strStream;
		strStream << "GL_SUN_slice_accum                                          : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SUN_slice_accum                                          : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SUN_slice_accum") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SUN_slice_accum                                          : not detected." );
	}
	
	// ****** GL_SUN_triangle_list ******
	
	isGL_SUN_triangle_list = isExtensionSupported("GL_SUN_triangle_list");
	
	localSupportedProcCount		= 7;
	localInitializedProcCount	= 0;
	
	if ( isGL_SUN_triangle_list ) // || isSEDEnable()
	{

		glReplacementCodeuiSUN = (PFNGLREPLACEMENTCODEUISUNPROC) getExtensionPtr( "glReplacementCodeuiSUN" );
		if ( glReplacementCodeuiSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeusSUN = (PFNGLREPLACEMENTCODEUSSUNPROC) getExtensionPtr( "glReplacementCodeusSUN" );
		if ( glReplacementCodeusSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeubSUN = (PFNGLREPLACEMENTCODEUBSUNPROC) getExtensionPtr( "glReplacementCodeubSUN" );
		if ( glReplacementCodeubSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuivSUN = (PFNGLREPLACEMENTCODEUIVSUNPROC) getExtensionPtr( "glReplacementCodeuivSUN" );
		if ( glReplacementCodeuivSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeusvSUN = (PFNGLREPLACEMENTCODEUSVSUNPROC) getExtensionPtr( "glReplacementCodeusvSUN" );
		if ( glReplacementCodeusvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeubvSUN = (PFNGLREPLACEMENTCODEUBVSUNPROC) getExtensionPtr( "glReplacementCodeubvSUN" );
		if ( glReplacementCodeubvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodePointerSUN = (PFNGLREPLACEMENTCODEPOINTERSUNPROC) getExtensionPtr( "glReplacementCodePointerSUN" );
		if ( glReplacementCodePointerSUN != 0 )	++localInitializedProcCount;
	} // if ( isGL_SUN_triangle_list || isSEDEnable() )
	
	if ( isGL_SUN_triangle_list )
	{
		std::stringstream strStream;
		strStream << "GL_SUN_triangle_list                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SUN_triangle_list                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SUN_triangle_list") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SUN_triangle_list                                        : not detected." );
	}
	
	// ****** GL_SUN_vertex ******
	
	isGL_SUN_vertex = isExtensionSupported("GL_SUN_vertex");
	
	localSupportedProcCount		= 40;
	localInitializedProcCount	= 0;
	
	if ( isGL_SUN_vertex ) // || isSEDEnable()
	{

		glColor4ubVertex2fSUN = (PFNGLCOLOR4UBVERTEX2FSUNPROC) getExtensionPtr( "glColor4ubVertex2fSUN" );
		if ( glColor4ubVertex2fSUN != 0 )	++localInitializedProcCount;

		glColor4ubVertex2fvSUN = (PFNGLCOLOR4UBVERTEX2FVSUNPROC) getExtensionPtr( "glColor4ubVertex2fvSUN" );
		if ( glColor4ubVertex2fvSUN != 0 )	++localInitializedProcCount;

		glColor4ubVertex3fSUN = (PFNGLCOLOR4UBVERTEX3FSUNPROC) getExtensionPtr( "glColor4ubVertex3fSUN" );
		if ( glColor4ubVertex3fSUN != 0 )	++localInitializedProcCount;

		glColor4ubVertex3fvSUN = (PFNGLCOLOR4UBVERTEX3FVSUNPROC) getExtensionPtr( "glColor4ubVertex3fvSUN" );
		if ( glColor4ubVertex3fvSUN != 0 )	++localInitializedProcCount;

		glColor3fVertex3fSUN = (PFNGLCOLOR3FVERTEX3FSUNPROC) getExtensionPtr( "glColor3fVertex3fSUN" );
		if ( glColor3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glColor3fVertex3fvSUN = (PFNGLCOLOR3FVERTEX3FVSUNPROC) getExtensionPtr( "glColor3fVertex3fvSUN" );
		if ( glColor3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glNormal3fVertex3fSUN = (PFNGLNORMAL3FVERTEX3FSUNPROC) getExtensionPtr( "glNormal3fVertex3fSUN" );
		if ( glNormal3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glNormal3fVertex3fvSUN = (PFNGLNORMAL3FVERTEX3FVSUNPROC) getExtensionPtr( "glNormal3fVertex3fvSUN" );
		if ( glNormal3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glColor4fNormal3fVertex3fSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC) getExtensionPtr( "glColor4fNormal3fVertex3fSUN" );
		if ( glColor4fNormal3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glColor4fNormal3fVertex3fvSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC) getExtensionPtr( "glColor4fNormal3fVertex3fvSUN" );
		if ( glColor4fNormal3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fVertex3fSUN = (PFNGLTEXCOORD2FVERTEX3FSUNPROC) getExtensionPtr( "glTexCoord2fVertex3fSUN" );
		if ( glTexCoord2fVertex3fSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fVertex3fvSUN = (PFNGLTEXCOORD2FVERTEX3FVSUNPROC) getExtensionPtr( "glTexCoord2fVertex3fvSUN" );
		if ( glTexCoord2fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glTexCoord4fVertex4fSUN = (PFNGLTEXCOORD4FVERTEX4FSUNPROC) getExtensionPtr( "glTexCoord4fVertex4fSUN" );
		if ( glTexCoord4fVertex4fSUN != 0 )	++localInitializedProcCount;

		glTexCoord4fVertex4fvSUN = (PFNGLTEXCOORD4FVERTEX4FVSUNPROC) getExtensionPtr( "glTexCoord4fVertex4fvSUN" );
		if ( glTexCoord4fVertex4fvSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fColor4ubVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC) getExtensionPtr( "glTexCoord2fColor4ubVertex3fSUN" );
		if ( glTexCoord2fColor4ubVertex3fSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fColor4ubVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC) getExtensionPtr( "glTexCoord2fColor4ubVertex3fvSUN" );
		if ( glTexCoord2fColor4ubVertex3fvSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fColor3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC) getExtensionPtr( "glTexCoord2fColor3fVertex3fSUN" );
		if ( glTexCoord2fColor3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fColor3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC) getExtensionPtr( "glTexCoord2fColor3fVertex3fvSUN" );
		if ( glTexCoord2fColor3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC) getExtensionPtr( "glTexCoord2fNormal3fVertex3fSUN" );
		if ( glTexCoord2fNormal3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) getExtensionPtr( "glTexCoord2fNormal3fVertex3fvSUN" );
		if ( glTexCoord2fNormal3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) getExtensionPtr( "glTexCoord2fColor4fNormal3fVertex3fSUN" );
		if ( glTexCoord2fColor4fNormal3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) getExtensionPtr( "glTexCoord2fColor4fNormal3fVertex3fvSUN" );
		if ( glTexCoord2fColor4fNormal3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glTexCoord4fColor4fNormal3fVertex4fSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC) getExtensionPtr( "glTexCoord4fColor4fNormal3fVertex4fSUN" );
		if ( glTexCoord4fColor4fNormal3fVertex4fSUN != 0 )	++localInitializedProcCount;

		glTexCoord4fColor4fNormal3fVertex4fvSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC) getExtensionPtr( "glTexCoord4fColor4fNormal3fVertex4fvSUN" );
		if ( glTexCoord4fColor4fNormal3fVertex4fvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiVertex3fSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC) getExtensionPtr( "glReplacementCodeuiVertex3fSUN" );
		if ( glReplacementCodeuiVertex3fSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiVertex3fvSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC) getExtensionPtr( "glReplacementCodeuiVertex3fvSUN" );
		if ( glReplacementCodeuiVertex3fvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiColor4ubVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC) getExtensionPtr( "glReplacementCodeuiColor4ubVertex3fSUN" );
		if ( glReplacementCodeuiColor4ubVertex3fSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiColor4ubVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC) getExtensionPtr( "glReplacementCodeuiColor4ubVertex3fvSUN" );
		if ( glReplacementCodeuiColor4ubVertex3fvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiColor3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC) getExtensionPtr( "glReplacementCodeuiColor3fVertex3fSUN" );
		if ( glReplacementCodeuiColor3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiColor3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC) getExtensionPtr( "glReplacementCodeuiColor3fVertex3fvSUN" );
		if ( glReplacementCodeuiColor3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC) getExtensionPtr( "glReplacementCodeuiNormal3fVertex3fSUN" );
		if ( glReplacementCodeuiNormal3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC) getExtensionPtr( "glReplacementCodeuiNormal3fVertex3fvSUN" );
		if ( glReplacementCodeuiNormal3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC) getExtensionPtr( "glReplacementCodeuiColor4fNormal3fVertex3fSUN" );
		if ( glReplacementCodeuiColor4fNormal3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC) getExtensionPtr( "glReplacementCodeuiColor4fNormal3fVertex3fvSUN" );
		if ( glReplacementCodeuiColor4fNormal3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiTexCoord2fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC) getExtensionPtr( "glReplacementCodeuiTexCoord2fVertex3fSUN" );
		if ( glReplacementCodeuiTexCoord2fVertex3fSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiTexCoord2fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC) getExtensionPtr( "glReplacementCodeuiTexCoord2fVertex3fvSUN" );
		if ( glReplacementCodeuiTexCoord2fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC) getExtensionPtr( "glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN" );
		if ( glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) getExtensionPtr( "glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN" );
		if ( glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) getExtensionPtr( "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN" );
		if ( glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN != 0 )	++localInitializedProcCount;

		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) getExtensionPtr( "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN" );
		if ( glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN != 0 )	++localInitializedProcCount;
	} // if ( isGL_SUN_vertex || isSEDEnable() )
	
	if ( isGL_SUN_vertex )
	{
		std::stringstream strStream;
		strStream << "GL_SUN_vertex                                               : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SUN_vertex                                               : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SUN_vertex") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SUN_vertex                                               : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_SUNX()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_SUNX_constant_data ******
	
	isGL_SUNX_constant_data = isExtensionSupported("GL_SUNX_constant_data");
	
	localSupportedProcCount		= 1;
	localInitializedProcCount	= 0;
	
	if ( isGL_SUNX_constant_data ) // || isSEDEnable()
	{

		glFinishTextureSUNX = (PFNGLFINISHTEXTURESUNXPROC) getExtensionPtr( "glFinishTextureSUNX" );
		if ( glFinishTextureSUNX != 0 )	++localInitializedProcCount;
	} // if ( isGL_SUNX_constant_data || isSEDEnable() )
	
	if ( isGL_SUNX_constant_data )
	{
		std::stringstream strStream;
		strStream << "GL_SUNX_constant_data                                       : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_SUNX_constant_data                                       : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_SUNX_constant_data") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_SUNX_constant_data                                       : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_VERSION()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;


	// ****** GL_VERSION_1_2 ******
	
	isGL_VERSION_1_2 = false;
	
	localSupportedProcCount		= 38;
	localInitializedProcCount	= 0;
					
	glBlendColor = (PFNGLBLENDCOLORPROC) getExtensionPtr( "glBlendColor" );
	if ( glBlendColor != 0 )	localInitializedProcCount++;
					
	glBlendEquation = (PFNGLBLENDEQUATIONPROC) getExtensionPtr( "glBlendEquation" );
	if ( glBlendEquation != 0 )	localInitializedProcCount++;
					
	glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) getExtensionPtr( "glDrawRangeElements" );
	if ( glDrawRangeElements != 0 )	localInitializedProcCount++;
					
	glColorTable = (PFNGLCOLORTABLEPROC) getExtensionPtr( "glColorTable" );
	if ( glColorTable != 0 )	localInitializedProcCount++;
					
	glColorTableParameterfv = (PFNGLCOLORTABLEPARAMETERFVPROC) getExtensionPtr( "glColorTableParameterfv" );
	if ( glColorTableParameterfv != 0 )	localInitializedProcCount++;
					
	glColorTableParameteriv = (PFNGLCOLORTABLEPARAMETERIVPROC) getExtensionPtr( "glColorTableParameteriv" );
	if ( glColorTableParameteriv != 0 )	localInitializedProcCount++;
					
	glCopyColorTable = (PFNGLCOPYCOLORTABLEPROC) getExtensionPtr( "glCopyColorTable" );
	if ( glCopyColorTable != 0 )	localInitializedProcCount++;
					
	glGetColorTable = (PFNGLGETCOLORTABLEPROC) getExtensionPtr( "glGetColorTable" );
	if ( glGetColorTable != 0 )	localInitializedProcCount++;
					
	glGetColorTableParameterfv = (PFNGLGETCOLORTABLEPARAMETERFVPROC) getExtensionPtr( "glGetColorTableParameterfv" );
	if ( glGetColorTableParameterfv != 0 )	localInitializedProcCount++;
					
	glGetColorTableParameteriv = (PFNGLGETCOLORTABLEPARAMETERIVPROC) getExtensionPtr( "glGetColorTableParameteriv" );
	if ( glGetColorTableParameteriv != 0 )	localInitializedProcCount++;
					
	glColorSubTable = (PFNGLCOLORSUBTABLEPROC) getExtensionPtr( "glColorSubTable" );
	if ( glColorSubTable != 0 )	localInitializedProcCount++;
					
	glCopyColorSubTable = (PFNGLCOPYCOLORSUBTABLEPROC) getExtensionPtr( "glCopyColorSubTable" );
	if ( glCopyColorSubTable != 0 )	localInitializedProcCount++;
					
	glConvolutionFilter1D = (PFNGLCONVOLUTIONFILTER1DPROC) getExtensionPtr( "glConvolutionFilter1D" );
	if ( glConvolutionFilter1D != 0 )	localInitializedProcCount++;
					
	glConvolutionFilter2D = (PFNGLCONVOLUTIONFILTER2DPROC) getExtensionPtr( "glConvolutionFilter2D" );
	if ( glConvolutionFilter2D != 0 )	localInitializedProcCount++;
					
	glConvolutionParameterf = (PFNGLCONVOLUTIONPARAMETERFPROC) getExtensionPtr( "glConvolutionParameterf" );
	if ( glConvolutionParameterf != 0 )	localInitializedProcCount++;
					
	glConvolutionParameterfv = (PFNGLCONVOLUTIONPARAMETERFVPROC) getExtensionPtr( "glConvolutionParameterfv" );
	if ( glConvolutionParameterfv != 0 )	localInitializedProcCount++;
					
	glConvolutionParameteri = (PFNGLCONVOLUTIONPARAMETERIPROC) getExtensionPtr( "glConvolutionParameteri" );
	if ( glConvolutionParameteri != 0 )	localInitializedProcCount++;
					
	glConvolutionParameteriv = (PFNGLCONVOLUTIONPARAMETERIVPROC) getExtensionPtr( "glConvolutionParameteriv" );
	if ( glConvolutionParameteriv != 0 )	localInitializedProcCount++;
					
	glCopyConvolutionFilter1D = (PFNGLCOPYCONVOLUTIONFILTER1DPROC) getExtensionPtr( "glCopyConvolutionFilter1D" );
	if ( glCopyConvolutionFilter1D != 0 )	localInitializedProcCount++;
					
	glCopyConvolutionFilter2D = (PFNGLCOPYCONVOLUTIONFILTER2DPROC) getExtensionPtr( "glCopyConvolutionFilter2D" );
	if ( glCopyConvolutionFilter2D != 0 )	localInitializedProcCount++;
					
	glGetConvolutionFilter = (PFNGLGETCONVOLUTIONFILTERPROC) getExtensionPtr( "glGetConvolutionFilter" );
	if ( glGetConvolutionFilter != 0 )	localInitializedProcCount++;
					
	glGetConvolutionParameterfv = (PFNGLGETCONVOLUTIONPARAMETERFVPROC) getExtensionPtr( "glGetConvolutionParameterfv" );
	if ( glGetConvolutionParameterfv != 0 )	localInitializedProcCount++;
					
	glGetConvolutionParameteriv = (PFNGLGETCONVOLUTIONPARAMETERIVPROC) getExtensionPtr( "glGetConvolutionParameteriv" );
	if ( glGetConvolutionParameteriv != 0 )	localInitializedProcCount++;
					
	glGetSeparableFilter = (PFNGLGETSEPARABLEFILTERPROC) getExtensionPtr( "glGetSeparableFilter" );
	if ( glGetSeparableFilter != 0 )	localInitializedProcCount++;
					
	glSeparableFilter2D = (PFNGLSEPARABLEFILTER2DPROC) getExtensionPtr( "glSeparableFilter2D" );
	if ( glSeparableFilter2D != 0 )	localInitializedProcCount++;
					
	glGetHistogram = (PFNGLGETHISTOGRAMPROC) getExtensionPtr( "glGetHistogram" );
	if ( glGetHistogram != 0 )	localInitializedProcCount++;
					
	glGetHistogramParameterfv = (PFNGLGETHISTOGRAMPARAMETERFVPROC) getExtensionPtr( "glGetHistogramParameterfv" );
	if ( glGetHistogramParameterfv != 0 )	localInitializedProcCount++;
					
	glGetHistogramParameteriv = (PFNGLGETHISTOGRAMPARAMETERIVPROC) getExtensionPtr( "glGetHistogramParameteriv" );
	if ( glGetHistogramParameteriv != 0 )	localInitializedProcCount++;
					
	glGetMinmax = (PFNGLGETMINMAXPROC) getExtensionPtr( "glGetMinmax" );
	if ( glGetMinmax != 0 )	localInitializedProcCount++;
					
	glGetMinmaxParameterfv = (PFNGLGETMINMAXPARAMETERFVPROC) getExtensionPtr( "glGetMinmaxParameterfv" );
	if ( glGetMinmaxParameterfv != 0 )	localInitializedProcCount++;
					
	glGetMinmaxParameteriv = (PFNGLGETMINMAXPARAMETERIVPROC) getExtensionPtr( "glGetMinmaxParameteriv" );
	if ( glGetMinmaxParameteriv != 0 )	localInitializedProcCount++;
					
	glHistogram = (PFNGLHISTOGRAMPROC) getExtensionPtr( "glHistogram" );
	if ( glHistogram != 0 )	localInitializedProcCount++;
					
	glMinmax = (PFNGLMINMAXPROC) getExtensionPtr( "glMinmax" );
	if ( glMinmax != 0 )	localInitializedProcCount++;
					
	glResetHistogram = (PFNGLRESETHISTOGRAMPROC) getExtensionPtr( "glResetHistogram" );
	if ( glResetHistogram != 0 )	localInitializedProcCount++;
					
	glResetMinmax = (PFNGLRESETMINMAXPROC) getExtensionPtr( "glResetMinmax" );
	if ( glResetMinmax != 0 )	localInitializedProcCount++;
					
	glTexImage3D = (PFNGLTEXIMAGE3DPROC) getExtensionPtr( "glTexImage3D" );
	if ( glTexImage3D != 0 )	localInitializedProcCount++;
					
	glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) getExtensionPtr( "glTexSubImage3D" );
	if ( glTexSubImage3D != 0 )	localInitializedProcCount++;
					
	glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) getExtensionPtr( "glCopyTexSubImage3D" );
	if ( glCopyTexSubImage3D != 0 )	localInitializedProcCount++;

	isGL_VERSION_1_2 = (localInitializedProcCount == localSupportedProcCount);

	if ( isGL_VERSION_1_2 )
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_1_2                                              : virtual extension detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
		
		++m_initializedExtensionCount;
		m_initializedProcCount += localInitializedProcCount;
	}
	else
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_1_2                                              : virtual extension not detected, only " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
	}

	// ****** GL_VERSION_1_3 ******
	
	isGL_VERSION_1_3 = false;
	
	localSupportedProcCount		= 46;
	localInitializedProcCount	= 0;
					
	glActiveTexture = (PFNGLACTIVETEXTUREPROC) getExtensionPtr( "glActiveTexture" );
	if ( glActiveTexture != 0 )	localInitializedProcCount++;
					
	glClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC) getExtensionPtr( "glClientActiveTexture" );
	if ( glClientActiveTexture != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord1d = (PFNGLMULTITEXCOORD1DPROC) getExtensionPtr( "glMultiTexCoord1d" );
	if ( glMultiTexCoord1d != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord1dv = (PFNGLMULTITEXCOORD1DVPROC) getExtensionPtr( "glMultiTexCoord1dv" );
	if ( glMultiTexCoord1dv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord1f = (PFNGLMULTITEXCOORD1FPROC) getExtensionPtr( "glMultiTexCoord1f" );
	if ( glMultiTexCoord1f != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord1fv = (PFNGLMULTITEXCOORD1FVPROC) getExtensionPtr( "glMultiTexCoord1fv" );
	if ( glMultiTexCoord1fv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord1i = (PFNGLMULTITEXCOORD1IPROC) getExtensionPtr( "glMultiTexCoord1i" );
	if ( glMultiTexCoord1i != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord1iv = (PFNGLMULTITEXCOORD1IVPROC) getExtensionPtr( "glMultiTexCoord1iv" );
	if ( glMultiTexCoord1iv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord1s = (PFNGLMULTITEXCOORD1SPROC) getExtensionPtr( "glMultiTexCoord1s" );
	if ( glMultiTexCoord1s != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord1sv = (PFNGLMULTITEXCOORD1SVPROC) getExtensionPtr( "glMultiTexCoord1sv" );
	if ( glMultiTexCoord1sv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord2d = (PFNGLMULTITEXCOORD2DPROC) getExtensionPtr( "glMultiTexCoord2d" );
	if ( glMultiTexCoord2d != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord2dv = (PFNGLMULTITEXCOORD2DVPROC) getExtensionPtr( "glMultiTexCoord2dv" );
	if ( glMultiTexCoord2dv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord2f = (PFNGLMULTITEXCOORD2FPROC) getExtensionPtr( "glMultiTexCoord2f" );
	if ( glMultiTexCoord2f != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord2fv = (PFNGLMULTITEXCOORD2FVPROC) getExtensionPtr( "glMultiTexCoord2fv" );
	if ( glMultiTexCoord2fv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord2i = (PFNGLMULTITEXCOORD2IPROC) getExtensionPtr( "glMultiTexCoord2i" );
	if ( glMultiTexCoord2i != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord2iv = (PFNGLMULTITEXCOORD2IVPROC) getExtensionPtr( "glMultiTexCoord2iv" );
	if ( glMultiTexCoord2iv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord2s = (PFNGLMULTITEXCOORD2SPROC) getExtensionPtr( "glMultiTexCoord2s" );
	if ( glMultiTexCoord2s != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord2sv = (PFNGLMULTITEXCOORD2SVPROC) getExtensionPtr( "glMultiTexCoord2sv" );
	if ( glMultiTexCoord2sv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord3d = (PFNGLMULTITEXCOORD3DPROC) getExtensionPtr( "glMultiTexCoord3d" );
	if ( glMultiTexCoord3d != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord3dv = (PFNGLMULTITEXCOORD3DVPROC) getExtensionPtr( "glMultiTexCoord3dv" );
	if ( glMultiTexCoord3dv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord3f = (PFNGLMULTITEXCOORD3FPROC) getExtensionPtr( "glMultiTexCoord3f" );
	if ( glMultiTexCoord3f != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord3fv = (PFNGLMULTITEXCOORD3FVPROC) getExtensionPtr( "glMultiTexCoord3fv" );
	if ( glMultiTexCoord3fv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord3i = (PFNGLMULTITEXCOORD3IPROC) getExtensionPtr( "glMultiTexCoord3i" );
	if ( glMultiTexCoord3i != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord3iv = (PFNGLMULTITEXCOORD3IVPROC) getExtensionPtr( "glMultiTexCoord3iv" );
	if ( glMultiTexCoord3iv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord3s = (PFNGLMULTITEXCOORD3SPROC) getExtensionPtr( "glMultiTexCoord3s" );
	if ( glMultiTexCoord3s != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord3sv = (PFNGLMULTITEXCOORD3SVPROC) getExtensionPtr( "glMultiTexCoord3sv" );
	if ( glMultiTexCoord3sv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord4d = (PFNGLMULTITEXCOORD4DPROC) getExtensionPtr( "glMultiTexCoord4d" );
	if ( glMultiTexCoord4d != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord4dv = (PFNGLMULTITEXCOORD4DVPROC) getExtensionPtr( "glMultiTexCoord4dv" );
	if ( glMultiTexCoord4dv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord4f = (PFNGLMULTITEXCOORD4FPROC) getExtensionPtr( "glMultiTexCoord4f" );
	if ( glMultiTexCoord4f != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord4fv = (PFNGLMULTITEXCOORD4FVPROC) getExtensionPtr( "glMultiTexCoord4fv" );
	if ( glMultiTexCoord4fv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord4i = (PFNGLMULTITEXCOORD4IPROC) getExtensionPtr( "glMultiTexCoord4i" );
	if ( glMultiTexCoord4i != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord4iv = (PFNGLMULTITEXCOORD4IVPROC) getExtensionPtr( "glMultiTexCoord4iv" );
	if ( glMultiTexCoord4iv != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord4s = (PFNGLMULTITEXCOORD4SPROC) getExtensionPtr( "glMultiTexCoord4s" );
	if ( glMultiTexCoord4s != 0 )	localInitializedProcCount++;
					
	glMultiTexCoord4sv = (PFNGLMULTITEXCOORD4SVPROC) getExtensionPtr( "glMultiTexCoord4sv" );
	if ( glMultiTexCoord4sv != 0 )	localInitializedProcCount++;
					
	glLoadTransposeMatrixf = (PFNGLLOADTRANSPOSEMATRIXFPROC) getExtensionPtr( "glLoadTransposeMatrixf" );
	if ( glLoadTransposeMatrixf != 0 )	localInitializedProcCount++;
					
	glLoadTransposeMatrixd = (PFNGLLOADTRANSPOSEMATRIXDPROC) getExtensionPtr( "glLoadTransposeMatrixd" );
	if ( glLoadTransposeMatrixd != 0 )	localInitializedProcCount++;
					
	glMultTransposeMatrixf = (PFNGLMULTTRANSPOSEMATRIXFPROC) getExtensionPtr( "glMultTransposeMatrixf" );
	if ( glMultTransposeMatrixf != 0 )	localInitializedProcCount++;
					
	glMultTransposeMatrixd = (PFNGLMULTTRANSPOSEMATRIXDPROC) getExtensionPtr( "glMultTransposeMatrixd" );
	if ( glMultTransposeMatrixd != 0 )	localInitializedProcCount++;
					
	glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC) getExtensionPtr( "glSampleCoverage" );
	if ( glSampleCoverage != 0 )	localInitializedProcCount++;
					
	glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) getExtensionPtr( "glCompressedTexImage3D" );
	if ( glCompressedTexImage3D != 0 )	localInitializedProcCount++;
					
	glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) getExtensionPtr( "glCompressedTexImage2D" );
	if ( glCompressedTexImage2D != 0 )	localInitializedProcCount++;
					
	glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) getExtensionPtr( "glCompressedTexImage1D" );
	if ( glCompressedTexImage1D != 0 )	localInitializedProcCount++;
					
	glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) getExtensionPtr( "glCompressedTexSubImage3D" );
	if ( glCompressedTexSubImage3D != 0 )	localInitializedProcCount++;
					
	glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) getExtensionPtr( "glCompressedTexSubImage2D" );
	if ( glCompressedTexSubImage2D != 0 )	localInitializedProcCount++;
					
	glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) getExtensionPtr( "glCompressedTexSubImage1D" );
	if ( glCompressedTexSubImage1D != 0 )	localInitializedProcCount++;
					
	glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) getExtensionPtr( "glGetCompressedTexImage" );
	if ( glGetCompressedTexImage != 0 )	localInitializedProcCount++;

	isGL_VERSION_1_3 = (localInitializedProcCount == localSupportedProcCount);

	if ( isGL_VERSION_1_3 )
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_1_3                                              : virtual extension detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
		
		++m_initializedExtensionCount;
		m_initializedProcCount += localInitializedProcCount;
	}
	else
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_1_3                                              : virtual extension not detected, only " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
	}

	// ****** GL_VERSION_1_4 ******
	
	isGL_VERSION_1_4 = false;
	
	localSupportedProcCount		= 45;
	localInitializedProcCount	= 0;
					
	glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) getExtensionPtr( "glBlendFuncSeparate" );
	if ( glBlendFuncSeparate != 0 )	localInitializedProcCount++;
					
	glFogCoordf = (PFNGLFOGCOORDFPROC) getExtensionPtr( "glFogCoordf" );
	if ( glFogCoordf != 0 )	localInitializedProcCount++;
					
	glFogCoordfv = (PFNGLFOGCOORDFVPROC) getExtensionPtr( "glFogCoordfv" );
	if ( glFogCoordfv != 0 )	localInitializedProcCount++;
					
	glFogCoordd = (PFNGLFOGCOORDDPROC) getExtensionPtr( "glFogCoordd" );
	if ( glFogCoordd != 0 )	localInitializedProcCount++;
					
	glFogCoorddv = (PFNGLFOGCOORDDVPROC) getExtensionPtr( "glFogCoorddv" );
	if ( glFogCoorddv != 0 )	localInitializedProcCount++;
					
	glFogCoordPointer = (PFNGLFOGCOORDPOINTERPROC) getExtensionPtr( "glFogCoordPointer" );
	if ( glFogCoordPointer != 0 )	localInitializedProcCount++;
					
	glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC) getExtensionPtr( "glMultiDrawArrays" );
	if ( glMultiDrawArrays != 0 )	localInitializedProcCount++;
					
	glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC) getExtensionPtr( "glMultiDrawElements" );
	if ( glMultiDrawElements != 0 )	localInitializedProcCount++;
					
	glPointParameterf = (PFNGLPOINTPARAMETERFPROC) getExtensionPtr( "glPointParameterf" );
	if ( glPointParameterf != 0 )	localInitializedProcCount++;
					
	glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC) getExtensionPtr( "glPointParameterfv" );
	if ( glPointParameterfv != 0 )	localInitializedProcCount++;
					
	glPointParameteri = (PFNGLPOINTPARAMETERIPROC) getExtensionPtr( "glPointParameteri" );
	if ( glPointParameteri != 0 )	localInitializedProcCount++;
					
	glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC) getExtensionPtr( "glPointParameteriv" );
	if ( glPointParameteriv != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3b = (PFNGLSECONDARYCOLOR3BPROC) getExtensionPtr( "glSecondaryColor3b" );
	if ( glSecondaryColor3b != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3bv = (PFNGLSECONDARYCOLOR3BVPROC) getExtensionPtr( "glSecondaryColor3bv" );
	if ( glSecondaryColor3bv != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3d = (PFNGLSECONDARYCOLOR3DPROC) getExtensionPtr( "glSecondaryColor3d" );
	if ( glSecondaryColor3d != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3dv = (PFNGLSECONDARYCOLOR3DVPROC) getExtensionPtr( "glSecondaryColor3dv" );
	if ( glSecondaryColor3dv != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3f = (PFNGLSECONDARYCOLOR3FPROC) getExtensionPtr( "glSecondaryColor3f" );
	if ( glSecondaryColor3f != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3fv = (PFNGLSECONDARYCOLOR3FVPROC) getExtensionPtr( "glSecondaryColor3fv" );
	if ( glSecondaryColor3fv != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3i = (PFNGLSECONDARYCOLOR3IPROC) getExtensionPtr( "glSecondaryColor3i" );
	if ( glSecondaryColor3i != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3iv = (PFNGLSECONDARYCOLOR3IVPROC) getExtensionPtr( "glSecondaryColor3iv" );
	if ( glSecondaryColor3iv != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3s = (PFNGLSECONDARYCOLOR3SPROC) getExtensionPtr( "glSecondaryColor3s" );
	if ( glSecondaryColor3s != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3sv = (PFNGLSECONDARYCOLOR3SVPROC) getExtensionPtr( "glSecondaryColor3sv" );
	if ( glSecondaryColor3sv != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3ub = (PFNGLSECONDARYCOLOR3UBPROC) getExtensionPtr( "glSecondaryColor3ub" );
	if ( glSecondaryColor3ub != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3ubv = (PFNGLSECONDARYCOLOR3UBVPROC) getExtensionPtr( "glSecondaryColor3ubv" );
	if ( glSecondaryColor3ubv != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3ui = (PFNGLSECONDARYCOLOR3UIPROC) getExtensionPtr( "glSecondaryColor3ui" );
	if ( glSecondaryColor3ui != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3uiv = (PFNGLSECONDARYCOLOR3UIVPROC) getExtensionPtr( "glSecondaryColor3uiv" );
	if ( glSecondaryColor3uiv != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3us = (PFNGLSECONDARYCOLOR3USPROC) getExtensionPtr( "glSecondaryColor3us" );
	if ( glSecondaryColor3us != 0 )	localInitializedProcCount++;
					
	glSecondaryColor3usv = (PFNGLSECONDARYCOLOR3USVPROC) getExtensionPtr( "glSecondaryColor3usv" );
	if ( glSecondaryColor3usv != 0 )	localInitializedProcCount++;
					
	glSecondaryColorPointer = (PFNGLSECONDARYCOLORPOINTERPROC) getExtensionPtr( "glSecondaryColorPointer" );
	if ( glSecondaryColorPointer != 0 )	localInitializedProcCount++;
					
	glWindowPos2d = (PFNGLWINDOWPOS2DPROC) getExtensionPtr( "glWindowPos2d" );
	if ( glWindowPos2d != 0 )	localInitializedProcCount++;
					
	glWindowPos2dv = (PFNGLWINDOWPOS2DVPROC) getExtensionPtr( "glWindowPos2dv" );
	if ( glWindowPos2dv != 0 )	localInitializedProcCount++;
					
	glWindowPos2f = (PFNGLWINDOWPOS2FPROC) getExtensionPtr( "glWindowPos2f" );
	if ( glWindowPos2f != 0 )	localInitializedProcCount++;
					
	glWindowPos2fv = (PFNGLWINDOWPOS2FVPROC) getExtensionPtr( "glWindowPos2fv" );
	if ( glWindowPos2fv != 0 )	localInitializedProcCount++;
					
	glWindowPos2i = (PFNGLWINDOWPOS2IPROC) getExtensionPtr( "glWindowPos2i" );
	if ( glWindowPos2i != 0 )	localInitializedProcCount++;
					
	glWindowPos2iv = (PFNGLWINDOWPOS2IVPROC) getExtensionPtr( "glWindowPos2iv" );
	if ( glWindowPos2iv != 0 )	localInitializedProcCount++;
					
	glWindowPos2s = (PFNGLWINDOWPOS2SPROC) getExtensionPtr( "glWindowPos2s" );
	if ( glWindowPos2s != 0 )	localInitializedProcCount++;
					
	glWindowPos2sv = (PFNGLWINDOWPOS2SVPROC) getExtensionPtr( "glWindowPos2sv" );
	if ( glWindowPos2sv != 0 )	localInitializedProcCount++;
					
	glWindowPos3d = (PFNGLWINDOWPOS3DPROC) getExtensionPtr( "glWindowPos3d" );
	if ( glWindowPos3d != 0 )	localInitializedProcCount++;
					
	glWindowPos3dv = (PFNGLWINDOWPOS3DVPROC) getExtensionPtr( "glWindowPos3dv" );
	if ( glWindowPos3dv != 0 )	localInitializedProcCount++;
					
	glWindowPos3f = (PFNGLWINDOWPOS3FPROC) getExtensionPtr( "glWindowPos3f" );
	if ( glWindowPos3f != 0 )	localInitializedProcCount++;
					
	glWindowPos3fv = (PFNGLWINDOWPOS3FVPROC) getExtensionPtr( "glWindowPos3fv" );
	if ( glWindowPos3fv != 0 )	localInitializedProcCount++;
					
	glWindowPos3i = (PFNGLWINDOWPOS3IPROC) getExtensionPtr( "glWindowPos3i" );
	if ( glWindowPos3i != 0 )	localInitializedProcCount++;
					
	glWindowPos3iv = (PFNGLWINDOWPOS3IVPROC) getExtensionPtr( "glWindowPos3iv" );
	if ( glWindowPos3iv != 0 )	localInitializedProcCount++;
					
	glWindowPos3s = (PFNGLWINDOWPOS3SPROC) getExtensionPtr( "glWindowPos3s" );
	if ( glWindowPos3s != 0 )	localInitializedProcCount++;
					
	glWindowPos3sv = (PFNGLWINDOWPOS3SVPROC) getExtensionPtr( "glWindowPos3sv" );
	if ( glWindowPos3sv != 0 )	localInitializedProcCount++;

	isGL_VERSION_1_4 = (localInitializedProcCount == localSupportedProcCount);

	if ( isGL_VERSION_1_4 )
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_1_4                                              : virtual extension detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
		
		++m_initializedExtensionCount;
		m_initializedProcCount += localInitializedProcCount;
	}
	else
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_1_4                                              : virtual extension not detected, only " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
	}

	// ****** GL_VERSION_1_5 ******
	
	isGL_VERSION_1_5 = false;
	
	localSupportedProcCount		= 19;
	localInitializedProcCount	= 0;
					
	glGenQueries = (PFNGLGENQUERIESPROC) getExtensionPtr( "glGenQueries" );
	if ( glGenQueries != 0 )	localInitializedProcCount++;
					
	glDeleteQueries = (PFNGLDELETEQUERIESPROC) getExtensionPtr( "glDeleteQueries" );
	if ( glDeleteQueries != 0 )	localInitializedProcCount++;
					
	glIsQuery = (PFNGLISQUERYPROC) getExtensionPtr( "glIsQuery" );
	if ( glIsQuery != 0 )	localInitializedProcCount++;
					
	glBeginQuery = (PFNGLBEGINQUERYPROC) getExtensionPtr( "glBeginQuery" );
	if ( glBeginQuery != 0 )	localInitializedProcCount++;
					
	glEndQuery = (PFNGLENDQUERYPROC) getExtensionPtr( "glEndQuery" );
	if ( glEndQuery != 0 )	localInitializedProcCount++;
					
	glGetQueryiv = (PFNGLGETQUERYIVPROC) getExtensionPtr( "glGetQueryiv" );
	if ( glGetQueryiv != 0 )	localInitializedProcCount++;
					
	glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC) getExtensionPtr( "glGetQueryObjectiv" );
	if ( glGetQueryObjectiv != 0 )	localInitializedProcCount++;
					
	glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) getExtensionPtr( "glGetQueryObjectuiv" );
	if ( glGetQueryObjectuiv != 0 )	localInitializedProcCount++;
					
	glBindBuffer = (PFNGLBINDBUFFERPROC) getExtensionPtr( "glBindBuffer" );
	if ( glBindBuffer != 0 )	localInitializedProcCount++;
					
	glDeleteBuffers = (PFNGLDELETEBUFFERSPROC) getExtensionPtr( "glDeleteBuffers" );
	if ( glDeleteBuffers != 0 )	localInitializedProcCount++;
					
	glGenBuffers = (PFNGLGENBUFFERSPROC) getExtensionPtr( "glGenBuffers" );
	if ( glGenBuffers != 0 )	localInitializedProcCount++;
					
	glIsBuffer = (PFNGLISBUFFERPROC) getExtensionPtr( "glIsBuffer" );
	if ( glIsBuffer != 0 )	localInitializedProcCount++;
					
	glBufferData = (PFNGLBUFFERDATAPROC) getExtensionPtr( "glBufferData" );
	if ( glBufferData != 0 )	localInitializedProcCount++;
					
	glBufferSubData = (PFNGLBUFFERSUBDATAPROC) getExtensionPtr( "glBufferSubData" );
	if ( glBufferSubData != 0 )	localInitializedProcCount++;
					
	glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC) getExtensionPtr( "glGetBufferSubData" );
	if ( glGetBufferSubData != 0 )	localInitializedProcCount++;
					
	glMapBuffer = (PFNGLMAPBUFFERPROC) getExtensionPtr( "glMapBuffer" );
	if ( glMapBuffer != 0 )	localInitializedProcCount++;
					
	glUnmapBuffer = (PFNGLUNMAPBUFFERPROC) getExtensionPtr( "glUnmapBuffer" );
	if ( glUnmapBuffer != 0 )	localInitializedProcCount++;
					
	glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) getExtensionPtr( "glGetBufferParameteriv" );
	if ( glGetBufferParameteriv != 0 )	localInitializedProcCount++;
					
	glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) getExtensionPtr( "glGetBufferPointerv" );
	if ( glGetBufferPointerv != 0 )	localInitializedProcCount++;

	isGL_VERSION_1_5 = (localInitializedProcCount == localSupportedProcCount);

	if ( isGL_VERSION_1_5 )
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_1_5                                              : virtual extension detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
		
		++m_initializedExtensionCount;
		m_initializedProcCount += localInitializedProcCount;
	}
	else
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_1_5                                              : virtual extension not detected, only " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
	}

	// ****** GL_VERSION_2_0 ******
	
	isGL_VERSION_2_0 = false;
	
	localSupportedProcCount		= 93;
	localInitializedProcCount	= 0;
					
	glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) getExtensionPtr( "glBlendEquationSeparate" );
	if ( glBlendEquationSeparate != 0 )	localInitializedProcCount++;
					
	glDrawBuffers = (PFNGLDRAWBUFFERSPROC) getExtensionPtr( "glDrawBuffers" );
	if ( glDrawBuffers != 0 )	localInitializedProcCount++;
					
	glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) getExtensionPtr( "glStencilOpSeparate" );
	if ( glStencilOpSeparate != 0 )	localInitializedProcCount++;
					
	glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) getExtensionPtr( "glStencilFuncSeparate" );
	if ( glStencilFuncSeparate != 0 )	localInitializedProcCount++;
					
	glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) getExtensionPtr( "glStencilMaskSeparate" );
	if ( glStencilMaskSeparate != 0 )	localInitializedProcCount++;
					
	glAttachShader = (PFNGLATTACHSHADERPROC) getExtensionPtr( "glAttachShader" );
	if ( glAttachShader != 0 )	localInitializedProcCount++;
					
	glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) getExtensionPtr( "glBindAttribLocation" );
	if ( glBindAttribLocation != 0 )	localInitializedProcCount++;
					
	glCompileShader = (PFNGLCOMPILESHADERPROC) getExtensionPtr( "glCompileShader" );
	if ( glCompileShader != 0 )	localInitializedProcCount++;
					
	glCreateProgram = (PFNGLCREATEPROGRAMPROC) getExtensionPtr( "glCreateProgram" );
	if ( glCreateProgram != 0 )	localInitializedProcCount++;
					
	glCreateShader = (PFNGLCREATESHADERPROC) getExtensionPtr( "glCreateShader" );
	if ( glCreateShader != 0 )	localInitializedProcCount++;
					
	glDeleteProgram = (PFNGLDELETEPROGRAMPROC) getExtensionPtr( "glDeleteProgram" );
	if ( glDeleteProgram != 0 )	localInitializedProcCount++;
					
	glDeleteShader = (PFNGLDELETESHADERPROC) getExtensionPtr( "glDeleteShader" );
	if ( glDeleteShader != 0 )	localInitializedProcCount++;
					
	glDetachShader = (PFNGLDETACHSHADERPROC) getExtensionPtr( "glDetachShader" );
	if ( glDetachShader != 0 )	localInitializedProcCount++;
					
	glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) getExtensionPtr( "glDisableVertexAttribArray" );
	if ( glDisableVertexAttribArray != 0 )	localInitializedProcCount++;
					
	glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) getExtensionPtr( "glEnableVertexAttribArray" );
	if ( glEnableVertexAttribArray != 0 )	localInitializedProcCount++;
					
	glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) getExtensionPtr( "glGetActiveAttrib" );
	if ( glGetActiveAttrib != 0 )	localInitializedProcCount++;
					
	glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) getExtensionPtr( "glGetActiveUniform" );
	if ( glGetActiveUniform != 0 )	localInitializedProcCount++;
					
	glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) getExtensionPtr( "glGetAttachedShaders" );
	if ( glGetAttachedShaders != 0 )	localInitializedProcCount++;
					
	glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) getExtensionPtr( "glGetAttribLocation" );
	if ( glGetAttribLocation != 0 )	localInitializedProcCount++;
					
	glGetProgramiv = (PFNGLGETPROGRAMIVPROC) getExtensionPtr( "glGetProgramiv" );
	if ( glGetProgramiv != 0 )	localInitializedProcCount++;
					
	glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) getExtensionPtr( "glGetProgramInfoLog" );
	if ( glGetProgramInfoLog != 0 )	localInitializedProcCount++;
					
	glGetShaderiv = (PFNGLGETSHADERIVPROC) getExtensionPtr( "glGetShaderiv" );
	if ( glGetShaderiv != 0 )	localInitializedProcCount++;
					
	glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) getExtensionPtr( "glGetShaderInfoLog" );
	if ( glGetShaderInfoLog != 0 )	localInitializedProcCount++;
					
	glGetShaderSource = (PFNGLGETSHADERSOURCEPROC) getExtensionPtr( "glGetShaderSource" );
	if ( glGetShaderSource != 0 )	localInitializedProcCount++;
					
	glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) getExtensionPtr( "glGetUniformLocation" );
	if ( glGetUniformLocation != 0 )	localInitializedProcCount++;
					
	glGetUniformfv = (PFNGLGETUNIFORMFVPROC) getExtensionPtr( "glGetUniformfv" );
	if ( glGetUniformfv != 0 )	localInitializedProcCount++;
					
	glGetUniformiv = (PFNGLGETUNIFORMIVPROC) getExtensionPtr( "glGetUniformiv" );
	if ( glGetUniformiv != 0 )	localInitializedProcCount++;
					
	glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC) getExtensionPtr( "glGetVertexAttribdv" );
	if ( glGetVertexAttribdv != 0 )	localInitializedProcCount++;
					
	glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) getExtensionPtr( "glGetVertexAttribfv" );
	if ( glGetVertexAttribfv != 0 )	localInitializedProcCount++;
					
	glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) getExtensionPtr( "glGetVertexAttribiv" );
	if ( glGetVertexAttribiv != 0 )	localInitializedProcCount++;
					
	glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) getExtensionPtr( "glGetVertexAttribPointerv" );
	if ( glGetVertexAttribPointerv != 0 )	localInitializedProcCount++;
					
	glIsProgram = (PFNGLISPROGRAMPROC) getExtensionPtr( "glIsProgram" );
	if ( glIsProgram != 0 )	localInitializedProcCount++;
					
	glIsShader = (PFNGLISSHADERPROC) getExtensionPtr( "glIsShader" );
	if ( glIsShader != 0 )	localInitializedProcCount++;
					
	glLinkProgram = (PFNGLLINKPROGRAMPROC) getExtensionPtr( "glLinkProgram" );
	if ( glLinkProgram != 0 )	localInitializedProcCount++;
					
	glShaderSource = (PFNGLSHADERSOURCEPROC) getExtensionPtr( "glShaderSource" );
	if ( glShaderSource != 0 )	localInitializedProcCount++;
					
	glUseProgram = (PFNGLUSEPROGRAMPROC) getExtensionPtr( "glUseProgram" );
	if ( glUseProgram != 0 )	localInitializedProcCount++;
					
	glUniform1f = (PFNGLUNIFORM1FPROC) getExtensionPtr( "glUniform1f" );
	if ( glUniform1f != 0 )	localInitializedProcCount++;
					
	glUniform2f = (PFNGLUNIFORM2FPROC) getExtensionPtr( "glUniform2f" );
	if ( glUniform2f != 0 )	localInitializedProcCount++;
					
	glUniform3f = (PFNGLUNIFORM3FPROC) getExtensionPtr( "glUniform3f" );
	if ( glUniform3f != 0 )	localInitializedProcCount++;
					
	glUniform4f = (PFNGLUNIFORM4FPROC) getExtensionPtr( "glUniform4f" );
	if ( glUniform4f != 0 )	localInitializedProcCount++;
					
	glUniform1i = (PFNGLUNIFORM1IPROC) getExtensionPtr( "glUniform1i" );
	if ( glUniform1i != 0 )	localInitializedProcCount++;
					
	glUniform2i = (PFNGLUNIFORM2IPROC) getExtensionPtr( "glUniform2i" );
	if ( glUniform2i != 0 )	localInitializedProcCount++;
					
	glUniform3i = (PFNGLUNIFORM3IPROC) getExtensionPtr( "glUniform3i" );
	if ( glUniform3i != 0 )	localInitializedProcCount++;
					
	glUniform4i = (PFNGLUNIFORM4IPROC) getExtensionPtr( "glUniform4i" );
	if ( glUniform4i != 0 )	localInitializedProcCount++;
					
	glUniform1fv = (PFNGLUNIFORM1FVPROC) getExtensionPtr( "glUniform1fv" );
	if ( glUniform1fv != 0 )	localInitializedProcCount++;
					
	glUniform2fv = (PFNGLUNIFORM2FVPROC) getExtensionPtr( "glUniform2fv" );
	if ( glUniform2fv != 0 )	localInitializedProcCount++;
					
	glUniform3fv = (PFNGLUNIFORM3FVPROC) getExtensionPtr( "glUniform3fv" );
	if ( glUniform3fv != 0 )	localInitializedProcCount++;
					
	glUniform4fv = (PFNGLUNIFORM4FVPROC) getExtensionPtr( "glUniform4fv" );
	if ( glUniform4fv != 0 )	localInitializedProcCount++;
					
	glUniform1iv = (PFNGLUNIFORM1IVPROC) getExtensionPtr( "glUniform1iv" );
	if ( glUniform1iv != 0 )	localInitializedProcCount++;
					
	glUniform2iv = (PFNGLUNIFORM2IVPROC) getExtensionPtr( "glUniform2iv" );
	if ( glUniform2iv != 0 )	localInitializedProcCount++;
					
	glUniform3iv = (PFNGLUNIFORM3IVPROC) getExtensionPtr( "glUniform3iv" );
	if ( glUniform3iv != 0 )	localInitializedProcCount++;
					
	glUniform4iv = (PFNGLUNIFORM4IVPROC) getExtensionPtr( "glUniform4iv" );
	if ( glUniform4iv != 0 )	localInitializedProcCount++;
					
	glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) getExtensionPtr( "glUniformMatrix2fv" );
	if ( glUniformMatrix2fv != 0 )	localInitializedProcCount++;
					
	glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) getExtensionPtr( "glUniformMatrix3fv" );
	if ( glUniformMatrix3fv != 0 )	localInitializedProcCount++;
					
	glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) getExtensionPtr( "glUniformMatrix4fv" );
	if ( glUniformMatrix4fv != 0 )	localInitializedProcCount++;
					
	glValidateProgram = (PFNGLVALIDATEPROGRAMPROC) getExtensionPtr( "glValidateProgram" );
	if ( glValidateProgram != 0 )	localInitializedProcCount++;
					
	glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC) getExtensionPtr( "glVertexAttrib1d" );
	if ( glVertexAttrib1d != 0 )	localInitializedProcCount++;
					
	glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC) getExtensionPtr( "glVertexAttrib1dv" );
	if ( glVertexAttrib1dv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) getExtensionPtr( "glVertexAttrib1f" );
	if ( glVertexAttrib1f != 0 )	localInitializedProcCount++;
					
	glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) getExtensionPtr( "glVertexAttrib1fv" );
	if ( glVertexAttrib1fv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC) getExtensionPtr( "glVertexAttrib1s" );
	if ( glVertexAttrib1s != 0 )	localInitializedProcCount++;
					
	glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC) getExtensionPtr( "glVertexAttrib1sv" );
	if ( glVertexAttrib1sv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC) getExtensionPtr( "glVertexAttrib2d" );
	if ( glVertexAttrib2d != 0 )	localInitializedProcCount++;
					
	glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC) getExtensionPtr( "glVertexAttrib2dv" );
	if ( glVertexAttrib2dv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) getExtensionPtr( "glVertexAttrib2f" );
	if ( glVertexAttrib2f != 0 )	localInitializedProcCount++;
					
	glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) getExtensionPtr( "glVertexAttrib2fv" );
	if ( glVertexAttrib2fv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC) getExtensionPtr( "glVertexAttrib2s" );
	if ( glVertexAttrib2s != 0 )	localInitializedProcCount++;
					
	glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC) getExtensionPtr( "glVertexAttrib2sv" );
	if ( glVertexAttrib2sv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC) getExtensionPtr( "glVertexAttrib3d" );
	if ( glVertexAttrib3d != 0 )	localInitializedProcCount++;
					
	glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC) getExtensionPtr( "glVertexAttrib3dv" );
	if ( glVertexAttrib3dv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) getExtensionPtr( "glVertexAttrib3f" );
	if ( glVertexAttrib3f != 0 )	localInitializedProcCount++;
					
	glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) getExtensionPtr( "glVertexAttrib3fv" );
	if ( glVertexAttrib3fv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC) getExtensionPtr( "glVertexAttrib3s" );
	if ( glVertexAttrib3s != 0 )	localInitializedProcCount++;
					
	glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC) getExtensionPtr( "glVertexAttrib3sv" );
	if ( glVertexAttrib3sv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC) getExtensionPtr( "glVertexAttrib4Nbv" );
	if ( glVertexAttrib4Nbv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC) getExtensionPtr( "glVertexAttrib4Niv" );
	if ( glVertexAttrib4Niv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC) getExtensionPtr( "glVertexAttrib4Nsv" );
	if ( glVertexAttrib4Nsv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC) getExtensionPtr( "glVertexAttrib4Nub" );
	if ( glVertexAttrib4Nub != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC) getExtensionPtr( "glVertexAttrib4Nubv" );
	if ( glVertexAttrib4Nubv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC) getExtensionPtr( "glVertexAttrib4Nuiv" );
	if ( glVertexAttrib4Nuiv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC) getExtensionPtr( "glVertexAttrib4Nusv" );
	if ( glVertexAttrib4Nusv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC) getExtensionPtr( "glVertexAttrib4bv" );
	if ( glVertexAttrib4bv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC) getExtensionPtr( "glVertexAttrib4d" );
	if ( glVertexAttrib4d != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC) getExtensionPtr( "glVertexAttrib4dv" );
	if ( glVertexAttrib4dv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) getExtensionPtr( "glVertexAttrib4f" );
	if ( glVertexAttrib4f != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) getExtensionPtr( "glVertexAttrib4fv" );
	if ( glVertexAttrib4fv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC) getExtensionPtr( "glVertexAttrib4iv" );
	if ( glVertexAttrib4iv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC) getExtensionPtr( "glVertexAttrib4s" );
	if ( glVertexAttrib4s != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC) getExtensionPtr( "glVertexAttrib4sv" );
	if ( glVertexAttrib4sv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC) getExtensionPtr( "glVertexAttrib4ubv" );
	if ( glVertexAttrib4ubv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC) getExtensionPtr( "glVertexAttrib4uiv" );
	if ( glVertexAttrib4uiv != 0 )	localInitializedProcCount++;
					
	glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC) getExtensionPtr( "glVertexAttrib4usv" );
	if ( glVertexAttrib4usv != 0 )	localInitializedProcCount++;
					
	glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) getExtensionPtr( "glVertexAttribPointer" );
	if ( glVertexAttribPointer != 0 )	localInitializedProcCount++;

	isGL_VERSION_2_0 = (localInitializedProcCount == localSupportedProcCount);

	if ( isGL_VERSION_2_0 )
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_2_0                                              : virtual extension detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
		
		++m_initializedExtensionCount;
		m_initializedProcCount += localInitializedProcCount;
	}
	else
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_2_0                                              : virtual extension not detected, only " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
	}

	// ****** GL_VERSION_2_1 ******
	
	isGL_VERSION_2_1 = false;
	
	localSupportedProcCount		= 6;
	localInitializedProcCount	= 0;
					
	glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) getExtensionPtr( "glUniformMatrix2x3fv" );
	if ( glUniformMatrix2x3fv != 0 )	localInitializedProcCount++;
					
	glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) getExtensionPtr( "glUniformMatrix3x2fv" );
	if ( glUniformMatrix3x2fv != 0 )	localInitializedProcCount++;
					
	glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) getExtensionPtr( "glUniformMatrix2x4fv" );
	if ( glUniformMatrix2x4fv != 0 )	localInitializedProcCount++;
					
	glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) getExtensionPtr( "glUniformMatrix4x2fv" );
	if ( glUniformMatrix4x2fv != 0 )	localInitializedProcCount++;
					
	glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) getExtensionPtr( "glUniformMatrix3x4fv" );
	if ( glUniformMatrix3x4fv != 0 )	localInitializedProcCount++;
					
	glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) getExtensionPtr( "glUniformMatrix4x3fv" );
	if ( glUniformMatrix4x3fv != 0 )	localInitializedProcCount++;

	isGL_VERSION_2_1 = (localInitializedProcCount == localSupportedProcCount);

	if ( isGL_VERSION_2_1 )
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_2_1                                              : virtual extension detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
		
		++m_initializedExtensionCount;
		m_initializedProcCount += localInitializedProcCount;
	}
	else
	{
		std::stringstream strStream;
		strStream << "GL_VERSION_2_1                                              : virtual extension not detected, only " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
	}
} // initialize()


void OpenGLExtensionsGen::initializeGL_WIN()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

	
	// ****** GL_WIN_phong_shading ******
	
	isGL_WIN_phong_shading = isExtensionSupported("GL_WIN_phong_shading");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_WIN_phong_shading )
	{
		std::stringstream strStream;
		strStream << "GL_WIN_phong_shading                                        : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_WIN_phong_shading                                        : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_WIN_phong_shading") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_WIN_phong_shading                                        : not detected." );
	}
	
	// ****** GL_WIN_specular_fog ******
	
	isGL_WIN_specular_fog = isExtensionSupported("GL_WIN_specular_fog");
	
	localSupportedProcCount		= 0;
	localInitializedProcCount	= 0;
	
	
	if ( isGL_WIN_specular_fog )
	{
		std::stringstream strStream;
		strStream << "GL_WIN_specular_fog                                         : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "GL_WIN_specular_fog                                         : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("GL_WIN_specular_fog") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "GL_WIN_specular_fog                                         : not detected." );
	}
} // initialize()


void OpenGLExtensionsGen::initializeNot_in_OpenGL_Extension_Registry()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

} // initialize()



} // namespace gle
