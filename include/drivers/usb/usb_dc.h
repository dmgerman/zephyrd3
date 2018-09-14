DECL|USB_DC_CLEAR_HALT|enumerator|USB_DC_CLEAR_HALT,
DECL|USB_DC_CONFIGURED|enumerator|USB_DC_CONFIGURED,
DECL|USB_DC_CONNECTED|enumerator|USB_DC_CONNECTED,
DECL|USB_DC_DISCONNECTED|enumerator|USB_DC_DISCONNECTED,
DECL|USB_DC_EP_BULK|enumerator|USB_DC_EP_BULK,
DECL|USB_DC_EP_CONTROL|enumerator|USB_DC_EP_CONTROL = 0,
DECL|USB_DC_EP_DATA_IN|enumerator|USB_DC_EP_DATA_IN
DECL|USB_DC_EP_DATA_OUT|enumerator|USB_DC_EP_DATA_OUT,
DECL|USB_DC_EP_INTERRUPT|enumerator|USB_DC_EP_INTERRUPT
DECL|USB_DC_EP_ISOCHRONOUS|enumerator|USB_DC_EP_ISOCHRONOUS,
DECL|USB_DC_EP_SETUP|enumerator|USB_DC_EP_SETUP,
DECL|USB_DC_ERROR|enumerator|USB_DC_ERROR,
DECL|USB_DC_INTERFACE|enumerator|USB_DC_INTERFACE,
DECL|USB_DC_RESET|enumerator|USB_DC_RESET,
DECL|USB_DC_RESUME|enumerator|USB_DC_RESUME,
DECL|USB_DC_SET_HALT|enumerator|USB_DC_SET_HALT,
DECL|USB_DC_SUSPEND|enumerator|USB_DC_SUSPEND,
DECL|USB_DC_UNKNOWN|enumerator|USB_DC_UNKNOWN
DECL|USB_EP_DIR_IN|macro|USB_EP_DIR_IN
DECL|USB_EP_DIR_MASK|macro|USB_EP_DIR_MASK
DECL|USB_EP_DIR_OUT|macro|USB_EP_DIR_OUT
DECL|ZEPHYR_INCLUDE_DRIVERS_USB_USB_DC_H_|macro|ZEPHYR_INCLUDE_DRIVERS_USB_USB_DC_H_
DECL|ep_addr|member|u8_t ep_addr;
DECL|ep_mps|member|u16_t ep_mps;
DECL|ep_type|member|enum usb_dc_ep_type ep_type;
DECL|usb_dc_ep_callback|typedef|typedef void (*usb_dc_ep_callback)(u8_t ep,
DECL|usb_dc_ep_cb_status_code|enum|enum usb_dc_ep_cb_status_code {
DECL|usb_dc_ep_cfg_data|struct|struct usb_dc_ep_cfg_data {
DECL|usb_dc_ep_type|enum|enum usb_dc_ep_type {
DECL|usb_dc_status_callback|typedef|typedef void (*usb_dc_status_callback)(enum usb_dc_status_code cb_status,
DECL|usb_dc_status_code|enum|enum usb_dc_status_code {
