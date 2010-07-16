# GLE - Copyright (C) 2004, 2005, 2007, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

package glePrototype;
use strict;



##################################################
# Constructor
##################################################
sub new
{
	my $self = {};

	$self->{	PROCNAMETYPEDEF		}	= "";
	$self->{	RETVAL				}	= "";
	$self->{	PROCNAME			}	= "";
	
	$self->{	PARAMS				}	= "";
	$self->{	PARAMS_TYPE			}	= [];
	$self->{	PARAMS_NAME			}	= [];

	bless($self);
	return $self;
}



##################################################
# Method
##################################################
sub procNameTypedef
{
	my $self = shift;

	if (@_)
	{
		$self->{PROCNAMETYPEDEF} = shift;
	}

	return $self->{PROCNAMETYPEDEF};
}



##################################################
# Method
##################################################
sub retVal
{
	my $self = shift;

	if (@_)
	{
		$self->{RETVAL} = shift;
	}

	return $self->{RETVAL};
}



##################################################
# Method
##################################################
sub procName
{
	my $self = shift;

	if (@_)
	{
		$self->{PROCNAME} = shift;
	}

	return $self->{PROCNAME};
}



##################################################
# Method
##################################################
sub params
{
	my $self = shift;

	if (@_)
	{
		## initialize PARAMS
		$self->{PARAMS} = shift;
		#print "params=$self->{PARAMS}\n";
		
		## intialize PARAMS_TYPE and PARAMS_NAME

		## GLenum pname, const GLfloat *param => GLenum pname		const GLfloat *param
		my @params = split(/,/, $self->{PARAMS});

		foreach my $lparam (@params)
		{
			## GLfloat params
			## const GLfloat *params
			## => const GLfloat *param => const GLfloat * param
			$lparam =~ s/\*/\* /g;

			my ($paramType, $paramName) = ($lparam =~ /\s*(.+)\s+(\w+)\s*/ );

			## DEBUG
			#print "paramType=$paramType\n";
			#print "paramName=$paramName\n";

			push @{$self->{ PARAMS_TYPE} }, $paramType;
			push @{$self->{ PARAMS_NAME} }, $paramName;
		}
	}

	return $self->{PARAMS};
}



##################################################
# Method
##################################################
sub getParamsType
{
	my $self = shift;

	return @{$self->{PARAMS_TYPE}};
}



##################################################
# Method
##################################################
sub getParamsName
{
	my $self = shift;

	return @{$self->{PARAMS_NAME}};
}



##################################################
# Method
##################################################
sub getPrototype
{
	my $self = shift;

	my $retVal		= $self->retVal();
	my $procName	= $self->procName();
	my $params		= $self->params();

	my $str	= "$retVal $procName( $params );";

	return $str;
}

1;
#OK
