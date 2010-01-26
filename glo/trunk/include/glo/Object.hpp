// OGLPP - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_OBJECT_HPP
#define _GLO_OBJECT_HPP

#include "glo/IResource.hpp"



namespace glo
{

/**
 * @brief Encapsulation of a single OpenGL object
 *
 * @todo isSupported()
 */
struct Object : public IResource
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
	GLO_API Object();

	/**
	 * @brief Destructor
	 *
	 * This method must call release()
	 */
	GLO_API virtual ~Object()=0;
	
	//@}
	
	
	
	/**
	 * @name Actions
	 *
	 * @todo unbind => reverts to default (fb 0, vbo 0, shader 0...)
	 */
	//@{
	
	/**
	 * @brief Generates the underlying OpenGL object
	 * 
	 * @pre isEmpty() must return true
	 * @post isEmpty() must return false
	 */
	GLO_API virtual void generate()=0;

	/**
	 * @brief Deletes the underlying OpenGL object
	 * 
	 * @post isEmpty() must return false
	 */
	GLO_API virtual void release()=0;

	/**
	 * @brief Binds the underlying OpenGL object
	 * 
	 * @pre isEmpty() must return false
	 */
	GLO_API virtual void bind() const=0;

	//@}



	/**
	 * @name Accessors
	 */
	//@{
	
	/**
	 * @brief Tests if this class contains an OpenGL object
	 * 
	 * @return true if the underlying OpenGL object has been generated, false if otherwise.
	 */
	GLO_API virtual const bool isEmpty() const;

	/**
	 * @brief Returns if the underlying OpenGL object is bound
	 * 
	 * @pre isEmpty() must return false
	 * 
	 * @return true if the underlying OpenGL object is bound, false otherwise.
	 */
	GLO_API virtual const bool isBound() const=0;
	//@}



protected:
	/**
	 * @brief Name of the underlying OpenGL object.
	 */
	GLuint	m_object;
};



} // namespace glo

#endif //#ifndef _GLO_OBJECT_HPP
