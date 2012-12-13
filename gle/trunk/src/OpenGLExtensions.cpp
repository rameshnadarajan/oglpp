// GLE - Copyright (C) 2004, 2006, 2007, 2008, 2010, 2011, 2012, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "gle/OpenGLExtensions.hpp"

#ifndef WIN32
#include <dlfcn.h>
#endif

#include <algorithm>
#include <cstring>
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

	strInfos << std::endl;

	//
	strInfos << "Pixel format informations : " << std::endl;

	GLint		glint;
	GLboolean	glbool;
	GLfloat		glfloat;

	GLint red, green, blue, alpha;
	glGetIntegerv( GL_RED_BITS,		&red );
	glGetIntegerv( GL_GREEN_BITS,	&green );
	glGetIntegerv( GL_BLUE_BITS,	&blue );
	glGetIntegerv( GL_ALPHA_BITS,	&alpha );

	strInfos << "The number of bitplanes in color buffer							: " << red + green + blue + alpha << std::endl;

	glGetIntegerv( GL_DEPTH_BITS, &glint );
	strInfos << "GL_DEPTH_BITS (the number of bitplanes in the depth buffer)				: " << glint << std::endl;

	glGetIntegerv( GL_STENCIL_BITS, &glint );
	strInfos << "GL_STENCIL_BITS (the number of bitplanes in the stencil buffer)				: " << glint << std::endl;

	GLint accum_red, accum_green, accum_blue, accum_alpha;
	glGetIntegerv( GL_ACCUM_RED_BITS,	&accum_red );
	glGetIntegerv( GL_ACCUM_GREEN_BITS,	&accum_green );	
	glGetIntegerv( GL_ACCUM_BLUE_BITS,	&accum_blue );
	glGetIntegerv( GL_ACCUM_ALPHA_BITS,	&accum_alpha );

	strInfos << "The number of bitplanes in the accumulation buffer					: " << accum_red + accum_green + accum_blue + accum_alpha << std::endl;

	glGetIntegerv( GL_AUX_BUFFERS, &glint );
	strInfos << "GL_AUX_BUFFERS (the number of auxiliary color buffers)					: " << glint << std::endl;

	glGetBooleanv( GL_DOUBLEBUFFER, &glbool );
	if ( glbool == GL_TRUE )
	{
		strInfos << "GL_DOUBLEBUFFER (a boolean indicating whether double buffering is supported)		: TRUE " << std::endl;
	}
	else
	{
		strInfos << "GL_DOUBLEBUFFER (a boolean indicating whether double buffering is supported )		: FALSE " << std::endl;
	}

	glGetBooleanv( GL_RGBA_MODE, &glbool );
	if ( glbool == GL_TRUE )
	{
		strInfos << "GL_RGBA_MODE (a boolean indicating whether OpenGL is in RGBA mode or color-index mode)	: TRUE " << std::endl;
	}
	else
	{
		strInfos << "GL_RGBA_MODE (a boolean indicating whether OpenGL is in RGBA mode or color-index mode)	: FALSE " << std::endl;
	}

	glGetBooleanv( GL_STEREO, &glbool );
	if ( glbool == GL_TRUE )
	{
		strInfos << "GL_STEREO (a boolean indicating indicating whether stereo buffers (left and right) are supported) : TRUE " << std::endl;
	}
	else
	{
		strInfos << "GL_STEREO (a boolean indicating indicating whether stereo buffers (left and right) are supported) : FALSE " << std::endl;
	}

	strInfos << "GL_RED_BITS (the number of red bitplanes in each color buffer)		: " << red << std::endl;
	strInfos << "GL_GREEN_BITS (the number of green bitplanes in each color buffer)	: " << green << std::endl;
	strInfos << "GL_BLUE_BITS (the number of blue bitplanes in each color buffer)	: " << blue << std::endl;
	strInfos << "GL_ALPHA_BITS (the number of alpha bitplanes in each color buffer)	: " << alpha << std::endl;

	glGetIntegerv( GL_ACCUM_RED_BITS,	&red );
	glGetIntegerv( GL_ACCUM_GREEN_BITS,	&green );
	glGetIntegerv( GL_ACCUM_BLUE_BITS,	&blue );
	glGetIntegerv( GL_ACCUM_ALPHA_BITS,	&alpha );
	strInfos << "GL_ACCUM_RED_BITS (the number of red bitplanes in the accumulation buffer)	: " << red << std::endl;
	strInfos << "GL_ACCUM_GREEN_BITS (the number of green bitplanes in the accumulation buffer)	: " << green << std::endl;
	strInfos << "GL_ACCUM_BLUE_BITS (the number of blue bitplanes in the accumulation buffer)	: " << blue << std::endl;
	strInfos << "GL_ACCUM_ALPHA_BITS (the number of alpha bitplanes in the accumulation buffer)	: " << alpha << std::endl;

	strInfos << std::endl;

	// OpenGL capabilities
	strInfos << "OpenGL capabilities :\n" << std::endl;

	//
	glGetIntegerv( GL_MAX_ELEMENTS_VERTICES, &glint );
	strInfos << "GL_MAX_ELEMENTS_VERTICES			= " << glint << std::endl;

	glGetIntegerv( GL_MAX_ELEMENTS_INDICES, &glint );
	strInfos << "GL_MAX_ELEMENTS_INDICES				= " << glint << std::endl;

	glGetIntegerv( GL_MAX_VERTEX_ATTRIBS, &glint );
	strInfos << "GL_MAX_VERTEX_ATTRIBS				= " << glint << std::endl << std::endl;


	glGetIntegerv( GL_MAX_VERTEX_UNIFORM_COMPONENTS, &glint );
	strInfos << "GL_MAX_VERTEX_UNIFORM_COMPONENTS		= " << glint << std::endl;

	glGetIntegerv( GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS, &glint );
	strInfos << "GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS		= " << glint << std::endl;

	glGetIntegerv( GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS, &glint );
	strInfos << "GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS	= " << glint << std::endl;

	glGetIntegerv( GL_MAX_GEOMETRY_UNIFORM_COMPONENTS, &glint );
	strInfos << "GL_MAX_GEOMETRY_UNIFORM_COMPONENTS		= " << glint << std::endl;

	glGetIntegerv( GL_MAX_FRAGMENT_UNIFORM_COMPONENTS, &glint );
	strInfos << "GL_MAX_FRAGMENT_UNIFORM_COMPONENTS		= " << glint << std::endl;

	glGetIntegerv( GL_MAX_COMPUTE_UNIFORM_COMPONENTS, &glint );
	strInfos << "GL_MAX_COMPUTE_UNIFORM_COMPONENTS		= " << glint << std::endl;

	glGetIntegerv( GL_MAX_UNIFORM_BUFFER_BINDINGS, &glint );
	strInfos << "GL_MAX_UNIFORM_BUFFER_BINDINGS			= " << glint << std::endl << std::endl;

	//
	glGetIntegerv( GL_MAX_VERTEX_OUTPUT_COMPONENTS, &glint );
	strInfos << "GL_MAX_VERTEX_OUTPUT_COMPONENTS			= " << glint << std::endl;

	glGetIntegerv( GL_MAX_TESS_CONTROL_INPUT_COMPONENTS, &glint );
	strInfos << "GL_MAX_TESS_CONTROL_INPUT_COMPONENTS		= " << glint << std::endl;

	glGetIntegerv( GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS, &glint );
	strInfos << "GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS		= " << glint << std::endl;
	//
	GLint viewportSize[2];
	glGetIntegerv( GL_MAX_VIEWPORT_DIMS, &viewportSize[0] );
	strInfos << "GL_MAX_VIEWPORT_DIMS				= " << viewportSize[0] << " x " << viewportSize[1] << std::endl << std::endl;

	glGetIntegerv( GL_MAX_DRAW_BUFFERS, &glint );
	strInfos << "GL_MAX_DRAW_BUFFERS				= " << glint << std::endl;

	glGetIntegerv( GL_MAX_DUAL_SOURCE_DRAW_BUFFERS, &glint );
	strInfos << "GL_MAX_DUAL_SOURCE_DRAW_BUFFERS			= " << glint << std::endl;

	glGetIntegerv( GL_MAX_COLOR_ATTACHMENTS, &glint );
	strInfos << "GL_MAX_COLOR_ATTACHMENTS			= " << glint << std::endl;

	glGetIntegerv( GL_MAX_RENDERBUFFER_SIZE, &glint );
	strInfos << "GL_MAX_RENDERBUFFER_SIZE			= " << glint << std::endl;

	glGetIntegerv( GL_MAX_SAMPLES, &glint );
	strInfos << "GL_MAX_SAMPLES					= " << glint << std::endl << std::endl;

	//
	glGetIntegerv(GL_MAX_LIGHTS, &glint );
	strInfos << "GL_MAX_LIGHTS					= " << glint << std::endl << std::endl;

	//
	glGetIntegerv( GL_MAX_TEXTURE_UNITS, &glint );
	strInfos << "GL_MAX_TEXTURE_UNITS				= " << glint << std::endl;

	glGetIntegerv( GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS, &glint );
	strInfos << "GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS		= " << glint << std::endl;

	glGetIntegerv( GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS, &glint );
	strInfos << "GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS		= " << glint << std::endl;

	glGetIntegerv( GL_MAX_TEXTURE_IMAGE_UNITS, &glint );
	strInfos << "GL_MAX_TEXTURE_IMAGE_UNITS			= " << glint << std::endl;

	glGetIntegerv( GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB, &glint );
	strInfos << "GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB		= " << glint << std::endl;

	glGetIntegerv( GL_MAX_TEXTURE_SIZE, &glint );
	strInfos << "GL_MAX_TEXTURE_SIZE				= " << glint << " x " << glint << std::endl;

	glGetIntegerv( GL_MAX_3D_TEXTURE_SIZE, &glint );
	strInfos << "GL_MAX_3D_TEXTURE_SIZE				= " << glint << " x " << glint << " x " << glint << std::endl;

	glGetIntegerv( GL_MAX_CUBE_MAP_TEXTURE_SIZE, &glint );
	strInfos << "GL_MAX_CUBE_MAP_TEXTURE_SIZE			= " << glint << " x " << glint << std::endl;

	glGetFloatv( GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &glfloat );
	strInfos << "GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT		= " << glfloat << std::endl;

	strInfos << std::endl;

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



