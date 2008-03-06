# SConsBuildFramework - Copyright (C) 2005, 2007, 2008, Nicolas Papier.
# Distributed under the terms of the GNU General Public License (GPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier
#
# Installation
# -------------
#
# o	Python 2.5 and up ( should work with 2.4.x)
# o	SCons 0.96.95 and up
# o	On MS-Windows platform :	PySVN 1.5.1 for python 2.5 and svn 1.4.3 installation kit (py25-pysvn-svn143-1.5.1-813.exe) or
#								PySVN 1.5.2 for python 2.5 and svn 1.4.5 installation kit (py25-pysvn-svn145-1.5.2-872.exe)
#						PySVN 1.4.2 for python 2.4 and svn 1.3.1 installation kit (py24-pysvn-svn131-1.4.2-640.exe)
#	On Debian\testing: Package python2.4-svn (old one was 1.1.2-3, current one is 1.3.1-1+b1)														??? update and test on linux, MacOSX an unix/posix ???
# o	cygwin on windows platform ?
#
#
#
#
# @todo explains all options
#
# 2. Configuration of a project (default.options file)
#
# - type =	exec to generate an executable (.exe on Windows, nothing on POSIX system),
#		or static to generate a static library (.lib on Windows, .a on POSIX system),
#		or shared to generate a shared library (.so on a POSIX system, .dll on Windows),
#		or none to generate nothing (useful for project containing only include files, or meta-project containing only build dependencies).
#
# @todo explains all options
#
# 3. Remarks
#
# - Executes 'scons -H' to print scons help message about command-line options.
# - Executes 'scons -h' to print sbf help message and sbf configuration values.
#
# - installPaths, config and warningLevel are not used in default.options (only in SConsBuildFramework.options)
# - Spaces are not allowed in a project name.
#
#
#
# SCons targets description
# -----------------------------
#
# list of targets:
#	- specific sbf target :
#		sbfCheck	:	to check sbf and related tools installation.
#					print python version, python version used by scons, scons, CC and sbf version numbers, SCONS_BUILD_FRAMEWORK environment variable, and checks if SCONS_BUILD_FRAMEWORK is well formed.
#					If SCONS_BUILD_FRAMEWORK is not defined, a message to explain how to define it is printed.
#					If SCONS_BUILD_FRAMEWORK is defined, sbf checks if SCONS_BUILD_FRAMEWORK is perfectly defined (i.e. path exists, well written and is the main directory of SConsBuildFramework)
#
#	- svn (subversion) targets :
#		svnCheckout or myProject_svnCheckout :
#				checkout missing project(s) from multiple svn repositories (i.e. when a project specified in dependencies does not exist
#				on the filesystem, sbf try to checkout it from the first repository specified by svnUrls. If checkout fails, the next
#				repository is used. And so on). myProject_svnCheckout target is used to checkout myProject. svnCheckout is used to checkout all projects.
#		svnUpdate or myProject_svnUpdate :
#				update project(s) from multiple svn repositories (sbf try to checkout it from the first repository specified by svnUrls. If checkout fails, the next
#				repository is used. And so on).
#	- doxygen targets :
#		dox_build, dox_install, dox, dox_clean and dox_mrproper.
#		By default, an automatically generated doxygen configuration file is used by these targets (see the file doxyfile in directory SCONS_BUILD_FRAMEWORK)
#		PROJECT_NAME, PROJECT_NUMBER, OUTPUT_DIRECTORY, INPUT, EXAMPLE_PATH and IMAGE_PATH are automatically configured by sbf.
#		sbf sets :
#			- PROJECT_NAME to 'root project name' at 'build date'.
#			- PROJECT_NUMBER to 'version'
#			- OUTPUT_DIRECTORY to 'installPaths[0]/project name/doxygen/doxygen.sbf_build'
#			- INPUT to 'project/include' and 'project/src' and the same recursively for all dependencies.
#			- EXAMPLE_PATH to 'project/doc/example' and the same recursively for all dependencies.
#			- IMAGE_PATH to 'project/doc/image' and the same recursively for all dependencies.
#	- zip related targets :
#		zip				: a shortcut to 'zipRuntime zipDev zipSrc' targets detailed below.
#		zipRuntime		: create a package with binaries, libraries and resource files (the directory 'share').
#		zipDev			: create a package with binaries, libraries and includes files.
#		zipSrc			: create a package with source files, i.e. all files under vcs are considered as source
#	- myproject_build, myproject_install, myproject(idem myproject_install), myproject_clean, myproject_mrproper
#	- and special targets :
#		- build (for all myproject_build)
#		- install (for all myproject_install)
#		- all (for all myproject)
#		- debug (like target all, but config option is forced to debug)
#		- release (like target all but config option is forced to release)
#		- clean (for all myproject_clean)
#		- mrproper (for all myproject_mrproper)
#	- default target = all
#
#
#
# Features
# ----------
#
# - project dependencies. 'deps' can be specified with relative or absolute paths. All relative paths are specified from the location of the configuration file 'default.options'.
# - skip any missing projects (i.e. skip a project specified in dependencies but that don't exist on the filesystem).
#
# - build objects outside sources directories.
# - builded files could be shared among all the builds usings the same cache (see cachePath).
#
# - prints sbf version, date and time and at sbf startup.
#
# @todo Completes this list
# examples: scons config=release or scons config=debug to override default values from configuration files



###### imports ######
import datetime
import distutils.archive_util
import os
import re
import string
import sys

from SCons.Script.SConscript import SConsEnvironment
#import DumpEnv
from sbfFiles import *



###### Return the value of the environment variable varname if it exists, or None ######
# The returned path, if any, could be normalized (see getNormalizedPathname())
# A warning is printed if the environment variable does'nt exist or if the environment variable refers to an non existing path.
def getPathFromEnv( varname, normalizedPathname = True ) :
	# Retrieves environment variable
	path = os.getenv( varname )

	# Error cases
	if not path :
		print "sbfWarning: %s is not defined." % varname
		return None

	if not os.path.exists( path ) :
		print "sbfWarning: %s is defined, but its value '%s' is not a valid path." % (varname, path)
		return None

	# Normalized path name
	if normalizedPathname :
		path = getNormalizedPathname( path )

	return path



###### Svn ######
def svnGetURL( path ) :

	import pysvn

	client = pysvn.Client()
	client.exception_style = 0

	try :
		info = client.info( path )
		return info.url

	except pysvn.ClientError, e :
		print str(e)
		return ""

def svnGetAllVersionedFiles( path ) :

	import pysvn

	client = pysvn.Client()
	client.exception_style = 0

	try :
		statusList = client.status( path )

		allFiles = [ status.path for status in statusList
						if status.is_versioned and
						(status.entry is not None and status.entry.kind == pysvn.node_kind.file) ]

		return allFiles

	except pysvn.ClientError, e :
		print str(e)
		return []


def svnExport( sbf, project, destinationPath ) :
	# try an svn export
	import pysvn
	client = pysvn.Client()
	client.exception_style = 0

	for repository in sbf.mySvnUrls :
		svnUrl	= repository + project + '/trunk'		#@todo function to create svnUrl
		#svnUrl	= repository + '/' + sbf.myProject + '/trunk'
		print "sbfInfo: Try to export a working copy to ", destinationPath, " from", svnUrl, ":"
		try :
			revision	= client.export(	src_url_or_path = svnUrl,
											dest_path = destinationPath )
			print "sbfInfo:", project, "found at", svnUrl
			if ( revision.kind == pysvn.opt_revision_kind.number ) :
				print project, "at revision", revision.number
			else :
				print project, "at revision", revision.date
			return True
		except pysvn.ClientError, e :
			print str(e), "\n"
	else:
		return False

def svnExportAction( target, source, env ) :
	destinationPath	= str(target[0])
	project			= str(source[0])

	svnExport( env.sbf, project, destinationPath )


def printSvnInfo( sbf, client ) :
	import pysvn
	entry = client.info( sbf.myProjectPathName )
	if ( entry.revision.kind == pysvn.opt_revision_kind.number ) :
		print sbf.myProject, "at revision", entry.revision.number
	else :
		print sbf.myProject, "at revision", entry.revision.date



def svnCallbackNotify( sbf, eventDict ) :
	import pysvn

	wcNotifyActionMap = {
		pysvn.wc_notify_action.add:						'A',
		pysvn.wc_notify_action.copy:					'c',
		pysvn.wc_notify_action.delete:					'D',
		pysvn.wc_notify_action.restore:					'R',
		pysvn.wc_notify_action.revert:					'R',
		pysvn.wc_notify_action.failed_revert:			'F',
		pysvn.wc_notify_action.resolved:				'R',
		pysvn.wc_notify_action.skip:					'?',
		pysvn.wc_notify_action.update_delete:			'D',
		pysvn.wc_notify_action.update_add:				'A',
		pysvn.wc_notify_action.update_update:			'U',
		pysvn.wc_notify_action.update_completed:		None,
		pysvn.wc_notify_action.update_external:			'E',
		pysvn.wc_notify_action.status_completed:		None,
		pysvn.wc_notify_action.status_external:			'E',
		pysvn.wc_notify_action.commit_modified:			'M',
		pysvn.wc_notify_action.commit_added:			'A',
		pysvn.wc_notify_action.commit_deleted:			'D',
		pysvn.wc_notify_action.commit_replaced:			'R',
		pysvn.wc_notify_action.commit_postfix_txdelta:	None,
		pysvn.wc_notify_action.annotate_revision:		'a',
		pysvn.wc_notify_action.locked:					None,
		pysvn.wc_notify_action.unlocked:				None,
		pysvn.wc_notify_action.failed_lock:				None,
		pysvn.wc_notify_action.failed_unlock:			None,
	}

	path = eventDict['path']
	if len(path) == 0 :
		# empty path, nothing to do
		return

	action = eventDict['action']

	if (wcNotifyActionMap.has_key(action) and (wcNotifyActionMap[action] is not None)						# known action that must trigger a message
	and not (action == pysvn.wc_notify_action.update_update and eventDict['kind'] == pysvn.node_kind.dir)	# but not in this special case
	):
		print wcNotifyActionMap[action], "\t",
		print convertPathAbsToRel( sbf.myProjectPathName, path )



class svnCallbackNotifyWrapper:
	def __init__( self, sbf ) :
		self.sbf	= sbf

	def __call__( self, eventDict ) :
		svnCallbackNotify( self.sbf, eventDict )



def svnCheckout( sbf ) :
	# try a checkout.
	import pysvn
	client = pysvn.Client()
	client.callback_notify = svnCallbackNotifyWrapper( sbf )
	client.exception_style = 0

	for repository in sbf.mySvnUrls :
		svnUrl	= repository + '/' + sbf.myProject + '/trunk'
		print "sbfInfo: Try to check out a working copy from", svnUrl, ":"
		try :
			revision = client.checkout(	url = svnUrl, path = sbf.myProjectPathName )
			print "sbfInfo:", sbf.myProject, "found at", svnUrl
			printSvnInfo( sbf, client )
			return True
		except pysvn.ClientError, e :
			print str(e), "\n"

	return False



def svnUpdate( sbf ) :
	# try an update.
	import pysvn
	client = pysvn.Client()
	client.callback_notify = svnCallbackNotifyWrapper( sbf )
	client.exception_style = 0

	try :
		revision = client.update( sbf.myProjectPathName )
		printSvnInfo( sbf, client )
		return True
	except pysvn.ClientError, e :
		print str(e), "\n"
		return False



