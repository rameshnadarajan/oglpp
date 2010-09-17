// DisplayDriverConnector - Copyright (C) 2010, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#include "displayDriverConnector/displayDriverConnector.hpp"

#include <cassert>
#include <iostream>
#include <string>
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
}



// PUBLIC
ddc_bool_t ddc_get_primary_display_device_informations( ddc_display_device_info_t * informations )
{
	ddc_bool_t retVal = 0;

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

		if ( vendorIDStr == "1002" )
		{
			informations->vendor = DDC_VENDOR_AMD;
		}
		else if ( vendorIDStr == "10DE" )
		{
			informations->vendor = DDC_VENDOR_NVIDIA;
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
//"\Registry\Machine\System\CurrentControlSet\Control\Video\{DC6A9377-13AD-4946-BBE7-135D2C095758}\0000"
		const std::string deviceKey = dd.DeviceKey;
		const std::string subKeyPath = deviceKey.substr(18); // @todo improves robustness ?
		_ddc_get_informations_from_registry( informations, subKeyPath);
	}

	//
	informations->found = retVal;
	return retVal;
}



void ddc_print_display_device_info( ddc_display_device_info_t * informations )
{
	if ( informations->found )
	{
		std::cout << "Found primary display device" << std::endl;

		//
		std::cout << " Device vendor: " << ddc_get_vendor_string(informations->vendor) << std::endl;

		std::cout << " Device ID: " << informations->deviceID << std::endl;
		std::cout << " Full device ID: " << informations->fullDeviceID << std::endl;

		std::cout << " Monitor name: " << informations->monitorName << std::endl;
		std::cout << " Device name: " << informations->displayAdapterName << std::endl;

		// Versioning
		std::cout << " Driver version: " << informations->driverVersion << std::endl;
		std::cout << " Driver date: " << informations->driverDate << std::endl;

		if ( informations->vendor == DDC_VENDOR_AMD )
		{
			std::cout << " Catalyst version: " << informations->catalystVersion << std::endl;
		}
	}
	else
	{
		std::cout << "Primary display device NOT FOUND" << std::endl;
	}
}



char * ddc_get_vendor_string( ddc_vendor_id_t vendorId )
{
	switch ( vendorId )
	{
		case DDC_VENDOR_AMD:
			return "AMD";

		case DDC_VENDOR_NVIDIA:
			return "NVIDIA";

		default:
		case DDC_VENDOR_UNKNOWN:
			return "UNKNOWN";
	}
}
