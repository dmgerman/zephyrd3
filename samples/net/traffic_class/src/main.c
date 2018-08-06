DECL|CONNECT_TIME|macro|CONNECT_TIME
DECL|CREATE_MULTIPLE_TAGS|macro|CREATE_MULTIPLE_TAGS
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MY_PORT|macro|MY_PORT
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|PEER_PORT|macro|PEER_PORT
DECL|PRINT_STATISTICS_INTERVAL|macro|PRINT_STATISTICS_INTERVAL
DECL|TYPE_SEQ_NUM|macro|TYPE_SEQ_NUM
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|__packed|variable|__packed
DECL|calc_time|function|static u32_t calc_time(u32_t count, u32_t sum)
DECL|configs|struct|struct configs {
DECL|conf|member|struct configs *conf;
DECL|conf|variable|conf
DECL|connect_udp|function|static int connect_udp(sa_family_t family, struct net_app_ctx *ctx, const char *peer, void *user_data, u8_t priority)
DECL|data|struct|struct data {
DECL|dropped|member|u32_t dropped;
DECL|expecting_udp|member|u32_t expecting_udp;
DECL|family|member|sa_family_t family;
DECL|first|member|struct net_if *first;
DECL|header|struct|struct header {
DECL|iface_cb|function|static void iface_cb(struct net_if *iface, void *user_data)
DECL|init_app|function|static int init_app(void)
DECL|invalid|member|u32_t invalid;
DECL|ipsum_len|variable|ipsum_len
DECL|ipv4|member|struct data ipv4[NET_TC_COUNT];
DECL|ipv6|member|struct data ipv6[NET_TC_COUNT];
DECL|len|member|u8_t len;
DECL|lorem_ipsum|variable|lorem_ipsum
DECL|main|function|void main(void)
DECL|prepare_send_pkt|function|static struct net_pkt *prepare_send_pkt(struct net_app_ctx *ctx,const char *name, int *expecting_len, struct data *data)
DECL|priority|member|u8_t priority;
DECL|proto|member|const char *proto;
DECL|quit_lock|variable|quit_lock
DECL|received|member|u32_t received;
DECL|recv|member|struct k_delayed_work recv;
DECL|second|member|struct net_if *second;
DECL|send_more_data|function|static void send_more_data(struct net_app_ctx *ctx, struct data *data)
DECL|send_udp_data|function|static bool send_udp_data(struct net_app_ctx *ctx, struct data *data)
DECL|sent_time_count|member|u32_t sent_time_count;
DECL|sent_time_sum|member|u32_t sent_time_sum;
DECL|sent_time|member|s64_t sent_time; /* in milliseconds */
DECL|sent|member|s64_t sent;
DECL|sent|member|u32_t sent;
DECL|seq|member|u32_t seq;
DECL|setup_clients|function|static void setup_clients(void)
DECL|stats|function|static void stats(struct data *data)
DECL|stats|member|struct stats stats;
DECL|stats|struct|struct stats {
DECL|type|member|u8_t type;
DECL|udp4|variable|udp4
DECL|udp6|variable|udp6
DECL|udp_received|function|static void udp_received(struct net_app_ctx *ctx, struct net_pkt *pkt, int status, void *user_data)
DECL|udp|member|struct net_app_ctx *udp;
DECL|ud|struct|struct ud {
DECL|value|member|u8_t value[0];
DECL|wait_reply|function|static void wait_reply(struct k_work *work)
DECL|wrong_order|member|u32_t wrong_order;
