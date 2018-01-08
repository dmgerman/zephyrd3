DECL|NRF_QSPI_ADDRCONF_MODE_ALL|enumerator|NRF_QSPI_ADDRCONF_MODE_ALL = QSPI_ADDRCONF_MODE_All /**< Send opcode, byte0, byte1. */
DECL|NRF_QSPI_ADDRCONF_MODE_NOINSTR|enumerator|NRF_QSPI_ADDRCONF_MODE_NOINSTR = QSPI_ADDRCONF_MODE_NoInstr, /**< Do not send any instruction. */
DECL|NRF_QSPI_ADDRCONF_MODE_OPBYTE0|enumerator|NRF_QSPI_ADDRCONF_MODE_OPBYTE0 = QSPI_ADDRCONF_MODE_OpByte0, /**< Send opcode, byte0. */
DECL|NRF_QSPI_ADDRCONF_MODE_OPCODE|enumerator|NRF_QSPI_ADDRCONF_MODE_OPCODE = QSPI_ADDRCONF_MODE_Opcode, /**< Send opcode. */
DECL|NRF_QSPI_ADDRMODE_24BIT|enumerator|NRF_QSPI_ADDRMODE_24BIT = QSPI_IFCONFIG0_ADDRMODE_24BIT, /**< 24-bit addressing. */
DECL|NRF_QSPI_ADDRMODE_32BIT|enumerator|NRF_QSPI_ADDRMODE_32BIT = QSPI_IFCONFIG0_ADDRMODE_32BIT /**< 32-bit addressing. */
DECL|NRF_QSPI_CINSTR_LEN_1B|enumerator|NRF_QSPI_CINSTR_LEN_1B = QSPI_CINSTRCONF_LENGTH_1B, /**< Send opcode only. */
DECL|NRF_QSPI_CINSTR_LEN_2B|enumerator|NRF_QSPI_CINSTR_LEN_2B = QSPI_CINSTRCONF_LENGTH_2B, /**< Send opcode, CINSTRDAT0.BYTE0. */
DECL|NRF_QSPI_CINSTR_LEN_3B|enumerator|NRF_QSPI_CINSTR_LEN_3B = QSPI_CINSTRCONF_LENGTH_3B, /**< Send opcode, CINSTRDAT0.BYTE0 -> CINSTRDAT0.BYTE1. */
DECL|NRF_QSPI_CINSTR_LEN_4B|enumerator|NRF_QSPI_CINSTR_LEN_4B = QSPI_CINSTRCONF_LENGTH_4B, /**< Send opcode, CINSTRDAT0.BYTE0 -> CINSTRDAT0.BYTE2. */
DECL|NRF_QSPI_CINSTR_LEN_5B|enumerator|NRF_QSPI_CINSTR_LEN_5B = QSPI_CINSTRCONF_LENGTH_5B, /**< Send opcode, CINSTRDAT0.BYTE0 -> CINSTRDAT0.BYTE3. */
DECL|NRF_QSPI_CINSTR_LEN_6B|enumerator|NRF_QSPI_CINSTR_LEN_6B = QSPI_CINSTRCONF_LENGTH_6B, /**< Send opcode, CINSTRDAT0.BYTE0 -> CINSTRDAT1.BYTE4. */
DECL|NRF_QSPI_CINSTR_LEN_7B|enumerator|NRF_QSPI_CINSTR_LEN_7B = QSPI_CINSTRCONF_LENGTH_7B, /**< Send opcode, CINSTRDAT0.BYTE0 -> CINSTRDAT1.BYTE5. */
DECL|NRF_QSPI_CINSTR_LEN_8B|enumerator|NRF_QSPI_CINSTR_LEN_8B = QSPI_CINSTRCONF_LENGTH_8B, /**< Send opcode, CINSTRDAT0.BYTE0 -> CINSTRDAT1.BYTE6. */
DECL|NRF_QSPI_CINSTR_LEN_9B|enumerator|NRF_QSPI_CINSTR_LEN_9B = QSPI_CINSTRCONF_LENGTH_9B /**< Send opcode, CINSTRDAT0.BYTE0 -> CINSTRDAT1.BYTE7. */
DECL|NRF_QSPI_ERASE_LEN_4KB|enumerator|NRF_QSPI_ERASE_LEN_4KB = QSPI_ERASE_LEN_LEN_4KB, /**< Erase 4 kB block (flash command 0x20). */
DECL|NRF_QSPI_ERASE_LEN_64KB|enumerator|NRF_QSPI_ERASE_LEN_64KB = QSPI_ERASE_LEN_LEN_64KB, /**< Erase 64 kB block (flash command 0xD8). */
DECL|NRF_QSPI_ERASE_LEN_ALL|enumerator|NRF_QSPI_ERASE_LEN_ALL = QSPI_ERASE_LEN_LEN_All /**< Erase all (flash command 0xC7). */
DECL|NRF_QSPI_EVENT_READY|enumerator|NRF_QSPI_EVENT_READY = offsetof(NRF_QSPI_Type, EVENTS_READY) /**< QSPI peripheral is ready after it executes any task. */
DECL|NRF_QSPI_FREQ_32MDIV10|enumerator|NRF_QSPI_FREQ_32MDIV10, /**< 3.20 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV11|enumerator|NRF_QSPI_FREQ_32MDIV11, /**< 2.90 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV12|enumerator|NRF_QSPI_FREQ_32MDIV12, /**< 2.66 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV13|enumerator|NRF_QSPI_FREQ_32MDIV13, /**< 2.46 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV14|enumerator|NRF_QSPI_FREQ_32MDIV14, /**< 2.29 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV15|enumerator|NRF_QSPI_FREQ_32MDIV15, /**< 2.13 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV16|enumerator|NRF_QSPI_FREQ_32MDIV16, /**< 2.00 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV1|enumerator|NRF_QSPI_FREQ_32MDIV1, /**< 32.0 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV2|enumerator|NRF_QSPI_FREQ_32MDIV2, /**< 16.0 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV3|enumerator|NRF_QSPI_FREQ_32MDIV3, /**< 10.6 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV4|enumerator|NRF_QSPI_FREQ_32MDIV4, /**< 8.00 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV5|enumerator|NRF_QSPI_FREQ_32MDIV5, /**< 6.40 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV6|enumerator|NRF_QSPI_FREQ_32MDIV6, /**< 5.33 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV7|enumerator|NRF_QSPI_FREQ_32MDIV7, /**< 4.57 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV8|enumerator|NRF_QSPI_FREQ_32MDIV8, /**< 4.00 MHz. */
DECL|NRF_QSPI_FREQ_32MDIV9|enumerator|NRF_QSPI_FREQ_32MDIV9, /**< 3.55 MHz. */
DECL|NRF_QSPI_H__|macro|NRF_QSPI_H__
DECL|NRF_QSPI_INT_READY_MASK|enumerator|NRF_QSPI_INT_READY_MASK = QSPI_INTENSET_READY_Msk /**< Interrupt on READY event. */
DECL|NRF_QSPI_MODE_0|enumerator|NRF_QSPI_MODE_0 = QSPI_IFCONFIG1_SPIMODE_MODE0, /**< Mode 0 (CPOL=0, CPHA=0). */
DECL|NRF_QSPI_MODE_1|enumerator|NRF_QSPI_MODE_1 = QSPI_IFCONFIG1_SPIMODE_MODE3 /**< Mode 1 (CPOL=1, CPHA=1). */
DECL|NRF_QSPI_PIN_NOT_CONNECTED|macro|NRF_QSPI_PIN_NOT_CONNECTED
DECL|NRF_QSPI_PIN_VAL|macro|NRF_QSPI_PIN_VAL
DECL|NRF_QSPI_READOC_FASTREAD|enumerator|NRF_QSPI_READOC_FASTREAD = QSPI_IFCONFIG0_READOC_FASTREAD, /**< Single data line SPI. FAST_READ (opcode 0x0B). */
DECL|NRF_QSPI_READOC_READ2IO|enumerator|NRF_QSPI_READOC_READ2IO = QSPI_IFCONFIG0_READOC_READ2IO, /**< Dual data line SPI. READ2IO (opcode 0xBB). */
DECL|NRF_QSPI_READOC_READ2O|enumerator|NRF_QSPI_READOC_READ2O = QSPI_IFCONFIG0_READOC_READ2O, /**< Dual data line SPI. READ2O (opcode 0x3B). */
DECL|NRF_QSPI_READOC_READ4IO|enumerator|NRF_QSPI_READOC_READ4IO = QSPI_IFCONFIG0_READOC_READ4IO /**< Quad data line SPI. READ4IO (opcode 0xEB). */
DECL|NRF_QSPI_READOC_READ4O|enumerator|NRF_QSPI_READOC_READ4O = QSPI_IFCONFIG0_READOC_READ4O, /**< Quad data line SPI. READ4O (opcode 0x6B). */
DECL|NRF_QSPI_TASK_ACTIVATE|enumerator|NRF_QSPI_TASK_ACTIVATE = offsetof(NRF_QSPI_Type, TASKS_ACTIVATE), /**< Activate the QSPI interface. */
DECL|NRF_QSPI_TASK_ERASESTART|enumerator|NRF_QSPI_TASK_ERASESTART = offsetof(NRF_QSPI_Type, TASKS_ERASESTART), /**< Start external flash memory erase operation. */
DECL|NRF_QSPI_TASK_READSTART|enumerator|NRF_QSPI_TASK_READSTART = offsetof(NRF_QSPI_Type, TASKS_READSTART), /**< Start transfer from external flash memory to internal RAM. */
DECL|NRF_QSPI_TASK_WRITESTART|enumerator|NRF_QSPI_TASK_WRITESTART = offsetof(NRF_QSPI_Type, TASKS_WRITESTART), /**< Start transfer from internal RAM to external flash memory. */
DECL|NRF_QSPI_WRITEOC_PP2O|enumerator|NRF_QSPI_WRITEOC_PP2O = QSPI_IFCONFIG0_WRITEOC_PP2O, /**< Dual data line SPI. PP2O (opcode 0xA2). */
DECL|NRF_QSPI_WRITEOC_PP4IO|enumerator|NRF_QSPI_WRITEOC_PP4IO = QSPI_IFCONFIG0_WRITEOC_PP4IO, /**< Quad data line SPI. READ4O (opcode 0x38). */
DECL|NRF_QSPI_WRITEOC_PP4O|enumerator|NRF_QSPI_WRITEOC_PP4O = QSPI_IFCONFIG0_WRITEOC_PP4O, /**< Quad data line SPI. PP4O (opcode 0x32). */
DECL|NRF_QSPI_WRITEOC_PP|enumerator|NRF_QSPI_WRITEOC_PP = QSPI_IFCONFIG0_WRITEOC_PP, /**< Single data line SPI. PP (opcode 0x02). */
DECL|addrmode|member|nrf_qspi_addrmode_t addrmode; /**< Addresing mode (24-bit or 32-bit). */
DECL|byte0|member|uint8_t byte0; /**< Byte following the opcode. */
DECL|byte1|member|uint8_t byte1; /**< Byte following byte0. */
DECL|csn_pin|member|uint8_t csn_pin; /**< Chip select pin number. */
DECL|dpmconfig|member|bool dpmconfig; /**< Enable the Deep Power-down Mode (DPM) feature. */
DECL|dpmen|member|bool dpmen; /**< Enable the DPM feature. */
DECL|io0_pin|member|uint8_t io0_pin; /**< IO0/MOSI pin number. */
DECL|io1_pin|member|uint8_t io1_pin; /**< IO1/MISO pin number. */
DECL|io2_level|member|bool io2_level; /**< I/O line level during transmission. */
DECL|io2_pin|member|uint8_t io2_pin; /**< IO2 pin number (optional).
DECL|io3_level|member|bool io3_level; /**< I/O line level during transmission. */
DECL|io3_pin|member|uint8_t io3_pin; /**< IO3 pin number (optional).
DECL|length|member|nrf_qspi_cinstr_len_t length; /**< Length of the custom instruction data. */
DECL|mode|member|nrf_qspi_addrconfig_mode_t mode; /**< Extended addresing mode. */
DECL|nrf_qspi_addrconfig_conf_t|typedef|} nrf_qspi_addrconfig_conf_t;
DECL|nrf_qspi_addrconfig_mode_t|typedef|} nrf_qspi_addrconfig_mode_t;
DECL|nrf_qspi_addrconfig_set|function|__STATIC_INLINE void nrf_qspi_addrconfig_set(NRF_QSPI_Type * p_reg, const nrf_qspi_addrconfig_conf_t * p_config)
DECL|nrf_qspi_addrmode_t|typedef|} nrf_qspi_addrmode_t;
DECL|nrf_qspi_busy_check|function|__STATIC_INLINE bool nrf_qspi_busy_check(NRF_QSPI_Type const * p_reg)
DECL|nrf_qspi_cinstr_conf_t|typedef|} nrf_qspi_cinstr_conf_t;
DECL|nrf_qspi_cinstr_len_t|typedef|} nrf_qspi_cinstr_len_t;
DECL|nrf_qspi_cinstr_transfer_start|function|__STATIC_INLINE void nrf_qspi_cinstr_transfer_start(NRF_QSPI_Type * p_reg, const nrf_qspi_cinstr_conf_t * p_config)
DECL|nrf_qspi_cinstrdata_get|function|__STATIC_INLINE void nrf_qspi_cinstrdata_get(NRF_QSPI_Type const * p_reg, nrf_qspi_cinstr_len_t length, void * p_rx_data)
DECL|nrf_qspi_cinstrdata_set|function|__STATIC_INLINE void nrf_qspi_cinstrdata_set(NRF_QSPI_Type * p_reg, nrf_qspi_cinstr_len_t length, void const * p_tx_data)
DECL|nrf_qspi_disable|function|__STATIC_INLINE void nrf_qspi_disable(NRF_QSPI_Type * p_reg)
DECL|nrf_qspi_enable|function|__STATIC_INLINE void nrf_qspi_enable(NRF_QSPI_Type * p_reg)
DECL|nrf_qspi_erase_len_t|typedef|} nrf_qspi_erase_len_t;
DECL|nrf_qspi_erase_ptr_set|function|__STATIC_INLINE void nrf_qspi_erase_ptr_set(NRF_QSPI_Type * p_reg, uint32_t erase_addr, nrf_qspi_erase_len_t len)
DECL|nrf_qspi_event_address_get|function|__STATIC_INLINE uint32_t * nrf_qspi_event_address_get(NRF_QSPI_Type const * p_reg, nrf_qspi_event_t qspi_event)
DECL|nrf_qspi_event_check|function|__STATIC_INLINE bool nrf_qspi_event_check(NRF_QSPI_Type const * p_reg, nrf_qspi_event_t qspi_event)
DECL|nrf_qspi_event_clear|function|__STATIC_INLINE void nrf_qspi_event_clear(NRF_QSPI_Type * p_reg, nrf_qspi_event_t qspi_event)
DECL|nrf_qspi_event_t|typedef|} nrf_qspi_event_t;
DECL|nrf_qspi_frequency_t|typedef|} nrf_qspi_frequency_t;
DECL|nrf_qspi_ifconfig0_set|function|__STATIC_INLINE void nrf_qspi_ifconfig0_set(NRF_QSPI_Type * p_reg, const nrf_qspi_prot_conf_t * p_config)
DECL|nrf_qspi_ifconfig1_set|function|__STATIC_INLINE void nrf_qspi_ifconfig1_set(NRF_QSPI_Type * p_reg, const nrf_qspi_phy_conf_t * p_config)
DECL|nrf_qspi_int_disable|function|__STATIC_INLINE void nrf_qspi_int_disable(NRF_QSPI_Type * p_reg, uint32_t qspi_int_mask)
DECL|nrf_qspi_int_enable_check|function|__STATIC_INLINE bool nrf_qspi_int_enable_check(NRF_QSPI_Type const * p_reg, nrf_qspi_int_mask_t qspi_int)
DECL|nrf_qspi_int_enable|function|__STATIC_INLINE void nrf_qspi_int_enable(NRF_QSPI_Type * p_reg, uint32_t qspi_int_mask)
DECL|nrf_qspi_int_mask_t|typedef|} nrf_qspi_int_mask_t;
DECL|nrf_qspi_phy_conf_t|typedef|} nrf_qspi_phy_conf_t;
DECL|nrf_qspi_pins_set|function|__STATIC_INLINE void nrf_qspi_pins_set(NRF_QSPI_Type * p_reg, const nrf_qspi_pins_t * p_pins)
DECL|nrf_qspi_pins_t|typedef|} nrf_qspi_pins_t;
DECL|nrf_qspi_prot_conf_t|typedef|} nrf_qspi_prot_conf_t;
DECL|nrf_qspi_read_buffer_set|function|__STATIC_INLINE void nrf_qspi_read_buffer_set(NRF_QSPI_Type * p_reg, void * p_buffer, uint32_t length, uint32_t src_addr)
DECL|nrf_qspi_readoc_t|typedef|} nrf_qspi_readoc_t;
DECL|nrf_qspi_spi_mode_t|typedef|} nrf_qspi_spi_mode_t;
DECL|nrf_qspi_sreg_get|function|__STATIC_INLINE uint8_t nrf_qspi_sreg_get(NRF_QSPI_Type const * p_reg)
DECL|nrf_qspi_status_reg_get|function|__STATIC_INLINE uint32_t nrf_qspi_status_reg_get(NRF_QSPI_Type const * p_reg)
DECL|nrf_qspi_task_address_get|function|__STATIC_INLINE uint32_t nrf_qspi_task_address_get(NRF_QSPI_Type const * p_reg, nrf_qspi_task_t task)
DECL|nrf_qspi_task_trigger|function|__STATIC_INLINE void nrf_qspi_task_trigger(NRF_QSPI_Type * p_reg, nrf_qspi_task_t task)
DECL|nrf_qspi_task_t|typedef|} nrf_qspi_task_t;
DECL|nrf_qspi_write_buffer_set|function|__STATIC_INLINE void nrf_qspi_write_buffer_set(NRF_QSPI_Type * p_reg, void const * p_buffer, uint32_t length, uint32_t dest_addr)
DECL|nrf_qspi_writeoc_t|typedef|} nrf_qspi_writeoc_t;
DECL|nrf_qspi_xip_offset_set|function|__STATIC_INLINE void nrf_qspi_xip_offset_set(NRF_QSPI_Type * p_reg, uint32_t xip_offset)
DECL|opcode|member|uint8_t opcode; /**< Opcode used in custom instruction transmission. */
DECL|opcode|member|uint8_t opcode; /**< Opcode used to enter proper addressing mode. */
DECL|readoc|member|nrf_qspi_readoc_t readoc; /**< Read operation code. */
DECL|sck_delay|member|uint8_t sck_delay; /**< tSHSL, tWHSL, and tSHWL in number of 16 MHz periods (62.5ns). */
DECL|sck_freq|member|nrf_qspi_frequency_t sck_freq; /**< SCK frequency given as enum @ref nrf_qspi_frequency_t. */
DECL|sck_pin|member|uint8_t sck_pin; /**< SCK pin number. */
DECL|spi_mode|member|nrf_qspi_spi_mode_t spi_mode; /**< SPI phase and polarization. */
DECL|wipwait|member|bool wipwait; /**< Enable/disable waiting for complete operation execution. */
DECL|wipwait|member|bool wipwait; /**< Wait if a Wait in Progress bit is set in the memory status byte. */
DECL|wren|member|bool wren; /**< Send write enable before instruction. */
DECL|wren|member|bool wren; /**< Send write enable before instruction. */
DECL|writeoc|member|nrf_qspi_writeoc_t writeoc; /**< Write operation code. */
