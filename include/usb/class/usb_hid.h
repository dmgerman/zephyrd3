DECL|HID_GET_IDLE|macro|HID_GET_IDLE
DECL|HID_GET_PROTOCOL|macro|HID_GET_PROTOCOL
DECL|HID_GET_REPORT|macro|HID_GET_REPORT
DECL|HID_SET_IDLE|macro|HID_SET_IDLE
DECL|HID_SET_PROTOCOL|macro|HID_SET_PROTOCOL
DECL|HID_SET_REPORT|macro|HID_SET_REPORT
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
