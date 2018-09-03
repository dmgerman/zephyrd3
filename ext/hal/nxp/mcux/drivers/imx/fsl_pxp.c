DECL|AS_CLRKEYHIGH|macro|AS_CLRKEYHIGH
DECL|AS_CLRKEYLOW|macro|AS_CLRKEYLOW
DECL|FSL_COMPONENT_ID|macro|FSL_COMPONENT_ID
DECL|PS_CLRKEYHIGH|macro|PS_CLRKEYHIGH
DECL|PS_CLRKEYLOW|macro|PS_CLRKEYLOW
DECL|PXP_CSC2_COEF_FRAC_WIDTH|macro|PXP_CSC2_COEF_FRAC_WIDTH
DECL|PXP_CSC2_COEF_INT_WIDTH|macro|PXP_CSC2_COEF_INT_WIDTH
DECL|PXP_ConvertFloat|function|static uint32_t PXP_ConvertFloat(float floatValue, uint8_t intBits, uint8_t fracBits)
DECL|PXP_Deinit|function|void PXP_Deinit(PXP_Type *base)
DECL|PXP_EnableDither|function|void PXP_EnableDither(PXP_Type *base, bool enable)
DECL|PXP_GetInstance|function|static uint32_t PXP_GetInstance(PXP_Type *base)
DECL|PXP_GetScalerParam|function|static void PXP_GetScalerParam(uint16_t inputDimension, uint16_t outputDimension, uint8_t *dec, uint32_t *scale)
DECL|PXP_Init|function|void PXP_Init(PXP_Type *base)
DECL|PXP_LoadLutTable|function|status_t PXP_LoadLutTable( PXP_Type *base, pxp_lut_lookup_mode_t lookupMode, uint32_t bytesNum, uint32_t memAddr, uint16_t lutStartAddr)
DECL|PXP_Reset|function|void PXP_Reset(PXP_Type *base)
DECL|PXP_SetAlphaSurfaceBlendConfig|function|void PXP_SetAlphaSurfaceBlendConfig(PXP_Type *base, const pxp_as_blend_config_t *config)
DECL|PXP_SetAlphaSurfaceBufferConfig|function|void PXP_SetAlphaSurfaceBufferConfig(PXP_Type *base, const pxp_as_buffer_config_t *config)
DECL|PXP_SetAlphaSurfaceOverlayColorKey|function|void PXP_SetAlphaSurfaceOverlayColorKey(PXP_Type *base, uint32_t colorKeyLow, uint32_t colorKeyHigh)
DECL|PXP_SetAlphaSurfacePosition|function|void PXP_SetAlphaSurfacePosition( PXP_Type *base, uint16_t upperLeftX, uint16_t upperLeftY, uint16_t lowerRightX, uint16_t lowerRightY)
DECL|PXP_SetCsc1Mode|function|void PXP_SetCsc1Mode(PXP_Type *base, pxp_csc1_mode_t mode)
DECL|PXP_SetCsc2Config|function|void PXP_SetCsc2Config(PXP_Type *base, const pxp_csc2_config_t *config)
DECL|PXP_SetDitherFinalLutData|function|void PXP_SetDitherFinalLutData(PXP_Type *base, const pxp_dither_final_lut_data_t *data)
DECL|PXP_SetInternalRamData|function|void PXP_SetInternalRamData(PXP_Type *base, pxp_ram_t ram, uint32_t bytesNum, uint8_t *data, uint16_t memStartAddr)
DECL|PXP_SetLutConfig|function|void PXP_SetLutConfig(PXP_Type *base, const pxp_lut_config_t *config)
DECL|PXP_SetOutputBufferConfig|function|void PXP_SetOutputBufferConfig(PXP_Type *base, const pxp_output_buffer_config_t *config)
DECL|PXP_SetProcessSurfaceBufferConfig|function|void PXP_SetProcessSurfaceBufferConfig(PXP_Type *base, const pxp_ps_buffer_config_t *config)
DECL|PXP_SetProcessSurfaceColorKey|function|void PXP_SetProcessSurfaceColorKey(PXP_Type *base, uint32_t colorKeyLow, uint32_t colorKeyHigh)
DECL|PXP_SetProcessSurfacePosition|function|void PXP_SetProcessSurfacePosition( PXP_Type *base, uint16_t upperLeftX, uint16_t upperLeftY, uint16_t lowerRightX, uint16_t lowerRightY)
DECL|PXP_SetProcessSurfaceScaler|function|void PXP_SetProcessSurfaceScaler( PXP_Type *base, uint16_t inputWidth, uint16_t inputHeight, uint16_t outputWidth, uint16_t outputHeight)
DECL|_u32_f32|union|typedef union _u32_f32
DECL|f32|member|float f32;
DECL|s_pxpBases|variable|s_pxpBases
DECL|s_pxpClocks|variable|s_pxpClocks
DECL|u32_f32_t|typedef|} u32_f32_t;
DECL|u32|member|uint32_t u32;
