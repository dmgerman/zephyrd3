DECL|AccumulatedActiveH|member|uint32_t AccumulatedActiveH; /*!< configures the accumulated active height.
DECL|AccumulatedActiveW|member|uint32_t AccumulatedActiveW; /*!< configures the accumulated active width.
DECL|AccumulatedHBP|member|uint32_t AccumulatedHBP; /*!< configures the accumulated horizontal back porch width.
DECL|AccumulatedVBP|member|uint32_t AccumulatedVBP; /*!< configures the accumulated vertical back porch height.
DECL|Alpha0|member|uint32_t Alpha0; /*!< Configures the default alpha value.
DECL|Alpha|member|uint32_t Alpha; /*!< Specifies the constant alpha used for blending.
DECL|Backcolor|member|LTDC_ColorTypeDef Backcolor; /*!< Configures the background color. */
DECL|Backcolor|member|LTDC_ColorTypeDef Backcolor; /*!< Configures the layer background color. */
DECL|BlendingFactor1|member|uint32_t BlendingFactor1; /*!< Select the blending factor 1.
DECL|BlendingFactor2|member|uint32_t BlendingFactor2; /*!< Select the blending factor 2.
DECL|Blue|member|uint8_t Blue; /*!< Configures the blue value.
DECL|DEPolarity|member|uint32_t DEPolarity; /*!< configures the data enable polarity.
DECL|ErrorCallback|member|void (* ErrorCallback) (struct __LTDC_HandleTypeDef *hltdc); /*!< LTDC Error Callback */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< LTDC Error code */
DECL|FBStartAdress|member|uint32_t FBStartAdress; /*!< Configures the color frame buffer address */
DECL|Green|member|uint8_t Green; /*!< Configures the green value.
DECL|HAL_LTDC_CallbackIDTypeDef|typedef|}HAL_LTDC_CallbackIDTypeDef;
DECL|HAL_LTDC_ERROR_CB_ID|enumerator|HAL_LTDC_ERROR_CB_ID = 0x04U /*!< LTDC Error Callback ID */
DECL|HAL_LTDC_ERROR_FU|macro|HAL_LTDC_ERROR_FU
DECL|HAL_LTDC_ERROR_INVALID_CALLBACK|macro|HAL_LTDC_ERROR_INVALID_CALLBACK
DECL|HAL_LTDC_ERROR_NONE|macro|HAL_LTDC_ERROR_NONE
DECL|HAL_LTDC_ERROR_TE|macro|HAL_LTDC_ERROR_TE
DECL|HAL_LTDC_ERROR_TIMEOUT|macro|HAL_LTDC_ERROR_TIMEOUT
DECL|HAL_LTDC_LINE_EVENT_CB_ID|enumerator|HAL_LTDC_LINE_EVENT_CB_ID = 0x02U, /*!< LTDC Line Event Callback ID */
DECL|HAL_LTDC_MSPDEINIT_CB_ID|enumerator|HAL_LTDC_MSPDEINIT_CB_ID = 0x01U, /*!< LTDC MspDeInit callback ID */
DECL|HAL_LTDC_MSPINIT_CB_ID|enumerator|HAL_LTDC_MSPINIT_CB_ID = 0x00U, /*!< LTDC MspInit callback ID */
DECL|HAL_LTDC_RELOAD_EVENT_CB_ID|enumerator|HAL_LTDC_RELOAD_EVENT_CB_ID = 0x03U, /*!< LTDC Reload Callback ID */
DECL|HAL_LTDC_STATE_BUSY|enumerator|HAL_LTDC_STATE_BUSY = 0x02U, /*!< LTDC internal process is ongoing */
DECL|HAL_LTDC_STATE_ERROR|enumerator|HAL_LTDC_STATE_ERROR = 0x04U /*!< LTDC state error */
DECL|HAL_LTDC_STATE_READY|enumerator|HAL_LTDC_STATE_READY = 0x01U, /*!< LTDC initialized and ready for use */
DECL|HAL_LTDC_STATE_RESET|enumerator|HAL_LTDC_STATE_RESET = 0x00U, /*!< LTDC not yet initialized or disabled */
DECL|HAL_LTDC_STATE_TIMEOUT|enumerator|HAL_LTDC_STATE_TIMEOUT = 0x03U, /*!< LTDC Timeout state */
DECL|HAL_LTDC_StateTypeDef|typedef|}HAL_LTDC_StateTypeDef;
DECL|HSPolarity|member|uint32_t HSPolarity; /*!< configures the horizontal synchronization polarity.
DECL|HorizontalSync|member|uint32_t HorizontalSync; /*!< configures the number of Horizontal synchronization width.
DECL|IS_LTDC_AAH|macro|IS_LTDC_AAH
DECL|IS_LTDC_AAW|macro|IS_LTDC_AAW
DECL|IS_LTDC_AHBP|macro|IS_LTDC_AHBP
DECL|IS_LTDC_ALPHA|macro|IS_LTDC_ALPHA
DECL|IS_LTDC_AVBP|macro|IS_LTDC_AVBP
DECL|IS_LTDC_BLENDING_FACTOR1|macro|IS_LTDC_BLENDING_FACTOR1
DECL|IS_LTDC_BLENDING_FACTOR2|macro|IS_LTDC_BLENDING_FACTOR2
DECL|IS_LTDC_BLUEVALUE|macro|IS_LTDC_BLUEVALUE
DECL|IS_LTDC_CFBLL|macro|IS_LTDC_CFBLL
DECL|IS_LTDC_CFBLNBR|macro|IS_LTDC_CFBLNBR
DECL|IS_LTDC_CFBP|macro|IS_LTDC_CFBP
DECL|IS_LTDC_DEPOL|macro|IS_LTDC_DEPOL
DECL|IS_LTDC_GREENVALUE|macro|IS_LTDC_GREENVALUE
DECL|IS_LTDC_HCONFIGSP|macro|IS_LTDC_HCONFIGSP
DECL|IS_LTDC_HCONFIGST|macro|IS_LTDC_HCONFIGST
DECL|IS_LTDC_HSPOL|macro|IS_LTDC_HSPOL
DECL|IS_LTDC_HSYNC|macro|IS_LTDC_HSYNC
DECL|IS_LTDC_LAYER|macro|IS_LTDC_LAYER
DECL|IS_LTDC_LIPOS|macro|IS_LTDC_LIPOS
DECL|IS_LTDC_PCPOL|macro|IS_LTDC_PCPOL
DECL|IS_LTDC_PIXEL_FORMAT|macro|IS_LTDC_PIXEL_FORMAT
DECL|IS_LTDC_REDVALUE|macro|IS_LTDC_REDVALUE
DECL|IS_LTDC_RELOAD|macro|IS_LTDC_RELOAD
DECL|IS_LTDC_TOTALH|macro|IS_LTDC_TOTALH
DECL|IS_LTDC_TOTALW|macro|IS_LTDC_TOTALW
DECL|IS_LTDC_VCONFIGSP|macro|IS_LTDC_VCONFIGSP
DECL|IS_LTDC_VCONFIGST|macro|IS_LTDC_VCONFIGST
DECL|IS_LTDC_VSPOL|macro|IS_LTDC_VSPOL
DECL|IS_LTDC_VSYNC|macro|IS_LTDC_VSYNC
DECL|ImageHeight|member|uint32_t ImageHeight; /*!< Specifies the number of line in frame buffer.
DECL|ImageWidth|member|uint32_t ImageWidth; /*!< Configures the color frame buffer line length.
DECL|Init|member|LTDC_InitTypeDef Init; /*!< LTDC parameters */
DECL|Instance|member|LTDC_TypeDef *Instance; /*!< LTDC Register base address */
DECL|LTDC_ALPHA|macro|LTDC_ALPHA
DECL|LTDC_BLENDING_FACTOR1_CA|macro|LTDC_BLENDING_FACTOR1_CA
DECL|LTDC_BLENDING_FACTOR1_PAxCA|macro|LTDC_BLENDING_FACTOR1_PAxCA
DECL|LTDC_BLENDING_FACTOR2_CA|macro|LTDC_BLENDING_FACTOR2_CA
DECL|LTDC_BLENDING_FACTOR2_PAxCA|macro|LTDC_BLENDING_FACTOR2_PAxCA
DECL|LTDC_COLOR_FRAME_BUFFER|macro|LTDC_COLOR_FRAME_BUFFER
DECL|LTDC_COLOR|macro|LTDC_COLOR
DECL|LTDC_ColorTypeDef|typedef|} LTDC_ColorTypeDef;
DECL|LTDC_DEPOLARITY_AH|macro|LTDC_DEPOLARITY_AH
DECL|LTDC_DEPOLARITY_AL|macro|LTDC_DEPOLARITY_AL
DECL|LTDC_FLAG_FU|macro|LTDC_FLAG_FU
DECL|LTDC_FLAG_LI|macro|LTDC_FLAG_LI
DECL|LTDC_FLAG_RR|macro|LTDC_FLAG_RR
DECL|LTDC_FLAG_TE|macro|LTDC_FLAG_TE
DECL|LTDC_HORIZONTALSYNC|macro|LTDC_HORIZONTALSYNC
DECL|LTDC_HSPOLARITY_AH|macro|LTDC_HSPOLARITY_AH
DECL|LTDC_HSPOLARITY_AL|macro|LTDC_HSPOLARITY_AL
DECL|LTDC_HandleTypeDef|typedef|} LTDC_HandleTypeDef;
DECL|LTDC_IT_FU|macro|LTDC_IT_FU
DECL|LTDC_IT_LI|macro|LTDC_IT_LI
DECL|LTDC_IT_RR|macro|LTDC_IT_RR
DECL|LTDC_IT_TE|macro|LTDC_IT_TE
DECL|LTDC_InitTypeDef|typedef|} LTDC_InitTypeDef;
DECL|LTDC_LAYER_1|macro|LTDC_LAYER_1
DECL|LTDC_LAYER_2|macro|LTDC_LAYER_2
DECL|LTDC_LAYER|macro|LTDC_LAYER
DECL|LTDC_LINE_NUMBER|macro|LTDC_LINE_NUMBER
DECL|LTDC_LayerCfgTypeDef|typedef|} LTDC_LayerCfgTypeDef;
DECL|LTDC_PCPOLARITY_IIPC|macro|LTDC_PCPOLARITY_IIPC
DECL|LTDC_PCPOLARITY_IPC|macro|LTDC_PCPOLARITY_IPC
DECL|LTDC_PIXEL_FORMAT_AL44|macro|LTDC_PIXEL_FORMAT_AL44
DECL|LTDC_PIXEL_FORMAT_AL88|macro|LTDC_PIXEL_FORMAT_AL88
DECL|LTDC_PIXEL_FORMAT_ARGB1555|macro|LTDC_PIXEL_FORMAT_ARGB1555
DECL|LTDC_PIXEL_FORMAT_ARGB4444|macro|LTDC_PIXEL_FORMAT_ARGB4444
DECL|LTDC_PIXEL_FORMAT_ARGB8888|macro|LTDC_PIXEL_FORMAT_ARGB8888
DECL|LTDC_PIXEL_FORMAT_L8|macro|LTDC_PIXEL_FORMAT_L8
DECL|LTDC_PIXEL_FORMAT_RGB565|macro|LTDC_PIXEL_FORMAT_RGB565
DECL|LTDC_PIXEL_FORMAT_RGB888|macro|LTDC_PIXEL_FORMAT_RGB888
DECL|LTDC_RELOAD_IMMEDIATE|macro|LTDC_RELOAD_IMMEDIATE
DECL|LTDC_RELOAD_VERTICAL_BLANKING|macro|LTDC_RELOAD_VERTICAL_BLANKING
DECL|LTDC_STARTPOSITION|macro|LTDC_STARTPOSITION
DECL|LTDC_STOPPOSITION|macro|LTDC_STOPPOSITION
DECL|LTDC_VERTICALSYNC|macro|LTDC_VERTICALSYNC
DECL|LTDC_VSPOLARITY_AH|macro|LTDC_VSPOLARITY_AH
DECL|LTDC_VSPOLARITY_AL|macro|LTDC_VSPOLARITY_AL
DECL|LayerCfg|member|LTDC_LayerCfgTypeDef LayerCfg[MAX_LAYER]; /*!< LTDC Layers parameters */
DECL|LineEventCallback|member|void (* LineEventCallback) (struct __LTDC_HandleTypeDef *hltdc); /*!< LTDC Line Event Callback */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< LTDC Lock */
DECL|MAX_LAYER|macro|MAX_LAYER
DECL|MspDeInitCallback|member|void (* MspDeInitCallback) (struct __LTDC_HandleTypeDef *hltdc); /*!< LTDC Msp DeInit callback */
DECL|MspInitCallback|member|void (* MspInitCallback) (struct __LTDC_HandleTypeDef *hltdc); /*!< LTDC Msp Init callback */
DECL|PCPolarity|member|uint32_t PCPolarity; /*!< configures the pixel clock polarity.
DECL|PixelFormat|member|uint32_t PixelFormat; /*!< Specifies the pixel format.
DECL|Red|member|uint8_t Red; /*!< Configures the red value.
DECL|ReloadEventCallback|member|void (* ReloadEventCallback)(struct __LTDC_HandleTypeDef *hltdc); /*!< LTDC Reload Event Callback */
DECL|Reserved|member|uint8_t Reserved; /*!< Reserved 0xFF */
DECL|STM32L4xx_HAL_LTDC_H|macro|STM32L4xx_HAL_LTDC_H
DECL|State|member|__IO HAL_LTDC_StateTypeDef State; /*!< LTDC state */
DECL|TotalHeigh|member|uint32_t TotalHeigh; /*!< configures the total height.
DECL|TotalWidth|member|uint32_t TotalWidth; /*!< configures the total width.
DECL|VSPolarity|member|uint32_t VSPolarity; /*!< configures the vertical synchronization polarity.
DECL|VerticalSync|member|uint32_t VerticalSync; /*!< configures the number of Vertical synchronization height.
DECL|WindowX0|member|uint32_t WindowX0; /*!< Configures the Window Horizontal Start Position.
DECL|WindowX1|member|uint32_t WindowX1; /*!< Configures the Window Horizontal Stop Position.
DECL|WindowY0|member|uint32_t WindowY0; /*!< Configures the Window vertical Start Position.
DECL|WindowY1|member|uint32_t WindowY1; /*!< Configures the Window vertical Stop Position.
DECL|__HAL_LTDC_CLEAR_FLAG|macro|__HAL_LTDC_CLEAR_FLAG
DECL|__HAL_LTDC_DISABLE_IT|macro|__HAL_LTDC_DISABLE_IT
DECL|__HAL_LTDC_DISABLE|macro|__HAL_LTDC_DISABLE
DECL|__HAL_LTDC_ENABLE_IT|macro|__HAL_LTDC_ENABLE_IT
DECL|__HAL_LTDC_ENABLE|macro|__HAL_LTDC_ENABLE
DECL|__HAL_LTDC_GET_FLAG|macro|__HAL_LTDC_GET_FLAG
DECL|__HAL_LTDC_GET_IT_SOURCE|macro|__HAL_LTDC_GET_IT_SOURCE
DECL|__HAL_LTDC_LAYER_DISABLE|macro|__HAL_LTDC_LAYER_DISABLE
DECL|__HAL_LTDC_LAYER_ENABLE|macro|__HAL_LTDC_LAYER_ENABLE
DECL|__HAL_LTDC_RELOAD_IMMEDIATE_CONFIG|macro|__HAL_LTDC_RELOAD_IMMEDIATE_CONFIG
DECL|__HAL_LTDC_RESET_HANDLE_STATE|macro|__HAL_LTDC_RESET_HANDLE_STATE
DECL|__HAL_LTDC_RESET_HANDLE_STATE|macro|__HAL_LTDC_RESET_HANDLE_STATE
DECL|__HAL_LTDC_VERTICAL_BLANKING_RELOAD_CONFIG|macro|__HAL_LTDC_VERTICAL_BLANKING_RELOAD_CONFIG
DECL|__LTDC_HandleTypeDef|struct|typedef struct __LTDC_HandleTypeDef
DECL|pLTDC_CallbackTypeDef|typedef|typedef void (*pLTDC_CallbackTypeDef)(LTDC_HandleTypeDef * hltdc); /*!< pointer to an LTDC callback function */
