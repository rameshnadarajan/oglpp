# GLE - Copyright (C) 2004, 2005, 2007, 2009, Nicolas Papier.
# Distributed under the terms of the GNU Library General Public License (LGPL)
# as published by the Free Software Foundation.
# Author Nicolas Papier

package gleParser;
use strict;

require	gleTokensTable;
use		gleTokensTable;

require	gleExtensionsTable;
use		gleExtensionsTable;

require	gleOGLRegistryTable;
use		gleOGLRegistryTable;

### TODO :
#
#	* FILE_DATE, FILE_VERSION not properly used when multiple files are parse.



sub get_stamp
{
	my $now_string = gmtime;

	return "// This file was generated at $now_string with gle, please do not modify.\n";
}



##################################################
# Constructor
##################################################
sub new
{
	my $self = {};

	$self->{	STAMP					}	= get_stamp();

	$self->{	FILE_DATE			}	= "no fileDate found";
	$self->{	FILE_VERSION		}	= "no fileVersion found";

	$self->{	TOKENS_TABLE		}	= gleTokensTable->new();
	$self->{	EXTENSIONS_TABLE	}	= gleExtensionTable->new();
	$self->{	OGLREGISTRY_TABLE	}	= gleOGLRegistryTable->new();

	$self->{	FUNC_COUNT			}	= 0;

	bless($self);
	return $self;
}



##################################################
# Method
##################################################
sub getStamp
{
	my $self = shift;

	return $self->{STAMP};
}



##################################################
# Method
##################################################
sub getFileDate
{
	my $self = shift;

	return $self->{FILE_DATE};
}



##################################################
# Method
##################################################
sub getFileVersion
{
	my $self = shift;

	return $self->{FILE_VERSION};
}



##################################################
# Method
##################################################
sub getTokensTable
{
	my $self = shift;

	return $self->{TOKENS_TABLE};
}



##################################################
# Method
##################################################
sub getExtensionsTable
{
	my $self = shift;

	return $self->{EXTENSIONS_TABLE};
}



##################################################
# Method
##################################################
sub getOGLRegistryTable
{
	my $self = shift;

	return $self->{OGLREGISTRY_TABLE};
}



##################################################
# Method
##################################################
sub getFuncCount
{
	my $self = shift;

	return $self->{FUNC_COUNT};
}



