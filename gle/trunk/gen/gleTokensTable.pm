# GLE - Copyright (C) 2004, 2005, 2007, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

package gleTokensTable;
use strict;

# TODO:
#
# * #define GL_OFFSET_TEXTURE_2D_MATRIX_NV    GL_OFFSET_TEXTURE_MATRIX_NV
#
# * getName should return a list of tokens, because a value could be associated with different token
#	GL_BGRA_EXT                       0x80E1 and GL_BGRA
#
# * owner of token GL_VERSION_1_2 or GL_ATI_vertex_attrib_array_object or .... => partial(this information is in extension object).
#


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
	my $self	= shift;
	my $name	= shift;
	my $value	= shift;

	# check if name of value already in hash.
	print "W: token $name already defined in tokens table.\n"		if defined $self->{$name};

	$self->{$name} = $value;
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
sub getValues
{
	my $self = shift;

	my @values = values %$self;

	return @values;
}



##################################################
# Method
##################################################
sub getValue
{
	my $self = shift;
	my $name = shift;

	my $value = $self->{$name};

	return $value;
}



##################################################
# Method
##################################################
sub getName
{
	my $self	= shift;
	my $value	= shift;

	my %by_value	= reverse %$self;
	my $name		= $by_value{$value};

	return $name;
}

1;
#OK
