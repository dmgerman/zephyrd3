DECL|Address|member|__IO uint32_t Address; /*!< Internal variable to save address selected for program or erase */
DECL|DataRemaining|member|__IO uint32_t DataRemaining; /*!< Internal variable to save the remaining pages to erase or half-word to program in IT context */
DECL|Data|member|__IO uint64_t Data; /*!< Internal variable to save data to be programmed */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< FLASH error code
DECL|FLASH_FLAG_BSY|macro|FLASH_FLAG_BSY
DECL|FLASH_FLAG_EOP|macro|FLASH_FLAG_EOP
DECL|FLASH_FLAG_PGERR|macro|FLASH_FLAG_PGERR
DECL|FLASH_FLAG_WRPERR|macro|FLASH_FLAG_WRPERR
DECL|FLASH_IT_EOP|macro|FLASH_IT_EOP
DECL|FLASH_IT_ERR|macro|FLASH_IT_ERR
DECL|FLASH_LATENCY_0|macro|FLASH_LATENCY_0
DECL|FLASH_LATENCY_1|macro|FLASH_LATENCY_1
DECL|FLASH_LATENCY_2|macro|FLASH_LATENCY_2
DECL|FLASH_PROC_MASSERASE|enumerator|FLASH_PROC_MASSERASE = 2,
DECL|FLASH_PROC_NONE|enumerator|FLASH_PROC_NONE = 0,
DECL|FLASH_PROC_PAGEERASE|enumerator|FLASH_PROC_PAGEERASE = 1,
DECL|FLASH_PROC_PROGRAMDOUBLEWORD|enumerator|FLASH_PROC_PROGRAMDOUBLEWORD = 5
DECL|FLASH_PROC_PROGRAMHALFWORD|enumerator|FLASH_PROC_PROGRAMHALFWORD = 3,
DECL|FLASH_PROC_PROGRAMWORD|enumerator|FLASH_PROC_PROGRAMWORD = 4,
DECL|FLASH_ProcedureTypeDef|typedef|} FLASH_ProcedureTypeDef;
DECL|FLASH_ProcessTypeDef|typedef|} FLASH_ProcessTypeDef;
DECL|FLASH_TIMEOUT_VALUE|macro|FLASH_TIMEOUT_VALUE
DECL|FLASH_TYPEPROGRAM_DOUBLEWORD|macro|FLASH_TYPEPROGRAM_DOUBLEWORD
DECL|FLASH_TYPEPROGRAM_HALFWORD|macro|FLASH_TYPEPROGRAM_HALFWORD
DECL|FLASH_TYPEPROGRAM_WORD|macro|FLASH_TYPEPROGRAM_WORD
DECL|HAL_FLASH_ERROR_NONE|macro|HAL_FLASH_ERROR_NONE
DECL|HAL_FLASH_ERROR_PROG|macro|HAL_FLASH_ERROR_PROG
DECL|HAL_FLASH_ERROR_WRP|macro|HAL_FLASH_ERROR_WRP
DECL|IS_FLASH_LATENCY|macro|IS_FLASH_LATENCY
DECL|IS_FLASH_TYPEPROGRAM|macro|IS_FLASH_TYPEPROGRAM
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< FLASH locking object */
DECL|ProcedureOnGoing|member|__IO FLASH_ProcedureTypeDef ProcedureOnGoing; /*!< Internal variable to indicate which procedure is ongoing or not in IT context */
DECL|__HAL_FLASH_CLEAR_FLAG|macro|__HAL_FLASH_CLEAR_FLAG
DECL|__HAL_FLASH_DISABLE_IT|macro|__HAL_FLASH_DISABLE_IT
DECL|__HAL_FLASH_ENABLE_IT|macro|__HAL_FLASH_ENABLE_IT
DECL|__HAL_FLASH_GET_FLAG|macro|__HAL_FLASH_GET_FLAG
DECL|__HAL_FLASH_GET_LATENCY|macro|__HAL_FLASH_GET_LATENCY
DECL|__HAL_FLASH_HALF_CYCLE_ACCESS_DISABLE|macro|__HAL_FLASH_HALF_CYCLE_ACCESS_DISABLE
DECL|__HAL_FLASH_HALF_CYCLE_ACCESS_ENABLE|macro|__HAL_FLASH_HALF_CYCLE_ACCESS_ENABLE
DECL|__HAL_FLASH_PREFETCH_BUFFER_DISABLE|macro|__HAL_FLASH_PREFETCH_BUFFER_DISABLE
DECL|__HAL_FLASH_PREFETCH_BUFFER_ENABLE|macro|__HAL_FLASH_PREFETCH_BUFFER_ENABLE
DECL|__HAL_FLASH_SET_LATENCY|macro|__HAL_FLASH_SET_LATENCY
DECL|__STM32F3xx_HAL_FLASH_H|macro|__STM32F3xx_HAL_FLASH_H
