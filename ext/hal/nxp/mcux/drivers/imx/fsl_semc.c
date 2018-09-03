DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|SEMC_BMCR0_TYPICAL_WAGE|macro|SEMC_BMCR0_TYPICAL_WAGE
DECL|SEMC_BMCR0_TYPICAL_WQOS|macro|SEMC_BMCR0_TYPICAL_WQOS
DECL|SEMC_BMCR0_TYPICAL_WRWS|macro|SEMC_BMCR0_TYPICAL_WRWS
DECL|SEMC_BMCR0_TYPICAL_WSH|macro|SEMC_BMCR0_TYPICAL_WSH
DECL|SEMC_BMCR1_TYPICAL_WAGE|macro|SEMC_BMCR1_TYPICAL_WAGE
DECL|SEMC_BMCR1_TYPICAL_WBR|macro|SEMC_BMCR1_TYPICAL_WBR
DECL|SEMC_BMCR1_TYPICAL_WPH|macro|SEMC_BMCR1_TYPICAL_WPH
DECL|SEMC_BMCR1_TYPICAL_WQOS|macro|SEMC_BMCR1_TYPICAL_WQOS
DECL|SEMC_BMCR1_TYPICAL_WRWS|macro|SEMC_BMCR1_TYPICAL_WRWS
DECL|SEMC_BR_MEMSIZE_MAX|macro|SEMC_BR_MEMSIZE_MAX
DECL|SEMC_BR_MEMSIZE_MIN|macro|SEMC_BR_MEMSIZE_MIN
DECL|SEMC_BR_MEMSIZE_OFFSET|macro|SEMC_BR_MEMSIZE_OFFSET
DECL|SEMC_BR_REG_NUM|macro|SEMC_BR_REG_NUM
DECL|SEMC_BYTE_NUMBIT|macro|SEMC_BYTE_NUMBIT
DECL|SEMC_ConfigureDBI|function|status_t SEMC_ConfigureDBI(SEMC_Type *base, semc_dbi_config_t *config, uint32_t clkSrc_Hz)
DECL|SEMC_ConfigureIPCommand|function|static status_t SEMC_ConfigureIPCommand(SEMC_Type *base, uint8_t size_bytes)
DECL|SEMC_ConfigureNAND|function|status_t SEMC_ConfigureNAND(SEMC_Type *base, semc_nand_config_t *config, uint32_t clkSrc_Hz)
DECL|SEMC_ConfigureNOR|function|status_t SEMC_ConfigureNOR(SEMC_Type *base, semc_nor_config_t *config, uint32_t clkSrc_Hz)
DECL|SEMC_ConfigureSDRAM|function|status_t SEMC_ConfigureSDRAM(SEMC_Type *base, semc_sdram_cs_t cs, semc_sdram_config_t *config, uint32_t clkSrc_Hz)
DECL|SEMC_ConfigureSRAM|function|status_t SEMC_ConfigureSRAM(SEMC_Type *base, semc_sram_config_t *config, uint32_t clkSrc_Hz)
DECL|SEMC_ConvertTiming|function|static uint8_t SEMC_ConvertTiming(uint32_t time_ns, uint32_t clkSrc_Hz)
DECL|SEMC_CovertMemorySize|function|static status_t SEMC_CovertMemorySize(SEMC_Type *base, uint32_t size_kbytes, uint8_t *sizeConverted)
DECL|SEMC_Deinit|function|void SEMC_Deinit(SEMC_Type *base)
DECL|SEMC_ENDADDRESS|macro|SEMC_ENDADDRESS
DECL|SEMC_GetDefaultConfig|function|void SEMC_GetDefaultConfig(semc_config_t *config)
DECL|SEMC_GetInstance|function|static uint32_t SEMC_GetInstance(SEMC_Type *base)
DECL|SEMC_IOCR_DBI_CSX_A8|macro|SEMC_IOCR_DBI_CSX_A8
DECL|SEMC_IOCR_DBI_CSX|macro|SEMC_IOCR_DBI_CSX
DECL|SEMC_IOCR_NAND_CE|macro|SEMC_IOCR_NAND_CE
DECL|SEMC_IOCR_NOR_CE_A8|macro|SEMC_IOCR_NOR_CE_A8
DECL|SEMC_IOCR_NOR_CE|macro|SEMC_IOCR_NOR_CE
DECL|SEMC_IOCR_PINMUXBITWIDTH|macro|SEMC_IOCR_PINMUXBITWIDTH
DECL|SEMC_IOCR_PSRAM_CE_A8|macro|SEMC_IOCR_PSRAM_CE_A8
DECL|SEMC_IOCR_PSRAM_CE|macro|SEMC_IOCR_PSRAM_CE
DECL|SEMC_IPCOMMANDDATASIZEBYTEMAX|macro|SEMC_IPCOMMANDDATASIZEBYTEMAX
DECL|SEMC_IPCOMMANDMAGICKEY|macro|SEMC_IPCOMMANDMAGICKEY
DECL|SEMC_IPCommandNandRead|function|status_t SEMC_IPCommandNandRead(SEMC_Type *base, uint32_t address, uint8_t *data, uint32_t size_bytes)
DECL|SEMC_IPCommandNandWrite|function|status_t SEMC_IPCommandNandWrite(SEMC_Type *base, uint32_t address, uint8_t *data, uint32_t size_bytes)
DECL|SEMC_IPCommandNorRead|function|status_t SEMC_IPCommandNorRead(SEMC_Type *base, uint32_t address, uint8_t *data, uint32_t size_bytes)
DECL|SEMC_IPCommandNorWrite|function|status_t SEMC_IPCommandNorWrite(SEMC_Type *base, uint32_t address, uint8_t *data, uint32_t size_bytes)
DECL|SEMC_Init|function|void SEMC_Init(SEMC_Type *base, semc_config_t *configure)
DECL|SEMC_IsIPCommandDone|function|static status_t SEMC_IsIPCommandDone(SEMC_Type *base)
DECL|SEMC_NORFLASH_SRAM_ADDR_PORTWIDTHBASE|macro|SEMC_NORFLASH_SRAM_ADDR_PORTWIDTHBASE
DECL|SEMC_NORFLASH_SRAM_ADDR_PORTWIDTHMAX|macro|SEMC_NORFLASH_SRAM_ADDR_PORTWIDTHMAX
DECL|SEMC_SDRAM_MODESETCAL_OFFSET|macro|SEMC_SDRAM_MODESETCAL_OFFSET
DECL|SEMC_STARTADDRESS|macro|SEMC_STARTADDRESS
DECL|SEMC_SendIPCommand|function|status_t SEMC_SendIPCommand( SEMC_Type *base, semc_mem_type_t type, uint32_t address, uint16_t command, uint32_t write, uint32_t *read)
DECL|s_semcBases|variable|s_semcBases
DECL|s_semcClock|variable|s_semcClock
DECL|s_semcExtClock|variable|s_semcExtClock
