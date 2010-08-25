# GLE - Copyright (C) 2010, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

import re

from gleOpenGL import opengl



# Global state of parser
currentExtensionName = ''
currentExtension = {}

def beginNewExtension( extensionName ):
	global currentExtensionName
	global currentExtension

	# Starts a new extension
	currentExtensionName = extensionName
	currentExtension = {}

	# Stores extension in OpenGL instance
	opengl.extensions[currentExtensionName] = currentExtension


def parseFile( filename ):
	# Regular expressions

	#/* glext.h last updated $Date: 2010-04-09 02:45:33 -0700 (Fri, 09 Apr 2010) $ */
	#/* glxext.h last updated 2010/05/17 */
	#/* wglext.h last updated 2010/05/17 */
	sourcesRE = re.compile(r'(/\* (glext|glxext|wglext).h last updated .+\*/)')

	# #define GL_GLEXT_VERSION 61
	# #define GLX_GLXEXT_VERSION 28
	# #define WGL_WGLEXT_VERSION 19
	glextVersionRE = re.compile(r'\#define\s+(GL_GLEXT|GLX_GLXEXT|WGL_WGLEXT)_VERSION\s+(\w+)')


	# #ifndef GL_VERSION_1_2
	# #ifndef GLX_VERSION_1_4
	# not in wgl
	sectionGL_VERSION_RE = re.compile(r'\#ifndef\s+((GL_|GLX_)VERSION_[_\w]+)')

	# #ifndef GL_ARB_imaging
	# #ifndef GLX_ARB_get_proc_address
	# #ifndef WGL_ARB_buffer_region
	sectionGLRE = re.compile(r'\#ifndef\s+((GL|GLX|WGL)_[_\w]+)')



	# #define GL_UNSIGNED_BYTE_3_3_2            0x8032
	defineRE = re.compile(r'\#define\s+(\w+)\s+(0x\w+)')


	#GLAPI void APIENTRY glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

	# #ifndef GLX_ARB_get_proc_address
	# #define GLX_ARB_get_proc_address 1
	# #ifdef GLX_GLXEXT_PROTOTYPES
	# extern __GLXextFuncPtr glXGetProcAddressARB (const GLubyte *procName);
	# #endif /* GLX_GLXEXT_PROTOTYPES */
	# typedef __GLXextFuncPtr ( * PFNGLXGETPROCADDRESSARBPROC) (const GLubyte *procName);
	# #endif

	# #ifndef WGL_ARB_buffer_region
	# #define WGL_ARB_buffer_region 1
	# #ifdef WGL_WGLEXT_PROTOTYPES
	# extern HANDLE WINAPI wglCreateBufferRegionARB (HDC hDC, int iLayerPlane, UINT uType);
	# ...
	# #endif /* WGL_WGLEXT_PROTOTYPES */
	# typedef HANDLE (WINAPI * PFNWGLCREATEBUFFERREGIONARBPROC) (HDC hDC, int iLayerPlane, UINT uType);
	# ...
	# #endif
	procRE = re.compile(r'^\s*GLAPI\s+(?P<retVal>.+?)\s+APIENTRY\s+(?P<procName>\w+)\s*(?P<params>[(].*[)]);\s*$')
	glxAndWglProcRE = re.compile(r'^\s*extern\s+(?P<retVal>.+?)\s+(?:WINAPI\s+)?(?P<procName>\w+)\s*(?P<params>[(].*[)]);\s*$')


	#/* ARB_blend_func_extended */
	#/* ARB_texture_buffer_object_rgb32 (no entry points) */
	reuseRE = re.compile(r'/\*\s+(?P<extensionName>\w{3}_[_\w]+).*\*/')
	reuses = {}
	with open(filename) as file:
		for line in file:
			# sources
			m = sourcesRE.match(line) 
			if m:
				opengl.sources.append(m.group(0))
				print m.group(0)
				continue

			# glext version
			m = glextVersionRE.match(line)
			if m:
				opengl.sources.append(m.group(0))
				print m.group(0)
				continue


			# section GL_VERSION
			m = sectionGL_VERSION_RE.match(line)
			if m:
				beginNewExtension( m.group(1) )
				print '\nCURRENT EXTENSION (GL_VERSION_*): {0}'.format(currentExtensionName)
				continue

			# section GL_*
			m = sectionGLRE.match(line)
			if m:
				beginNewExtension( m.group(1) )
				print '\nCURRENT EXTENSION(GL_*): {0}'.format(currentExtensionName)
				continue


			# define
			m = defineRE.match(line)
			if m:
				tokenStr = m.group(1)
				tokenValue = m.group(2)
				opengl.tokensStr2Value[tokenStr] = tokenValue
				opengl.tokensValue2Str[tokenValue] = tokenStr
				#print tokenStr, tokenValue
				# @todo adds to extensions ?
				continue

			# proc
			m = procRE.match(line) or glxAndWglProcRE.match(line)
			if m:
				procName = m.group('procName')
				procProto = m.groups()
				#print procName, procProto
				currentExtension[procName] = procProto
				continue

			# reuse in GL_VERSION_* section
			m = reuseRE.match(line)
			if m and re.search( r'^GL_VERSION_.+$', currentExtensionName ):
				nameOfReusedExtension =  'GL_' + m.group('extensionName')
# @todo FIXME
#				if currentExtensionName in reuses:
#					reuses[currentExtensionName].append(nameOfReusedExtension)
#				else:
#					reuses[currentExtensionName] = [nameOfReusedExtension]
				continue

	# Process reuse to fill opengl.extensions
	print '\nReuses'
	print '------'
	for (extensionName, reuses) in reuses.items():
		print extensionName
		for reuse in reuses:
			print reuse
			opengl.extensions[extensionName].update( opengl.extensions[reuse] )
		print


def parseRegistry():
	# Regular expressions

	#<li value=1> <a href="specs/ARB/multitexture.txt">GL_ARB_multitexture</a>
	#</li>

	#<li value=5> <a href="specs/ARB/multisample.txt">GL_ARB_multisample</a>
	#     <br> <a href="specs/ARB/multisample.txt">GLX_ARB_multisample</a>
	#	<br> <a href="specs/ARB/multisample.txt">WGL_ARB_multisample</a>
	#</li>
	ahref = '<a\s+href\s*=\s*"(?P<url>.+)"\s*>\s*(?P<extension>.+)\s*</a>'
	idAndExtensionRE = re.compile(r'<li value=(?P<id>[0-9]+)\s*>\s*' + ahref, re.IGNORECASE )#| re.MULTILINE )
	extensionRE = re.compile(r'\s*<br>\s*' + ahref, re.IGNORECASE )

	with open('registry.html') as file:
		currentID = -1
		for line in file:
			# id and extension
			m = idAndExtensionRE.match(line) 
			if m:
				currentID = m.group('id')
				print m.group('id'), m.group('url'), m.group('extension')
				opengl.registry[m.group('extension')] = (currentID, m.group('url'))
				continue

			# extension
			m = extensionRE.match(line) 
			if m:
				if currentID == -1:
					raise StandardError('currentID not initialized')
				print m.group('url'), m.group('extension')
				opengl.registry[m.group('extension')] = (currentID, m.group('url'))
				continue
