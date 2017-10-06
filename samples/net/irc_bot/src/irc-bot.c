DECL|BUF_ALLOC_TIMEOUT|macro|BUF_ALLOC_TIMEOUT
DECL|CMD_BUFFER_SIZE|macro|CMD_BUFFER_SIZE
DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|CMD|macro|CMD
DECL|CONNECT_TIMEOUT|macro|CONNECT_TIMEOUT
DECL|DEFAULT_CHANNEL|macro|DEFAULT_CHANNEL
DECL|DEFAULT_PORT|macro|DEFAULT_PORT
DECL|DEFAULT_SERVER|macro|DEFAULT_SERVER
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_PIN|macro|LED_PIN
DECL|LED_PIN|macro|LED_PIN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WAIT_TIMEOUT|macro|WAIT_TIMEOUT
DECL|app_ctx|variable|app_ctx
DECL|chans|member|struct zirc_chan *chans;
DECL|chan|member|const char *chan;
DECL|cmd_buf|variable|cmd_buf
DECL|cmd_len|variable|cmd_len
DECL|data_pool|function|static struct net_buf_pool *data_pool(void)
DECL|data_pool|macro|data_pool
DECL|data|member|void *data;
DECL|data|member|void *data;
DECL|fake_led|variable|fake_led
DECL|initialize_hardware|function|initialize_hardware(void)
DECL|irc|member|struct zirc *irc;
DECL|led0|variable|led0
DECL|main|function|void main(void)
DECL|next|member|struct zirc_chan *next;
DECL|on_cmd_disconnect|function|on_cmd_disconnect(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_hello|function|on_cmd_hello(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_led_off|function|on_cmd_led_off(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_led_on|function|on_cmd_led_on(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_led_toggle|function|on_cmd_led_toggle(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_ping|function|on_cmd_ping(struct zirc *irc, char *umask, char *cmd, size_t len)
DECL|on_cmd_privmsg|function|on_cmd_privmsg(struct zirc *irc, char *umask, char *cmd, size_t len)
DECL|on_cmd_random|function|on_cmd_random(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_cmd_rejoin|function|on_cmd_rejoin(struct zirc_chan *chan, const char *nick, const char *msg)
DECL|on_context_recv|function|on_context_recv(struct net_app_ctx *ctx, struct net_pkt *pkt,int status, void *data)
DECL|on_msg_rcvd|function|on_msg_rcvd(void *data, struct zirc_chan *chan, char *umask, char *msg)
DECL|on_privmsg_rcvd_cb_t|typedef|typedef void (*on_privmsg_rcvd_cb_t)(void *data, struct zirc_chan *chan,
DECL|on_privmsg_rcvd|member|on_privmsg_rcvd_cb_t on_privmsg_rcvd;
DECL|panic|function|panic(const char *msg)
DECL|process_command|function|process_command(struct zirc *irc, char *cmd, size_t len)
DECL|read_led|function|read_led(void)
DECL|transmit|function|transmit(char buffer[], size_t len)
DECL|tx_slab|function|static struct k_mem_slab *tx_slab(void)
DECL|tx_slab|macro|tx_slab
DECL|write_led|function|write_led(bool led)
DECL|zirc_chan_join|function|zirc_chan_join(struct zirc *irc, struct zirc_chan *chan, const char *channel, on_privmsg_rcvd_cb_t on_privmsg_rcvd, void *data)
DECL|zirc_chan_part|function|zirc_chan_part(struct zirc_chan *chan)
DECL|zirc_chan_send_msg|function|zirc_chan_send_msg(const struct zirc_chan *chan, const char *msg)
DECL|zirc_chan|struct|struct zirc_chan {
DECL|zirc_connect|function|zirc_connect(struct zirc *irc, const char *host, int port, void *data)
DECL|zirc_disconnect|function|zirc_disconnect(struct zirc *irc)
DECL|zirc_nick_set|function|zirc_nick_set(struct zirc *irc, const char *nick)
DECL|zirc_user_set|function|zirc_user_set(struct zirc *irc, const char *user, const char *realname)
DECL|zirc|struct|struct zirc {
