// OGLPP - Copyright (C) 2005, 2010, 2011, Nicolas Papier.
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
	 * @pre 0 <= index < getMaxColorAttachements()
	 * @pre isBound()
	 * @pre !attachableObject->isEmpty()
	 */
	GLO_API void attachColor( boost::shared_ptr< glo::IFrameBufferAttachableImage > attachableObject, const int index = 0 );

	/**
	 * @brief Detaches an object to one of the color buffer of the framebuffer.
	 *
	 * @param index				a zero-based index used to select to color buffer (0 to select GL_COLOR_ATTACHMENT0, 1 to select GL_COLOR_ATTACHMENT1 and so on).
	 *
	 * @pre 0 <= index < getMaxColorAttachements()
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
	 * @name Buffers accessors
	 */
	//@{

	/**
	 * @brief Returns the desired color buffer of the framebuffer.
	 *
	 * @param index				a zero-based index used to select to color buffer (0 to select GL_COLOR_ATTACHMENT0, 1 to select GL_COLOR_ATTACHMENT1 and so on).
	 *
	 * @pre 0 <= index < getMaxColorAttachements()
	 *
	 * @return the desired color buffer of the framebuffer
	 */
	GLO_API boost::shared_ptr< glo::IFrameBufferAttachableImage > getColor( const int index = 0 ) const;

	/**
	 * @brief Returns the desired color buffer of the framebuffer.
	 *
	 * @param index				a zero-based index used to select to color buffer (0 to select GL_COLOR_ATTACHMENT0, 1 to select GL_COLOR_ATTACHMENT1 and so on).
	 *
	 * @pre 0 <= index < getMaxColorAttachements()
	 *
	 * @return the desired color buffer of the framebuffer
	 */
	GLO_API boost::shared_ptr< glo::Texture2D > getColorAsTexture2D( const int index = 0 ) const;

	/**
	 * @brief Returns the number of attached color buffers.
	 *
	 * @return the number of attached color buffers
	 */
	GLO_API const int getNumOfColors() const;

	/**
	 * @brief Returns the depth buffer of the framebuffer.
	 *
	 * @return the depth buffer of the framebuffer
	 */
	GLO_API boost::shared_ptr< glo::IFrameBufferAttachableImage > getDepth() const;

	/**
	 * @brief Returns the depth buffer of the framebuffer.
	 *
	 * @return the depth buffer of the framebuffer
	 */
	GLO_API boost::shared_ptr< glo::Texture2D > getDepthAsTexture2D() const;

	/**
	 * @brief Returns the stencil buffer of the framebuffer.
	 *
	 * @return the stencil buffer of the framebuffer
	 */
	GLO_API boost::shared_ptr< glo::IFrameBufferAttachableImage > getStencil() const;

	/**
	 * @brief Returns the stencil buffer of the framebuffer.
	 *
	 * @return the stencil buffer of the framebuffer
	 */
	GLO_API boost::shared_ptr< glo::Texture2D > getStencilAsTexture2D() const;
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
	GLO_API static void setReadToDefaultFrameBuffer();

	/**
	 * @brief Sets all readback operations to this framebuffer.
	 *
	 * @param index		a zero-based index used to select to color buffer (0 to select GL_COLOR_ATTACHMENT0, 1 to select GL_COLOR_ATTACHMENT1 and so on).
	 *
	 * @pre 0 <= index < getMaxColorAttachements()
	 * @pre getColor(index) != 0
	 * @pre isBound()
	 */
	GLO_API void setReadBuffer( const int index = 0 ) const;

	/**
	 * @brief Inhibits the writing of fragment color to any buffer.
	 *
	 * @pre isBound()
	 */
	GLO_API void disableReadBuffer() const;



	/**
	 * @brief Sets all drawing operations to the default framebuffer.
	 */
	GLO_API static void setDrawToDefaultFrameBuffer();

	/**
	 * @brief Sets all drawing operations to this framebuffer.
	 *
	 * @param index		a zero-based index used to select to color buffer (0 to select GL_COLOR_ATTACHMENT0, 1 to select GL_COLOR_ATTACHMENT1 and so on).
	 *
	 * @pre 0 <= index < getMaxColorAttachements()
	 * @pre getColor(index) != 0
	 * @pre isBound()
	 */
	GLO_API void setDrawBuffer( const int index = 0 ) const;

	/**
	 * @brief Sets the draw buffers to which all fragment colors are written.
	 *
	 * @param buf0		zero-based index specifying the buffer to which each fragment color is written
	 * @param buf1		zero-based index specifying the buffer to which each fragment color is written
	 * @param buf2		zero-based index specifying the buffer to which each fragment color is written
	 * @param buf3		zero-based index specifying the buffer to which each fragment color is written
	 *
	 * @pre isBound()
	 * @pre index == -1 or 0 <= index < getMaxColorAttachements() for index in [buf0,buf1,buf2, buf3]
	 */
	GLO_API void setDrawBuffers( const int buf0, const int buf1 = -1, const int buf2 = -1, const int buf3 = -1 ) const;

	/**
	 * @brief Sets the draw buffers to which all fragment colors are written.
	 *
	 * @param buffers	a container of zero-based index specifying buffers to which each fragment color is written
	 *
	 * @pre isBound() and index in buffers[] are valid
	 */
	GLO_API void setDrawBuffers( const std::vector< int >& buffers ) const;

	/**
	 * @brief Sets the draw buffers to which all fragment colors are written to all attachments.
	 *
	 * @pre isBound()
	 */
	GLO_API void setDrawBuffersToAll() const;

	/**
	 * @brief Returns the draw buffers to which all fragment colors are written.
	 *
	 * @return a container of zero-based index specifying buffers to which each fragment color is written.
	 *
	 * @remark the returned container could contained the special value -1 meaning that this buffer is not used for drawing (see GL_NONE).
	 *
	 * @todo takes care of glPush/PopAttrib() ?
	 */
	GLO_API const std::vector< int >& getFullDrawBuffers() const;

	/**
	 * @brief Returns the draw buffers to which all fragment colors are written.
	 *
	 * @return a container of zero-based index specifying buffers to which each fragment color is written.
	 *
	 * @todo takes care of glPush/PopAttrib() ?
	 */
	GLO_API const std::vector< int >& getDrawBuffers() const;

	/**
	 * @brief Inhibits the writing of fragment color to any buffer.
	 *
	 * @pre isBound()
	 */
	GLO_API void disableDrawBuffers() const;



	/**
	 * @brief Sets rendering to depth only.
	 *
	 * @pre isBound()
	 *
	 * @param depthOnly		Sets DrawBuffer to none when depthOnly is true.
	 *						Sets DrawBuffer to first color attachement when depthOnly is false.
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
	GLO_API const int getMaxColorAttachements() const;

	/**
	 * @brief Returns the maximum width and height of renderbuffers supported by the implementation
	 *
	 * @return the maximum width and height of renderbuffers supported by the implementation
	 */
	GLO_API const int getMaxRenderBufferSize() const;

	/**
	 * @brief Returns the maximum number of samples supported for multisampling.
	 *
	 * @return the maximum number of samples supported for multisampling
	 */
	GLO_API const int getMaxSamples() const;

	//@}



private:
	void setDrawBuffers() const;
	

	typedef std::vector< boost::shared_ptr< glo::IFrameBufferAttachableImage > > ColorContainer;

	ColorContainer															m_color;		///< array of color buffer attachments
	int																		m_numOfColors;	///< number of attached color buffers
	boost::shared_ptr< glo::IFrameBufferAttachableImage > 					m_depth;		///< depth buffer attachment
	boost::shared_ptr< glo::IFrameBufferAttachableImage >					m_stencil;		///< stencil buffer attachment

	mutable std::vector< int >												m_fullDrawBuffers;	///< the current draw buffers to which all fragment colors are written
	mutable std::vector< int >												m_drawBuffers;		///< the current draw buffers to which all fragment colors are written
};



} // namespace glo

#endif //#ifndef _GLO_FRAMEBUFFEROBJECT_HPP
