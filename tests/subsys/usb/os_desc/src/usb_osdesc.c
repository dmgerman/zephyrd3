DECL|MSOS_STRING_LENGTH|macro|MSOS_STRING_LENGTH
DECL|Reserved1|member|u8_t Reserved1;
DECL|Reserved2|member|u8_t Reserved2[6];
DECL|Reserved|member|u8_t Reserved[7];
DECL|bCount|member|u8_t bCount;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bFirstInterfaceNumber|member|u8_t bFirstInterfaceNumber;
DECL|bLength|member|u8_t bLength;
DECL|bMS_VendorCode|member|u8_t bMS_VendorCode;
DECL|bPad|member|u8_t bPad;
DECL|bString|member|u8_t bString[MSOS_STRING_LENGTH - 4];
DECL|bcdVersion|member|u16_t bcdVersion;
DECL|compat_id_desc|struct|static struct compat_id_desc {
DECL|compat_id_func|struct|struct compat_id_func {
DECL|compatibleID|member|u8_t compatibleID[8];
DECL|dwLength|member|u32_t dwLength;
DECL|func|member|} __packed func[1];
DECL|msosv1_compatid_descriptor|variable|msosv1_compatid_descriptor
DECL|msosv1_string_descriptor|variable|msosv1_string_descriptor
DECL|os_desc|variable|os_desc
DECL|string_desc|struct|static struct string_desc {
DECL|subCompatibleID|member|u8_t subCompatibleID[8];
DECL|test_handle_os_desc_feature|function|static void test_handle_os_desc_feature(void)
DECL|test_handle_os_desc|function|static void test_handle_os_desc(void)
DECL|test_main|function|void test_main(void)
DECL|test_osdesc_feature|function|static void test_osdesc_feature(void)
DECL|test_osdesc_string|function|static void test_osdesc_string(void)
DECL|test_register_osdesc|function|void test_register_osdesc(void)
DECL|wIndex|member|u16_t wIndex;
