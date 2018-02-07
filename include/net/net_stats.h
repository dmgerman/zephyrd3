DECL|NET_REQUEST_STATS_CMD_GET_ALL|enumerator|NET_REQUEST_STATS_CMD_GET_ALL = 1,
DECL|NET_REQUEST_STATS_CMD_GET_BYTES|enumerator|NET_REQUEST_STATS_CMD_GET_BYTES,
DECL|NET_REQUEST_STATS_CMD_GET_ICMP|enumerator|NET_REQUEST_STATS_CMD_GET_ICMP,
DECL|NET_REQUEST_STATS_CMD_GET_IPV4|enumerator|NET_REQUEST_STATS_CMD_GET_IPV4,
DECL|NET_REQUEST_STATS_CMD_GET_IPV6_ND|enumerator|NET_REQUEST_STATS_CMD_GET_IPV6_ND,
DECL|NET_REQUEST_STATS_CMD_GET_IPV6|enumerator|NET_REQUEST_STATS_CMD_GET_IPV6,
DECL|NET_REQUEST_STATS_CMD_GET_IP_ERRORS|enumerator|NET_REQUEST_STATS_CMD_GET_IP_ERRORS,
DECL|NET_REQUEST_STATS_CMD_GET_PROCESSING_ERROR|enumerator|NET_REQUEST_STATS_CMD_GET_PROCESSING_ERROR,
DECL|NET_REQUEST_STATS_CMD_GET_RPL|enumerator|NET_REQUEST_STATS_CMD_GET_RPL,
DECL|NET_REQUEST_STATS_CMD_GET_TCP|enumerator|NET_REQUEST_STATS_CMD_GET_TCP,
DECL|NET_REQUEST_STATS_CMD_GET_UDP|enumerator|NET_REQUEST_STATS_CMD_GET_UDP,
DECL|NET_REQUEST_STATS_GET_ALL|macro|NET_REQUEST_STATS_GET_ALL
DECL|NET_REQUEST_STATS_GET_BYTES|macro|NET_REQUEST_STATS_GET_BYTES
DECL|NET_REQUEST_STATS_GET_ICMP|macro|NET_REQUEST_STATS_GET_ICMP
DECL|NET_REQUEST_STATS_GET_ICMP|variable|NET_REQUEST_STATS_GET_ICMP
DECL|NET_REQUEST_STATS_GET_IPV4|macro|NET_REQUEST_STATS_GET_IPV4
DECL|NET_REQUEST_STATS_GET_IPV4|variable|NET_REQUEST_STATS_GET_IPV4
DECL|NET_REQUEST_STATS_GET_IPV6_ND|macro|NET_REQUEST_STATS_GET_IPV6_ND
DECL|NET_REQUEST_STATS_GET_IPV6_ND|variable|NET_REQUEST_STATS_GET_IPV6_ND
DECL|NET_REQUEST_STATS_GET_IPV6|macro|NET_REQUEST_STATS_GET_IPV6
DECL|NET_REQUEST_STATS_GET_IPV6|variable|NET_REQUEST_STATS_GET_IPV6
DECL|NET_REQUEST_STATS_GET_IP_ERRORS|macro|NET_REQUEST_STATS_GET_IP_ERRORS
DECL|NET_REQUEST_STATS_GET_PROCESSING_ERROR|macro|NET_REQUEST_STATS_GET_PROCESSING_ERROR
DECL|NET_REQUEST_STATS_GET_RPL|macro|NET_REQUEST_STATS_GET_RPL
DECL|NET_REQUEST_STATS_GET_RPL|variable|NET_REQUEST_STATS_GET_RPL
DECL|NET_REQUEST_STATS_GET_TCP|macro|NET_REQUEST_STATS_GET_TCP
DECL|NET_REQUEST_STATS_GET_TCP|variable|NET_REQUEST_STATS_GET_TCP
DECL|NET_REQUEST_STATS_GET_UDP|macro|NET_REQUEST_STATS_GET_UDP
DECL|NET_REQUEST_STATS_GET_UDP|variable|NET_REQUEST_STATS_GET_UDP
DECL|_NET_STATS_BASE|macro|_NET_STATS_BASE
DECL|_NET_STATS_CODE|macro|_NET_STATS_CODE
DECL|_NET_STATS_LAYER|macro|_NET_STATS_LAYER
DECL|__NET_STATS_H|macro|__NET_STATS_H
DECL|ackerr|member|net_stats_t ackerr;
DECL|bytes|member|net_stats_t bytes;
DECL|bytes|member|net_stats_t bytes;
DECL|bytes|member|struct net_stats_bytes bytes;
DECL|bytes|member|struct net_stats_bytes bytes;
DECL|chkerr|member|net_stats_t chkerr;
DECL|chkerr|member|net_stats_t chkerr;
DECL|chkerr|member|net_stats_t chkerr;
DECL|chkerr|member|net_stats_t chkerr;
DECL|conndrop|member|net_stats_t conndrop;
DECL|connrst|member|net_stats_t connrst;
DECL|dao_ack|member|struct net_stats_rpl_dao_ack dao_ack;
DECL|dao|member|struct net_stats_rpl_dao dao;
DECL|dio|member|struct net_stats_rpl_dio dio;
DECL|dis|member|struct net_stats_rpl_dis dis;
DECL|drop|member|net_stats_t drop;
DECL|drop|member|net_stats_t drop;
DECL|drop|member|net_stats_t drop;
DECL|drop|member|net_stats_t drop;
DECL|drop|member|net_stats_t drop;
DECL|drop|member|net_stats_t drop;
DECL|drop|member|net_stats_t drop;
DECL|drop|member|net_stats_t drop;
DECL|drop|member|net_stats_t drop;
DECL|drop|member|net_stats_t drop;
DECL|forward_errors|member|u16_t forward_errors;
DECL|forwarded|member|net_stats_t forwarded;
DECL|forwarded|member|net_stats_t forwarded;
DECL|fragerr|member|net_stats_t fragerr;
DECL|global_repairs|member|u16_t global_repairs;
DECL|hblenerr|member|net_stats_t hblenerr;
DECL|icmp|member|struct net_stats_icmp icmp;
DECL|interval|member|net_stats_t interval;
DECL|ip_errors|member|struct net_stats_ip_errors ip_errors;
DECL|ipv4|member|struct net_stats_ip ipv4;
DECL|ipv6_mld|member|struct net_stats_ipv6_mld ipv6_mld;
DECL|ipv6_nd|member|struct net_stats_ipv6_nd ipv6_nd;
DECL|ipv6|member|struct net_stats_ip ipv6;
DECL|lblenerr|member|net_stats_t lblenerr;
DECL|local_repairs|member|u16_t local_repairs;
DECL|loop_errors|member|u16_t loop_errors;
DECL|loop_warnings|member|u16_t loop_warnings;
DECL|malformed_msgs|member|u16_t malformed_msgs;
DECL|mem_overflows|member|u16_t mem_overflows;
DECL|net_request_stats_cmd|enum|enum net_request_stats_cmd {
DECL|net_stats_bytes|struct|struct net_stats_bytes {
DECL|net_stats_icmp|struct|struct net_stats_icmp {
DECL|net_stats_ip_errors|struct|struct net_stats_ip_errors {
DECL|net_stats_ipv6_mld|struct|struct net_stats_ipv6_mld {
DECL|net_stats_ipv6_nd|struct|struct net_stats_ipv6_nd {
DECL|net_stats_ip|struct|struct net_stats_ip {
DECL|net_stats_rpl_dao_ack|struct|struct net_stats_rpl_dao_ack {
DECL|net_stats_rpl_dao|struct|struct net_stats_rpl_dao {
DECL|net_stats_rpl_dio|struct|struct net_stats_rpl_dio {
DECL|net_stats_rpl_dis|struct|struct net_stats_rpl_dis {
DECL|net_stats_rpl|struct|struct net_stats_rpl {
DECL|net_stats_tcp|struct|struct net_stats_tcp {
DECL|net_stats_tc|struct|struct net_stats_tc {
DECL|net_stats_t|typedef|typedef u32_t net_stats_t;
DECL|net_stats_udp|struct|struct net_stats_udp {
DECL|net_stats|struct|struct net_stats {
DECL|parent_switch|member|u16_t parent_switch;
DECL|pkts|member|net_stats_t pkts;
DECL|pkts|member|net_stats_t pkts;
DECL|priority|member|u8_t priority;
DECL|priority|member|u8_t priority;
DECL|processing_error|member|net_stats_t processing_error;
DECL|protoerr|member|net_stats_t protoerr;
DECL|received|member|u32_t received;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|net_stats_t recv;
DECL|recv|member|} recv[NET_TC_RX_COUNT];
DECL|resent|member|net_stats_t resent;
DECL|resets|member|u16_t resets;
DECL|rexmit|member|net_stats_t rexmit;
DECL|root_repairs|member|u16_t root_repairs;
DECL|rpl|member|struct net_stats_rpl rpl;
DECL|rsterr|member|net_stats_t rsterr;
DECL|rst|member|net_stats_t rst;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|net_stats_t sent;
DECL|sent|member|u32_t sent;
DECL|sent|member|} sent[NET_TC_TX_COUNT];
DECL|tcp|member|struct net_stats_tcp tcp;
DECL|tc|member|struct net_stats_tc tc;
DECL|typeerr|member|net_stats_t typeerr;
DECL|udp|member|struct net_stats_udp udp;
DECL|vhlerr|member|net_stats_t vhlerr;