###### Archiver action ######
def zipArchiver( target, source, env ) :
	targetName = str(target[0])
	sourceName = str(source[0])
	distutils.archive_util.make_archive( targetName, 'zip', sourceName )

def printZipArchiver( target, source, env ) :
	targetName = str(target[0])
	sourceName = str(source[0])
	return "=> Create %s with files from %s" % (targetName, sourceName)


###### Action function for sbfCheck target #######
def sbfCheck(target = None, source = None, env = None) :
	print '----------------------- Availability and version of tools -----------------------'

	print 'python version : ',
	env.Execute( '@python -V' )
	print

	print 'Version of python used by scons :', sys.version
	print

	print 'scons version :'
	env.Execute( '@scons -v' )
	print

	#@todo pysvn should be optionnal
	import pysvn
	print 'pysvn version: %d.%d.%d-%d' % (pysvn.version[0], pysvn.version[1], pysvn.version[2], pysvn.version[3])
	if len(pysvn.svn_version[3]) == 0 :
		print 'svn version (for pysvn): %d.%d.%d\n' % (pysvn.svn_version[0], pysvn.svn_version[1], pysvn.svn_version[2])
	else :
		print 'svn version (for pysvn): %d.%d.%d-%s\n' % (pysvn.svn_version[0], pysvn.svn_version[1], pysvn.svn_version[2], pysvn.svn_version[3])

	print 'svn version : ',
	env.Execute( '@svn --version --quiet' )
	print

	env.Execute( checkCC, nopAction )
	print

	print 'doxygen version : ',
	env.Execute( '@doxygen --version' )
	print

	#@todo others tools (ex : swig, ...)
	#@todo Adds checking for the existance of tools (svn, doxygen...)

	printSBFVersion()
	print

	sbf_root = os.getenv('SCONS_BUILD_FRAMEWORK')
	if ( sbf_root == None ) :
		print 'sbfError: SCONS_BUILD_FRAMEWORK environment variable is not defined'
		print 'sbfInfo: You must set the SCONS_BUILD_FRAMEWORK environment variable to ', env.GetLaunchDir()
		print 'sbfInfo: This can be done with the following bash command : export SCONS_BUILD_FRAMEWORK=\'', env.GetLaunchDir(), '\''
	else :
		print 'Environment variable SCONS_BUILD_FRAMEWORK=', sbf_root
		sbf_root_normalized	= getNormalizedPathname( sbf_root )
		if ( sbf_root == sbf_root_normalized ) :
			if ( not os.path.exists(sbf_root) ) :
				print 'sbfError: SCONS_BUILD_FRAMEWORK is not an existing path'
			else :
				sbf_root_main = sbf_root_normalized + os.sep + 'sbfMain.py'
				if ( os.path.exists( sbf_root_main ) ) :
					print 'sbfInfo: SCONS_BUILD_FRAMEWORK is perfectly defined (existing path, well written and is the main directory of SConsBuildFramework)'
				else :
					print 'sbfInfo: SConsBuildFramework not found at ', sbf_root_normalized
		else :
			print 'sbfInfo: the path defining by SCONS_BUILD_FRAMEWORK is automatically normalized. Try to normalize it yourself.'
			print 'sbfInfo: the normalized SCONS_BUILD_FRAMEWORK=', sbf_root_normalized


def checkCC(target = None, source = None, env = None) :
	print 'Current default compiler :', env['CC']

	if ( env['CC'] == 'cl' ) :
		#ccVersionAction		= Action( 'cl /help' )
		print 'cl version :', env['MSVS']['VERSION']
		print 'The available versions of cl installed are ', env['MSVS']['VERSIONS']

	print
	print 'gcc version : ',
	env.Execute( '@gcc -dumpversion' )


def printSBFVersion() :
	print 'SConsBuildFramework : %s' % getSBFVersion()


def getSBFVersion() :
	return '0.6beta3'


###### Print action function ######
def nopAction(target = None, source = None, env = None) :
	return 0

def printEmptyLine(target = None, source = None, env = None) :
	print ''

def printBuild( target, source, localenv ) :
	return "----------------------- Build %s -----------------------" % localenv['sbf_projectPathName']

def printInstall( target, source, localenv ) :
	return "-------------- Install %s files to %s ------------" % (localenv['sbf_projectPathName'], localenv.sbf.myInstallDirectory)

def printClean( target, source, localenv ) :
	return "-------------- Clean %s files to %s ------------" % (localenv['sbf_projectPathName'], localenv.sbf.myInstallDirectory)

def printMrproper( target, source, localenv ) :
	return "-------------- Mrproper %s files to %s ------------" % (localenv['sbf_projectPathName'], localenv.sbf.myInstallDirectory)

def printZip( target, source, localenv ) :
	return "\n----------------------- Create zip archives -----------------------"

def printRuntimeZip( target, source, localenv ) :
	return "\n-------------- Create runtime package ------------"

def printDevZip( target, source, localenv ) :
	return "\n-------------- Create dev package ------------"

def printSrcZip( target, source, localenv ) :
	return "\n-------------- Create src package ------------"

def printDoxygenBuild( target, source, localenv ) :
	return "\n----------------------- Build documentation with doxygen -----------------------"

def printDoxygenInstall( target, source, localenv ) :
	return "\n----------------------- Install doxygen documentation -----------------------"


###### SConsBuildFramework main class ######

