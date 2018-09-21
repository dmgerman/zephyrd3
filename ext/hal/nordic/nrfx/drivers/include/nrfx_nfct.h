DECL|NRFX_NFCT_ACTIVE_STATE_DEFAULT|enumerator|NRFX_NFCT_ACTIVE_STATE_DEFAULT, ///< NFC Tag is either sleeping or idle, depending on the previous state before being selected by a poller.
DECL|NRFX_NFCT_ACTIVE_STATE_IDLE|enumerator|NRFX_NFCT_ACTIVE_STATE_IDLE = NRF_NFCT_TASK_GOIDLE, ///< NFC Tag is activated and idle (not selected by a reader).
DECL|NRFX_NFCT_ACTIVE_STATE_SLEEP|enumerator|NRFX_NFCT_ACTIVE_STATE_SLEEP = NRF_NFCT_TASK_GOSLEEP, ///< NFC Tag is sleeping.
DECL|NRFX_NFCT_ERROR_FRAMEDELAYTIMEOUT|enumerator|NRFX_NFCT_ERROR_FRAMEDELAYTIMEOUT, ///< No response frame was transmitted to the poller in the transmit window.
DECL|NRFX_NFCT_ERROR_NUM|enumerator|NRFX_NFCT_ERROR_NUM, ///< Total number of possible errors.
DECL|NRFX_NFCT_EVT_ERROR|enumerator|NRFX_NFCT_EVT_ERROR = NRF_NFCT_INT_ERROR_MASK, ///< Error occurred in an NFC communication.
DECL|NRFX_NFCT_EVT_FIELD_DETECTED|enumerator|NRFX_NFCT_EVT_FIELD_DETECTED = NRF_NFCT_INT_FIELDDETECTED_MASK, ///< External NFC field is detected.
DECL|NRFX_NFCT_EVT_FIELD_LOST|enumerator|NRFX_NFCT_EVT_FIELD_LOST = NRF_NFCT_INT_FIELDLOST_MASK, ///< External NFC Field is lost.
DECL|NRFX_NFCT_EVT_RX_FRAMEEND|enumerator|NRFX_NFCT_EVT_RX_FRAMEEND = NRF_NFCT_INT_RXFRAMEEND_MASK, ///< Data frame is received.
DECL|NRFX_NFCT_EVT_RX_FRAMESTART|enumerator|NRFX_NFCT_EVT_RX_FRAMESTART = NRF_NFCT_INT_RXFRAMESTART_MASK, ///< Data frame reception started.
DECL|NRFX_NFCT_EVT_SELECTED|enumerator|NRFX_NFCT_EVT_SELECTED = NRF_NFCT_INT_SELECTED_MASK, ///< Tag was selected by the poller.
DECL|NRFX_NFCT_EVT_TX_FRAMEEND|enumerator|NRFX_NFCT_EVT_TX_FRAMEEND = NRF_NFCT_INT_TXFRAMEEND_MASK, ///< Data frame is transmitted.
DECL|NRFX_NFCT_EVT_TX_FRAMESTART|enumerator|NRFX_NFCT_EVT_TX_FRAMESTART = NRF_NFCT_INT_TXFRAMESTART_MASK, ///< Data frame transmission started.
DECL|NRFX_NFCT_H__|macro|NRFX_NFCT_H__
DECL|NRFX_NFCT_NFCID1_DEFAULT_LEN|macro|NRFX_NFCT_NFCID1_DEFAULT_LEN
DECL|NRFX_NFCT_NFCID1_DOUBLE_SIZE|macro|NRFX_NFCT_NFCID1_DOUBLE_SIZE
DECL|NRFX_NFCT_NFCID1_SINGLE_SIZE|macro|NRFX_NFCT_NFCID1_SINGLE_SIZE
DECL|NRFX_NFCT_NFCID1_TRIPLE_SIZE|macro|NRFX_NFCT_NFCID1_TRIPLE_SIZE
DECL|NRFX_NFCT_PARAM_ID_FDT|enumerator|NRFX_NFCT_PARAM_ID_FDT, ///< NFC-A Frame Delay Time parameter.
DECL|NRFX_NFCT_PARAM_ID_NFCID1|enumerator|NRFX_NFCT_PARAM_ID_NFCID1, ///< NFC-A NFCID1 setting (NFC tag identifier).
DECL|NRFX_NFCT_PARAM_ID_SEL_RES|enumerator|NRFX_NFCT_PARAM_ID_SEL_RES, ///< Value of the 'Protocol' field in the NFC-A SEL_RES frame.
DECL|NRFX_NFCT_STATE_ACTIVATED|enumerator|NRFX_NFCT_STATE_ACTIVATED = NRF_NFCT_TASK_ACTIVATE, ///< NFC Tag is powered-up (see @ref nrfx_nfct_active_state_t for possible substates).
DECL|NRFX_NFCT_STATE_DISABLED|enumerator|NRFX_NFCT_STATE_DISABLED = NRF_NFCT_TASK_DISABLE, ///< NFC Tag is disabled (no sensing of an external NFC field).
DECL|NRFX_NFCT_STATE_SENSING|enumerator|NRFX_NFCT_STATE_SENSING = NRF_NFCT_TASK_SENSE, ///< NFC Tag is sensing whether there is an external NFC field.
DECL|cb|member|nrfx_nfct_handler_t cb; ///< Callback.
DECL|data_size|member|uint32_t data_size; ///< RX/TX buffer size.
DECL|data|member|} data;
DECL|error|member|nrfx_nfct_evt_error_t error; ///< Error data. Filled when nrfx_nfct_evt_t::evt_id is @ref NRFX_NFCT_EVT_ERROR.
DECL|evt_id|member|nrfx_nfct_evt_id_t evt_id; ///< Type of event.
DECL|fdt|member|uint32_t fdt; ///< NFC-A Frame Delay Time. Filled when nrfx_nfct_param_t::id is @ref NRFX_NFCT_PARAM_ID_FDT.
DECL|id_size|member|uint8_t id_size; ///< NFCID1 size.
DECL|id|member|nrfx_nfct_param_id_t id; ///< Type of parameter.
DECL|nfcid1|member|nrfx_nfct_nfcid1_t nfcid1; ///< NFC-A NFCID1 value (tag identifier). Filled when nrfx_nfct_param_t::id is @ref NRFX_NFCT_PARAM_ID_NFCID1.
DECL|nrfx_nfct_active_state_t|typedef|} nrfx_nfct_active_state_t;
DECL|nrfx_nfct_config_t|typedef|} nrfx_nfct_config_t;
DECL|nrfx_nfct_data_desc_t|typedef|} nrfx_nfct_data_desc_t;
DECL|nrfx_nfct_error_t|typedef|} nrfx_nfct_error_t;
DECL|nrfx_nfct_evt_error_t|typedef|} nrfx_nfct_evt_error_t;
DECL|nrfx_nfct_evt_id_t|typedef|} nrfx_nfct_evt_id_t;
DECL|nrfx_nfct_evt_rx_frameend_t|typedef|} nrfx_nfct_evt_rx_frameend_t;
DECL|nrfx_nfct_evt_tx_framestart_t|typedef|} nrfx_nfct_evt_tx_framestart_t;
DECL|nrfx_nfct_evt_t|typedef|} nrfx_nfct_evt_t;
DECL|nrfx_nfct_handler_t|typedef|typedef void (*nrfx_nfct_handler_t)(nrfx_nfct_evt_t const * p_event);
DECL|nrfx_nfct_nfcid1_t|typedef|} nrfx_nfct_nfcid1_t;
DECL|nrfx_nfct_param_id_t|typedef|} nrfx_nfct_param_id_t;
DECL|nrfx_nfct_param_t|typedef|} nrfx_nfct_param_t;
DECL|nrfx_nfct_state_t|typedef|} nrfx_nfct_state_t;
DECL|p_data|member|uint8_t const * p_data; ///< RX/TX buffer.
DECL|p_id|member|uint8_t const * p_id; ///< NFCID1 data.
DECL|params|member|} params;
DECL|reason|member|nrfx_nfct_error_t reason; ///< Reason for error.
DECL|rx_data|member|nrfx_nfct_data_desc_t rx_data; ///< RX buffer.
DECL|rx_frameend|member|nrfx_nfct_evt_rx_frameend_t rx_frameend; ///< End of the RX frame data. Filled when nrfx_nfct_evt_t::evt_id is @ref NRFX_NFCT_EVT_RX_FRAMEEND.
DECL|rx_status|member|uint32_t rx_status; ///< RX error status.
DECL|rxtx_int_mask|member|uint32_t rxtx_int_mask; ///< Mask for enabling RX/TX events. Indicate which events must be forwarded to the upper layer by using @ref nrfx_nfct_evt_id_t. By default, no events are enabled. */
DECL|sel_res_protocol|member|uint8_t sel_res_protocol; ///< NFC-A value of the 'Protocol' field in the SEL_RES frame. Filled when nrfx_nfct_param_t::id is @ref NRFX_NFCT_PARAM_ID_SEL_RES.
DECL|tx_data|member|nrfx_nfct_data_desc_t tx_data; ///< TX buffer.
DECL|tx_framestart|member|nrfx_nfct_evt_tx_framestart_t tx_framestart; ///< Start of the TX frame data. Filled when nrfx_nfct_evt_t::evt_id is @ref NRFX_NFCT_EVT_TX_FRAMESTART.
