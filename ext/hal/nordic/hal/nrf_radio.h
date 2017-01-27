DECL|NRF_RADIO_CCA_MODE_CARRIER_AND_ED|enumerator|NRF_RADIO_CCA_MODE_CARRIER_AND_ED = RADIO_CCACTRL_CCAMODE_CarrierAndEdMode, /**< Energy Above Threshold AND Carrier Seen. */
DECL|NRF_RADIO_CCA_MODE_CARRIER_OR_ED|enumerator|NRF_RADIO_CCA_MODE_CARRIER_OR_ED = RADIO_CCACTRL_CCAMODE_CarrierOrEdMode, /**< Energy Above Threshold OR Carrier Seen. */
DECL|NRF_RADIO_CCA_MODE_CARRIER|enumerator|NRF_RADIO_CCA_MODE_CARRIER = RADIO_CCACTRL_CCAMODE_CarrierMode, /**< Carrier Seen. Will report busy whenever compliant IEEE 802.15.4 signal is seen. */
DECL|NRF_RADIO_CCA_MODE_ED|enumerator|NRF_RADIO_CCA_MODE_ED = RADIO_CCACTRL_CCAMODE_EdMode, /**< Energy Above Threshold. Will report busy whenever energy is detected above set threshold. */
DECL|NRF_RADIO_CRC_INCLUDES_ADDR_IEEE802154|enumerator|NRF_RADIO_CRC_INCLUDES_ADDR_IEEE802154 = RADIO_CRCCNF_SKIPADDR_Ieee802154, /**< CRC calculation as per 802.15.4 standard. */
DECL|NRF_RADIO_CRC_INCLUDES_ADDR_INCLUDE|enumerator|NRF_RADIO_CRC_INCLUDES_ADDR_INCLUDE = RADIO_CRCCNF_SKIPADDR_Include, /**< CRC calculation includes address field. */
DECL|NRF_RADIO_CRC_INCLUDES_ADDR_SKIP|enumerator|NRF_RADIO_CRC_INCLUDES_ADDR_SKIP = RADIO_CRCCNF_SKIPADDR_Skip, /**< CRC calculation does not include address field. */
DECL|NRF_RADIO_CRC_STATUS_ERROR|enumerator|NRF_RADIO_CRC_STATUS_ERROR = RADIO_CRCSTATUS_CRCSTATUS_CRCError, /**< Packet received with CRC error. */
DECL|NRF_RADIO_CRC_STATUS_OK|enumerator|NRF_RADIO_CRC_STATUS_OK = RADIO_CRCSTATUS_CRCSTATUS_CRCOk, /**< Packet received with CRC ok. */
DECL|NRF_RADIO_EVENT_ADDRESS|enumerator|NRF_RADIO_EVENT_ADDRESS = offsetof(NRF_RADIO_Type, EVENTS_ADDRESS), /**< Address sent or received. */
DECL|NRF_RADIO_EVENT_BCMATCH|enumerator|NRF_RADIO_EVENT_BCMATCH = offsetof(NRF_RADIO_Type, EVENTS_BCMATCH), /**< Bit counter reached bit count value. */
DECL|NRF_RADIO_EVENT_CCABUSY|enumerator|NRF_RADIO_EVENT_CCABUSY = offsetof(NRF_RADIO_Type, EVENTS_CCABUSY), /**< Wireless medium is busy. */
DECL|NRF_RADIO_EVENT_CCAIDLE|enumerator|NRF_RADIO_EVENT_CCAIDLE = offsetof(NRF_RADIO_Type, EVENTS_CCAIDLE), /**< Wireless medium is idle. */
DECL|NRF_RADIO_EVENT_CLEAR|macro|NRF_RADIO_EVENT_CLEAR
DECL|NRF_RADIO_EVENT_CRCERROR|enumerator|NRF_RADIO_EVENT_CRCERROR = offsetof(NRF_RADIO_Type, EVENTS_CRCERROR), /**< Packet received with incorrect CRC. */
DECL|NRF_RADIO_EVENT_CRCOK|enumerator|NRF_RADIO_EVENT_CRCOK = offsetof(NRF_RADIO_Type, EVENTS_CRCOK), /**< Packet received with correct CRC. */
DECL|NRF_RADIO_EVENT_DISABLED|enumerator|NRF_RADIO_EVENT_DISABLED = offsetof(NRF_RADIO_Type, EVENTS_DISABLED), /**< Radio has been disabled. */
DECL|NRF_RADIO_EVENT_EDEND|enumerator|NRF_RADIO_EVENT_EDEND = offsetof(NRF_RADIO_Type, EVENTS_EDEND), /**< Energy Detection procedure ended. */
DECL|NRF_RADIO_EVENT_END|enumerator|NRF_RADIO_EVENT_END = offsetof(NRF_RADIO_Type, EVENTS_END), /**< Packet transmitted or received. */
DECL|NRF_RADIO_EVENT_FRAMESTART|enumerator|NRF_RADIO_EVENT_FRAMESTART = offsetof(NRF_RADIO_Type, EVENTS_FRAMESTART), /**< IEEE 802.15.4 length field received. */
DECL|NRF_RADIO_EVENT_MHRMATCH|enumerator|NRF_RADIO_EVENT_MHRMATCH = offsetof(NRF_RADIO_Type, EVENTS_MHRMATCH), /**< MAC Header match found. */
DECL|NRF_RADIO_EVENT_READY|enumerator|NRF_RADIO_EVENT_READY = offsetof(NRF_RADIO_Type, EVENTS_READY), /**< Radio has ramped up and is ready to be started. */
DECL|NRF_RADIO_EVENT_RSSIEND|enumerator|NRF_RADIO_EVENT_RSSIEND = offsetof(NRF_RADIO_Type, EVENTS_RSSIEND), /**< Sampling of receive signal strength complete. */
DECL|NRF_RADIO_H__|macro|NRF_RADIO_H__
DECL|NRF_RADIO_INT_ADDRESS_MASK|enumerator|NRF_RADIO_INT_ADDRESS_MASK = RADIO_INTENSET_ADDRESS_Msk, /**< Mask for enabling or disabling an interrupt on ADDRESS event. */
DECL|NRF_RADIO_INT_BCMATCH_MASK|enumerator|NRF_RADIO_INT_BCMATCH_MASK = RADIO_INTENSET_BCMATCH_Msk, /**< Mask for enabling or disabling an interrupt on BCMATCH event. */
DECL|NRF_RADIO_INT_CCABUSY_MASK|enumerator|NRF_RADIO_INT_CCABUSY_MASK = RADIO_INTENSET_CCABUSY_Msk, /**< Mask for enabling or disabling an interrupt on CCABUSY event. */
DECL|NRF_RADIO_INT_CCAIDLE_MASK|enumerator|NRF_RADIO_INT_CCAIDLE_MASK = RADIO_INTENSET_CCAIDLE_Msk, /**< Mask for enabling or disabling an interrupt on CCAIDLE event. */
DECL|NRF_RADIO_INT_CRCERROR_MASK|enumerator|NRF_RADIO_INT_CRCERROR_MASK = RADIO_INTENSET_CRCERROR_Msk, /**< Mask for enabling or disabling an interrupt on CRCERROR event. */
DECL|NRF_RADIO_INT_CRCOK_MASK|enumerator|NRF_RADIO_INT_CRCOK_MASK = RADIO_INTENSET_CRCOK_Msk, /**< Mask for enabling or disabling an interrupt on CRCOK event. */
DECL|NRF_RADIO_INT_DISABLED_MASK|enumerator|NRF_RADIO_INT_DISABLED_MASK = RADIO_INTENSET_DISABLED_Msk, /**< Mask for enabling or disabling an interrupt on DISABLED event. */
DECL|NRF_RADIO_INT_EDEND_MASK|enumerator|NRF_RADIO_INT_EDEND_MASK = RADIO_INTENSET_EDEND_Msk, /**< Mask for enabling or disabling an interrupt on EDEND event. */
DECL|NRF_RADIO_INT_END_MASK|enumerator|NRF_RADIO_INT_END_MASK = RADIO_INTENSET_END_Msk, /**< Mask for enabling or disabling an interrupt on END event. */
DECL|NRF_RADIO_INT_FRAMESTART_MASK|enumerator|NRF_RADIO_INT_FRAMESTART_MASK = RADIO_INTENSET_FRAMESTART_Msk, /**< Mask for enabling or disabling an interrupt on FRAMESTART event. */
DECL|NRF_RADIO_INT_READY_MASK|enumerator|NRF_RADIO_INT_READY_MASK = RADIO_INTENSET_READY_Msk, /**< Mask for enabling or disabling an interrupt on READY event. */
DECL|NRF_RADIO_INT_RSSIEND_MASK|enumerator|NRF_RADIO_INT_RSSIEND_MASK = RADIO_INTENSET_RSSIEND_Msk, /**< Mask for enabling or disabling an interrupt on RSSIEND event. */
DECL|NRF_RADIO_MODE_BLE_1MBIT|enumerator|NRF_RADIO_MODE_BLE_1MBIT = RADIO_MODE_MODE_Ble_1Mbit, /**< 1 Mbit/s Bluetooth Low Energy. */
DECL|NRF_RADIO_MODE_BLE_2MBIT|enumerator|NRF_RADIO_MODE_BLE_2MBIT = RADIO_MODE_MODE_Ble_2Mbit, /**< 2 Mbit/s Bluetooth Low Energy. */
DECL|NRF_RADIO_MODE_IEEE802154_250KBIT|enumerator|NRF_RADIO_MODE_IEEE802154_250KBIT = RADIO_MODE_MODE_Ieee802154_250Kbit, /**< IEEE 802.15.4-2006 250 kbit/s. */
DECL|NRF_RADIO_MODE_NRF_1MBIT|enumerator|NRF_RADIO_MODE_NRF_1MBIT = RADIO_MODE_MODE_Nrf_1Mbit, /**< 1Mbit/s Nordic proprietary radio mode. */
DECL|NRF_RADIO_MODE_NRF_2MBIT|enumerator|NRF_RADIO_MODE_NRF_2MBIT = RADIO_MODE_MODE_Nrf_2Mbit, /**< 2Mbit/s Nordic proprietary radio mode. */
DECL|NRF_RADIO_PREAMBLE_LENGTH_16BIT|enumerator|NRF_RADIO_PREAMBLE_LENGTH_16BIT = RADIO_PCNF0_PLEN_16bit, /**< 16-bit preamble. */
DECL|NRF_RADIO_PREAMBLE_LENGTH_32BIT_ZERO|enumerator|NRF_RADIO_PREAMBLE_LENGTH_32BIT_ZERO = RADIO_PCNF0_PLEN_32bitZero, /**< 32-bit zero preamble used for IEEE 802.15.4. */
DECL|NRF_RADIO_PREAMBLE_LENGTH_8BIT|enumerator|NRF_RADIO_PREAMBLE_LENGTH_8BIT = RADIO_PCNF0_PLEN_8bit, /**< 8-bit preamble. */
DECL|NRF_RADIO_PREAMBLE_LENGTH_LONG_RANGE|enumerator|NRF_RADIO_PREAMBLE_LENGTH_LONG_RANGE = RADIO_PCNF0_PLEN_LongRange, /**< Preamble - used for BTLE Long Range. */
DECL|NRF_RADIO_SHORT_ADDRESS_RSSISTART_MASK|enumerator|NRF_RADIO_SHORT_ADDRESS_RSSISTART_MASK = RADIO_SHORTS_ADDRESS_RSSISTART_Msk, /**< Mask for setting shortcut between EVENT_ADDRESS and TASK_RSSISTART. */
DECL|NRF_RADIO_SHORT_CCAIDLE_TXEN_MASK|enumerator|NRF_RADIO_SHORT_CCAIDLE_TXEN_MASK = RADIO_SHORTS_CCAIDLE_TXEN_Msk, /**< Mask for setting shortcut between EVENT_CCAIDLE and TASK_TXEN. */
DECL|NRF_RADIO_SHORT_DISABLED_TXEN_MASK|enumerator|NRF_RADIO_SHORT_DISABLED_TXEN_MASK = RADIO_SHORTS_DISABLED_TXEN_Msk, /**< Mask for setting shortcut between EVENT_DISABLED and TASK_TXEN. */
DECL|NRF_RADIO_SHORT_END_DISABLE_MASK|enumerator|NRF_RADIO_SHORT_END_DISABLE_MASK = RADIO_SHORTS_END_DISABLE_Msk, /**< Mask for setting shortcut between EVENT_END and TASK_DISABLE. */
DECL|NRF_RADIO_SHORT_END_START_MASK|enumerator|NRF_RADIO_SHORT_END_START_MASK = RADIO_SHORTS_END_START_Msk, /**< Mask for setting shortcut between EVENT_END and TASK_START. */
DECL|NRF_RADIO_SHORT_FRAMESTART_BCSTART_MASK|enumerator|NRF_RADIO_SHORT_FRAMESTART_BCSTART_MASK = RADIO_SHORTS_FRAMESTART_BCSTART_Msk, /**< Mask for setting shortcut between EVENT_FRAMESTART and TASK_BCSTART. */
DECL|NRF_RADIO_SHORT_READY_START_MASK|enumerator|NRF_RADIO_SHORT_READY_START_MASK = RADIO_SHORTS_READY_START_Msk, /**< Mask for setting shortcut between EVENT_READY and TASK_START. */
DECL|NRF_RADIO_STATE_DISABLED|enumerator|NRF_RADIO_STATE_DISABLED = RADIO_STATE_STATE_Disabled, /**< No operations are going on inside the radio and the power consumption is at a minimum. */
DECL|NRF_RADIO_STATE_RX_DISABLE|enumerator|NRF_RADIO_STATE_RX_DISABLE = RADIO_STATE_STATE_RxDisable, /**< The radio is disabling the receiver. */
DECL|NRF_RADIO_STATE_RX_IDLE|enumerator|NRF_RADIO_STATE_RX_IDLE = RADIO_STATE_STATE_RxIdle, /**< The radio is ready for reception to start. */
DECL|NRF_RADIO_STATE_RX_RU|enumerator|NRF_RADIO_STATE_RX_RU = RADIO_STATE_STATE_RxRu, /**< The radio is ramping up and preparing for reception. */
DECL|NRF_RADIO_STATE_RX|enumerator|NRF_RADIO_STATE_RX = RADIO_STATE_STATE_Rx, /**< Reception has been started. */
DECL|NRF_RADIO_STATE_TX_DISABLE|enumerator|NRF_RADIO_STATE_TX_DISABLE = RADIO_STATE_STATE_TxDisable, /**< The radio is disabling the transmitter. */
DECL|NRF_RADIO_STATE_TX_IDLE|enumerator|NRF_RADIO_STATE_TX_IDLE = RADIO_STATE_STATE_TxIdle, /**< The radio is ready for transmission to start. */
DECL|NRF_RADIO_STATE_TX_RU|enumerator|NRF_RADIO_STATE_TX_RU = RADIO_STATE_STATE_TxRu, /**< The radio is ramping up and preparing for transmission. */
DECL|NRF_RADIO_STATE_TX|enumerator|NRF_RADIO_STATE_TX = RADIO_STATE_STATE_Tx, /**< The radio is transmitting a packet. */
DECL|NRF_RADIO_TASK_CCASTART|enumerator|NRF_RADIO_TASK_CCASTART = offsetof(NRF_RADIO_Type, TASKS_CCASTART), /**< Start Clear Channel Assessment procedure. */
DECL|NRF_RADIO_TASK_CCASTOP|enumerator|NRF_RADIO_TASK_CCASTOP = offsetof(NRF_RADIO_Type, TASKS_CCASTOP), /**< Stop Clear Channel Assessment procedure. */
DECL|NRF_RADIO_TASK_DISABLE|enumerator|NRF_RADIO_TASK_DISABLE = offsetof(NRF_RADIO_Type, TASKS_DISABLE), /**< Disable radio transmitter and receiver. */
DECL|NRF_RADIO_TASK_EDSTART|enumerator|NRF_RADIO_TASK_EDSTART = offsetof(NRF_RADIO_Type, TASKS_EDSTART), /**< Start Energy Detection procedure. */
DECL|NRF_RADIO_TASK_RSSISTART|enumerator|NRF_RADIO_TASK_RSSISTART = offsetof(NRF_RADIO_Type, TASKS_RSSISTART), /**< Start the RSSI and take one single sample of received signal strength. */
DECL|NRF_RADIO_TASK_RXEN|enumerator|NRF_RADIO_TASK_RXEN = offsetof(NRF_RADIO_Type, TASKS_RXEN), /**< Enable radio receiver. */
DECL|NRF_RADIO_TASK_SET|macro|NRF_RADIO_TASK_SET
DECL|NRF_RADIO_TASK_START|enumerator|NRF_RADIO_TASK_START = offsetof(NRF_RADIO_Type, TASKS_START), /**< Start radio transmission or reception. */
DECL|NRF_RADIO_TASK_STOP|enumerator|NRF_RADIO_TASK_STOP = offsetof(NRF_RADIO_Type, TASKS_STOP), /**< Stop radio transmission or reception. */
DECL|NRF_RADIO_TASK_TXEN|enumerator|NRF_RADIO_TASK_TXEN = offsetof(NRF_RADIO_Type, TASKS_TXEN), /**< Enable radio transmitter. */
DECL|nrf_radio_bcc_get|function|__STATIC_INLINE uint32_t nrf_radio_bcc_get(void)
DECL|nrf_radio_bcc_set|function|__STATIC_INLINE void nrf_radio_bcc_set(uint32_t radio_bcc)
DECL|nrf_radio_cca_corr_counter_set|function|__STATIC_INLINE void nrf_radio_cca_corr_counter_set(uint8_t radio_cca_corr_counter_set)
DECL|nrf_radio_cca_corr_threshold_set|function|__STATIC_INLINE void nrf_radio_cca_corr_threshold_set(uint8_t radio_cca_corr_threshold_set)
DECL|nrf_radio_cca_ed_threshold_set|function|__STATIC_INLINE void nrf_radio_cca_ed_threshold_set(uint8_t radio_cca_ed_threshold)
DECL|nrf_radio_cca_mode_set|function|__STATIC_INLINE void nrf_radio_cca_mode_set(nrf_radio_cca_mode_t radio_cca_mode)
DECL|nrf_radio_cca_mode_t|typedef|} nrf_radio_cca_mode_t;
DECL|nrf_radio_config_crc_included_set|function|__STATIC_INLINE void nrf_radio_config_crc_included_set(bool radio_length_contains_crc)
DECL|nrf_radio_config_length_field_length_set|function|__STATIC_INLINE void nrf_radio_config_length_field_length_set(uint8_t radio_length_length)
DECL|nrf_radio_config_max_length_set|function|__STATIC_INLINE void nrf_radio_config_max_length_set(uint8_t radio_max_packet_length)
DECL|nrf_radio_config_preamble_length_set|function|__STATIC_INLINE void nrf_radio_config_preamble_length_set( nrf_radio_preamble_length_t radio_preamble_length)
DECL|nrf_radio_crc_includes_addr_t|typedef|} nrf_radio_crc_includes_addr_t;
DECL|nrf_radio_crc_includes_address_set|function|__STATIC_INLINE void nrf_radio_crc_includes_address_set( nrf_radio_crc_includes_addr_t radio_crc_skip_address)
DECL|nrf_radio_crc_length_set|function|__STATIC_INLINE void nrf_radio_crc_length_set(uint8_t radio_crc_length)
DECL|nrf_radio_crc_polynominal_set|function|__STATIC_INLINE void nrf_radio_crc_polynominal_set(uint32_t radio_crc_polynominal)
DECL|nrf_radio_crc_status_get|function|__STATIC_INLINE nrf_radio_crc_status_t nrf_radio_crc_status_get(void)
DECL|nrf_radio_crc_status_t|typedef|} nrf_radio_crc_status_t;
DECL|nrf_radio_ed_loop_count_set|function|__STATIC_INLINE void nrf_radio_ed_loop_count_set(uint32_t radio_ed_loop_count)
DECL|nrf_radio_ed_sample_get|function|__STATIC_INLINE uint8_t nrf_radio_ed_sample_get(void)
DECL|nrf_radio_event_address_get|function|__STATIC_INLINE uint32_t *nrf_radio_event_address_get(nrf_radio_event_t radio_event)
DECL|nrf_radio_event_clear|function|__STATIC_INLINE void nrf_radio_event_clear(nrf_radio_event_t radio_event)
DECL|nrf_radio_event_get|function|__STATIC_INLINE bool nrf_radio_event_get(nrf_radio_event_t radio_event)
DECL|nrf_radio_event_t|typedef|} nrf_radio_event_t; /*lint -restore */
DECL|nrf_radio_frequency_get|function|__STATIC_INLINE uint32_t nrf_radio_frequency_get(void)
DECL|nrf_radio_frequency_set|function|__STATIC_INLINE void nrf_radio_frequency_set(uint32_t radio_frequency)
DECL|nrf_radio_ifs_set|function|__STATIC_INLINE void nrf_radio_ifs_set(uint32_t radio_ifs)
DECL|nrf_radio_int_disable|function|__STATIC_INLINE void nrf_radio_int_disable(uint32_t radio_int_mask)
DECL|nrf_radio_int_enable|function|__STATIC_INLINE void nrf_radio_int_enable(uint32_t radio_int_mask)
DECL|nrf_radio_int_get|function|__STATIC_INLINE bool nrf_radio_int_get(nrf_radio_int_mask_t radio_int_mask)
DECL|nrf_radio_int_mask_t|typedef|} nrf_radio_int_mask_t;
DECL|nrf_radio_mhmu_pattern_mask_set|function|__STATIC_INLINE void nrf_radio_mhmu_pattern_mask_set(uint32_t radio_mhmu_pattern_mask)
DECL|nrf_radio_mhmu_search_pattern_set|function|__STATIC_INLINE void nrf_radio_mhmu_search_pattern_set(uint32_t radio_mhmu_search_pattern)
DECL|nrf_radio_mode_set|function|__STATIC_INLINE void nrf_radio_mode_set(nrf_radio_mode_t radio_mode)
DECL|nrf_radio_mode_t|typedef|} nrf_radio_mode_t;
DECL|nrf_radio_packet_ptr_set|function|__STATIC_INLINE void nrf_radio_packet_ptr_set(const void *p_radio_packet_ptr)
DECL|nrf_radio_power_set|function|__STATIC_INLINE void nrf_radio_power_set(bool radio_power)
DECL|nrf_radio_preamble_length_t|typedef|} nrf_radio_preamble_length_t;
DECL|nrf_radio_rssi_sample_get|function|__STATIC_INLINE uint8_t nrf_radio_rssi_sample_get(void)
DECL|nrf_radio_short_mask_t|typedef|} nrf_radio_short_mask_t;
DECL|nrf_radio_shorts_disable|function|__STATIC_INLINE void nrf_radio_shorts_disable(uint32_t radio_short_mask)
DECL|nrf_radio_shorts_enable|function|__STATIC_INLINE void nrf_radio_shorts_enable(uint32_t radio_short_mask)
DECL|nrf_radio_state_get|function|__STATIC_INLINE nrf_radio_state_t nrf_radio_state_get(void)
DECL|nrf_radio_state_t|typedef|} nrf_radio_state_t;
DECL|nrf_radio_task_address_get|function|__STATIC_INLINE uint32_t *nrf_radio_task_address_get(nrf_radio_task_t radio_task)
DECL|nrf_radio_task_trigger|function|__STATIC_INLINE void nrf_radio_task_trigger(nrf_radio_task_t radio_task)
DECL|nrf_radio_task_t|typedef|} nrf_radio_task_t; /*lint -restore */
DECL|nrf_radio_tx_power_set|function|__STATIC_INLINE void nrf_radio_tx_power_set(int8_t radio_tx_power)
