// DisplayDriverConnector - Copyright (C) 2010, 2011, Nicolas Papier.
// Distributed under the terms of the GNU Library General Public License (LGPL)
// as published by the Free Software Foundation.
// Author Nicolas Papier

#ifndef _DISPLAYDRIVERCONNECTOR_DISPLAYDRIVERCONNECTOR_HPP
#define _DISPLAYDRIVERCONNECTOR_DISPLAYDRIVERCONNECTOR_HPP

#include "displayDriverConnector/config.hpp"

/** 
 * @defgroup g_ddc displayDriverConnector - Display driver connector
 * 
 * This library provides the needed cross-platform API to access display driver informations and functionalities.
 *
 * \b displayDriverConnector is open source (LGPL).
 */



/**
 * @defgroup g_ddc_type Basic type definitions
 *
 * @ingroup g_ddc
 */
//@{

/**
 * @brief ddc_bool_t is used for boolean values.
 *
 * Returns of type ddc_bool_t will always be either 0 for \c false or non zero for \c true. Just use the value as a boolean condition.
 */
typedef int ddc_bool_t;

/**
 * @brief Enumeration of errors that can occur when using ddc.
 *
 * @todo ddc_status_to_string()
 */
typedef enum _ddc_status_t
{
	DDC_STATUS_SUCCESS,
	DDC_STATUS_ERROR
} ddc_status_t;

/**
 * @brief Vendor identifier enumeration
 *
 * @todo Microsoft
 */
typedef enum _ddc_vendor_id_t
{
	DDC_VENDOR_AMD		= 0x1002,
	DDC_VENDOR_NVIDIA	= 0x10DE,
	DDC_VENDOR_INTEL	= 0x8086,
	DDC_VENDOR_UNKNOWN	= 0,
} ddc_vendor_id_t;

/**
 * @brief Display device informations
 */
typedef struct _ddc_display_device_info_t
{
	ddc_bool_t			found;							///< true if this structure was filled, false otherwise

	ddc_vendor_id_t		vendor;							///< the vendor name

	char				deviceID[5];					///< the device ID (ex: 6898 for Radeon 5870)
	char				fullDeviceID[128];				///< the full device ID (ex: "PCI\VEN_1002&DEV_6898&SUBSYS_0B001002&REV_00")

	char				monitorName[128];				///< a string identifying the monitor name (ex: "\\.\DISPLAY1")
	char				displayAdapterName[128];		///< a description of the display adapter (ex: "ATI Radeon HD 5800 Series")

	// VERSIONING
	char				driverVersion[16];				///< ex: 8.17.11.9745 for NVidia and / 8.762.0.0 for AMD
	int					driverVersionNumber[4];			///< see driverVersion

	char				driverDate[16];					///< ex: 4-3-2010 for NVidia and 8-3-2010 for AMD
	int					driverDateNumber[3];			///< see driverDate

	char				catalystVersion[16];			///< ex: empty for NVidia and 10.8 for AMD
	int					catalystVersionNumber[2];		///< see catalystVersion

	// OPENGL
	char				openglDriverName[32];			///< ex: nvoglv64 for NVidia and atig6pxx.dll for AMD

	// @todo OpenGL support ? see registry OpenGLDriverName

	// DISPLAY DEVICE INFORMATIONS
	int		width;
	int		height;
	int		bpp;
	int		frequency;
} ddc_display_device_info_t;
//@}



/**
 * @defgroup g_ddc_core Core ddc API
 *
 * @ingroup g_ddc
 */
//@{

//extern "C" {

/**
 * @brief Retrieves informations about the primary display device.
 *
 * @param informations		a pointer to a ddc_display_device_info_t structure that receives informations about the display device
 * @return A non-zero value if the function is successful, or zero if the function is unsuccessful.
 */
DDC_API ddc_bool_t ddc_get_primary_display_device_informations( ddc_display_device_info_t * informations );

/**
 * @brief Prints to standard output the data stored in informations structure
 */
DDC_API void ddc_print_display_device_info( ddc_display_device_info_t * informations );


/**
 * @brief Returns the string version of the given vendor id.
 */
DDC_API const char * ddc_get_vendor_string( ddc_vendor_id_t vendorId );

//} // extern "C" {



//@}

#endif //#ifndef _DISPLAYDRIVERCONNECTOR_DISPLAYDRIVERCONNECTOR_HPP
