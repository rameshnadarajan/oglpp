# SConsBuildFramework - Copyright (C) 2005, 2007, 2008, Nicolas Papier.
# Distributed under the terms of the GNU General Public License (GPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

import string

import SCons.Errors

from sbfUtils	import *


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
	# Retrieves GTK_BASEPATH
	gtkBasePath = getPathFromEnv('GTK_BASEPATH')
	if gtkBasePath is None :
		raise SCons.Errors.UserError("Unable to configure '%s'." % elt)

	# Sets CPPPATH
	gtkCppPath = [ 'include/cairo', 'include' ]

	for cppPath in gtkCppPath :
		lenv.AppendUnique( CPPPATH = os.path.join(gtkBasePath, cppPath) )

	# Sets LIBS, LIBPATH and CPPFLAGS
	if self.myPlatform == 'win32' :
		lenv.AppendUnique( LIBS = [	'cairo' ] )
		lenv.AppendUnique( LIBPATH = [ os.path.join(gtkBasePath, 'lib') ] )

		lenv.AppendUnique( CPPFLAGS = [ '/vd2', '/wd4250' ] )
	else :
		raise SCons.Errors.UserError("Uses=[\'%s\'] not supported on platform %s." % (elt, self.myPlatform) )

#=======================================================================================================================
# for cairo package
#		lenv.AppendUnique( CPPPATH = os.path.join( self.myIncludesInstallExtPaths[0], 'cairo' ) )
#		lenv.AppendUnique( LIBS = ['cairo', 'fontconfig', 'freetype', 'png', 'z' ] )
#=======================================================================================================================

def use_cairomm( self, lenv, elt ) :
	# Configures cairo
	use_cairo( self, lenv, elt )

	# Retrieves GTKMM_BASEPATH
	gtkmmBasePath	= getPathFromEnv('GTKMM_BASEPATH')
	if gtkmmBasePath is None :
		raise SCons.Errors.UserError("Unable to configure '%s'." % elt)

	# Sets CPPPATH
	gtkmmCppPath = ['include/cairomm-1.0']

	for cppPath in gtkmmCppPath :
		lenv.AppendUnique( CPPPATH = os.path.join(gtkmmBasePath, cppPath) )

	# Sets LIBS and LIBPATH
	if self.myPlatform == 'win32' :
		if self.myConfig == 'release' :
			lenv.AppendUnique( LIBS = [	'cairomm-1.0' ] )
		else:
			lenv.AppendUnique( LIBS = [	'cairomm-1.0d' ] )

		lenv.AppendUnique( LIBPATH = [ os.path.join(gtkmmBasePath, 'lib') ] )
	else :
		raise SCons.Errors.UserError("Uses=[\'%s\'] not supported on platform %s." % (elt, self.myPlatform) )

# TODO: GTK_BASEPATH and GTKMM_BASEPATH documentation, package gtkmm ?
def use_gtkmm( self, lenv, elt ) :
	# Retrieves GTK_BASEPATH and GTKMM_BASEPATH
	gtkBasePath		= getPathFromEnv('GTK_BASEPATH')
	gtkmmBasePath	= getPathFromEnv('GTKMM_BASEPATH')
	if	(gtkBasePath is None) or (gtkmmBasePath is None ) :
		raise SCons.Errors.UserError("Unable to configure '%s'." % elt)

	# Sets CPPPATH
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

	# Sets LIBS, LIBPATH and CPPFLAGS
	if self.myPlatform == 'win32' :
