// OGLPP - Copyright (C) 2011, 2013, Nicolas Papier.
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
 *
 * @todo bind( to another target ) for copying:Data can be copied from one buffer object to another. To do this, first bind the source and destination buffers to different targets. These could be any target, but GL_COPY_READ_BUFFER and GL_COPY_WRITE_BUFFER have no special semantics, so they make useful targets for this purpose.
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

	void bindToDefault() const;

	static void staticBindToDefault();

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
	 * @pre isEmpty() == false
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
	 * @pre isEmpty() == false
	 * @pre size <= getSize()
	 *
	 * @param offset	Specifies the offset into the buffer object's data store where data replacement will begin, measured in bytes.
	 * @param size		Specifies the size in bytes of the data store region being replaced.
	 * @param data		Specifies a pointer to the new data that will be copied into the data store.
	 */
	void bufferSubData( GLintptr offset, GLsizeiptr size, const GLvoid * data );

	//@}

	// @todo Mapping and Unmapping Buffer Data
	// @todo Copying Between Buffers


	/**
	 * @name Buffer Object State
	 */
	//@{

	/**
	 * @brief Retrieves the size of the buffer object
	 *
	 * @pre isEmpty() == false
	 *
	 * @return the size in bytes of the data store used by the buffer object
	 */
	const GLsizeiptr getSize() const;

	/**
	 * @brief Retrieves the usage of the buffer object
	 *
	 * @pre isEmpty() == false
	 *
	 * @return the usage pattern of the data store used by the buffer object
	 *
	 * @remark The usage pattern is specified by the last call to bufferData() method.
	 */
	const GLenum getUsage() const;

	//@}


protected:
	GLsizeiptr		m_size;
	GLenum			m_usage;
};


} // namespace glo

#include "glo/BufferObject.hxx"



#endif //#ifndef _GLO_BUFFEROBJECT_HPP
