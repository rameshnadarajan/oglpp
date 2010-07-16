# GLE - Copyright (C) 2010, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

import os
import urllib
import urlparse



# @todo function downloadAFile()
def rsearchFilename( path ):
	# print path
	if len(path) <= 1:
		return
	else:
		splitted = os.path.split(path)
		if len(os.path.splitext(splitted[1])[1]) > 0:
			return splitted[1]
		else:
			return rsearchFilename( splitted[0] )

def reporthook_urlretrieve( blockCount, blockSize, totalSize ):
	size = blockCount * blockSize
	# Prints report on download advancement (each 64 kb)
	if ( (size/1024) % 64 == 0):
		print ( '%i kB ' % (size / 1024) )



def downloadOpenGLHeaderFiles():
	urls = [	'http://www.opengl.org/registry/api/glext.h', 'http://www.opengl.org/registry/api/glxext.h', 'http://www.opengl.org/registry/api/wglext.h',
				'http://www.opengl.org/registry/api/gl3.h' ]
	for url in urls:
		filename = rsearchFilename( urlparse.urlparse(url).path )
		print ( '* Retrieves %s from %s' % (filename, urlparse.urlparse(url).hostname ) )
		urllib.urlretrieve( url, filename, reporthook=reporthook_urlretrieve)
		print ( 'Done.' )
		print

def downloadOpenGLRegistry():
	url = 'http://www.opengl.org/registry/'
	filename = 'registry.html'
	print ( '* Retrieves {0} from {1}'.format( filename, urlparse.urlparse(url).hostname ) )
	urllib.urlretrieve( url, filename, reporthook=reporthook_urlretrieve)
	print ( 'Done.' )
	print
