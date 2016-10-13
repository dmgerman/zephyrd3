DECL|QM_USB_CONFIGURED|enumerator|QM_USB_CONFIGURED, /**< USB configuration completed. */
DECL|QM_USB_CONNECTED|enumerator|QM_USB_CONNECTED, /**< USB connection ready and enumeration done. */
DECL|QM_USB_DISCONNECTED|enumerator|QM_USB_DISCONNECTED, /**< USB connection lost. */
DECL|QM_USB_EP_BULK|enumerator|QM_USB_EP_BULK = 2, /**< Bulk type endpoint. */
DECL|QM_USB_EP_CONTROL|enumerator|QM_USB_EP_CONTROL = 0, /**< Control endpoint. */
DECL|QM_USB_EP_DATA_IN|enumerator|QM_USB_EP_DATA_IN /**< In transaction on this EP. */
DECL|QM_USB_EP_DATA_OUT|enumerator|QM_USB_EP_DATA_OUT, /**< Out transaction on this EP. */
DECL|QM_USB_EP_INTERRUPT|enumerator|QM_USB_EP_INTERRUPT = 3 /**< Interrupt type endpoint. */
DECL|QM_USB_EP_SETUP|enumerator|QM_USB_EP_SETUP, /**< SETUP received. */
DECL|QM_USB_RESET|enumerator|QM_USB_RESET, /**< USB reset. */
DECL|QM_USB_RESUME|enumerator|QM_USB_RESUME, /**< USB connection resumed by the HOST. */
DECL|QM_USB_SUSPEND|enumerator|QM_USB_SUSPEND, /**< USB connection suspended by the HOST. */
DECL|__QM_USB_H__|macro|__QM_USB_H__
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data, int error, qm_usb_ep_idx_t ep,
DECL|ep|member|qm_usb_ep_idx_t ep;
DECL|max_packet_size|member|uint16_t max_packet_size; /**< Endpoint max packet size. */
DECL|qm_usb_ep_config_t|typedef|} qm_usb_ep_config_t;
DECL|qm_usb_ep_status_t|typedef|} qm_usb_ep_status_t;
DECL|qm_usb_ep_type_t|typedef|} qm_usb_ep_type_t;
DECL|qm_usb_status_callback_t|typedef|typedef void (*qm_usb_status_callback_t)(void *data, int error,
DECL|qm_usb_status_t|typedef|} qm_usb_status_t;
DECL|type|member|qm_usb_ep_type_t type; /**< Endpoint type. */
