// OGLPP - Copyright (C) 2005, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "glo/Object.hpp"



namespace glo
{



Object::Object()
:	m_object(0)
{
}



Object::~Object()
{
}



const bool Object::isEmpty() const
{
	return m_object == 0;
}



const GLuint Object::getName() const
{
	return m_object;
}



} // namespace glo
