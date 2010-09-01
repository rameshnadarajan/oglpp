// OGLPP - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/FrameBufferObject.hpp"

#include "glo/RenderBuffer.hpp"
#include "glo/Texture2D.hpp"
#include <iostream>


#include "glo/detail/helpers.hpp"



namespace glo
{



FrameBufferObject::FrameBufferObject()
:	m_numOfColors(0)
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

	m_color.resize( getMaxColorAttachements() );

	assert( !isEmpty() );
}



void FrameBufferObject::release()
{
	if ( !isEmpty() )
	{
		bind();
		detach();

		unbind();
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
	glGetIntegerv( GL_FRAMEBUFFER_BINDING, &currentBinding ); // @todo removes this access
	
	return ( static_cast<GLuint>(currentBinding) == m_object );
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



void FrameBufferObject::attachColor( boost::shared_ptr< glo::IFrameBufferAttachableImage > attachableObject, const int index  )
{
	attachableObject->attach( this, GL_COLOR_ATTACHMENT0 + index );

	assert( m_color[index] == 0 && "Color attachment point not empty." );
	m_color[index] = attachableObject;
	++m_numOfColors;
}



void FrameBufferObject::detachColor( const int index )
{
	if ( m_color[index] )
	{
		boost::shared_ptr< glo::IFrameBufferAttachableImage > attachableObject = m_color[index];
		m_color[index].reset();
		attachableObject->detach( this, GL_COLOR_ATTACHMENT0 + index );
		--m_numOfColors;
	}
	// else Color attachment point is empty
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



void FrameBufferObject::attachDepth( boost::shared_ptr< glo::IFrameBufferAttachableImage > attachableObject )
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
		m_depth.reset();
	}
	// else Depth attachment point is empty
}



void FrameBufferObject::attachStencil( boost::shared_ptr< glo::IFrameBufferAttachableImage > attachableObject )
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
		m_stencil.reset();
	}
	// else Stencil attachment point is empty.
}



void FrameBufferObject::detach()
{
	detachColors();
	detachDepth();
	detachStencil();
}



boost::shared_ptr< glo::IFrameBufferAttachableImage > FrameBufferObject::getColor( const int index )
{
	assert( index >= 0 );
	assert( index < getNumOfColors() );

	return m_color[index];
}



boost::shared_ptr< glo::Texture2D > FrameBufferObject::getColorAsTexture2D( const int index )
{
	return boost::dynamic_pointer_cast< glo::Texture2D >( getColor(index) );
}



const int FrameBufferObject::getNumOfColors() const
{
#ifdef _DEBUG
	int numOfColors = 0;

	for( int i=0; i < static_cast< int >(m_color.size()); ++i )
	{
		if ( m_color[i] )
		{
			++numOfColors;
		}
	}

	assert( numOfColors == m_numOfColors );
#endif

	return m_numOfColors;
}



boost::shared_ptr< glo::IFrameBufferAttachableImage > FrameBufferObject::getDepth()
{
	return m_depth;
}



boost::shared_ptr< glo::Texture2D > FrameBufferObject::getDepthAsTexture2D()
{
	return boost::dynamic_pointer_cast< glo::Texture2D >( getDepth() );
}



boost::shared_ptr< glo::IFrameBufferAttachableImage > FrameBufferObject::getStencil()
{
	return m_stencil;
}



boost::shared_ptr< glo::Texture2D > FrameBufferObject::getStencilAsTexture2D()
{
	return boost::dynamic_pointer_cast< glo::Texture2D >( getStencil() );
}



void FrameBufferObject::setReadToDefaultFrameBuffer()
{
	glBindFramebuffer( GL_READ_FRAMEBUFFER, 0 );
}



void FrameBufferObject::setReadBuffer( const int index ) const
{
	glBindFramebuffer( GL_READ_FRAMEBUFFER, getName() ); // @todo remove me

	if ( index >= 0 )
	{
		glReadBuffer( GL_COLOR_ATTACHMENT0 + index );
	}
}



void FrameBufferObject::disableReadBuffer() const // @todo static
{
	assert( isBound() && "FBO must be bound before calling FrameBufferObject::disableReadBuffer()");

	glReadBuffer( GL_NONE );
}



void FrameBufferObject::setDrawToDefaultFrameBuffer()
{
	glBindFramebuffer( GL_DRAW_FRAMEBUFFER, 0 );
}



