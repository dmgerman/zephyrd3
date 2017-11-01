DECL|FSL_SEMC_DRIVER_VERSION|macro|FSL_SEMC_DRIVER_VERSION
DECL|SEMC_BuildNandIPCommand|function|static inline uint16_t SEMC_BuildNandIPCommand(uint8_t userCommand, semc_ipcmd_nand_addrmode_t addrMode, semc_ipcmd_nand_cmdmode_t cmdMode)
DECL|SEMC_ClearStatusFlags|function|static inline void SEMC_ClearStatusFlags(SEMC_Type *base, uint32_t mask)
DECL|SEMC_DisableInterrupts|function|static inline void SEMC_DisableInterrupts(SEMC_Type *base, uint32_t mask)
DECL|SEMC_EnableInterrupts|function|static inline void SEMC_EnableInterrupts(SEMC_Type *base, uint32_t mask)
DECL|SEMC_GetStatusFlag|function|static inline bool SEMC_GetStatusFlag(SEMC_Type *base)
DECL|SEMC_IsInIdle|function|static inline bool SEMC_IsInIdle(SEMC_Type *base)
DECL|SEMC_IsNandReady|function|static inline bool SEMC_IsNandReady(SEMC_Type *base)
DECL|_FSL_SEMC_H_|macro|_FSL_SEMC_H_
DECL|_semc_addr_mode|enum|typedef enum _semc_addr_mode {
DECL|_semc_adv_polarity|enum|typedef enum _semc_adv_polarity {
DECL|_semc_axi_queueweight|struct|typedef struct _semc_axi_queueweight
DECL|_semc_caslatency|enum|typedef enum _semc_caslatency {
DECL|_semc_config_t|struct|typedef struct _semc_config_t
DECL|_semc_dbi_burst_len|enum|typedef enum _semc_dbi_burst_len {
DECL|_semc_dbi_column_bit_num|enum|typedef enum _semc_dbi_column_bit_num {
DECL|_semc_dbi_config|struct|typedef struct _semc_dbi_config
DECL|_semc_dqs_mode|enum|typedef enum _semc_dqs_mode {
DECL|_semc_interrupt_enable|enum|typedef enum _semc_interrupt_enable {
DECL|_semc_iomux_nora27_pin|enum|typedef enum _semc_iomux_nora27_pin {
DECL|_semc_iomux_pin|enum|typedef enum _semc_iomux_pin {
DECL|_semc_ipcmd_datasize|enum|typedef enum _semc_ipcmd_datasize {
DECL|_semc_ipcmd_nand_addrmode|enum|typedef enum _semc_ipcmd_nand_addrmode {
DECL|_semc_ipcmd_nand_cmdmode|enum|typedef enum _semc_ipcmd_nand_cmdmode {
DECL|_semc_ipcmd_nor_dbi|enum|typedef enum _semc_ipcmd_nor_dbi {
DECL|_semc_ipcmd_sdram|enum|typedef enum _semc_ipcmd_sdram {
DECL|_semc_ipcmd_sram|enum|typedef enum _semc_ipcmd_sram {
DECL|_semc_mem_type|enum|typedef enum _semc_mem_type {
DECL|_semc_nand_address_option|enum|typedef enum _semc_nand_address_option {
DECL|_semc_nand_burst_len|enum|typedef enum _semc_nand_burst_len {
DECL|_semc_nand_column_bit_num|enum|typedef enum _semc_nand_column_bit_num {
DECL|_semc_nand_config|struct|typedef struct _semc_nand_config
DECL|_semc_nand_type|enum|typedef enum _semc_nand_type {
DECL|_semc_nor_config|struct|typedef struct _semc_nor_config
DECL|_semc_norsram_burst_len|enum|typedef enum _semc_norsram_burst_len {
DECL|_semc_norsram_column_bit_num|enum|typedef enum _semc_norsram_column_bit_num {
DECL|_semc_port_size|enum|typedef enum _semc_port_size {
DECL|_semc_queuea_weight|struct|typedef struct _semc_queuea_weight
DECL|_semc_queueb_weight|struct|typedef struct _semc_queueb_weight
DECL|_semc_rdy_polarity|enum|typedef enum _semc_rdy_polarity {
DECL|_semc_refresh_time|enum|typedef enum _semc_refresh_time {
DECL|_semc_sdram_burst_len|enum|typedef enum _semc_sdram_burst_len {
DECL|_semc_sdram_column_bit_num|enum|typedef enum _semc_sdram_column_bit_num {
DECL|_semc_sdram_config|struct|typedef struct _semc_sdram_config
DECL|_semc_sdram_cs|enum|typedef enum _semc_sdram_cs {
DECL|_semc_sram_config|struct|typedef struct _semc_sram_config
DECL|_semc_status|enum|enum _semc_status
DECL|_semc_waitready_polarity|enum|typedef enum _semc_waitready_polarity {
DECL|addr27|member|semc_iomux_nora27_pin addr27; /*!< The Addr bit 27 pin mux setting. */
DECL|addr27|member|semc_iomux_nora27_pin addr27; /*!< The Addr bit 27 pin mux setting. */
DECL|addrMode|member|semc_addr_mode_t addrMode; /*!< Address mode. */
DECL|addrMode|member|semc_addr_mode_t addrMode; /*!< Address mode. */
DECL|addrPortWidth|member|uint8_t addrPortWidth; /*!< The address port width. */
DECL|addrPortWidth|member|uint8_t addrPortWidth; /*!< The address port width. */
DECL|address|member|uint32_t address; /*!< The base address. */
DECL|address|member|uint32_t address; /*!< The base address. */
DECL|address|member|uint32_t address; /*!< The base address. */
DECL|address|member|uint32_t address; /*!< The base address. */
DECL|advActivePolarity|member|semc_adv_polarity_t advActivePolarity; /*!< ADV# polarity 1: active high, 0: active low. */
DECL|advActivePolarity|member|semc_adv_polarity_t advActivePolarity; /*!< ADV# polarity. */
DECL|aging|member|uint32_t aging : 4; /*!< weight of aging for queue 0.*/
DECL|aging|member|uint32_t aging : 4; /*!< weight of aging for queue 1.*/
DECL|arrayAddrOption|member|semc_nand_address_option_t arrayAddrOption; /*!< Address option. */
DECL|axiAddress|member|uint32_t axiAddress; /*!< The base address for AXI nand. */
DECL|axiMemsize_kbytes|member|uint32_t axiMemsize_kbytes; /*!< The memory size in unit of kbytes for AXI nand. */
DECL|bankRotation|member|uint32_t bankRotation : 8; /*!< weight of bank rotation for queue 1 only .*/
DECL|burstLen|member|sem_dbi_burst_len_t burstLen; /*!< Burst length. */
DECL|burstLen|member|sem_nand_burst_len_t burstLen; /*!< Burst length. */
DECL|burstLen|member|sem_norsram_burst_len_t burstLen; /*!< Burst length. */
DECL|burstLen|member|sem_norsram_burst_len_t burstLen; /*!< Burst length. */
DECL|burstLen|member|sem_sdram_burst_len_t burstLen; /*!< Burst length. */
DECL|busTimeoutCycles|member|uint8_t busTimeoutCycles; /*!< Bus timeout cycles. */
DECL|casLatency|member|semc_caslatency_t casLatency; /*!< CAS latency. */
DECL|cePinMux|member|semc_iomux_pin cePinMux; /*!< The CE pin mux setting. The kSEMC_MUXRDY is not valid for CE pin setting. */
DECL|cePinMux|member|semc_iomux_pin cePinMux; /*!< The CE# pin mux setting. */
DECL|cePinMux|member|semc_iomux_pin cePinMux; /*!< The CE# pin mux setting. */
DECL|cmdTimeoutCycles|member|uint8_t cmdTimeoutCycles; /*!< Command execution timeout cycles. */
DECL|columnAddrBitNum|member|semc_dbi_column_bit_num_t columnAddrBitNum; /*!< Column address bit number. */
DECL|columnAddrBitNum|member|semc_nand_column_bit_num_t columnAddrBitNum; /*!< Column address bit number. */
DECL|columnAddrBitNum|member|semc_norsram_column_bit_num_t columnAddrBitNum; /*!< Column address bit number. */
DECL|columnAddrBitNum|member|semc_sdram_column_bit_num_t columnAddrBitNum; /*!< Column address bit number. */
DECL|csxPinMux|member|semc_iomux_pin csxPinMux; /*!< CS pin mux. The kSEMC_MUXA8 is not valid in sdram pin mux setting. */
DECL|csxPinMux|member|semc_iomux_pin csxPinMux; /*!< The CE# pin mux. */
DECL|dqsMode|member|semc_dqs_mode_t dqsMode; /*!< Dummy read strobe mode: use enum in "semc_dqs_mode_t". */
DECL|edoModeEnabled|member|bool edoModeEnabled; /*!< EDO mode enabled. */
DECL|ipgAddress|member|uint32_t ipgAddress; /*!< The base address for IPG nand . */
DECL|ipgMemsize_kbytes|member|uint32_t ipgMemsize_kbytes; /*!< The memory size in unit of kbytes for IPG nand. */
DECL|kSEMC_AXIBusErrInterrupt|enumerator|kSEMC_AXIBusErrInterrupt = SEMC_INTEN_AXIBUSERREN_MASK /*!< AXI bus error interrupt. */
DECL|kSEMC_AXICmdErrInterrupt|enumerator|kSEMC_AXICmdErrInterrupt = SEMC_INTEN_AXICMDERREN_MASK, /*!< AXI command error interrupt. */
DECL|kSEMC_AddrDataMux|enumerator|kSEMC_AddrDataMux = 0, /*!< SEMC address/data mux mode. */
DECL|kSEMC_AddrDataNonMux|enumerator|kSEMC_AddrDataNonMux /*!< Address/data non-mux mode. */
DECL|kSEMC_AdvActiveLow|enumerator|kSEMC_AdvActiveLow = 0, /*!< Adv active low. */
DECL|kSEMC_AdvActivehigh|enumerator|kSEMC_AdvActivehigh, /*!< Adv active low. */
DECL|kSEMC_AdvAddrdataMux|enumerator|kSEMC_AdvAddrdataMux, /*!< Advanced address/data mux mode. */
DECL|kSEMC_Dbi_BurstLen16|enumerator|kSEMC_Dbi_BurstLen16, /*!< Burst length 16*/
DECL|kSEMC_Dbi_BurstLen1|enumerator|kSEMC_Dbi_BurstLen1 = 0, /*!< Burst length 1*/
DECL|kSEMC_Dbi_BurstLen2|enumerator|kSEMC_Dbi_BurstLen2, /*!< Burst length 2*/
DECL|kSEMC_Dbi_BurstLen32|enumerator|kSEMC_Dbi_BurstLen32, /*!< Burst length 32*/
DECL|kSEMC_Dbi_BurstLen64|enumerator|kSEMC_Dbi_BurstLen64 /*!< Burst length 64*/
DECL|kSEMC_Dbi_BurstLen8|enumerator|kSEMC_Dbi_BurstLen8, /*!< Burst length 8*/
DECL|kSEMC_Dbi_Colum_10bit|enumerator|kSEMC_Dbi_Colum_10bit, /*!< 10 bit. */
DECL|kSEMC_Dbi_Colum_11bit|enumerator|kSEMC_Dbi_Colum_11bit, /*!< 11 bit. */
DECL|kSEMC_Dbi_Colum_12bit|enumerator|kSEMC_Dbi_Colum_12bit = 0x0U, /*!< 12 bit. */
DECL|kSEMC_Dbi_Colum_2bit|enumerator|kSEMC_Dbi_Colum_2bit /*!< 2 bit. */
DECL|kSEMC_Dbi_Colum_3bit|enumerator|kSEMC_Dbi_Colum_3bit, /*!< 3 bit. */
DECL|kSEMC_Dbi_Colum_4bit|enumerator|kSEMC_Dbi_Colum_4bit, /*!< 4 bit. */
DECL|kSEMC_Dbi_Colum_5bit|enumerator|kSEMC_Dbi_Colum_5bit, /*!< 5 bit. */
DECL|kSEMC_Dbi_Colum_6bit|enumerator|kSEMC_Dbi_Colum_6bit, /*!< 6 bit. */
DECL|kSEMC_Dbi_Colum_7bit|enumerator|kSEMC_Dbi_Colum_7bit, /*!< 7 bit. */
DECL|kSEMC_Dbi_Colum_8bit|enumerator|kSEMC_Dbi_Colum_8bit, /*!< 8 bit. */
DECL|kSEMC_Dbi_Colum_9bit|enumerator|kSEMC_Dbi_Colum_9bit, /*!< 9 bit. */
DECL|kSEMC_Dbi_Dbi_BurstLen4|enumerator|kSEMC_Dbi_Dbi_BurstLen4, /*!< Burst length 4*/
DECL|kSEMC_HighActive|enumerator|kSEMC_HighActive, /*!< High active. */
DECL|kSEMC_IPCmdDoneInterrupt|enumerator|kSEMC_IPCmdDoneInterrupt = SEMC_INTEN_IPCMDDONEEN_MASK, /*!< Ip command done interrupt. */
DECL|kSEMC_IPCmdErrInterrupt|enumerator|kSEMC_IPCmdErrInterrupt = SEMC_INTEN_IPCMDERREN_MASK, /*!< Ip command error interrupt. */
DECL|kSEMC_IPcmdDataSize_1bytes|enumerator|kSEMC_IPcmdDataSize_1bytes = 1, /*!< The IP command data size 1 byte. */
DECL|kSEMC_IPcmdDataSize_2bytes|enumerator|kSEMC_IPcmdDataSize_2bytes, /*!< The IP command data size 2 byte. */
DECL|kSEMC_IPcmdDataSize_3bytes|enumerator|kSEMC_IPcmdDataSize_3bytes, /*!< The IP command data size 3 byte. */
DECL|kSEMC_IPcmdDataSize_4bytes|enumerator|kSEMC_IPcmdDataSize_4bytes /*!< The IP command data size 4 byte. */
DECL|kSEMC_LatencyOne|enumerator|kSEMC_LatencyOne = 1, /*!< Latency 1. */
DECL|kSEMC_LatencyThree|enumerator|kSEMC_LatencyThree, /*!< Latency 3. */
DECL|kSEMC_LatencyTwo|enumerator|kSEMC_LatencyTwo, /*!< Latency 2. */
DECL|kSEMC_Loopbackdqspad|enumerator|kSEMC_Loopbackdqspad, /*!< Dummy read strobe loopbacked from DQS pad. */
DECL|kSEMC_Loopbackinternal|enumerator|kSEMC_Loopbackinternal = 0, /*!< Dummy read strobe loopbacked internally. */
DECL|kSEMC_LowActive|enumerator|kSEMC_LowActive = 0, /*!< Low active. */
DECL|kSEMC_MORA27_NONE|enumerator|kSEMC_MORA27_NONE = 0, /*!< No NOR/SRAM A27 pin. */
DECL|kSEMC_MUXA8|enumerator|kSEMC_MUXA8 = SEMC_IOCR_MUX_A8_SHIFT, /*!< MUX A8 pin. */
DECL|kSEMC_MUXCSX0|enumerator|kSEMC_MUXCSX0 = SEMC_IOCR_MUX_CSX0_SHIFT, /*!< MUX CSX0 pin */
DECL|kSEMC_MUXCSX1|enumerator|kSEMC_MUXCSX1 = SEMC_IOCR_MUX_CSX1_SHIFT, /*!< MUX CSX1 Pin.*/
DECL|kSEMC_MUXCSX2|enumerator|kSEMC_MUXCSX2 = SEMC_IOCR_MUX_CSX2_SHIFT, /*!< MUX CSX2 Pin. */
DECL|kSEMC_MUXCSX3|enumerator|kSEMC_MUXCSX3 = SEMC_IOCR_MUX_CSX3_SHIFT, /*!< MUX CSX3 Pin. */
DECL|kSEMC_MUXRDY|enumerator|kSEMC_MUXRDY = SEMC_IOCR_MUX_RDY_SHIFT /*!< MUX RDY pin. */
DECL|kSEMC_MemType_8080|enumerator|kSEMC_MemType_8080 /*!< 8080. */
DECL|kSEMC_MemType_NAND|enumerator|kSEMC_MemType_NAND, /*!< NAND */
DECL|kSEMC_MemType_NOR|enumerator|kSEMC_MemType_NOR, /*!< NOR */
DECL|kSEMC_MemType_SDRAM|enumerator|kSEMC_MemType_SDRAM = 0, /*!< SDRAM */
DECL|kSEMC_MemType_SRAM|enumerator|kSEMC_MemType_SRAM, /*!< SRAM */
DECL|kSEMC_NANDAM_ColumnCA0CA1|enumerator|kSEMC_NANDAM_ColumnCA0CA1, /*!< Address mode: column address only(2 Byte-CA0/CA1). */
DECL|kSEMC_NANDAM_ColumnCA0|enumerator|kSEMC_NANDAM_ColumnCA0, /*!< Address mode: column address only(1 Byte-CA0). */
DECL|kSEMC_NANDAM_ColumnRow|enumerator|kSEMC_NANDAM_ColumnRow = 0x0U, /*!< Address mode: column and row address(5Byte-CA0/CA1/RA0/RA1/RA2). */
DECL|kSEMC_NANDAM_RawRA0RA1RA2|enumerator|kSEMC_NANDAM_RawRA0RA1RA2 /*!< Address mode: row address only(3 Byte-RA0). */
DECL|kSEMC_NANDAM_RawRA0RA1|enumerator|kSEMC_NANDAM_RawRA0RA1, /*!< Address mode: row address only(2 Byte-RA0/RA1). */
DECL|kSEMC_NANDAM_RawRA0|enumerator|kSEMC_NANDAM_RawRA0, /*!< Address mode: row address only(1 Byte-RA0). */
DECL|kSEMC_NANDCM_AXICmdAddrRead|enumerator|kSEMC_NANDCM_AXICmdAddrRead = 0x0U, /*!< For AXI read. */
DECL|kSEMC_NANDCM_AXICmdAddrWrite|enumerator|kSEMC_NANDCM_AXICmdAddrWrite, /*!< For AXI write. */
DECL|kSEMC_NANDCM_CommandAddressHold|enumerator|kSEMC_NANDCM_CommandAddressHold, /*!< Command address hold. */
DECL|kSEMC_NANDCM_CommandAddressRead|enumerator|kSEMC_NANDCM_CommandAddressRead, /*!< Command address read. */
DECL|kSEMC_NANDCM_CommandAddressWrite|enumerator|kSEMC_NANDCM_CommandAddressWrite, /*!< Command address write. */
DECL|kSEMC_NANDCM_CommandAddress|enumerator|kSEMC_NANDCM_CommandAddress, /*!< Command address. */
DECL|kSEMC_NANDCM_CommandHold|enumerator|kSEMC_NANDCM_CommandHold, /*!< Command hold. */
DECL|kSEMC_NANDCM_CommandRead|enumerator|kSEMC_NANDCM_CommandRead, /*!< Command read. */
DECL|kSEMC_NANDCM_CommandWrite|enumerator|kSEMC_NANDCM_CommandWrite, /*!< Command write. */
DECL|kSEMC_NANDCM_Command|enumerator|kSEMC_NANDCM_Command, /*!< command. */
DECL|kSEMC_NANDCM_Read|enumerator|kSEMC_NANDCM_Read, /*!< Read. */
DECL|kSEMC_NANDCM_Write|enumerator|kSEMC_NANDCM_Write /*!< Write. */
DECL|kSEMC_NAND_AXI|enumerator|kSEMC_NAND_AXI = 0,
DECL|kSEMC_NAND_IP|enumerator|kSEMC_NAND_IP,
DECL|kSEMC_NORA27_MUXCSX3|enumerator|kSEMC_NORA27_MUXCSX3 = SEMC_IOCR_MUX_CSX3_SHIFT, /*!< MUX CSX3 Pin. */
DECL|kSEMC_NORA27_MUXRDY|enumerator|kSEMC_NORA27_MUXRDY = SEMC_IOCR_MUX_RDY_SHIFT /*!< MUX RDY pin. */
DECL|kSEMC_NORDBICM_Read|enumerator|kSEMC_NORDBICM_Read = 0x2U, /*!< NOR read. */
DECL|kSEMC_NORDBICM_Write|enumerator|kSEMC_NORDBICM_Write /*!< NOR write. */
DECL|kSEMC_NandAddrOption_2byte_CA1RA1|enumerator|kSEMC_NandAddrOption_2byte_CA1RA1 = 7U, /*!< CA0+RA0 */
DECL|kSEMC_NandAddrOption_3byte_CA1RA2|enumerator|kSEMC_NandAddrOption_3byte_CA1RA2 = 3U, /*!< CA0+RA0+RA1 */
DECL|kSEMC_NandAddrOption_3byte_CA2RA1|enumerator|kSEMC_NandAddrOption_3byte_CA2RA1 = 4U, /*!< CA0+CA1+RA0 */
DECL|kSEMC_NandAddrOption_4byte_CA1RA3|enumerator|kSEMC_NandAddrOption_4byte_CA1RA3 = 1U, /*!< CA0+RA0+RA1+RA2 */
DECL|kSEMC_NandAddrOption_4byte_CA2RA2|enumerator|kSEMC_NandAddrOption_4byte_CA2RA2 = 2U, /*!< CA0+CA1+RA0+RA1 */
DECL|kSEMC_NandAddrOption_5byte_CA2RA3|enumerator|kSEMC_NandAddrOption_5byte_CA2RA3 = 0U, /*!< CA0+CA1+RA0+RA1+RA2 */
DECL|kSEMC_NandColum_10bit|enumerator|kSEMC_NandColum_10bit, /*!< 10 bit. */
DECL|kSEMC_NandColum_11bit|enumerator|kSEMC_NandColum_11bit, /*!< 11 bit. */
DECL|kSEMC_NandColum_12bit|enumerator|kSEMC_NandColum_12bit, /*!< 12 bit. */
DECL|kSEMC_NandColum_13bit|enumerator|kSEMC_NandColum_13bit, /*!< 13 bit. */
DECL|kSEMC_NandColum_14bit|enumerator|kSEMC_NandColum_14bit, /*!< 14 bit. */
DECL|kSEMC_NandColum_15bit|enumerator|kSEMC_NandColum_15bit, /*!< 15 bit. */
DECL|kSEMC_NandColum_16bit|enumerator|kSEMC_NandColum_16bit = 0x0U, /*!< 16 bit. */
DECL|kSEMC_NandColum_9bit|enumerator|kSEMC_NandColum_9bit, /*!< 9 bit. */
DECL|kSEMC_Nand_BurstLen16|enumerator|kSEMC_Nand_BurstLen16, /*!< Burst length 16*/
DECL|kSEMC_Nand_BurstLen1|enumerator|kSEMC_Nand_BurstLen1 = 0, /*!< Burst length 1*/
DECL|kSEMC_Nand_BurstLen2|enumerator|kSEMC_Nand_BurstLen2, /*!< Burst length 2*/
DECL|kSEMC_Nand_BurstLen32|enumerator|kSEMC_Nand_BurstLen32, /*!< Burst length 32*/
DECL|kSEMC_Nand_BurstLen4|enumerator|kSEMC_Nand_BurstLen4, /*!< Burst length 4*/
DECL|kSEMC_Nand_BurstLen64|enumerator|kSEMC_Nand_BurstLen64 /*!< Burst length 64*/
DECL|kSEMC_Nand_BurstLen8|enumerator|kSEMC_Nand_BurstLen8, /*!< Burst length 8*/
DECL|kSEMC_NorColum_10bit|enumerator|kSEMC_NorColum_10bit, /*!< 10 bit. */
DECL|kSEMC_NorColum_11bit|enumerator|kSEMC_NorColum_11bit, /*!< 11 bit. */
DECL|kSEMC_NorColum_12bit|enumerator|kSEMC_NorColum_12bit = 0x0U, /*!< 12 bit. */
DECL|kSEMC_NorColum_2bit|enumerator|kSEMC_NorColum_2bit /*!< 2 bit. */
DECL|kSEMC_NorColum_3bit|enumerator|kSEMC_NorColum_3bit, /*!< 3 bit. */
DECL|kSEMC_NorColum_4bit|enumerator|kSEMC_NorColum_4bit, /*!< 4 bit. */
DECL|kSEMC_NorColum_5bit|enumerator|kSEMC_NorColum_5bit, /*!< 5 bit. */
DECL|kSEMC_NorColum_6bit|enumerator|kSEMC_NorColum_6bit, /*!< 6 bit. */
DECL|kSEMC_NorColum_7bit|enumerator|kSEMC_NorColum_7bit, /*!< 7 bit. */
DECL|kSEMC_NorColum_8bit|enumerator|kSEMC_NorColum_8bit, /*!< 8 bit. */
DECL|kSEMC_NorColum_9bit|enumerator|kSEMC_NorColum_9bit, /*!< 9 bit. */
DECL|kSEMC_Nor_BurstLen16|enumerator|kSEMC_Nor_BurstLen16, /*!< Burst length 16*/
DECL|kSEMC_Nor_BurstLen1|enumerator|kSEMC_Nor_BurstLen1 = 0, /*!< Burst length 1*/
DECL|kSEMC_Nor_BurstLen2|enumerator|kSEMC_Nor_BurstLen2, /*!< Burst length 2*/
DECL|kSEMC_Nor_BurstLen32|enumerator|kSEMC_Nor_BurstLen32, /*!< Burst length 32*/
DECL|kSEMC_Nor_BurstLen4|enumerator|kSEMC_Nor_BurstLen4, /*!< Burst length 4*/
DECL|kSEMC_Nor_BurstLen64|enumerator|kSEMC_Nor_BurstLen64 /*!< Burst length 64*/
DECL|kSEMC_Nor_BurstLen8|enumerator|kSEMC_Nor_BurstLen8, /*!< Burst length 8*/
DECL|kSEMC_PortSize16Bit|enumerator|kSEMC_PortSize16Bit /*!< 16-Bit port size. */
DECL|kSEMC_PortSize8Bit|enumerator|kSEMC_PortSize8Bit = 0, /*!< 8-Bit port size. */
DECL|kSEMC_RdyActiveLow|enumerator|kSEMC_RdyActiveLow = 0, /*!< Adv active low. */
DECL|kSEMC_RdyActivehigh|enumerator|kSEMC_RdyActivehigh, /*!< Adv active low. */
DECL|kSEMC_RefreshNineClocks|enumerator|kSEMC_RefreshNineClocks /*!< The refresh timing with nine bus clocks. */
DECL|kSEMC_RefreshSixClocks|enumerator|kSEMC_RefreshSixClocks, /*!< The refresh timing with six bus clocks. */
DECL|kSEMC_RefreshThreeClocks|enumerator|kSEMC_RefreshThreeClocks = 0x0U, /*!< The refresh timing with three bus clocks. */
DECL|kSEMC_SDRAMCM_Active|enumerator|kSEMC_SDRAMCM_Active, /*!< SDRAM active. */
DECL|kSEMC_SDRAMCM_AutoRefresh|enumerator|kSEMC_SDRAMCM_AutoRefresh, /*!< SDRAM auto-refresh. */
DECL|kSEMC_SDRAMCM_Modeset|enumerator|kSEMC_SDRAMCM_Modeset, /*!< SDRAM MODE SET. */
DECL|kSEMC_SDRAMCM_Prechargeall|enumerator|kSEMC_SDRAMCM_Prechargeall /*!< SDRAM precharge all. */
DECL|kSEMC_SDRAMCM_Precharge|enumerator|kSEMC_SDRAMCM_Precharge, /*!< SDRAM precharge. */
DECL|kSEMC_SDRAMCM_Read|enumerator|kSEMC_SDRAMCM_Read = 0x8U, /*!< SDRAM memory read. */
DECL|kSEMC_SDRAMCM_SelfRefresh|enumerator|kSEMC_SDRAMCM_SelfRefresh, /*!< SDRAM self-refresh. */
DECL|kSEMC_SDRAMCM_Write|enumerator|kSEMC_SDRAMCM_Write, /*!< SDRAM memory write. */
DECL|kSEMC_SDRAM_CS0|enumerator|kSEMC_SDRAM_CS0 = 0, /*!< SEMC SDRAM CS0. */
DECL|kSEMC_SDRAM_CS1|enumerator|kSEMC_SDRAM_CS1, /*!< SEMC SDRAM CS1. */
DECL|kSEMC_SDRAM_CS2|enumerator|kSEMC_SDRAM_CS2, /*!< SEMC SDRAM CS2. */
DECL|kSEMC_SDRAM_CS3|enumerator|kSEMC_SDRAM_CS3 /*!< SEMC SDRAM CS3. */
DECL|kSEMC_SRAMCM_ArrayRead|enumerator|kSEMC_SRAMCM_ArrayRead = 0x2U, /*!< SRAM memory array read. */
DECL|kSEMC_SRAMCM_ArrayWrite|enumerator|kSEMC_SRAMCM_ArrayWrite, /*!< SRAM memory array write. */
DECL|kSEMC_SRAMCM_RegRead|enumerator|kSEMC_SRAMCM_RegRead, /*!< SRAM memory register read. */
DECL|kSEMC_SRAMCM_RegWrite|enumerator|kSEMC_SRAMCM_RegWrite /*!< SRAM memory register write. */
DECL|kSEMC_SdramColunm_10bit|enumerator|kSEMC_SdramColunm_10bit, /*!< 10 bit. */
DECL|kSEMC_SdramColunm_11bit|enumerator|kSEMC_SdramColunm_11bit, /*!< 11 bit. */
DECL|kSEMC_SdramColunm_12bit|enumerator|kSEMC_SdramColunm_12bit = 0x0U, /*!< 12 bit. */
DECL|kSEMC_SdramColunm_9bit|enumerator|kSEMC_SdramColunm_9bit, /*!< 9 bit. */
DECL|kSEMC_Sdram_BurstLen1|enumerator|kSEMC_Sdram_BurstLen1 = 0, /*!< Burst length 1*/
DECL|kSEMC_Sdram_BurstLen2|enumerator|kSEMC_Sdram_BurstLen2, /*!< Burst length 2*/
DECL|kSEMC_Sdram_BurstLen4|enumerator|kSEMC_Sdram_BurstLen4, /*!< Burst length 4*/
DECL|kSEMC_Sdram_BurstLen8|enumerator|kSEMC_Sdram_BurstLen8 /*!< Burst length 8*/
DECL|kStatus_SEMC_AxiCommandExecutionError|enumerator|kStatus_SEMC_AxiCommandExecutionError = MAKE_STATUS(kStatusGroup_SEMC, 2),
DECL|kStatus_SEMC_InvalidAddressPortWidth|enumerator|kStatus_SEMC_InvalidAddressPortWidth = MAKE_STATUS(kStatusGroup_SEMC, 5),
DECL|kStatus_SEMC_InvalidBaseAddress|enumerator|kStatus_SEMC_InvalidBaseAddress = MAKE_STATUS(kStatusGroup_SEMC, 10),
DECL|kStatus_SEMC_InvalidBurstLength|enumerator|kStatus_SEMC_InvalidBurstLength = MAKE_STATUS(kStatusGroup_SEMC, 8),
DECL|kStatus_SEMC_InvalidColumnAddressBitWidth|enumerator|kStatus_SEMC_InvalidColumnAddressBitWidth = MAKE_STATUS(kStatusGroup_SEMC, 9),
DECL|kStatus_SEMC_InvalidDataPortWidth|enumerator|kStatus_SEMC_InvalidDataPortWidth = MAKE_STATUS(kStatusGroup_SEMC, 6),
DECL|kStatus_SEMC_InvalidDeviceType|enumerator|kStatus_SEMC_InvalidDeviceType = MAKE_STATUS(kStatusGroup_SEMC, 0),
DECL|kStatus_SEMC_InvalidIpcmdDataSize|enumerator|kStatus_SEMC_InvalidIpcmdDataSize = MAKE_STATUS(kStatusGroup_SEMC, 4),
DECL|kStatus_SEMC_InvalidMemorySize|enumerator|kStatus_SEMC_InvalidMemorySize = MAKE_STATUS(kStatusGroup_SEMC, 3),
DECL|kStatus_SEMC_InvalidSwPinmuxSelection|enumerator|kStatus_SEMC_InvalidSwPinmuxSelection = MAKE_STATUS(kStatusGroup_SEMC, 7),
DECL|kStatus_SEMC_InvalidTimerSetting|enumerator|kStatus_SEMC_InvalidTimerSetting = MAKE_STATUS(kStatusGroup_SEMC, 11),
DECL|kStatus_SEMC_IpCommandExecutionError|enumerator|kStatus_SEMC_IpCommandExecutionError = MAKE_STATUS(kStatusGroup_SEMC, 1),
DECL|latencyCount|member|uint8_t latencyCount; /*!< Latency count for sync mode. */
DECL|latencyCount|member|uint8_t latencyCount; /*!< Latency count for sync mode. */
DECL|memsize_kbytes|member|uint32_t memsize_kbytes; /*!< The memory size in unit of 4kbytes. */
DECL|memsize_kbytes|member|uint32_t memsize_kbytes; /*!< The memory size in unit of kbytes. */
DECL|memsize_kbytes|member|uint32_t memsize_kbytes; /*!< The memory size in unit of kbytes. */
DECL|memsize_kbytes|member|uint32_t memsize_kbytes; /*!< The memory size in unit of kbytes. */
DECL|portSize|member|smec_port_size_t portSize; /*!< Port size. */
DECL|portSize|member|smec_port_size_t portSize; /*!< Port size. */
DECL|portSize|member|smec_port_size_t portSize; /*!< Port size. */
DECL|portSize|member|smec_port_size_t portSize; /*!< Port size. */
DECL|portSize|member|smec_port_size_t portSize; /*!< Port size. */
DECL|qos|member|uint32_t qos : 4; /*!< weight of qos for queue 0 . */
DECL|qos|member|uint32_t qos : 4; /*!< weight of qos for queue 1. */
DECL|queueWeight|member|semc_axi_queueweight_t queueWeight; /*!< AXI queue weight. */
DECL|queueaWeight|member|semc_queuea_weight_t *queueaWeight; /*!< Weight settings for queue a. */
DECL|queuebWeight|member|semc_queueb_weight_t *queuebWeight; /*!< Weight settings for queue b. */
DECL|rdyactivePolarity|member|semc_rdy_polarity_t rdyactivePolarity; /*!< Wait ready polarity. */
DECL|rdyactivePolarity|member|semc_rdy_polarity_t rdyactivePolarity; /*!< Wait ready polarity. */
DECL|readCycle|member|uint8_t readCycle; /*!< Read cycle time for sync mode. */
DECL|readCycle|member|uint8_t readCycle; /*!< Read cycle time for sync mode. */
DECL|refreshBurstLen|member|uint8_t refreshBurstLen; /*!< Refresh burst length. */
DECL|refreshPeriod_nsPerRow|member|uint32_t refreshPeriod_nsPerRow; /*!< Refresh timer period like 64ms * 1000000/8192 . */
DECL|refreshUrgThreshold|member|uint32_t refreshUrgThreshold; /*!< Refresh urgent threshold. */
DECL|sem_dbi_burst_len_t|typedef|} sem_dbi_burst_len_t;
DECL|sem_nand_burst_len_t|typedef|} sem_nand_burst_len_t;
DECL|sem_norsram_burst_len_t|typedef|} sem_norsram_burst_len_t;
DECL|sem_sdram_burst_len_t|typedef|} sem_sdram_burst_len_t;
DECL|semc_addr_mode_t|typedef|} semc_addr_mode_t;
DECL|semc_adv_polarity_t|typedef|} semc_adv_polarity_t;
DECL|semc_axi_queueweight_t|typedef|} semc_axi_queueweight_t;
DECL|semc_caslatency_t|typedef|} semc_caslatency_t;
DECL|semc_config_t|typedef|} semc_config_t;
DECL|semc_dbi_column_bit_num_t|typedef|} semc_dbi_column_bit_num_t;
DECL|semc_dbi_config_t|typedef|} semc_dbi_config_t;
DECL|semc_dqs_mode_t|typedef|} semc_dqs_mode_t;
DECL|semc_interrupt_enable_t|typedef|} semc_interrupt_enable_t;
DECL|semc_iomux_nora27_pin|typedef|} semc_iomux_nora27_pin;
DECL|semc_iomux_pin|typedef|} semc_iomux_pin;
DECL|semc_ipcmd_datasize_t|typedef|} semc_ipcmd_datasize_t;
DECL|semc_ipcmd_nand_addrmode_t|typedef|} semc_ipcmd_nand_addrmode_t;
DECL|semc_ipcmd_nand_cmdmode_t|typedef|} semc_ipcmd_nand_cmdmode_t;
DECL|semc_ipcmd_nor_dbi_t|typedef|} semc_ipcmd_nor_dbi_t;
DECL|semc_ipcmd_sdram_t|typedef|} semc_ipcmd_sdram_t;
DECL|semc_ipcmd_sram_t|typedef|} semc_ipcmd_sram_t;
DECL|semc_mem_type_t|typedef|} semc_mem_type_t;
DECL|semc_nand_address_option_t|typedef|} semc_nand_address_option_t;
DECL|semc_nand_column_bit_num_t|typedef|} semc_nand_column_bit_num_t;
DECL|semc_nand_config_t|typedef|} semc_nand_config_t;
DECL|semc_nand_type_t|typedef|} semc_nand_type_t;
DECL|semc_nor_config_t|typedef|} semc_nor_config_t;
DECL|semc_norsram_column_bit_num_t|typedef|} semc_norsram_column_bit_num_t;
DECL|semc_queuea_weight_t|typedef|} semc_queuea_weight_t;
DECL|semc_queueb_weight_t|typedef|} semc_queueb_weight_t;
DECL|semc_rdy_polarity_t|typedef|} semc_rdy_polarity_t;
DECL|semc_refresh_time_t|typedef|} semc_refresh_time_t;
DECL|semc_sdram_column_bit_num_t|typedef|} semc_sdram_column_bit_num_t;
DECL|semc_sdram_config_t|typedef|} semc_sdram_config_t;
DECL|semc_sdram_cs_t|typedef|} semc_sdram_cs_t;
DECL|semc_sram_config_t|typedef|} semc_sram_config_t;
DECL|semc_waitready_polarity_t|typedef|} semc_waitready_polarity_t;
DECL|slaveHitNoswitch|member|uint32_t slaveHitNoswitch : 8; /*!< weight of read/write no switch for queue 0 .*/
DECL|slaveHitSwith|member|uint32_t slaveHitSwith : 8; /*!< weight of read/write switch for queue 0.*/
DECL|slaveHitSwith|member|uint32_t slaveHitSwith : 8; /*!< weight of read/write switch for queue 1.*/
DECL|smec_port_size_t|typedef|} smec_port_size_t;
DECL|tAct2Act_Ns|member|uint8_t tAct2Act_Ns; /*!< Active to active wait time in unit of nanosecond. */
DECL|tAct2Prechage_Ns|member|uint8_t tAct2Prechage_Ns; /*!< Active to precharge in unit of nanosecond. */
DECL|tAct2ReadWrtie_Ns|member|uint8_t tAct2ReadWrtie_Ns; /*!< Act to read/write wait time in unit of nanosecond. */
DECL|tAddr2WriteHold_Ns|member|uint8_t tAddr2WriteHold_Ns; /*!< Address to write data hold time for async mode. */
DECL|tAddr2WriteHold_Ns|member|uint8_t tAddr2WriteHold_Ns; /*!< Address to write data hold time for async mode. */
DECL|tAddrHold_Ns|member|uint8_t tAddrHold_Ns; /*!< The address hold time. */
DECL|tAddrHold_Ns|member|uint8_t tAddrHold_Ns; /*!< The address hold time. */
DECL|tAddrSetup_Ns|member|uint8_t tAddrSetup_Ns; /*!< The address setup time. */
DECL|tAddrSetup_Ns|member|uint8_t tAddrSetup_Ns; /*!< The address setup time. */
DECL|tAle2WriteStart_Ns|member|uint8_t tAle2WriteStart_Ns; /*!< ALE to write start wait time: tADL. */
DECL|tCeHold_Ns|member|uint8_t tCeHold_Ns; /*!< CE hold time: tCH. */
DECL|tCeHold_Ns|member|uint8_t tCeHold_Ns; /*!< The CE hold time. */
DECL|tCeHold_Ns|member|uint8_t tCeHold_Ns; /*!< The CE hold time. */
DECL|tCeInterval_Ns|member|uint8_t tCeInterval_Ns; /*!< CE interval minimum time. */
DECL|tCeInterval_Ns|member|uint8_t tCeInterval_Ns; /*!< CE interval minimum time. */
DECL|tCeInterval_Ns|member|uint8_t tCeInterval_Ns; /*!< CE interval time:tCEITV. */
DECL|tCeSetup_Ns|member|uint8_t tCeSetup_Ns; /*!< CE setup time: tCS. */
DECL|tCeSetup_Ns|member|uint8_t tCeSetup_Ns; /*!< The CE setup time. */
DECL|tCeSetup_Ns|member|uint8_t tCeSetup_Ns; /*!< The CE setup time. */
DECL|tCkeOff_Ns|member|uint8_t tCkeOff_Ns; /*!< CKE off minimum time in unit of nanosecond. */
DECL|tCsxHold_Ns|member|uint8_t tCsxHold_Ns; /*!< The CSX hold time. */
DECL|tCsxInterval_Ns|member|uint8_t tCsxInterval_Ns; /*!< Write data setup time.*/
DECL|tCsxSetup_Ns|member|uint8_t tCsxSetup_Ns; /*!< The CSX setup time. */
DECL|tIdleTimeout_Ns|member|uint32_t tIdleTimeout_Ns; /*!< Idle timeout in unit of prescale time period. */
DECL|tPrecharge2Act_Ns|member|uint8_t tPrecharge2Act_Ns; /*!< Precharge to active wait time in unit of nanosecond. */
DECL|tPrescalePeriod_Ns|member|uint32_t tPrescalePeriod_Ns; /*!< Prescaler timer period should not be larger than 256 * 16 * clock cycle. */
DECL|tRdxHigh_Ns|member|uint8_t tRdxHigh_Ns; /*!< RDX high time. */
DECL|tRdxLow_Ns|member|uint8_t tRdxLow_Ns; /*!< RDX low time. */
DECL|tReHigh_Ns|member|uint8_t tReHigh_Ns; /*!< RE high time for async mode. */
DECL|tReHigh_Ns|member|uint8_t tReHigh_Ns; /*!< RE high time for async mode. */
DECL|tReHigh_Ns|member|uint8_t tReHigh_Ns; /*!< RE high time: tREH. */
DECL|tReLow_Ns|member|uint8_t tReLow_Ns; /*!< RE low time for async mode. */
DECL|tReLow_Ns|member|uint8_t tReLow_Ns; /*!< RE low time for async mode. */
DECL|tReLow_Ns|member|uint8_t tReLow_Ns; /*!< RE low time: tRP. */
DECL|tReady2Relow_Ns|member|uint8_t tReady2Relow_Ns; /*!< Ready to RE# low min wait time: tRR. */
DECL|tRefresh2Refresh_Ns|member|uint8_t tRefresh2Refresh_Ns; /*!< Refresh to refresh wait time in unit of nanosecond. */
DECL|tRefreshRecovery_Ns|member|uint8_t tRefreshRecovery_Ns; /*!< Refresh recovery time in unit of nanosecond. */
DECL|tRehigh2Welow_Ns|member|uint8_t tRehigh2Welow_Ns; /*!< RE# high to WE# low wait time: tRHW. */
DECL|tSelfRefRecovery_Ns|member|uint8_t tSelfRefRecovery_Ns; /*!< Self refresh recovery time in unit of nanosecond. */
DECL|tTurnAround_Ns|member|uint8_t tTurnAround_Ns; /*!< Turnaround time for async mode. */
DECL|tTurnAround_Ns|member|uint8_t tTurnAround_Ns; /*!< Turnaround time for async mode. */
DECL|tTurnAround_Ns|member|uint8_t tTurnAround_Ns; /*!< Turnaround time for async mode: tTA. */
DECL|tWeHigh_Ns|member|uint8_t tWeHigh_Ns; /*!< WE high time for async mode. */
DECL|tWeHigh_Ns|member|uint8_t tWeHigh_Ns; /*!< WE high time for async mode. */
DECL|tWeHigh_Ns|member|uint8_t tWeHigh_Ns; /*!< WE high time: tWH. */
DECL|tWeLow_Ns|member|uint8_t tWeLow_Ns; /*!< WE low time for async mode. */
DECL|tWeLow_Ns|member|uint8_t tWeLow_Ns; /*!< WE low time for async mode. */
DECL|tWeLow_Ns|member|uint8_t tWeLow_Ns; /*!< WE low time: tWP. */
DECL|tWehigh2Busy_Ns|member|uint8_t tWehigh2Busy_Ns; /*!< WE# high to busy wait time: tWB. */
DECL|tWehigh2Relow_Ns|member|uint8_t tWehigh2Relow_Ns; /*!< WE# high to RE# wait time: tWHR. */
DECL|tWexHigh_Ns|member|uint8_t tWexHigh_Ns; /*!< WEX high time. */
DECL|tWexLow_Ns|member|uint8_t tWexLow_Ns; /*!< WEX low time. */
DECL|tWriteHold_Ns|member|uint8_t tWriteHold_Ns; /*!< Write hold time for sync mode. */
DECL|tWriteHold_Ns|member|uint8_t tWriteHold_Ns; /*!< Write hold time for sync mode. */
DECL|tWriteRecovery_Ns|member|uint8_t tWriteRecovery_Ns; /*!< write recovery time in unit of nanosecond. */
DECL|tWriteSetup_Ns|member|uint8_t tWriteSetup_Ns; /*!< Write data setup time for sync mode.*/
DECL|tWriteSetup_Ns|member|uint8_t tWriteSetup_Ns; /*!< Write data setup time for sync mode.*/
DECL|weightPagehit|member|uint32_t weightPagehit : 8; /*!< weight of page hit for queue 1 only .*/
