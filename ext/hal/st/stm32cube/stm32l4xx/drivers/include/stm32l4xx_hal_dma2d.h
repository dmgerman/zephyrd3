DECL|AlphaInverted|member|uint32_t AlphaInverted; /*!< Select regular or inverted alpha value for the output pixel format converter.
DECL|AlphaInverted|member|uint32_t AlphaInverted; /*!< Select regular or inverted alpha value.
DECL|AlphaMode|member|uint32_t AlphaMode; /*!< Configures the DMA2D foreground or background alpha mode.
DECL|Blue|member|uint32_t Blue; /*!< Configures the blue value.
DECL|BytesSwap|member|uint32_t BytesSwap; /*!< Select byte regular mode or bytes swap mode (two by two).
DECL|CLUTColorMode|member|uint32_t CLUTColorMode; /*!< Configures the DMA2D CLUT color mode.
DECL|CLUTLoadingCpltCallback|member|void (* CLUTLoadingCpltCallback)( struct __DMA2D_HandleTypeDef * hdma2d); /*!< DMA2D CLUT loading completion callback. */
DECL|ColorMode|member|uint32_t ColorMode; /*!< Configures the color format of the output image.
DECL|DMA2D_BACKGROUND_LAYER|macro|DMA2D_BACKGROUND_LAYER
DECL|DMA2D_BYTES_REGULAR|macro|DMA2D_BYTES_REGULAR
DECL|DMA2D_BYTES_SWAP|macro|DMA2D_BYTES_SWAP
DECL|DMA2D_CCM_ARGB8888|macro|DMA2D_CCM_ARGB8888
DECL|DMA2D_CCM_RGB888|macro|DMA2D_CCM_RGB888
DECL|DMA2D_CLUTCfgTypeDef|typedef|} DMA2D_CLUTCfgTypeDef;
DECL|DMA2D_CLUT_SIZE|macro|DMA2D_CLUT_SIZE
DECL|DMA2D_COLOR_VALUE|macro|DMA2D_COLOR_VALUE
DECL|DMA2D_COMBINE_ALPHA|macro|DMA2D_COMBINE_ALPHA
DECL|DMA2D_ColorTypeDef|typedef|} DMA2D_ColorTypeDef;
DECL|DMA2D_FLAG_CAE|macro|DMA2D_FLAG_CAE
DECL|DMA2D_FLAG_CE|macro|DMA2D_FLAG_CE
DECL|DMA2D_FLAG_CTC|macro|DMA2D_FLAG_CTC
DECL|DMA2D_FLAG_TC|macro|DMA2D_FLAG_TC
DECL|DMA2D_FLAG_TE|macro|DMA2D_FLAG_TE
DECL|DMA2D_FLAG_TW|macro|DMA2D_FLAG_TW
DECL|DMA2D_FOREGROUND_LAYER|macro|DMA2D_FOREGROUND_LAYER
DECL|DMA2D_HandleTypeDef|typedef|} DMA2D_HandleTypeDef;
DECL|DMA2D_INPUT_A4|macro|DMA2D_INPUT_A4
DECL|DMA2D_INPUT_A8|macro|DMA2D_INPUT_A8
DECL|DMA2D_INPUT_AL44|macro|DMA2D_INPUT_AL44
DECL|DMA2D_INPUT_AL88|macro|DMA2D_INPUT_AL88
DECL|DMA2D_INPUT_ARGB1555|macro|DMA2D_INPUT_ARGB1555
DECL|DMA2D_INPUT_ARGB4444|macro|DMA2D_INPUT_ARGB4444
DECL|DMA2D_INPUT_ARGB8888|macro|DMA2D_INPUT_ARGB8888
DECL|DMA2D_INPUT_L4|macro|DMA2D_INPUT_L4
DECL|DMA2D_INPUT_L8|macro|DMA2D_INPUT_L8
DECL|DMA2D_INPUT_RGB565|macro|DMA2D_INPUT_RGB565
DECL|DMA2D_INPUT_RGB888|macro|DMA2D_INPUT_RGB888
DECL|DMA2D_INVERTED_ALPHA|macro|DMA2D_INVERTED_ALPHA
DECL|DMA2D_IT_CAE|macro|DMA2D_IT_CAE
DECL|DMA2D_IT_CE|macro|DMA2D_IT_CE
DECL|DMA2D_IT_CTC|macro|DMA2D_IT_CTC
DECL|DMA2D_IT_TC|macro|DMA2D_IT_TC
DECL|DMA2D_IT_TE|macro|DMA2D_IT_TE
DECL|DMA2D_IT_TW|macro|DMA2D_IT_TW
DECL|DMA2D_InitTypeDef|typedef|} DMA2D_InitTypeDef;
DECL|DMA2D_LINE_WATERMARK_MAX|macro|DMA2D_LINE_WATERMARK_MAX
DECL|DMA2D_LINE|macro|DMA2D_LINE
DECL|DMA2D_LOM_BYTES|macro|DMA2D_LOM_BYTES
DECL|DMA2D_LOM_PIXELS|macro|DMA2D_LOM_PIXELS
DECL|DMA2D_LayerCfgTypeDef|typedef|} DMA2D_LayerCfgTypeDef;
DECL|DMA2D_M2M_BLEND_BG|macro|DMA2D_M2M_BLEND_BG
DECL|DMA2D_M2M_BLEND_FG|macro|DMA2D_M2M_BLEND_FG
DECL|DMA2D_M2M_BLEND|macro|DMA2D_M2M_BLEND
DECL|DMA2D_M2M_PFC|macro|DMA2D_M2M_PFC
DECL|DMA2D_M2M|macro|DMA2D_M2M
DECL|DMA2D_MAX_LAYER|macro|DMA2D_MAX_LAYER
DECL|DMA2D_NO_MODIF_ALPHA|macro|DMA2D_NO_MODIF_ALPHA
DECL|DMA2D_OFFSET|macro|DMA2D_OFFSET
DECL|DMA2D_OUTPUT_ARGB1555|macro|DMA2D_OUTPUT_ARGB1555
DECL|DMA2D_OUTPUT_ARGB4444|macro|DMA2D_OUTPUT_ARGB4444
DECL|DMA2D_OUTPUT_ARGB8888|macro|DMA2D_OUTPUT_ARGB8888
DECL|DMA2D_OUTPUT_RGB565|macro|DMA2D_OUTPUT_RGB565
DECL|DMA2D_OUTPUT_RGB888|macro|DMA2D_OUTPUT_RGB888
DECL|DMA2D_PIXEL|macro|DMA2D_PIXEL
DECL|DMA2D_R2M|macro|DMA2D_R2M
DECL|DMA2D_RB_REGULAR|macro|DMA2D_RB_REGULAR
DECL|DMA2D_RB_SWAP|macro|DMA2D_RB_SWAP
DECL|DMA2D_REGULAR_ALPHA|macro|DMA2D_REGULAR_ALPHA
DECL|DMA2D_REPLACE_ALPHA|macro|DMA2D_REPLACE_ALPHA
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< DMA2D error code. */
DECL|Green|member|uint32_t Green; /*!< Configures the green value.
DECL|HAL_DMA2D_CLUTLOADINGCPLT_CB_ID|enumerator|HAL_DMA2D_CLUTLOADINGCPLT_CB_ID = 0x05U, /*!< DMA2D CLUT loading completion callback ID */
DECL|HAL_DMA2D_CallbackIDTypeDef|typedef|}HAL_DMA2D_CallbackIDTypeDef;
DECL|HAL_DMA2D_DisableCLUT|macro|HAL_DMA2D_DisableCLUT
DECL|HAL_DMA2D_ERROR_CAE|macro|HAL_DMA2D_ERROR_CAE
DECL|HAL_DMA2D_ERROR_CE|macro|HAL_DMA2D_ERROR_CE
DECL|HAL_DMA2D_ERROR_INVALID_CALLBACK|macro|HAL_DMA2D_ERROR_INVALID_CALLBACK
DECL|HAL_DMA2D_ERROR_NONE|macro|HAL_DMA2D_ERROR_NONE
DECL|HAL_DMA2D_ERROR_TE|macro|HAL_DMA2D_ERROR_TE
DECL|HAL_DMA2D_ERROR_TIMEOUT|macro|HAL_DMA2D_ERROR_TIMEOUT
DECL|HAL_DMA2D_LINEEVENT_CB_ID|enumerator|HAL_DMA2D_LINEEVENT_CB_ID = 0x04U, /*!< DMA2D line event callback ID */
DECL|HAL_DMA2D_MSPDEINIT_CB_ID|enumerator|HAL_DMA2D_MSPDEINIT_CB_ID = 0x01U, /*!< DMA2D MspDeInit callback ID */
DECL|HAL_DMA2D_MSPINIT_CB_ID|enumerator|HAL_DMA2D_MSPINIT_CB_ID = 0x00U, /*!< DMA2D MspInit callback ID */
DECL|HAL_DMA2D_STATE_BUSY|enumerator|HAL_DMA2D_STATE_BUSY = 0x02U, /*!< An internal process is ongoing */
DECL|HAL_DMA2D_STATE_ERROR|enumerator|HAL_DMA2D_STATE_ERROR = 0x04U, /*!< DMA2D state error */
DECL|HAL_DMA2D_STATE_READY|enumerator|HAL_DMA2D_STATE_READY = 0x01U, /*!< Peripheral Initialized and ready for use */
DECL|HAL_DMA2D_STATE_RESET|enumerator|HAL_DMA2D_STATE_RESET = 0x00U, /*!< DMA2D not yet initialized or disabled */
DECL|HAL_DMA2D_STATE_SUSPEND|enumerator|HAL_DMA2D_STATE_SUSPEND = 0x05U /*!< DMA2D process is suspended */
DECL|HAL_DMA2D_STATE_TIMEOUT|enumerator|HAL_DMA2D_STATE_TIMEOUT = 0x03U, /*!< Timeout state */
DECL|HAL_DMA2D_StateTypeDef|typedef|}HAL_DMA2D_StateTypeDef;
DECL|HAL_DMA2D_TRANSFERCOMPLETE_CB_ID|enumerator|HAL_DMA2D_TRANSFERCOMPLETE_CB_ID = 0x02U, /*!< DMA2D transfer complete callback ID */
DECL|HAL_DMA2D_TRANSFERERROR_CB_ID|enumerator|HAL_DMA2D_TRANSFERERROR_CB_ID = 0x03U, /*!< DMA2D transfer error callback ID */
DECL|IS_DMA2D_ALPHA_INVERTED|macro|IS_DMA2D_ALPHA_INVERTED
DECL|IS_DMA2D_ALPHA_MODE|macro|IS_DMA2D_ALPHA_MODE
DECL|IS_DMA2D_BYTES_SWAP|macro|IS_DMA2D_BYTES_SWAP
DECL|IS_DMA2D_CLUT_CM|macro|IS_DMA2D_CLUT_CM
DECL|IS_DMA2D_CLUT_SIZE|macro|IS_DMA2D_CLUT_SIZE
DECL|IS_DMA2D_CMODE|macro|IS_DMA2D_CMODE
DECL|IS_DMA2D_COLOR|macro|IS_DMA2D_COLOR
DECL|IS_DMA2D_GET_FLAG|macro|IS_DMA2D_GET_FLAG
DECL|IS_DMA2D_INPUT_COLOR_MODE|macro|IS_DMA2D_INPUT_COLOR_MODE
DECL|IS_DMA2D_IT|macro|IS_DMA2D_IT
DECL|IS_DMA2D_LAYER|macro|IS_DMA2D_LAYER
DECL|IS_DMA2D_LINEWATERMARK|macro|IS_DMA2D_LINEWATERMARK
DECL|IS_DMA2D_LINE|macro|IS_DMA2D_LINE
DECL|IS_DMA2D_LOM_MODE|macro|IS_DMA2D_LOM_MODE
DECL|IS_DMA2D_MODE|macro|IS_DMA2D_MODE
DECL|IS_DMA2D_MODE|macro|IS_DMA2D_MODE
DECL|IS_DMA2D_OFFSET|macro|IS_DMA2D_OFFSET
DECL|IS_DMA2D_PIXEL|macro|IS_DMA2D_PIXEL
DECL|IS_DMA2D_RB_SWAP|macro|IS_DMA2D_RB_SWAP
DECL|Init|member|DMA2D_InitTypeDef Init; /*!< DMA2D communication parameters. */
DECL|InputAlpha|member|uint32_t InputAlpha; /*!< Specifies the DMA2D foreground or background alpha value and color value in case of A8 or A4 color mode.
DECL|InputColorMode|member|uint32_t InputColorMode; /*!< Configures the DMA2D foreground or background color mode.
DECL|InputOffset|member|uint32_t InputOffset; /*!< Configures the DMA2D foreground or background offset.
DECL|Instance|member|DMA2D_TypeDef *Instance; /*!< DMA2D register base address. */
DECL|LayerCfg|member|DMA2D_LayerCfgTypeDef LayerCfg[MAX_DMA2D_LAYER]; /*!< DMA2D Layers parameters */
DECL|LineEventCallback|member|void (* LineEventCallback)( struct __DMA2D_HandleTypeDef * hdma2d); /*!< DMA2D line event callback. */
DECL|LineOffsetMode|member|uint32_t LineOffsetMode; /*!< Configures how is expressed the line offset for the foreground, background and output.
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< DMA2D lock. */
DECL|MAX_DMA2D_LAYER|macro|MAX_DMA2D_LAYER
DECL|Mode|member|uint32_t Mode; /*!< Configures the DMA2D transfer mode.
DECL|MspDeInitCallback|member|void (* MspDeInitCallback)( struct __DMA2D_HandleTypeDef * hdma2d); /*!< DMA2D Msp DeInit callback. */
DECL|MspInitCallback|member|void (* MspInitCallback)( struct __DMA2D_HandleTypeDef * hdma2d); /*!< DMA2D Msp Init callback. */
DECL|OutputOffset|member|uint32_t OutputOffset; /*!< Specifies the Offset value.
DECL|RedBlueSwap|member|uint32_t RedBlueSwap; /*!< Select regular mode (RGB or ARGB) or swap mode (BGR or ABGR)
DECL|RedBlueSwap|member|uint32_t RedBlueSwap; /*!< Select regular mode (RGB or ARGB) or swap mode (BGR or ABGR).
DECL|Red|member|uint32_t Red; /*!< Configures the red value.
DECL|STM32L4xx_HAL_DMA2D_H|macro|STM32L4xx_HAL_DMA2D_H
DECL|Size|member|uint32_t Size; /*!< Configures the DMA2D CLUT size.
DECL|State|member|__IO HAL_DMA2D_StateTypeDef State; /*!< DMA2D transfer state. */
DECL|XferCpltCallback|member|void (* XferCpltCallback)(struct __DMA2D_HandleTypeDef * hdma2d); /*!< DMA2D transfer complete callback. */
DECL|XferErrorCallback|member|void (* XferErrorCallback)(struct __DMA2D_HandleTypeDef * hdma2d); /*!< DMA2D transfer error callback. */
DECL|__DMA2D_HandleTypeDef|struct|typedef struct __DMA2D_HandleTypeDef
DECL|__HAL_DMA2D_CLEAR_FLAG|macro|__HAL_DMA2D_CLEAR_FLAG
DECL|__HAL_DMA2D_DISABLE_IT|macro|__HAL_DMA2D_DISABLE_IT
DECL|__HAL_DMA2D_ENABLE_IT|macro|__HAL_DMA2D_ENABLE_IT
DECL|__HAL_DMA2D_ENABLE|macro|__HAL_DMA2D_ENABLE
DECL|__HAL_DMA2D_GET_FLAG|macro|__HAL_DMA2D_GET_FLAG
DECL|__HAL_DMA2D_GET_IT_SOURCE|macro|__HAL_DMA2D_GET_IT_SOURCE
DECL|__HAL_DMA2D_RESET_HANDLE_STATE|macro|__HAL_DMA2D_RESET_HANDLE_STATE
DECL|__HAL_DMA2D_RESET_HANDLE_STATE|macro|__HAL_DMA2D_RESET_HANDLE_STATE
DECL|pCLUT|member|uint32_t *pCLUT; /*!< Configures the DMA2D CLUT memory address.*/
DECL|pDMA2D_CallbackTypeDef|typedef|typedef void (*pDMA2D_CallbackTypeDef)(DMA2D_HandleTypeDef * hdma2d); /*!< Pointer to a DMA2D common callback function */