const OpenGLExtensions::DriverProviderType OpenGLExtensions::getDriverProvider() const
{
	std::string vendor = getVendor();
	std::transform( vendor.begin(), vendor.end(), vendor.begin(), tolower );

	// Full match
	// "ATI Technologies Inc."
	if ( strstr(vendor.c_str(), "ati technologies inc.")  != 0 )
	{
		return ATI_DRIVERS;
	}
	else if ( strstr(vendor.c_str(), "nvidia corporation")  != 0 )
	{
		return NVIDIA_DRIVERS;
	}
	// Partial match
	else if ( strstr(vendor.c_str(), "nvidia")  != 0 )
	{
		return NVIDIA_DRIVERS;
	}
	if ( strstr(vendor.c_str(), "ati")  != 0 )
	{
		return ATI_DRIVERS;
	}
	else
	{
		return UNKNOWN_DRIVERS;
	}
}



const std::string OpenGLExtensions::getDriverProviderString() const
{
	const DriverProviderType provider = getDriverProvider();

	switch ( provider )
	{
		case ATI_DRIVERS:
			return std::string("ATI");

		case NVIDIA_DRIVERS:
			return std::string("NVIDIA");

		case UNKNOWN_DRIVERS:
		default:
			return std::string("UNKNOWN");
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
	std::string::size_type extNameLen = std::strlen(extName);

	char *p = (char *) extensionString;
	char *pend = p + strlen(p);

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
