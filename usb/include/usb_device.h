DECL|MAX_PACKET_SIZE0|macro|MAX_PACKET_SIZE0
DECL|USB_DEVICE_H_|macro|USB_DEVICE_H_
DECL|bRequest|member|uint8_t bRequest; /**< specific request */
DECL|bmRequestType|member|uint8_t bmRequestType; /**< characteristics of the specific request */
DECL|cb_usb_status|member|usb_status_callback cb_usb_status;
DECL|class_handler|member|usb_request_handler class_handler;
DECL|custom_handler|member|usb_request_handler custom_handler;
DECL|endpoint|member|struct usb_ep_cfg_data *endpoint;
DECL|ep_addr|member|uint8_t ep_addr;
DECL|ep_cb|member|usb_ep_callback ep_cb;
DECL|interface|member|struct usb_interface_cfg_data interface;
DECL|num_endpoints|member|uint8_t num_endpoints;
DECL|payload_data|member|uint8_t *payload_data;
DECL|usb_cfg_data|struct|struct usb_cfg_data {
DECL|usb_device_description|member|const uint8_t *usb_device_description;
DECL|usb_ep_callback|typedef|typedef void (*usb_ep_callback)(uint8_t ep,
DECL|usb_ep_cfg_data|struct|struct usb_ep_cfg_data {
DECL|usb_interface_cfg_data|struct|struct usb_interface_cfg_data {
DECL|usb_request_handler|typedef|typedef int (*usb_request_handler) (struct usb_setup_packet *detup,
DECL|usb_setup_packet|struct|struct usb_setup_packet {
DECL|usb_status_callback|typedef|typedef void (*usb_status_callback)(enum usb_dc_status_code status_code);
DECL|vendor_data|member|uint8_t *vendor_data;
DECL|vendor_handler|member|usb_request_handler vendor_handler;
DECL|wIndex|member|uint16_t wIndex; /**< request specific parameter */
DECL|wLength|member|uint16_t wLength; /**< length of data transferred in data phase */
DECL|wValue|member|uint16_t wValue; /**< request specific parameter */
