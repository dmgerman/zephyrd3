DECL|Address|member|__IO uint32_t Address; /* Internal variable to save address selected for program in IT context */
DECL|Banks|member|uint32_t Banks; /*!< Select bank to erase.
DECL|Bank|member|__IO uint32_t Bank; /* Internal variable to save current bank selected during erase in IT context */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /* FLASH error code */
DECL|FLASH_BANK_1|macro|FLASH_BANK_1
DECL|FLASH_BANK_2|macro|FLASH_BANK_2
DECL|FLASH_BANK_BOTH|macro|FLASH_BANK_BOTH
DECL|FLASH_BANK_BOTH|macro|FLASH_BANK_BOTH
DECL|FLASH_BANK_SIZE|macro|FLASH_BANK_SIZE
DECL|FLASH_BANK_SIZE|macro|FLASH_BANK_SIZE
DECL|FLASH_EraseInitTypeDef|typedef|} FLASH_EraseInitTypeDef;
DECL|FLASH_FLAG_ALL_ERRORS|macro|FLASH_FLAG_ALL_ERRORS
DECL|FLASH_FLAG_BSY|macro|FLASH_FLAG_BSY
DECL|FLASH_FLAG_ECCC|macro|FLASH_FLAG_ECCC
DECL|FLASH_FLAG_ECCD|macro|FLASH_FLAG_ECCD
DECL|FLASH_FLAG_EOP|macro|FLASH_FLAG_EOP
DECL|FLASH_FLAG_FASTERR|macro|FLASH_FLAG_FASTERR
DECL|FLASH_FLAG_MISERR|macro|FLASH_FLAG_MISERR
DECL|FLASH_FLAG_OPERR|macro|FLASH_FLAG_OPERR
DECL|FLASH_FLAG_OPTVERR|macro|FLASH_FLAG_OPTVERR
DECL|FLASH_FLAG_PEMPTY|macro|FLASH_FLAG_PEMPTY
DECL|FLASH_FLAG_PGAERR|macro|FLASH_FLAG_PGAERR
DECL|FLASH_FLAG_PGSERR|macro|FLASH_FLAG_PGSERR
DECL|FLASH_FLAG_PROGERR|macro|FLASH_FLAG_PROGERR
DECL|FLASH_FLAG_RDERR|macro|FLASH_FLAG_RDERR
DECL|FLASH_FLAG_SIZERR|macro|FLASH_FLAG_SIZERR
DECL|FLASH_FLAG_WRPERR|macro|FLASH_FLAG_WRPERR
DECL|FLASH_IT_ECCC|macro|FLASH_IT_ECCC
DECL|FLASH_IT_EOP|macro|FLASH_IT_EOP
DECL|FLASH_IT_OPERR|macro|FLASH_IT_OPERR
DECL|FLASH_IT_RDERR|macro|FLASH_IT_RDERR
DECL|FLASH_KEY1|macro|FLASH_KEY1
DECL|FLASH_KEY2|macro|FLASH_KEY2
DECL|FLASH_LATENCY_0|macro|FLASH_LATENCY_0
DECL|FLASH_LATENCY_1|macro|FLASH_LATENCY_1
DECL|FLASH_LATENCY_2|macro|FLASH_LATENCY_2
DECL|FLASH_LATENCY_3|macro|FLASH_LATENCY_3
DECL|FLASH_LATENCY_4|macro|FLASH_LATENCY_4
DECL|FLASH_OBProgramInitTypeDef|typedef|} FLASH_OBProgramInitTypeDef;
DECL|FLASH_OPTKEY1|macro|FLASH_OPTKEY1
DECL|FLASH_OPTKEY2|macro|FLASH_OPTKEY2
DECL|FLASH_PAGE_SIZE|macro|FLASH_PAGE_SIZE
DECL|FLASH_PDKEY1|macro|FLASH_PDKEY1
DECL|FLASH_PDKEY2|macro|FLASH_PDKEY2
DECL|FLASH_PROC_MASS_ERASE|enumerator|FLASH_PROC_MASS_ERASE,
DECL|FLASH_PROC_NONE|enumerator|FLASH_PROC_NONE = 0,
DECL|FLASH_PROC_PAGE_ERASE|enumerator|FLASH_PROC_PAGE_ERASE,
DECL|FLASH_PROC_PROGRAM_LAST|enumerator|FLASH_PROC_PROGRAM_LAST
DECL|FLASH_PROC_PROGRAM|enumerator|FLASH_PROC_PROGRAM,
DECL|FLASH_ProcedureTypeDef|typedef|} FLASH_ProcedureTypeDef;
DECL|FLASH_ProcessTypeDef|typedef|}FLASH_ProcessTypeDef;
DECL|FLASH_SIZE_DATA_REGISTER|macro|FLASH_SIZE_DATA_REGISTER
DECL|FLASH_SIZE|macro|FLASH_SIZE
DECL|FLASH_TIMEOUT_VALUE|macro|FLASH_TIMEOUT_VALUE
DECL|FLASH_TYPEERASE_MASSERASE|macro|FLASH_TYPEERASE_MASSERASE
DECL|FLASH_TYPEERASE_PAGES|macro|FLASH_TYPEERASE_PAGES
DECL|FLASH_TYPEPROGRAM_DOUBLEWORD|macro|FLASH_TYPEPROGRAM_DOUBLEWORD
DECL|FLASH_TYPEPROGRAM_FAST_AND_LAST|macro|FLASH_TYPEPROGRAM_FAST_AND_LAST
DECL|FLASH_TYPEPROGRAM_FAST|macro|FLASH_TYPEPROGRAM_FAST
DECL|HAL_FLASH_ERROR_ECCD|macro|HAL_FLASH_ERROR_ECCD
DECL|HAL_FLASH_ERROR_FAST|macro|HAL_FLASH_ERROR_FAST
DECL|HAL_FLASH_ERROR_MIS|macro|HAL_FLASH_ERROR_MIS
DECL|HAL_FLASH_ERROR_NONE|macro|HAL_FLASH_ERROR_NONE
DECL|HAL_FLASH_ERROR_OPTV|macro|HAL_FLASH_ERROR_OPTV
DECL|HAL_FLASH_ERROR_OP|macro|HAL_FLASH_ERROR_OP
DECL|HAL_FLASH_ERROR_PEMPTY|macro|HAL_FLASH_ERROR_PEMPTY
DECL|HAL_FLASH_ERROR_PGA|macro|HAL_FLASH_ERROR_PGA
DECL|HAL_FLASH_ERROR_PGS|macro|HAL_FLASH_ERROR_PGS
DECL|HAL_FLASH_ERROR_PROG|macro|HAL_FLASH_ERROR_PROG
DECL|HAL_FLASH_ERROR_RD|macro|HAL_FLASH_ERROR_RD
DECL|HAL_FLASH_ERROR_SIZ|macro|HAL_FLASH_ERROR_SIZ
DECL|HAL_FLASH_ERROR_WRP|macro|HAL_FLASH_ERROR_WRP
DECL|IS_FLASH_BANK_EXCLUSIVE|macro|IS_FLASH_BANK_EXCLUSIVE
DECL|IS_FLASH_BANK_EXCLUSIVE|macro|IS_FLASH_BANK_EXCLUSIVE
DECL|IS_FLASH_BANK|macro|IS_FLASH_BANK
DECL|IS_FLASH_BANK|macro|IS_FLASH_BANK
DECL|IS_FLASH_LATENCY|macro|IS_FLASH_LATENCY
DECL|IS_FLASH_MAIN_MEM_ADDRESS|macro|IS_FLASH_MAIN_MEM_ADDRESS
DECL|IS_FLASH_OTP_ADDRESS|macro|IS_FLASH_OTP_ADDRESS
DECL|IS_FLASH_PAGE|macro|IS_FLASH_PAGE
DECL|IS_FLASH_PAGE|macro|IS_FLASH_PAGE
DECL|IS_FLASH_PROGRAM_ADDRESS|macro|IS_FLASH_PROGRAM_ADDRESS
DECL|IS_FLASH_TYPEERASE|macro|IS_FLASH_TYPEERASE
DECL|IS_FLASH_TYPEPROGRAM|macro|IS_FLASH_TYPEPROGRAM
DECL|IS_OB_PCROP_RDP|macro|IS_OB_PCROP_RDP
DECL|IS_OB_RDP_LEVEL|macro|IS_OB_RDP_LEVEL
DECL|IS_OB_USER_BFB2|macro|IS_OB_USER_BFB2
DECL|IS_OB_USER_BOOT0|macro|IS_OB_USER_BOOT0
DECL|IS_OB_USER_BOOT1|macro|IS_OB_USER_BOOT1
DECL|IS_OB_USER_BOR_LEVEL|macro|IS_OB_USER_BOR_LEVEL
DECL|IS_OB_USER_DUALBANK|macro|IS_OB_USER_DUALBANK
DECL|IS_OB_USER_IWDG_STDBY|macro|IS_OB_USER_IWDG_STDBY
DECL|IS_OB_USER_IWDG_STOP|macro|IS_OB_USER_IWDG_STOP
DECL|IS_OB_USER_IWDG|macro|IS_OB_USER_IWDG
DECL|IS_OB_USER_SHUTDOWN|macro|IS_OB_USER_SHUTDOWN
DECL|IS_OB_USER_SRAM2_PARITY|macro|IS_OB_USER_SRAM2_PARITY
DECL|IS_OB_USER_SRAM2_RST|macro|IS_OB_USER_SRAM2_RST
DECL|IS_OB_USER_STANDBY|macro|IS_OB_USER_STANDBY
DECL|IS_OB_USER_STOP|macro|IS_OB_USER_STOP
DECL|IS_OB_USER_SWBOOT0|macro|IS_OB_USER_SWBOOT0
DECL|IS_OB_USER_TYPE|macro|IS_OB_USER_TYPE
DECL|IS_OB_USER_TYPE|macro|IS_OB_USER_TYPE
DECL|IS_OB_USER_WWDG|macro|IS_OB_USER_WWDG
DECL|IS_OB_WRPAREA|macro|IS_OB_WRPAREA
DECL|IS_OB_WRPAREA|macro|IS_OB_WRPAREA
DECL|IS_OPTIONBYTE|macro|IS_OPTIONBYTE
DECL|Lock|member|HAL_LockTypeDef Lock; /* FLASH locking object */
DECL|NbPagesToErase|member|__IO uint32_t NbPagesToErase; /* Internal variable to save the remaining pages to erase in IT context */
DECL|NbPages|member|uint32_t NbPages; /*!< Number of pages to be erased.
DECL|OB_BFB2_DISABLE|macro|OB_BFB2_DISABLE
DECL|OB_BFB2_ENABLE|macro|OB_BFB2_ENABLE
DECL|OB_BOOT0_FROM_OB|macro|OB_BOOT0_FROM_OB
DECL|OB_BOOT0_FROM_PIN|macro|OB_BOOT0_FROM_PIN
DECL|OB_BOOT0_RESET|macro|OB_BOOT0_RESET
DECL|OB_BOOT0_SET|macro|OB_BOOT0_SET
DECL|OB_BOOT1_SRAM|macro|OB_BOOT1_SRAM
DECL|OB_BOOT1_SYSTEM|macro|OB_BOOT1_SYSTEM
DECL|OB_BOR_LEVEL_0|macro|OB_BOR_LEVEL_0
DECL|OB_BOR_LEVEL_1|macro|OB_BOR_LEVEL_1
DECL|OB_BOR_LEVEL_2|macro|OB_BOR_LEVEL_2
DECL|OB_BOR_LEVEL_3|macro|OB_BOR_LEVEL_3
DECL|OB_BOR_LEVEL_4|macro|OB_BOR_LEVEL_4
DECL|OB_DUALBANK_DUAL|macro|OB_DUALBANK_DUAL
DECL|OB_DUALBANK_SINGLE|macro|OB_DUALBANK_SINGLE
DECL|OB_IWDG_HW|macro|OB_IWDG_HW
DECL|OB_IWDG_STDBY_FREEZE|macro|OB_IWDG_STDBY_FREEZE
DECL|OB_IWDG_STDBY_RUN|macro|OB_IWDG_STDBY_RUN
DECL|OB_IWDG_STOP_FREEZE|macro|OB_IWDG_STOP_FREEZE
DECL|OB_IWDG_STOP_RUN|macro|OB_IWDG_STOP_RUN
DECL|OB_IWDG_SW|macro|OB_IWDG_SW
DECL|OB_PCROP_RDP_ERASE|macro|OB_PCROP_RDP_ERASE
DECL|OB_PCROP_RDP_NOT_ERASE|macro|OB_PCROP_RDP_NOT_ERASE
DECL|OB_RDP_LEVEL_0|macro|OB_RDP_LEVEL_0
DECL|OB_RDP_LEVEL_1|macro|OB_RDP_LEVEL_1
DECL|OB_RDP_LEVEL_2|macro|OB_RDP_LEVEL_2
DECL|OB_SHUTDOWN_NORST|macro|OB_SHUTDOWN_NORST
DECL|OB_SHUTDOWN_RST|macro|OB_SHUTDOWN_RST
DECL|OB_SRAM2_PARITY_DISABLE|macro|OB_SRAM2_PARITY_DISABLE
DECL|OB_SRAM2_PARITY_ENABLE|macro|OB_SRAM2_PARITY_ENABLE
DECL|OB_SRAM2_RST_ERASE|macro|OB_SRAM2_RST_ERASE
DECL|OB_SRAM2_RST_NOT_ERASE|macro|OB_SRAM2_RST_NOT_ERASE
DECL|OB_STANDBY_NORST|macro|OB_STANDBY_NORST
DECL|OB_STANDBY_RST|macro|OB_STANDBY_RST
DECL|OB_STOP_NORST|macro|OB_STOP_NORST
DECL|OB_STOP_RST|macro|OB_STOP_RST
DECL|OB_USER_BFB2|macro|OB_USER_BFB2
DECL|OB_USER_BOR_LEV|macro|OB_USER_BOR_LEV
DECL|OB_USER_DUALBANK|macro|OB_USER_DUALBANK
DECL|OB_USER_IWDG_STDBY|macro|OB_USER_IWDG_STDBY
DECL|OB_USER_IWDG_STOP|macro|OB_USER_IWDG_STOP
DECL|OB_USER_IWDG_SW|macro|OB_USER_IWDG_SW
DECL|OB_USER_SRAM2_PE|macro|OB_USER_SRAM2_PE
DECL|OB_USER_SRAM2_RST|macro|OB_USER_SRAM2_RST
DECL|OB_USER_WWDG_SW|macro|OB_USER_WWDG_SW
DECL|OB_USER_nBOOT0|macro|OB_USER_nBOOT0
DECL|OB_USER_nBOOT1|macro|OB_USER_nBOOT1
DECL|OB_USER_nRST_SHDW|macro|OB_USER_nRST_SHDW
DECL|OB_USER_nRST_STDBY|macro|OB_USER_nRST_STDBY
DECL|OB_USER_nRST_STOP|macro|OB_USER_nRST_STOP
DECL|OB_USER_nSWBOOT0|macro|OB_USER_nSWBOOT0
DECL|OB_WRPAREA_BANK1_AREAA|macro|OB_WRPAREA_BANK1_AREAA
DECL|OB_WRPAREA_BANK1_AREAB|macro|OB_WRPAREA_BANK1_AREAB
DECL|OB_WRPAREA_BANK2_AREAA|macro|OB_WRPAREA_BANK2_AREAA
DECL|OB_WRPAREA_BANK2_AREAB|macro|OB_WRPAREA_BANK2_AREAB
DECL|OB_WWDG_HW|macro|OB_WWDG_HW
DECL|OB_WWDG_SW|macro|OB_WWDG_SW
DECL|OPTIONBYTE_PCROP|macro|OPTIONBYTE_PCROP
DECL|OPTIONBYTE_RDP|macro|OPTIONBYTE_RDP
DECL|OPTIONBYTE_USER|macro|OPTIONBYTE_USER
DECL|OPTIONBYTE_WRP|macro|OPTIONBYTE_WRP
DECL|OptionType|member|uint32_t OptionType; /*!< Option byte to be configured.
DECL|PCROPConfig|member|uint32_t PCROPConfig; /*!< Configuration of the PCROP (used for OPTIONBYTE_PCROP).
DECL|PCROPEndAddr|member|uint32_t PCROPEndAddr; /*!< PCROP End address (used for OPTIONBYTE_PCROP).
DECL|PCROPStartAddr|member|uint32_t PCROPStartAddr; /*!< PCROP Start address (used for OPTIONBYTE_PCROP).
DECL|Page|member|__IO uint32_t Page; /* Internal variable to define the current page which is erasing in IT context */
DECL|Page|member|uint32_t Page; /*!< Initial Flash page to erase when page erase is disabled
DECL|ProcedureOnGoing|member|__IO FLASH_ProcedureTypeDef ProcedureOnGoing; /* Internal variable to indicate which procedure is ongoing or not in IT context */
DECL|RDPLevel|member|uint32_t RDPLevel; /*!< Set the read protection level.. (used for OPTIONBYTE_RDP).
DECL|TypeErase|member|uint32_t TypeErase; /*!< Mass erase or page erase.
DECL|USERConfig|member|uint32_t USERConfig; /*!< Value of the user option byte (used for OPTIONBYTE_USER).
DECL|USERType|member|uint32_t USERType; /*!< User option byte(s) to be configured (used for OPTIONBYTE_USER).
DECL|WRPArea|member|uint32_t WRPArea; /*!< Write protection area to be programmed (used for OPTIONBYTE_WRP).
DECL|WRPEndOffset|member|uint32_t WRPEndOffset; /*!< Write protection end offset (used for OPTIONBYTE_WRP).
DECL|WRPStartOffset|member|uint32_t WRPStartOffset; /*!< Write protection start offset (used for OPTIONBYTE_WRP).
DECL|__HAL_FLASH_CLEAR_FLAG|macro|__HAL_FLASH_CLEAR_FLAG
DECL|__HAL_FLASH_DATA_CACHE_DISABLE|macro|__HAL_FLASH_DATA_CACHE_DISABLE
DECL|__HAL_FLASH_DATA_CACHE_ENABLE|macro|__HAL_FLASH_DATA_CACHE_ENABLE
DECL|__HAL_FLASH_DATA_CACHE_RESET|macro|__HAL_FLASH_DATA_CACHE_RESET
DECL|__HAL_FLASH_DISABLE_IT|macro|__HAL_FLASH_DISABLE_IT
DECL|__HAL_FLASH_ENABLE_IT|macro|__HAL_FLASH_ENABLE_IT
DECL|__HAL_FLASH_GET_FLAG|macro|__HAL_FLASH_GET_FLAG
DECL|__HAL_FLASH_GET_LATENCY|macro|__HAL_FLASH_GET_LATENCY
DECL|__HAL_FLASH_INSTRUCTION_CACHE_DISABLE|macro|__HAL_FLASH_INSTRUCTION_CACHE_DISABLE
DECL|__HAL_FLASH_INSTRUCTION_CACHE_ENABLE|macro|__HAL_FLASH_INSTRUCTION_CACHE_ENABLE
DECL|__HAL_FLASH_INSTRUCTION_CACHE_RESET|macro|__HAL_FLASH_INSTRUCTION_CACHE_RESET
DECL|__HAL_FLASH_POWER_DOWN_DISABLE|macro|__HAL_FLASH_POWER_DOWN_DISABLE
DECL|__HAL_FLASH_POWER_DOWN_ENABLE|macro|__HAL_FLASH_POWER_DOWN_ENABLE
DECL|__HAL_FLASH_PREFETCH_BUFFER_DISABLE|macro|__HAL_FLASH_PREFETCH_BUFFER_DISABLE
DECL|__HAL_FLASH_PREFETCH_BUFFER_ENABLE|macro|__HAL_FLASH_PREFETCH_BUFFER_ENABLE
DECL|__HAL_FLASH_SET_LATENCY|macro|__HAL_FLASH_SET_LATENCY
DECL|__HAL_FLASH_SLEEP_POWERDOWN_DISABLE|macro|__HAL_FLASH_SLEEP_POWERDOWN_DISABLE
DECL|__HAL_FLASH_SLEEP_POWERDOWN_ENABLE|macro|__HAL_FLASH_SLEEP_POWERDOWN_ENABLE
DECL|__STM32L4xx_HAL_FLASH_H|macro|__STM32L4xx_HAL_FLASH_H
