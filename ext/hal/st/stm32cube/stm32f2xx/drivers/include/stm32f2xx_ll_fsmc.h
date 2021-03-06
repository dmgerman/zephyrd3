DECL|AccessMode|member|uint32_t AccessMode; /*!< Specifies the asynchronous access mode.
DECL|AddressHoldTime|member|uint32_t AddressHoldTime; /*!< Defines the number of HCLK cycles to configure
DECL|AddressSetupTime|member|uint32_t AddressSetupTime; /*!< Defines the number of HCLK cycles to configure
DECL|AsynchronousWait|member|uint32_t AsynchronousWait; /*!< Enables or disables wait signal during asynchronous transfers,
DECL|BurstAccessMode|member|uint32_t BurstAccessMode; /*!< Enables or disables the burst access mode for Flash memory,
DECL|BusTurnAroundDuration|member|uint32_t BusTurnAroundDuration; /*!< Defines the number of HCLK cycles to configure
DECL|CLKDivision|member|uint32_t CLKDivision; /*!< Defines the period of CLK clock output signal, expressed in number of
DECL|DataAddressMux|member|uint32_t DataAddressMux; /*!< Specifies whether the address and data values are
DECL|DataLatency|member|uint32_t DataLatency; /*!< Defines the number of memory clock cycles to issue
DECL|DataSetupTime|member|uint32_t DataSetupTime; /*!< Defines the number of HCLK cycles to configure
DECL|ECCPageSize|member|uint32_t ECCPageSize; /*!< Defines the page size for the extended ECC.
DECL|EccComputation|member|uint32_t EccComputation; /*!< Enables or disables the ECC computation.
DECL|ExtendedMode|member|uint32_t ExtendedMode; /*!< Enables or disables the extended mode.
DECL|FSMC_ACCESS_MODE_A|macro|FSMC_ACCESS_MODE_A
DECL|FSMC_ACCESS_MODE_B|macro|FSMC_ACCESS_MODE_B
DECL|FSMC_ACCESS_MODE_C|macro|FSMC_ACCESS_MODE_C
DECL|FSMC_ACCESS_MODE_D|macro|FSMC_ACCESS_MODE_D
DECL|FSMC_ASYNCHRONOUS_WAIT_DISABLE|macro|FSMC_ASYNCHRONOUS_WAIT_DISABLE
DECL|FSMC_ASYNCHRONOUS_WAIT_ENABLE|macro|FSMC_ASYNCHRONOUS_WAIT_ENABLE
DECL|FSMC_BURST_ACCESS_MODE_DISABLE|macro|FSMC_BURST_ACCESS_MODE_DISABLE
DECL|FSMC_BURST_ACCESS_MODE_ENABLE|macro|FSMC_BURST_ACCESS_MODE_ENABLE
DECL|FSMC_CONTINUOUS_CLOCK_SYNC_ASYNC|macro|FSMC_CONTINUOUS_CLOCK_SYNC_ASYNC
DECL|FSMC_CONTINUOUS_CLOCK_SYNC_ONLY|macro|FSMC_CONTINUOUS_CLOCK_SYNC_ONLY
DECL|FSMC_DATA_ADDRESS_MUX_DISABLE|macro|FSMC_DATA_ADDRESS_MUX_DISABLE
DECL|FSMC_DATA_ADDRESS_MUX_ENABLE|macro|FSMC_DATA_ADDRESS_MUX_ENABLE
DECL|FSMC_EXTENDED_MODE_DISABLE|macro|FSMC_EXTENDED_MODE_DISABLE
DECL|FSMC_EXTENDED_MODE_ENABLE|macro|FSMC_EXTENDED_MODE_ENABLE
DECL|FSMC_FLAG_FALLING_EDGE|macro|FSMC_FLAG_FALLING_EDGE
DECL|FSMC_FLAG_FEMPT|macro|FSMC_FLAG_FEMPT
DECL|FSMC_FLAG_LEVEL|macro|FSMC_FLAG_LEVEL
DECL|FSMC_FLAG_RISING_EDGE|macro|FSMC_FLAG_RISING_EDGE
DECL|FSMC_IT_FALLING_EDGE|macro|FSMC_IT_FALLING_EDGE
DECL|FSMC_IT_LEVEL|macro|FSMC_IT_LEVEL
DECL|FSMC_IT_REFRESH_ERROR|macro|FSMC_IT_REFRESH_ERROR
DECL|FSMC_IT_RISING_EDGE|macro|FSMC_IT_RISING_EDGE
DECL|FSMC_MEMORY_TYPE_NOR|macro|FSMC_MEMORY_TYPE_NOR
DECL|FSMC_MEMORY_TYPE_PSRAM|macro|FSMC_MEMORY_TYPE_PSRAM
DECL|FSMC_MEMORY_TYPE_SRAM|macro|FSMC_MEMORY_TYPE_SRAM
DECL|FSMC_NAND_BANK2|macro|FSMC_NAND_BANK2
DECL|FSMC_NAND_BANK3|macro|FSMC_NAND_BANK3
DECL|FSMC_NAND_DEVICE|macro|FSMC_NAND_DEVICE
DECL|FSMC_NAND_ECC_DISABLE|macro|FSMC_NAND_ECC_DISABLE
DECL|FSMC_NAND_ECC_ENABLE|macro|FSMC_NAND_ECC_ENABLE
DECL|FSMC_NAND_ECC_PAGE_SIZE_1024BYTE|macro|FSMC_NAND_ECC_PAGE_SIZE_1024BYTE
DECL|FSMC_NAND_ECC_PAGE_SIZE_2048BYTE|macro|FSMC_NAND_ECC_PAGE_SIZE_2048BYTE
DECL|FSMC_NAND_ECC_PAGE_SIZE_256BYTE|macro|FSMC_NAND_ECC_PAGE_SIZE_256BYTE
DECL|FSMC_NAND_ECC_PAGE_SIZE_4096BYTE|macro|FSMC_NAND_ECC_PAGE_SIZE_4096BYTE
DECL|FSMC_NAND_ECC_PAGE_SIZE_512BYTE|macro|FSMC_NAND_ECC_PAGE_SIZE_512BYTE
DECL|FSMC_NAND_ECC_PAGE_SIZE_8192BYTE|macro|FSMC_NAND_ECC_PAGE_SIZE_8192BYTE
DECL|FSMC_NAND_InitTypeDef|typedef|}FSMC_NAND_InitTypeDef;
DECL|FSMC_NAND_PCC_MEM_BUS_WIDTH_16|macro|FSMC_NAND_PCC_MEM_BUS_WIDTH_16
DECL|FSMC_NAND_PCC_MEM_BUS_WIDTH_8|macro|FSMC_NAND_PCC_MEM_BUS_WIDTH_8
DECL|FSMC_NAND_PCC_TimingTypeDef|typedef|}FSMC_NAND_PCC_TimingTypeDef;
DECL|FSMC_NAND_PCC_WAIT_FEATURE_DISABLE|macro|FSMC_NAND_PCC_WAIT_FEATURE_DISABLE
DECL|FSMC_NAND_PCC_WAIT_FEATURE_ENABLE|macro|FSMC_NAND_PCC_WAIT_FEATURE_ENABLE
DECL|FSMC_NAND_TypeDef|macro|FSMC_NAND_TypeDef
DECL|FSMC_NORSRAM_BANK1|macro|FSMC_NORSRAM_BANK1
DECL|FSMC_NORSRAM_BANK2|macro|FSMC_NORSRAM_BANK2
DECL|FSMC_NORSRAM_BANK3|macro|FSMC_NORSRAM_BANK3
DECL|FSMC_NORSRAM_BANK4|macro|FSMC_NORSRAM_BANK4
DECL|FSMC_NORSRAM_DEVICE|macro|FSMC_NORSRAM_DEVICE
DECL|FSMC_NORSRAM_EXTENDED_DEVICE|macro|FSMC_NORSRAM_EXTENDED_DEVICE
DECL|FSMC_NORSRAM_EXTENDED_TypeDef|macro|FSMC_NORSRAM_EXTENDED_TypeDef
DECL|FSMC_NORSRAM_FLASH_ACCESS_DISABLE|macro|FSMC_NORSRAM_FLASH_ACCESS_DISABLE
DECL|FSMC_NORSRAM_FLASH_ACCESS_ENABLE|macro|FSMC_NORSRAM_FLASH_ACCESS_ENABLE
DECL|FSMC_NORSRAM_InitTypeDef|typedef|}FSMC_NORSRAM_InitTypeDef;
DECL|FSMC_NORSRAM_MEM_BUS_WIDTH_16|macro|FSMC_NORSRAM_MEM_BUS_WIDTH_16
DECL|FSMC_NORSRAM_MEM_BUS_WIDTH_32|macro|FSMC_NORSRAM_MEM_BUS_WIDTH_32
DECL|FSMC_NORSRAM_MEM_BUS_WIDTH_8|macro|FSMC_NORSRAM_MEM_BUS_WIDTH_8
DECL|FSMC_NORSRAM_TimingTypeDef|typedef|}FSMC_NORSRAM_TimingTypeDef;
DECL|FSMC_NORSRAM_TypeDef|macro|FSMC_NORSRAM_TypeDef
DECL|FSMC_PCCARD_DEVICE|macro|FSMC_PCCARD_DEVICE
DECL|FSMC_PCCARD_InitTypeDef|typedef|}FSMC_PCCARD_InitTypeDef;
DECL|FSMC_PCCARD_TypeDef|macro|FSMC_PCCARD_TypeDef
DECL|FSMC_PCR_MEMORY_TYPE_NAND|macro|FSMC_PCR_MEMORY_TYPE_NAND
DECL|FSMC_PCR_MEMORY_TYPE_PCCARD|macro|FSMC_PCR_MEMORY_TYPE_PCCARD
DECL|FSMC_WAIT_SIGNAL_DISABLE|macro|FSMC_WAIT_SIGNAL_DISABLE
DECL|FSMC_WAIT_SIGNAL_ENABLE|macro|FSMC_WAIT_SIGNAL_ENABLE
DECL|FSMC_WAIT_SIGNAL_POLARITY_HIGH|macro|FSMC_WAIT_SIGNAL_POLARITY_HIGH
DECL|FSMC_WAIT_SIGNAL_POLARITY_LOW|macro|FSMC_WAIT_SIGNAL_POLARITY_LOW
DECL|FSMC_WAIT_TIMING_BEFORE_WS|macro|FSMC_WAIT_TIMING_BEFORE_WS
DECL|FSMC_WAIT_TIMING_DURING_WS|macro|FSMC_WAIT_TIMING_DURING_WS
DECL|FSMC_WRAP_MODE_DISABLE|macro|FSMC_WRAP_MODE_DISABLE
DECL|FSMC_WRAP_MODE_ENABLE|macro|FSMC_WRAP_MODE_ENABLE
DECL|FSMC_WRITE_BURST_DISABLE|macro|FSMC_WRITE_BURST_DISABLE
DECL|FSMC_WRITE_BURST_ENABLE|macro|FSMC_WRITE_BURST_ENABLE
DECL|FSMC_WRITE_OPERATION_DISABLE|macro|FSMC_WRITE_OPERATION_DISABLE
DECL|FSMC_WRITE_OPERATION_ENABLE|macro|FSMC_WRITE_OPERATION_ENABLE
DECL|HiZSetupTime|member|uint32_t HiZSetupTime; /*!< Defines the number of HCLK clock cycles during which the
DECL|HoldSetupTime|member|uint32_t HoldSetupTime; /*!< Defines the number of HCLK clock cycles to hold address
DECL|IS_FSMC_ACCESS_MODE|macro|IS_FSMC_ACCESS_MODE
DECL|IS_FSMC_ADDRESS_HOLD_TIME|macro|IS_FSMC_ADDRESS_HOLD_TIME
DECL|IS_FSMC_ADDRESS_SETUP_TIME|macro|IS_FSMC_ADDRESS_SETUP_TIME
DECL|IS_FSMC_ASYNWAIT|macro|IS_FSMC_ASYNWAIT
DECL|IS_FSMC_BURSTMODE|macro|IS_FSMC_BURSTMODE
DECL|IS_FSMC_CLK_DIV|macro|IS_FSMC_CLK_DIV
DECL|IS_FSMC_CONTINOUS_CLOCK|macro|IS_FSMC_CONTINOUS_CLOCK
DECL|IS_FSMC_DATASETUP_TIME|macro|IS_FSMC_DATASETUP_TIME
DECL|IS_FSMC_DATA_LATENCY|macro|IS_FSMC_DATA_LATENCY
DECL|IS_FSMC_ECCPAGE_SIZE|macro|IS_FSMC_ECCPAGE_SIZE
DECL|IS_FSMC_ECC_STATE|macro|IS_FSMC_ECC_STATE
DECL|IS_FSMC_EXTENDED_MODE|macro|IS_FSMC_EXTENDED_MODE
DECL|IS_FSMC_HIZ_TIME|macro|IS_FSMC_HIZ_TIME
DECL|IS_FSMC_HOLD_TIME|macro|IS_FSMC_HOLD_TIME
DECL|IS_FSMC_MEMORY|macro|IS_FSMC_MEMORY
DECL|IS_FSMC_MUX|macro|IS_FSMC_MUX
DECL|IS_FSMC_NAND_BANK|macro|IS_FSMC_NAND_BANK
DECL|IS_FSMC_NAND_DEVICE|macro|IS_FSMC_NAND_DEVICE
DECL|IS_FSMC_NAND_MEMORY_WIDTH|macro|IS_FSMC_NAND_MEMORY_WIDTH
DECL|IS_FSMC_NORSRAM_BANK|macro|IS_FSMC_NORSRAM_BANK
DECL|IS_FSMC_NORSRAM_DEVICE|macro|IS_FSMC_NORSRAM_DEVICE
DECL|IS_FSMC_NORSRAM_EXTENDED_DEVICE|macro|IS_FSMC_NORSRAM_EXTENDED_DEVICE
DECL|IS_FSMC_NORSRAM_MEMORY_WIDTH|macro|IS_FSMC_NORSRAM_MEMORY_WIDTH
DECL|IS_FSMC_PCCARD_DEVICE|macro|IS_FSMC_PCCARD_DEVICE
DECL|IS_FSMC_SETUP_TIME|macro|IS_FSMC_SETUP_TIME
DECL|IS_FSMC_TAR_TIME|macro|IS_FSMC_TAR_TIME
DECL|IS_FSMC_TCLR_TIME|macro|IS_FSMC_TCLR_TIME
DECL|IS_FSMC_TURNAROUND_TIME|macro|IS_FSMC_TURNAROUND_TIME
DECL|IS_FSMC_WAITE_SIGNAL|macro|IS_FSMC_WAITE_SIGNAL
DECL|IS_FSMC_WAIT_FEATURE|macro|IS_FSMC_WAIT_FEATURE
DECL|IS_FSMC_WAIT_POLARITY|macro|IS_FSMC_WAIT_POLARITY
DECL|IS_FSMC_WAIT_SIGNAL_ACTIVE|macro|IS_FSMC_WAIT_SIGNAL_ACTIVE
DECL|IS_FSMC_WAIT_TIME|macro|IS_FSMC_WAIT_TIME
DECL|IS_FSMC_WRAP_MODE|macro|IS_FSMC_WRAP_MODE
DECL|IS_FSMC_WRITE_BURST|macro|IS_FSMC_WRITE_BURST
DECL|IS_FSMC_WRITE_OPERATION|macro|IS_FSMC_WRITE_OPERATION
DECL|MemoryDataWidth|member|uint32_t MemoryDataWidth; /*!< Specifies the external memory device width.
DECL|MemoryDataWidth|member|uint32_t MemoryDataWidth; /*!< Specifies the external memory device width.
DECL|MemoryType|member|uint32_t MemoryType; /*!< Specifies the type of external memory attached to
DECL|NSBank|member|uint32_t NSBank; /*!< Specifies the NORSRAM memory device that will be used.
DECL|NandBank|member|uint32_t NandBank; /*!< Specifies the NAND memory device that will be used.
DECL|SetupTime|member|uint32_t SetupTime; /*!< Defines the number of HCLK cycles to setup address before
DECL|TARSetupTime|member|uint32_t TARSetupTime; /*!< Defines the number of HCLK cycles to configure the
DECL|TARSetupTime|member|uint32_t TARSetupTime; /*!< Defines the number of HCLK cycles to configure the
DECL|TCLRSetupTime|member|uint32_t TCLRSetupTime; /*!< Defines the number of HCLK cycles to configure the
DECL|TCLRSetupTime|member|uint32_t TCLRSetupTime; /*!< Defines the number of HCLK cycles to configure the
DECL|WaitSetupTime|member|uint32_t WaitSetupTime; /*!< Defines the minimum number of HCLK cycles to assert the
DECL|WaitSignalActive|member|uint32_t WaitSignalActive; /*!< Specifies if the wait signal is asserted by the memory one
DECL|WaitSignalPolarity|member|uint32_t WaitSignalPolarity; /*!< Specifies the wait signal polarity, valid only when accessing
DECL|WaitSignal|member|uint32_t WaitSignal; /*!< Enables or disables the wait state insertion via wait
DECL|Waitfeature|member|uint32_t Waitfeature; /*!< Enables or disables the Wait feature for the NAND Memory device.
DECL|Waitfeature|member|uint32_t Waitfeature; /*!< Enables or disables the Wait feature for the PCCARD Memory device.
DECL|WrapMode|member|uint32_t WrapMode; /*!< Enables or disables the Wrapped burst access mode for Flash
DECL|WriteBurst|member|uint32_t WriteBurst; /*!< Enables or disables the write burst operation.
DECL|WriteOperation|member|uint32_t WriteOperation; /*!< Enables or disables the write operation in the selected device by the FSMC.
DECL|__FSMC_NAND_CLEAR_FLAG|macro|__FSMC_NAND_CLEAR_FLAG
DECL|__FSMC_NAND_DISABLE_IT|macro|__FSMC_NAND_DISABLE_IT
DECL|__FSMC_NAND_DISABLE|macro|__FSMC_NAND_DISABLE
DECL|__FSMC_NAND_ENABLE_IT|macro|__FSMC_NAND_ENABLE_IT
DECL|__FSMC_NAND_ENABLE|macro|__FSMC_NAND_ENABLE
DECL|__FSMC_NAND_GET_FLAG|macro|__FSMC_NAND_GET_FLAG
DECL|__FSMC_NORSRAM_DISABLE|macro|__FSMC_NORSRAM_DISABLE
DECL|__FSMC_NORSRAM_ENABLE|macro|__FSMC_NORSRAM_ENABLE
DECL|__FSMC_PCCARD_CLEAR_FLAG|macro|__FSMC_PCCARD_CLEAR_FLAG
DECL|__FSMC_PCCARD_DISABLE_IT|macro|__FSMC_PCCARD_DISABLE_IT
DECL|__FSMC_PCCARD_DISABLE|macro|__FSMC_PCCARD_DISABLE
DECL|__FSMC_PCCARD_ENABLE_IT|macro|__FSMC_PCCARD_ENABLE_IT
DECL|__FSMC_PCCARD_ENABLE|macro|__FSMC_PCCARD_ENABLE
DECL|__FSMC_PCCARD_GET_FLAG|macro|__FSMC_PCCARD_GET_FLAG
DECL|__STM32F2xx_LL_FSMC_H|macro|__STM32F2xx_LL_FSMC_H
