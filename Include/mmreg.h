/*+@@file@@----------------------------------------------------------------*//*!
 \file		mmreg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 26 00:55:47 2016
 \date		Modified on Sun Jun 26 00:55:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_MMREG
#define _INC_MMREG     158
#if __POCC__ >= 500
#pragma once
#endif
#if !defined( RC_INVOKED ) && defined( __POCC__ )
#include "pshpack1.h"
#endif

#ifndef NOMMIDS
#ifndef MM_MICROSOFT
#define   MM_MICROSOFT                  1
#endif
#define   MM_CREATIVE                   2
#define   MM_MEDIAVISION                3
#define   MM_FUJITSU                    4
#define   MM_PRAGMATRAX                 5
#define   MM_CYRIX                      6
#define   MM_PHILIPS_SPEECH_PROCESSING  7
#define   MM_NETXL                      8
#define   MM_ZYXEL                      9
#define   MM_BECUBED                    10
#define   MM_AARDVARK                   11
#define   MM_BINTEC                     12
#define   MM_HEWLETT_PACKARD            13
#define   MM_ACULAB                     14
#define   MM_FAITH                      15
#define   MM_MITEL                      16
#define   MM_QUANTUM3D                  17
#define   MM_SNI                        18
#define   MM_EMU                        19
#define   MM_ARTISOFT                   20
#define   MM_TURTLE_BEACH               21
#define   MM_IBM                        22
#define   MM_VOCALTEC                   23
#define   MM_ROLAND                     24
#define   MM_DSP_SOLUTIONS              25
#define   MM_NEC                        26
#define   MM_ATI                        27
#define   MM_WANGLABS                   28
#define   MM_TANDY                      29
#define   MM_VOYETRA                    30
#define   MM_ANTEX                      31
#define   MM_ICL_PS                     32
#define   MM_INTEL                      33
#define   MM_GRAVIS                     34
#define   MM_VAL                        35
#define   MM_INTERACTIVE                36
#define   MM_YAMAHA                     37
#define   MM_EVEREX                     38
#define   MM_ECHO                       39
#define   MM_SIERRA                     40
#define   MM_CAT                        41
#define   MM_APPS                       42
#define   MM_DSP_GROUP                  43
#define   MM_MELABS                     44
#define   MM_COMPUTER_FRIENDS           45
#define   MM_ESS                        46
#define   MM_AUDIOFILE                  47
#define   MM_MOTOROLA                   48
#define   MM_CANOPUS                    49
#define   MM_EPSON                      50
#define   MM_TRUEVISION                 51
#define   MM_AZTECH                     52
#define   MM_VIDEOLOGIC                 53
#define   MM_SCALACS                    54
#define   MM_KORG                       55
#define   MM_APT                        56
#define   MM_ICS                        57
#define   MM_ITERATEDSYS                58
#define   MM_METHEUS                    59
#define   MM_LOGITECH                   60
#define   MM_WINNOV                     61
#define   MM_NCR                        62
#define   MM_EXAN                       63
#define   MM_AST                        64
#define   MM_WILLOWPOND                 65
#define   MM_SONICFOUNDRY               66
#define   MM_VITEC                      67
#define   MM_MOSCOM                     68
#define   MM_SILICONSOFT                69
#define   MM_TERRATEC                   70
#define   MM_MEDIASONIC                 71
#define   MM_SANYO                      72
#define   MM_SUPERMAC                   73
#define   MM_AUDIOPT                    74
#define   MM_NOGATECH                   75
#define   MM_SPEECHCOMP                 76
#define   MM_AHEAD                      77
#define   MM_DOLBY                      78
#define   MM_OKI                        79
#define   MM_AURAVISION                 80
#define   MM_OLIVETTI                   81
#define   MM_IOMAGIC                    82
#define   MM_MATSUSHITA                 83
#define   MM_CONTROLRES                 84
#define   MM_XEBEC                      85
#define   MM_NEWMEDIA                   86
#define   MM_NMS                        87
#define   MM_LYRRUS                     88
#define   MM_COMPUSIC                   89
#define   MM_OPTI                       90
#define   MM_ADLACC                     91
#define   MM_COMPAQ                     92
#define   MM_DIALOGIC                   93
#define   MM_INSOFT                     94
#define   MM_MPTUS                      95
#define   MM_WEITEK                     96
#define   MM_LERNOUT_AND_HAUSPIE        97
#define   MM_QCIAR                      98
#define   MM_APPLE                      99
#define   MM_DIGITAL                    100
#define   MM_MOTU                       101
#define   MM_WORKBIT                    102
#define   MM_OSITECH                    103
#define   MM_MIRO                       104
#define   MM_CIRRUSLOGIC                105
#define   MM_ISOLUTION                  106
#define   MM_HORIZONS                   107
#define   MM_CONCEPTS                   108
#define   MM_VTG                        109
#define   MM_RADIUS                     110
#define   MM_ROCKWELL                   111
#define   MM_XYZ                        112
#define   MM_OPCODE                     113
#define   MM_VOXWARE                    114
#define   MM_NORTHERN_TELECOM           115
#define   MM_APICOM                     116
#define   MM_GRANDE                     117
#define   MM_ADDX                       118
#define   MM_WILDCAT                    119
#define   MM_RHETOREX                   120
#define   MM_BROOKTREE                  121
#define   MM_ENSONIQ                    125
#define   MM_FAST                       126
#define   MM_NVIDIA                     127
#define   MM_OKSORI                     128
#define   MM_DIACOUSTICS                129
#define   MM_GULBRANSEN                 130
#define   MM_KAY_ELEMETRICS             131
#define   MM_CRYSTAL                    132
#define   MM_SPLASH_STUDIOS             133
#define   MM_QUARTERDECK                134
#define   MM_TDK                        135
#define   MM_DIGITAL_AUDIO_LABS         136
#define   MM_SEERSYS                    137
#define   MM_PICTURETEL                 138
#define   MM_ATT_MICROELECTRONICS       139
#define   MM_OSPREY                     140
#define   MM_MEDIATRIX                  141
#define   MM_SOUNDESIGNS                142
#define   MM_ALDIGITAL                  143
#define   MM_SPECTRUM_SIGNAL_PROCESSING 144
#define   MM_ECS                        145
#define   MM_AMD                        146
#define   MM_COREDYNAMICS               147
#define   MM_CANAM                      148
#define   MM_SOFTSOUND                  149
#define   MM_NORRIS                     150
#define   MM_DDD                        151
#define   MM_EUPHONICS                  152
#define   MM_PRECEPT                    153
#define   MM_CRYSTAL_NET                154
#define   MM_CHROMATIC                  155
#define   MM_VOICEINFO                  156
#define   MM_VIENNASYS                  157
#define   MM_CONNECTIX                  158
#define   MM_GADGETLABS                 159
#define   MM_FRONTIER                   160
#define   MM_VIONA                      161
#define   MM_CASIO                      162
#define   MM_DIAMONDMM                  163
#define   MM_S3                         164
#define   MM_DVISION                    165
#define   MM_NETSCAPE                   166
#define   MM_SOUNDSPACE                 167
#define   MM_VANKOEVERING               168
#define   MM_QTEAM                      169
#define   MM_ZEFIRO                     170
#define   MM_STUDER                     171
#define   MM_FRAUNHOFER_IIS             172
#define   MM_QUICKNET                   173
#define   MM_ALARIS                     174
#define   MM_SICRESOURCE                175
#define   MM_NEOMAGIC                   176
#define   MM_MERGING_TECHNOLOGIES       177
#define   MM_XIRLINK                    178
#define   MM_COLORGRAPH                 179
#define   MM_OTI                        180
#define   MM_AUREAL                     181
#define   MM_VIVO                       182
#define   MM_SHARP                      183
#define   MM_LUCENT                     184
#define   MM_ATT                        185
#define   MM_SUNCOM                     186
#define   MM_SORVIS                     187
#define   MM_INVISION                   188
#define   MM_BERKOM                     189
#define   MM_MARIAN                     190
#define   MM_DPSINC                     191
#define   MM_BCB                        192
#define   MM_MOTIONPIXELS               193
#define   MM_QDESIGN                    194
#define   MM_NMP                        195
#define   MM_DATAFUSION                 196
#define   MM_DUCK                       197
#define   MM_FTR                        198
#define   MM_BERCOS                     199
#define   MM_ONLIVE                     200
#define   MM_SIEMENS_SBC                201
#define   MM_TERALOGIC                  202
#define   MM_PHONET                     203
#define   MM_WINBOND                    204
#define   MM_VIRTUALMUSIC               205
#define   MM_ENET                       206
#define   MM_GUILLEMOT                  207
#define   MM_EMAGIC                     208
#define   MM_MWM                        209
#define   MM_PACIFICRESEARCH            210
#define   MM_SIPROLAB                   211
#define   MM_LYNX                       212
#define   MM_SPECTRUM_PRODUCTIONS       213
#define   MM_DICTAPHONE                 214
#define   MM_QUALCOMM                   215
#define   MM_RZS                        216
#define   MM_AUDIOSCIENCE               217
#define   MM_PINNACLE                   218
#define   MM_EES                        219
#define   MM_HAFTMANN                   220
#define   MM_LUCID                      221
#define   MM_HEADSPACE                  222
#define   MM_UNISYS                     223
#define   MM_LUMINOSITI                 224
#define   MM_ACTIVEVOICE                225
#define   MM_DTS                        226
#define   MM_DIGIGRAM                   227
#define   MM_SOFTLAB_NSK                228
#define   MM_FORTEMEDIA                 229
#define   MM_SONORUS                    230
#define   MM_ARRAY                      231
#define   MM_DATARAN                    232
#define   MM_I_LINK                     233
#define   MM_SELSIUS_SYSTEMS            234
#define   MM_ADMOS                      235
#define   MM_LEXICON                    236
#define   MM_SGI                        237
#define   MM_IPI                        238
#define   MM_ICE                        239
#define   MM_VQST                       240
#define   MM_ETEK                       241
#define   MM_CS                         242
#define   MM_ALESIS                     243
#define   MM_INTERNET                   244
#define   MM_SONY                       245
#define   MM_HYPERACTIVE                246
#define   MM_UHER_INFORMATIC            247
#define   MM_SYDEC_NV                   248
#define   MM_FLEXION                    249
#define   MM_VIA                        250
#define   MM_MICRONAS                   251
#define   MM_ANALOGDEVICES              252
#define   MM_HP                         253
#define   MM_MATROX_DIV                 254
#define   MM_QUICKAUDIO                 255
#define   MM_YOUCOM                     256
#define   MM_RICHMOND                   257
#define   MM_IODD                       258
#define   MM_ICCC                       259
#define   MM_3COM                       260
#define   MM_MALDEN                     261
#define   MM_3DFX                       262
#define   MM_MINDMAKER                  263
#define   MM_TELEKOL                    264
#define   MM_ST_MICROELECTRONICS        265
#define   MM_ALGOVISION                 266
#define   MM_UNMAPPED                   0xffff
#define   MM_PID_UNMAPPED               MM_UNMAPPED
#ifdef GUID_DEFINED
#if !defined(INIT_MMREG_MID)
#define INIT_MMREG_MID(guid, id)\
{\
    (guid)->Data1 = 0xd5a47fa7 + (USHORT)(id);\
    (guid)->Data2 = 0x6d98;\
    (guid)->Data3 = 0x11d1;\
    (guid)->Data4[0] = 0xa2;\
    (guid)->Data4[1] = 0x1a;\
    (guid)->Data4[2] = 0x00;\
    (guid)->Data4[3] = 0xa0;\
    (guid)->Data4[4] = 0xc9;\
    (guid)->Data4[5] = 0x22;\
    (guid)->Data4[6] = 0x31;\
    (guid)->Data4[7] = 0x96;\
}
#define EXTRACT_MMREG_MID(guid)\
    (USHORT)((guid)->Data1 - 0xd5a47fa7)
#define DEFINE_MMREG_MID_GUID(id)\
    0xd5a47fa7+(USHORT)(id), 0x6d98, 0x11d1, 0xa2, 0x1a, 0x00, 0xa0, 0xc9, 0x22, 0x31, 0x96
#define IS_COMPATIBLE_MMREG_MID(guid)\
    (((guid)->Data1 >= 0xd5a47fa7) &&\
    ((guid)->Data1 < 0xd5a47fa7 + 0xffff) &&\
    ((guid)->Data2 == 0x6d98) &&\
    ((guid)->Data3 == 0x11d1) &&\
    ((guid)->Data4[0] == 0xa2) &&\
    ((guid)->Data4[1] == 0x1a) &&\
    ((guid)->Data4[2] == 0x00) &&\
    ((guid)->Data4[3] == 0xa0) &&\
    ((guid)->Data4[4] == 0xc9) &&\
    ((guid)->Data4[5] == 0x22) &&\
    ((guid)->Data4[6] == 0x31) &&\
    ((guid)->Data4[7] == 0x96))
#endif
#if !defined(INIT_MMREG_PID)
#define INIT_MMREG_PID(guid, id)\
{\
    (guid)->Data1 = 0xe36dc2ac + (USHORT)(id);\
    (guid)->Data2 = 0x6d9a;\
    (guid)->Data3 = 0x11d1;\
    (guid)->Data4[0] = 0xa2;\
    (guid)->Data4[1] = 0x1a;\
    (guid)->Data4[2] = 0x00;\
    (guid)->Data4[3] = 0xa0;\
    (guid)->Data4[4] = 0xc9;\
    (guid)->Data4[5] = 0x22;\
    (guid)->Data4[6] = 0x31;\
    (guid)->Data4[7] = 0x96;\
}
#define EXTRACT_MMREG_PID(guid)\
    (USHORT)((guid)->Data1 - 0xe36dc2ac)
#define DEFINE_MMREG_PID_GUID(id)\
    0xe36dc2ac+(USHORT)(id), 0x6d9a, 0x11d1, 0xa2, 0x1a, 0x00, 0xa0, 0xc9, 0x22, 0x31, 0x96
#define IS_COMPATIBLE_MMREG_PID(guid)\
    (((guid)->Data1 >= 0xe36dc2ac) &&\
    ((guid)->Data1 < 0xe36dc2ac + 0xffff) &&\
    ((guid)->Data2 == 0x6d9a) &&\
    ((guid)->Data3 == 0x11d1) &&\
    ((guid)->Data4[0] == 0xa2) &&\
    ((guid)->Data4[1] == 0x1a) &&\
    ((guid)->Data4[2] == 0x00) &&\
    ((guid)->Data4[3] == 0xa0) &&\
    ((guid)->Data4[4] == 0xc9) &&\
    ((guid)->Data4[5] == 0x22) &&\
    ((guid)->Data4[6] == 0x31) &&\
    ((guid)->Data4[7] == 0x96))
#endif
#endif
#ifndef MM_MIDI_MAPPER
#define  MM_MIDI_MAPPER                     1
#define  MM_WAVE_MAPPER                     2
#define  MM_SNDBLST_MIDIOUT                 3
#define  MM_SNDBLST_MIDIIN                  4
#define  MM_SNDBLST_SYNTH                   5
#define  MM_SNDBLST_WAVEOUT                 6
#define  MM_SNDBLST_WAVEIN                  7
#define  MM_ADLIB                           9
#define  MM_MPU401_MIDIOUT                  10
#define  MM_MPU401_MIDIIN                   11
#define  MM_PC_JOYSTICK                     12
#endif
#define  MM_PCSPEAKER_WAVEOUT               13
#define  MM_MSFT_WSS_WAVEIN                 14
#define  MM_MSFT_WSS_WAVEOUT                15
#define  MM_MSFT_WSS_FMSYNTH_STEREO         16
#define  MM_MSFT_WSS_MIXER                  17
#define  MM_MSFT_WSS_OEM_WAVEIN             18
#define  MM_MSFT_WSS_OEM_WAVEOUT            19
#define  MM_MSFT_WSS_OEM_FMSYNTH_STEREO     20
#define  MM_MSFT_WSS_AUX                    21
#define  MM_MSFT_WSS_OEM_AUX                22
#define  MM_MSFT_GENERIC_WAVEIN             23
#define  MM_MSFT_GENERIC_WAVEOUT            24
#define  MM_MSFT_GENERIC_MIDIIN             25
#define  MM_MSFT_GENERIC_MIDIOUT            26
#define  MM_MSFT_GENERIC_MIDISYNTH          27
#define  MM_MSFT_GENERIC_AUX_LINE           28
#define  MM_MSFT_GENERIC_AUX_MIC            29
#define  MM_MSFT_GENERIC_AUX_CD             30
#define  MM_MSFT_WSS_OEM_MIXER              31
#define  MM_MSFT_MSACM                      32
#define  MM_MSFT_ACM_MSADPCM                33
#define  MM_MSFT_ACM_IMAADPCM               34
#define  MM_MSFT_ACM_MSFILTER               35
#define  MM_MSFT_ACM_GSM610                 36
#define  MM_MSFT_ACM_G711                   37
#define  MM_MSFT_ACM_PCM                    38
#define  MM_WSS_SB16_WAVEIN                 39
#define  MM_WSS_SB16_WAVEOUT                40
#define  MM_WSS_SB16_MIDIIN                 41
#define  MM_WSS_SB16_MIDIOUT                42
#define  MM_WSS_SB16_SYNTH                  43
#define  MM_WSS_SB16_AUX_LINE               44
#define  MM_WSS_SB16_AUX_CD                 45
#define  MM_WSS_SB16_MIXER                  46
#define  MM_WSS_SBPRO_WAVEIN                47
#define  MM_WSS_SBPRO_WAVEOUT               48
#define  MM_WSS_SBPRO_MIDIIN                49
#define  MM_WSS_SBPRO_MIDIOUT               50
#define  MM_WSS_SBPRO_SYNTH                 51
#define  MM_WSS_SBPRO_AUX_LINE              52
#define  MM_WSS_SBPRO_AUX_CD                53
#define  MM_WSS_SBPRO_MIXER                 54
#define  MM_MSFT_WSS_NT_WAVEIN              55
#define  MM_MSFT_WSS_NT_WAVEOUT             56
#define  MM_MSFT_WSS_NT_FMSYNTH_STEREO      57
#define  MM_MSFT_WSS_NT_MIXER               58
#define  MM_MSFT_WSS_NT_AUX                 59
#define  MM_MSFT_SB16_WAVEIN                60
#define  MM_MSFT_SB16_WAVEOUT               61
#define  MM_MSFT_SB16_MIDIIN                62
#define  MM_MSFT_SB16_MIDIOUT               63
#define  MM_MSFT_SB16_SYNTH                 64
#define  MM_MSFT_SB16_AUX_LINE              65
#define  MM_MSFT_SB16_AUX_CD                66
#define  MM_MSFT_SB16_MIXER                 67
#define  MM_MSFT_SBPRO_WAVEIN               68
#define  MM_MSFT_SBPRO_WAVEOUT              69
#define  MM_MSFT_SBPRO_MIDIIN               70
#define  MM_MSFT_SBPRO_MIDIOUT              71
#define  MM_MSFT_SBPRO_SYNTH                72
#define  MM_MSFT_SBPRO_AUX_LINE             73
#define  MM_MSFT_SBPRO_AUX_CD               74
#define  MM_MSFT_SBPRO_MIXER                75
#define  MM_MSFT_MSOPL_SYNTH                76
#define  MM_MSFT_VMDMS_LINE_WAVEIN          80
#define  MM_MSFT_VMDMS_LINE_WAVEOUT         81
#define  MM_MSFT_VMDMS_HANDSET_WAVEIN       82
#define  MM_MSFT_VMDMS_HANDSET_WAVEOUT      83
#define  MM_MSFT_VMDMW_LINE_WAVEIN          84
#define  MM_MSFT_VMDMW_LINE_WAVEOUT         85
#define  MM_MSFT_VMDMW_HANDSET_WAVEIN       86
#define  MM_MSFT_VMDMW_HANDSET_WAVEOUT      87
#define  MM_MSFT_VMDMW_MIXER                88
#define  MM_MSFT_VMDM_GAME_WAVEOUT          89
#define  MM_MSFT_VMDM_GAME_WAVEIN           90
#define  MM_MSFT_ACM_MSNAUDIO               91
#define  MM_MSFT_ACM_MSG723                 92
#define  MM_MSFT_ACM_MSRT24                 93
#define  MM_MSFT_WDMAUDIO_WAVEOUT           100
#define  MM_MSFT_WDMAUDIO_WAVEIN            101
#define  MM_MSFT_WDMAUDIO_MIDIOUT           102
#define  MM_MSFT_WDMAUDIO_MIDIIN            103
#define  MM_MSFT_WDMAUDIO_MIXER             104
#define  MM_MSFT_WDMAUDIO_AUX               105
#define  MM_CREATIVE_SB15_WAVEIN            1
#define  MM_CREATIVE_SB20_WAVEIN            2
#define  MM_CREATIVE_SBPRO_WAVEIN           3
#define  MM_CREATIVE_SBP16_WAVEIN           4
#define  MM_CREATIVE_PHNBLST_WAVEIN         5
#define  MM_CREATIVE_SB15_WAVEOUT           101
#define  MM_CREATIVE_SB20_WAVEOUT           102
#define  MM_CREATIVE_SBPRO_WAVEOUT          103
#define  MM_CREATIVE_SBP16_WAVEOUT          104
#define  MM_CREATIVE_PHNBLST_WAVEOUT        105
#define  MM_CREATIVE_MIDIOUT                201
#define  MM_CREATIVE_MIDIIN                 202
#define  MM_CREATIVE_FMSYNTH_MONO           301
#define  MM_CREATIVE_FMSYNTH_STEREO         302
#define  MM_CREATIVE_MIDI_AWE32             303
#define  MM_CREATIVE_AUX_CD                 401
#define  MM_CREATIVE_AUX_LINE               402
#define  MM_CREATIVE_AUX_MIC                403
#define  MM_CREATIVE_AUX_MASTER             404
#define  MM_CREATIVE_AUX_PCSPK              405
#define  MM_CREATIVE_AUX_WAVE               406
#define  MM_CREATIVE_AUX_MIDI               407
#define  MM_CREATIVE_SBPRO_MIXER            408
#define  MM_CREATIVE_SB16_MIXER             409
#define  MM_MEDIAVISION_PROAUDIO            0x10
#define  MM_PROAUD_MIDIOUT                  (MM_MEDIAVISION_PROAUDIO+1)
#define  MM_PROAUD_MIDIIN                   (MM_MEDIAVISION_PROAUDIO+2)
#define  MM_PROAUD_SYNTH                    (MM_MEDIAVISION_PROAUDIO+3)
#define  MM_PROAUD_WAVEOUT                  (MM_MEDIAVISION_PROAUDIO+4)
#define  MM_PROAUD_WAVEIN                   (MM_MEDIAVISION_PROAUDIO+5)
#define  MM_PROAUD_MIXER                    (MM_MEDIAVISION_PROAUDIO+6)
#define  MM_PROAUD_AUX                      (MM_MEDIAVISION_PROAUDIO+7)
#define  MM_MEDIAVISION_THUNDER             0x20
#define  MM_THUNDER_SYNTH                   (MM_MEDIAVISION_THUNDER+3)
#define  MM_THUNDER_WAVEOUT                 (MM_MEDIAVISION_THUNDER+4)
#define  MM_THUNDER_WAVEIN                  (MM_MEDIAVISION_THUNDER+5)
#define  MM_THUNDER_AUX                     (MM_MEDIAVISION_THUNDER+7)
#define  MM_MEDIAVISION_TPORT               0x40
#define  MM_TPORT_WAVEOUT                   (MM_MEDIAVISION_TPORT+1)
#define  MM_TPORT_WAVEIN                    (MM_MEDIAVISION_TPORT+2)
#define  MM_TPORT_SYNTH                     (MM_MEDIAVISION_TPORT+3)
#define  MM_MEDIAVISION_PROAUDIO_PLUS       0x50
#define  MM_PROAUD_PLUS_MIDIOUT             (MM_MEDIAVISION_PROAUDIO_PLUS+1)
#define  MM_PROAUD_PLUS_MIDIIN              (MM_MEDIAVISION_PROAUDIO_PLUS+2)
#define  MM_PROAUD_PLUS_SYNTH               (MM_MEDIAVISION_PROAUDIO_PLUS+3)
#define  MM_PROAUD_PLUS_WAVEOUT             (MM_MEDIAVISION_PROAUDIO_PLUS+4)
#define  MM_PROAUD_PLUS_WAVEIN              (MM_MEDIAVISION_PROAUDIO_PLUS+5)
#define  MM_PROAUD_PLUS_MIXER               (MM_MEDIAVISION_PROAUDIO_PLUS+6)
#define  MM_PROAUD_PLUS_AUX                 (MM_MEDIAVISION_PROAUDIO_PLUS+7)
#define  MM_MEDIAVISION_PROAUDIO_16         0x60
#define  MM_PROAUD_16_MIDIOUT               (MM_MEDIAVISION_PROAUDIO_16+1)
#define  MM_PROAUD_16_MIDIIN                (MM_MEDIAVISION_PROAUDIO_16+2)
#define  MM_PROAUD_16_SYNTH                 (MM_MEDIAVISION_PROAUDIO_16+3)
#define  MM_PROAUD_16_WAVEOUT               (MM_MEDIAVISION_PROAUDIO_16+4)
#define  MM_PROAUD_16_WAVEIN                (MM_MEDIAVISION_PROAUDIO_16+5)
#define  MM_PROAUD_16_MIXER                 (MM_MEDIAVISION_PROAUDIO_16+6)
#define  MM_PROAUD_16_AUX                   (MM_MEDIAVISION_PROAUDIO_16+7)
#define  MM_MEDIAVISION_PROSTUDIO_16        0x60
#define  MM_STUDIO_16_MIDIOUT               (MM_MEDIAVISION_PROSTUDIO_16+1)
#define  MM_STUDIO_16_MIDIIN                (MM_MEDIAVISION_PROSTUDIO_16+2)
#define  MM_STUDIO_16_SYNTH                 (MM_MEDIAVISION_PROSTUDIO_16+3)
#define  MM_STUDIO_16_WAVEOUT               (MM_MEDIAVISION_PROSTUDIO_16+4)
#define  MM_STUDIO_16_WAVEIN                (MM_MEDIAVISION_PROSTUDIO_16+5)
#define  MM_STUDIO_16_MIXER                 (MM_MEDIAVISION_PROSTUDIO_16+6)
#define  MM_STUDIO_16_AUX                   (MM_MEDIAVISION_PROSTUDIO_16+7)
#define  MM_MEDIAVISION_CDPC                0x70
#define  MM_CDPC_MIDIOUT                    (MM_MEDIAVISION_CDPC+1)
#define  MM_CDPC_MIDIIN                     (MM_MEDIAVISION_CDPC+2)
#define  MM_CDPC_SYNTH                      (MM_MEDIAVISION_CDPC+3)
#define  MM_CDPC_WAVEOUT                    (MM_MEDIAVISION_CDPC+4)
#define  MM_CDPC_WAVEIN                     (MM_MEDIAVISION_CDPC+5)
#define  MM_CDPC_MIXER                      (MM_MEDIAVISION_CDPC+6)
#define  MM_CDPC_AUX                        (MM_MEDIAVISION_CDPC+7)
#define  MM_MEDIAVISION_OPUS1208            0x80
#define  MM_OPUS401_MIDIOUT                 (MM_MEDIAVISION_OPUS1208+1)
#define  MM_OPUS401_MIDIIN                  (MM_MEDIAVISION_OPUS1208+2)
#define  MM_OPUS1208_SYNTH                  (MM_MEDIAVISION_OPUS1208+3)
#define  MM_OPUS1208_WAVEOUT                (MM_MEDIAVISION_OPUS1208+4)
#define  MM_OPUS1208_WAVEIN                 (MM_MEDIAVISION_OPUS1208+5)
#define  MM_OPUS1208_MIXER                  (MM_MEDIAVISION_OPUS1208+6)
#define  MM_OPUS1208_AUX                    (MM_MEDIAVISION_OPUS1208+7)
#define  MM_MEDIAVISION_OPUS1216            0x90
#define  MM_OPUS1216_MIDIOUT                (MM_MEDIAVISION_OPUS1216+1)
#define  MM_OPUS1216_MIDIIN                 (MM_MEDIAVISION_OPUS1216+2)
#define  MM_OPUS1216_SYNTH                  (MM_MEDIAVISION_OPUS1216+3)
#define  MM_OPUS1216_WAVEOUT                (MM_MEDIAVISION_OPUS1216+4)
#define  MM_OPUS1216_WAVEIN                 (MM_MEDIAVISION_OPUS1216+5)
#define  MM_OPUS1216_MIXER                  (MM_MEDIAVISION_OPUS1216+6)
#define  MM_OPUS1216_AUX                    (MM_MEDIAVISION_OPUS1216+7)
#define  MM_CYRIX_XASYNTH                   1
#define  MM_CYRIX_XAMIDIIN                  2
#define  MM_CYRIX_XAMIDIOUT                 3
#define  MM_CYRIX_XAWAVEIN                  4
#define  MM_CYRIX_XAWAVEOUT                 5
#define  MM_CYRIX_XAAUX                     6
#define  MM_CYRIX_XAMIXER                   7
#define  MM_PHILIPS_ACM_LPCBB               1
#define  MM_NETXL_XLVIDEO                   1
#define  MM_ZYXEL_ACM_ADPCM                 1
#define  MM_AARDVARK_STUDIO12_WAVEOUT       1
#define  MM_AARDVARK_STUDIO12_WAVEIN        2
#define  MM_AARDVARK_STUDIO88_WAVEOUT       3
#define  MM_AARDVARK_STUDIO88_WAVEIN        4
#define  MM_BINTEC_TAPI_WAVE                1
#define  MM_HEWLETT_PACKARD_CU_CODEC        1
#define  MM_MITEL_TALKTO_LINE_WAVEOUT       100
#define  MM_MITEL_TALKTO_LINE_WAVEIN        101
#define  MM_MITEL_TALKTO_HANDSET_WAVEOUT    102
#define  MM_MITEL_TALKTO_HANDSET_WAVEIN     103
#define  MM_MITEL_TALKTO_BRIDGED_WAVEOUT    104
#define  MM_MITEL_TALKTO_BRIDGED_WAVEIN     105
#define  MM_MITEL_MPA_HANDSET_WAVEOUT       200
#define  MM_MITEL_MPA_HANDSET_WAVEIN        201
#define  MM_MITEL_MPA_HANDSFREE_WAVEOUT     202
#define  MM_MITEL_MPA_HANDSFREE_WAVEIN      203
#define  MM_MITEL_MPA_LINE1_WAVEOUT         204
#define  MM_MITEL_MPA_LINE1_WAVEIN          205
#define  MM_MITEL_MPA_LINE2_WAVEOUT         206
#define  MM_MITEL_MPA_LINE2_WAVEIN          207
#define  MM_MITEL_MEDIAPATH_WAVEOUT         300
#define  MM_MITEL_MEDIAPATH_WAVEIN          301
#define  MM_SNI_ACM_G721                    1
#define  MM_EMU_APSSYNTH                    1
#define  MM_EMU_APSMIDIIN                   2
#define  MM_EMU_APSMIDIOUT                  3
#define  MM_EMU_APSWAVEIN                   4
#define  MM_EMU_APSWAVEOUT                  5
#define  MM_ARTISOFT_SBWAVEIN               1
#define  MM_ARTISOFT_SBWAVEOUT              2
#define  MM_TBS_TROPEZ_WAVEIN               37
#define  MM_TBS_TROPEZ_WAVEOUT              38
#define  MM_TBS_TROPEZ_AUX1                 39
#define  MM_TBS_TROPEZ_AUX2                 40
#define  MM_TBS_TROPEZ_LINE                 41
#define  MM_MMOTION_WAVEAUX                 1
#define  MM_MMOTION_WAVEOUT                 2
#define  MM_MMOTION_WAVEIN                  3
#define  MM_IBM_PCMCIA_WAVEIN               11
#define  MM_IBM_PCMCIA_WAVEOUT              12
#define  MM_IBM_PCMCIA_SYNTH                13
#define  MM_IBM_PCMCIA_MIDIIN               14
#define  MM_IBM_PCMCIA_MIDIOUT              15
#define  MM_IBM_PCMCIA_AUX                  16
#define  MM_IBM_THINKPAD200                 17
#define  MM_IBM_MWAVE_WAVEIN                18
#define  MM_IBM_MWAVE_WAVEOUT               19
#define  MM_IBM_MWAVE_MIXER                 20
#define  MM_IBM_MWAVE_MIDIIN                21
#define  MM_IBM_MWAVE_MIDIOUT               22
#define  MM_IBM_MWAVE_AUX                   23
#define  MM_IBM_WC_MIDIOUT                  30
#define  MM_IBM_WC_WAVEOUT                  31
#define  MM_IBM_WC_MIXEROUT                 33
#define  MM_VOCALTEC_WAVEOUT                1
#define  MM_VOCALTEC_WAVEIN                 2
#define  MM_ROLAND_RAP10_MIDIOUT            10
#define  MM_ROLAND_RAP10_MIDIIN             11
#define  MM_ROLAND_RAP10_SYNTH              12
#define  MM_ROLAND_RAP10_WAVEOUT            13
#define  MM_ROLAND_RAP10_WAVEIN             14
#define  MM_ROLAND_MPU401_MIDIOUT           15
#define  MM_ROLAND_MPU401_MIDIIN            16
#define  MM_ROLAND_SMPU_MIDIOUTA            17
#define  MM_ROLAND_SMPU_MIDIOUTB            18
#define  MM_ROLAND_SMPU_MIDIINA             19
#define  MM_ROLAND_SMPU_MIDIINB             20
#define  MM_ROLAND_SC7_MIDIOUT              21
#define  MM_ROLAND_SC7_MIDIIN               22
#define  MM_ROLAND_SERIAL_MIDIOUT           23
#define  MM_ROLAND_SERIAL_MIDIIN            24
#define  MM_ROLAND_SCP_MIDIOUT              38
#define  MM_ROLAND_SCP_MIDIIN               39
#define  MM_ROLAND_SCP_WAVEOUT              40
#define  MM_ROLAND_SCP_WAVEIN               41
#define  MM_ROLAND_SCP_MIXER                42
#define  MM_ROLAND_SCP_AUX                  48
#define  MM_DSP_SOLUTIONS_WAVEOUT           1
#define  MM_DSP_SOLUTIONS_WAVEIN            2
#define  MM_DSP_SOLUTIONS_SYNTH             3
#define  MM_DSP_SOLUTIONS_AUX               4
#define  MM_NEC_73_86_SYNTH                 5
#define  MM_NEC_73_86_WAVEOUT               6
#define  MM_NEC_73_86_WAVEIN                7
#define  MM_NEC_26_SYNTH                    9
#define  MM_NEC_MPU401_MIDIOUT              10
#define  MM_NEC_MPU401_MIDIIN               11
#define  MM_NEC_JOYSTICK                    12
#define  MM_WANGLABS_WAVEIN1                1
#define  MM_WANGLABS_WAVEOUT1               2
#define  MM_TANDY_VISWAVEIN                 1
#define  MM_TANDY_VISWAVEOUT                2
#define  MM_TANDY_VISBIOSSYNTH              3
#define  MM_TANDY_SENS_MMAWAVEIN            4
#define  MM_TANDY_SENS_MMAWAVEOUT           5
#define  MM_TANDY_SENS_MMAMIDIIN            6
#define  MM_TANDY_SENS_MMAMIDIOUT           7
#define  MM_TANDY_SENS_VISWAVEOUT           8
#define  MM_TANDY_PSSJWAVEIN                9
#define  MM_TANDY_PSSJWAVEOUT               10
#define  MM_ANTEX_SX12_WAVEIN               1
#define  MM_ANTEX_SX12_WAVEOUT              2
#define  MM_ANTEX_SX15_WAVEIN               3
#define  MM_ANTEX_SX15_WAVEOUT              4
#define  MM_ANTEX_VP625_WAVEIN              5
#define  MM_ANTEX_VP625_WAVEOUT             6
#define  MM_ANTEX_AUDIOPORT22_WAVEIN        7
#define  MM_ANTEX_AUDIOPORT22_WAVEOUT       8
#define  MM_ANTEX_AUDIOPORT22_FEEDTHRU      9
#define  MM_INTELOPD_WAVEIN                 1
#define  MM_INTELOPD_WAVEOUT                101
#define  MM_INTELOPD_AUX                    401
#define  MM_INTEL_NSPMODEMLINEIN            501
#define  MM_INTEL_NSPMODEMLINEOUT           502
#define  MM_VAL_MICROKEY_AP_WAVEIN          1
#define  MM_VAL_MICROKEY_AP_WAVEOUT         2
#define  MM_INTERACTIVE_WAVEIN              0x45
#define  MM_INTERACTIVE_WAVEOUT             0x45
#define  MM_YAMAHA_GSS_SYNTH                0x01
#define  MM_YAMAHA_GSS_WAVEOUT              0x02
#define  MM_YAMAHA_GSS_WAVEIN               0x03
#define  MM_YAMAHA_GSS_MIDIOUT              0x04
#define  MM_YAMAHA_GSS_MIDIIN               0x05
#define  MM_YAMAHA_GSS_AUX                  0x06
#define  MM_YAMAHA_SERIAL_MIDIOUT           0x07
#define  MM_YAMAHA_SERIAL_MIDIIN            0x08
#define  MM_YAMAHA_OPL3SA_WAVEOUT           0x10
#define  MM_YAMAHA_OPL3SA_WAVEIN            0x11
#define  MM_YAMAHA_OPL3SA_FMSYNTH           0x12
#define  MM_YAMAHA_OPL3SA_YSYNTH            0x13
#define  MM_YAMAHA_OPL3SA_MIDIOUT           0x14
#define  MM_YAMAHA_OPL3SA_MIDIIN            0x15
#define  MM_YAMAHA_OPL3SA_MIXER             0x17
#define  MM_YAMAHA_OPL3SA_JOYSTICK          0x18
#define  MM_YAMAHA_YMF724LEG_MIDIOUT        0x19
#define  MM_YAMAHA_YMF724LEG_MIDIIN         0x1a
#define  MM_YAMAHA_YMF724_WAVEOUT           0x1b
#define  MM_YAMAHA_YMF724_WAVEIN            0x1c
#define  MM_YAMAHA_YMF724_MIDIOUT           0x1d
#define  MM_YAMAHA_YMF724_AUX               0x1e
#define  MM_YAMAHA_YMF724_MIXER             0x1f
#define  MM_YAMAHA_YMF724LEG_FMSYNTH        0x20
#define  MM_YAMAHA_YMF724LEG_MIXER          0x21
#define  MM_YAMAHA_SXG_MIDIOUT              0x22
#define  MM_YAMAHA_SXG_WAVEOUT              0x23
#define  MM_YAMAHA_SXG_MIXER                0x24
#define  MM_YAMAHA_ACXG_WAVEIN              0x25
#define  MM_YAMAHA_ACXG_WAVEOUT             0x26
#define  MM_YAMAHA_ACXG_MIDIOUT             0x27
#define  MM_YAMAHA_ACXG_MIXER               0x28
#define  MM_YAMAHA_ACXG_AUX                 0x29
#define  MM_EVEREX_CARRIER                  1
#define  MM_ECHO_SYNTH                      1
#define  MM_ECHO_WAVEOUT                    2
#define  MM_ECHO_WAVEIN                     3
#define  MM_ECHO_MIDIOUT                    4
#define  MM_ECHO_MIDIIN                     5
#define  MM_ECHO_AUX                        6
#define  MM_SIERRA_ARIA_MIDIOUT             0x14
#define  MM_SIERRA_ARIA_MIDIIN              0x15
#define  MM_SIERRA_ARIA_SYNTH               0x16
#define  MM_SIERRA_ARIA_WAVEOUT             0x17
#define  MM_SIERRA_ARIA_WAVEIN              0x18
#define  MM_SIERRA_ARIA_AUX                 0x19
#define  MM_SIERRA_ARIA_AUX2                0x20
#define  MM_SIERRA_QUARTET_WAVEIN           0x50
#define  MM_SIERRA_QUARTET_WAVEOUT          0x51
#define  MM_SIERRA_QUARTET_MIDIIN           0x52
#define  MM_SIERRA_QUARTET_MIDIOUT          0x53
#define  MM_SIERRA_QUARTET_SYNTH            0x54
#define  MM_SIERRA_QUARTET_AUX_CD           0x55
#define  MM_SIERRA_QUARTET_AUX_LINE         0x56
#define  MM_SIERRA_QUARTET_AUX_MODEM        0x57
#define  MM_SIERRA_QUARTET_MIXER            0x58
#define  MM_CAT_WAVEOUT                     1
#define  MM_DSP_GROUP_TRUESPEECH            1
#define  MM_MELABS_MIDI2GO                  1
#define  MM_ESS_AMWAVEOUT                   0x01
#define  MM_ESS_AMWAVEIN                    0x02
#define  MM_ESS_AMAUX                       0x03
#define  MM_ESS_AMSYNTH                     0x04
#define  MM_ESS_AMMIDIOUT                   0x05
#define  MM_ESS_AMMIDIIN                    0x06
#define  MM_ESS_MIXER                       0x07
#define  MM_ESS_AUX_CD                      0x08
#define  MM_ESS_MPU401_MIDIOUT              0x09
#define  MM_ESS_MPU401_MIDIIN               0x0A
#define  MM_ESS_ES488_WAVEOUT               0x10
#define  MM_ESS_ES488_WAVEIN                0x11
#define  MM_ESS_ES488_MIXER                 0x12
#define  MM_ESS_ES688_WAVEOUT               0x13
#define  MM_ESS_ES688_WAVEIN                0x14
#define  MM_ESS_ES688_MIXER                 0x15
#define  MM_ESS_ES1488_WAVEOUT              0x16
#define  MM_ESS_ES1488_WAVEIN               0x17
#define  MM_ESS_ES1488_MIXER                0x18
#define  MM_ESS_ES1688_WAVEOUT              0x19
#define  MM_ESS_ES1688_WAVEIN               0x1A
#define  MM_ESS_ES1688_MIXER                0x1B
#define  MM_ESS_ES1788_WAVEOUT              0x1C
#define  MM_ESS_ES1788_WAVEIN               0x1D
#define  MM_ESS_ES1788_MIXER                0x1E
#define  MM_ESS_ES1888_WAVEOUT              0x1F
#define  MM_ESS_ES1888_WAVEIN               0x20
#define  MM_ESS_ES1888_MIXER                0x21
#define  MM_ESS_ES1868_WAVEOUT              0x22
#define  MM_ESS_ES1868_WAVEIN               0x23
#define  MM_ESS_ES1868_MIXER                0x24
#define  MM_ESS_ES1878_WAVEOUT              0x25
#define  MM_ESS_ES1878_WAVEIN               0x26
#define  MM_ESS_ES1878_MIXER                0x27
#define  MM_CANOPUS_ACM_DVREX               1
#define  MM_EPS_FMSND                       1
#define  MM_TRUEVISION_WAVEIN1              1
#define  MM_TRUEVISION_WAVEOUT1             2
#define  MM_AZTECH_MIDIOUT                  3
#define  MM_AZTECH_MIDIIN                   4
#define  MM_AZTECH_WAVEIN                   17
#define  MM_AZTECH_WAVEOUT                  18
#define  MM_AZTECH_FMSYNTH                  20
#define  MM_AZTECH_MIXER                    21
#define  MM_AZTECH_PRO16_WAVEIN             33
#define  MM_AZTECH_PRO16_WAVEOUT            34
#define  MM_AZTECH_PRO16_FMSYNTH            38
#define  MM_AZTECH_DSP16_WAVEIN             65
#define  MM_AZTECH_DSP16_WAVEOUT            66
#define  MM_AZTECH_DSP16_FMSYNTH            68
#define  MM_AZTECH_DSP16_WAVESYNTH          70
#define  MM_AZTECH_NOVA16_WAVEIN            71
#define  MM_AZTECH_NOVA16_WAVEOUT           72
#define  MM_AZTECH_NOVA16_MIXER             73
#define  MM_AZTECH_WASH16_WAVEIN            74
#define  MM_AZTECH_WASH16_WAVEOUT           75
#define  MM_AZTECH_WASH16_MIXER             76
#define  MM_AZTECH_AUX_CD                   401
#define  MM_AZTECH_AUX_LINE                 402
#define  MM_AZTECH_AUX_MIC                  403
#define  MM_AZTECH_AUX                      404
#define  MM_VIDEOLOGIC_MSWAVEIN             1
#define  MM_VIDEOLOGIC_MSWAVEOUT            2
#define  MM_KORG_PCIF_MIDIOUT               1
#define  MM_KORG_PCIF_MIDIIN                2
#define  MM_KORG_1212IO_MSWAVEIN            3
#define  MM_KORG_1212IO_MSWAVEOUT           4
#define  MM_APT_ACE100CD                    1
#define  MM_ICS_WAVEDECK_WAVEOUT            1
#define  MM_ICS_WAVEDECK_WAVEIN             2
#define  MM_ICS_WAVEDECK_MIXER              3
#define  MM_ICS_WAVEDECK_AUX                4
#define  MM_ICS_WAVEDECK_SYNTH              5
#define  MM_ICS_WAVEDEC_SB_WAVEOUT          6
#define  MM_ICS_WAVEDEC_SB_WAVEIN           7
#define  MM_ICS_WAVEDEC_SB_FM_MIDIOUT       8
#define  MM_ICS_WAVEDEC_SB_MPU401_MIDIOUT   9
#define  MM_ICS_WAVEDEC_SB_MPU401_MIDIIN    10
#define  MM_ICS_WAVEDEC_SB_MIXER            11
#define  MM_ICS_WAVEDEC_SB_AUX              12
#define  MM_ICS_2115_LITE_MIDIOUT           13
#define  MM_ICS_2120_LITE_MIDIOUT           14
#define  MM_ITERATEDSYS_FUFCODEC            1
#define  MM_METHEUS_ZIPPER                  1
#define  MM_WINNOV_CAVIAR_WAVEIN            1
#define  MM_WINNOV_CAVIAR_WAVEOUT           2
#define  MM_WINNOV_CAVIAR_VIDC              3
#define  MM_WINNOV_CAVIAR_CHAMPAGNE         4
#define  MM_WINNOV_CAVIAR_YUV8              5
#define  MM_NCR_BA_WAVEIN                   1
#define  MM_NCR_BA_WAVEOUT                  2
#define  MM_NCR_BA_SYNTH                    3
#define  MM_NCR_BA_AUX                      4
#define  MM_NCR_BA_MIXER                    5
#define  MM_AST_MODEMWAVE_WAVEIN            13
#define  MM_AST_MODEMWAVE_WAVEOUT           14
#define  MM_WILLOWPOND_FMSYNTH_STEREO       20
#define  MM_WILLOWPOND_MPU401               21
#define  MM_WILLOWPOND_SNDPORT_WAVEIN       100
#define  MM_WILLOWPOND_SNDPORT_WAVEOUT      101
#define  MM_WILLOWPOND_SNDPORT_MIXER        102
#define  MM_WILLOWPOND_SNDPORT_AUX          103
#define  MM_WILLOWPOND_PH_WAVEIN            104
#define  MM_WILLOWPOND_PH_WAVEOUT           105
#define  MM_WILLOWPOND_PH_MIXER             106
#define  MM_WILLOWPOND_PH_AUX               107
#define  MM_WILLOPOND_SNDCOMM_WAVEIN        108
#define  MM_WILLOWPOND_SNDCOMM_WAVEOUT      109
#define  MM_WILLOWPOND_SNDCOMM_MIXER        110
#define  MM_WILLOWPOND_SNDCOMM_AUX          111
#define  MM_WILLOWPOND_GENERIC_WAVEIN       112
#define  MM_WILLOWPOND_GENERIC_WAVEOUT      113
#define  MM_WILLOWPOND_GENERIC_MIXER        114
#define  MM_WILLOWPOND_GENERIC_AUX          115
#define  MM_VITEC_VMAKER                    1
#define  MM_VITEC_VMPRO                     2
#define  MM_MOSCOM_VPC2400_IN               1
#define  MM_MOSCOM_VPC2400_OUT              2
#define  MM_SILICONSOFT_SC1_WAVEIN          1
#define  MM_SILICONSOFT_SC1_WAVEOUT         2
#define  MM_SILICONSOFT_SC2_WAVEIN          3
#define  MM_SILICONSOFT_SC2_WAVEOUT         4
#define  MM_SILICONSOFT_SOUNDJR2_WAVEOUT    5
#define  MM_SILICONSOFT_SOUNDJR2PR_WAVEIN   6
#define  MM_SILICONSOFT_SOUNDJR2PR_WAVEOUT  7
#define  MM_SILICONSOFT_SOUNDJR3_WAVEOUT    8
#define  MM_TTEWS_WAVEIN                    1
#define  MM_TTEWS_WAVEOUT                   2
#define  MM_TTEWS_MIDIIN                    3
#define  MM_TTEWS_MIDIOUT                   4
#define  MM_TTEWS_MIDISYNTH                 5
#define  MM_TTEWS_MIDIMONITOR               6
#define  MM_TTEWS_VMIDIIN                   7
#define  MM_TTEWS_VMIDIOUT                  8
#define  MM_TTEWS_AUX                       9
#define  MM_TTEWS_MIXER                     10
#define  MM_MEDIASONIC_ACM_G723             1
#define  MM_MEDIASONIC_ICOM                 2
#define  MM_ICOM_WAVEIN                     3
#define  MM_ICOM_WAVEOUT                    4
#define  MM_ICOM_MIXER                      5
#define  MM_ICOM_AUX                        6
#define  MM_ICOM_LINE                       7
#define  MM_SANYO_ACM_LD_ADPCM              1
#define  MM_AHEAD_MULTISOUND                1
#define  MM_AHEAD_SOUNDBLASTER              2
#define  MM_AHEAD_PROAUDIO                  3
#define  MM_AHEAD_GENERIC                   4
#define  MM_OLIVETTI_WAVEIN                 1
#define  MM_OLIVETTI_WAVEOUT                2
#define  MM_OLIVETTI_MIXER                  3
#define  MM_OLIVETTI_AUX                    4
#define  MM_OLIVETTI_MIDIIN                 5
#define  MM_OLIVETTI_MIDIOUT                6
#define  MM_OLIVETTI_SYNTH                  7
#define  MM_OLIVETTI_JOYSTICK               8
#define  MM_OLIVETTI_ACM_GSM                9
#define  MM_OLIVETTI_ACM_ADPCM              10
#define  MM_OLIVETTI_ACM_CELP               11
#define  MM_OLIVETTI_ACM_SBC                12
#define  MM_OLIVETTI_ACM_OPR                13
#define  MM_IOMAGIC_TEMPO_WAVEOUT           1
#define  MM_IOMAGIC_TEMPO_WAVEIN            2
#define  MM_IOMAGIC_TEMPO_SYNTH             3
#define  MM_IOMAGIC_TEMPO_MIDIOUT           4
#define  MM_IOMAGIC_TEMPO_MXDOUT            5
#define  MM_IOMAGIC_TEMPO_AUXOUT            6
#define  MM_MATSUSHITA_WAVEIN               1
#define  MM_MATSUSHITA_WAVEOUT              2
#define  MM_MATSUSHITA_FMSYNTH_STEREO       3
#define  MM_MATSUSHITA_MIXER                4
#define  MM_MATSUSHITA_AUX                  5
#define  MM_NEWMEDIA_WAVJAMMER              1
#define  MM_LYRRUS_BRIDGE_GUITAR            1
#define  MM_OPTI_M16_FMSYNTH_STEREO         0x0001
#define  MM_OPTI_M16_MIDIIN                 0x0002
#define  MM_OPTI_M16_MIDIOUT                0x0003
#define  MM_OPTI_M16_WAVEIN                 0x0004
#define  MM_OPTI_M16_WAVEOUT                0x0005
#define  MM_OPTI_M16_MIXER                  0x0006
#define  MM_OPTI_M16_AUX                    0x0007
#define  MM_OPTI_P16_FMSYNTH_STEREO         0x0010
#define  MM_OPTI_P16_MIDIIN                 0x0011
#define  MM_OPTI_P16_MIDIOUT                0x0012
#define  MM_OPTI_P16_WAVEIN                 0x0013
#define  MM_OPTI_P16_WAVEOUT                0x0014
#define  MM_OPTI_P16_MIXER                  0x0015
#define  MM_OPTI_P16_AUX                    0x0016
#define  MM_OPTI_M32_WAVEIN                 0x0020
#define  MM_OPTI_M32_WAVEOUT                0x0021
#define  MM_OPTI_M32_MIDIIN                 0x0022
#define  MM_OPTI_M32_MIDIOUT                0x0023
#define  MM_OPTI_M32_SYNTH_STEREO           0x0024
#define  MM_OPTI_M32_MIXER                  0x0025
#define  MM_OPTI_M32_AUX                    0x0026
#define  MM_COMPAQ_BB_WAVEIN                1
#define  MM_COMPAQ_BB_WAVEOUT               2
#define  MM_COMPAQ_BB_WAVEAUX               3
#define  MM_MPTUS_SPWAVEOUT                 1
#define  MM_LERNOUT_ANDHAUSPIE_LHCODECACM   1
#define  MM_DIGITAL_AV320_WAVEIN            1
#define  MM_DIGITAL_AV320_WAVEOUT           2
#define  MM_DIGITAL_ACM_G723                3
#define  MM_DIGITAL_ICM_H263                4
#define  MM_DIGITAL_ICM_H261                5
#define  MM_MOTU_MTP_MIDIOUT_ALL            100
#define  MM_MOTU_MTP_MIDIIN_1               101
#define  MM_MOTU_MTP_MIDIOUT_1              101
#define  MM_MOTU_MTP_MIDIIN_2               102
#define  MM_MOTU_MTP_MIDIOUT_2              102
#define  MM_MOTU_MTP_MIDIIN_3               103
#define  MM_MOTU_MTP_MIDIOUT_3              103
#define  MM_MOTU_MTP_MIDIIN_4               104
#define  MM_MOTU_MTP_MIDIOUT_4              104
#define  MM_MOTU_MTP_MIDIIN_5               105
#define  MM_MOTU_MTP_MIDIOUT_5              105
#define  MM_MOTU_MTP_MIDIIN_6               106
#define  MM_MOTU_MTP_MIDIOUT_6              106
#define  MM_MOTU_MTP_MIDIIN_7               107
#define  MM_MOTU_MTP_MIDIOUT_7              107
#define  MM_MOTU_MTP_MIDIIN_8               108
#define  MM_MOTU_MTP_MIDIOUT_8              108
#define  MM_MOTU_MTPII_MIDIOUT_ALL          200
#define  MM_MOTU_MTPII_MIDIIN_SYNC          200
#define  MM_MOTU_MTPII_MIDIIN_1             201
#define  MM_MOTU_MTPII_MIDIOUT_1            201
#define  MM_MOTU_MTPII_MIDIIN_2             202
#define  MM_MOTU_MTPII_MIDIOUT_2            202
#define  MM_MOTU_MTPII_MIDIIN_3             203
#define  MM_MOTU_MTPII_MIDIOUT_3            203
#define  MM_MOTU_MTPII_MIDIIN_4             204
#define  MM_MOTU_MTPII_MIDIOUT_4            204
#define  MM_MOTU_MTPII_MIDIIN_5             205
#define  MM_MOTU_MTPII_MIDIOUT_5            205
#define  MM_MOTU_MTPII_MIDIIN_6             206
#define  MM_MOTU_MTPII_MIDIOUT_6            206
#define  MM_MOTU_MTPII_MIDIIN_7             207
#define  MM_MOTU_MTPII_MIDIOUT_7            207
#define  MM_MOTU_MTPII_MIDIIN_8             208
#define  MM_MOTU_MTPII_MIDIOUT_8            208
#define  MM_MOTU_MTPII_NET_MIDIIN_1         209
#define  MM_MOTU_MTPII_NET_MIDIOUT_1        209
#define  MM_MOTU_MTPII_NET_MIDIIN_2         210
#define  MM_MOTU_MTPII_NET_MIDIOUT_2        210
#define  MM_MOTU_MTPII_NET_MIDIIN_3         211
#define  MM_MOTU_MTPII_NET_MIDIOUT_3        211
#define  MM_MOTU_MTPII_NET_MIDIIN_4         212
#define  MM_MOTU_MTPII_NET_MIDIOUT_4        212
#define  MM_MOTU_MTPII_NET_MIDIIN_5         213
#define  MM_MOTU_MTPII_NET_MIDIOUT_5        213
#define  MM_MOTU_MTPII_NET_MIDIIN_6         214
#define  MM_MOTU_MTPII_NET_MIDIOUT_6        214
#define  MM_MOTU_MTPII_NET_MIDIIN_7         215
#define  MM_MOTU_MTPII_NET_MIDIOUT_7        215
#define  MM_MOTU_MTPII_NET_MIDIIN_8         216
#define  MM_MOTU_MTPII_NET_MIDIOUT_8        216
#define  MM_MOTU_MXP_MIDIIN_MIDIOUT_ALL     300
#define  MM_MOTU_MXP_MIDIIN_SYNC            300
#define  MM_MOTU_MXP_MIDIIN_MIDIIN_1        301
#define  MM_MOTU_MXP_MIDIIN_MIDIOUT_1       301
#define  MM_MOTU_MXP_MIDIIN_MIDIIN_2        302
#define  MM_MOTU_MXP_MIDIIN_MIDIOUT_2       302
#define  MM_MOTU_MXP_MIDIIN_MIDIIN_3        303
#define  MM_MOTU_MXP_MIDIIN_MIDIOUT_3       303
#define  MM_MOTU_MXP_MIDIIN_MIDIIN_4        304
#define  MM_MOTU_MXP_MIDIIN_MIDIOUT_4       304
#define  MM_MOTU_MXP_MIDIIN_MIDIIN_5        305
#define  MM_MOTU_MXP_MIDIIN_MIDIOUT_5       305
#define  MM_MOTU_MXP_MIDIIN_MIDIIN_6        306
#define  MM_MOTU_MXP_MIDIIN_MIDIOUT_6       306
#define  MM_MOTU_MXPMPU_MIDIOUT_ALL         400
#define  MM_MOTU_MXPMPU_MIDIIN_SYNC         400
#define  MM_MOTU_MXPMPU_MIDIIN_1            401
#define  MM_MOTU_MXPMPU_MIDIOUT_1           401
#define  MM_MOTU_MXPMPU_MIDIIN_2            402
#define  MM_MOTU_MXPMPU_MIDIOUT_2           402
#define  MM_MOTU_MXPMPU_MIDIIN_3            403
#define  MM_MOTU_MXPMPU_MIDIOUT_3           403
#define  MM_MOTU_MXPMPU_MIDIIN_4            404
#define  MM_MOTU_MXPMPU_MIDIOUT_4           404
#define  MM_MOTU_MXPMPU_MIDIIN_5            405
#define  MM_MOTU_MXPMPU_MIDIOUT_5           405
#define  MM_MOTU_MXPMPU_MIDIIN_6            406
#define  MM_MOTU_MXPMPU_MIDIOUT_6           406
#define  MM_MOTU_MXN_MIDIOUT_ALL            500
#define  MM_MOTU_MXN_MIDIIN_SYNC            500
#define  MM_MOTU_MXN_MIDIIN_1               501
#define  MM_MOTU_MXN_MIDIOUT_1              501
#define  MM_MOTU_MXN_MIDIIN_2               502
#define  MM_MOTU_MXN_MIDIOUT_2              502
#define  MM_MOTU_MXN_MIDIIN_3               503
#define  MM_MOTU_MXN_MIDIOUT_3              503
#define  MM_MOTU_MXN_MIDIIN_4               504
#define  MM_MOTU_MXN_MIDIOUT_4              504
#define  MM_MOTU_FLYER_MIDI_IN_SYNC         600
#define  MM_MOTU_FLYER_MIDI_IN_A            601
#define  MM_MOTU_FLYER_MIDI_OUT_A           601
#define  MM_MOTU_FLYER_MIDI_IN_B            602
#define  MM_MOTU_FLYER_MIDI_OUT_B           602
#define  MM_MOTU_PKX_MIDI_IN_SYNC           700
#define  MM_MOTU_PKX_MIDI_IN_A              701
#define  MM_MOTU_PKX_MIDI_OUT_A             701
#define  MM_MOTU_PKX_MIDI_IN_B              702
#define  MM_MOTU_PKX_MIDI_OUT_B             702
#define  MM_MOTU_DTX_MIDI_IN_SYNC           800
#define  MM_MOTU_DTX_MIDI_IN_A              801
#define  MM_MOTU_DTX_MIDI_OUT_A             801
#define  MM_MOTU_DTX_MIDI_IN_B              802
#define  MM_MOTU_DTX_MIDI_OUT_B             802
#define  MM_MOTU_MTPAV_MIDIOUT_ALL          900
#define  MM_MOTU_MTPAV_MIDIIN_SYNC          900
#define  MM_MOTU_MTPAV_MIDIIN_1             901
#define  MM_MOTU_MTPAV_MIDIOUT_1            901
#define  MM_MOTU_MTPAV_MIDIIN_2             902
#define  MM_MOTU_MTPAV_MIDIOUT_2            902
#define  MM_MOTU_MTPAV_MIDIIN_3             903
#define  MM_MOTU_MTPAV_MIDIOUT_3            903
#define  MM_MOTU_MTPAV_MIDIIN_4             904
#define  MM_MOTU_MTPAV_MIDIOUT_4            904
#define  MM_MOTU_MTPAV_MIDIIN_5             905
#define  MM_MOTU_MTPAV_MIDIOUT_5            905
#define  MM_MOTU_MTPAV_MIDIIN_6             906
#define  MM_MOTU_MTPAV_MIDIOUT_6            906
#define  MM_MOTU_MTPAV_MIDIIN_7             907
#define  MM_MOTU_MTPAV_MIDIOUT_7            907
#define  MM_MOTU_MTPAV_MIDIIN_8             908
#define  MM_MOTU_MTPAV_MIDIOUT_8            908
#define  MM_MOTU_MTPAV_NET_MIDIIN_1         909
#define  MM_MOTU_MTPAV_NET_MIDIOUT_1        909
#define  MM_MOTU_MTPAV_NET_MIDIIN_2         910
#define  MM_MOTU_MTPAV_NET_MIDIOUT_2        910
#define  MM_MOTU_MTPAV_NET_MIDIIN_3         911
#define  MM_MOTU_MTPAV_NET_MIDIOUT_3        911
#define  MM_MOTU_MTPAV_NET_MIDIIN_4         912
#define  MM_MOTU_MTPAV_NET_MIDIOUT_4        912
#define  MM_MOTU_MTPAV_NET_MIDIIN_5         913
#define  MM_MOTU_MTPAV_NET_MIDIOUT_5        913
#define  MM_MOTU_MTPAV_NET_MIDIIN_6         914
#define  MM_MOTU_MTPAV_NET_MIDIOUT_6        914
#define  MM_MOTU_MTPAV_NET_MIDIIN_7         915
#define  MM_MOTU_MTPAV_NET_MIDIOUT_7        915
#define  MM_MOTU_MTPAV_NET_MIDIIN_8         916
#define  MM_MOTU_MTPAV_NET_MIDIOUT_8        916
#define  MM_MOTU_MTPAV_MIDIIN_ADAT          917
#define  MM_MOTU_MTPAV_MIDIOUT_ADAT         917
#define  MM_MOTU_MXPXT_MIDIIN_SYNC          1000
#define  MM_MOTU_MXPXT_MIDIOUT_ALL          1000
#define  MM_MOTU_MXPXT_MIDIIN_1             1001
#define  MM_MOTU_MXPXT_MIDIOUT_1            1001
#define  MM_MOTU_MXPXT_MIDIOUT_2            1002
#define  MM_MOTU_MXPXT_MIDIIN_2             1002
#define  MM_MOTU_MXPXT_MIDIIN_3             1003
#define  MM_MOTU_MXPXT_MIDIOUT_3            1003
#define  MM_MOTU_MXPXT_MIDIIN_4             1004
#define  MM_MOTU_MXPXT_MIDIOUT_4            1004
#define  MM_MOTU_MXPXT_MIDIIN_5             1005
#define  MM_MOTU_MXPXT_MIDIOUT_5            1005
#define  MM_MOTU_MXPXT_MIDIOUT_6            1006
#define  MM_MOTU_MXPXT_MIDIIN_6             1006
#define  MM_MOTU_MXPXT_MIDIOUT_7            1007
#define  MM_MOTU_MXPXT_MIDIIN_7             1007
#define  MM_MOTU_MXPXT_MIDIOUT_8            1008
#define  MM_MOTU_MXPXT_MIDIIN_8             1008
#define  MM_WORKBIT_MIXER                   1
#define  MM_WORKBIT_WAVEOUT                 2
#define  MM_WORKBIT_WAVEIN                  3
#define  MM_WORKBIT_MIDIIN                  4
#define  MM_WORKBIT_MIDIOUT                 5
#define  MM_WORKBIT_FMSYNTH                 6
#define  MM_WORKBIT_AUX                     7
#define  MM_WORKBIT_JOYSTICK                8
#define  MM_OSITECH_TRUMPCARD               1
#define  MM_MIRO_MOVIEPRO                   1
#define  MM_MIRO_VIDEOD1                    2
#define  MM_MIRO_VIDEODC1TV                 3
#define  MM_MIRO_VIDEOTD                    4
#define  MM_MIRO_DC30_WAVEOUT               5
#define  MM_MIRO_DC30_WAVEIN                6
#define  MM_MIRO_DC30_MIX                   7
#define  MM_ISOLUTION_PASCAL                1
#define  MM_VOICEMIXER                      1
#define  ROCKWELL_WA1_WAVEIN                100
#define  ROCKWELL_WA1_WAVEOUT               101
#define  ROCKWELL_WA1_SYNTH                 102
#define  ROCKWELL_WA1_MIXER                 103
#define  ROCKWELL_WA1_MPU401_IN             104
#define  ROCKWELL_WA1_MPU401_OUT            105
#define  ROCKWELL_WA2_WAVEIN                200
#define  ROCKWELL_WA2_WAVEOUT               201
#define  ROCKWELL_WA2_SYNTH                 202
#define  ROCKWELL_WA2_MIXER                 203
#define  ROCKWELL_WA2_MPU401_IN             204
#define  ROCKWELL_WA2_MPU401_OUT            205
#define  MM_VOXWARE_CODEC                   1
#define  MM_NORTEL_MPXAC_WAVEIN             1
#define  MM_NORTEL_MPXAC_WAVEOUT            2
#define  MM_ADDX_PCTV_DIGITALMIX            1
#define  MM_ADDX_PCTV_WAVEIN                2
#define  MM_ADDX_PCTV_WAVEOUT               3
#define  MM_ADDX_PCTV_MIXER                 4
#define  MM_ADDX_PCTV_AUX_CD                5
#define  MM_ADDX_PCTV_AUX_LINE              6
#define  MM_WILDCAT_AUTOSCOREMIDIIN         1
#define  MM_RHETOREX_WAVEIN                 1
#define  MM_RHETOREX_WAVEOUT                2
#define  MM_BTV_WAVEIN                      1
#define  MM_BTV_WAVEOUT                     2
#define  MM_BTV_MIDIIN                      3
#define  MM_BTV_MIDIOUT                     4
#define  MM_BTV_MIDISYNTH                   5
#define  MM_BTV_AUX_LINE                    6
#define  MM_BTV_AUX_MIC                     7
#define  MM_BTV_AUX_CD                      8
#define  MM_BTV_DIGITALIN                   9
#define  MM_BTV_DIGITALOUT                  10
#define  MM_BTV_MIDIWAVESTREAM              11
#define  MM_BTV_MIXER                       12
#define  MM_ENSONIQ_SOUNDSCAPE              0x10
#define  MM_SOUNDSCAPE_WAVEOUT              MM_ENSONIQ_SOUNDSCAPE+1
#define  MM_SOUNDSCAPE_WAVEOUT_AUX          MM_ENSONIQ_SOUNDSCAPE+2
#define  MM_SOUNDSCAPE_WAVEIN               MM_ENSONIQ_SOUNDSCAPE+3
#define  MM_SOUNDSCAPE_MIDIOUT              MM_ENSONIQ_SOUNDSCAPE+4
#define  MM_SOUNDSCAPE_MIDIIN               MM_ENSONIQ_SOUNDSCAPE+5
#define  MM_SOUNDSCAPE_SYNTH                MM_ENSONIQ_SOUNDSCAPE+6
#define  MM_SOUNDSCAPE_MIXER                MM_ENSONIQ_SOUNDSCAPE+7
#define  MM_SOUNDSCAPE_AUX                  MM_ENSONIQ_SOUNDSCAPE+8
#define  MM_NVIDIA_WAVEOUT                  1
#define  MM_NVIDIA_WAVEIN                   2
#define  MM_NVIDIA_MIDIOUT                  3
#define  MM_NVIDIA_MIDIIN                   4
#define  MM_NVIDIA_GAMEPORT                 5
#define  MM_NVIDIA_MIXER                    6
#define  MM_NVIDIA_AUX                      7
#define  MM_OKSORI_BASE                     0
#define  MM_OKSORI_OSR8_WAVEOUT             MM_OKSORI_BASE+1
#define  MM_OKSORI_OSR8_WAVEIN              MM_OKSORI_BASE+2
#define  MM_OKSORI_OSR16_WAVEOUT            MM_OKSORI_BASE+3
#define  MM_OKSORI_OSR16_WAVEIN             MM_OKSORI_BASE+4
#define  MM_OKSORI_FM_OPL4                  MM_OKSORI_BASE+5
#define  MM_OKSORI_MIX_MASTER               MM_OKSORI_BASE+6
#define  MM_OKSORI_MIX_WAVE                 MM_OKSORI_BASE+7
#define  MM_OKSORI_MIX_FM                   MM_OKSORI_BASE+8
#define  MM_OKSORI_MIX_LINE                 MM_OKSORI_BASE+9
#define  MM_OKSORI_MIX_CD                   MM_OKSORI_BASE+10
#define  MM_OKSORI_MIX_MIC                  MM_OKSORI_BASE+11
#define  MM_OKSORI_MIX_ECHO                 MM_OKSORI_BASE+12
#define  MM_OKSORI_MIX_AUX1                 MM_OKSORI_BASE+13
#define  MM_OKSORI_MIX_LINE1                MM_OKSORI_BASE+14
#define  MM_OKSORI_EXT_MIC1                 MM_OKSORI_BASE+15
#define  MM_OKSORI_EXT_MIC2                 MM_OKSORI_BASE+16
#define  MM_OKSORI_MIDIOUT                  MM_OKSORI_BASE+17
#define  MM_OKSORI_MIDIIN                   MM_OKSORI_BASE+18
#define  MM_OKSORI_MPEG_CDVISION            MM_OKSORI_BASE+19
#define  MM_DIACOUSTICS_DRUM_ACTION         1
#define  MM_KAY_ELEMETRICS_CSL              0x4300
#define  MM_KAY_ELEMETRICS_CSL_DAT          0x4308
#define  MM_KAY_ELEMETRICS_CSL_4CHANNEL     0x4309
#define  MM_CRYSTAL_CS4232_WAVEIN           1
#define  MM_CRYSTAL_CS4232_WAVEOUT          2
#define  MM_CRYSTAL_CS4232_WAVEMIXER        3
#define  MM_CRYSTAL_CS4232_WAVEAUX_AUX1     4
#define  MM_CRYSTAL_CS4232_WAVEAUX_AUX2     5
#define  MM_CRYSTAL_CS4232_WAVEAUX_LINE     6
#define  MM_CRYSTAL_CS4232_WAVEAUX_MONO     7
#define  MM_CRYSTAL_CS4232_WAVEAUX_MASTER   8
#define  MM_CRYSTAL_CS4232_MIDIIN           9
#define  MM_CRYSTAL_CS4232_MIDIOUT          10
#define  MM_CRYSTAL_CS4232_INPUTGAIN_AUX1   13
#define  MM_CRYSTAL_CS4232_INPUTGAIN_LOOP   14
#define  MM_CRYSTAL_SOUND_FUSION_WAVEIN     21
#define  MM_CRYSTAL_SOUND_FUSION_WAVEOUT    22
#define  MM_CRYSTAL_SOUND_FUSION_MIXER      23
#define  MM_CRYSTAL_SOUND_FUSION_MIDIIN     24
#define  MM_CRYSTAL_SOUND_FUSION_MIDIOUT    25
#define  MM_CRYSTAL_SOUND_FUSION_JOYSTICK   26
#define  MM_QUARTERDECK_LHWAVEIN            0
#define  MM_QUARTERDECK_LHWAVEOUT           1
#define  MM_TDK_MW_MIDI_SYNTH               1
#define  MM_TDK_MW_MIDI_IN                  2
#define  MM_TDK_MW_MIDI_OUT                 3
#define  MM_TDK_MW_WAVE_IN                  4
#define  MM_TDK_MW_WAVE_OUT                 5
#define  MM_TDK_MW_AUX                      6
#define  MM_TDK_MW_MIXER                    10
#define  MM_TDK_MW_AUX_MASTER               100
#define  MM_TDK_MW_AUX_BASS                 101
#define  MM_TDK_MW_AUX_TREBLE               102
#define  MM_TDK_MW_AUX_MIDI_VOL             103
#define  MM_TDK_MW_AUX_WAVE_VOL             104
#define  MM_TDK_MW_AUX_WAVE_RVB             105
#define  MM_TDK_MW_AUX_WAVE_CHR             106
#define  MM_TDK_MW_AUX_VOL                  107
#define  MM_TDK_MW_AUX_RVB                  108
#define  MM_TDK_MW_AUX_CHR                  109
#define  MM_DIGITAL_AUDIO_LABS_TC           0x01
#define  MM_DIGITAL_AUDIO_LABS_DOC          0x02
#define  MM_DIGITAL_AUDIO_LABS_V8           0x10
#define  MM_DIGITAL_AUDIO_LABS_CPRO         0x11
#define  MM_DIGITAL_AUDIO_LABS_VP           0x12
#define  MM_DIGITAL_AUDIO_LABS_CDLX         0x13
#define  MM_DIGITAL_AUDIO_LABS_CTDIF        0x14
#define  MM_SEERSYS_SEERSYNTH               1
#define  MM_SEERSYS_SEERWAVE                2
#define  MM_SEERSYS_SEERMIX                 3
#define  MM_SEERSYS_WAVESYNTH               4
#define  MM_SEERSYS_WAVESYNTH_WG            5
#define  MM_SEERSYS_REALITY                 6
#define  MM_OSPREY_1000WAVEIN               1
#define  MM_OSPREY_1000WAVEOUT              2
#define  MM_SOUNDESIGNS_WAVEIN              1
#define  MM_SOUNDESIGNS_WAVEOUT             2
#define  MM_SSP_SNDFESWAVEIN                1
#define  MM_SSP_SNDFESWAVEOUT               2
#define  MM_SSP_SNDFESMIDIIN                3
#define  MM_SSP_SNDFESMIDIOUT               4
#define  MM_SSP_SNDFESSYNTH                 5
#define  MM_SSP_SNDFESMIX                   6
#define  MM_SSP_SNDFESAUX                   7
#define  MM_ECS_AADF_MIDI_IN                10
#define  MM_ECS_AADF_MIDI_OUT               11
#define  MM_ECS_AADF_WAVE2MIDI_IN           12
#define  MM_AMD_INTERWAVE_WAVEIN            1
#define  MM_AMD_INTERWAVE_WAVEOUT           2
#define  MM_AMD_INTERWAVE_SYNTH             3
#define  MM_AMD_INTERWAVE_MIXER1            4
#define  MM_AMD_INTERWAVE_MIXER2            5
#define  MM_AMD_INTERWAVE_JOYSTICK          6
#define  MM_AMD_INTERWAVE_EX_CD             7
#define  MM_AMD_INTERWAVE_MIDIIN            8
#define  MM_AMD_INTERWAVE_MIDIOUT           9
#define  MM_AMD_INTERWAVE_AUX1              10
#define  MM_AMD_INTERWAVE_AUX2              11
#define  MM_AMD_INTERWAVE_AUX_MIC           12
#define  MM_AMD_INTERWAVE_AUX_CD            13
#define  MM_AMD_INTERWAVE_MONO_IN           14
#define  MM_AMD_INTERWAVE_MONO_OUT          15
#define  MM_AMD_INTERWAVE_EX_TELEPHONY      16
#define  MM_AMD_INTERWAVE_WAVEOUT_BASE      17
#define  MM_AMD_INTERWAVE_WAVEOUT_TREBLE    18
#define  MM_AMD_INTERWAVE_STEREO_ENHANCED   19
#define  MM_COREDYNAMICS_DYNAMIXHR          1
#define  MM_COREDYNAMICS_DYNASONIX_SYNTH    2
#define  MM_COREDYNAMICS_DYNASONIX_MIDI_IN  3
#define  MM_COREDYNAMICS_DYNASONIX_MIDI_OUT 4
#define  MM_COREDYNAMICS_DYNASONIX_WAVE_IN  5
#define  MM_COREDYNAMICS_DYNASONIX_WAVE_OUT 6
#define  MM_COREDYNAMICS_DYNASONIX_AUDIO_IN 7
#define  MM_COREDYNAMICS_DYNASONIX_AUDIO_OUT    8
#define  MM_COREDYNAMICS_DYNAGRAFX_VGA      9
#define  MM_COREDYNAMICS_DYNAGRAFX_WAVE_IN  10
#define  MM_COREDYNAMICS_DYNAGRAFX_WAVE_OUT 11
#define  MM_CANAM_CBXWAVEOUT                1
#define  MM_CANAM_CBXWAVEIN                 2
#define  MM_SOFTSOUND_CODEC                 1
#define  MM_NORRIS_VOICELINK                1
#define  MM_DDD_MIDILINK_MIDIIN             1
#define  MM_DDD_MIDILINK_MIDIOUT            2
#define  MM_EUPHONICS_AUX_CD                1
#define  MM_EUPHONICS_AUX_LINE              2
#define  MM_EUPHONICS_AUX_MASTER            3
#define  MM_EUPHONICS_AUX_MIC               4
#define  MM_EUPHONICS_AUX_MIDI              5
#define  MM_EUPHONICS_AUX_WAVE              6
#define  MM_EUPHONICS_FMSYNTH_MONO          7
#define  MM_EUPHONICS_FMSYNTH_STEREO        8
#define  MM_EUPHONICS_MIDIIN                9
#define  MM_EUPHONICS_MIDIOUT               10
#define  MM_EUPHONICS_MIXER                 11
#define  MM_EUPHONICS_WAVEIN                12
#define  MM_EUPHONICS_WAVEOUT               13
#define  MM_EUPHONICS_EUSYNTH               14
#define  CRYSTAL_NET_SFM_CODEC              1
#define  MM_CHROMATIC_M1                    0x0001
#define  MM_CHROMATIC_M1_WAVEIN             0x0002
#define  MM_CHROMATIC_M1_WAVEOUT            0x0003
#define  MM_CHROMATIC_M1_FMSYNTH            0x0004
#define  MM_CHROMATIC_M1_MIXER              0x0005
#define  MM_CHROMATIC_M1_AUX                0x0006
#define  MM_CHROMATIC_M1_AUX_CD             0x0007
#define  MM_CHROMATIC_M1_MIDIIN             0x0008
#define  MM_CHROMATIC_M1_MIDIOUT            0x0009
#define  MM_CHROMATIC_M1_WTSYNTH            0x0010
#define  MM_CHROMATIC_M1_MPEGWAVEIN         0x0011
#define  MM_CHROMATIC_M1_MPEGWAVEOUT        0x0012
#define  MM_CHROMATIC_M2                    0x0013
#define  MM_CHROMATIC_M2_WAVEIN             0x0014
#define  MM_CHROMATIC_M2_WAVEOUT            0x0015
#define  MM_CHROMATIC_M2_FMSYNTH            0x0016
#define  MM_CHROMATIC_M2_MIXER              0x0017
#define  MM_CHROMATIC_M2_AUX                0x0018
#define  MM_CHROMATIC_M2_AUX_CD             0x0019
#define  MM_CHROMATIC_M2_MIDIIN             0x0020
#define  MM_CHROMATIC_M2_MIDIOUT            0x0021
#define  MM_CHROMATIC_M2_WTSYNTH            0x0022
#define  MM_CHROMATIC_M2_MPEGWAVEIN         0x0023
#define  MM_CHROMATIC_M2_MPEGWAVEOUT        0x0024
#define  MM_VIENNASYS_TSP_WAVE_DRIVER       1
#define  MM_CONNECTIX_VIDEC_CODEC           1
#define  MM_GADGETLABS_WAVE44_WAVEIN        1
#define  MM_GADGETLABS_WAVE44_WAVEOUT       2
#define  MM_GADGETLABS_WAVE42_WAVEIN        3
#define  MM_GADGETLABS_WAVE42_WAVEOUT       4
#define  MM_GADGETLABS_WAVE4_MIDIIN         5
#define  MM_GADGETLABS_WAVE4_MIDIOUT        6
#define  MM_FRONTIER_WAVECENTER_MIDIIN      1
#define  MM_FRONTIER_WAVECENTER_MIDIOUT     2
#define  MM_FRONTIER_WAVECENTER_WAVEIN      3
#define  MM_FRONTIER_WAVECENTER_WAVEOUT     4
#define  MM_VIONA_QVINPCI_MIXER             1
#define  MM_VIONA_QVINPCI_WAVEIN            2
#define  MM_VIONAQVINPCI_WAVEOUT            3
#define  MM_VIONA_BUSTER_MIXER              4
#define  MM_VIONA_CINEMASTER_MIXER          5
#define  MM_VIONA_CONCERTO_MIXER            6
#define  MM_CASIO_WP150_MIDIOUT             1
#define  MM_CASIO_WP150_MIDIIN              2
#define  MM_CASIO_LSG_MIDIOUT               3
#define  MM_DIMD_PLATFORM                   0
#define  MM_DIMD_DIRSOUND                   1
#define  MM_DIMD_VIRTMPU                    2
#define  MM_DIMD_VIRTSB                     3
#define  MM_DIMD_VIRTJOY                    4
#define  MM_DIMD_WAVEIN                     5
#define  MM_DIMD_WAVEOUT                    6
#define  MM_DIMD_MIDIIN                     7
#define  MM_DIMD_MIDIOUT                    8
#define  MM_DIMD_AUX_LINE                   9
#define  MM_DIMD_MIXER                      10
#define  MM_DIMD_WSS_WAVEIN                 14
#define  MM_DIMD_WSS_WAVEOUT                15
#define  MM_DIMD_WSS_MIXER                  17
#define  MM_DIMD_WSS_AUX                    21
#define  MM_DIMD_WSS_SYNTH                  76
#define  MM_S3_WAVEOUT                      1
#define  MM_S3_WAVEIN                       2
#define  MM_S3_MIDIOUT                      3
#define  MM_S3_MIDIIN                       4
#define  MM_S3_FMSYNTH                      5
#define  MM_S3_MIXER                        6
#define  MM_S3_AUX                          7
#define  MM_VKC_MPU401_MIDIIN               0x0100
#define  MM_VKC_SERIAL_MIDIIN               0x0101
#define  MM_VKC_MPU401_MIDIOUT              0x0200
#define  MM_VKC_SERIAL_MIDIOUT              0x0201
#define  MM_ZEFIRO_ZA2                      2
#define  MM_FHGIIS_MPEGLAYER3               10
#define  MM_QUICKNET_PJWAVEIN               1
#define  MM_QUICKNET_PJWAVEOUT              2
#define  MM_SICRESOURCE_SSO3D               2
#define  MM_SICRESOURCE_SSOW3DI             3
#define  MM_NEOMAGIC_SYNTH                  1
#define  MM_NEOMAGIC_WAVEOUT                2
#define  MM_NEOMAGIC_WAVEIN                 3
#define  MM_NEOMAGIC_MIDIOUT                4
#define  MM_NEOMAGIC_MIDIIN                 5
#define  MM_NEOMAGIC_AUX                    6
#define  MM_NEOMAGIC_MW3DX_WAVEOUT          10
#define  MM_NEOMAGIC_MW3DX_WAVEIN           11
#define  MM_NEOMAGIC_MW3DX_MIDIOUT          12
#define  MM_NEOMAGIC_MW3DX_MIDIIN           13
#define  MM_NEOMAGIC_MW3DX_FMSYNTH          14
#define  MM_NEOMAGIC_MW3DX_GMSYNTH          15
#define  MM_NEOMAGIC_MW3DX_MIXER            16
#define  MM_NEOMAGIC_MW3DX_AUX              17
#define  MM_NEOMAGIC_MWAVE_WAVEOUT          20
#define  MM_NEOMAGIC_MWAVE_WAVEIN           21
#define  MM_NEOMAGIC_MWAVE_MIDIOUT          22
#define  MM_NEOMAGIC_MWAVE_MIDIIN           23
#define  MM_NEOMAGIC_MWAVE_MIXER            24
#define  MM_NEOMAGIC_MWAVE_AUX              25
#define  MM_MERGING_MPEGL3                  1
#define  MM_XIRLINK_VISIONLINK              1
#define  MM_OTI_611WAVEIN                   5
#define  MM_OTI_611WAVEOUT                  6
#define  MM_OTI_611MIXER                    7
#define  MM_OTI_611MIDIN                    0x12
#define  MM_OTI_611MIDIOUT                  0x13
#define  MM_AUREAL_AU8820                   16
#define  MM_AU8820_SYNTH                    17
#define  MM_AU8820_WAVEOUT                  18
#define  MM_AU8820_WAVEIN                   19
#define  MM_AU8820_MIXER                    20
#define  MM_AU8820_AUX                      21
#define  MM_AU8820_MIDIOUT                  22
#define  MM_AU8820_MIDIIN                   23
#define  MM_AUREAL_AU8830                   32
#define  MM_AU8830_SYNTH                    33
#define  MM_AU8830_WAVEOUT                  34
#define  MM_AU8830_WAVEIN                   35
#define  MM_AU8830_MIXER                    36
#define  MM_AU8830_AUX                      37
#define  MM_AU8830_MIDIOUT                  38
#define  MM_AU8830_MIDIIN                   39
#define  MM_VIVO_AUDIO_CODEC                1
#define  MM_SHARP_MDC_MIDI_SYNTH            1
#define  MM_SHARP_MDC_MIDI_IN               2
#define  MM_SHARP_MDC_MIDI_OUT              3
#define  MM_SHARP_MDC_WAVE_IN               4
#define  MM_SHARP_MDC_WAVE_OUT              5
#define  MM_SHARP_MDC_AUX                   6
#define  MM_SHARP_MDC_MIXER                 10
#define  MM_SHARP_MDC_AUX_MASTER            100
#define  MM_SHARP_MDC_AUX_BASS              101
#define  MM_SHARP_MDC_AUX_TREBLE            102
#define  MM_SHARP_MDC_AUX_MIDI_VOL          103
#define  MM_SHARP_MDC_AUX_WAVE_VOL          104
#define  MM_SHARP_MDC_AUX_WAVE_RVB          105
#define  MM_SHARP_MDC_AUX_WAVE_CHR          106
#define  MM_SHARP_MDC_AUX_VOL               107
#define  MM_SHARP_MDC_AUX_RVB               108
#define  MM_SHARP_MDC_AUX_CHR               109
#define  MM_LUCENT_ACM_G723                 0
#define  MM_ATT_G729A                       1
#define  MM_MARIAN_ARC44WAVEIN              1
#define  MM_MARIAN_ARC44WAVEOUT             2
#define  MM_MARIAN_PRODIF24WAVEIN           3
#define  MM_MARIAN_PRODIF24WAVEOUT          4
#define  MM_MARIAN_ARC88WAVEIN              5
#define  MM_MARIAN_ARC88WAVEOUT             6
#define  MM_BCB_NETBOARD_10                 1
#define  MM_BCB_TT75_10                     2
#define  MM_MOTIONPIXELS_MVI2               1
#define  MM_QDESIGN_ACM_MPEG                1
#define  MM_QDESIGN_ACM_QDESIGN_MUSIC       2
#define  MM_NMP_CCP_WAVEIN                  1
#define  MM_NMP_CCP_WAVEOUT                 2
#define  MM_NMP_ACM_AMR                     10
#define  MM_DF_ACM_G726                     1
#define  MM_DF_ACM_GSM610                   2
#define  MM_BERCOS_WAVEIN                   1
#define  MM_BERCOS_MIXER                    2
#define  MM_BERCOS_WAVEOUT                  3
#define  MM_ONLIVE_MPCODEC                  1
#define  MM_PHONET_PP_WAVEOUT               1
#define  MM_PHONET_PP_WAVEIN                2
#define  MM_PHONET_PP_MIXER                 3
#define  MM_FTR_ENCODER_WAVEIN              1
#define  MM_FTR_ACM                         2
#define  MM_ENET_T2000_LINEIN               1
#define  MM_ENET_T2000_LINEOUT              2
#define  MM_ENET_T2000_HANDSETIN            3
#define  MM_ENET_T2000_HANDSETOUT           4
#define  MM_EMAGIC_UNITOR8                  1
#define  MM_SIPROLAB_ACELPNET               1
#define  MM_DICTAPHONE_G726                 1
#define  MM_RZS_ACM_TUBGSM                  1
#define  MM_EES_PCMIDI14                    1
#define  MM_EES_PCMIDI14_IN                 2
#define  MM_EES_PCMIDI14_OUT1               3
#define  MM_EES_PCMIDI14_OUT2               4
#define  MM_EES_PCMIDI14_OUT3               5
#define  MM_EES_PCMIDI14_OUT4               6
#define  MM_HAFTMANN_LPTDAC2                1
#define  MM_LUCID_PCI24WAVEIN               1
#define  MM_LUCID_PCI24WAVEOUT              2
#define  MM_HEADSPACE_HAESYNTH              1
#define  MM_HEADSPACE_HAEWAVEOUT            2
#define  MM_HEADSPACE_HAEWAVEIN             3
#define  MM_HEADSPACE_HAEMIXER              4
#define  MM_UNISYS_ACM_NAP                  1
#define  MM_LUMINOSITI_SCWAVEIN             1
#define  MM_LUMINOSITI_SCWAVEOUT            2
#define  MM_LUMINOSITI_SCWAVEMIX            3
#define  MM_ACTIVEVOICE_ACM_VOXADPCM        1
#define  MM_DTS_DS                          1
#define  MM_SOFTLAB_NSK_FRW_WAVEIN          1
#define  MM_SOFTLAB_NSK_FRW_WAVEOUT         2
#define  MM_SOFTLAB_NSK_FRW_MIXER           3
#define  MM_SOFTLAB_NSK_FRW_AUX             4
#define  MM_FORTEMEDIA_WAVEIN               1
#define  MM_FORTEMEDIA_WAVEOUT              2
#define  MM_FORTEMEDIA_FMSYNC               3
#define  MM_FORTEMEDIA_MIXER                4
#define  MM_FORTEMEDIA_AUX                  5
#define  MM_SONORUS_STUDIO                  1
#define  MM_I_LINK_VOICE_CODER              1
#define  MM_SELSIUS_SYSTEMS_RTPWAVEOUT      1
#define  MM_SELSIUS_SYSTEMS_RTPWAVEIN       2
#define  MM_ADMOS_FM_SYNTH                  1
#define  MM_ADMOS_QS3AMIDIOUT               2
#define  MM_ADMOS_QS3AMIDIIN                3
#define  MM_ADMOS_QS3AWAVEOUT               4
#define  MM_ADMOS_QS3AWAVEIN                5
#define  MM_LEXICON_STUDIO_WAVE_OUT         1
#define  MM_LEXICON_STUDIO_WAVE_IN          2
#define  MM_SGI_320_WAVEIN                  1
#define  MM_SGI_320_WAVEOUT                 2
#define  MM_SGI_320_MIXER                   3
#define  MM_SGI_540_WAVEIN                  4
#define  MM_SGI_540_WAVEOUT                 5
#define  MM_SGI_540_MIXER                   6
#define  MM_SGI_RAD_ADATMONO1_WAVEIN        7
#define  MM_SGI_RAD_ADATMONO2_WAVEIN        8
#define  MM_SGI_RAD_ADATMONO3_WAVEIN        9
#define  MM_SGI_RAD_ADATMONO4_WAVEIN        10
#define  MM_SGI_RAD_ADATMONO5_WAVEIN        11
#define  MM_SGI_RAD_ADATMONO6_WAVEIN        12
#define  MM_SGI_RAD_ADATMONO7_WAVEIN        13
#define  MM_SGI_RAD_ADATMONO8_WAVEIN        14
#define  MM_SGI_RAD_ADATSTEREO12_WAVEIN     15
#define  MM_SGI_RAD_ADATSTEREO34_WAVEIN     16
#define  MM_SGI_RAD_ADATSTEREO56_WAVEIN     17
#define  MM_SGI_RAD_ADATSTEREO78_WAVEIN     18
#define  MM_SGI_RAD_ADAT8CHAN_WAVEIN        19
#define  MM_SGI_RAD_ADATMONO1_WAVEOUT       20
#define  MM_SGI_RAD_ADATMONO2_WAVEOUT       21
#define  MM_SGI_RAD_ADATMONO3_WAVEOUT       22
#define  MM_SGI_RAD_ADATMONO4_WAVEOUT       23
#define  MM_SGI_RAD_ADATMONO5_WAVEOUT       24
#define  MM_SGI_RAD_ADATMONO6_WAVEOUT       25
#define  MM_SGI_RAD_ADATMONO7_WAVEOUT       26
#define  MM_SGI_RAD_ADATMONO8_WAVEOUT       27
#define  MM_SGI_RAD_ADATSTEREO12_WAVEOUT    28
#define  MM_SGI_RAD_ADATSTEREO32_WAVEOUT    29
#define  MM_SGI_RAD_ADATSTEREO56_WAVEOUT    30
#define  MM_SGI_RAD_ADATSTEREO78_WAVEOUT    31
#define  MM_SGI_RAD_ADAT8CHAN_WAVEOUT       32
#define  MM_SGI_RAD_AESMONO1_WAVEIN         33
#define  MM_SGI_RAD_AESMONO2_WAVEIN         34
#define  MM_SGI_RAD_AESSTEREO_WAVEIN        35
#define  MM_SGI_RAD_AESMONO1_WAVEOUT        36
#define  MM_SGI_RAD_AESMONO2_WAVEOUT        37
#define  MM_SGI_RAD_AESSTEREO_WAVEOUT       38
#define  MM_IPI_ACM_HSX                     1
#define  MM_IPI_ACM_RPELP                   2
#define  MM_IPI_WF_ASSS                     3
#define  MM_IPI_AT_WAVEOUT                  4
#define  MM_IPI_AT_WAVEIN                   5
#define  MM_IPI_AT_MIXER                    6
#define  MM_ICE_WAVEOUT                     1
#define  MM_ICE_WAVEIN                      2
#define  MM_ICE_MTWAVEOUT                   3
#define  MM_ICE_MTWAVEIN                    4
#define  MM_ICE_MIDIOUT1                    5
#define  MM_ICE_MIDIIN1                     6
#define  MM_ICE_MIDIOUT2                    7
#define  MM_ICE_MIDIIN2                     8
#define  MM_ICE_SYNTH                       9
#define  MM_ICE_MIXER                       10
#define  MM_ICE_AUX                         11
#define  MM_VQST_VQC1                       1
#define  MM_VQST_VQC2                       2
#define  MM_ETEK_KWIKMIDI_MIDIIN            1
#define  MM_ETEK_KWIKMIDI_MIDIOUT           2
#define  MM_INTERNET_SSW_MIDIOUT            10
#define  MM_INTERNET_SSW_MIDIIN             11
#define  MM_INTERNET_SSW_WAVEOUT            12
#define  MM_INTERNET_SSW_WAVEIN             13
#define  MM_SONY_ACM_SCX                    1
#define  MM_UH_ACM_ADPCM                    1
#define  MM_SYDEC_NV_WAVEIN                 1
#define  MM_SYDEC_NV_WAVEOUT                2
#define  MM_FLEXION_X300_WAVEIN             1
#define  MM_FLEXION_X300_WAVEOUT            2
#define  MM_VIA_WAVEOUT                     1
#define  MM_VIA_WAVEIN                      2
#define  MM_VIA_MIXER                       3
#define  MM_VIA_AUX                         4
#define  MM_VIA_MPU401_MIDIOUT              5
#define  MM_VIA_MPU401_MIDIIN               6
#define  MM_VIA_SWFM_SYNTH                  7
#define  MM_VIA_WDM_WAVEOUT                 8
#define  MM_VIA_WDM_WAVEIN                  9
#define  MM_VIA_WDM_MIXER                   10
#define  MM_VIA_WDM_MPU401_MIDIOUT          11
#define  MM_VIA_WDM_MPU401_MIDIIN           12
#define  MM_MICRONAS_SC4                    1
#define  MM_MICRONAS_CLP833                 2
#define  MM_HP_WAVEOUT                      1
#define  MM_HP_WAVEIN                       2
#define  MM_QUICKAUDIO_MINIMIDI             1
#define  MM_QUICKAUDIO_MAXIMIDI             2
#define  MM_ICCC_UNA3_WAVEIN                1
#define  MM_ICCC_UNA3_WAVEOUT               2
#define  MM_ICCC_UNA3_AUX                   3
#define  MM_ICCC_UNA3_MIXER                 4
#define  MM_3COM_CB_MIXER                   1
#define  MM_3COM_CB_WAVEIN                  2
#define  MM_3COM_CB_WAVEOUT                 3
#define  MM_MINDMAKER_GC_WAVEIN             1
#define  MM_MINDMAKER_GC_WAVEOUT            2
#define  MM_MINDMAKER_GC_MIXER              3
#define  MM_TELEKOL_WAVEOUT                 1
#define  MM_TELEKOL_WAVEIN                  2
#define  MM_ALGOVISION_VB80WAVEOUT          1
#define  MM_ALGOVISION_VB80WAVEIN           2
#define  MM_ALGOVISION_VB80MIXER            3
#define  MM_ALGOVISION_VB80AUX              4
#define  MM_ALGOVISION_VB80AUX2             5
#endif
#define RIFFINFO_IARL      mmioFOURCC ('I', 'A', 'R', 'L')
#define RIFFINFO_IART      mmioFOURCC ('I', 'A', 'R', 'T')
#define RIFFINFO_ICMS      mmioFOURCC ('I', 'C', 'M', 'S')
#define RIFFINFO_ICMT      mmioFOURCC ('I', 'C', 'M', 'T')
#define RIFFINFO_ICOP      mmioFOURCC ('I', 'C', 'O', 'P')
#define RIFFINFO_ICRD      mmioFOURCC ('I', 'C', 'R', 'D')
#define RIFFINFO_ICRP      mmioFOURCC ('I', 'C', 'R', 'P')
#define RIFFINFO_IDIM      mmioFOURCC ('I', 'D', 'I', 'M')
#define RIFFINFO_IDPI      mmioFOURCC ('I', 'D', 'P', 'I')
#define RIFFINFO_IENG      mmioFOURCC ('I', 'E', 'N', 'G')
#define RIFFINFO_IGNR      mmioFOURCC ('I', 'G', 'N', 'R')
#define RIFFINFO_IKEY      mmioFOURCC ('I', 'K', 'E', 'Y')
#define RIFFINFO_ILGT      mmioFOURCC ('I', 'L', 'G', 'T')
#define RIFFINFO_IMED      mmioFOURCC ('I', 'M', 'E', 'D')
#define RIFFINFO_INAM      mmioFOURCC ('I', 'N', 'A', 'M')
#define RIFFINFO_IPLT      mmioFOURCC ('I', 'P', 'L', 'T')
#define RIFFINFO_IPRD      mmioFOURCC ('I', 'P', 'R', 'D')
#define RIFFINFO_ISBJ      mmioFOURCC ('I', 'S', 'B', 'J')
#define RIFFINFO_ISFT      mmioFOURCC ('I', 'S', 'F', 'T')
#define RIFFINFO_ISHP      mmioFOURCC ('I', 'S', 'H', 'P')
#define RIFFINFO_ISRC      mmioFOURCC ('I', 'S', 'R', 'C')
#define RIFFINFO_ISRF      mmioFOURCC ('I', 'S', 'R', 'F')
#define RIFFINFO_ITCH      mmioFOURCC ('I', 'T', 'C', 'H')
#define RIFFINFO_ISMP      mmioFOURCC ('I', 'S', 'M', 'P')
#define RIFFINFO_IDIT      mmioFOURCC ('I', 'D', 'I', 'T')
#define RIFFINFO_ITRK      mmioFOURCC ('I', 'T', 'R', 'K')
#define RIFFINFO_ITOC      mmioFOURCC ('I', 'T', 'O', 'C')
#ifndef NONEWWAVE
#define  WAVE_FORMAT_UNKNOWN                    0x0000
#define  WAVE_FORMAT_ADPCM                      0x0002
#define  WAVE_FORMAT_IEEE_FLOAT                 0x0003
#define  WAVE_FORMAT_VSELP                      0x0004
#define  WAVE_FORMAT_IBM_CVSD                   0x0005
#define  WAVE_FORMAT_ALAW                       0x0006
#define  WAVE_FORMAT_MULAW                      0x0007
#define  WAVE_FORMAT_DTS                        0x0008
#define  WAVE_FORMAT_DRM                        0x0009
#define  WAVE_FORMAT_WMAVOICE9                  0x000A
#define  WAVE_FORMAT_WMAVOICE10                 0x000B
#define  WAVE_FORMAT_OKI_ADPCM                  0x0010
#define  WAVE_FORMAT_DVI_ADPCM                  0x0011
#define  WAVE_FORMAT_IMA_ADPCM                  (WAVE_FORMAT_DVI_ADPCM)
#define  WAVE_FORMAT_MEDIASPACE_ADPCM           0x0012
#define  WAVE_FORMAT_SIERRA_ADPCM               0x0013
#define  WAVE_FORMAT_G723_ADPCM                 0x0014
#define  WAVE_FORMAT_DIGISTD                    0x0015
#define  WAVE_FORMAT_DIGIFIX                    0x0016
#define  WAVE_FORMAT_DIALOGIC_OKI_ADPCM         0x0017
#define  WAVE_FORMAT_MEDIAVISION_ADPCM          0x0018
#define  WAVE_FORMAT_CU_CODEC                   0x0019
#define  WAVE_FORMAT_YAMAHA_ADPCM               0x0020
#define  WAVE_FORMAT_SONARC                     0x0021
#define  WAVE_FORMAT_DSPGROUP_TRUESPEECH        0x0022
#define  WAVE_FORMAT_ECHOSC1                    0x0023
#define  WAVE_FORMAT_AUDIOFILE_AF36             0x0024
#define  WAVE_FORMAT_APTX                       0x0025
#define  WAVE_FORMAT_AUDIOFILE_AF10             0x0026
#define  WAVE_FORMAT_PROSODY_1612               0x0027
#define  WAVE_FORMAT_LRC                        0x0028
#define  WAVE_FORMAT_DOLBY_AC2                  0x0030
#define  WAVE_FORMAT_GSM610                     0x0031
#define  WAVE_FORMAT_MSNAUDIO                   0x0032
#define  WAVE_FORMAT_ANTEX_ADPCME               0x0033
#define  WAVE_FORMAT_CONTROL_RES_VQLPC          0x0034
#define  WAVE_FORMAT_DIGIREAL                   0x0035
#define  WAVE_FORMAT_DIGIADPCM                  0x0036
#define  WAVE_FORMAT_CONTROL_RES_CR10           0x0037
#define  WAVE_FORMAT_NMS_VBXADPCM               0x0038
#define  WAVE_FORMAT_CS_IMAADPCM                0x0039
#define  WAVE_FORMAT_ECHOSC3                    0x003A
#define  WAVE_FORMAT_ROCKWELL_ADPCM             0x003B
#define  WAVE_FORMAT_ROCKWELL_DIGITALK          0x003C
#define  WAVE_FORMAT_XEBEC                      0x003D
#define  WAVE_FORMAT_G721_ADPCM                 0x0040
#define  WAVE_FORMAT_G728_CELP                  0x0041
#define  WAVE_FORMAT_MSG723                     0x0042
#define  WAVE_FORMAT_MPEG                       0x0050
#define  WAVE_FORMAT_RT24                       0x0052
#define  WAVE_FORMAT_PAC                        0x0053
#define  WAVE_FORMAT_MPEGLAYER3                 0x0055
#define  WAVE_FORMAT_LUCENT_G723                0x0059
#define  WAVE_FORMAT_CIRRUS                     0x0060
#define  WAVE_FORMAT_ESPCM                      0x0061
#define  WAVE_FORMAT_VOXWARE                    0x0062
#define  WAVE_FORMAT_CANOPUS_ATRAC              0x0063
#define  WAVE_FORMAT_G726_ADPCM                 0x0064
#define  WAVE_FORMAT_G722_ADPCM                 0x0065
#define  WAVE_FORMAT_DSAT_DISPLAY               0x0067
#define  WAVE_FORMAT_VOXWARE_BYTE_ALIGNED       0x0069
#define  WAVE_FORMAT_VOXWARE_AC8                0x0070
#define  WAVE_FORMAT_VOXWARE_AC10               0x0071
#define  WAVE_FORMAT_VOXWARE_AC16               0x0072
#define  WAVE_FORMAT_VOXWARE_AC20               0x0073
#define  WAVE_FORMAT_VOXWARE_RT24               0x0074
#define  WAVE_FORMAT_VOXWARE_RT29               0x0075
#define  WAVE_FORMAT_VOXWARE_RT29HW             0x0076
#define  WAVE_FORMAT_VOXWARE_VR12               0x0077
#define  WAVE_FORMAT_VOXWARE_VR18               0x0078
#define  WAVE_FORMAT_VOXWARE_TQ40               0x0079
#define  WAVE_FORMAT_SOFTSOUND                  0x0080
#define  WAVE_FORMAT_VOXWARE_TQ60               0x0081
#define  WAVE_FORMAT_MSRT24                     0x0082
#define  WAVE_FORMAT_G729A                      0x0083
#define  WAVE_FORMAT_MVI_MVI2                   0x0084
#define  WAVE_FORMAT_DF_G726                    0x0085
#define  WAVE_FORMAT_DF_GSM610                  0x0086
#define  WAVE_FORMAT_ISIAUDIO                   0x0088
#define  WAVE_FORMAT_ONLIVE                     0x0089
#define  WAVE_FORMAT_SBC24                      0x0091
#define  WAVE_FORMAT_DOLBY_AC3_SPDIF            0x0092
#define  WAVE_FORMAT_MEDIASONIC_G723            0x0093
#define  WAVE_FORMAT_PROSODY_8KBPS              0x0094
#define  WAVE_FORMAT_ZYXEL_ADPCM                0x0097
#define  WAVE_FORMAT_PHILIPS_LPCBB              0x0098
#define  WAVE_FORMAT_PACKED                     0x0099
#define  WAVE_FORMAT_MALDEN_PHONYTALK           0x00A0
#define  WAVE_FORMAT_RAW_AAC1                   0x00FF
#define  WAVE_FORMAT_RHETOREX_ADPCM             0x0100
#define  WAVE_FORMAT_IRAT                       0x0101
#define  WAVE_FORMAT_VIVO_G723                  0x0111
#define  WAVE_FORMAT_VIVO_SIREN                 0x0112
#define  WAVE_FORMAT_DIGITAL_G723               0x0123
#define  WAVE_FORMAT_SANYO_LD_ADPCM             0x0125
#define  WAVE_FORMAT_SIPROLAB_ACEPLNET          0x0130
#define  WAVE_FORMAT_SIPROLAB_ACELP4800         0x0131
#define  WAVE_FORMAT_SIPROLAB_ACELP8V3          0x0132
#define  WAVE_FORMAT_SIPROLAB_G729              0x0133
#define  WAVE_FORMAT_SIPROLAB_G729A             0x0134
#define  WAVE_FORMAT_SIPROLAB_KELVIN            0x0135
#define  WAVE_FORMAT_G726ADPCM                  0x0140
#define  WAVE_FORMAT_QUALCOMM_PUREVOICE         0x0150
#define  WAVE_FORMAT_QUALCOMM_HALFRATE          0x0151
#define  WAVE_FORMAT_TUBGSM                     0x0155
#define  WAVE_FORMAT_MSAUDIO1                   0x0160
#define  WAVE_FORMAT_WMAUDIO2                   0x0161
#define  WAVE_FORMAT_WMAUDIO3                   0x0162
#define  WAVE_FORMAT_WMAUDIO_LOSSLESS           0x0163
#define  WAVE_FORMAT_WMASPDIF                   0x0164
#define  WAVE_FORMAT_UNISYS_NAP_ADPCM           0x0170
#define  WAVE_FORMAT_UNISYS_NAP_ULAW            0x0171
#define  WAVE_FORMAT_UNISYS_NAP_ALAW            0x0172
#define  WAVE_FORMAT_UNISYS_NAP_16K             0x0173
#define  WAVE_FORMAT_CREATIVE_ADPCM             0x0200
#define  WAVE_FORMAT_CREATIVE_FASTSPEECH8       0x0202
#define  WAVE_FORMAT_CREATIVE_FASTSPEECH10      0x0203
#define  WAVE_FORMAT_UHER_ADPCM                 0x0210
#define  WAVE_FORMAT_QUARTERDECK                0x0220
#define  WAVE_FORMAT_ILINK_VC                   0x0230
#define  WAVE_FORMAT_RAW_SPORT                  0x0240
#define  WAVE_FORMAT_ESST_AC3                   0x0241
#define  WAVE_FORMAT_GENERIC_PASSTHRU           0x0249
#define  WAVE_FORMAT_IPI_HSX                    0x0250
#define  WAVE_FORMAT_IPI_RPELP                  0x0251
#define  WAVE_FORMAT_CS2                        0x0260
#define  WAVE_FORMAT_SONY_SCX                   0x0270
#define  WAVE_FORMAT_FM_TOWNS_SND               0x0300
#define  WAVE_FORMAT_BTV_DIGITAL                0x0400
#define  WAVE_FORMAT_QDESIGN_MUSIC              0x0450
#define  WAVE_FORMAT_VME_VMPCM                  0x0680
#define  WAVE_FORMAT_TPC                        0x0681
#define  WAVE_FORMAT_OLIGSM                     0x1000
#define  WAVE_FORMAT_OLIADPCM                   0x1001
#define  WAVE_FORMAT_OLICELP                    0x1002
#define  WAVE_FORMAT_OLISBC                     0x1003
#define  WAVE_FORMAT_OLIOPR                     0x1004
#define  WAVE_FORMAT_LH_CODEC                   0x1100
#define  WAVE_FORMAT_NORRIS                     0x1400
#define  WAVE_FORMAT_SOUNDSPACE_MUSICOMPRESS    0x1500
#define  WAVE_FORMAT_MPEG_ADTS_AAC              0x1600
#define  WAVE_FORMAT_MPEG_RAW_AAC               0x1601
#define  WAVE_FORMAT_MPEG_LOAS                  0x1602
#define  WAVE_FORMAT_NOKIA_MPEG_ADTS_AAC        0x1608
#define  WAVE_FORMAT_NOKIA_MPEG_RAW_AAC         0x1609
#define  WAVE_FORMAT_VODAFONE_MPEG_ADTS_AAC     0x160A
#define  WAVE_FORMAT_VODAFONE_MPEG_RAW_AAC      0x160B
#define  WAVE_FORMAT_MPEG_HEAAC                 0x1610
#define  WAVE_FORMAT_DVM                        0x2000
#define  WAVE_FORMAT_DTS2                       0x2001
#if !defined(WAVE_FORMAT_EXTENSIBLE)
#define  WAVE_FORMAT_EXTENSIBLE                 0xFFFE
#endif
#define WAVE_FORMAT_DEVELOPMENT         (0xFFFF)
#endif
#ifndef WAVE_FORMAT_PCM
typedef struct waveformat_tag {
    WORD    wFormatTag;
    WORD    nChannels;
    DWORD   nSamplesPerSec;
    DWORD   nAvgBytesPerSec;
    WORD    nBlockAlign;
} WAVEFORMAT;
typedef WAVEFORMAT       *PWAVEFORMAT;
typedef WAVEFORMAT NEAR *NPWAVEFORMAT;
typedef WAVEFORMAT FAR  *LPWAVEFORMAT;
#define WAVE_FORMAT_PCM     1
typedef struct pcmwaveformat_tag {
    WAVEFORMAT  wf;
    WORD        wBitsPerSample;
} PCMWAVEFORMAT;
typedef PCMWAVEFORMAT       *PPCMWAVEFORMAT;
typedef PCMWAVEFORMAT NEAR *NPPCMWAVEFORMAT;
typedef PCMWAVEFORMAT FAR  *LPPCMWAVEFORMAT;
#endif
#ifndef _WAVEFORMATEX_
#define _WAVEFORMATEX_
typedef struct tWAVEFORMATEX
{
    WORD    wFormatTag;
    WORD    nChannels;
    DWORD   nSamplesPerSec;
    DWORD   nAvgBytesPerSec;
    WORD    nBlockAlign;
    WORD    wBitsPerSample;
    WORD    cbSize;
} WAVEFORMATEX;
typedef WAVEFORMATEX       *PWAVEFORMATEX;
typedef WAVEFORMATEX NEAR *NPWAVEFORMATEX;
typedef WAVEFORMATEX FAR  *LPWAVEFORMATEX;
#endif
#ifdef GUID_DEFINED
#if !defined(_NTRTL_)
#if !defined( DEFINE_GUIDEX )
    #ifndef DEFINE_GUIDEX
        #define DEFINE_GUIDEX(name) extern const CDECL GUID name
    #endif
    #ifndef STATICGUIDOF
        #define STATICGUIDOF(guid) STATIC_##guid
    #endif
#endif
#endif
#if !defined( DEFINE_GUIDSTRUCT )

#define DEFINE_GUIDSTRUCT(g, n) DEFINE_GUIDEX(n)
#define DEFINE_GUIDNAMED(n) n

#endif
#if !defined( DEFINE_WAVEFORMATEX_GUID )
#define DEFINE_WAVEFORMATEX_GUID(x) (USHORT)(x), 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71
#endif
#if !defined( STATIC_KSDATAFORMAT_SUBTYPE_PCM )
#define STATIC_KSDATAFORMAT_SUBTYPE_PCM\
    DEFINE_WAVEFORMATEX_GUID(WAVE_FORMAT_PCM)
DEFINE_GUIDSTRUCT("00000001-0000-0010-8000-00aa00389b71", KSDATAFORMAT_SUBTYPE_PCM);
#define KSDATAFORMAT_SUBTYPE_PCM DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_PCM)
#endif
#if !defined(RC_INVOKED)
#if !defined( STATIC_KSDATAFORMAT_SUBTYPE_IEEE_FLOAT )
#define STATIC_KSDATAFORMAT_SUBTYPE_IEEE_FLOAT\
    DEFINE_WAVEFORMATEX_GUID(WAVE_FORMAT_IEEE_FLOAT)
DEFINE_GUIDSTRUCT("00000003-0000-0010-8000-00aa00389b71", KSDATAFORMAT_SUBTYPE_IEEE_FLOAT);
#define KSDATAFORMAT_SUBTYPE_IEEE_FLOAT DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_IEEE_FLOAT)
#endif
#if !defined( STATIC_KSDATAFORMAT_SUBTYPE_WAVEFORMATEX )
#define STATIC_KSDATAFORMAT_SUBTYPE_WAVEFORMATEX\
    0x00000000L, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71
DEFINE_GUIDSTRUCT("00000000-0000-0010-8000-00aa00389b71", KSDATAFORMAT_SUBTYPE_WAVEFORMATEX);
#define KSDATAFORMAT_SUBTYPE_WAVEFORMATEX DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_WAVEFORMATEX)
#endif
#endif
#if !defined( INIT_WAVEFORMATEX_GUID )
#define INIT_WAVEFORMATEX_GUID(Guid, x)\
{\
    *(Guid) = KSDATAFORMAT_SUBTYPE_WAVEFORMATEX;\
    (Guid)->Data1 = (USHORT)(x);\
}
#endif
#if !defined( EXTRACT_WAVEFORMATEX_ID )
#define EXTRACT_WAVEFORMATEX_ID(Guid)\
    (USHORT)((Guid)->Data1)
#endif
#if !defined( IS_VALID_WAVEFORMATEX_GUID )
#define IS_VALID_WAVEFORMATEX_GUID(Guid)\
    (!memcmp(((PUSHORT)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX) + 1, ((PUSHORT)(Guid)) + 1, sizeof(GUID) - sizeof(USHORT)))
#endif
#ifndef _WAVEFORMATEXTENSIBLE_
#define _WAVEFORMATEXTENSIBLE_
typedef struct {
    WAVEFORMATEX    Format;
    union {
        WORD wValidBitsPerSample;
        WORD wSamplesPerBlock;
        WORD wReserved;
    } Samples;
    DWORD           dwChannelMask;
    GUID            SubFormat;
} WAVEFORMATEXTENSIBLE, *PWAVEFORMATEXTENSIBLE;
#endif
typedef WAVEFORMATEXTENSIBLE    WAVEFORMATPCMEX;
typedef WAVEFORMATPCMEX       *PWAVEFORMATPCMEX;
typedef WAVEFORMATPCMEX NEAR *NPWAVEFORMATPCMEX;
typedef WAVEFORMATPCMEX FAR  *LPWAVEFORMATPCMEX;
typedef WAVEFORMATEXTENSIBLE          WAVEFORMATIEEEFLOATEX;
typedef WAVEFORMATIEEEFLOATEX       *PWAVEFORMATIEEEFLOATEX;
typedef WAVEFORMATIEEEFLOATEX NEAR *NPWAVEFORMATIEEEFLOATEX;
typedef WAVEFORMATIEEEFLOATEX FAR  *LPWAVEFORMATIEEEFLOATEX;
#endif
#ifndef _SPEAKER_POSITIONS_
#define _SPEAKER_POSITIONS_
#define SPEAKER_FRONT_LEFT              0x1
#define SPEAKER_FRONT_RIGHT             0x2
#define SPEAKER_FRONT_CENTER            0x4
#define SPEAKER_LOW_FREQUENCY           0x8
#define SPEAKER_BACK_LEFT               0x10
#define SPEAKER_BACK_RIGHT              0x20
#define SPEAKER_FRONT_LEFT_OF_CENTER    0x40
#define SPEAKER_FRONT_RIGHT_OF_CENTER   0x80
#define SPEAKER_BACK_CENTER             0x100
#define SPEAKER_SIDE_LEFT               0x200
#define SPEAKER_SIDE_RIGHT              0x400
#define SPEAKER_TOP_CENTER              0x800
#define SPEAKER_TOP_FRONT_LEFT          0x1000
#define SPEAKER_TOP_FRONT_CENTER        0x2000
#define SPEAKER_TOP_FRONT_RIGHT         0x4000
#define SPEAKER_TOP_BACK_LEFT           0x8000
#define SPEAKER_TOP_BACK_CENTER         0x10000
#define SPEAKER_TOP_BACK_RIGHT          0x20000
#define SPEAKER_RESERVED                0x7FFC0000
#define SPEAKER_ALL                     0x80000000
#endif
#ifndef NONEWWAVE
typedef struct adpcmcoef_tag {
        short   iCoef1;
        short   iCoef2;
} ADPCMCOEFSET;
typedef ADPCMCOEFSET       *PADPCMCOEFSET;
typedef ADPCMCOEFSET NEAR *NPADPCMCOEFSET;
typedef ADPCMCOEFSET FAR  *LPADPCMCOEFSET;
typedef struct adpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wSamplesPerBlock;
        WORD            wNumCoef;
        ADPCMCOEFSET    aCoef[1];
} ADPCMWAVEFORMAT;
typedef ADPCMWAVEFORMAT       *PADPCMWAVEFORMAT;
typedef ADPCMWAVEFORMAT NEAR *NPADPCMWAVEFORMAT;
typedef ADPCMWAVEFORMAT FAR  *LPADPCMWAVEFORMAT;
typedef struct drmwaveformat_tag {
	WAVEFORMATEX    wfx;
	WORD            wReserved;
	ULONG           ulContentId;
	WAVEFORMATEX    wfxSecure;
} DRMWAVEFORMAT;
typedef DRMWAVEFORMAT       *PDRMWAVEFORMAT;
typedef DRMWAVEFORMAT NEAR *NPDRMWAVEFORMAT;
typedef DRMWAVEFORMAT FAR  *LPDRMWAVEFORMAT;
typedef struct dvi_adpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wSamplesPerBlock;
} DVIADPCMWAVEFORMAT;
typedef DVIADPCMWAVEFORMAT       *PDVIADPCMWAVEFORMAT;
typedef DVIADPCMWAVEFORMAT NEAR *NPDVIADPCMWAVEFORMAT;
typedef DVIADPCMWAVEFORMAT FAR  *LPDVIADPCMWAVEFORMAT;
typedef struct ima_adpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wSamplesPerBlock;
} IMAADPCMWAVEFORMAT;
typedef IMAADPCMWAVEFORMAT       *PIMAADPCMWAVEFORMAT;
typedef IMAADPCMWAVEFORMAT NEAR *NPIMAADPCMWAVEFORMAT;
typedef IMAADPCMWAVEFORMAT FAR  *LPIMAADPCMWAVEFORMAT;
typedef struct mediaspace_adpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD    wRevision;
} MEDIASPACEADPCMWAVEFORMAT;
typedef MEDIASPACEADPCMWAVEFORMAT           *PMEDIASPACEADPCMWAVEFORMAT;
typedef MEDIASPACEADPCMWAVEFORMAT NEAR     *NPMEDIASPACEADPCMWAVEFORMAT;
typedef MEDIASPACEADPCMWAVEFORMAT FAR      *LPMEDIASPACEADPCMWAVEFORMAT;
typedef struct sierra_adpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wRevision;
} SIERRAADPCMWAVEFORMAT;
typedef SIERRAADPCMWAVEFORMAT   *PSIERRAADPCMWAVEFORMAT;
typedef SIERRAADPCMWAVEFORMAT NEAR      *NPSIERRAADPCMWAVEFORMAT;
typedef SIERRAADPCMWAVEFORMAT FAR       *LPSIERRAADPCMWAVEFORMAT;
typedef struct g723_adpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            cbExtraSize;
        WORD            nAuxBlockSize;
} G723_ADPCMWAVEFORMAT;
typedef G723_ADPCMWAVEFORMAT *PG723_ADPCMWAVEFORMAT;
typedef G723_ADPCMWAVEFORMAT NEAR *NPG723_ADPCMWAVEFORMAT;
typedef G723_ADPCMWAVEFORMAT FAR  *LPG723_ADPCMWAVEFORMAT;
typedef struct digistdwaveformat_tag {
        WAVEFORMATEX    wfx;
} DIGISTDWAVEFORMAT;
typedef DIGISTDWAVEFORMAT       *PDIGISTDWAVEFORMAT;
typedef DIGISTDWAVEFORMAT NEAR *NPDIGISTDWAVEFORMAT;
typedef DIGISTDWAVEFORMAT FAR  *LPDIGISTDWAVEFORMAT;
typedef struct digifixwaveformat_tag {
        WAVEFORMATEX    wfx;
} DIGIFIXWAVEFORMAT;
typedef DIGIFIXWAVEFORMAT       *PDIGIFIXWAVEFORMAT;
typedef DIGIFIXWAVEFORMAT NEAR *NPDIGIFIXWAVEFORMAT;
typedef DIGIFIXWAVEFORMAT FAR  *LPDIGIFIXWAVEFORMAT;
typedef struct creative_fastspeechformat_tag{
        WAVEFORMATEX    ewf;
}DIALOGICOKIADPCMWAVEFORMAT;
typedef DIALOGICOKIADPCMWAVEFORMAT       *PDIALOGICOKIADPCMWAVEFORMAT;
typedef DIALOGICOKIADPCMWAVEFORMAT NEAR *NPDIALOGICOKIADPCMWAVEFORMAT;
typedef DIALOGICOKIADPCMWAVEFORMAT FAR  *LPDIALOGICOKIADPCMWAVEFORMAT;
typedef struct yamaha_adpmcwaveformat_tag {
        WAVEFORMATEX    wfx;
} YAMAHA_ADPCMWAVEFORMAT;
typedef YAMAHA_ADPCMWAVEFORMAT *PYAMAHA_ADPCMWAVEFORMAT;
typedef YAMAHA_ADPCMWAVEFORMAT NEAR *NPYAMAHA_ADPCMWAVEFORMAT;
typedef YAMAHA_ADPCMWAVEFORMAT FAR  *LPYAMAHA_ADPCMWAVEFORMAT;
typedef struct sonarcwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wCompType;
} SONARCWAVEFORMAT;
typedef SONARCWAVEFORMAT       *PSONARCWAVEFORMAT;
typedef SONARCWAVEFORMAT NEAR *NPSONARCWAVEFORMAT;
typedef SONARCWAVEFORMAT FAR  *LPSONARCWAVEFORMAT;
typedef struct truespeechwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wRevision;
        WORD            nSamplesPerBlock;
        BYTE            abReserved[28];
} TRUESPEECHWAVEFORMAT;
typedef TRUESPEECHWAVEFORMAT       *PTRUESPEECHWAVEFORMAT;
typedef TRUESPEECHWAVEFORMAT NEAR *NPTRUESPEECHWAVEFORMAT;
typedef TRUESPEECHWAVEFORMAT FAR  *LPTRUESPEECHWAVEFORMAT;
typedef struct echosc1waveformat_tag {
        WAVEFORMATEX    wfx;
} ECHOSC1WAVEFORMAT;
typedef ECHOSC1WAVEFORMAT       *PECHOSC1WAVEFORMAT;
typedef ECHOSC1WAVEFORMAT NEAR *NPECHOSC1WAVEFORMAT;
typedef ECHOSC1WAVEFORMAT FAR  *LPECHOSC1WAVEFORMAT;
typedef struct audiofile_af36waveformat_tag {
        WAVEFORMATEX    wfx;
} AUDIOFILE_AF36WAVEFORMAT;
typedef AUDIOFILE_AF36WAVEFORMAT       *PAUDIOFILE_AF36WAVEFORMAT;
typedef AUDIOFILE_AF36WAVEFORMAT NEAR *NPAUDIOFILE_AF36WAVEFORMAT;
typedef AUDIOFILE_AF36WAVEFORMAT FAR  *LPAUDIOFILE_AF36WAVEFORMAT;
typedef struct aptxwaveformat_tag {
        WAVEFORMATEX    wfx;
} APTXWAVEFORMAT;
typedef APTXWAVEFORMAT       *PAPTXWAVEFORMAT;
typedef APTXWAVEFORMAT NEAR *NPAPTXWAVEFORMAT;
typedef APTXWAVEFORMAT FAR  *LPAPTXWAVEFORMAT;
typedef struct audiofile_af10waveformat_tag {
        WAVEFORMATEX    wfx;
} AUDIOFILE_AF10WAVEFORMAT;
typedef AUDIOFILE_AF10WAVEFORMAT       *PAUDIOFILE_AF10WAVEFORMAT;
typedef AUDIOFILE_AF10WAVEFORMAT NEAR *NPAUDIOFILE_AF10WAVEFORMAT;
typedef AUDIOFILE_AF10WAVEFORMAT FAR  *LPAUDIOFILE_AF10WAVEFORMAT;
typedef struct dolbyac2waveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            nAuxBitsCode;
} DOLBYAC2WAVEFORMAT;
typedef struct gsm610waveformat_tag {
WAVEFORMATEX    wfx;
WORD                    wSamplesPerBlock;
} GSM610WAVEFORMAT;
typedef GSM610WAVEFORMAT *PGSM610WAVEFORMAT;
typedef GSM610WAVEFORMAT NEAR    *NPGSM610WAVEFORMAT;
typedef GSM610WAVEFORMAT FAR     *LPGSM610WAVEFORMAT;
typedef struct adpcmewaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wSamplesPerBlock;
} ADPCMEWAVEFORMAT;
typedef ADPCMEWAVEFORMAT                *PADPCMEWAVEFORMAT;
typedef ADPCMEWAVEFORMAT NEAR   *NPADPCMEWAVEFORMAT;
typedef ADPCMEWAVEFORMAT FAR    *LPADPCMEWAVEFORMAT;
typedef struct contres_vqlpcwaveformat_tag {
WAVEFORMATEX    wfx;
WORD                    wSamplesPerBlock;
} CONTRESVQLPCWAVEFORMAT;
typedef CONTRESVQLPCWAVEFORMAT *PCONTRESVQLPCWAVEFORMAT;
typedef CONTRESVQLPCWAVEFORMAT NEAR      *NPCONTRESVQLPCWAVEFORMAT;
typedef CONTRESVQLPCWAVEFORMAT FAR       *LPCONTRESVQLPCWAVEFORMAT;
typedef struct digirealwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wSamplesPerBlock;
} DIGIREALWAVEFORMAT;
typedef DIGIREALWAVEFORMAT *PDIGIREALWAVEFORMAT;
typedef DIGIREALWAVEFORMAT NEAR *NPDIGIREALWAVEFORMAT;
typedef DIGIREALWAVEFORMAT FAR *LPDIGIREALWAVEFORMAT;
typedef struct digiadpcmmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wSamplesPerBlock;
} DIGIADPCMWAVEFORMAT;
typedef DIGIADPCMWAVEFORMAT       *PDIGIADPCMWAVEFORMAT;
typedef DIGIADPCMWAVEFORMAT NEAR *NPDIGIADPCMWAVEFORMAT;
typedef DIGIADPCMWAVEFORMAT FAR  *LPDIGIADPCMWAVEFORMAT;
typedef struct contres_cr10waveformat_tag {
WAVEFORMATEX    wfx;
WORD                    wSamplesPerBlock;
} CONTRESCR10WAVEFORMAT;
typedef CONTRESCR10WAVEFORMAT *PCONTRESCR10WAVEFORMAT;
typedef CONTRESCR10WAVEFORMAT NEAR       *NPCONTRESCR10WAVEFORMAT;
typedef CONTRESCR10WAVEFORMAT FAR        *LPCONTRESCR10WAVEFORMAT;
typedef struct nms_vbxadpcmmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wSamplesPerBlock;
} NMS_VBXADPCMWAVEFORMAT;
typedef NMS_VBXADPCMWAVEFORMAT       *PNMS_VBXADPCMWAVEFORMAT;
typedef NMS_VBXADPCMWAVEFORMAT NEAR *NPNMS_VBXADPCMWAVEFORMAT;
typedef NMS_VBXADPCMWAVEFORMAT FAR  *LPNMS_VBXADPCMWAVEFORMAT;
typedef struct g721_adpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            nAuxBlockSize;
} G721_ADPCMWAVEFORMAT;
typedef G721_ADPCMWAVEFORMAT *PG721_ADPCMWAVEFORMAT;
typedef G721_ADPCMWAVEFORMAT NEAR *NPG721_ADPCMWAVEFORMAT;
typedef G721_ADPCMWAVEFORMAT FAR  *LPG721_ADPCMWAVEFORMAT;
typedef struct mpeg1waveformat_tag {
    WAVEFORMATEX    wfx;
    WORD            fwHeadLayer;
    DWORD           dwHeadBitrate;
    WORD            fwHeadMode;
    WORD            fwHeadModeExt;
    WORD            wHeadEmphasis;
    WORD            fwHeadFlags;
    DWORD           dwPTSLow;
    DWORD           dwPTSHigh;
} MPEG1WAVEFORMAT;
typedef MPEG1WAVEFORMAT                 *PMPEG1WAVEFORMAT;
typedef MPEG1WAVEFORMAT NEAR           *NPMPEG1WAVEFORMAT;
typedef MPEG1WAVEFORMAT FAR            *LPMPEG1WAVEFORMAT;
#define ACM_MPEG_LAYER1             (0x0001)
#define ACM_MPEG_LAYER2             (0x0002)
#define ACM_MPEG_LAYER3             (0x0004)
#define ACM_MPEG_STEREO             (0x0001)
#define ACM_MPEG_JOINTSTEREO        (0x0002)
#define ACM_MPEG_DUALCHANNEL        (0x0004)
#define ACM_MPEG_SINGLECHANNEL      (0x0008)
#define ACM_MPEG_PRIVATEBIT         (0x0001)
#define ACM_MPEG_COPYRIGHT          (0x0002)
#define ACM_MPEG_ORIGINALHOME       (0x0004)
#define ACM_MPEG_PROTECTIONBIT      (0x0008)
#define ACM_MPEG_ID_MPEG1           (0x0010)
#define MPEGLAYER3_WFX_EXTRA_BYTES   12
typedef struct mpeglayer3waveformat_tag {
  WAVEFORMATEX  wfx;
  WORD          wID;
  DWORD         fdwFlags;
  WORD          nBlockSize;
  WORD          nFramesPerBlock;
  WORD          nCodecDelay;
} MPEGLAYER3WAVEFORMAT;
typedef MPEGLAYER3WAVEFORMAT          *PMPEGLAYER3WAVEFORMAT;
typedef MPEGLAYER3WAVEFORMAT NEAR    *NPMPEGLAYER3WAVEFORMAT;
typedef MPEGLAYER3WAVEFORMAT FAR     *LPMPEGLAYER3WAVEFORMAT;
#define MPEGLAYER3_ID_UNKNOWN            0
#define MPEGLAYER3_ID_MPEG               1
#define MPEGLAYER3_ID_CONSTANTFRAMESIZE  2
#define MPEGLAYER3_FLAG_PADDING_ISO      0x00000000
#define MPEGLAYER3_FLAG_PADDING_ON       0x00000001
#define MPEGLAYER3_FLAG_PADDING_OFF      0x00000002
typedef struct heaacwaveinfo_tag {
    WAVEFORMATEX wfx;
    WORD  wPayloadType;
    WORD  wAudioProfileLevelIndication;
    WORD  wStructType;
    WORD  wReserved1;
    DWORD dwReserved2;
} HEAACWAVEINFO;
typedef HEAACWAVEINFO       *PHEAACWAVEINFO;
typedef HEAACWAVEINFO NEAR *NPHEAACWAVEINFO;
typedef HEAACWAVEINFO FAR  *LPHEAACWAVEINFO;
typedef struct heaacwaveformat_tag {
    HEAACWAVEINFO wfInfo;
    BYTE          pbAudioSpecificConfig[1];
} HEAACWAVEFORMAT;
typedef HEAACWAVEFORMAT       *PHEAACWAVEFORMAT;
typedef HEAACWAVEFORMAT NEAR *NPHEAACWAVEFORMAT;
typedef HEAACWAVEFORMAT FAR  *LPHEAACWAVEFORMAT;
#define MM_MSFT_ACM_WMAUDIO  39
#define WMAUDIO_BITS_PER_SAMPLE    16
#define WMAUDIO_MAX_CHANNELS       2
#define MM_MSFT_ACM_MSAUDIO1  39
typedef struct msaudio1waveformat_tag {
    WAVEFORMATEX wfx;
    WORD         wSamplesPerBlock;
    WORD         wEncodeOptions;
} MSAUDIO1WAVEFORMAT;
typedef MSAUDIO1WAVEFORMAT FAR  *LPMSAUDIO1WAVEFORMAT;
#define MSAUDIO1_BITS_PER_SAMPLE    WMAUDIO_BITS_PER_SAMPLE
#define MSAUDIO1_MAX_CHANNELS       WMAUDIO_MAX_CHANNELS
#define MSAUDIO1_WFX_EXTRA_BYTES    (sizeof(MSAUDIO1WAVEFORMAT) - sizeof(WAVEFORMATEX))
#define MM_MSFT_ACM_WMAUDIO2  101
typedef struct wmaudio2waveformat_tag {
    WAVEFORMATEX wfx;
    DWORD        dwSamplesPerBlock;
    WORD         wEncodeOptions;
    DWORD        dwSuperBlockAlign;
} WMAUDIO2WAVEFORMAT;
typedef WMAUDIO2WAVEFORMAT FAR  *LPWMAUDIO2WAVEFORMAT;
#define WMAUDIO2_BITS_PER_SAMPLE    WMAUDIO_BITS_PER_SAMPLE
#define WMAUDIO2_MAX_CHANNELS       WMAUDIO_MAX_CHANNELS
#define WMAUDIO2_WFX_EXTRA_BYTES    (sizeof(WMAUDIO2WAVEFORMAT) - sizeof(WAVEFORMATEX))
typedef struct wmaudio3waveformat_tag {
  WAVEFORMATEX wfx;
  WORD         wValidBitsPerSample;
  DWORD        dwChannelMask;
  DWORD        dwReserved1;
  DWORD        dwReserved2;
  WORD         wEncodeOptions;
  WORD         wReserved3;
} WMAUDIO3WAVEFORMAT;
typedef WMAUDIO3WAVEFORMAT FAR *LPWMAUDIO3WAVEFORMAT;
#define WMAUDIO3_WFX_EXTRA_BYTES    (sizeof(WMAUDIO3WAVEFORMAT) - sizeof(WAVEFORMATEX))
typedef struct creative_adpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wRevision;
} CREATIVEADPCMWAVEFORMAT;
typedef CREATIVEADPCMWAVEFORMAT       *PCREATIVEADPCMWAVEFORMAT;
typedef CREATIVEADPCMWAVEFORMAT NEAR *NPCREATIVEADPCMWAVEFORMAT;
typedef CREATIVEADPCMWAVEFORMAT FAR  *LPCREATIVEADPCMWAVEFORMAT;
typedef struct creative_fastspeech8format_tag {
        WAVEFORMATEX    wfx;
        WORD wRevision;
} CREATIVEFASTSPEECH8WAVEFORMAT;
typedef CREATIVEFASTSPEECH8WAVEFORMAT       *PCREATIVEFASTSPEECH8WAVEFORMAT;
typedef CREATIVEFASTSPEECH8WAVEFORMAT NEAR *NPCREATIVEFASTSPEECH8WAVEFORMAT;
typedef CREATIVEFASTSPEECH8WAVEFORMAT FAR  *LPCREATIVEFASTSPEECH8WAVEFORMAT;
typedef struct creative_fastspeech10format_tag {
        WAVEFORMATEX    wfx;
        WORD wRevision;
} CREATIVEFASTSPEECH10WAVEFORMAT;
typedef CREATIVEFASTSPEECH10WAVEFORMAT       *PCREATIVEFASTSPEECH10WAVEFORMAT;
typedef CREATIVEFASTSPEECH10WAVEFORMAT NEAR *NPCREATIVEFASTSPEECH10WAVEFORMAT;
typedef CREATIVEFASTSPEECH10WAVEFORMAT FAR  *LPCREATIVEFASTSPEECH10WAVEFORMAT;
typedef struct fmtowns_snd_waveformat_tag {
        WAVEFORMATEX    wfx;
        WORD            wRevision;
} FMTOWNS_SND_WAVEFORMAT;
typedef FMTOWNS_SND_WAVEFORMAT       *PFMTOWNS_SND_WAVEFORMAT;
typedef FMTOWNS_SND_WAVEFORMAT NEAR *NPFMTOWNS_SND_WAVEFORMAT;
typedef FMTOWNS_SND_WAVEFORMAT FAR  *LPFMTOWNS_SND_WAVEFORMAT;
typedef struct oligsmwaveformat_tag {
        WAVEFORMATEX    wfx;
} OLIGSMWAVEFORMAT;
typedef OLIGSMWAVEFORMAT     *POLIGSMWAVEFORMAT;
typedef OLIGSMWAVEFORMAT NEAR *NPOLIGSMWAVEFORMAT;
typedef OLIGSMWAVEFORMAT  FAR  *LPOLIGSMWAVEFORMAT;
typedef struct oliadpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
} OLIADPCMWAVEFORMAT;
typedef OLIADPCMWAVEFORMAT     *POLIADPCMWAVEFORMAT;
typedef OLIADPCMWAVEFORMAT NEAR *NPOLIADPCMWAVEFORMAT ;
typedef OLIADPCMWAVEFORMAT  FAR  *LPOLIADPCMWAVEFORMAT;
typedef struct olicelpwaveformat_tag {
        WAVEFORMATEX    wfx;
} OLICELPWAVEFORMAT;
typedef OLICELPWAVEFORMAT     *POLICELPWAVEFORMAT;
typedef OLICELPWAVEFORMAT NEAR *NPOLICELPWAVEFORMAT ;
typedef OLICELPWAVEFORMAT  FAR  *LPOLICELPWAVEFORMAT;
typedef struct olisbcwaveformat_tag {
        WAVEFORMATEX    wfx;
} OLISBCWAVEFORMAT;
typedef OLISBCWAVEFORMAT     *POLISBCWAVEFORMAT;
typedef OLISBCWAVEFORMAT NEAR *NPOLISBCWAVEFORMAT ;
typedef OLISBCWAVEFORMAT  FAR  *LPOLISBCWAVEFORMAT;
typedef struct olioprwaveformat_tag {
        WAVEFORMATEX    wfx;
} OLIOPRWAVEFORMAT;
typedef OLIOPRWAVEFORMAT     *POLIOPRWAVEFORMAT;
typedef OLIOPRWAVEFORMAT NEAR *NPOLIOPRWAVEFORMAT ;
typedef OLIOPRWAVEFORMAT  FAR  *LPOLIOPRWAVEFORMAT;
typedef struct csimaadpcmwaveformat_tag {
        WAVEFORMATEX    wfx;
} CSIMAADPCMWAVEFORMAT;
typedef CSIMAADPCMWAVEFORMAT     *PCSIMAADPCMWAVEFORMAT;
typedef CSIMAADPCMWAVEFORMAT NEAR *NPCSIMAADPCMWAVEFORMAT ;
typedef CSIMAADPCMWAVEFORMAT  FAR  *LPCSIMAADPCMWAVEFORMAT;
#ifndef _ACM_WAVEFILTER
#define _ACM_WAVEFILTER
#define WAVE_FILTER_UNKNOWN         0x0000
#define WAVE_FILTER_DEVELOPMENT    (0xFFFF)
typedef struct wavefilter_tag {
    DWORD   cbStruct;
    DWORD   dwFilterTag;
    DWORD   fdwFilter;
    DWORD   dwReserved[5];
} WAVEFILTER;
typedef WAVEFILTER       *PWAVEFILTER;
typedef WAVEFILTER NEAR *NPWAVEFILTER;
typedef WAVEFILTER FAR  *LPWAVEFILTER;
#endif
#ifndef WAVE_FILTER_VOLUME
#define WAVE_FILTER_VOLUME      0x0001
typedef struct wavefilter_volume_tag {
        WAVEFILTER      wfltr;
        DWORD           dwVolume;
} VOLUMEWAVEFILTER;
typedef VOLUMEWAVEFILTER       *PVOLUMEWAVEFILTER;
typedef VOLUMEWAVEFILTER NEAR *NPVOLUMEWAVEFILTER;
typedef VOLUMEWAVEFILTER FAR  *LPVOLUMEWAVEFILTER;
#endif
#ifndef WAVE_FILTER_ECHO
#define WAVE_FILTER_ECHO        0x0002
typedef struct wavefilter_echo_tag {
        WAVEFILTER      wfltr;
        DWORD           dwVolume;
        DWORD           dwDelay;
} ECHOWAVEFILTER;
typedef ECHOWAVEFILTER       *PECHOWAVEFILTER;
typedef ECHOWAVEFILTER NEAR *NPECHOWAVEFILTER;
typedef ECHOWAVEFILTER FAR  *LPECHOWAVEFILTER;
#endif
#define RIFFWAVE_inst   mmioFOURCC('i','n','s','t')
struct tag_s_RIFFWAVE_inst {
    BYTE    bUnshiftedNote;
    char    chFineTune;
    char    chGain;
    BYTE    bLowNote;
    BYTE    bHighNote;
    BYTE    bLowVelocity;
    BYTE    bHighVelocity;
};
typedef struct tag_s_RIFFWAVE_INST s_RIFFWAVE_inst;
#endif
#ifndef NONEWRIFF
#define RIFFCPPO        mmioFOURCC('C','P','P','O')
#define RIFFCPPO_objr   mmioFOURCC('o','b','j','r')
#define RIFFCPPO_obji   mmioFOURCC('o','b','j','i')
#define RIFFCPPO_clsr   mmioFOURCC('c','l','s','r')
#define RIFFCPPO_clsi   mmioFOURCC('c','l','s','i')
#define RIFFCPPO_mbr    mmioFOURCC('m','b','r',' ')
#define RIFFCPPO_char   mmioFOURCC('c','h','a','r')
#define RIFFCPPO_byte   mmioFOURCC('b','y','t','e')
#define RIFFCPPO_int    mmioFOURCC('i','n','t',' ')
#define RIFFCPPO_word   mmioFOURCC('w','o','r','d')
#define RIFFCPPO_long   mmioFOURCC('l','o','n','g')
#define RIFFCPPO_dwrd   mmioFOURCC('d','w','r','d')
#define RIFFCPPO_flt    mmioFOURCC('f','l','t',' ')
#define RIFFCPPO_dbl    mmioFOURCC('d','b','l',' ')
#define RIFFCPPO_str    mmioFOURCC('s','t','r',' ')
#endif
#ifndef BI_BITFIELDS
#define BI_BITFIELDS    3
#endif
#ifndef QUERYDIBSUPPORT
#define QUERYDIBSUPPORT 3073
#define QDI_SETDIBITS   0x0001
#define QDI_GETDIBITS   0x0002
#define QDI_DIBTOSCREEN 0x0004
#define QDI_STRETCHDIB  0x0008
#endif
#ifndef NOBITMAP
typedef struct tagEXBMINFOHEADER {
        BITMAPINFOHEADER    bmi;
        DWORD   biExtDataOffset;
} EXBMINFOHEADER;
#endif
#define BICOMP_IBMULTIMOTION    mmioFOURCC('U', 'L', 'T', 'I')
#define BICOMP_IBMPHOTOMOTION   mmioFOURCC('P', 'H', 'M', 'O')
#define BICOMP_CREATIVEYUV      mmioFOURCC('c', 'y', 'u', 'v')
#ifndef NOJPEGDIB
#define JPEG_DIB        mmioFOURCC('J','P','E','G')
#define MJPG_DIB        mmioFOURCC('M','J','P','G')
#define JPEG_PROCESS_BASELINE           0
#define AVIIF_CONTROLFRAME              0x00000200L
#define JIFMK_SOF0    0xFFC0
#define JIFMK_SOF1    0xFFC1
#define JIFMK_SOF2    0xFFC2
#define JIFMK_SOF3    0xFFC3
#define JIFMK_SOF5    0xFFC5
#define JIFMK_SOF6    0xFFC6
#define JIFMK_SOF7    0xFFC7
#define JIFMK_JPG     0xFFC8
#define JIFMK_SOF9    0xFFC9
#define JIFMK_SOF10   0xFFCA
#define JIFMK_SOF11   0xFFCB
#define JIFMK_SOF13   0xFFCD
#define JIFMK_SOF14   0xFFCE
#define JIFMK_SOF15   0xFFCF
#define JIFMK_DHT     0xFFC4
#define JIFMK_DAC     0xFFCC
#define JIFMK_RST0    0xFFD0
#define JIFMK_RST1    0xFFD1
#define JIFMK_RST2    0xFFD2
#define JIFMK_RST3    0xFFD3
#define JIFMK_RST4    0xFFD4
#define JIFMK_RST5    0xFFD5
#define JIFMK_RST6    0xFFD6
#define JIFMK_RST7    0xFFD7
#define JIFMK_SOI     0xFFD8
#define JIFMK_EOI     0xFFD9
#define JIFMK_SOS     0xFFDA
#define JIFMK_DQT     0xFFDB
#define JIFMK_DNL     0xFFDC
#define JIFMK_DRI     0xFFDD
#define JIFMK_DHP     0xFFDE
#define JIFMK_EXP     0xFFDF
#define JIFMK_APP0    0xFFE0
#define JIFMK_APP1    0xFFE1
#define JIFMK_APP2    0xFFE2
#define JIFMK_APP3    0xFFE3
#define JIFMK_APP4    0xFFE4
#define JIFMK_APP5    0xFFE5
#define JIFMK_APP6    0xFFE6
#define JIFMK_APP7    0xFFE7
#define JIFMK_JPG0    0xFFF0
#define JIFMK_JPG1    0xFFF1
#define JIFMK_JPG2    0xFFF2
#define JIFMK_JPG3    0xFFF3
#define JIFMK_JPG4    0xFFF4
#define JIFMK_JPG5    0xFFF5
#define JIFMK_JPG6    0xFFF6
#define JIFMK_JPG7    0xFFF7
#define JIFMK_JPG8    0xFFF8
#define JIFMK_JPG9    0xFFF9
#define JIFMK_JPG10   0xFFFA
#define JIFMK_JPG11   0xFFFB
#define JIFMK_JPG12   0xFFFC
#define JIFMK_JPG13   0xFFFD
#define JIFMK_COM     0xFFFE
#define JIFMK_TEM     0xFF01
#define JIFMK_RES     0xFF02
#define JIFMK_00      0xFF00
#define JIFMK_FF      0xFFFF
#define JPEG_Y          1
#define JPEG_YCbCr      2
#define JPEG_RGB        3
typedef struct tagJPEGINFOHEADER {
    DWORD       JPEGSize;
    DWORD       JPEGProcess;
    DWORD       JPEGColorSpaceID;
    DWORD       JPEGBitsPerSample;
    DWORD       JPEGHSubSampling;
    DWORD       JPEGVSubSampling;
} JPEGINFOHEADER;
#ifdef MJPGDHTSEG_STORAGE
MJPGDHTSEG_STORAGE BYTE MJPGDHTSeg[0x1A4] =
{
0xFF,0xC4,0x01,0xA2,
0x00,0x00,0x01,0x05,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x01,0x00,0x03,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,
0x08,0x09,0x0A,0x0B,0x10,0x00,0x02,0x01,0x03,0x03,0x02,0x04,0x03,0x05,0x05,0x04,0x04,0x00,
0x00,0x01,0x7D,0x01,0x02,0x03,0x00,0x04,0x11,0x05,0x12,0x21,0x31,0x41,0x06,0x13,0x51,0x61,
0x07,0x22,0x71,0x14,0x32,0x81,0x91,0xA1,0x08,0x23,0x42,0xB1,0xC1,0x15,0x52,0xD1,0xF0,0x24,
0x33,0x62,0x72,0x82,0x09,0x0A,0x16,0x17,0x18,0x19,0x1A,0x25,0x26,0x27,0x28,0x29,0x2A,0x34,
0x35,0x36,0x37,0x38,0x39,0x3A,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x53,0x54,0x55,0x56,
0x57,0x58,0x59,0x5A,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x73,0x74,0x75,0x76,0x77,0x78,
0x79,0x7A,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,
0x9A,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,
0xBA,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,
0xDA,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,
0xF8,0xF9,0xFA,0x11,0x00,0x02,0x01,0x02,0x04,0x04,0x03,0x04,0x07,0x05,0x04,0x04,0x00,0x01,
0x02,0x77,0x00,0x01,0x02,0x03,0x11,0x04,0x05,0x21,0x31,0x06,0x12,0x41,0x51,0x07,0x61,0x71,
0x13,0x22,0x32,0x81,0x08,0x14,0x42,0x91,0xA1,0xB1,0xC1,0x09,0x23,0x33,0x52,0xF0,0x15,0x62,
0x72,0xD1,0x0A,0x16,0x24,0x34,0xE1,0x25,0xF1,0x17,0x18,0x19,0x1A,0x26,0x27,0x28,0x29,0x2A,
0x35,0x36,0x37,0x38,0x39,0x3A,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x53,0x54,0x55,0x56,
0x57,0x58,0x59,0x5A,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x73,0x74,0x75,0x76,0x77,0x78,
0x79,0x7A,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x92,0x93,0x94,0x95,0x96,0x97,0x98,
0x99,0x9A,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,
0xB9,0xBA,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,
0xD9,0xDA,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,
0xF9,0xFA
};
#endif
#endif
#ifndef NONEWIC
#ifndef ICTYPE_VIDEO
#define ICTYPE_VIDEO    mmioFOURCC('v', 'i', 'd', 'c')
#define ICTYPE_AUDIO    mmioFOURCC('a', 'u', 'd', 'c')
#endif
#endif
#define FOURCC_RDSP mmioFOURCC('R', 'D', 'S', 'P')
#ifndef MMNOMIXER
#define MIXERCONTROL_CONTROLTYPE_SRS_MTS                (MIXERCONTROL_CONTROLTYPE_BOOLEAN + 6)
#define MIXERCONTROL_CONTROLTYPE_SRS_ONOFF              (MIXERCONTROL_CONTROLTYPE_BOOLEAN + 7)
#define MIXERCONTROL_CONTROLTYPE_SRS_SYNTHSELECT        (MIXERCONTROL_CONTROLTYPE_BOOLEAN + 8)
#endif
#include "poppack.h"
#endif
