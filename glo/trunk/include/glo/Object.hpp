// OGLPP - Copyright (C) 2005, 2010, 2013, Nicolas Papier.
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

	/**
	 * @brief Unbinds the underlying OpenGL object
	 * 
	 * @pre isEmpty() must return false
	 * @pre isBound() must return true
	 */
	GLO_API virtual void unbind() const=0;

	/**
	 * @brief Binds to the default underlying OpenGL object
	 */
	GLO_API virtual void bindToDefault() const=0;

	/**
	 * @brief Binds to the default underlying OpenGL object
	 *
	 * @remark Don't call this method, there is no underlying OpenGL object. See classes derived from Object.
	 */
	static void staticBindToDefault();

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

	/**
	 * @brief Returns the name of the underlying OpenGL object
	 */
	GLO_API const GLuint getName() const;
	//@}



protected:
	/**
	 * @brief Name of the underlying OpenGL object.
	 */
	GLuint	m_object;
};



} // namespace glo

#endif //#ifndef _GLO_OBJECT_HPP
