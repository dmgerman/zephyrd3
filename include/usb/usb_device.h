DECL|MAX_PACKET_SIZE0|macro|MAX_PACKET_SIZE0
DECL|USB_DEVICE_H_|macro|USB_DEVICE_H_
DECL|USB_TRANS_NO_ZLP|macro|USB_TRANS_NO_ZLP
DECL|USB_TRANS_READ|macro|USB_TRANS_READ
DECL|USB_TRANS_WRITE|macro|USB_TRANS_WRITE
DECL|bRequest|member|u8_t bRequest; /**< specific request */
DECL|bmRequestType|member|u8_t bmRequestType; /**< characteristics of the specific request */
DECL|cb_usb_status|member|usb_status_callback cb_usb_status;
DECL|class_handler|member|usb_request_handler class_handler;
DECL|custom_handler|member|usb_request_handler custom_handler;
DECL|endpoint|member|struct usb_ep_cfg_data *endpoint;
DECL|ep_addr|member|u8_t ep_addr;
DECL|ep_cb|member|usb_ep_callback ep_cb;
DECL|interface|member|struct usb_interface_cfg_data interface;
DECL|num_endpoints|member|u8_t num_endpoints;
DECL|payload_data|member|u8_t *payload_data;
DECL|usb_cfg_data|struct|struct usb_cfg_data {
DECL|usb_device_description|member|const u8_t *usb_device_description;
DECL|usb_ep_callback|typedef|typedef void (*usb_ep_callback)(u8_t ep,
DECL|usb_ep_cfg_data|struct|struct usb_ep_cfg_data {
DECL|usb_interface_cfg_data|struct|struct usb_interface_cfg_data {
DECL|usb_request_handler|typedef|typedef int (*usb_request_handler) (struct usb_setup_packet *detup,
DECL|usb_setup_packet|struct|struct usb_setup_packet {
DECL|usb_status_callback|typedef|typedef void (*usb_status_callback)(enum usb_dc_status_code status_code,
DECL|usb_transfer_callback|typedef|typedef void (*usb_transfer_callback)(u8_t ep, int tsize, void *priv);
DECL|vendor_data|member|u8_t *vendor_data;
DECL|vendor_handler|member|usb_request_handler vendor_handler;
DECL|wIndex|member|u16_t wIndex; /**< request specific parameter */
DECL|wLength|member|u16_t wLength; /**< length of data transferred in data phase */
DECL|wValue|member|u16_t wValue; /**< request specific parameter */
