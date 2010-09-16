// DisplayDriverConnector - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _DISPLAYDRIVERCONNECTOR_CONFIG_HPP
#define _DISPLAYDRIVERCONNECTOR_CONFIG_HPP

#ifdef WIN32

	#ifdef DISPLAYDRIVERCONNECTOR_EXPORTS
	#define DISPLAYDRIVERCONNECTOR_API	__declspec(dllexport)
	#else
	#define DISPLAYDRIVERCONNECTOR_API	__declspec(dllimport)
	#endif

	#define DISPLAYDRIVERCONNECTOR_CLASS_API

#elif defined(__GNUC__) && (__GNUC__>=4) && defined(__USE_DYLIB_VISIBILITY__)

	#ifdef DISPLAYDRIVERCONNECTOR_EXPORTS
	#define DISPLAYDRIVERCONNECTOR_API __attribute__ ((visibility("default")))
	#define DISPLAYDRIVERCONNECTOR_CLASS_API __attribute__ ((visibility("default")))
	#else
	#define DISPLAYDRIVERCONNECTOR_API __attribute__ ((visibility("hidden")))
	#define DISPLAYDRIVERCONNECTOR_CLASS_API __attribute__ ((visibility("hidden")))
	#endif

#else

	#define DISPLAYDRIVERCONNECTOR_API
	#define DISPLAYDRIVERCONNECTOR_CLASS_API

#endif

#define DDC_API DISPLAYDRIVERCONNECTOR_API

#endif //#ifndef _DISPLAYDRIVERCONNECTOR_CONFIG_HPP
