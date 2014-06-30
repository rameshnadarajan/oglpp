// DisplayDriverConnector - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "displayDriverConnector/helpers.hpp"


#include <cstdlib>

#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__)
#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>	// for Reg*()
#endif



std::vector< std::string > split_string( const std::string inputString, const char separator )
{
	std::vector< std::string > retVal;

	std::string str(inputString);
	std::size_t position;
	while (	(position=str.find(separator)) != std::string::npos )
	{
		retVal.push_back( str.substr(0, position) );
		str = str.substr(position+1);
	}

	if ( str.size() > 0 )
	{
		retVal.push_back( str );
	}

	return retVal;
}



void copy( int *destination, const std::vector< std::string >& source, int num )
{
	for( int i=0; (i < num) && (i < static_cast<int>(source.size())); ++i )
	{
		destination[i] = std::atoi( source[i].c_str() );
	}
}



const std::string get_string_from_registry( std::string subKey, std::string name )
{
#ifdef _WIN32
	std::string retVal;

	HKEY hKey;
	if ( RegOpenKeyEx(HKEY_LOCAL_MACHINE, subKey.c_str(), 0, KEY_READ, &hKey) == ERROR_SUCCESS )
	{
		DWORD dwType = REG_SZ;
		char buffer[512] = {0};
		DWORD cbData = sizeof(buffer);

		if ( RegQueryValueEx( hKey, name.c_str(), 0, &dwType, (LPBYTE)buffer, &cbData ) == ERROR_SUCCESS )
		{
			retVal = buffer;
		}
		// else nothing to do

		RegCloseKey(hKey);
	}
	return retVal;	
#else
	#warning "get_string_from_registry() not implemented on non win32 platform"
	return "";
#endif

}
