DECL|_SSL_UTILS_H_|macro|_SSL_UTILS_H_
DECL|block|member|struct k_mem_block block;
DECL|buf|member|struct net_buf *buf;
DECL|frag|member|struct net_buf *frag;
DECL|net_ctx|member|struct net_context *net_ctx;
DECL|parser_settings|member|struct http_parser_settings parser_settings;
DECL|parser|member|struct http_parser parser;
DECL|remaining|member|int remaining;
DECL|rx_fifo_block|struct|struct rx_fifo_block {
DECL|rx_fifo|member|struct k_fifo rx_fifo;
DECL|rx_pkt|member|struct net_buf *rx_pkt;
DECL|snode|member|sys_snode_t snode;
DECL|ssl_context|struct|struct ssl_context {
DECL|tx_sem|member|struct k_sem tx_sem;
