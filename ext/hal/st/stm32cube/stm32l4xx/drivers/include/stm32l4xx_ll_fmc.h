DECL|AccessMode|member|uint32_t AccessMode; /*!< Specifies the asynchronous access mode.
DECL|AddressHoldTime|member|uint32_t AddressHoldTime; /*!< Defines the number of HCLK cycles to configure
DECL|AddressSetupTime|member|uint32_t AddressSetupTime; /*!< Defines the number of HCLK cycles to configure
DECL|AsynchronousWait|member|uint32_t AsynchronousWait; /*!< Enables or disables wait signal during asynchronous transfers,
DECL|BurstAccessMode|member|uint32_t BurstAccessMode; /*!< Enables or disables the burst access mode for Flash memory,
DECL|BusTurnAroundDuration|member|uint32_t BusTurnAroundDuration; /*!< Defines the number of HCLK cycles to configure
DECL|CLKDivision|member|uint32_t CLKDivision; /*!< Defines the period of CLK clock output signal, expressed in number of
DECL|ContinuousClock|member|uint32_t ContinuousClock; /*!< Enables or disables the FMC clock output to external memory devices.
DECL|DataAddressMux|member|uint32_t DataAddressMux; /*!< Specifies whether the address and data values are
DECL|DataLatency|member|uint32_t DataLatency; /*!< Defines the number of memory clock cycles to issue
DECL|DataSetupTime|member|uint32_t DataSetupTime; /*!< Defines the number of HCLK cycles to configure
DECL|ECCPageSize|member|uint32_t ECCPageSize; /*!< Defines the page size for the extended ECC.
DECL|EccComputation|member|uint32_t EccComputation; /*!< Enables or disables the ECC computation.
DECL|ExtendedMode|member|uint32_t ExtendedMode; /*!< Enables or disables the extended mode.
DECL|FMC_ACCESS_MODE_A|macro|FMC_ACCESS_MODE_A
DECL|FMC_ACCESS_MODE_B|macro|FMC_ACCESS_MODE_B
DECL|FMC_ACCESS_MODE_C|macro|FMC_ACCESS_MODE_C
DECL|FMC_ACCESS_MODE_D|macro|FMC_ACCESS_MODE_D
DECL|FMC_ASYNCHRONOUS_WAIT_DISABLE|macro|FMC_ASYNCHRONOUS_WAIT_DISABLE
DECL|FMC_ASYNCHRONOUS_WAIT_ENABLE|macro|FMC_ASYNCHRONOUS_WAIT_ENABLE
DECL|FMC_BURST_ACCESS_MODE_DISABLE|macro|FMC_BURST_ACCESS_MODE_DISABLE
DECL|FMC_BURST_ACCESS_MODE_ENABLE|macro|FMC_BURST_ACCESS_MODE_ENABLE
DECL|FMC_CONTINUOUS_CLOCK_SYNC_ASYNC|macro|FMC_CONTINUOUS_CLOCK_SYNC_ASYNC
DECL|FMC_CONTINUOUS_CLOCK_SYNC_ONLY|macro|FMC_CONTINUOUS_CLOCK_SYNC_ONLY
DECL|FMC_DATA_ADDRESS_MUX_DISABLE|macro|FMC_DATA_ADDRESS_MUX_DISABLE
DECL|FMC_DATA_ADDRESS_MUX_ENABLE|macro|FMC_DATA_ADDRESS_MUX_ENABLE
DECL|FMC_EXTENDED_MODE_DISABLE|macro|FMC_EXTENDED_MODE_DISABLE
DECL|FMC_EXTENDED_MODE_ENABLE|macro|FMC_EXTENDED_MODE_ENABLE
DECL|FMC_FLAG_FALLING_EDGE|macro|FMC_FLAG_FALLING_EDGE
DECL|FMC_FLAG_FEMPT|macro|FMC_FLAG_FEMPT
DECL|FMC_FLAG_LEVEL|macro|FMC_FLAG_LEVEL
DECL|FMC_FLAG_RISING_EDGE|macro|FMC_FLAG_RISING_EDGE
DECL|FMC_IT_FALLING_EDGE|macro|FMC_IT_FALLING_EDGE
DECL|FMC_IT_LEVEL|macro|FMC_IT_LEVEL
DECL|FMC_IT_RISING_EDGE|macro|FMC_IT_RISING_EDGE
DECL|FMC_MEMORY_TYPE_NOR|macro|FMC_MEMORY_TYPE_NOR
DECL|FMC_MEMORY_TYPE_PSRAM|macro|FMC_MEMORY_TYPE_PSRAM
DECL|FMC_MEMORY_TYPE_SRAM|macro|FMC_MEMORY_TYPE_SRAM
DECL|FMC_NAND_BANK3|macro|FMC_NAND_BANK3
DECL|FMC_NAND_DEVICE|macro|FMC_NAND_DEVICE
DECL|FMC_NAND_ECC_DISABLE|macro|FMC_NAND_ECC_DISABLE
DECL|FMC_NAND_ECC_ENABLE|macro|FMC_NAND_ECC_ENABLE
DECL|FMC_NAND_ECC_PAGE_SIZE_1024BYTE|macro|FMC_NAND_ECC_PAGE_SIZE_1024BYTE
DECL|FMC_NAND_ECC_PAGE_SIZE_2048BYTE|macro|FMC_NAND_ECC_PAGE_SIZE_2048BYTE
DECL|FMC_NAND_ECC_PAGE_SIZE_256BYTE|macro|FMC_NAND_ECC_PAGE_SIZE_256BYTE
DECL|FMC_NAND_ECC_PAGE_SIZE_4096BYTE|macro|FMC_NAND_ECC_PAGE_SIZE_4096BYTE
DECL|FMC_NAND_ECC_PAGE_SIZE_512BYTE|macro|FMC_NAND_ECC_PAGE_SIZE_512BYTE
DECL|FMC_NAND_ECC_PAGE_SIZE_8192BYTE|macro|FMC_NAND_ECC_PAGE_SIZE_8192BYTE
DECL|FMC_NAND_InitTypeDef|typedef|}FMC_NAND_InitTypeDef;
DECL|FMC_NAND_MEM_BUS_WIDTH_16|macro|FMC_NAND_MEM_BUS_WIDTH_16
DECL|FMC_NAND_MEM_BUS_WIDTH_8|macro|FMC_NAND_MEM_BUS_WIDTH_8
DECL|FMC_NAND_PCC_TimingTypeDef|typedef|}FMC_NAND_PCC_TimingTypeDef;
DECL|FMC_NAND_TypeDef|macro|FMC_NAND_TypeDef
DECL|FMC_NAND_WAIT_FEATURE_DISABLE|macro|FMC_NAND_WAIT_FEATURE_DISABLE
DECL|FMC_NAND_WAIT_FEATURE_ENABLE|macro|FMC_NAND_WAIT_FEATURE_ENABLE
DECL|FMC_NORSRAM_BANK1|macro|FMC_NORSRAM_BANK1
DECL|FMC_NORSRAM_BANK2|macro|FMC_NORSRAM_BANK2
DECL|FMC_NORSRAM_BANK3|macro|FMC_NORSRAM_BANK3
DECL|FMC_NORSRAM_BANK4|macro|FMC_NORSRAM_BANK4
DECL|FMC_NORSRAM_DEVICE|macro|FMC_NORSRAM_DEVICE
DECL|FMC_NORSRAM_EXTENDED_DEVICE|macro|FMC_NORSRAM_EXTENDED_DEVICE
DECL|FMC_NORSRAM_EXTENDED_TypeDef|macro|FMC_NORSRAM_EXTENDED_TypeDef
DECL|FMC_NORSRAM_FLASH_ACCESS_DISABLE|macro|FMC_NORSRAM_FLASH_ACCESS_DISABLE
DECL|FMC_NORSRAM_FLASH_ACCESS_ENABLE|macro|FMC_NORSRAM_FLASH_ACCESS_ENABLE
DECL|FMC_NORSRAM_InitTypeDef|typedef|}FMC_NORSRAM_InitTypeDef;
DECL|FMC_NORSRAM_MEM_BUS_WIDTH_16|macro|FMC_NORSRAM_MEM_BUS_WIDTH_16
DECL|FMC_NORSRAM_MEM_BUS_WIDTH_32|macro|FMC_NORSRAM_MEM_BUS_WIDTH_32
DECL|FMC_NORSRAM_MEM_BUS_WIDTH_8|macro|FMC_NORSRAM_MEM_BUS_WIDTH_8
DECL|FMC_NORSRAM_TimingTypeDef|typedef|}FMC_NORSRAM_TimingTypeDef;
DECL|FMC_NORSRAM_TypeDef|macro|FMC_NORSRAM_TypeDef
DECL|FMC_PAGE_SIZE_1024|macro|FMC_PAGE_SIZE_1024
DECL|FMC_PAGE_SIZE_128|macro|FMC_PAGE_SIZE_128
DECL|FMC_PAGE_SIZE_256|macro|FMC_PAGE_SIZE_256
DECL|FMC_PAGE_SIZE_512|macro|FMC_PAGE_SIZE_512
DECL|FMC_PAGE_SIZE_NONE|macro|FMC_PAGE_SIZE_NONE
DECL|FMC_PCR_MEMORY_TYPE_NAND|macro|FMC_PCR_MEMORY_TYPE_NAND
DECL|FMC_WAIT_SIGNAL_DISABLE|macro|FMC_WAIT_SIGNAL_DISABLE
DECL|FMC_WAIT_SIGNAL_ENABLE|macro|FMC_WAIT_SIGNAL_ENABLE
DECL|FMC_WAIT_SIGNAL_POLARITY_HIGH|macro|FMC_WAIT_SIGNAL_POLARITY_HIGH
DECL|FMC_WAIT_SIGNAL_POLARITY_LOW|macro|FMC_WAIT_SIGNAL_POLARITY_LOW
DECL|FMC_WAIT_TIMING_BEFORE_WS|macro|FMC_WAIT_TIMING_BEFORE_WS
DECL|FMC_WAIT_TIMING_DURING_WS|macro|FMC_WAIT_TIMING_DURING_WS
DECL|FMC_WRITE_BURST_DISABLE|macro|FMC_WRITE_BURST_DISABLE
DECL|FMC_WRITE_BURST_ENABLE|macro|FMC_WRITE_BURST_ENABLE
DECL|FMC_WRITE_OPERATION_DISABLE|macro|FMC_WRITE_OPERATION_DISABLE
DECL|FMC_WRITE_OPERATION_ENABLE|macro|FMC_WRITE_OPERATION_ENABLE
DECL|HiZSetupTime|member|uint32_t HiZSetupTime; /*!< Defines the number of HCLK clock cycles during which the
DECL|HoldSetupTime|member|uint32_t HoldSetupTime; /*!< Defines the number of HCLK clock cycles to hold address
DECL|IS_FMC_ACCESS_MODE|macro|IS_FMC_ACCESS_MODE
DECL|IS_FMC_ADDRESS_HOLD_TIME|macro|IS_FMC_ADDRESS_HOLD_TIME
DECL|IS_FMC_ADDRESS_SETUP_TIME|macro|IS_FMC_ADDRESS_SETUP_TIME
DECL|IS_FMC_ASYNWAIT|macro|IS_FMC_ASYNWAIT
DECL|IS_FMC_BURSTMODE|macro|IS_FMC_BURSTMODE
DECL|IS_FMC_CLK_DIV|macro|IS_FMC_CLK_DIV
DECL|IS_FMC_CONTINOUS_CLOCK|macro|IS_FMC_CONTINOUS_CLOCK
DECL|IS_FMC_DATASETUP_TIME|macro|IS_FMC_DATASETUP_TIME
DECL|IS_FMC_DATA_LATENCY|macro|IS_FMC_DATA_LATENCY
DECL|IS_FMC_ECCPAGE_SIZE|macro|IS_FMC_ECCPAGE_SIZE
DECL|IS_FMC_ECC_STATE|macro|IS_FMC_ECC_STATE
DECL|IS_FMC_EXTENDED_MODE|macro|IS_FMC_EXTENDED_MODE
DECL|IS_FMC_HIZ_TIME|macro|IS_FMC_HIZ_TIME
DECL|IS_FMC_HOLD_TIME|macro|IS_FMC_HOLD_TIME
DECL|IS_FMC_MEMORY|macro|IS_FMC_MEMORY
DECL|IS_FMC_MUX|macro|IS_FMC_MUX
DECL|IS_FMC_NAND_BANK|macro|IS_FMC_NAND_BANK
DECL|IS_FMC_NAND_DEVICE|macro|IS_FMC_NAND_DEVICE
DECL|IS_FMC_NAND_MEMORY_WIDTH|macro|IS_FMC_NAND_MEMORY_WIDTH
DECL|IS_FMC_NORSRAM_BANK|macro|IS_FMC_NORSRAM_BANK
DECL|IS_FMC_NORSRAM_DEVICE|macro|IS_FMC_NORSRAM_DEVICE
DECL|IS_FMC_NORSRAM_EXTENDED_DEVICE|macro|IS_FMC_NORSRAM_EXTENDED_DEVICE
DECL|IS_FMC_NORSRAM_MEMORY_WIDTH|macro|IS_FMC_NORSRAM_MEMORY_WIDTH
DECL|IS_FMC_PAGESIZE|macro|IS_FMC_PAGESIZE
DECL|IS_FMC_SETUP_TIME|macro|IS_FMC_SETUP_TIME
DECL|IS_FMC_TAR_TIME|macro|IS_FMC_TAR_TIME
DECL|IS_FMC_TCLR_TIME|macro|IS_FMC_TCLR_TIME
DECL|IS_FMC_TURNAROUND_TIME|macro|IS_FMC_TURNAROUND_TIME
DECL|IS_FMC_WAITE_SIGNAL|macro|IS_FMC_WAITE_SIGNAL
DECL|IS_FMC_WAIT_FEATURE|macro|IS_FMC_WAIT_FEATURE
DECL|IS_FMC_WAIT_POLARITY|macro|IS_FMC_WAIT_POLARITY
DECL|IS_FMC_WAIT_SIGNAL_ACTIVE|macro|IS_FMC_WAIT_SIGNAL_ACTIVE
DECL|IS_FMC_WAIT_TIME|macro|IS_FMC_WAIT_TIME
DECL|IS_FMC_WRITE_BURST|macro|IS_FMC_WRITE_BURST
DECL|IS_FMC_WRITE_OPERATION|macro|IS_FMC_WRITE_OPERATION
DECL|MemoryDataWidth|member|uint32_t MemoryDataWidth; /*!< Specifies the external memory device width.
DECL|MemoryDataWidth|member|uint32_t MemoryDataWidth; /*!< Specifies the external memory device width.
DECL|MemoryType|member|uint32_t MemoryType; /*!< Specifies the type of external memory attached to
DECL|NSBank|member|uint32_t NSBank; /*!< Specifies the NORSRAM memory device that will be used.
DECL|NandBank|member|uint32_t NandBank; /*!< Specifies the NAND memory device that will be used.
DECL|PageSize|member|uint32_t PageSize; /*!< Specifies the memory page size.
DECL|SetupTime|member|uint32_t SetupTime; /*!< Defines the number of HCLK cycles to setup address before
DECL|TARSetupTime|member|uint32_t TARSetupTime; /*!< Defines the number of HCLK cycles to configure the
DECL|TCLRSetupTime|member|uint32_t TCLRSetupTime; /*!< Defines the number of HCLK cycles to configure the
DECL|WaitSetupTime|member|uint32_t WaitSetupTime; /*!< Defines the minimum number of HCLK cycles to assert the
DECL|WaitSignalActive|member|uint32_t WaitSignalActive; /*!< Specifies if the wait signal is asserted by the memory one
DECL|WaitSignalPolarity|member|uint32_t WaitSignalPolarity; /*!< Specifies the wait signal polarity, valid only when accessing
DECL|WaitSignal|member|uint32_t WaitSignal; /*!< Enables or disables the wait state insertion via wait
DECL|Waitfeature|member|uint32_t Waitfeature; /*!< Enables or disables the Wait feature for the NAND Memory device.
DECL|WriteBurst|member|uint32_t WriteBurst; /*!< Enables or disables the write burst operation.
DECL|WriteFifo|member|uint32_t WriteFifo; /*!< Enables or disables the write FIFO used by the FMC controller.
DECL|WriteOperation|member|uint32_t WriteOperation; /*!< Enables or disables the write operation in the selected device by the FMC.
DECL|__FMC_NAND_CLEAR_FLAG|macro|__FMC_NAND_CLEAR_FLAG
DECL|__FMC_NAND_DISABLE_IT|macro|__FMC_NAND_DISABLE_IT
DECL|__FMC_NAND_DISABLE|macro|__FMC_NAND_DISABLE
DECL|__FMC_NAND_ENABLE_IT|macro|__FMC_NAND_ENABLE_IT
DECL|__FMC_NAND_ENABLE|macro|__FMC_NAND_ENABLE
DECL|__FMC_NAND_GET_FLAG|macro|__FMC_NAND_GET_FLAG
DECL|__FMC_NORSRAM_DISABLE|macro|__FMC_NORSRAM_DISABLE
DECL|__FMC_NORSRAM_ENABLE|macro|__FMC_NORSRAM_ENABLE
DECL|__STM32L4xx_LL_FMC_H|macro|__STM32L4xx_LL_FMC_H
