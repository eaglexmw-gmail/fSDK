/*+@@file@@----------------------------------------------------------------*//*!
 \file		Qossp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 20:33:39 2016
 \date		Modified on Sat Sep  3 20:33:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __QOSSP_H_
#define __QOSSP_H_
#if __POCC__ >= 500
#pragma once
#endif
#define   RSVP_OBJECT_ID_BASE         1000
#define   RSVP_OBJECT_STATUS_INFO     (0x00000000 + RSVP_OBJECT_ID_BASE)
#define   RSVP_OBJECT_RESERVE_INFO    (0x00000001 + RSVP_OBJECT_ID_BASE)
#define   RSVP_OBJECT_ADSPEC          (0x00000002 + RSVP_OBJECT_ID_BASE)
#define   RSVP_OBJECT_POLICY_INFO     (0x00000003 + RSVP_OBJECT_ID_BASE)
#define   RSVP_OBJECT_FILTERSPEC_LIST (0x00000004 + RSVP_OBJECT_ID_BASE)
typedef union _IN_ADDR_IPV4
{
    ULONG  Addr;
    UCHAR  AddrBytes[4];
} IN_ADDR_IPV4, *LPIN_ADDR_IPV4;
typedef struct _IN_ADDR_IPV6
{
    UCHAR  Addr[16];
} IN_ADDR_IPV6, *LPIN_ADDR_IPV6;
typedef const IN_ADDR_IPV6  *LPCIN_ADDR_IPV6;
typedef struct _RSVP_FILTERSPEC_V4
{
    IN_ADDR_IPV4    Address;
    USHORT          Unused;
    USHORT          Port;
} RSVP_FILTERSPEC_V4, *LPRSVP_FILTERSPEC_V4;
typedef struct _RSVP_FILTERSPEC_V6
{
    IN_ADDR_IPV6    Address;
    USHORT          UnUsed;
    USHORT          Port;
} RSVP_FILTERSPEC_V6, *LPRSVP_FILTERSPEC_V6;
typedef struct _RSVP_FILTERSPEC_V6_FLOW
{
    IN_ADDR_IPV6    Address;
    UCHAR           UnUsed;
    UCHAR           FlowLabel[3];
} RSVP_FILTERSPEC_V6_FLOW, *LPRSVP_FILTERSPEC_V6_FLOW;
typedef struct _RSVP_FILTERSPEC_V4_GPI
{
    IN_ADDR_IPV4    Address;
    ULONG           GeneralPortId;
} RSVP_FILTERSPEC_V4_GPI, *LPRSVP_FILTERSPEC_V4_GPI;
typedef struct _RSVP_FILTERSPEC_V6_GPI
{
    IN_ADDR_IPV6    Address;
    ULONG           GeneralPortId;
} RSVP_FILTERSPEC_V6_GPI, *LPRSVP_FILTERSPEC_V6_GPI;
typedef enum
{
        FILTERSPECV4 = 1,
        FILTERSPECV6,
        FILTERSPECV6_FLOW,
        FILTERSPECV4_GPI,
        FILTERSPECV6_GPI,
        FILTERSPEC_END
} FilterType;
typedef struct _RSVP_FILTERSPEC
{
    FilterType   Type;
    union
	{
        RSVP_FILTERSPEC_V4      FilterSpecV4;
        RSVP_FILTERSPEC_V6      FilterSpecV6;
        RSVP_FILTERSPEC_V6_FLOW FilterSpecV6Flow;
        RSVP_FILTERSPEC_V4_GPI  FilterSpecV4Gpi;
        RSVP_FILTERSPEC_V6_GPI  FilterSpecV6Gpi;
    };
} RSVP_FILTERSPEC, *LPRSVP_FILTERSPEC;
typedef struct _FLOWDESCRIPTOR
{
    FLOWSPEC            FlowSpec;
    ULONG               NumFilters;
    LPRSVP_FILTERSPEC   FilterList;
} FLOWDESCRIPTOR, *LPFLOWDESCRIPTOR;
typedef struct _RSVP_POLICY
{
    USHORT  Len;
    USHORT  Type;
    UCHAR   Info[4];
} RSVP_POLICY, *LPRSVP_POLICY;
typedef const RSVP_POLICY *LPCRSVP_POLICY;
#define RSVP_POLICY_HDR_LEN    ( sizeof(USHORT) + sizeof(USHORT) )
typedef struct _RSVP_POLICY_INFO 
{
    QOS_OBJECT_HDR     ObjectHdr;
    ULONG              NumPolicyElement;
    RSVP_POLICY        PolicyElement[1];
} RSVP_POLICY_INFO, *LPRSVP_POLICY_INFO;
typedef struct _RSVP_RESERVE_INFO
{
    QOS_OBJECT_HDR      ObjectHdr;
    ULONG               Style;
    ULONG               ConfirmRequest;
    LPRSVP_POLICY_INFO  PolicyElementList;
    ULONG               NumFlowDesc;
    LPFLOWDESCRIPTOR    FlowDescList;
} RSVP_RESERVE_INFO, *LPRSVP_RESERVE_INFO;
typedef const RSVP_RESERVE_INFO *LPCRSVP_RESERVE_INFO;
#define RSVP_DEFAULT_STYLE            0x00000000
#define RSVP_WILDCARD_STYLE           0x00000001
#define RSVP_FIXED_FILTER_STYLE       0x00000002
#define RSVP_SHARED_EXPLICIT_STYLE    0x00000003
typedef struct _RSVP_STATUS_INFO
{
    QOS_OBJECT_HDR      ObjectHdr;
    ULONG               StatusCode;
    ULONG               ExtendedStatus1;
    ULONG               ExtendedStatus2;
} RSVP_STATUS_INFO, *LPRSVP_STATUS_INFO;
typedef const RSVP_STATUS_INFO *LPCRSVP_STATUS_INFO;
typedef struct _QOS_DESTADDR
{
    QOS_OBJECT_HDR ObjectHdr;
    const struct sockaddr *  SocketAddress;
    ULONG                    SocketAddressLength;
} QOS_DESTADDR, *LPQOS_DESTADDR;
typedef const QOS_DESTADDR * LPCQOS_DESTADDR;
typedef struct _AD_GENERAL_PARAMS
{
    ULONG       IntServAwareHopCount;
    ULONG       PathBandwidthEstimate;
    ULONG       MinimumLatency;
    ULONG       PathMTU;
    ULONG       Flags;
} AD_GENERAL_PARAMS, *LPAD_GENERAL_PARAMS;
#define INDETERMINATE_LATENCY   0xFFFFFFFF;
#define AD_FLAG_BREAK_BIT    0x00000001
typedef struct _AD_GUARANTEED
{
    ULONG       CTotal;
    ULONG       DTotal;
    ULONG       CSum;
    ULONG       DSum;
} AD_GUARANTEED, *LPAD_GUARANTEED;
typedef struct _PARAM_BUFFER
{
    ULONG   ParameterId;
    ULONG   Length;
    UCHAR   Buffer[1];
} PARAM_BUFFER, *LPPARAM_BUFFER;
typedef struct _CONTROL_SERVICE
{
    ULONG               Length;
    SERVICETYPE         Service;
    AD_GENERAL_PARAMS   Overrides;
    union {
        AD_GUARANTEED   Guaranteed;
        PARAM_BUFFER    ParamBuffer[1];
    };
} CONTROL_SERVICE, *LPCONTROL_SERVICE;
typedef struct _RSVP_ADSPEC  {
    QOS_OBJECT_HDR     ObjectHdr;
    AD_GENERAL_PARAMS  GeneralParams;
    ULONG              NumberOfServices;
    CONTROL_SERVICE    Services[1];
} RSVP_ADSPEC, *LPRSVP_ADSPEC;
#define    mIOC_IN       0x80000000
#define    mIOC_OUT      0x40000000
#define    mIOC_VENDOR   0x04000000
#define    mCOMPANY      0x18000000
#define    ioctl_code    0x00000001
#define SIO_CHK_QOS   (mIOC_IN | mIOC_OUT | mIOC_VENDOR | mCOMPANY | ioctl_code)
#define QOSSPBASE           50000
#define ALLOWED_TO_SEND_DATA  (QOSSPBASE+1)
#define ABLE_TO_RECV_RSVP     (QOSSPBASE+2)
#define LINE_RATE             (QOSSPBASE+3)
#define LOCAL_TRAFFIC_CONTROL (QOSSPBASE+4)
#define LOCAL_QOSABILITY      (QOSSPBASE+5)
#define END_TO_END_QOSABILITY (QOSSPBASE+6)
#define INFO_NOT_AVAILABLE  0xFFFFFFFF
#define ANY_DEST_ADDR       0xFFFFFFFF
#define MODERATELY_DELAY_SENSITIVE   0xFFFFFFFD  
#define HIGHLY_DELAY_SENSITIVE       0xFFFFFFFE
#define QOSSP_ERR_BASE                                 (QOSSPBASE+6000)
#define GQOS_NO_ERRORCODE                              (0)
#define GQOS_NO_ERRORVALUE                             (0)
#define GQOS_ERRORCODE_UNKNOWN                         (0xFFFFFFFF)
#define GQOS_ERRORVALUE_UNKNOWN                        (0xFFFFFFFF)
#define GQOS_NET_ADMISSION                             (QOSSP_ERR_BASE+100)
#define GQOS_OTHER                                     (QOSSP_ERR_BASE+100+1)
#define GQOS_DELAYBND                                  (QOSSP_ERR_BASE+100+2)
#define GQOS_BANDWIDTH                                 (QOSSP_ERR_BASE+100+3)
#define GQOS_MTU                                       (QOSSP_ERR_BASE+100+4)
#define GQOS_FLOW_RATE                                 (QOSSP_ERR_BASE+100+5)
#define GQOS_PEAK_RATE                                 (QOSSP_ERR_BASE+100+6)
#define GQOS_AGG_PEAK_RATE                             (QOSSP_ERR_BASE+100+7)
#define GQOS_NET_POLICY                                (QOSSP_ERR_BASE+200)
#define GQOS_POLICY_ERROR_UNKNOWN                      (QOSSP_ERR_BASE+200+0)
#define GQOS_POLICY_GLOBAL_DEF_FLOW_COUNT              (QOSSP_ERR_BASE+200+1)
#define GQOS_POLICY_GLOBAL_GRP_FLOW_COUNT              (QOSSP_ERR_BASE+200+2)
#define GQOS_POLICY_GLOBAL_USER_FLOW_COUNT             (QOSSP_ERR_BASE+200+3)
#define GQOS_POLICY_GLOBAL_UNK_USER_FLOW_COUNT         (QOSSP_ERR_BASE+200+4)
#define GQOS_POLICY_SUBNET_DEF_FLOW_COUNT              (QOSSP_ERR_BASE+200+5)
#define GQOS_POLICY_SUBNET_GRP_FLOW_COUNT              (QOSSP_ERR_BASE+200+6)
#define GQOS_POLICY_SUBNET_USER_FLOW_COUNT             (QOSSP_ERR_BASE+200+7)
#define GQOS_POLICY_SUBNET_UNK_USER_FLOW_COUNT         (QOSSP_ERR_BASE+200+8)
#define GQOS_POLICY_GLOBAL_DEF_FLOW_DURATION           (QOSSP_ERR_BASE+200+9)
#define GQOS_POLICY_GLOBAL_GRP_FLOW_DURATION           (QOSSP_ERR_BASE+200+10)
#define GQOS_POLICY_GLOBAL_USER_FLOW_DURATION          (QOSSP_ERR_BASE+200+11)
#define GQOS_POLICY_GLOBAL_UNK_USER_FLOW_DURATION      (QOSSP_ERR_BASE+200+12)
#define GQOS_POLICY_SUBNET_DEF_FLOW_DURATION           (QOSSP_ERR_BASE+200+13)
#define GQOS_POLICY_SUBNET_GRP_FLOW_DURATION           (QOSSP_ERR_BASE+200+14) 
#define GQOS_POLICY_SUBNET_USER_FLOW_DURATION          (QOSSP_ERR_BASE+200+15)
#define GQOS_POLICY_SUBNET_UNK_USER_FLOW_DURATION      (QOSSP_ERR_BASE+200+16)
#define GQOS_POLICY_GLOBAL_DEF_FLOW_RATE               (QOSSP_ERR_BASE+200+17)
#define GQOS_POLICY_GLOBAL_GRP_FLOW_RATE               (QOSSP_ERR_BASE+200+18)
#define GQOS_POLICY_GLOBAL_USER_FLOW_RATE              (QOSSP_ERR_BASE+200+19)
#define GQOS_POLICY_GLOBAL_UNK_USER_FLOW_RATE          (QOSSP_ERR_BASE+200+20)
#define GQOS_POLICY_SUBNET_DEF_FLOW_RATE               (QOSSP_ERR_BASE+200+21)
#define GQOS_POLICY_SUBNET_GRP_FLOW_RATE               (QOSSP_ERR_BASE+200+22)
#define GQOS_POLICY_SUBNET_USER_FLOW_RATE              (QOSSP_ERR_BASE+200+23)
#define GQOS_POLICY_SUBNET_UNK_USER_FLOW_RATE          (QOSSP_ERR_BASE+200+24)
#define GQOS_POLICY_GLOBAL_DEF_PEAK_RATE               (QOSSP_ERR_BASE+200+25)
#define GQOS_POLICY_GLOBAL_GRP_PEAK_RATE               (QOSSP_ERR_BASE+200+26)
#define GQOS_POLICY_GLOBAL_USER_PEAK_RATE              (QOSSP_ERR_BASE+200+27)
#define GQOS_POLICY_GLOBAL_UNK_USER_PEAK_RATE          (QOSSP_ERR_BASE+200+28)
#define GQOS_POLICY_SUBNET_DEF_PEAK_RATE               (QOSSP_ERR_BASE+200+29)
#define GQOS_POLICY_SUBNET_GRP_PEAK_RATE               (QOSSP_ERR_BASE+200+30)
#define GQOS_POLICY_SUBNET_USER_PEAK_RATE              (QOSSP_ERR_BASE+200+31)
#define GQOS_POLICY_SUBNET_UNK_USER_PEAK_RATE          (QOSSP_ERR_BASE+200+32)
#define GQOS_POLICY_GLOBAL_DEF_SUM_FLOW_RATE           (QOSSP_ERR_BASE+200+33)
#define GQOS_POLICY_GLOBAL_GRP_SUM_FLOW_RATE           (QOSSP_ERR_BASE+200+34)
#define GQOS_POLICY_GLOBAL_USER_SUM_FLOW_RATE          (QOSSP_ERR_BASE+200+35)
#define GQOS_POLICY_GLOBAL_UNK_USER_SUM_FLOW_RATE      (QOSSP_ERR_BASE+200+36)
#define GQOS_POLICY_SUBNET_DEF_SUM_FLOW_RATE           (QOSSP_ERR_BASE+200+37)
#define GQOS_POLICY_SUBNET_GRP_SUM_FLOW_RATE           (QOSSP_ERR_BASE+200+38)
#define GQOS_POLICY_SUBNET_USER_SUM_FLOW_RATE          (QOSSP_ERR_BASE+200+39)
#define GQOS_POLICY_SUBNET_UNK_USER_SUM_FLOW_RATE      (QOSSP_ERR_BASE+200+40)
#define GQOS_POLICY_GLOBAL_DEF_SUM_PEAK_RATE           (QOSSP_ERR_BASE+200+41)
#define GQOS_POLICY_GLOBAL_GRP_SUM_PEAK_RATE           (QOSSP_ERR_BASE+200+42)
#define GQOS_POLICY_GLOBAL_USER_SUM_PEAK_RATE          (QOSSP_ERR_BASE+200+43)
#define GQOS_POLICY_GLOBAL_UNK_USER_SUM_PEAK_RATE      (QOSSP_ERR_BASE+200+44)
#define GQOS_POLICY_SUBNET_DEF_SUM_PEAK_RATE           (QOSSP_ERR_BASE+200+45)
#define GQOS_POLICY_SUBNET_GRP_SUM_PEAK_RATE           (QOSSP_ERR_BASE+200+46)
#define GQOS_POLICY_SUBNET_USER_SUM_PEAK_RATE          (QOSSP_ERR_BASE+200+47)
#define GQOS_POLICY_SUBNET_UNK_USER_SUM_PEAK_RATE      (QOSSP_ERR_BASE+200+48)
#define GQOS_POLICY_UNKNOWN_USER                       (QOSSP_ERR_BASE+200+49)
#define GQOS_POLICY_NO_PRIVILEGES                      (QOSSP_ERR_BASE+200+50)
#define GQOS_POLICY_EXPIRED_USER_TOKEN                 (QOSSP_ERR_BASE+200+51)
#define GQOS_POLICY_NO_RESOURCES                       (QOSSP_ERR_BASE+200+52)
#define GQOS_POLICY_PRE_EMPTED                         (QOSSP_ERR_BASE+200+53)
#define GQOS_POLICY_USER_CHANGED                       (QOSSP_ERR_BASE+200+54)
#define GQOS_POLICY_NO_ACCEPTS                         (QOSSP_ERR_BASE+200+55)
#define GQOS_POLICY_NO_MEMORY                          (QOSSP_ERR_BASE+200+56)
#define GQOS_POLICY_CRAZY_FLOWSPEC                     (QOSSP_ERR_BASE+200+57)
#define GQOS_POLICY_NO_MORE_INFO                       (QOSSP_ERR_BASE+200+58)
#define GQOS_POLICY_UNSUPPORTED_CREDENTIAL_TYPE        (QOSSP_ERR_BASE+200+59)
#define GQOS_POLICY_INSUFFICIENT_PRIVILEGES            (QOSSP_ERR_BASE+200+60)
#define GQOS_POLICY_EXPIRED_CREDENTIAL                 (QOSSP_ERR_BASE+200+61)
#define GQOS_POLICY_IDENTITY_CHANGED                   (QOSSP_ERR_BASE+200+62)
#define GQOS_POLICY_NO_QOS_PROVIDED                    (QOSSP_ERR_BASE+200+63)
#define GQOS_POLICY_DO_NOT_SEND                        (QOSSP_ERR_BASE+200+64)
#define GQOS_POLICY_ERROR_USERID                       (QOSSP_ERR_BASE+200+99)
#define GQOS_RSVP                                      (QOSSP_ERR_BASE+300)
#define GQOS_NO_PATH                                   (QOSSP_ERR_BASE+300+1)
#define GQOS_NO_SENDER                                 (QOSSP_ERR_BASE+300+2)
#define GQOS_BAD_STYLE                                 (QOSSP_ERR_BASE+300+3)
#define GQOS_UNKNOWN_STYLE                             (QOSSP_ERR_BASE+300+4)
#define GQOS_BAD_DSTPORT                               (QOSSP_ERR_BASE+300+5) 
#define GQOS_BAD_SNDPORT                               (QOSSP_ERR_BASE+300+6)
#define GQOS_AMBIG_FILTER                              (QOSSP_ERR_BASE+300+7)
#define GQOS_PREEMPTED                                 (QOSSP_ERR_BASE+300+8)
#define GQOS_UNKN_OBJ_CLASS                            (QOSSP_ERR_BASE+300+9)
#define GQOS_UNKNOWN_CTYPE                             (QOSSP_ERR_BASE+300+10)
#define GQOS_INVALID                                   (QOSSP_ERR_BASE+300+11)
#define GQOS_API                                       (QOSSP_ERR_BASE+400)
#define GQOS_API_BADSEND                               (QOSSP_ERR_BASE+400+1)
#define GQOS_API_BADRECV                               (QOSSP_ERR_BASE+400+2)
#define GQOS_API_BADSPORT                              (QOSSP_ERR_BASE+400+3)
#define GQOS_KERNEL_TC_SYS                             (QOSSP_ERR_BASE+500)
#define GQOS_TC_GENERIC                                (QOSSP_ERR_BASE+500+1)
#define GQOS_TC_INVALID                                (QOSSP_ERR_BASE+500+2)
#define GQOS_NO_MEMORY                                 (QOSSP_ERR_BASE+500+3)
#define GQOS_BAD_ADDRESSTYPE                           (QOSSP_ERR_BASE+500+4) 
#define GQOS_BAD_DUPLICATE                             (QOSSP_ERR_BASE+500+5)
#define GQOS_CONFLICT                                  (QOSSP_ERR_BASE+500+6)
#define GQOS_NOTREADY                                  (QOSSP_ERR_BASE+500+7)
#define GQOS_WOULDBLOCK                                (QOSSP_ERR_BASE+500+8)
#define GQOS_INCOMPATIBLE                              (QOSSP_ERR_BASE+500+9)
#define GQOS_BAD_SDMODE                                (QOSSP_ERR_BASE+500+10)
#define GQOS_BAD_QOSPRIORITY                           (QOSSP_ERR_BASE+500+11)
#define GQOS_BAD_TRAFFICCLASS                          (QOSSP_ERR_BASE+500+12)
#define GQOS_NO_SYS_RESOURCES                          (QOSSP_ERR_BASE+500+13)
#define GQOS_RSVP_SYS                                  (QOSSP_ERR_BASE+600)
#define GQOS_OTHER_SYS                                 (QOSSP_ERR_BASE+600+1)
#define GQOS_MEMORY_SYS                                (QOSSP_ERR_BASE+600+2)
#define GQOS_API_SYS                                   (QOSSP_ERR_BASE+600+3)
#define GQOS_SETQOS_NO_LOCAL_APPS                      (QOSSP_ERR_BASE+600+4)
#define GQOS_KERNEL_TC                                 (QOSSP_ERR_BASE+700)
#define GQOS_CONFLICT_SERV                             (QOSSP_ERR_BASE+700+1)
#define GQOS_NO_SERV                                   (QOSSP_ERR_BASE+700+2)
#define GQOS_BAD_FLOWSPEC                              (QOSSP_ERR_BASE+700+3)
#define GQOS_BAD_TSPEC                                 (QOSSP_ERR_BASE+700+4)
#define GQOS_BAD_ADSPEC                                (QOSSP_ERR_BASE+700+5)
#define GQOS_IOCTL_SYSTEMFAILURE                       (QOSSP_ERR_BASE+800+1)
#define GQOS_IOCTL_NOBYTESRETURNED                     (QOSSP_ERR_BASE+800+2)
#define GQOS_IOCTL_INVALIDSOCKET                       (QOSSP_ERR_BASE+800+3)
#define GQOS_IOCTL_INV_FUNCPTR                         (QOSSP_ERR_BASE+800+4)
#define GQOS_IOCTL_INV_OVERLAPPED                      (QOSSP_ERR_BASE+800+5)
#define GQOS_SETQOS_BADINBUFFER                        (QOSSP_ERR_BASE+810+1)
#define GQOS_SETQOS_BADFLOWSPEC                        (QOSSP_ERR_BASE+810+2)
#define GQOS_SETQOS_COLLISION                          (QOSSP_ERR_BASE+810+3)
#define GQOS_SETQOS_BADPROVSPECBUF                     (QOSSP_ERR_BASE+810+4)
#define GQOS_SETQOS_ILLEGALOP                          (QOSSP_ERR_BASE+810+5)
#define GQOS_SETQOS_INVALIDADDRESS                     (QOSSP_ERR_BASE+810+6)
#define GQOS_SETQOS_OUTOFMEMORY                        (QOSSP_ERR_BASE+810+7)
#define GQOS_SETQOS_EXCEPTION                          (QOSSP_ERR_BASE+810+8)
#define GQOS_SETQOS_BADADDRLEN                         (QOSSP_ERR_BASE+810+9)
#define GQOS_SETQOS_NOSOCKNAME                         (QOSSP_ERR_BASE+810+10)
#define GQOS_SETQOS_IPTOSFAIL                          (QOSSP_ERR_BASE+810+11)
#define GQOS_SETQOS_OPENSESSIONFAIL                    (QOSSP_ERR_BASE+810+12)
#define GQOS_SETQOS_SENDFAIL                           (QOSSP_ERR_BASE+810+13)
#define GQOS_SETQOS_RECVFAIL                           (QOSSP_ERR_BASE+810+14)
#define GQOS_SETQOS_BADPOLICYOBJECT                    (QOSSP_ERR_BASE+810+15)
#define GQOS_SETQOS_UNKNOWNFILTEROBJ                   (QOSSP_ERR_BASE+810+16)
#define GQOS_SETQOS_BADFILTERTYPE                      (QOSSP_ERR_BASE+810+17)
#define GQOS_SETQOS_BADFILTERCOUNT                     (QOSSP_ERR_BASE+810+18)
#define GQOS_SETQOS_BADOBJLENGTH                       (QOSSP_ERR_BASE+810+19)
#define GQOS_SETQOS_BADFLOWCOUNT                       (QOSSP_ERR_BASE+810+20)
#define GQOS_SETQOS_UNKNOWNPSOBJ                       (QOSSP_ERR_BASE+810+21)
#define GQOS_SETQOS_BADPOLICYOBJ                       (QOSSP_ERR_BASE+810+22)
#define GQOS_SETQOS_BADFLOWDESC                        (QOSSP_ERR_BASE+810+23)
#define GQOS_SETQOS_BADPROVSPECOBJ                     (QOSSP_ERR_BASE+810+24)
#define GQOS_SETQOS_NOLOOPBACK                         (QOSSP_ERR_BASE+810+25)
#define GQOS_SETQOS_MODENOTSUPPORTED                   (QOSSP_ERR_BASE+810+26)
#define GQOS_SETQOS_MISSINGFLOWDESC                    (QOSSP_ERR_BASE+810+27)
#define GQOS_GETQOS_BADOUTBUFFER                       (QOSSP_ERR_BASE+840+1)
#define GQOS_GETQOS_SYSTEMFAILURE                      (QOSSP_ERR_BASE+840+2)
#define GQOS_GETQOS_EXCEPTION                          (QOSSP_ERR_BASE+840+3)
#define GQOS_GETQOS_INTERNALFAILURE                    (QOSSP_ERR_BASE+840+4)
#define GQOS_CHKQOS_BADINBUFFER                        (QOSSP_ERR_BASE+850+1)
#define GQOS_CHKQOS_BADOUTBUFFER                       (QOSSP_ERR_BASE+850+2)
#define GQOS_CHKQOS_SYSTEMFAILURE                      (QOSSP_ERR_BASE+850+3)
#define GQOS_CHKQOS_INTERNALFAILURE                    (QOSSP_ERR_BASE+850+4)
#define GQOS_CHKQOS_BADPARAMETER                       (QOSSP_ERR_BASE+850+5)
#define GQOS_CHKQOS_EXCEPTION                          (QOSSP_ERR_BASE+850+6)
#endif
