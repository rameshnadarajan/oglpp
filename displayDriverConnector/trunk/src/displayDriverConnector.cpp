// DisplayDriverConnector - Copyright (C) 2010, 2011, 2014, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "displayDriverConnector/displayDriverConnector.hpp"

#include <cassert>
#include <cstring>
#include <iostream>
#include <sstream>
#include <vector>

#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__)
#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>	// for EnumDisplayDevices
#endif

#include "displayDriverConnector/helpers.hpp"



/**
 * @brief Fills the given informations structure using windows registry HKEY_LOCAL_MACHINE/subkey
 */
void _ddc_get_informations_from_registry( ddc_display_device_info_t * informations, std::string subKey )
{
	// driverVersionStr = 8.17.11.9745 for NVidia and / 8.762.0.0 for AMD
	const std::string driverVersionStr		= get_string_from_registry( subKey, "DriverVersion" );
	std::vector<std::string> driverVersion	= split_string(driverVersionStr, '.');

	strncpy( informations->driverVersion, driverVersionStr.c_str(), sizeof(informations->driverVersion) );
	copy( informations->driverVersionNumber, driverVersion, 4 );

	// 4-3-2010 for NVidia and 8-3-2010 for AMD
	const std::string driverDateStr			= get_string_from_registry( subKey, "DriverDate" );
	std::vector<std::string> driverDate		= split_string(driverDateStr, '-');

	strncpy( informations->driverDate, driverDateStr.c_str(), sizeof(informations->driverDate) );
	copy( informations->driverDateNumber, driverDate, 3 );

	// empty for NVidia and 10.8 for AMD
	const std::string catalystVersionStr		= get_string_from_registry( subKey, "Catalyst_Version" );
	std::vector<std::string> catalystVersion	= split_string(catalystVersionStr, '.');

	strncpy( informations->catalystVersion, catalystVersionStr.c_str(), sizeof(informations->catalystVersion) );
	copy( informations->catalystVersionNumber, catalystVersion, 2 );

	// OpenGLDriverName
	// nvoglv64 for NVidia and atig6pxx.dll for AMD
	const std::string openglDriverNameStr		= get_string_from_registry( subKey, "OpenGLDriverName" );

	strncpy( informations->openglDriverName, openglDriverNameStr.c_str(), sizeof(informations->openglDriverName) );
}



