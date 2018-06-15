DECL|NRF_RADIO_CCA_MODE_CARRIER_AND_ED|enumerator|NRF_RADIO_CCA_MODE_CARRIER_AND_ED = RADIO_CCACTRL_CCAMODE_CarrierAndEdMode, /**< Energy Above Threshold AND Carrier Seen. */
DECL|NRF_RADIO_CCA_MODE_CARRIER_OR_ED|enumerator|NRF_RADIO_CCA_MODE_CARRIER_OR_ED = RADIO_CCACTRL_CCAMODE_CarrierOrEdMode, /**< Energy Above Threshold OR Carrier Seen. */
DECL|NRF_RADIO_CCA_MODE_CARRIER|enumerator|NRF_RADIO_CCA_MODE_CARRIER = RADIO_CCACTRL_CCAMODE_CarrierMode, /**< Carrier Seen. Will report busy whenever compliant IEEE 802.15.4 signal is seen. */
DECL|NRF_RADIO_CCA_MODE_ED_TEST1|enumerator|NRF_RADIO_CCA_MODE_ED_TEST1 = RADIO_CCACTRL_CCAMODE_EdModeTest1, /**< Energy Above Threshold test mode that will abort when first ED measurement over threshold is seen. No averaging. */
DECL|NRF_RADIO_CCA_MODE_ED|enumerator|NRF_RADIO_CCA_MODE_ED = RADIO_CCACTRL_CCAMODE_EdMode, /**< Energy Above Threshold. Will report busy whenever energy is detected above set threshold. */
DECL|NRF_RADIO_CRC_ADDR_IEEE802154|enumerator|NRF_RADIO_CRC_ADDR_IEEE802154 = RADIO_CRCCNF_SKIPADDR_Ieee802154, /**< CRC calculation as per 802.15.4 standard. */
DECL|NRF_RADIO_CRC_ADDR_INCLUDE|enumerator|NRF_RADIO_CRC_ADDR_INCLUDE = RADIO_CRCCNF_SKIPADDR_Include, /**< CRC calculation includes address field. */
DECL|NRF_RADIO_CRC_ADDR_SKIP|enumerator|NRF_RADIO_CRC_ADDR_SKIP = RADIO_CRCCNF_SKIPADDR_Skip, /**< CRC calculation does not include address field. */
DECL|NRF_RADIO_EVENT_ADDRESS|enumerator|NRF_RADIO_EVENT_ADDRESS = offsetof(NRF_RADIO_Type, EVENTS_ADDRESS), /**< Address sent or received. */
DECL|NRF_RADIO_EVENT_BCMATCH|enumerator|NRF_RADIO_EVENT_BCMATCH = offsetof(NRF_RADIO_Type, EVENTS_BCMATCH), /**< Bit counter reached bit count value. */
DECL|NRF_RADIO_EVENT_CCABUSY|enumerator|NRF_RADIO_EVENT_CCABUSY = offsetof(NRF_RADIO_Type, EVENTS_CCABUSY), /**< Wireless medium busy - do not send. */
DECL|NRF_RADIO_EVENT_CCAIDLE|enumerator|NRF_RADIO_EVENT_CCAIDLE = offsetof(NRF_RADIO_Type, EVENTS_CCAIDLE), /**< Wireless medium in idle - clear to send. */
DECL|NRF_RADIO_EVENT_CCASTOPPED|enumerator|NRF_RADIO_EVENT_CCASTOPPED = offsetof(NRF_RADIO_Type, EVENTS_CCASTOPPED), /**< The CCA has stopped. */
DECL|NRF_RADIO_EVENT_CRCERROR|enumerator|NRF_RADIO_EVENT_CRCERROR = offsetof(NRF_RADIO_Type, EVENTS_CRCERROR), /**< Packet received with incorrect CRC. */
DECL|NRF_RADIO_EVENT_CRCOK|enumerator|NRF_RADIO_EVENT_CRCOK = offsetof(NRF_RADIO_Type, EVENTS_CRCOK), /**< Packet received with correct CRC. */
DECL|NRF_RADIO_EVENT_DEVMATCH|enumerator|NRF_RADIO_EVENT_DEVMATCH = offsetof(NRF_RADIO_Type, EVENTS_DEVMATCH), /**< A device address match occurred on the last received packet. */
DECL|NRF_RADIO_EVENT_DEVMISS|enumerator|NRF_RADIO_EVENT_DEVMISS = offsetof(NRF_RADIO_Type, EVENTS_DEVMISS), /**< No device address match occurred on the last received packet. */
DECL|NRF_RADIO_EVENT_DISABLED|enumerator|NRF_RADIO_EVENT_DISABLED = offsetof(NRF_RADIO_Type, EVENTS_DISABLED), /**< RADIO has been disabled. */
DECL|NRF_RADIO_EVENT_EDEND|enumerator|NRF_RADIO_EVENT_EDEND = offsetof(NRF_RADIO_Type, EVENTS_EDEND), /**< Energy Detection procedure ended. */
DECL|NRF_RADIO_EVENT_EDSTOPPED|enumerator|NRF_RADIO_EVENT_EDSTOPPED = offsetof(NRF_RADIO_Type, EVENTS_EDSTOPPED), /**< The sampling of Energy Detection has stopped. */
DECL|NRF_RADIO_EVENT_END|enumerator|NRF_RADIO_EVENT_END = offsetof(NRF_RADIO_Type, EVENTS_END), /**< Packet transmitted or received. */
DECL|NRF_RADIO_EVENT_FRAMESTART|enumerator|NRF_RADIO_EVENT_FRAMESTART = offsetof(NRF_RADIO_Type, EVENTS_FRAMESTART), /**< IEEE 802.15.4 length field received. */
DECL|NRF_RADIO_EVENT_MHRMATCH|enumerator|NRF_RADIO_EVENT_MHRMATCH = offsetof(NRF_RADIO_Type, EVENTS_MHRMATCH), /**< MAC Header match found. */
DECL|NRF_RADIO_EVENT_PAYLOAD|enumerator|NRF_RADIO_EVENT_PAYLOAD = offsetof(NRF_RADIO_Type, EVENTS_PAYLOAD), /**< Packet payload sent or received. */
DECL|NRF_RADIO_EVENT_PHYEND|enumerator|NRF_RADIO_EVENT_PHYEND = offsetof(NRF_RADIO_Type, EVENTS_PHYEND), /**< Generated in Ble_LR125Kbit, Ble_LR500Kbit
DECL|NRF_RADIO_EVENT_RATEBOOST|enumerator|NRF_RADIO_EVENT_RATEBOOST = offsetof(NRF_RADIO_Type, EVENTS_RATEBOOST), /**< Ble_LR CI field received, receive mode is changed from Ble_LR125Kbit to Ble_LR500Kbit. */
DECL|NRF_RADIO_EVENT_READY|enumerator|NRF_RADIO_EVENT_READY = offsetof(NRF_RADIO_Type, EVENTS_READY), /**< Radio has ramped up and is ready to be started. */
DECL|NRF_RADIO_EVENT_RSSIEND|enumerator|NRF_RADIO_EVENT_RSSIEND = offsetof(NRF_RADIO_Type, EVENTS_RSSIEND), /**< Sampling of receive signal strength complete. */
DECL|NRF_RADIO_EVENT_RXREADY|enumerator|NRF_RADIO_EVENT_RXREADY = offsetof(NRF_RADIO_Type, EVENTS_RXREADY), /**< RADIO has ramped up and is ready to be started RX path. */
DECL|NRF_RADIO_EVENT_TXREADY|enumerator|NRF_RADIO_EVENT_TXREADY = offsetof(NRF_RADIO_Type, EVENTS_TXREADY), /**< RADIO has ramped up and is ready to be started TX path. */
DECL|NRF_RADIO_H__|macro|NRF_RADIO_H__
DECL|NRF_RADIO_INT_ADDRESS_MASK|enumerator|NRF_RADIO_INT_ADDRESS_MASK = RADIO_INTENSET_ADDRESS_Msk, /**< Interrupt on ADDRESS event. */
DECL|NRF_RADIO_INT_BCMATCH_MASK|enumerator|NRF_RADIO_INT_BCMATCH_MASK = RADIO_INTENSET_BCMATCH_Msk, /**< Interrupt on BCMATCH event. */
DECL|NRF_RADIO_INT_CCABUSY_MASK|enumerator|NRF_RADIO_INT_CCABUSY_MASK = RADIO_INTENSET_CCABUSY_Msk, /**< Interrupt on CCABUSY event. */
DECL|NRF_RADIO_INT_CCAIDLE_MASK|enumerator|NRF_RADIO_INT_CCAIDLE_MASK = RADIO_INTENSET_CCAIDLE_Msk, /**< Interrupt on CCAIDLE event. */
DECL|NRF_RADIO_INT_CCASTOPPED_MASK|enumerator|NRF_RADIO_INT_CCASTOPPED_MASK = RADIO_INTENSET_CCASTOPPED_Msk, /**< Interrupt on CCASTOPPED event. */
DECL|NRF_RADIO_INT_CRCERROR_MASK|enumerator|NRF_RADIO_INT_CRCERROR_MASK = RADIO_INTENSET_CRCERROR_Msk, /**< Interrupt on CRCERROR event. */
DECL|NRF_RADIO_INT_CRCOK_MASK|enumerator|NRF_RADIO_INT_CRCOK_MASK = RADIO_INTENSET_CRCOK_Msk, /**< Interrupt on CRCOK event. */
DECL|NRF_RADIO_INT_DEVMATCH_MASK|enumerator|NRF_RADIO_INT_DEVMATCH_MASK = RADIO_INTENSET_DEVMATCH_Msk, /**< Interrupt on DEVMATCH event. */
DECL|NRF_RADIO_INT_DEVMISS_MASK|enumerator|NRF_RADIO_INT_DEVMISS_MASK = RADIO_INTENSET_DEVMISS_Msk, /**< Interrupt on DEVMISS event. */
DECL|NRF_RADIO_INT_DISABLED_MASK|enumerator|NRF_RADIO_INT_DISABLED_MASK = RADIO_INTENSET_DISABLED_Msk, /**< Interrupt on DISABLED event. */
DECL|NRF_RADIO_INT_EDEND_MASK|enumerator|NRF_RADIO_INT_EDEND_MASK = RADIO_INTENSET_EDEND_Msk, /**< Interrupt on EDEND event. */
DECL|NRF_RADIO_INT_EDSTOPPED_MASK|enumerator|NRF_RADIO_INT_EDSTOPPED_MASK = RADIO_INTENSET_EDSTOPPED_Msk, /**< Interrupt on EDSTOPPED event. */
DECL|NRF_RADIO_INT_END_MASK|enumerator|NRF_RADIO_INT_END_MASK = RADIO_INTENSET_END_Msk, /**< Interrupt on END event. */
DECL|NRF_RADIO_INT_FRAMESTART_MASK|enumerator|NRF_RADIO_INT_FRAMESTART_MASK = RADIO_INTENSET_FRAMESTART_Msk, /**< Interrupt on FRAMESTART event. */
DECL|NRF_RADIO_INT_MHRMATCH_MASK|enumerator|NRF_RADIO_INT_MHRMATCH_MASK = RADIO_INTENSET_MHRMATCH_Msk, /**< Interrupt on MHRMATCH event. */
DECL|NRF_RADIO_INT_PAYLOAD_MASK|enumerator|NRF_RADIO_INT_PAYLOAD_MASK = RADIO_INTENSET_PAYLOAD_Msk, /**< Interrupt on PAYLOAD event. */
DECL|NRF_RADIO_INT_PHYEND_MASK|enumerator|NRF_RADIO_INT_PHYEND_MASK = RADIO_INTENSET_PHYEND_Msk, /**< Interrupt on PHYEND event. */
DECL|NRF_RADIO_INT_RATEBOOST_MASK|enumerator|NRF_RADIO_INT_RATEBOOST_MASK = RADIO_INTENSET_RATEBOOST_Msk, /**< Interrupt on RATEBOOST event. */
DECL|NRF_RADIO_INT_READY_MASK|enumerator|NRF_RADIO_INT_READY_MASK = RADIO_INTENSET_READY_Msk, /**< Interrupt on READY event. */
DECL|NRF_RADIO_INT_RSSIEND_MASK|enumerator|NRF_RADIO_INT_RSSIEND_MASK = RADIO_INTENSET_RSSIEND_Msk, /**< Interrupt on RSSIEND event. */
DECL|NRF_RADIO_INT_RXREADY_MASK|enumerator|NRF_RADIO_INT_RXREADY_MASK = RADIO_INTENSET_RXREADY_Msk, /**< Interrupt on RXREADY event. */
DECL|NRF_RADIO_INT_TXREADY_MASK|enumerator|NRF_RADIO_INT_TXREADY_MASK = RADIO_INTENSET_TXREADY_Msk, /**< Interrupt on TXREADY event. */
DECL|NRF_RADIO_MODE_BLE_1MBIT|enumerator|NRF_RADIO_MODE_BLE_1MBIT = RADIO_MODE_MODE_Ble_1Mbit, /**< 1 Mbit/s Bluetooth Low Energy. */
DECL|NRF_RADIO_MODE_BLE_2MBIT|enumerator|NRF_RADIO_MODE_BLE_2MBIT = RADIO_MODE_MODE_Ble_2Mbit, /**< 2 Mbit/s Bluetooth Low Energy. */
DECL|NRF_RADIO_MODE_BLE_LR125KBIT|enumerator|NRF_RADIO_MODE_BLE_LR125KBIT = RADIO_MODE_MODE_Ble_LR125Kbit, /*!< Bluetooth Low Energy Long range 125 kbit/s TX, 125 kbit/s and 500 kbit/s RX */
DECL|NRF_RADIO_MODE_BLE_LR500KBIT|enumerator|NRF_RADIO_MODE_BLE_LR500KBIT = RADIO_MODE_MODE_Ble_LR500Kbit, /*!< Bluetooth Low Energy Long range 500 kbit/s TX, 125 kbit/s and 500 kbit/s RX */
DECL|NRF_RADIO_MODE_IEEE802154_250KBIT|enumerator|NRF_RADIO_MODE_IEEE802154_250KBIT = RADIO_MODE_MODE_Ieee802154_250Kbit, /**< IEEE 802.15.4-2006 250 kbit/s. */
DECL|NRF_RADIO_MODE_NRF_1MBIT|enumerator|NRF_RADIO_MODE_NRF_1MBIT = RADIO_MODE_MODE_Nrf_1Mbit, /**< 1Mbit/s Nordic proprietary radio mode. */
DECL|NRF_RADIO_MODE_NRF_250KBIT|enumerator|NRF_RADIO_MODE_NRF_250KBIT = RADIO_MODE_MODE_Nrf_250Kbit, /**< 250Kbit/s Nordic proprietary radio mode. */
DECL|NRF_RADIO_MODE_NRF_2MBIT|enumerator|NRF_RADIO_MODE_NRF_2MBIT = RADIO_MODE_MODE_Nrf_2Mbit, /**< 2Mbit/s Nordic proprietary radio mode. */
DECL|NRF_RADIO_PREAMBLE_LENGTH_16BIT|enumerator|NRF_RADIO_PREAMBLE_LENGTH_16BIT = RADIO_PCNF0_PLEN_16bit, /**< 16-bit preamble. */
DECL|NRF_RADIO_PREAMBLE_LENGTH_32BIT_ZERO|enumerator|NRF_RADIO_PREAMBLE_LENGTH_32BIT_ZERO = RADIO_PCNF0_PLEN_32bitZero, /**< 32-bit zero preamble used for IEEE 802.15.4. */
DECL|NRF_RADIO_PREAMBLE_LENGTH_8BIT|enumerator|NRF_RADIO_PREAMBLE_LENGTH_8BIT = RADIO_PCNF0_PLEN_8bit, /**< 8-bit preamble. */
DECL|NRF_RADIO_PREAMBLE_LENGTH_LONG_RANGE|enumerator|NRF_RADIO_PREAMBLE_LENGTH_LONG_RANGE = RADIO_PCNF0_PLEN_LongRange, /**< Preamble - used for BTLE Long Range. */
DECL|NRF_RADIO_SHORT_ADDRESS_BCSTART_MASK|enumerator|NRF_RADIO_SHORT_ADDRESS_BCSTART_MASK = RADIO_SHORTS_ADDRESS_BCSTART_Msk, /**< Shortcut between ADDRESS event and BCSTART task. */
DECL|NRF_RADIO_SHORT_ADDRESS_RSSISTART_MASK|enumerator|NRF_RADIO_SHORT_ADDRESS_RSSISTART_MASK = RADIO_SHORTS_ADDRESS_RSSISTART_Msk, /**< Shortcut between ADDRESS event and RSSISTART task. */
DECL|NRF_RADIO_SHORT_CCABUSY_DISABLE_MASK|enumerator|NRF_RADIO_SHORT_CCABUSY_DISABLE_MASK = RADIO_SHORTS_CCABUSY_DISABLE_Msk, /**< Shortcut between CCABUSY event and DISABLE task. */
DECL|NRF_RADIO_SHORT_CCAIDLE_STOP_MASK|enumerator|NRF_RADIO_SHORT_CCAIDLE_STOP_MASK = RADIO_SHORTS_CCAIDLE_STOP_Msk, /**< Shortcut between CCAIDLE event and STOP task. */
DECL|NRF_RADIO_SHORT_CCAIDLE_TXEN_MASK|enumerator|NRF_RADIO_SHORT_CCAIDLE_TXEN_MASK = RADIO_SHORTS_CCAIDLE_TXEN_Msk, /**< Shortcut between CCAIDLE event and TXEN task. */
DECL|NRF_RADIO_SHORT_DISABLED_RSSISTOP_MASK|enumerator|NRF_RADIO_SHORT_DISABLED_RSSISTOP_MASK = RADIO_SHORTS_DISABLED_RSSISTOP_Msk, /**< Shortcut between DISABLED event and RSSISTOP task. */
DECL|NRF_RADIO_SHORT_DISABLED_RXEN_MASK|enumerator|NRF_RADIO_SHORT_DISABLED_RXEN_MASK = RADIO_SHORTS_DISABLED_RXEN_Msk, /**< Shortcut between DISABLED event and RXEN task. */
DECL|NRF_RADIO_SHORT_DISABLED_TXEN_MASK|enumerator|NRF_RADIO_SHORT_DISABLED_TXEN_MASK = RADIO_SHORTS_DISABLED_TXEN_Msk, /**< Shortcut between DISABLED event and TXEN task. */
DECL|NRF_RADIO_SHORT_EDEND_DISABLE_MASK|enumerator|NRF_RADIO_SHORT_EDEND_DISABLE_MASK = RADIO_SHORTS_EDEND_DISABLE_Msk, /**< Shortcut between EDEND event and DISABLE task. */
DECL|NRF_RADIO_SHORT_END_DISABLE_MASK|enumerator|NRF_RADIO_SHORT_END_DISABLE_MASK = RADIO_SHORTS_END_DISABLE_Msk, /**< Shortcut between END event and DISABLE task. */
DECL|NRF_RADIO_SHORT_END_START_MASK|enumerator|NRF_RADIO_SHORT_END_START_MASK = RADIO_SHORTS_END_START_Msk, /**< Shortcut between END event and START task. */
DECL|NRF_RADIO_SHORT_FRAMESTART_BCSTART_MASK|enumerator|NRF_RADIO_SHORT_FRAMESTART_BCSTART_MASK = RADIO_SHORTS_FRAMESTART_BCSTART_Msk, /**< Shortcut between FRAMESTART event and BCSTART task. */
DECL|NRF_RADIO_SHORT_PHYEND_DISABLE_MASK|enumerator|NRF_RADIO_SHORT_PHYEND_DISABLE_MASK = RADIO_SHORTS_PHYEND_DISABLE_Msk, /**< Shortcut between PHYEND event and DISABLE task. */
DECL|NRF_RADIO_SHORT_PHYEND_START_MASK|enumerator|NRF_RADIO_SHORT_PHYEND_START_MASK = RADIO_SHORTS_PHYEND_START_Msk, /**< Shortcut between PHYEND event and START task. */
DECL|NRF_RADIO_SHORT_READY_EDSTART_MASK|enumerator|NRF_RADIO_SHORT_READY_EDSTART_MASK = RADIO_SHORTS_READY_EDSTART_Msk, /**< Shortcut between READY event and EDSTART task. */
DECL|NRF_RADIO_SHORT_READY_START_MASK|enumerator|NRF_RADIO_SHORT_READY_START_MASK = RADIO_SHORTS_READY_START_Msk, /**< Shortcut between READY event and START task. */
DECL|NRF_RADIO_SHORT_RXREADY_CCASTART_MASK|enumerator|NRF_RADIO_SHORT_RXREADY_CCASTART_MASK = RADIO_SHORTS_RXREADY_CCASTART_Msk, /**< Shortcut between RXREADY event and CCASTART task. */
DECL|NRF_RADIO_SHORT_RXREADY_START_MASK|enumerator|NRF_RADIO_SHORT_RXREADY_START_MASK = RADIO_SHORTS_RXREADY_START_Msk, /**< Shortcut between RXREADY event and START task. */
DECL|NRF_RADIO_SHORT_TXREADY_START_MASK|enumerator|NRF_RADIO_SHORT_TXREADY_START_MASK = RADIO_SHORTS_TXREADY_START_Msk, /**< Shortcut between TXREADY event and START task. */
DECL|NRF_RADIO_STATE_DISABLED|enumerator|NRF_RADIO_STATE_DISABLED = RADIO_STATE_STATE_Disabled, /**< No operations are going on inside the radio and the power consumption is at a minimum. */
DECL|NRF_RADIO_STATE_RXDISABLE|enumerator|NRF_RADIO_STATE_RXDISABLE = RADIO_STATE_STATE_RxDisable, /**< The radio is disabling the receiver. */
DECL|NRF_RADIO_STATE_RXIDLE|enumerator|NRF_RADIO_STATE_RXIDLE = RADIO_STATE_STATE_RxIdle, /**< The radio is ready for reception to start. */
DECL|NRF_RADIO_STATE_RXRU|enumerator|NRF_RADIO_STATE_RXRU = RADIO_STATE_STATE_RxRu, /**< The radio is ramping up and preparing for reception. */
DECL|NRF_RADIO_STATE_RX|enumerator|NRF_RADIO_STATE_RX = RADIO_STATE_STATE_Rx, /**< Reception has been started. */
DECL|NRF_RADIO_STATE_TXDISABLE|enumerator|NRF_RADIO_STATE_TXDISABLE = RADIO_STATE_STATE_TxDisable, /**< The radio is disabling the transmitter. */
DECL|NRF_RADIO_STATE_TXIDLE|enumerator|NRF_RADIO_STATE_TXIDLE = RADIO_STATE_STATE_TxIdle, /**< The radio is ready for transmission to start. */
DECL|NRF_RADIO_STATE_TXRU|enumerator|NRF_RADIO_STATE_TXRU = RADIO_STATE_STATE_TxRu, /**< The radio is ramping up and preparing for transmission. */
DECL|NRF_RADIO_STATE_TX|enumerator|NRF_RADIO_STATE_TX = RADIO_STATE_STATE_Tx, /**< The radio is transmitting a packet. */
DECL|NRF_RADIO_TASK_BCSTART|enumerator|NRF_RADIO_TASK_BCSTART = offsetof(NRF_RADIO_Type, TASKS_BCSTART), /**< Start the bit counter. */
DECL|NRF_RADIO_TASK_BCSTOP|enumerator|NRF_RADIO_TASK_BCSTOP = offsetof(NRF_RADIO_Type, TASKS_BCSTOP), /**< Stop the bit counter. */
DECL|NRF_RADIO_TASK_CCASTART|enumerator|NRF_RADIO_TASK_CCASTART = offsetof(NRF_RADIO_Type, TASKS_CCASTART), /**< Start the Clear Channel Assessment used in IEEE 802.15.4 mode. */
DECL|NRF_RADIO_TASK_CCASTOP|enumerator|NRF_RADIO_TASK_CCASTOP = offsetof(NRF_RADIO_Type, TASKS_CCASTOP), /**< Stop the Clear Channel Assessment. */
DECL|NRF_RADIO_TASK_DISABLE|enumerator|NRF_RADIO_TASK_DISABLE = offsetof(NRF_RADIO_Type, TASKS_DISABLE), /**< Disable RADIO. */
DECL|NRF_RADIO_TASK_EDSTART|enumerator|NRF_RADIO_TASK_EDSTART = offsetof(NRF_RADIO_Type, TASKS_EDSTART), /**< Start the Energy Detect measurement used in IEEE 802.15.4 mode. */
DECL|NRF_RADIO_TASK_EDSTOP|enumerator|NRF_RADIO_TASK_EDSTOP = offsetof(NRF_RADIO_Type, TASKS_EDSTOP), /**< Stop the Energy Detect measurement. */
DECL|NRF_RADIO_TASK_RSSISTART|enumerator|NRF_RADIO_TASK_RSSISTART = offsetof(NRF_RADIO_Type, TASKS_RSSISTART), /**< Start the RSSI and take one single sample of the receive signal strength. */
DECL|NRF_RADIO_TASK_RSSISTOP|enumerator|NRF_RADIO_TASK_RSSISTOP = offsetof(NRF_RADIO_Type, TASKS_RSSISTOP), /**< Stop the RSSI measurement. */
DECL|NRF_RADIO_TASK_RXEN|enumerator|NRF_RADIO_TASK_RXEN = offsetof(NRF_RADIO_Type, TASKS_RXEN), /**< Enable RADIO in RX mode. */
DECL|NRF_RADIO_TASK_START|enumerator|NRF_RADIO_TASK_START = offsetof(NRF_RADIO_Type, TASKS_START), /**< Start RADIO. */
DECL|NRF_RADIO_TASK_STOP|enumerator|NRF_RADIO_TASK_STOP = offsetof(NRF_RADIO_Type, TASKS_STOP), /**< Stop RADIO. */
DECL|NRF_RADIO_TASK_TXEN|enumerator|NRF_RADIO_TASK_TXEN = offsetof(NRF_RADIO_Type, TASKS_TXEN), /**< Enable RADIO in TX mode. */
DECL|NRF_RADIO_TXPOWER_0DBM|enumerator|NRF_RADIO_TXPOWER_0DBM = RADIO_TXPOWER_TXPOWER_0dBm, /**< 0 dBm. */
DECL|NRF_RADIO_TXPOWER_NEG12DBM|enumerator|NRF_RADIO_TXPOWER_NEG12DBM = RADIO_TXPOWER_TXPOWER_Neg12dBm, /**< -12 dBm. */
DECL|NRF_RADIO_TXPOWER_NEG16DBM|enumerator|NRF_RADIO_TXPOWER_NEG16DBM = RADIO_TXPOWER_TXPOWER_Neg16dBm, /**< -16 dBm. */
DECL|NRF_RADIO_TXPOWER_NEG20DBM|enumerator|NRF_RADIO_TXPOWER_NEG20DBM = RADIO_TXPOWER_TXPOWER_Neg20dBm, /**< -20 dBm. */
DECL|NRF_RADIO_TXPOWER_NEG30DBM|enumerator|NRF_RADIO_TXPOWER_NEG30DBM = RADIO_TXPOWER_TXPOWER_Neg30dBm, /**< -30 dBm. */
DECL|NRF_RADIO_TXPOWER_NEG40DBM|enumerator|NRF_RADIO_TXPOWER_NEG40DBM = RADIO_TXPOWER_TXPOWER_Neg40dBm, /**< -40 dBm. */
DECL|NRF_RADIO_TXPOWER_NEG4DBM|enumerator|NRF_RADIO_TXPOWER_NEG4DBM = RADIO_TXPOWER_TXPOWER_Neg4dBm, /**< -4 dBm. */
DECL|NRF_RADIO_TXPOWER_NEG8DBM|enumerator|NRF_RADIO_TXPOWER_NEG8DBM = RADIO_TXPOWER_TXPOWER_Neg8dBm, /**< -8 dBm. */
DECL|NRF_RADIO_TXPOWER_POS2DBM|enumerator|NRF_RADIO_TXPOWER_POS2DBM = RADIO_TXPOWER_TXPOWER_Pos2dBm, /**< 2 dBm. */
DECL|NRF_RADIO_TXPOWER_POS3DBM|enumerator|NRF_RADIO_TXPOWER_POS3DBM = RADIO_TXPOWER_TXPOWER_Pos3dBm, /**< 3 dBm. */
DECL|NRF_RADIO_TXPOWER_POS4DBM|enumerator|NRF_RADIO_TXPOWER_POS4DBM = RADIO_TXPOWER_TXPOWER_Pos4dBm, /**< 4 dBm. */
DECL|NRF_RADIO_TXPOWER_POS5DBM|enumerator|NRF_RADIO_TXPOWER_POS5DBM = RADIO_TXPOWER_TXPOWER_Pos5dBm, /**< 5 dBm. */
DECL|NRF_RADIO_TXPOWER_POS6DBM|enumerator|NRF_RADIO_TXPOWER_POS6DBM = RADIO_TXPOWER_TXPOWER_Pos6dBm, /**< 6 dBm. */
DECL|NRF_RADIO_TXPOWER_POS7DBM|enumerator|NRF_RADIO_TXPOWER_POS7DBM = RADIO_TXPOWER_TXPOWER_Pos7dBm, /**< 7 dBm. */
DECL|NRF_RADIO_TXPOWER_POS8DBM|enumerator|NRF_RADIO_TXPOWER_POS8DBM = RADIO_TXPOWER_TXPOWER_Pos8dBm, /**< 8 dBm. */
DECL|balen|member|uint8_t balen; /**< Base address length in number of bytes. */
DECL|big_endian|member|bool big_endian; /**< On air endianness of packet. */
DECL|cilen|member|uint8_t cilen; /**< Length of code indicator - long range. */
DECL|crcinc|member|bool crcinc; /**< Indicates if LENGTH field contains CRC or not. */
DECL|lflen|member|uint8_t lflen; /**< Length on air of LENGTH field in number of bits. */
DECL|maxlen|member|uint8_t maxlen; /**< Maximum length of packet payload. */
DECL|nrf_radio_base0_get|function|__STATIC_INLINE uint32_t nrf_radio_base0_get(void)
DECL|nrf_radio_base0_set|function|__STATIC_INLINE void nrf_radio_base0_set(uint32_t address)
DECL|nrf_radio_base1_get|function|__STATIC_INLINE uint32_t nrf_radio_base1_get(void)
DECL|nrf_radio_base1_set|function|__STATIC_INLINE void nrf_radio_base1_set(uint32_t address)
DECL|nrf_radio_bcc_get|function|__STATIC_INLINE uint32_t nrf_radio_bcc_get(void)
DECL|nrf_radio_bcc_set|function|__STATIC_INLINE void nrf_radio_bcc_set(uint32_t radio_bcc)
DECL|nrf_radio_cca_configure|function|__STATIC_INLINE void nrf_radio_cca_configure(nrf_radio_cca_mode_t cca_mode, uint8_t cca_ed_threshold, uint8_t cca_corr_threshold, uint8_t cca_corr_cnt)
DECL|nrf_radio_cca_mode_t|typedef|} nrf_radio_cca_mode_t;
DECL|nrf_radio_cistat_get|function|__STATIC_INLINE uint8_t nrf_radio_cistat_get(void)
DECL|nrf_radio_crc_addr_t|typedef|} nrf_radio_crc_addr_t;
DECL|nrf_radio_crc_configure|function|__STATIC_INLINE void nrf_radio_crc_configure(uint8_t crc_length, nrf_radio_crc_addr_t crc_address, uint32_t crc_polynominal)
DECL|nrf_radio_crc_status_check|function|__STATIC_INLINE bool nrf_radio_crc_status_check(void)
DECL|nrf_radio_crcinit_get|function|__STATIC_INLINE uint32_t nrf_radio_crcinit_get(void)
DECL|nrf_radio_crcinit_set|function|__STATIC_INLINE void nrf_radio_crcinit_set(uint32_t crc_init_value)
DECL|nrf_radio_dab_get|function|__STATIC_INLINE uint32_t nrf_radio_dab_get(uint8_t segment)
DECL|nrf_radio_dab_set|function|__STATIC_INLINE void nrf_radio_dab_set(uint32_t dab_value, uint8_t segment)
DECL|nrf_radio_dacnf_ena_get|function|__STATIC_INLINE uint8_t nrf_radio_dacnf_ena_get(void)
DECL|nrf_radio_dacnf_set|function|__STATIC_INLINE void nrf_radio_dacnf_set(uint8_t ena, uint8_t txadd)
DECL|nrf_radio_dacnf_txadd_get|function|__STATIC_INLINE uint8_t nrf_radio_dacnf_txadd_get(void)
DECL|nrf_radio_dai_get|function|__STATIC_INLINE uint8_t nrf_radio_dai_get(void)
DECL|nrf_radio_dap_get|function|__STATIC_INLINE uint32_t nrf_radio_dap_get(uint8_t prefix_index)
DECL|nrf_radio_dap_set|function|__STATIC_INLINE void nrf_radio_dap_set(uint16_t dap_value, uint8_t prefix_index)
DECL|nrf_radio_datawhiteiv_get|function|__STATIC_INLINE uint8_t nrf_radio_datawhiteiv_get(void)
DECL|nrf_radio_datawhiteiv_set|function|__STATIC_INLINE void nrf_radio_datawhiteiv_set(uint8_t datawhiteiv)
DECL|nrf_radio_ed_loop_count_set|function|__STATIC_INLINE void nrf_radio_ed_loop_count_set(uint32_t ed_loop_count)
DECL|nrf_radio_ed_sample_get|function|__STATIC_INLINE uint8_t nrf_radio_ed_sample_get(void)
DECL|nrf_radio_event_address_get|function|__STATIC_INLINE uint32_t nrf_radio_event_address_get(nrf_radio_event_t radio_event)
DECL|nrf_radio_event_check|function|__STATIC_INLINE bool nrf_radio_event_check(nrf_radio_event_t radio_event)
DECL|nrf_radio_event_clear|function|__STATIC_INLINE void nrf_radio_event_clear(nrf_radio_event_t radio_event)
DECL|nrf_radio_event_t|typedef|} nrf_radio_event_t;
DECL|nrf_radio_frequency_get|function|__STATIC_INLINE uint16_t nrf_radio_frequency_get(void)
DECL|nrf_radio_frequency_set|function|__STATIC_INLINE void nrf_radio_frequency_set(uint16_t radio_frequency)
DECL|nrf_radio_ifs_get|function|__STATIC_INLINE uint32_t nrf_radio_ifs_get(void)
DECL|nrf_radio_ifs_set|function|__STATIC_INLINE void nrf_radio_ifs_set(uint32_t radio_ifs)
DECL|nrf_radio_int_disable|function|__STATIC_INLINE void nrf_radio_int_disable(uint32_t radio_int_mask)
DECL|nrf_radio_int_enable_check|function|__STATIC_INLINE bool nrf_radio_int_enable_check(nrf_radio_int_mask_t radio_int_mask)
DECL|nrf_radio_int_enable|function|__STATIC_INLINE void nrf_radio_int_enable(uint32_t radio_int_mask)
DECL|nrf_radio_int_mask_t|typedef|} nrf_radio_int_mask_t;
DECL|nrf_radio_mhmu_pattern_mask_get|function|__STATIC_INLINE uint32_t nrf_radio_mhmu_pattern_mask_get(void)
DECL|nrf_radio_mhmu_pattern_mask_set|function|__STATIC_INLINE void nrf_radio_mhmu_pattern_mask_set(uint32_t radio_mhmu_pattern_mask)
DECL|nrf_radio_mhmu_search_pattern_get|function|__STATIC_INLINE uint32_t nrf_radio_mhmu_search_pattern_get(void)
DECL|nrf_radio_mhmu_search_pattern_set|function|__STATIC_INLINE void nrf_radio_mhmu_search_pattern_set(uint32_t radio_mhmu_search_pattern)
DECL|nrf_radio_mode_get|function|__STATIC_INLINE nrf_radio_mode_t nrf_radio_mode_get(void)
DECL|nrf_radio_mode_set|function|__STATIC_INLINE void nrf_radio_mode_set(nrf_radio_mode_t radio_mode)
DECL|nrf_radio_mode_t|typedef|} nrf_radio_mode_t;
DECL|nrf_radio_modecnf0_dtx_get|function|__STATIC_INLINE uint8_t nrf_radio_modecnf0_dtx_get(void)
DECL|nrf_radio_modecnf0_ru_get|function|__STATIC_INLINE bool nrf_radio_modecnf0_ru_get(void)
DECL|nrf_radio_modecnf0_set|function|__STATIC_INLINE void nrf_radio_modecnf0_set(bool fast_ramp_up, uint8_t default_tx)
DECL|nrf_radio_packet_conf_t|typedef|} nrf_radio_packet_conf_t;
DECL|nrf_radio_packet_configure|function|__STATIC_INLINE void nrf_radio_packet_configure(const nrf_radio_packet_conf_t * p_config)
DECL|nrf_radio_packetptr_get|function|__STATIC_INLINE void * nrf_radio_packetptr_get(void)
DECL|nrf_radio_packetptr_set|function|__STATIC_INLINE void nrf_radio_packetptr_set(const void * p_packet)
DECL|nrf_radio_pdustat_get|function|__STATIC_INLINE uint8_t nrf_radio_pdustat_get(void)
DECL|nrf_radio_power_set|function|__STATIC_INLINE void nrf_radio_power_set(bool radio_power)
DECL|nrf_radio_preamble_length_t|typedef|} nrf_radio_preamble_length_t;
DECL|nrf_radio_prefix0_get|function|__STATIC_INLINE uint32_t nrf_radio_prefix0_get(void)
DECL|nrf_radio_prefix0_set|function|__STATIC_INLINE void nrf_radio_prefix0_set(uint32_t prefix0_value)
DECL|nrf_radio_prefix1_get|function|__STATIC_INLINE uint32_t nrf_radio_prefix1_get(void)
DECL|nrf_radio_prefix1_set|function|__STATIC_INLINE void nrf_radio_prefix1_set(uint32_t prefix1_value)
DECL|nrf_radio_rssi_sample_get|function|__STATIC_INLINE uint8_t nrf_radio_rssi_sample_get(void)
DECL|nrf_radio_rxaddresses_get|function|__STATIC_INLINE uint8_t nrf_radio_rxaddresses_get(void)
DECL|nrf_radio_rxaddresses_set|function|__STATIC_INLINE void nrf_radio_rxaddresses_set(uint8_t rxaddresses)
DECL|nrf_radio_rxcrc_get|function|__STATIC_INLINE uint32_t nrf_radio_rxcrc_get(void)
DECL|nrf_radio_rxmatch_get|function|__STATIC_INLINE uint8_t nrf_radio_rxmatch_get(void)
DECL|nrf_radio_sfd_get|function|__STATIC_INLINE uint8_t nrf_radio_sfd_get(void)
DECL|nrf_radio_sfd_set|function|__STATIC_INLINE void nrf_radio_sfd_set(uint8_t sfd)
DECL|nrf_radio_short_mask_t|typedef|} nrf_radio_short_mask_t;
DECL|nrf_radio_shorts_disable|function|__STATIC_INLINE void nrf_radio_shorts_disable(uint32_t radio_shorts_mask)
DECL|nrf_radio_shorts_enable|function|__STATIC_INLINE void nrf_radio_shorts_enable(uint32_t radio_shorts_mask)
DECL|nrf_radio_shorts_get|function|__STATIC_INLINE uint32_t nrf_radio_shorts_get(void)
DECL|nrf_radio_shorts_set|function|__STATIC_INLINE void nrf_radio_shorts_set(uint32_t radio_shorts_mask)
DECL|nrf_radio_state_get|function|__STATIC_INLINE nrf_radio_state_t nrf_radio_state_get(void)
DECL|nrf_radio_state_t|typedef|} nrf_radio_state_t;
DECL|nrf_radio_task_address_get|function|__STATIC_INLINE uint32_t nrf_radio_task_address_get(nrf_radio_task_t radio_task)
DECL|nrf_radio_task_trigger|function|__STATIC_INLINE void nrf_radio_task_trigger(nrf_radio_task_t radio_task)
DECL|nrf_radio_task_t|typedef|} nrf_radio_task_t;
DECL|nrf_radio_txaddress_get|function|__STATIC_INLINE uint8_t nrf_radio_txaddress_get(void)
DECL|nrf_radio_txaddress_set|function|__STATIC_INLINE void nrf_radio_txaddress_set(uint8_t txaddress)
DECL|nrf_radio_txpower_get|function|__STATIC_INLINE nrf_radio_txpower_t nrf_radio_txpower_get(void)
DECL|nrf_radio_txpower_set|function|__STATIC_INLINE void nrf_radio_txpower_set(nrf_radio_txpower_t tx_power)
DECL|nrf_radio_txpower_t|typedef|} nrf_radio_txpower_t;
DECL|plen|member|nrf_radio_preamble_length_t plen; /**< Length of preamble on air. Decision point: TASKS_START task. */
DECL|s0len|member|uint8_t s0len; /**< Length on air of S0 field in number of bytes. */
DECL|s1incl|member|bool s1incl; /**< Include or exclude S1 field in RAM. */
DECL|s1len|member|uint8_t s1len; /**< Length on air of S1 field in number of bits. */
DECL|statlen|member|uint8_t statlen; /**< Static length in number of bytes. */
DECL|termlen|member|uint8_t termlen; /**< Length of TERM field in Long Range operation. */
DECL|whiteen|member|bool whiteen; /**< Enable or disable packet whitening. */
