// GLE - Copyright (C) 2004, 2006, 2007, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "gle/OpenGLExtensions.hpp"

#ifndef WIN32
#include <dlfcn.h>
#endif

#include <sstream>

#ifdef WIN32
	#include <GL/wglext.h>
#elif __MACOSX__
#else // POSIX
#endif

// COMPILE TIME TEST ON OPENGL VERSION
#ifdef WIN32
	#ifdef GL_VERSION_1_1
	#pragma message( "gl.h is the windows version for opengl 1.1 : ok." )
	#else
	#error "This is a new gl.h. Not the opengl 1.1 version."
	#endif
#endif



namespace gle
{



OpenGLExtensions::OpenGLExtensions( std::ostream* pOS /*const bool bEnableLogWindow*/ ) :
	m_pLog( pOS )
{
/*	FIXME wxLog *pLogBak = wxLog::GetActiveTarget();

	std::stringstream ssTitle;

	if ( bEnableLogWindow )
	{
#ifdef WIN32
		DWORD idThread = GetCurrentThreadId();
#else
		#error "no win32 not actually supported"
#endif
	
		ssTitle << "gle logger : thread(" << idThread << ")";
		
		wxLogWindow *pLogWin =new wxLogWindow(NULL, ssTitle.str().c_str() );
		m_pLogger = pLogWin;

		assert( pLogWin != 0 );
		//pLogWin->SetVerbose(TRUE);
		//pLogWin->SetLogLevel( wxLOG_Max );
	
		pLogWin->Show();
	}
	else
	{
		m_pLogger = new wxLogStderr();
	}

	//
	logDebug( ssTitle.str().c_str() );

	wxLog::SetActiveTarget(pLogBak);*/
}



OpenGLExtensions::~OpenGLExtensions()
{
	/* FIXME // Destroy logger.
	if ( m_pLogger != 0 )
	{
		wxLog *pLogBak = wxLog::SetActiveTarget(NULL);
		delete m_pLogger;

		if ( pLogBak != m_pLogger )
		{
			wxLog::SetActiveTarget( pLogBak );
		}
	}*/
}



std::string OpenGLExtensions::getVendor()
{
	const GLubyte *pString;
	pString = glGetString(GL_VENDOR);

	std::string strVendor;

	if ( pString != NULL )
	{
		strVendor = reinterpret_cast<const char*>(pString);
	}

	return ( strVendor );
}



std::string OpenGLExtensions::getRenderer()
{
 	const GLubyte *pString;
	pString = glGetString(GL_RENDERER);

	std::string strRenderer;
	
	if ( pString != NULL )
	{
		strRenderer = reinterpret_cast<const char*>(pString);
	}

	return ( strRenderer );
}



std::string OpenGLExtensions::getVersion()
{
	const GLubyte *pString;
	pString = glGetString(GL_VERSION);
	
	std::string strVersion;
	
	if ( pString != NULL )
	{
		strVersion = reinterpret_cast<const char*>(pString);
	}

	return ( strVersion );
}



std::string OpenGLExtensions::getShadingLanguageVersion()
{
	const GLubyte *pString;
	pString = glGetString(GL_SHADING_LANGUAGE_VERSION_ARB);
	
	std::string strVersion;
	
	if ( pString != NULL )
	{
		strVersion = reinterpret_cast<const char*>(pString);
	}

	return ( strVersion );
}



std::string OpenGLExtensions::getExtensions( const int numElementInExtensionsGroup )
{
	const GLubyte *pString;
	pString = glGetString(GL_EXTENSIONS);

	std::string strExtensions;
	
	if ( pString != NULL )
	{
		strExtensions = reinterpret_cast<const char*>(pString);

		if ( numElementInExtensionsGroup != 0 )
		{
			strExtensions = replaceSpaceByEndl( strExtensions, numElementInExtensionsGroup-1 );
		}
	}

	return ( strExtensions );
}



std::vector< std::string > OpenGLExtensions::getExtensionsVector()
{
	std::vector< std::string > retVal;

	std::string strExtensions;
	strExtensions = replaceSpaceByEndl( getExtensions(), 0 );

	retVal = separateEachElement( strExtensions );

	return ( retVal );
}



std::string OpenGLExtensions::getWExtensions( const int numElementInExtensionsGroup )
{
#ifdef WIN32
	// WGL_ARB_extensions_string
	PFNWGLGETEXTENSIONSSTRINGARBPROC		wglGetExtensionsStringARB;
	wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) getExtensionPtr( "wglGetExtensionsStringARB" );

