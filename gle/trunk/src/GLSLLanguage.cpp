// GLSLLanguage - Copyright (C) 2012, Alexandre Di Pino.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Alexandre Di Pino

#include <algorithm>
#include <ctype.h>
#include <fstream>
#include <iostream>
#include <locale>
#include <stdio.h>
#include <sstream>
#include <string>

#include <boost/locale.hpp>

#include <sbf/pkg/Module.hpp>

#include "gle/GLSLLanguage.hpp"
#include "gle/glHelpers.hpp"



namespace
{
/**
 * @brief	Case insensitive comparison of two string
 *
 * @param	first the first string to compare
 *
 * @param	second the second string to compare
 *
 * @return	true if first < second
 */
const bool compareNoCase(std::string first, std::string second)
{
	std::transform(first.begin(), first.end(), first.begin(), tolower);
	std::transform(second.begin(), second.end(), second.begin(), tolower);

	int i = first.compare(0, second.length(), second);

	return ( (i < 0 ) ? true : false );
}
}


namespace gle
{



static std::string GLSLversion[] = 
{
	"1.2",
	"1.3",
	"1.4",
	"1.5",
	"3.3",
	"4.0",
	"4.1",
	"4.2"
};


const std::string glslVersionToString(GLSL_VERSION_LANGUAGE version)
{
	return GLSLversion[version];
}


const GLSL_VERSION_LANGUAGE glslVersionToEnum(const std::string& version)
{
	int i = 0;
	while ( i < MAX_VERSION_LANGUAGE )
	{
		if (version == GLSLversion[i])
		{
			return static_cast<GLSL_VERSION_LANGUAGE>(i);
		}
		++i;
	}
	assert(false && "Internal error");
}


const std::string getCurrentGLSLVersion()
{
	std::string retVal;
	std::ostringstream maj;
	std::ostringstream min;

	int major = gleGetGLSLMajorVersion();
	int minor = gleGetGLSLMinorVersion();

	maj << major;
	retVal = maj.str();

	min << minor;
	retVal += "." + min.str();

	return retVal;
}


const std::list<std::string> getDictionnary(gle::GLSL_VERSION_LANGUAGE version, const std::string& field)
{
	boost::filesystem::path filepath = sbf::pkg::Module::get()->getPath(sbf::pkg::SharePath);
	std::string file = filepath.string() + "\\dictionnary_" + glslVersionToString(version) + ".txt";
	std::list<std::string>	element;
	
	std::ifstream fileopen(file);
	if ( fileopen )
	{
		std::string line;
		bool i = false;
		while (std::getline( fileopen, line) )
		{
			if (i)
			{
				std::istringstream iss(line);
				std::string word;
				while (std::getline( iss, word, ' '))
				{
					element.push_back(word);
				}
				fileopen.close();
				element.sort(gle::compareNoCase);
				return element;
			}
			if (line == field)	i = true;
		}
		element.sort(gle::compareNoCase);
	}
	else
	{
		std::cout << "no openfile" << std::endl;
	}
	return element;
}


const std::list<std::string> getGLSLKeywords(gle::GLSL_VERSION_LANGUAGE version)
{
	return getDictionnary(version, "[KEYWORDS]");
}


const std::list<std::string> getGLSLFunctions(gle::GLSL_VERSION_LANGUAGE version)
{
	return getDictionnary(version, "[FUNCTIONS]");
}


const std::list<std::string> getGLSLVariables(gle::GLSL_VERSION_LANGUAGE version)
{
	return getDictionnary(version, "[VARIABLES]");
}


const std::list<std::string> getAllKeywords(gle::GLSL_VERSION_LANGUAGE version)
{
	std::list<std::string> retValue = getGLSLKeywords(version);
	std::list<std::string> tmp = getGLSLFunctions(version);
	std::list<std::string> tmp2 = getGLSLVariables(version);

	retValue.merge(tmp);
	retValue.merge(tmp2);
	retValue.sort(gle::compareNoCase);
	return retValue;
}



}
