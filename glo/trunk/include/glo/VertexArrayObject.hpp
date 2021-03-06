// OGLPP - Copyright (C) 2011, 2013, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_VERTEXARRAYOBJECT_HPP
#define _GLO_VERTEXARRAYOBJECT_HPP

#ifdef __OPENGLES2__
	// No VAO in GLES 2
	// @todo emulation of VAO (https://github.com/p3/regal/blob/master/src/regal/RegalVao.h)
	// @todo use extension GL_OES_vertex_array_object
#else

#include "glo/Object.hpp"



namespace glo
{

/**
 * @brief (V)ertex (A)rray (O)bject
 * 
 * This class is an encapsulation of a single VAO. At OpenGL level, all state related to the definition of data
 * used by the vertex processor is encapsulated in a VAO.
 */
struct VertexArrayObject : public Object
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
	GLO_API VertexArrayObject();
	
	/**
	 * @brief Destructor
	 */
	GLO_API ~VertexArrayObject();

	//@}



	/**
	 * @name Actions
	 */
	//@{
	
	/**
	 * @brief Generates the vertex array object
	 * 
	 * @pre isEmpty() must return true
	 * @post isEmpty() must return false
	 */
	GLO_API void generate();

	/**
	 * @brief Deletes the vertex array object
	 * 
	 * @post isEmpty() must return false
	 */
	GLO_API void release();

	/**
	 * @brief Binds the vertex array object
	 * 
	 * @pre isEmpty() must return false
	 */
	GLO_API void bind() const;

	/**
	 * @brief Unbinds the vertex array object
	 * 
	 * @pre isEmpty() must return false
	 * @pre isBound() must return true
	 */
	GLO_API void unbind() const;

	/**
	 * @brief Binds to the default vertex array object
	 */
	GLO_API void bindToDefault() const;

	/**
	 * @brief Binds to the default vertex array object
	 */
	GLO_API static void staticBindToDefault();

	//@}


	/**
	 * @name Accessors
	 */
	//@{

	/**
	 * @brief Returns if the vertex array object is bounded
	 * 
	 * @pre isEmpty() must return false
	 * 
	 * @return true if the vertex array object is bounded, false otherwise.
	 */
	GLO_API const bool isBound() const;

	//@}


	/**
	 * @name Queries
	 */
	//@{
	//@}
};



} // namespace glo

#endif //#ifdef __OPENGLES2__

#endif //#ifndef _GLO_VERTEXARRAYOBJECT_HPP
