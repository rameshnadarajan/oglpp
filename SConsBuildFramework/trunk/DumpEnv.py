def DumpEnv( env, key = None, header = None, footer = None ):
	"""
	Using the standard Python pretty printer, dump the contents of the
	scons build environment to stdout.
	If the key passed in is anything other than 'env', then that will
	be used as an index into the build environment dictionary and
	whatever is found there will be fed into the pretty printer. Note
	that this key is case sensitive.
	The header and footer are simple mechanisms to allow printing a
	prefix and suffix to the contents that are dumped out. They are
	handy when using DumpEnv to dump multiple portions of the
	environment.
	"""
	import pprint
	pp = pprint.PrettyPrinter( indent = 2 )
	if key:
		dict = env.Dictionary( key )
	else:
		dict = env.Dictionary()
	if header:
		print header
	pp.pprint( dict )
	if footer:
		print footer