#			lenv.AppendUnique( LIBS = [	'glademm-2.4', 'xml++-2.6', 'gtkmm-2.4', 'glade-2.0', 'gdkmm-2.4', 'atkmm-1.6',
#										'pangomm-1.4', 'glibmm-2.4', 'cairomm-1.0', 'sigc-2.0',
#										'gtk-win32-2.0', 'xml2', 'gdk-win32-2.0', 'atk-1.0', 'gdk_pixbuf-2.0',
#										'pangowin32-1.0', 'pangocairo-1.0', 'pango-1.0', 'cairo', 'gobject-2.0',
#										'gmodule-2.0', 'glib-2.0', 'intl', 'iconv' ] )

		if self.myConfig == 'release' :
			lenv.AppendUnique( LIBS = [	'glademm-2.4', 'xml++-2.6', 'gtkmm-2.4', 'gdkmm-2.4', 'atkmm-1.6',
										'pangomm-1.4', 'glibmm-2.4', 'cairomm-1.0', 'sigc-2.0' ] )
		else:
			lenv.AppendUnique( LIBS = [	'glademm-2.4d', 'xml++-2.6d', 'gtkmm-2.4d', 'gdkmm-2.4d', 'atkmm-1.6d',
										'pangomm-1.4d', 'glibmm-2.4d', 'cairomm-1.0d', 'sigc-2.0d' ] )

		lenv.AppendUnique( LIBS = [	'glade-2.0',
									'gtk-win32-2.0', 'xml2', 'gdk-win32-2.0', 'atk-1.0', 'gdk_pixbuf-2.0',
									'pangowin32-1.0', 'pangocairo-1.0', 'pango-1.0', 'cairo', 'gobject-2.0',
									'gmodule-2.0', 'glib-2.0', 'intl', 'iconv' ] )

		lenv.AppendUnique( LIBS = [ 'gtkglext-win32-1.0', 'gdkglext-win32-1.0' ] )

		lenv.AppendUnique( LIBPATH = [	os.path.join(gtkBasePath, 'lib'),
										os.path.join(gtkmmBasePath, 'lib') ] )

		lenv.AppendUnique( CPPFLAGS = [ '/vd2', '/wd4250' ] )
	else :
		raise SCons.Errors.UserError("Uses=[\'%s\'] not supported on platform %s." % (elt, self.myPlatform) )

def use_itk( self, lenv, elt ) :
	# Already and always done by sbf on windows platform '/DNOMINMAX'

	# includes
	itkIncludes = [	'itk', 'itk/Algorithms', 'itk/BasicFilters', 'itk/Common', 'itk/expat', 'itk/gdcm/src',
					'itk/IO', 'itk/Numerics', 'itk/Numerics/FEM', 'itk/Numerics/NeuralNetworks', 'itk/Numerics/Statistics',
					'itk/SpatialObject', 'itk/Utilities', 'itk/Utilities/MetaIO', 'itk/Utilities/NrrdIO',
					'itk/Utilities/vxl/core', 'itk/Utilities/vxl/vcl' ]

	for cppPath in self.myIncludesInstallExtPaths :
		for include in itkIncludes :
			lenv.Append( CPPPATH = os.path.join(cppPath, include) )

	# libs
	itkLibs = [	'ITKAlgorithms', 'ITKBasicFilters', 'ITKCommon', 'ITKDICOMParser', 'ITKEXPAT', 'ITKFEM', 'itkgdcm',
				'ITKIO', 'itkjpeg8', 'itkjpeg12', 'itkjpeg16', 'ITKMetaIO', 'ITKniftiio', 'ITKNrrdIO', 'ITKNumerics',
				'itkopenjpeg', 'itkpng', 'ITKSpatialObject', 'ITKStatistics', 'itksys', 'itktiff', 'itkv3p_netlib',
				'itkvcl', 'itkvnl', 'itkvnl_algo', 'itkvnl_inst', 'itkzlib', 'ITKznz' ]

	lenv.Append( LIBS = itkLibs )

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
		raise SCons.Errors.UserError("Unable to configure '%s'." % elt)

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
		raise SCons.Errors.UserError("Uses=[\'%s\'] not supported on platform %s." % (elt, self.myPlatform) )