class SConsBuildFramework :

	#
	# myEnv SCons environment

	# global attributes from command line
	myBuildTargets					= set()
	#myGHasCleanOption				= False

	# globals attributes
	myDate							= ''
	myDateTime						= ''
	myPlatform						= ''
	myCC							= ''			# cl, gcc
	myCCVersionNumber				= 0				# 8.000000 for cl8-0, 4.002001 for gcc 4.2.1
	myIsExpressEdition				= False			# True if Visual Express Edition, False otherwise
	myCCVersion						= ''			# cl8-0
	my_Platform_myCCVersion			= ''


	# global attributes from .SConsBuildFramework.options or computed from it
	mySvnUrls						= []
	mySvnCheckoutExclude			= []
	mySvnUpdateExclude				= []
	myInstallPaths					= []
	myBuildPath						= ''
	myCachePath						= ''
	myCacheOn						= False
	myConfig						= ''
	myWarningLevel					= ''
	# computed from .SConsBuildFramework.options
	myInstallExtPaths				= []
	myInstallDirectory				= ''
	myIncludesInstallPaths			= []
	myLibInstallPaths				= []
	myIncludesInstallExtPaths		= []
	myLibInstallExtPaths			= []
	myGlobalCppPath					= []
	myGlobalLibPath					= []

	#@todo use env and lenv or at least copy in env
	# project local attributes from default.options
	myVcsUse						= ''
	myDefines						= []
	myType							= ''
	myVersion						= ''
	myPostfix						= ''
	myDeps							= []
	myUses							= []
	myLibs							= []
	myStdlibs						= []

	# project local attributes
	myProjectPathName				= ''	# d:\Dev\SrcLib\vgsdk\dependencies\gle
	myProjectPath					= ''	# d:\Dev\SrcLib\vgsdk\dependencies
	myProject						= ''	# gle
	myProjectBuildPath				= ''
	myPostfixLinkedToMyConfig		= ''
	my_PostfixLinkedToMyConfig		= ''
	myFullPostfix					= ''
	my_FullPostfix					= ''
	myCxxFlags						= ''
	myCppPath						= []
	myLinkFlags						= ''
	myLibPath						= []

	myProjectBuildPathExpanded		= ''	# c:\temp\sbf\build\gle\0-3\win32\cl7-1\debug

	# list of projects that have been already parsed by scons
	myParsedProjects				= {}



	###### Constructor ######
	def __init__(self) :

		# Reads .SConsBuildFramework.options from your home directory or SConsBuildFramework.options from $SCONS_BUILD_FRAMEWORK.
		homeSConsBuildFrameworkOptions = os.path.expanduser('~/.SConsBuildFramework.options')

		if os.path.isfile(homeSConsBuildFrameworkOptions) :
			# Reads from your home directory.
			myOptions = self.readOptions( homeSConsBuildFrameworkOptions )
		else :
			# Reads from $SCONS_BUILD_FRAMEWORK directory.
			sbf_root			= os.getenv('SCONS_BUILD_FRAMEWORK')
			sbf_root_normalized	= getNormalizedPathname( sbf_root )
			myOptions = self.readOptions( os.path.join( sbf_root_normalized, 'SConsBuildFramework.options' ) )

		# Constructs SCons environment.
		tmpEnv = Environment( options = myOptions )

		if tmpEnv['PLATFORM'] == 'win32' :
			# Tests existance of cl
			if len(tmpEnv['MSVS']['VERSIONS']) == 0 :
				print 'sbfError: no version of cl is available.'
				Exit( 1 )

			# Tests existance of the desired version of cl
			if tmpEnv['clVersion'] not in tmpEnv['MSVS']['VERSIONS'] and tmpEnv['clVersion'] != 'highest' :
				print 'sbfError: clVersion sets to', tmpEnv['clVersion'],
				if len(tmpEnv['MSVS']['VERSIONS']) == 1 :
					print ', available version is ', tmpEnv['MSVS']['VERSIONS']
				else :
					print ', available versions are ', tmpEnv['MSVS']['VERSIONS']
				Exit( 1 )

			# There is no more case of errors.
			if tmpEnv['clVersion'] == 'highest' :
				self.myEnv = tmpEnv
			else :
				self.myEnv = Environment( options = myOptions, MSVS_VERSION = tmpEnv['clVersion'] )
				# TODO Environment is construct two times. This is done just to be able to read 'clVersion' option. OPTME see below :
				# env["MSVS"] = {"VERSION": "8.0"}
				# env["MSVS_VERSION"] = "8.0"
				# Tool("msvc")(env)
		#print "self.myEnv['MSVS']", self.myEnv['MSVS']
		#print 'self.myEnv[MSVS_VERSION]', self.myEnv['MSVS_VERSION']
		self.myEnv['ENV']['PATH'] += os.environ['PATH'] ### FIXME not very recommended

		# Generates help.
		Help("""
Type: 'scons release' to build the production program/library,
      'scons debug' to build the debug version.

      'scons build' for all myproject_build
      'scons install' for all myproject_install
      'scons all' for all myproject (this is the default target)
      'scons debug' like target all, but config option is forced to debug
      'scons release' like target all but config option is forced to release
      'scons clean' for all myproject_clean
      'scons mrproper' for all myproject_mrproper

      'scons myproject_build' or 'myproject_install' or 'myproject' (idem myproject_install) or 'myproject_clean' or 'myproject_mrproper'

      'scons sbfCheck' to check sbf and related tools installation.

      'scons svnCheckout'
      'scons svnUpdate'

      'scons dox'

      'scons zipRuntime'
      'scons zipDev'
      'scons zipSrc'
      'scons zip'


Documentation on the options:
""")
		Help( myOptions.GenerateHelpText(self.myEnv) )

		# @todo FIXME : It is disabled, because it doesn't work properly
		# Log into a file the last scons outputs (stdout and stderr) for a project
		#myProject = os.path.basename( os.getcwd() )
		#logCommand = "tee " + os.path.join( env['buildPath'], myProject + "_sbf.log")
		#sys.stderr = sys.stdout = open( os.path.join( env['buildPath'], myProject + "_sbf.log"), 'w' )# or
		#sys.stdout = sys.stderr = os.popen(logCommand, "w")

		# myDate, myDateTime
		self.myDate		= str(datetime.date.today()).replace('-', '_')
		self.myDateTime	= str(datetime.datetime.today())

		# Print sbf version, date and time at sbf startup
		printSBFVersion()
		print 'started at', self.myDateTime

		# retrives all targets
		self.myBuildTargets = set( map(str, BUILD_TARGETS) )

		#self.myGHasCleanOption = env.GetOption('clean')

		# force clean=1 option if needed.
		if (	('clean' in self.myBuildTargets) or
				('mrproper' in self.myBuildTargets) ) :
			if ( len(self.myBuildTargets) != 1 ) :
				print 'sbfError: only one target allowed when using special target clean or mrproper'
				Exit( 1 )
			else :
				self.myEnv.SetOption('clean', 1)

		# Overrides the config option, when one of the special targets, named 'debug' and 'release', is specified at command line.
		if 'debug' in self.myBuildTargets :
			self.myEnv['config'] = 'debug'
		elif 'release' in self.myBuildTargets :
			self.myEnv['config'] = 'release'

		# myPlatform, myCC, myCCVersionNumber, myCCVersion and my_Platform_myCCVersion
		# myPlatform = win32 | cygwin  | posix | darwin				TODO: TOTHINK: posix != linux and bsd ?, env['PLATFORM'] != sys.platform
		self.myPlatform	= self.myEnv['PLATFORM']

		# myCC, myCCVersionNumber, myCCVersion and my_Platform_myCCVersion
		if self.myEnv['CC'] == 'cl' :
			# Sets compiler
			self.myCC				=	'cl'
			# Extracts version number
			# Step 1 : Extracts x.y (without Exp if any)
			ccVersion				=	self.myEnv['MSVS_VERSION'].replace('Exp', '', 1)
			# Step 2 : Extracts major and minor version
			splittedCCVersion		=	ccVersion.split( '.', 1 )
			# Step 3 : Computes version number
			self.myCCVersionNumber	=	float(splittedCCVersion[0])
			self.myCCVersionNumber	+=	float(splittedCCVersion[1])/1000
			# Constructs myCCVersion ( clMajor-Minor[Exp] )
			self.myIsExpressEdition = self.myEnv['MSVS_VERSION'].find('Exp') != -1
			self.myCCVersion = self.myCC + self.getVersionNumberString2( self.myCCVersionNumber )
			if self.myIsExpressEdition :
				# Adds 'Exp'
				self.myCCVersion += 'Exp'
		elif self.myEnv['CC'] == 'g++' :
			# Sets compiler
			self.myCC = 'gcc'
			# TODO: Extracts version number
			self.myCCVersionNumber = 0.000000
			print 'CCVERSION=',		self.myEnv['CCVERSION']
			print 'CXXVERSION=',	self.myEnv['CXXVERSION']
			self.myCCVersion = self.myCC # TODO: self.getVersionNumberString3( self.myCCVersionNumber )
		else :
			# Sets compiler
			self.myCC = self.myEnv['CC']
			# TODO: Extracts version number
			self.myCCVersionNumber = 0.000000
			print 'CCVERSION=',		self.myEnv['CCVERSION']
			print 'CXXVERSION=',	self.myEnv['CXXVERSION']
			self.myCCVersion = self.myCC # TODO: self.getVersionNumberString3( self.myCCVersionNumber )

		self.my_Platform_myCCVersion = '_' + self.myPlatform + '_' + self.myCCVersion

		# Adds support of Microsoft Manifest Tool for Visual Studio 2005 (cl8) and up
		if self.myCC == 'cl' and self.myCCVersionNumber >= 8.000000 :
			self.myEnv['LINKCOM'	] = [self.myEnv['LINKCOM'	], 'mt.exe -nologo -manifest ${TARGET}.manifest -outputresource:$TARGET;1']
			self.myEnv['SHLINKCOM'	] = [self.myEnv['SHLINKCOM'], 'mt.exe -nologo -manifest ${TARGET}.manifest -outputresource:$TARGET;2']

		#
		self.initializeGlobalsFromEnv( self.myEnv )



	###### Initialize global attributes ######
	def initializeGlobalsFromEnv( self, lenv ) :

		# update mySvnUrls, mySvnCheckoutExclude and mySvnUpdateExclude
		self.mySvnUrls				= lenv['svnUrls']
		self.mySvnCheckoutExclude	= lenv['svnCheckoutExclude']
		self.mySvnUpdateExclude		= lenv['svnUpdateExclude']

		# update myInstallPaths, myInstallExtPaths and myInstallDirectory
		self.myInstallPaths = []
		for element in lenv['installPaths'] :
			self.myInstallPaths += [ getNormalizedPathname( element ) ]

		self.myInstallExtPaths = []
		for element in self.myInstallPaths :
			self.myInstallExtPaths	+= [element + 'Ext' + self.my_Platform_myCCVersion]

		if ( len(self.myInstallPaths) >= 1 ) :
			self.myInstallDirectory	= self.myInstallPaths[0]
		else :
			print 'sbfError: empty installPaths'
			Exit( 1 )

		# update myBuildPath, myCachePath, myCacheOn, myConfig and myWarningLevel
		self.myBuildPath	= getNormalizedPathname( lenv['buildPath'] )

		self.myCachePath	= getNormalizedPathname( lenv['cachePath'] )
		self.myCacheOn		= lenv['cacheOn']
		if (	(self.myCacheOn == True) and
				(len( self.myCachePath ) > 0 )	):
			env.CacheDir( self.myCachePath )
			print 'sbfInfo: Use cache ', self.myCachePath
		else :
			print 'sbfInfo: Don\'t use cache'

		self.myConfig		= lenv['config']
		self.myWarningLevel	= lenv['warningLevel']

		### use myInstallPaths and myInstallExtPaths to update myIncludesInstallPaths, myLibInstallPaths,
		### myIncludesInstallExtPaths, myLibInstallExtPaths, myGlobalCppPath and myGlobalLibPath
		for element in self.myInstallPaths :
			self.myIncludesInstallPaths	+=	[ os.path.join(element, 'include') ]
			self.myLibInstallPaths		+=	[ os.path.join(element, 'lib') ]

		for element in self.myInstallExtPaths :
			self.myIncludesInstallExtPaths	+=	[ os.path.join(element, 'include') ]
			self.myLibInstallExtPaths		+=	[ os.path.join(element, 'lib') ]

		self.myGlobalCppPath = self.myIncludesInstallPaths + self.myIncludesInstallExtPaths
		self.myGlobalLibPath = self.myLibInstallPaths + self.myLibInstallExtPaths


	###### Initialize project from lenv ######
	def initializeProjectFromEnv( self, lenv ) :
		self.myVcsUse	= lenv['vcsUse']
		self.myDefines	= lenv['defines']
		self.myType		= lenv['type']
		self.myVersion	= lenv['version']
		self.myPostfix	= lenv['postfix']
		self.myDeps		= lenv['deps']
		self.myUses		= lenv['uses']
		self.myLibs		= lenv['libs']
		self.myStdlibs	= lenv['stdlibs']


	###### Initialize project ######
	def initializeProject( self, projectPathName ) :

		# Already done in method buildProject(), but must be redone (because of recursiv call to buildProject())
		self.myProjectPathName	= projectPathName
		self.myProjectPath		= os.path.dirname( projectPathName )
		self.myProject			= os.path.basename(projectPathName)

		if ( os.path.isabs(self.myBuildPath) ) :
			self.myProjectBuildPath = self.myBuildPath
		else :
			self.myProjectBuildPath = os.path.join( self.myProjectPathName, self.myBuildPath )

		if ( self.myConfig == 'debug' ) :										### TODO: not good if more than one config must be built
			self.myPostfixLinkedToMyConfig = 'D'
			self.my_PostfixLinkedToMyConfig = '_' + self.myPostfixLinkedToMyConfig
		else : # release
			self.myPostfixLinkedToMyConfig = ''
			self.my_PostfixLinkedToMyConfig = ''

		if ( len(self.myPostfix) > 0 ) :
			self.myFullPostfix = self.myPostfix + self.my_PostfixLinkedToMyConfig
		else :
			self.myFullPostfix = self.myPostfixLinkedToMyConfig

		#@todo function to add '_' if not empty
		if ( len(self.myFullPostfix) > 0 ) :
			self.my_FullPostfix = '_' + self.myFullPostfix
		else :
			self.my_FullPostfix = ''

		###
		self.myCxxFlags		= ''
		self.myCppPath		= [os.path.join(self.myProjectPathName, 'include')] + self.myGlobalCppPath
		self.myLinkFlags	= ''
#		print 'A:projectPathName', projectPathName
#		print 'A:self.myLibPath init=', self.myLibPath
#		print 'A:self.myGlobalLibPath=', self.myGlobalLibPath
		self.myLibPath		= self.myGlobalLibPath
