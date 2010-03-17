// OGLPP - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_IFRAMEBUFFERATTACHABLEIMAGE_HPP
#define _GLO_IFRAMEBUFFERATTACHABLEIMAGE_HPP

#include "glo/glo.hpp"
#include <list>

namespace glo { struct FrameBufferObject; }



namespace glo
{

/**
 * @brief Interface for framebuffer-attachable image
 *
 * In OpenGL specification, a framebuffer-attachable image is a 2D pixel image that can be attached to one
 * of the logical buffer attachment points of a framebuffer object. Texture images and renderbuffer images 
 * are two examples of framebuffer-attachable images.
 */
struct IFrameBufferAttachableImage
{
	/**
	 * @name Attachment interface
	 */
	//@{

	/**
	 * @brief Attaches this object to the given frame buffer object
	 *
	 * @param fbo			the framebuffer object where this attachable image would be attached
	 * @param attachment	the framebuffer attachment point (GL_COLOR_ATTACHMENTi, GL_DEPTH_ATTACHMENT, GL_STENCIL_ATTACHMENT).
	 */
	GLO_API virtual void attach( FrameBufferObject * fbo, const GLenum attachment );

	/**
	 * @brief Detaches this object to the given frame buffer object
	 *
	 * @param fbo			the framebuffer object where this attachable image would be attached
	 * @param attachment	the framebuffer attachment point (GL_COLOR_ATTACHMENTi, GL_DEPTH_ATTACHMENT, GL_STENCIL_ATTACHMENT).
	 */
	GLO_API virtual void detach( FrameBufferObject * fbo, const GLenum attachment );

	//@}

protected:
	typedef std::list< FrameBufferObject * > FBOListType;
	FBOListType m_attachedTo;		///< list of frame buffer object where this attachable image is attached
};



} // namespace glo

#endif //#ifndef _GLO_IFRAMEBUFFERATTACHABLEIMAGE_HPP