	if ( wglGetExtensionsStringARB == 0 )
	{
		return ( std::string() );
	}
	else
	{
		std::string strExtensions;

		const char *pString = wglGetExtensionsStringARB( wglGetCurrentDC() );

		if ( pString != NULL )
		{
			strExtensions = pString;
		}
		
		if ( numElementInExtensionsGroup != 0 )
		{
			strExtensions = replaceSpaceByEndl( strExtensions, numElementInExtensionsGroup-1 );
		}

		return ( strExtensions );
	}
#else

	//#error "Non win32 target not yet supported."
	
	return ( std::string("") );

#endif
}



std::vector< std::string > OpenGLExtensions::getWExtensionsVector()
{
	std::vector< std::string > retVal;

	std::string strExtensions;
	strExtensions = replaceSpaceByEndl( getWExtensions(), 0 );

	retVal = separateEachElement( strExtensions );

	return ( retVal );
}



bool OpenGLExtensions::isExtensionSupported( const char *pExtension )
{
	return ( checkExtension( pExtension, getExtensions().c_str() ) );
}



bool OpenGLExtensions::isWExtensionSupported(const char *pExtension)
{
	return ( checkExtension( pExtension, getWExtensions().c_str() ) );
}



std::string OpenGLExtensions::getInformations( const int numElementInExtensionsGroup )
{
	assert( numElementInExtensionsGroup >= 0 );
	
	std::stringstream strInfos;
	strInfos << "OpenGL vendor string                     : " << getVendor() << std::endl;
	strInfos << "OpenGL renderer string                   : " << getRenderer() << std::endl;
	strInfos << "OpenGL version string                    : " << getVersion() << std::endl;
	strInfos << "Shading language version                 : " << getShadingLanguageVersion() << std::endl;

	std::vector< std::string > extensions	= getExtensionsVector();
	std::vector< std::string > wextensions	= getWExtensionsVector();
	
	strInfos << "Extension count exposed by driver        : " << static_cast<int>(extensions.size()) << std::endl;
	strInfos << "Window extension count exposed by driver : " << static_cast<int>(wextensions.size()) << std::endl;
	strInfos << "Total extension count for this hardware  : " << 
		static_cast<int>(extensions.size() + wextensions.size()) << std::endl;

	//
	std::string strExtensions = getExtensions();

	if ( numElementInExtensionsGroup != 0 )
	{
		strExtensions = replaceSpaceByEndl( strExtensions, numElementInExtensionsGroup-1 );
	}
	strInfos << "OpenGL extensions : " << std::endl << strExtensions << std::endl;

	strExtensions = getWExtensions();
	if ( numElementInExtensionsGroup != 0 )
	{
		strExtensions = replaceSpaceByEndl( strExtensions, numElementInExtensionsGroup-1 );
	}
	strInfos << strExtensions << std::endl;

	return ( strInfos.str() );
}



void OpenGLExtensions::log( const std::string str )
{
	(*m_pLog) << str;
}



void OpenGLExtensions::log( const int integer )
{
	(*m_pLog) << integer;
}



void OpenGLExtensions::logEndl( const std::string str )
{
	(*m_pLog) << str << std::endl;
}



void OpenGLExtensions::log( const std::vector< std::string > data )
{
	for(	std::vector< std::string >::const_iterator	i		= data.begin(),
														iEnd	= data.end();
			i != iEnd;
			++i )
	{
		logEndl( *i );
	}
}



