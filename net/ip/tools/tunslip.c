DECL|BAUDRATE|macro|BAUDRATE
DECL|BOOTPC|macro|BOOTPC
DECL|BOOTPS|macro|BOOTPS
DECL|BOOTP_BROADCAST|macro|BOOTP_BROADCAST
DECL|BOOTREPLY|macro|BOOTREPLY
DECL|BOOTREQUEST|macro|BOOTREQUEST
DECL|DEBUG_LINE_MARKER|macro|DEBUG_LINE_MARKER
DECL|DHCPACK|macro|DHCPACK
DECL|DHCPDECLINE|macro|DHCPDECLINE
DECL|DHCPDISCOVER|macro|DHCPDISCOVER
DECL|DHCPNAK|macro|DHCPNAK
DECL|DHCPOFFER|macro|DHCPOFFER
DECL|DHCPRELEASE|macro|DHCPRELEASE
DECL|DHCPREQUEST|macro|DHCPREQUEST
DECL|DHCP_BASE_LEN|macro|DHCP_BASE_LEN
DECL|DHCP_HOLE_LEN|macro|DHCP_HOLE_LEN
DECL|DHCP_LIGHT_MSG_LEN|macro|DHCP_LIGHT_MSG_LEN
DECL|DHCP_MSG_LEN|macro|DHCP_MSG_LEN
DECL|DHCP_OPTION_AGENT|macro|DHCP_OPTION_AGENT
DECL|DHCP_OPTION_DNS_SERVER|macro|DHCP_OPTION_DNS_SERVER
DECL|DHCP_OPTION_END|macro|DHCP_OPTION_END
DECL|DHCP_OPTION_LEASE_TIME|macro|DHCP_OPTION_LEASE_TIME
DECL|DHCP_OPTION_MSG_TYPE|macro|DHCP_OPTION_MSG_TYPE
DECL|DHCP_OPTION_REQ_IPADDR|macro|DHCP_OPTION_REQ_IPADDR
DECL|DHCP_OPTION_REQ_LIST|macro|DHCP_OPTION_REQ_LIST
DECL|DHCP_OPTION_ROUTER|macro|DHCP_OPTION_ROUTER
DECL|DHCP_OPTION_SERVER_ID|macro|DHCP_OPTION_SERVER_ID
DECL|DHCP_OPTION_SUBNET_MASK|macro|DHCP_OPTION_SUBNET_MASK
DECL|DHCP_OPTION_SUBNET_SELECTION|macro|DHCP_OPTION_SUBNET_SELECTION
DECL|IP_DF|macro|IP_DF
DECL|IP_HL|macro|IP_HL
DECL|IP_MF|macro|IP_MF
DECL|IP_OFFMASK|macro|IP_OFFMASK
DECL|IP_RF|macro|IP_RF
DECL|IP_V4|macro|IP_V4
DECL|IP_V|macro|IP_V
DECL|PROGRESS|macro|PROGRESS
DECL|RAI_AGENT_ID|macro|RAI_AGENT_ID
DECL|RAI_CIRCUIT_ID|macro|RAI_CIRCUIT_ID
DECL|RAI_REMOTE_ID|macro|RAI_REMOTE_ID
DECL|RAI_SUBNET_SELECTION|macro|RAI_SUBNET_SELECTION
DECL|SLIP_END|macro|SLIP_END
DECL|SLIP_ESC_END|macro|SLIP_ESC_END
DECL|SLIP_ESC_ESC|macro|SLIP_ESC_ESC
DECL|SLIP_ESC|macro|SLIP_ESC
DECL|TIMEOUT|macro|TIMEOUT
DECL|b_rate|variable|b_rate
DECL|chaddr|member|u_int8_t chaddr[16];
DECL|chaddr|member|u_int8_t chaddr[16];
DECL|check_ip|function|check_ip(const struct ip *ip, unsigned ip_len)
DECL|ciaddr|member|u_int8_t ciaddr[4];
DECL|ciaddr|member|u_int8_t ciaddr[4];
DECL|circuit_addr|variable|circuit_addr
DECL|cleanup|function|cleanup(void)
DECL|devopen|function|devopen(const char *dev, int flags)
DECL|dhaddr|variable|dhaddr
DECL|dhcp_light_msg|struct|struct dhcp_light_msg {
DECL|dhcp_msg|struct|struct dhcp_msg {
DECL|dhsock|variable|dhsock
DECL|file|member|u_int8_t file[128];
DECL|flags|member|u_int16_t secs, flags;
DECL|flags|member|u_int16_t secs, flags;
DECL|giaddr|member|u_int8_t giaddr[4];
DECL|giaddr|member|u_int8_t giaddr[4];
DECL|giaddr|variable|giaddr
DECL|got_sigalarm|variable|got_sigalarm
DECL|hlen|member|u_int8_t op, htype, hlen, hops;
DECL|hlen|member|u_int8_t op, htype, hlen, hops;
DECL|hops|member|u_int8_t op, htype, hlen, hops;
DECL|hops|member|u_int8_t op, htype, hlen, hops;
DECL|htype|member|u_int8_t op, htype, hlen, hops;
DECL|htype|member|u_int8_t op, htype, hlen, hops;
DECL|ifconf|function|ifconf(const char *tundev, const char *ipaddr, const char *netmask)
DECL|ip4sum|function|ip4sum(u_int16_t sum, const void *_p, u_int16_t len)
DECL|ip_dst|member|u_int32_t ip_src, ip_dst; /* source and dest address */
DECL|ip_id|member|u_int16_t ip_id; /* identification */
DECL|ip_id|variable|ip_id
DECL|ip_len|member|u_int16_t ip_len; /* total length */
DECL|ip_off|member|u_int16_t ip_off; /* fragment offset field */
DECL|ip_p|member|u_int8_t ip_p; /* protocol */
DECL|ip_src|member|u_int32_t ip_src, ip_dst; /* source and dest address */
DECL|ip_sum|member|u_int16_t ip_sum; /* checksum */
DECL|ip_tos|member|u_int8_t ip_tos; /* type of service */
DECL|ip_ttl|member|u_int8_t ip_ttl; /* time to live */
DECL|ip_vhl|member|u_int8_t ip_vhl; /* version and header length */
DECL|ipaddr|variable|ipaddr
DECL|ip|struct|struct ip {
DECL|is_sensible_string|function|is_sensible_string(const unsigned char *s, int len)
DECL|main|function|main(int argc, char **argv)
DECL|netaddr|variable|netaddr
DECL|netmask|variable|netmask
DECL|options|member|u_int8_t options[312];
DECL|options|member|u_int8_t options[312];
DECL|op|member|u_int8_t op, htype, hlen, hops;
DECL|op|member|u_int8_t op, htype, hlen, hops;
DECL|relay_dhcp_to_client|function|relay_dhcp_to_client(int slipfd)
DECL|relay_dhcp_to_server|function|relay_dhcp_to_server(struct ip *ip, int len)
DECL|secs|member|u_int16_t secs, flags;
DECL|secs|member|u_int16_t secs, flags;
DECL|serial_to_tun|function|serial_to_tun(FILE *inslip, int outfd)
DECL|siaddr|member|u_int8_t siaddr[4];
DECL|siaddr|member|u_int8_t siaddr[4];
DECL|sigalarm_reset|function|sigalarm_reset()
DECL|sigalarm|function|sigalarm(int signo)
DECL|sigcleanup|function|sigcleanup(int signo)
DECL|slip_begin|variable|slip_begin
DECL|slip_buf|variable|slip_buf
DECL|slip_empty|function|slip_empty()
DECL|slip_end|variable|slip_end
DECL|slip_flushbuf|function|slip_flushbuf(int fd)
DECL|slip_send|function|slip_send(int fd, unsigned char c)
DECL|sname|member|u_int8_t sname[64];
DECL|ssystem|function|ssystem(const char *fmt, ...)
DECL|stty_telos|function|stty_telos(int fd)
DECL|tun_alloc|function|tun_alloc(char *dev)
DECL|tun_alloc|function|tun_alloc(char *dev)
DECL|tun_to_serial|function|tun_to_serial(int infd, int outfd)
DECL|tundev|variable|tundev
DECL|uh_dport|member|u_int16_t uh_dport; /* destination port */
DECL|uh_sport|member|u_int16_t uh_sport; /* source port */
DECL|uh_sum|member|u_int16_t uh_sum; /* udp checksum */
DECL|uh_ulen|member|u_int16_t uh_ulen; /* udp length */
DECL|write_to_serial|function|write_to_serial(int outfd, void *inbuf, int len)
DECL|xid|member|u_int8_t xid[4];
DECL|xid|member|u_int8_t xid[4];
DECL|yiaddr|member|u_int8_t yiaddr[4];
DECL|yiaddr|member|u_int8_t yiaddr[4];
