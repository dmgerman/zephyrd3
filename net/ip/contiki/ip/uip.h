DECL|UIP_ABORT|macro|UIP_ABORT
DECL|UIP_ACKDATA|macro|UIP_ACKDATA
DECL|UIP_APPDATA_PTR|macro|UIP_APPDATA_PTR
DECL|UIP_APPDATA_SIZE|macro|UIP_APPDATA_SIZE
DECL|UIP_CLOSED|macro|UIP_CLOSED
DECL|UIP_CLOSE|macro|UIP_CLOSE
DECL|UIP_CLOSING|macro|UIP_CLOSING
DECL|UIP_CONNECTED|macro|UIP_CONNECTED
DECL|UIP_DATA|macro|UIP_DATA
DECL|UIP_ESTABLISHED|macro|UIP_ESTABLISHED
DECL|UIP_EXT_HDR_BITMAP_AH|macro|UIP_EXT_HDR_BITMAP_AH
DECL|UIP_EXT_HDR_BITMAP_DESTO1|macro|UIP_EXT_HDR_BITMAP_DESTO1
DECL|UIP_EXT_HDR_BITMAP_DESTO2|macro|UIP_EXT_HDR_BITMAP_DESTO2
DECL|UIP_EXT_HDR_BITMAP_ESP|macro|UIP_EXT_HDR_BITMAP_ESP
DECL|UIP_EXT_HDR_BITMAP_FRAG|macro|UIP_EXT_HDR_BITMAP_FRAG
DECL|UIP_EXT_HDR_BITMAP_HBHO|macro|UIP_EXT_HDR_BITMAP_HBHO
DECL|UIP_EXT_HDR_BITMAP_ROUTING|macro|UIP_EXT_HDR_BITMAP_ROUTING
DECL|UIP_EXT_HDR_OPT_PAD1|macro|UIP_EXT_HDR_OPT_PAD1
DECL|UIP_EXT_HDR_OPT_PADN|macro|UIP_EXT_HDR_OPT_PADN
DECL|UIP_EXT_HDR_OPT_RPL|macro|UIP_EXT_HDR_OPT_RPL
DECL|UIP_FIN_WAIT_1|macro|UIP_FIN_WAIT_1
DECL|UIP_FIN_WAIT_2|macro|UIP_FIN_WAIT_2
DECL|UIP_FRAGH_LEN|macro|UIP_FRAGH_LEN
DECL|UIP_HTONL|macro|UIP_HTONL
DECL|UIP_HTONL|macro|UIP_HTONL
DECL|UIP_HTONS|macro|UIP_HTONS
DECL|UIP_HTONS|macro|UIP_HTONS
DECL|UIP_H_|macro|UIP_H_
DECL|UIP_ICMPH_LEN|macro|UIP_ICMPH_LEN
DECL|UIP_IPH_LEN|macro|UIP_IPH_LEN
DECL|UIP_IPH_LEN|macro|UIP_IPH_LEN
DECL|UIP_IPICMPH_LEN|macro|UIP_IPICMPH_LEN
DECL|UIP_IPTCPH_LEN|macro|UIP_IPTCPH_LEN
DECL|UIP_IPUDPH_LEN|macro|UIP_IPUDPH_LEN
DECL|UIP_LAST_ACK|macro|UIP_LAST_ACK
DECL|UIP_LLIPH_LEN|macro|UIP_LLIPH_LEN
DECL|UIP_LLPREF_LEN|macro|UIP_LLPREF_LEN
DECL|UIP_NEWDATA|macro|UIP_NEWDATA
DECL|UIP_POLL_REQUEST|macro|UIP_POLL_REQUEST
DECL|UIP_POLL|macro|UIP_POLL
DECL|UIP_PROTO_DESTO|macro|UIP_PROTO_DESTO
DECL|UIP_PROTO_FRAG|macro|UIP_PROTO_FRAG
DECL|UIP_PROTO_HBHO|macro|UIP_PROTO_HBHO
DECL|UIP_PROTO_ICMP6|macro|UIP_PROTO_ICMP6
DECL|UIP_PROTO_ICMP|macro|UIP_PROTO_ICMP
DECL|UIP_PROTO_NONE|macro|UIP_PROTO_NONE
DECL|UIP_PROTO_ROUTING|macro|UIP_PROTO_ROUTING
DECL|UIP_PROTO_TCP|macro|UIP_PROTO_TCP
DECL|UIP_PROTO_UDP|macro|UIP_PROTO_UDP
DECL|UIP_REXMIT|macro|UIP_REXMIT
DECL|UIP_STAT|macro|UIP_STAT
DECL|UIP_STAT|macro|UIP_STAT
DECL|UIP_STOPPED|macro|UIP_STOPPED
DECL|UIP_SYN_RCVD|macro|UIP_SYN_RCVD
DECL|UIP_SYN_SENT|macro|UIP_SYN_SENT
DECL|UIP_TCPH_LEN|macro|UIP_TCPH_LEN
DECL|UIP_TCPIP_HLEN|macro|UIP_TCPIP_HLEN
DECL|UIP_TIMEDOUT|macro|UIP_TIMEDOUT
DECL|UIP_TIMER|macro|UIP_TIMER
DECL|UIP_TIME_WAIT|macro|UIP_TIME_WAIT
DECL|UIP_TS_MASK|macro|UIP_TS_MASK
DECL|UIP_UDPH_LEN|macro|UIP_UDPH_LEN
DECL|UIP_UDP_SEND_CONN|macro|UIP_UDP_SEND_CONN
DECL|UIP_UDP_TIMER|macro|UIP_UDP_TIMER
DECL|ackerr|member|uip_stats_t ackerr; /**< Number of TCP segments with a bad ACK
DECL|ackno|member|ackno[4],
DECL|ackno|member|uint8_t ackno[4];
DECL|appstate|member|uip_icmp6_appstate_t appstate;
DECL|appstate|member|uip_tcp_appstate_t appstate;
DECL|appstate|member|uip_udp_appstate_t appstate;
DECL|chkerr|member|uip_stats_t chkerr; /**< Number of ICMP packets with a bad
DECL|chkerr|member|uip_stats_t chkerr; /**< Number of TCP segments with a bad
DECL|chkerr|member|uip_stats_t chkerr; /**< Number of UDP segments with a bad
DECL|chkerr|member|uip_stats_t chkerr; /**< Number of packets dropped due to IP
DECL|destipaddr|member|uip_ip6addr_t srcipaddr, destipaddr;
DECL|destipaddr|member|uip_ip6addr_t srcipaddr, destipaddr;
DECL|destipaddr|member|uip_ip6addr_t srcipaddr, destipaddr;
DECL|destipaddr|member|uip_ip6addr_t srcipaddr, destipaddr;
DECL|destport|member|destport;
DECL|destport|member|destport;
DECL|destport|member|uint16_t destport;
DECL|destport|member|uint16_t destport;
DECL|drop|member|uip_stats_t drop; /**< Number of dropped ICMP packets. */
DECL|drop|member|uip_stats_t drop; /**< Number of dropped ND6 packets. */
DECL|drop|member|uip_stats_t drop; /**< Number of dropped TCP segments. */
DECL|drop|member|uip_stats_t drop; /**< Number of dropped UDP segments. */
DECL|drop|member|uip_stats_t drop; /**< Number of dropped packets at the IP
DECL|flags|member|flags,
DECL|flags|member|uint8_t flags;
DECL|flags|member|uint8_t flags;
DECL|flow|member|uint16_t flow;
DECL|flow|member|uint16_t flow;
DECL|flow|member|uint16_t flow;
DECL|flow|member|uint16_t flow;
DECL|forwarded|member|uip_stats_t forwarded;/**< Number of forwarded packets at the IP
DECL|fragerr|member|uip_stats_t fragerr; /**< Number of packets dropped because they
DECL|hblenerr|member|uip_stats_t hblenerr; /**< Number of packets dropped due to wrong
DECL|icmpchksum|member|uint16_t icmpchksum;
DECL|icmpchksum|member|uint16_t icmpchksum;
DECL|icmp|member|} icmp; /**< ICMP statistics. */
DECL|icode|member|uint8_t type, icode;
DECL|icode|member|uint8_t type, icode;
DECL|id|member|uint16_t id, seqno;
DECL|id|member|uint16_t id, seqno;
DECL|id|member|uint32_t id;
DECL|initialmss|member|uint16_t initialmss; /**< Initial maximum segment size for the
DECL|init|member|void (*init)(void);
DECL|instance|member|uint8_t instance;
DECL|ip|member|} ip; /**< IP statistics. */
DECL|lblenerr|member|uip_stats_t lblenerr; /**< Number of packets dropped due to wrong
DECL|len|member|uint16_t len; /**< Length of the data that was previously sent. */
DECL|len|member|uint8_t len;
DECL|len|member|uint8_t len;
DECL|len|member|uint8_t len;
DECL|len|member|uint8_t len;
DECL|len|member|uint8_t len;
DECL|len|member|uint8_t len[2];
DECL|len|member|uint8_t len[2];
DECL|len|member|uint8_t len[2];
DECL|len|member|uint8_t len[2];
DECL|lport|member|uint16_t lport; /**< The local TCP port, in network byte order. */
DECL|lport|member|uint16_t lport; /**< The local port number in network byte order. */
DECL|mss|member|uint16_t mss; /**< Current maximum segment size for the
DECL|nd6|member|} nd6;
DECL|next|member|uint8_t next;
DECL|next|member|uint8_t next;
DECL|next|member|uint8_t next;
DECL|next|member|uint8_t next;
DECL|next|member|uint8_t next;
DECL|nrtx|member|uint8_t nrtx; /**< The number of retransmissions for the last
DECL|offsetresmore|member|uint16_t offsetresmore;
DECL|opt_len|member|uint8_t opt_len;
DECL|opt_len|member|uint8_t opt_len;
DECL|opt_type|member|uint8_t opt_type;
DECL|opt_type|member|uint8_t opt_type;
DECL|optdata|member|uint8_t optdata[4];
DECL|optdata|member|uint8_t optdata[4];
DECL|output|member|void (*output)(void);
DECL|payload|member|uint8_t payload[1];
DECL|protoerr|member|uip_stats_t protoerr; /**< Number of packets dropped because they
DECL|proto|member|uint8_t proto, ttl;
DECL|proto|member|uint8_t proto, ttl;
DECL|proto|member|uint8_t proto, ttl;
DECL|proto|member|uint8_t proto, ttl;
DECL|rcv_nxt|member|uint8_t rcv_nxt[4]; /**< The sequence number that we expect to
DECL|recv|member|uip_stats_t recv; /**< Number of received ICMP packets. */
DECL|recv|member|uip_stats_t recv; /**< Number of received packets at the IP
DECL|recv|member|uip_stats_t recv; /**< Number of recived ND6 packets */
DECL|recv|member|uip_stats_t recv; /**< Number of recived TCP segments. */
DECL|recv|member|uip_stats_t recv; /**< Number of recived UDP segments. */
DECL|res|member|uint8_t res;
DECL|rexmit|member|uip_stats_t rexmit; /**< Number of retransmitted TCP segments. */
DECL|ripaddr|member|uip_ipaddr_t ripaddr; /**< The IP address of the remote host. */
DECL|ripaddr|member|uip_ipaddr_t ripaddr; /**< The IP address of the remote peer. */
DECL|routing_type|member|uint8_t routing_type;
DECL|rport|member|uint16_t rport; /**< The local remote TCP port, in network byte
DECL|rport|member|uint16_t rport; /**< The remote port number in network byte order. */
DECL|rst|member|uip_stats_t rst; /**< Number of received TCP RST (reset) segments. */
DECL|rto|member|uint8_t rto; /**< Retransmission time-out. */
DECL|sa|member|uint8_t sa; /**< Retransmission time-out calculation state
DECL|seg_left|member|uint8_t seg_left;
DECL|senderrank|member|uint16_t senderrank;
DECL|sent|member|uip_stats_t sent; /**< Number of sent ICMP packets. */
DECL|sent|member|uip_stats_t sent; /**< Number of sent ND6 packets */
DECL|sent|member|uip_stats_t sent; /**< Number of sent TCP segments. */
DECL|sent|member|uip_stats_t sent; /**< Number of sent UDP segments. */
DECL|sent|member|uip_stats_t sent; /**< Number of sent packets at the IP
DECL|seqno|member|uint16_t id, seqno;
DECL|seqno|member|uint16_t id, seqno;
DECL|seqno|member|uint8_t seqno[4],
DECL|seqno|member|uint8_t seqno[4];
DECL|snd_nxt|member|uint8_t snd_nxt[4]; /**< The sequence number that was last sent by
DECL|srcipaddr|member|uip_ip6addr_t srcipaddr, destipaddr;
DECL|srcipaddr|member|uip_ip6addr_t srcipaddr, destipaddr;
DECL|srcipaddr|member|uip_ip6addr_t srcipaddr, destipaddr;
DECL|srcipaddr|member|uip_ip6addr_t srcipaddr, destipaddr;
DECL|srcport|member|uint16_t srcport,
DECL|srcport|member|uint16_t srcport,
DECL|srcport|member|uint16_t srcport;
DECL|srcport|member|uint16_t srcport;
DECL|sv|member|uint8_t sv; /**< Retransmission time-out calculation state
DECL|syndrop|member|uip_stats_t syndrop; /**< Number of dropped SYNs because too few
DECL|synrst|member|uip_stats_t synrst; /**< Number of SYNs for closed ports,
DECL|tcflow|member|tcflow;
DECL|tcflow|member|uint8_t tcflow;
DECL|tcf|member|tcf;
DECL|tcf|member|tcf;
DECL|tcpchksum|member|uint16_t tcpchksum;
DECL|tcpchksum|member|uint16_t tcpchksum;
DECL|tcpoffset|member|tcpoffset,
DECL|tcpoffset|member|uint8_t tcpoffset;
DECL|tcpstateflags|member|uint8_t tcpstateflags; /**< TCP state and flags. */
DECL|tcp|member|} tcp; /**< TCP statistics. */
DECL|timer|member|uint8_t timer; /**< The retransmission timer. */
DECL|ttl|member|uint8_t proto, ttl;
DECL|ttl|member|uint8_t proto, ttl;
DECL|ttl|member|uint8_t proto, ttl;
DECL|ttl|member|uint8_t proto, ttl;
DECL|ttl|member|uint8_t ttl; /**< Default time-to-live. */
DECL|typeerr|member|uip_stats_t typeerr; /**< Number of ICMP packets with a wrong
DECL|type|member|uint8_t type, icode;
DECL|type|member|uint8_t type, icode;
DECL|type|member|uint8_t type;
DECL|u32|member|uint32_t u32[(UIP_BUFSIZE + 3) / 4];
DECL|u8|member|uint8_t u8[UIP_BUFSIZE];
DECL|udpchksum|member|uint16_t udpchksum;
DECL|udpchksum|member|uint16_t udpchksum;
DECL|udplen|member|uint16_t udplen;
DECL|udplen|member|uint16_t udplen;
DECL|udp|member|} udp; /**< UDP statistics. */
DECL|uip_aborted|macro|uip_aborted
DECL|uip_abort|macro|uip_abort
DECL|uip_acked|macro|uip_acked
DECL|uip_are_solicited_bytes_equal|macro|uip_are_solicited_bytes_equal
DECL|uip_buf_t|typedef|} uip_buf_t;
DECL|uip_buf|macro|uip_buf
DECL|uip_closed|macro|uip_closed
DECL|uip_close|macro|uip_close
DECL|uip_conn_active|macro|uip_conn_active
DECL|uip_connected|macro|uip_connected
DECL|uip_conn|struct|struct uip_conn {
DECL|uip_create_linklocal_allnodes_mcast|macro|uip_create_linklocal_allnodes_mcast
DECL|uip_create_linklocal_allrouters_mcast|macro|uip_create_linklocal_allrouters_mcast
DECL|uip_create_linklocal_prefix|macro|uip_create_linklocal_prefix
DECL|uip_create_solicited_node|macro|uip_create_solicited_node
DECL|uip_create_unspecified|macro|uip_create_unspecified
DECL|uip_datalen|macro|uip_datalen
DECL|uip_desto_hdr|struct|typedef struct uip_desto_hdr {
DECL|uip_desto_hdr|typedef|} uip_desto_hdr;
DECL|uip_ext_hdr_opt_padn|struct|typedef struct uip_ext_hdr_opt_padn {
DECL|uip_ext_hdr_opt_padn|typedef|} uip_ext_hdr_opt_padn;
DECL|uip_ext_hdr_opt_rpl|struct|typedef struct uip_ext_hdr_opt_rpl {
DECL|uip_ext_hdr_opt_rpl|typedef|} uip_ext_hdr_opt_rpl;
DECL|uip_ext_hdr_opt|struct|typedef struct uip_ext_hdr_opt {
DECL|uip_ext_hdr_opt|typedef|} uip_ext_hdr_opt;
DECL|uip_ext_hdr|struct|typedef struct uip_ext_hdr {
DECL|uip_ext_hdr|typedef|} uip_ext_hdr;
DECL|uip_fallback_interface|struct|struct uip_fallback_interface {
DECL|uip_frag_hdr|struct|typedef struct uip_frag_hdr {
DECL|uip_frag_hdr|typedef|} uip_frag_hdr;
DECL|uip_getdraddr|macro|uip_getdraddr
DECL|uip_gethostaddr|macro|uip_gethostaddr
DECL|uip_getnetmask|macro|uip_getnetmask
DECL|uip_hbho_hdr|struct|typedef struct uip_hbho_hdr {
DECL|uip_hbho_hdr|typedef|} uip_hbho_hdr;
DECL|uip_icmp6_conn|struct|struct uip_icmp6_conn {
DECL|uip_icmp_hdr|struct|struct uip_icmp_hdr {
DECL|uip_icmpip_hdr|struct|struct uip_icmpip_hdr {
DECL|uip_initialmss|macro|uip_initialmss
DECL|uip_input|macro|uip_input
DECL|uip_ip4addr_cmp|macro|uip_ip4addr_cmp
DECL|uip_ip4addr_copy|macro|uip_ip4addr_copy
DECL|uip_ip6addr_cmp|macro|uip_ip6addr_cmp
DECL|uip_ip6addr_copy|macro|uip_ip6addr_copy
DECL|uip_ip6addr_u8|macro|uip_ip6addr_u8
DECL|uip_ip6addr|macro|uip_ip6addr
DECL|uip_ip_hdr|struct|struct uip_ip_hdr {
DECL|uip_ipaddr1|macro|uip_ipaddr1
DECL|uip_ipaddr2|macro|uip_ipaddr2
DECL|uip_ipaddr3|macro|uip_ipaddr3
DECL|uip_ipaddr4|macro|uip_ipaddr4
DECL|uip_ipaddr_cmp|macro|uip_ipaddr_cmp
DECL|uip_ipaddr_cmp|macro|uip_ipaddr_cmp
DECL|uip_ipaddr_copy|macro|uip_ipaddr_copy
DECL|uip_ipaddr_maskcmp|macro|uip_ipaddr_maskcmp
DECL|uip_ipaddr_mask|macro|uip_ipaddr_mask
DECL|uip_ipaddr_prefixcmp|macro|uip_ipaddr_prefixcmp
DECL|uip_ipaddr_to_quad|macro|uip_ipaddr_to_quad
DECL|uip_ipaddr|macro|uip_ipaddr
DECL|uip_is_addr_link_local|macro|uip_is_addr_link_local
DECL|uip_is_addr_linklocal_allnodes_mcast|macro|uip_is_addr_linklocal_allnodes_mcast
DECL|uip_is_addr_linklocal_allrouters_mcast|macro|uip_is_addr_linklocal_allrouters_mcast
DECL|uip_is_addr_linklocal|macro|uip_is_addr_linklocal
DECL|uip_is_addr_loopback|macro|uip_is_addr_loopback
DECL|uip_is_addr_mac_addr_based|macro|uip_is_addr_mac_addr_based
DECL|uip_is_addr_mac_addr_based|macro|uip_is_addr_mac_addr_based
DECL|uip_is_addr_mcast_global|macro|uip_is_addr_mcast_global
DECL|uip_is_addr_mcast_non_routable|macro|uip_is_addr_mcast_non_routable
DECL|uip_is_addr_mcast_routable|macro|uip_is_addr_mcast_routable
DECL|uip_is_addr_mcast|macro|uip_is_addr_mcast
DECL|uip_is_addr_solicited_node|macro|uip_is_addr_solicited_node
DECL|uip_is_addr_unspecified|macro|uip_is_addr_unspecified
DECL|uip_is_mcast_group_id_all_nodes|macro|uip_is_mcast_group_id_all_nodes
DECL|uip_is_mcast_group_id_all_routers|macro|uip_is_mcast_group_id_all_routers
DECL|uip_l2_l3_hdr_len|macro|uip_l2_l3_hdr_len
DECL|uip_l2_l3_icmp_hdr_len|macro|uip_l2_l3_icmp_hdr_len
DECL|uip_l3_hdr_len|macro|uip_l3_hdr_len
DECL|uip_l3_icmp_hdr_len|macro|uip_l3_icmp_hdr_len
DECL|uip_mss|macro|uip_mss
DECL|uip_newdata|macro|uip_newdata
DECL|uip_ntohl|macro|uip_ntohl
DECL|uip_ntohs|macro|uip_ntohs
DECL|uip_outstanding|macro|uip_outstanding
DECL|uip_periodic_conn|macro|uip_periodic_conn
DECL|uip_periodic|macro|uip_periodic
DECL|uip_poll_conn|macro|uip_poll_conn
DECL|uip_poll|macro|uip_poll
DECL|uip_restart|macro|uip_restart
DECL|uip_rexmit|macro|uip_rexmit
DECL|uip_routing_hdr|struct|typedef struct uip_routing_hdr {
DECL|uip_routing_hdr|typedef|} uip_routing_hdr;
DECL|uip_setdraddr|macro|uip_setdraddr
DECL|uip_sethostaddr|macro|uip_sethostaddr
DECL|uip_setnetmask|macro|uip_setnetmask
DECL|uip_stats|struct|struct uip_stats {
DECL|uip_stopped|macro|uip_stopped
DECL|uip_stop|macro|uip_stop
DECL|uip_tcp_hdr|struct|struct uip_tcp_hdr {
DECL|uip_tcpip_hdr|struct|struct uip_tcpip_hdr {
DECL|uip_timedout|macro|uip_timedout
DECL|uip_udp_bind|macro|uip_udp_bind
DECL|uip_udp_conn|struct|struct uip_udp_conn {
DECL|uip_udp_hdr|struct|struct uip_udp_hdr {
DECL|uip_udp_periodic_conn|macro|uip_udp_periodic_conn
DECL|uip_udp_periodic|macro|uip_udp_periodic
DECL|uip_udp_remove|macro|uip_udp_remove
DECL|uip_udp_send|macro|uip_udp_send
DECL|uip_udpconnection|macro|uip_udpconnection
DECL|uip_udpip_hdr|struct|struct uip_udpip_hdr {
DECL|uip_urgdatalen|macro|uip_urgdatalen
DECL|urgp|member|uint8_t urgp[2];
DECL|urgp|member|uint8_t urgp[2];
DECL|vhlerr|member|uip_stats_t vhlerr; /**< Number of packets dropped due to wrong
DECL|vtc|member|uint8_t vtc,
DECL|vtc|member|uint8_t vtc,
DECL|vtc|member|uint8_t vtc,
DECL|vtc|member|uint8_t vtc;
DECL|wnd|member|uint8_t wnd[2];
DECL|wnd|member|wnd[2];
