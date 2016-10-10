/*+@@file@@----------------------------------------------------------------*//*!
 \file		RegStr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 22:40:31 2016
 \date		Modified on Sat Sep  3 22:40:31 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_REGSTR
#define _INC_REGSTR
#if __POCC__ >= 500
#pragma once
#endif
#define REGSTR_KEY_CLASS        TEXT("Class")
#define REGSTR_KEY_CONFIG       TEXT("Config")
#define REGSTR_KEY_ENUM         TEXT("Enum")
#define REGSTR_KEY_ROOTENUM     TEXT("Root")
#define REGSTR_KEY_BIOSENUM     TEXT("BIOS")
#define REGSTR_KEY_ACPIENUM     TEXT("ACPI")
#define REGSTR_KEY_PCMCIAENUM   TEXT("PCMCIA")
#define REGSTR_KEY_PCIENUM      TEXT("PCI")
#define REGSTR_KEY_VPOWERDENUM  TEXT("VPOWERD")
#ifndef NEC_98
#define REGSTR_KEY_ISAENUM      TEXT("ISAPnP")
#define REGSTR_KEY_EISAENUM     TEXT("EISA")
#else
#define REGSTR_KEY_ISAENUM      TEXT("C98PnP")
#define REGSTR_KEY_EISAENUM     TEXT("NESA")
#endif
#define REGSTR_KEY_LOGCONFIG    TEXT("LogConfig")
#define REGSTR_KEY_SYSTEMBOARD  TEXT("*PNP0C01")
#define REGSTR_KEY_APM          TEXT("*PNP0C05")
#define REGSTR_KEY_INIUPDATE    TEXT("IniUpdate")
#define REG_KEY_INSTDEV         TEXT("Installed")
#define REGSTR_KEY_DOSOPTCDROM  TEXT("CD-ROM")
#define REGSTR_KEY_DOSOPTMOUSE  TEXT("MOUSE")
#define REGSTR_KEY_KNOWNDOCKINGSTATES TEXT("Hardware Profiles")
#define REGSTR_KEY_DEVICEPARAMETERS   TEXT("Device Parameters")
#define REGSTR_DEFAULT_INSTANCE          TEXT("0000")
#define REGSTR_PATH_MOTHERBOARD          REGSTR_KEY_SYSTEMBOARD TEXT("\\") REGSTR_DEFAULT_INSTANCE
#define REGSTR_PATH_SETUP                TEXT("Software\\Microsoft\\Windows\\CurrentVersion")
#define REGSTR_PATH_DRIVERSIGN           TEXT("Software\\Microsoft\\Driver Signing")
#define REGSTR_PATH_NONDRIVERSIGN        TEXT("Software\\Microsoft\\Non-Driver Signing")
#define REGSTR_PATH_DRIVERSIGN_POLICY    TEXT("Software\\Policies\\Microsoft\\Windows NT\\Driver Signing")
#define REGSTR_PATH_NONDRIVERSIGN_POLICY TEXT("Software\\Policies\\Microsoft\\Windows NT\\Non-Driver Signing")
#define REGSTR_PATH_PIFCONVERT           TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\PIFConvert")
#define REGSTR_PATH_MSDOSOPTS            TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\MS-DOSOptions")
#define REGSTR_PATH_NOSUGGMSDOS          TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\NoMSDOSWarn")
#define REGSTR_PATH_NEWDOSBOX            TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\MS-DOSSpecialConfig")
#define REGSTR_PATH_RUNONCE              TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\RunOnce")
#define REGSTR_PATH_RUNONCEEX            TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\RunOnceEx")
#define REGSTR_PATH_RUN                  TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Run")
#define REGSTR_PATH_RUNSERVICESONCE      TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\RunServicesOnce")
#define REGSTR_PATH_RUNSERVICES          TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\RunServices")
#define REGSTR_PATH_EXPLORER             TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Explorer")
#define REGSTR_PATH_PROPERTYSYSTEM       TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\PropertySystem")
#define REGSTR_PATH_DETECT               TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Detect")
#define REGSTR_PATH_APPPATHS             TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\App Paths")
#define REGSTR_PATH_UNINSTALL            TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall")
#define REGSTR_PATH_REALMODENET          TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Network\\Real Mode Net")
#define REGSTR_PATH_NETEQUIV             TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Network\\Equivalent")
#define REGSTR_PATH_CVNETWORK            TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Network")
#define REGSTR_PATH_WMI_SECURITY         TEXT("System\\CurrentControlSet\\Control\\Wmi\\Security")
#define REGSTR_PATH_RELIABILITY          TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Reliability")
#define REGSTR_PATH_RELIABILITY_POLICY   TEXT("Software\\Policies\\Microsoft\\Windows NT\\Reliability")
#define REGSTR_PATH_RELIABILITY_POLICY_SHUTDOWNREASONUI TEXT("ShutdownReasonUI")
#define REGSTR_PATH_RELIABILITY_POLICY_SNAPSHOT         TEXT("Snapshot")
#define REGSTR_PATH_RELIABILITY_POLICY_REPORTSNAPSHOT   TEXT("ReportSnapshot")
#define REGSTR_PATH_REINSTALL            TEXT("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Reinstall")
#define REGSTR_PATH_NT_CURRENTVERSION TEXT("Software\\Microsoft\\Windows NT\\CurrentVersion")
#define REGSTR_PATH_VOLUMECACHE TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches")
#define REGSTR_VAL_DISPLAY      TEXT("display")
#define REGSTR_PATH_IDCONFIGDB  TEXT("System\\CurrentControlSet\\Control\\IDConfigDB")
#define REGSTR_PATH_CRITICALDEVICEDATABASE  TEXT("System\\CurrentControlSet\\Control\\CriticalDeviceDatabase")
#define REGSTR_PATH_CLASS       TEXT("System\\CurrentControlSet\\Services\\Class")
#define REGSTR_PATH_DISPLAYSETTINGS TEXT("Display\\Settings")
#define REGSTR_PATH_FONTS           TEXT("Display\\Fonts")
#define REGSTR_PATH_ENUM        TEXT("Enum")
#define REGSTR_PATH_ROOT        TEXT("Enum\\Root")
#define REGSTR_PATH_CURRENTCONTROLSET TEXT("System\\CurrentControlSet")
#define REGSTR_PATH_SYSTEMENUM  TEXT("System\\CurrentControlSet\\Enum")
#define REGSTR_PATH_HWPROFILES  TEXT("System\\CurrentControlSet\\Hardware Profiles")
#define REGSTR_PATH_HWPROFILESCURRENT TEXT("System\\CurrentControlSet\\Hardware Profiles\\Current")
#define REGSTR_PATH_CLASS_NT    TEXT("System\\CurrentControlSet\\Control\\Class")
#define REGSTR_PATH_PER_HW_ID_STORAGE TEXT("Software\\Microsoft\\Windows NT\\CurrentVersion\\PerHwIdStorage")
#define REGSTR_PATH_DEVICE_CLASSES TEXT("System\\CurrentControlSet\\Control\\DeviceClasses")
#define REGSTR_PATH_CODEVICEINSTALLERS TEXT("System\\CurrentControlSet\\Control\\CoDeviceInstallers")
#define REGSTR_PATH_BUSINFORMATION TEXT("System\\CurrentControlSet\\Control\\PnP\\BusInformation")
#define REGSTR_PATH_SERVICES    TEXT("System\\CurrentControlSet\\Services")
#define REGSTR_PATH_VXD         TEXT("System\\CurrentControlSet\\Services\\VxD")
#define REGSTR_PATH_IOS     TEXT("System\\CurrentControlSet\\Services\\VxD\\IOS")
#define REGSTR_PATH_VMM         TEXT("System\\CurrentControlSet\\Services\\VxD\\VMM")
#define REGSTR_PATH_VPOWERD     TEXT("System\\CurrentControlSet\\Services\\VxD\\VPOWERD")
#define REGSTR_PATH_VNETSUP     TEXT("System\\CurrentControlSet\\Services\\VxD\\VNETSUP")
#define REGSTR_PATH_NWREDIR     TEXT("System\\CurrentControlSet\\Services\\VxD\\NWREDIR")
#define REGSTR_PATH_NCPSERVER   TEXT("System\\CurrentControlSet\\Services\\NcpServer\\Parameters")
#define REGSTR_PATH_VCOMM       TEXT("System\\CurrentControlSet\\Services\\VxD\\VCOMM")
#define REGSTR_PATH_IOARB       TEXT("System\\CurrentControlSet\\Services\\Arbitrators\\IOArb")
#define REGSTR_PATH_ADDRARB     TEXT("System\\CurrentControlSet\\Services\\Arbitrators\\AddrArb")
#define REGSTR_PATH_DMAARB      TEXT("System\\CurrentControlSet\\Services\\Arbitrators\\DMAArb")
#define REGSTR_PATH_IRQARB      TEXT("System\\CurrentControlSet\\Services\\Arbitrators\\IRQArb")
#define REGSTR_PATH_CODEPAGE                            TEXT("System\\CurrentControlSet\\Control\\Nls\\Codepage")
#define REGSTR_PATH_FILESYSTEM                          TEXT("System\\CurrentControlSet\\Control\\FileSystem")
#define REGSTR_PATH_FILESYSTEM_NOVOLTRACK       TEXT("System\\CurrentControlSet\\Control\\FileSystem\\NoVolTrack")
#define REGSTR_PATH_CDFS                                        TEXT("System\\CurrentControlSet\\Control\\FileSystem\\CDFS")
#define REGSTR_PATH_WINBOOT                                 TEXT("System\\CurrentControlSet\\Control\\WinBoot")
#define REGSTR_PATH_INSTALLEDFILES                      TEXT("System\\CurrentControlSet\\Control\\InstalledFiles")
#define REGSTR_PATH_VMM32FILES                          TEXT("System\\CurrentControlSet\\Control\\VMM32Files")
#define REGSTR_MAX_VALUE_LENGTH     256
#define REGSTR_KEY_DEVICE_PROPERTIES               TEXT("Properties")
#define REGSTR_VAL_SLOTNUMBER                      TEXT("SlotNumber")
#define REGSTR_VAL_ATTACHEDCOMPONENTS              TEXT("AttachedComponents")
#define REGSTR_VAL_BASEDEVICEPATH                  TEXT("BaseDevicePath")
#define REGSTR_VAL_SYSTEMBUSNUMBER                 TEXT("SystemBusNumber")
#define REGSTR_VAL_BUSDATATYPE                     TEXT("BusDataType")
#define REGSTR_VAL_INTERFACETYPE                   TEXT("InterfaceType")
#define REGSTR_VAL_SERVICE                         TEXT("Service")
#define REGSTR_VAL_DETECTSIGNATURE                 TEXT("DetectSignature")
#define REGSTR_VAL_CLASSGUID                       TEXT("ClassGUID")
#define REGSTR_VAL_INSTANCEIDENTIFIER              TEXT("InstanceIdentifier")
#define REGSTR_VAL_DUPLICATEOF                     TEXT("DuplicateOf")
#define REGSTR_VAL_STATUSFLAGS                     TEXT("StatusFlags")
#define REGSTR_VAL_DISABLECOUNT                    TEXT("DisableCount")
#define REGSTR_VAL_UNKNOWNPROBLEMS                 TEXT("UnknownProblem")
#define REGSTR_VAL_DOCKSTATE                       TEXT("DockState")
#define REGSTR_VAL_PREFERENCEORDER                 TEXT("PreferenceOrder")
#define REGSTR_VAL_USERWAITINTERVAL                TEXT("UserWaitInterval")
#define REGSTR_VAL_DEVICE_INSTANCE                 TEXT("DeviceInstance")
#define REGSTR_VAL_SYMBOLIC_LINK                   TEXT("SymbolicLink")
#define REGSTR_VAL_DEFAULT                         TEXT("Default")
#define REGSTR_VAL_LOWERFILTERS                    TEXT("LowerFilters")
#define REGSTR_VAL_UPPERFILTERS                    TEXT("UpperFilters")
#define REGSTR_VAL_LOCATION_INFORMATION            TEXT("LocationInformation")
#define REGSTR_VAL_UI_NUMBER                       TEXT("UINumber")
#define REGSTR_VAL_UI_NUMBER_DESC_FORMAT           TEXT("UINumberDescFormat")
#define REGSTR_VAL_CAPABILITIES                    TEXT("Capabilities")
#define REGSTR_VAL_DEVICE_TYPE                     TEXT("DeviceType")
#define REGSTR_VAL_DEVICE_CHARACTERISTICS          TEXT("DeviceCharacteristics")
#define REGSTR_VAL_DEVICE_SECURITY_DESCRIPTOR      TEXT("Security")
#define REGSTR_VAL_DEVICE_EXCLUSIVE                TEXT("Exclusive")
#define REGSTR_VAL_RESOURCE_PICKER_TAGS            TEXT("ResourcePickerTags")
#define REGSTR_VAL_RESOURCE_PICKER_EXCEPTIONS      TEXT("ResourcePickerExceptions")
#define REGSTR_VAL_CUSTOM_PROPERTY_CACHE_DATE      TEXT("CustomPropertyCacheDate")
#define REGSTR_VAL_CUSTOM_PROPERTY_HW_ID_KEY       TEXT("CustomPropertyHwIdKey")
#define REGSTR_VAL_LAST_UPDATE_TIME                TEXT("LastUpdateTime")
#define REGSTR_VAL_CONTAINERID                     TEXT("ContainerID")
#define REGSTR_VALUE_DEVICE_OBJECT_NAME            TEXT("DeviceObjectName")
#define REGSTR_VALUE_DEVICE_SYMBOLIC_NAME          TEXT("DeviceSymbolicName")
#define REGSTR_VAL_EJECT_PRIORITY                  TEXT("EjectPriority")
#define REGSTR_KEY_CONTROL                         TEXT("Control")
#define REGSTR_VAL_ACTIVESERVICE                   TEXT("ActiveService")
#define REGSTR_VAL_LINKED                          TEXT("Linked")
#define REGSTR_VAL_PHYSICALDEVICEOBJECT            TEXT("PhysicalDeviceObject")
#define REGSTR_VAL_REMOVAL_POLICY                  TEXT("RemovalPolicy")
#define REGSTR_VAL_CURRENT_VERSION  TEXT("CurrentVersion")
#define REGSTR_VAL_CURRENT_BUILD    TEXT("CurrentBuildNumber")
#define REGSTR_VAL_CURRENT_CSDVERSION TEXT("CSDVersion")
#define REGSTR_VAL_CURRENT_TYPE     TEXT("CurrentType")
#define REGSTR_VAL_BITSPERPIXEL  TEXT("BitsPerPixel")
#define REGSTR_VAL_RESOLUTION    TEXT("Resolution")
#define REGSTR_VAL_DPILOGICALX   TEXT("DPILogicalX")
#define REGSTR_VAL_DPILOGICALY   TEXT("DPILogicalY")
#define REGSTR_VAL_DPIPHYSICALX  TEXT("DPIPhysicalX")
#define REGSTR_VAL_DPIPHYSICALY  TEXT("DPIPhysicalY")
#define REGSTR_VAL_REFRESHRATE   TEXT("RefreshRate")
#define REGSTR_VAL_DISPLAYFLAGS  TEXT("DisplayFlags")
#define REGSTR_PATH_CONTROLPANEL    TEXT("Control Panel")
#define REGSTR_PATH_CONTROLSFOLDER  TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Controls Folder")
#define REGSTR_VAL_DOSCP        TEXT("OEMCP")
#define REGSTR_VAL_WINCP        TEXT("ACP")
#define REGSTR_PATH_DYNA_ENUM   TEXT("Config Manager\\Enum")
#define REGSTR_VAL_HARDWARE_KEY TEXT("HardWareKey")
#define REGSTR_VAL_ALLOCATION   TEXT("Allocation")
#define REGSTR_VAL_PROBLEM      TEXT("Problem")
#define REGSTR_VAL_STATUS       TEXT("Status")
#define REGSTR_VAL_DONTUSEMEM   TEXT("DontAllocLastMem")
#define REGSTR_VAL_SYSTEMROOT           TEXT("SystemRoot")
#define REGSTR_VAL_BOOTCOUNT            TEXT("BootCount")
#define REGSTR_VAL_REALNETSTART         TEXT("RealNetStart")
#define REGSTR_VAL_MEDIA                TEXT("MediaPath")
#define REGSTR_VAL_CONFIG               TEXT("ConfigPath")
#define REGSTR_VAL_DEVICEPATH           TEXT("DevicePath")
#define REGSTR_VAL_SRCPATH              TEXT("SourcePath")
#define REGSTR_VAL_DRIVERCACHEPATH      TEXT("DriverCachePath")
#define REGSTR_VAL_OLDWINDIR            TEXT("OldWinDir")
#define REGSTR_VAL_SETUPFLAGS           TEXT("SetupFlags")
#define REGSTR_VAL_REGOWNER             TEXT("RegisteredOwner")
#define REGSTR_VAL_REGORGANIZATION      TEXT("RegisteredOrganization")
#define REGSTR_VAL_LICENSINGINFO        TEXT("LicensingInfo")
#define REGSTR_VAL_OLDMSDOSVER          TEXT("OldMSDOSVer")
#define REGSTR_VAL_FIRSTINSTALLDATETIME TEXT("FirstInstallDateTime")
#define REGSTR_VAL_INSTALLTYPE          TEXT("InstallType")
#define IT_COMPACT          0x0000
#define IT_TYPICAL          0x0001
#define IT_PORTABLE         0x0002
#define IT_CUSTOM           0x0003
#define REGSTR_VAL_WRAPPER              TEXT("Wrapper")
#define REGSTR_KEY_RUNHISTORY           TEXT("RunHistory")
#define REGSTR_VAL_LASTALIVEINTERVAL    TEXT("TimeStampInterval")
#define REGSTR_VAL_DIRTYSHUTDOWN        TEXT("DirtyShutdown")
#define REGSTR_VAL_DIRTYSHUTDOWNTIME    TEXT("DirtyShutdownTime")
#define REGSTR_VAL_BT                   TEXT("6005BT")
#define REGSTR_VAL_LASTCOMPUTERNAME     TEXT("LastComputerName")
#define REGSTR_VAL_LASTALIVEBT          TEXT("LastAliveBT")
#define REGSTR_VAL_LASTALIVESTAMP       TEXT("LastAliveStamp")
#define REGSTR_VAL_LASTALIVESTAMPFORCED TEXT("LastAliveStampForced")
#define REGSTR_VAL_LASTALIVESTAMPINTERVAL   TEXT("LastAliveStampInterval")
#define REGSTR_VAL_LASTALIVESTAMPPOLICYINTERVAL TEXT("LastAliveStampPolicyInterval")
#define REGSTR_VAL_LASTALIVEUPTIME      TEXT("LastAliveUptime")
#define REGSTR_VAL_LASTALIVEPMPOLICY    TEXT("LastAlivePMPolicy")
#define REGSTR_VAL_REASONCODE           TEXT("ReasonCode")
#define REGSTR_VAL_COMMENT              TEXT("Comment")
#define REGSTR_VAL_SHUTDOWNREASON       TEXT("ShutdownReason")
#define REGSTR_VAL_SHUTDOWNREASON_CODE          TEXT("ShutdownReasonCode")
#define REGSTR_VAL_SHUTDOWNREASON_COMMENT       TEXT("ShutdownReasonComment")
#define REGSTR_VAL_SHUTDOWNREASON_PROCESS       TEXT("ShutdownReasonProcess")
#define REGSTR_VAL_SHUTDOWNREASON_USERNAME      TEXT("ShutdownReasonUserName")
#define REGSTR_VAL_SHOWREASONUI                 TEXT("ShutdownReasonUI")
#define REGSTR_VAL_SHUTDOWN_IGNORE_PREDEFINED   TEXT("ShutdownIgnorePredefinedReasons")
#define REGSTR_VAL_SHUTDOWN_STATE_SNAPSHOT      TEXT("ShutdownStateSnapshot")
#define REGSTR_KEY_SETUP                TEXT("\\Setup")
#define REGSTR_VAL_BOOTDIR              TEXT("BootDir")
#define REGSTR_VAL_WINBOOTDIR           TEXT("WinbootDir")
#define REGSTR_VAL_WINDIR               TEXT("WinDir")
#define REGSTR_VAL_APPINSTPATH          TEXT("AppInstallPath")
#define REGSTR_PATH_EBD          REGSTR_PATH_SETUP REGSTR_KEY_SETUP TEXT("\\EBD")
#define REGSTR_KEY_EBDFILESLOCAL     TEXT("EBDFilesLocale")
#define REGSTR_KEY_EBDFILESKEYBOARD     TEXT("EBDFilesKeyboard")
#define REGSTR_KEY_EBDAUTOEXECBATLOCAL TEXT("EBDAutoexecBatLocale")
#define REGSTR_KEY_EBDAUTOEXECBATKEYBOARD TEXT("EBDAutoexecBatKeyboard")
#define REGSTR_KEY_EBDCONFIGSYSLOCAL   TEXT("EBDConfigSysLocale")
#define REGSTR_KEY_EBDCONFIGSYSKEYBOARD   TEXT("EBDConfigSysKeyboard")
#define REGSTR_VAL_POLICY                     TEXT("Policy")
#define REGSTR_VAL_BEHAVIOR_ON_FAILED_VERIFY  TEXT("BehaviorOnFailedVerify")
#define DRIVERSIGN_NONE             0x00000000
#define DRIVERSIGN_WARNING          0x00000001
#define DRIVERSIGN_BLOCKING         0x00000002
#define REGSTR_VAL_MSDOSMODE            TEXT("MSDOSMode")
#define REGSTR_VAL_MSDOSMODEDISCARD     TEXT("Discard")
#define REGSTR_VAL_DOSOPTGLOBALFLAGS    TEXT("GlobalFlags")
#define DOSOPTGF_DEFCLEAN   0x00000001L
#define REGSTR_VAL_DOSOPTFLAGS          TEXT("Flags")
#define REGSTR_VAL_OPTORDER             TEXT("Order")
#define REGSTR_VAL_CONFIGSYS            TEXT("Config.Sys")
#define REGSTR_VAL_AUTOEXEC             TEXT("Autoexec.Bat")
#define REGSTR_VAL_STDDOSOPTION         TEXT("StdOption")
#define REGSTR_VAL_DOSOPTTIP            TEXT("TipText")
#define DOSOPTF_DEFAULT     0x00000001L
#define DOSOPTF_SUPPORTED   0x00000002L
#define DOSOPTF_ALWAYSUSE   0x00000004L
#define DOSOPTF_USESPMODE   0x00000008L
#define DOSOPTF_PROVIDESUMB 0x00000010L
#define DOSOPTF_NEEDSETUP   0x00000020L
#define DOSOPTF_INDOSSTART  0x00000040L
#define DOSOPTF_MULTIPLE    0x00000080L
#define SUF_FIRSTTIME   0x00000001L
#define SUF_EXPRESS     0x00000002L
#define SUF_BATCHINF    0x00000004L
#define SUF_CLEAN       0x00000008L
#define SUF_INSETUP     0x00000010L
#define SUF_NETSETUP    0x00000020L
#define SUF_NETHDBOOT   0x00000040L
#define SUF_NETRPLBOOT  0x00000080L
#define SUF_SBSCOPYOK   0x00000100L
#define REGSTR_VAL_DOSPAGER     TEXT("DOSPager")
#define REGSTR_VAL_VXDGROUPS    TEXT("VXDGroups")
#define REGSTR_VAL_VPOWERDFLAGS TEXT("Flags")
#define VPDF_DISABLEPWRMGMT         0x00000001
#define VPDF_FORCEAPM10MODE         0x00000002
#define VPDF_SKIPINTELSLCHECK       0x00000004
#define VPDF_DISABLEPWRSTATUSPOLL   0x00000008
#define VPDF_DISABLERINGRESUME      0x00000010
#define VPDF_SHOWMULTIBATT          0x00000020
#define BIF_SHOWSIMILARDRIVERS      0x00000001
#define BIF_RAWDEVICENEEDSDRIVER    0x00000002
#define REGSTR_VAL_WORKGROUP TEXT("Workgroup")
#define REGSTR_VAL_DIRECTHOST TEXT("DirectHost")
#define REGSTR_VAL_FILESHARING          TEXT("FileSharing")
#define REGSTR_VAL_PRINTSHARING         TEXT("PrintSharing")
#define REGSTR_VAL_FIRSTNETDRIVE        TEXT("FirstNetworkDrive")
#define REGSTR_VAL_MAXCONNECTIONS       TEXT("MaxConnections")
#define REGSTR_VAL_APISUPPORT           TEXT("APISupport")
#define REGSTR_VAL_MAXRETRY             TEXT("MaxRetry")
#define REGSTR_VAL_MINRETRY             TEXT("MinRetry")
#define REGSTR_VAL_SUPPORTLFN           TEXT("SupportLFN")
#define REGSTR_VAL_SUPPORTBURST         TEXT("SupportBurst")
#define REGSTR_VAL_SUPPORTTUNNELLING    TEXT("SupportTunnelling")
#define REGSTR_VAL_FULLTRACE            TEXT("FullTrace")
#define REGSTR_VAL_READCACHING          TEXT("ReadCaching")
#define REGSTR_VAL_SHOWDOTS             TEXT("ShowDots")
#define REGSTR_VAL_GAPTIME              TEXT("GapTime")
#define REGSTR_VAL_SEARCHMODE           TEXT("SearchMode")
#define REGSTR_VAL_SHELLVERSION     TEXT("ShellVersion")
#define REGSTR_VAL_MAXLIP           TEXT("MaxLIP")
#define REGSTR_VAL_PRESERVECASE     TEXT("PreserveCase")
#define REGSTR_VAL_OPTIMIZESFN      TEXT("OptimizeSFN")
#define REGSTR_VAL_NCP_BROWSEMASTER     TEXT("BrowseMaster")
#define REGSTR_VAL_NCP_USEPEERBROWSING  TEXT("Use_PeerBrowsing")
#define REGSTR_VAL_NCP_USESAP           TEXT("Use_Sap")
#define REGSTR_VAL_PCCARD_POWER         TEXT("EnablePowerManagement")
#define REGSTR_VAL_WIN31FILESYSTEM              TEXT("Win31FileSystem")
#define REGSTR_VAL_PRESERVELONGNAMES            TEXT("PreserveLongNames")
#define REGSTR_VAL_DRIVEWRITEBEHIND             TEXT("DriveWriteBehind")
#define REGSTR_VAL_ASYNCFILECOMMIT              TEXT("AsyncFileCommit")
#define REGSTR_VAL_PATHCACHECOUNT               TEXT("PathCache")
#define REGSTR_VAL_NAMECACHECOUNT               TEXT("NameCache")
#define REGSTR_VAL_CONTIGFILEALLOC              TEXT("ContigFileAllocSize")
#define REGSTR_VAL_FREESPACERATIO               TEXT("FreeSpaceRatio")
#define REGSTR_VAL_VOLIDLETIMEOUT               TEXT("VolumeIdleTimeout")
#define REGSTR_VAL_BUFFIDLETIMEOUT              TEXT("BufferIdleTimeout")
#define REGSTR_VAL_BUFFAGETIMEOUT               TEXT("BufferAgeTimeout")
#define REGSTR_VAL_NAMENUMERICTAIL              TEXT("NameNumericTail")
#define REGSTR_VAL_READAHEADTHRESHOLD           TEXT("ReadAheadThreshold")
#define REGSTR_VAL_DOUBLEBUFFER                 TEXT("DoubleBuffer")
#define REGSTR_VAL_SOFTCOMPATMODE               TEXT("SoftCompatMode")
#define REGSTR_VAL_DRIVESPINDOWN                TEXT("DriveSpinDown")
#define REGSTR_VAL_FORCEPMIO                    TEXT("ForcePMIO")
#define REGSTR_VAL_FORCERMIO                    TEXT("ForceRMIO")
#define REGSTR_VAL_LASTBOOTPMDRVS               TEXT("LastBootPMDrvs")
#define REGSTR_VAL_ACSPINDOWNPREVIOUS           TEXT("ACSpinDownPrevious")
#define REGSTR_VAL_BATSPINDOWNPREVIOUS          TEXT("BatSpinDownPrevious")
#define REGSTR_VAL_VIRTUALHDIRQ                 TEXT("VirtualHDIRQ")
#define REGSTR_VAL_SRVNAMECACHECOUNT            TEXT("ServerNameCacheMax")
#define REGSTR_VAL_SRVNAMECACHE                 TEXT("ServerNameCache")
#define REGSTR_VAL_SRVNAMECACHENETPROV          TEXT("ServerNameCacheNumNets")
#define REGSTR_VAL_AUTOMOUNT                    TEXT("AutoMountDrives")
#define REGSTR_VAL_COMPRESSIONMETHOD            TEXT("CompressionAlgorithm")
#define REGSTR_VAL_COMPRESSIONTHRESHOLD         TEXT("CompressionThreshold")
#define REGSTR_VAL_ACDRIVESPINDOWN              TEXT("ACDriveSpinDown")
#define REGSTR_VAL_BATDRIVESPINDOWN             TEXT("BatDriveSpinDown")
#define REGSTR_VAL_CDCACHESIZE  TEXT("CacheSize")
#define REGSTR_VAL_CDPREFETCH   TEXT("Prefetch")
#define REGSTR_VAL_CDPREFETCHTAIL TEXT("PrefetchTail")
#define REGSTR_VAL_CDRAWCACHE   TEXT("RawCache")
#define REGSTR_VAL_CDEXTERRORS  TEXT("ExtendedErrors")
#define REGSTR_VAL_CDSVDSENSE   TEXT("SVDSense")
#define REGSTR_VAL_CDSHOWVERSIONS TEXT("ShowVersions")
#define REGSTR_VAL_CDCOMPATNAMES TEXT("MSCDEXCompatNames")
#define REGSTR_VAL_CDNOREADAHEAD TEXT("NoReadAhead")
#define REGSTR_VAL_SCSI TEXT("SCSI\\")
#define REGSTR_VAL_ESDI TEXT("ESDI\\")
#define REGSTR_VAL_FLOP TEXT("FLOP\\")
#define REGSTR_VAL_DISK TEXT("GenDisk")
#define REGSTR_VAL_CDROM        TEXT("GenCD")
#define REGSTR_VAL_TAPE TEXT("TAPE")
#define REGSTR_VAL_SCANNER TEXT("SCANNER")
#define REGSTR_VAL_FLOPPY       TEXT("FLOPPY")
#define REGSTR_VAL_SCSITID TEXT("SCSITargetID")
#define REGSTR_VAL_SCSILUN TEXT("SCSILUN")
#define REGSTR_VAL_REVLEVEL TEXT("RevisionLevel")
#define REGSTR_VAL_PRODUCTID TEXT("ProductId")
#define REGSTR_VAL_PRODUCTTYPE TEXT("ProductType")
#define REGSTR_VAL_DEVTYPE TEXT("DeviceType")
#define REGSTR_VAL_REMOVABLE TEXT("Removable")
#define  REGSTR_VAL_CURDRVLET TEXT("CurrentDriveLetterAssignment")
#define REGSTR_VAL_USRDRVLET TEXT("UserDriveLetterAssignment")
#define REGSTR_VAL_SYNCDATAXFER TEXT("SyncDataXfer")
#define REGSTR_VAL_AUTOINSNOTE  TEXT("AutoInsertNotification")
#define REGSTR_VAL_DISCONNECT TEXT("Disconnect")
#define REGSTR_VAL_INT13 TEXT("Int13")
#define REGSTR_VAL_PMODE_INT13 TEXT("PModeInt13")
#define REGSTR_VAL_USERSETTINGS TEXT("AdapterSettings")
#define REGSTR_VAL_NOIDE TEXT("NoIDE")
#define REGSTR_VAL_DISKCLASSNAME        TEXT("DiskDrive")
#define REGSTR_VAL_CDROMCLASSNAME       TEXT("CDROM")
#define REGSTR_VAL_FORCELOAD    TEXT("ForceLoadPD")
#define REGSTR_VAL_FORCEFIFO    TEXT("ForceFIFO")
#define REGSTR_VAL_FORCECL              TEXT("ForceChangeLine")
#define REGSTR_VAL_NOUSECLASS       TEXT("NoUseClass")
#define REGSTR_VAL_NOINSTALLCLASS   TEXT("NoInstallClass")
#define REGSTR_VAL_NODISPLAYCLASS   TEXT("NoDisplayClass")
#define REGSTR_VAL_SILENTINSTALL    TEXT("SilentInstall")
#define REGSTR_KEY_PCMCIA_CLASS     TEXT("PCMCIA")
#define REGSTR_KEY_SCSI_CLASS       TEXT("SCSIAdapter")
#define REGSTR_KEY_PORTS_CLASS      TEXT("ports")
#define REGSTR_KEY_MEDIA_CLASS      TEXT("MEDIA")
#define REGSTR_KEY_DISPLAY_CLASS    TEXT("Display")
#define REGSTR_KEY_KEYBOARD_CLASS   TEXT("Keyboard")
#define REGSTR_KEY_MOUSE_CLASS      TEXT("Mouse")
#define REGSTR_KEY_MONITOR_CLASS    TEXT("Monitor")
#define REGSTR_KEY_MODEM_CLASS      TEXT("Modem")
#define REGSTR_VAL_PCMCIA_OPT   TEXT("Options")
#define PCMCIA_OPT_HAVE_SOCKET  0x00000001l
#define PCMCIA_OPT_AUTOMEM      0x00000004l
#define PCMCIA_OPT_NO_SOUND     0x00000008l
#define PCMCIA_OPT_NO_AUDIO     0x00000010l
#define PCMCIA_OPT_NO_APMREMOVE 0x00000020l
#define REGSTR_VAL_PCMCIA_MEM   TEXT("Memory")
#define PCMCIA_DEF_MEMBEGIN     0x000C0000
#define PCMCIA_DEF_MEMEND       0x00FFFFFF
#define PCMCIA_DEF_MEMLEN       0x00001000
#define REGSTR_VAL_PCMCIA_ALLOC TEXT("AllocMemWin")
#define REGSTR_VAL_PCMCIA_ATAD  TEXT("ATADelay")
#define REGSTR_VAL_PCMCIA_SIZ   TEXT("MinRegionSize")
#define PCMCIA_DEF_MIN_REGION   0x00010000
#define REGSTR_VAL_P1284MDL     TEXT("Model")
#define REGSTR_VAL_P1284MFG     TEXT("Manufacturer")
#define REGSTR_VAL_ISAPNP               TEXT("ISAPNP")
#define REGSTR_VAL_ISAPNP_RDP_OVERRIDE  TEXT("RDPOverRide")
#define REGSTR_VAL_PCI                  TEXT("PCI")
#define REGSTR_PCI_OPTIONS              TEXT("Options")
#define REGSTR_PCI_DUAL_IDE             TEXT("PCIDualIDE")
#define PCI_OPTIONS_USE_BIOS            0x00000001l
#define PCI_OPTIONS_USE_IRQ_STEERING    0x00000002l
#define AGP_FLAG_NO_1X_RATE             0x00000001l
#define AGP_FLAG_NO_2X_RATE             0x00000002l
#define AGP_FLAG_NO_4X_RATE             0x00000004l
#define AGP_FLAG_NO_8X_RATE             0x00000008l
#define AGP_FLAG_REVERSE_INITIALIZATION 0x00000080l
#define AGP_FLAG_NO_SBA_ENABLE          0x00000100l
#define AGP_FLAG_NO_FW_ENABLE           0x00000200l
#define AGP_FLAG_SPECIAL_TARGET         0x000FFFFFl
#define AGP_FLAG_SPECIAL_RESERVE        0x000F8000l
#define REGSTR_KEY_CRASHES      TEXT("Crashes")
#define REGSTR_KEY_DANGERS      TEXT("Dangers")
#define REGSTR_KEY_DETMODVARS   TEXT("DetModVars")
#define REGSTR_KEY_NDISINFO     TEXT("NDISInfo")
#define REGSTR_VAL_PROTINIPATH  TEXT("ProtIniPath")
#define REGSTR_VAL_RESOURCES    TEXT("Resources")
#define REGSTR_VAL_CRASHFUNCS   TEXT("CrashFuncs")
#define REGSTR_VAL_CLASS        TEXT("Class")
#define REGSTR_VAL_CLASSDESC    TEXT("ClassDesc")
#define REGSTR_VAL_DEVDESC      TEXT("DeviceDesc")
#define REGSTR_VAL_BOOTCONFIG   TEXT("BootConfig")
#define REGSTR_VAL_DETFUNC      TEXT("DetFunc")
#define REGSTR_VAL_DETFLAGS     TEXT("DetFlags")
#define REGSTR_VAL_COMPATIBLEIDS TEXT("CompatibleIDs")
#define REGSTR_VAL_DETCONFIG    TEXT("DetConfig")
#define REGSTR_VAL_VERIFYKEY    TEXT("VerifyKey")
#define REGSTR_VAL_COMINFO      TEXT("ComInfo")
#define REGSTR_VAL_INFNAME      TEXT("InfName")
#define REGSTR_VAL_CARDSPECIFIC TEXT("CardSpecific")
#define REGSTR_VAL_NETOSTYPE    TEXT("NetOSType")
#define REGSTR_DATA_NETOS_NDIS  TEXT("NDIS")
#define REGSTR_DATA_NETOS_ODI   TEXT("ODI")
#define REGSTR_DATA_NETOS_IPX   TEXT("IPX")
#define REGSTR_VAL_MFG      TEXT("Mfg")
#define REGSTR_VAL_SCAN_ONLY_FIRST      TEXT("ScanOnlyFirstDrive")
#define REGSTR_VAL_SHARE_IRQ    TEXT("ForceIRQSharing")
#define REGSTR_VAL_NONSTANDARD_ATAPI    TEXT("NonStandardATAPI")
#define REGSTR_VAL_IDE_FORCE_SERIALIZE  TEXT("ForceSerialization")
#define REGSTR_VAL_MAX_HCID_LEN 1024
#define REGSTR_VAL_HWREV            TEXT("HWRevision")
#define REGSTR_VAL_ENABLEINTS  TEXT("EnableInts")
#define REGDF_NOTDETIO          0x00000001
#define REGDF_NOTDETMEM         0x00000002
#define REGDF_NOTDETIRQ         0x00000004
#define REGDF_NOTDETDMA         0x00000008
#define REGDF_NOTDETALL         (REGDF_NOTDETIO | REGDF_NOTDETMEM | REGDF_NOTDETIRQ | REGDF_NOTDETDMA)
#define REGDF_NEEDFULLCONFIG    0x00000010
#define REGDF_GENFORCEDCONFIG   0x00000020
#define REGDF_NODETCONFIG       0x00008000
#define REGDF_CONFLICTIO        0x00010000
#define REGDF_CONFLICTMEM       0x00020000
#define REGDF_CONFLICTIRQ       0x00040000
#define REGDF_CONFLICTDMA       0x00080000
#define REGDF_CONFLICTALL       (REGDF_CONFLICTIO | REGDF_CONFLICTMEM | REGDF_CONFLICTIRQ | REGDF_CONFLICTDMA)
#define REGDF_MAPIRQ2TO9        0x00100000
#define REGDF_NOTVERIFIED       0x80000000
#define REGSTR_VAL_APMBIOSVER           TEXT("APMBiosVer")
#define REGSTR_VAL_APMFLAGS             TEXT("APMFlags")
#define REGSTR_VAL_SLSUPPORT            TEXT("SLSupport")
#define REGSTR_VAL_MACHINETYPE          TEXT("MachineType")
#define REGSTR_VAL_SETUPMACHINETYPE TEXT("SetupMachineType")
#define REGSTR_MACHTYPE_UNKNOWN         TEXT("Unknown")
#define REGSTR_MACHTYPE_IBMPC           TEXT("IBM PC")
#define REGSTR_MACHTYPE_IBMPCJR         TEXT("IBM PCjr")
#define REGSTR_MACHTYPE_IBMPCCONV       TEXT("IBM PC Convertible")
#define REGSTR_MACHTYPE_IBMPCXT         TEXT("IBM PC/XT")
#define REGSTR_MACHTYPE_IBMPCXT_286     TEXT("IBM PC/XT 286")
#define REGSTR_MACHTYPE_IBMPCAT         TEXT("IBM PC/AT")
#define REGSTR_MACHTYPE_IBMPS2_25       TEXT("IBM PS/2-25")
#define REGSTR_MACHTYPE_IBMPS2_30_286   TEXT("IBM PS/2-30 286")
#define REGSTR_MACHTYPE_IBMPS2_30       TEXT("IBM PS/2-30")
#define REGSTR_MACHTYPE_IBMPS2_50       TEXT("IBM PS/2-50")
#define REGSTR_MACHTYPE_IBMPS2_50Z      TEXT("IBM PS/2-50Z")
#define REGSTR_MACHTYPE_IBMPS2_55SX     TEXT("IBM PS/2-55SX")
#define REGSTR_MACHTYPE_IBMPS2_60       TEXT("IBM PS/2-60")
#define REGSTR_MACHTYPE_IBMPS2_65SX     TEXT("IBM PS/2-65SX")
#define REGSTR_MACHTYPE_IBMPS2_70       TEXT("IBM PS/2-70")
#define REGSTR_MACHTYPE_IBMPS2_P70      TEXT("IBM PS/2-P70")
#define REGSTR_MACHTYPE_IBMPS2_70_80    TEXT("IBM PS/2-70/80")
#define REGSTR_MACHTYPE_IBMPS2_80       TEXT("IBM PS/2-80")
#define REGSTR_MACHTYPE_IBMPS2_90       TEXT("IBM PS/2-90")
#define REGSTR_MACHTYPE_IBMPS1          TEXT("IBM PS/1")
#define REGSTR_MACHTYPE_PHOENIX_PCAT    TEXT("Phoenix PC/AT Compatible")
#define REGSTR_MACHTYPE_HP_VECTRA       TEXT("HP Vectra")
#define REGSTR_MACHTYPE_ATT_PC          TEXT("AT&T PC")
#define REGSTR_MACHTYPE_ZENITH_PC       TEXT("Zenith PC")
#define REGSTR_VAL_APMMENUSUSPEND       TEXT("APMMenuSuspend")
#define APMMENUSUSPEND_DISABLED         0
#define APMMENUSUSPEND_ENABLED          1
#define APMMENUSUSPEND_UNDOCKED         2
#define APMMENUSUSPEND_NOCHANGE     0x80
#define REGSTR_VAL_APMACTIMEOUT         TEXT("APMACTimeout")
#define REGSTR_VAL_APMBATTIMEOUT        TEXT("APMBatTimeout")
#define APMTIMEOUT_DISABLED             0
#define REGSTR_VAL_APMSHUTDOWNPOWER TEXT("APMShutDownPower")
#define REGSTR_VAL_BUSTYPE          TEXT("BusType")
#define REGSTR_VAL_CPU              TEXT("CPU")
#define REGSTR_VAL_NDP              TEXT("NDP")
#define REGSTR_VAL_PNPBIOSVER       TEXT("PnPBIOSVer")
#define REGSTR_VAL_PNPSTRUCOFFSET   TEXT("PnPStrucOffset")
#define REGSTR_VAL_PCIBIOSVER       TEXT("PCIBIOSVer")
#define REGSTR_VAL_HWMECHANISM      TEXT("HWMechanism")
#define REGSTR_VAL_LASTPCIBUSNUM    TEXT("LastPCIBusNum")
#define REGSTR_VAL_CONVMEM          TEXT("ConvMem")
#define REGSTR_VAL_EXTMEM           TEXT("ExtMem")
#define REGSTR_VAL_COMPUTERNAME     TEXT("ComputerName")
#define REGSTR_VAL_BIOSNAME         TEXT("BIOSName")
#define REGSTR_VAL_BIOSVERSION      TEXT("BIOSVersion")
#define REGSTR_VAL_BIOSDATE         TEXT("BIOSDate")
#define REGSTR_VAL_MODEL            TEXT("Model")
#define REGSTR_VAL_SUBMODEL         TEXT("Submodel")
#define REGSTR_VAL_REVISION         TEXT("Revision")
#define REGSTR_VAL_FIFODEPTH            TEXT("FIFODepth")
#define REGSTR_VAL_RDINTTHRESHOLD       TEXT("RDIntThreshold")
#define REGSTR_VAL_WRINTTHRESHOLD       TEXT("WRIntThreshold")
#define REGSTR_VAL_PRIORITY     TEXT("Priority")
#define REGSTR_VAL_DRIVER       TEXT("Driver")
#define REGSTR_VAL_FUNCDESC     TEXT("FunctionDesc")
#define REGSTR_VAL_FORCEDCONFIG TEXT("ForcedConfig")
#define REGSTR_VAL_CONFIGFLAGS  TEXT("ConfigFlags")
#define REGSTR_VAL_CSCONFIGFLAGS TEXT("CSConfigFlags")
#define CONFIGFLAG_DISABLED             0x00000001
#define CONFIGFLAG_REMOVED              0x00000002
#define CONFIGFLAG_MANUAL_INSTALL       0x00000004
#define CONFIGFLAG_IGNORE_BOOT_LC       0x00000008
#define CONFIGFLAG_NET_BOOT             0x00000010
#define CONFIGFLAG_REINSTALL            0x00000020
#define CONFIGFLAG_FAILEDINSTALL        0x00000040
#define CONFIGFLAG_CANTSTOPACHILD       0x00000080
#define CONFIGFLAG_OKREMOVEROM          0x00000100
#define CONFIGFLAG_NOREMOVEEXIT         0x00000200
#define CONFIGFLAG_FINISH_INSTALL       0x00000400
#define CONFIGFLAG_NEEDS_FORCED_CONFIG  0x00000800
#if defined(REMOTE_BOOT)
#define CONFIGFLAG_NETBOOT_CARD         0x00001000
#endif
#define CONFIGFLAG_PARTIAL_LOG_CONF     0x00002000
#define CONFIGFLAG_SUPPRESS_SURPRISE    0x00004000
#define CONFIGFLAG_VERIFY_HARDWARE      0x00008000
#define CONFIGFLAG_FINISHINSTALL_UI     0x00010000
#define CONFIGFLAG_FINISHINSTALL_ACTION 0x00020000
#define CSCONFIGFLAG_BITS               0x00000007
#define CSCONFIGFLAG_DISABLED           0x00000001
#define CSCONFIGFLAG_DO_NOT_CREATE      0x00000002
#define CSCONFIGFLAG_DO_NOT_START       0x00000004
#define DMSTATEFLAG_APPLYTOALL      0x00000001
#define REGSTR_VAL_ROOT_DEVNODE         TEXT("HTREE\\ROOT\\0")
#define REGSTR_VAL_RESERVED_DEVNODE     TEXT("HTREE\\RESERVED\\0")
#define REGSTR_PATH_READDATAPORT        REGSTR_KEY_ISAENUM TEXT("\\ReadDataPort\\0")
#define REGSTR_PATH_MULTI_FUNCTION              TEXT("MF")
#define REGSTR_VAL_RESOURCE_MAP                 TEXT("ResourceMap")
#define REGSTR_PATH_CHILD_PREFIX                TEXT("Child")
#define NUM_RESOURCE_MAP                        256
#define REGSTR_VAL_MF_FLAGS                     TEXT("MFFlags")
#define MF_FLAGS_EVEN_IF_NO_RESOURCE            0x00000001
#define MF_FLAGS_NO_CREATE_IF_NO_RESOURCE       0x00000002
#define MF_FLAGS_FILL_IN_UNKNOWN_RESOURCE       0x00000004
#define MF_FLAGS_CREATE_BUT_NO_SHOW_DISABLED    0x00000008
#ifndef NEC_98
#define REGSTR_VAL_EISA_RANGES          TEXT("EISARanges")
#define REGSTR_VAL_EISA_FUNCTIONS       TEXT("EISAFunctions")
#define REGSTR_VAL_EISA_FUNCTIONS_MASK  TEXT("EISAFunctionsMask")
#define REGSTR_VAL_EISA_FLAGS           TEXT("EISAFlags")
#define REGSTR_VAL_EISA_SIMULATE_INT15  TEXT("EISASimulateInt15")
#else
#define REGSTR_VAL_EISA_RANGES          TEXT("NESARanges")
#define REGSTR_VAL_EISA_FUNCTIONS       TEXT("NESAFunctions")
#define REGSTR_VAL_EISA_FUNCTIONS_MASK  TEXT("NESAFunctionsMask")
#define REGSTR_VAL_EISA_FLAGS           TEXT("NESAFlags")
#define REGSTR_VAL_EISA_SIMULATE_INT15  TEXT("NESASimulateInt15")
#endif
#define EISAFLAG_NO_IO_MERGE            0x00000001
#define EISAFLAG_SLOT_IO_FIRST          0x00000002
#define EISA_NO_MAX_FUNCTION            0xFF
#define NUM_EISA_RANGES                 4
#define REGSTR_VAL_DRVDESC      TEXT("DriverDesc")
#define REGSTR_VAL_DEVLOADER    TEXT("DevLoader")
#define REGSTR_VAL_STATICVXD    TEXT("StaticVxD")
#define REGSTR_VAL_PROPERTIES   TEXT("Properties")
#define REGSTR_VAL_MANUFACTURER TEXT("Manufacturer")
#define REGSTR_VAL_EXISTS       TEXT("Exists")
#define REGSTR_VAL_CMENUMFLAGS  TEXT("CMEnumFlags")
#define REGSTR_VAL_CMDRIVFLAGS  TEXT("CMDrivFlags")
#define REGSTR_VAL_ENUMERATOR   TEXT("Enumerator")
#define REGSTR_VAL_DEVICEDRIVER TEXT("DeviceDriver")
#define REGSTR_VAL_PORTNAME     TEXT("PortName")
#define REGSTR_VAL_INFPATH      TEXT("InfPath")
#define REGSTR_VAL_INFSECTION   TEXT("InfSection")
#define REGSTR_VAL_INFSECTIONEXT TEXT("InfSectionExt")
#define REGSTR_VAL_POLLING      TEXT("Polling")
#define REGSTR_VAL_DONTLOADIFCONFLICT TEXT("DontLoadIfConflict")
#define REGSTR_VAL_PORTSUBCLASS TEXT("PortSubClass")
#define REGSTR_VAL_NETCLEAN TEXT("NetClean")
#define REGSTR_VAL_IDE_NO_SERIALIZE TEXT("IDENoSerialize")
#define REGSTR_VAL_NOCMOSORFDPT TEXT("NoCMOSorFDPT")
#define REGSTR_VAL_COMVERIFYBASE TEXT("COMVerifyBase")
#define REGSTR_VAL_MATCHINGDEVID TEXT("MatchingDeviceId")
#define REGSTR_VAL_DRIVERDATE   TEXT("DriverDate")
#define REGSTR_VAL_DRIVERDATEDATA TEXT("DriverDateData")
#define REGSTR_VAL_DRIVERVERSION TEXT("DriverVersion")
#define REGSTR_VAL_LOCATION_INFORMATION_OVERRIDE    TEXT("LocationInformationOverride")
#define REGSTR_KEY_OVERRIDE     TEXT("Override")
#define REGSTR_VAL_CONFIGMG     TEXT("CONFIGMG")
#define REGSTR_VAL_SYSDM        TEXT("SysDM")
#define REGSTR_VAL_SYSDMFUNC    TEXT("SysDMFunc")
#define REGSTR_VAL_PRIVATE      TEXT("Private")
#define REGSTR_VAL_PRIVATEFUNC  TEXT("PrivateFunc")
#define REGSTR_VAL_DETECT       TEXT("Detect")
#define REGSTR_VAL_DETECTFUNC   TEXT("DetectFunc")
#define REGSTR_VAL_ASKFORCONFIG TEXT("AskForConfig")
#define REGSTR_VAL_ASKFORCONFIGFUNC TEXT("AskForConfigFunc")
#define REGSTR_VAL_WAITFORUNDOCK TEXT("WaitForUndock")
#define REGSTR_VAL_WAITFORUNDOCKFUNC TEXT("WaitForUndockFunc")
#define REGSTR_VAL_REMOVEROMOKAY TEXT("RemoveRomOkay")
#define REGSTR_VAL_REMOVEROMOKAYFUNC TEXT("RemoveRomOkayFunc")
#define REGSTR_VAL_CURCONFIG    TEXT("CurrentConfig")
#define REGSTR_VAL_FRIENDLYNAME TEXT("FriendlyName")
#define REGSTR_VAL_CURRENTCONFIG TEXT("CurrentConfig")
#define REGSTR_VAL_MAP          TEXT("Map")
#define REGSTR_VAL_ID           TEXT("CurrentID")
#define REGSTR_VAL_DOCKED       TEXT("CurrentDockedState")
#define REGSTR_VAL_CHECKSUM     TEXT("CurrentChecksum")
#define REGSTR_VAL_HWDETECT     TEXT("HardwareDetect")
#define REGSTR_VAL_INHIBITRESULTS TEXT("InhibitResults")
#define REGSTR_VAL_PROFILEFLAGS TEXT("ProfileFlags")
#define REGSTR_KEY_PCMCIA       TEXT("PCMCIA\\")
#define REGSTR_KEY_PCUNKNOWN    TEXT("UNKNOWN_MANUFACTURER")
#define REGSTR_VAL_PCSSDRIVER   TEXT("Driver")
#define REGSTR_KEY_PCMTD        TEXT("MTD-")
#define REGSTR_VAL_PCMTDRIVER   TEXT("MTD")
#define REGSTR_VAL_HARDWAREID    TEXT("HardwareID")
#define REGSTR_VAL_INSTALLER          TEXT("Installer")
#define REGSTR_VAL_INSTALLER_32       TEXT("Installer32")
#define REGSTR_VAL_INSICON            TEXT("Icon")
#define REGSTR_VAL_ENUMPROPPAGES      TEXT("EnumPropPages")
#define REGSTR_VAL_ENUMPROPPAGES_32   TEXT("EnumPropPages32")
#define REGSTR_VAL_BASICPROPERTIES    TEXT("BasicProperties")
#define REGSTR_VAL_BASICPROPERTIES_32 TEXT("BasicProperties32")
#define REGSTR_VAL_COINSTALLERS_32    TEXT("CoInstallers32")
#define REGSTR_VAL_PRIVATEPROBLEM     TEXT("PrivateProblem")
#define REGSTR_KEY_CURRENT      TEXT("Current")
#define REGSTR_KEY_DEFAULT      TEXT("Default")
#define REGSTR_KEY_MODES        TEXT("Modes")
#define REGSTR_VAL_MODE         TEXT("Mode")
#define REGSTR_VAL_BPP          TEXT("BPP")
#define REGSTR_VAL_HRES         TEXT("HRes")
#define REGSTR_VAL_VRES         TEXT("VRes")
#define REGSTR_VAL_FONTSIZE     TEXT("FontSize")
#define REGSTR_VAL_DRV          TEXT("drv")
#define REGSTR_VAL_GRB          TEXT("grb")
#define REGSTR_VAL_VDD          TEXT("vdd")
#define REGSTR_VAL_VER          TEXT("Ver")
#define REGSTR_VAL_MAXRES       TEXT("MaxResolution")
#define REGSTR_VAL_DPMS         TEXT("DPMS")
#define REGSTR_VAL_RESUMERESET  TEXT("ResumeReset")
#define REGSTR_VAL_DESCRIPTION TEXT("Description")
#define REGSTR_KEY_SYSTEM       TEXT("System")
#define REGSTR_KEY_USER         TEXT("User")
#define REGSTR_VAL_DPI          TEXT("dpi")
#define REGSTR_VAL_PCICOPTIONS  TEXT("PCICOptions")
#ifndef NEC_98
#define PCIC_DEFAULT_IRQMASK    0x4EB8
#else
#define PCIC_DEFAULT_IRQMASK    0x1468
#endif
#define PCIC_DEFAULT_NUMSOCKETS 0
#define REGSTR_VAL_PCICIRQMAP   TEXT("PCICIRQMap")
#define REGSTR_PATH_APPEARANCE  TEXT("Control Panel\\Appearance")
#define REGSTR_PATH_LOOKSCHEMES TEXT("Control Panel\\Appearance\\Schemes")
#define REGSTR_VAL_CUSTOMCOLORS TEXT("CustomColors")
#define REGSTR_PATH_SCREENSAVE          TEXT("Control Panel\\Desktop")
#define REGSTR_VALUE_USESCRPASSWORD TEXT("ScreenSaveUsePassword")
#define REGSTR_VALUE_SCRPASSWORD    TEXT("ScreenSave_Data")
#define REGSTR_VALUE_LOWPOWERTIMEOUT    TEXT("ScreenSaveLowPowerTimeout")
#define REGSTR_VALUE_POWEROFFTIMEOUT    TEXT("ScreenSavePowerOffTimeout")
#define REGSTR_VALUE_LOWPOWERACTIVE     TEXT("ScreenSaveLowPowerActive")
#define REGSTR_VALUE_POWEROFFACTIVE     TEXT("ScreenSavePowerOffActive")
#define REGSTR_PATH_WINDOWSAPPLETS TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Applets")
#define REGSTR_PATH_SYSTRAY TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Applets\\SysTray")
#define REGSTR_VAL_SYSTRAYSVCS TEXT("Services")
#define REGSTR_VAL_SYSTRAYBATFLAGS TEXT("PowerFlags")
#define REGSTR_VAL_SYSTRAYPCCARDFLAGS TEXT("PCMCIAFlags")
#define REGSTR_PATH_NETWORK_USERSETTINGS        TEXT("Network")
#define REGSTR_KEY_NETWORK_PERSISTENT           TEXT("\\Persistent")
#define REGSTR_KEY_NETWORK_RECENT               TEXT("\\Recent")
#define REGSTR_VAL_REMOTE_PATH                  TEXT("RemotePath")
#define REGSTR_VAL_USER_NAME                    TEXT("UserName")
#define REGSTR_VAL_PROVIDER_NAME                TEXT("ProviderName")
#define REGSTR_VAL_CONNECTION_TYPE              TEXT("ConnectionType")
#define REGSTR_VAL_UPGRADE                      TEXT("Upgrade")
#define REGSTR_KEY_LOGON TEXT("\\Logon")
#define REGSTR_VAL_MUSTBEVALIDATED  TEXT("MustBeValidated")
#define REGSTR_VAL_RUNLOGINSCRIPT       TEXT("ProcessLoginScript")
#define REGSTR_KEY_NETWORKPROVIDER TEXT("\\NetworkProvider")
#define REGSTR_PATH_NW32NETPROVIDER REGSTR_PATH_SERVICES TEXT("\\NWNP32") REGSTR_KEY_NETWORKPROVIDER
#define REGSTR_PATH_MS32NETPROVIDER REGSTR_PATH_SERVICES TEXT("\\MSNP32") REGSTR_KEY_NETWORKPROVIDER
#define REGSTR_VAL_AUTHENT_AGENT TEXT("AuthenticatingAgent")
#define REGSTR_VAL_PREFREDIR TEXT("PreferredRedir")
#define REGSTR_VAL_AUTOSTART TEXT("AutoStart")
#define REGSTR_VAL_AUTOLOGON TEXT("AutoLogon")
#define REGSTR_VAL_NETCARD TEXT("Netcard")
#define REGSTR_VAL_TRANSPORT TEXT("Transport")
#define REGSTR_VAL_DYNAMIC TEXT("Dynamic")
#define REGSTR_VAL_TRANSITION TEXT("Transition")
#define REGSTR_VAL_STATICDRIVE TEXT("StaticDrive")
#define REGSTR_VAL_LOADHI TEXT("LoadHi")
#define REGSTR_VAL_LOADRMDRIVERS TEXT("LoadRMDrivers")
#define REGSTR_VAL_SETUPN TEXT("SetupN")
#define REGSTR_VAL_SETUPNPATH TEXT("SetupNPath")
#define REGSTR_VAL_WRKGRP_FORCEMAPPING TEXT("WrkgrpForceMapping")
#define REGSTR_VAL_WRKGRP_REQUIRED TEXT("WrkgrpRequired")
#define REGSTR_PATH_CURRENT_CONTROL_SET TEXT("System\\CurrentControlSet\\Control")
#define REGSTR_VAL_CURRENT_USER                 TEXT("Current User")
#define REGSTR_PATH_PWDPROVIDER         TEXT("System\\CurrentControlSet\\Control\\PwdProvider")
#define REGSTR_VAL_PWDPROVIDER_PATH TEXT("ProviderPath")
#define REGSTR_VAL_PWDPROVIDER_DESC TEXT("Description")
#define REGSTR_VAL_PWDPROVIDER_CHANGEPWD TEXT("ChangePassword")
#define REGSTR_VAL_PWDPROVIDER_CHANGEPWDHWND TEXT("ChangePasswordHwnd")
#define REGSTR_VAL_PWDPROVIDER_GETPWDSTATUS TEXT("GetPasswordStatus")
#define REGSTR_VAL_PWDPROVIDER_ISNP TEXT("NetworkProvider")
#define REGSTR_VAL_PWDPROVIDER_CHANGEORDER TEXT("ChangeOrder")
#define REGSTR_PATH_POLICIES    TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Policies")
#define REGSTR_PATH_UPDATE              TEXT("System\\CurrentControlSet\\Control\\Update")
#define REGSTR_VALUE_ENABLE             TEXT("Enable")
#define REGSTR_VALUE_VERBOSE    TEXT("Verbose")
#define REGSTR_VALUE_NETPATH    TEXT("NetworkPath")
#define REGSTR_VALUE_DEFAULTLOC TEXT("UseDefaultNetLocation")
#define REGSTR_KEY_NETWORK              TEXT("Network")
#define REGSTR_KEY_SYSTEM               TEXT("System")
#define REGSTR_KEY_PRINTERS             TEXT("Printers")
#define REGSTR_KEY_WINOLDAPP            TEXT("WinOldApp")
#define REGSTR_KEY_EXPLORER             TEXT("Explorer")
#define REGSTR_PATH_RUN_POLICY          REGSTR_PATH_POLICIES TEXT("\\Explorer\\Run")
#define REGSTR_VAL_NOFILESHARING                TEXT("NoFileSharing")
#define REGSTR_VAL_NOPRINTSHARING               TEXT("NoPrintSharing")
#define REGSTR_VAL_NOFILESHARINGCTRL    TEXT("NoFileSharingControl")
#define REGSTR_VAL_NOPRINTSHARINGCTRL   TEXT("NoPrintSharingControl")
#define REGSTR_VAL_HIDESHAREPWDS                TEXT("HideSharePwds")
#define REGSTR_VAL_DISABLEPWDCACHING    TEXT("DisablePwdCaching")
#define REGSTR_VAL_ALPHANUMPWDS                 TEXT("AlphanumPwds")
#define REGSTR_VAL_NETSETUP_DISABLE                     TEXT("NoNetSetup")
#define REGSTR_VAL_NETSETUP_NOCONFIGPAGE        TEXT("NoNetSetupConfigPage")
#define REGSTR_VAL_NETSETUP_NOIDPAGE            TEXT("NoNetSetupIDPage")
#define REGSTR_VAL_NETSETUP_NOSECURITYPAGE      TEXT("NoNetSetupSecurityPage")
#define REGSTR_VAL_SYSTEMCPL_NOVIRTMEMPAGE  TEXT("NoVirtMemPage")
#define REGSTR_VAL_SYSTEMCPL_NODEVMGRPAGE   TEXT("NoDevMgrPage")
#define REGSTR_VAL_SYSTEMCPL_NOCONFIGPAGE       TEXT("NoConfigPage")
#define REGSTR_VAL_SYSTEMCPL_NOFILESYSPAGE      TEXT("NoFileSysPage")
#define REGSTR_VAL_DISPCPL_NODISPCPL            TEXT("NoDispCPL")
#define REGSTR_VAL_DISPCPL_NOBACKGROUNDPAGE TEXT("NoDispBackgroundPage")
#define REGSTR_VAL_DISPCPL_NOSCRSAVPAGE TEXT("NoDispScrSavPage")
#define REGSTR_VAL_DISPCPL_NOAPPEARANCEPAGE TEXT("NoDispAppearancePage")
#define REGSTR_VAL_DISPCPL_NOSETTINGSPAGE TEXT("NoDispSettingsPage")
#define REGSTR_VAL_SECCPL_NOSECCPL                      TEXT("NoSecCPL")
#define REGSTR_VAL_SECCPL_NOPWDPAGE                     TEXT("NoPwdPage")
#define REGSTR_VAL_SECCPL_NOADMINPAGE           TEXT("NoAdminPage")
#define REGSTR_VAL_SECCPL_NOPROFILEPAGE         TEXT("NoProfilePage")
#define REGSTR_VAL_PRINTERS_HIDETABS            TEXT("NoPrinterTabs")
#define REGSTR_VAL_PRINTERS_NODELETE            TEXT("NoDeletePrinter")
#define REGSTR_VAL_PRINTERS_NOADD                       TEXT("NoAddPrinter")
#define REGSTR_VAL_WINOLDAPP_DISABLED           TEXT("Disabled")
#define REGSTR_VAL_WINOLDAPP_NOREALMODE         TEXT("NoRealMode")
#define REGSTR_VAL_NOENTIRENETWORK                      TEXT("NoEntireNetwork")
#define REGSTR_VAL_NOWORKGROUPCONTENTS          TEXT("NoWorkgroupContents")
#define REGSTR_VAL_UNDOCK_WITHOUT_LOGON         TEXT("UndockWithoutLogon")
#define REGSTR_VAL_MINPWDLEN                    TEXT("MinPwdLen")
#define REGSTR_VAL_PWDEXPIRATION                TEXT("PwdExpiration")
#define REGSTR_VAL_WIN31PROVIDER                TEXT("Win31Provider")
#define REGSTR_VAL_DISABLEREGTOOLS              TEXT("DisableRegistryTools")
#define REGSTR_PATH_WINLOGON    TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Winlogon")
#define REGSTR_VAL_LEGALNOTICECAPTION   TEXT("LegalNoticeCaption")
#define REGSTR_VAL_LEGALNOTICETEXT              TEXT("LegalNoticeText")
#define REGSTR_VAL_DRIVE_SPINDOWN               TEXT("NoDispSpinDown")
#define REGSTR_VAL_SHUTDOWN_FLAGS       	TEXT("ShutdownFlags")
#define REGSTR_VAL_RESTRICTRUN  TEXT("RestrictRun")
#define REGSTR_KEY_POL_USERS            TEXT("Users")
#define REGSTR_KEY_POL_COMPUTERS        TEXT("Computers")
#define REGSTR_KEY_POL_USERGROUPS       TEXT("UserGroups")
#define REGSTR_KEY_POL_DEFAULT          TEXT(".default")
#define REGSTR_KEY_POL_USERGROUPDATA TEXT("GroupData\\UserGroups\\Priority")
#define REGSTR_PATH_TIMEZONE        TEXT("System\\CurrentControlSet\\Control\\TimeZoneInformation")
#define REGSTR_VAL_TZBIAS           TEXT("Bias")
#define REGSTR_VAL_TZDLTBIAS        TEXT("DaylightBias")
#define REGSTR_VAL_TZSTDBIAS        TEXT("StandardBias")
#define REGSTR_VAL_TZACTBIAS        TEXT("ActiveTimeBias")
#define REGSTR_VAL_TZDLTFLAG        TEXT("DaylightFlag")
#define REGSTR_VAL_TZSTDSTART       TEXT("StandardStart")
#define REGSTR_VAL_TZDLTSTART       TEXT("DaylightStart")
#define REGSTR_VAL_TZDLTNAME        TEXT("DaylightName")
#define REGSTR_VAL_TZSTDNAME        TEXT("StandardName")
#define REGSTR_VAL_TZNOCHANGESTART  TEXT("NoChangeStart")
#define REGSTR_VAL_TZNOCHANGEEND    TEXT("NoChangeEnd")
#define REGSTR_VAL_TZNOAUTOTIME     TEXT("DisableAutoDaylightTimeSet")
#define REGSTR_PATH_FLOATINGPOINTPROCESSOR TEXT("HARDWARE\\DESCRIPTION\\System\\FloatingPointProcessor")
#define REGSTR_PATH_FLOATINGPOINTPROCESSOR0 TEXT("HARDWARE\\DESCRIPTION\\System\\FloatingPointProcessor\\0")
#define REGSTR_PATH_COMPUTRNAME TEXT("System\\CurrentControlSet\\Control\\ComputerName\\ComputerName")
#define REGSTR_VAL_COMPUTRNAME TEXT("ComputerName")
#define REGSTR_PATH_SHUTDOWN TEXT("System\\CurrentControlSet\\Control\\Shutdown")
#define REGSTR_VAL_FORCEREBOOT     TEXT("ForceReboot")
#define REGSTR_VAL_SETUPPROGRAMRAN TEXT("SetupProgramRan")
#define REGSTR_VAL_DOES_POLLING    TEXT("PollingSupportNeeded")
#define REGSTR_PATH_KNOWNDLLS   TEXT("System\\CurrentControlSet\\Control\\SessionManager\\KnownDLLs")
#define REGSTR_PATH_KNOWN16DLLS TEXT("System\\CurrentControlSet\\Control\\SessionManager\\Known16DLLs")
#define REGSTR_PATH_CHECKVERDLLS TEXT("System\\CurrentControlSet\\Control\\SessionManager\\CheckVerDLLs")
#define REGSTR_PATH_WARNVERDLLS  TEXT("System\\CurrentControlSet\\Control\\SessionManager\\WarnVerDLLs")
#define REGSTR_PATH_HACKINIFILE  TEXT("System\\CurrentControlSet\\Control\\SessionManager\\HackIniFiles")
#define REGSTR_PATH_CHECKBADAPPS TEXT("System\\CurrentControlSet\\Control\\SessionManager\\CheckBadApps")
#define REGSTR_PATH_APPPATCH TEXT("System\\CurrentControlSet\\Control\\SessionManager\\AppPatches")
#define REGSTR_PATH_CHECKBADAPPS400 TEXT("System\\CurrentControlSet\\Control\\SessionManager\\CheckBadApps400")
#define REGSTR_PATH_KNOWNVXDS   TEXT("System\\CurrentControlSet\\Control\\SessionManager\\KnownVxDs")
#define REGSTR_VAL_UNINSTALLER_DISPLAYNAME     TEXT("DisplayName")
#define REGSTR_VAL_UNINSTALLER_COMMANDLINE     TEXT("UninstallString")
#define REGSTR_VAL_REINSTALL_DISPLAYNAME        TEXT("DisplayName")
#define REGSTR_VAL_REINSTALL_STRING             TEXT("ReinstallString")
#define REGSTR_VAL_REINSTALL_DEVICEINSTANCEIDS  TEXT("DeviceInstanceIds")
#define REGSTR_PATH_DESKTOP     REGSTR_PATH_SCREENSAVE
#define REGSTR_PATH_MOUSE           TEXT("Control Panel\\Mouse")
#define REGSTR_PATH_KEYBOARD    TEXT("Control Panel\\Keyboard")
#define REGSTR_PATH_COLORS          TEXT("Control Panel\\Colors")
#define REGSTR_PATH_SOUND           TEXT("Control Panel\\Sound")
#define REGSTR_PATH_METRICS         TEXT("Control Panel\\Desktop\\WindowMetrics")
#define REGSTR_PATH_ICONS       TEXT("Control Panel\\Icons")
#define REGSTR_PATH_CURSORS     TEXT("Control Panel\\Cursors")
#define REGSTR_PATH_CHECKDISK   TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Applets\\Check Drive")
#define REGSTR_PATH_CHECKDISKSET    TEXT("Settings")
#define REGSTR_PATH_CHECKDISKUDRVS  TEXT("NoUnknownDDErrDrvs")
#define REGSTR_PATH_FAULT               TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Fault")
#define REGSTR_VAL_FAULT_LOGFILE        TEXT("LogFile")
#define REGSTR_PATH_AEDEBUG             TEXT("Software\\Microsoft\\Windows NT\\CurrentVersion\\AeDebug")
#define REGSTR_VAL_AEDEBUG_DEBUGGER     TEXT("Debugger")
#define REGSTR_VAL_AEDEBUG_AUTO         TEXT("Auto")
#define REGSTR_PATH_GRPCONV     TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\GrpConv")
#define REGSTR_VAL_REGITEMDELETEMESSAGE TEXT("Removal Message")
#define REGSTR_PATH_LASTCHECK           TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\LastCheck")
#define REGSTR_PATH_LASTOPTIMIZE        TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\LastOptimize")
#define REGSTR_PATH_LASTBACKUP          TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\LastBackup")
#define REGSTR_PATH_CHKLASTCHECK        TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Applets\\Check Drive\\LastCheck")
#define REGSTR_PATH_CHKLASTSURFAN       TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Applets\\Check Drive\\LastSurfaceAnalysis")
#ifndef _IN_KERNEL_
typedef struct _DSKTLSYSTEMTIME
{
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
    WORD wResult;
} DSKTLSYSTEMTIME, *PDSKTLSYSTEMTIME, *LPDSKTLSYSTEMTIME;
#endif
#define DTRESULTOK      0
#define DTRESULTFIX     1
#define DTRESULTPROB    2
#define DTRESULTPART    3
#define REGSTR_KEY_SHARES             TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Network\\LanMan")
#define REGSTR_VAL_SHARES_FLAGS   TEXT("Flags")
#define REGSTR_VAL_SHARES_TYPE    TEXT("Type")
#define REGSTR_VAL_SHARES_PATH    TEXT("Path")
#define REGSTR_VAL_SHARES_REMARK  TEXT("Remark")
#define REGSTR_VAL_SHARES_RW_PASS TEXT("Parm1")
#define REGSTR_VAL_SHARES_RO_PASS TEXT("Parm2")
#define REGSTR_PATH_PRINT           TEXT("System\\CurrentControlSet\\Control\\Print")
#define REGSTR_PATH_PRINTERS        TEXT("System\\CurrentControlSet\\Control\\Print\\Printers")
#define REGSTR_PATH_PROVIDERS       TEXT("System\\CurrentControlSet\\Control\\Print\\Providers")
#define REGSTR_PATH_MONITORS        TEXT("System\\CurrentControlSet\\Control\\Print\\Monitors")
#define REGSTR_PATH_ENVIRONMENTS    TEXT("System\\CurrentControlSet\\Control\\Print\\Environments")
#define REGSTR_VAL_START_ON_BOOT    TEXT("StartOnBoot")
#define REGSTR_VAL_PRINTERS_MASK    TEXT("PrintersMask")
#define REGSTR_VAL_DOS_SPOOL_MASK   TEXT("DOSSpoolMask")
#define REGSTR_KEY_CURRENT_ENV      TEXT("\\Windows 4.0")
#define REGSTR_KEY_DRIVERS          TEXT("\\Drivers")
#define REGSTR_KEY_PRINT_PROC       TEXT("\\Print Processors")
#define REGSTR_PATH_EVENTLABELS     TEXT("AppEvents\\EventLabels")
#define REGSTR_PATH_SCHEMES         TEXT("AppEvents\\Schemes")
#define REGSTR_PATH_APPS            REGSTR_PATH_SCHEMES TEXT("\\Apps")
#define REGSTR_PATH_APPS_DEFAULT    REGSTR_PATH_SCHEMES TEXT("\\Apps\\.Default")
#define REGSTR_PATH_NAMES           REGSTR_PATH_SCHEMES TEXT("\\Names")
#define REGSTR_PATH_MULTIMEDIA      REGSTR_PATH_SETUP TEXT("\\Multimedia")
#define REGSTR_PATH_MULTIMEDIA_AUDIO TEXT("Software\\Microsoft\\Multimedia\\Audio")
#define REGSTR_PATH_MULTIMEDIA_AUDIO_IMAGES REGSTR_PATH_MULTIMEDIA_AUDIO TEXT("\\Images")
#define REGSTR_PATH_MEDIARESOURCES  REGSTR_PATH_CURRENT_CONTROL_SET TEXT("\\MediaResources")
#define REGSTR_PATH_MEDIAPROPERTIES REGSTR_PATH_CURRENT_CONTROL_SET TEXT("\\MediaProperties")
#define REGSTR_PATH_PRIVATEPROPERTIES REGSTR_PATH_MEDIAPROPERTIES TEXT("\\PrivateProperties")
#define REGSTR_PATH_PUBLICPROPERTIES REGSTR_PATH_MEDIAPROPERTIES TEXT("\\PublicProperties")
#define REGSTR_PATH_JOYOEM           REGSTR_PATH_PRIVATEPROPERTIES TEXT("\\Joystick\\OEM")
#define REGSTR_PATH_JOYCONFIG        REGSTR_PATH_MEDIARESOURCES TEXT("\\Joystick")
#define REGSTR_KEY_JOYCURR           TEXT("CurrentJoystickSettings")
#define REGSTR_KEY_JOYSETTINGS       TEXT("JoystickSettings")
#define REGSTR_VAL_JOYUSERVALUES     TEXT("JoystickUserValues")
#define REGSTR_VAL_JOYCALLOUT        TEXT("JoystickCallout")
#define REGSTR_VAL_JOYNCONFIG        TEXT("Joystick%dConfiguration")
#define REGSTR_VAL_JOYNOEMNAME       TEXT("Joystick%dOEMName")
#define REGSTR_VAL_JOYNOEMCALLOUT    TEXT("Joystick%dOEMCallout")
#define REGSTR_VAL_JOYOEMCALLOUT        TEXT("OEMCallout")
#define REGSTR_VAL_JOYOEMNAME           TEXT("OEMName")
#define REGSTR_VAL_JOYOEMDATA           TEXT("OEMData")
#define REGSTR_VAL_JOYOEMXYLABEL        TEXT("OEMXYLabel")
#define REGSTR_VAL_JOYOEMZLABEL         TEXT("OEMZLabel")
#define REGSTR_VAL_JOYOEMRLABEL         TEXT("OEMRLabel")
#define REGSTR_VAL_JOYOEMPOVLABEL       TEXT("OEMPOVLabel")
#define REGSTR_VAL_JOYOEMULABEL         TEXT("OEMULabel")
#define REGSTR_VAL_JOYOEMVLABEL         TEXT("OEMVLabel")
#define REGSTR_VAL_JOYOEMTESTMOVEDESC   TEXT("OEMTestMoveDesc")
#define REGSTR_VAL_JOYOEMTESTBUTTONDESC TEXT("OEMTestButtonDesc")
#define REGSTR_VAL_JOYOEMTESTMOVECAP    TEXT("OEMTestMoveCap")
#define REGSTR_VAL_JOYOEMTESTBUTTONCAP  TEXT("OEMTestButtonCap")
#define REGSTR_VAL_JOYOEMTESTWINCAP     TEXT("OEMTestWinCap")
#define REGSTR_VAL_JOYOEMCALCAP         TEXT("OEMCalCap")
#define REGSTR_VAL_JOYOEMCALWINCAP      TEXT("OEMCalWinCap")
#define REGSTR_VAL_JOYOEMCAL1           TEXT("OEMCal1")
#define REGSTR_VAL_JOYOEMCAL2           TEXT("OEMCal2")
#define REGSTR_VAL_JOYOEMCAL3           TEXT("OEMCal3")
#define REGSTR_VAL_JOYOEMCAL4           TEXT("OEMCal4")
#define REGSTR_VAL_JOYOEMCAL5           TEXT("OEMCal5")
#define REGSTR_VAL_JOYOEMCAL6           TEXT("OEMCal6")
#define REGSTR_VAL_JOYOEMCAL7           TEXT("OEMCal7")
#define REGSTR_VAL_JOYOEMCAL8           TEXT("OEMCal8")
#define REGSTR_VAL_JOYOEMCAL9           TEXT("OEMCal9")
#define REGSTR_VAL_JOYOEMCAL10          TEXT("OEMCal10")
#define REGSTR_VAL_JOYOEMCAL11          TEXT("OEMCal11")
#define REGSTR_VAL_JOYOEMCAL12          TEXT("OEMCal12")
#define REGSTR_VAL_AUDIO_BITMAP TEXT("bitmap")
#define REGSTR_VAL_AUDIO_ICON TEXT("icon")
#define REGSTR_PATH_DEVICEINSTALLER     TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Device Installer")
#define REGSTR_PATH_DIFX     TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\DIFX")
#define REGSTR_VAL_SEARCHOPTIONS        TEXT("SearchOptions")
#ifndef _IN_KERNEL_
#define REGSTR_PATH_BIOSINFO            TEXT("System\\CurrentControlSet\\Control\\BiosInfo")
#else
#define REGSTR_PATH_BIOSINFO            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\BiosInfo"
#endif
#ifndef _IN_KERNEL_
#define REGSTR_PATH_PCIIR               TEXT("System\\CurrentControlSet\\Control\\Pnp\\PciIrqRouting")
#define REGSTR_VAL_OPTIONS              TEXT("Options")
#define REGSTR_VAL_STAT                 TEXT("Status")
#define REGSTR_VAL_TABLE_STAT           TEXT("TableStatus")
#define REGSTR_VAL_MINIPORT_STAT        TEXT("MiniportStatus")
#else
#define REGSTR_PATH_PCIIR               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Pnp\\PciIrqRouting"
#define REGSTR_VAL_OPTIONS              L"Options"
#define REGSTR_VAL_STAT                 L"Status"
#define REGSTR_VAL_TABLE_STAT           L"TableStatus"
#define REGSTR_VAL_MINIPORT_STAT        L"MiniportStatus"
#endif
#define PIR_OPTION_ENABLED                  0x00000001
#define PIR_OPTION_REGISTRY                 0x00000002
#define PIR_OPTION_MSSPEC                   0x00000004
#define PIR_OPTION_REALMODE                 0x00000008
#define PIR_OPTION_DEFAULT                  0x0000000f
#define PIR_STATUS_ERROR                    0x00000000
#define PIR_STATUS_ENABLED                  0x00000001
#define PIR_STATUS_DISABLED                 0x00000002
#define PIR_STATUS_MAX                      0x00000003
#define PIR_STATUS_TABLE_REGISTRY           0x00000000
#define PIR_STATUS_TABLE_MSSPEC                     0x00000001
#define PIR_STATUS_TABLE_REALMODE                   0x00000002
#define PIR_STATUS_TABLE_NONE                   0x00000003
#define PIR_STATUS_TABLE_ERROR                      0x00000004
#define PIR_STATUS_TABLE_BAD                        0x00000005
#define PIR_STATUS_TABLE_SUCCESS            0x00000006
#define PIR_STATUS_TABLE_MAX                0x00000007
#define PIR_STATUS_MINIPORT_NORMAL                  0x00000000
#define PIR_STATUS_MINIPORT_COMPATIBLE      0x00000001
#define PIR_STATUS_MINIPORT_OVERRIDE        0x00000002
#define PIR_STATUS_MINIPORT_NONE                    0x00000003
#define PIR_STATUS_MINIPORT_ERROR                   0x00000004
#define PIR_STATUS_MINIPORT_NOKEY                   0x00000005
#define PIR_STATUS_MINIPORT_SUCCESS                 0x00000006
#define PIR_STATUS_MINIPORT_INVALID                 0x00000007
#define PIR_STATUS_MINIPORT_MAX             0x00000008
#define REGSTR_PATH_LASTGOOD            TEXT("System\\LastKnownGoodRecovery\\LastGood")
#define REGSTR_PATH_LASTGOODTMP         TEXT("System\\LastKnownGoodRecovery\\LastGood.Tmp")
#define LASTGOOD_OPERATION              0x000000FF
#define LASTGOOD_OPERATION_NOPOSTPROC   0x00000000
#define LASTGOOD_OPERATION_DELETE       0x00000001
#endif
