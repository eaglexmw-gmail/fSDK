/*+@@file@@----------------------------------------------------------------*//*!
 \file		DeviceCategories.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 17:57:30 2016
 \date		Modified on Tue Jul  5 17:57:30 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __DeviceCategories_h__
#define __DeviceCategories_h__
#if __POCC__ >= 500
#pragma once
#endif
#define DEVICEDISPLAY_CATEGORY_UNKNOWN                              L"Unknown"
#define DEVICEDISPLAY_CATEGORY_OTHER                                L"Other"
#define DEVICEDISPLAY_CATEGORY_AUDIO                                L"Audio"
#define DEVICEDISPLAY_CATEGORY_AUDIO_ADAPTER                        L"Audio.Adapter"
#define DEVICEDISPLAY_CATEGORY_AUDIO_HEADPHONE                      L"Audio.Headphone"
#define DEVICEDISPLAY_CATEGORY_AUDIO_MICROPHONE                     L"Audio.Microphone"
#define DEVICEDISPLAY_CATEGORY_AUDIO_SPEAKERPHONE                   L"Audio.Speakerphone"
#define DEVICEDISPLAY_CATEGORY_AUDIO_SPEAKERS                       L"Audio.Speakers"
#define DEVICEDISPLAY_CATEGORY_AUDIO_SPEAKERS_WIRELESS              L"Audio.Speakers.Wireless"
#define DEVICEDISPLAY_CATEGORY_AUDIO_SPEAKERS_USB                   L"Audio.Speakers.USB"
#define DEVICEDISPLAY_CATEGORY_COMMUNICATION                        L"Communication"
#define DEVICEDISPLAY_CATEGORY_COMMUNICATION_HEADSET                L"Communication.Headset"
#define DEVICEDISPLAY_CATEGORY_COMMUNICATION_HEADSET_BLUETOOTH      L"Communication.Headset.Bluetooth"
#define DEVICEDISPLAY_CATEGORY_COMMUNICATION_PHONE                  L"Communication.Phone"
#define DEVICEDISPLAY_CATEGORY_COMMUNICATION_PHONE_CELL             L"Communication.Phone.Cell"
#define DEVICEDISPLAY_CATEGORY_COMMUNICATION_PHONE_IP               L"Communication.Phone.IP"
#define DEVICEDISPLAY_CATEGORY_COMMUNICATION_PHONE_SPEAKER          L"Communication.Phone.Speaker"
#define DEVICEDISPLAY_CATEGORY_COMPUTER                             L"Computer"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_ALLINONE                    L"Computer.AllInOne"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_DESKTOP                     L"Computer.Desktop"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_DESKTOP_LOWPROFILE          L"Computer.Desktop.LowProfile"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_DESKTOP_PIZZABOX            L"Computer.Desktop.Pizzabox"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_HANDHELD                    L"Computer.Handheld"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_HANDHELD_WINDOWS            L"Computer.Handheld.Windows"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_LAPTOP                      L"Computer.Laptop"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_LUNCHBOX                    L"Computer.Lunchbox"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_NETBOOK                     L"Computer.Netbook"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_NOTEBOOK                    L"Computer.Notebook"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_NOTEBOOK_SUB                L"Computer.Notebook.Sub"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_PORTABLE                    L"Computer.Portable"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_RACKMOUNT                   L"Computer.Rackmount"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_SEALED                      L"Computer.Sealed"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_SERVER                      L"Computer.Server"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_SPACESAVING                 L"Computer.SpaceSaving"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_TABLET                      L"Computer.Tablet"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_THINCLIENT                  L"Computer.ThinClient"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_TOWER                       L"Computer.Tower"
#define DEVICEDISPLAY_CATEGORY_COMPUTER_TOWER_MINI                  L"Computer.Tower.Mini"
#define DEVICEDISPLAY_CATEGORY_DISPLAY                              L"Display"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_MONITOR                      L"Display.Monitor"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_MONITOR_CRT                  L"Display.Monitor.CRT"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_MONITOR_LCD                  L"Display.Monitor.LCD"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_MONITOR_PLASMA               L"Display.Monitor.Plasma"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_PICTUREFRAME                 L"Display.PictureFrame"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_PROJECTOR                    L"Display.Projector"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_SIDESHOW                     L"Display.SideShow"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_TV                           L"Display.TV"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_TV_CRT                       L"Display.TV.CRT"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_TV_LCD                       L"Display.TV.LCD"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_TV_PLASMA                    L"Display.TV.Plasma"
#define DEVICEDISPLAY_CATEGORY_DISPLAY_TV_DLP                       L"Display.TV.DLP"
#define DEVICEDISPLAY_CATEGORY_COMPONENT                            L"Component"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_AUDIOADAPTER               L"Component.AudioAdapter"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_BATTERY                    L"Component.Battery"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_BRIDGE                     L"Component.Bridge"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_BRIDGE_NETWORK             L"Component.Bridge.Network"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_BRIDGE_STORAGE             L"Component.Bridge.Storage"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CABLE                      L"Component.Cable"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CABLE_TRANSFER             L"Component.Cable.Transfer"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CABLE_TRANSFER_USB         L"Component.Cable.Transfer.USB"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CAPTURE                    L"Component.Capture"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CAPTURE_VIDEO              L"Component.Capture.Video"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER                 L"Component.Controller"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_1394            L"Component.Controller.1394"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_BLUETOOTH       L"Component.Controller.Bluetooth"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_CARDBUS         L"Component.Controller.CardBus"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_IR              L"Component.Controller.IR"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_IR_MCE          L"Component.Controller.IR.MCE"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_SDH             L"Component.Controller.SDH"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_SERIAL          L"Component.Controller.Serial"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_STORAGE         L"Component.Controller.Storage"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_STORAGE_IDE     L"Component.Controller.Storage.IDE"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_STORAGE_ISCSI   L"Component.Controller.Storage.iSCSI"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_STORAGE_SATA    L"Component.Controller.Storage.SATA"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_STORAGE_SCSI    L"Component.Controller.Storage.SCSI"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_STORAGE_RAID    L"Component.Controller.Storage.Raid"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_USB             L"Component.Controller.USB"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_CONTROLLER_WUSB            L"Component.Controller.WUSB"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_GRAPHICSCARD               L"Component.GraphicsCard"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_HUB                        L"Component.Hub"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_HUB_1394                   L"Component.Hub.1394"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_HUB_USB                    L"Component.Hub.USB"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_KVM                        L"Component.KVM"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_NIC                        L"Component.NIC"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_SMARTCARDREADER            L"Component.SmartCardReader"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_SYSTEM                     L"Component.System"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_SYSTEM_BOARD               L"Component.System.Board"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_SYSTEM_MEMORY              L"Component.System.Memory"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_SYSTEM_PROCESSOR           L"Component.System.Processor"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER                      L"Component.Tuner"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV                   L"Component.Tuner.TV"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_ATSC              L"Component.Tuner.TV.ATSC"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_DCB_S             L"Component.Tuner.TV.DCB-S"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_DVB_C             L"Component.Tuner.TV.DVB-C"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_DVB_T             L"Component.Tuner.TV.DVB-T"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_ISDB_T            L"Component.Tuner.TV.ISDB-T"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_NTSC              L"Component.Tuner.TV.NTSC"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_NTSCMJ            L"Component.Tuner.TV.NTSCMJ"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_OPENCABLE         L"Component.Tuner.TV.OpenCable"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_PAL               L"Component.Tuner.TV.PAL"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_PROPRIETARY       L"Component.Tuner.TV.Proprietary"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_QAM               L"Component.Tuner.TV.QAM"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_TV_SECAM             L"Component.Tuner.TV.SECAM"
#define DEVICEDISPLAY_CATEGORY_COMPONENT_TUNER_RADIO                L"Component.Tuner.Radio"
#define DEVICEDISPLAY_CATEGORY_INPUT                                L"Input"
#define DEVICEDISPLAY_CATEGORY_INPUT_DIGITIZER                      L"Input.Digitizer"
#define DEVICEDISPLAY_CATEGORY_INPUT_DIGITIZER_MULTITOUCH           L"Input.Digitizer.Multitouch"
#define DEVICEDISPLAY_CATEGORY_INPUT_DIGITIZER_PEN                  L"Input.Digitizer.Pen"
#define DEVICEDISPLAY_CATEGORY_INPUT_DIGITIZER_TOUCHPAD             L"Input.Digitizer.Touchpad"
#define DEVICEDISPLAY_CATEGORY_INPUT_DIGITIZER_TOUCHSCREEN          L"Input.Digitizer.Touchscreen"
#define DEVICEDISPLAY_CATEGORY_INPUT_GAMING                         L"Input.Gaming"
#define DEVICEDISPLAY_CATEGORY_INPUT_GAMING_COMMON                  L"Input.Gaming.Common"
#define DEVICEDISPLAY_CATEGORY_INPUT_GAMING_CONTROLLER              L"Input.Gaming.Controller"
#define DEVICEDISPLAY_CATEGORY_INPUT_GAMING_GAMEPAD                 L"Input.Gaming.Gamepad"
#define DEVICEDISPLAY_CATEGORY_INPUT_GAMING_GENERIC                 L"Input.Gaming.Generic"
#define DEVICEDISPLAY_CATEGORY_INPUT_GAMING_STEERING                L"Input.Gaming.Steering"
#define DEVICEDISPLAY_CATEGORY_INPUT_KEYBOARD                       L"Input.Keyboard"
#define DEVICEDISPLAY_CATEGORY_INPUT_KVM                            L"Input.KVM"
#define DEVICEDISPLAY_CATEGORY_INPUT_MOUSE                          L"Input.Mouse"
#define DEVICEDISPLAY_CATEGORY_INPUT_TRACKBALL                      L"Input.Trackball"
#define DEVICEDISPLAY_CATEGORY_INPUT_REMOTE                         L"Input.Remote"
#define DEVICEDISPLAY_CATEGORY_INPUT_REMOTE_MCE                     L"Input.Remote.MCE"
#define DEVICEDISPLAY_CATEGORY_HEALTH                               L"Health"
#define DEVICEDISPLAY_CATEGORY_HEALTH_BLOODGLUCOSE                  L"Health.BloodGlucose"
#define DEVICEDISPLAY_CATEGORY_HEALTH_BLOODPRESSURE                 L"Health.BloodPressure"
#define DEVICEDISPLAY_CATEGORY_HEALTH_HEARTRATE                     L"Health.HeartRate"
#define DEVICEDISPLAY_CATEGORY_HEALTH_PEDOMETER                     L"Health.Pedometer"
#define DEVICEDISPLAY_CATEGORY_MEDIA                                L"Media"
#define DEVICEDISPLAY_CATEGORY_MEDIA_SMARTCARD                      L"Media.SmartCard"
#define DEVICEDISPLAY_CATEGORY_MEDIA_STORAGE                        L"Media.Storage"
#define DEVICEDISPLAY_CATEGORY_MEDIA_STORAGE_FLASH                  L"Media.Storage.Flash"
#define DEVICEDISPLAY_CATEGORY_MEDIA_STORAGE_FLASH_COMPACTFLASH     L"Media.Storage.Flash.CompactFlash"
#define DEVICEDISPLAY_CATEGORY_MEDIA_STORAGE_FLASH_MEMORYSTICK      L"Media.Storage.Flash.MemoryStick"
#define DEVICEDISPLAY_CATEGORY_MEDIA_STORAGE_FLASH_SD               L"Media.Storage.Flash.SD"
#define DEVICEDISPLAY_CATEGORY_MEDIA_STORAGE_OPTICAL                L"Media.Storage.Optical"
#define DEVICEDISPLAY_CATEGORY_MEDIA_STORAGE_OPTICAL_CD             L"Media.Storage.Optical.CD"
#define DEVICEDISPLAY_CATEGORY_MEDIA_STORAGE_OPTICAL_DVD            L"Media.Storage.Optical.DVD"
#define DEVICEDISPLAY_CATEGORY_MEDIA_STORAGE_OPTICAL_BLURAY         L"Media.Storage.Optical.BluRay"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA                           L"Multimedia"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA_DMC                       L"Multimedia.DMC"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA_DMP                       L"Multimedia.DMP"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA_DMR                       L"Multimedia.DMR"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA_DMR_MCX                   L"Multimedia.DMR.MCX"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA_DMS                       L"Multimedia.DMS"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA_DVR                       L"Multimedia.DVR"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA_GAMECONSOLE               L"Multimedia.GameConsole"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA_PMP                       L"Multimedia.PMP"
#define DEVICEDISPLAY_CATEGORY_MULTIMEDIA_VOICERECORDER             L"Multimedia.VoiceRecorder"
#define DEVICEDISPLAY_CATEGORY_NETWORK                              L"Network"
#define DEVICEDISPLAY_CATEGORY_NETWORK_ACCESSPOINT                  L"Network.AccessPoint"
#define DEVICEDISPLAY_CATEGORY_NETWORK_BLUETOOTH                    L"Network.Bluetooth"
#define DEVICEDISPLAY_CATEGORY_NETWORK_BRIDGE                       L"Network.Bridge"
#define DEVICEDISPLAY_CATEGORY_NETWORK_BRIDGE_WIFI2ETHER            L"Network.Bridge.Wifi2Ether"
#define DEVICEDISPLAY_CATEGORY_NETWORK_HOMEAUTOMATION               L"Network.HomeAutomation"
#define DEVICEDISPLAY_CATEGORY_NETWORK_MOBILEBROADBAND              L"Network.MobileBroadband"
#define DEVICEDISPLAY_CATEGORY_NETWORK_MODEM                        L"Network.Modem"
#define DEVICEDISPLAY_CATEGORY_NETWORK_NIC                          L"Network.NIC"
#define DEVICEDISPLAY_CATEGORY_NETWORK_NIC_ETHERNET                 L"Network.NIC.Ethernet"
#define DEVICEDISPLAY_CATEGORY_NETWORK_NIC_IR                       L"Network.NIC.IR"
#define DEVICEDISPLAY_CATEGORY_NETWORK_NIC_PLC                      L"Network.NIC.PLC"
#define DEVICEDISPLAY_CATEGORY_NETWORK_NIC_WIRELESS                 L"Network.NIC.Wireless"
#define DEVICEDISPLAY_CATEGORY_NETWORK_PRINTSERVER                  L"Network.PrintServer"
#define DEVICEDISPLAY_CATEGORY_NETWORK_ROUTER                       L"Network.Router"
#define DEVICEDISPLAY_CATEGORY_NETWORK_ROUTER_WIRELESS              L"Network.Router.Wireless"
#define DEVICEDISPLAY_CATEGORY_NETWORK_SWITCH                       L"Network.Switch"
#define DEVICEDISPLAY_CATEGORY_NETWORK_UWB                          L"Network.UWB"
#define DEVICEDISPLAY_CATEGORY_NETWORK_WUSB                         L"Network.WUSB"
#define DEVICEDISPLAY_CATEGORY_NETWORK_WUSB_DWA                     L"Network.WUSB.DWA"
#define DEVICEDISPLAY_CATEGORY_PRINTFAX                             L"PrintFax"
#define DEVICEDISPLAY_CATEGORY_PRINTFAX_FAX                         L"PrintFax.FAX"
#define DEVICEDISPLAY_CATEGORY_PRINTFAX_MFP                         L"PrintFax.MFP"
#define DEVICEDISPLAY_CATEGORY_PRINTFAX_PRINTER                     L"PrintFax.Printer"
#define DEVICEDISPLAY_CATEGORY_PRINTFAX_PRINTER_INKJET              L"PrintFax.Printer.Inkjet"
#define DEVICEDISPLAY_CATEGORY_PRINTFAX_PRINTER_LASER               L"PrintFax.Printer.Laser"
#define DEVICEDISPLAY_CATEGORY_SENSOR                               L"Sensor"
#define DEVICEDISPLAY_CATEGORY_SENSOR_ELECTRICAL                    L"Sensor.Electrical"
#define DEVICEDISPLAY_CATEGORY_SENSOR_ENVIRONMENTAL                 L"Sensor.Environmental"
#define DEVICEDISPLAY_CATEGORY_SENSOR_ENVIRONMENTAL_TEMP            L"Sensor.Environmental.Temp"
#define DEVICEDISPLAY_CATEGORY_SENSOR_LIGHT                         L"Sensor.Light"
#define DEVICEDISPLAY_CATEGORY_SENSOR_LOCATON                       L"Sensor.Location"
#define DEVICEDISPLAY_CATEGORY_SENSOR_LOCATON_GPS                   L"Sensor.Location.GPS"
#define DEVICEDISPLAY_CATEGORY_SENSOR_MECHANICAL                    L"Sensor.Mechanical"
#define DEVICEDISPLAY_CATEGORY_SENSOR_MOTION                        L"Sensor.Motion"
#define DEVICEDISPLAY_CATEGORY_SENSOR_ORIENTATION                   L"Sensor.Orientation"
#define DEVICEDISPLAY_CATEGORY_SENSOR_PROXIMITY                     L"Sensor.Proximity"
#define DEVICEDISPLAY_CATEGORY_SENSOR_PROXIMITY_NFC                 L"Sensor.Proximity.NFC"
#define DEVICEDISPLAY_CATEGORY_SENSOR_PROXIMITY_RFID                L"Sensor.Proximity.RFID"
#define DEVICEDISPLAY_CATEGORY_STORAGE                              L"Storage"
#define DEVICEDISPLAY_CATEGORY_STORAGE_CARDREADER                   L"Storage.CardReader"
#define DEVICEDISPLAY_CATEGORY_STORAGE_CARDREADER_COMBO             L"Storage.CardReader.Combo"
#define DEVICEDISPLAY_CATEGORY_STORAGE_CHANGER                      L"Storage.Changer"
#define DEVICEDISPLAY_CATEGORY_STORAGE_CHANGER_OPTICAL              L"Storage.Changer.Optical"
#define DEVICEDISPLAY_CATEGORY_STORAGE_FDD                          L"Storage.FDD"
#define DEVICEDISPLAY_CATEGORY_STORAGE_HDD                          L"Storage.HDD"
#define DEVICEDISPLAY_CATEGORY_STORAGE_HDD_SOLIDSTATE               L"Storage.HDD.SolidState"
#define DEVICEDISPLAY_CATEGORY_STORAGE_NETWORK                      L"Storage.Network"
#define DEVICEDISPLAY_CATEGORY_STORAGE_NETWORK_WIRELESS             L"Storage.Network.Wireless"
#define DEVICEDISPLAY_CATEGORY_STORAGE_OPTICAL                      L"Storage.Optical"
#define DEVICEDISPLAY_CATEGORY_STORAGE_OPTICAL_BLURAY               L"Storage.Optical.BluRay"
#define DEVICEDISPLAY_CATEGORY_STORAGE_OPTICAL_CD                   L"Storage.Optical.CD"
#define DEVICEDISPLAY_CATEGORY_STORAGE_OPTICAL_DVD                  L"Storage.Optical.DVD"
#define DEVICEDISPLAY_CATEGORY_STORAGE_TAPE                         L"Storage.Tape"
#define DEVICEDISPLAY_CATEGORY_STORAGE_UFD                          L"Storage.UFD"
#define DEVICEDISPLAY_CATEGORY_IMAGING                              L"Imaging"
#define DEVICEDISPLAY_CATEGORY_IMAGING_CAMCORDER                    L"Imaging.Camcorder"
#define DEVICEDISPLAY_CATEGORY_IMAGING_CAMERA                       L"Imaging.Camera"
#define DEVICEDISPLAY_CATEGORY_IMAGING_SCANNER                      L"Imaging.Scanner"
#define DEVICEDISPLAY_CATEGORY_IMAGING_WEBCAM                       L"Imaging.Webcam"
#define DEVICEDISPLAY_CATEGORY_PERSONALIDENTITY                     L"PersonalIdentity"
#define DEVICEDISPLAY_CATEGORY_PERSONALIDENTITY_FACESCANNER         L"PersonalIdentity.FaceScanner"
#define DEVICEDISPLAY_CATEGORY_PERSONALIDENTITY_FINGERPRINTREADER   L"PersonalIdentity.FingerprintReader"
#define DEVICEDISPLAY_CATEGORY_PERSONALIDENTITY_RETINALSCANNER      L"PersonalIdentity.RetinalScanner"
#define DEVICEDISPLAY_CATEGORY_PERSONALIDENTITY_SMARTCARD           L"PersonalIdentity.Smartcard"
#define DEVICEDISPLAY_CATEGORY_PERSONALIDENTITY_SMARTCARDREADER     L"PersonalIdentity.SmartcardReader"
#endif
