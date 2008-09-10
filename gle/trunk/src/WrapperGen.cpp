// This file was generated at Fri Jun 20 14:40:22 2008 with gle, please do not modify.

// GLE - Copyright (C) 2004, 2005, 2007, 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "gle/WrapperGen.hpp"

#include "gle/OpenGLExtensionsGen.hpp"
#include "gle/Wrapper.hpp"


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

					
void glTbufferMask3DFX( GLuint mask )
{
	gleGetCurrent()->glTbufferMask3DFX( mask );
}


// ********* GL_3DFX_texture_compression_FXT1 *********
bool isGL_3DFX_texture_compression_FXT1()
{
	const bool isSupported = gleGetCurrent()->isGL_3DFX_texture_compression_FXT1;
	
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

					
void glElementPointerAPPLE( GLenum type, const GLvoid *pointer )
{
	gleGetCurrent()->glElementPointerAPPLE( type, pointer );
}

					
void glDrawElementArrayAPPLE( GLenum mode, GLint first, GLsizei count )
{
	gleGetCurrent()->glDrawElementArrayAPPLE( mode, first, count );
}

					
void glDrawRangeElementArrayAPPLE( GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count )
{
	gleGetCurrent()->glDrawRangeElementArrayAPPLE( mode, start, end, first, count );
}

					
void glMultiDrawElementArrayAPPLE( GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount )
{
	gleGetCurrent()->glMultiDrawElementArrayAPPLE( mode, first, count, primcount );
}

					
void glMultiDrawRangeElementArrayAPPLE( GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount )
{
	gleGetCurrent()->glMultiDrawRangeElementArrayAPPLE( mode, start, end, first, count, primcount );
}


// ********* GL_APPLE_fence *********
bool isGL_APPLE_fence()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_fence;
	
	return isSupported;
}

					
void glGenFencesAPPLE( GLsizei n, GLuint *fences )
{
	gleGetCurrent()->glGenFencesAPPLE( n, fences );
}

					
void glDeleteFencesAPPLE( GLsizei n, const GLuint *fences )
{
	gleGetCurrent()->glDeleteFencesAPPLE( n, fences );
}

					
void glSetFenceAPPLE( GLuint fence )
{
	gleGetCurrent()->glSetFenceAPPLE( fence );
}

					
GLboolean glIsFenceAPPLE( GLuint fence )
{
	return ( gleGetCurrent()->glIsFenceAPPLE( fence) );
}

					
GLboolean glTestFenceAPPLE( GLuint fence )
{
	return ( gleGetCurrent()->glTestFenceAPPLE( fence) );
}

					
void glFinishFenceAPPLE( GLuint fence )
{
	gleGetCurrent()->glFinishFenceAPPLE( fence );
}

					
GLboolean glTestObjectAPPLE( GLenum object, GLuint name )
{
	return ( gleGetCurrent()->glTestObjectAPPLE( object, name) );
}

					
void glFinishObjectAPPLE( GLenum object, GLint name )
{
	gleGetCurrent()->glFinishObjectAPPLE( object, name );
}


// ********* GL_APPLE_flush_buffer_range *********
bool isGL_APPLE_flush_buffer_range()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_flush_buffer_range;
	
	return isSupported;
}

					
void glBufferParameteriAPPLE( GLenum target, GLenum pname, GLint param )
{
	gleGetCurrent()->glBufferParameteriAPPLE( target, pname, param );
}

					
void glFlushMappedBufferRangeAPPLE( GLenum target, GLintptr offset, GLsizeiptr size )
{
	gleGetCurrent()->glFlushMappedBufferRangeAPPLE( target, offset, size );
}


// ********* GL_APPLE_specular_vector *********
bool isGL_APPLE_specular_vector()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_specular_vector;
	
	return isSupported;
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

					
void glBindVertexArrayAPPLE( GLuint array )
{
	gleGetCurrent()->glBindVertexArrayAPPLE( array );
}

					
void glDeleteVertexArraysAPPLE( GLsizei n, const GLuint *arrays )
{
	gleGetCurrent()->glDeleteVertexArraysAPPLE( n, arrays );
}

					
void glGenVertexArraysAPPLE( GLsizei n, GLuint *arrays )
{
	gleGetCurrent()->glGenVertexArraysAPPLE( n, arrays );
}

					
GLboolean glIsVertexArrayAPPLE( GLuint array )
{
	return ( gleGetCurrent()->glIsVertexArrayAPPLE( array) );
}


// ********* GL_APPLE_vertex_array_range *********
bool isGL_APPLE_vertex_array_range()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_vertex_array_range;
	
	return isSupported;
}

					
void glVertexArrayRangeAPPLE( GLsizei length, GLvoid *pointer )
{
	gleGetCurrent()->glVertexArrayRangeAPPLE( length, pointer );
}

					
void glFlushVertexArrayRangeAPPLE( GLsizei length, GLvoid *pointer )
{
	gleGetCurrent()->glFlushVertexArrayRangeAPPLE( length, pointer );
}

					
void glVertexArrayParameteriAPPLE( GLenum pname, GLint param )
{
	gleGetCurrent()->glVertexArrayParameteriAPPLE( pname, param );
}


// ********* GL_APPLE_ycbcr_422 *********
bool isGL_APPLE_ycbcr_422()
{
	const bool isSupported = gleGetCurrent()->isGL_APPLE_ycbcr_422;
	
	return isSupported;
}


// ********* GL_ARB_color_buffer_float *********
bool isGL_ARB_color_buffer_float()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_color_buffer_float;
	
	return isSupported;
}

					
void glClampColorARB( GLenum target, GLenum clamp )
{
	gleGetCurrent()->glClampColorARB( target, clamp );
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

					
void glDrawBuffersARB( GLsizei n, const GLenum *bufs )
{
	gleGetCurrent()->glDrawBuffersARB( n, bufs );
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


// ********* GL_ARB_half_float_pixel *********
bool isGL_ARB_half_float_pixel()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_half_float_pixel;
	
	return isSupported;
}


// ********* GL_ARB_imaging *********
bool isGL_ARB_imaging()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_imaging;
	
	return isSupported;
}


// ********* GL_ARB_matrix_palette *********
bool isGL_ARB_matrix_palette()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_matrix_palette;
	
	return isSupported;
}

					
void glCurrentPaletteMatrixARB( GLint index )
{
	gleGetCurrent()->glCurrentPaletteMatrixARB( index );
}

					
void glMatrixIndexubvARB( GLint size, const GLubyte *indices )
{
	gleGetCurrent()->glMatrixIndexubvARB( size, indices );
}

					
void glMatrixIndexusvARB( GLint size, const GLushort *indices )
{
	gleGetCurrent()->glMatrixIndexusvARB( size, indices );
}

					
void glMatrixIndexuivARB( GLint size, const GLuint *indices )
{
	gleGetCurrent()->glMatrixIndexuivARB( size, indices );
}

					
void glMatrixIndexPointerARB( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glMatrixIndexPointerARB( size, type, stride, pointer );
}


// ********* GL_ARB_multisample *********
bool isGL_ARB_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_multisample;
	
	return isSupported;
}

					
void glSampleCoverageARB( GLclampf value, GLboolean invert )
{
	gleGetCurrent()->glSampleCoverageARB( value, invert );
}


// ********* GL_ARB_multitexture *********
bool isGL_ARB_multitexture()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_multitexture;
	
	return isSupported;
}

					
void glActiveTextureARB( GLenum texture )
{
	gleGetCurrent()->glActiveTextureARB( texture );
}

					
void glClientActiveTextureARB( GLenum texture )
{
	gleGetCurrent()->glClientActiveTextureARB( texture );
}

					
void glMultiTexCoord1dARB( GLenum target, GLdouble s )
{
	gleGetCurrent()->glMultiTexCoord1dARB( target, s );
}

					
void glMultiTexCoord1dvARB( GLenum target, const GLdouble *v )
{
	gleGetCurrent()->glMultiTexCoord1dvARB( target, v );
}

					
void glMultiTexCoord1fARB( GLenum target, GLfloat s )
{
	gleGetCurrent()->glMultiTexCoord1fARB( target, s );
}

					
void glMultiTexCoord1fvARB( GLenum target, const GLfloat *v )
{
	gleGetCurrent()->glMultiTexCoord1fvARB( target, v );
}

					
void glMultiTexCoord1iARB( GLenum target, GLint s )
{
	gleGetCurrent()->glMultiTexCoord1iARB( target, s );
}

					
void glMultiTexCoord1ivARB( GLenum target, const GLint *v )
{
	gleGetCurrent()->glMultiTexCoord1ivARB( target, v );
}

					
void glMultiTexCoord1sARB( GLenum target, GLshort s )
{
	gleGetCurrent()->glMultiTexCoord1sARB( target, s );
}

					
void glMultiTexCoord1svARB( GLenum target, const GLshort *v )
{
	gleGetCurrent()->glMultiTexCoord1svARB( target, v );
}

					
void glMultiTexCoord2dARB( GLenum target, GLdouble s, GLdouble t )
{
	gleGetCurrent()->glMultiTexCoord2dARB( target, s, t );
}

					
void glMultiTexCoord2dvARB( GLenum target, const GLdouble *v )
{
	gleGetCurrent()->glMultiTexCoord2dvARB( target, v );
}

					
void glMultiTexCoord2fARB( GLenum target, GLfloat s, GLfloat t )
{
	gleGetCurrent()->glMultiTexCoord2fARB( target, s, t );
}

					
void glMultiTexCoord2fvARB( GLenum target, const GLfloat *v )
{
	gleGetCurrent()->glMultiTexCoord2fvARB( target, v );
}

					
void glMultiTexCoord2iARB( GLenum target, GLint s, GLint t )
{
	gleGetCurrent()->glMultiTexCoord2iARB( target, s, t );
}

					
void glMultiTexCoord2ivARB( GLenum target, const GLint *v )
{
	gleGetCurrent()->glMultiTexCoord2ivARB( target, v );
}

					
void glMultiTexCoord2sARB( GLenum target, GLshort s, GLshort t )
{
	gleGetCurrent()->glMultiTexCoord2sARB( target, s, t );
}

					
void glMultiTexCoord2svARB( GLenum target, const GLshort *v )
{
	gleGetCurrent()->glMultiTexCoord2svARB( target, v );
}

					
void glMultiTexCoord3dARB( GLenum target, GLdouble s, GLdouble t, GLdouble r )
{
	gleGetCurrent()->glMultiTexCoord3dARB( target, s, t, r );
}

					
void glMultiTexCoord3dvARB( GLenum target, const GLdouble *v )
{
	gleGetCurrent()->glMultiTexCoord3dvARB( target, v );
}

					
void glMultiTexCoord3fARB( GLenum target, GLfloat s, GLfloat t, GLfloat r )
{
	gleGetCurrent()->glMultiTexCoord3fARB( target, s, t, r );
}

					
void glMultiTexCoord3fvARB( GLenum target, const GLfloat *v )
{
	gleGetCurrent()->glMultiTexCoord3fvARB( target, v );
}

					
void glMultiTexCoord3iARB( GLenum target, GLint s, GLint t, GLint r )
{
	gleGetCurrent()->glMultiTexCoord3iARB( target, s, t, r );
}

					
void glMultiTexCoord3ivARB( GLenum target, const GLint *v )
{
	gleGetCurrent()->glMultiTexCoord3ivARB( target, v );
}

					
void glMultiTexCoord3sARB( GLenum target, GLshort s, GLshort t, GLshort r )
{
	gleGetCurrent()->glMultiTexCoord3sARB( target, s, t, r );
}

					
void glMultiTexCoord3svARB( GLenum target, const GLshort *v )
{
	gleGetCurrent()->glMultiTexCoord3svARB( target, v );
}

					
void glMultiTexCoord4dARB( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q )
{
	gleGetCurrent()->glMultiTexCoord4dARB( target, s, t, r, q );
}

					
void glMultiTexCoord4dvARB( GLenum target, const GLdouble *v )
{
	gleGetCurrent()->glMultiTexCoord4dvARB( target, v );
}

					
void glMultiTexCoord4fARB( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q )
{
	gleGetCurrent()->glMultiTexCoord4fARB( target, s, t, r, q );
}

					
void glMultiTexCoord4fvARB( GLenum target, const GLfloat *v )
{
	gleGetCurrent()->glMultiTexCoord4fvARB( target, v );
}

					
void glMultiTexCoord4iARB( GLenum target, GLint s, GLint t, GLint r, GLint q )
{
	gleGetCurrent()->glMultiTexCoord4iARB( target, s, t, r, q );
}

					
void glMultiTexCoord4ivARB( GLenum target, const GLint *v )
{
	gleGetCurrent()->glMultiTexCoord4ivARB( target, v );
}

					
void glMultiTexCoord4sARB( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q )
{
	gleGetCurrent()->glMultiTexCoord4sARB( target, s, t, r, q );
}

					
void glMultiTexCoord4svARB( GLenum target, const GLshort *v )
{
	gleGetCurrent()->glMultiTexCoord4svARB( target, v );
}


// ********* GL_ARB_occlusion_query *********
bool isGL_ARB_occlusion_query()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_occlusion_query;
	
	return isSupported;
}

					
void glGenQueriesARB( GLsizei n, GLuint *ids )
{
	gleGetCurrent()->glGenQueriesARB( n, ids );
}

					
void glDeleteQueriesARB( GLsizei n, const GLuint *ids )
{
	gleGetCurrent()->glDeleteQueriesARB( n, ids );
}

					
GLboolean glIsQueryARB( GLuint id )
{
	return ( gleGetCurrent()->glIsQueryARB( id) );
}

					
void glBeginQueryARB( GLenum target, GLuint id )
{
	gleGetCurrent()->glBeginQueryARB( target, id );
}

					
void glEndQueryARB( GLenum target )
{
	gleGetCurrent()->glEndQueryARB( target );
}

					
void glGetQueryivARB( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetQueryivARB( target, pname, params );
}

					
void glGetQueryObjectivARB( GLuint id, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetQueryObjectivARB( id, pname, params );
}

					
void glGetQueryObjectuivARB( GLuint id, GLenum pname, GLuint *params )
{
	gleGetCurrent()->glGetQueryObjectuivARB( id, pname, params );
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

					
void glPointParameterfARB( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glPointParameterfARB( pname, param );
}

					
void glPointParameterfvARB( GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glPointParameterfvARB( pname, params );
}


// ********* GL_ARB_point_sprite *********
bool isGL_ARB_point_sprite()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_point_sprite;
	
	return isSupported;
}


// ********* GL_ARB_shader_objects *********
bool isGL_ARB_shader_objects()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shader_objects;
	
	return isSupported;
}

					
void glDeleteObjectARB( GLhandleARB obj )
{
	gleGetCurrent()->glDeleteObjectARB( obj );
}

					
GLhandleARB glGetHandleARB( GLenum pname )
{
	return ( gleGetCurrent()->glGetHandleARB( pname) );
}

					
void glDetachObjectARB( GLhandleARB containerObj, GLhandleARB attachedObj )
{
	gleGetCurrent()->glDetachObjectARB( containerObj, attachedObj );
}

					
GLhandleARB glCreateShaderObjectARB( GLenum shaderType )
{
	return ( gleGetCurrent()->glCreateShaderObjectARB( shaderType) );
}

					
void glShaderSourceARB( GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length )
{
	gleGetCurrent()->glShaderSourceARB( shaderObj, count, string, length );
}

					
void glCompileShaderARB( GLhandleARB shaderObj )
{
	gleGetCurrent()->glCompileShaderARB( shaderObj );
}

					
GLhandleARB glCreateProgramObjectARB( void )
{
	return ( gleGetCurrent()->glCreateProgramObjectARB( ) );
}

					
void glAttachObjectARB( GLhandleARB containerObj, GLhandleARB obj )
{
	gleGetCurrent()->glAttachObjectARB( containerObj, obj );
}

					
void glLinkProgramARB( GLhandleARB programObj )
{
	gleGetCurrent()->glLinkProgramARB( programObj );
}

					
void glUseProgramObjectARB( GLhandleARB programObj )
{
	gleGetCurrent()->glUseProgramObjectARB( programObj );
}

					
void glValidateProgramARB( GLhandleARB programObj )
{
	gleGetCurrent()->glValidateProgramARB( programObj );
}

					
void glUniform1fARB( GLint location, GLfloat v0 )
{
	gleGetCurrent()->glUniform1fARB( location, v0 );
}

					
void glUniform2fARB( GLint location, GLfloat v0, GLfloat v1 )
{
	gleGetCurrent()->glUniform2fARB( location, v0, v1 );
}

					
void glUniform3fARB( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 )
{
	gleGetCurrent()->glUniform3fARB( location, v0, v1, v2 );
}

					
void glUniform4fARB( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 )
{
	gleGetCurrent()->glUniform4fARB( location, v0, v1, v2, v3 );
}

					
void glUniform1iARB( GLint location, GLint v0 )
{
	gleGetCurrent()->glUniform1iARB( location, v0 );
}

					
void glUniform2iARB( GLint location, GLint v0, GLint v1 )
{
	gleGetCurrent()->glUniform2iARB( location, v0, v1 );
}

					
void glUniform3iARB( GLint location, GLint v0, GLint v1, GLint v2 )
{
	gleGetCurrent()->glUniform3iARB( location, v0, v1, v2 );
}

					
void glUniform4iARB( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 )
{
	gleGetCurrent()->glUniform4iARB( location, v0, v1, v2, v3 );
}

					
void glUniform1fvARB( GLint location, GLsizei count, const GLfloat *value )
{
	gleGetCurrent()->glUniform1fvARB( location, count, value );
}

					
void glUniform2fvARB( GLint location, GLsizei count, const GLfloat *value )
{
	gleGetCurrent()->glUniform2fvARB( location, count, value );
}

					
void glUniform3fvARB( GLint location, GLsizei count, const GLfloat *value )
{
	gleGetCurrent()->glUniform3fvARB( location, count, value );
}

					
void glUniform4fvARB( GLint location, GLsizei count, const GLfloat *value )
{
	gleGetCurrent()->glUniform4fvARB( location, count, value );
}

					
void glUniform1ivARB( GLint location, GLsizei count, const GLint *value )
{
	gleGetCurrent()->glUniform1ivARB( location, count, value );
}

					
void glUniform2ivARB( GLint location, GLsizei count, const GLint *value )
{
	gleGetCurrent()->glUniform2ivARB( location, count, value );
}

					
void glUniform3ivARB( GLint location, GLsizei count, const GLint *value )
{
	gleGetCurrent()->glUniform3ivARB( location, count, value );
}

					
void glUniform4ivARB( GLint location, GLsizei count, const GLint *value )
{
	gleGetCurrent()->glUniform4ivARB( location, count, value );
}

					
void glUniformMatrix2fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix2fvARB( location, count, transpose, value );
}

					
void glUniformMatrix3fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix3fvARB( location, count, transpose, value );
}

					
void glUniformMatrix4fvARB( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix4fvARB( location, count, transpose, value );
}

					
void glGetObjectParameterfvARB( GLhandleARB obj, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetObjectParameterfvARB( obj, pname, params );
}

					
void glGetObjectParameterivARB( GLhandleARB obj, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetObjectParameterivARB( obj, pname, params );
}

					
void glGetInfoLogARB( GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog )
{
	gleGetCurrent()->glGetInfoLogARB( obj, maxLength, length, infoLog );
}

					
void glGetAttachedObjectsARB( GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj )
{
	gleGetCurrent()->glGetAttachedObjectsARB( containerObj, maxCount, count, obj );
}

					
GLint glGetUniformLocationARB( GLhandleARB programObj, const GLcharARB *name )
{
	return ( gleGetCurrent()->glGetUniformLocationARB( programObj, name) );
}

					
void glGetActiveUniformARB( GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name )
{
	gleGetCurrent()->glGetActiveUniformARB( programObj, index, maxLength, length, size, type, name );
}

					
void glGetUniformfvARB( GLhandleARB programObj, GLint location, GLfloat *params )
{
	gleGetCurrent()->glGetUniformfvARB( programObj, location, params );
}

					
void glGetUniformivARB( GLhandleARB programObj, GLint location, GLint *params )
{
	gleGetCurrent()->glGetUniformivARB( programObj, location, params );
}

					
void glGetShaderSourceARB( GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source )
{
	gleGetCurrent()->glGetShaderSourceARB( obj, maxLength, length, source );
}


// ********* GL_ARB_shading_language_100 *********
bool isGL_ARB_shading_language_100()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_shading_language_100;
	
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


// ********* GL_ARB_texture_border_clamp *********
bool isGL_ARB_texture_border_clamp()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_border_clamp;
	
	return isSupported;
}


// ********* GL_ARB_texture_compression *********
bool isGL_ARB_texture_compression()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_compression;
	
	return isSupported;
}

					
void glCompressedTexImage3DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexImage3DARB( target, level, internalformat, width, height, depth, border, imageSize, data );
}

					
void glCompressedTexImage2DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexImage2DARB( target, level, internalformat, width, height, border, imageSize, data );
}

					
void glCompressedTexImage1DARB( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexImage1DARB( target, level, internalformat, width, border, imageSize, data );
}

					
void glCompressedTexSubImage3DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexSubImage3DARB( target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data );
}

					
void glCompressedTexSubImage2DARB( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexSubImage2DARB( target, level, xoffset, yoffset, width, height, format, imageSize, data );
}

					
void glCompressedTexSubImage1DARB( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexSubImage1DARB( target, level, xoffset, width, format, imageSize, data );
}

					
void glGetCompressedTexImageARB( GLenum target, GLint level, GLvoid *img )
{
	gleGetCurrent()->glGetCompressedTexImageARB( target, level, img );
}


// ********* GL_ARB_texture_cube_map *********
bool isGL_ARB_texture_cube_map()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_cube_map;
	
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


// ********* GL_ARB_texture_mirrored_repeat *********
bool isGL_ARB_texture_mirrored_repeat()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_mirrored_repeat;
	
	return isSupported;
}


// ********* GL_ARB_texture_non_power_of_two *********
bool isGL_ARB_texture_non_power_of_two()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_non_power_of_two;
	
	return isSupported;
}


// ********* GL_ARB_texture_rectangle *********
bool isGL_ARB_texture_rectangle()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_texture_rectangle;
	
	return isSupported;
}


// ********* GL_ARB_transpose_matrix *********
bool isGL_ARB_transpose_matrix()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_transpose_matrix;
	
	return isSupported;
}

					
void glLoadTransposeMatrixfARB( const GLfloat *m )
{
	gleGetCurrent()->glLoadTransposeMatrixfARB( m );
}

					
void glLoadTransposeMatrixdARB( const GLdouble *m )
{
	gleGetCurrent()->glLoadTransposeMatrixdARB( m );
}

					
void glMultTransposeMatrixfARB( const GLfloat *m )
{
	gleGetCurrent()->glMultTransposeMatrixfARB( m );
}

					
void glMultTransposeMatrixdARB( const GLdouble *m )
{
	gleGetCurrent()->glMultTransposeMatrixdARB( m );
}


// ********* GL_ARB_vertex_blend *********
bool isGL_ARB_vertex_blend()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_blend;
	
	return isSupported;
}

					
void glWeightbvARB( GLint size, const GLbyte *weights )
{
	gleGetCurrent()->glWeightbvARB( size, weights );
}

					
void glWeightsvARB( GLint size, const GLshort *weights )
{
	gleGetCurrent()->glWeightsvARB( size, weights );
}

					
void glWeightivARB( GLint size, const GLint *weights )
{
	gleGetCurrent()->glWeightivARB( size, weights );
}

					
void glWeightfvARB( GLint size, const GLfloat *weights )
{
	gleGetCurrent()->glWeightfvARB( size, weights );
}

					
void glWeightdvARB( GLint size, const GLdouble *weights )
{
	gleGetCurrent()->glWeightdvARB( size, weights );
}

					
void glWeightubvARB( GLint size, const GLubyte *weights )
{
	gleGetCurrent()->glWeightubvARB( size, weights );
}

					
void glWeightusvARB( GLint size, const GLushort *weights )
{
	gleGetCurrent()->glWeightusvARB( size, weights );
}

					
void glWeightuivARB( GLint size, const GLuint *weights )
{
	gleGetCurrent()->glWeightuivARB( size, weights );
}

					
void glWeightPointerARB( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glWeightPointerARB( size, type, stride, pointer );
}

					
void glVertexBlendARB( GLint count )
{
	gleGetCurrent()->glVertexBlendARB( count );
}


