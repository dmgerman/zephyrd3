DECL|UIP_PACKETQUEUE_H|macro|UIP_PACKETQUEUE_H
DECL|handle|member|struct uip_packetqueue_handle *handle;
DECL|lifetimer|member|struct ctimer lifetimer;
DECL|next|member|struct uip_ds6_queued_packet *next;
DECL|packet|member|struct uip_packetqueue_packet *packet;
DECL|queue_buf_len|member|uint16_t queue_buf_len;
DECL|queue_buf|member|uint8_t queue_buf[UIP_BUFSIZE - UIP_LLH_LEN];
DECL|uip_packetqueue_handle|struct|struct uip_packetqueue_handle {
DECL|uip_packetqueue_packet|struct|struct uip_packetqueue_packet {
