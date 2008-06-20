# GLE - Copyright (C) 2004, 2005, 2007, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

package gleExtensionsGenerator;
use strict;

# TODO:

require	gleTokensTable;
use		gleTokensTable;

require	gleExtensionsTable;
use		gleExtensionsTable;

require	gleExtension;
use		gleExtension;

require	gleStrings;
use		gleStrings;



##################################################
# Constructor
##################################################
sub new
{
	my $self = {};

	$self->{	TOKENS_TABLE		}	= undef;
	$self->{	EXTENSIONS_TABLE	}	= undef;

	bless($self);
	return $self;
}



##################################################
# Generate files
##################################################
sub generate
{
	my $self		= shift;
	my $parser	= shift;

	$self->{	TOKENS_TABLE		}	= $parser->getTokensTable();
	$self->{	EXTENSIONS_TABLE	}	= $parser->getExtensionsTable();

	#################################### CREATE FILES ####################################
	# Variables with filename for generated files.
	my $ext_h		= "OpenGLExtensionsGen.hpp";
	my $ext_cpp		= "OpenGLExtensionsGen.cpp";

	open(FH,	">$ext_h")		or die "Can't open $ext_h: $!";
	open(FCPP,	">$ext_cpp")	or die "Can't open $ext_cpp: $!";

	# Variables with filename for generated files.
	my $wrap_h		= "WrapperGen.hpp";
	my $wrap_cpp	= "WrapperGen.cpp";

	open(WFH,		">$wrap_h")		or die "Can't open $wrap_h: $!";
	open(WFCPP,		">$wrap_cpp")	or die "Can't open $wrap_cpp: $!";


	#################################### gets informations ####################################

	my $stamp							= $parser->getStamp();
	my $strLicence 						= gleStrings::getLicence();
#	my $strGroups						= gleStrings::getGroups();
	my $strExtensionsClassName			= gleStrings::getExtensionsClassName();

	my $extensionsTable					= $self->{EXTENSIONS_TABLE};
	my @extensions_not_sorted			= $extensionsTable->extensions();
	my @extensions						= sort { $a->name() cmp $b->name() } @extensions_not_sorted;
	my @groups							= $extensionsTable->getSortedGroups();

	my $OGLRegistryTable				= $parser->getOGLRegistryTable();



	########################################################
	########################   .H   ########################
	########################################################

	#################################### BEGINING and STATISTICS ####################################
	print FH <<EOF;
$stamp
$strLicence
#ifndef _GLE_OPENGLEXTENSIONSGEN_HPP
#define _GLE_OPENGLEXTENSIONSGEN_HPP

#include <vector>

#include "gle/gle.hpp"
#include "gle/OpenGLExtensions.hpp"

EOF

	print WFH <<EOF;
$stamp
$strLicence
#ifndef _GLE_WRAPPERGEN_HPP
#define _GLE_WRAPPERGEN_HPP

#include "gle/gle.hpp"

/**
 * \@defgroup g_extensionsByVendor		OpenGL extensions by vendor
 *
 * \@ingroup g_gle
 */

/**
 * \@defgroup g_extensions		OpenGL extensions by name
 *
 * \@ingroup g_gle
 */

/**
 * \@defgroup g_virtualExtensions	Virtual OpenGL extensions
 *
 * \@ingroup g_extensionsByVendor g_extensions
 */

EOF

	#my $stamp					= $parser->getStamp();
	my $fileDate				= $parser->getFileDate();
	my $fileVersion				= $parser->getFileVersion();

	my $tokensTableCount		= $parser->getTokensTable()->getNames();
	my $extensionsTableCount	= $parser->getExtensionsTable()->getNames();
	my $oglRegistryTableCount	= $parser->getOGLRegistryTable()->getNames();

	my $funcCount				= $parser->getFuncCount();

	### STATISTICS

#	 * fileDate                    = $fileDate		????????????????????????????????????????????????????????????????????????????????
#	 * fileVersion                 = $fileVersion	????????????????????????????????????????????????????????????????????????????????

	print FH <<EOF;
/**
 * \@addtogroup g_gle
 *
 * Some statistics about supported extensions :
 * - Stamp = $stamp * - Number of tokens					= $tokensTableCount
 * - Number of functions				= $funcCount
 * - Number of extensions found(in headers)	= $extensionsTableCount
 * - Number of extensions in OpenGL registry	= $oglRegistryTableCount
 */


namespace gle
{

struct GLE_API $strExtensionsClassName : public gle::OpenGLExtensions
{
	/**
	 * \@brief Constructor.
	 */
	$strExtensionsClassName( std::ostream* pOS );

	/**
	 * \@name Initialization methods
	 */
	//\@{

	/**
	 * \@brief Clear all members variables of this class(all procedures pointers and boolean).
	 *
	 * \@remarks This method is called by the default constructor.
	 */
	void clear();

	/**
	 * \@brief Initialize all opengl extensions (all group of extensions).
	 */
	void initialize();

	/**
	 * \@brief Returns if smart extension detection(SED) is enable or disable.
	 */
	bool isSEDEnable() const				{ return ( m_isSEDEnable ); }

	/**
	 * \@brief Set smart extension detection(SED) to enable or disable.
	 */
	void enableSED( bool b = true )		{ m_isSEDEnable = b; }

	//\@}


EOF


	#################################### INITIALIZE_group_xxx() ####################################
	### Create initializeXXX() for each group of extensions.
	foreach my $group (@groups)
	{
		print FH <<EOF;
	/** 
	 * \@brief Initialize the $group extension group.
	 */
	void initialize$group();

EOF

	}
	print FH "\n\n";



	#################################### DOXYGEN DEFGROUP for group_xxx() ####################################
	### Create @defgroup for each group of extensions
	foreach my $group (@groups)
	{
		my $count = 0;

		if ( $group ne "Not_in_OpenGL_Extension_Registry" )
		{
			# current group is a normal group.
			# Count extension in the current group.
			foreach my $extension (@extensions)
			{
				if ( ($extension->getGroup() eq $group) and ($OGLRegistryTable->exist( $extension->name() )) )
				{
					$count++;
				}
			}
		}
		else
		{
			# current group is a special group. 
			# It is created to take care of extensions that seems to be not defined in OpenGL extensions registry

			# Count extension in the current group.
			foreach my $extension (@extensions)
			{
				# @todo 
				#my $tmp = $extension->getGroup();
				### ??? print "extension->getGroup()= $tmp\n"; => Not_in_OpenGL_Extension_Registry
				###print "group= $group\n"; => GL_SGIX for example
				#($extension->getGroup()  eq $group) and 
				if ( !$OGLRegistryTable->exist( $extension->name() ) )
				{
					$count++;
				}
			}
		}
#		print FH <<EOF;
#	/** 
#	 * \@defgroup	internal_$group Internal $group ($count extensions found)
#	 * \@ingroup	g_internalGroups
#	 */
#
#EOF

		if ( $count > 0 ) 
		{
			print WFH <<EOF;
/** 
 * \@defgroup g_$group		$group ($count extensions found)
 * \@ingroup g_extensionsByVendor
 */

EOF
		}
	}
	print FH "\n\n";

	#################################### DECLARE PROCEDURES AND BOOLEAN ####################################
	### All procedures pointers and boolean.
	foreach my $extension (@extensions)
	{
		my $extension_name		= $extension->name();
		my $extension_group		= $extension->getGroup();

		my $extension_docLinks	= $OGLRegistryTable->extensionURL( $extension_name );
		my $extension_ID		= $OGLRegistryTable->extensionId( $extension_name );

		if ( $OGLRegistryTable->exist( $extension_name ) )
		{
#			print FH <<EOF;
#	/**
#	 * \@name internal_$extension_name
#	 *	Extension number in OpenGL registry : $extension_ID
#	 *	\@sa OpenGL Extension Registry : $extension_docLinks
#	 *	\@ingroup internal_$extension_group
#	 */
#	//\@{
#EOF

			print WFH <<EOF;


/**
 * \@defgroup $extension_name $extension_name
 * Extension number in OpenGL registry : $extension_ID
 * \@sa OpenGL Extension Registry : $extension_docLinks
 * \@ingroup g_$extension_group g_extensions
 */
//\@{
EOF
		}
		elsif ( $extension_name =~ /^GL_VERSION_.+$/ )
		{
			# this extension is a virtual extension
			print WFH <<EOF;


/**
 * \@defgroup $extension_name $extension_name
 * \@ingroup g_virtualExtensions
 */
//\@{
EOF
		}
		else
		{
#			print FH <<EOF;
#	/**	
#	 * \@name $extension_name
#	 *	Extension not found in OpenGL extensions registry !!!
#	 *	\@ingroup internal_Not_in_OpenGL_Extension_Registry
#	 */
#	//\@{
#EOF

			print WFH <<EOF;

			
/**	
 * \@defgroup $extension_name $extension_name
 * Extension not found in OpenGL extensions registry !!!
 * \@ingroup g_Not_in_OpenGL_Extension_Registry g_extensions
 */
//\@{
EOF
		}

		print FH <<EOF;

	/**
	 * \@brief Returns \\c true if \\b $extension_name is supported, false otherwise.
	 */
	bool is$extension_name;

EOF

		print WFH <<EOF;
/**
 * \@brief Test if \\b $extension_name is supported.
 * \@return Returns \\c true if \\b $extension_name is supported, false otherwise.
 */
GLE_API bool is$extension_name();

EOF

		my @protos = $extension->getPrototypes();
  		foreach my $proto (@protos)
		{
			my $proto_str				= $proto->getPrototype();
			my $proto_procNameTypedef	= normalizeString60( $proto->procNameTypedef() );
			my $proto_procName			= $proto->procName();

			print FH <<EOF;
	/**
	* \@brief $proto_str
	*/
	$proto_procNameTypedef $proto_procName;

EOF

			print WFH <<EOF;
/**
 * \@brief $proto_str
 */
GLE_API $proto_str

EOF
		}

		print FH "\n\n\n";		
#		print FH "	//@}\n\n\n";
		print WFH "//@}\n";
	}


	#################################### THE END ####################################
	print FH <<EOF;
private:
	/**
	 * \@brief Smart extension detection (SED) state.
	 */
	bool	m_isSEDEnable;



	/**
	 * \@name Data for statistics.
	 */
	//\@{

	/**
	 * \@brief Count the number of extension initialized at run-time.
	 */
	int			m_initializedExtensionCount;

	/**
	 * \@brief Count the number of procedure pointer initialized ar run-time.
	 */
	int			m_initializedProcCount;

	/**
	 * \@brief Vector with all extensions initialized at run-time.
	 */
	std::vector< std::string >	m_initializedExtensions;

	
	/**
	 * \@brief Count the number of extension supported by gle.
	 */
	static const int			m_supportedExtensionCount;
	
	/**
	 * \@brief Count the number of procedure pointer supported by gle.
	 */
	static const int			m_supportedProcCount;
	//\@}

}; // struct $strExtensionsClassName

} //namespace gle

#endif // #ifndef _GLE_OPENGLEXTENSIONSGEN_HPP
EOF

	print WFH <<EOF;


#endif // #ifndef _GLE_WRAPPERGEN_HPP
EOF






	########################################################
	########################  .CPP   #######################
	########################################################


	#################################### BEGINING ####################################
	print FCPP <<EOF;
$stamp
$strLicence
#include "gle/OpenGLExtensionsGen.hpp"

#include <algorithm>
#include <functional>
#include <iterator>
#include <sstream>


namespace gle
{


const int	$strExtensionsClassName\::m_supportedExtensionCount	= $extensionsTableCount;
const int	$strExtensionsClassName\::m_supportedProcCount		= $funcCount;


$strExtensionsClassName\::$strExtensionsClassName( std::ostream* pOS ) :
	OpenGLExtensions( pOS ),
	m_isSEDEnable( false )
{
	clear();
}


EOF

	print WFCPP <<EOF;
$stamp
$strLicence
#include "gle/WrapperGen.hpp"

#include "gle/OpenGLExtensionsGen.hpp"
#include "gle/Wrapper.hpp"

EOF

	#################################### CLEAR() ####################################
	### clear() : all procedures pointers and boolean.
	print FCPP <<EOF;
void $strExtensionsClassName\::clear()
{
	m_initializedExtensionCount	= 0;
	m_initializedProcCount		= 0;
	m_initializedExtensions.clear();
EOF


	foreach my $extension (@extensions)
	{
		my $extension_name		= $extension->name();
		my $extension_name_norm	= normalizeString( $extension->name(), 58 );


		print FCPP <<EOF;

	// ****** $extension_name ******
	is$extension_name_norm = false;
EOF


		my @protos = $extension->getPrototypes();

		if ( $#protos > 0 )
		{
			print FCPP "\n";
		}

  		foreach my $proto (@protos)
		{
			my $proto_procName	= normalizeString60( $proto->procName() );


			print FCPP <<EOF;
	$proto_procName = 0;
EOF


		}
		print FCPP "\n";
	}


	print FCPP <<EOF;
} // clear()
EOF

	#################################### INITIALIZE() ####################################
	print FCPP <<EOF;


void $strExtensionsClassName\::initialize()
{
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

EOF


	### Call initializeXXX() for each group of extensions.
	foreach my $group (@groups)
	{
	

		print FCPP <<EOF;

	initialize$group();

EOF


	}


	print FCPP <<EOF;
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
}


EOF


	#################################### INITIALIZE_group_xxx() ####################################
	### Create initializeXXX() for each group of extensions.
	foreach my $current_group (@groups)
	{

	
		print FCPP <<EOF;
void $strExtensionsClassName\::initialize$current_group()
{
	int	localSupportedProcCount 	= 0;
	int	localInitializedProcCount	= 0;

EOF

		### initialize$group() : initialize all procedures pointers and boolean for this group.
	 	foreach my $extension (@extensions)
	 	{
	 		my $extension_name			= $extension->name();
	 		my $extension_name_norm		= normalizeString( $extension->name(), 58 );
	 		my $group					= $extension->getGroup();
	 		
			if ( $group ne $current_group )
	 		{
	 			# Don't process extension from any other group.
	 			next;
	 		}

		print WFCPP <<EOF;

// ********* $extension_name *********
bool is$extension_name()
{
	const bool isSupported = gleGetCurrent()->is$extension_name;
	
	return isSupported;
}

EOF


			### extension from the core (GL_VERSION 1.2, 1.3, 1.4, 1.5, and so on)
			my $core_extension;
			if ( $extension_name =~ /^GL_VERSION_.+$/ )
			{
				$core_extension = 1;
			}
			else
			{
				$core_extension = 0;
			}		
	
	
	 		my $extension_getter;
	 		if ( $extension_name =~ /^GL_.+$/ )
	 		{
	 			$extension_getter = "isExtensionSupported";
	 		}
	 		else
			{
	 			$extension_getter = "isWExtensionSupported";
	 		}	
	 		
			my @protos = $extension->getPrototypes();
			my $proto_count = @protos;
	
			if ( $core_extension == 1 )
			{
				### Process differently core extension (from GL_VERSION* group) ###
				
				
		 		print FCPP <<EOF;

	// ****** $extension_name ******
	
	is$extension_name = false;
	
	localSupportedProcCount		= $proto_count;
	localInitializedProcCount	= 0;
EOF

				foreach my $proto (@protos)
		 		{
					my $proto_str					= $proto->getPrototype();
		 			my $proto_procName				= $proto->procName();
					my $proto_procNameTypedef		= $proto->procNameTypedef();

		 			my $proto_procName_norm			= normalizeString60( $proto->procName() );
					my $proto_procNameTypedef_norm	= normalizeString60( $proto->procNameTypedef() );

					print FCPP <<EOF;
					
	$proto_procName = ($proto_procNameTypedef) getExtensionPtr( "$proto_procName" );
	if ( $proto_procName != 0 )	localInitializedProcCount++;
EOF



					## GENERATE WRAPPER
					my $retVal		= $proto->retVal();
					my $procName	= $proto->procName();
					my $param		= $proto->params();
					my @paramsName	= $proto->getParamsName();
					
					my $isReturnedValue = ( $proto->retVal() !~ /^\s*void\s*$/ );
					
					print WFCPP <<EOF;
					
$retVal $procName( $param )
{
EOF

					if ( $isReturnedValue )
					{
						print WFCPP "	return ( gleGetCurrent()->$procName( ";
					}
					else
					{
						print WFCPP "	gleGetCurrent()->$procName( ";
					}
					
					# Params.
					foreach my $lparamName (@paramsName)
					{
						if ( $lparamName eq @paramsName[scalar(@paramsName)-1] )
						{
							if ( $isReturnedValue )
							{
								print WFCPP "$lparamName) );\n}\n\n";
							}
							else
							{
								print WFCPP "$lparamName );\n}\n\n";
							}
						}
						else
						{
							print WFCPP "$lparamName, ";
						}
					}
				## END GENERATE WRAPPER




				} # foreach proto


				print FCPP <<EOF;

	is$extension_name = (localInitializedProcCount == localSupportedProcCount);

	if ( is$extension_name )
	{
		std::stringstream strStream;
		strStream << "$extension_name_norm : virtual extension detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
		
		++m_initializedExtensionCount;
		m_initializedProcCount += localInitializedProcCount;
	}
	else
	{
		std::stringstream strStream;
		strStream << "$extension_name_norm : virtual extension not detected, only " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::endl;
		log( strStream.str() );
	}
EOF
	
	
			}
			else
			{
				### This is normal group (not a GL_VERSION* group) ###
				
				
		 		print FCPP <<EOF;
	
	// ****** $extension_name ******
	
	is$extension_name = $extension_getter(\"$extension_name\");
	
	localSupportedProcCount		= $proto_count;
	localInitializedProcCount	= 0;
	
EOF

	
				if ( $proto_count > 0 )
				{
				
				
					print FCPP <<EOF;
	if ( is$extension_name ) // || isSEDEnable()
	{
EOF


				}
				
				foreach my $proto (@protos)
		 		{
		 			my $proto_procName				= $proto->procName();
					my $proto_procNameTypedef		= $proto->procNameTypedef();
		
		 			my $proto_procName_norm			= normalizeString60( $proto->procName() );
					my $proto_procNameTypedef_norm	= normalizeString60( $proto->procNameTypedef() );
		
		
					print FCPP <<EOF;

		$proto_procName = ($proto_procNameTypedef) getExtensionPtr( "$proto_procName" );
		if ( $proto_procName != 0 )	++localInitializedProcCount;
EOF


					## GENERATE WRAPPER
					my $retVal		= $proto->retVal();
					my $procName	= $proto->procName();
					my $param		= $proto->params();
					my @paramsName	= $proto->getParamsName();
					
					my $isReturnedValue = ( $proto->retVal() !~ /^\s*void\s*$/ );
					
					print WFCPP <<EOF;
					
$retVal $procName( $param )
{
EOF

					if ( $isReturnedValue )
					{
						print WFCPP "	return ( gleGetCurrent()->$procName( ";
					}
					else
					{
						print WFCPP "	gleGetCurrent()->$procName( ";
					}
					
					# Params.
					foreach my $lparamName (@paramsName)
					{
						if ( $lparamName eq @paramsName[scalar(@paramsName)-1] )
						{
							if ( $isReturnedValue )
							{
								print WFCPP "$lparamName) );\n}\n\n";
							}
							else
							{
								print WFCPP "$lparamName );\n}\n\n";
							}
						}
						else
						{
							print WFCPP "$lparamName, ";
						}
					}
				## END GENERATE WRAPPER


				} # foreach proto

				if ( $proto_count > 0 )
				{
					### add here SED initialization of extension if possible (pointers!=0) ????????????????????????????????????????????????????????????????
					
					
					print FCPP <<EOF;
	} // if ( is$extension_name || isSEDEnable() )
EOF


				}

	
			print FCPP <<EOF;
	
	if ( is$extension_name )
	{
		std::stringstream strStream;
		strStream << "$extension_name_norm : detected, " << localInitializedProcCount << "/" << localSupportedProcCount << " procedures initialized." << std::ends << std::endl;
		log( strStream.str() );

		if ( localInitializedProcCount < localSupportedProcCount  )
		{
			std::stringstream strStream;
			strStream << "$extension_name_norm : " << localSupportedProcCount-localInitializedProcCount;
			strStream << " missing entry point(s), is there a bug in the driver !!!" << std::ends << std::endl;
			log( strStream.str() );
		}
		else
		{
			m_initializedExtensions.push_back( std::string("$extension_name") );
			++m_initializedExtensionCount;
			m_initializedProcCount += localInitializedProcCount;
		}
	}
	else
	{
		logEndl( "$extension_name_norm : not detected." );
	}
EOF

			
			} # else

	 	} # foreach @extensions


		print FCPP <<EOF;
} // initialize()


EOF


	} # foreach my $current_group (@groups)


print FCPP <<EOF

} // namespace gle
EOF


	# .cpp complete.
}






sub normalizeString
{
	my $string			= shift;
	my $lengthDesired	= shift;

	my $length = length $string;

	for( $length .. $lengthDesired )
	{
		$string = $string." ";
	}

	return $string;
}



sub normalizeString50
{
	return normalizeString(shift, 50);
}



sub normalizeString60
{
	return normalizeString(shift, 60);
}

1;
#OK




# 		"\n\nEXTENSION->name:$a\n";
# 		#my $extension = $extensionsTable->extension( $a );
# 		#$a = $extension->name();
# 		#print FH "\n\nEXTENSION2:$a\n";
#
# 		# token
# 		my @tokens = $extension->getTokens();
# 		foreach my $token ( @tokens )
# 		{
# 			print FH "$token\n";
# 		}
#
# 		my @protos = $extension->getPrototypes();
# 		foreach my $proto ( @protos )
# 		{
# 			my $a = $proto->procNameTypedef();
# 			print FH $proto->procNameTypedef()." ".$proto->retVal()." ".$proto->procName()." ".$proto->params()."\n";
# 		}


#		if ( $proto_procName != 0 )
#		{
#			if ( is$extension_name )
#			{
#				vgDebug::Global::get().logDebug("$proto_procName_norm : initialized.");
#			}
#			else
#			{
#				vgDebug::Global::get().logDebug("$proto_procName_norm : initialized(by SED).");
#			}
#		}
#		else
#		{
#			if ( is$extension_name )
#			{
#				vgDebug::Global::get().logDebug("$proto_procName_norm : not supported, but must be !!! Is there a driver bug ?");
#			}
#			else
#			{
#				vgDebug::Global::get().logDebug("$proto_procName_norm : not supported.");
#			}
#		}


#############################################################################################??????????????????????????????????
#############################################################################################
# 	print FH "std::string TokenTableByNameKeys[]={\n";
#  	my $tokensTable = $self->{TOKENS_TABLE};
#  	my @names = $tokensTable->getNames();
# 	foreach my $i (@names)
#  	{
# 		print FH "\"$i\",\n";
#  	}
# 	print FH "};\n\n";
#
# 	print FH "std::int TokenTableByNameValues[]={\n";
# 	foreach my $i (@names)
#  	{
# 		my $value = $tokensTable->getValue( $i );
# 		print FH "$value,\n";
#  	}
# 	print FH "};\n\n";

	#############################################################################################
# 	my $extensionsTable = $self->{EXTENSIONS_TABLE};
# 	my @extensions = $extensionsTable->extensions();
# 	foreach my $extension (@extensions)
# 	{
# 		my $a = $extension->name();
# 		print FH "\n\nEXTENSION->name:$a\n";
# 		#my $extension = $extensionsTable->extension( $a );
# 		#$a = $extension->name();
# 		#print FH "\n\nEXTENSION2:$a\n";
#
# 		# token
# 		my @tokens = $extension->getTokens();
# 		foreach my $token ( @tokens )
# 		{
# 			print FH "$token\n";
# 		}
#
# 		my @protos = $extension->getPrototypes();
# 		foreach my $proto ( @protos )
# 		{
# 			my $a = $proto->procNameTypedef();
# 			print FH $proto->procNameTypedef()." ".$proto->retVal()." ".$proto->procName()." ".$proto->params()."\n";
# 		}



		#print FH "a=$%#a\n";

		#print FH "$#prototypes\n";

		#foreach my $j (@a)
		#{
			#print FH "proto:$j\n";
		#}
	#}

	######
# 	my @values = $tokensTable->getValues();
# 	foreach my $i (@values)
#  	{
# 		my $name = $tokensTable->getName( $i );
#  		#print FH "%lo $i $name\n";
#  	}

	#my @extensions = $ext_table->extensions();
# foreach my $aextension (@aextensions)
# {
# 	my $name = $aextension->name();
# 	print "extension=$name\n";
#
# 	my $atokens = $aextension->tokens();
#
# 	foreach my $atoken (@{$atokens})
#  	{
#  		print "\t$atoken\n";
#  	}
# }