// ********* GL_ARB_vertex_buffer_object *********
bool isGL_ARB_vertex_buffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_buffer_object;
	
	return isSupported;
}

					
void glBindBufferARB( GLenum target, GLuint buffer )
{
	gleGetCurrent()->glBindBufferARB( target, buffer );
}

					
void glDeleteBuffersARB( GLsizei n, const GLuint *buffers )
{
	gleGetCurrent()->glDeleteBuffersARB( n, buffers );
}

					
void glGenBuffersARB( GLsizei n, GLuint *buffers )
{
	gleGetCurrent()->glGenBuffersARB( n, buffers );
}

					
GLboolean glIsBufferARB( GLuint buffer )
{
	return ( gleGetCurrent()->glIsBufferARB( buffer) );
}

					
void glBufferDataARB( GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage )
{
	gleGetCurrent()->glBufferDataARB( target, size, data, usage );
}

					
void glBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data )
{
	gleGetCurrent()->glBufferSubDataARB( target, offset, size, data );
}

					
void glGetBufferSubDataARB( GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data )
{
	gleGetCurrent()->glGetBufferSubDataARB( target, offset, size, data );
}

					
GLvoid* glMapBufferARB( GLenum target, GLenum access )
{
	return ( gleGetCurrent()->glMapBufferARB( target, access) );
}

					
GLboolean glUnmapBufferARB( GLenum target )
{
	return ( gleGetCurrent()->glUnmapBufferARB( target) );
}

					
void glGetBufferParameterivARB( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetBufferParameterivARB( target, pname, params );
}

					
void glGetBufferPointervARB( GLenum target, GLenum pname, GLvoid* *params )
{
	gleGetCurrent()->glGetBufferPointervARB( target, pname, params );
}


// ********* GL_ARB_vertex_program *********
bool isGL_ARB_vertex_program()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_program;
	
	return isSupported;
}

					
void glVertexAttrib1dARB( GLuint index, GLdouble x )
{
	gleGetCurrent()->glVertexAttrib1dARB( index, x );
}

					
void glVertexAttrib1dvARB( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib1dvARB( index, v );
}

					
void glVertexAttrib1fARB( GLuint index, GLfloat x )
{
	gleGetCurrent()->glVertexAttrib1fARB( index, x );
}

					
void glVertexAttrib1fvARB( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib1fvARB( index, v );
}

					
void glVertexAttrib1sARB( GLuint index, GLshort x )
{
	gleGetCurrent()->glVertexAttrib1sARB( index, x );
}

					
void glVertexAttrib1svARB( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib1svARB( index, v );
}

					
void glVertexAttrib2dARB( GLuint index, GLdouble x, GLdouble y )
{
	gleGetCurrent()->glVertexAttrib2dARB( index, x, y );
}

					
void glVertexAttrib2dvARB( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib2dvARB( index, v );
}

					
void glVertexAttrib2fARB( GLuint index, GLfloat x, GLfloat y )
{
	gleGetCurrent()->glVertexAttrib2fARB( index, x, y );
}

					
void glVertexAttrib2fvARB( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib2fvARB( index, v );
}

					
void glVertexAttrib2sARB( GLuint index, GLshort x, GLshort y )
{
	gleGetCurrent()->glVertexAttrib2sARB( index, x, y );
}

					
void glVertexAttrib2svARB( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib2svARB( index, v );
}

					
void glVertexAttrib3dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z )
{
	gleGetCurrent()->glVertexAttrib3dARB( index, x, y, z );
}

					
void glVertexAttrib3dvARB( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib3dvARB( index, v );
}

					
void glVertexAttrib3fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glVertexAttrib3fARB( index, x, y, z );
}

					
void glVertexAttrib3fvARB( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib3fvARB( index, v );
}

					
void glVertexAttrib3sARB( GLuint index, GLshort x, GLshort y, GLshort z )
{
	gleGetCurrent()->glVertexAttrib3sARB( index, x, y, z );
}

					
void glVertexAttrib3svARB( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib3svARB( index, v );
}

					
void glVertexAttrib4NbvARB( GLuint index, const GLbyte *v )
{
	gleGetCurrent()->glVertexAttrib4NbvARB( index, v );
}

					
void glVertexAttrib4NivARB( GLuint index, const GLint *v )
{
	gleGetCurrent()->glVertexAttrib4NivARB( index, v );
}

					
void glVertexAttrib4NsvARB( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib4NsvARB( index, v );
}

					
void glVertexAttrib4NubARB( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w )
{
	gleGetCurrent()->glVertexAttrib4NubARB( index, x, y, z, w );
}

					
void glVertexAttrib4NubvARB( GLuint index, const GLubyte *v )
{
	gleGetCurrent()->glVertexAttrib4NubvARB( index, v );
}

					
void glVertexAttrib4NuivARB( GLuint index, const GLuint *v )
{
	gleGetCurrent()->glVertexAttrib4NuivARB( index, v );
}

					
void glVertexAttrib4NusvARB( GLuint index, const GLushort *v )
{
	gleGetCurrent()->glVertexAttrib4NusvARB( index, v );
}

					
void glVertexAttrib4bvARB( GLuint index, const GLbyte *v )
{
	gleGetCurrent()->glVertexAttrib4bvARB( index, v );
}

					
void glVertexAttrib4dARB( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	gleGetCurrent()->glVertexAttrib4dARB( index, x, y, z, w );
}

					
void glVertexAttrib4dvARB( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib4dvARB( index, v );
}

					
void glVertexAttrib4fARB( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glVertexAttrib4fARB( index, x, y, z, w );
}

					
void glVertexAttrib4fvARB( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib4fvARB( index, v );
}

					
void glVertexAttrib4ivARB( GLuint index, const GLint *v )
{
	gleGetCurrent()->glVertexAttrib4ivARB( index, v );
}

					
void glVertexAttrib4sARB( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w )
{
	gleGetCurrent()->glVertexAttrib4sARB( index, x, y, z, w );
}

					
void glVertexAttrib4svARB( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib4svARB( index, v );
}

					
void glVertexAttrib4ubvARB( GLuint index, const GLubyte *v )
{
	gleGetCurrent()->glVertexAttrib4ubvARB( index, v );
}

					
void glVertexAttrib4uivARB( GLuint index, const GLuint *v )
{
	gleGetCurrent()->glVertexAttrib4uivARB( index, v );
}

					
void glVertexAttrib4usvARB( GLuint index, const GLushort *v )
{
	gleGetCurrent()->glVertexAttrib4usvARB( index, v );
}

					
void glVertexAttribPointerARB( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glVertexAttribPointerARB( index, size, type, normalized, stride, pointer );
}

					
void glEnableVertexAttribArrayARB( GLuint index )
{
	gleGetCurrent()->glEnableVertexAttribArrayARB( index );
}

					
void glDisableVertexAttribArrayARB( GLuint index )
{
	gleGetCurrent()->glDisableVertexAttribArrayARB( index );
}

					
void glProgramStringARB( GLenum target, GLenum format, GLsizei len, const GLvoid *string )
{
	gleGetCurrent()->glProgramStringARB( target, format, len, string );
}

					
void glBindProgramARB( GLenum target, GLuint program )
{
	gleGetCurrent()->glBindProgramARB( target, program );
}

					
void glDeleteProgramsARB( GLsizei n, const GLuint *programs )
{
	gleGetCurrent()->glDeleteProgramsARB( n, programs );
}

					
void glGenProgramsARB( GLsizei n, GLuint *programs )
{
	gleGetCurrent()->glGenProgramsARB( n, programs );
}

					
void glProgramEnvParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	gleGetCurrent()->glProgramEnvParameter4dARB( target, index, x, y, z, w );
}

					
void glProgramEnvParameter4dvARB( GLenum target, GLuint index, const GLdouble *params )
{
	gleGetCurrent()->glProgramEnvParameter4dvARB( target, index, params );
}

					
void glProgramEnvParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glProgramEnvParameter4fARB( target, index, x, y, z, w );
}

					
void glProgramEnvParameter4fvARB( GLenum target, GLuint index, const GLfloat *params )
{
	gleGetCurrent()->glProgramEnvParameter4fvARB( target, index, params );
}

					
void glProgramLocalParameter4dARB( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	gleGetCurrent()->glProgramLocalParameter4dARB( target, index, x, y, z, w );
}

					
void glProgramLocalParameter4dvARB( GLenum target, GLuint index, const GLdouble *params )
{
	gleGetCurrent()->glProgramLocalParameter4dvARB( target, index, params );
}

					
void glProgramLocalParameter4fARB( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glProgramLocalParameter4fARB( target, index, x, y, z, w );
}

					
void glProgramLocalParameter4fvARB( GLenum target, GLuint index, const GLfloat *params )
{
	gleGetCurrent()->glProgramLocalParameter4fvARB( target, index, params );
}

					
void glGetProgramEnvParameterdvARB( GLenum target, GLuint index, GLdouble *params )
{
	gleGetCurrent()->glGetProgramEnvParameterdvARB( target, index, params );
}

					
void glGetProgramEnvParameterfvARB( GLenum target, GLuint index, GLfloat *params )
{
	gleGetCurrent()->glGetProgramEnvParameterfvARB( target, index, params );
}

					
void glGetProgramLocalParameterdvARB( GLenum target, GLuint index, GLdouble *params )
{
	gleGetCurrent()->glGetProgramLocalParameterdvARB( target, index, params );
}

					
void glGetProgramLocalParameterfvARB( GLenum target, GLuint index, GLfloat *params )
{
	gleGetCurrent()->glGetProgramLocalParameterfvARB( target, index, params );
}

					
void glGetProgramivARB( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetProgramivARB( target, pname, params );
}

					
void glGetProgramStringARB( GLenum target, GLenum pname, GLvoid *string )
{
	gleGetCurrent()->glGetProgramStringARB( target, pname, string );
}

					
void glGetVertexAttribdvARB( GLuint index, GLenum pname, GLdouble *params )
{
	gleGetCurrent()->glGetVertexAttribdvARB( index, pname, params );
}

					
void glGetVertexAttribfvARB( GLuint index, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetVertexAttribfvARB( index, pname, params );
}

					
void glGetVertexAttribivARB( GLuint index, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetVertexAttribivARB( index, pname, params );
}

					
void glGetVertexAttribPointervARB( GLuint index, GLenum pname, GLvoid* *pointer )
{
	gleGetCurrent()->glGetVertexAttribPointervARB( index, pname, pointer );
}

					
GLboolean glIsProgramARB( GLuint program )
{
	return ( gleGetCurrent()->glIsProgramARB( program) );
}


// ********* GL_ARB_vertex_shader *********
bool isGL_ARB_vertex_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_vertex_shader;
	
	return isSupported;
}

					
void glBindAttribLocationARB( GLhandleARB programObj, GLuint index, const GLcharARB *name )
{
	gleGetCurrent()->glBindAttribLocationARB( programObj, index, name );
}

					
void glGetActiveAttribARB( GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name )
{
	gleGetCurrent()->glGetActiveAttribARB( programObj, index, maxLength, length, size, type, name );
}

					
GLint glGetAttribLocationARB( GLhandleARB programObj, const GLcharARB *name )
{
	return ( gleGetCurrent()->glGetAttribLocationARB( programObj, name) );
}


// ********* GL_ARB_window_pos *********
bool isGL_ARB_window_pos()
{
	const bool isSupported = gleGetCurrent()->isGL_ARB_window_pos;
	
	return isSupported;
}

					
void glWindowPos2dARB( GLdouble x, GLdouble y )
{
	gleGetCurrent()->glWindowPos2dARB( x, y );
}

					
void glWindowPos2dvARB( const GLdouble *v )
{
	gleGetCurrent()->glWindowPos2dvARB( v );
}

					
void glWindowPos2fARB( GLfloat x, GLfloat y )
{
	gleGetCurrent()->glWindowPos2fARB( x, y );
}

					
void glWindowPos2fvARB( const GLfloat *v )
{
	gleGetCurrent()->glWindowPos2fvARB( v );
}

					
void glWindowPos2iARB( GLint x, GLint y )
{
	gleGetCurrent()->glWindowPos2iARB( x, y );
}

					
void glWindowPos2ivARB( const GLint *v )
{
	gleGetCurrent()->glWindowPos2ivARB( v );
}

					
void glWindowPos2sARB( GLshort x, GLshort y )
{
	gleGetCurrent()->glWindowPos2sARB( x, y );
}

					
void glWindowPos2svARB( const GLshort *v )
{
	gleGetCurrent()->glWindowPos2svARB( v );
}

					
void glWindowPos3dARB( GLdouble x, GLdouble y, GLdouble z )
{
	gleGetCurrent()->glWindowPos3dARB( x, y, z );
}

					
void glWindowPos3dvARB( const GLdouble *v )
{
	gleGetCurrent()->glWindowPos3dvARB( v );
}

					
void glWindowPos3fARB( GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glWindowPos3fARB( x, y, z );
}

					
void glWindowPos3fvARB( const GLfloat *v )
{
	gleGetCurrent()->glWindowPos3fvARB( v );
}

					
void glWindowPos3iARB( GLint x, GLint y, GLint z )
{
	gleGetCurrent()->glWindowPos3iARB( x, y, z );
}

					
void glWindowPos3ivARB( const GLint *v )
{
	gleGetCurrent()->glWindowPos3ivARB( v );
}

					
void glWindowPos3sARB( GLshort x, GLshort y, GLshort z )
{
	gleGetCurrent()->glWindowPos3sARB( x, y, z );
}

					
void glWindowPos3svARB( const GLshort *v )
{
	gleGetCurrent()->glWindowPos3svARB( v );
}


// ********* GL_ATI_draw_buffers *********
bool isGL_ATI_draw_buffers()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_draw_buffers;
	
	return isSupported;
}

					
void glDrawBuffersATI( GLsizei n, const GLenum *bufs )
{
	gleGetCurrent()->glDrawBuffersATI( n, bufs );
}


// ********* GL_ATI_element_array *********
bool isGL_ATI_element_array()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_element_array;
	
	return isSupported;
}

					
void glElementPointerATI( GLenum type, const GLvoid *pointer )
{
	gleGetCurrent()->glElementPointerATI( type, pointer );
}

					
void glDrawElementArrayATI( GLenum mode, GLsizei count )
{
	gleGetCurrent()->glDrawElementArrayATI( mode, count );
}

					
void glDrawRangeElementArrayATI( GLenum mode, GLuint start, GLuint end, GLsizei count )
{
	gleGetCurrent()->glDrawRangeElementArrayATI( mode, start, end, count );
}


// ********* GL_ATI_envmap_bumpmap *********
bool isGL_ATI_envmap_bumpmap()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_envmap_bumpmap;
	
	return isSupported;
}

					
void glTexBumpParameterivATI( GLenum pname, const GLint *param )
{
	gleGetCurrent()->glTexBumpParameterivATI( pname, param );
}

					
void glTexBumpParameterfvATI( GLenum pname, const GLfloat *param )
{
	gleGetCurrent()->glTexBumpParameterfvATI( pname, param );
}

					
void glGetTexBumpParameterivATI( GLenum pname, GLint *param )
{
	gleGetCurrent()->glGetTexBumpParameterivATI( pname, param );
}

					
void glGetTexBumpParameterfvATI( GLenum pname, GLfloat *param )
{
	gleGetCurrent()->glGetTexBumpParameterfvATI( pname, param );
}


// ********* GL_ATI_fragment_shader *********
bool isGL_ATI_fragment_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_fragment_shader;
	
	return isSupported;
}

					
GLuint glGenFragmentShadersATI( GLuint range )
{
	return ( gleGetCurrent()->glGenFragmentShadersATI( range) );
}

					
void glBindFragmentShaderATI( GLuint id )
{
	gleGetCurrent()->glBindFragmentShaderATI( id );
}

					
void glDeleteFragmentShaderATI( GLuint id )
{
	gleGetCurrent()->glDeleteFragmentShaderATI( id );
}

					
void glBeginFragmentShaderATI( void )
{
	gleGetCurrent()->glBeginFragmentShaderATI(  );
}

					
void glEndFragmentShaderATI( void )
{
	gleGetCurrent()->glEndFragmentShaderATI(  );
}

					
void glPassTexCoordATI( GLuint dst, GLuint coord, GLenum swizzle )
{
	gleGetCurrent()->glPassTexCoordATI( dst, coord, swizzle );
}

					
void glSampleMapATI( GLuint dst, GLuint interp, GLenum swizzle )
{
	gleGetCurrent()->glSampleMapATI( dst, interp, swizzle );
}

					
void glColorFragmentOp1ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod )
{
	gleGetCurrent()->glColorFragmentOp1ATI( op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod );
}

					
void glColorFragmentOp2ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod )
{
	gleGetCurrent()->glColorFragmentOp2ATI( op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod );
}

					
void glColorFragmentOp3ATI( GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod )
{
	gleGetCurrent()->glColorFragmentOp3ATI( op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod );
}

					
void glAlphaFragmentOp1ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod )
{
	gleGetCurrent()->glAlphaFragmentOp1ATI( op, dst, dstMod, arg1, arg1Rep, arg1Mod );
}

					
void glAlphaFragmentOp2ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod )
{
	gleGetCurrent()->glAlphaFragmentOp2ATI( op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod );
}

					
void glAlphaFragmentOp3ATI( GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod )
{
	gleGetCurrent()->glAlphaFragmentOp3ATI( op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod );
}

					
void glSetFragmentShaderConstantATI( GLuint dst, const GLfloat *value )
{
	gleGetCurrent()->glSetFragmentShaderConstantATI( dst, value );
}


// ********* GL_ATI_map_object_buffer *********
bool isGL_ATI_map_object_buffer()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_map_object_buffer;
	
	return isSupported;
}

					
GLvoid* glMapObjectBufferATI( GLuint buffer )
{
	return ( gleGetCurrent()->glMapObjectBufferATI( buffer) );
}

					
void glUnmapObjectBufferATI( GLuint buffer )
{
	gleGetCurrent()->glUnmapObjectBufferATI( buffer );
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

					
void glPNTrianglesiATI( GLenum pname, GLint param )
{
	gleGetCurrent()->glPNTrianglesiATI( pname, param );
}

					
void glPNTrianglesfATI( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glPNTrianglesfATI( pname, param );
}


// ********* GL_ATI_separate_stencil *********
bool isGL_ATI_separate_stencil()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_separate_stencil;
	
	return isSupported;
}

					
void glStencilOpSeparateATI( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass )
{
	gleGetCurrent()->glStencilOpSeparateATI( face, sfail, dpfail, dppass );
}

					
void glStencilFuncSeparateATI( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask )
{
	gleGetCurrent()->glStencilFuncSeparateATI( frontfunc, backfunc, ref, mask );
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

					
GLuint glNewObjectBufferATI( GLsizei size, const GLvoid *pointer, GLenum usage )
{
	return ( gleGetCurrent()->glNewObjectBufferATI( size, pointer, usage) );
}

					
GLboolean glIsObjectBufferATI( GLuint buffer )
{
	return ( gleGetCurrent()->glIsObjectBufferATI( buffer) );
}

					
void glUpdateObjectBufferATI( GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve )
{
	gleGetCurrent()->glUpdateObjectBufferATI( buffer, offset, size, pointer, preserve );
}

					
void glGetObjectBufferfvATI( GLuint buffer, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetObjectBufferfvATI( buffer, pname, params );
}

					
void glGetObjectBufferivATI( GLuint buffer, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetObjectBufferivATI( buffer, pname, params );
}

					
void glFreeObjectBufferATI( GLuint buffer )
{
	gleGetCurrent()->glFreeObjectBufferATI( buffer );
}

					
void glArrayObjectATI( GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset )
{
	gleGetCurrent()->glArrayObjectATI( array, size, type, stride, buffer, offset );
}

					
void glGetArrayObjectfvATI( GLenum array, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetArrayObjectfvATI( array, pname, params );
}

					
void glGetArrayObjectivATI( GLenum array, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetArrayObjectivATI( array, pname, params );
}

					
void glVariantArrayObjectATI( GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset )
{
	gleGetCurrent()->glVariantArrayObjectATI( id, type, stride, buffer, offset );
}

					
void glGetVariantArrayObjectfvATI( GLuint id, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetVariantArrayObjectfvATI( id, pname, params );
}

					
void glGetVariantArrayObjectivATI( GLuint id, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetVariantArrayObjectivATI( id, pname, params );
}


// ********* GL_ATI_vertex_attrib_array_object *********
bool isGL_ATI_vertex_attrib_array_object()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_vertex_attrib_array_object;
	
	return isSupported;
}

					
void glVertexAttribArrayObjectATI( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset )
{
	gleGetCurrent()->glVertexAttribArrayObjectATI( index, size, type, normalized, stride, buffer, offset );
}

					
void glGetVertexAttribArrayObjectfvATI( GLuint index, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetVertexAttribArrayObjectfvATI( index, pname, params );
}

					
void glGetVertexAttribArrayObjectivATI( GLuint index, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetVertexAttribArrayObjectivATI( index, pname, params );
}


