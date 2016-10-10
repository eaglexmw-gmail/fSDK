/*+@@file@@----------------------------------------------------------------*//*!
 \file		winnls.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 01:08:36 2016
 \date		Modified on Mon Jun 27 01:08:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINNLS_
#define _WINNLS_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef NONLS
#if !defined(_NORMALIZE_)
#define WINNORMALIZEAPI DECLSPEC_IMPORT
#else
#define WINNORMALIZEAPI
#endif
#define MAX_LEADBYTES             12
#define MAX_DEFAULTCHAR           2
#define HIGH_SURROGATE_START  0xd800
#define HIGH_SURROGATE_END    0xdbff
#define LOW_SURROGATE_START   0xdc00
#define LOW_SURROGATE_END     0xdfff
#define MB_PRECOMPOSED            0x00000001
#define MB_COMPOSITE              0x00000002
#define MB_USEGLYPHCHARS          0x00000004
#define MB_ERR_INVALID_CHARS      0x00000008
#define WC_COMPOSITECHECK         0x00000200
#define WC_DISCARDNS              0x00000010
#define WC_SEPCHARS               0x00000020
#define WC_DEFAULTCHAR            0x00000040
#if (WINVER >= 0x0600)
#define WC_ERR_INVALID_CHARS      0x00000080
#endif
#if(WINVER >= 0x0500)
#define WC_NO_BEST_FIT_CHARS      0x00000400
#endif
#define CT_CTYPE1                 0x00000001
#define CT_CTYPE2                 0x00000002
#define CT_CTYPE3                 0x00000004
#define C1_UPPER                  0x0001
#define C1_LOWER                  0x0002
#define C1_DIGIT                  0x0004
#define C1_SPACE                  0x0008
#define C1_PUNCT                  0x0010
#define C1_CNTRL                  0x0020
#define C1_BLANK                  0x0040
#define C1_XDIGIT                 0x0080
#define C1_ALPHA                  0x0100
#define C1_DEFINED                0x0200
#define C2_LEFTTORIGHT            0x0001
#define C2_RIGHTTOLEFT            0x0002
#define C2_EUROPENUMBER           0x0003
#define C2_EUROPESEPARATOR        0x0004
#define C2_EUROPETERMINATOR       0x0005
#define C2_ARABICNUMBER           0x0006
#define C2_COMMONSEPARATOR        0x0007
#define C2_BLOCKSEPARATOR         0x0008
#define C2_SEGMENTSEPARATOR       0x0009
#define C2_WHITESPACE             0x000A
#define C2_OTHERNEUTRAL           0x000B
#define C2_NOTAPPLICABLE          0x0000
#define C3_NONSPACING             0x0001
#define C3_DIACRITIC              0x0002
#define C3_VOWELMARK              0x0004
#define C3_SYMBOL                 0x0008
#define C3_KATAKANA               0x0010
#define C3_HIRAGANA               0x0020
#define C3_HALFWIDTH              0x0040
#define C3_FULLWIDTH              0x0080
#define C3_IDEOGRAPH              0x0100
#define C3_KASHIDA                0x0200
#define C3_LEXICAL                0x0400
#define C3_HIGHSURROGATE          0x0800
#define C3_LOWSURROGATE           0x1000
#define C3_ALPHA                  0x8000
#define C3_NOTAPPLICABLE          0x0000
#define NORM_IGNORECASE           0x00000001
#define NORM_IGNORENONSPACE       0x00000002
#define NORM_IGNORESYMBOLS        0x00000004
#define LINGUISTIC_IGNORECASE     0x00000010
#define LINGUISTIC_IGNOREDIACRITIC 0x00000020
#define NORM_IGNOREKANATYPE       0x00010000
#define NORM_IGNOREWIDTH          0x00020000
#define NORM_LINGUISTIC_CASING    0x08000000
#define MAP_FOLDCZONE             0x00000010
#define MAP_PRECOMPOSED           0x00000020
#define MAP_COMPOSITE             0x00000040
#define MAP_FOLDDIGITS            0x00000080
#if(WINVER >= 0x0500)
#define MAP_EXPAND_LIGATURES      0x00002000
#endif
#define LCMAP_LOWERCASE           0x00000100
#define LCMAP_UPPERCASE           0x00000200
#if (WINVER >= _WIN32_WINNT_WIN7)
#define LCMAP_TITLECASE           0x00000300
#endif
#define LCMAP_SORTKEY             0x00000400
#define LCMAP_BYTEREV             0x00000800
#define LCMAP_HIRAGANA            0x00100000
#define LCMAP_KATAKANA            0x00200000
#define LCMAP_HALFWIDTH           0x00400000
#define LCMAP_FULLWIDTH           0x00800000
#define LCMAP_LINGUISTIC_CASING   0x01000000
#define LCMAP_SIMPLIFIED_CHINESE  0x02000000
#define LCMAP_TRADITIONAL_CHINESE 0x04000000
#define FIND_STARTSWITH           0x00100000
#define FIND_ENDSWITH             0x00200000
#define FIND_FROMSTART            0x00400000
#define FIND_FROMEND              0x00800000
#define LGRPID_INSTALLED          0x00000001
#define LGRPID_SUPPORTED          0x00000002
#define LCID_INSTALLED            0x00000001
#define LCID_SUPPORTED            0x00000002
#define LCID_ALTERNATE_SORTS      0x00000004
#if (WINVER >= _WIN32_WINNT_VISTA)
#define LOCALE_ALL                  0
#define LOCALE_WINDOWS              0x00000001
#define LOCALE_SUPPLEMENTAL         0x00000002
#define LOCALE_ALTERNATE_SORTS      0x00000004
#define LOCALE_REPLACEMENT          0x00000008
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
#define LOCALE_NEUTRALDATA          0x00000010
#define LOCALE_SPECIFICDATA         0x00000020
#endif
#define CP_INSTALLED              0x00000001
#define CP_SUPPORTED              0x00000002
#define SORT_STRINGSORT           0x00001000
#if (WINVER >= _WIN32_WINNT_WIN7)
#define SORT_DIGITSASNUMBERS      0x00000008
#endif
#define CSTR_LESS_THAN            1
#define CSTR_EQUAL                2
#define CSTR_GREATER_THAN         3
#define CP_ACP                    0
#define CP_OEMCP                  1
#define CP_MACCP                  2
#define CP_THREAD_ACP             3
#define CP_SYMBOL                 42
#define CP_UTF7                   65000
#define CP_UTF8                   65001
#define CTRY_DEFAULT              0
#define CTRY_ALBANIA              355
#define CTRY_ALGERIA              213
#define CTRY_ARGENTINA            54
#define CTRY_ARMENIA              374
#define CTRY_AUSTRALIA            61
#define CTRY_AUSTRIA              43
#define CTRY_AZERBAIJAN           994
#define CTRY_BAHRAIN              973
#define CTRY_BELARUS              375
#define CTRY_BELGIUM              32
#define CTRY_BELIZE               501
#define CTRY_BOLIVIA              591
#define CTRY_BRAZIL               55
#define CTRY_BRUNEI_DARUSSALAM    673
#define CTRY_BULGARIA             359
#define CTRY_CANADA               2
#define CTRY_CARIBBEAN            1
#define CTRY_CHILE                56
#define CTRY_COLOMBIA             57
#define CTRY_COSTA_RICA           506
#define CTRY_CROATIA              385
#define CTRY_CZECH                420
#define CTRY_DENMARK              45
#define CTRY_DOMINICAN_REPUBLIC   1
#define CTRY_ECUADOR              593
#define CTRY_EGYPT                20
#define CTRY_EL_SALVADOR          503
#define CTRY_ESTONIA              372
#define CTRY_FAEROE_ISLANDS       298
#define CTRY_FINLAND              358
#define CTRY_FRANCE               33
#define CTRY_GEORGIA              995
#define CTRY_GERMANY              49
#define CTRY_GREECE               30
#define CTRY_GUATEMALA            502
#define CTRY_HONDURAS             504
#define CTRY_HONG_KONG            852
#define CTRY_HUNGARY              36
#define CTRY_ICELAND              354
#define CTRY_INDIA                91
#define CTRY_INDONESIA            62
#define CTRY_IRAN                 981
#define CTRY_IRAQ                 964
#define CTRY_IRELAND              353
#define CTRY_ISRAEL               972
#define CTRY_ITALY                39
#define CTRY_JAMAICA              1
#define CTRY_JAPAN                81
#define CTRY_JORDAN               962
#define CTRY_KAZAKSTAN            7
#define CTRY_KENYA                254
#define CTRY_KUWAIT               965
#define CTRY_KYRGYZSTAN           996
#define CTRY_LATVIA               371
#define CTRY_LEBANON              961
#define CTRY_LIBYA                218
#define CTRY_LIECHTENSTEIN        41
#define CTRY_LITHUANIA            370
#define CTRY_LUXEMBOURG           352
#define CTRY_MACAU                853
#define CTRY_MACEDONIA            389
#define CTRY_MALAYSIA             60
#define CTRY_MALDIVES             960
#define CTRY_MEXICO               52
#define CTRY_MONACO               33
#define CTRY_MONGOLIA             976
#define CTRY_MOROCCO              212
#define CTRY_NETHERLANDS          31
#define CTRY_NEW_ZEALAND          64
#define CTRY_NICARAGUA            505
#define CTRY_NORWAY               47
#define CTRY_OMAN                 968
#define CTRY_PAKISTAN             92
#define CTRY_PANAMA               507
#define CTRY_PARAGUAY             595
#define CTRY_PERU                 51
#define CTRY_PHILIPPINES          63
#define CTRY_POLAND               48
#define CTRY_PORTUGAL             351
#define CTRY_PRCHINA              86
#define CTRY_PUERTO_RICO          1
#define CTRY_QATAR                974
#define CTRY_ROMANIA              40
#define CTRY_RUSSIA               7
#define CTRY_SAUDI_ARABIA         966
#define CTRY_SERBIA               381
#define CTRY_SINGAPORE            65
#define CTRY_SLOVAK               421
#define CTRY_SLOVENIA             386
#define CTRY_SOUTH_AFRICA         27
#define CTRY_SOUTH_KOREA          82
#define CTRY_SPAIN                34
#define CTRY_SWEDEN               46
#define CTRY_SWITZERLAND          41
#define CTRY_SYRIA                963
#define CTRY_TAIWAN               886
#define CTRY_TATARSTAN            7
#define CTRY_THAILAND             66
#define CTRY_TRINIDAD_Y_TOBAGO    1
#define CTRY_TUNISIA              216
#define CTRY_TURKEY               90
#define CTRY_UAE                  971
#define CTRY_UKRAINE              380
#define CTRY_UNITED_KINGDOM       44
#define CTRY_UNITED_STATES        1
#define CTRY_URUGUAY              598
#define CTRY_UZBEKISTAN           7
#define CTRY_VENEZUELA            58
#define CTRY_VIET_NAM             84
#define CTRY_YEMEN                967
#define CTRY_ZIMBABWE             263
#define LOCALE_NOUSEROVERRIDE         0x80000000
#define LOCALE_USE_CP_ACP             0x40000000
#if(WINVER >= 0x0400)
#define LOCALE_RETURN_NUMBER          0x20000000
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
#define LOCALE_RETURN_GENITIVE_NAMES  0x10000000
#define LOCALE_ALLOW_NEUTRAL_NAMES    0x08000000
#endif
#define LOCALE_SLOCALIZEDDISPLAYNAME  0x00000002
#if (WINVER >= _WIN32_WINNT_WIN7)
#define LOCALE_SENGLISHDISPLAYNAME    0x00000072
#define LOCALE_SNATIVEDISPLAYNAME     0x00000073
#endif
#if (WINVER >= _WIN32_WINNT_VISTA)
#define LOCALE_SLOCALIZEDLANGUAGENAME 0x0000006f
#endif
#define LOCALE_SENGLISHLANGUAGENAME   0x00001001
#define LOCALE_SNATIVELANGUAGENAME    0x00000004
#define LOCALE_SLOCALIZEDCOUNTRYNAME  0x00000006
#define LOCALE_SENGLISHCOUNTRYNAME    0x00001002
#define LOCALE_SNATIVECOUNTRYNAME     0x00000008
#define LOCALE_SLANGUAGE              0x00000002
#if (WINVER >= _WIN32_WINNT_VISTA)
#define LOCALE_SLANGDISPLAYNAME       0x0000006f
#endif
#define LOCALE_SENGLANGUAGE           0x00001001
#define LOCALE_SNATIVELANGNAME        0x00000004
#define LOCALE_SCOUNTRY               0x00000006
#define LOCALE_SENGCOUNTRY            0x00001002
#define LOCALE_SNATIVECTRYNAME        0x00000008
#define LOCALE_ILANGUAGE              0x00000001
#define LOCALE_SABBREVLANGNAME        0x00000003
#define LOCALE_ICOUNTRY               0x00000005
#define LOCALE_SABBREVCTRYNAME        0x00000007
#define LOCALE_IGEOID                 0x0000005B
#define LOCALE_IDEFAULTLANGUAGE       0x00000009
#define LOCALE_IDEFAULTCOUNTRY        0x0000000A
#define LOCALE_IDEFAULTCODEPAGE       0x0000000B
#define LOCALE_IDEFAULTANSICODEPAGE   0x00001004
#define LOCALE_IDEFAULTMACCODEPAGE    0x00001011
#define LOCALE_SLIST                  0x0000000C
#define LOCALE_IMEASURE               0x0000000D
#define LOCALE_SDECIMAL               0x0000000E
#define LOCALE_STHOUSAND              0x0000000F
#define LOCALE_SGROUPING              0x00000010
#define LOCALE_IDIGITS                0x00000011
#define LOCALE_ILZERO                 0x00000012
#define LOCALE_INEGNUMBER             0x00001010
#define LOCALE_SNATIVEDIGITS          0x00000013
#define LOCALE_SCURRENCY              0x00000014
#define LOCALE_SINTLSYMBOL            0x00000015
#define LOCALE_SMONDECIMALSEP         0x00000016
#define LOCALE_SMONTHOUSANDSEP        0x00000017
#define LOCALE_SMONGROUPING           0x00000018
#define LOCALE_ICURRDIGITS            0x00000019
#define LOCALE_IINTLCURRDIGITS        0x0000001A
#define LOCALE_ICURRENCY              0x0000001B
#define LOCALE_INEGCURR               0x0000001C
#define LOCALE_SDATE                  0x0000001D
#define LOCALE_STIME                  0x0000001E
#define LOCALE_SSHORTDATE             0x0000001F
#define LOCALE_SLONGDATE              0x00000020
#define LOCALE_STIMEFORMAT            0x00001003
#define LOCALE_IDATE                  0x00000021
#define LOCALE_ILDATE                 0x00000022
#define LOCALE_ITIME                  0x00000023
#define LOCALE_ITIMEMARKPOSN          0x00001005
#define LOCALE_ICENTURY               0x00000024
#define LOCALE_ITLZERO                0x00000025
#define LOCALE_IDAYLZERO              0x00000026
#define LOCALE_IMONLZERO              0x00000027
#define LOCALE_S1159                  0x00000028
#define LOCALE_S2359                  0x00000029
#define LOCALE_ICALENDARTYPE          0x00001009
#define LOCALE_IOPTIONALCALENDAR      0x0000100B
#define LOCALE_IFIRSTDAYOFWEEK        0x0000100C
#define LOCALE_IFIRSTWEEKOFYEAR       0x0000100D
#define LOCALE_SDAYNAME1              0x0000002A
#define LOCALE_SDAYNAME2              0x0000002B
#define LOCALE_SDAYNAME3              0x0000002C
#define LOCALE_SDAYNAME4              0x0000002D
#define LOCALE_SDAYNAME5              0x0000002E
#define LOCALE_SDAYNAME6              0x0000002F
#define LOCALE_SDAYNAME7              0x00000030
#define LOCALE_SABBREVDAYNAME1        0x00000031
#define LOCALE_SABBREVDAYNAME2        0x00000032
#define LOCALE_SABBREVDAYNAME3        0x00000033
#define LOCALE_SABBREVDAYNAME4        0x00000034
#define LOCALE_SABBREVDAYNAME5        0x00000035
#define LOCALE_SABBREVDAYNAME6        0x00000036
#define LOCALE_SABBREVDAYNAME7        0x00000037
#define LOCALE_SMONTHNAME1            0x00000038
#define LOCALE_SMONTHNAME2            0x00000039
#define LOCALE_SMONTHNAME3            0x0000003A
#define LOCALE_SMONTHNAME4            0x0000003B
#define LOCALE_SMONTHNAME5            0x0000003C
#define LOCALE_SMONTHNAME6            0x0000003D
#define LOCALE_SMONTHNAME7            0x0000003E
#define LOCALE_SMONTHNAME8            0x0000003F
#define LOCALE_SMONTHNAME9            0x00000040
#define LOCALE_SMONTHNAME10           0x00000041
#define LOCALE_SMONTHNAME11           0x00000042
#define LOCALE_SMONTHNAME12           0x00000043
#define LOCALE_SMONTHNAME13           0x0000100E
#define LOCALE_SABBREVMONTHNAME1      0x00000044
#define LOCALE_SABBREVMONTHNAME2      0x00000045
#define LOCALE_SABBREVMONTHNAME3      0x00000046
#define LOCALE_SABBREVMONTHNAME4      0x00000047
#define LOCALE_SABBREVMONTHNAME5      0x00000048
#define LOCALE_SABBREVMONTHNAME6      0x00000049
#define LOCALE_SABBREVMONTHNAME7      0x0000004A
#define LOCALE_SABBREVMONTHNAME8      0x0000004B
#define LOCALE_SABBREVMONTHNAME9      0x0000004C
#define LOCALE_SABBREVMONTHNAME10     0x0000004D
#define LOCALE_SABBREVMONTHNAME11     0x0000004E
#define LOCALE_SABBREVMONTHNAME12     0x0000004F
#define LOCALE_SABBREVMONTHNAME13     0x0000100F
#define LOCALE_SPOSITIVESIGN          0x00000050
#define LOCALE_SNEGATIVESIGN          0x00000051
#define LOCALE_IPOSSIGNPOSN           0x00000052
#define LOCALE_INEGSIGNPOSN           0x00000053
#define LOCALE_IPOSSYMPRECEDES        0x00000054
#define LOCALE_IPOSSEPBYSPACE         0x00000055
#define LOCALE_INEGSYMPRECEDES        0x00000056
#define LOCALE_INEGSEPBYSPACE         0x00000057
#if(WINVER >= 0x0400)
#define LOCALE_FONTSIGNATURE          0x00000058
#define LOCALE_SISO639LANGNAME        0x00000059
#define LOCALE_SISO3166CTRYNAME       0x0000005A
#endif
#if(WINVER >= 0x0500)
#define LOCALE_IDEFAULTEBCDICCODEPAGE 0x00001012
#define LOCALE_IPAPERSIZE             0x0000100A
#define LOCALE_SENGCURRNAME           0x00001007
#define LOCALE_SNATIVECURRNAME        0x00001008
#define LOCALE_SYEARMONTH             0x00001006
#define LOCALE_SSORTNAME              0x00001013
#define LOCALE_IDIGITSUBSTITUTION     0x00001014
#endif
#if (WINVER >= 0x0600)
#define LOCALE_SNAME                  0x0000005c
#define LOCALE_SDURATION              0x0000005d
#define LOCALE_SKEYBOARDSTOINSTALL    0x0000005e
#define LOCALE_SSHORTESTDAYNAME1      0x00000060
#define LOCALE_SSHORTESTDAYNAME2      0x00000061
#define LOCALE_SSHORTESTDAYNAME3      0x00000062
#define LOCALE_SSHORTESTDAYNAME4      0x00000063
#define LOCALE_SSHORTESTDAYNAME5      0x00000064
#define LOCALE_SSHORTESTDAYNAME6      0x00000065
#define LOCALE_SSHORTESTDAYNAME7      0x00000066
#define LOCALE_SISO639LANGNAME2       0x00000067
#define LOCALE_SISO3166CTRYNAME2      0x00000068
#define LOCALE_SNAN                   0x00000069
#define LOCALE_SPOSINFINITY           0x0000006a
#define LOCALE_SNEGINFINITY           0x0000006b
#define LOCALE_SSCRIPTS               0x0000006c
#define LOCALE_SPARENT                0x0000006d
#define LOCALE_SCONSOLEFALLBACKNAME   0x0000006e
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
#define LOCALE_IREADINGLAYOUT         0x00000070
#define LOCALE_INEUTRAL               0x00000071
#define LOCALE_INEGATIVEPERCENT       0x00000074
#define LOCALE_IPOSITIVEPERCENT       0x00000075
#define LOCALE_SPERCENT               0x00000076
#define LOCALE_SPERMILLE              0x00000077
#define LOCALE_SMONTHDAY              0x00000078
#define LOCALE_SSHORTTIME             0x00000079
#define LOCALE_SOPENTYPELANGUAGETAG   0x0000007a
#define LOCALE_SSORTLOCALE            0x0000007b
#endif
#define TIME_NOMINUTESORSECONDS   0x00000001
#define TIME_NOSECONDS            0x00000002
#define TIME_NOTIMEMARKER         0x00000004
#define TIME_FORCE24HOURFORMAT    0x00000008
#define DATE_SHORTDATE            0x00000001
#define DATE_LONGDATE             0x00000002
#define DATE_USE_ALT_CALENDAR     0x00000004
#if(WINVER >= 0x0500)
#define DATE_YEARMONTH            0x00000008
#define DATE_LTRREADING           0x00000010
#define DATE_RTLREADING           0x00000020
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
#define DATE_AUTOLAYOUT             0x00000040
#endif
#if(WINVER >= 0x0500)
#define CAL_NOUSEROVERRIDE        LOCALE_NOUSEROVERRIDE
#define CAL_USE_CP_ACP            LOCALE_USE_CP_ACP
#define CAL_RETURN_NUMBER         LOCALE_RETURN_NUMBER
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
#define CAL_RETURN_GENITIVE_NAMES LOCALE_RETURN_GENITIVE_NAMES
#endif
#define CAL_ICALINTVALUE          0x00000001
#define CAL_SCALNAME              0x00000002
#define CAL_IYEAROFFSETRANGE      0x00000003
#define CAL_SERASTRING            0x00000004
#define CAL_SSHORTDATE            0x00000005
#define CAL_SLONGDATE             0x00000006
#define CAL_SDAYNAME1             0x00000007
#define CAL_SDAYNAME2             0x00000008
#define CAL_SDAYNAME3             0x00000009
#define CAL_SDAYNAME4             0x0000000a
#define CAL_SDAYNAME5             0x0000000b
#define CAL_SDAYNAME6             0x0000000c
#define CAL_SDAYNAME7             0x0000000d
#define CAL_SABBREVDAYNAME1       0x0000000e
#define CAL_SABBREVDAYNAME2       0x0000000f
#define CAL_SABBREVDAYNAME3       0x00000010
#define CAL_SABBREVDAYNAME4       0x00000011
#define CAL_SABBREVDAYNAME5       0x00000012
#define CAL_SABBREVDAYNAME6       0x00000013
#define CAL_SABBREVDAYNAME7       0x00000014
#define CAL_SMONTHNAME1           0x00000015
#define CAL_SMONTHNAME2           0x00000016
#define CAL_SMONTHNAME3           0x00000017
#define CAL_SMONTHNAME4           0x00000018
#define CAL_SMONTHNAME5           0x00000019
#define CAL_SMONTHNAME6           0x0000001a
#define CAL_SMONTHNAME7           0x0000001b
#define CAL_SMONTHNAME8           0x0000001c
#define CAL_SMONTHNAME9           0x0000001d
#define CAL_SMONTHNAME10          0x0000001e
#define CAL_SMONTHNAME11          0x0000001f
#define CAL_SMONTHNAME12          0x00000020
#define CAL_SMONTHNAME13          0x00000021
#define CAL_SABBREVMONTHNAME1     0x00000022
#define CAL_SABBREVMONTHNAME2     0x00000023
#define CAL_SABBREVMONTHNAME3     0x00000024
#define CAL_SABBREVMONTHNAME4     0x00000025
#define CAL_SABBREVMONTHNAME5     0x00000026
#define CAL_SABBREVMONTHNAME6     0x00000027
#define CAL_SABBREVMONTHNAME7     0x00000028
#define CAL_SABBREVMONTHNAME8     0x00000029
#define CAL_SABBREVMONTHNAME9     0x0000002a
#define CAL_SABBREVMONTHNAME10    0x0000002b
#define CAL_SABBREVMONTHNAME11    0x0000002c
#define CAL_SABBREVMONTHNAME12    0x0000002d
#define CAL_SABBREVMONTHNAME13    0x0000002e
#if(WINVER >= 0x0500)
#define CAL_SYEARMONTH            0x0000002f
#define CAL_ITWODIGITYEARMAX      0x00000030
#endif
#if (WINVER >= 0x0600)
#define CAL_SSHORTESTDAYNAME1     0x00000031
#define CAL_SSHORTESTDAYNAME2     0x00000032
#define CAL_SSHORTESTDAYNAME3     0x00000033
#define CAL_SSHORTESTDAYNAME4     0x00000034
#define CAL_SSHORTESTDAYNAME5     0x00000035
#define CAL_SSHORTESTDAYNAME6     0x00000036
#define CAL_SSHORTESTDAYNAME7     0x00000037
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
#define CAL_SMONTHDAY             0x00000038
#define CAL_SABBREVERASTRING      0x00000039
#endif
#define ENUM_ALL_CALENDARS        0xffffffff
#define CAL_GREGORIAN                  1
#define CAL_GREGORIAN_US               2
#define CAL_JAPAN                      3
#define CAL_TAIWAN                     4
#define CAL_KOREA                      5
#define CAL_HIJRI                      6
#define CAL_THAI                       7
#define CAL_HEBREW                     8
#define CAL_GREGORIAN_ME_FRENCH        9
#define CAL_GREGORIAN_ARABIC           10
#define CAL_GREGORIAN_XLIT_ENGLISH     11
#define CAL_GREGORIAN_XLIT_FRENCH      12
#define CAL_UMALQURA                   23
#define LGRPID_WESTERN_EUROPE        0x0001
#define LGRPID_CENTRAL_EUROPE        0x0002
#define LGRPID_BALTIC                0x0003
#define LGRPID_GREEK                 0x0004
#define LGRPID_CYRILLIC              0x0005
#define LGRPID_TURKIC                0x0006
#define LGRPID_TURKISH               0x0006
#define LGRPID_JAPANESE              0x0007
#define LGRPID_KOREAN                0x0008
#define LGRPID_TRADITIONAL_CHINESE   0x0009
#define LGRPID_SIMPLIFIED_CHINESE    0x000a
#define LGRPID_THAI                  0x000b
#define LGRPID_HEBREW                0x000c
#define LGRPID_ARABIC                0x000d
#define LGRPID_VIETNAMESE            0x000e
#define LGRPID_INDIC                 0x000f
#define LGRPID_GEORGIAN              0x0010
#define LGRPID_ARMENIAN              0x0011
#if (WINVER >= 0x0600)
#define MUI_LANGUAGE_ID                     0x4
#define MUI_LANGUAGE_NAME                   0x8
#define MUI_MERGE_SYSTEM_FALLBACK           0x10
#define MUI_MERGE_USER_FALLBACK             0x20
#define MUI_UI_FALLBACK                     MUI_MERGE_SYSTEM_FALLBACK | MUI_MERGE_USER_FALLBACK
#define MUI_THREAD_LANGUAGES                0x40
#define MUI_CONSOLE_FILTER                  0x100
#define MUI_COMPLEX_SCRIPT_FILTER           0x200
#define MUI_RESET_FILTERS                   0x001
#define MUI_USER_PREFERRED_UI_LANGUAGES     0x10
#define MUI_USE_INSTALLED_LANGUAGES         0x20
#define MUI_USE_SEARCH_ALL_LANGUAGES        0x40
#define MUI_LANG_NEUTRAL_PE_FILE            0x100
#define MUI_NON_LANG_NEUTRAL_FILE           0x200
#define MUI_MACHINE_LANGUAGE_SETTINGS       0x400
#define MUI_FILETYPE_NOT_LANGUAGE_NEUTRAL   0x001
#define MUI_FILETYPE_LANGUAGE_NEUTRAL_MAIN  0x002
#define MUI_FILETYPE_LANGUAGE_NEUTRAL_MUI   0x004
#define MUI_QUERY_TYPE                      0x001
#define MUI_QUERY_CHECKSUM                  0x002
#define MUI_QUERY_LANGUAGE_NAME             0x004
#define MUI_QUERY_RESOURCE_TYPES            0x008
#define MUI_FILEINFO_VERSION                0x001
#define MUI_FULL_LANGUAGE               0x01
#define MUI_PARTIAL_LANGUAGE            0x02
#define MUI_LIP_LANGUAGE                0x04
#define MUI_LANGUAGE_INSTALLED          0x20
#define MUI_LANGUAGE_LICENSED           0x40
#define MUI_CALLBACK_ALL_FLAGS                        MUI_CALLBACK_FLAG_UPGRADED_INSTALLATION
#endif
typedef DWORD LGRPID;
typedef DWORD LCTYPE;
typedef DWORD CALTYPE;
typedef DWORD CALID;
typedef struct _cpinfo {
	UINT MaxCharSize;
	BYTE DefaultChar[MAX_DEFAULTCHAR];
	BYTE LeadByte[MAX_LEADBYTES];
}
CPINFO, *LPCPINFO;
typedef struct _cpinfoexA {
	UINT MaxCharSize;
	BYTE DefaultChar[MAX_DEFAULTCHAR];
	BYTE LeadByte[MAX_LEADBYTES];
	WCHAR UnicodeDefaultChar;
	UINT CodePage;
	CHAR CodePageName[MAX_PATH];
}
CPINFOEXA, *LPCPINFOEXA;
typedef struct _cpinfoexW {
	UINT MaxCharSize;
	BYTE DefaultChar[MAX_DEFAULTCHAR];
	BYTE LeadByte[MAX_LEADBYTES];
	WCHAR UnicodeDefaultChar;
	UINT CodePage;
	WCHAR CodePageName[MAX_PATH];
}
CPINFOEXW, *LPCPINFOEXW;
#ifdef UNICODE
typedef CPINFOEXW CPINFOEX;
typedef LPCPINFOEXW LPCPINFOEX;
#else
typedef CPINFOEXA CPINFOEX;
typedef LPCPINFOEXA LPCPINFOEX;
#endif
typedef struct _numberfmtA {
	UINT NumDigits;
	UINT LeadingZero;
	UINT Grouping;
	LPSTR lpDecimalSep;
	LPSTR lpThousandSep;
	UINT NegativeOrder;
}
NUMBERFMTA, *LPNUMBERFMTA;
typedef struct _numberfmtW {
	UINT NumDigits;
	UINT LeadingZero;
	UINT Grouping;
	LPWSTR lpDecimalSep;
	LPWSTR lpThousandSep;
	UINT NegativeOrder;
}
NUMBERFMTW, *LPNUMBERFMTW;
#ifdef UNICODE
typedef NUMBERFMTW NUMBERFMT;
typedef LPNUMBERFMTW LPNUMBERFMT;
#else
typedef NUMBERFMTA NUMBERFMT;
typedef LPNUMBERFMTA LPNUMBERFMT;
#endif
typedef struct _currencyfmtA {
	UINT NumDigits;
	UINT LeadingZero;
	UINT Grouping;
	LPSTR lpDecimalSep;
	LPSTR lpThousandSep;
	UINT NegativeOrder;
	UINT PositiveOrder;
	LPSTR lpCurrencySymbol;
}
CURRENCYFMTA, *LPCURRENCYFMTA;
typedef struct _currencyfmtW {
	UINT NumDigits;
	UINT LeadingZero;
	UINT Grouping;
	LPWSTR lpDecimalSep;
	LPWSTR lpThousandSep;
	UINT NegativeOrder;
	UINT PositiveOrder;
	LPWSTR lpCurrencySymbol;
}
CURRENCYFMTW, *LPCURRENCYFMTW;
#ifdef UNICODE
typedef CURRENCYFMTW CURRENCYFMT;
typedef LPCURRENCYFMTW LPCURRENCYFMT;
#else
typedef CURRENCYFMTA CURRENCYFMT;
typedef LPCURRENCYFMTA LPCURRENCYFMT;
#endif
enum SYSNLS_FUNCTION {
	COMPARE_STRING = 0x0001,
};
typedef DWORD NLS_FUNCTION;
typedef struct _nlsversioninfo {
	DWORD dwNLSVersionInfoSize;
	DWORD dwNLSVersion;
	DWORD dwDefinedVersion;
}
NLSVERSIONINFO, *LPNLSVERSIONINFO;
typedef struct _nlsversioninfoex {
	DWORD dwNLSVersionInfoSize;
	DWORD dwNLSVersion;
	DWORD dwDefinedVersion;
	DWORD dwEffectiveId;
	GUID guidCustomVersion;
}
NLSVERSIONINFOEX, *LPNLSVERSIONINFOEX;
typedef LONG GEOID;
typedef DWORD GEOTYPE;
typedef DWORD GEOCLASS;
#define GEOID_NOT_AVAILABLE -1
enum SYSGEOTYPE {
	GEO_NATION = 0x0001,
	GEO_LATITUDE = 0x0002,
	GEO_LONGITUDE = 0x0003,
	GEO_ISO2 = 0x0004,
	GEO_ISO3 = 0x0005,
	GEO_RFC1766 = 0x0006,
	GEO_LCID = 0x0007,
	GEO_FRIENDLYNAME = 0x0008,
	GEO_OFFICIALNAME = 0x0009,
	GEO_TIMEZONES = 0x000A,
	GEO_OFFICIALLANGUAGES = 0x000B,
};
enum SYSGEOCLASS {
	GEOCLASS_NATION = 16,
	GEOCLASS_REGION = 14,
};
#if (WINVER >= 0x0600)
typedef enum _NORM_FORM {
	NormalizationOther = 0,
	NormalizationC = 0x1,
	NormalizationD = 0x2,
	NormalizationKC = 0x5,
	NormalizationKD = 0x6
} NORM_FORM;
#define IDN_ALLOW_UNASSIGNED        0x01
#define IDN_USE_STD3_ASCII_RULES    0x02
#define VS_ALLOW_LATIN              0x0001
#define GSS_ALLOW_INHERITED_COMMON  0x0001
#endif
#ifdef STRICT
typedef BOOL(CALLBACK *LANGUAGEGROUP_ENUMPROCA) (LGRPID, LPSTR, LPSTR, DWORD, LONG_PTR);
typedef BOOL(CALLBACK *LANGGROUPLOCALE_ENUMPROCA) (LGRPID, LCID, LPSTR, LONG_PTR);
typedef BOOL(CALLBACK *UILANGUAGE_ENUMPROCA) (LPSTR, LONG_PTR);
typedef BOOL(CALLBACK *LOCALE_ENUMPROCA) (LPSTR);
typedef BOOL(CALLBACK *CODEPAGE_ENUMPROCA) (LPSTR);
typedef BOOL(CALLBACK *DATEFMT_ENUMPROCA) (LPSTR);
typedef BOOL(CALLBACK *DATEFMT_ENUMPROCEXA) (LPSTR, CALID);
typedef BOOL(CALLBACK *TIMEFMT_ENUMPROCA) (LPSTR);
typedef BOOL(CALLBACK *CALINFO_ENUMPROCA) (LPSTR);
typedef BOOL(CALLBACK *CALINFO_ENUMPROCEXA) (LPSTR, CALID);
typedef BOOL(CALLBACK *LANGUAGEGROUP_ENUMPROCW) (LGRPID, LPWSTR, LPWSTR, DWORD, LONG_PTR);
typedef BOOL(CALLBACK *LANGGROUPLOCALE_ENUMPROCW) (LGRPID, LCID, LPWSTR, LONG_PTR);
typedef BOOL(CALLBACK *UILANGUAGE_ENUMPROCW) (LPWSTR, LONG_PTR);
typedef BOOL(CALLBACK *LOCALE_ENUMPROCW) (LPWSTR);
typedef BOOL(CALLBACK *CODEPAGE_ENUMPROCW) (LPWSTR);
typedef BOOL(CALLBACK *DATEFMT_ENUMPROCW) (LPWSTR);
typedef BOOL(CALLBACK *DATEFMT_ENUMPROCEXW) (LPWSTR, CALID);
typedef BOOL(CALLBACK *TIMEFMT_ENUMPROCW) (LPWSTR);
typedef BOOL(CALLBACK *CALINFO_ENUMPROCW) (LPWSTR);
typedef BOOL(CALLBACK *CALINFO_ENUMPROCEXW) (LPWSTR, CALID);
typedef BOOL(CALLBACK *GEO_ENUMPROC) (GEOID);
#else
typedef FARPROC LANGUAGEGROUP_ENUMPROCA;
typedef FARPROC LANGGROUPLOCALE_ENUMPROCA;
typedef FARPROC UILANGUAGE_ENUMPROCA;
typedef FARPROC LOCALE_ENUMPROCA;
typedef FARPROC CODEPAGE_ENUMPROCA;
typedef FARPROC DATEFMT_ENUMPROCA;
typedef FARPROC DATEFMT_ENUMPROCEXA;
typedef FARPROC TIMEFMT_ENUMPROCA;
typedef FARPROC CALINFO_ENUMPROCA;
typedef FARPROC CALINFO_ENUMPROCEXA;
typedef FARPROC GEO_ENUMPROC;
typedef FARPROC LANGUAGEGROUP_ENUMPROCW;
typedef FARPROC LANGGROUPLOCALE_ENUMPROCW;
typedef FARPROC UILANGUAGE_ENUMPROCW;
typedef FARPROC LOCALE_ENUMPROCW;
typedef FARPROC CODEPAGE_ENUMPROCW;
typedef FARPROC DATEFMT_ENUMPROCW;
typedef FARPROC DATEFMT_ENUMPROCEXW;
typedef FARPROC TIMEFMT_ENUMPROCW;
typedef FARPROC CALINFO_ENUMPROCW;
typedef FARPROC CALINFO_ENUMPROCEXW;
#endif
#ifdef UNICODE
#define LANGUAGEGROUP_ENUMPROC    LANGUAGEGROUP_ENUMPROCW
#define LANGGROUPLOCALE_ENUMPROC  LANGGROUPLOCALE_ENUMPROCW
#define UILANGUAGE_ENUMPROC       UILANGUAGE_ENUMPROCW
#define LOCALE_ENUMPROC           LOCALE_ENUMPROCW
#define CODEPAGE_ENUMPROC         CODEPAGE_ENUMPROCW
#define DATEFMT_ENUMPROC          DATEFMT_ENUMPROCW
#define DATEFMT_ENUMPROCEX        DATEFMT_ENUMPROCEXW
#define TIMEFMT_ENUMPROC          TIMEFMT_ENUMPROCW
#define CALINFO_ENUMPROC          CALINFO_ENUMPROCW
#define CALINFO_ENUMPROCEX        CALINFO_ENUMPROCEXW
#else
#define LANGUAGEGROUP_ENUMPROC    LANGUAGEGROUP_ENUMPROCA
#define LANGGROUPLOCALE_ENUMPROC  LANGGROUPLOCALE_ENUMPROCA
#define UILANGUAGE_ENUMPROC       UILANGUAGE_ENUMPROCA
#define LOCALE_ENUMPROC           LOCALE_ENUMPROCA
#define CODEPAGE_ENUMPROC         CODEPAGE_ENUMPROCA
#define DATEFMT_ENUMPROC          DATEFMT_ENUMPROCA
#define DATEFMT_ENUMPROCEX        DATEFMT_ENUMPROCEXA
#define TIMEFMT_ENUMPROC          TIMEFMT_ENUMPROCA
#define CALINFO_ENUMPROC          CALINFO_ENUMPROCA
#define CALINFO_ENUMPROCEX        CALINFO_ENUMPROCEXA
#endif
typedef struct _FILEMUIINFO {
	DWORD dwSize;
	DWORD dwVersion;
	DWORD dwFileType;
	BYTE pChecksum[16];
	BYTE pServiceChecksum[16];
	DWORD dwLanguageNameOffset;
	DWORD dwTypeIDMainSize;
	DWORD dwTypeIDMainOffset;
	DWORD dwTypeNameMainOffset;
	DWORD dwTypeIDMUISize;
	DWORD dwTypeIDMUIOffset;
	DWORD dwTypeNameMUIOffset;
	BYTE abBuffer[8];
}
FILEMUIINFO, *PFILEMUIINFO;
#define IS_HIGH_SURROGATE(wch) (((wch) >= HIGH_SURROGATE_START) && ((wch) <= HIGH_SURROGATE_END))
#define IS_LOW_SURROGATE(wch)  (((wch) >= LOW_SURROGATE_START) && ((wch) <= LOW_SURROGATE_END))
#define IS_SURROGATE_PAIR(hs, ls) (IS_HIGH_SURROGATE(hs) && IS_LOW_SURROGATE(ls))
#define FILEMUIINFO_GET_CULTURE(pInfo)          \
    ((LPWSTR)((pInfo->dwLanguageNameOffset>0)?(ULONG_PTR)pInfo+pInfo->dwLanguageNameOffset:NULL))
#define FILEMUIINFO_GET_MAIN_TYPEIDS(pInfo)       \
    ((DWORD*)((pInfo->dwTypeIDMainOffset>0)?(ULONG_PTR)pInfo+pInfo->dwTypeIDMainOffset:NULL))
#define FILEMUIINFO_GET_MAIN_TYPEID(pInfo,iType)  \
    (((iType<pInfo->dwTypeIDMainSize)&&(pInfo->dwTypeIDMainOffset>0))?*((DWORD*)((ULONG_PTR)pInfo+pInfo->dwTypeIDMainOffset)+iType):0)
#define FILEMUIINFO_GET_MAIN_TYPENAMES(pInfo)       \
    ((LPWSTR)((pInfo->dwTypeNameMainOffset>0)?(ULONG_PTR)pInfo+pInfo->dwTypeNameMainOffset:NULL))
#define FILEMUIINFO_GET_MUI_TYPEIDS(pInfo)        \
    ((DWORD*)((pInfo->dwTypeIDMUIOffset>0)?(ULONG_PTR)pInfo+pInfo->dwTypeIDMUIOffset:NULL))
#define FILEMUIINFO_GET_MUI_TYPEID(pInfo,iType)   \
    (((iType<pInfo->dwTypeIDMUISize)&&(pInfo->dwTypeIDMUIOffset>0))?*((DWORD*)((ULONG_PTR)pInfo+pInfo->dwTypeIDMUIOffset)+iType):0)
#define FILEMUIINFO_GET_MUI_TYPENAMES(pInfo)        \
    ((LPWSTR)((pInfo->dwTypeNameMUIOffset>0)?(ULONG_PTR)pInfo+pInfo->dwTypeNameMUIOffset:NULL))
WINBASEAPI BOOL WINAPI IsValidCodePage(UINT CodePage);
WINBASEAPI UINT WINAPI GetACP(void);
WINBASEAPI UINT WINAPI GetOEMCP(void);
WINBASEAPI BOOL WINAPI GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo);
WINBASEAPI BOOL WINAPI GetCPInfoExA(UINT CodePage, DWORD dwFlags, LPCPINFOEXA lpCPInfoEx);
WINBASEAPI BOOL WINAPI GetCPInfoExW(UINT CodePage, DWORD dwFlags, LPCPINFOEXW lpCPInfoEx);
#ifdef UNICODE
#define GetCPInfoEx  GetCPInfoExW
#else
#define GetCPInfoEx  GetCPInfoExA
#endif
WINBASEAPI BOOL WINAPI IsDBCSLeadByte(BYTE TestChar);
WINBASEAPI BOOL WINAPI IsDBCSLeadByteEx(UINT CodePage, BYTE TestChar);
WINBASEAPI int WINAPI MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
WINBASEAPI int WINAPI WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);
WINBASEAPI int WINAPI CompareStringA(LCID Locale, DWORD dwCmpFlags, PCNZCH lpString1, int cchCount1, PCNZCH lpString2, int cchCount2);
WINBASEAPI int WINAPI CompareStringW(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2);
#ifdef UNICODE
#define CompareString  CompareStringW
#else
#define CompareString  CompareStringA
#endif
#if defined(_M_CEE)
#undef CompareString
__inline int CompareString(LCID Locale, DWORD dwCmpFlags, LPCTSTR lpString1, int cchCount1, LPCTSTR lpString2, int cchCount2)
{
#ifdef UNICODE
	return CompareStringW(
#else
	return CompareStringA(
#endif
		Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
#endif
#if (WINVER >= 0x0600)
WINBASEAPI int WINAPI FindNLSString(LCID Locale, DWORD dwFindNLSStringFlags, LPCWSTR lpStringSource, int cchSource, LPCWSTR lpStringValue, int cchValue, LPINT pcchFound);
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
WINBASEAPI int WINAPI FindStringOrdinal(DWORD dwFindStringOrdinalFlags, LPCWSTR lpStringSource, int cchSource, LPCWSTR lpStringValue, int cchValue, BOOL bIgnoreCase);
#endif
WINBASEAPI int WINAPI LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest);
WINBASEAPI int WINAPI LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest);
#ifdef UNICODE
#define LCMapString  LCMapStringW
#else
#define LCMapString  LCMapStringA
#endif
WINBASEAPI int WINAPI GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData);
WINBASEAPI int WINAPI GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData);
#ifdef UNICODE
#define GetLocaleInfo  GetLocaleInfoW
#else
#define GetLocaleInfo  GetLocaleInfoA
#endif
WINBASEAPI BOOL WINAPI SetLocaleInfoA(LCID Locale, LCTYPE LCType, LPCSTR lpLCData);
WINBASEAPI BOOL WINAPI SetLocaleInfoW(LCID Locale, LCTYPE LCType, LPCWSTR lpLCData);
#ifdef UNICODE
#define SetLocaleInfo  SetLocaleInfoW
#else
#define SetLocaleInfo  SetLocaleInfoA
#endif
#if (WINVER >= 0x040A)
WINBASEAPI int WINAPI GetCalendarInfoA(LCID Locale, CALID Calendar, CALTYPE CalType, LPSTR lpCalData, int cchData, LPDWORD lpValue);
WINBASEAPI int WINAPI GetCalendarInfoW(LCID Locale, CALID Calendar, CALTYPE CalType, LPWSTR lpCalData, int cchData, LPDWORD lpValue);
#ifdef UNICODE
#define GetCalendarInfo  GetCalendarInfoW
#else
#define GetCalendarInfo  GetCalendarInfoA
#endif
WINBASEAPI BOOL WINAPI SetCalendarInfoA(LCID Locale, CALID Calendar, CALTYPE CalType, LPCSTR lpCalData);
WINBASEAPI BOOL WINAPI SetCalendarInfoW(LCID Locale, CALID Calendar, CALTYPE CalType, LPCWSTR lpCalData);
#ifdef UNICODE
#define SetCalendarInfo  SetCalendarInfoW
#else
#define SetCalendarInfo  SetCalendarInfoA
#endif
#endif
#if (WINVER >= 0x0600)
WINBASEAPI int WINAPI LCIDToLocaleName(LCID Locale, LPWSTR lpName, int cchName, DWORD dwFlags);
WINBASEAPI LCID WINAPI LocaleNameToLCID(LPCWSTR lpName, DWORD dwFlags);
#endif
WINBASEAPI int WINAPI GetTimeFormatA(LCID Locale, DWORD dwFlags, CONST SYSTEMTIME *lpTime, LPCSTR lpFormat, LPSTR lpTimeStr, int cchTime);
WINBASEAPI int WINAPI GetTimeFormatW(LCID Locale, DWORD dwFlags, CONST SYSTEMTIME *lpTime, LPCWSTR lpFormat, LPWSTR lpTimeStr, int cchTime);
#ifdef UNICODE
#define GetTimeFormat  GetTimeFormatW
#else
#define GetTimeFormat  GetTimeFormatA
#endif
#if (WINVER >= 0x0600)
WINBASEAPI int WINAPI GetDurationFormat(LCID Locale, DWORD dwFlags, CONST SYSTEMTIME *lpDuration, ULONGLONG ullDuration, LPCWSTR lpFormat, LPWSTR lpDurationStr, int cchDuration);
#endif
WINBASEAPI int WINAPI GetDateFormatA(LCID Locale, DWORD dwFlags, CONST SYSTEMTIME *lpDate, LPCSTR lpFormat, LPSTR lpDateStr, int cchDate);
WINBASEAPI int WINAPI GetDateFormatW(LCID Locale, DWORD dwFlags, CONST SYSTEMTIME *lpDate, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate);
#ifdef UNICODE
#define GetDateFormat  GetDateFormatW
#else
#define GetDateFormat  GetDateFormatA
#endif
WINBASEAPI int WINAPI GetNumberFormatA(LCID Locale, DWORD dwFlags, LPCSTR lpValue, CONST NUMBERFMTA *lpFormat, LPSTR lpNumberStr, int cchNumber);
WINBASEAPI int WINAPI GetNumberFormatW(LCID Locale, DWORD dwFlags, LPCWSTR lpValue, CONST NUMBERFMTW *lpFormat, LPWSTR lpNumberStr, int cchNumber);
#ifdef UNICODE
#define GetNumberFormat  GetNumberFormatW
#else
#define GetNumberFormat  GetNumberFormatA
#endif
WINBASEAPI int WINAPI GetCurrencyFormatA(LCID Locale, DWORD dwFlags, LPCSTR lpValue, CONST CURRENCYFMTA *lpFormat, LPSTR lpCurrencyStr, int cchCurrency);
WINBASEAPI int WINAPI GetCurrencyFormatW(LCID Locale, DWORD dwFlags, LPCWSTR lpValue, CONST CURRENCYFMTW *lpFormat, LPWSTR lpCurrencyStr, int cchCurrency);
#ifdef UNICODE
#define GetCurrencyFormat  GetCurrencyFormatW
#else
#define GetCurrencyFormat  GetCurrencyFormatA
#endif
WINBASEAPI BOOL WINAPI EnumCalendarInfoA(CALINFO_ENUMPROCA lpCalInfoEnumProc, LCID Locale, CALID Calendar, CALTYPE CalType);
WINBASEAPI BOOL WINAPI EnumCalendarInfoW(CALINFO_ENUMPROCW lpCalInfoEnumProc, LCID Locale, CALID Calendar, CALTYPE CalType);
#ifdef UNICODE
#define EnumCalendarInfo  EnumCalendarInfoW
#else
#define EnumCalendarInfo  EnumCalendarInfoA
#endif
#if(WINVER >= 0x0500)
WINBASEAPI BOOL WINAPI EnumCalendarInfoExA(CALINFO_ENUMPROCEXA lpCalInfoEnumProcEx, LCID Locale, CALID Calendar, CALTYPE CalType);
WINBASEAPI BOOL WINAPI EnumCalendarInfoExW(CALINFO_ENUMPROCEXW lpCalInfoEnumProcEx, LCID Locale, CALID Calendar, CALTYPE CalType);
#ifdef UNICODE
#define EnumCalendarInfoEx  EnumCalendarInfoExW
#else
#define EnumCalendarInfoEx  EnumCalendarInfoExA
#endif
#endif
WINBASEAPI BOOL WINAPI EnumTimeFormatsA(TIMEFMT_ENUMPROCA lpTimeFmtEnumProc, LCID Locale, DWORD dwFlags);
WINBASEAPI BOOL WINAPI EnumTimeFormatsW(TIMEFMT_ENUMPROCW lpTimeFmtEnumProc, LCID Locale, DWORD dwFlags);
#ifdef UNICODE
#define EnumTimeFormats  EnumTimeFormatsW
#else
#define EnumTimeFormats  EnumTimeFormatsA
#endif
WINBASEAPI BOOL WINAPI EnumDateFormatsA(DATEFMT_ENUMPROCA lpDateFmtEnumProc, LCID Locale, DWORD dwFlags);
WINBASEAPI BOOL WINAPI EnumDateFormatsW(DATEFMT_ENUMPROCW lpDateFmtEnumProc, LCID Locale, DWORD dwFlags);
#ifdef UNICODE
#define EnumDateFormats  EnumDateFormatsW
#else
#define EnumDateFormats  EnumDateFormatsA
#endif
#if(WINVER >= 0x0500)
WINBASEAPI BOOL WINAPI EnumDateFormatsExA(DATEFMT_ENUMPROCEXA lpDateFmtEnumProcEx, LCID Locale, DWORD dwFlags);
WINBASEAPI BOOL WINAPI EnumDateFormatsExW(DATEFMT_ENUMPROCEXW lpDateFmtEnumProcEx, LCID Locale, DWORD dwFlags);
#ifdef UNICODE
#define EnumDateFormatsEx  EnumDateFormatsExW
#else
#define EnumDateFormatsEx  EnumDateFormatsExA
#endif
#endif
#if(WINVER >= 0x0500)
WINBASEAPI BOOL WINAPI IsValidLanguageGroup(LGRPID LanguageGroup, DWORD dwFlags);
#endif
WINBASEAPI BOOL WINAPI GetNLSVersion(NLS_FUNCTION Function, LCID Locale, LPNLSVERSIONINFO lpVersionInformation);
WINBASEAPI BOOL WINAPI IsNLSDefinedString(NLS_FUNCTION Function, DWORD dwFlags, LPNLSVERSIONINFO lpVersionInformation, LPCWSTR lpString, INT cchStr);
WINBASEAPI BOOL WINAPI IsValidLocale(LCID Locale, DWORD dwFlags);
WINBASEAPI int WINAPI GetGeoInfoA(GEOID Location, GEOTYPE GeoType, LPSTR lpGeoData, int cchData, LANGID LangId);
WINBASEAPI int WINAPI GetGeoInfoW(GEOID Location, GEOTYPE GeoType, LPWSTR lpGeoData, int cchData, LANGID LangId);
#ifdef UNICODE
#define GetGeoInfo  GetGeoInfoW
#else
#define GetGeoInfo  GetGeoInfoA
#endif
WINBASEAPI BOOL WINAPI EnumSystemGeoID(GEOCLASS GeoClass, GEOID ParentGeoId, GEO_ENUMPROC lpGeoEnumProc);
WINBASEAPI GEOID WINAPI GetUserGeoID(GEOCLASS GeoClass);
WINBASEAPI BOOL WINAPI SetUserGeoID(GEOID GeoId);
WINBASEAPI LCID WINAPI ConvertDefaultLocale(LCID Locale);
WINBASEAPI LCID WINAPI GetThreadLocale(void);
WINBASEAPI BOOL WINAPI SetThreadLocale(LCID Locale);
#if(WINVER >= 0x0500)
WINBASEAPI LANGID WINAPI GetSystemDefaultUILanguage(void);
WINBASEAPI LANGID WINAPI GetUserDefaultUILanguage(void);
#endif
WINBASEAPI LANGID WINAPI GetSystemDefaultLangID(void);
WINBASEAPI LANGID WINAPI GetUserDefaultLangID(void);
WINBASEAPI LCID WINAPI GetSystemDefaultLCID(void);
WINBASEAPI LCID WINAPI GetUserDefaultLCID(void);
WINBASEAPI LANGID WINAPI SetThreadUILanguage(LANGID LangId);
#if (WINVER >= 0x0600)
WINBASEAPI LANGID WINAPI GetThreadUILanguage(void);
WINBASEAPI BOOL WINAPI GetProcessPreferredUILanguages(DWORD dwFlags, PULONG pulNumLanguages, PZZWSTR pwszLanguagesBuffer, PULONG pcchLanguagesBuffer);
WINBASEAPI BOOL WINAPI SetProcessPreferredUILanguages(DWORD dwFlags, PCZZWSTR pwszLanguagesBuffer, PULONG pulNumLanguages);
WINBASEAPI BOOL WINAPI GetUserPreferredUILanguages(DWORD dwFlags, PULONG pulNumLanguages, PZZWSTR pwszLanguagesBuffer, PULONG pcchLanguagesBuffer);
WINBASEAPI BOOL WINAPI GetSystemPreferredUILanguages(DWORD dwFlags, PULONG pulNumLanguages, PZZWSTR pwszLanguagesBuffer, PULONG pcchLanguagesBuffer);
WINBASEAPI BOOL WINAPI GetThreadPreferredUILanguages(DWORD dwFlags, PULONG pulNumLanguages, PZZWSTR pwszLanguagesBuffer, PULONG pcchLanguagesBuffer);
WINBASEAPI BOOL WINAPI SetThreadPreferredUILanguages(DWORD dwFlags, PCZZWSTR pwszLanguagesBuffer, PULONG pulNumLanguages);
WINBASEAPI BOOL WINAPI GetFileMUIInfo(DWORD dwFlags, PCWSTR pcwszFilePath, PFILEMUIINFO pFileMUIInfo, DWORD *pcbFileMUIInfo);
WINBASEAPI BOOL WINAPI GetFileMUIPath(DWORD dwFlags, PCWSTR pcwszFilePath, PWSTR pwszLanguage, PULONG pcchLanguage, PWSTR pwszFileMUIPath, PULONG pcchFileMUIPath, PULONGLONG pululEnumerator);
WINBASEAPI BOOL WINAPI GetUILanguageInfo(DWORD dwFlags, PCZZWSTR pwmszLanguage, PZZWSTR pwszFallbackLanguages, PDWORD pcchFallbackLanguages, PDWORD pAttributes);
WINBASEAPI BOOL WINAPI NotifyUILanguageChange(DWORD dwFlags, PCWSTR pcwstrNewLanguage, PCWSTR pcwstrPreviousLanguage, DWORD dwReserved, PDWORD pdwStatusRtrn);
#endif
WINBASEAPI BOOL WINAPI GetStringTypeExA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
WINBASEAPI BOOL WINAPI GetStringTypeExW(LCID Locale, DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
#ifdef UNICODE
#define GetStringTypeEx  GetStringTypeExW
#else
#define GetStringTypeEx  GetStringTypeExA
#endif
WINBASEAPI BOOL WINAPI GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
WINBASEAPI BOOL WINAPI GetStringTypeW(DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
WINBASEAPI int WINAPI FoldStringA(DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest);
WINBASEAPI int WINAPI FoldStringW(DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest);
#ifdef UNICODE
#define FoldString  FoldStringW
#else
#define FoldString  FoldStringA
#endif
#if(WINVER >= 0x0500)
WINBASEAPI BOOL WINAPI EnumSystemLanguageGroupsA(LANGUAGEGROUP_ENUMPROCA lpLanguageGroupEnumProc, DWORD dwFlags, LONG_PTR lParam);
WINBASEAPI BOOL WINAPI EnumSystemLanguageGroupsW(LANGUAGEGROUP_ENUMPROCW lpLanguageGroupEnumProc, DWORD dwFlags, LONG_PTR lParam);
#ifdef UNICODE
#define EnumSystemLanguageGroups  EnumSystemLanguageGroupsW
#else
#define EnumSystemLanguageGroups  EnumSystemLanguageGroupsA
#endif
WINBASEAPI BOOL WINAPI EnumLanguageGroupLocalesA(LANGGROUPLOCALE_ENUMPROCA lpLangGroupLocaleEnumProc, LGRPID LanguageGroup, DWORD dwFlags, LONG_PTR lParam);
WINBASEAPI BOOL WINAPI EnumLanguageGroupLocalesW(LANGGROUPLOCALE_ENUMPROCW lpLangGroupLocaleEnumProc, LGRPID LanguageGroup, DWORD dwFlags, LONG_PTR lParam);
#ifdef UNICODE
#define EnumLanguageGroupLocales  EnumLanguageGroupLocalesW
#else
#define EnumLanguageGroupLocales  EnumLanguageGroupLocalesA
#endif
WINBASEAPI BOOL WINAPI EnumUILanguagesA(UILANGUAGE_ENUMPROCA lpUILanguageEnumProc, DWORD dwFlags, LONG_PTR lParam);
WINBASEAPI BOOL WINAPI EnumUILanguagesW(UILANGUAGE_ENUMPROCW lpUILanguageEnumProc, DWORD dwFlags, LONG_PTR lParam);
#ifdef UNICODE
#define EnumUILanguages  EnumUILanguagesW
#else
#define EnumUILanguages  EnumUILanguagesA
#endif
#endif
WINBASEAPI BOOL WINAPI EnumSystemLocalesA(LOCALE_ENUMPROCA lpLocaleEnumProc, DWORD dwFlags);
WINBASEAPI BOOL WINAPI EnumSystemLocalesW(LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags);
#ifdef UNICODE
#define EnumSystemLocales  EnumSystemLocalesW
#else
#define EnumSystemLocales  EnumSystemLocalesA
#endif
WINBASEAPI BOOL WINAPI EnumSystemCodePagesA(CODEPAGE_ENUMPROCA lpCodePageEnumProc, DWORD dwFlags);
WINBASEAPI BOOL WINAPI EnumSystemCodePagesW(CODEPAGE_ENUMPROCW lpCodePageEnumProc, DWORD dwFlags);
#ifdef UNICODE
#define EnumSystemCodePages  EnumSystemCodePagesW
#else
#define EnumSystemCodePages  EnumSystemCodePagesA
#endif
#if (WINVER >= 0x0600)
WINNORMALIZEAPI int
WINAPI NormalizeString(NORM_FORM NormForm, LPCWSTR lpSrcString, int cwSrcLength, LPWSTR lpDstString, int cwDstLength);
WINNORMALIZEAPI BOOL WINAPI IsNormalizedString(NORM_FORM NormForm, LPCWSTR lpString, int cwLength);
WINNORMALIZEAPI int
WINAPI IdnToAscii(DWORD dwFlags, LPCWSTR lpUnicodeCharStr, int cchUnicodeChar, LPWSTR lpASCIICharStr, int cchASCIIChar);
WINNORMALIZEAPI int
WINAPI IdnToNameprepUnicode(DWORD dwFlags, LPCWSTR lpUnicodeCharStr, int cchUnicodeChar, LPWSTR lpNameprepCharStr, int cchNameprepChar);
WINNORMALIZEAPI int
WINAPI IdnToUnicode(DWORD dwFlags, LPCWSTR lpASCIICharStr, int cchASCIIChar, LPWSTR lpUnicodeCharStr, int cchUnicodeChar);
WINBASEAPI BOOL WINAPI VerifyScripts(DWORD dwFlags, LPCWSTR lpLocaleScripts, int cchLocaleScripts, LPCWSTR lpTestScripts, int cchTestScripts);
WINBASEAPI int
WINAPI GetStringScripts(DWORD dwFlags, LPCWSTR lpString, int cchString, LPWSTR lpScripts, int cchScripts);
#endif
#if (WINVER >= 0x0600)
#define LOCALE_NAME_USER_DEFAULT            NULL
#define LOCALE_NAME_INVARIANT               L""
#define LOCALE_NAME_SYSTEM_DEFAULT          L"!x-sys-default-locale"
WINBASEAPI int WINAPI GetLocaleInfoEx(LPCWSTR lpLocaleName, LCTYPE LCType, LPWSTR lpLCData, int cchData);
WINBASEAPI int WINAPI GetCalendarInfoEx(LPCWSTR lpLocaleName, CALID Calendar, LPCWSTR lpReserved, CALTYPE CalType, LPWSTR lpCalData, int cchData, LPDWORD lpValue);
WINBASEAPI int WINAPI GetTimeFormatEx(LPCWSTR lpLocaleName, DWORD dwFlags, CONST SYSTEMTIME *lpTime, LPCWSTR lpFormat, LPWSTR lpTimeStr, int cchTime);
WINBASEAPI int WINAPI GetDateFormatEx(LPCWSTR lpLocaleName, DWORD dwFlags, CONST SYSTEMTIME *lpDate, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate, LPCWSTR lpCalendar);
WINBASEAPI int WINAPI GetDurationFormatEx(LPCWSTR lpLocaleName, DWORD dwFlags, CONST SYSTEMTIME *lpDuration, ULONGLONG ullDuration, LPCWSTR lpFormat, LPWSTR lpDurationStr, int cchDuration);
WINBASEAPI int WINAPI GetNumberFormatEx(LPCWSTR lpLocaleName, DWORD dwFlags, LPCWSTR lpValue, CONST NUMBERFMTW *lpFormat, LPWSTR lpNumberStr, int cchNumber);
WINBASEAPI int WINAPI GetCurrencyFormatEx(LPCWSTR lpLocaleName, DWORD dwFlags, LPCWSTR lpValue, CONST CURRENCYFMTW *lpFormat, LPWSTR lpCurrencyStr, int cchCurrency);
WINBASEAPI int WINAPI GetUserDefaultLocaleName(LPWSTR lpLocaleName, int cchLocaleName);
WINBASEAPI int WINAPI GetSystemDefaultLocaleName(LPWSTR lpLocaleName, int cchLocaleName);
WINBASEAPI BOOL WINAPI GetNLSVersionEx(NLS_FUNCTION function, LPCWSTR lpLocaleName, LPNLSVERSIONINFOEX lpVersionInformation);
WINBASEAPI int WINAPI CompareStringEx(LPCWSTR lpLocaleName, DWORD dwCmpFlags, LPCWSTR lpString1, int cchCount1, LPCWSTR lpString2, int cchCount2, LPNLSVERSIONINFO lpVersionInformation, LPVOID lpReserved, LPARAM lParam);
WINBASEAPI int WINAPI FindNLSStringEx(LPCWSTR lpLocaleName, DWORD dwFindNLSStringFlags, LPCWSTR lpStringSource, int cchSource, LPCWSTR lpStringValue, int cchValue, LPINT pcchFound, LPNLSVERSIONINFO lpVersionInformation, LPVOID lpReserved, LPARAM lParam);
WINBASEAPI int WINAPI LCMapStringEx(LPCWSTR lpLocaleName, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest, LPNLSVERSIONINFO lpVersionInformation, LPVOID lpReserved, LPARAM lParam);
WINBASEAPI int WINAPI CompareStringOrdinal(LPCWSTR lpString1, int cchCount1, LPCWSTR lpString2, int cchCount2, BOOL bIgnoreCase);
WINBASEAPI BOOL WINAPI IsValidLocaleName(LPCWSTR lpLocaleName);
typedef BOOL(CALLBACK *CALINFO_ENUMPROCEXEX) (LPWSTR, CALID, LPWSTR, LPARAM);
WINBASEAPI BOOL WINAPI EnumCalendarInfoExEx(CALINFO_ENUMPROCEXEX pCalInfoEnumProcExEx, LPCWSTR lpLocaleName, CALID Calendar, LPCWSTR lpReserved, CALTYPE CalType, LPARAM lParam);
typedef BOOL(CALLBACK *DATEFMT_ENUMPROCEXEX) (LPWSTR, CALID, LPARAM);
WINBASEAPI BOOL WINAPI EnumDateFormatsExEx(DATEFMT_ENUMPROCEXEX lpDateFmtEnumProcExEx, LPCWSTR lpLocaleName, DWORD dwFlags, LPARAM lParam);
typedef BOOL(CALLBACK *TIMEFMT_ENUMPROCEX) (LPWSTR, LPARAM);
WINBASEAPI BOOL WINAPI EnumTimeFormatsEx(TIMEFMT_ENUMPROCEX lpTimeFmtEnumProcEx, LPCWSTR lpLocaleName, DWORD dwFlags, LPARAM lParam);
typedef BOOL(CALLBACK *LOCALE_ENUMPROCEX) (LPWSTR, DWORD, LPARAM);
WINBASEAPI BOOL WINAPI EnumSystemLocalesEx(LOCALE_ENUMPROCEX lpLocaleEnumProcEx, DWORD dwFlags, LPARAM lParam, LPVOID lpReserved);
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
WINBASEAPI int WINAPI ResolveLocaleName(LPCWSTR lpNameToResolve, LPWSTR lpLocaleName, int cchLocaleName);
#endif
#endif

#endif
