// DisplayDriverConnector - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _DISPLAYDRIVERCONNECTOR_HELPERS_HPP
#define _DISPLAYDRIVERCONNECTOR_HELPERS_HPP

#include <string>
#include <vector>



// @todo doc
std::vector< std::string > split_string( const std::string inputString, const char separator );

// @todo doc
void copy( int *destination, const std::vector< std::string >& source, int num );

// @todo doc
const std::string get_string_from_registry( std::string subKey, std::string name );

#endif //#ifndef _DISPLAYDRIVERCONNECTOR_HELPERS_HPP
