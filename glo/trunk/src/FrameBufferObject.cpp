// OGLPP - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/FrameBufferObject.hpp"

#include "glo/Texture2D.hpp"
#include <iostream>



namespace glo
{



FrameBufferObject::FrameBufferObject()
{}



FrameBufferObject::~FrameBufferObject()
{
	if ( gleGetCurrent() )
	{
		release();
	}
	else
	{
		std::cerr << "Unable to release frame buffer object " << m_object << "." << std::endl;
	}
}



void FrameBufferObject::generate()
{
	assert( isEmpty() );
	
	glGenFramebuffers(1, &m_object);

	assert( !isEmpty() );
}



void FrameBufferObject::release()
{
	if ( !isEmpty() )
	{
		bind();

		detachColor();
		detachDepth();

		glDeleteFramebuffers(1, &m_object);
		
		m_object = 0;
	}

	assert( isEmpty() );
}



void FrameBufferObject::bind() const
{
	assert( !isEmpty() );
	
	glBindFramebuffer( GL_FRAMEBUFFER, m_object );
}



const bool FrameBufferObject::isBound() const
{
	assert( !isEmpty() );

	GLint currentBinding;
	glGetIntegerv( GL_FRAMEBUFFER_BINDING, &currentBinding );
	
	return ( currentBinding == m_object );
}



const std::string FrameBufferObject::getStatusString() const
{
	std::string retVal;

	const GLenum status = getStatus();

	switch (status)
	{
		case GL_FRAMEBUFFER_COMPLETE:
			break;

		case GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT:
			retVal = "Framebuffer incomplete attachement";
			break;

		case GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT:
			retVal = "Framebuffer incomplete, missing attachment";
			break;

		case GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER:
			retVal = "Framebuffer incomplete, missing draw buffer";
			break;

		case GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER:
			retVal = "Framebuffer incomplete, missing read buffer";
			break;

		case GL_FRAMEBUFFER_UNSUPPORTED:
			retVal = "Unsupported framebuffer format";
			break;

		case GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE:
			retVal = "Framebuffer incomplete multisample";
			break;

		case GL_FRAMEBUFFER_UNDEFINED:
			retVal = "Framebuffer undefined";
			break;

		default:
			retVal = "Unknown framebuffer error (FBO).";
	}

	return retVal;
}



const GLenum FrameBufferObject::getStatus() const
{
	assert( isBound() && "FBO not bound" );

	GLenum status = static_cast<GLenum>( glCheckFramebufferStatus(GL_FRAMEBUFFER) );

	return status;
}



void FrameBufferObject::attachColor( glo::Texture2D * texture )
{
	assert( !texture->isEmpty() && "Texture object is not initialized." );
	assert( isBound() && "Must call FBO:bind() before attachColor()" );

	// Attach color texture to the frame buffer object
	glFramebufferTexture2D( GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0,
		GL_TEXTURE_2D, texture->getName(), 0 );
}



void FrameBufferObject::detachColor()
{
	assert( isBound() && "Must call FBO:bind() before detachColor()" );

	// Detach the color texture from the frame buffer object
	glFramebufferTexture2D( GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, 0, 0 );
}



void FrameBufferObject::attachDepth( glo::Texture2D * texture )
{
	assert( !texture->isEmpty() && "Texture object is not initialized." );
	assert( isBound() && "Must call FBO:bind() before attachDepth()" );
	// Attach depth texture to the frame buffer object
	glFramebufferTexture2D( GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT,
		GL_TEXTURE_2D, texture->getName(), 0 );
}



void FrameBufferObject::detachDepth()
{
	assert( isBound() && "Must call FBO:bind() before detachDepth()" );

	// Detach the depth texture from the frame buffer object
	glFramebufferTexture2D( GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, 0, 0 );
}



void FrameBufferObject::renderDepthOnly( const bool depthOnly )
{
	assert( isBound() && "FBO must be bound before calling FrameBufferObject::renderDepthOnly()");

	if ( depthOnly )
	{
		glDrawBuffer( GL_NONE );
		glReadBuffer( GL_NONE );
	}
	else
	{
		glDrawBuffer( GL_COLOR_ATTACHMENT0 );
		glReadBuffer( GL_COLOR_ATTACHMENT0 );
	}
}



} // namespace glo

/*void deleteFrameBufferObject()
{
  if(!frameBufferObject)
    return;

  //Activate the frame buffer objcet
  glBindFramebufferEXT(GL_FRAMEBUFFER_EXT, frameBufferObject);
  //Detach our depth texture from the frame buffer object
  glFramebufferTexture2DEXT(GL_FRAMEBUFFER_EXT,
                            GL_DEPTH_ATTACHMENT_EXT,
                            GL_TEXTURE_2D, 
                            0,
                            0);
  //DeActivate the frame buffer objcet
  glBindFramebufferEXT(GL_FRAMEBUFFER_EXT, 0);
  //Delete the frame buffer object
  glDeleteFramebuffersEXT(1, &frameBufferObject);
  frameBufferObject = 0;

}*/