// ********* GL_ATI_vertex_streams *********
bool isGL_ATI_vertex_streams()
{
	const bool isSupported = gleGetCurrent()->isGL_ATI_vertex_streams;
	
	return isSupported;
}

					
void glVertexStream1sATI( GLenum stream, GLshort x )
{
	gleGetCurrent()->glVertexStream1sATI( stream, x );
}

					
void glVertexStream1svATI( GLenum stream, const GLshort *coords )
{
	gleGetCurrent()->glVertexStream1svATI( stream, coords );
}

					
void glVertexStream1iATI( GLenum stream, GLint x )
{
	gleGetCurrent()->glVertexStream1iATI( stream, x );
}

					
void glVertexStream1ivATI( GLenum stream, const GLint *coords )
{
	gleGetCurrent()->glVertexStream1ivATI( stream, coords );
}

					
void glVertexStream1fATI( GLenum stream, GLfloat x )
{
	gleGetCurrent()->glVertexStream1fATI( stream, x );
}

					
void glVertexStream1fvATI( GLenum stream, const GLfloat *coords )
{
	gleGetCurrent()->glVertexStream1fvATI( stream, coords );
}

					
void glVertexStream1dATI( GLenum stream, GLdouble x )
{
	gleGetCurrent()->glVertexStream1dATI( stream, x );
}

					
void glVertexStream1dvATI( GLenum stream, const GLdouble *coords )
{
	gleGetCurrent()->glVertexStream1dvATI( stream, coords );
}

					
void glVertexStream2sATI( GLenum stream, GLshort x, GLshort y )
{
	gleGetCurrent()->glVertexStream2sATI( stream, x, y );
}

					
void glVertexStream2svATI( GLenum stream, const GLshort *coords )
{
	gleGetCurrent()->glVertexStream2svATI( stream, coords );
}

					
void glVertexStream2iATI( GLenum stream, GLint x, GLint y )
{
	gleGetCurrent()->glVertexStream2iATI( stream, x, y );
}

					
void glVertexStream2ivATI( GLenum stream, const GLint *coords )
{
	gleGetCurrent()->glVertexStream2ivATI( stream, coords );
}

					
void glVertexStream2fATI( GLenum stream, GLfloat x, GLfloat y )
{
	gleGetCurrent()->glVertexStream2fATI( stream, x, y );
}

					
void glVertexStream2fvATI( GLenum stream, const GLfloat *coords )
{
	gleGetCurrent()->glVertexStream2fvATI( stream, coords );
}

					
void glVertexStream2dATI( GLenum stream, GLdouble x, GLdouble y )
{
	gleGetCurrent()->glVertexStream2dATI( stream, x, y );
}

					
void glVertexStream2dvATI( GLenum stream, const GLdouble *coords )
{
	gleGetCurrent()->glVertexStream2dvATI( stream, coords );
}

					
void glVertexStream3sATI( GLenum stream, GLshort x, GLshort y, GLshort z )
{
	gleGetCurrent()->glVertexStream3sATI( stream, x, y, z );
}

					
void glVertexStream3svATI( GLenum stream, const GLshort *coords )
{
	gleGetCurrent()->glVertexStream3svATI( stream, coords );
}

					
void glVertexStream3iATI( GLenum stream, GLint x, GLint y, GLint z )
{
	gleGetCurrent()->glVertexStream3iATI( stream, x, y, z );
}

					
void glVertexStream3ivATI( GLenum stream, const GLint *coords )
{
	gleGetCurrent()->glVertexStream3ivATI( stream, coords );
}

					
void glVertexStream3fATI( GLenum stream, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glVertexStream3fATI( stream, x, y, z );
}

					
void glVertexStream3fvATI( GLenum stream, const GLfloat *coords )
{
	gleGetCurrent()->glVertexStream3fvATI( stream, coords );
}

					
void glVertexStream3dATI( GLenum stream, GLdouble x, GLdouble y, GLdouble z )
{
	gleGetCurrent()->glVertexStream3dATI( stream, x, y, z );
}

					
void glVertexStream3dvATI( GLenum stream, const GLdouble *coords )
{
	gleGetCurrent()->glVertexStream3dvATI( stream, coords );
}

					
void glVertexStream4sATI( GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w )
{
	gleGetCurrent()->glVertexStream4sATI( stream, x, y, z, w );
}

					
void glVertexStream4svATI( GLenum stream, const GLshort *coords )
{
	gleGetCurrent()->glVertexStream4svATI( stream, coords );
}

					
void glVertexStream4iATI( GLenum stream, GLint x, GLint y, GLint z, GLint w )
{
	gleGetCurrent()->glVertexStream4iATI( stream, x, y, z, w );
}

					
void glVertexStream4ivATI( GLenum stream, const GLint *coords )
{
	gleGetCurrent()->glVertexStream4ivATI( stream, coords );
}

					
void glVertexStream4fATI( GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glVertexStream4fATI( stream, x, y, z, w );
}

					
void glVertexStream4fvATI( GLenum stream, const GLfloat *coords )
{
	gleGetCurrent()->glVertexStream4fvATI( stream, coords );
}

					
void glVertexStream4dATI( GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	gleGetCurrent()->glVertexStream4dATI( stream, x, y, z, w );
}

					
void glVertexStream4dvATI( GLenum stream, const GLdouble *coords )
{
	gleGetCurrent()->glVertexStream4dvATI( stream, coords );
}

					
void glNormalStream3bATI( GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz )
{
	gleGetCurrent()->glNormalStream3bATI( stream, nx, ny, nz );
}

					
void glNormalStream3bvATI( GLenum stream, const GLbyte *coords )
{
	gleGetCurrent()->glNormalStream3bvATI( stream, coords );
}

					
void glNormalStream3sATI( GLenum stream, GLshort nx, GLshort ny, GLshort nz )
{
	gleGetCurrent()->glNormalStream3sATI( stream, nx, ny, nz );
}

					
void glNormalStream3svATI( GLenum stream, const GLshort *coords )
{
	gleGetCurrent()->glNormalStream3svATI( stream, coords );
}

					
void glNormalStream3iATI( GLenum stream, GLint nx, GLint ny, GLint nz )
{
	gleGetCurrent()->glNormalStream3iATI( stream, nx, ny, nz );
}

					
void glNormalStream3ivATI( GLenum stream, const GLint *coords )
{
	gleGetCurrent()->glNormalStream3ivATI( stream, coords );
}

					
void glNormalStream3fATI( GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz )
{
	gleGetCurrent()->glNormalStream3fATI( stream, nx, ny, nz );
}

					
void glNormalStream3fvATI( GLenum stream, const GLfloat *coords )
{
	gleGetCurrent()->glNormalStream3fvATI( stream, coords );
}

					
void glNormalStream3dATI( GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz )
{
	gleGetCurrent()->glNormalStream3dATI( stream, nx, ny, nz );
}

					
void glNormalStream3dvATI( GLenum stream, const GLdouble *coords )
{
	gleGetCurrent()->glNormalStream3dvATI( stream, coords );
}

					
void glClientActiveVertexStreamATI( GLenum stream )
{
	gleGetCurrent()->glClientActiveVertexStreamATI( stream );
}

					
void glVertexBlendEnviATI( GLenum pname, GLint param )
{
	gleGetCurrent()->glVertexBlendEnviATI( pname, param );
}

					
void glVertexBlendEnvfATI( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glVertexBlendEnvfATI( pname, param );
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

					
void glUniformBufferEXT( GLuint program, GLint location, GLuint buffer )
{
	gleGetCurrent()->glUniformBufferEXT( program, location, buffer );
}

					
GLint glGetUniformBufferSizeEXT( GLuint program, GLint location )
{
	return ( gleGetCurrent()->glGetUniformBufferSizeEXT( program, location) );
}

					
GLintptr glGetUniformOffsetEXT( GLuint program, GLint location )
{
	return ( gleGetCurrent()->glGetUniformOffsetEXT( program, location) );
}


// ********* GL_EXT_blend_color *********
bool isGL_EXT_blend_color()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_blend_color;
	
	return isSupported;
}

					
void glBlendColorEXT( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha )
{
	gleGetCurrent()->glBlendColorEXT( red, green, blue, alpha );
}


// ********* GL_EXT_blend_equation_separate *********
bool isGL_EXT_blend_equation_separate()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_blend_equation_separate;
	
	return isSupported;
}

					
void glBlendEquationSeparateEXT( GLenum modeRGB, GLenum modeAlpha )
{
	gleGetCurrent()->glBlendEquationSeparateEXT( modeRGB, modeAlpha );
}


// ********* GL_EXT_blend_func_separate *********
bool isGL_EXT_blend_func_separate()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_blend_func_separate;
	
	return isSupported;
}

					
void glBlendFuncSeparateEXT( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha )
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

					
void glBlendEquationEXT( GLenum mode )
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

					
void glColorSubTableEXT( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data )
{
	gleGetCurrent()->glColorSubTableEXT( target, start, count, format, type, data );
}

					
void glCopyColorSubTableEXT( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width )
{
	gleGetCurrent()->glCopyColorSubTableEXT( target, start, x, y, width );
}


// ********* GL_EXT_compiled_vertex_array *********
bool isGL_EXT_compiled_vertex_array()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_compiled_vertex_array;
	
	return isSupported;
}

					
void glLockArraysEXT( GLint first, GLsizei count )
{
	gleGetCurrent()->glLockArraysEXT( first, count );
}

					
void glUnlockArraysEXT( void )
{
	gleGetCurrent()->glUnlockArraysEXT(  );
}


// ********* GL_EXT_convolution *********
bool isGL_EXT_convolution()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_convolution;
	
	return isSupported;
}

					
void glConvolutionFilter1DEXT( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image )
{
	gleGetCurrent()->glConvolutionFilter1DEXT( target, internalformat, width, format, type, image );
}

					
void glConvolutionFilter2DEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image )
{
	gleGetCurrent()->glConvolutionFilter2DEXT( target, internalformat, width, height, format, type, image );
}

					
void glConvolutionParameterfEXT( GLenum target, GLenum pname, GLfloat params )
{
	gleGetCurrent()->glConvolutionParameterfEXT( target, pname, params );
}

					
void glConvolutionParameterfvEXT( GLenum target, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glConvolutionParameterfvEXT( target, pname, params );
}

					
void glConvolutionParameteriEXT( GLenum target, GLenum pname, GLint params )
{
	gleGetCurrent()->glConvolutionParameteriEXT( target, pname, params );
}

					
void glConvolutionParameterivEXT( GLenum target, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glConvolutionParameterivEXT( target, pname, params );
}

					
void glCopyConvolutionFilter1DEXT( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width )
{
	gleGetCurrent()->glCopyConvolutionFilter1DEXT( target, internalformat, x, y, width );
}

					
void glCopyConvolutionFilter2DEXT( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height )
{
	gleGetCurrent()->glCopyConvolutionFilter2DEXT( target, internalformat, x, y, width, height );
}

					
void glGetConvolutionFilterEXT( GLenum target, GLenum format, GLenum type, GLvoid *image )
{
	gleGetCurrent()->glGetConvolutionFilterEXT( target, format, type, image );
}

					
void glGetConvolutionParameterfvEXT( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetConvolutionParameterfvEXT( target, pname, params );
}

					
void glGetConvolutionParameterivEXT( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetConvolutionParameterivEXT( target, pname, params );
}

					
void glGetSeparableFilterEXT( GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span )
{
	gleGetCurrent()->glGetSeparableFilterEXT( target, format, type, row, column, span );
}

					
void glSeparableFilter2DEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column )
{
	gleGetCurrent()->glSeparableFilter2DEXT( target, internalformat, width, height, format, type, row, column );
}


// ********* GL_EXT_coordinate_frame *********
bool isGL_EXT_coordinate_frame()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_coordinate_frame;
	
	return isSupported;
}

					
void glTangent3bEXT( GLbyte tx, GLbyte ty, GLbyte tz )
{
	gleGetCurrent()->glTangent3bEXT( tx, ty, tz );
}

					
void glTangent3bvEXT( const GLbyte *v )
{
	gleGetCurrent()->glTangent3bvEXT( v );
}

					
void glTangent3dEXT( GLdouble tx, GLdouble ty, GLdouble tz )
{
	gleGetCurrent()->glTangent3dEXT( tx, ty, tz );
}

					
void glTangent3dvEXT( const GLdouble *v )
{
	gleGetCurrent()->glTangent3dvEXT( v );
}

					
void glTangent3fEXT( GLfloat tx, GLfloat ty, GLfloat tz )
{
	gleGetCurrent()->glTangent3fEXT( tx, ty, tz );
}

					
void glTangent3fvEXT( const GLfloat *v )
{
	gleGetCurrent()->glTangent3fvEXT( v );
}

					
void glTangent3iEXT( GLint tx, GLint ty, GLint tz )
{
	gleGetCurrent()->glTangent3iEXT( tx, ty, tz );
}

					
void glTangent3ivEXT( const GLint *v )
{
	gleGetCurrent()->glTangent3ivEXT( v );
}

					
void glTangent3sEXT( GLshort tx, GLshort ty, GLshort tz )
{
	gleGetCurrent()->glTangent3sEXT( tx, ty, tz );
}

					
void glTangent3svEXT( const GLshort *v )
{
	gleGetCurrent()->glTangent3svEXT( v );
}

					
void glBinormal3bEXT( GLbyte bx, GLbyte by, GLbyte bz )
{
	gleGetCurrent()->glBinormal3bEXT( bx, by, bz );
}

					
void glBinormal3bvEXT( const GLbyte *v )
{
	gleGetCurrent()->glBinormal3bvEXT( v );
}

					
void glBinormal3dEXT( GLdouble bx, GLdouble by, GLdouble bz )
{
	gleGetCurrent()->glBinormal3dEXT( bx, by, bz );
}

					
void glBinormal3dvEXT( const GLdouble *v )
{
	gleGetCurrent()->glBinormal3dvEXT( v );
}

					
void glBinormal3fEXT( GLfloat bx, GLfloat by, GLfloat bz )
{
	gleGetCurrent()->glBinormal3fEXT( bx, by, bz );
}

					
void glBinormal3fvEXT( const GLfloat *v )
{
	gleGetCurrent()->glBinormal3fvEXT( v );
}

					
void glBinormal3iEXT( GLint bx, GLint by, GLint bz )
{
	gleGetCurrent()->glBinormal3iEXT( bx, by, bz );
}

					
void glBinormal3ivEXT( const GLint *v )
{
	gleGetCurrent()->glBinormal3ivEXT( v );
}

					
void glBinormal3sEXT( GLshort bx, GLshort by, GLshort bz )
{
	gleGetCurrent()->glBinormal3sEXT( bx, by, bz );
}

					
void glBinormal3svEXT( const GLshort *v )
{
	gleGetCurrent()->glBinormal3svEXT( v );
}

					
void glTangentPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glTangentPointerEXT( type, stride, pointer );
}

					
void glBinormalPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glBinormalPointerEXT( type, stride, pointer );
}


// ********* GL_EXT_copy_texture *********
bool isGL_EXT_copy_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_copy_texture;
	
	return isSupported;
}

					
void glCopyTexImage1DEXT( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border )
{
	gleGetCurrent()->glCopyTexImage1DEXT( target, level, internalformat, x, y, width, border );
}

					
void glCopyTexImage2DEXT( GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border )
{
	gleGetCurrent()->glCopyTexImage2DEXT( target, level, internalformat, x, y, width, height, border );
}

					
void glCopyTexSubImage1DEXT( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width )
{
	gleGetCurrent()->glCopyTexSubImage1DEXT( target, level, xoffset, x, y, width );
}

					
void glCopyTexSubImage2DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height )
{
	gleGetCurrent()->glCopyTexSubImage2DEXT( target, level, xoffset, yoffset, x, y, width, height );
}

					
void glCopyTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height )
{
	gleGetCurrent()->glCopyTexSubImage3DEXT( target, level, xoffset, yoffset, zoffset, x, y, width, height );
}


// ********* GL_EXT_cull_vertex *********
bool isGL_EXT_cull_vertex()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_cull_vertex;
	
	return isSupported;
}

					
void glCullParameterdvEXT( GLenum pname, GLdouble *params )
{
	gleGetCurrent()->glCullParameterdvEXT( pname, params );
}

					
void glCullParameterfvEXT( GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glCullParameterfvEXT( pname, params );
}


// ********* GL_EXT_depth_bounds_test *********
bool isGL_EXT_depth_bounds_test()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_depth_bounds_test;
	
	return isSupported;
}

					
void glDepthBoundsEXT( GLclampd zmin, GLclampd zmax )
{
	gleGetCurrent()->glDepthBoundsEXT( zmin, zmax );
}


// ********* GL_EXT_draw_buffers2 *********
bool isGL_EXT_draw_buffers2()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_draw_buffers2;
	
	return isSupported;
}

					
void glColorMaskIndexedEXT( GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a )
{
	gleGetCurrent()->glColorMaskIndexedEXT( index, r, g, b, a );
}

					
void glGetBooleanIndexedvEXT( GLenum target, GLuint index, GLboolean *data )
{
	gleGetCurrent()->glGetBooleanIndexedvEXT( target, index, data );
}

					
void glGetIntegerIndexedvEXT( GLenum target, GLuint index, GLint *data )
{
	gleGetCurrent()->glGetIntegerIndexedvEXT( target, index, data );
}

					
void glEnableIndexedEXT( GLenum target, GLuint index )
{
	gleGetCurrent()->glEnableIndexedEXT( target, index );
}

					
void glDisableIndexedEXT( GLenum target, GLuint index )
{
	gleGetCurrent()->glDisableIndexedEXT( target, index );
}

					
GLboolean glIsEnabledIndexedEXT( GLenum target, GLuint index )
{
	return ( gleGetCurrent()->glIsEnabledIndexedEXT( target, index) );
}


// ********* GL_EXT_draw_instanced *********
bool isGL_EXT_draw_instanced()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_draw_instanced;
	
	return isSupported;
}

					
void glDrawArraysInstancedEXT( GLenum mode, GLint start, GLsizei count, GLsizei primcount )
{
	gleGetCurrent()->glDrawArraysInstancedEXT( mode, start, count, primcount );
}

					
void glDrawElementsInstancedEXT( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount )
{
	gleGetCurrent()->glDrawElementsInstancedEXT( mode, count, type, indices, primcount );
}


// ********* GL_EXT_draw_range_elements *********
bool isGL_EXT_draw_range_elements()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_draw_range_elements;
	
	return isSupported;
}

					
void glDrawRangeElementsEXT( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices )
{
	gleGetCurrent()->glDrawRangeElementsEXT( mode, start, end, count, type, indices );
}


// ********* GL_EXT_fog_coord *********
bool isGL_EXT_fog_coord()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_fog_coord;
	
	return isSupported;
}

					
void glFogCoordfEXT( GLfloat coord )
{
	gleGetCurrent()->glFogCoordfEXT( coord );
}

					
void glFogCoordfvEXT( const GLfloat *coord )
{
	gleGetCurrent()->glFogCoordfvEXT( coord );
}

					
void glFogCoorddEXT( GLdouble coord )
{
	gleGetCurrent()->glFogCoorddEXT( coord );
}

					
void glFogCoorddvEXT( const GLdouble *coord )
{
	gleGetCurrent()->glFogCoorddvEXT( coord );
}

					
void glFogCoordPointerEXT( GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glFogCoordPointerEXT( type, stride, pointer );
}


// ********* GL_EXT_framebuffer_blit *********
bool isGL_EXT_framebuffer_blit()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_framebuffer_blit;
	
	return isSupported;
}

					
void glBlitFramebufferEXT( GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter )
{
	gleGetCurrent()->glBlitFramebufferEXT( srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter );
}


// ********* GL_EXT_framebuffer_multisample *********
bool isGL_EXT_framebuffer_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_framebuffer_multisample;
	
	return isSupported;
}

					
void glRenderbufferStorageMultisampleEXT( GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height )
{
	gleGetCurrent()->glRenderbufferStorageMultisampleEXT( target, samples, internalformat, width, height );
}


// ********* GL_EXT_framebuffer_object *********
bool isGL_EXT_framebuffer_object()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_framebuffer_object;
	
	return isSupported;
}

					
GLboolean glIsRenderbufferEXT( GLuint renderbuffer )
{
	return ( gleGetCurrent()->glIsRenderbufferEXT( renderbuffer) );
}

					
void glBindRenderbufferEXT( GLenum target, GLuint renderbuffer )
{
	gleGetCurrent()->glBindRenderbufferEXT( target, renderbuffer );
}

					
void glDeleteRenderbuffersEXT( GLsizei n, const GLuint *renderbuffers )
{
	gleGetCurrent()->glDeleteRenderbuffersEXT( n, renderbuffers );
}

					
void glGenRenderbuffersEXT( GLsizei n, GLuint *renderbuffers )
{
	gleGetCurrent()->glGenRenderbuffersEXT( n, renderbuffers );
}

					
void glRenderbufferStorageEXT( GLenum target, GLenum internalformat, GLsizei width, GLsizei height )
{
	gleGetCurrent()->glRenderbufferStorageEXT( target, internalformat, width, height );
}

					
void glGetRenderbufferParameterivEXT( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetRenderbufferParameterivEXT( target, pname, params );
}

					
GLboolean glIsFramebufferEXT( GLuint framebuffer )
{
	return ( gleGetCurrent()->glIsFramebufferEXT( framebuffer) );
}

					
void glBindFramebufferEXT( GLenum target, GLuint framebuffer )
{
	gleGetCurrent()->glBindFramebufferEXT( target, framebuffer );
}

					
void glDeleteFramebuffersEXT( GLsizei n, const GLuint *framebuffers )
{
	gleGetCurrent()->glDeleteFramebuffersEXT( n, framebuffers );
}

					
void glGenFramebuffersEXT( GLsizei n, GLuint *framebuffers )
{
	gleGetCurrent()->glGenFramebuffersEXT( n, framebuffers );
}

					
GLenum glCheckFramebufferStatusEXT( GLenum target )
{
	return ( gleGetCurrent()->glCheckFramebufferStatusEXT( target) );
}

					
void glFramebufferTexture1DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level )
{
	gleGetCurrent()->glFramebufferTexture1DEXT( target, attachment, textarget, texture, level );
}

					
void glFramebufferTexture2DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level )
{
	gleGetCurrent()->glFramebufferTexture2DEXT( target, attachment, textarget, texture, level );
}

					
void glFramebufferTexture3DEXT( GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset )
{
	gleGetCurrent()->glFramebufferTexture3DEXT( target, attachment, textarget, texture, level, zoffset );
}

					
void glFramebufferRenderbufferEXT( GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer )
{
	gleGetCurrent()->glFramebufferRenderbufferEXT( target, attachment, renderbuffertarget, renderbuffer );
}

					
void glGetFramebufferAttachmentParameterivEXT( GLenum target, GLenum attachment, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetFramebufferAttachmentParameterivEXT( target, attachment, pname, params );
}

					
void glGenerateMipmapEXT( GLenum target )
{
	gleGetCurrent()->glGenerateMipmapEXT( target );
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

					
void glProgramParameteriEXT( GLuint program, GLenum pname, GLint value )
{
	gleGetCurrent()->glProgramParameteriEXT( program, pname, value );
}


// ********* GL_EXT_gpu_program_parameters *********
bool isGL_EXT_gpu_program_parameters()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_gpu_program_parameters;
	
	return isSupported;
}

					
void glProgramEnvParameters4fvEXT( GLenum target, GLuint index, GLsizei count, const GLfloat *params )
{
	gleGetCurrent()->glProgramEnvParameters4fvEXT( target, index, count, params );
}

					
void glProgramLocalParameters4fvEXT( GLenum target, GLuint index, GLsizei count, const GLfloat *params )
{
	gleGetCurrent()->glProgramLocalParameters4fvEXT( target, index, count, params );
}


// ********* GL_EXT_gpu_shader4 *********
bool isGL_EXT_gpu_shader4()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_gpu_shader4;
	
	return isSupported;
}

					
void glGetUniformuivEXT( GLuint program, GLint location, GLuint *params )
{
	gleGetCurrent()->glGetUniformuivEXT( program, location, params );
}

					
void glBindFragDataLocationEXT( GLuint program, GLuint color, const GLchar *name )
{
	gleGetCurrent()->glBindFragDataLocationEXT( program, color, name );
}

					
GLint glGetFragDataLocationEXT( GLuint program, const GLchar *name )
{
	return ( gleGetCurrent()->glGetFragDataLocationEXT( program, name) );
}

					
void glUniform1uiEXT( GLint location, GLuint v0 )
{
	gleGetCurrent()->glUniform1uiEXT( location, v0 );
}

					
void glUniform2uiEXT( GLint location, GLuint v0, GLuint v1 )
{
	gleGetCurrent()->glUniform2uiEXT( location, v0, v1 );
}

					
void glUniform3uiEXT( GLint location, GLuint v0, GLuint v1, GLuint v2 )
{
	gleGetCurrent()->glUniform3uiEXT( location, v0, v1, v2 );
}

					
void glUniform4uiEXT( GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3 )
{
	gleGetCurrent()->glUniform4uiEXT( location, v0, v1, v2, v3 );
}

					
void glUniform1uivEXT( GLint location, GLsizei count, const GLuint *value )
{
	gleGetCurrent()->glUniform1uivEXT( location, count, value );
}

					
void glUniform2uivEXT( GLint location, GLsizei count, const GLuint *value )
{
	gleGetCurrent()->glUniform2uivEXT( location, count, value );
}

					
void glUniform3uivEXT( GLint location, GLsizei count, const GLuint *value )
{
	gleGetCurrent()->glUniform3uivEXT( location, count, value );
}

					
void glUniform4uivEXT( GLint location, GLsizei count, const GLuint *value )
{
	gleGetCurrent()->glUniform4uivEXT( location, count, value );
}


