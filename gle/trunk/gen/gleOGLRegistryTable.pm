# GLE - Copyright (C) 2004, 2005, 2007, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

package gleOGLRegistryTable;
use strict;

# TODO:



##################################################
# Constructor
##################################################
sub new
{
	my $self = {};

	bless($self);
	return $self;
}



##################################################
# Method
##################################################
sub add
{
	my $self			= shift;

	my $extensionName	= shift;
	my $extensionId		= shift;
	my $extensionURL	= "http://www.opengl.org/registry/" . shift;

	# check if name of extension already in hash.
	if ( defined $self->{$extensionName} )
	{
		print "W: extension $extensionName already defined in OpenGL registry table.\n";
	}
	else
	{
		# create new extension object.
		my $strExtension	= "$extensionId|$extensionURL";

		# add it to extensions table.
		$self->{$extensionName} = $strExtension;
	}
}



##################################################
# Method
##################################################
sub exist
{
	my $self			= shift;
	my $extensionName	= shift;

	return defined $self->{$extensionName};
}



##################################################
# Method
##################################################
sub extensionId
{
	my $self			= shift;
	my $extensionName	= shift;

	my @extInfos	= split( /\|/, $self->{$extensionName} );

	return @extInfos[0];
}



##################################################
# Method
##################################################
sub extensionURL
{
	my $self			= shift;
	my $extensionName	= shift;

	my @extInfos	= split( /\|/, $self->{$extensionName} );

	return "@extInfos[1]";
}



##################################################
# Method
##################################################
sub getNames
{
	my $self = shift;

	my @names = keys %$self;

	return @names;
}


1;
#OK