#		print 'B:self.myLibPath init=', self.myLibPath
#		print 'B:self.myGlobalLibPath=', self.myGlobalLibPath


	###### Read a *.options file ######
	def readOptions( self, file ) :
		myOptions = Options( file )
		myOptions.AddOptions(
			('svnUrls', 'Set the list of subversion repository used in order (from first to last) until a successful checkout occurs'),
			('svnCheckoutExclude', 'Set the list of project that may not be used for check out subversion operation. All projects not explicitly excluded will be included.'),
			('svnUpdateExclude', 'Set the list of project that may not be used for update subversion operation. All projects not explicitly excluded will be included.'),

			EnumOption('clVersion', 'MS Visual C++ compiler (cl.exe) version using the following version schema : x.y or year. Use the special value \'highest\' to select the highest installed version.', 'highest',
						allowed_values = ( '7.1', '8.0Exp', '8.0', 'highest' ),
						map={
								'2003'		: '7.1',
								'2005Exp'	: '8.0Exp',
								'2005'		: '8.0',
							} ),

			('installPaths', 'Set the list of search paths to \'/usr/local\' like directories. The first one would be used as a destination path for target named install'),

			('buildPath',	'Set the path to the directory in which to build all files (path could be absolute or relative to the project being build)', 'build' ),
			('cachePath',	'Set the path to cache that will be shared among all the builds using the same cachePath', ''),
			BoolOption('cacheOn', 'Set to use build cache.', False),

			EnumOption(	'config', 'Select a release or debug binary.', 'release',
							allowed_values=('debug', 'release'),
							map={}, ignorecase=1 ),
			EnumOption( 'warningLevel', 'Select level of warnings.', 'normal',
							allowed_values=('normal', 'high'),
							map={}, ignorecase=1 ),

			EnumOption( 'vcsUse', 'Set to true if the project use a versionning control system', 'yes',
						allowed_values=('yes', 'no'),
						map={}, ignorecase=1 ),
			( 'defines', 'Set the list of predefined names (as a macro)'),
			EnumOption( 'type', 'Type of the target', 'none',
							allowed_values=('exec', 'static','shared','none'),
							map={}, ignorecase=1 ),
			('version', 'Set the version number specified by a pair separated by - (i.e. major-minor)'),
			('postfix', 'Add a postfix to the target name'),

			('deps', 'Set dependencies to others projects (all dependencies are automatically built)'),

			('uses', 'Set usage of some predefined libraries (boost1-33-1, boost=boost1-33-1, cairo1-2-6, cairo=cairo1-2-6, gtkmm2-4, gtkmm=gtkmm2-4, itk2-6, itk=itk2-6, ode, opengl, openil, openilu, glu, glut, sdl, sofa, wx2-6, wxgl2-6, wx2-8, wxgl2-8, wx=wx2-8, wxgl=wxgl2-8)'),
			# (cg|cgFX|imageMagick6|imageMagick++6)')
			#ListOption(	'uses', 'Set usage of some predefined libraries', 'none',
			#				['boost','ode', 'opengl','openil','glu','glut','wx2-4','wxgl2-4'] ), # (cg|cgFX|imageMagick6|imageMagick++6|itk)')	FIXME

			('libs', 'Set libraries used during the link stage that have been compiled with SConsBuildFramework (this scons system)'),
			('stdlibs', 'Set the standard libraries used during the link stage.')
								)
		return myOptions


	###### Read a .options file and update environment (self.myBuildOptions and lenv are modified). ######
	def readOptionsAndUpdateEnv( self, lenv, configDotOptionsFile = 'default.options' ) :
		configDotOptionsPathFile = self.myProjectPathName + os.sep + configDotOptionsFile
		if os.path.isfile(configDotOptionsPathFile) :
			# update lenv with config.options
			self.myBuildOptions = self.readOptions( configDotOptionsPathFile )
			self.myBuildOptions.Update( lenv )


	###### Configures CxxFlags & LinkFlags ######
	def configureCxxFlagsAndLinkFlagsOnWin32( self, lenv ) :

		# Configures Microsoft Platform SDK for Windows Server 2003 R2 (TODO: FIXME : should be done by SCons...)
		if self.myIsExpressEdition :
			#print 'self.myCppPath=', self.myCppPath
			lenv.Append( CPPPATH = 'C:\\Program Files\\Microsoft Platform SDK for Windows Server 2003 R2\\Include' )
			#self.myCppPath.append( 'C:\\Program Files\\Microsoft Platform SDK for Windows Server 2003 R2\\Include' )
			#print 'self.myCppPath=', self.myCppPath
			lenv.Append( LIBPATH = 'C:\\Program Files\\Microsoft Platform SDK for Windows Server 2003 R2\\Lib' )

		#
		if self.myCCVersionNumber >= 8.000000 :
			self.myCxxFlags += ' /EHsc '			# /GX is deprecated in Visual C++ 2005
		elif self.myCCVersionNumber >= 7.000000 :
			self.myCxxFlags += ' /GX '
			if self.myConfig == 'release' :
				self.myCxxFlags += ' /Zm600 '

		# /TP : Specify Source File Type (C++) => adds by SCons
		# /GR : Enable Run-Time Type Information
		self.myCxxFlags += ' /GR '
		# Defines
		self.myCxxFlags += ' /DWIN32 /D_WINDOWS /DNOMINMAX '

		if self.myConfig == 'release' :							### TODO: use /Zd in release mode to be able to debug a little.
			self.myCxxFlags += ' /DNDEBUG '
			self.myCxxFlags += ' /MD /O2 '
		else :
			self.myCxxFlags += ' /D_DEBUG /DDEBUG '
			# /Od : Disable (Debug)
			self.myCxxFlags += ' /MDd /Od '
			# /Zi : Produces a program database (PDB) that contains type information and symbolic debugging information
			# for use with the debugger. The symbolic debugging information includes the names and types of variables,
			# as well as functions and line numbers. Using the /Zi instead may yield improved link-time performance,
			# although parallel builds will no longer work. You can generate PDB files with the /Zi switch by overriding
			# the default $CCPDBFLAGS variable
			# /ZI : Produces a program database in a format that supports the Edit and Continue feature.
			# /Gm : Enable Minimal Rebuild.
			#self.myCxxFlags += ' /ZI /Gm ' TODO not compatible with parallel (-j) builds.

		# Warnings
		if self.myWarningLevel == 'normal' :		### TODO: it is dependent of the myConfig. Must be changed ? yes, do it...
			self.myCxxFlags += ' /W3 '
		else :
			#
			self.myCxxFlags += ' /W4 '
			# /Wall : Enables all warnings
			self.myCxxFlags += ' /Wall '
			#
			if self.myCCVersionNumber >= 7.000000 :
				# /Wp64 : Detect 64-Bit Portability Issues
				self.myCxxFlags += ' /Wp64 '

		# Subsystem and incremental flags
		if self.myConfig == 'release' :
			# subsystem sets to console to output debugging informations.
			self.myLinkFlags	+= ' /SUBSYSTEM:CONSOLE '
			#self.myLinkFlags	+= ' /SUBSYSTEM:WINDOWS '

			# To ensure that the final release build does not contain padding or thunks, link nonincrementally.
			self.myLinkFlags += ' /INCREMENTAL:NO '
		else :
			# subsystem sets to console to output debugging informations.
			self.myLinkFlags	+= ' /SUBSYSTEM:CONSOLE '

			# By default, the linker runs in incremental mode.

		# TODO: FIXME: hack for boost
		self.myCxxFlags		+= ' /DBOOST_ALL_DYN_LINK '

		# self.myLinkFlags	+= ' /VERSION:%s ' % self.myVersion.replace('-','.')	TODO: use a .def file
		if		self.myType == 'exec' :
			# /GA : Results in more efficient code for an .exe file for accessing thread-local storage (TLS) variables.
			self.myCxxFlags += ' /GA '
		elif	self.myType == 'shared' :
			self.myCxxFlags	+= ' /D_USRDLL '



	def configureCxxFlagsAndLinkFlagsOnPosix( self, lenv ) :

		lenv['CXX'] = lenv.WhereIs('g++')											### FIXME: remove me
																					### myCxxFlags += ' -pedantic'
		if ( self.myConfig == 'release' ) :
			self.myCxxFlags	+= ' -DNDEBUG -O3 '										### TODO: more compiler and cpu optimizations
		else :
			self.myCxxFlags	+= ' -D_DEBUG -DDEBUG -g -O0 '							### profiling myCxxFlags += ' -pg', mpatrol, leaktracer

		# process myWarningLevel, adds always -Wall option.							TODO: adds more warnings with myWarningLevel = 'high' ?
		self.myCxxFlags	+= ' -Wall '


	def configureCxxFlagsAndLinkFlags( self, lenv ) :

		### TODO: moves defines(-Dxxxx) from platform specific methods into this one.
		### complete myCxxFlags and myLinkFlags ###
		if ( self.myPlatform == 'win32' ) :
			self.configureCxxFlagsAndLinkFlagsOnWin32( lenv )
		elif ( self.myPlatform == 'cygwin' or self.myPlatform == 'posix' ) :
			self.configureCxxFlagsAndLinkFlagsOnPosix( lenv )
		else:
			print 'sbfWarning: unknown platform (', self.myPlatform, ')'

		# complete myCxxFlags with some defines
		if ( self.myType == 'shared' ) :
			self.myCxxFlags += ' -D' + self.myProject.upper() + '_EXPORTS '

		if ( sys.platform == 'darwin' ) :
			self.myCxxFlags += ' -D__MACOSX__'
		elif ( string.find( sys.platform, 'linux' ) != -1 ) :
			self.myCxxFlags += ' -D__linux'


	###### use_package (see option named 'uses') ######
	def use_boost( self, lenv, elt ) :
		if ( self.myPlatform == 'posix' ) :
			lenv['LIBS'] += [ 'boost_date_time-gcc-mt-1_33_1', 'boost_filesystem-gcc-mt-1_33_1', 'boost_regex-gcc-mt-1_33_1', 'boost_signals-gcc-mt-1_33_1']
			lenv['LIBS'] += [ 'boost_thread-gcc-mt-1_33_1'  , 'boost_serialization-gcc-mt-1_33_1', 'boost_iostreams-gcc-mt-1_33_1']
			lenv['LIBS'] += [ 'boost_program_options-gcc-mt-1_33_1', 'boost_wserialization-gcc-mt-1_33_1', 'boost_python-gcc-mt-1_33_1' ]
		elif ( self.myPlatform == 'darwin' ) :
			lenv['LIBS'] += [ 'boost_date_time-1_33_1', 'boost_filesystem-1_33_1', 'boost_regex-1_33_1', 'boost_signals-1_33_1']
			lenv['LIBS'] += [ 'boost_thread-1_33_1'  , 'boost_serialization-1_33_1', 'boost_iostreams-1_33_1']
			lenv['LIBS'] += [ 'boost_program_options-1_33_1', 'boost_wserialization-1_33_1', 'boost_python-1_33_1' ]
		#else:
		# Nothing to do for win32 platform.

	# def use_boost( self, lenv, elt ) :
		# if self.myPlatform == 'win32' :
			# lenv.Append( CPPDEFINES = 'BOOST_ALL_DYN_LINK' )
		# elif self.myPlatform == 'posix' :
			# lenv['LIBS'] += [ 'boost_date_time-gcc-mt-1_33_1', 'boost_filesystem-gcc-mt-1_33_1', 'boost_regex-gcc-mt-1_33_1', 'boost_signals-gcc-mt-1_33_1']
			# lenv['LIBS'] += [ 'boost_thread-gcc-mt-1_33_1'  , 'boost_serialization-gcc-mt-1_33_1', 'boost_iostreams-gcc-mt-1_33_1']
			# lenv['LIBS'] += [ 'boost_program_options-gcc-mt-1_33_1', 'boost_wserialization-gcc-mt-1_33_1', 'boost_python-gcc-mt-1_33_1' ]
		# elif ( self.myPlatform == 'darwin' ) :
			# lenv['LIBS'] += [ 'boost_date_time-1_33_1', 'boost_filesystem-1_33_1', 'boost_regex-1_33_1', 'boost_signals-1_33_1']
			# lenv['LIBS'] += [ 'boost_thread-1_33_1'  , 'boost_serialization-1_33_1', 'boost_iostreams-1_33_1']
			# lenv['LIBS'] += [ 'boost_program_options-1_33_1', 'boost_wserialization-1_33_1', 'boost_python-1_33_1' ]
		# else:
			# print 'sbfWarning: uses=[\'%s\'] not supported on platform %s.' % ( elt, self.myPlatform )

	def use_cairo( self, lenv, elt ) :
		lenv.AppendUnique( CPPPATH = os.path.join( self.myIncludesInstallExtPaths[0], 'cairo' ) )
		lenv.AppendUnique( LIBS = ['cairo', 'fontconfig', 'freetype', 'png', 'z' ] )

	# TODO: GTK_BASEPATH and GTKMM_BASEPATH documentation
	def use_gtkmm( self, lenv, elt ) :
		# Retrieves GTK_BASEPATH and GTKMM_BASEPATH
		gtkBasePath		= getPathFromEnv('GTK_BASEPATH')
		gtkmmBasePath	= getPathFromEnv('GTKMM_BASEPATH')
		if	(gtkBasePath is None) or \
			(gtkmmBasePath is None ) :
			print 'sbfWarning: Unable to configure %s.' % elt
			return
		#
		gtkmmCppPath = ['include/libglademm-2.4', 'lib/libglademm-2.4/include', 'lib/gtkmm-2.4/include',
						'include/gtkmm-2.4', 'lib/gdkmm-2.4/include', 'include/gdkmm-2.4', 'include/pangomm-1.4',
						'include/atkmm-1.6', 'lib/libxml++-2.6/include', 'include/libxml++-2.6',
						'lib/glibmm-2.4/include', 'include/glibmm-2.4', 'include/cairomm-1.0',
						'lib/sigc++-2.0/include', 'include/sigc++-2.0']

		for cppPath in gtkmmCppPath :
			lenv.AppendUnique( CPPPATH = os.path.join(gtkmmBasePath, cppPath) )

		gtkCppPath = [	'lib/gtkglext-1.0/include', 'include/gtkglext-1.0', 'include/libglade-2.0', 'lib/gtk-2.0/include',
						'include/gtk-2.0', 'include/pango-1.0', 'include/atk-1.0', 'lib/glib-2.0/include',
						'include/glib-2.0', 'include/libxml2', 'include/cairo', 'include' ]

		for cppPath in gtkCppPath :
			lenv.AppendUnique( CPPPATH = os.path.join(gtkBasePath, cppPath) )

		#
		if self.myPlatform == 'win32' :
			lenv.AppendUnique( LIBS = [	'glademm-2.4', 'xml++-2.6', 'gtkmm-2.4', 'glade-2.0', 'gdkmm-2.4', 'atkmm-1.6',
										'pangomm-1.4', 'glibmm-2.4', 'cairomm-1.0', 'sigc-2.0',
										'gtk-win32-2.0', 'xml2', 'gdk-win32-2.0', 'atk-1.0', 'gdk_pixbuf-2.0',
										'pangowin32-1.0', 'pangocairo-1.0', 'pango-1.0', 'cairo', 'gobject-2.0',
										'gmodule-2.0', 'glib-2.0', 'intl', 'iconv' ] )
			lenv.AppendUnique( LIBS = [ 'gtkglext-win32-1.0', 'gdkglext-win32-1.0' ] )

			lenv.AppendUnique( LIBPATH = [	os.path.join(gtkBasePath, 'lib'),
											os.path.join(gtkmmBasePath, 'lib') ] )

			lenv.AppendUnique( CPPFLAGS = [ '/vd2', '/wd4250' ] )
		else :
			print 'sbfWarning: uses=[\'%s\'] not supported on platform %s.' % ( elt, self.myPlatform )

	def use_itk( self, lenv, elt ) :
		# already and always done by sbf ' -DNOMINMAX'

		# includes
		itkIncludes = []
		if ( elt in [ 'itk2-6', 'itk' ] ) :
			itkIncludes = [	'itk', 'itk/Algorithms', 'itk/BasicFilters', 'itk/Common', 'itk/expat', 'itk/Numerics', 'itk/IO',
							'itk/Numerics/FEM', 'itk/Numerics/Statistics', 'itk/Numerics/NeuralNetworks', 'itk/SpatialObject',
							'itk/Utilities/MetaIO', 'itk/Utilities/NrrdIO', 'itk/Utilities/DICOMParser', 'itk/Utilities',
							'itk/Utilities/vxl/vcl', 'itk/Utilities/vxl/core' ]
		else :
			print "sbfWarning: ", elt, " unsupported."

		for cppPath in self.myIncludesInstallExtPaths :
			for include in itkIncludes :
				lenv.Append( CPPPATH = os.path.join(cppPath, include) )

		# libs
		if ( self.myConfig == 'release' ) :
			itkLibs = [	'ITKAlgorithms', 'ITKNumerics', 'ITKCommon', 'itksys', 'ITKStatistics', 'itkvnl_inst',
						'itkvnl', 'itknetlib', 'itkvcl', 'itkvnl_algo', 'ITKStatistics', 'ITKFEM', 'ITKBasicFilters',
						'ITKIO', 'itkjpeg8', 'itkjpeg16', 'itkpng', 'itktiff', 'ITKMetaIO', 'ITKEXPAT', 'itkzlib',
						'ITKNrrdIO', 'itkgdcm', 'ITKDICOMParser', 'itkjpeg12', 'itkopenjpeg', 'ITKniftiio',
						'ITKSpatialObject', 'ITKznz' ]
		else :
			itkLibs = [	'ITKAlgorithms_D', 'ITKNumerics_D', 'ITKCommon_D', 'itksys_D', 'ITKStatistics_D', 'itkvnl_inst_D',
						'itkvnl_D', 'itknetlib_D', 'itkvcl_D', 'itkvnl_algo_D', 'ITKStatistics_D', 'ITKFEM_D', 'ITKBasicFilters_D',
						'ITKIO_D', 'itkjpeg8_D', 'itkjpeg16_D', 'itkpng_D', 'itktiff_D', 'ITKMetaIO_D', 'ITKEXPAT_D', 'itkzlib_D',
						'ITKNrrdIO_D', 'itkgdcm_D', 'ITKDICOMParser_D', 'itkjpeg12_D', 'itkopenjpeg_D', 'ITKniftiio_D',
						'ITKSpatialObject_D', 'ITKznz_D' ]

		lenv.Append( LIBS = itkLibs )
		# 'snmpapi','wsock32'
		# 'kernel32.lib', 'user32.lib', 'gdi32.lib', 'winspool.lib', 'comdlg32.lib', 'advapi32.lib', 'shell32.lib', 'ole32.lib', 'oleaut32.lib', 'uuid.lib', 'odbc32.lib', 'odbccp32.lib'

	def use_openIL( self, lenv, elt ) :
		if ( self.myPlatform == 'win32' ) :
			if ( self.myConfig == 'release' ) :
				lenv['LIBS']	+= ['DevIL']
			else :
				lenv['LIBS']	+= ['DevIL'] #['DevILd'] @todo openil should be compiled in debug on win32 platform
		else :
			if ( self.myConfig == 'release' ) :
				lenv['LIBS']	+= ['IL']
			else :
				lenv['LIBS']	+= ['ILd']

	def use_openILU( self, lenv, elt ) :
		if ( self.myPlatform == 'win32' ) :
			if ( self.myConfig == 'release' ) :
				lenv['LIBS']	+= ['ILU']
			else :
				lenv['LIBS']	+= ['ILU'] #['DevILd'] @todo openil should be compiled in debug on win32 platform
		else :
			if ( self.myConfig == 'release' ) :
				lenv['LIBS']	+= ['ILU']
			else :
				lenv['LIBS']	+= ['ILUd']

	def use_sdl( self, lenv, elt ) :
		if ( self.myPlatform == 'win32' ) :
			lenv['LIBS']	+= ['SDL', 'SDLmain']
		else :
			lenv.ParseConfig('sdl-config --cflags --libs')

	# TODO: SOFA_PATH documentation
	# TODO: packages sofa into a localExt and adapts the following code to be more sbf friendly
	def use_sofa( self, lenv, elt ) :
		# Retrieves SOFA_PATH
		sofa_path = getPathFromEnv('SOFA_PATH')
		if sofa_path is None :
			print 'sbfWarning: Unable to configure %s.' % elt
			return

		#
		lenv['CPPPATH'] += [ os.path.join(sofa_path, 'modules') ]
		lenv['CPPPATH'] += [ os.path.join(sofa_path, 'framework') ]
		lenv['LIBS']	+= ['SofaCore', 'SofaDefaultType', 'SofaComponent', 'SofaHelper', 'SofaSimulation']

		if self.myPlatform == 'win32' :
			lenv['LIBS'] += ['libxml2', 'NewMAT', 'Gdi32', 'Shell32']
			if self.myConfig == 'release' :
				lenv['LIBPATH']	+= [ os.path.join( sofa_path, 'lib/win32/ReleaseVC8') ]
			else :
				lenv['LIBPATH']	+= [ os.path.join( sofa_path, 'lib/win32/DebugVC8' ) ]
			lenv['LIBPATH'] += [ os.path.join( sofa_path, 'lib/win32/Common' ) ]
		else :
			print 'sbfWarning: uses=[\'%s\'] not supported on platform %s.' % ( elt, self.myPlatform )

	#@todo Adds support to both ANSI and Unicode version of wx, static/dynamic and db stuff (see http://www.wxwidgets.org/wiki/index.php/MSVC_.NET_Setup_Guide)
	def use_wxWidgets( self, lenv, elt ) :
		if	( self.myPlatform == 'win32' ) :

			lenv.Append( CPPDEFINES = [ 'WXUSINGDLL', '__WIN95__' ] )

			if ( elt == 'wx2-6' ) :
				if ( self.myConfig == 'release' ) :
					lenv.Append( LIBS = [	'wxbase26', 'wxmsw26_adv', 'wxmsw26_core', 'wxmsw26_html', 'wxbase26_net', 'wxmsw26_xrc' ] )		### xml
				else :
					lenv.Append( LIBS = [	'wxbase26d', 'wxmsw26d_adv', 'wxmsw26d_core', 'wxmsw26d_html', 'wxbase26d_net', 'wxmsw26d_xrc' ] )	### xml
			elif ( elt == 'wxgl2-6' ) :
				if ( self.myConfig == 'release' ) :
					lenv.Append( LIBS = ['wxmsw26_gl'] )
				else :
					lenv.Append( LIBS = ['wxmsw26d_gl'] )
			elif ( elt in ['wx2-8', 'wx'] ) :
				if ( self.myConfig == 'release' ) :
					lenv.Append( LIBS = [	'wxbase28', 'wxbase28_net', 'wxbase28_xml', 'wxmsw28_adv', 'wxmsw28_aui', 'wxmsw28_core',
											'wxmsw28_html', 'wxmsw28_media', 'wxmsw28_qa', 'wxmsw28_richtext', 'wxmsw28_xrc'	] )
										# wxbase28_odbc, wxmsw28_dbgrid
				else :
					lenv.Append( LIBS = [	'wxbase28d', 'wxbase28d_net', 'wxbase28d_xml', 'wxmsw28d_adv', 'wxmsw28d_aui', 'wxmsw28d_core',
											'wxmsw28d_html', 'wxmsw28d_media', 'wxmsw28d_qa', 'wxmsw28d_richtext', 'wxmsw28d_xrc'	] )
										# wxbase28d_odbc, wxmsw28d_dbgrid
			elif ( elt in ['wxgl2-8', 'wxgl'] ) :
				if ( self.myConfig == 'release' ) :
					lenv.Append( LIBS = [	'wxmsw28_gl'	] )
				else :
					lenv.Append( LIBS = [	'wxmsw28d_gl'	] )
			else :
				print "sbfWarning: Unsupported version of wxWidgets"
		elif ( self.myPlatform == 'darwin' ) :
			print "sbfWarning: Unsupported version of wxWidgets"
		else :
			#lenv['CXXFLAGS'] += ' -DGTK_NO_CHECK_CASTS -D__WXGTK__ -D_FILE_OFFSET_BITS=64 -D_LARGE_FILES '					### FIXME: bug in ParseConfig() ? remove me ?
			if ( elt == 'wx2-4' ) :
				env.ParseConfig('wx-config --prefix=' + os.path.join( self.myInstallExtPaths[0], 'lib' ) + ' --cppflags --ldflags --libs')
			elif ( elt == 'wxgl2-4' ) :
				env.ParseConfig('wx-config --prefix=' + os.path.join( self.myInstallExtPaths[0], 'lib' ) + ' --cppflags --ldflags --libs --gl-libs')
			elif ( elt in ['wx2-6', 'wx'] ) :
				if ( self.myConfig == 'release' ) :
					env.ParseConfig('wx-config --debug=no --cppflags --libs base adv core html net xml xrc')
				else:
					env.ParseConfig('wx-config --debug=yes --cppflags --libs base adv core html net xml xrc')
			elif ( elt == 'wxgl2-6' ) :
				if ( self.myConfig == 'release' ) :
					env.ParseConfig('wx-config --debug=no --libs gl')
				else:
					env.ParseConfig('wx-config --debug=yes --libs gl')


	def uses( self, lenv ) :

		for elt in lenv['uses'] :
			elt = string.lower( elt )

			### configure boost ###
			if ( elt in ['boost', 'boost1-33-1'] ) :
				self.use_boost( lenv, elt )

			### configure cairo ###
			elif ( elt in ['cairo', 'cairo1-2-6' ] ) :
				self.use_cairo( lenv, elt )

			### configure gtk/gtkmm ###
			elif ( elt in ['gtkmm', 'gtkmm2-4'] ) :
				self.use_gtkmm( lenv, elt );

			### configure itk ###
			elif ( elt in ['itk', 'itk2-6'] ) :
				self.use_itk( lenv, elt )

			### configure ODE ###
			elif ( elt == 'ode' ) :
				lenv['LIBS'] += ['ode']

			### configure OpenGL ###
			elif ( elt == 'opengl' ) :
				if ( self.myPlatform == 'win32' ) :
					lenv['LIBS'] += ['opengl32']
				else :
					lenv['LIBS'] += ['GL']

			### configure openIL ###
			elif ( elt == 'openil' ) :
				self.use_openIL( lenv, elt )

			### configure openILU ###
			elif ( elt == 'openilu' ) :
				self.use_openILU( lenv, elt )

			### configure glu ###
			elif ( elt == 'glu' ) :
				if ( self.myPlatform == 'win32' ) :
					lenv['LIBS'] += ['glu32']
				else :
					lenv['LIBS'] += ['GLU']

			### configure glut ###
			elif ( elt == 'glut' ) :
				if ( self.myPlatform == 'win32' ) :
					lenv['LIBS'] += ['glut32']
				else :
					lenv['LIBS'] += ['glut']

			### configure sdl ###
			elif ( elt == 'sdl' ) :
				self.use_sdl( lenv, elt )

			### configure sofa ###
			elif ( elt == 'sofa' ) :
				self.use_sofa( lenv, elt )

			### configure wx* ###
			elif (	re.match('^wx[\d-]*$', elt ) or
					re.match('^wxgl[\d-]*$', elt ) or
					elt in ['wx', 'wxgl'] ) :
				self.use_wxWidgets( lenv, elt )

			### configure others ? ###
			else :
				print "sbfWarning: unknown uses=['%s']" % elt


	def vcsCheckout( self ) :
		print "----------------------- vcs checkout project %s in %s -----------------------" % (self.myProject, self.myProjectPathName)

		if self.myProject in self.mySvnCheckoutExclude :
			print "sbfInfo: Exclude from vcs checkout."
			print "sbfInfo: Skip to the next project..."
			return

		successful = svnCheckout( self )

		if successful == False :
			print "sbfWarning: Unable to populate directory", self.myProjectPathName, "from vcs."
		#else vcs checkout successful.

	def vcsUpdate( self ) :
		print "----------------------- vcs update project %s in %s -----------------------" % (self.myProject, self.myProjectPathName)

		if self.myProject in self.mySvnUpdateExclude :
			print "sbfInfo: Exclude from vcs update."
			print "sbfInfo: Skip to the next project..."
			return

		successful = svnUpdate( self )

		if successful == False :
			print "sbfWarning: Unable to update directory", self.myProjectPathName, "from vcs."
		#else vcs update successful.

	###### Build a project ######
	def buildProject( self, projectPathName ) :

		# Initializes basic informations about incoming project
		self.myProjectPathName	= projectPathName
		self.myProjectPath		= os.path.dirname( projectPathName )
		self.myProject			= os.path.basename(projectPathName)

		# User wants a vcs checkout ?
		tryVcsCheckout = ('svnCheckout' in self.myBuildTargets) or (self.myProject+'_svnCheckout' in self.myBuildTargets)

		# Tests existance of project path name
		existanceOfProjectPathName = os.path.isdir(self.myProjectPathName)

		# Configures a new environment
		lenv = env.Copy()

		# What must be done for this project ?
		#existanceOfProjectPathName	tryVcsCheckout		action
		#True					True 				env (checkout and env, if lenv['vcsUse'] == 'yes' and not already checkout from vcs)
		#True					False				env
		#False					True				vcsCheckout env
		#False					False				return

		if not existanceOfProjectPathName :
			if not tryVcsCheckout:
				print "----------------------- project %s in %s -----------------------" % (self.myProject, self.myProjectPathName)
				print "sbfWarning: Unable to find project", self.myProject, "in directory", self.myProjectPathName
				print "sbfInfo: None of targets svnCheckout or", self.myProject + "_svnCheckout have been specified."
				return
			else :
				self.vcsCheckout()
				self.readOptionsAndUpdateEnv( lenv )
		else :
			self.readOptionsAndUpdateEnv( lenv )

			if tryVcsCheckout :
				if lenv['vcsUse'] == 'yes' :
					projectURL = svnGetURL(self.myProjectPathName)
					if len(projectURL) > 0 :
						# @todo only if verbose
						print "----------------------- project %s in %s -----------------------" % (self.myProject, self.myProjectPathName)
						print "sbfInfo: Already checkout from %s using svn." % projectURL
						print "sbfInfo: Uses 'svnUpdate' to get the latest changes from the repository."
					else :
						self.vcsCheckout()
						self.readOptionsAndUpdateEnv( lenv )
				else :
					# @todo only if verbose
					print "----------------------- project %s in %s -----------------------" % (self.myProject, self.myProjectPathName)
					print "sbfInfo: 'vcsUse' option sets to no. So svn checkout is disabled."
			#else nothing to do

		# Tests existance of project path name
		if os.path.isdir(self.myProjectPathName) :
			# Adds the new environment
			self.myParsedProjects[self.myProject] = lenv
		else :
			print "sbfWarning: Unable to find project", self.myProject, "in directory", self.myProjectPathName
			print "sbfInfo: Skip to the next project..."
			return

		# User wants a vcs update ?
		tryVcsUpdate = ('svnUpdate' in self.myBuildTargets) or (self.myProject+'_svnUpdate' in self.myBuildTargets)

		if tryVcsUpdate :
			if lenv['vcsUse'] == 'yes' :
				self.vcsUpdate()
				self.readOptionsAndUpdateEnv( lenv )
			else :
				# @todo only if verbose
				print "----------------------- project %s in %s -----------------------" % (self.myProject, self.myProjectPathName)
				print "sbfInfo: 'vcsUse' option sets to no. So svn update is disabled."
		# else nothing to do.

		# Constructs dependencies
		# @todo only in verbose
		#print "sbfDebug:%s dependencies are %s" % (self.myProject, lenv['deps'])

		for dependency in lenv['deps'] :
			if ( os.path.isabs( dependency ) ) :
				# dependency is an absolute path
				normalizedDependency = getNormalizedPathname( dependency )
			else :
				# dependency is a path relative to default.options file directory
				normalizedDependency = getNormalizedPathname( projectPathName + os.sep + dependency )

			if ( os.path.split(normalizedDependency)[1] not in self.myParsedProjects ) :
				# dependency not already "build"
				self.buildProject( normalizedDependency )
			#else : # nothing to do, project already "build"
				#print "sbfDebug: project %s already parsed." % projectPathName

		# initialize the project
		self.initializeProjectFromEnv( lenv )
		self.initializeProject( projectPathName )

		# force clean=1 option if needed.
		if (	('clean' in self.myBuildTargets)						or
				('mrproper' in self.myBuildTargets)						or
				(self.myProject + '_clean' in self.myBuildTargets)		or
				(self.myProject + '_mrproper' in self.myBuildTargets ) ) :
			lenv.SetOption('clean', 1)

		# used by code printing messages during the different build stage.
		lenv['sbf_projectPathName'	] = self.myProjectPathName
		lenv['sbf_projectPath'		] = self.myProjectPath
		lenv['sbf_project'			] = self.myProject

		#lenv['sbf_projectPathName'] = projectPathName
		#print "self.myProjectPathName==projectPathName?", self.myProjectPathName, "\n", projectPathName

		os.chdir( projectPathName )																				### FIXME is chdir done at scons level ?

		# Dumping construction environment (for debugging).																	# TODO : a method printDebugInfo()
		#DumpEnv.DumpEnv( lenv )
		#print 'DEBUG:cwd=', os.getcwd()

		### construct project ###
		#print "sbfDebug: Constructing project %s in %s" % (self.myProject, self.myProjectPathName)

		### expand myProjectBuildPathExpanded
		self.myProjectBuildPathExpanded = os.path.join( self.myProjectBuildPath, self.myProject, self.myVersion, self.myPlatform, self.myCCVersion, self.myConfig )

		if ( len(self.myPostfix) > 0 ) :
			self.myProjectBuildPathExpanded += '_' + self.myPostfix

		### configure myCxxFlags with myDefines
		for define in self.myDefines :
			self.myCxxFlags	+=	' -D' + define + ' '

		### configure compiler and linker flags.
		self.configureCxxFlagsAndLinkFlags( lenv )

		###### configure environment ######
		#print 'before=', lenv['LIBPATH']