// ********* GL_EXT_histogram *********
bool isGL_EXT_histogram()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_histogram;
	
	return isSupported;
}

					
void glGetHistogramEXT( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values )
{
	gleGetCurrent()->glGetHistogramEXT( target, reset, format, type, values );
}

					
void glGetHistogramParameterfvEXT( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetHistogramParameterfvEXT( target, pname, params );
}

					
void glGetHistogramParameterivEXT( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetHistogramParameterivEXT( target, pname, params );
}

					
void glGetMinmaxEXT( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values )
{
	gleGetCurrent()->glGetMinmaxEXT( target, reset, format, type, values );
}

					
void glGetMinmaxParameterfvEXT( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetMinmaxParameterfvEXT( target, pname, params );
}

					
void glGetMinmaxParameterivEXT( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetMinmaxParameterivEXT( target, pname, params );
}

					
void glHistogramEXT( GLenum target, GLsizei width, GLenum internalformat, GLboolean sink )
{
	gleGetCurrent()->glHistogramEXT( target, width, internalformat, sink );
}

					
void glMinmaxEXT( GLenum target, GLenum internalformat, GLboolean sink )
{
	gleGetCurrent()->glMinmaxEXT( target, internalformat, sink );
}

					
void glResetHistogramEXT( GLenum target )
{
	gleGetCurrent()->glResetHistogramEXT( target );
}

					
void glResetMinmaxEXT( GLenum target )
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

					
void glIndexFuncEXT( GLenum func, GLclampf ref )
{
	gleGetCurrent()->glIndexFuncEXT( func, ref );
}


// ********* GL_EXT_index_material *********
bool isGL_EXT_index_material()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_index_material;
	
	return isSupported;
}

					
void glIndexMaterialEXT( GLenum face, GLenum mode )
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

					
void glApplyTextureEXT( GLenum mode )
{
	gleGetCurrent()->glApplyTextureEXT( mode );
}

					
void glTextureLightEXT( GLenum pname )
{
	gleGetCurrent()->glTextureLightEXT( pname );
}

					
void glTextureMaterialEXT( GLenum face, GLenum mode )
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

					
void glMultiDrawArraysEXT( GLenum mode, GLint *first, GLsizei *count, GLsizei primcount )
{
	gleGetCurrent()->glMultiDrawArraysEXT( mode, first, count, primcount );
}

					
void glMultiDrawElementsEXT( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount )
{
	gleGetCurrent()->glMultiDrawElementsEXT( mode, count, type, indices, primcount );
}


// ********* GL_EXT_multisample *********
bool isGL_EXT_multisample()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_multisample;
	
	return isSupported;
}

					
void glSampleMaskEXT( GLclampf value, GLboolean invert )
{
	gleGetCurrent()->glSampleMaskEXT( value, invert );
}

					
void glSamplePatternEXT( GLenum pattern )
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

					
void glColorTableEXT( GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table )
{
	gleGetCurrent()->glColorTableEXT( target, internalFormat, width, format, type, table );
}

					
void glGetColorTableEXT( GLenum target, GLenum format, GLenum type, GLvoid *data )
{
	gleGetCurrent()->glGetColorTableEXT( target, format, type, data );
}

					
void glGetColorTableParameterivEXT( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetColorTableParameterivEXT( target, pname, params );
}

					
void glGetColorTableParameterfvEXT( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetColorTableParameterfvEXT( target, pname, params );
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

					
void glPixelTransformParameteriEXT( GLenum target, GLenum pname, GLint param )
{
	gleGetCurrent()->glPixelTransformParameteriEXT( target, pname, param );
}

					
void glPixelTransformParameterfEXT( GLenum target, GLenum pname, GLfloat param )
{
	gleGetCurrent()->glPixelTransformParameterfEXT( target, pname, param );
}

					
void glPixelTransformParameterivEXT( GLenum target, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glPixelTransformParameterivEXT( target, pname, params );
}

					
void glPixelTransformParameterfvEXT( GLenum target, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glPixelTransformParameterfvEXT( target, pname, params );
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

					
void glPointParameterfEXT( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glPointParameterfEXT( pname, param );
}

					
void glPointParameterfvEXT( GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glPointParameterfvEXT( pname, params );
}


// ********* GL_EXT_polygon_offset *********
bool isGL_EXT_polygon_offset()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_polygon_offset;
	
	return isSupported;
}

					
void glPolygonOffsetEXT( GLfloat factor, GLfloat bias )
{
	gleGetCurrent()->glPolygonOffsetEXT( factor, bias );
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

					
void glSecondaryColor3bEXT( GLbyte red, GLbyte green, GLbyte blue )
{
	gleGetCurrent()->glSecondaryColor3bEXT( red, green, blue );
}

					
void glSecondaryColor3bvEXT( const GLbyte *v )
{
	gleGetCurrent()->glSecondaryColor3bvEXT( v );
}

					
void glSecondaryColor3dEXT( GLdouble red, GLdouble green, GLdouble blue )
{
	gleGetCurrent()->glSecondaryColor3dEXT( red, green, blue );
}

					
void glSecondaryColor3dvEXT( const GLdouble *v )
{
	gleGetCurrent()->glSecondaryColor3dvEXT( v );
}

					
void glSecondaryColor3fEXT( GLfloat red, GLfloat green, GLfloat blue )
{
	gleGetCurrent()->glSecondaryColor3fEXT( red, green, blue );
}

					
void glSecondaryColor3fvEXT( const GLfloat *v )
{
	gleGetCurrent()->glSecondaryColor3fvEXT( v );
}

					
void glSecondaryColor3iEXT( GLint red, GLint green, GLint blue )
{
	gleGetCurrent()->glSecondaryColor3iEXT( red, green, blue );
}

					
void glSecondaryColor3ivEXT( const GLint *v )
{
	gleGetCurrent()->glSecondaryColor3ivEXT( v );
}

					
void glSecondaryColor3sEXT( GLshort red, GLshort green, GLshort blue )
{
	gleGetCurrent()->glSecondaryColor3sEXT( red, green, blue );
}

					
void glSecondaryColor3svEXT( const GLshort *v )
{
	gleGetCurrent()->glSecondaryColor3svEXT( v );
}

					
void glSecondaryColor3ubEXT( GLubyte red, GLubyte green, GLubyte blue )
{
	gleGetCurrent()->glSecondaryColor3ubEXT( red, green, blue );
}

					
void glSecondaryColor3ubvEXT( const GLubyte *v )
{
	gleGetCurrent()->glSecondaryColor3ubvEXT( v );
}

					
void glSecondaryColor3uiEXT( GLuint red, GLuint green, GLuint blue )
{
	gleGetCurrent()->glSecondaryColor3uiEXT( red, green, blue );
}

					
void glSecondaryColor3uivEXT( const GLuint *v )
{
	gleGetCurrent()->glSecondaryColor3uivEXT( v );
}

					
void glSecondaryColor3usEXT( GLushort red, GLushort green, GLushort blue )
{
	gleGetCurrent()->glSecondaryColor3usEXT( red, green, blue );
}

					
void glSecondaryColor3usvEXT( const GLushort *v )
{
	gleGetCurrent()->glSecondaryColor3usvEXT( v );
}

					
void glSecondaryColorPointerEXT( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glSecondaryColorPointerEXT( size, type, stride, pointer );
}


// ********* GL_EXT_separate_specular_color *********
bool isGL_EXT_separate_specular_color()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_separate_specular_color;
	
	return isSupported;
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

					
void glStencilClearTagEXT( GLsizei stencilTagBits, GLuint stencilClearTag )
{
	gleGetCurrent()->glStencilClearTagEXT( stencilTagBits, stencilClearTag );
}


// ********* GL_EXT_stencil_two_side *********
bool isGL_EXT_stencil_two_side()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_stencil_two_side;
	
	return isSupported;
}

					
void glActiveStencilFaceEXT( GLenum face )
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

					
void glTexSubImage1DEXT( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels )
{
	gleGetCurrent()->glTexSubImage1DEXT( target, level, xoffset, width, format, type, pixels );
}

					
void glTexSubImage2DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels )
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

					
void glTexImage3DEXT( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels )
{
	gleGetCurrent()->glTexImage3DEXT( target, level, internalformat, width, height, depth, border, format, type, pixels );
}

					
void glTexSubImage3DEXT( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels )
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

					
void glTexBufferEXT( GLenum target, GLenum internalformat, GLuint buffer )
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

					
void glTexParameterIivEXT( GLenum target, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glTexParameterIivEXT( target, pname, params );
}

					
void glTexParameterIuivEXT( GLenum target, GLenum pname, const GLuint *params )
{
	gleGetCurrent()->glTexParameterIuivEXT( target, pname, params );
}

					
void glGetTexParameterIivEXT( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetTexParameterIivEXT( target, pname, params );
}

					
void glGetTexParameterIuivEXT( GLenum target, GLenum pname, GLuint *params )
{
	gleGetCurrent()->glGetTexParameterIuivEXT( target, pname, params );
}

					
void glClearColorIiEXT( GLint red, GLint green, GLint blue, GLint alpha )
{
	gleGetCurrent()->glClearColorIiEXT( red, green, blue, alpha );
}

					
void glClearColorIuiEXT( GLuint red, GLuint green, GLuint blue, GLuint alpha )
{
	gleGetCurrent()->glClearColorIuiEXT( red, green, blue, alpha );
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

					
GLboolean glAreTexturesResidentEXT( GLsizei n, const GLuint *textures, GLboolean *residences )
{
	return ( gleGetCurrent()->glAreTexturesResidentEXT( n, textures, residences) );
}

					
void glBindTextureEXT( GLenum target, GLuint texture )
{
	gleGetCurrent()->glBindTextureEXT( target, texture );
}

					
void glDeleteTexturesEXT( GLsizei n, const GLuint *textures )
{
	gleGetCurrent()->glDeleteTexturesEXT( n, textures );
}

					
void glGenTexturesEXT( GLsizei n, GLuint *textures )
{
	gleGetCurrent()->glGenTexturesEXT( n, textures );
}

					
GLboolean glIsTextureEXT( GLuint texture )
{
	return ( gleGetCurrent()->glIsTextureEXT( texture) );
}

					
void glPrioritizeTexturesEXT( GLsizei n, const GLuint *textures, const GLclampf *priorities )
{
	gleGetCurrent()->glPrioritizeTexturesEXT( n, textures, priorities );
}


// ********* GL_EXT_texture_perturb_normal *********
bool isGL_EXT_texture_perturb_normal()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_perturb_normal;
	
	return isSupported;
}

					
void glTextureNormalEXT( GLenum mode )
{
	gleGetCurrent()->glTextureNormalEXT( mode );
}


// ********* GL_EXT_texture_sRGB *********
bool isGL_EXT_texture_sRGB()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_sRGB;
	
	return isSupported;
}


// ********* GL_EXT_texture_shared_exponent *********
bool isGL_EXT_texture_shared_exponent()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_texture_shared_exponent;
	
	return isSupported;
}


// ********* GL_EXT_timer_query *********
bool isGL_EXT_timer_query()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_timer_query;
	
	return isSupported;
}

					
void glGetQueryObjecti64vEXT( GLuint id, GLenum pname, GLint64EXT *params )
{
	gleGetCurrent()->glGetQueryObjecti64vEXT( id, pname, params );
}

					
void glGetQueryObjectui64vEXT( GLuint id, GLenum pname, GLuint64EXT *params )
{
	gleGetCurrent()->glGetQueryObjectui64vEXT( id, pname, params );
}


// ********* GL_EXT_vertex_array *********
bool isGL_EXT_vertex_array()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_vertex_array;
	
	return isSupported;
}

					
void glArrayElementEXT( GLint i )
{
	gleGetCurrent()->glArrayElementEXT( i );
}

					
void glColorPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer )
{
	gleGetCurrent()->glColorPointerEXT( size, type, stride, count, pointer );
}

					
void glDrawArraysEXT( GLenum mode, GLint first, GLsizei count )
{
	gleGetCurrent()->glDrawArraysEXT( mode, first, count );
}

					
void glEdgeFlagPointerEXT( GLsizei stride, GLsizei count, const GLboolean *pointer )
{
	gleGetCurrent()->glEdgeFlagPointerEXT( stride, count, pointer );
}

					
void glGetPointervEXT( GLenum pname, GLvoid* *params )
{
	gleGetCurrent()->glGetPointervEXT( pname, params );
}

					
void glIndexPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer )
{
	gleGetCurrent()->glIndexPointerEXT( type, stride, count, pointer );
}

					
void glNormalPointerEXT( GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer )
{
	gleGetCurrent()->glNormalPointerEXT( type, stride, count, pointer );
}

					
void glTexCoordPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer )
{
	gleGetCurrent()->glTexCoordPointerEXT( size, type, stride, count, pointer );
}

					
void glVertexPointerEXT( GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer )
{
	gleGetCurrent()->glVertexPointerEXT( size, type, stride, count, pointer );
}


// ********* GL_EXT_vertex_shader *********
bool isGL_EXT_vertex_shader()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_vertex_shader;
	
	return isSupported;
}

					
void glBeginVertexShaderEXT( void )
{
	gleGetCurrent()->glBeginVertexShaderEXT(  );
}

					
void glEndVertexShaderEXT( void )
{
	gleGetCurrent()->glEndVertexShaderEXT(  );
}

					
void glBindVertexShaderEXT( GLuint id )
{
	gleGetCurrent()->glBindVertexShaderEXT( id );
}

					
GLuint glGenVertexShadersEXT( GLuint range )
{
	return ( gleGetCurrent()->glGenVertexShadersEXT( range) );
}

					
void glDeleteVertexShaderEXT( GLuint id )
{
	gleGetCurrent()->glDeleteVertexShaderEXT( id );
}

					
void glShaderOp1EXT( GLenum op, GLuint res, GLuint arg1 )
{
	gleGetCurrent()->glShaderOp1EXT( op, res, arg1 );
}

					
void glShaderOp2EXT( GLenum op, GLuint res, GLuint arg1, GLuint arg2 )
{
	gleGetCurrent()->glShaderOp2EXT( op, res, arg1, arg2 );
}

					
void glShaderOp3EXT( GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3 )
{
	gleGetCurrent()->glShaderOp3EXT( op, res, arg1, arg2, arg3 );
}

					
void glSwizzleEXT( GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW )
{
	gleGetCurrent()->glSwizzleEXT( res, in, outX, outY, outZ, outW );
}

					
void glWriteMaskEXT( GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW )
{
	gleGetCurrent()->glWriteMaskEXT( res, in, outX, outY, outZ, outW );
}

					
void glInsertComponentEXT( GLuint res, GLuint src, GLuint num )
{
	gleGetCurrent()->glInsertComponentEXT( res, src, num );
}

					
void glExtractComponentEXT( GLuint res, GLuint src, GLuint num )
{
	gleGetCurrent()->glExtractComponentEXT( res, src, num );
}

					
GLuint glGenSymbolsEXT( GLenum datatype, GLenum storagetype, GLenum range, GLuint components )
{
	return ( gleGetCurrent()->glGenSymbolsEXT( datatype, storagetype, range, components) );
}

					
void glSetInvariantEXT( GLuint id, GLenum type, const GLvoid *addr )
{
	gleGetCurrent()->glSetInvariantEXT( id, type, addr );
}

					
void glSetLocalConstantEXT( GLuint id, GLenum type, const GLvoid *addr )
{
	gleGetCurrent()->glSetLocalConstantEXT( id, type, addr );
}

					
void glVariantbvEXT( GLuint id, const GLbyte *addr )
{
	gleGetCurrent()->glVariantbvEXT( id, addr );
}

					
void glVariantsvEXT( GLuint id, const GLshort *addr )
{
	gleGetCurrent()->glVariantsvEXT( id, addr );
}

					
void glVariantivEXT( GLuint id, const GLint *addr )
{
	gleGetCurrent()->glVariantivEXT( id, addr );
}

					
void glVariantfvEXT( GLuint id, const GLfloat *addr )
{
	gleGetCurrent()->glVariantfvEXT( id, addr );
}

					
void glVariantdvEXT( GLuint id, const GLdouble *addr )
{
	gleGetCurrent()->glVariantdvEXT( id, addr );
}

					
void glVariantubvEXT( GLuint id, const GLubyte *addr )
{
	gleGetCurrent()->glVariantubvEXT( id, addr );
}

					
void glVariantusvEXT( GLuint id, const GLushort *addr )
{
	gleGetCurrent()->glVariantusvEXT( id, addr );
}

					
void glVariantuivEXT( GLuint id, const GLuint *addr )
{
	gleGetCurrent()->glVariantuivEXT( id, addr );
}

					
void glVariantPointerEXT( GLuint id, GLenum type, GLuint stride, const GLvoid *addr )
{
	gleGetCurrent()->glVariantPointerEXT( id, type, stride, addr );
}

					
void glEnableVariantClientStateEXT( GLuint id )
{
	gleGetCurrent()->glEnableVariantClientStateEXT( id );
}

					
void glDisableVariantClientStateEXT( GLuint id )
{
	gleGetCurrent()->glDisableVariantClientStateEXT( id );
}

					
GLuint glBindLightParameterEXT( GLenum light, GLenum value )
{
	return ( gleGetCurrent()->glBindLightParameterEXT( light, value) );
}

					
GLuint glBindMaterialParameterEXT( GLenum face, GLenum value )
{
	return ( gleGetCurrent()->glBindMaterialParameterEXT( face, value) );
}

					
GLuint glBindTexGenParameterEXT( GLenum unit, GLenum coord, GLenum value )
{
	return ( gleGetCurrent()->glBindTexGenParameterEXT( unit, coord, value) );
}

					
GLuint glBindTextureUnitParameterEXT( GLenum unit, GLenum value )
{
	return ( gleGetCurrent()->glBindTextureUnitParameterEXT( unit, value) );
}

					
GLuint glBindParameterEXT( GLenum value )
{
	return ( gleGetCurrent()->glBindParameterEXT( value) );
}

					
GLboolean glIsVariantEnabledEXT( GLuint id, GLenum cap )
{
	return ( gleGetCurrent()->glIsVariantEnabledEXT( id, cap) );
}

					
void glGetVariantBooleanvEXT( GLuint id, GLenum value, GLboolean *data )
{
	gleGetCurrent()->glGetVariantBooleanvEXT( id, value, data );
}

					
void glGetVariantIntegervEXT( GLuint id, GLenum value, GLint *data )
{
	gleGetCurrent()->glGetVariantIntegervEXT( id, value, data );
}

					
void glGetVariantFloatvEXT( GLuint id, GLenum value, GLfloat *data )
{
	gleGetCurrent()->glGetVariantFloatvEXT( id, value, data );
}

					
void glGetVariantPointervEXT( GLuint id, GLenum value, GLvoid* *data )
{
	gleGetCurrent()->glGetVariantPointervEXT( id, value, data );
}

					
void glGetInvariantBooleanvEXT( GLuint id, GLenum value, GLboolean *data )
{
	gleGetCurrent()->glGetInvariantBooleanvEXT( id, value, data );
}

					
void glGetInvariantIntegervEXT( GLuint id, GLenum value, GLint *data )
{
	gleGetCurrent()->glGetInvariantIntegervEXT( id, value, data );
}

					
void glGetInvariantFloatvEXT( GLuint id, GLenum value, GLfloat *data )
{
	gleGetCurrent()->glGetInvariantFloatvEXT( id, value, data );
}

					
void glGetLocalConstantBooleanvEXT( GLuint id, GLenum value, GLboolean *data )
{
	gleGetCurrent()->glGetLocalConstantBooleanvEXT( id, value, data );
}

					
void glGetLocalConstantIntegervEXT( GLuint id, GLenum value, GLint *data )
{
	gleGetCurrent()->glGetLocalConstantIntegervEXT( id, value, data );
}

					
void glGetLocalConstantFloatvEXT( GLuint id, GLenum value, GLfloat *data )
{
	gleGetCurrent()->glGetLocalConstantFloatvEXT( id, value, data );
}


// ********* GL_EXT_vertex_weighting *********
bool isGL_EXT_vertex_weighting()
{
	const bool isSupported = gleGetCurrent()->isGL_EXT_vertex_weighting;
	
	return isSupported;
}

					
void glVertexWeightfEXT( GLfloat weight )
{
	gleGetCurrent()->glVertexWeightfEXT( weight );
}

					
void glVertexWeightfvEXT( const GLfloat *weight )
{
	gleGetCurrent()->glVertexWeightfvEXT( weight );
}

					
void glVertexWeightPointerEXT( GLsizei size, GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glVertexWeightPointerEXT( size, type, stride, pointer );
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

					
void glFrameTerminatorGREMEDY( void )
{
	gleGetCurrent()->glFrameTerminatorGREMEDY(  );
}


// ********* GL_GREMEDY_string_marker *********
bool isGL_GREMEDY_string_marker()
{
	const bool isSupported = gleGetCurrent()->isGL_GREMEDY_string_marker;
	
	return isSupported;
}

					
void glStringMarkerGREMEDY( GLsizei len, const GLvoid *string )
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

					
void glImageTransformParameteriHP( GLenum target, GLenum pname, GLint param )
{
	gleGetCurrent()->glImageTransformParameteriHP( target, pname, param );
}

					
void glImageTransformParameterfHP( GLenum target, GLenum pname, GLfloat param )
{
	gleGetCurrent()->glImageTransformParameterfHP( target, pname, param );
}

					
void glImageTransformParameterivHP( GLenum target, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glImageTransformParameterivHP( target, pname, params );
}

					
void glImageTransformParameterfvHP( GLenum target, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glImageTransformParameterfvHP( target, pname, params );
}

					
void glGetImageTransformParameterivHP( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetImageTransformParameterivHP( target, pname, params );
}

					
void glGetImageTransformParameterfvHP( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetImageTransformParameterfvHP( target, pname, params );
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

					
void glMultiModeDrawArraysIBM( const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride )
{
	gleGetCurrent()->glMultiModeDrawArraysIBM( mode, first, count, primcount, modestride );
}

					
void glMultiModeDrawElementsIBM( const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride )
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

					
void glColorPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride )
{
	gleGetCurrent()->glColorPointerListIBM( size, type, stride, pointer, ptrstride );
}

					
void glSecondaryColorPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride )
{
	gleGetCurrent()->glSecondaryColorPointerListIBM( size, type, stride, pointer, ptrstride );
}

					
void glEdgeFlagPointerListIBM( GLint stride, const GLboolean* *pointer, GLint ptrstride )
{
	gleGetCurrent()->glEdgeFlagPointerListIBM( stride, pointer, ptrstride );
}

					
void glFogCoordPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride )
{
	gleGetCurrent()->glFogCoordPointerListIBM( type, stride, pointer, ptrstride );
}

					
void glIndexPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride )
{
	gleGetCurrent()->glIndexPointerListIBM( type, stride, pointer, ptrstride );
}

					
void glNormalPointerListIBM( GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride )
{
	gleGetCurrent()->glNormalPointerListIBM( type, stride, pointer, ptrstride );
}

					
void glTexCoordPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride )
{
	gleGetCurrent()->glTexCoordPointerListIBM( size, type, stride, pointer, ptrstride );
}

					
void glVertexPointerListIBM( GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride )
{
	gleGetCurrent()->glVertexPointerListIBM( size, type, stride, pointer, ptrstride );
}


// ********* GL_INGR_blend_func_separate *********
bool isGL_INGR_blend_func_separate()
{
	const bool isSupported = gleGetCurrent()->isGL_INGR_blend_func_separate;
	
	return isSupported;
}

					
void glBlendFuncSeparateINGR( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha )
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

					
void glVertexPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer )
{
	gleGetCurrent()->glVertexPointervINTEL( size, type, pointer );
}

					
void glNormalPointervINTEL( GLenum type, const GLvoid* *pointer )
{
	gleGetCurrent()->glNormalPointervINTEL( type, pointer );
}

					
void glColorPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer )
{
	gleGetCurrent()->glColorPointervINTEL( size, type, pointer );
}

					
void glTexCoordPointervINTEL( GLint size, GLenum type, const GLvoid* *pointer )
{
	gleGetCurrent()->glTexCoordPointervINTEL( size, type, pointer );
}


