// GLSLLanguage - Copyright (C) 2012, Alexandre Di Pino.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Alexandre Di Pino

#ifndef _GLE_GLSLLANGUAGE_HPP
#define _GLE_GLSLLANGUAGE_HPP

#include "gle/gle.hpp"

#include <list>


namespace gle
{



enum GLSL_VERSION_LANGUAGE
{
	v1_2 = 0,
	v1_3,
	v1_4,
	v1_5,
	v3_3,
	v4_0,
	v4_1,
	v4_2,
	v4_3,
	MAX_VERSION_LANGUAGE
};

/**
 * @brief	Get GLSLversion into a string like "4.2"
 *
 * @param	version	the GLSL version
 *
 * @return	the version in string
 */
GLE_API const std::string glslVersionToString(GLSL_VERSION_LANGUAGE version);

/**
 * @brief	Get GLSLversion into an enum
 *
 * @param	version	the GLSL version in std::string
 *
 * @return	the version in enum
 */
GLE_API const GLSL_VERSION_LANGUAGE glslVersionToEnum(const std::string& version);

/**
 * @brief	Get the current GLSLversion
 *
 * @return	the current version in string
 */
GLE_API const std::string getCurrentGLSLVersion();

/**
 * @brief	Get GLSL Keyword
 *
 * @param	version the dictionnary version
 *
 * @return	all field element
 */
GLE_API const std::string getGLSLKeywords(gle::GLSL_VERSION_LANGUAGE version);

/**
 * @brief	Get GLSL Functions
 *
 * @param	version the dictionnary version
 *
 * @return	all field element
 */
GLE_API const std::string getGLSLFunctions(gle::GLSL_VERSION_LANGUAGE version);

/**
 * @brief	Get GLSL Variables
 *
 * @param	version the dictionnary version
 *
 * @return	all field element
 */
GLE_API const std::string getGLSLVariables(gle::GLSL_VERSION_LANGUAGE version);

/**
 * @brief	Get All Keyword in dictionnary
 *
 * @param	version the dictionnary version
 *
 * @return	all field element
 */
GLE_API const std::string getAllKeywords(gle::GLSL_VERSION_LANGUAGE version);



}

#endif
