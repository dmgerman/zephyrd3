DECL|Channel|member|_u8 Channel; /* The received channel*/
DECL|EventData|member|_u32 EventData;
DECL|Event|member|_u32 Event;
DECL|Event|member|_u32 Event;
DECL|FromDate|member|_i8 FromDate[8];
DECL|IssuerNameLen|member|_i8 IssuerNameLen;
DECL|IssuerNameXoredSha1|member|_u16 IssuerNameXoredSha1;
DECL|IssuerName|member|_i8 IssuerName[SL_MAX_ISSUER_AND_SUBJECT_NAME_LEN];
DECL|KeepaliveEnabled|member|_u32 KeepaliveEnabled; /* 0 = disabled;1 = enabled; default = 1*/
DECL|NonBlockingEnabled|member|_u32 NonBlockingEnabled;/* 0 = disabled;1 = enabled;default = 1*/
DECL|Padding|member|_i8 Padding[2];
DECL|Padding|member|_u8 Padding;
DECL|Padding|member|_u8 Padding; /* pad to align to 32 bits */
DECL|Rate|member|_u8 Rate; /* Recevied Rate */
DECL|ReuseaddrEnabled|member|_u32 ReuseaddrEnabled; /* 0 = disabled; 1 = enabled; default = 1*/
DECL|Rssi|member|_i8 Rssi; /* The computed RSSI value in db of current frame */
DECL|RxIpNoBoundaryEnabled|member|_i32 RxIpNoBoundaryEnabled; /* 0 = keep IP boundary; 1 = don`t keep ip boundary; default = 0; */
DECL|SL_AF_INET6|macro|SL_AF_INET6
DECL|SL_AF_INET|macro|SL_AF_INET
DECL|SL_AF_PACKET|macro|SL_AF_PACKET
DECL|SL_AF_RF|macro|SL_AF_RF
DECL|SL_BSD_SECURED_CA_IDX|enumerator|SL_BSD_SECURED_CA_IDX,
DECL|SL_BSD_SECURED_CERTIFICATE_IDX|enumerator|SL_BSD_SECURED_CERTIFICATE_IDX,
DECL|SL_BSD_SECURED_DH_IDX|enumerator|SL_BSD_SECURED_DH_IDX
DECL|SL_BSD_SECURED_PRIVATE_KEY_IDX|enumerator|SL_BSD_SECURED_PRIVATE_KEY_IDX = 0,
DECL|SL_BSD_SOCKET_ID_MASK|macro|SL_BSD_SOCKET_ID_MASK
DECL|SL_FD_SETSIZE|macro|SL_FD_SETSIZE
DECL|SL_FD_SETSIZE|macro|SL_FD_SETSIZE
DECL|SL_IN6ADDR_ANY|macro|SL_IN6ADDR_ANY
DECL|SL_INADDR_ANY|macro|SL_INADDR_ANY
DECL|SL_IPPROTO_IP|macro|SL_IPPROTO_IP
DECL|SL_IPPROTO_RAW|macro|SL_IPPROTO_RAW
DECL|SL_IPPROTO_TCP|macro|SL_IPPROTO_TCP
DECL|SL_IPPROTO_UDP|macro|SL_IPPROTO_UDP
DECL|SL_IPV6_ADD_MEMBERSHIP|macro|SL_IPV6_ADD_MEMBERSHIP
DECL|SL_IPV6_DROP_MEMBERSHIP|macro|SL_IPV6_DROP_MEMBERSHIP
DECL|SL_IPV6_MULTICAST_HOPS|macro|SL_IPV6_MULTICAST_HOPS
DECL|SL_IP_ADD_MEMBERSHIP|macro|SL_IP_ADD_MEMBERSHIP
DECL|SL_IP_DROP_MEMBERSHIP|macro|SL_IP_DROP_MEMBERSHIP
DECL|SL_IP_HDRINCL|macro|SL_IP_HDRINCL
DECL|SL_IP_LEASE_EXPIRED|macro|SL_IP_LEASE_EXPIRED
DECL|SL_IP_LEASE_PEER_DECLINE|macro|SL_IP_LEASE_PEER_DECLINE
DECL|SL_IP_LEASE_PEER_RELEASE|macro|SL_IP_LEASE_PEER_RELEASE
DECL|SL_IP_MULTICAST_IF|macro|SL_IP_MULTICAST_IF
DECL|SL_IP_MULTICAST_TTL|macro|SL_IP_MULTICAST_TTL
DECL|SL_IP_RAW_IPV6_HDRINCL|macro|SL_IP_RAW_IPV6_HDRINCL
DECL|SL_IP_RAW_RX_NO_HEADER|macro|SL_IP_RAW_RX_NO_HEADER
DECL|SL_MAX_ISSUER_AND_SUBJECT_NAME_LEN|macro|SL_MAX_ISSUER_AND_SUBJECT_NAME_LEN
DECL|SL_MSG_DONTWAIT|macro|SL_MSG_DONTWAIT
DECL|SL_OTHER_SIDE_CLOSE_SSL_DATA_NOT_ENCRYPTED|macro|SL_OTHER_SIDE_CLOSE_SSL_DATA_NOT_ENCRYPTED
DECL|SL_PF_INET6|macro|SL_PF_INET6
DECL|SL_PF_INET|macro|SL_PF_INET
DECL|SL_RX_FRAGMENTATION_TOO_BIG|macro|SL_RX_FRAGMENTATION_TOO_BIG
DECL|SL_SECURE_ALPN_FULL_LIST|macro|SL_SECURE_ALPN_FULL_LIST
DECL|SL_SECURE_ALPN_H1|macro|SL_SECURE_ALPN_H1
DECL|SL_SECURE_ALPN_H2C|macro|SL_SECURE_ALPN_H2C
DECL|SL_SECURE_ALPN_H2_14|macro|SL_SECURE_ALPN_H2_14
DECL|SL_SECURE_ALPN_H2_16|macro|SL_SECURE_ALPN_H2_16
DECL|SL_SECURE_ALPN_H2|macro|SL_SECURE_ALPN_H2
DECL|SL_SEC_MASK_SECURE_DEFAULT|macro|SL_SEC_MASK_SECURE_DEFAULT
DECL|SL_SEC_MASK_SSL_RSA_WITH_RC4_128_MD5|macro|SL_SEC_MASK_SSL_RSA_WITH_RC4_128_MD5
DECL|SL_SEC_MASK_SSL_RSA_WITH_RC4_128_SHA|macro|SL_SEC_MASK_SSL_RSA_WITH_RC4_128_SHA
DECL|SL_SEC_MASK_TLS_DHE_RSA_WITH_AES_128_GCM_SHA256|macro|SL_SEC_MASK_TLS_DHE_RSA_WITH_AES_128_GCM_SHA256
DECL|SL_SEC_MASK_TLS_DHE_RSA_WITH_AES_256_CBC_SHA|macro|SL_SEC_MASK_TLS_DHE_RSA_WITH_AES_256_CBC_SHA
DECL|SL_SEC_MASK_TLS_DHE_RSA_WITH_AES_256_GCM_SHA384|macro|SL_SEC_MASK_TLS_DHE_RSA_WITH_AES_256_GCM_SHA384
DECL|SL_SEC_MASK_TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256|macro|SL_SEC_MASK_TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256
DECL|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256|macro|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256
DECL|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA|macro|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
DECL|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256|macro|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256
DECL|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA|macro|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
DECL|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384|macro|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384
DECL|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256|macro|SL_SEC_MASK_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256
DECL|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256|macro|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256
DECL|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256|macro|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
DECL|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA|macro|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
DECL|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384|macro|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
DECL|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256|macro|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256
DECL|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_RC4_128_SHA|macro|SL_SEC_MASK_TLS_ECDHE_RSA_WITH_RC4_128_SHA
DECL|SL_SEC_MASK_TLS_RSA_WITH_AES_128_CBC_SHA256|macro|SL_SEC_MASK_TLS_RSA_WITH_AES_128_CBC_SHA256
DECL|SL_SEC_MASK_TLS_RSA_WITH_AES_128_GCM_SHA256|macro|SL_SEC_MASK_TLS_RSA_WITH_AES_128_GCM_SHA256
DECL|SL_SEC_MASK_TLS_RSA_WITH_AES_256_CBC_SHA256|macro|SL_SEC_MASK_TLS_RSA_WITH_AES_256_CBC_SHA256
DECL|SL_SEC_MASK_TLS_RSA_WITH_AES_256_CBC_SHA|macro|SL_SEC_MASK_TLS_RSA_WITH_AES_256_CBC_SHA
DECL|SL_SEC_MASK_TLS_RSA_WITH_AES_256_GCM_SHA384|macro|SL_SEC_MASK_TLS_RSA_WITH_AES_256_GCM_SHA384
DECL|SL_SEC_SOCKET|macro|SL_SEC_SOCKET
DECL|SL_SOCKET_ASYNC_EVENT_SSL_NOTIFICATION_WRONG_ROOT_CA|macro|SL_SOCKET_ASYNC_EVENT_SSL_NOTIFICATION_WRONG_ROOT_CA
DECL|SL_SOCKET_ASYNC_EVENT|macro|SL_SOCKET_ASYNC_EVENT
DECL|SL_SOCKET_PAYLOAD_TYPE_MASK|macro|SL_SOCKET_PAYLOAD_TYPE_MASK
DECL|SL_SOCKET_PAYLOAD_TYPE_RAW_TRANCEIVER|macro|SL_SOCKET_PAYLOAD_TYPE_RAW_TRANCEIVER
DECL|SL_SOCKET_TRIGGER_EVENT_SELECT|macro|SL_SOCKET_TRIGGER_EVENT_SELECT
DECL|SL_SOCKET_TX_FAILED_EVENT|macro|SL_SOCKET_TX_FAILED_EVENT
DECL|SL_SOCK_DGRAM|macro|SL_SOCK_DGRAM
DECL|SL_SOCK_RAW|macro|SL_SOCK_RAW
DECL|SL_SOCK_STREAM|macro|SL_SOCK_STREAM
DECL|SL_SOL_PHY_OPT|macro|SL_SOL_PHY_OPT
DECL|SL_SOL_SOCKET|macro|SL_SOL_SOCKET
DECL|SL_SO_CHANGE_CHANNEL|macro|SL_SO_CHANGE_CHANNEL
DECL|SL_SO_KEEPALIVETIME|macro|SL_SO_KEEPALIVETIME
DECL|SL_SO_KEEPALIVE|macro|SL_SO_KEEPALIVE
DECL|SL_SO_LINGER|macro|SL_SO_LINGER
DECL|SL_SO_NONBLOCKING|macro|SL_SO_NONBLOCKING
DECL|SL_SO_PHY_ALLOW_ACKS|macro|SL_SO_PHY_ALLOW_ACKS
DECL|SL_SO_PHY_NUM_FRAMES_TO_TX|macro|SL_SO_PHY_NUM_FRAMES_TO_TX
DECL|SL_SO_PHY_PREAMBLE|macro|SL_SO_PHY_PREAMBLE
DECL|SL_SO_PHY_RATE|macro|SL_SO_PHY_RATE
DECL|SL_SO_PHY_TX_INHIBIT_THRESHOLD|macro|SL_SO_PHY_TX_INHIBIT_THRESHOLD
DECL|SL_SO_PHY_TX_POWER|macro|SL_SO_PHY_TX_POWER
DECL|SL_SO_PHY_TX_TIMEOUT|macro|SL_SO_PHY_TX_TIMEOUT
DECL|SL_SO_RCVBUF|macro|SL_SO_RCVBUF
DECL|SL_SO_RCVTIMEO|macro|SL_SO_RCVTIMEO
DECL|SL_SO_RX_NO_IP_BOUNDARY|macro|SL_SO_RX_NO_IP_BOUNDARY
DECL|SL_SO_SECMETHOD|macro|SL_SO_SECMETHOD
DECL|SL_SO_SECURE_ALPN|macro|SL_SO_SECURE_ALPN
DECL|SL_SO_SECURE_DISABLE_CERTIFICATE_STORE|macro|SL_SO_SECURE_DISABLE_CERTIFICATE_STORE
DECL|SL_SO_SECURE_DOMAIN_NAME_VERIFICATION|macro|SL_SO_SECURE_DOMAIN_NAME_VERIFICATION
DECL|SL_SO_SECURE_EXT_CLIENT_CHLNG_RESP|macro|SL_SO_SECURE_EXT_CLIENT_CHLNG_RESP
DECL|SL_SO_SECURE_FILES_CA_FILE_NAME|macro|SL_SO_SECURE_FILES_CA_FILE_NAME
DECL|SL_SO_SECURE_FILES_CERTIFICATE_FILE_NAME|macro|SL_SO_SECURE_FILES_CERTIFICATE_FILE_NAME
DECL|SL_SO_SECURE_FILES_PEER_CERT_OR_DH_KEY_FILE_NAME|macro|SL_SO_SECURE_FILES_PEER_CERT_OR_DH_KEY_FILE_NAME
DECL|SL_SO_SECURE_FILES_PRIVATE_KEY_FILE_NAME|macro|SL_SO_SECURE_FILES_PRIVATE_KEY_FILE_NAME
DECL|SL_SO_SECURE_FILES|macro|SL_SO_SECURE_FILES
DECL|SL_SO_SECURE_MASK|macro|SL_SO_SECURE_MASK
DECL|SL_SO_SEC_METHOD_DLSV1|macro|SL_SO_SEC_METHOD_DLSV1
DECL|SL_SO_SEC_METHOD_SSLV3|macro|SL_SO_SEC_METHOD_SSLV3
DECL|SL_SO_SEC_METHOD_SSLv3_TLSV1_2|macro|SL_SO_SEC_METHOD_SSLv3_TLSV1_2
DECL|SL_SO_SEC_METHOD_TLSV1_1|macro|SL_SO_SEC_METHOD_TLSV1_1
DECL|SL_SO_SEC_METHOD_TLSV1_2|macro|SL_SO_SEC_METHOD_TLSV1_2
DECL|SL_SO_SEC_METHOD_TLSV1|macro|SL_SO_SEC_METHOD_TLSV1
DECL|SL_SO_SSL_CONNECTION_PARAMS|macro|SL_SO_SSL_CONNECTION_PARAMS
DECL|SL_SO_STARTTLS|macro|SL_SO_STARTTLS
DECL|SL_SSL_ACCEPT|macro|SL_SSL_ACCEPT
DECL|SL_SSL_NOTIFICATION_CONNECTED_SECURED|macro|SL_SSL_NOTIFICATION_CONNECTED_SECURED
DECL|SL_SSL_NOTIFICATION_HANDSHAKE_FAILED|macro|SL_SSL_NOTIFICATION_HANDSHAKE_FAILED
DECL|SL_SSL_NOTIFICATION_WRONG_ROOT_CA|macro|SL_SSL_NOTIFICATION_WRONG_ROOT_CA
DECL|SL_TX_INHIBIT_THRESHOLD_DEFAULT|enumerator|SL_TX_INHIBIT_THRESHOLD_DEFAULT = 3,
DECL|SL_TX_INHIBIT_THRESHOLD_HIGH|enumerator|SL_TX_INHIBIT_THRESHOLD_HIGH = 5,
DECL|SL_TX_INHIBIT_THRESHOLD_LOW|enumerator|SL_TX_INHIBIT_THRESHOLD_LOW = 2,
DECL|SL_TX_INHIBIT_THRESHOLD_MAX|enumerator|SL_TX_INHIBIT_THRESHOLD_MAX = 6
DECL|SL_TX_INHIBIT_THRESHOLD_MED|enumerator|SL_TX_INHIBIT_THRESHOLD_MED = 4,
DECL|SL_TX_INHIBIT_THRESHOLD_MIN|enumerator|SL_TX_INHIBIT_THRESHOLD_MIN = 1,
DECL|Sd|member|_u8 Sd;
DECL|Sd|member|_u8 Sd;
DECL|SecureALPNChosenProtocol|member|_u32 SecureALPNChosenProtocol; /* bit indicate one of the protocol defined above
DECL|SecureALPN|member|_u32 SecureALPN;
DECL|SecureCipherSuit|member|_u32 SecureCipherSuit; /* what Cipher Index was decided in the handshake */
DECL|SecureFiles|member|_u8 SecureFiles[4];
DECL|SecureIsPeerValidated|member|_u32 SecureIsPeerValidated; /* was the other peer verified */
DECL|SecureMask|member|_u32 SecureMask;
DECL|SecureMethod|member|_u8 SecureMethod;
DECL|SecurePeerCertinfo|member|SlSockSSLCertInfo_t SecurePeerCertinfo;
DECL|SecureVersion|member|_u32 SecureVersion; /* what version of SSL decided in the handshake */
DECL|SlFdSet_t|struct|typedef struct SlFdSet_t /* The select socket array manager */
DECL|SlFdSet_t|typedef|} SlFdSet_t;
DECL|SlIn6Addr_t|struct|typedef struct SlIn6Addr_t
DECL|SlIn6Addr_t|typedef|}SlIn6Addr_t;
DECL|SlInAddr_t|struct|typedef struct SlInAddr_t
DECL|SlInAddr_t|typedef|}SlInAddr_t;
DECL|SlSockAddrIn6_t|struct|typedef struct SlSockAddrIn6_t
DECL|SlSockAddrIn6_t|typedef|}SlSockAddrIn6_t;
DECL|SlSockAddrIn_t|struct|typedef struct SlSockAddrIn_t
DECL|SlSockAddrIn_t|typedef|}SlSockAddrIn_t;
DECL|SlSockAddr_t|struct|typedef struct SlSockAddr_t
DECL|SlSockAddr_t|typedef|}SlSockAddr_t;
DECL|SlSockEventData_u|typedef|} SlSockEventData_u;
DECL|SlSockEvent_t|typedef|} SlSockEvent_t;
DECL|SlSockIpMreq_t|typedef|}SlSockIpMreq_t;
DECL|SlSockIpV6Mreq_t|typedef|}SlSockIpV6Mreq_t;
DECL|SlSockKeepalive_t|typedef|}SlSockKeepalive_t;
DECL|SlSockNonblocking_t|typedef|}SlSockNonblocking_t;
DECL|SlSockReuseaddr_t|typedef|}SlSockReuseaddr_t;
DECL|SlSockRxNoIpBoundary_t|typedef|} SlSockRxNoIpBoundary_t;
DECL|SlSockSSLCertInfo_t|typedef|} SlSockSSLCertInfo_t;
DECL|SlSockSSLConnectionParams_t|typedef|} SlSockSSLConnectionParams_t;
DECL|SlSockSecureALPN_t|typedef|} SlSockSecureALPN_t;
DECL|SlSockSecureFiles_t|typedef|}SlSockSecureFiles_t;
DECL|SlSockSecureMask_t|typedef|} SlSockSecureMask_t;
DECL|SlSockSecureMethod_t|typedef|} SlSockSecureMethod_t;
DECL|SlSockSecureSocketFilesIndex_e|typedef|}SlSockSecureSocketFilesIndex_e;
DECL|SlSockTriggerEvent_t|typedef|} SlSockTriggerEvent_t;
DECL|SlSockTxFailEventData_t|typedef|} SlSockTxFailEventData_t;
DECL|SlSockWinsize_t|typedef|}SlSockWinsize_t;
DECL|SlSocketAsyncEvent_t|typedef|} SlSocketAsyncEvent_t;
DECL|SlSocklen_t|typedef|typedef _u16 SlSocklen_t;
DECL|SlSocklinger_t|typedef|}SlSocklinger_t;
DECL|SlSuseconds_t|typedef|typedef _i32 SlSuseconds_t;
DECL|SlTime_t|typedef|typedef _i32 SlTime_t;
DECL|SlTimeval_t|struct|typedef struct SlTimeval_t
DECL|SlTimeval_t|typedef|}SlTimeval_t;
DECL|SlTransceiverRxOverHead_t|typedef|}SlTransceiverRxOverHead_t;
DECL|SlTxInhibitThreshold_e|typedef|} SlTxInhibitThreshold_e;
DECL|SockAsyncData|member|SlSocketAsyncEvent_t SockAsyncData;
DECL|SockTxFailData|member|SlSockTxFailEventData_t SockTxFailData;
DECL|SocketAsyncEvent|member|SlSockEventData_u SocketAsyncEvent;
DECL|Status|member|_i16 Status;
DECL|SubjectNameLen|member|_i8 SubjectNameLen;
DECL|SubjectNameXoredSha1|member|_u16 SubjectNameXoredSha1;
DECL|SubjectName|member|_i8 SubjectName[SL_MAX_ISSUER_AND_SUBJECT_NAME_LEN];
DECL|Timestamp|member|_u32 Timestamp; /* Timestamp in microseconds, */
DECL|ToDate|member|_i8 ToDate[8];
DECL|Type|member|_u8 Type;
DECL|Val|member|_i16 Val;
DECL|WinSize|member|_u32 WinSize; /* receive window size for tcp sockets */
DECL|_S6_u32|member|_u32 _S6_u32[4];
DECL|_S6_u8|member|_u8 _S6_u8[16];
DECL|_S6_un|member|} _S6_un;
DECL|__SL_SOCKET_H__|macro|__SL_SOCKET_H__
DECL|fd_array|member|_u32 fd_array[(SL_FD_SETSIZE + (_u8)31)/(_u8)32]; /* Bit map of SOCKET Descriptors */
DECL|imr_interface|member|SlInAddr_t imr_interface; /* The interface to use for this group */
DECL|imr_multiaddr|member|SlInAddr_t imr_multiaddr; /* The IPv4 multicast address to join */
DECL|ipv6mr_interface|member|_u32 ipv6mr_interface; /*should be 0 to choose the default multicast interface*/
DECL|ipv6mr_multiaddr|member|SlIn6Addr_t ipv6mr_multiaddr; /* IPv6 multicast address of group */
DECL|l_linger|member|_u32 l_linger; /* linger time in seconds; default = 0;*/
DECL|l_onoff|member|_u32 l_onoff; /* 0 = disabled; 1 = enabled; default = 0;*/
DECL|pExtraInfo|member|_i8 pExtraInfo[128];
DECL|s_addr|member|_u32 s_addr; /* Internet address 32 bits */
DECL|sa_data|member|_u8 sa_data[14]; /* Protocol- specific address information*/
DECL|sa_family|member|_u16 sa_family; /* Address family (e.g. , AF_INET) */
DECL|sin6_addr|member|SlIn6Addr_t sin6_addr; /* IPv6 address. */
DECL|sin6_family|member|_u16 sin6_family; /* AF_INET6 || AF_INET6_EUI_48*/
DECL|sin6_flowinfo|member|_u32 sin6_flowinfo; /* IPv6 flow information. */
DECL|sin6_port|member|_u16 sin6_port; /* Transport layer port. */
DECL|sin6_scope_id|member|_u32 sin6_scope_id; /* set of interfaces for a scope. */
DECL|sin_addr|member|SlInAddr_t sin_addr; /* Internet address (32 bits). */
DECL|sin_family|member|_u16 sin_family; /* Internet Protocol (AF_INET). */
DECL|sin_port|member|_u16 sin_port; /* Address port (16 bits). */
DECL|sin_zero|member|_i8 sin_zero[8]; /* Not used. */
DECL|sl_Ntohl|macro|sl_Ntohl
DECL|sl_Ntohs|macro|sl_Ntohs
DECL|tv_sec|member|SlTime_t tv_sec; /* Seconds */
DECL|tv_usec|member|SlSuseconds_t tv_usec; /* Microseconds */