// ********* GL_INTEL_texture_scissor *********
bool isGL_INTEL_texture_scissor()
{
	const bool isSupported = gleGetCurrent()->isGL_INTEL_texture_scissor;
	
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

					
void glResizeBuffersMESA( void )
{
	gleGetCurrent()->glResizeBuffersMESA(  );
}


// ********* GL_MESA_window_pos *********
bool isGL_MESA_window_pos()
{
	const bool isSupported = gleGetCurrent()->isGL_MESA_window_pos;
	
	return isSupported;
}

					
void glWindowPos2dMESA( GLdouble x, GLdouble y )
{
	gleGetCurrent()->glWindowPos2dMESA( x, y );
}

					
void glWindowPos2dvMESA( const GLdouble *v )
{
	gleGetCurrent()->glWindowPos2dvMESA( v );
}

					
void glWindowPos2fMESA( GLfloat x, GLfloat y )
{
	gleGetCurrent()->glWindowPos2fMESA( x, y );
}

					
void glWindowPos2fvMESA( const GLfloat *v )
{
	gleGetCurrent()->glWindowPos2fvMESA( v );
}

					
void glWindowPos2iMESA( GLint x, GLint y )
{
	gleGetCurrent()->glWindowPos2iMESA( x, y );
}

					
void glWindowPos2ivMESA( const GLint *v )
{
	gleGetCurrent()->glWindowPos2ivMESA( v );
}

					
void glWindowPos2sMESA( GLshort x, GLshort y )
{
	gleGetCurrent()->glWindowPos2sMESA( x, y );
}

					
void glWindowPos2svMESA( const GLshort *v )
{
	gleGetCurrent()->glWindowPos2svMESA( v );
}

					
void glWindowPos3dMESA( GLdouble x, GLdouble y, GLdouble z )
{
	gleGetCurrent()->glWindowPos3dMESA( x, y, z );
}

					
void glWindowPos3dvMESA( const GLdouble *v )
{
	gleGetCurrent()->glWindowPos3dvMESA( v );
}

					
void glWindowPos3fMESA( GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glWindowPos3fMESA( x, y, z );
}

					
void glWindowPos3fvMESA( const GLfloat *v )
{
	gleGetCurrent()->glWindowPos3fvMESA( v );
}

					
void glWindowPos3iMESA( GLint x, GLint y, GLint z )
{
	gleGetCurrent()->glWindowPos3iMESA( x, y, z );
}

					
void glWindowPos3ivMESA( const GLint *v )
{
	gleGetCurrent()->glWindowPos3ivMESA( v );
}

					
void glWindowPos3sMESA( GLshort x, GLshort y, GLshort z )
{
	gleGetCurrent()->glWindowPos3sMESA( x, y, z );
}

					
void glWindowPos3svMESA( const GLshort *v )
{
	gleGetCurrent()->glWindowPos3svMESA( v );
}

					
void glWindowPos4dMESA( GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	gleGetCurrent()->glWindowPos4dMESA( x, y, z, w );
}

					
void glWindowPos4dvMESA( const GLdouble *v )
{
	gleGetCurrent()->glWindowPos4dvMESA( v );
}

					
void glWindowPos4fMESA( GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glWindowPos4fMESA( x, y, z, w );
}

					
void glWindowPos4fvMESA( const GLfloat *v )
{
	gleGetCurrent()->glWindowPos4fvMESA( v );
}

					
void glWindowPos4iMESA( GLint x, GLint y, GLint z, GLint w )
{
	gleGetCurrent()->glWindowPos4iMESA( x, y, z, w );
}

					
void glWindowPos4ivMESA( const GLint *v )
{
	gleGetCurrent()->glWindowPos4ivMESA( v );
}

					
void glWindowPos4sMESA( GLshort x, GLshort y, GLshort z, GLshort w )
{
	gleGetCurrent()->glWindowPos4sMESA( x, y, z, w );
}

					
void glWindowPos4svMESA( const GLshort *v )
{
	gleGetCurrent()->glWindowPos4svMESA( v );
}


// ********* GL_MESA_ycbcr_texture *********
bool isGL_MESA_ycbcr_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_MESA_ycbcr_texture;
	
	return isSupported;
}


// ********* GL_MESAX_texture_stack *********
bool isGL_MESAX_texture_stack()
{
	const bool isSupported = gleGetCurrent()->isGL_MESAX_texture_stack;
	
	return isSupported;
}


// ********* GL_NV_blend_square *********
bool isGL_NV_blend_square()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_blend_square;
	
	return isSupported;
}


// ********* GL_NV_copy_depth_to_color *********
bool isGL_NV_copy_depth_to_color()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_copy_depth_to_color;
	
	return isSupported;
}


// ********* GL_NV_depth_buffer_float *********
bool isGL_NV_depth_buffer_float()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_depth_buffer_float;
	
	return isSupported;
}

					
void glDepthRangedNV( GLdouble zNear, GLdouble zFar )
{
	gleGetCurrent()->glDepthRangedNV( zNear, zFar );
}

					
void glClearDepthdNV( GLdouble depth )
{
	gleGetCurrent()->glClearDepthdNV( depth );
}

					
void glDepthBoundsdNV( GLdouble zmin, GLdouble zmax )
{
	gleGetCurrent()->glDepthBoundsdNV( zmin, zmax );
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

					
void glMapControlPointsNV( GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points )
{
	gleGetCurrent()->glMapControlPointsNV( target, index, type, ustride, vstride, uorder, vorder, packed, points );
}

					
void glMapParameterivNV( GLenum target, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glMapParameterivNV( target, pname, params );
}

					
void glMapParameterfvNV( GLenum target, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glMapParameterfvNV( target, pname, params );
}

					
void glGetMapControlPointsNV( GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points )
{
	gleGetCurrent()->glGetMapControlPointsNV( target, index, type, ustride, vstride, packed, points );
}

					
void glGetMapParameterivNV( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetMapParameterivNV( target, pname, params );
}

					
void glGetMapParameterfvNV( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetMapParameterfvNV( target, pname, params );
}

					
void glGetMapAttribParameterivNV( GLenum target, GLuint index, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetMapAttribParameterivNV( target, index, pname, params );
}

					
void glGetMapAttribParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetMapAttribParameterfvNV( target, index, pname, params );
}

					
void glEvalMapsNV( GLenum target, GLenum mode )
{
	gleGetCurrent()->glEvalMapsNV( target, mode );
}


// ********* GL_NV_fence *********
bool isGL_NV_fence()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_fence;
	
	return isSupported;
}

					
void glDeleteFencesNV( GLsizei n, const GLuint *fences )
{
	gleGetCurrent()->glDeleteFencesNV( n, fences );
}

					
void glGenFencesNV( GLsizei n, GLuint *fences )
{
	gleGetCurrent()->glGenFencesNV( n, fences );
}

					
GLboolean glIsFenceNV( GLuint fence )
{
	return ( gleGetCurrent()->glIsFenceNV( fence) );
}

					
GLboolean glTestFenceNV( GLuint fence )
{
	return ( gleGetCurrent()->glTestFenceNV( fence) );
}

					
void glGetFenceivNV( GLuint fence, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetFenceivNV( fence, pname, params );
}

					
void glFinishFenceNV( GLuint fence )
{
	gleGetCurrent()->glFinishFenceNV( fence );
}

					
void glSetFenceNV( GLuint fence, GLenum condition )
{
	gleGetCurrent()->glSetFenceNV( fence, condition );
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

					
void glProgramNamedParameter4fNV( GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glProgramNamedParameter4fNV( id, len, name, x, y, z, w );
}

					
void glProgramNamedParameter4dNV( GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	gleGetCurrent()->glProgramNamedParameter4dNV( id, len, name, x, y, z, w );
}

					
void glProgramNamedParameter4fvNV( GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v )
{
	gleGetCurrent()->glProgramNamedParameter4fvNV( id, len, name, v );
}

					
void glProgramNamedParameter4dvNV( GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v )
{
	gleGetCurrent()->glProgramNamedParameter4dvNV( id, len, name, v );
}

					
void glGetProgramNamedParameterfvNV( GLuint id, GLsizei len, const GLubyte *name, GLfloat *params )
{
	gleGetCurrent()->glGetProgramNamedParameterfvNV( id, len, name, params );
}

					
void glGetProgramNamedParameterdvNV( GLuint id, GLsizei len, const GLubyte *name, GLdouble *params )
{
	gleGetCurrent()->glGetProgramNamedParameterdvNV( id, len, name, params );
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

					
void glRenderbufferStorageMultisampleCoverageNV( GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height )
{
	gleGetCurrent()->glRenderbufferStorageMultisampleCoverageNV( target, coverageSamples, colorSamples, internalformat, width, height );
}


// ********* GL_NV_geometry_program4 *********
bool isGL_NV_geometry_program4()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_geometry_program4;
	
	return isSupported;
}

					
void glProgramVertexLimitNV( GLenum target, GLint limit )
{
	gleGetCurrent()->glProgramVertexLimitNV( target, limit );
}

					
void glFramebufferTextureEXT( GLenum target, GLenum attachment, GLuint texture, GLint level )
{
	gleGetCurrent()->glFramebufferTextureEXT( target, attachment, texture, level );
}

					
void glFramebufferTextureLayerEXT( GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer )
{
	gleGetCurrent()->glFramebufferTextureLayerEXT( target, attachment, texture, level, layer );
}

					
void glFramebufferTextureFaceEXT( GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face )
{
	gleGetCurrent()->glFramebufferTextureFaceEXT( target, attachment, texture, level, face );
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

					
void glProgramLocalParameterI4iNV( GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w )
{
	gleGetCurrent()->glProgramLocalParameterI4iNV( target, index, x, y, z, w );
}

					
void glProgramLocalParameterI4ivNV( GLenum target, GLuint index, const GLint *params )
{
	gleGetCurrent()->glProgramLocalParameterI4ivNV( target, index, params );
}

					
void glProgramLocalParametersI4ivNV( GLenum target, GLuint index, GLsizei count, const GLint *params )
{
	gleGetCurrent()->glProgramLocalParametersI4ivNV( target, index, count, params );
}

					
void glProgramLocalParameterI4uiNV( GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w )
{
	gleGetCurrent()->glProgramLocalParameterI4uiNV( target, index, x, y, z, w );
}

					
void glProgramLocalParameterI4uivNV( GLenum target, GLuint index, const GLuint *params )
{
	gleGetCurrent()->glProgramLocalParameterI4uivNV( target, index, params );
}

					
void glProgramLocalParametersI4uivNV( GLenum target, GLuint index, GLsizei count, const GLuint *params )
{
	gleGetCurrent()->glProgramLocalParametersI4uivNV( target, index, count, params );
}

					
void glProgramEnvParameterI4iNV( GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w )
{
	gleGetCurrent()->glProgramEnvParameterI4iNV( target, index, x, y, z, w );
}

					
void glProgramEnvParameterI4ivNV( GLenum target, GLuint index, const GLint *params )
{
	gleGetCurrent()->glProgramEnvParameterI4ivNV( target, index, params );
}

					
void glProgramEnvParametersI4ivNV( GLenum target, GLuint index, GLsizei count, const GLint *params )
{
	gleGetCurrent()->glProgramEnvParametersI4ivNV( target, index, count, params );
}

					
void glProgramEnvParameterI4uiNV( GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w )
{
	gleGetCurrent()->glProgramEnvParameterI4uiNV( target, index, x, y, z, w );
}

					
void glProgramEnvParameterI4uivNV( GLenum target, GLuint index, const GLuint *params )
{
	gleGetCurrent()->glProgramEnvParameterI4uivNV( target, index, params );
}

					
void glProgramEnvParametersI4uivNV( GLenum target, GLuint index, GLsizei count, const GLuint *params )
{
	gleGetCurrent()->glProgramEnvParametersI4uivNV( target, index, count, params );
}

					
void glGetProgramLocalParameterIivNV( GLenum target, GLuint index, GLint *params )
{
	gleGetCurrent()->glGetProgramLocalParameterIivNV( target, index, params );
}

					
void glGetProgramLocalParameterIuivNV( GLenum target, GLuint index, GLuint *params )
{
	gleGetCurrent()->glGetProgramLocalParameterIuivNV( target, index, params );
}

					
void glGetProgramEnvParameterIivNV( GLenum target, GLuint index, GLint *params )
{
	gleGetCurrent()->glGetProgramEnvParameterIivNV( target, index, params );
}

					
void glGetProgramEnvParameterIuivNV( GLenum target, GLuint index, GLuint *params )
{
	gleGetCurrent()->glGetProgramEnvParameterIuivNV( target, index, params );
}


// ********* GL_NV_half_float *********
bool isGL_NV_half_float()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_half_float;
	
	return isSupported;
}

					
void glVertex2hNV( GLhalfNV x, GLhalfNV y )
{
	gleGetCurrent()->glVertex2hNV( x, y );
}

					
void glVertex2hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glVertex2hvNV( v );
}

					
void glVertex3hNV( GLhalfNV x, GLhalfNV y, GLhalfNV z )
{
	gleGetCurrent()->glVertex3hNV( x, y, z );
}

					
void glVertex3hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glVertex3hvNV( v );
}

					
void glVertex4hNV( GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w )
{
	gleGetCurrent()->glVertex4hNV( x, y, z, w );
}

					
void glVertex4hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glVertex4hvNV( v );
}

					
void glNormal3hNV( GLhalfNV nx, GLhalfNV ny, GLhalfNV nz )
{
	gleGetCurrent()->glNormal3hNV( nx, ny, nz );
}

					
void glNormal3hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glNormal3hvNV( v );
}

					
void glColor3hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue )
{
	gleGetCurrent()->glColor3hNV( red, green, blue );
}

					
void glColor3hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glColor3hvNV( v );
}

					
void glColor4hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha )
{
	gleGetCurrent()->glColor4hNV( red, green, blue, alpha );
}

					
void glColor4hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glColor4hvNV( v );
}

					
void glTexCoord1hNV( GLhalfNV s )
{
	gleGetCurrent()->glTexCoord1hNV( s );
}

					
void glTexCoord1hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glTexCoord1hvNV( v );
}

					
void glTexCoord2hNV( GLhalfNV s, GLhalfNV t )
{
	gleGetCurrent()->glTexCoord2hNV( s, t );
}

					
void glTexCoord2hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glTexCoord2hvNV( v );
}

					
void glTexCoord3hNV( GLhalfNV s, GLhalfNV t, GLhalfNV r )
{
	gleGetCurrent()->glTexCoord3hNV( s, t, r );
}

					
void glTexCoord3hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glTexCoord3hvNV( v );
}

					
void glTexCoord4hNV( GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q )
{
	gleGetCurrent()->glTexCoord4hNV( s, t, r, q );
}

					
void glTexCoord4hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glTexCoord4hvNV( v );
}

					
void glMultiTexCoord1hNV( GLenum target, GLhalfNV s )
{
	gleGetCurrent()->glMultiTexCoord1hNV( target, s );
}

					
void glMultiTexCoord1hvNV( GLenum target, const GLhalfNV *v )
{
	gleGetCurrent()->glMultiTexCoord1hvNV( target, v );
}

					
void glMultiTexCoord2hNV( GLenum target, GLhalfNV s, GLhalfNV t )
{
	gleGetCurrent()->glMultiTexCoord2hNV( target, s, t );
}

					
void glMultiTexCoord2hvNV( GLenum target, const GLhalfNV *v )
{
	gleGetCurrent()->glMultiTexCoord2hvNV( target, v );
}

					
void glMultiTexCoord3hNV( GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r )
{
	gleGetCurrent()->glMultiTexCoord3hNV( target, s, t, r );
}

					
void glMultiTexCoord3hvNV( GLenum target, const GLhalfNV *v )
{
	gleGetCurrent()->glMultiTexCoord3hvNV( target, v );
}

					
void glMultiTexCoord4hNV( GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q )
{
	gleGetCurrent()->glMultiTexCoord4hNV( target, s, t, r, q );
}

					
void glMultiTexCoord4hvNV( GLenum target, const GLhalfNV *v )
{
	gleGetCurrent()->glMultiTexCoord4hvNV( target, v );
}

					
void glFogCoordhNV( GLhalfNV fog )
{
	gleGetCurrent()->glFogCoordhNV( fog );
}

					
void glFogCoordhvNV( const GLhalfNV *fog )
{
	gleGetCurrent()->glFogCoordhvNV( fog );
}

					
void glSecondaryColor3hNV( GLhalfNV red, GLhalfNV green, GLhalfNV blue )
{
	gleGetCurrent()->glSecondaryColor3hNV( red, green, blue );
}

					
void glSecondaryColor3hvNV( const GLhalfNV *v )
{
	gleGetCurrent()->glSecondaryColor3hvNV( v );
}

					
void glVertexWeighthNV( GLhalfNV weight )
{
	gleGetCurrent()->glVertexWeighthNV( weight );
}

					
void glVertexWeighthvNV( const GLhalfNV *weight )
{
	gleGetCurrent()->glVertexWeighthvNV( weight );
}

					
void glVertexAttrib1hNV( GLuint index, GLhalfNV x )
{
	gleGetCurrent()->glVertexAttrib1hNV( index, x );
}

					
void glVertexAttrib1hvNV( GLuint index, const GLhalfNV *v )
{
	gleGetCurrent()->glVertexAttrib1hvNV( index, v );
}

					
void glVertexAttrib2hNV( GLuint index, GLhalfNV x, GLhalfNV y )
{
	gleGetCurrent()->glVertexAttrib2hNV( index, x, y );
}

					
void glVertexAttrib2hvNV( GLuint index, const GLhalfNV *v )
{
	gleGetCurrent()->glVertexAttrib2hvNV( index, v );
}

					
void glVertexAttrib3hNV( GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z )
{
	gleGetCurrent()->glVertexAttrib3hNV( index, x, y, z );
}

					
void glVertexAttrib3hvNV( GLuint index, const GLhalfNV *v )
{
	gleGetCurrent()->glVertexAttrib3hvNV( index, v );
}

					
void glVertexAttrib4hNV( GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w )
{
	gleGetCurrent()->glVertexAttrib4hNV( index, x, y, z, w );
}

					
void glVertexAttrib4hvNV( GLuint index, const GLhalfNV *v )
{
	gleGetCurrent()->glVertexAttrib4hvNV( index, v );
}

					
void glVertexAttribs1hvNV( GLuint index, GLsizei n, const GLhalfNV *v )
{
	gleGetCurrent()->glVertexAttribs1hvNV( index, n, v );
}

					
void glVertexAttribs2hvNV( GLuint index, GLsizei n, const GLhalfNV *v )
{
	gleGetCurrent()->glVertexAttribs2hvNV( index, n, v );
}

					
void glVertexAttribs3hvNV( GLuint index, GLsizei n, const GLhalfNV *v )
{
	gleGetCurrent()->glVertexAttribs3hvNV( index, n, v );
}

					
void glVertexAttribs4hvNV( GLuint index, GLsizei n, const GLhalfNV *v )
{
	gleGetCurrent()->glVertexAttribs4hvNV( index, n, v );
}


// ********* GL_NV_light_max_exponent *********
bool isGL_NV_light_max_exponent()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_light_max_exponent;
	
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

					
void glGenOcclusionQueriesNV( GLsizei n, GLuint *ids )
{
	gleGetCurrent()->glGenOcclusionQueriesNV( n, ids );
}

					
void glDeleteOcclusionQueriesNV( GLsizei n, const GLuint *ids )
{
	gleGetCurrent()->glDeleteOcclusionQueriesNV( n, ids );
}

					
GLboolean glIsOcclusionQueryNV( GLuint id )
{
	return ( gleGetCurrent()->glIsOcclusionQueryNV( id) );
}

					
void glBeginOcclusionQueryNV( GLuint id )
{
	gleGetCurrent()->glBeginOcclusionQueryNV( id );
}

					
void glEndOcclusionQueryNV( void )
{
	gleGetCurrent()->glEndOcclusionQueryNV(  );
}

					
void glGetOcclusionQueryivNV( GLuint id, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetOcclusionQueryivNV( id, pname, params );
}

					
void glGetOcclusionQueryuivNV( GLuint id, GLenum pname, GLuint *params )
{
	gleGetCurrent()->glGetOcclusionQueryuivNV( id, pname, params );
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

					
void glProgramBufferParametersfvNV( GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params )
{
	gleGetCurrent()->glProgramBufferParametersfvNV( target, buffer, index, count, params );
}

					
void glProgramBufferParametersIivNV( GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params )
{
	gleGetCurrent()->glProgramBufferParametersIivNV( target, buffer, index, count, params );
}

					
void glProgramBufferParametersIuivNV( GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params )
{
	gleGetCurrent()->glProgramBufferParametersIuivNV( target, buffer, index, count, params );
}


// ********* GL_NV_pixel_data_range *********
bool isGL_NV_pixel_data_range()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_pixel_data_range;
	
	return isSupported;
}

					
void glPixelDataRangeNV( GLenum target, GLsizei length, GLvoid *pointer )
{
	gleGetCurrent()->glPixelDataRangeNV( target, length, pointer );
}

					
void glFlushPixelDataRangeNV( GLenum target )
{
	gleGetCurrent()->glFlushPixelDataRangeNV( target );
}


// ********* GL_NV_point_sprite *********
bool isGL_NV_point_sprite()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_point_sprite;
	
	return isSupported;
}

					
void glPointParameteriNV( GLenum pname, GLint param )
{
	gleGetCurrent()->glPointParameteriNV( pname, param );
}

					
void glPointParameterivNV( GLenum pname, const GLint *params )
{
	gleGetCurrent()->glPointParameterivNV( pname, params );
}


// ********* GL_NV_primitive_restart *********
bool isGL_NV_primitive_restart()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_primitive_restart;
	
	return isSupported;
}

					
void glPrimitiveRestartNV( void )
{
	gleGetCurrent()->glPrimitiveRestartNV(  );
}

					
void glPrimitiveRestartIndexNV( GLuint index )
{
	gleGetCurrent()->glPrimitiveRestartIndexNV( index );
}


// ********* GL_NV_register_combiners *********
bool isGL_NV_register_combiners()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_register_combiners;
	
	return isSupported;
}

					
void glCombinerParameterfvNV( GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glCombinerParameterfvNV( pname, params );
}

					
void glCombinerParameterfNV( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glCombinerParameterfNV( pname, param );
}

					
void glCombinerParameterivNV( GLenum pname, const GLint *params )
{
	gleGetCurrent()->glCombinerParameterivNV( pname, params );
}

					
void glCombinerParameteriNV( GLenum pname, GLint param )
{
	gleGetCurrent()->glCombinerParameteriNV( pname, param );
}

					
void glCombinerInputNV( GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage )
{
	gleGetCurrent()->glCombinerInputNV( stage, portion, variable, input, mapping, componentUsage );
}

					
void glCombinerOutputNV( GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum )
{
	gleGetCurrent()->glCombinerOutputNV( stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum );
}

					
void glFinalCombinerInputNV( GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage )
{
	gleGetCurrent()->glFinalCombinerInputNV( variable, input, mapping, componentUsage );
}

					
void glGetCombinerInputParameterfvNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetCombinerInputParameterfvNV( stage, portion, variable, pname, params );
}

					
void glGetCombinerInputParameterivNV( GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetCombinerInputParameterivNV( stage, portion, variable, pname, params );
}

					
void glGetCombinerOutputParameterfvNV( GLenum stage, GLenum portion, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetCombinerOutputParameterfvNV( stage, portion, pname, params );
}

					
void glGetCombinerOutputParameterivNV( GLenum stage, GLenum portion, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetCombinerOutputParameterivNV( stage, portion, pname, params );
}

					
void glGetFinalCombinerInputParameterfvNV( GLenum variable, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetFinalCombinerInputParameterfvNV( variable, pname, params );
}

					
void glGetFinalCombinerInputParameterivNV( GLenum variable, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetFinalCombinerInputParameterivNV( variable, pname, params );
}


