// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;;
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->Xapi.1.0.5849.cpp
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * XapiInitProcess
// ******************************************************************
SOOVPA<8> XapiInitProcess_1_0_5849 =
{
    0,  // Large == 0
    8,  // Count == 8

    -1, // Xref Not Saved
    0,  // Xref Not Used

    {
        { 0x22, 0x6A },
        { 0x3E, 0x01 },
        { 0x5E, 0x75 },
        { 0x7E, 0x5E },
        { 0x9E, 0x7D },
        { 0xBE, 0x51 },
        { 0xDE, 0x00 },
        { 0xFE, 0x53 },
    }
};

// ******************************************************************
// * XGetDeviceChanges
// ******************************************************************
SOOVPA<7> XGetDeviceChanges_1_0_5849 =
{
    0,  // Large == 0
    7,  // Count == 7

    -1, // Xref Not Saved
    0,  // Xref Not Used

    {
        { 0x0C, 0x75 },
        { 0x1A, 0x53 },
        { 0x28, 0xF7 },
        { 0x36, 0x56 },
        { 0x44, 0x89 },
        { 0x52, 0xC8 },
        { 0x60, 0x5F },
    }
};

// ******************************************************************
// * GetThreadPriority
// ******************************************************************
SOOVPA<7> GetThreadPriority_1_0_5849 = 
{
    0,  // Large == 0
    7,  // Count == 7

    -1, // Xref Not Saved
    0,  // Xref Not Used

    {
        { 0x0D, 0xFF },
        { 0x16, 0x85 },
        { 0x1F, 0x15 },
        { 0x2A, 0x04 },
        { 0x35, 0xF1 },
        { 0x40, 0x8B },
        { 0x4B, 0xB8 },
    }
};

// ******************************************************************
// * SetThreadPriorityBoost
// ******************************************************************
SOOVPA<7> SetThreadPriorityBoost_1_0_5849 = 
{
    0,  // Large == 0
    7,  // Count == 7

    -1, // Xref Not Saved
    0,  // Xref Not Used

    {
        { 0x07, 0xFF },
        { 0x10, 0xFF },
        { 0x19, 0x20 },
        { 0x22, 0x50 },
        { 0x2C, 0x8B },
        { 0x35, 0x33 },
        { 0x40, 0x33 },
    }
};

// ******************************************************************
// * XGetSectionSize
// ******************************************************************
SOOVPA<5> XGetSectionSize_1_0_5849 = 
{
    0,  // Large == 0
    5,  // Count == 5

    -1, // Xref Not Saved
    0,  // Xref Not Used

    {
        { 0x00, 0x8B },
        { 0x02, 0x24 },
        { 0x04, 0x8B },
        { 0x06, 0x08 },
        { 0x08, 0x04 },
    }
};

// ******************************************************************
// * RaiseException
// ******************************************************************
SOOVPA<7> RaiseException_1_0_5849 = 
{
    0,  // Large == 0
    7,  // Count == 7

    -1, // Xref Not Saved
    0,  // Xref Not Used

    {
        { 0x09, 0x83 },
        { 0x14, 0x8B },
        { 0x1F, 0xC7 },
        { 0x2A, 0x10 },
        { 0x35, 0x89 },
        { 0x40, 0x5F },
        { 0x4B, 0xFF },
    }
};

// ******************************************************************
// * XGetDeviceEnumerationStatus
// ******************************************************************
SOOVPA<7> XGetDeviceEnumerationStatus_1_0_5849 = 
{
    0,  // Large == 0
    7,  // Count == 7

    -1, // Xref Not Saved
    0,  // Xref Not Used

    {
        { 0x04, 0x15 },
        { 0x0A, 0x35 },
        { 0x10, 0x09 },
        { 0x17, 0x00 },
        { 0x1C, 0x46 },
        { 0x25, 0x8B },
        { 0x28, 0xC3 },
    }
};

