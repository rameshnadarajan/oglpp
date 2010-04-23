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
	 * @name Selecting buffer(s) for reading and writing operations
	 *
	 * @todo GLO_API void drawBuffers( std::vector< uint > buffers );
	 */
	//@{

	/**
	 * @brief Sets all readback operations to the default framebuffer.
	 */
	GLO_API static void setReadBufferToDefaultFrameBuffer();

	/**
	 * @brief Sets all readback operations to this framebuffer.
	 */
	GLO_API void setReadBuffer() const;

	/**
	 * @brief Inhibits the writing of fragment color to any buffer.
	 *
	 * @pre isBound()
	 */
	GLO_API void disableReadBuffer() const;



	/**
	 * @brief Sets all drawing operations to the default framebuffer.
	 */
	GLO_API static void setDrawBufferToDefaultFrameBuffer();

	/**
	 * @brief Sets all drawing operations to this framebuffer.
	 */
	GLO_API void setDrawBuffer() const;

	/**
	 * @brief Sets the draw buffers to which all fragment colors are written.
	 *
	 * @param buf0		zero-based index specifying the buffer to which each fragment color is written
	 * @param buf1		zero-based index specifying the buffer to which each fragment color is written
	 * @param buf2		zero-based index specifying the buffer to which each fragment color is written
	 * @param buf3		zero-based index specifying the buffer to which each fragment color is written
	 *
	 * @pre isBound()
	 *
	 * @todo setDrawBuffers( ... buf8 )
	 */
	GLO_API void setDrawBuffers( const int buf0, const int buf1 = -1, const int buf2 = -1, const int buf3 = -1 ) const;

	/**
	 * @brief Inhibits the writing of fragment color to any buffer.
	 *
	 * @pre isBound()
	 *
	 */
	GLO_API void disableDrawBuffers() const;



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



	/**
	 * @name Queries
	 */
	//@{

	/**
	 * @brief Returns the maximum number of FBO attachment points for color buffers
	 *
	 * @return the maximum number of FBO attachment points for color buffers.
	 */
	const int getMaxColorAttachements() const;

	/**
	 * @brief Returns the maximum width and height of renderbuffers supported by the implementation
	 *
	 * @return the maximum width and height of renderbuffers supported by the implementation
	 */
	const int getMaxRenderBufferSize() const;

	/**
	 * @brief Returns the maximum number of samples supported for multisampling.
	 *
	 * @return the maximum number of samples supported for multisampling
	 */
	const int getMaxSamples() const;

	//@}



private:
	std::vector< boost::shared_ptr< glo::IFrameBufferAttachableImage > >	m_color;		///< array of color buffer attachments
	boost::shared_ptr< glo::IFrameBufferAttachableImage > 					m_depth;		///< depth buffer attachment
	boost::shared_ptr< glo::IFrameBufferAttachableImage >					m_stencil;		///< stencil buffer attachment
};



} // namespace glo

#endif //#ifndef _GLO_FRAMEBUFFEROBJECT_HPP
