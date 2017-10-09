DECL|ETHERNET_HEADER_LENGTH|macro|ETHERNET_HEADER_LENGTH
DECL|ETHERNET_HEADER_OFFSET|macro|ETHERNET_HEADER_OFFSET
DECL|IP_PACKET_OFFSET|macro|IP_PACKET_OFFSET
DECL|SOCKET_REQUEST|macro|SOCKET_REQUEST
DECL|SSL_FLAGS_2_RESERVD|macro|SSL_FLAGS_2_RESERVD
DECL|SSL_FLAGS_3_RESERVD|macro|SSL_FLAGS_3_RESERVD
DECL|SSL_FLAGS_ACTIVE|macro|SSL_FLAGS_ACTIVE
DECL|SSL_FLAGS_BYPASS_X509|macro|SSL_FLAGS_BYPASS_X509
DECL|SSL_FLAGS_CACHE_SESSION|macro|SSL_FLAGS_CACHE_SESSION
DECL|SSL_FLAGS_CHECK_SNI|macro|SSL_FLAGS_CHECK_SNI
DECL|SSL_FLAGS_NO_TX_COPY|macro|SSL_FLAGS_NO_TX_COPY
DECL|SSL_TX_PACKET_OFFSET|macro|SSL_TX_PACKET_OFFSET
DECL|Socket_ReadSocketData|function|NMI_API void Socket_ReadSocketData(SOCKET sock, tstrSocketRecvMsg *pstrRecv,uint8 u8SocketMsg, uint32 u32StartAddress,uint16 u16ReadCount)
DECL|TCP_IP_HEADER_LENGTH|macro|TCP_IP_HEADER_LENGTH
DECL|TCP_TX_PACKET_OFFSET|macro|TCP_TX_PACKET_OFFSET
DECL|TLS_RECORD_HEADER_LENGTH|macro|TLS_RECORD_HEADER_LENGTH
DECL|UDP_IP_HEADER_LENGTH|macro|UDP_IP_HEADER_LENGTH
DECL|UDP_TX_PACKET_OFFSET|macro|UDP_TX_PACKET_OFFSET
DECL|accept|function|sint8 accept(SOCKET sock, struct sockaddr *addr, uint8 *addrlen)
DECL|bIsRecvPending|member|uint8 bIsRecvPending;
DECL|bIsUsed|member|uint8 bIsUsed;
DECL|bind|function|sint8 bind(SOCKET sock, struct sockaddr *pstrAddr, uint8 u8AddrLen)
DECL|close|function|sint8 close(SOCKET sock)
DECL|connect|function|sint8 connect(SOCKET sock, struct sockaddr *pstrAddr, uint8 u8AddrLen)
DECL|gastrSockets|variable|gastrSockets
DECL|gbSocketInit|variable|gbSocketInit
DECL|gethostbyname|function|sint8 gethostbyname(uint8 * pcHostName)
DECL|getsockopt|function|sint8 getsockopt(SOCKET sock, uint8 u8Level, uint8 u8OptName, const void *pvOptValue, uint8* pu8OptLen)
DECL|gfpPingCb|variable|gfpPingCb
DECL|gpfAppResolveCb|variable|gpfAppResolveCb
DECL|gpfAppSocketCb|variable|gpfAppSocketCb
DECL|gsockerrno|variable|gsockerrno
DECL|gu16BufferSize|variable|gu16BufferSize
DECL|gu16SessionID|variable|gu16SessionID
DECL|gu8OpCode|variable|gu8OpCode
DECL|listen|function|sint8 listen(SOCKET sock, uint8 backlog)
DECL|m2m_ip_cb|function|static void m2m_ip_cb(uint8 u8OpCode, uint16 u16BufferSize,uint32 u32Address)
DECL|m2m_ping_req|function|sint8 m2m_ping_req(uint32 u32DstIP, uint8 u8TTL, tpfPingCb fpPingCb)
DECL|nmi_inet_addr|function|uint32 nmi_inet_addr(char *pcIpAddr)
DECL|pu8UserBuffer|member|uint8 *pu8UserBuffer;
DECL|recvfrom|function|sint16 recvfrom(SOCKET sock, void *pvRecvBuf, uint16 u16BufLen, uint32 u32Timeoutmsec)
DECL|recv|function|sint16 recv(SOCKET sock, void *pvRecvBuf, uint16 u16BufLen, uint32 u32Timeoutmsec)
DECL|registerSocketCallback|function|void registerSocketCallback(tpfAppSocketCb pfAppSocketCb, tpfAppResolveCb pfAppResolveCb)
DECL|sendto|function|sint16 sendto(SOCKET sock, void *pvSendBuffer, uint16 u16SendLength, uint16 flags, struct sockaddr *pstrDestAddr, uint8 u8AddrLen)
DECL|send|function|sint16 send(SOCKET sock, void *pvSendBuffer, uint16 u16SendLength, uint16 flags)
DECL|setsockopt|function|sint8 setsockopt(SOCKET sock, uint8 u8Level, uint8 option_name, const void *option_value, uint16 u16OptionLen)
DECL|socketDeinit|function|void socketDeinit(void)
DECL|socketInit|function|void socketInit(void)
DECL|socket|function|SOCKET socket(uint16 u16Domain, uint8 u8Type, uint8 u8Flags)
DECL|sock|member|SOCKET sock;
DECL|sslEnableCertExpirationCheck|function|sint8 sslEnableCertExpirationCheck(tenuSslCertExpSettings enuValidationSetting)
DECL|sslSetSockOpt|function|static sint8 sslSetSockOpt(SOCKET sock, uint8 u8Opt, const void *pvOptVal, uint16 u16OptLen)
DECL|tstrCloseCmd|typedef|}tstrCloseCmd;
DECL|tstrSocket|typedef|}tstrSocket;
DECL|u16DataOffset|member|uint16 u16DataOffset;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16SessionID|member|uint16 u16SessionID;
DECL|u16UserBufferSize|member|uint16 u16UserBufferSize;
DECL|u8Dummy|member|uint8 u8Dummy;
DECL|u8SSLFlags|member|uint8 u8SSLFlags;
