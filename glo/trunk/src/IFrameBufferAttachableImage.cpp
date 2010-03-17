// OGLPP - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/IFrameBufferAttachableImage.hpp"

#include <algorithm>



namespace glo
{



void IFrameBufferAttachableImage::attach( FrameBufferObject * fbo, const GLenum attachment )
{
	FBOListType::iterator result = std::find( m_attachedTo.begin(), m_attachedTo.end(), fbo );

	if ( result == m_attachedTo.end() )
	{
		// Not found
		m_attachedTo.push_back( fbo );
	}
	// else nothing to do, because fbo already in list
}



void IFrameBufferAttachableImage::detach( FrameBufferObject * fbo, const GLenum attachment )
{
	FBOListType::iterator result = std::find( m_attachedTo.begin(), m_attachedTo.end(), fbo );

	if ( result != m_attachedTo.end() )
	{
		// Found
		m_attachedTo.erase( result );
	}
	else
	{
		assert( false && "Try to detach to a unknown FBO" );
	}
}



} // namespace glo
