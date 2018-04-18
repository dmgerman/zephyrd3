DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|__packed|variable|__packed
DECL|ascii7_to_utf16le|function|void ascii7_to_utf16le(int idx_max, int asci_idx_max, u8_t *buf)
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bLength|member|u8_t bLength;
DECL|bString|member|u8_t bString[ECM_MAC_DESC_LENGTH - 2];
DECL|bString|member|u8_t bString[MFR_DESC_LENGTH - 2];
DECL|bString|member|u8_t bString[PRODUCT_DESC_LENGTH - 2];
DECL|bString|member|u8_t bString[SN_DESC_LENGTH - 2];
DECL|bluetooth_cfg|member|} __packed bluetooth_cfg;
DECL|cdc_acm_cfg|member|} __packed cdc_acm_cfg;
DECL|cdc_ecm_cfg|member|} __packed cdc_ecm_cfg;
DECL|cdc_eem_cfg|member|} __packed cdc_eem_cfg;
DECL|cfg_descr|member|struct usb_cfg_descriptor cfg_descr;
DECL|common_desc|variable|common_desc
DECL|dev_common_descriptor|struct|struct dev_common_descriptor {
DECL|device_descriptor|member|struct usb_device_descriptor device_descriptor;
DECL|hid_cfg|member|} __packed hid_cfg;
DECL|iad_cdc|member|struct usb_association_descriptor iad_cdc;
DECL|iad|member|struct usb_association_descriptor iad;
DECL|iad|member|struct usb_association_descriptor iad;
DECL|iad|member|struct usb_association_descriptor iad;
DECL|if0_acm|member|struct cdc_acm_descriptor if0_acm;
DECL|if0_acm|member|struct cdc_acm_descriptor if0_acm;
DECL|if0_cm|member|struct cdc_cm_descriptor if0_cm;
DECL|if0_cm|member|struct cdc_cm_descriptor if0_cm;
DECL|if0_header|member|struct cdc_header_descriptor if0_header;
DECL|if0_header|member|struct cdc_header_descriptor if0_header;
DECL|if0_header|member|struct cdc_header_descriptor if0_header;
DECL|if0_hid|member|struct usb_hid_descriptor if0_hid;
DECL|if0_in_ep|member|struct usb_ep_descriptor if0_in_ep;
DECL|if0_in_ep|member|struct usb_ep_descriptor if0_in_ep;
DECL|if0_in_ep|member|struct usb_ep_descriptor if0_in_ep;
DECL|if0_int_ep|member|struct usb_ep_descriptor if0_int_ep;
DECL|if0_int_ep|member|struct usb_ep_descriptor if0_int_ep;
DECL|if0_int_ep|member|struct usb_ep_descriptor if0_int_ep;
DECL|if0_int_ep|member|struct usb_ep_descriptor if0_int_ep;
DECL|if0_int_ep|member|struct usb_ep_descriptor if0_int_ep;
DECL|if0_netfun_ecm|member|struct cdc_ecm_descriptor if0_netfun_ecm;
DECL|if0_out_ep|member|struct usb_ep_descriptor if0_out_ep;
DECL|if0_out_ep|member|struct usb_ep_descriptor if0_out_ep;
DECL|if0_out_ep|member|struct usb_ep_descriptor if0_out_ep;
DECL|if0_union|member|struct cdc_union_descriptor if0_union;
DECL|if0_union|member|struct cdc_union_descriptor if0_union;
DECL|if0_union|member|struct cdc_union_descriptor if0_union;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|if1_0|member|struct usb_if_descriptor if1_0;
DECL|if1_1_in_ep|member|struct usb_ep_descriptor if1_1_in_ep;
DECL|if1_1_out_ep|member|struct usb_ep_descriptor if1_1_out_ep;
DECL|if1_1|member|struct usb_if_descriptor if1_1;
DECL|if1_in_ep|member|struct usb_ep_descriptor if1_in_ep;
DECL|if1_in_ep|member|struct usb_ep_descriptor if1_in_ep;
DECL|if1_out_ep|member|struct usb_ep_descriptor if1_out_ep;
DECL|if1_out_ep|member|struct usb_ep_descriptor if1_out_ep;
DECL|if1|member|struct usb_if_descriptor if1;
DECL|if1|member|struct usb_if_descriptor if1;
DECL|lang_descr|member|struct usb_string_descriptor lang_descr;
DECL|mass_cfg|member|} __packed mass_cfg;
DECL|rndis_cfg|member|} __packed rndis_cfg;
DECL|string_descr|member|} __packed string_descr;
DECL|term_descr|member|struct usb_desc_header term_descr;
DECL|usb_bluetooth_config|struct|struct usb_bluetooth_config {
DECL|usb_cdc_acm_config|struct|struct usb_cdc_acm_config {
DECL|usb_cdc_ecm_config|struct|struct usb_cdc_ecm_config {
DECL|usb_cdc_ecm_mac_descriptor|struct|struct usb_cdc_ecm_mac_descriptor {
DECL|usb_cdc_eem_config|struct|struct usb_cdc_eem_config {
DECL|usb_get_device_descriptor|function|u8_t *usb_get_device_descriptor(void)
DECL|usb_hid_config|struct|struct usb_hid_config {
DECL|usb_mass_config|struct|struct usb_mass_config {
DECL|usb_mfr_descriptor|struct|struct usb_mfr_descriptor {
DECL|usb_product_descriptor|struct|struct usb_product_descriptor {
DECL|usb_rndis_config|struct|struct usb_rndis_config {
DECL|usb_set_hid_report_size|function|void usb_set_hid_report_size(u16_t report_desc_size)
DECL|usb_sn_descriptor|struct|struct usb_sn_descriptor {
DECL|usb_string_desription|struct|struct usb_string_desription {
DECL|utf16le_mac|member|} __packed utf16le_mac;
DECL|utf16le_mfr|member|} __packed utf16le_mfr;
DECL|utf16le_product|member|} __packed utf16le_product;
DECL|utf16le_sn|member|} __packed utf16le_sn;
