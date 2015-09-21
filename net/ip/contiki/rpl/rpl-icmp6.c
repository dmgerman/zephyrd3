DECL|DEBUG|macro|DEBUG
DECL|RPL_DIO_GROUNDED|macro|RPL_DIO_GROUNDED
DECL|RPL_DIO_MOP_MASK|macro|RPL_DIO_MOP_MASK
DECL|RPL_DIO_MOP_SHIFT|macro|RPL_DIO_MOP_SHIFT
DECL|RPL_DIO_PREFERENCE_MASK|macro|RPL_DIO_PREFERENCE_MASK
DECL|UIP_ICMP_BUF|macro|UIP_ICMP_BUF
DECL|UIP_ICMP_PAYLOAD|macro|UIP_ICMP_PAYLOAD
DECL|UIP_IP_BUF|macro|UIP_IP_BUF
DECL|dao_ack_input|function|dao_ack_input(struct net_buf *buf)
DECL|dao_ack_output|function|dao_ack_output(struct net_buf *buf, rpl_instance_t *instance, uip_ipaddr_t *dest, uint8_t sequence)
DECL|dao_input|function|dao_input(struct net_buf *buf)
DECL|dao_output_target|function|dao_output_target(rpl_parent_t *parent, uip_ipaddr_t *prefix, uint8_t lifetime)
DECL|dao_output|function|dao_output(rpl_parent_t *parent, uint8_t lifetime)
DECL|dao_sequence|variable|dao_sequence
DECL|dio_input|function|dio_input(struct net_buf *buf)
DECL|dio_output|function|dio_output(rpl_instance_t *instance, uip_ipaddr_t *uc_addr)
DECL|dis_input|function|dis_input(struct net_buf *buf)
DECL|dis_output|function|dis_output(struct net_buf *buf, uip_ipaddr_t *addr)
DECL|get16|function|get16(uint8_t *buffer, int pos)
DECL|get32|function|get32(uint8_t *buffer, int pos)
DECL|get_global_addr|function|get_global_addr(uip_ipaddr_t *addr)
DECL|mcast_group|variable|mcast_group
DECL|rpl_icmp6_register_handlers|function|rpl_icmp6_register_handlers()
DECL|set16|function|set16(uint8_t *buffer, int pos, uint16_t value)
DECL|set32|function|set32(uint8_t *buffer, int pos, uint32_t value)
