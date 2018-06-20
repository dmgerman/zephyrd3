DECL|CDC_ECM_INT_EP_ADDR|macro|CDC_ECM_INT_EP_ADDR
DECL|CDC_ECM_IN_EP_ADDR|macro|CDC_ECM_IN_EP_ADDR
DECL|CDC_ECM_OUT_EP_ADDR|macro|CDC_ECM_OUT_EP_ADDR
DECL|CDC_EEM_IN_EP_ADDR|macro|CDC_EEM_IN_EP_ADDR
DECL|CDC_EEM_OUT_EP_ADDR|macro|CDC_EEM_OUT_EP_ADDR
DECL|NETUSB_MTU|macro|NETUSB_MTU
DECL|RNDIS_INT_EP_ADDR|macro|RNDIS_INT_EP_ADDR
DECL|RNDIS_IN_EP_ADDR|macro|RNDIS_IN_EP_ADDR
DECL|RNDIS_OUT_EP_ADDR|macro|RNDIS_OUT_EP_ADDR
DECL|class_handler|member|int (*class_handler)(struct usb_setup_packet *setup, s32_t *len,
DECL|connect_media|member|int (*connect_media)(bool status);
DECL|ecm_function|variable|ecm_function
DECL|eem_function|variable|eem_function
DECL|ep|member|struct usb_ep_cfg_data *ep;
DECL|init|member|int (*init)(void);
DECL|netusb_function|struct|struct netusb_function {
DECL|num_ep|member|int num_ep;
DECL|rndis_function|variable|rndis_function
DECL|send_pkt|member|int (*send_pkt)(struct net_pkt *pkt);
DECL|status_cb|member|void (*status_cb)(enum usb_dc_status_code status, u8_t *param);