#@todo Adds support to both ANSI and Unicode version of wx
#@todo Adds support static/dynamic and db stuff (see http://www.wxwidgets.org/wiki/index.php/MSVC_.NET_Setup_Guide)
def use_wxWidgets( self, lenv, elt ) :
	if	self.myPlatform == 'win32' :

		lenv.Append( CPPDEFINES = [ 'WXUSINGDLL', '__WIN95__' ] )

		if self.myType == 'exec' and (not elt.startswith('wxgl')):
			lenv.Append( LINKFLAGS = '/SUBSYSTEM:WINDOWS' )

		if elt == 'wx2-8' :
			if self.myConfig == 'release' :
				lenv.Append( LIBS = [	'wxbase28', 'wxbase28_net', 'wxbase28_xml', 'wxmsw28_adv', 'wxmsw28_aui', 'wxmsw28_core',
										'wxmsw28_html', 'wxmsw28_media', 'wxmsw28_qa', 'wxmsw28_richtext', 'wxmsw28_xrc'	] )
									# wxbase28_odbc, wxmsw28_dbgrid
			else :
				lenv.Append( LIBS = [	'wxbase28d', 'wxbase28d_net', 'wxbase28d_xml', 'wxmsw28d_adv', 'wxmsw28d_aui', 'wxmsw28d_core',
										'wxmsw28d_html', 'wxmsw28d_media', 'wxmsw28d_qa', 'wxmsw28d_richtext', 'wxmsw28d_xrc'	] )
									# wxbase28d_odbc, wxmsw28d_dbgrid
		elif elt == 'wxgl2-8' :
			if self.myConfig == 'release' :
				lenv.Append( LIBS = [	'wxmsw28_gl'	] )
			else :
				lenv.Append( LIBS = [	'wxmsw28d_gl'	] )
		else :
			raise SCons.Errors.UserError("Uses=[\'%s\'] not supported on platform %s." % (elt, self.myPlatform) )
	elif self.myPlatform == 'darwin' :
		raise SCons.Errors.UserError("Uses=[\'%s\'] not supported on platform %s." % (elt, self.myPlatform) )
	else :
		if elt == 'wx2-8' :
			if self.myConfig == 'release' :
				env.ParseConfig('wx-config-gtk2-unicode-release-2.8 --cppflags --libs')
			else:
				env.ParseConfig('wx-config-gtk2-unicode-debug-2.8 --cppflags --libs')
		elif elt == 'wxgl2-8' :
			if self.myConfig == 'release' :
				env.ParseConfig('wx-config-gtk2-unicode-release-2.8 --gl-libs')
			else:
				env.ParseConfig('wx-config-gtk2-unicode-debug-2.8 --gl-libs')
		else :
			raise SCons.Errors.UserError("Uses=[\'%s\'] not supported on platform %s." % (elt, self.myPlatform) )



def uses( self, lenv ) :

	for elt in lenv['uses'] :
		# Converts to lower case
		elt = string.lower( elt )

		### configure boost ###
		if elt == 'boost1-33-1' :
			use_boost( self, lenv, elt )

		### configure cairo ###
		elif elt == 'cairo1-2-6' :
			use_cairo( self, lenv, elt )

		### configure cairomm ###
		elif elt == 'cairomm1-2-4' :
			use_cairomm( self, lenv, elt )

		### configure glu ###
		elif elt == 'glu' :
			if self.myPlatform == 'win32' :
				lenv['LIBS'] += ['glu32']
			else :
				lenv['LIBS'] += ['GLU']

		### configure glut ###
		elif elt == 'glut' :
			if self.myPlatform == 'win32' :
				lenv['LIBS'] += ['glut32']
			else :
				lenv['LIBS'] += ['glut']

		### configure gtk/gtkmm ###
		elif elt == 'gtkmm2-4' :
			use_gtkmm( self, lenv, elt );

		### configure itk ###
		elif elt == 'itk3-4-0' :
			use_itk( self, lenv, elt )

		### configure ODE ###
		elif elt == 'ode' :
			lenv['LIBS'] += ['ode']

		### configure OpenGL ###
		elif elt == 'opengl' :
			if self.myPlatform == 'win32' :
				lenv.Append( LIBS = [	'opengl32',	# OpenGL and wgl functions
										'gdi32'		# Pixelformat and swap related functions
									] )
			else :
				lenv.Append( LIBS = ['GL'] )

		### configure openIL ###
		elif elt == 'openil' :
			use_openIL( self, lenv, elt )

		### configure openILU ###
		elif elt == 'openilu' :
			use_openILU( self, lenv, elt )

		### configure sdl ###
		elif elt == 'sdl' :
			use_sdl( self, lenv, elt )

		### configure sofa ###
		elif elt == 'sofa' :
			use_sofa( self, lenv, elt )

		### configure wxWidgets ###
		elif elt in ['wx2-8', 'wxgl2-8'] :
			use_wxWidgets( self, lenv, elt )

		### configure others ? ###
		else :
			raise SCons.Errors.UserError("Unknown uses=['%s']" % elt)
