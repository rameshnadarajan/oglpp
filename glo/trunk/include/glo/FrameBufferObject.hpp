// OGLPP - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_FRAMEBUFFEROBJECT_HPP
#define _GLO_FRAMEBUFFEROBJECT_HPP

#include <boost/shared_ptr.hpp>
#include <string>
#include <vector>

#include "glo/Object.hpp"

namespace glo 
{
	struct IFrameBufferAttachableImage;
	struct RenderBuffer;
	struct Texture2D; 
}



namespace glo
{

/**
 * @brief Frame buffer object (FBO) class
 * 
 * This class is an encapsulation of the OpenGL extension named GL_ARB_framebuffer_object
 */
struct FrameBufferObject : public Object
{
	/**
	 * @name Constructor/destructor
	 */
	//@{
	
	/**
	 * @brief Default constructor
	 * 
	 * The underlying OpenGL object is NOT generated.
	 */
	GLO_API FrameBufferObject();
	
	/**
	 * @brief Destructor
	 */
	GLO_API ~FrameBufferObject();
	
	//@}



	/**
	 * @name Actions
	 */
	//@{
	
	/**
	 * @brief Generates the frame buffer object
	 * 
	 * @pre isEmpty() must return true
	 * @post isEmpty() must return false
	 */
	GLO_API void generate();

	/**
	 * @brief Deletes the frame buffer object
	 * 
	 * @post isEmpty() must return false
	 */
	GLO_API void release();

	/**
	 * @brief Binds the frame buffer object
	 * 
	 * @pre isEmpty() must return false
	 */
	GLO_API void bind() const;

	/**
	 * @brief Unbinds the frame buffer object
	 * 
	 * @pre isEmpty() must return false
	 * @pre isBound() must return true
	 */
	GLO_API void unbind() const;

	//@}



	/**
	 * @name Accessors
	 */
	//@{

	/**
	 * @brief Returns if the frame buffer object is bounded
	 * 
	 * @pre isEmpty() must return false
	 * 
	 * @return true if the frame buffer object is bounded, false otherwise.
	 */
	GLO_API const bool isBound() const;
	
	//@}



	/**
	 * @name Framebuffer completeness
	 */
	//@{
	
	/**
	 * @brief Returns the frame buffer object status
	 * 
	 * @pre isBound() == true
	 * 
	 * @return an empty string if the frame buffer object is complete, otherwise a string describing the problem.
	 */
	GLO_API const std::string getStatusString() const;

	/**
	 * @brief Returns the frame buffer object status
	 * 
	 * @pre isBound() == true
	 * 
	 * @return the frame buffer object status
	 */
	GLO_API const GLenum getStatus() const;

	//@}



	/**
	 * @name Attaching images
	 *
	 * @todo depthAndStencil
	 */
	//@{

	/**
	 * @brief Attaches the given object to one of the color buffer of the framebuffer.
	 *
	 * @param attachableObject	the object to attach
	 * @param index				a zero-based index used to select to color buffer (0 to select GL_COLOR_ATTACHMENT0, 1 to select GL_COLOR_ATTACHMENT1 and so on).
	 *
	 * @pre isBound()
	 * @pre !attachableObject->isEmpty()
	 */
	GLO_API void attachColor( boost::shared_ptr< glo::IFrameBufferAttachableImage > attachableObject, const int index = 0 );

	/**
	 * @brief Detaches an object to one of the color buffer of the framebuffer.
	 *
	 * @param index				a zero-based index used to select to color buffer (0 to select GL_COLOR_ATTACHMENT0, 1 to select GL_COLOR_ATTACHMENT1 and so on).
	 *
	 * @pre isBound()
	 */
	GLO_API void detachColor( const int index = 0 );

	/**
	 * @brief Detaches objects to all color buffers of the framebuffer.
	 *
	 * @pre isBound()
	 */
	GLO_API void detachColors();


	/**
	 * @brief Attaches the given object to depth buffer of the framebuffer.
	 *
	 * @param attachableObject	the object to attach
	 *
	 * @pre isBound()
	 * @pre !attachableObject->isEmpty()
	 */
	GLO_API void attachDepth( boost::shared_ptr< glo::IFrameBufferAttachableImage > attachableObject );

	/**
	 * @brief Detaches an object to the depth buffer of the framebuffer.
	 *
	 * @pre isBound()
	 */
	GLO_API void detachDepth();


	/**
	 * @brief Attaches the given object to stencil buffer of the framebuffer.
	 *
	 * @param attachableObject	the object to attach
	 *
	 * @pre isBound()
	 * @pre !attachableObject->isEmpty()
	 */
	GLO_API void attachStencil( boost::shared_ptr< glo::IFrameBufferAttachableImage > attachableObject );

	/**
	 * @brief Detaches an object to the stencil buffer of the framebuffer.
	 *
	 * @pre isBound()
	 */
	GLO_API void detachStencil();	


	/**
	 * @brief Detaches objects to all buffers of the framebuffer.
	 *
	 * @pre isBound()
	 */
	GLO_API void detach();

	//@}



	/**
	 * @name Selecting a buffer for writing
	 */
	//@{

	/**
	 * @brief Sets rendering to depth only.
	 *
	 * @pre isBound()
	 *
	 * @param depthOnly		Sets DrawBuffer and ReadBuffer to none when depthOnly is true.
	 *						Sets DrawBuffer and ReadBuffer to first color attachement when depthOnly is false.
	 */
	GLO_API void renderDepthOnly( const bool depthOnly = true );

	//@}

	// @todo query for MAX_COLOR_ATTACHMENTS

private:
	std::vector< boost::shared_ptr< glo::IFrameBufferAttachableImage > >	m_color;		///< array of color buffer attachments
	boost::shared_ptr< glo::IFrameBufferAttachableImage > 					m_depth;		///< depth buffer attachment
	boost::shared_ptr< glo::IFrameBufferAttachableImage >					m_stencil;		///< stencil buffer attachment

	// @todo 8 is the GL_MAX_COLOR_ATTACHMENTS
	static const int m_maxColorAttachments = 8;								///< the maximum number of color attachments
};



} // namespace glo

#endif //#ifndef _GLO_FRAMEBUFFEROBJECT_HPP
