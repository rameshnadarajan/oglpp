// OGLPP - Copyright (C) 2005, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_DISPLAYLIST_HPP
#define _GLO_DISPLAYLIST_HPP

#ifdef __OPENGLES2__

#else

#include "glo/IResource.hpp"



namespace glo
{

/**
 * @brief Encapsulation of OpenGL display list.
 */
struct GLO_API DisplayList : public IResource
{
	/**
	 * @name Constructor/Destructor.
	 */
	//@
	
	/**
	 * @brief Constructor.
	 */
	DisplayList();
	
	/**
	 * @brief Destructor.
	 */
	~DisplayList();

	//@}



	/**
	 * @name Actions.
	 */
	//@{
	
	/**
	 * @brief Generates a contiguous set of empty display lists and start the compilation of the first one.
	 * 
	 * @pre isEmpty() must return true.
	 * 
	 * @param range	The number of contiguous empty display lists to be generated.
	 * 
	 * @return true if sucessful, false otherwise.
	 */
	bool begin( GLsizei range = 1 );

	/**
	 * @brief Ends the current display list and starts the compilation of the next display list if needeed.
	 * 
	 * @pre begin() has been called and next, if already called, has never returned false.
	 * 
	 * @return true if sucessful and it remains display list to be compiled, false if all display lists are compiled.
	 */
	bool next();

	/**
	 * @brief Execute all stored display lists.
	 * 
	 * @pre Don't call this method during display list compilation (see begin() and next()).
	 * @pre isEmpty() must returned false( Display lists must have been computed, otherwise an assert is raised).
	 */
	void call() const;
	
	/**
	 * @brief Release all stored display lists.
	 */
	void release();
	//@}
	
	
	
	/**
	 * @name Accessors.
	 */
	//@{
	
	/**
	 * @brief Returns if this class stored display lists.
	 */
	bool isEmpty() const;
	
	//@}



private:
	
	/**
	 * @brief Name of the first display list(others are contiguous).
	 */
	GLuint	m_index;

	/**
	 * @brief Number of display lists.
	 */
	int		m_count;
	
	/**
	 * @brief Name of the current display list (used during compilation of the display lists).
	 */
	GLuint	m_current;
};



} // namespace glo

#endif	// #ifdef __OPENGLES2

#endif //#ifndef _GLO_DISPLAYLIST_HPP
