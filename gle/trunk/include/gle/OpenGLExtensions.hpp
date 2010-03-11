// GLE - Copyright (C) 2004, 2007, 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _GLE_OPENGLEXTENSIONS_HPP
#define _GLE_OPENGLEXTENSIONS_HPP

#include <ostream>
#include <string>
#include <vector>

#include "gle/gle.hpp"



namespace gle
{



/**
 * @brief Provides methods to facilitate common tasks done with OpenGL.
 * 
 * Informations about current OpenGL implementation (version, extensions...) and errors could be retrieved.
 * 
 * @todo move static method to gle namespace.
 *
 * @todo std::string OpenGLExtensions::getWExtensions( const int i32NumElementInExtensionsGroup ) for linux.
 * @todo const bool isGLErrors( std::string& ) const; Like isGLError() but loop until OpenGL has no more error message.
 */
struct GLE_API OpenGLExtensions
{
	/**
	 * @name Constructor/Destructor
	 */
	//@{

	/**
	 * @brief Constructor.
	 */
	OpenGLExtensions( std::ostream* pOS/* const bool bEnableLogWindow = false FIXME */);
	
	/**
	 * @brief Destructor.
	 */
	virtual ~OpenGLExtensions();
	//@}



	/** 
	 * @name Basic accessors
	 */
	//@{

	/**
	 * @brief Get some informations from OpenGL drivers.
	 *
	 * @return Vendor name.
	 */
    static std::string getVendor();

	/**
	 * @brief Get some informations from OpenGL drivers.
	 *
	 * @return Renderer name.
	 */
    static std::string getRenderer();

	/**
	 * @brief Get some informations from OpenGL drivers.
	 *
	 * @return Version name.
	 */
    static std::string getVersion();

	/**
	 * @brief Get some informations from OpenGL drivers.
	 *
	 * @return Shading language version.
	 */
    static std::string getShadingLanguageVersion();

	/**
	 * @brief Get some informations from OpenGL drivers.
	 *
	 * @param	numElementInExtensionsGroup	set to zero to have all extensions in one group.
	 * 
	 * @return	a string containing all OpenGL extensions.
	 */
	static std::string	getExtensions( const int numElementInExtensionsGroup = 0 );
	
	/**
	 * @brief Get some informations from OpenGL drivers.
	 *
	 * @return a vector with all extensions returned by getExtensions().
	 */
	static std::vector< std::string >	getExtensionsVector();

	/**
	 * @brief Get some informations from OpenGL drivers.
	 *
	 * @param	numElementInExtensionsGroup	set to zero to have all extensions in one group.
	 * 
	 * @return	a string containing all extensions returned by wglGetExtensionsStringARB or glx....
	 */
	static std::string	getWExtensions( const int numElementInExtensionsGroup = 0 );

	/**
	 * @brief Get some informations from OpenGL drivers.
	 *
	 * @return a vector with all extensions returned by getWExtensions().
	 */
	static std::vector< std::string >	getWExtensionsVector();
	//@}



	/** 
	 * @name Extended accessors
	 */
	//@{

	/**
	 * @brief Search if extension is supported.
	 * 
	 * Searching was done in the string returned by getExtensions().
	 */
	static bool isExtensionSupported( const char *pExtension );

	/**
	 * @brief Search if extension is supported.
	 * 
	 * Searching was done in the string returned by getWExtensions().
	 */
	static bool isWExtensionSupported( const char *pExtension );
	//@}



	/** 
	 * @name Display opengl informations
	 */
	//@{

	/**
	 * @brief Returns a summary of the current OpenGL implementation.
	 * 
	 * @return a string with the informations.
	 */
	static std::string getInformations( const int numElementInExtensionsGroup = 0 );

	//@}
	
	/**
	 * @name Logging functions
	 */
	//@{

	/**
	 * @brief Adds a string to the log.
	 * 
	 * @param str			the string
	 */
	void log( const std::string str );
	
	/**
	 * @brief Adds an integer to the log.
	 * 
	 * @param integer		the integer
	 */
	void log( const int integer );
	
	/**
	 * @brief Adds a string to the log and an end of line.
	 * 
	 * @param str		the string.
	 */
	void logEndl( const std::string str );	
	
	/**
	 * @brief Adds each element of the vector to the log.
	 * 
	 * @param data		vector of element that must be add to the log.
	 */
	void log( const std::vector< std::string > data );
	//@}



	/**
	 * @name GL Errors managements
	 */
	//@{

	/**
	 * @brief Returns a string describing the OpenGL error passed in parameter.
	 * 
	 * @param glenumError		value returned by glGetError().
	 * 
	 * @return the string with the opengl error.
	 */
	static std::string getGLError( GLenum glenumError );
	
	/**
	 * @brief Returns a string describing the last OpenGL error (if any).
	 * 
	 * @param errorMsg			the string with the OpenGL error.
	 * 
	 * @return false there has been no detectable error since the last call, true if there is an error and errorMsg 
	 * contains an OpenGL error.
	 */
	static const bool isGLError( std::string& errorMsg );

	/**
	 * @brief Report OpenGL errors (if there is one) on the log.
	 */
	void reportGLErrors();
	//@}



	/**
	 * @name Hardware/driver identification accessors
	 *
	 * @todo getModel()
	 */
	//@{
	enum DriverProviderType
	{
		ATI_DRIVERS,
		NVIDIA_DRIVERS,
		UNKNOWN_DRIVERS
	};

	/**
	 * @brief Returns the provider of the current driver.
	 *
	 * @return the provider of the current driver
	 */
	const DriverProviderType getDriverProvider() const;

	/**
	 * @brief Returns the provider of the current driver.
	 *
	 * @return the provider of the current driver
	 */
	const std::string getDriverProviderString() const;
	//}



protected:
	/**
	 * @brief Replace space by end of line in a string.
	 * 
	 * @param stringToProcess				the string to process.
	 * @param skipNumElement				number of space that must be skipped before each replacement.
	 */
	static std::string replaceSpaceByEndl( const std::string& stringToProcess, const int skipNumElement = 0 );

	/**
	 * @brief Split a string into a vector of string.
	 * 
	 * @param stringToProcess		the string to split.
	 * @param separator				the split is done on this character.
	 */
	static std::vector< std::string > separateEachElement(
		const std::string stringToProcess, 
		const std::string separator = "\n"
		);

	static const bool	checkExtension	( const char *extName, const char *extensionString );
	static void*		getExtensionPtr	( const char *_pExtensionName );
	
	/**
	 * @brief The log.
	 */
	std::ostream*			m_pLog;
};



} // namespace gle

#endif // #ifndef _GLE_OPENGLEXTENSIONS_HPP
