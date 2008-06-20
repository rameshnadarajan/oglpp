# GLE - Copyright (C) 2004, 2005, 2007, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

package gleStrings;
use strict;

# TODO:



##################################################
# Accessor
##################################################
sub getLicence
{
	my $strLicence = <<EOF;
// GLE - Copyright (C) 2004, 2005, 2007, 2008, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier
EOF

	return $strLicence;
}



##################################################
# Accessor
##################################################
sub getGroups
{
	my $strGroups = <<EOF;
	
/** 
 * \@defgroup g_internalGroups All OpenGL extensions groups.
 * \@ingroup g_gle
 */

EOF

	return $strGroups;
}



##################################################
# Accessor
##################################################
sub getExtensionsClassName
{
	my $strExtensionsClassName = "OpenGLExtensionsGen";

	return $strExtensionsClassName;
}

1;
#OK