##################################################
# Method PARSER
##################################################
sub parse
{
	my $self = shift;
	my $file = shift;

	# Open file to parse
	open(INFILE,	$file)		or die "Can't open $file: $!";
	print "Start parsing $file :\n";
	print "---------------------\n";

	my $last_defined_name = "";	### #ifndef name
	my $stop = 0;
	until ( $stop == 1 )
	{
		my $line  = <INFILE>;

		if ( $line =~ /(gl|glx|wgl)ext.h last updated/ )
		{
			### /* glext.h last updated 2003/5/9 */
			### /* glxext.h last updated 2002/03/22 */
			### /* wglext.h last updated 2002/03/22 */
			###																								not for gl.h

			$self->{FILE_DATE} = $line;
			print $line;
		}
		elsif ( $line =~ /^#define (GL_GL|GLX_GLX|WGL_WGL)EXT_VERSION / )
		{
			### #define GL_GLEXT_VERSION 18
			### #define GLX_GLXEXT_VERSION 5
			### #define WGL_WGLEXT_VERSION 4
			###																								not for gl.h

			$self->{FILE_VERSION} = (split( / /, $line))[2];
			print $line;
		}
		elsif ( $line =~ /^#ifndef (GL_|GLX_|WGL_)/ )
		{
			$last_defined_name = (split(/^#ifndef\s+/, $line))[1];

			# remove all whitespace.
			$last_defined_name =~ s/\s//g;

			my $exist;
			$exist = $self->{EXTENSIONS_TABLE}->exist( $last_defined_name );

			if ( $exist )
			{
				# debug
				print "\nStill find section :\t\t$last_defined_name\n";
			}
			else
			{
				print "\nFind new section :\t\t$last_defined_name\n";

				$self->{EXTENSIONS_TABLE}->add( $last_defined_name );
			}
		}
		elsif ( $last_defined_name ne "" )
		{
			# parser in a #ifndef section.

			if ( $line =~ /#define $last_defined_name\s+1/ ) ### #define GL_VERSION_1_2 1
			{
				### PROTOTYPES SECTION

				### #ifndef GL_VERSION_1_2
				### #define GL_VERSION_1_2 1
				### #ifdef GL_GLEXT_PROTOTYPES
				### #GLAPI void APIENTRY glBlendColor (GLclampf, GLclampf, GLclampf, GLclampf);
				### #endif /* GL_GLEXT_PROTOTYPES */
				### #typedef void (APIENTRYP PFNGLBLENDCOLORPROC) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
				### #endif

				### #ifndef GL_EXT_subtexture
				### #define GL_EXT_subtexture 1
				### #ifdef GL_GLEXT_PROTOTYPES
				### GLAPI void APIENTRY glTexSubImage1DEXT (GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);
				### #endif /* GL_GLEXT_PROTOTYPES */
				### typedef void (APIENTRYP PFNGLTEXSUBIMAGE1DEXTPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
				### #endif

				### #ifndef GL_ARB_texture_mirror_repeat
				### #define GL_ARB_texture_mirror_repeat 1
				### #endif

				# debug
				print "Start of extracting prototypes.\n";

				my $ifdef_count = 1;
				my %prototypes;
				while ( $ifdef_count > 0 )
				{
					if ( $line =~ /#ifdef (GL_GLEXT|GLX_GLXEXT|WGL_WGLEXT)_PROTOTYPES/ )
					{
						$ifdef_count++;
					}
					elsif ( $line =~ /#endif/ )
					{
						$ifdef_count--;
					}
					elsif (	($line =~ /GLAPI|APIENTRY|APYENTRYP/) or

							($line =~ /WINAPI/) or

							($line =~ /extern.*glX\w+\s*\(.*\);/) or
							($line =~ /typedef.*\(\s*\*\s*PFNGLX\w+\).*;/) ############################   glxext.h TBT
						)
					{
						### #ifndef GL_ARB_point_parameters
						### #define GL_ARB_point_parameters 1
						### #ifdef GL_GLEXT_PROTOTYPES
						### GLAPI void APIENTRY glPointParameterfARB (GLenum, GLfloat);
						### #endif /* GL_GLEXT_PROTOTYPES */
						### typedef void (APIENTRYP PFNGLPOINTPARAMETERFARBPROC) (GLenum pname, GLfloat param);
						### #endif

						### #ifndef WGL_ARB_extensions_string
						### #define WGL_ARB_extensions_string 1
						### #ifdef WGL_WGLEXT_PROTOTYPES
						### extern const char * WINAPI wglGetExtensionsStringARB (HDC);
						### #endif /* WGL_WGLEXT_PROTOTYPES */
						### typedef const char * (WINAPI * PFNWGLGETEXTENSIONSSTRINGARBPROC) (HDC hdc);
						### #endif

						### #ifndef GLX_MESA_release_buffers
						### #define GLX_MESA_release_buffers 1
						### #ifdef GLX_GLXEXT_PROTOTYPES
						### extern Bool glXReleaseBuffersMESA (Display *, GLXDrawable);
						### #endif /* GLX_GLXEXT_PROTOTYPES */
						### typedef Bool ( * PFNGLXRELEASEBUFFERSMESAPROC) (Display *dpy, GLXDrawable drawable);
						### #endif

						# debug
						#print "Found $line";

						# variable used to decompose proto.
						my $procTypedef;
						my $retVal;
						my $procName;
						my $params;

						my $typeLine = "NONE"; # NONE, PROTO or TYPEDEF.

						### Protos in glext.h ###
						#
						if ( ($retVal, $procName, $params) =
								($line =~ /GLAPI\s+(.+)\s+APIENTRY\s+(\w+)\s*\((.+)\);/)
							)
						{
							### GLAPI void APIENTRY glPointParameterfARB (GLenum, GLfloat);
							$typeLine = "PROTO";
							# debug
							#print "glext:proto1:$retVal $procName $params\n";
						}
						elsif ( ($retVal, $procName, $params) =
									($line =~ /typedef\s+(.+)\s*\(APIENTRY\s*\*\s*(\w+)\)\s*\((.+)\);/)
								)
						{
							### typedef void (APIENTRY * PFNGLPOINTPARAMETERFARBPROC) (GLenum pname, GLfloat param);

							$typeLine = "TYPEDEF";

							# debug
							#print "glext:proto2:$retVal $procName $params\n";
						}
						elsif ( ($retVal, $procName, $params) =
									($line =~ /typedef\s+(.+)\s*\(APIENTRYP\s*(\w+)\)\s*\((.+)\);/)
								)
						{
							### typedef void (APIENTRYP PFNGLPOINTPARAMETERFARBPROC) (GLenum pname, GLfloat param);

							$typeLine = "TYPEDEF";

							# debug
							#print "glext:proto2:$retVal $procName $params\n";
						}
						### Protos in wglext.h ###
						#
						elsif ( ($retVal, $procName, $params) =
									($line =~ /extern\s+(.+)\s*WINAPI\s+(\w+)\s*\((.+)\);/ )
								)
						{
							### extern const char * WINAPI wglGetExtensionsStringARB (HDC);
							$typeLine = "PROTO";
							# debug
							#print "wglext:proto1:$retVal $procName $params\n";
						}
						elsif ( ($retVal, $procName, $params) =
									( $line =~ /typedef\s+(.+)\s*\(WINAPI\s*\*\s*(\w+)\)\s*\((.+)\);/ )
								)
						{
							### typedef const char * (WINAPI * PFNWGLGETEXTENSIONSSTRINGARBPROC) (HDC hdc);
							$typeLine = "TYPEDEF";

							# debug
							#print "wglext:proto2:$retVal $procName $params\n";
						}

						### Protos in glxext.h ### ######################################################### TBT
						#
						elsif ( ($retVal, $procName, $params) =
									( $line =~ /extern\s+(.+)\s+(glX\w+)\s*\((.*)\);/ )
								)
						{
							### extern Bool glXReleaseBuffersMESA (Display *, GLXDrawable);
							$typeLine = "PROTO";
							# debug
							#print "glxext:proto1:$retVal $procName $params\n";
						}
						elsif ( ($retVal, $procName, $params) =
									( $line =~ /typedef\s+(.+)\s*\(\s*\*\s*(PFNGLX\w+)\)\s*\((.*)\);/ )
								)
						{
							### typedef Bool ( * PFNGLXRELEASEBUFFERSMESAPROC) (Display *dpy, GLXDrawable drawable);
							$typeLine = "TYPEDEF";

							# debug
							#print "glxext:proto2:$retVal $procName $params\n";
						}
						else
						{
							print "Ignore(in protos extraction): $line";
						}

						if ( $typeLine eq "PROTO" )
						{
							my $proto = glePrototype->new();
							$proto->procNameTypedef( "\UPFN$procName"."PROC" );
							$proto->retVal( $retVal );
							$proto->procName( $procName );
							## $proto->params( $params ); not complete.

							%prototypes->{$proto->procNameTypedef()} = $proto;
						}
						elsif ( $typeLine eq "TYPEDEF" )
						{
							# get current extension.
							my $extension = $self->{EXTENSIONS_TABLE}->extension( $last_defined_name );

							# update prototype params(this on is more complete(add parameters names).
							my $prototype = %prototypes->{$procName};
							$prototype->params( $params );

							# add the complete prototype to the extension.
							$extension->addPrototype( $prototype );
						}
						elsif ( $typeLine eq "NONE" )
						{
							print "Ignore: $line(see NONE in parser.pm)\n";
						}
						else
						{
							print "E and Ignore: $line(typeLine neq NONE in parser.pm)\n";
						}
					}
					else
					{
						print "Ignore(in protos): $line";
					}
					$line = <INFILE>;
				}

				my $prototypes_count = keys%prototypes;
				print "end of extracting prototypes, found $prototypes_count prototypes.\n";

				$self->{FUNC_COUNT} += $prototypes_count;
				$last_defined_name = "";
			}
			elsif ( $line !~ /^#define $last_defined_name\s+1/ )  # ?????????????????????????????????????????????????????????????????????????????????????????????????????????????? ICICICI
			{
				### #ifndef GL_VERSION_1_2
				### #define GL_UNSIGNED_BYTE_3_3_2            0x8032
				### #endif

				### #ifndef GL_EXT_subtexture
				### #endif

				# debug
				#print "Start of extracting token.\n";

				my $token_count = 0;

				while ( $line !~ /#endif/ )
				{
					# extract token name.
					my $tokenname	= (split(/ /, $line))[1];

					# extract token value.
					my $tokenvalue	= (split(/${tokenname}\s+/, $line))[1];
					my $tokenvalue2;

					if ( $tokenvalue =~ /^0/ ) ##########################################???#define GL_INDEX_ARRAY_LIST_IBM           103073
					{
						$tokenvalue2 = oct($tokenvalue);
					}
					else
					{
						print "E:token value($tokenname $tokenvalue) is not a value(TODO).\n"; ###??????????????????????????????
						$tokenvalue2 = 0;
					}

					# debug
					# print "found token:$tokenname $tokenvalue2,$tokenvalue";

					# add token to token table.
					#$self->{TOKENS_TABLE}->add( $tokenname, $tokenvalue2 ); ########################### uncomment????

					# add token to extension.
					my $extension = $self->{EXTENSIONS_TABLE}->extension( $last_defined_name );
					#$extension->addTokenName( $tokenname ); ########################################### uncomment????

					$token_count++;

					$line = <INFILE>;
				}

				#print "end of extracting token, found $token_count.\n";
				$last_defined_name = "";
			}
			else
			{
				print "Ignore: $line";
			}
		}
		else
		{
			print "Ignore: $line";
		}

		if ( eof(INFILE) )
		{
			$stop = 1;
		}
	}
}



##################################################
# Method to parse OpenGL extension registry (the html file)
##################################################
sub parseOGLRegistry
{
	my $self = shift;
	my $file = shift;

	# Open file to parse
	open(INFILE,	$file)		or die "Can't open $file: $!";

	print "Start parsing $file :\n";
	print "---------------------\n";

	my $stop = 0;
	until ( $stop == 1 )
	{
		my $line = <INFILE>;

		if ( $line =~ /<ol>/ )
		{
			# Start a list of extensions.
			my $id;
			while ( ($line = <INFILE>) !~ /<\/ol>/ )
			{
#<li value=1> <a href="specs/ARB/multitexture.txt">GL_ARB_multitexture</a>
#</li>

#<li value=5> <a href="specs/ARB/multisample.txt">GL_ARB_multisample</a>
#     <br> <a href="specs/ARB/multisample.txt">GLX_ARB_multisample</a>
#     <br> <a href="specs/ARB/multisample.txt">WGL_ARB_multisample</a>
#</li>

				if ( $line =~ /\s*<li\s+value="?(.+)"?>\s*<a\s+href\s*=\s*"(.+)">\s*(.+)<\/a>/ ) # see previous regex
				{
					$id = $1;
					my $name = $3;
					my $url = $2;
					$self->getOGLRegistryTable()->add( $name, $id, $url );
					print "$id|$name|$url\n";
				}
				elsif ( $line =~ /.*<a\s+href\s*=\s*"(.+)">\s*(.+)<\/a>\s*/ ) # see previous regex
				{
					my $name = $2;
					my $url = $1;
					$self->getOGLRegistryTable()->add( $name, $id, $url );
					print "$id|$name|$url\n";
				}
				else
				{
					print "Ignore:parseOGLregistry: $line";
				}
			}
		}
		else
		{
			# debug
			print "Ignore:parseOGLregistry: $line";
		}

		if ( eof(INFILE) )
		{
			$stop = 1;
		}
	}
}

1;
