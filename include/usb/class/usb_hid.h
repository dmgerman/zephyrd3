DECL|COLLECTION_APPLICATION|macro|COLLECTION_APPLICATION
DECL|HID_GET_IDLE|macro|HID_GET_IDLE
DECL|HID_GET_PROTOCOL|macro|HID_GET_PROTOCOL
DECL|HID_GET_REPORT|macro|HID_GET_REPORT
DECL|HID_GI_LOGICAL_MAX|macro|HID_GI_LOGICAL_MAX
DECL|HID_GI_LOGICAL_MIN|macro|HID_GI_LOGICAL_MIN
DECL|HID_GI_REPORT_COUNT|macro|HID_GI_REPORT_COUNT
DECL|HID_GI_REPORT_ID|macro|HID_GI_REPORT_ID
DECL|HID_GI_REPORT_SIZE|macro|HID_GI_REPORT_SIZE
DECL|HID_GI_USAGE_PAGE|macro|HID_GI_USAGE_PAGE
DECL|HID_GLOBAL_ITEM|macro|HID_GLOBAL_ITEM
DECL|HID_ITEM|macro|HID_ITEM
DECL|HID_LI_USAGE|macro|HID_LI_USAGE
DECL|HID_LOCAL_ITEM|macro|HID_LOCAL_ITEM
DECL|HID_MAIN_ITEM|macro|HID_MAIN_ITEM
DECL|HID_MI_COLLECTION_END|macro|HID_MI_COLLECTION_END
DECL|HID_MI_COLLECTION|macro|HID_MI_COLLECTION
DECL|HID_MI_INPUT|macro|HID_MI_INPUT
DECL|HID_MI_OUTPUT|macro|HID_MI_OUTPUT
DECL|HID_SET_IDLE|macro|HID_SET_IDLE
DECL|HID_SET_PROTOCOL|macro|HID_SET_PROTOCOL
DECL|HID_SET_REPORT|macro|HID_SET_REPORT
DECL|ITEM_GLOBAL|macro|ITEM_GLOBAL
DECL|ITEM_LOCAL|macro|ITEM_LOCAL
DECL|ITEM_MAIN|macro|ITEM_MAIN
DECL|ITEM_TAG_COLLECTION_END|macro|ITEM_TAG_COLLECTION_END
DECL|ITEM_TAG_COLLECTION|macro|ITEM_TAG_COLLECTION
DECL|ITEM_TAG_INPUT|macro|ITEM_TAG_INPUT
DECL|ITEM_TAG_LOGICAL_MAX|macro|ITEM_TAG_LOGICAL_MAX
DECL|ITEM_TAG_LOGICAL_MIN|macro|ITEM_TAG_LOGICAL_MIN
DECL|ITEM_TAG_OUTPUT|macro|ITEM_TAG_OUTPUT
DECL|ITEM_TAG_REPORT_COUNT|macro|ITEM_TAG_REPORT_COUNT
DECL|ITEM_TAG_REPORT_ID|macro|ITEM_TAG_REPORT_ID
DECL|ITEM_TAG_REPORT_SIZE|macro|ITEM_TAG_REPORT_SIZE
DECL|ITEM_TAG_USAGE_PAGE|macro|ITEM_TAG_USAGE_PAGE
DECL|ITEM_TAG_USAGE|macro|ITEM_TAG_USAGE
DECL|USAGE_GEN_DESKTOP_UNDEFINED|macro|USAGE_GEN_DESKTOP_UNDEFINED
DECL|USAGE_GEN_DESKTOP|macro|USAGE_GEN_DESKTOP
DECL|__USB_HID_H__|macro|__USB_HID_H__
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|bCountryCode|member|u8_t bCountryCode;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bDescriptorType|member|u8_t bDescriptorType;
DECL|bLength|member|u8_t bLength;
DECL|bNumDescriptors|member|u8_t bNumDescriptors;
DECL|bcdHID|member|u16_t bcdHID;
DECL|get_idle|member|hid_cb_t get_idle;
DECL|get_protocol|member|hid_cb_t get_protocol;
DECL|get_report|member|hid_cb_t get_report;
DECL|hid_cb_t|typedef|typedef int (*hid_cb_t)(struct usb_setup_packet *setup, s32_t *len,
DECL|hid_ops|struct|struct hid_ops {
DECL|set_idle|member|hid_cb_t set_idle;
DECL|set_protocol|member|hid_cb_t set_protocol;
DECL|set_report|member|hid_cb_t set_report;
DECL|subdesc|member|struct usb_hid_class_subdescriptor subdesc[1];
DECL|usb_hid_class_subdescriptor|struct|struct usb_hid_class_subdescriptor {
DECL|usb_hid_descriptor|struct|struct usb_hid_descriptor {
DECL|wDescriptorLength|member|u16_t wDescriptorLength;
