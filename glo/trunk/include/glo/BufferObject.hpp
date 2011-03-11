// OGLPP - Copyright (C) 2011, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_BUFFEROBJECT_HPP
#define _GLO_BUFFEROBJECT_HPP

#include "glo/Object.hpp"



namespace glo
{

/**
 * @brief OpenGL buffer object
 *
 * BufferObject provides api to allocate, desallocate, initialize and render from high-performance server memory.
 */
template< GLenum TargetValue, GLenum BindingValue >
struct BufferObject : public Object
{
	/**
	 * @name Constructor/destructor
	 */
	//@

	/**
	 * @brief Default constructor
	 * 
	 * The underlying OpenGL object is NOT generated.
	 */
	BufferObject();

	/**
	 * @brief Destructor
	 *
	 * This method must call release()
	 */
	~BufferObject();

	//@}



	/**
	 * @name Actions
	 */
	//@{

	void generate();

	void release();

	void bind() const;

	void unbind() const;

	//@}


	/**
	 * @name Accessors
	 */
	//@{

	const bool isBound() const;

	//@}


	/**
	 * @name Creating buffer object data stores
	 */
	//@{

	/**
	 * @brief Creates and initializes a buffer object's data store
	 *
	 * @param size	Specifies the size in bytes of the buffer object's new data store.
	 * @param data	Specifies a pointer to data that will be copied into the data store for initialization,
					or NULL if no data is to be copied.
	 * @param usage	Specifies the expected usage pattern of the data store.
					The symbolic constant must be GL_STREAM_DRAW, GL_STREAM_READ, GL_STREAM_COPY, 
					GL_STATIC_DRAW, GL_STATIC_READ, GL_STATIC_COPY, GL_DYNAMIC_DRAW, GL_DYNAMIC_READ, or GL_DYNAMIC_COPY.
	 */
	void bufferData( GLsizeiptr size, const GLvoid * data, GLenum usage );

	/**
	 * @brief Updates a subset of a buffer object's data store
	 *
	 * @param offset	Specifies the offset into the buffer object's data store where data replacement will begin, measured in bytes.
	 * @param size		Specifies the size in bytes of the data store region being replaced.
	 * @param data		Specifies a pointer to the new data that will be copied into the data store.
	 */
	void bufferSubData( GLintptr offset, GLsizeiptr size, const GLvoid * data );

	//@}

	// @todo Mapping and Unmapping Buffer Data
	// @todo Copying Between Buffers

	// @todo Buffer Object State
};


} // namespace glo

#include "glo/BufferObject.hxx"



#endif //#ifndef _GLO_BUFFEROBJECT_HPP
