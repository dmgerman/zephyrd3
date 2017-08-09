DECL|APP_BANNER|macro|APP_BANNER
DECL|CLIENT_DEVICE_TYPE|macro|CLIENT_DEVICE_TYPE
DECL|CLIENT_FIRMWARE_VER|macro|CLIENT_FIRMWARE_VER
DECL|CLIENT_HW_VER|macro|CLIENT_HW_VER
DECL|CLIENT_MANUFACTURER|macro|CLIENT_MANUFACTURER
DECL|CLIENT_MODEL_NUMBER|macro|CLIENT_MODEL_NUMBER
DECL|CLIENT_SERIAL_NUMBER|macro|CLIENT_SERIAL_NUMBER
DECL|CONFIG_NET_APP_PEER_IPV4_ADDR|macro|CONFIG_NET_APP_PEER_IPV4_ADDR
DECL|CONFIG_NET_APP_PEER_IPV6_ADDR|macro|CONFIG_NET_APP_PEER_IPV6_ADDR
DECL|CONNECT_TIME|macro|CONNECT_TIME
DECL|ENDPOINT_LEN|macro|ENDPOINT_LEN
DECL|LED_GPIO_PIN|macro|LED_GPIO_PIN
DECL|LED_GPIO_PIN|macro|LED_GPIO_PIN
DECL|LED_GPIO_PORT|macro|LED_GPIO_PORT
DECL|LED_GPIO_PORT|macro|LED_GPIO_PORT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|WAIT_TIME|macro|WAIT_TIME
DECL|battery_current|variable|battery_current
DECL|battery_voltage|variable|battery_voltage
DECL|data_udp_pool|function|static struct net_buf_pool *data_udp_pool(void)
DECL|data_udp_pool|macro|data_udp_pool
DECL|device_factory_default_cb|function|static int device_factory_default_cb(u16_t obj_inst_id)
DECL|device_reboot_cb|function|static int device_reboot_cb(u16_t obj_inst_id)
DECL|firmware_block_received_cb|function|static int firmware_block_received_cb(u16_t obj_inst_id, u8_t *data, u16_t data_len, bool last_block, size_t total_size)
DECL|firmware_update_cb|function|static int firmware_update_cb(u16_t obj_inst_id)
DECL|init_led_device|function|static int init_led_device(void)
DECL|led_dev|variable|led_dev
DECL|led_on_off_cb|function|static int led_on_off_cb(u16_t obj_inst_id, u8_t *data, u16_t data_len, bool last_block, size_t total_size)
DECL|led_state|variable|led_state
DECL|lwm2m_setup|function|static int lwm2m_setup(void)
DECL|main|function|void main(void)
DECL|pwrsrc_bat|variable|pwrsrc_bat
DECL|pwrsrc_usb|variable|pwrsrc_usb
DECL|quit_lock|variable|quit_lock
DECL|set_endpoint_name|function|static int set_endpoint_name(char *ep_name, sa_family_t family)
DECL|setup_net_app_ctx|function|int setup_net_app_ctx(struct net_app_ctx *ctx, const char *peer)
DECL|tx_udp_slab|function|static struct k_mem_slab *tx_udp_slab(void)
DECL|tx_udp_slab|macro|tx_udp_slab
DECL|udp4|variable|udp4
DECL|udp6|variable|udp6
DECL|usb_current|variable|usb_current
DECL|usb_voltage|variable|usb_voltage
