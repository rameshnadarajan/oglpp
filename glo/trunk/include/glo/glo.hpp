// GLE - Copyright (C) 2005, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLO_GLO_H
#define _GLO_GLO_H

/** 
 * @namespace glo
 * 
 * @brief glo for open(GL) (O)bject
 * 
 * \b glo is open source (LGPL).
 */

#include <gle/Wrapper.hpp>
#include <gle/WrapperGen.hpp>
#include <gle/OpenGLExtensionsGen.hpp>



#ifdef _WIN32

   #ifdef GLO_EXPORTS
   #define GLO_API	__declspec(dllexport)
   #else
   #define GLO_API	__declspec(dllimport)
   #endif

#else

    #define GLO_API

#endif



#endif //#ifndef _GLO_GLO_H
