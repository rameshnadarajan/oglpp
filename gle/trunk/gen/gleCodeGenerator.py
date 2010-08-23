# GLE - Copyright (C) 2010, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

from os.path import join
from time import gmtime, strftime
from gleOpenGL import opengl, getOSTag, getOSTestExtensionSupport, getTypedefPFNPROC, getGroup



# @todo clearExtension*() like initializeExtension()
# initializeNot_in_OpenGL_Extension_Registry() ?
# @todo improves log


###

includePath = '../include/gle'
srcPath = '../src'

buildTime = strftime("%a, %d %b %Y %H:%M:%S +0000", gmtime())

fileStamp = '// This file was generated at {0} with gle, please do not modify.'.format( buildTime )
	
copyright = """// GLE - Copyright (C) 2004, 2005, 2007, 2008, 2009, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier\n"""

###
# @todo not very cute
def doICare( extensionName ):
	return True
	return getGroup(extensionName) != 'GL_VERSION'# or\
	#	extensionName[0:12] == 'GL_VERSION_3' or\
	#	extensionName[0:12] == 'GL_VERSION_4'

def generateCode():
	#############################
	### builds several string ###
	#############################

	# string for sources
	sources = ''
	for source in opengl.sources:
		sources += '// {0}\n'.format(source)

	# begin
	begin = """{fileStamp}

{copyright}
// This file was generated using :
{sources}""".format( fileStamp=fileStamp, copyright=copyright, sources=sources )

	##############################################################
	### Dict to store the different section of generated files ###
	##############################################################
	hppclass = {}
	cppclass = {}
	hppwrap = {}
	cppwrap = {}

	##########################
	### Generates sections ###
	##########################

	### begin ###

	#
	hppclass['begin'] = """{begin}
#ifndef _GLE_OPENGLEXTENSIONSGEN_HPP
#define _GLE_OPENGLEXTENSIONSGEN_HPP

#include <vector>

#include "gle/gle.hpp"
#include "gle/OpenGLExtensions.hpp"

/**
 * @addtogroup g_gle
 *
 * Some statistics about supported extensions :
 * - Stamp = {buildTime}
 * - Number of tokens							= 0
 * - Number of functions						= {numOfFunctions}
 * - Number of extensions found(in headers)		= {extensionCount}
 * - Number of extensions in OpenGL registry	= {registryCount}
 */



namespace gle
{{

struct GLE_API OpenGLExtensionsGen : public gle::OpenGLExtensions
{{
	/**
	 * @brief Constructor.
	 */
	OpenGLExtensionsGen( std::ostream* pOS );

	/**
	 * @name Initialization methods
	 */
	//@{{

	/**
	 * @brief Clear all members variables of this class(all procedures pointers and boolean).
	 *
	 * @remarks This method is called by the default constructor.
	 */
	void clear();

	/**
	 * @brief Initialize all opengl extensions (all group of extensions).
	 */
	void initialize();

	/**
	 * @brief Returns if smart extension detection(SED) is enable or disable.
	 */
	bool isSEDEnable() const				{{ return ( m_isSEDEnable ); }}

	/**
	 * @brief Set smart extension detection(SED) to enable or disable.
	 */
	void enableSED( bool b = true )		{{ m_isSEDEnable = b; }}

	//@}}

""".format( begin=begin, buildTime=buildTime, \
numOfFunctions=opengl.getNumOfFunctions(), extensionCount=len(opengl.extensions), registryCount=len(opengl.registry))


	#
	cppclass['begin'] = """{begin}
#include "gle/OpenGLExtensionsGen.hpp"

#include <algorithm>
#include <functional>
#include <iterator>
#include <sstream>



namespace gle
{{


const int	OpenGLExtensionsGen::m_supportedExtensionCount	= {extensionCount};
const int	OpenGLExtensionsGen::m_supportedProcCount		= {numOfFunctions};


OpenGLExtensionsGen::OpenGLExtensionsGen( std::ostream* pOS )
:	OpenGLExtensions( pOS ),
	m_isSEDEnable( false )
{{
	clear();
}}


""".format( begin=begin, extensionCount=len(opengl.extensions), numOfFunctions=opengl.getNumOfFunctions() )

	#
	hppwrap['begin'] = """{begin}
#ifndef _GLE_WRAPPERGEN_HPP
#define _GLE_WRAPPERGEN_HPP

#include "gle/gle.hpp"

/**
 * @defgroup g_extensionsByVendor		OpenGL extensions by vendor
 *
 * @ingroup g_gle
 */

/**
 * @defgroup g_extensions		OpenGL extensions by name
 *
 * @ingroup g_gle
 */

/**
 * @defgroup g_virtualExtensions	Virtual OpenGL extensions
 *
 * @ingroup g_extensionsByVendor g_extensions
 */

""".format( begin=begin )

	#
	cppwrap['begin'] = """{begin}
#include "gle/WrapperGen.hpp"

#include "gle/OpenGLExtensionsGen.hpp"
#include "gle/Wrapper.hpp"



""".format( begin=begin )

	### clear ###
	clearStr = ''
	for extensionName in opengl.getExtensionNames():
		if not doICare(extensionName):
			continue
		osTag = getOSTag(extensionName)

		if osTag:
			clearStr += '#ifdef {0}'.format(osTag)

		clearStr += """
	// ****** {extensionName} ******
	is{extensionName} = false;
""".format(extensionName=extensionName)

		if len(opengl.getFunctionNames( extensionName )) > 0:
			clearStr += '\n'

		for function in opengl.getFunctionNames( extensionName ):
			clearStr += '	{0} = 0;\n'.format(function)

		if osTag:
			clearStr += '#endif //{0}\n\n'.format(osTag)

	cppclass['clear'] = """void OpenGLExtensionsGen::clear()
{{
	m_initializedExtensionCount	= 0;
	m_initializedProcCount		= 0;

	m_initializedExtensions.clear();

{clearStr}}} // clear()
""".format( clearStr=clearStr )

	### initialize ###
	#
	initializeStr = ''
	for extensionGroup in opengl.getExtensionGroups():
		initializeStr += '	initialize{extensionGroup}();\n'.format( extensionGroup=extensionGroup )

	#
	cppclass['initialize'] = """

void OpenGLExtensionsGen::initialize()
{{
	assert( m_initializedExtensionCount		== 0	&& "call clear() before initialize()" );
	assert( m_initializedProcCount			== 0	&& "call clear() before initialize()" );
	assert( m_initializedExtensions.size()	== 0	&& "call clear() before initialize()" );

	// Statistics
	std::vector< std::string > extensions	= getExtensionsVector();
	std::vector< std::string > wextensions	= getWExtensionsVector();

	// *** Informations from drivers ***
	logEndl("Drivers informations :");
	logEndl( getInformations( 3 ) );
	logEndl("");

	// *** Informations from gle ***
	logEndl("gle detailed informations :");

	// Initializes extension groups

{initializeStr}
	// Last part of informations
	logEndl("");
	logEndl("gle informations :");
	
	std::stringstream strStream;
	strStream << m_initializedExtensionCount << "/" << m_supportedExtensionCount << " extensions initialized, ";
	strStream << m_initializedProcCount << "/" << m_supportedProcCount << " procedure pointers initialized." << std::ends;
	logEndl( strStream.str() );

	std::stringstream strStream2;
	strStream2 << m_initializedExtensionCount << "/" << static_cast<int>(extensions.size() + wextensions.size());
	strStream2 << " (" << 100.f * static_cast<float>(m_initializedExtensionCount)/static_cast<float>(extensions.size() + wextensions.size());
	strStream2 << "%) extensions initialized." << std::ends;
	logEndl( strStream2.str() );

	// gleInitializedExtensions
	std::vector< std::string > gleInitializedExtensions( m_initializedExtensions );
	
	std::stable_sort( gleInitializedExtensions.begin(), gleInitializedExtensions.end() );

	logEndl("Initialized extensions :");
	log( gleInitializedExtensions );
	logEndl("");

	// driversAllExtensions
	std::vector< std::string > driversAllExtensions( getExtensionsVector() );
	std::vector< std::string > driversWExtensions(	getWExtensionsVector() );
	driversAllExtensions.insert( driversAllExtensions.end(), driversWExtensions.begin(), driversWExtensions.end() );

	std::stable_sort( driversAllExtensions.begin(), driversAllExtensions.end() );
	
	// difference.
	logEndl("Extensions not initialized but exposed by drivers (should be empty :)");

	std::vector< std::string >	difference;
	
	std::insert_iterator< std::vector< std::string > > differenceInserter( difference, difference.begin() );
	
	std::set_difference(	driversAllExtensions.begin(), driversAllExtensions.end(),
								gleInitializedExtensions.begin(), gleInitializedExtensions.end(),
								differenceInserter );
								
	log( difference );
	logEndl("");
}} // initialize

""".format( initializeStr=initializeStr )

	### initializeGROUP
	hppclass['initializeGROUP'] = ''
	cppclass['initializeGROUP'] = ''
	for extensionGroup in opengl.getExtensionGroups():
		#
		hppclass['initializeGROUP'] += """
	/** 
	 * @brief Initialize the {extensionGroup} extension group.
	 */
	void initialize{extensionGroup}();
""".format( extensionGroup=extensionGroup )

		#
		cppclass['initializeGROUP'] += """
void OpenGLExtensionsGen::initialize{extensionGroup}()
{{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;
""".format( extensionGroup=extensionGroup )

		#
		for extensionName in opengl.getExtensionNamesFromGroup( extensionGroup ):
			osTag = getOSTag( extensionName )
			functions = opengl.getFunctionNames( extensionName )
			isExtensionSupported = getOSTestExtensionSupport(extensionName)

			#
			if osTag:
				cppclass['initializeGROUP'] += """
#ifdef {osTag}

	// ****** {extensionName} ******
""".format( osTag=osTag, extensionName=extensionName )

			#
			if getGroup(extensionName) == 'GL_VERSION':
				cppclass['initializeGROUP'] += """
	is{extensionName} = true;
""".format(extensionName=extensionName)
			else:
				cppclass['initializeGROUP'] += """
	is{extensionName} = {isExtensionSupported}("{extensionName}");
""".format( extensionName=extensionName, isExtensionSupported=isExtensionSupported )

			#
			cppclass['initializeGROUP'] += """
	localSupportedProcCount		= {localSupportedProcCount};
	localInitializedProcCount	= 0;
""".format( localSupportedProcCount=len(functions) )

			#
			if doICare(extensionName) and len(functions)>0:
				#
				cppclass['initializeGROUP'] += """
	if ( is{extensionName} ) // || isSEDEnable()
	{{""".format(extensionName=extensionName)

				#
				for function in functions:
					cppclass['initializeGROUP'] += """
		{function} = ({functionTypedef}) getExtensionPtr( "{function}" );
		if ( {function} != 0 )	++localInitializedProcCount;
""".format( function=function, functionTypedef=getTypedefPFNPROC(function) )

				#
				if getGroup(extensionName) == 'GL_VERSION':
					cppclass['initializeGROUP'] += """
		is{extensionName} = (localInitializedProcCount == localSupportedProcCount);""".format(extensionName=extensionName)

				#
				cppclass['initializeGROUP'] += """
	}} // if ( is{extensionName} )
""".format(extensionName=extensionName)

			# Final log for a single extension initialization
			cppclass['initializeGROUP'] += """
	if ( is{extensionName} )
	{{
		std::stringstream strStream;
		strStream << "{extensionName}{xspace}: detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{{
			std::stringstream strStream;
			strStream << "{extensionName}{xspace}: " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}}
		else
		{{
			m_initializedExtensions.push_back( std::string("{extensionName}") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}}
	}}
	else
	{{
		logEndl( "{extensionName}{xspace}: not detected." );
	}}

""".format( extensionName=extensionName, xspace = ' ' * (50-len(extensionName)) )

			#
			if osTag:
				cppclass['initializeGROUP'] += """
#endif // ifdef {osTag}
""".format( osTag=osTag )

		#
		cppclass['initializeGROUP'] += """
}} // initialize{extensionName}()

""".format( extensionName=extensionName )


	### privateData (is* and PPFN*PROC in hppclass) @todo renames privateData => data ?
	dataStr = """


"""

	for extensionName in opengl.getExtensionNames():
		osTag = getOSTag(extensionName)

		if osTag:
			dataStr += '\n\n\n#ifdef {0}'.format(osTag)
		else:
			dataStr += '\n\n\n'

		dataStr += """
	// ****** {extensionName} ******

	/**
	 * @brief Returns \\c true if \\b {extensionName} is supported, false otherwise.
	 */
	bool is{extensionName};
""".format(extensionName=extensionName)

		if doICare(extensionName):
			if len(opengl.getFunctionNames( extensionName )) > 0:
				dataStr += '\n'

			for functionName in opengl.getFunctionNames( extensionName ):
				functionProtoStr = opengl.getPrototypeStr(functionName)
				#
				dataStr += """
	/**
	 * @brief {functionProto}
	 */
	{pfnProc} {functionName};
""".format( functionProto =functionProtoStr, pfnProc=getTypedefPFNPROC(functionName), functionName=functionName )

		#
		if osTag:
			dataStr += '#endif //{0}\n'.format(osTag)
		hppclass['privateData'] = dataStr

	### end
	hppclass['end'] = """


private:
	/**
	 * @brief Smart extension detection (SED) state.
	 */
	bool	m_isSEDEnable;



	/**
	 * @name Data for statistics
	 */
	//@{

	/**
	 * @brief Count the number of extension initialized at run-time.
	 */
	int			m_initializedExtensionCount;

	/**
	 * @brief Count the number of procedure pointer initialized ar run-time.
	 */
	int			m_initializedProcCount;

	/**
	 * @brief Vector with all extensions initialized at run-time.
	 */
	std::vector< std::string >	m_initializedExtensions;

	
	/**
	 * @brief Count the number of extension supported by gle.
	 */
	static const int			m_supportedExtensionCount;
	
	/**
	 * @brief Count the number of procedure pointer supported by gle.
	 */
	static const int			m_supportedProcCount;
	//@}

}; // struct OpenGLExtensionsGen



} //namespace gle

#endif // #ifndef _GLE_OPENGLEXTENSIONSGEN_HPP
"""

	#
	cppclass['end'] = """


} // namespace gle
"""

	#
	hppwrap['end'] = """#endif // #ifndef _GLE_WRAPPERGEN_HPP
"""

	

	### doxygen group
	#
	hppwrap['doxgroup'] = ''

	for extensionGroup in opengl.getExtensionGroups():
		hppwrap['doxgroup'] += """
/** 
 * @defgroup g_{extensionGroup}			{extensionGroup} ({numOfExtensions} extensions found)
 * @ingroup g_extensionsByVendor
 */
""".format( extensionGroup=extensionGroup, numOfExtensions=len(opengl.getExtensionNamesFromGroup(extensionGroup)) )

	hppwrap['doxgroup'] += '\n'*3

	### api
	apihpp = ''
	apicpp = ''
	for extensionName in opengl.getExtensionNames():
		osTag = getOSTag(extensionName)

		#
		if osTag:
			apihpp += '#ifdef {0}'.format(osTag)
			apicpp += '#ifdef {0}'.format(osTag)

		#
		if extensionName in opengl.registry:
			extensionNumber = opengl.registry[extensionName][0]
			extensionLink = opengl.registry[extensionName][1]
		else:
			extensionNumber = 'NA'
			extensionLink = '#'

		apihpp += """
/**
 * @defgroup {extensionName} {extensionName}
 * Extension number in OpenGL registry : {extensionNumber}
 * @sa OpenGL Extension Registry : http://www.opengl.org/registry/{extensionLink}
 * @ingroup g_{extensionGroup} g_extensions
 */
//@{{
""".format( extensionName=extensionName, extensionNumber=extensionNumber, extensionLink=extensionLink, extensionGroup=getGroup(extensionName) )

		# is{Extension}() function
		apihpp += """
/**
 * @brief  Tests if \\b {extensionName} is supported.
 * @return Returns \\c true if \\b {extensionName} is supported, \\c false otherwise.
 */
GLE_API bool is{extensionName}();

""".format( extensionName=extensionName )

		apicpp += """
// ********* {extensionName} *********
bool is{extensionName}()
{{
	const bool isSupported = gleGetCurrent()->is{extensionName};

	return isSupported;
}}
""".format( extensionName=extensionName )

		# api proc
		if doICare(extensionName):
			if len(opengl.getFunctionNames( extensionName )) > 0:
				apihpp += '\n'
				apicpp += '\n'

			for functionName in opengl.getFunctionNames( extensionName ):
				functionProto = opengl.getPrototype( functionName )
				functionProtoStr = opengl.getPrototypeStr(functionName)
				paramsStr = opengl.getPrototypeParameterNames( functionName )
				paramsStr = paramsStr.replace( ' ', ', ' )
					
				#
				apihpp += """
/**
 * @brief {functionProto}
 */
GLE_API {functionProto};
""".format( functionProto=functionProtoStr )

				#
				if functionProto[0] == 'void':
					optionalReturn = ''
				else:
					optionalReturn = 'return '
					
				apicpp += """
{functionProto}
{{
	{optionalReturn}gleGetCurrent()->{functionName}( {params} );
}}
""".format( functionProto=functionProtoStr, optionalReturn=optionalReturn, functionName=functionName, params=paramsStr )

			#
			apihpp += """
//@}
"""

			#
			if osTag:
				apihpp += '#endif //{0}\n\n\n\n'.format(osTag)
				apicpp += '#endif //{0}\n\n\n\n'.format(osTag)
			else:
				apihpp += '\n'*3
				apicpp += '\n'*3

		hppwrap['api'] = apihpp
		cppwrap['api'] = apicpp

	### 
	




	### Generates files

	### Generates class files
	with open( join(includePath, 'OpenGLExtensionsGen.hpp'), 'w') as file:
		sections = ['begin', 'initializeGROUP', 'privateData', 'end']
		for section in sections:
			file.write( hppclass[section] )

	with open( join(srcPath, 'OpenGLExtensionsGen.cpp'), 'w') as file:
		sections = ['begin', 'clear', 'initialize', 'initializeGROUP', 'end']
		for section in sections:
			file.write( cppclass[section] )

	### Generates wrapper files
	with open( join(includePath, 'WrapperGen.hpp'), 'w') as file:
		sections = ['begin', 'doxgroup', 'api', 'end']
		for section in sections:
			file.write( hppwrap[section] )

	with open( join(srcPath, 'WrapperGen.cpp'), 'w') as file:
		sections = ['begin', 'api']
		for section in sections:
			file.write( cppwrap[section] )
