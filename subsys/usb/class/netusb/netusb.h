DECL|class_handler|member|int (*class_handler)(struct usb_setup_packet *setup, s32_t *len,
DECL|connect_media|member|int (*connect_media)(bool status);
DECL|ep|member|struct usb_ep_cfg_data *ep;
DECL|netusb_function|struct|struct netusb_function {
DECL|num_ep|member|int num_ep;
DECL|send_pkt|member|int (*send_pkt)(struct net_pkt *pkt);
