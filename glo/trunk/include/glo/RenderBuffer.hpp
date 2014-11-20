// OGLPP - Copyright (C) 2010, 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_RENDERBUFFER_HPP
#define _GLO_RENDERBUFFER_HPP

#include "glo/IFrameBufferAttachableImage.hpp"
#include "glo/Object.hpp"



namespace glo
{

/**
 * @brief Render buffer class
 * 
 * This class is an encapsulation of a single render buffer and must be used with FrameBufferObject class.
 * This is a new type of storage object which contains a single 2D array of pixels and associated state that
 * can be used as a destination for pixel data written during the rendering process described in OpenGL specification.
 */
struct RenderBuffer : public Object, public IFrameBufferAttachableImage
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
	GLO_API RenderBuffer();
	
	/**
	 * @brief Destructor
	 */
	GLO_API ~RenderBuffer();

	//@}



	/**
	 * @name Actions
	 */
	//@{
	
	/**
	 * @brief Generates the render buffer object
	 * 
	 * @pre isEmpty() must return true
	 * @post isEmpty() must return false
	 */
	GLO_API void generate();

	/**
	 * @brief Deletes the render buffer object
	 * 
	 * @post isEmpty() must return false
	 */
	GLO_API void release();

	/**
	 * @brief Binds the render buffer object
	 * 
	 * @pre isEmpty() must return false
	 */
	GLO_API void bind() const;

	/**
	 * @brief Unbinds the render buffer object
	 * 
	 * @pre isEmpty() must return false
	 * @pre isBound() must return true
	 */
	GLO_API void unbind() const;

	/**
	 * @brief Binds to the default render buffer object
	 */
	GLO_API virtual void bindToDefault() const=0;

	/**
	 * @brief Binds to the default render buffer object
	 */
	GLO_API static void staticBindToDefault();
	//@}



	/**
	 * @name Accessors
	 */
	//@{

	/**
	 * @brief Returns if the render buffer object is bounded
	 * 
	 * @pre isEmpty() must return false
	 * 
	 * @return true if the render buffer object is bounded, false otherwise.
	 */
	GLO_API const bool isBound() const;
	//@}



	/**
	 * @name Render buffer specification
	 */
	//@{

	/**
	 * @brief Sets the render buffer storage
	 */
	GLO_API void setStorage( const GLenum internalFormat, const int width, const int height );

	/**
	 * @brief Sets the render buffer storage
	 * @remark Do nothing on ES2
	 */
	GLO_API void setStorageMultiSample( const int samples, const GLenum internalFormat, const int width, const int height );

	//@}

	// @todo GetIntegerv for MAX_COLOR_ATTACHMENTS, MAX_RENDERBUFFER_SIZE MAX_INTEGER_SAMPLES
	// @todo boolean IsRenderbuffer(uint renderbuffer);

	//@}

protected:
	// Overridden
	void attach( FrameBufferObject * fbo, const GLenum attachment );

	// Overridden
	void detach( FrameBufferObject * fbo, const GLenum attachment );
};



} // namespace glo

#endif //#ifndef _GLO_RENDERBUFFER_HPP
