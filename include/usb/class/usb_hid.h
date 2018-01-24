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
DECL|get_idle|member|int (*get_idle)(struct usb_setup_packet *setup, s32_t *len,
DECL|get_protocol|member|int (*get_protocol)(struct usb_setup_packet *setup, s32_t *len,
DECL|get_report|member|int (*get_report)(struct usb_setup_packet *setup, s32_t *len,
DECL|hid_ops|struct|struct hid_ops {
DECL|set_idle|member|int (*set_idle)(struct usb_setup_packet *setup, s32_t *len,
DECL|set_protocol|member|int (*set_protocol)(struct usb_setup_packet *setup, s32_t *len,
DECL|set_report|member|int (*set_report)(struct usb_setup_packet *setup, s32_t *len,
DECL|subdesc|member|struct usb_hid_class_subdescriptor subdesc[1];
DECL|usb_hid_class_subdescriptor|struct|struct usb_hid_class_subdescriptor {
DECL|usb_hid_descriptor|struct|struct usb_hid_descriptor {
DECL|wDescriptorLength|member|u16_t wDescriptorLength;
