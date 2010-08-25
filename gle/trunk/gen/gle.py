#!/usr/bin/env python

# GLE - Copyright (C) 2010, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

import os

from gleCodeGenerator import generateCode
from gleDownload import downloadOpenGLHeaderFiles, downloadOpenGLRegistry
from gleOpenGL import opengl
from gleParser import parseFile, parseRegistry


# @todo SDL_opengl using gle sample



###########################################

# Downloads OpenGL header files and registry
downloadOpenGLHeaderFiles()
downloadOpenGLRegistry()

# Parses files and registry
for file in ['glext.h', 'glxext.h', 'wglext.h']:
	parseFile( file )
parseRegistry()
opengl.initializeFunctions()

# Generates class OpenGLExtensionsGen and OpenGL wrapper
generateCode()

# Reporing
#print
#print 'ANALYSE'
#print '-------'
#print opengl.sources
#print opengl.tokensStr2Value
#print opengl.tokensValue2Str
#print opengl.extensions['GL_ARB_multitexture']
#print opengl.extensions['GL_VERSION_3_3'].keys()
#print opengl.registry
