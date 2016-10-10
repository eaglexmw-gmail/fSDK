/*+@@file@@----------------------------------------------------------------*//*!
 \file		cfg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 16:21:33 2016
 \date		Modified on Sat Jul  2 16:21:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _CFG_INCLUDED_
#define _CFG_INCLUDED_
#if __POCC__ >= 500
#pragma once
#endif
typedef enum _PNP_VETO_TYPE
{
    PNP_VetoTypeUnknown,
    PNP_VetoLegacyDevice,
    PNP_VetoPendingClose,
    PNP_VetoWindowsApp,
    PNP_VetoWindowsService,
    PNP_VetoOutstandingOpen,
    PNP_VetoDevice,
    PNP_VetoDriver,
    PNP_VetoIllegalDeviceRequest,
    PNP_VetoInsufficientPower,
    PNP_VetoNonDisableable,
    PNP_VetoLegacyDriver,
    PNP_VetoInsufficientRights
}   PNP_VETO_TYPE, *PPNP_VETO_TYPE;
#define CM_PROB_NOT_CONFIGURED             (0x00000001)
#define CM_PROB_DEVLOADER_FAILED           (0x00000002)
#define CM_PROB_OUT_OF_MEMORY              (0x00000003)
#define CM_PROB_ENTRY_IS_WRONG_TYPE        (0x00000004)
#define CM_PROB_LACKED_ARBITRATOR          (0x00000005)
#define CM_PROB_BOOT_CONFIG_CONFLICT       (0x00000006)
#define CM_PROB_FAILED_FILTER              (0x00000007)
#define CM_PROB_DEVLOADER_NOT_FOUND        (0x00000008)
#define CM_PROB_INVALID_DATA               (0x00000009)
#define CM_PROB_FAILED_START               (0x0000000A)
#define CM_PROB_LIAR                       (0x0000000B)
#define CM_PROB_NORMAL_CONFLICT            (0x0000000C)
#define CM_PROB_NOT_VERIFIED               (0x0000000D)
#define CM_PROB_NEED_RESTART               (0x0000000E)
#define CM_PROB_REENUMERATION              (0x0000000F)
#define CM_PROB_PARTIAL_LOG_CONF           (0x00000010)
#define CM_PROB_UNKNOWN_RESOURCE           (0x00000011)
#define CM_PROB_REINSTALL                  (0x00000012)
#define CM_PROB_REGISTRY                   (0x00000013)
#define CM_PROB_VXDLDR                     (0x00000014)
#define CM_PROB_WILL_BE_REMOVED            (0x00000015)
#define CM_PROB_DISABLED                   (0x00000016)
#define CM_PROB_DEVLOADER_NOT_READY        (0x00000017)
#define CM_PROB_DEVICE_NOT_THERE           (0x00000018)
#define CM_PROB_MOVED                      (0x00000019)
#define CM_PROB_TOO_EARLY                  (0x0000001A)
#define CM_PROB_NO_VALID_LOG_CONF          (0x0000001B)
#define CM_PROB_FAILED_INSTALL             (0x0000001C)
#define CM_PROB_HARDWARE_DISABLED          (0x0000001D)
#define CM_PROB_CANT_SHARE_IRQ             (0x0000001E)
#define CM_PROB_FAILED_ADD                 (0x0000001F)
#define CM_PROB_DISABLED_SERVICE           (0x00000020)
#define CM_PROB_TRANSLATION_FAILED         (0x00000021)
#define CM_PROB_NO_SOFTCONFIG              (0x00000022)
#define CM_PROB_BIOS_TABLE                 (0x00000023)
#define CM_PROB_IRQ_TRANSLATION_FAILED     (0x00000024)
#define CM_PROB_FAILED_DRIVER_ENTRY        (0x00000025)
#define CM_PROB_DRIVER_FAILED_PRIOR_UNLOAD (0x00000026)
#define CM_PROB_DRIVER_FAILED_LOAD         (0x00000027)
#define CM_PROB_DRIVER_SERVICE_KEY_INVALID (0x00000028)
#define CM_PROB_LEGACY_SERVICE_NO_DEVICES  (0x00000029)
#define CM_PROB_DUPLICATE_DEVICE           (0x0000002A)
#define CM_PROB_FAILED_POST_START          (0x0000002B)
#define CM_PROB_HALTED                     (0x0000002C)
#define CM_PROB_PHANTOM                    (0x0000002D)
#define CM_PROB_SYSTEM_SHUTDOWN            (0x0000002E)
#define CM_PROB_HELD_FOR_EJECT             (0x0000002F)
#define CM_PROB_DRIVER_BLOCKED             (0x00000030)
#define CM_PROB_REGISTRY_TOO_LARGE         (0x00000031)
#define CM_PROB_SETPROPERTIES_FAILED       (0x00000032)
#define CM_PROB_WAITING_ON_DEPENDENCY      (0x00000033)
#define CM_PROB_UNSIGNED_DRIVER            (0x00000034)
#define NUM_CM_PROB_V1                     (0x00000025)
#define NUM_CM_PROB_V2                     (0x00000032)
#define NUM_CM_PROB_V3                     (0x00000033)
#define NUM_CM_PROB_V4                     (0x00000034)
#define NUM_CM_PROB_V5                     (0x00000035)
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define NUM_CM_PROB NUM_CM_PROB_V5
#elif (NTDDI_VERSION >= NTDDI_WS08)
#define NUM_CM_PROB NUM_CM_PROB_V4
#elif (NTDDI_VERSION >= NTDDI_WS03)
#define NUM_CM_PROB NUM_CM_PROB_V3
#elif (NTDDI_VERSION >= NTDDI_WINXP)
#define NUM_CM_PROB NUM_CM_PROB_V2
#elif (NTDDI_VERSION >= WIN2K)
#define NUM_CM_PROB NUM_CM_PROB_V1
#endif
#define DN_ROOT_ENUMERATED (0x00000001)
#define DN_DRIVER_LOADED   (0x00000002)
#define DN_ENUM_LOADED     (0x00000004)
#define DN_STARTED         (0x00000008)
#define DN_MANUAL          (0x00000010)
#define DN_NEED_TO_ENUM    (0x00000020)
#define DN_NOT_FIRST_TIME  (0x00000040)
#define DN_HARDWARE_ENUM   (0x00000080)
#define DN_LIAR            (0x00000100)
#define DN_HAS_MARK        (0x00000200)
#define DN_HAS_PROBLEM     (0x00000400)
#define DN_FILTERED        (0x00000800)
#define DN_MOVED           (0x00001000)
#define DN_DISABLEABLE     (0x00002000)
#define DN_REMOVABLE       (0x00004000)
#define DN_PRIVATE_PROBLEM (0x00008000)
#define DN_MF_PARENT       (0x00010000)
#define DN_MF_CHILD        (0x00020000)
#define DN_WILL_BE_REMOVED (0x00040000)
#define DN_NOT_FIRST_TIMEE  0x00080000
#define DN_STOP_FREE_RES    0x00100000
#define DN_REBAL_CANDIDATE  0x00200000
#define DN_BAD_PARTIAL      0x00400000
#define DN_NT_ENUMERATOR    0x00800000
#define DN_NT_DRIVER        0x01000000
#define DN_NEEDS_LOCKING    0x02000000
#define DN_ARM_WAKEUP       0x04000000
#define DN_APM_ENUMERATOR   0x08000000
#define DN_APM_DRIVER       0x10000000
#define DN_SILENT_INSTALL   0x20000000
#define DN_NO_SHOW_IN_DM    0x40000000
#define DN_BOOT_LOG_PROB    0x80000000
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define DN_NEED_RESTART                 DN_LIAR
#define DN_DRIVER_BLOCKED               DN_NOT_FIRST_TIME
#define DN_LEGACY_DRIVER                DN_MOVED
#define DN_CHILD_WITH_INVALID_ID        DN_HAS_MARK
#elif (NTDDI_VERSION >= NTDDI_WIN2K)
#define DN_NEED_RESTART                 0x00000100
#endif
#define DN_CHANGEABLE_FLAGS (DN_NOT_FIRST_TIME+\
                DN_HARDWARE_ENUM+\
                DN_HAS_MARK+\
                DN_DISABLEABLE+\
                DN_REMOVABLE+\
                DN_MF_CHILD+\
                DN_MF_PARENT+\
                DN_NOT_FIRST_TIMEE+\
                DN_STOP_FREE_RES+\
                DN_REBAL_CANDIDATE+\
                DN_NT_ENUMERATOR+\
                DN_NT_DRIVER+\
                DN_SILENT_INSTALL+\
                DN_NO_SHOW_IN_DM)
#define LCPRI_FORCECONFIG     (0x00000000)
#define LCPRI_BOOTCONFIG      (0x00000001)
#define LCPRI_DESIRED         (0x00002000)
#define LCPRI_NORMAL          (0x00003000)
#define LCPRI_LASTBESTCONFIG  (0x00003FFF)
#define LCPRI_SUBOPTIMAL      (0x00005000)
#define LCPRI_LASTSOFTCONFIG  (0x00007FFF)
#define LCPRI_RESTART         (0x00008000)
#define LCPRI_REBOOT          (0x00009000)
#define LCPRI_POWEROFF        (0x0000A000)
#define LCPRI_HARDRECONFIG    (0x0000C000)
#define LCPRI_HARDWIRED       (0x0000E000)
#define LCPRI_IMPOSSIBLE      (0x0000F000)
#define LCPRI_DISABLED        (0x0000FFFF)
#define MAX_LCPRI             (0x0000FFFF)
#endif