// ********* GL_NV_register_combiners2 *********
bool isGL_NV_register_combiners2()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_register_combiners2;
	
	return isSupported;
}

					
void glCombinerStageParameterfvNV( GLenum stage, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glCombinerStageParameterfvNV( stage, pname, params );
}

					
void glGetCombinerStageParameterfvNV( GLenum stage, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetCombinerStageParameterfvNV( stage, pname, params );
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

					
void glBeginTransformFeedbackNV( GLenum primitiveMode )
{
	gleGetCurrent()->glBeginTransformFeedbackNV( primitiveMode );
}

					
void glEndTransformFeedbackNV( void )
{
	gleGetCurrent()->glEndTransformFeedbackNV(  );
}

					
void glTransformFeedbackAttribsNV( GLuint count, const GLint *attribs, GLenum bufferMode )
{
	gleGetCurrent()->glTransformFeedbackAttribsNV( count, attribs, bufferMode );
}

					
void glBindBufferRangeNV( GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size )
{
	gleGetCurrent()->glBindBufferRangeNV( target, index, buffer, offset, size );
}

					
void glBindBufferOffsetNV( GLenum target, GLuint index, GLuint buffer, GLintptr offset )
{
	gleGetCurrent()->glBindBufferOffsetNV( target, index, buffer, offset );
}

					
void glBindBufferBaseNV( GLenum target, GLuint index, GLuint buffer )
{
	gleGetCurrent()->glBindBufferBaseNV( target, index, buffer );
}

					
void glTransformFeedbackVaryingsNV( GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode )
{
	gleGetCurrent()->glTransformFeedbackVaryingsNV( program, count, locations, bufferMode );
}

					
void glActiveVaryingNV( GLuint program, const GLchar *name )
{
	gleGetCurrent()->glActiveVaryingNV( program, name );
}

					
GLint glGetVaryingLocationNV( GLuint program, const GLchar *name )
{
	return ( gleGetCurrent()->glGetVaryingLocationNV( program, name) );
}

					
void glGetActiveVaryingNV( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name )
{
	gleGetCurrent()->glGetActiveVaryingNV( program, index, bufSize, length, size, type, name );
}

					
void glGetTransformFeedbackVaryingNV( GLuint program, GLuint index, GLint *location )
{
	gleGetCurrent()->glGetTransformFeedbackVaryingNV( program, index, location );
}


// ********* GL_NV_vertex_array_range *********
bool isGL_NV_vertex_array_range()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_array_range;
	
	return isSupported;
}

					
void glFlushVertexArrayRangeNV( void )
{
	gleGetCurrent()->glFlushVertexArrayRangeNV(  );
}

					
void glVertexArrayRangeNV( GLsizei length, const GLvoid *pointer )
{
	gleGetCurrent()->glVertexArrayRangeNV( length, pointer );
}


// ********* GL_NV_vertex_array_range2 *********
bool isGL_NV_vertex_array_range2()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_array_range2;
	
	return isSupported;
}


// ********* GL_NV_vertex_program *********
bool isGL_NV_vertex_program()
{
	const bool isSupported = gleGetCurrent()->isGL_NV_vertex_program;
	
	return isSupported;
}

					
GLboolean glAreProgramsResidentNV( GLsizei n, const GLuint *programs, GLboolean *residences )
{
	return ( gleGetCurrent()->glAreProgramsResidentNV( n, programs, residences) );
}

					
void glBindProgramNV( GLenum target, GLuint id )
{
	gleGetCurrent()->glBindProgramNV( target, id );
}

					
void glDeleteProgramsNV( GLsizei n, const GLuint *programs )
{
	gleGetCurrent()->glDeleteProgramsNV( n, programs );
}

					
void glExecuteProgramNV( GLenum target, GLuint id, const GLfloat *params )
{
	gleGetCurrent()->glExecuteProgramNV( target, id, params );
}

					
void glGenProgramsNV( GLsizei n, GLuint *programs )
{
	gleGetCurrent()->glGenProgramsNV( n, programs );
}

					
void glGetProgramParameterdvNV( GLenum target, GLuint index, GLenum pname, GLdouble *params )
{
	gleGetCurrent()->glGetProgramParameterdvNV( target, index, pname, params );
}

					
void glGetProgramParameterfvNV( GLenum target, GLuint index, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetProgramParameterfvNV( target, index, pname, params );
}

					
void glGetProgramivNV( GLuint id, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetProgramivNV( id, pname, params );
}

					
void glGetProgramStringNV( GLuint id, GLenum pname, GLubyte *program )
{
	gleGetCurrent()->glGetProgramStringNV( id, pname, program );
}

					
void glGetTrackMatrixivNV( GLenum target, GLuint address, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetTrackMatrixivNV( target, address, pname, params );
}

					
void glGetVertexAttribdvNV( GLuint index, GLenum pname, GLdouble *params )
{
	gleGetCurrent()->glGetVertexAttribdvNV( index, pname, params );
}

					
void glGetVertexAttribfvNV( GLuint index, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetVertexAttribfvNV( index, pname, params );
}

					
void glGetVertexAttribivNV( GLuint index, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetVertexAttribivNV( index, pname, params );
}

					
void glGetVertexAttribPointervNV( GLuint index, GLenum pname, GLvoid* *pointer )
{
	gleGetCurrent()->glGetVertexAttribPointervNV( index, pname, pointer );
}

					
GLboolean glIsProgramNV( GLuint id )
{
	return ( gleGetCurrent()->glIsProgramNV( id) );
}

					
void glLoadProgramNV( GLenum target, GLuint id, GLsizei len, const GLubyte *program )
{
	gleGetCurrent()->glLoadProgramNV( target, id, len, program );
}

					
void glProgramParameter4dNV( GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	gleGetCurrent()->glProgramParameter4dNV( target, index, x, y, z, w );
}

					
void glProgramParameter4dvNV( GLenum target, GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glProgramParameter4dvNV( target, index, v );
}

					
void glProgramParameter4fNV( GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glProgramParameter4fNV( target, index, x, y, z, w );
}

					
void glProgramParameter4fvNV( GLenum target, GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glProgramParameter4fvNV( target, index, v );
}

					
void glProgramParameters4dvNV( GLenum target, GLuint index, GLuint count, const GLdouble *v )
{
	gleGetCurrent()->glProgramParameters4dvNV( target, index, count, v );
}

					
void glProgramParameters4fvNV( GLenum target, GLuint index, GLuint count, const GLfloat *v )
{
	gleGetCurrent()->glProgramParameters4fvNV( target, index, count, v );
}

					
void glRequestResidentProgramsNV( GLsizei n, const GLuint *programs )
{
	gleGetCurrent()->glRequestResidentProgramsNV( n, programs );
}

					
void glTrackMatrixNV( GLenum target, GLuint address, GLenum matrix, GLenum transform )
{
	gleGetCurrent()->glTrackMatrixNV( target, address, matrix, transform );
}

					
void glVertexAttribPointerNV( GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glVertexAttribPointerNV( index, fsize, type, stride, pointer );
}

					
void glVertexAttrib1dNV( GLuint index, GLdouble x )
{
	gleGetCurrent()->glVertexAttrib1dNV( index, x );
}

					
void glVertexAttrib1dvNV( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib1dvNV( index, v );
}

					
void glVertexAttrib1fNV( GLuint index, GLfloat x )
{
	gleGetCurrent()->glVertexAttrib1fNV( index, x );
}

					
void glVertexAttrib1fvNV( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib1fvNV( index, v );
}

					
void glVertexAttrib1sNV( GLuint index, GLshort x )
{
	gleGetCurrent()->glVertexAttrib1sNV( index, x );
}

					
void glVertexAttrib1svNV( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib1svNV( index, v );
}

					
void glVertexAttrib2dNV( GLuint index, GLdouble x, GLdouble y )
{
	gleGetCurrent()->glVertexAttrib2dNV( index, x, y );
}

					
void glVertexAttrib2dvNV( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib2dvNV( index, v );
}

					
void glVertexAttrib2fNV( GLuint index, GLfloat x, GLfloat y )
{
	gleGetCurrent()->glVertexAttrib2fNV( index, x, y );
}

					
void glVertexAttrib2fvNV( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib2fvNV( index, v );
}

					
void glVertexAttrib2sNV( GLuint index, GLshort x, GLshort y )
{
	gleGetCurrent()->glVertexAttrib2sNV( index, x, y );
}

					
void glVertexAttrib2svNV( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib2svNV( index, v );
}

					
void glVertexAttrib3dNV( GLuint index, GLdouble x, GLdouble y, GLdouble z )
{
	gleGetCurrent()->glVertexAttrib3dNV( index, x, y, z );
}

					
void glVertexAttrib3dvNV( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib3dvNV( index, v );
}

					
void glVertexAttrib3fNV( GLuint index, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glVertexAttrib3fNV( index, x, y, z );
}

					
void glVertexAttrib3fvNV( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib3fvNV( index, v );
}

					
void glVertexAttrib3sNV( GLuint index, GLshort x, GLshort y, GLshort z )
{
	gleGetCurrent()->glVertexAttrib3sNV( index, x, y, z );
}

					
void glVertexAttrib3svNV( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib3svNV( index, v );
}

					
void glVertexAttrib4dNV( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	gleGetCurrent()->glVertexAttrib4dNV( index, x, y, z, w );
}

					
void glVertexAttrib4dvNV( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib4dvNV( index, v );
}

					
void glVertexAttrib4fNV( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glVertexAttrib4fNV( index, x, y, z, w );
}

					
void glVertexAttrib4fvNV( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib4fvNV( index, v );
}

					
void glVertexAttrib4sNV( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w )
{
	gleGetCurrent()->glVertexAttrib4sNV( index, x, y, z, w );
}

					
void glVertexAttrib4svNV( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib4svNV( index, v );
}

					
void glVertexAttrib4ubNV( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w )
{
	gleGetCurrent()->glVertexAttrib4ubNV( index, x, y, z, w );
}

					
void glVertexAttrib4ubvNV( GLuint index, const GLubyte *v )
{
	gleGetCurrent()->glVertexAttrib4ubvNV( index, v );
}

					
void glVertexAttribs1dvNV( GLuint index, GLsizei count, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttribs1dvNV( index, count, v );
}

					
void glVertexAttribs1fvNV( GLuint index, GLsizei count, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttribs1fvNV( index, count, v );
}

					
void glVertexAttribs1svNV( GLuint index, GLsizei count, const GLshort *v )
{
	gleGetCurrent()->glVertexAttribs1svNV( index, count, v );
}

					
void glVertexAttribs2dvNV( GLuint index, GLsizei count, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttribs2dvNV( index, count, v );
}

					
void glVertexAttribs2fvNV( GLuint index, GLsizei count, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttribs2fvNV( index, count, v );
}

					
void glVertexAttribs2svNV( GLuint index, GLsizei count, const GLshort *v )
{
	gleGetCurrent()->glVertexAttribs2svNV( index, count, v );
}

					
void glVertexAttribs3dvNV( GLuint index, GLsizei count, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttribs3dvNV( index, count, v );
}

					
void glVertexAttribs3fvNV( GLuint index, GLsizei count, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttribs3fvNV( index, count, v );
}

					
void glVertexAttribs3svNV( GLuint index, GLsizei count, const GLshort *v )
{
	gleGetCurrent()->glVertexAttribs3svNV( index, count, v );
}

					
void glVertexAttribs4dvNV( GLuint index, GLsizei count, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttribs4dvNV( index, count, v );
}

					
void glVertexAttribs4fvNV( GLuint index, GLsizei count, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttribs4fvNV( index, count, v );
}

					
void glVertexAttribs4svNV( GLuint index, GLsizei count, const GLshort *v )
{
	gleGetCurrent()->glVertexAttribs4svNV( index, count, v );
}

					
void glVertexAttribs4ubvNV( GLuint index, GLsizei count, const GLubyte *v )
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

					
void glVertexAttribI1iEXT( GLuint index, GLint x )
{
	gleGetCurrent()->glVertexAttribI1iEXT( index, x );
}

					
void glVertexAttribI2iEXT( GLuint index, GLint x, GLint y )
{
	gleGetCurrent()->glVertexAttribI2iEXT( index, x, y );
}

					
void glVertexAttribI3iEXT( GLuint index, GLint x, GLint y, GLint z )
{
	gleGetCurrent()->glVertexAttribI3iEXT( index, x, y, z );
}

					
void glVertexAttribI4iEXT( GLuint index, GLint x, GLint y, GLint z, GLint w )
{
	gleGetCurrent()->glVertexAttribI4iEXT( index, x, y, z, w );
}

					
void glVertexAttribI1uiEXT( GLuint index, GLuint x )
{
	gleGetCurrent()->glVertexAttribI1uiEXT( index, x );
}

					
void glVertexAttribI2uiEXT( GLuint index, GLuint x, GLuint y )
{
	gleGetCurrent()->glVertexAttribI2uiEXT( index, x, y );
}

					
void glVertexAttribI3uiEXT( GLuint index, GLuint x, GLuint y, GLuint z )
{
	gleGetCurrent()->glVertexAttribI3uiEXT( index, x, y, z );
}

					
void glVertexAttribI4uiEXT( GLuint index, GLuint x, GLuint y, GLuint z, GLuint w )
{
	gleGetCurrent()->glVertexAttribI4uiEXT( index, x, y, z, w );
}

					
void glVertexAttribI1ivEXT( GLuint index, const GLint *v )
{
	gleGetCurrent()->glVertexAttribI1ivEXT( index, v );
}

					
void glVertexAttribI2ivEXT( GLuint index, const GLint *v )
{
	gleGetCurrent()->glVertexAttribI2ivEXT( index, v );
}

					
void glVertexAttribI3ivEXT( GLuint index, const GLint *v )
{
	gleGetCurrent()->glVertexAttribI3ivEXT( index, v );
}

					
void glVertexAttribI4ivEXT( GLuint index, const GLint *v )
{
	gleGetCurrent()->glVertexAttribI4ivEXT( index, v );
}

					
void glVertexAttribI1uivEXT( GLuint index, const GLuint *v )
{
	gleGetCurrent()->glVertexAttribI1uivEXT( index, v );
}

					
void glVertexAttribI2uivEXT( GLuint index, const GLuint *v )
{
	gleGetCurrent()->glVertexAttribI2uivEXT( index, v );
}

					
void glVertexAttribI3uivEXT( GLuint index, const GLuint *v )
{
	gleGetCurrent()->glVertexAttribI3uivEXT( index, v );
}

					
void glVertexAttribI4uivEXT( GLuint index, const GLuint *v )
{
	gleGetCurrent()->glVertexAttribI4uivEXT( index, v );
}

					
void glVertexAttribI4bvEXT( GLuint index, const GLbyte *v )
{
	gleGetCurrent()->glVertexAttribI4bvEXT( index, v );
}

					
void glVertexAttribI4svEXT( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttribI4svEXT( index, v );
}

					
void glVertexAttribI4ubvEXT( GLuint index, const GLubyte *v )
{
	gleGetCurrent()->glVertexAttribI4ubvEXT( index, v );
}

					
void glVertexAttribI4usvEXT( GLuint index, const GLushort *v )
{
	gleGetCurrent()->glVertexAttribI4usvEXT( index, v );
}

					
void glVertexAttribIPointerEXT( GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glVertexAttribIPointerEXT( index, size, type, stride, pointer );
}

					
void glGetVertexAttribIivEXT( GLuint index, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetVertexAttribIivEXT( index, pname, params );
}

					
void glGetVertexAttribIuivEXT( GLuint index, GLenum pname, GLuint *params )
{
	gleGetCurrent()->glGetVertexAttribIuivEXT( index, pname, params );
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

					
void glHintPGI( GLenum target, GLint mode )
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

					
void glColorTableSGI( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table )
{
	gleGetCurrent()->glColorTableSGI( target, internalformat, width, format, type, table );
}

					
void glColorTableParameterfvSGI( GLenum target, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glColorTableParameterfvSGI( target, pname, params );
}

					
void glColorTableParameterivSGI( GLenum target, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glColorTableParameterivSGI( target, pname, params );
}

					
void glCopyColorTableSGI( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width )
{
	gleGetCurrent()->glCopyColorTableSGI( target, internalformat, x, y, width );
}

					
void glGetColorTableSGI( GLenum target, GLenum format, GLenum type, GLvoid *table )
{
	gleGetCurrent()->glGetColorTableSGI( target, format, type, table );
}

					
void glGetColorTableParameterfvSGI( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetColorTableParameterfvSGI( target, pname, params );
}

					
void glGetColorTableParameterivSGI( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetColorTableParameterivSGI( target, pname, params );
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


// ********* GL_SGIS_detail_texture *********
bool isGL_SGIS_detail_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_detail_texture;
	
	return isSupported;
}

					
void glDetailTexFuncSGIS( GLenum target, GLsizei n, const GLfloat *points )
{
	gleGetCurrent()->glDetailTexFuncSGIS( target, n, points );
}

					
void glGetDetailTexFuncSGIS( GLenum target, GLfloat *points )
{
	gleGetCurrent()->glGetDetailTexFuncSGIS( target, points );
}


// ********* GL_SGIS_fog_function *********
bool isGL_SGIS_fog_function()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_fog_function;
	
	return isSupported;
}

					
void glFogFuncSGIS( GLsizei n, const GLfloat *points )
{
	gleGetCurrent()->glFogFuncSGIS( n, points );
}

					
void glGetFogFuncSGIS( GLfloat *points )
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

					
void glSampleMaskSGIS( GLclampf value, GLboolean invert )
{
	gleGetCurrent()->glSampleMaskSGIS( value, invert );
}

					
void glSamplePatternSGIS( GLenum pattern )
{
	gleGetCurrent()->glSamplePatternSGIS( pattern );
}


// ********* GL_SGIS_pixel_texture *********
bool isGL_SGIS_pixel_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_pixel_texture;
	
	return isSupported;
}

					
void glPixelTexGenParameteriSGIS( GLenum pname, GLint param )
{
	gleGetCurrent()->glPixelTexGenParameteriSGIS( pname, param );
}

					
void glPixelTexGenParameterivSGIS( GLenum pname, const GLint *params )
{
	gleGetCurrent()->glPixelTexGenParameterivSGIS( pname, params );
}

					
void glPixelTexGenParameterfSGIS( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glPixelTexGenParameterfSGIS( pname, param );
}

					
void glPixelTexGenParameterfvSGIS( GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glPixelTexGenParameterfvSGIS( pname, params );
}

					
void glGetPixelTexGenParameterivSGIS( GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetPixelTexGenParameterivSGIS( pname, params );
}

					
void glGetPixelTexGenParameterfvSGIS( GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetPixelTexGenParameterfvSGIS( pname, params );
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

					
void glPointParameterfSGIS( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glPointParameterfSGIS( pname, param );
}

					
void glPointParameterfvSGIS( GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glPointParameterfvSGIS( pname, params );
}


// ********* GL_SGIS_sharpen_texture *********
bool isGL_SGIS_sharpen_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_sharpen_texture;
	
	return isSupported;
}

					
void glSharpenTexFuncSGIS( GLenum target, GLsizei n, const GLfloat *points )
{
	gleGetCurrent()->glSharpenTexFuncSGIS( target, n, points );
}

					
void glGetSharpenTexFuncSGIS( GLenum target, GLfloat *points )
{
	gleGetCurrent()->glGetSharpenTexFuncSGIS( target, points );
}


// ********* GL_SGIS_texture4D *********
bool isGL_SGIS_texture4D()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIS_texture4D;
	
	return isSupported;
}

					
void glTexImage4DSGIS( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels )
{
	gleGetCurrent()->glTexImage4DSGIS( target, level, internalformat, width, height, depth, size4d, border, format, type, pixels );
}

					
void glTexSubImage4DSGIS( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels )
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

					
void glTextureColorMaskSGIS( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha )
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

					
void glGetTexFilterFuncSGIS( GLenum target, GLenum filter, GLfloat *weights )
{
	gleGetCurrent()->glGetTexFilterFuncSGIS( target, filter, weights );
}

					
void glTexFilterFuncSGIS( GLenum target, GLenum filter, GLsizei n, const GLfloat *weights )
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

					
void glAsyncMarkerSGIX( GLuint marker )
{
	gleGetCurrent()->glAsyncMarkerSGIX( marker );
}

					
GLint glFinishAsyncSGIX( GLuint *markerp )
{
	return ( gleGetCurrent()->glFinishAsyncSGIX( markerp) );
}

					
GLint glPollAsyncSGIX( GLuint *markerp )
{
	return ( gleGetCurrent()->glPollAsyncSGIX( markerp) );
}

					
GLuint glGenAsyncMarkersSGIX( GLsizei range )
{
	return ( gleGetCurrent()->glGenAsyncMarkersSGIX( range) );
}

					
void glDeleteAsyncMarkersSGIX( GLuint marker, GLsizei range )
{
	gleGetCurrent()->glDeleteAsyncMarkersSGIX( marker, range );
}

					
GLboolean glIsAsyncMarkerSGIX( GLuint marker )
{
	return ( gleGetCurrent()->glIsAsyncMarkerSGIX( marker) );
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

					
void glFlushRasterSGIX( void )
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

					
void glFragmentColorMaterialSGIX( GLenum face, GLenum mode )
{
	gleGetCurrent()->glFragmentColorMaterialSGIX( face, mode );
}

					
void glFragmentLightfSGIX( GLenum light, GLenum pname, GLfloat param )
{
	gleGetCurrent()->glFragmentLightfSGIX( light, pname, param );
}

					
void glFragmentLightfvSGIX( GLenum light, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glFragmentLightfvSGIX( light, pname, params );
}

					
void glFragmentLightiSGIX( GLenum light, GLenum pname, GLint param )
{
	gleGetCurrent()->glFragmentLightiSGIX( light, pname, param );
}

					
void glFragmentLightivSGIX( GLenum light, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glFragmentLightivSGIX( light, pname, params );
}

					
void glFragmentLightModelfSGIX( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glFragmentLightModelfSGIX( pname, param );
}

					
void glFragmentLightModelfvSGIX( GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glFragmentLightModelfvSGIX( pname, params );
}

					
void glFragmentLightModeliSGIX( GLenum pname, GLint param )
{
	gleGetCurrent()->glFragmentLightModeliSGIX( pname, param );
}

					
void glFragmentLightModelivSGIX( GLenum pname, const GLint *params )
{
	gleGetCurrent()->glFragmentLightModelivSGIX( pname, params );
}

					
void glFragmentMaterialfSGIX( GLenum face, GLenum pname, GLfloat param )
{
	gleGetCurrent()->glFragmentMaterialfSGIX( face, pname, param );
}

					
void glFragmentMaterialfvSGIX( GLenum face, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glFragmentMaterialfvSGIX( face, pname, params );
}

					
void glFragmentMaterialiSGIX( GLenum face, GLenum pname, GLint param )
{
	gleGetCurrent()->glFragmentMaterialiSGIX( face, pname, param );
}

					
void glFragmentMaterialivSGIX( GLenum face, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glFragmentMaterialivSGIX( face, pname, params );
}

					
void glGetFragmentLightfvSGIX( GLenum light, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetFragmentLightfvSGIX( light, pname, params );
}

					
void glGetFragmentLightivSGIX( GLenum light, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetFragmentLightivSGIX( light, pname, params );
}

					
void glGetFragmentMaterialfvSGIX( GLenum face, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetFragmentMaterialfvSGIX( face, pname, params );
}

					
void glGetFragmentMaterialivSGIX( GLenum face, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetFragmentMaterialivSGIX( face, pname, params );
}

					
void glLightEnviSGIX( GLenum pname, GLint param )
{
	gleGetCurrent()->glLightEnviSGIX( pname, param );
}


// ********* GL_SGIX_framezoom *********
bool isGL_SGIX_framezoom()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_framezoom;
	
	return isSupported;
}

					
void glFrameZoomSGIX( GLint factor )
{
	gleGetCurrent()->glFrameZoomSGIX( factor );
}