#		print '1:self.myLibPath=', self.myLibPath
#		if lenv.has_key( 'LIBPATH' ) :
#			print '1=LIBPATH', lenv['LIBPATH']
		lenv.Append(	CXXFLAGS	= self.myCxxFlags )
		lenv.AppendUnique( CPPPATH = self.myCppPath )
		lenv.Append(	LINKFLAGS	= self.myLinkFlags,
						LIBPATH		= self.myLibPath ) # @todo AppendUnique should be better, but seems to cut cmd-line
#		print '2:self.myLibPath=', self.myLibPath
#		print '2=LIBPATH', lenv['LIBPATH']

		# configure lenv['LIBS'] with lenv['stdlibs']
		lenv.Append( LIBS = lenv['stdlibs'] ) # @todo AppendUnique

		# configure lenv['LIBS'] with lenv['libs']
		for lib in lenv['libs'] :
			libSplited	= string.split(lib, ' ')
			libExpanded = ''
			if ( len(libSplited) == 1 ) :
				libExpanded += lib + self.my_Platform_myCCVersion + self.my_PostfixLinkedToMyConfig
			elif ( len(libSplited) == 2 ) :
				libExpanded += libSplited[0] + '_' + libSplited[1] + self.my_Platform_myCCVersion + self.my_PostfixLinkedToMyConfig
			else:
				print 'sbfWarning: skip ', lib, ' because its name contains more than two spaces'

			lenv.Append( LIBS = [libExpanded] )
