DECL|Activation|member|FunctionalState Activation; /*!< Interrupts enable/disable */
DECL|BlocksPerLine|member|uint32_t BlocksPerLine; /*!< Number of blocks of 16 bytes per line.
DECL|Buf0Address|member|uint32_t Buf0Address; /*!< Physical address of buffer 0. */
DECL|Buf1Address|member|uint32_t Buf1Address; /*!< Physical address of buffer 1. */
DECL|Buf2Address|member|uint32_t Buf2Address; /*!< Physical address of buffer 2. */
DECL|Buf3Address|member|uint32_t Buf3Address; /*!< Physical address of buffer 3. */
DECL|Buffers|member|GFXMMU_BuffersTypeDef Buffers; /*!< Physical buffers addresses. */
DECL|DefaultValue|member|uint32_t DefaultValue; /*!< Value returned when virtual memory location not physically mapped. */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< GFXMMU error code */
DECL|FirstVisibleBlock|member|uint32_t FirstVisibleBlock; /*!< First visible block on this line.
DECL|GFXMMU_192BLOCKS|macro|GFXMMU_192BLOCKS
DECL|GFXMMU_256BLOCKS|macro|GFXMMU_256BLOCKS
DECL|GFXMMU_AHB_MASTER_ERROR_IT|macro|GFXMMU_AHB_MASTER_ERROR_IT
DECL|GFXMMU_BUFFER0_OVERFLOW_IT|macro|GFXMMU_BUFFER0_OVERFLOW_IT
DECL|GFXMMU_BUFFER1_OVERFLOW_IT|macro|GFXMMU_BUFFER1_OVERFLOW_IT
DECL|GFXMMU_BUFFER2_OVERFLOW_IT|macro|GFXMMU_BUFFER2_OVERFLOW_IT
DECL|GFXMMU_BUFFER3_OVERFLOW_IT|macro|GFXMMU_BUFFER3_OVERFLOW_IT
DECL|GFXMMU_BuffersTypeDef|typedef|}GFXMMU_BuffersTypeDef;
DECL|GFXMMU_ERROR_AHB_MASTER|macro|GFXMMU_ERROR_AHB_MASTER
DECL|GFXMMU_ERROR_BUFFER0_OVERFLOW|macro|GFXMMU_ERROR_BUFFER0_OVERFLOW
DECL|GFXMMU_ERROR_BUFFER1_OVERFLOW|macro|GFXMMU_ERROR_BUFFER1_OVERFLOW
DECL|GFXMMU_ERROR_BUFFER2_OVERFLOW|macro|GFXMMU_ERROR_BUFFER2_OVERFLOW
DECL|GFXMMU_ERROR_BUFFER3_OVERFLOW|macro|GFXMMU_ERROR_BUFFER3_OVERFLOW
DECL|GFXMMU_ERROR_NONE|macro|GFXMMU_ERROR_NONE
DECL|GFXMMU_HandleTypeDef|typedef|}GFXMMU_HandleTypeDef;
DECL|GFXMMU_InitTypeDef|typedef|}GFXMMU_InitTypeDef;
DECL|GFXMMU_InterruptsTypeDef|typedef|}GFXMMU_InterruptsTypeDef;
DECL|GFXMMU_LUT_LINE_DISABLE|macro|GFXMMU_LUT_LINE_DISABLE
DECL|GFXMMU_LUT_LINE_ENABLE|macro|GFXMMU_LUT_LINE_ENABLE
DECL|GFXMMU_LutLineTypeDef|typedef|}GFXMMU_LutLineTypeDef;
DECL|HAL_GFXMMU_STATE_READY|enumerator|HAL_GFXMMU_STATE_READY = 0x01U, /*!< GFXMMU initialized and ready for use */
DECL|HAL_GFXMMU_STATE_RESET|enumerator|HAL_GFXMMU_STATE_RESET = 0x00U, /*!< GFXMMU not initialized */
DECL|HAL_GFXMMU_StateTypeDef|typedef|}HAL_GFXMMU_StateTypeDef;
DECL|IS_GFXMMU_BLOCKS_PER_LINE|macro|IS_GFXMMU_BLOCKS_PER_LINE
DECL|IS_GFXMMU_BUFFER_ADDRESS|macro|IS_GFXMMU_BUFFER_ADDRESS
DECL|IS_GFXMMU_INTERRUPTS|macro|IS_GFXMMU_INTERRUPTS
DECL|IS_GFXMMU_LUT_BLOCK|macro|IS_GFXMMU_LUT_BLOCK
DECL|IS_GFXMMU_LUT_LINES_NUMBER|macro|IS_GFXMMU_LUT_LINES_NUMBER
DECL|IS_GFXMMU_LUT_LINE_OFFSET|macro|IS_GFXMMU_LUT_LINE_OFFSET
DECL|IS_GFXMMU_LUT_LINE_STATUS|macro|IS_GFXMMU_LUT_LINE_STATUS
DECL|IS_GFXMMU_LUT_LINE|macro|IS_GFXMMU_LUT_LINE
DECL|Init|member|GFXMMU_InitTypeDef Init; /*!< GFXMMU init parameters */
DECL|Instance|member|GFXMMU_TypeDef *Instance; /*!< GFXMMU instance */
DECL|Interrupts|member|GFXMMU_InterruptsTypeDef Interrupts; /*!< Interrupts parameters. */
DECL|LastVisibleBlock|member|uint32_t LastVisibleBlock; /*!< Last visible block on this line.
DECL|LineNumber|member|uint32_t LineNumber; /*!< LUT line number.
DECL|LineOffset|member|int32_t LineOffset; /*!< Offset of block 0 of the current line in physical buffer.
DECL|LineStatus|member|uint32_t LineStatus; /*!< LUT line enable/disable.
DECL|State|member|HAL_GFXMMU_StateTypeDef State; /*!< GFXMMU state */
DECL|UsedInterrupts|member|uint32_t UsedInterrupts; /*!< Interrupts used.
DECL|__HAL_GFXMMU_RESET_HANDLE_STATE|macro|__HAL_GFXMMU_RESET_HANDLE_STATE
DECL|__STM32L4xx_HAL_GFXMMU_H|macro|__STM32L4xx_HAL_GFXMMU_H
