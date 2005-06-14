// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_VERTEXBUFFEROBJECT_H
#define _GLO_VERTEXBUFFEROBJECT_H

#include "glo/IResource.hpp"



namespace glo
{

/**
 * @brief Encapsulation of OpenGL Vertex Buffer Object (extension GL_ARB_vertex_buffer_object).
 * 
 * @todo Add bind(), set, subset and others ?
 * @todo Check more errors.
 */
struct GLO_API VertexBufferObject : public IResource
{
	/**
	 * @name Constructor/Destructor.
	 */
	//@
	
	/**
	 * @brief Constructor.
	 */
	VertexBufferObject();
	
	/**
	 * @brief Destructor.
	 */
	~VertexBufferObject();

	//@}



	/**
	 * @name Actions.
	 */
	//@{
	


	/**
	 * @brief Generates a contiguous set of empty vertex buffer object.
	 * 
	 * @pre isEmpty() must return true.
	 * 
	 * @param range	The number of vertex buffer object to be generated.
	 * 
	 * @return true if sucessful, false otherwise.
	 */
	bool generate( GLsizei range = 1 );

	/**
	 * @brief Returns the identifier of a buffer.
	 * 
	 * @pre index < number of allocated buffers (m_count).
	 * 
	 * @param index	 Zero-based index to buffer table.
	 * 
	 * 
	 * @return Identifier of the desired buffer.
	 */
	GLuint	get( uint32 index ) const;
	
	/**
	 * @brief Release all stored vertex buffer object.
	 */
	void release();
	//@}
	

	
	/**
	 * @name Accessors.
	 */
	//@{
	
	/**
	 * @brief Returns if this class stored at least one vertex buffer object.
	 */
	bool isEmpty() const;
	
	/**
	 * @brief Returns the number of vertex buffer objects.
	 */
	int32 getNum() const;
	
	//@}



private:
	
	/**
	 * @brief Buffer object names.
	 */
	GLuint		*m_buffer;
	
	/**
	 * @brief Number of buffer object names.
	 */
	uint32		m_count;
};



} // namespace glo

#endif //#ifndef _GLO_VERTEXBUFFEROBJECT_H
