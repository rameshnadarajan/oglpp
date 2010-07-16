# GLE - Copyright (C) 2004, 2005, 2007, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

package gleWrapperGenerator;
use strict;

# TODO:

require gleTokensTable;
use		gleTokensTable;

require gleExtensionsTable;
use		gleExtensionsTable;

require gleExtension;
use		gleExtension;

require gleStrings;
use		gleStrings;



##################################################
# Constructor
##################################################
sub new
{
	my $self = {};

	$self->{	TOKENS_TABLE		}	= undef;
	$self->{	EXTENSIONS_TABLE	}	= undef;

	bless($self);
	return $self;
}



##################################################
# Generate files
##################################################
sub generate
{
	my $self	= shift;
	my $parser	= shift;

	$self->{	TOKENS_TABLE		}	= $parser->getTokensTable();
	$self->{	EXTENSIONS_TABLE	}	= $parser->getExtensionsTable();

	# Variables with filename for generated files.
	my $wrp_h	= "gle_wrapper.h";
	my $wrp_cpp	= "gle_wrapper.cpp";

	open(FH,		">$wrp_h")		or die "Can't open $wrp_h: $!";
	open(FCPP,		">$wrp_cpp")	or die "Can't open $wrp_cpp: $!";
}

1;
#OK