// PUBLIC
ddc_bool_t ddc_get_primary_display_device_informations( ddc_display_device_info_t * informations )
{
	ddc_bool_t retVal = 0;

#ifdef _WIN32
	// Locate primary display device
	DISPLAY_DEVICE dd;
	dd.cb = sizeof(DISPLAY_DEVICE);

	for( int i = 0; EnumDisplayDevices(NULL, i, &dd, 0) ; ++i )
	{
		if ( dd.StateFlags & DISPLAY_DEVICE_PRIMARY_DEVICE )
		{
			// DeviceName "\\.\DISPLAY1"
			// DeviceString "ATI Radeon HD 5800 Series"
			// DeviceID	"PCI\VEN_1002&DEV_6898&SUBSYS_0B001002&REV_00"
			// DeviceKey "\Registry\Machine\System\CurrentControlSet\Control\Video\{DC6A9377-13AD-4946-BBE7-135D2C095758}\0000"
			break;
		}
	}

	// Checks result
	const std::string fullDeviceID = dd.DeviceID;
	if ( fullDeviceID != "" )
	{
		retVal = 1;

		// VENDOR ID
// @todo improves robustness ?
//char *vendorID = strstr(dev.DeviceID, "VEN_");
//char *deviceID = strstr(dev.DeviceID, "DEV_");
		const std::string vendorIDStr = fullDeviceID.substr(8, 4);

// @see http://www.pcidatabase.com/vendors.php?sort=id
		if ( vendorIDStr == "1002" )
		{
			informations->vendor = DDC_VENDOR_AMD;
		}
		else if ( vendorIDStr == "10DE" )
		{
			informations->vendor = DDC_VENDOR_NVIDIA;
		}
		else if ( vendorIDStr == "8086" )
		{
			informations->vendor = DDC_VENDOR_INTEL;
		}
		else
		{
			informations->vendor = DDC_VENDOR_UNKNOWN;
		}

		// DEVICE ID and FULL DEVICE ID
		strncpy( informations->deviceID, fullDeviceID.substr(17, 4).c_str() + '\0', sizeof(informations->deviceID) );
		strncpy( informations->fullDeviceID, dd.DeviceID, sizeof(informations->fullDeviceID) );

		// MONITOR AND DISPLAY ADAPTER NAME
		strncpy( informations->monitorName, dd.DeviceName, sizeof(informations->monitorName) );
		strncpy( informations->displayAdapterName, dd.DeviceString, sizeof(informations->displayAdapterName) );

		// DRIVER VERSIONING INFORMATIONS
//HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Video\{DC6A9377-13AD-4946-BBE7-135D2C095758}\0000
		const std::string deviceKey = dd.DeviceKey;
		const std::string subKeyPath = deviceKey.substr(18); // @todo improves robustness ?
		_ddc_get_informations_from_registry( informations, subKeyPath);

		// DISPLAY DEVICE INFORMATIONS
		// Find the current device mode
		DEVMODE dmode;
		memset(&dmode, 0, sizeof(DEVMODE));
		dmode.dmSize = sizeof(DEVMODE);

		const BOOL retValEDS = EnumDisplaySettings( dd.DeviceName, ENUM_CURRENT_SETTINGS, &dmode);
		if ( retValEDS )
		{
			informations->width		= dmode.dmPelsWidth;
			informations->height	= dmode.dmPelsHeight;
			informations->bpp		= dmode.dmBitsPerPel;
			informations->frequency	= dmode.dmDisplayFrequency;
		}
		else
		{
			informations->width		= 0;
			informations->height	= 0;
			informations->bpp		= 0;
			informations->frequency	= 0;
		}
	}
#elif __MACOSX__
#else // POSIX
#endif

	//
	informations->found = retVal;
	return retVal;
}



const std::string ddc_get_display_device_info( ddc_display_device_info_t * informations )
{
	std::ostringstream ssStr;

	if ( informations->found )
	{
		ssStr << "Found primary display device" << std::endl;

		//
		ssStr << " Device vendor: " << ddc_get_vendor_string(informations->vendor) << std::endl;

		ssStr << " Device ID: " << informations->deviceID << std::endl;
		ssStr << " Full device ID: " << informations->fullDeviceID << std::endl;

		ssStr << " Monitor name: " << informations->monitorName << std::endl;
		ssStr << " Device name: " << informations->displayAdapterName << std::endl;

		// Versioning
		ssStr << " Driver version: " << informations->driverVersion << std::endl;
		ssStr << " Driver date: " << informations->driverDate << std::endl;

		if (	(informations->vendor == DDC_VENDOR_AMD) &&
				(strlen(informations->catalystVersion) > 0) )
		{
			ssStr << " Catalyst version: " << informations->catalystVersion << std::endl;
		}

		// OpenGL
		ssStr << " OpenGL: " << informations->openglDriverName << std::endl;

		// Display device
		ssStr << "Graphics mode : " << informations->width << "x" << informations->height;
		ssStr << "x" << informations->bpp << " " << informations->frequency << " Hz" << std::endl;
	}
	else
	{
		ssStr << "Primary display device NOT FOUND" << std::endl;
	}

	return ssStr.str();
}



void ddc_print_display_device_info( ddc_display_device_info_t * informations )
{
	std::cout << ddc_get_display_device_info(informations) << std::endl;
}



const char * ddc_get_vendor_string( ddc_vendor_id_t vendorId )
{
	switch ( vendorId )
	{
		case DDC_VENDOR_AMD:
			return "AMD";

		case DDC_VENDOR_NVIDIA:
			return "NVIDIA";

		case DDC_VENDOR_INTEL:
			return "INTEL";

		default:
		case DDC_VENDOR_UNKNOWN:
			return "UNKNOWN";
	}
}
