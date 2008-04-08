# SConsBuildFramework - Copyright (C) 2008, Nicolas Papier.
# Distributed under the terms of the GNU General Public License (GPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

# This file is an helper to give access from a project options file to :
# - 'platform' variable containing the current platform (win32, posix and darwin).
# - 'sbf' variable containing the instance of SConsBuildFramework class.
from SCons.Script.SConscript import SConsEnvironment

sbf			= SConsEnvironment.sbf
platform	= sbf.myPlatform
