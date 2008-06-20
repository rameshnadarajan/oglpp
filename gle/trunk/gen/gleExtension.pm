# GLE - Copyright (C) 2004, 2005, 2007, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

package gleExtension;
use strict;

require	glePrototype;
use		glePrototype;

# TODO:



##################################################
# Constructor
##################################################
sub new
{
	my $self = {};

	$self->{	NAME		}	= undef;

	$self->{	TOKENS		}	= [];
	$self->{	PROTOTYPES	}	= [];

	bless($self);
	return $self;
}



##################################################
# Method
##################################################
sub name
{
	my $self	= shift;

	if (@_)
	{
		$self->{NAME} = shift
	}

	return $self->{NAME};
}



##################################################
# Method
##################################################
sub getTokens
{
	my $self	= shift;

	return @{$self->{TOKENS}};
}



##################################################
# Method
##################################################
sub getPrototypes
{
	my $self	= shift;

	return @{$self->{PROTOTYPES}};
}



##################################################
# Method
##################################################
sub addTokenName
{
	my $self			= shift;
	my $tokenName	= shift;

	push @{$self->{TOKENS}}, $tokenName;
}



##################################################
# Method
##################################################
sub addPrototype
{
	my $self		= shift;
	my $proto	= shift;

	push @{$self->{PROTOTYPES}}, $proto;
}



##################################################
# Returns the group owner of this extension(GL.ARB, WGL.ARB.....).
##################################################
sub getGroup
{
	my $self	= shift;

	my ($group, $subgroup )	= ($self->name() =~ /([^_]+)_([^_]+)/);
	my $strGroup = $group."_".$subgroup;

	return $strGroup;
}



1;
#OK
