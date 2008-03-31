# SConsBuildFramework - Copyright (C) 2008, Nicolas Papier.
# Distributed under the terms of the GNU General Public License (GPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

import os

from sbfFiles	import *



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
