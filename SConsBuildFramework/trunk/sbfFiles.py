# SConsBuildFramework - Copyright (C) 2005, 2007, 2008, Nicolas Papier.
# Distributed under the terms of the GNU General Public License (GPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

import fnmatch
import os
import re


###### Expands '~' and environment variables in the given pathname and normalizes it ######
def getNormalizedPathname( pathname ) :
	return os.path.normpath( os.path.expandvars(os.path.expanduser(pathname)) )


###### Converts absolute pathname absPathName into a path relative to basePathName ######
def convertPathAbsToRel( basePathName, absPathName ) :
	length = len(basePathName)
	return absPathName[length+1:]


###### Searching files in a filesystem ######
# Prune some directories
# Exclude/retain only a specific set of extensions for files
def searchFiles1( searchDirectory, pruneDirectories, allowedExtensions, oFiles ) :
	for dirpath, dirnames, filenames in os.walk( searchDirectory, topdown=True ):
		# prune directories
		prune = []
		for pruneDirectory in pruneDirectories :
			prune.extend( fnmatch.filter(dirnames, pruneDirectory) )
		for x in prune:
			###print 'prune', x
			dirnames.remove( x )

		for file in filenames:
			for extension in allowedExtensions :
				if ( os.path.splitext(file)[1] == extension ) :
					pathfilename = os.path.join(dirpath,file)
					oFiles += [pathfilename]
					break
#=======================================================================================================================
#			fileExtension = os.path.splitext(file)[1]
#			for extension in allowedExtensions :
#				if fileExtension == extension :
#					pathfilename = os.path.join(dirpath,file)
#					oFiles += [pathfilename]
#					break
#=======================================================================================================================
	###print 'oFiles=', oFiles


### searchdirectory				root path of the search
### oFiles						list where files are appended
### pruneDirectoriesPatterns
### allowedFilesRe				files matching this regular expression are append to oFiles
def searchFiles( searchDirectory, oFiles, pruneDirectoriesPatterns = [], allowedFilesRe = r".+" ) :
	for dirpath, dirnames, filenames in os.walk( searchDirectory, topdown = True ) :
		# FIXME: OPTME: replace fnmatch.filter() with dirnames = fnUNmatch.filter() or use module re
		# prune directories
		for pruneDirectoryPattern in pruneDirectoriesPatterns :
			dirnamesToRemove = fnmatch.filter(dirnames, pruneDirectoryPattern)
			for element in dirnamesToRemove :
				###print 'prune', element
				dirnames.remove( element )

		# get files
		compiledRe = re.compile( allowedFilesRe )
		for file in filenames :
			if compiledRe.match( file ) is not None :
				pathfilename = os.path.join(dirpath, file)
				oFiles.append(pathfilename)
	###print 'oFiles=', oFiles


# Gets all files
def searchAllFiles( searchDirectory, oFiles ) :
	for dirpath, dirnames, filenames in os.walk( searchDirectory, topdown=True ):
		for file in filenames:
			pathfilename = os.path.join(dirpath,file)
			oFiles.append(pathfilename)
	### print 'oFiles=', oFiles
