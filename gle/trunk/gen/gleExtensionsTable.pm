# GLE - Copyright (C) 2004, 2005, 2007, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

package gleExtensionTable;
use strict;

require	gleExtension;
use		gleExtension;

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

	# check if name of extension already in hash.
	if ( defined $self->{$extensionName} )
	{
		print "W: extension $extensionName already defined in extension table.\n";
	}
	else
	{
		# create new extension object.
		my $extensionObj	= gleExtension->new();
		$extensionObj->name( $extensionName );

		# add it to extensions table.
		$self->{$extensionName} = $extensionObj;
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
sub extension
{
	my $self			= shift;
	my $extensionName	= shift;

	return $self->{$extensionName};
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



##################################################
# Method
##################################################
sub extensions
{
	my $self = shift;

	my @extensions = values %$self;

	return @extensions;
}



##################################################
# Find groups for sorting extensions (GL.ARB, GL.NV...).
##################################################
sub getGroups
{
	my $self = shift;

	my %extensions_groups;
	foreach my $extension ($self->extensions())
	{
		my $strGroup = $extension->getGroup();

		%extensions_groups->{$strGroup} = "";
	}

	my @groups = keys %extensions_groups;
	push @groups, "Not_in_OpenGL_Extension_Registry";

	return @groups;
}



##################################################
# Find sorted groups for sorting extensions (GL.ARB, GL.NV...).
##################################################
sub getSortedGroups
{
	my $self = shift;

	return sort $self->getGroups();
}


1;
#OK
