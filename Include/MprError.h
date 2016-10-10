/*+@@file@@----------------------------------------------------------------*//*!
 \file		MprError.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 22:42:37 2016
 \date		Modified on Sun Aug  7 22:42:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MPRERROR_H_
#define _MPRERROR_H_
#if __POCC__ >= 500
#pragma once
#endif
#define ROUTEBASE 900
#define SUCCESS 0
#define ERROR_ROUTER_STOPPED                        (ROUTEBASE+0)
#define ERROR_ALREADY_CONNECTED                     (ROUTEBASE+1)
#define ERROR_UNKNOWN_PROTOCOL_ID                   (ROUTEBASE+2)
#define ERROR_DDM_NOT_RUNNING                       (ROUTEBASE+3)
#define ERROR_INTERFACE_ALREADY_EXISTS              (ROUTEBASE+4)
#define ERROR_NO_SUCH_INTERFACE                     (ROUTEBASE+5)
#define ERROR_INTERFACE_NOT_CONNECTED               (ROUTEBASE+6)
#define ERROR_PROTOCOL_STOP_PENDING                 (ROUTEBASE+7)
#define ERROR_INTERFACE_CONNECTED                   (ROUTEBASE+8)
#define ERROR_NO_INTERFACE_CREDENTIALS_SET          (ROUTEBASE+9)
#define ERROR_ALREADY_CONNECTING                    (ROUTEBASE+10)
#define ERROR_UPDATE_IN_PROGRESS                    (ROUTEBASE+11)
#define ERROR_INTERFACE_CONFIGURATION               (ROUTEBASE+12)
#define ERROR_NOT_CLIENT_PORT                       (ROUTEBASE+13)
#define ERROR_NOT_ROUTER_PORT                       (ROUTEBASE+14)
#define ERROR_CLIENT_INTERFACE_ALREADY_EXISTS       (ROUTEBASE+15)
#define ERROR_INTERFACE_DISABLED                    (ROUTEBASE+16)
#define ERROR_AUTH_PROTOCOL_REJECTED                (ROUTEBASE+17)
#define ERROR_NO_AUTH_PROTOCOL_AVAILABLE            (ROUTEBASE+18)
#define ERROR_PEER_REFUSED_AUTH                     (ROUTEBASE+19)
#define ERROR_REMOTE_NO_DIALIN_PERMISSION           (ROUTEBASE+20)
#define ERROR_REMOTE_PASSWD_EXPIRED                 (ROUTEBASE+21)
#define ERROR_REMOTE_ACCT_DISABLED                  (ROUTEBASE+22)
#define ERROR_REMOTE_RESTRICTED_LOGON_HOURS         (ROUTEBASE+23)
#define ERROR_REMOTE_AUTHENTICATION_FAILURE         (ROUTEBASE+24)
#define ERROR_INTERFACE_HAS_NO_DEVICES              (ROUTEBASE+25)
#define ERROR_IDLE_DISCONNECTED                     (ROUTEBASE+26)
#define ERROR_INTERFACE_UNREACHABLE                 (ROUTEBASE+27)
#define ERROR_SERVICE_IS_PAUSED                     (ROUTEBASE+28)
#define ERROR_INTERFACE_DISCONNECTED                (ROUTEBASE+29)
#define ERROR_AUTH_SERVER_TIMEOUT                   (ROUTEBASE+30)
#define ERROR_PORT_LIMIT_REACHED                    (ROUTEBASE+31)
#define ERROR_PPP_SESSION_TIMEOUT                   (ROUTEBASE+32)
#define ERROR_MAX_LAN_INTERFACE_LIMIT               (ROUTEBASE+33)
#define ERROR_MAX_WAN_INTERFACE_LIMIT               (ROUTEBASE+34)
#define ERROR_MAX_CLIENT_INTERFACE_LIMIT            (ROUTEBASE+35)
#define ERROR_BAP_DISCONNECTED                      (ROUTEBASE+36)
#define ERROR_USER_LIMIT                            (ROUTEBASE+37)
#define ERROR_NO_RADIUS_SERVERS                     (ROUTEBASE+38)
#define ERROR_INVALID_RADIUS_RESPONSE               (ROUTEBASE+39)
#define ERROR_DIALIN_HOURS_RESTRICTION              (ROUTEBASE+40)
#define ERROR_ALLOWED_PORT_TYPE_RESTRICTION         (ROUTEBASE+41)
#define ERROR_AUTH_PROTOCOL_RESTRICTION             (ROUTEBASE+42)
#define ERROR_BAP_REQUIRED                          (ROUTEBASE+43)
#define ERROR_DIALOUT_HOURS_RESTRICTION             (ROUTEBASE+44)
#define ERROR_ROUTER_CONFIG_INCOMPATIBLE            (ROUTEBASE+45)
#define WARNING_NO_MD5_MIGRATION                    (ROUTEBASE+46)
#define ERROR_PROTOCOL_ALREADY_INSTALLED            (ROUTEBASE+48)
#define ERROR_INVALID_SIGNATURE_LENGTH              (ROUTEBASE+49)
#define ERROR_INVALID_SIGNATURE                     (ROUTEBASE+50)
#define ERROR_NO_SIGNATURE                          (ROUTEBASE+51)
#define ERROR_INVALID_PACKET_LENGTH_OR_ID           (ROUTEBASE+52)
#define ERROR_INVALID_ATTRIBUTE_LENGTH              (ROUTEBASE+53)
#define ERROR_INVALID_PACKET                        (ROUTEBASE+54)
#define ERROR_AUTHENTICATOR_MISMATCH                (ROUTEBASE+55)
#define ERROR_REMOTEACCESS_NOT_CONFIGURED           (ROUTEBASE+56)
#define ROUTEBASEEND                                (ROUTEBASE+57)
#endif