#???			lenv['LIBS'] += [libExpanded]

		# configure lenv[*] with lenv['uses']
		self.uses( lenv )

		###### setup 'pseudo BuildDir' (with OBJPREFIX) ######									###todo use builddir ?
		### TODO: .cpp .cxx .c => config.options global, idem for pruneDirectories, .h .... => config.options global ?
		filesFromSrc		= []
		filesFromInclude	= []
		filesFromShare		= []

		basenameWithDotRe = r"^[a-zA-Z][a-zA-Z0-9_\-]*\."

		searchFiles( 'src',		filesFromSrc,		['.svn'], basenameWithDotRe + r"cpp$" )
		#searchFiles1( 'src',		['.svn'], ['.cpp'], filesFromSrc )

		searchFiles( 'include',	filesFromInclude,	['.svn'], basenameWithDotRe + r"(?:hpp|hxx|h)$" )
		#searchFiles1( 'include', ['.svn'], ['.hpp','.hxx','.h'], filesFromInclude )

		searchFiles( 'share',	filesFromShare,		['.svn'] )

		objFiles = []
		if		self.myType in ['exec', 'static'] :
			for srcFile in filesFromSrc :
				objFile			=	(os.path.splitext(srcFile)[0]).replace('src', self.myProjectBuildPathExpanded, 1 )
				srcFileExpanded	=	os.path.join(self.myProjectPathName, srcFile)
				objFiles		+=	lenv.Object( objFile, srcFileExpanded )				# Object is a synonym for the StaticObject builder method.
				### print objFile, ':', srcFileExpanded, '\n'

		elif	self.myType == 'shared':
			for srcFile in filesFromSrc :
				objFile			=	(os.path.splitext(srcFile)[0]).replace('src', self.myProjectBuildPathExpanded, 1 )
				srcFileExpanded	=	os.path.join(self.myProjectPathName, srcFile)
				objFiles		+=	lenv.SharedObject( objFile, srcFileExpanded )
				### print objFile, ':', srcFileExpanded, '\n'
		else :
			if	self.myType != 'none' :
				print 'sbfWarning: during setup of pseudo BuildDir'
			# else nothing to do for 'none'


		### final result of project ###
		objProject = os.path.join( self.myProjectBuildPathExpanded, self.myProject ) + '_' + self.myVersion + self.my_Platform_myCCVersion

		objProject += self.my_FullPostfix

		#
		installInBinTarget		= []
		installInIncludeTarget	= filesFromInclude
		installInLibTarget		= []
		installInShareTarget	= filesFromShare

		if		self.myType == 'exec' :
			projectTarget		=	lenv.Program( objProject, objFiles )
			installInBinTarget	+=	projectTarget
		elif	self.myType == 'static' :
			projectTarget		=	lenv.StaticLibrary( objProject, objFiles )
			installInLibTarget	+=	projectTarget
		elif	self.myType == 'shared' :
			projectTarget		=	lenv.SharedLibrary( objProject, objFiles )
			installInLibTarget	+=	projectTarget
		elif self.myType == 'none' :
			projectTarget		= ''
		else :
			print 'sbfWarning: during final setup of project'
		#																	TODO: myType == 'headers'


		if self.myType in ['exec', 'static', 'shared'] :
			# projectTarget is not deleted before it is rebuilt.
			lenv.Precious( projectTarget )

		# PDB: pdb only generate on win32 and in debug mode.
		if (self.myPlatform == 'win32') and (self.myConfig == 'debug') :
			# PDB Generation
			# static library don't generate pdb.
			if	self.myType in ['exec', 'shared'] :
				lenv['PDB'] = objProject + '.pdb'
				lenv.SideEffect(lenv['PDB'], projectTarget)
				# it is not deleted before it is rebuilt.
				lenv.Precious( lenv['PDB'] )

			# PDB Installation
			if		self.myType == 'exec' :
				installInBinTarget.append(	File(objProject + '.pdb')	)
			elif	self.myType == 'shared' :
				installInLibTarget.append(	File(objProject + '.pdb')	)


		######	setup targets : myProject_svnCheckout, myProject_svnUpdate, myProject_build myProject_install myProject myProject_clean myProject_mrproper ######

		### myProject_svnCheckout
		env.Alias( self.myProject + '_svnCheckout', env.Command('dummySvnCheckout.out1', 'dummy.in', Action( nopAction, nopAction ) ) )

		### myProject_svnUpdate
		env.Alias( self.myProject + '_svnUpdate', env.Command('dummySvnUpdate.out1', 'dummy.in', Action( nopAction, nopAction ) ) )

		### myProject_build
		env.Alias( self.myProject + '_build_print', lenv.Command('dummy_build_print' + self.myProject + 'out1', 'dummy.in', Action( nopAction, printEmptyLine ) ) )
		env.Alias( self.myProject + '_build_print', lenv.Command('dummy_build_print' + self.myProject + 'out2', 'dummy.in', Action( nopAction, printBuild ) ) )
		env.AlwaysBuild( self.myProject + '_build_print' )

		aliasProjectBuild = env.Alias( self.myProject + '_build', self.myProject + '_build_print' )
		env.Alias( self.myProject + '_build', projectTarget )
		env.Clean( self.myProject + '_build', self.myProjectBuildPathExpanded  )

		### myProject_install
		installTarget	=	lenv.Install( os.path.join(self.myInstallDirectory, 'bin'),		installInBinTarget )

		for file in installInIncludeTarget :
			installTarget +=	lenv.InstallAs( os.path.join(self.myInstallDirectory, file), os.path.join(self.myProjectPathName, file) )

		installTarget	+=	lenv.Install( os.path.join(self.myInstallDirectory, 'lib'),	installInLibTarget )

		for file in installInShareTarget :
			installTarget += lenv.InstallAs(	file.replace('share', self.getShareInstallDirectory(), 1),
												os.path.join(self.myProjectPathName, file) )

		#
		env.Alias( self.myProject + '_install_print', lenv.Command('dummy_install_print' + self.myProject + 'out1', 'dummy.in', Action( nopAction, printInstall ) ) )
		env.AlwaysBuild( self.myProject + '_install_print' )

		aliasProjectInstall = env.Alias( self.myProject + '_install', self.myProject + '_build' )
		env.Alias( self.myProject + '_install', self.myProject + '_install_print' )
		env.Alias( self.myProject + '_install', installTarget )

		### myProject
		aliasProject = env.Alias( self.myProject, aliasProjectInstall )

		### myProject_clean

		### FIXME																									printClean does'nt work ??? modified behavior when clean=1 ?
		#env.Alias( self.myProject + '_clean_print', lenv.Command('dummy_clean_print' + self.myProject + 'out1', 'dummy.in', Action( nopAction, printEmptyLine ) ) )
		#env.Alias( self.myProject + '_clean_print', lenv.Command('dummy_clean_print' + self.myProject + 'out2', 'dummy.in', Action( nopAction, printClean ) ) )
		#env.AlwaysBuild( self.myProject + '_clean_print' )
		#env.Alias( self.myProject + '_clean', self.myProject + '_clean_print' )

		aliasProjectClean = env.Alias( self.myProject + '_clean', self.myProject + '_build' )

		### myProject_mrproper
		# TODO: printMrproper see myProject_clean target.

		aliasProjectMrproper = env.Alias( self.myProject + '_mrproper', aliasProjectInstall )
		env.Clean( self.myProject + '_mrproper', os.path.join(self.myProjectBuildPath, self.myProject) )
		env.Clean( self.myProject + '_mrproper', os.path.join(self.myInstallDirectory, 'include', self.myProject) )

		shareProjectInstallDirectory = os.path.join( self.myInstallDirectory, 'share', self.myProject )
		if os.path.exists( shareProjectInstallDirectory ) :
			shareProjectInstallEntries = os.listdir( shareProjectInstallDirectory )
			if	len(shareProjectInstallEntries) == 0 or \
				(len(shareProjectInstallEntries) == 1 and shareProjectInstallEntries[0] == self.myVersion) :
				env.Clean( self.myProject + '_mrproper', shareProjectInstallDirectory )
			else :
				env.Clean( self.myProject + '_mrproper', self.getShareInstallDirectory() )
		# else : nothing to do, no share/myProject directory

		# TODO: and the local/doc/myProject directory ?

		#@todo myproject_zip

		### Configures lenv
		lenv['sbf_bin']							= []
		lenv['sbf_include']						= filesFromInclude
		lenv['sbf_lib_object']					= []
		lenv['sbf_lib_object_for_developer']	= []
		lenv['sbf_share']						= filesFromShare

		for elt in installInBinTarget :
			lenv['sbf_bin'].append( elt.abspath )

		# TODO: not very platform independent
		for elt in installInLibTarget :
			# TODO: must be optimize
			absPathFilename	= elt.abspath
			filename		= os.path.split(absPathFilename)[1]
			filenameExt		= os.path.splitext(filename)[1]
			if filenameExt == '.exp' :
				# exclude *.exp
				continue
			if filenameExt in ['.pdb', '.lib'] :
				lenv['sbf_lib_object_for_developer'].append( absPathFilename )
			else :
				lenv['sbf_lib_object'].append( absPathFilename )


		###### special targets: build install all debug release clean mrproper ######
		env.Alias( 'build',		aliasProjectBuild		)
		env.Alias( 'install',	aliasProjectInstall		)
		env.Alias( 'all',		aliasProject			)
		env.Alias( 'debug',		aliasProject			)
		env.Alias( 'release',	aliasProject			)
		env.Alias( 'clean',		aliasProjectClean		)
		env.Alias( 'mrproper',	aliasProjectMrproper	)

	###### Helpers ######
	### share directory
	def getShareDirectory( self ) :
		return os.path.join( 'share', self.myProject, self.myVersion )

	def getShareInstallDirectory( self ) :
		return os.path.join( self.myInstallDirectory, self.getShareDirectory() )

	### Management of version number
	def getVersionNumberTuple( self, versionNumber ) :
		major				= int(versionNumber)
		minorDotMaintenance	= (versionNumber-major)*1000
		minor				= int(minorDotMaintenance)
		maintenance			= int((minorDotMaintenance-minor)*1000)
		return ( major, minor, maintenance )

	def getVersionNumberString1( self, versionNumber ) :
		return str( int(versionNumber) )

	def getVersionNumberString2( self, versionNumber ) :
		tuple = self.getVersionNumberTuple( versionNumber )
		return "%u-%u" % ( tuple[0], tuple[1] )

	def getVersionNumberString3( self, versionNumber ) :
		tuple = self.getVersionNumberTuple( versionNumber )
		return "%u-%u-%u" % ( tuple[0], tuple[1], tuple[2] )



