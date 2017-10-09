DECL|HOSTNAME_MAX_SIZE|macro|HOSTNAME_MAX_SIZE
DECL|PING_ERR_DEST_UNREACH|macro|PING_ERR_DEST_UNREACH
DECL|PING_ERR_SUCCESS|macro|PING_ERR_SUCCESS
DECL|PING_ERR_TIMEOUT|macro|PING_ERR_TIMEOUT
DECL|SOCKET_CMD_ACCEPT|macro|SOCKET_CMD_ACCEPT
DECL|SOCKET_CMD_BIND|macro|SOCKET_CMD_BIND
DECL|SOCKET_CMD_CLOSE|macro|SOCKET_CMD_CLOSE
DECL|SOCKET_CMD_CONNECT|macro|SOCKET_CMD_CONNECT
DECL|SOCKET_CMD_DNS_RESOLVE|macro|SOCKET_CMD_DNS_RESOLVE
DECL|SOCKET_CMD_INVALID|macro|SOCKET_CMD_INVALID
DECL|SOCKET_CMD_LISTEN|macro|SOCKET_CMD_LISTEN
DECL|SOCKET_CMD_PING|macro|SOCKET_CMD_PING
DECL|SOCKET_CMD_RECVFROM|macro|SOCKET_CMD_RECVFROM
DECL|SOCKET_CMD_RECV|macro|SOCKET_CMD_RECV
DECL|SOCKET_CMD_SENDTO|macro|SOCKET_CMD_SENDTO
DECL|SOCKET_CMD_SEND|macro|SOCKET_CMD_SEND
DECL|SOCKET_CMD_SET_SOCKET_OPTION|macro|SOCKET_CMD_SET_SOCKET_OPTION
DECL|SOCKET_CMD_SSL_BIND|macro|SOCKET_CMD_SSL_BIND
DECL|SOCKET_CMD_SSL_CLOSE|macro|SOCKET_CMD_SSL_CLOSE
DECL|SOCKET_CMD_SSL_CONNECT|macro|SOCKET_CMD_SSL_CONNECT
DECL|SOCKET_CMD_SSL_CREATE|macro|SOCKET_CMD_SSL_CREATE
DECL|SOCKET_CMD_SSL_EXP_CHECK|macro|SOCKET_CMD_SSL_EXP_CHECK
DECL|SOCKET_CMD_SSL_RECV|macro|SOCKET_CMD_SSL_RECV
DECL|SOCKET_CMD_SSL_SEND|macro|SOCKET_CMD_SSL_SEND
DECL|SOCKET_CMD_SSL_SET_CS_LIST|macro|SOCKET_CMD_SSL_SET_CS_LIST
DECL|SOCKET_CMD_SSL_SET_SOCK_OPT|macro|SOCKET_CMD_SSL_SET_SOCK_OPT
DECL|SOCKET|typedef|typedef sint8 SOCKET;
DECL|SSL_MAX_OPT_LEN|macro|SSL_MAX_OPT_LEN
DECL|__M2M_SOCKET_HOST_IF_H__|macro|__M2M_SOCKET_HOST_IF_H__
DECL|__PAD24__|member|uint8 __PAD24__[3];
DECL|__PAD24__|member|uint8 __PAD24__[3];
DECL|__PAD8__|member|uint8 __PAD8__;
DECL|acHostName|member|char acHostName[HOSTNAME_MAX_SIZE];
DECL|au8OptVal|member|uint8 au8OptVal[SSL_MAX_OPT_LEN];
DECL|s16RecvStatus|member|sint16 s16RecvStatus;
DECL|s16SentBytes|member|sint16 s16SentBytes;
DECL|s8Error|member|sint8 s8Error;
DECL|s8Status|member|sint8 s8Status;
DECL|s8Status|member|sint8 s8Status;
DECL|sConnectedSock|member|SOCKET sConnectedSock;
DECL|sListenSock|member|SOCKET sListenSock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sock|member|SOCKET sock;
DECL|sslSock|member|SOCKET sslSock;
DECL|strAddr|member|tstrSockAddr strAddr;
DECL|strAddr|member|tstrSockAddr strAddr;
DECL|strAddr|member|tstrSockAddr strAddr;
DECL|strAddr|member|tstrSockAddr strAddr;
DECL|strRemoteAddr|member|tstrSockAddr strRemoteAddr;
DECL|tstrAcceptReply|typedef|}tstrAcceptReply;
DECL|tstrBindCmd|typedef|}tstrBindCmd;
DECL|tstrBindReply|typedef|}tstrBindReply;
DECL|tstrConnectCmd|typedef|}tstrConnectCmd;
DECL|tstrConnectReply|typedef|}tstrConnectReply;
DECL|tstrDnsReply|typedef|}tstrDnsReply;
DECL|tstrListenCmd|typedef|}tstrListenCmd;
DECL|tstrListenReply|typedef|}tstrListenReply;
DECL|tstrPingCmd|typedef|}tstrPingCmd;
DECL|tstrPingReply|typedef|}tstrPingReply;
DECL|tstrRecvCmd|typedef|}tstrRecvCmd;
DECL|tstrRecvReply|typedef|}tstrRecvReply;
DECL|tstrSSLSetSockOptCmd|typedef|}tstrSSLSetSockOptCmd;
DECL|tstrSSLSocketCreateCmd|typedef|}tstrSSLSocketCreateCmd;
DECL|tstrSendCmd|typedef|}tstrSendCmd;
DECL|tstrSendReply|typedef|}tstrSendReply;
DECL|tstrSetSocketOptCmd|typedef|}tstrSetSocketOptCmd;
DECL|tstrSockAddr|typedef|}tstrSockAddr;
DECL|tstrSslCertExpSettings|typedef|}tstrSslCertExpSettings;
DECL|tstrUIPSockAddr|typedef|typedef tstrSockAddr tstrUIPSockAddr;
DECL|u16AppDataOffset|member|uint16 u16AppDataOffset;
DECL|u16AppDataOffset|member|uint16 u16AppDataOffset;
DECL|u16DataOffset|member|uint16 u16DataOffset;
DECL|u16DataSize|member|uint16 u16DataSize;
DECL|u16Fail|member|uint16 u16Fail;
DECL|u16Family|member|uint16 u16Family;
DECL|u16PingCount|member|uint16 u16PingCount;
DECL|u16Port|member|uint16 u16Port;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16Success|member|uint16 u16Success;
DECL|u16Void|member|uint16 u16Void;
DECL|u16Void|member|uint16 u16Void;
DECL|u32CertExpValidationOpt|member|uint32 u32CertExpValidationOpt;
DECL|u32CmdPrivate|member|uint32 u32CmdPrivate;
DECL|u32CmdPrivate|member|uint32 u32CmdPrivate;
DECL|u32DestIPAddr|member|uint32 u32DestIPAddr;
DECL|u32HostIP|member|uint32 u32HostIP;
DECL|u32IPAddr|member|uint32 u32IPAddr;
DECL|u32IPAddr|member|uint32 u32IPAddr;
DECL|u32OptLen|member|uint32 u32OptLen;
DECL|u32OptionValue|member|uint32 u32OptionValue;
DECL|u32RTT|member|uint32 u32RTT;
DECL|u32Timeoutmsec|member|uint32 u32Timeoutmsec;
DECL|u8BackLog|member|uint8 u8BackLog;
DECL|u8ErrorCode|member|uint8 u8ErrorCode;
DECL|u8Option|member|uint8 u8Option;
DECL|u8Option|member|uint8 u8Option;
DECL|u8SslFlags|member|uint8 u8SslFlags;
DECL|u8TTL|member|uint8 u8TTL;
DECL|u8Void|member|uint8 u8Void;
DECL|u8Void|member|uint8 u8Void;
DECL|u8Void|member|uint8 u8Void;
DECL|u8Void|member|uint8 u8Void;
DECL|u8Void|member|uint8 u8Void;
