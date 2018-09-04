DECL|DEFAULT_PORT|macro|DEFAULT_PORT
DECL|DNS_PORT|macro|DNS_PORT
DECL|DNS_SLEEP_MSECS|macro|DNS_SLEEP_MSECS
DECL|LED0_GPIO_CONTROLLER|macro|LED0_GPIO_CONTROLLER
DECL|LED0_GPIO_CONTROLLER|macro|LED0_GPIO_CONTROLLER
DECL|LED0_GPIO_PIN|macro|LED0_GPIO_PIN
DECL|LED_GPIO_NAME|macro|LED_GPIO_NAME
DECL|LED_PIN|macro|LED_PIN
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|NATS_AF_INET|macro|NATS_AF_INET
DECL|NATS_AF_INET|macro|NATS_AF_INET
DECL|NATS_LOCAL_IP_ADDR|macro|NATS_LOCAL_IP_ADDR
DECL|NATS_LOCAL_IP_ADDR|macro|NATS_LOCAL_IP_ADDR
DECL|NATS_LOCAL_IP_ADDR|macro|NATS_LOCAL_IP_ADDR
DECL|NATS_LOCAL_IP_ADDR|macro|NATS_LOCAL_IP_ADDR
DECL|NATS_PEER_IP_ADDR|macro|NATS_PEER_IP_ADDR
DECL|NATS_PEER_IP_ADDR|macro|NATS_PEER_IP_ADDR
DECL|NATS_PEER_IP_ADDR|macro|NATS_PEER_IP_ADDR
DECL|NATS_PEER_IP_ADDR|macro|NATS_PEER_IP_ADDR
DECL|NATS_SOCKADDR_IN|macro|NATS_SOCKADDR_IN
DECL|NATS_SOCKADDR_IN|macro|NATS_SOCKADDR_IN
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|connect|function|static int connect(struct nats *nats, u16_t port)
DECL|fake_led|variable|fake_led
DECL|in_addr_set|function|static int in_addr_set(sa_family_t family, const char *ip_addr, int port, struct sockaddr *_sockaddr)
DECL|initialize_hardware|function|static void initialize_hardware(void)
DECL|initialize_network|function|static void initialize_network(void)
DECL|led0|variable|led0
DECL|main|function|void main(void)
DECL|nats_client|function|static void nats_client(void)
DECL|on_msg_received|function|static int on_msg_received(const struct nats *nats, const struct nats_msg *msg)
DECL|panic|function|static void panic(const char *msg)
DECL|read_led|function|static bool read_led(void)
DECL|write_led|function|static void write_led(const struct nats *nats, const struct nats_msg *msg, bool state)