###### Initial environment ######
#

# create objects
# HINTS: to propagate the entire external environment to the execution environment for commands : ENV = os.environ

#Export('env') not needed.

SConsEnvironment.sbf	= SConsBuildFramework()
env = SConsEnvironment.sbf.myEnv # TODO remove me (this line is just for compatibility with the old global env)

# Dumping construction environment (for debugging).																	# TODO : a method printDebugInfo()
#DumpEnv.DumpEnv( env )

# target 'sbfCheck'
env.Alias('sbfCheck', env.Command('dummyCheckVersion.out1', 'dummy.in', Action( sbfCheck, nopAction ) ) )

# build project from launch directory (and all dependencies recursively)
env['sbf_launchDir'			]	= os.getcwd()
env['sbf_projectPathName'	]	= env['sbf_launchDir']
env['sbf_projectPath'		]	= os.path.dirname(env['sbf_launchDir'])
env['sbf_project'			]	= os.path.basename(env['sbf_launchDir'])
env.sbf.buildProject( env['sbf_projectPathName'] )

env.Default( 'all' )

### special targets: svnCheckout svnUpdate ###

env.Alias( 'svnCheckout', env.Command('dummySvnCheckout.out1', 'dummy.in', Action( nopAction, nopAction ) ) )
env.Alias( 'svnUpdate', env.Command('dummySvnUpdate.out1', 'dummy.in', Action( nopAction, nopAction ) ) )