// ********* GL_SGIX_igloo_interface *********
bool isGL_SGIX_igloo_interface()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_igloo_interface;
	
	return isSupported;
}

					
void glIglooInterfaceSGIX( GLenum pname, const GLvoid *params )
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

					
GLint glGetInstrumentsSGIX( void )
{
	return ( gleGetCurrent()->glGetInstrumentsSGIX( ) );
}

					
void glInstrumentsBufferSGIX( GLsizei size, GLint *buffer )
{
	gleGetCurrent()->glInstrumentsBufferSGIX( size, buffer );
}

					
GLint glPollInstrumentsSGIX( GLint *marker_p )
{
	return ( gleGetCurrent()->glPollInstrumentsSGIX( marker_p) );
}

					
void glReadInstrumentsSGIX( GLint marker )
{
	gleGetCurrent()->glReadInstrumentsSGIX( marker );
}

					
void glStartInstrumentsSGIX( void )
{
	gleGetCurrent()->glStartInstrumentsSGIX(  );
}

					
void glStopInstrumentsSGIX( GLint marker )
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

					
void glGetListParameterfvSGIX( GLuint list, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetListParameterfvSGIX( list, pname, params );
}

					
void glGetListParameterivSGIX( GLuint list, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetListParameterivSGIX( list, pname, params );
}

					
void glListParameterfSGIX( GLuint list, GLenum pname, GLfloat param )
{
	gleGetCurrent()->glListParameterfSGIX( list, pname, param );
}

					
void glListParameterfvSGIX( GLuint list, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glListParameterfvSGIX( list, pname, params );
}

					
void glListParameteriSGIX( GLuint list, GLenum pname, GLint param )
{
	gleGetCurrent()->glListParameteriSGIX( list, pname, param );
}

					
void glListParameterivSGIX( GLuint list, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glListParameterivSGIX( list, pname, params );
}


// ********* GL_SGIX_pixel_texture *********
bool isGL_SGIX_pixel_texture()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_pixel_texture;
	
	return isSupported;
}

					
void glPixelTexGenSGIX( GLenum mode )
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

					
void glDeformationMap3dSGIX( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points )
{
	gleGetCurrent()->glDeformationMap3dSGIX( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points );
}

					
void glDeformationMap3fSGIX( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points )
{
	gleGetCurrent()->glDeformationMap3fSGIX( target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points );
}

					
void glDeformSGIX( GLbitfield mask )
{
	gleGetCurrent()->glDeformSGIX( mask );
}

					
void glLoadIdentityDeformationMapSGIX( GLbitfield mask )
{
	gleGetCurrent()->glLoadIdentityDeformationMapSGIX( mask );
}


// ********* GL_SGIX_reference_plane *********
bool isGL_SGIX_reference_plane()
{
	const bool isSupported = gleGetCurrent()->isGL_SGIX_reference_plane;
	
	return isSupported;
}

					
void glReferencePlaneSGIX( const GLdouble *equation )
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

					
void glSpriteParameterfSGIX( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glSpriteParameterfSGIX( pname, param );
}

					
void glSpriteParameterfvSGIX( GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glSpriteParameterfvSGIX( pname, params );
}

					
void glSpriteParameteriSGIX( GLenum pname, GLint param )
{
	gleGetCurrent()->glSpriteParameteriSGIX( pname, param );
}

					
void glSpriteParameterivSGIX( GLenum pname, const GLint *params )
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

					
void glTagSampleBufferSGIX( void )
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

					
void glGlobalAlphaFactorbSUN( GLbyte factor )
{
	gleGetCurrent()->glGlobalAlphaFactorbSUN( factor );
}

					
void glGlobalAlphaFactorsSUN( GLshort factor )
{
	gleGetCurrent()->glGlobalAlphaFactorsSUN( factor );
}

					
void glGlobalAlphaFactoriSUN( GLint factor )
{
	gleGetCurrent()->glGlobalAlphaFactoriSUN( factor );
}

					
void glGlobalAlphaFactorfSUN( GLfloat factor )
{
	gleGetCurrent()->glGlobalAlphaFactorfSUN( factor );
}

					
void glGlobalAlphaFactordSUN( GLdouble factor )
{
	gleGetCurrent()->glGlobalAlphaFactordSUN( factor );
}

					
void glGlobalAlphaFactorubSUN( GLubyte factor )
{
	gleGetCurrent()->glGlobalAlphaFactorubSUN( factor );
}

					
void glGlobalAlphaFactorusSUN( GLushort factor )
{
	gleGetCurrent()->glGlobalAlphaFactorusSUN( factor );
}

					
void glGlobalAlphaFactoruiSUN( GLuint factor )
{
	gleGetCurrent()->glGlobalAlphaFactoruiSUN( factor );
}


// ********* GL_SUN_mesh_array *********
bool isGL_SUN_mesh_array()
{
	const bool isSupported = gleGetCurrent()->isGL_SUN_mesh_array;
	
	return isSupported;
}

					
void glDrawMeshArraysSUN( GLenum mode, GLint first, GLsizei count, GLsizei width )
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

					
void glReplacementCodeuiSUN( GLuint code )
{
	gleGetCurrent()->glReplacementCodeuiSUN( code );
}

					
void glReplacementCodeusSUN( GLushort code )
{
	gleGetCurrent()->glReplacementCodeusSUN( code );
}

					
void glReplacementCodeubSUN( GLubyte code )
{
	gleGetCurrent()->glReplacementCodeubSUN( code );
}

					
void glReplacementCodeuivSUN( const GLuint *code )
{
	gleGetCurrent()->glReplacementCodeuivSUN( code );
}

					
void glReplacementCodeusvSUN( const GLushort *code )
{
	gleGetCurrent()->glReplacementCodeusvSUN( code );
}

					
void glReplacementCodeubvSUN( const GLubyte *code )
{
	gleGetCurrent()->glReplacementCodeubvSUN( code );
}

					
void glReplacementCodePointerSUN( GLenum type, GLsizei stride, const GLvoid* *pointer )
{
	gleGetCurrent()->glReplacementCodePointerSUN( type, stride, pointer );
}


// ********* GL_SUN_vertex *********
bool isGL_SUN_vertex()
{
	const bool isSupported = gleGetCurrent()->isGL_SUN_vertex;
	
	return isSupported;
}

					
void glColor4ubVertex2fSUN( GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y )
{
	gleGetCurrent()->glColor4ubVertex2fSUN( r, g, b, a, x, y );
}

					
void glColor4ubVertex2fvSUN( const GLubyte *c, const GLfloat *v )
{
	gleGetCurrent()->glColor4ubVertex2fvSUN( c, v );
}

					
void glColor4ubVertex3fSUN( GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glColor4ubVertex3fSUN( r, g, b, a, x, y, z );
}

					
void glColor4ubVertex3fvSUN( const GLubyte *c, const GLfloat *v )
{
	gleGetCurrent()->glColor4ubVertex3fvSUN( c, v );
}

					
void glColor3fVertex3fSUN( GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glColor3fVertex3fSUN( r, g, b, x, y, z );
}

					
void glColor3fVertex3fvSUN( const GLfloat *c, const GLfloat *v )
{
	gleGetCurrent()->glColor3fVertex3fvSUN( c, v );
}

					
void glNormal3fVertex3fSUN( GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glNormal3fVertex3fSUN( nx, ny, nz, x, y, z );
}

					
void glNormal3fVertex3fvSUN( const GLfloat *n, const GLfloat *v )
{
	gleGetCurrent()->glNormal3fVertex3fvSUN( n, v );
}

					
void glColor4fNormal3fVertex3fSUN( GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glColor4fNormal3fVertex3fSUN( r, g, b, a, nx, ny, nz, x, y, z );
}

					
void glColor4fNormal3fVertex3fvSUN( const GLfloat *c, const GLfloat *n, const GLfloat *v )
{
	gleGetCurrent()->glColor4fNormal3fVertex3fvSUN( c, n, v );
}

					
void glTexCoord2fVertex3fSUN( GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glTexCoord2fVertex3fSUN( s, t, x, y, z );
}

					
void glTexCoord2fVertex3fvSUN( const GLfloat *tc, const GLfloat *v )
{
	gleGetCurrent()->glTexCoord2fVertex3fvSUN( tc, v );
}

					
void glTexCoord4fVertex4fSUN( GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glTexCoord4fVertex4fSUN( s, t, p, q, x, y, z, w );
}

					
void glTexCoord4fVertex4fvSUN( const GLfloat *tc, const GLfloat *v )
{
	gleGetCurrent()->glTexCoord4fVertex4fvSUN( tc, v );
}

					
void glTexCoord2fColor4ubVertex3fSUN( GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glTexCoord2fColor4ubVertex3fSUN( s, t, r, g, b, a, x, y, z );
}

					
void glTexCoord2fColor4ubVertex3fvSUN( const GLfloat *tc, const GLubyte *c, const GLfloat *v )
{
	gleGetCurrent()->glTexCoord2fColor4ubVertex3fvSUN( tc, c, v );
}

					
void glTexCoord2fColor3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glTexCoord2fColor3fVertex3fSUN( s, t, r, g, b, x, y, z );
}

					
void glTexCoord2fColor3fVertex3fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *v )
{
	gleGetCurrent()->glTexCoord2fColor3fVertex3fvSUN( tc, c, v );
}

					
void glTexCoord2fNormal3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glTexCoord2fNormal3fVertex3fSUN( s, t, nx, ny, nz, x, y, z );
}

					
void glTexCoord2fNormal3fVertex3fvSUN( const GLfloat *tc, const GLfloat *n, const GLfloat *v )
{
	gleGetCurrent()->glTexCoord2fNormal3fVertex3fvSUN( tc, n, v );
}

					
void glTexCoord2fColor4fNormal3fVertex3fSUN( GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glTexCoord2fColor4fNormal3fVertex3fSUN( s, t, r, g, b, a, nx, ny, nz, x, y, z );
}

					
void glTexCoord2fColor4fNormal3fVertex3fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v )
{
	gleGetCurrent()->glTexCoord2fColor4fNormal3fVertex3fvSUN( tc, c, n, v );
}

					
void glTexCoord4fColor4fNormal3fVertex4fSUN( GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glTexCoord4fColor4fNormal3fVertex4fSUN( s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w );
}

					
void glTexCoord4fColor4fNormal3fVertex4fvSUN( const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v )
{
	gleGetCurrent()->glTexCoord4fColor4fNormal3fVertex4fvSUN( tc, c, n, v );
}

					
void glReplacementCodeuiVertex3fSUN( GLuint rc, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glReplacementCodeuiVertex3fSUN( rc, x, y, z );
}

					
void glReplacementCodeuiVertex3fvSUN( const GLuint *rc, const GLfloat *v )
{
	gleGetCurrent()->glReplacementCodeuiVertex3fvSUN( rc, v );
}

					
void glReplacementCodeuiColor4ubVertex3fSUN( GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glReplacementCodeuiColor4ubVertex3fSUN( rc, r, g, b, a, x, y, z );
}

					
void glReplacementCodeuiColor4ubVertex3fvSUN( const GLuint *rc, const GLubyte *c, const GLfloat *v )
{
	gleGetCurrent()->glReplacementCodeuiColor4ubVertex3fvSUN( rc, c, v );
}

					
void glReplacementCodeuiColor3fVertex3fSUN( GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glReplacementCodeuiColor3fVertex3fSUN( rc, r, g, b, x, y, z );
}

					
void glReplacementCodeuiColor3fVertex3fvSUN( const GLuint *rc, const GLfloat *c, const GLfloat *v )
{
	gleGetCurrent()->glReplacementCodeuiColor3fVertex3fvSUN( rc, c, v );
}

					
void glReplacementCodeuiNormal3fVertex3fSUN( GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glReplacementCodeuiNormal3fVertex3fSUN( rc, nx, ny, nz, x, y, z );
}

					
void glReplacementCodeuiNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *n, const GLfloat *v )
{
	gleGetCurrent()->glReplacementCodeuiNormal3fVertex3fvSUN( rc, n, v );
}

					
void glReplacementCodeuiColor4fNormal3fVertex3fSUN( GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glReplacementCodeuiColor4fNormal3fVertex3fSUN( rc, r, g, b, a, nx, ny, nz, x, y, z );
}

					
void glReplacementCodeuiColor4fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v )
{
	gleGetCurrent()->glReplacementCodeuiColor4fNormal3fVertex3fvSUN( rc, c, n, v );
}

					
void glReplacementCodeuiTexCoord2fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fVertex3fSUN( rc, s, t, x, y, z );
}

					
void glReplacementCodeuiTexCoord2fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *v )
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fVertex3fvSUN( rc, tc, v );
}

					
void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN( rc, s, t, nx, ny, nz, x, y, z );
}

					
void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v )
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN( rc, tc, n, v );
}

					
void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN( GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN( rc, s, t, r, g, b, a, nx, ny, nz, x, y, z );
}

					
void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN( const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v )
{
	gleGetCurrent()->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN( rc, tc, c, n, v );
}


// ********* GL_SUNX_constant_data *********
bool isGL_SUNX_constant_data()
{
	const bool isSupported = gleGetCurrent()->isGL_SUNX_constant_data;
	
	return isSupported;
}

					
void glFinishTextureSUNX( void )
{
	gleGetCurrent()->glFinishTextureSUNX(  );
}


// ********* GL_VERSION_1_2 *********
bool isGL_VERSION_1_2()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_2;
	
	return isSupported;
}

					
void glBlendColor( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha )
{
	gleGetCurrent()->glBlendColor( red, green, blue, alpha );
}

					
void glBlendEquation( GLenum mode )
{
	gleGetCurrent()->glBlendEquation( mode );
}

					
void glDrawRangeElements( GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices )
{
	gleGetCurrent()->glDrawRangeElements( mode, start, end, count, type, indices );
}

					
void glColorTable( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table )
{
	gleGetCurrent()->glColorTable( target, internalformat, width, format, type, table );
}

					
void glColorTableParameterfv( GLenum target, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glColorTableParameterfv( target, pname, params );
}

					
void glColorTableParameteriv( GLenum target, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glColorTableParameteriv( target, pname, params );
}

					
void glCopyColorTable( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width )
{
	gleGetCurrent()->glCopyColorTable( target, internalformat, x, y, width );
}

					
void glGetColorTable( GLenum target, GLenum format, GLenum type, GLvoid *table )
{
	gleGetCurrent()->glGetColorTable( target, format, type, table );
}

					
void glGetColorTableParameterfv( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetColorTableParameterfv( target, pname, params );
}

					
void glGetColorTableParameteriv( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetColorTableParameteriv( target, pname, params );
}

					
void glColorSubTable( GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data )
{
	gleGetCurrent()->glColorSubTable( target, start, count, format, type, data );
}

					
void glCopyColorSubTable( GLenum target, GLsizei start, GLint x, GLint y, GLsizei width )
{
	gleGetCurrent()->glCopyColorSubTable( target, start, x, y, width );
}

					
void glConvolutionFilter1D( GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image )
{
	gleGetCurrent()->glConvolutionFilter1D( target, internalformat, width, format, type, image );
}

					
void glConvolutionFilter2D( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image )
{
	gleGetCurrent()->glConvolutionFilter2D( target, internalformat, width, height, format, type, image );
}

					
void glConvolutionParameterf( GLenum target, GLenum pname, GLfloat params )
{
	gleGetCurrent()->glConvolutionParameterf( target, pname, params );
}

					
void glConvolutionParameterfv( GLenum target, GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glConvolutionParameterfv( target, pname, params );
}

					
void glConvolutionParameteri( GLenum target, GLenum pname, GLint params )
{
	gleGetCurrent()->glConvolutionParameteri( target, pname, params );
}

					
void glConvolutionParameteriv( GLenum target, GLenum pname, const GLint *params )
{
	gleGetCurrent()->glConvolutionParameteriv( target, pname, params );
}

					
void glCopyConvolutionFilter1D( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width )
{
	gleGetCurrent()->glCopyConvolutionFilter1D( target, internalformat, x, y, width );
}

					
void glCopyConvolutionFilter2D( GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height )
{
	gleGetCurrent()->glCopyConvolutionFilter2D( target, internalformat, x, y, width, height );
}

					
void glGetConvolutionFilter( GLenum target, GLenum format, GLenum type, GLvoid *image )
{
	gleGetCurrent()->glGetConvolutionFilter( target, format, type, image );
}

					
void glGetConvolutionParameterfv( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetConvolutionParameterfv( target, pname, params );
}

					
void glGetConvolutionParameteriv( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetConvolutionParameteriv( target, pname, params );
}

					
void glGetSeparableFilter( GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span )
{
	gleGetCurrent()->glGetSeparableFilter( target, format, type, row, column, span );
}

					
void glSeparableFilter2D( GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column )
{
	gleGetCurrent()->glSeparableFilter2D( target, internalformat, width, height, format, type, row, column );
}

					
void glGetHistogram( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values )
{
	gleGetCurrent()->glGetHistogram( target, reset, format, type, values );
}

					
void glGetHistogramParameterfv( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetHistogramParameterfv( target, pname, params );
}

					
void glGetHistogramParameteriv( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetHistogramParameteriv( target, pname, params );
}

					
void glGetMinmax( GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values )
{
	gleGetCurrent()->glGetMinmax( target, reset, format, type, values );
}

					
void glGetMinmaxParameterfv( GLenum target, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetMinmaxParameterfv( target, pname, params );
}

					
void glGetMinmaxParameteriv( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetMinmaxParameteriv( target, pname, params );
}

					
void glHistogram( GLenum target, GLsizei width, GLenum internalformat, GLboolean sink )
{
	gleGetCurrent()->glHistogram( target, width, internalformat, sink );
}

					
void glMinmax( GLenum target, GLenum internalformat, GLboolean sink )
{
	gleGetCurrent()->glMinmax( target, internalformat, sink );
}

					
void glResetHistogram( GLenum target )
{
	gleGetCurrent()->glResetHistogram( target );
}

					
void glResetMinmax( GLenum target )
{
	gleGetCurrent()->glResetMinmax( target );
}

					
void glTexImage3D( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels )
{
	gleGetCurrent()->glTexImage3D( target, level, internalformat, width, height, depth, border, format, type, pixels );
}

					
void glTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels )
{
	gleGetCurrent()->glTexSubImage3D( target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels );
}

					
void glCopyTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height )
{
	gleGetCurrent()->glCopyTexSubImage3D( target, level, xoffset, yoffset, zoffset, x, y, width, height );
}


// ********* GL_VERSION_1_3 *********
bool isGL_VERSION_1_3()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_3;
	
	return isSupported;
}

					
void glActiveTexture( GLenum texture )
{
	gleGetCurrent()->glActiveTexture( texture );
}

					
void glClientActiveTexture( GLenum texture )
{
	gleGetCurrent()->glClientActiveTexture( texture );
}

					
void glMultiTexCoord1d( GLenum target, GLdouble s )
{
	gleGetCurrent()->glMultiTexCoord1d( target, s );
}

					
void glMultiTexCoord1dv( GLenum target, const GLdouble *v )
{
	gleGetCurrent()->glMultiTexCoord1dv( target, v );
}

					
void glMultiTexCoord1f( GLenum target, GLfloat s )
{
	gleGetCurrent()->glMultiTexCoord1f( target, s );
}

					
void glMultiTexCoord1fv( GLenum target, const GLfloat *v )
{
	gleGetCurrent()->glMultiTexCoord1fv( target, v );
}

					
void glMultiTexCoord1i( GLenum target, GLint s )
{
	gleGetCurrent()->glMultiTexCoord1i( target, s );
}

					
void glMultiTexCoord1iv( GLenum target, const GLint *v )
{
	gleGetCurrent()->glMultiTexCoord1iv( target, v );
}

					
void glMultiTexCoord1s( GLenum target, GLshort s )
{
	gleGetCurrent()->glMultiTexCoord1s( target, s );
}

					
void glMultiTexCoord1sv( GLenum target, const GLshort *v )
{
	gleGetCurrent()->glMultiTexCoord1sv( target, v );
}

					
void glMultiTexCoord2d( GLenum target, GLdouble s, GLdouble t )
{
	gleGetCurrent()->glMultiTexCoord2d( target, s, t );
}

					
void glMultiTexCoord2dv( GLenum target, const GLdouble *v )
{
	gleGetCurrent()->glMultiTexCoord2dv( target, v );
}

					
void glMultiTexCoord2f( GLenum target, GLfloat s, GLfloat t )
{
	gleGetCurrent()->glMultiTexCoord2f( target, s, t );
}

					
void glMultiTexCoord2fv( GLenum target, const GLfloat *v )
{
	gleGetCurrent()->glMultiTexCoord2fv( target, v );
}

					
void glMultiTexCoord2i( GLenum target, GLint s, GLint t )
{
	gleGetCurrent()->glMultiTexCoord2i( target, s, t );
}

					
void glMultiTexCoord2iv( GLenum target, const GLint *v )
{
	gleGetCurrent()->glMultiTexCoord2iv( target, v );
}

					
void glMultiTexCoord2s( GLenum target, GLshort s, GLshort t )
{
	gleGetCurrent()->glMultiTexCoord2s( target, s, t );
}

					
void glMultiTexCoord2sv( GLenum target, const GLshort *v )
{
	gleGetCurrent()->glMultiTexCoord2sv( target, v );
}

					
void glMultiTexCoord3d( GLenum target, GLdouble s, GLdouble t, GLdouble r )
{
	gleGetCurrent()->glMultiTexCoord3d( target, s, t, r );
}

					
void glMultiTexCoord3dv( GLenum target, const GLdouble *v )
{
	gleGetCurrent()->glMultiTexCoord3dv( target, v );
}

					
void glMultiTexCoord3f( GLenum target, GLfloat s, GLfloat t, GLfloat r )
{
	gleGetCurrent()->glMultiTexCoord3f( target, s, t, r );
}

					
void glMultiTexCoord3fv( GLenum target, const GLfloat *v )
{
	gleGetCurrent()->glMultiTexCoord3fv( target, v );
}

					
void glMultiTexCoord3i( GLenum target, GLint s, GLint t, GLint r )
{
	gleGetCurrent()->glMultiTexCoord3i( target, s, t, r );
}

					
void glMultiTexCoord3iv( GLenum target, const GLint *v )
{
	gleGetCurrent()->glMultiTexCoord3iv( target, v );
}

					
void glMultiTexCoord3s( GLenum target, GLshort s, GLshort t, GLshort r )
{
	gleGetCurrent()->glMultiTexCoord3s( target, s, t, r );
}

					
void glMultiTexCoord3sv( GLenum target, const GLshort *v )
{
	gleGetCurrent()->glMultiTexCoord3sv( target, v );
}

					
void glMultiTexCoord4d( GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q )
{
	gleGetCurrent()->glMultiTexCoord4d( target, s, t, r, q );
}

					
void glMultiTexCoord4dv( GLenum target, const GLdouble *v )
{
	gleGetCurrent()->glMultiTexCoord4dv( target, v );
}

					
void glMultiTexCoord4f( GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q )
{
	gleGetCurrent()->glMultiTexCoord4f( target, s, t, r, q );
}

					
void glMultiTexCoord4fv( GLenum target, const GLfloat *v )
{
	gleGetCurrent()->glMultiTexCoord4fv( target, v );
}

					
void glMultiTexCoord4i( GLenum target, GLint s, GLint t, GLint r, GLint q )
{
	gleGetCurrent()->glMultiTexCoord4i( target, s, t, r, q );
}

					
void glMultiTexCoord4iv( GLenum target, const GLint *v )
{
	gleGetCurrent()->glMultiTexCoord4iv( target, v );
}

					
void glMultiTexCoord4s( GLenum target, GLshort s, GLshort t, GLshort r, GLshort q )
{
	gleGetCurrent()->glMultiTexCoord4s( target, s, t, r, q );
}

					
void glMultiTexCoord4sv( GLenum target, const GLshort *v )
{
	gleGetCurrent()->glMultiTexCoord4sv( target, v );
}

					
void glLoadTransposeMatrixf( const GLfloat *m )
{
	gleGetCurrent()->glLoadTransposeMatrixf( m );
}

					
void glLoadTransposeMatrixd( const GLdouble *m )
{
	gleGetCurrent()->glLoadTransposeMatrixd( m );
}

					
void glMultTransposeMatrixf( const GLfloat *m )
{
	gleGetCurrent()->glMultTransposeMatrixf( m );
}

					
void glMultTransposeMatrixd( const GLdouble *m )
{
	gleGetCurrent()->glMultTransposeMatrixd( m );
}

					
void glSampleCoverage( GLclampf value, GLboolean invert )
{
	gleGetCurrent()->glSampleCoverage( value, invert );
}

					
void glCompressedTexImage3D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexImage3D( target, level, internalformat, width, height, depth, border, imageSize, data );
}

					
void glCompressedTexImage2D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexImage2D( target, level, internalformat, width, height, border, imageSize, data );
}

					
void glCompressedTexImage1D( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexImage1D( target, level, internalformat, width, border, imageSize, data );
}

					
void glCompressedTexSubImage3D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexSubImage3D( target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data );
}

					
void glCompressedTexSubImage2D( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexSubImage2D( target, level, xoffset, yoffset, width, height, format, imageSize, data );
}

					
void glCompressedTexSubImage1D( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data )
{
	gleGetCurrent()->glCompressedTexSubImage1D( target, level, xoffset, width, format, imageSize, data );
}

					
void glGetCompressedTexImage( GLenum target, GLint level, GLvoid *img )
{
	gleGetCurrent()->glGetCompressedTexImage( target, level, img );
}


