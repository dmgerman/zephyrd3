DECL|SIMPLE_UDP_H|macro|SIMPLE_UDP_H
DECL|client_process|member|struct process *client_process;
DECL|local_port|member|uint16_t remote_port, local_port;
DECL|next|member|struct simple_udp_connection *next;
DECL|receive_callback|member|simple_udp_callback receive_callback;
DECL|remote_addr|member|uip_ipaddr_t remote_addr;
DECL|remote_port|member|uint16_t remote_port, local_port;
DECL|simple_udp_callback|typedef|typedef void (* simple_udp_callback)(struct simple_udp_connection *c,
DECL|simple_udp_connection|struct|struct simple_udp_connection {
DECL|simple_udp_process|variable|simple_udp_process
DECL|udp_conn|member|struct uip_udp_conn *udp_conn;
DECL|user_data|member|void *user_data;
