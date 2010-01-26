// OGLPP - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_FRAMEBUFFEROBJECT_HPP
#define _GLO_FRAMEBUFFEROBJECT_HPP

#include <string>

#include "glo/Object.hpp"

namespace glo { struct Texture2D; }



namespace glo
{

/**
 * @brief Frame buffer object (FBO) class
 * 
 * This class is an encapsulation of the OpenGL extension named GL_EXT_framebuffer_object
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
	 * @name Specific fbo accessors
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
	 * @name Attachements
	 *
	 * @todo attach Renderbuffer
	 */
	//@{

	// texture->isEmpty() == false
	GLO_API void attachColor( glo::Texture2D * texture );

	// texture->isEmpty() == false
	GLO_API void attachDepth( glo::Texture2D * texture );

	// @todo attatchStencil()

	//@}



	/**
	 * @brief Sets rendering to depth only.
	 *
	 * @pre isBound()
	 *
	 * @param depthOnly		Sets DrawBuffer and ReadBuffer to none when depthOnly is true.
	 *						Sets DrawBuffer and ReadBuffer to first color attachement when depthOnly is false.
	 */
	GLO_API void renderDepthOnly( const bool depthOnly = true );
};



} // namespace glo

#endif //#ifndef _GLO_FRAMEBUFFEROBJECT_HPP