// ********* GL_VERSION_1_4 *********
bool isGL_VERSION_1_4()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_4;
	
	return isSupported;
}

					
void glBlendFuncSeparate( GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha )
{
	gleGetCurrent()->glBlendFuncSeparate( sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha );
}

					
void glFogCoordf( GLfloat coord )
{
	gleGetCurrent()->glFogCoordf( coord );
}

					
void glFogCoordfv( const GLfloat *coord )
{
	gleGetCurrent()->glFogCoordfv( coord );
}

					
void glFogCoordd( GLdouble coord )
{
	gleGetCurrent()->glFogCoordd( coord );
}

					
void glFogCoorddv( const GLdouble *coord )
{
	gleGetCurrent()->glFogCoorddv( coord );
}

					
void glFogCoordPointer( GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glFogCoordPointer( type, stride, pointer );
}

					
void glMultiDrawArrays( GLenum mode, GLint *first, GLsizei *count, GLsizei primcount )
{
	gleGetCurrent()->glMultiDrawArrays( mode, first, count, primcount );
}

					
void glMultiDrawElements( GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount )
{
	gleGetCurrent()->glMultiDrawElements( mode, count, type, indices, primcount );
}

					
void glPointParameterf( GLenum pname, GLfloat param )
{
	gleGetCurrent()->glPointParameterf( pname, param );
}

					
void glPointParameterfv( GLenum pname, const GLfloat *params )
{
	gleGetCurrent()->glPointParameterfv( pname, params );
}

					
void glPointParameteri( GLenum pname, GLint param )
{
	gleGetCurrent()->glPointParameteri( pname, param );
}

					
void glPointParameteriv( GLenum pname, const GLint *params )
{
	gleGetCurrent()->glPointParameteriv( pname, params );
}

					
void glSecondaryColor3b( GLbyte red, GLbyte green, GLbyte blue )
{
	gleGetCurrent()->glSecondaryColor3b( red, green, blue );
}

					
void glSecondaryColor3bv( const GLbyte *v )
{
	gleGetCurrent()->glSecondaryColor3bv( v );
}

					
void glSecondaryColor3d( GLdouble red, GLdouble green, GLdouble blue )
{
	gleGetCurrent()->glSecondaryColor3d( red, green, blue );
}

					
void glSecondaryColor3dv( const GLdouble *v )
{
	gleGetCurrent()->glSecondaryColor3dv( v );
}

					
void glSecondaryColor3f( GLfloat red, GLfloat green, GLfloat blue )
{
	gleGetCurrent()->glSecondaryColor3f( red, green, blue );
}

					
void glSecondaryColor3fv( const GLfloat *v )
{
	gleGetCurrent()->glSecondaryColor3fv( v );
}

					
void glSecondaryColor3i( GLint red, GLint green, GLint blue )
{
	gleGetCurrent()->glSecondaryColor3i( red, green, blue );
}

					
void glSecondaryColor3iv( const GLint *v )
{
	gleGetCurrent()->glSecondaryColor3iv( v );
}

					
void glSecondaryColor3s( GLshort red, GLshort green, GLshort blue )
{
	gleGetCurrent()->glSecondaryColor3s( red, green, blue );
}

					
void glSecondaryColor3sv( const GLshort *v )
{
	gleGetCurrent()->glSecondaryColor3sv( v );
}

					
void glSecondaryColor3ub( GLubyte red, GLubyte green, GLubyte blue )
{
	gleGetCurrent()->glSecondaryColor3ub( red, green, blue );
}

					
void glSecondaryColor3ubv( const GLubyte *v )
{
	gleGetCurrent()->glSecondaryColor3ubv( v );
}

					
void glSecondaryColor3ui( GLuint red, GLuint green, GLuint blue )
{
	gleGetCurrent()->glSecondaryColor3ui( red, green, blue );
}

					
void glSecondaryColor3uiv( const GLuint *v )
{
	gleGetCurrent()->glSecondaryColor3uiv( v );
}

					
void glSecondaryColor3us( GLushort red, GLushort green, GLushort blue )
{
	gleGetCurrent()->glSecondaryColor3us( red, green, blue );
}

					
void glSecondaryColor3usv( const GLushort *v )
{
	gleGetCurrent()->glSecondaryColor3usv( v );
}

					
void glSecondaryColorPointer( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glSecondaryColorPointer( size, type, stride, pointer );
}

					
void glWindowPos2d( GLdouble x, GLdouble y )
{
	gleGetCurrent()->glWindowPos2d( x, y );
}

					
void glWindowPos2dv( const GLdouble *v )
{
	gleGetCurrent()->glWindowPos2dv( v );
}

					
void glWindowPos2f( GLfloat x, GLfloat y )
{
	gleGetCurrent()->glWindowPos2f( x, y );
}

					
void glWindowPos2fv( const GLfloat *v )
{
	gleGetCurrent()->glWindowPos2fv( v );
}

					
void glWindowPos2i( GLint x, GLint y )
{
	gleGetCurrent()->glWindowPos2i( x, y );
}

					
void glWindowPos2iv( const GLint *v )
{
	gleGetCurrent()->glWindowPos2iv( v );
}

					
void glWindowPos2s( GLshort x, GLshort y )
{
	gleGetCurrent()->glWindowPos2s( x, y );
}

					
void glWindowPos2sv( const GLshort *v )
{
	gleGetCurrent()->glWindowPos2sv( v );
}

					
void glWindowPos3d( GLdouble x, GLdouble y, GLdouble z )
{
	gleGetCurrent()->glWindowPos3d( x, y, z );
}

					
void glWindowPos3dv( const GLdouble *v )
{
	gleGetCurrent()->glWindowPos3dv( v );
}

					
void glWindowPos3f( GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glWindowPos3f( x, y, z );
}

					
void glWindowPos3fv( const GLfloat *v )
{
	gleGetCurrent()->glWindowPos3fv( v );
}

					
void glWindowPos3i( GLint x, GLint y, GLint z )
{
	gleGetCurrent()->glWindowPos3i( x, y, z );
}

					
void glWindowPos3iv( const GLint *v )
{
	gleGetCurrent()->glWindowPos3iv( v );
}

					
void glWindowPos3s( GLshort x, GLshort y, GLshort z )
{
	gleGetCurrent()->glWindowPos3s( x, y, z );
}

					
void glWindowPos3sv( const GLshort *v )
{
	gleGetCurrent()->glWindowPos3sv( v );
}


// ********* GL_VERSION_1_5 *********
bool isGL_VERSION_1_5()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_1_5;
	
	return isSupported;
}

					
void glGenQueries( GLsizei n, GLuint *ids )
{
	gleGetCurrent()->glGenQueries( n, ids );
}

					
void glDeleteQueries( GLsizei n, const GLuint *ids )
{
	gleGetCurrent()->glDeleteQueries( n, ids );
}

					
GLboolean glIsQuery( GLuint id )
{
	return ( gleGetCurrent()->glIsQuery( id) );
}

					
void glBeginQuery( GLenum target, GLuint id )
{
	gleGetCurrent()->glBeginQuery( target, id );
}

					
void glEndQuery( GLenum target )
{
	gleGetCurrent()->glEndQuery( target );
}

					
void glGetQueryiv( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetQueryiv( target, pname, params );
}

					
void glGetQueryObjectiv( GLuint id, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetQueryObjectiv( id, pname, params );
}

					
void glGetQueryObjectuiv( GLuint id, GLenum pname, GLuint *params )
{
	gleGetCurrent()->glGetQueryObjectuiv( id, pname, params );
}

					
void glBindBuffer( GLenum target, GLuint buffer )
{
	gleGetCurrent()->glBindBuffer( target, buffer );
}

					
void glDeleteBuffers( GLsizei n, const GLuint *buffers )
{
	gleGetCurrent()->glDeleteBuffers( n, buffers );
}

					
void glGenBuffers( GLsizei n, GLuint *buffers )
{
	gleGetCurrent()->glGenBuffers( n, buffers );
}

					
GLboolean glIsBuffer( GLuint buffer )
{
	return ( gleGetCurrent()->glIsBuffer( buffer) );
}

					
void glBufferData( GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage )
{
	gleGetCurrent()->glBufferData( target, size, data, usage );
}

					
void glBufferSubData( GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data )
{
	gleGetCurrent()->glBufferSubData( target, offset, size, data );
}

					
void glGetBufferSubData( GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data )
{
	gleGetCurrent()->glGetBufferSubData( target, offset, size, data );
}

					
GLvoid* glMapBuffer( GLenum target, GLenum access )
{
	return ( gleGetCurrent()->glMapBuffer( target, access) );
}

					
GLboolean glUnmapBuffer( GLenum target )
{
	return ( gleGetCurrent()->glUnmapBuffer( target) );
}

					
void glGetBufferParameteriv( GLenum target, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetBufferParameteriv( target, pname, params );
}

					
void glGetBufferPointerv( GLenum target, GLenum pname, GLvoid* *params )
{
	gleGetCurrent()->glGetBufferPointerv( target, pname, params );
}


// ********* GL_VERSION_2_0 *********
bool isGL_VERSION_2_0()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_2_0;
	
	return isSupported;
}

					
void glBlendEquationSeparate( GLenum modeRGB, GLenum modeAlpha )
{
	gleGetCurrent()->glBlendEquationSeparate( modeRGB, modeAlpha );
}

					
void glDrawBuffers( GLsizei n, const GLenum *bufs )
{
	gleGetCurrent()->glDrawBuffers( n, bufs );
}

					
void glStencilOpSeparate( GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass )
{
	gleGetCurrent()->glStencilOpSeparate( face, sfail, dpfail, dppass );
}

					
void glStencilFuncSeparate( GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask )
{
	gleGetCurrent()->glStencilFuncSeparate( frontfunc, backfunc, ref, mask );
}

					
void glStencilMaskSeparate( GLenum face, GLuint mask )
{
	gleGetCurrent()->glStencilMaskSeparate( face, mask );
}

					
void glAttachShader( GLuint program, GLuint shader )
{
	gleGetCurrent()->glAttachShader( program, shader );
}

					
void glBindAttribLocation( GLuint program, GLuint index, const GLchar *name )
{
	gleGetCurrent()->glBindAttribLocation( program, index, name );
}

					
void glCompileShader( GLuint shader )
{
	gleGetCurrent()->glCompileShader( shader );
}

					
GLuint glCreateProgram( void )
{
	return ( gleGetCurrent()->glCreateProgram( ) );
}

					
GLuint glCreateShader( GLenum type )
{
	return ( gleGetCurrent()->glCreateShader( type) );
}

					
void glDeleteProgram( GLuint program )
{
	gleGetCurrent()->glDeleteProgram( program );
}

					
void glDeleteShader( GLuint shader )
{
	gleGetCurrent()->glDeleteShader( shader );
}

					
void glDetachShader( GLuint program, GLuint shader )
{
	gleGetCurrent()->glDetachShader( program, shader );
}

					
void glDisableVertexAttribArray( GLuint index )
{
	gleGetCurrent()->glDisableVertexAttribArray( index );
}

					
void glEnableVertexAttribArray( GLuint index )
{
	gleGetCurrent()->glEnableVertexAttribArray( index );
}

					
void glGetActiveAttrib( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name )
{
	gleGetCurrent()->glGetActiveAttrib( program, index, bufSize, length, size, type, name );
}

					
void glGetActiveUniform( GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name )
{
	gleGetCurrent()->glGetActiveUniform( program, index, bufSize, length, size, type, name );
}

					
void glGetAttachedShaders( GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj )
{
	gleGetCurrent()->glGetAttachedShaders( program, maxCount, count, obj );
}

					
GLint glGetAttribLocation( GLuint program, const GLchar *name )
{
	return ( gleGetCurrent()->glGetAttribLocation( program, name) );
}

					
void glGetProgramiv( GLuint program, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetProgramiv( program, pname, params );
}

					
void glGetProgramInfoLog( GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog )
{
	gleGetCurrent()->glGetProgramInfoLog( program, bufSize, length, infoLog );
}

					
void glGetShaderiv( GLuint shader, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetShaderiv( shader, pname, params );
}

					
void glGetShaderInfoLog( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog )
{
	gleGetCurrent()->glGetShaderInfoLog( shader, bufSize, length, infoLog );
}

					
void glGetShaderSource( GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source )
{
	gleGetCurrent()->glGetShaderSource( shader, bufSize, length, source );
}

					
GLint glGetUniformLocation( GLuint program, const GLchar *name )
{
	return ( gleGetCurrent()->glGetUniformLocation( program, name) );
}

					
void glGetUniformfv( GLuint program, GLint location, GLfloat *params )
{
	gleGetCurrent()->glGetUniformfv( program, location, params );
}

					
void glGetUniformiv( GLuint program, GLint location, GLint *params )
{
	gleGetCurrent()->glGetUniformiv( program, location, params );
}

					
void glGetVertexAttribdv( GLuint index, GLenum pname, GLdouble *params )
{
	gleGetCurrent()->glGetVertexAttribdv( index, pname, params );
}

					
void glGetVertexAttribfv( GLuint index, GLenum pname, GLfloat *params )
{
	gleGetCurrent()->glGetVertexAttribfv( index, pname, params );
}

					
void glGetVertexAttribiv( GLuint index, GLenum pname, GLint *params )
{
	gleGetCurrent()->glGetVertexAttribiv( index, pname, params );
}

					
void glGetVertexAttribPointerv( GLuint index, GLenum pname, GLvoid* *pointer )
{
	gleGetCurrent()->glGetVertexAttribPointerv( index, pname, pointer );
}

					
GLboolean glIsProgram( GLuint program )
{
	return ( gleGetCurrent()->glIsProgram( program) );
}

					
GLboolean glIsShader( GLuint shader )
{
	return ( gleGetCurrent()->glIsShader( shader) );
}

					
void glLinkProgram( GLuint program )
{
	gleGetCurrent()->glLinkProgram( program );
}

					
void glShaderSource( GLuint shader, GLsizei count, const GLchar* *string, const GLint *length )
{
	gleGetCurrent()->glShaderSource( shader, count, string, length );
}

					
void glUseProgram( GLuint program )
{
	gleGetCurrent()->glUseProgram( program );
}

					
void glUniform1f( GLint location, GLfloat v0 )
{
	gleGetCurrent()->glUniform1f( location, v0 );
}

					
void glUniform2f( GLint location, GLfloat v0, GLfloat v1 )
{
	gleGetCurrent()->glUniform2f( location, v0, v1 );
}

					
void glUniform3f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2 )
{
	gleGetCurrent()->glUniform3f( location, v0, v1, v2 );
}

					
void glUniform4f( GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3 )
{
	gleGetCurrent()->glUniform4f( location, v0, v1, v2, v3 );
}

					
void glUniform1i( GLint location, GLint v0 )
{
	gleGetCurrent()->glUniform1i( location, v0 );
}

					
void glUniform2i( GLint location, GLint v0, GLint v1 )
{
	gleGetCurrent()->glUniform2i( location, v0, v1 );
}

					
void glUniform3i( GLint location, GLint v0, GLint v1, GLint v2 )
{
	gleGetCurrent()->glUniform3i( location, v0, v1, v2 );
}

					
void glUniform4i( GLint location, GLint v0, GLint v1, GLint v2, GLint v3 )
{
	gleGetCurrent()->glUniform4i( location, v0, v1, v2, v3 );
}

					
void glUniform1fv( GLint location, GLsizei count, const GLfloat *value )
{
	gleGetCurrent()->glUniform1fv( location, count, value );
}

					
void glUniform2fv( GLint location, GLsizei count, const GLfloat *value )
{
	gleGetCurrent()->glUniform2fv( location, count, value );
}

					
void glUniform3fv( GLint location, GLsizei count, const GLfloat *value )
{
	gleGetCurrent()->glUniform3fv( location, count, value );
}

					
void glUniform4fv( GLint location, GLsizei count, const GLfloat *value )
{
	gleGetCurrent()->glUniform4fv( location, count, value );
}

					
void glUniform1iv( GLint location, GLsizei count, const GLint *value )
{
	gleGetCurrent()->glUniform1iv( location, count, value );
}

					
void glUniform2iv( GLint location, GLsizei count, const GLint *value )
{
	gleGetCurrent()->glUniform2iv( location, count, value );
}

					
void glUniform3iv( GLint location, GLsizei count, const GLint *value )
{
	gleGetCurrent()->glUniform3iv( location, count, value );
}

					
void glUniform4iv( GLint location, GLsizei count, const GLint *value )
{
	gleGetCurrent()->glUniform4iv( location, count, value );
}

					
void glUniformMatrix2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix2fv( location, count, transpose, value );
}

					
void glUniformMatrix3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix3fv( location, count, transpose, value );
}

					
void glUniformMatrix4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix4fv( location, count, transpose, value );
}

					
void glValidateProgram( GLuint program )
{
	gleGetCurrent()->glValidateProgram( program );
}

					
void glVertexAttrib1d( GLuint index, GLdouble x )
{
	gleGetCurrent()->glVertexAttrib1d( index, x );
}

					
void glVertexAttrib1dv( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib1dv( index, v );
}

					
void glVertexAttrib1f( GLuint index, GLfloat x )
{
	gleGetCurrent()->glVertexAttrib1f( index, x );
}

					
void glVertexAttrib1fv( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib1fv( index, v );
}

					
void glVertexAttrib1s( GLuint index, GLshort x )
{
	gleGetCurrent()->glVertexAttrib1s( index, x );
}

					
void glVertexAttrib1sv( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib1sv( index, v );
}

					
void glVertexAttrib2d( GLuint index, GLdouble x, GLdouble y )
{
	gleGetCurrent()->glVertexAttrib2d( index, x, y );
}

					
void glVertexAttrib2dv( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib2dv( index, v );
}

					
void glVertexAttrib2f( GLuint index, GLfloat x, GLfloat y )
{
	gleGetCurrent()->glVertexAttrib2f( index, x, y );
}

					
void glVertexAttrib2fv( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib2fv( index, v );
}

					
void glVertexAttrib2s( GLuint index, GLshort x, GLshort y )
{
	gleGetCurrent()->glVertexAttrib2s( index, x, y );
}

					
void glVertexAttrib2sv( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib2sv( index, v );
}

					
void glVertexAttrib3d( GLuint index, GLdouble x, GLdouble y, GLdouble z )
{
	gleGetCurrent()->glVertexAttrib3d( index, x, y, z );
}

					
void glVertexAttrib3dv( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib3dv( index, v );
}

					
void glVertexAttrib3f( GLuint index, GLfloat x, GLfloat y, GLfloat z )
{
	gleGetCurrent()->glVertexAttrib3f( index, x, y, z );
}

					
void glVertexAttrib3fv( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib3fv( index, v );
}

					
void glVertexAttrib3s( GLuint index, GLshort x, GLshort y, GLshort z )
{
	gleGetCurrent()->glVertexAttrib3s( index, x, y, z );
}

					
void glVertexAttrib3sv( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib3sv( index, v );
}

					
void glVertexAttrib4Nbv( GLuint index, const GLbyte *v )
{
	gleGetCurrent()->glVertexAttrib4Nbv( index, v );
}

					
void glVertexAttrib4Niv( GLuint index, const GLint *v )
{
	gleGetCurrent()->glVertexAttrib4Niv( index, v );
}

					
void glVertexAttrib4Nsv( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib4Nsv( index, v );
}

					
void glVertexAttrib4Nub( GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w )
{
	gleGetCurrent()->glVertexAttrib4Nub( index, x, y, z, w );
}

					
void glVertexAttrib4Nubv( GLuint index, const GLubyte *v )
{
	gleGetCurrent()->glVertexAttrib4Nubv( index, v );
}

					
void glVertexAttrib4Nuiv( GLuint index, const GLuint *v )
{
	gleGetCurrent()->glVertexAttrib4Nuiv( index, v );
}

					
void glVertexAttrib4Nusv( GLuint index, const GLushort *v )
{
	gleGetCurrent()->glVertexAttrib4Nusv( index, v );
}

					
void glVertexAttrib4bv( GLuint index, const GLbyte *v )
{
	gleGetCurrent()->glVertexAttrib4bv( index, v );
}

					
void glVertexAttrib4d( GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w )
{
	gleGetCurrent()->glVertexAttrib4d( index, x, y, z, w );
}

					
void glVertexAttrib4dv( GLuint index, const GLdouble *v )
{
	gleGetCurrent()->glVertexAttrib4dv( index, v );
}

					
void glVertexAttrib4f( GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w )
{
	gleGetCurrent()->glVertexAttrib4f( index, x, y, z, w );
}

					
void glVertexAttrib4fv( GLuint index, const GLfloat *v )
{
	gleGetCurrent()->glVertexAttrib4fv( index, v );
}

					
void glVertexAttrib4iv( GLuint index, const GLint *v )
{
	gleGetCurrent()->glVertexAttrib4iv( index, v );
}

					
void glVertexAttrib4s( GLuint index, GLshort x, GLshort y, GLshort z, GLshort w )
{
	gleGetCurrent()->glVertexAttrib4s( index, x, y, z, w );
}

					
void glVertexAttrib4sv( GLuint index, const GLshort *v )
{
	gleGetCurrent()->glVertexAttrib4sv( index, v );
}

					
void glVertexAttrib4ubv( GLuint index, const GLubyte *v )
{
	gleGetCurrent()->glVertexAttrib4ubv( index, v );
}

					
void glVertexAttrib4uiv( GLuint index, const GLuint *v )
{
	gleGetCurrent()->glVertexAttrib4uiv( index, v );
}

					
void glVertexAttrib4usv( GLuint index, const GLushort *v )
{
	gleGetCurrent()->glVertexAttrib4usv( index, v );
}

					
void glVertexAttribPointer( GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer )
{
	gleGetCurrent()->glVertexAttribPointer( index, size, type, normalized, stride, pointer );
}


// ********* GL_VERSION_2_1 *********
bool isGL_VERSION_2_1()
{
	const bool isSupported = gleGetCurrent()->isGL_VERSION_2_1;
	
	return isSupported;
}

					
void glUniformMatrix2x3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix2x3fv( location, count, transpose, value );
}

					
void glUniformMatrix3x2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix3x2fv( location, count, transpose, value );
}

					
void glUniformMatrix2x4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix2x4fv( location, count, transpose, value );
}

					
void glUniformMatrix4x2fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix4x2fv( location, count, transpose, value );
}

					
void glUniformMatrix3x4fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix3x4fv( location, count, transpose, value );
}

					
void glUniformMatrix4x3fv( GLint location, GLsizei count, GLboolean transpose, const GLfloat *value )
{
	gleGetCurrent()->glUniformMatrix4x3fv( location, count, transpose, value );
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

