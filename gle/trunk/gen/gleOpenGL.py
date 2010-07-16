# GLE - Copyright (C) 2010, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

import re



class OpenGL:
	"""database containing informations about OpenGL"""
	def __init__(self):
		self.sources = []

		self.tokensStr2Value = {}
		self.tokensValue2Str = {}

		# extensions['GL_ARB_multitexture'] = { ..., 'glActiveTextureARB': ('void ', 'glActiveTextureARB', '(GLenum texture)'), ... }
		self.extensions = {}

		# registry['GL_NV_point_sprite'] = ('262', 'specs/NV/point_sprite.txt')
		self.registry = {}

		# functions['glActiveTextureARB'] = ('void ', 'glActiveTextureARB', '(GLenum texture)')
		self.functions = {}

	def initializeFunctions( self ):
		for extensionDict in self.extensions.values():
			for (functionName,functionProto)in extensionDict.items():
				#print functionName, functionProto
				if functionName not in self.functions:
					self.functions[functionName] = functionProto
				else:
					if functionProto != self.functions[functionName]:
						print functionName, functionProto
						raise AssertionError('Encountered two functions with the same name, but with different prototypes')
					#else ignore nothing to do


	### Global statistics
	def getNumOfFunctions( self ):
		return len(self.functions)


	### Request from function name
	def getPrototype( self, functionName ):
		return self.functions[functionName]

	def getPrototypeStr( self, functionName ):
		prototype = self.getPrototype( functionName )
		return '{0} {1}{2}'.format( prototype[0], prototype[1], prototype[2] )

	def getPrototypeParameterNames( self, functionName ):
		retVal = ''

		params = self.functions[functionName][2]

		# '(GLenum pname, const GLfloat *param)'		
		# =>
		# 'GLenum pname, const GLfloat  * param'
		params = params.replace('*', ' * ')
		params = params.replace('(', '')
		params = params.replace(')', '')

		# 'GLenum pname, const GLfloat  * param'
		# =>
		# ['GLenum pname', 'const GLfloat  * param']
		params = params.split(',')
		for param in params:
			splittedParam = param.split()
			if len(splittedParam)>=2:
				retVal += splittedParam[len(splittedParam)-1] + ' '
		return retVal.rstrip()


	### Request from extension name
	def getFunctionNames( self, extensionName ):
		extensionInfo = self.extensions[extensionName]
		return sorted([functionName for functionName in extensionInfo.keys() ])

	### Request from extension group
	def getExtensionNamesFromGroup( self, extensionGroupName ):
		"""Returns all extensions in an extension group"""
		retVal = []
		for extensionName in self.getExtensionNames():
			if getGroup(extensionName) == extensionGroupName:
				retVal.append( extensionName )
		return retVal

	### List/Iterators
	def getExtensionNames( self ):
		return sorted(self.extensions.keys())

	def getExtensionGroups( self ):
		"""['GL_ARB', ...]"""
		groups = set()
		for extensionName in self.getExtensionNames():
			groups.add( getGroup(extensionName) )
		return sorted(list(groups))



def getOSTag( extensionName ):
	if extensionName[0:3] == 'GL_':
		return
	elif extensionName[0:4] == 'GLX_':
		return 'POSIX'
	elif extensionName[0:4] == 'WGL_':
		return 'WIN32'
	else:
		raise AssertionError('Unexpected extension name')

def getOSTestExtensionSupport( extensionName ):
	if extensionName[0:3] == 'GL_':
		return 'isExtensionSupported'
	elif extensionName[0:4] in ['GLX_','WGL_']:
		return 'isWExtensionSupported'
	else:
		raise AssertionError('Unexpected extension name')

def getTypedefPFNPROC( functionName ):
	return 'PFN{function}PROC'.format( function=functionName.upper() )

def getGroup( extensionName ):
	"""Returns GL_ARB or ..."""
	groupRE = re.compile(r'^(?P<group>[^_]+_[^_]+)')		
	match = groupRE.match( extensionName )
	if match:
		return match.group('group')
	else:
		raise Assertion('Unable to extract group from extension name')


#
global opengl
opengl = OpenGL()

#
#count = 0
#for extensionName, extensionInfo in self.extensions.items():
#	count += len(extensionInfo)