std::string OpenGLExtensions::getGLError( GLenum glenumError )
{
	std::string strError;

	switch ( glenumError )
	{
	case GL_NO_ERROR :
		strError = "no error";
		break;

	case GL_INVALID_ENUM:
		strError = "invalid enum";
 		break;

	case GL_INVALID_VALUE :
		strError = "invalid value";
		break;

	case GL_INVALID_OPERATION :
		strError = "invalid operation";
		break;

	case GL_STACK_OVERFLOW :
		strError = "stack overflow";
		break;

	case GL_STACK_UNDERFLOW :
		strError = "stack underflow";
		break;

	case GL_OUT_OF_MEMORY :
		strError = "out of memory";
		break;

	default:
		strError = "unknown error";
	}

	return ( strError );
}



const bool OpenGLExtensions::isGLError( std::string& strError )
{
	GLenum	glenumError(	glGetError() );

	strError = getGLError( glenumError );

	return ( glenumError != GL_NO_ERROR );
}



void OpenGLExtensions::reportGLErrors()
{
	std::string	strErrors("");
	bool			bIsGLErrors;

	bIsGLErrors = isGLError( strErrors );

	if ( bIsGLErrors )
	{
		logEndl("gle::OpenGLExtensions::reportGLErrors: " + strErrors );
	}
}



std::string OpenGLExtensions::replaceSpaceByEndl( const std::string& strString, const int skipNumElement )
{
	std::string strRetString(strString);
	
	bool							bLoop = true;
	std::string::size_type	index = 0;

	do
	{
		// Skip some spaces.
		for( int i=0; i < skipNumElement; )
		{
			std::string::size_type indexSkip = strRetString.find(" ", index );

			if ( indexSkip == std::string::npos )
			{
				bLoop = false;
				break;
			}
			else if ( indexSkip == index )
			{
				// sequence of space not count.
				++index;
				continue;
			}
			else 
			{
				// Skip one spaces
				index = indexSkip + 1;
				++i;
			}
		}

		//
		index = strRetString.find(" ", index );
		
		if ( index == std::string::npos )
		{
			bLoop = false;
		}
		else
		{
			strRetString.replace(index, 1, "\n");
			++index;
		}

	} while ( bLoop );

	return ( strRetString );
}



std::vector< std::string > OpenGLExtensions::separateEachElement( const std::string stringToProcess, 
	const std::string separator )
{
	std::string strSrc( stringToProcess );
	std::vector< std::string > retVal;

	bool							bLoop = true;
	std::string::size_type	index = 0;
	do
	{
		index = strSrc.find("\n", 0 );

		if ( index == std::string::npos )
		{
			retVal.push_back( strSrc );
			bLoop = false;
		}
		else
		{
			std::string element = strSrc.substr( 0, index );
			retVal.push_back( element );
			strSrc = strSrc.erase(0, index+1 );
		}
	} while ( bLoop );

	return ( retVal );
}



const bool OpenGLExtensions::checkExtension( const char *extName, const char *extensionString )
{
	/*
	 ** Search for extName in the extensions string.  Use of strstr()
	 ** is not sufficient because extension names can be prefixes of
	 ** other extension names.  Could use strtok() but the constant
	 ** string returned by glGetString can be in read-only memory.
	 */
	char *p = (char *) extensionString;
	char *pend;
	std::string::size_type extNameLen;

	extNameLen = strlen(extName);
	pend = p + strlen(p);

	while (p < pend) 
	{
		std::string::size_type n = strcspn(p, " ");
		if ((extNameLen == n) && (strncmp(extName, p, n) == 0)) 
		{
			return true;
		}
		p += (n + 1);
	}
	return false;
}



void *OpenGLExtensions::getExtensionPtr( const char *_pExtensionName )
{
	void *pExtensionFunction;

#ifdef WIN32

	pExtensionFunction = wglGetProcAddress( _pExtensionName );

#else

	#if __MACOSX__
	void *libHandle		= dlopen("libGL.dylib", RTLD_LAZY);
	assert( libHandle != 0 && "Unable to dlopen libGL.dylib" );
	#else // UNIX
	void *libHandle		= dlopen("libGL.so", RTLD_LAZY);
	assert( libHandle != 0 && "Unable to dlopen libGL.so" );
	#endif
	
	pExtensionFunction	= dlsym(libHandle, _pExtensionName);

	dlclose(libHandle);

#endif

	return pExtensionFunction;
}



} // namespace gle