// ******************************************************************
// * XAPI_1_0_5849
// ******************************************************************
OOVPATable XAPI_1_0_5849[] =
{
    // XapiApplyKernelPatches (* unchanged since 5233 *)
    {
        (OOVPA*)&XapiApplyKernelPatches_1_0_5233,

        XTL::EmuXapiApplyKernelPatches,

        #ifdef _DEBUG_TRACE
        "EmuXapiApplyKernelPatches"
        #endif
    },
    // SetThreadPriority (* unchanged since 3911 *)
    {
        (OOVPA*)&SetThreadPriority_1_0_3911,

        XTL::EmuSetThreadPriority,

        #ifdef _DEBUG_TRACE
        "EmuSetThreadPriority"
        #endif
    },
    // RtlCreateHeap (* unchanged since 5558 *)
    {
        (OOVPA*)&RtlCreateHeap_1_0_5558,

        XTL::EmuRtlCreateHeap,

        #ifdef _DEBUG_TRACE
        "EmuRtlCreateHeap"
        #endif
    },
    // RtlAllocateHeap (* unchanged since 5558 *)
    {
        (OOVPA*)&RtlAllocateHeap_1_0_5558,

        XTL::EmuRtlAllocateHeap,

        #ifdef _DEBUG_TRACE
        "EmuRtlAllocateHeap"
        #endif
    },
    // RtlFreeHeap (* unchanged since 4627 *)
    {
        (OOVPA*)&RtlFreeHeap_1_0_4627,

        XTL::EmuRtlFreeHeap,

        #ifdef _DEBUG_TRACE
        "EmuRtlFreeHeap"
        #endif
    },
    // RtlReAllocateHeap (* unchanged since 4627 *)
    {
        (OOVPA*)&RtlReAllocateHeap_1_0_4627,

        XTL::EmuRtlReAllocateHeap,

        #ifdef _DEBUG_TRACE
        "EmuRtlReAllocateHeap"
        #endif
    },
    // RtlSizeHeap (* unchanged since 5558 *)
    {
        (OOVPA*)&RtlSizeHeap_1_0_5558,

        XTL::EmuRtlSizeHeap,

        #ifdef _DEBUG_TRACE
        "EmuRtlSizeHeap"
        #endif
    },
    // QueryPerformanceCounter (* unchanged since 4361 *)
    {
        (OOVPA*)&QueryPerformanceCounter_1_0_4361,

        XTL::EmuQueryPerformanceCounter,

        #ifdef _DEBUG_TRACE
        "EmuQueryPerformanceCounter"
        #endif
    },
    // QueryPerformanceFrequency (* unchanged since 4361 *)
    {
        (OOVPA*)&QueryPerformanceFrequency_1_0_4361,

        XTL::EmuQueryPerformanceFrequency,

        #ifdef _DEBUG_TRACE
        "EmuQueryPerformanceFrequency"
        #endif
    },
    // XMountUtilityDrive (* unchanged since 4432 *)
    {
        (OOVPA*)&XMountUtilityDrive_1_0_4432,

        XTL::EmuXMountUtilityDrive,

        #ifdef _DEBUG_TRACE
        "EmuXMountUtilityDrive"
        #endif
    },
    // XInitDevices (* unchanged since 5233 *)
    {
        (OOVPA*)&XInitDevices_1_0_5233,

        XTL::EmuXInitDevices,

        #ifdef _DEBUG_TRACE
        "EmuXInitDevices"
        #endif
    },
    // XGetDevices (* unchanged since 1.0.4134 *)
    {
        (OOVPA*)&XGetDevices_1_0_4134,

        XTL::EmuXGetDevices,

        #ifdef _DEBUG_TRACE
        "EmuXGetDevices"
        #endif
    },
    // XInputOpen (* unchanged since 1.0.4361 *)
    {
        (OOVPA*)&XInputOpen_1_0_4361,

        XTL::EmuXInputOpen,

        #ifdef _DEBUG_TRACE
        "EmuXInputOpen"
        #endif
    },
    // XInputGetCapabilities (* unchanged since 5558 *)
    {
        (OOVPA*)&XInputGetCapabilities_1_0_5558,

        XTL::EmuXInputGetCapabilities,

        #ifdef _DEBUG_TRACE
        "EmuXInputGetCapabilities"
        #endif
    },
    // XInputGetState (* unchanged since 5558 *)
    {
        (OOVPA*)&XInputGetState_1_0_5558,

        XTL::EmuXInputGetState,

        #ifdef _DEBUG_TRACE
        "EmuXInputGetState"
        #endif
    },
    // XGetDeviceChanges
    {
        (OOVPA*)&XGetDeviceChanges_1_0_5849,

        XTL::EmuXGetDeviceChanges,

        #ifdef _DEBUG_TRACE
        "EmuXGetDeviceChanges"
        #endif
    },
    /* obsolete?
    // XapiThreadStartup (* unchanged since 1.0.4361 *)
    {
        (OOVPA*)&XapiThreadStartup_1_0_4361,

        XTL::EmuXapiThreadStartup,

        #ifdef _DEBUG_TRACE
        "EmuXapiThreadStartup"
        #endif
    },
    //*/
    // XapiInitProcess
    {
        (OOVPA*)&XapiInitProcess_1_0_5849,

        XTL::EmuXapiInitProcess,

        #ifdef _DEBUG_TRACE
        "EmuXapiInitProcess"
        #endif
    },
    // XapiBootToDash (* unchanged since 1.0.3911 *)
    {
        (OOVPA*)&XapiBootDash_1_0_3911,

        XTL::EmuXapiBootDash,

        #ifdef _DEBUG_TRACE
        "EmuXapiBootDash"
        #endif
    },
	// QueueUserAPC (* unchanged since 3911 *)
	{ 
		(OOVPA*)&QueueUserAPC_1_0_3911,

		XTL::EmuQueueUserAPC,
			
		#ifdef _DEBUG_TRACE
		"EmuQueueUserAPC"
		#endif
	},
	// GetThreadPriority
    {
        (OOVPA*)&GetThreadPriority_1_0_5849,
        XTL::EmuGetThreadPriority,

        #ifdef _DEBUG_TRACE
        "GetThreadPriority"
        #endif
    },
    // SetThreadPriorityBoost
    {
        (OOVPA*)&SetThreadPriorityBoost_1_0_5849,
        XTL::EmuSetThreadPriorityBoost,

        #ifdef _DEBUG_TRACE
        "SetThreadPriorityBoost"
        #endif
    },
    // GetThreadPriorityBoost
    /*{
        (OOVPA*)&GetThreadPriorityBoost_1_0_5849,
        XTL::EmuGetThreadPriorityBoost,

        #ifdef _DEBUG_TRACE
        "GetThreadPriorityBoost"
        #endif
    },*/
	// XGetSectionHandleA (* unchanged since 4134 *)
	{
		(OOVPA*)&XGetSectionHandleA_1_0_4134, 
			
		XTL::EmuXGetSectionHandleA,

		#ifdef _DEBUG_TRACE
		"EmuXGetSectionHandleA"
		#endif
	},
	// XLoadSectionByHandle (* unchanged since 4134 *)
	{
		(OOVPA*)&XLoadSectionByHandle_1_0_4134, 
			
		XTL::EmuXLoadSectionByHandle,

		#ifdef _DEBUG_TRACE
		"EmuXLoadSectionByHandle"
		#endif
	},
	// XFreeSectionByHandle (* unchanged since 4134 *)
	{
		(OOVPA*)&XFreeSectionByHandle_1_0_4134, 
			
		XTL::EmuXFreeSectionByHandle,

		#ifdef _DEBUG_TRACE
		"EmuXFreeSectionByHandle"
		#endif
	},
	// XGetSectionSize
    {
        (OOVPA*)&XGetSectionSize_1_0_5849,
        XTL::EmuXGetSectionSize,

        #ifdef _DEBUG_TRACE
        "XGetSectionSize"
        #endif
    },
	// RaiseException
    {
        (OOVPA*)&RaiseException_1_0_5849,
        XTL::EmuRaiseException,

        #ifdef _DEBUG_TRACE
        "RaiseException"
        #endif
    },
	// XLaunchNewImageA (* unchanged since 5558 *)
    {
        (OOVPA*)&XLaunchNewImageA_1_0_5558,
        XTL::EmuXLaunchNewImage,

        #ifdef _DEBUG_TRACE
        "XLaunchNewImageA"
        #endif
    },
	// XInputSetState (* unchanged since 5233 *)
    {
        (OOVPA*)&XInputSetState_1_0_5233,

        XTL::EmuXInputSetState,

        #ifdef _DEBUG_TRACE
        "EmuXInputSetState"
        #endif
    },
	// XGetDeviceEnumerationStatus
	{
		(OOVPA*)&XGetDeviceEnumerationStatus_1_0_5849,
		XTL::EmuXGetDeviceEnumerationStatus,

		#ifdef _DEBUG_TRACE
		"EmuXGetDeviceEnumerationStatus"
		#endif
	},
};

// ******************************************************************
// * XAPI_1_0_5849_SIZE
// ******************************************************************
uint32 XAPI_1_0_5849_SIZE = sizeof(XAPI_1_0_5849);
