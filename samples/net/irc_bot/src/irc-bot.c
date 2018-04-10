DECL|APP_BANNER|macro|APP_BANNER
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
DECL|LED0_GPIO_CONTROLLER|macro|LED0_GPIO_CONTROLLER
DECL|LED0_GPIO_CONTROLLER|macro|LED0_GPIO_CONTROLLER
DECL|LED0_GPIO_PIN|macro|LED0_GPIO_PIN
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_PIN|macro|LED_PIN
DECL|NICK_BUFFER_SIZE|macro|NICK_BUFFER_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|WAIT_TIMEOUT|macro|WAIT_TIMEOUT
DECL|app_ctx|variable|app_ctx
DECL|cmd_buf|variable|cmd_buf
DECL|cmd_len|variable|cmd_len
DECL|data_pool|function|static struct net_buf_pool *data_pool(void)
DECL|data_pool|macro|data_pool
DECL|fake_led|variable|fake_led
DECL|led0|variable|led0
DECL|main|function|void main(void)
DECL|nick_buf|variable|nick_buf
DECL|on_cmd_disconnect|function|on_cmd_disconnect(char *chan_name, const char *nick, const char *msg)
DECL|on_cmd_hello|function|on_cmd_hello(char *chan_name, const char *nick, const char *msg)
DECL|on_cmd_led_off|function|on_cmd_led_off(char *chan_name, const char *nick, const char *msg)
DECL|on_cmd_led_on|function|on_cmd_led_on(char *chan_name, const char *nick, const char *msg)
DECL|on_cmd_led_toggle|function|on_cmd_led_toggle(char *chan_name, const char *nick, const char *msg)
DECL|on_cmd_ping|function|on_cmd_ping(char *umask, char *cmd, size_t len)
DECL|on_cmd_privmsg|function|on_cmd_privmsg(char *umask, char *cmd, size_t len)
DECL|on_cmd_random|function|on_cmd_random(char *chan_name, const char *nick, const char *msg)
DECL|on_cmd_rejoin|function|on_cmd_rejoin(char *chan_name, const char *nick, const char *msg)
DECL|on_context_recv|function|on_context_recv(struct net_app_ctx *ctx, struct net_pkt *pkt,int status, void *data)
DECL|on_msg_rcvd|function|on_msg_rcvd(char *chan_name, char *umask, char *msg)
DECL|panic|function|panic(const char *msg)
DECL|process_command|function|process_command(char *cmd, size_t len)
DECL|read_led|function|read_led(void)
DECL|transmit|function|transmit(char buffer[], size_t len)
DECL|tx_slab|function|static struct k_mem_slab *tx_slab(void)
DECL|tx_slab|macro|tx_slab
DECL|write_led|function|write_led(bool led)
DECL|zirc_chan_join|function|zirc_chan_join(const char *channel)
DECL|zirc_chan_part|function|zirc_chan_part(char *chan_name)
DECL|zirc_chan_send_msg|function|zirc_chan_send_msg(const char *chan_name, const char *msg)
DECL|zirc_connect|function|zirc_connect(const char *host, int port)
DECL|zirc_disconnect|function|zirc_disconnect(void)
DECL|zirc_nick_set|function|zirc_nick_set(const char *nick)
DECL|zirc_user_set|function|zirc_user_set(const char *user, const char *realname)
