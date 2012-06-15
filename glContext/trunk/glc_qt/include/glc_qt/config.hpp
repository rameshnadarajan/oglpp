// OGLPP - Copyright (C) 2012, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Bryan Schuller
// Author Guillaume Brocker

#ifndef _GLC_QT_CONFIG_HPP
#define _GLC_QT_CONFIG_HPP

/** 
 * @defgroup g_glc_qt Open(GL) (C)context management for (Qt)
 * @ingroup g_qt
 *
 * This library provides the needed cross-platform API to add OpenGL capabilities to Qt.
 *
 * @sa http://qt.nokia.com/
 *
 * \b glc_qt is open source (LGPL).
 */

#ifdef WIN32

	#ifdef GLC_QT_EXPORTS
	#define GLC_QT_API	__declspec(dllexport)
	#else
	#define GLC_QT_API	__declspec(dllimport)
	#endif

	#define GLC_QT_CLASS_API

#else

	#define GLC_QT_API
	#define GLC_QT_CLASS_API

#endif

#endif //#ifndef _GLC_QT_CONFIG_HPP
