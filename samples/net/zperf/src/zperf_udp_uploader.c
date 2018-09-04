DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|TAG|macro|TAG
DECL|sample_packet|variable|sample_packet
DECL|stat_received|function|static void stat_received(struct net_context *context, struct net_pkt *pkt, int status, void *user_data)
DECL|zperf_udp_upload|function|void zperf_udp_upload(struct net_context *context, unsigned int duration_in_ms, unsigned int packet_size, unsigned int rate_in_kbps, struct zperf_results *results)
DECL|zperf_upload_decode_stat|function|static inline void zperf_upload_decode_stat(struct net_pkt *pkt, struct zperf_results *results)
DECL|zperf_upload_fin|function|static inline void zperf_upload_fin(struct net_context *context, u32_t nb_packets, u32_t end_time, u32_t packet_size, struct zperf_results *results)
