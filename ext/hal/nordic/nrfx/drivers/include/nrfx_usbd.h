DECL|NRFX_USBD_EPIN0|enumerator|NRFX_USBD_EPIN0 = NRF_USBD_EPIN(0), /**< Endpoint IN 0 */
DECL|NRFX_USBD_EPIN1|enumerator|NRFX_USBD_EPIN1 = NRF_USBD_EPIN(1), /**< Endpoint IN 1 */
DECL|NRFX_USBD_EPIN2|enumerator|NRFX_USBD_EPIN2 = NRF_USBD_EPIN(2), /**< Endpoint IN 2 */
DECL|NRFX_USBD_EPIN3|enumerator|NRFX_USBD_EPIN3 = NRF_USBD_EPIN(3), /**< Endpoint IN 3 */
DECL|NRFX_USBD_EPIN4|enumerator|NRFX_USBD_EPIN4 = NRF_USBD_EPIN(4), /**< Endpoint IN 4 */
DECL|NRFX_USBD_EPIN5|enumerator|NRFX_USBD_EPIN5 = NRF_USBD_EPIN(5), /**< Endpoint IN 5 */
DECL|NRFX_USBD_EPIN6|enumerator|NRFX_USBD_EPIN6 = NRF_USBD_EPIN(6), /**< Endpoint IN 6 */
DECL|NRFX_USBD_EPIN7|enumerator|NRFX_USBD_EPIN7 = NRF_USBD_EPIN(7), /**< Endpoint IN 7 */
DECL|NRFX_USBD_EPIN8|enumerator|NRFX_USBD_EPIN8 = NRF_USBD_EPIN(8), /**< Endpoint IN 8 */
DECL|NRFX_USBD_EPIN|macro|NRFX_USBD_EPIN
DECL|NRFX_USBD_EPOUT0|enumerator|NRFX_USBD_EPOUT0 = NRF_USBD_EPOUT(0), /**< Endpoint OUT 0 */
DECL|NRFX_USBD_EPOUT1|enumerator|NRFX_USBD_EPOUT1 = NRF_USBD_EPOUT(1), /**< Endpoint OUT 1 */
DECL|NRFX_USBD_EPOUT2|enumerator|NRFX_USBD_EPOUT2 = NRF_USBD_EPOUT(2), /**< Endpoint OUT 2 */
DECL|NRFX_USBD_EPOUT3|enumerator|NRFX_USBD_EPOUT3 = NRF_USBD_EPOUT(3), /**< Endpoint OUT 3 */
DECL|NRFX_USBD_EPOUT4|enumerator|NRFX_USBD_EPOUT4 = NRF_USBD_EPOUT(4), /**< Endpoint OUT 4 */
DECL|NRFX_USBD_EPOUT5|enumerator|NRFX_USBD_EPOUT5 = NRF_USBD_EPOUT(5), /**< Endpoint OUT 5 */
DECL|NRFX_USBD_EPOUT6|enumerator|NRFX_USBD_EPOUT6 = NRF_USBD_EPOUT(6), /**< Endpoint OUT 6 */
DECL|NRFX_USBD_EPOUT7|enumerator|NRFX_USBD_EPOUT7 = NRF_USBD_EPOUT(7), /**< Endpoint OUT 7 */
DECL|NRFX_USBD_EPOUT8|enumerator|NRFX_USBD_EPOUT8 = NRF_USBD_EPOUT(8), /**< Endpoint OUT 8 */
DECL|NRFX_USBD_EPOUT|macro|NRFX_USBD_EPOUT
DECL|NRFX_USBD_EPSIZE|macro|NRFX_USBD_EPSIZE
DECL|NRFX_USBD_EP_ABORTED|enumerator|NRFX_USBD_EP_ABORTED, /**< EP0 transfer can be aborted when new setup comes.
DECL|NRFX_USBD_EP_BUSY|enumerator|NRFX_USBD_EP_BUSY, /**< A transfer is in progress. */
DECL|NRFX_USBD_EP_OK|enumerator|NRFX_USBD_EP_OK, /**< No error occured. */
DECL|NRFX_USBD_EP_OVERLOAD|enumerator|NRFX_USBD_EP_OVERLOAD, /**< Received number of bytes cannot fit given buffer.
DECL|NRFX_USBD_EP_WAITING|enumerator|NRFX_USBD_EP_WAITING, /**< Data received, no buffer prepared already - waiting for configured transfer. */
DECL|NRFX_USBD_EVT_CNT|enumerator|NRFX_USBD_EVT_CNT /**< Number of defined events. */
DECL|NRFX_USBD_EVT_EPTRANSFER|enumerator|NRFX_USBD_EVT_EPTRANSFER, /**< For Rx (OUT: Host->Device):
DECL|NRFX_USBD_EVT_RESET|enumerator|NRFX_USBD_EVT_RESET, /**< Reset condition on USB bus detected. */
DECL|NRFX_USBD_EVT_RESUME|enumerator|NRFX_USBD_EVT_RESUME, /**< This device should resume from suspend now. */
DECL|NRFX_USBD_EVT_SETUP|enumerator|NRFX_USBD_EVT_SETUP, /**< Setup frame received and decoded. */
DECL|NRFX_USBD_EVT_SOF|enumerator|NRFX_USBD_EVT_SOF, /**< Start Of Frame event on USB bus detected. */
DECL|NRFX_USBD_EVT_SUSPEND|enumerator|NRFX_USBD_EVT_SUSPEND, /**< This device should go to suspend mode now. */
DECL|NRFX_USBD_EVT_WUREQ|enumerator|NRFX_USBD_EVT_WUREQ, /**< Wakeup request - the USBD peripheral is ready to generate
DECL|NRFX_USBD_FEEDER_BUFFER_SIZE|macro|NRFX_USBD_FEEDER_BUFFER_SIZE
DECL|NRFX_USBD_H__|macro|NRFX_USBD_H__
DECL|NRFX_USBD_ISOSIZE|macro|NRFX_USBD_ISOSIZE
DECL|NRFX_USBD_TRANSFER_IN|macro|NRFX_USBD_TRANSFER_IN
DECL|NRFX_USBD_TRANSFER_OUT|macro|NRFX_USBD_TRANSFER_OUT
DECL|NRFX_USBD_TRANSFER_ZLP_FLAG|enumerator|NRFX_USBD_TRANSFER_ZLP_FLAG = 1U << 0, //!< Add a zero-length packet.
DECL|addr|member|uint32_t addr; //!< Numeric value used internally by the driver.
DECL|bmRequestType|member|uint8_t bmRequestType; //!< byte 0
DECL|bmRequest|member|uint8_t bmRequest; //!< byte 1
DECL|consumer|member|nrfx_usbd_consumer_t consumer; //!< Consumer function pointer.
DECL|data|member|} data;
DECL|eptransfer|member|} eptransfer;
DECL|ep|member|nrfx_usbd_ep_t ep; /**< Endpoint number. */
DECL|ep|member|nrfx_usbd_ep_t ep; /**< Endpoint number. */
DECL|feeder|member|nrfx_usbd_feeder_t feeder; //!< Feeder function pointer.
DECL|flags|member|uint32_t flags; //!< Transfer flags.
DECL|framecnt|member|uint16_t framecnt; /**< Current value of frame counter. */
DECL|handler|member|nrfx_usbd_handler_t handler; //!< Handler for the current transfer, function pointer.
DECL|isocrc|member|} isocrc;
DECL|nrfx_usbd_consumer_t|typedef|typedef bool (*nrfx_usbd_consumer_t)(nrfx_usbd_ep_transfer_t * p_next,
DECL|nrfx_usbd_data_ptr_t|typedef|} nrfx_usbd_data_ptr_t;
DECL|nrfx_usbd_ep_status_t|typedef|} nrfx_usbd_ep_status_t;
DECL|nrfx_usbd_ep_transfer_t|typedef|} nrfx_usbd_ep_transfer_t;
DECL|nrfx_usbd_ep_t|typedef|} nrfx_usbd_ep_t;
DECL|nrfx_usbd_event_handler_t|typedef|typedef void (*nrfx_usbd_event_handler_t)(nrfx_usbd_evt_t const * p_event);
DECL|nrfx_usbd_event_type_t|typedef|} nrfx_usbd_event_type_t;
DECL|nrfx_usbd_evt_t|typedef|} nrfx_usbd_evt_t;
DECL|nrfx_usbd_feeder_t|typedef|typedef bool (*nrfx_usbd_feeder_t)(nrfx_usbd_ep_transfer_t * p_next,
DECL|nrfx_usbd_handler_desc_t|typedef|} nrfx_usbd_handler_desc_t;
DECL|nrfx_usbd_handler_t|typedef|} nrfx_usbd_handler_t;
DECL|nrfx_usbd_setup_t|typedef|} nrfx_usbd_setup_t;
DECL|nrfx_usbd_transfer_flags_t|typedef|} nrfx_usbd_transfer_flags_t;
DECL|nrfx_usbd_transfer_t|typedef|} nrfx_usbd_transfer_t;
DECL|p_context|member|void * p_context; //!< Context for the transfer handler.
DECL|p_data|member|nrfx_usbd_data_ptr_t p_data; //!< Union with available data pointers used by the driver.
DECL|p_data|member|nrfx_usbd_data_ptr_t p_data; //!< Union with available data pointers used by the driver.
DECL|rx|member|void * rx; //!< Writable RX buffer pointer.
DECL|size|member|size_t size; //!< Size of the requested transfer.
DECL|size|member|size_t size; //!< Total size of the requested transfer.
DECL|sof|member|} sof; /**< Data available for @ref NRFX_USBD_EVT_SOF. */
DECL|status|member|nrfx_usbd_ep_status_t status; /**< Status for the endpoint. */
DECL|tx|member|void const * tx; //!< Constant TX buffer pointer.
DECL|type|member|nrfx_usbd_event_type_t type;
DECL|wIndex|member|uint16_t wIndex; //!< byte 4, 5
DECL|wLength|member|uint16_t wLength; //!< byte 6, 7
DECL|wValue|member|uint16_t wValue; //!< byte 2, 3
