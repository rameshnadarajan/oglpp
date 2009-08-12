#!/usr/bin/env perl

# GLE - Copyright (C) 2004, 2005, 2007, 2009, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

use strict;

#@todo stat for each parsed file.

require	gleParser;
use		gleParser;

require	gleExtensionsGenerator;
use		gleExtensionsGenerator;

require	gleWrapperGenerator;
use		gleWrapperGenerator;

### PARSING
#
my $parser = gleParser->new();

$parser->parseOGLRegistry( "OpenGLRegistry.htm" );

#@todo Parse -> Enumerant and Function Registry (http://www.opengl.org/registry/) instead of gl.h for example
$parser->parse( "../include/GL/glext.h" );
$parser->parse( "../include/GL/wglext.h" );
#$parser->parse( "glxext.h" );



### GENERATE FILES(extensions and wrapper).
#
my $extensionsGenerator = gleExtensionsGenerator->new();
$extensionsGenerator->generate( $parser );

#my $wrapperGenerator = gleWrapperGenerator->new();
#$wrapperGenerator->generate( $parser );



### INSTALL
#
print "\nInstall generated files.\n";
system "cp OpenGLExtensionsGen.hpp WrapperGen.hpp ../include/gle";
system "cp OpenGLExtensionsGen.cpp WrapperGen.cpp ../src";
print "Done.\n";



#OK
