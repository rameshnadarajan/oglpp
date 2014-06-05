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

#include "gle/GLSLLanguage.hpp"
#include "gle/glHelpers.hpp"
#include "GLSLDictionnary.cpp"


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
	"4.2",
	"4.3"
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
	return static_cast<GLSL_VERSION_LANGUAGE>(0);
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


const std::string getGLSLKeywords(gle::GLSL_VERSION_LANGUAGE version)
{
	return gle::glsldictionnaryKeywords[version];
}


const std::string getGLSLFunctions(gle::GLSL_VERSION_LANGUAGE version)
{
	return gle::glsldictionnaryFunctions[version];
}


const std::string getGLSLVariables(gle::GLSL_VERSION_LANGUAGE version)
{
	return gle::glsldictionnaryVariable[version];
}


const std::string getAllKeywords(gle::GLSL_VERSION_LANGUAGE version)
{
	return (std::string(gle::getGLSLKeywords(version) + " " 
			+ gle::getGLSLFunctions(version) + " " 
			+ gle::getGLSLVariables(version)));
}



}