### special doxygen related targets : dox_build dox_install dox dox_clean dox_mrproper ###

# Creates a custom doxyfile
def doxyfileAction( target, source, env ) :

	# Compute inputList, examplePath and imagePath parmeters of doxyfile
	inputList	= ''
	examplePath	= ''
	imagePath	= ''
	for projectName in env.sbf.myParsedProjects :

		localenv = env.sbf.myParsedProjects[projectName]
		projectPathName	= localenv['sbf_projectPathName']

		newPathEntry	= os.path.join(projectPathName, 'include') + ' '
		if os.path.exists( newPathEntry ) :
			inputList	+= newPathEntry

		newPathEntry	= os.path.join(projectPathName, 'src') + ' '
		if os.path.exists( newPathEntry ) :
			inputList	+= newPathEntry

		newPathEntry	= os.path.join(projectPathName, 'doc', 'example') + ' '
		if os.path.exists( newPathEntry ) :
			examplePath	+= newPathEntry

		newPathEntry	= os.path.join(projectPathName, 'doc', 'image') + ' '
		if os.path.exists( newPathEntry ) :
			imagePath	+= newPathEntry

	# Create a custom doxyfile
	import shutil

	targetName = str(target[0])
	sourceName = str(source[0])

	shutil.copyfile(sourceName, targetName)			# or env.Execute( Copy(targetName, sourceName) )

	file = open( targetName, 'a' )

	file.write( '\n### Added by SConsBuildFramework\n' )
	file.write( 'PROJECT_NAME		= "%s"\n'					% env.sbf.myProject )
	file.write( 'PROJECT_NUMBER		= "%s generated at %s"\n'	% (env.sbf.myVersion, env.sbf.myDateTime) )
	file.write( 'OUTPUT_DIRECTORY	= "%s"\n'					% (targetName + '_build') )
	file.write( 'INPUT				= %s\n'						% inputList )
	#FIXME: FILE_PATTERNS, EXCLUDE, EXCLUDE_PATTERNS
	file.write( 'EXAMPLE_PATH		= %s\n'				% examplePath )
	file.write( 'IMAGE_PATH			= %s\n'				% imagePath )

	file.close()


# Synchronizes files from source to target.
# target should be yourDestinationPath/dummy.out
# Recursively copy the entire directory tree rooted at source to the destination directory (named by os.path.dirname(target)).
# Remark : the destination directory would be removed before the copying occurs (even if not empty, so be carefull).
def syncAction( target, source, env ) :

	import shutil

	sourcePath		= str(source[0])
	destinationPath	= os.path.dirname(str(target[0]))

	print 'Copy %s at %s' % (sourcePath, destinationPath)

	if ( os.path.ismount(destinationPath) ) :
		print 'sbfError: Try to use %s as an installation/desinstallation directory. Stop action to prevent any unwanted file destruction'
		return None

	shutil.rmtree( destinationPath, True )

	if ( os.path.isdir( os.path.dirname(destinationPath) ) == False ):
		os.makedirs( os.path.dirname(destinationPath) )
	shutil.copytree( sourcePath, destinationPath )


if (	('dox_build' in env.sbf.myBuildTargets) or
		('dox_install' in env.sbf.myBuildTargets) or
		('dox' in env.sbf.myBuildTargets) or
		('dox_clean' in env.sbf.myBuildTargets) or
		('dox_mrproper' in env.sbf.myBuildTargets)	):

	if (	('dox_clean' in env.sbf.myBuildTargets) or
			('dox_mrproper' in env.sbf.myBuildTargets)	):
		env.SetOption('clean', 1)

	env.Alias( 'dox_build_print', env.Command('dox_build_print.out1', 'dummy.in', Action( nopAction, printDoxygenBuild ) ) )

	#@todo use other doxyfile(s). see doxInputDoxyfile
	doxInputDoxyfile		= os.path.join(os.getenv('SCONS_BUILD_FRAMEWORK'), 'doxyfile')
	doxOutputPath			= os.path.join(env.sbf.myBuildPath, env.sbf.myProject, 'doxygen', env.sbf.myVersion )
	doxOutputCustomDoxyfile	= os.path.join(doxOutputPath, 'doxyfile.sbf')

	doxBuildPath			= os.path.join(doxOutputPath, 'doxyfile.sbf_build')
	doxInstallPath			= os.path.join(env.sbf.myInstallDirectory, 'doc', env.sbf.myProject, env.sbf.myVersion)

	# target dox_build
	env.Alias( 'dox_build', 'dox_build_print' )
	env.Alias( 'dox_build', env.Command( doxOutputCustomDoxyfile, doxInputDoxyfile, Action(doxyfileAction, nopAction) )	)
	env.AlwaysBuild( doxOutputCustomDoxyfile )
	env.Alias( 'dox_build', env.Command( 'dox_build.out2', 'dummy.in', 'doxygen ' + doxOutputCustomDoxyfile )	)

	# target dox_install
	env.Alias( 'dox_install_print', env.Command('dox_install_print.out1', 'dummy.in', Action( nopAction, printDoxygenInstall ) ) )
	env.Alias( 'dox_install', 'dox_build' )
	env.Alias( 'dox_install', 'dox_install_print' )
	env.Alias( 'dox_install', env.Command( os.path.join(doxInstallPath,'dummy.out'), doxBuildPath, Action(syncAction, nopAction) )	)

	# target dox
	env.Alias( 'dox', 'dox_install' )

	# target dox_clean
	env.Alias( 'dox_clean', 'dox' )
	env.Clean( 'dox_clean', doxOutputPath )

	# target dox_mrproper
	env.Alias( 'dox_mrproper', 'dox_clean' )
	env.Clean( 'dox_mrproper', doxInstallPath )


### special zip related targets : zipRuntime, zipDev, zipSrc and zip ###
# @todo zip*_[build,install,,clean,mrproper]
# @todo zip doxygen
if (	('zipRuntime'	in env.sbf.myBuildTargets) or
		('zipDev'		in env.sbf.myBuildTargets) or
		('zipSrc'		in env.sbf.myBuildTargets) or
		('zip'			in env.sbf.myBuildTargets)	) :
																							# FIXME: lazzy scons env construction => TODO: generalize (but must be optional)
	# Create a builder to zip files
	import SCons																			# from SCons.Script.SConscript import SConsEnvironment
	zipBuilder = env.Builder(	action=Action(zipArchiver,printZipArchiver),
								source_factory=SCons.Node.FS.default_fs.Entry,
								target_factory=SCons.Node.FS.default_fs.Entry,
								multi=0 )
	env['BUILDERS']['zipArchiver'] = zipBuilder

	rootProjectEnv = env.sbf.myParsedProjects[env['sbf_project']]

	# compute zipPath (where files are copying before creating the zip file)
	# zipPathBase = /mnt/data/sbf/build/pak/vgsdk_0-4
	zipPathBase	=	os.path.join( env.sbf.myBuildPath, 'pak', env['sbf_project'] + '_' + rootProjectEnv['version'] )
	# zipPath = zipPathBase + "_win32_cl7-1_D"
	zipPath		=	zipPathBase + env.sbf.my_Platform_myCCVersion + env.sbf.my_FullPostfix

	#_dev_2005_08_09
	runtimeZipPath	= zipPath		+ '_runtime_'	+ env.sbf.myDate
	devZipPath		= zipPath		+ '_dev_'		+ env.sbf.myDate
	srcZipPath		= zipPathBase	+ '_src_'		+ env.sbf.myDate

	#
	env.Alias( 'zip_print', env.Command('zip_print.out1', 'dummy.in', Action( nopAction, printZip ) ) )
	env.AlwaysBuild( 'zip_print' )

	env.Alias( 'runtimeZip_print',	env.Command('runtimeZip_print.out1','dummy.in', Action( nopAction, printRuntimeZip ) ) )
	env.Alias( 'devZip_print',		env.Command('devZip_print.out1',	'dummy.in', Action( nopAction, printDevZip ) ) )
	env.Alias( 'srcZip_print',		env.Command('srcZip_print.out1',	'dummy.in', Action( nopAction, printSrcZip ) ) )

	env.Alias( 'zipRuntime', 'build' )
	env.Alias( 'zipRuntime', 'zip_print' )
	env.Alias( 'zipRuntime', 'runtimeZip_print' )

	env.Alias( 'zipDev', 'build' )
	env.Alias( 'zipDev', 'zip_print' )
	env.Alias( 'zipDev', 'devZip_print' )

	env.Alias( 'zipSrc', 'zip_print' )
	env.Alias( 'zipSrc', 'srcZip_print' )

	# Collect files to create the zip
	runtimeZipFiles = []
	devZipFiles		= []
	srcZipFiles		= []

	for projectName in env.sbf.myParsedProjects :
		lenv			= env.sbf.myParsedProjects[projectName]
		projectPathName	= lenv['sbf_projectPathName']
		project			= lenv['sbf_project']
		version			= lenv['sbf_version']

		# Adds files to runtime zip
		runtimeZipFiles += env.Install(	os.path.join(runtimeZipPath, 'runtime'),	lenv['sbf_bin'] )
		runtimeZipFiles += env.Install(	os.path.join(runtimeZipPath, 'runtime'),	lenv['sbf_lib_object'] )

		for file in lenv['sbf_share'] :
			runtimeZipFiles += env.InstallAs(	file.replace(	'share',
																os.path.join(runtimeZipPath, 'share', project, version),
																1),
												os.path.join(projectPathName, file) )

		# Adds files to dev zip
		devZipFiles += env.Install(		os.path.join(devZipPath, 'bin'),			lenv['sbf_bin'] )

		for file in lenv['sbf_include'] :
			devZipFiles += env.InstallAs(		os.path.join(devZipPath, file),		os.path.join(projectPathName, file) )

		devZipFiles += env.Install(				os.path.join(devZipPath, 'lib'),	lenv['sbf_lib_object'] )
		devZipFiles += env.Install(				os.path.join(devZipPath, 'lib'),	lenv['sbf_lib_object_for_developer'] )

		# Adds files to src zip
		if lenv['vcsUse'] == 'yes' :
			allFiles = svnGetAllVersionedFiles( projectPathName )

			projectRelPath = convertPathAbsToRel( env['sbf_launchDir'], projectPathName )

			for absFile in allFiles :
				relFile = convertPathAbsToRel( projectPathName, absFile )
				srcZipFiles += env.InstallAs( os.path.join(srcZipPath, projectRelPath, relFile), absFile )
		# else nothing to do

	runtimeZipFiles	+= env.zipArchiver( runtimeZipPath + '_pak',	runtimeZipPath )
	devZipFiles		+= env.zipArchiver( devZipPath + '_pak',		devZipPath )
	srcZipFiles		+= env.zipArchiver(	srcZipPath + '_pak',		srcZipPath )

	env.Alias( 'zipRuntime',	runtimeZipFiles )
	env.Alias( 'zipDev',		devZipFiles )
	env.Alias( 'zipSrc',		srcZipFiles )

	env.Alias( 'zip', ['zipRuntime', 'zipDev', 'zipSrc'] )

#@todo function
#import shutil
#if ( os.path.ismount(srcZipPath) ) :
#	print 'sbfError: Try to use %s as an installation/desinstallation directory. Stop action to prevent any unwanted file destruction'
#else:
#	shutil.rmtree( srcZipPath, True )
#endtodo