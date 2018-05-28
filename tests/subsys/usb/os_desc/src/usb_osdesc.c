DECL|MSOS_STRING_LENGTH|macro|MSOS_STRING_LENGTH
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bLength|member|u8_t bLength;
DECL|bMS_VendorCode|member|u8_t bMS_VendorCode;
DECL|bPad|member|u8_t bPad;
DECL|bString|member|u8_t bString[MSOS_STRING_LENGTH - 4];
DECL|msosv1_string_descriptor|variable|msosv1_string_descriptor
DECL|os_desc|variable|os_desc
DECL|string_desc|struct|static struct string_desc {
DECL|test_handle_os_desc|function|bool test_handle_os_desc(void)
DECL|test_main|function|void test_main(void)
DECL|test_osdesc_feature|function|void test_osdesc_feature(void)
DECL|test_osdesc_string|function|void test_osdesc_string(void)
DECL|test_register_osdesc|function|void test_register_osdesc(void)
