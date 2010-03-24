// OGLPP - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/FrameBufferObject.hpp"

#include "glo/RenderBuffer.hpp"
#include "glo/Texture2D.hpp"
#include <iostream>



namespace glo
{



FrameBufferObject::FrameBufferObject()
:	m_color( m_maxColorAttachments, 0 ),
	m_depth(0),
	m_stencil(0)
{
}



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

		detach();

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



void FrameBufferObject::unbind() const
{
	assert( !isEmpty() );
	assert( isBound() );	
	
	glBindFramebuffer( GL_FRAMEBUFFER, 0 );
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



void FrameBufferObject::attachColor( glo::IFrameBufferAttachableImage * attachableObject, const int index  )
{
	attachableObject->attach( this, GL_COLOR_ATTACHMENT0 + index );

	assert( m_color[index] == 0 && "Color attachment point not empty." );
	m_color[index] = attachableObject;
}



void FrameBufferObject::detachColor( const int index )
{
	if ( m_color[index] )
	{
		glo::IFrameBufferAttachableImage * attachableObject = m_color[index];
		m_color[index] = 0;
		attachableObject->detach( this, GL_COLOR_ATTACHMENT0 + index );
	}
	else
	{
		assert( "Color attachment point is empty." );
	}
}



void FrameBufferObject::detachColors()
{
	for( int i=0; i < static_cast< int >(m_color.size()); ++i )
	{
		if ( m_color[i] )
		{
			detachColor(i);
		}
	}
}



void FrameBufferObject::attachDepth( glo::IFrameBufferAttachableImage * attachableObject )
{
	attachableObject->attach( this, GL_DEPTH_ATTACHMENT );

	assert( m_depth == 0 && "Depth attachment point not empty." );
	m_depth = attachableObject;
}



void FrameBufferObject::detachDepth()
{
	if ( m_depth )
	{
		m_depth->detach( this, GL_DEPTH_ATTACHMENT );
		m_depth = 0;
	}
	else
	{
		assert( "Depth attachment point is empty." );
	}
}



void FrameBufferObject::attachStencil( glo::IFrameBufferAttachableImage * attachableObject )
{
	attachableObject->attach( this, GL_STENCIL_ATTACHMENT );

	assert( m_stencil == 0 && "Stencil attachment point not empty." );
	m_stencil = attachableObject;
}



void FrameBufferObject::detachStencil()
{
	if ( m_stencil )
	{
		m_stencil->detach( this, GL_STENCIL_ATTACHMENT );
		m_stencil = 0;
	}
	else
	{
		assert( "Stencil attachment point is empty." );
	}
}



void FrameBufferObject::detach()
{
	detachColors();
	detachDepth();
	detachStencil();
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
