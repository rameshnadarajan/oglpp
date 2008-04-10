// GLE - Copyright (C) 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLC_CONFIG_HPP
#define _GLC_CONFIG_HPP

/** 
 * @defgroup glc Open(GL) (C)context management
 * 
 * This library provides the needed cross-platform API to add OpenGL capabilities to any user interface toolkits (gtk/gtkmm, wxWidgets, qt and so on).
 *
 * \b glc is open source (LGPL).
 */

#ifdef WIN32

	#ifdef GLC_EXPORTS
	#define GLC_API	__declspec(dllexport)
	#else
	#define GLC_API	__declspec(dllimport)
	#endif

	#define GLC_CLASS_API

#elif defined(__GNUC__) && (__GNUC__>=4) && defined(__USE_DYLIB_VISIBILITY__)

	#ifdef GLC_EXPORTS
	#define GLC_API __attribute__ ((visibility("default")))
	#define GLC_CLASS_API __attribute__ ((visibility("default")))
	#else
	#define GLC_API __attribute__ ((visibility("hidden")))
	#define GLC_CLASS_API __attribute__ ((visibility("hidden")))
	#endif

#else

	#define GLC_API
	#define GLC_CLASS_API

#endif

#endif //#ifndef _GLC_CONFIG_HPP
