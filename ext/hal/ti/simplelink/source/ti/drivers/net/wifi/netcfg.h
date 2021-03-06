DECL|DhcpServer|member|_u32 DhcpServer;
DECL|DhcpState|member|_u8 DhcpState;
DECL|DnsSecondServerAddr|member|_u32 DnsSecondServerAddr;
DECL|Dns|member|_u32 Dns[2];
DECL|Gateway|member|_u32 Gateway;
DECL|IpDnsServer|member|_u32 IpDnsServer;
DECL|IpDnsServer|member|_u32 IpDnsServer[4];
DECL|IpGateway|member|_u32 IpGateway;
DECL|IpMask|member|_u32 IpMask;
DECL|IpV6Flags|member|_u32 IpV6Flags; /* bit 0: Indicate if the address is valid for use in the network (IPv6 DAD completed) . If not, try again later or set a different address. 1=Valid. Relevant for sl_NetCfgGet only. */
DECL|Ip|member|_u32 Ip;
DECL|Ip|member|_u32 Ip;
DECL|Ip|member|_u32 Ip;
DECL|Ip|member|_u32 Ip[4];
DECL|LeaseTime|member|_u32 LeaseTime;
DECL|MAX_SETTINGS|enumerator|MAX_SETTINGS = 0xFF
DECL|MAX_SL_NETCFG_DHCP_OPT|enumerator|MAX_SL_NETCFG_DHCP_OPT = 0xFF
DECL|MacAddr|member|_u8 MacAddr[6];
DECL|Mask|member|_u32 Mask;
DECL|NET_CFG_STA_INFO_STATUS_DHCP_ADDR|macro|NET_CFG_STA_INFO_STATUS_DHCP_ADDR
DECL|Name|member|_u8 Name[32];
DECL|Reserved|member|_u8 Reserved[3];
DECL|SL_IPV4_BYTE|macro|SL_IPV4_BYTE
DECL|SL_IPV4_VAL|macro|SL_IPV4_VAL
DECL|SL_IPV6_ADDR_LEN|macro|SL_IPV6_ADDR_LEN
DECL|SL_IS_IPV6_ADDR_VALID|macro|SL_IS_IPV6_ADDR_VALID
DECL|SL_MAC_ADDR_LEN|macro|SL_MAC_ADDR_LEN
DECL|SL_NETCFG_ADDR_DHCP_LLA|macro|SL_NETCFG_ADDR_DHCP_LLA
DECL|SL_NETCFG_ADDR_DHCP|macro|SL_NETCFG_ADDR_DHCP
DECL|SL_NETCFG_ADDR_DISABLE_FAST_RENEW|macro|SL_NETCFG_ADDR_DISABLE_FAST_RENEW
DECL|SL_NETCFG_ADDR_ENABLE_FAST_RENEW|macro|SL_NETCFG_ADDR_ENABLE_FAST_RENEW
DECL|SL_NETCFG_ADDR_FAST_RENEW_MODE_NO_WAIT_ACK|macro|SL_NETCFG_ADDR_FAST_RENEW_MODE_NO_WAIT_ACK
DECL|SL_NETCFG_ADDR_FAST_RENEW_MODE_WAIT_ACK|macro|SL_NETCFG_ADDR_FAST_RENEW_MODE_WAIT_ACK
DECL|SL_NETCFG_ADDR_RELEASE_IP_OFF|macro|SL_NETCFG_ADDR_RELEASE_IP_OFF
DECL|SL_NETCFG_ADDR_RELEASE_IP_SET|macro|SL_NETCFG_ADDR_RELEASE_IP_SET
DECL|SL_NETCFG_ADDR_RELEASE_IP|macro|SL_NETCFG_ADDR_RELEASE_IP
DECL|SL_NETCFG_ADDR_STATEFUL|macro|SL_NETCFG_ADDR_STATEFUL
DECL|SL_NETCFG_ADDR_STATELESS|macro|SL_NETCFG_ADDR_STATELESS
DECL|SL_NETCFG_ADDR_STATIC|macro|SL_NETCFG_ADDR_STATIC
DECL|SL_NETCFG_AP_STATIONS_INFO_LIST|enumerator|SL_NETCFG_AP_STATIONS_INFO_LIST = 4,
DECL|SL_NETCFG_AP_STATIONS_NUM_CONNECTED|enumerator|SL_NETCFG_AP_STATIONS_NUM_CONNECTED = 3,
DECL|SL_NETCFG_AP_STATION_DISCONNECT|enumerator|SL_NETCFG_AP_STATION_DISCONNECT = 5,
DECL|SL_NETCFG_DHCP_CLIENT_BOUND|enumerator|SL_NETCFG_DHCP_CLIENT_BOUND,
DECL|SL_NETCFG_DHCP_CLIENT_DISABLED|enumerator|SL_NETCFG_DHCP_CLIENT_DISABLED,
DECL|SL_NETCFG_DHCP_CLIENT_ENABLED|enumerator|SL_NETCFG_DHCP_CLIENT_ENABLED,
DECL|SL_NETCFG_DHCP_CLIENT_REBIND|enumerator|SL_NETCFG_DHCP_CLIENT_REBIND
DECL|SL_NETCFG_DHCP_CLIENT_RENEW|enumerator|SL_NETCFG_DHCP_CLIENT_RENEW,
DECL|SL_NETCFG_DHCP_CLIENT_UNKNOWN|enumerator|SL_NETCFG_DHCP_CLIENT_UNKNOWN = 0,
DECL|SL_NETCFG_DHCP_OPT_DISABLE_LLA|enumerator|SL_NETCFG_DHCP_OPT_DISABLE_LLA = 0x2, /* 1=LLA disabled, 0=LLA enabled. */
DECL|SL_NETCFG_DHCP_OPT_RELEASE_IP_BEFORE_DISCONNECT|enumerator|SL_NETCFG_DHCP_OPT_RELEASE_IP_BEFORE_DISCONNECT = 0x4, /* 1=DHCP release enabled, 0=DHCP release disabled */
DECL|SL_NETCFG_IF_DISABLE_FAST_RENEW|macro|SL_NETCFG_IF_DISABLE_FAST_RENEW
DECL|SL_NETCFG_IF_DISABLE_IPV4_DHCP|macro|SL_NETCFG_IF_DISABLE_IPV4_DHCP
DECL|SL_NETCFG_IF_DISABLE_IPV4_LLA|macro|SL_NETCFG_IF_DISABLE_IPV4_LLA
DECL|SL_NETCFG_IF_ENABLE_DHCP_RELEASE|macro|SL_NETCFG_IF_ENABLE_DHCP_RELEASE
DECL|SL_NETCFG_IF_IPV6_GLOBAL_STATEFUL|macro|SL_NETCFG_IF_IPV6_GLOBAL_STATEFUL
DECL|SL_NETCFG_IF_IPV6_GLOBAL_STATELESS|macro|SL_NETCFG_IF_IPV6_GLOBAL_STATELESS
DECL|SL_NETCFG_IF_IPV6_GLOBAL_STATIC|macro|SL_NETCFG_IF_IPV6_GLOBAL_STATIC
DECL|SL_NETCFG_IF_IPV6_LOCAL_STATEFUL|macro|SL_NETCFG_IF_IPV6_LOCAL_STATEFUL
DECL|SL_NETCFG_IF_IPV6_LOCAL_STATELESS|macro|SL_NETCFG_IF_IPV6_LOCAL_STATELESS
DECL|SL_NETCFG_IF_IPV6_LOCAL_STATIC|macro|SL_NETCFG_IF_IPV6_LOCAL_STATIC
DECL|SL_NETCFG_IF_IPV6_STA_GLOBAL|macro|SL_NETCFG_IF_IPV6_STA_GLOBAL
DECL|SL_NETCFG_IF_IPV6_STA_LOCAL|macro|SL_NETCFG_IF_IPV6_STA_LOCAL
DECL|SL_NETCFG_IF_STATE|macro|SL_NETCFG_IF_STATE
DECL|SL_NETCFG_IF|enumerator|SL_NETCFG_IF = 6,
DECL|SL_NETCFG_IPV4_AP_ADDR_MODE|enumerator|SL_NETCFG_IPV4_AP_ADDR_MODE = 8,
DECL|SL_NETCFG_IPV4_DHCP_CLIENT|enumerator|SL_NETCFG_IPV4_DHCP_CLIENT = 11,
DECL|SL_NETCFG_IPV4_DNS_CLIENT|enumerator|SL_NETCFG_IPV4_DNS_CLIENT = 12,
DECL|SL_NETCFG_IPV4_STA_ADDR_MODE|enumerator|SL_NETCFG_IPV4_STA_ADDR_MODE = 7,
DECL|SL_NETCFG_IPV6_ADDR_GLOBAL|enumerator|SL_NETCFG_IPV6_ADDR_GLOBAL = 10,
DECL|SL_NETCFG_IPV6_ADDR_LOCAL|enumerator|SL_NETCFG_IPV6_ADDR_LOCAL = 9,
DECL|SL_NETCFG_MAC_ADDRESS_GET|enumerator|SL_NETCFG_MAC_ADDRESS_GET = 2,
DECL|SL_NETCFG_MAC_ADDRESS_SET|enumerator|SL_NETCFG_MAC_ADDRESS_SET = 1,
DECL|SlNetCfgDhcpOption_e|typedef|} SlNetCfgDhcpOption_e;
DECL|SlNetCfgIpV4Args_t|typedef|}SlNetCfgIpV4Args_t;
DECL|SlNetCfgIpV4DnsClientArgs_t|typedef|}SlNetCfgIpV4DnsClientArgs_t;
DECL|SlNetCfgIpV6Args_t|typedef|}SlNetCfgIpV6Args_t;
DECL|SlNetCfgIpv4DhcpClientState_e|typedef|}SlNetCfgIpv4DhcpClientState_e;
DECL|SlNetCfgIpv4DhcpClient_t|typedef|} SlNetCfgIpv4DhcpClient_t;
DECL|SlNetCfgStaInfo_t|typedef|} SlNetCfgStaInfo_t;
DECL|SlNetCfg_e|typedef|}SlNetCfg_e;
DECL|Status|member|_u16 Status;
DECL|TimeToRenew|member|_u32 TimeToRenew;
DECL|_SL_NETCFG_IPV6_ADDR_BIT_STATUS|macro|_SL_NETCFG_IPV6_ADDR_BIT_STATUS
DECL|__NETCFG_H__|macro|__NETCFG_H__