void FrameBufferObject::setDrawBuffer( const int index ) const
{
	glBindFramebuffer( GL_DRAW_FRAMEBUFFER, getName() );// @todo remove me

	assert( isBound() && "FBO must be bound before calling FrameBufferObject::setDrawBuffer()" );

	m_fullDrawBuffers.resize(1);
	m_fullDrawBuffers[0] = index;

	// Applies
	setDrawBuffers();
}



void FrameBufferObject::setDrawBuffers( const int buf0, const int buf1, const int buf2, const int buf3 ) const
{
	assert( isBound() && "FBO must be bound before calling FrameBufferObject::setDrawBuffers()" );

	m_fullDrawBuffers.resize(4);
	m_fullDrawBuffers[0] = buf0;
	m_fullDrawBuffers[1] = buf1;
	m_fullDrawBuffers[2] = buf2;
	m_fullDrawBuffers[3] = buf3;

	// Applies
	setDrawBuffers();
}



void FrameBufferObject::setDrawBuffers( const std::vector< int >& buffers ) const
{
	assert( isBound() && "FBO must be bound before calling FrameBufferObject::setDrawBuffers()" );

	m_fullDrawBuffers = buffers;

	// Applies
	setDrawBuffers();
}



void FrameBufferObject::setDrawBuffersToAll() const
{
	assert( isBound() && "FBO must be bound before calling FrameBufferObject::setDrawBuffersToAll()" );

	m_fullDrawBuffers.clear();
	int index = 0;
	for(	ColorContainer::const_iterator i = m_color.begin(), iEnd = m_color.end();
			i != iEnd;
			++i, ++index )
	{
		if ( i->get() )
		{
			m_fullDrawBuffers.push_back( index );
		}
		else
		{
			m_fullDrawBuffers.push_back( -1 );
		}
	}

	// Applies
	setDrawBuffers();
}



const std::vector< int >& FrameBufferObject::getFullDrawBuffers() const
{
	return m_fullDrawBuffers;
}



const std::vector< int >& FrameBufferObject::getDrawBuffers() const
{
	return m_drawBuffers;
}



void FrameBufferObject::disableDrawBuffers() const
{
	assert( isBound() && "FBO must be bound before calling FrameBufferObject::disableDrawBuffers()");

	m_fullDrawBuffers.clear();
	m_drawBuffers.clear();

	glDrawBuffer( GL_NONE );
}



void FrameBufferObject::renderDepthOnly( const bool depthOnly )
{
	assert( isBound() && "FBO must be bound before calling FrameBufferObject::renderDepthOnly()");

	if ( depthOnly )
	{
		disableDrawBuffers();
		glReadBuffer( GL_NONE );
	}
	else
	{
		setDrawBuffers( 0 );
		glReadBuffer( GL_COLOR_ATTACHMENT0 );
	}
}



const int FrameBufferObject::getMaxColorAttachements() const
{
	gloGetIntegerv( m_maxColorAttachments, GL_MAX_COLOR_ATTACHMENTS );
}



const int FrameBufferObject::getMaxRenderBufferSize() const
{
	gloGetIntegerv( m_maxRenderBufferSize, GL_MAX_RENDERBUFFER_SIZE );
}



const int FrameBufferObject::getMaxSamples() const
{
	gloGetIntegerv( m_maxSamples, GL_MAX_SAMPLES );
}



/**
 * @todo tests duplicate
 * @todo tests if buffers[i] are all valid
 */
void FrameBufferObject::setDrawBuffers() const
{
	// By default, all drawing operations into color buffers are disabled
	std::vector<GLenum> drawBuffers( getMaxColorAttachements(), GL_NONE );

	// Fills the drawBuffers mapping from m_fullDrawBuffers and initializes m_drawBuffers
	m_drawBuffers.clear();

	std::vector<int>::const_iterator	i		= m_fullDrawBuffers.begin(),
										iEnd	= m_fullDrawBuffers.end();
	for(	int index = 0;
			i != iEnd;
			++index, ++i	)
	{
		const int drawBuffer = *i;

		if ( drawBuffer < 0 )		continue;

		assert( drawBuffer <= static_cast< unsigned int >(getNumOfColors()) && "Not enough color buffers attached compared to the desired draw buffer." );

		drawBuffers[index] = GL_COLOR_ATTACHMENT0 + drawBuffer;
		m_drawBuffers.push_back( index );
	}

	// Applies
	assert( drawBuffers.size() >= 1 && "setDrawBuffers() must be called to enable at least one draw buffer." );
	assert( drawBuffers.size() == static_cast< unsigned int >(getMaxColorAttachements()) && "The entire mapping table is not defined" );
	glDrawBuffersARB( drawBuffers.size(), &drawBuffers[0] );
}



} // namespace glo
