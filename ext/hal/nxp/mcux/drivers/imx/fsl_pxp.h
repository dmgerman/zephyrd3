DECL|A1|member|float A1; /*!< A1. */
DECL|A2|member|float A2; /*!< A2. */
DECL|A3|member|float A3; /*!< A3. */
DECL|B1|member|float B1; /*!< B1. */
DECL|B2|member|float B2; /*!< B2. */
DECL|B3|member|float B3; /*!< B3. */
DECL|C1|member|float C1; /*!< C1. */
DECL|C2|member|float C2; /*!< C2. */
DECL|C3|member|float C3; /*!< C3. */
DECL|D1|member|int16_t D1; /*!< D1. */
DECL|D2|member|int16_t D2; /*!< D2. */
DECL|D3|member|int16_t D3; /*!< D3. */
DECL|FSL_PXP_DRIVER_VERSION|macro|FSL_PXP_DRIVER_VERSION
DECL|PXP_AS_CTRL_ALPHA0_INVERT_MASK|macro|PXP_AS_CTRL_ALPHA0_INVERT_MASK
DECL|PXP_AS_CTRL_ALPHA0_INVERT_MASK|macro|PXP_AS_CTRL_ALPHA0_INVERT_MASK
DECL|PXP_CancelNextCommand|function|static inline void PXP_CancelNextCommand(PXP_Type *base)
DECL|PXP_ClearStatusFlags|function|static inline void PXP_ClearStatusFlags(PXP_Type *base, uint32_t statusMask)
DECL|PXP_DisableInterrupts|function|static inline void PXP_DisableInterrupts(PXP_Type *base, uint32_t mask)
DECL|PXP_EnableAlphaSurfaceOverlayColorKey|function|static inline void PXP_EnableAlphaSurfaceOverlayColorKey(PXP_Type *base, bool enable)
DECL|PXP_EnableContinousRun|function|static inline void PXP_EnableContinousRun(PXP_Type *base, bool enable)
DECL|PXP_EnableCsc1|function|static inline void PXP_EnableCsc1(PXP_Type *base, bool enable)
DECL|PXP_EnableCsc2|function|static inline void PXP_EnableCsc2(PXP_Type *base, bool enable)
DECL|PXP_EnableInterrupts|function|static inline void PXP_EnableInterrupts(PXP_Type *base, uint32_t mask)
DECL|PXP_EnableLcdHandShake|function|static inline void PXP_EnableLcdHandShake(PXP_Type *base, bool enable)
DECL|PXP_EnableLut|function|static inline void PXP_EnableLut(PXP_Type *base, bool enable)
DECL|PXP_EnableOverWrittenAlpha|function|static inline void PXP_EnableOverWrittenAlpha(PXP_Type *base, bool enable)
DECL|PXP_GetAxiErrorId|function|static inline uint8_t PXP_GetAxiErrorId(PXP_Type *base, uint8_t axiIndex)
DECL|PXP_GetStatusFlags|function|static inline uint32_t PXP_GetStatusFlags(PXP_Type *base)
DECL|PXP_INTERNAL_RAM_LUT_BYTE|macro|PXP_INTERNAL_RAM_LUT_BYTE
DECL|PXP_IsNextCommandPending|function|static inline bool PXP_IsNextCommandPending(PXP_Type *base)
DECL|PXP_LUT_TABLE_BYTE|macro|PXP_LUT_TABLE_BYTE
DECL|PXP_SHARE_ROTATE|macro|PXP_SHARE_ROTATE
DECL|PXP_SHARE_ROTATE|macro|PXP_SHARE_ROTATE
DECL|PXP_STAT_AXI_READ_ERROR_0_MASK|macro|PXP_STAT_AXI_READ_ERROR_0_MASK
DECL|PXP_STAT_AXI_WRITE_ERROR_0_MASK|macro|PXP_STAT_AXI_WRITE_ERROR_0_MASK
DECL|PXP_STAT_IRQ0_MASK|macro|PXP_STAT_IRQ0_MASK
DECL|PXP_Select8kLutBank|function|static inline void PXP_Select8kLutBank(PXP_Type *base, pxp_lut_8k_bank_t bank)
DECL|PXP_SetDitherConfig|function|static inline void PXP_SetDitherConfig(PXP_Type *base, const pxp_dither_config_t *config)
DECL|PXP_SetNextCommand|function|static inline void PXP_SetNextCommand(PXP_Type *base, void *commandAddr)
DECL|PXP_SetOverwrittenAlphaValue|function|static inline void PXP_SetOverwrittenAlphaValue(PXP_Type *base, uint8_t alpha)
DECL|PXP_SetProcessBlockSize|function|static inline void PXP_SetProcessBlockSize(PXP_Type *base, pxp_block_size_t size)
DECL|PXP_SetProcessSurfaceBackGroundColor|function|static inline void PXP_SetProcessSurfaceBackGroundColor(PXP_Type *base, uint32_t backGroundColor)
DECL|PXP_SetRotateConfig|function|static inline void PXP_SetRotateConfig(PXP_Type *base, pxp_rotate_position_t position, pxp_rotate_degree_t degree, pxp_flip_mode_t flipMode)
DECL|PXP_Start|function|static inline void PXP_Start(PXP_Type *base)
DECL|_FSL_PXP_H_|macro|_FSL_PXP_H_
DECL|_pxp_alpha_mode|enum|typedef enum _pxp_alpha_mode
DECL|_pxp_as_blend_config|struct|typedef struct _pxp_as_blend_config
DECL|_pxp_as_buffer_config|struct|typedef struct _pxp_as_buffer_config
DECL|_pxp_as_pixel_format|enum|typedef enum _pxp_as_pixel_format
DECL|_pxp_block_size|enum|typedef enum _pxp_block_size
DECL|_pxp_csc1_mode|enum|typedef enum _pxp_csc1_mode
DECL|_pxp_csc2_config|struct|typedef struct _pxp_csc2_config
DECL|_pxp_csc2_mode|enum|typedef enum _pxp_csc2_mode
DECL|_pxp_dither_config|struct|typedef struct _pxp_dither_config
DECL|_pxp_dither_final_lut_data|struct|typedef struct _pxp_dither_final_lut_data
DECL|_pxp_dither_lut_mode|enum|enum _pxp_dither_lut_mode
DECL|_pxp_dither_matrix_size|enum|enum _pxp_dither_matrix_size
DECL|_pxp_dither_mode|enum|enum _pxp_dither_mode
DECL|_pxp_flags|enum|enum _pxp_flags
DECL|_pxp_flip_mode|enum|typedef enum _pxp_flip_mode
DECL|_pxp_interlaced_output_mode|enum|typedef enum _pxp_interlaced_output_mode
DECL|_pxp_interrupt_enable|enum|enum _pxp_interrupt_enable
DECL|_pxp_lut_8k_bank|enum|typedef enum _pxp_lut_8k_bank
DECL|_pxp_lut_config|struct|typedef struct _pxp_lut_config
DECL|_pxp_lut_lookup_mode|enum|typedef enum _pxp_lut_lookup_mode
DECL|_pxp_lut_out_mode|enum|typedef enum _pxp_lut_out_mode
DECL|_pxp_output_buffer_config|struct|typedef struct _pxp_output_buffer_config
DECL|_pxp_output_pixel_format|enum|typedef enum _pxp_output_pixel_format
DECL|_pxp_ps_buffer_config|struct|typedef struct _pxp_ps_buffer_config
DECL|_pxp_ps_pixel_format|enum|typedef enum _pxp_ps_pixel_format
DECL|_pxp_ram|enum|typedef enum _pxp_ram
DECL|_pxp_rop_mode|enum|typedef enum _pxp_rop_mode
DECL|_pxp_rotate_degree|enum|typedef enum _pxp_rotate_degree
DECL|_pxp_rotate_position|enum|typedef enum _pxp_rotate_position
DECL|alphaMode|member|pxp_alpha_mode_t alphaMode; /*!< Alpha mode. */
DECL|alpha|member|uint8_t alpha; /*!< User defined alpha value, only used when @ref alphaMode is @ref kPXP_AlphaOverride or @ref
DECL|buffer0Addr|member|uint32_t buffer0Addr; /*!< Output buffer 0 address. */
DECL|buffer1Addr|member|uint32_t buffer1Addr; /*!< Output buffer 1 address, used for UV data in YUV 2-plane mode, or
DECL|bufferAddrU|member|uint32_t bufferAddrU; /*!< Input buffer address for the second panel. */
DECL|bufferAddrV|member|uint32_t bufferAddrV; /*!< Input buffer address for the third panel. */
DECL|bufferAddr|member|uint32_t bufferAddr; /*!< Input buffer address for the first panel. */
DECL|bufferAddr|member|uint32_t bufferAddr; /*!< Input buffer address. */
DECL|cfaValue|member|uint32_t cfaValue; /*!< The CFA value used when look up mode is @ref kPXP_LutOutRGBW4444CFA. */
DECL|data_11_8|member|uint32_t data_11_8; /*!< Data 11 to data 8. Data 8 is the least significant byte. */
DECL|data_15_12|member|uint32_t data_15_12; /*!< Data 15 to data 12. Data 12 is the least significant byte. */
DECL|data_3_0|member|uint32_t data_3_0; /*!< Data 3 to data 0. Data 0 is the least significant byte. */
DECL|data_7_4|member|uint32_t data_7_4; /*!< Data 7 to data 4. Data 4 is the least significant byte. */
DECL|ditherMode0|member|uint32_t ditherMode0 : 3; /*!< Dither mode for dither engine 0. See @ref _pxp_dither_mode. */
DECL|ditherMode1|member|uint32_t ditherMode1 : 3; /*!< Dither mode for dither engine 1. See @ref _pxp_dither_mode. */
DECL|ditherMode2|member|uint32_t ditherMode2 : 3; /*!< Dither mode for dither engine 2. See @ref _pxp_dither_mode. */
DECL|enableDither0|member|uint32_t enableDither0 : 1; /*!< Enable dither engine 0 or not, set 1 to enable, 0 to disable. */
DECL|enableDither1|member|uint32_t enableDither1 : 1; /*!< Enable dither engine 1 or not, set 1 to enable, 0 to disable. */
DECL|enableDither2|member|uint32_t enableDither2 : 1; /*!< Enable dither engine 2 or not, set 1 to enable, 0 to disable. */
DECL|enableFinalLut|member|uint32_t enableFinalLut : 1; /*!< Enable the final LUT, set 1 to enable, 0 to disable. */
DECL|height|member|uint16_t height; /*!< How many lines in output buffer. */
DECL|idxMatrixSize0|member|uint32_t idxMatrixSize0 : 2; /*!< Size of index matrix used for dither for dither engine 0, see @ref
DECL|idxMatrixSize1|member|uint32_t idxMatrixSize1 : 2; /*!< Size of index matrix used for dither for dither engine 1, see @ref
DECL|idxMatrixSize2|member|uint32_t idxMatrixSize2 : 2; /*!< Size of index matrix used for dither for dither engine 2, see @ref
DECL|interlacedMode|member|pxp_interlaced_output_mode_t interlacedMode; /*!< Interlaced output mode. */
DECL|invertAlpha|member|bool invertAlpha; /*!< Set true to invert the alpha. */
DECL|kPXP_AlphaEmbedded|enumerator|kPXP_AlphaEmbedded, /*!< The alpha surface pixel alpha value will be used for blend. */
DECL|kPXP_AlphaMultiply|enumerator|kPXP_AlphaMultiply, /*!< The alpha surface pixel alpha value scaled the user defined
DECL|kPXP_AlphaOverride|enumerator|kPXP_AlphaOverride, /*!< The user defined alpha value will be used for blend directly. */
DECL|kPXP_AlphaRop|enumerator|kPXP_AlphaRop /*!< Raster operation. */
DECL|kPXP_AsPixelFormatARGB1555|enumerator|kPXP_AsPixelFormatARGB1555 = 0x8, /*!< 16-bit pixels with alpha. */
DECL|kPXP_AsPixelFormatARGB4444|enumerator|kPXP_AsPixelFormatARGB4444 = 0x9, /*!< 16-bit pixels with alpha. */
DECL|kPXP_AsPixelFormatARGB8888|enumerator|kPXP_AsPixelFormatARGB8888 = 0x0, /*!< 32-bit pixels with alpha. */
DECL|kPXP_AsPixelFormatRGB444|enumerator|kPXP_AsPixelFormatRGB444 = 0xD, /*!< 16-bit pixels without alpha. */
DECL|kPXP_AsPixelFormatRGB555|enumerator|kPXP_AsPixelFormatRGB555 = 0xC, /*!< 16-bit pixels without alpha. */
DECL|kPXP_AsPixelFormatRGB565|enumerator|kPXP_AsPixelFormatRGB565 = 0xE, /*!< 16-bit pixels without alpha. */
DECL|kPXP_AsPixelFormatRGB888|enumerator|kPXP_AsPixelFormatRGB888 = 0x4, /*!< 32-bit pixels without alpha (unpacked 24-bit format) */
DECL|kPXP_Axi0ReadErrorFlag|enumerator|kPXP_Axi0ReadErrorFlag = PXP_STAT_AXI_READ_ERROR_0_MASK, /*!< PXP encountered an AXI read error
DECL|kPXP_Axi0WriteErrorFlag|enumerator|kPXP_Axi0WriteErrorFlag = PXP_STAT_AXI_WRITE_ERROR_0_MASK, /*!< PXP encountered an AXI write error
DECL|kPXP_Axi1ReadErrorFlag|enumerator|kPXP_Axi1ReadErrorFlag = PXP_STAT_AXI_READ_ERROR_1_MASK, /*!< PXP encountered an AXI read error
DECL|kPXP_Axi1WriteErrorFlag|enumerator|kPXP_Axi1WriteErrorFlag = PXP_STAT_AXI_WRITE_ERROR_1_MASK, /*!< PXP encountered an AXI write error
DECL|kPXP_BlockSize16|enumerator|kPXP_BlockSize16, /*!< Process 16x16 pixel blocks. */
DECL|kPXP_BlockSize8|enumerator|kPXP_BlockSize8 = 0U, /*!< Process 8x8 pixel blocks. */
DECL|kPXP_CommandLoadFlag|enumerator|kPXP_CommandLoadFlag = PXP_STAT_NEXT_IRQ_MASK, /*!< The command set by @ref PXP_SetNextCommand
DECL|kPXP_CommandLoadInterruptEnable|enumerator|kPXP_CommandLoadInterruptEnable = PXP_CTRL_NEXT_IRQ_ENABLE_MASK, /*!< Interrupt to show that the command set
DECL|kPXP_CompleteFlag|enumerator|kPXP_CompleteFlag = PXP_STAT_IRQ0_MASK, /*!< PXP process completed. */
DECL|kPXP_CompleteInterruptEnable|enumerator|kPXP_CompleteInterruptEnable = PXP_CTRL_IRQ_ENABLE_MASK, /*!< PXP process completed. */
DECL|kPXP_Csc1YCbCr2RGB|enumerator|kPXP_Csc1YCbCr2RGB, /*!< YCbCr to RGB. */
DECL|kPXP_Csc1YUV2RGB|enumerator|kPXP_Csc1YUV2RGB = 0U, /*!< YUV to RGB. */
DECL|kPXP_Csc2RGB2YCbCr|enumerator|kPXP_Csc2RGB2YCbCr, /*!< RGB to YCbCr. */
DECL|kPXP_Csc2RGB2YUV|enumerator|kPXP_Csc2RGB2YUV, /*!< RGB to YUV. */
DECL|kPXP_Csc2YCbCr2RGB|enumerator|kPXP_Csc2YCbCr2RGB, /*!< YCbCr to RGB. */
DECL|kPXP_Csc2YUV2RGB|enumerator|kPXP_Csc2YUV2RGB = 0U, /*!< YUV to RGB. */
DECL|kPXP_DitherLutOff|enumerator|kPXP_DitherLutOff = 0U, /*!< The LUT memory is not used for LUT, could be used as ordered dither index matrix. */
DECL|kPXP_DitherLutPostDither|enumerator|kPXP_DitherLutPostDither, /*!< Use LUT at the post-dither stage. */
DECL|kPXP_DitherLutPreDither|enumerator|kPXP_DitherLutPreDither, /*!< Use LUT at the pre-dither stage, The pre-dither LUT could only be used in Floyd mode
DECL|kPXP_DitherMatrix16|enumerator|kPXP_DitherMatrix16, /*!< The dither index matrix is 16x16. */
DECL|kPXP_DitherMatrix8|enumerator|kPXP_DitherMatrix8 = 1, /*!< The dither index matrix is 8x8. */
DECL|kPXP_DitherOrdered|enumerator|kPXP_DitherOrdered = 3U, /*!< Ordered dither. */
DECL|kPXP_DitherPassThrough|enumerator|kPXP_DitherPassThrough = 0U, /*!< Pass through, no dither. */
DECL|kPXP_DitherQuantOnly|enumerator|kPXP_DitherQuantOnly = 4U, /*!< No dithering, only quantization. */
DECL|kPXP_FlipBoth|enumerator|kPXP_FlipBoth = 0x03U, /*!< Flip both directions. */
DECL|kPXP_FlipDisable|enumerator|kPXP_FlipDisable = 0U, /*!< Flip disable. */
DECL|kPXP_FlipHorizontal|enumerator|kPXP_FlipHorizontal = 0x01U, /*!< Horizontal flip. */
DECL|kPXP_FlipVertical|enumerator|kPXP_FlipVertical = 0x02U, /*!< Vertical flip. */
DECL|kPXP_Lut8kBank0|enumerator|kPXP_Lut8kBank0 = 0U, /*!< The first 8K bank used. */
DECL|kPXP_Lut8kBank1|enumerator|kPXP_Lut8kBank1, /*!< The second 8K bank used. */
DECL|kPXP_LutCacheRGB565|enumerator|kPXP_LutCacheRGB565 = 0U, /*!< LUT ADDR = R[7:3],G[7:2],B[7:3]. Use all 16KB of LUT
DECL|kPXP_LutDirectRGB444|enumerator|kPXP_LutDirectRGB444, /*!< LUT ADDR = R[7:4],G[7:4],B[7:4]. Use one 8KB bank of LUT
DECL|kPXP_LutDirectRGB454|enumerator|kPXP_LutDirectRGB454, /*!< LUT ADDR = R[7:4],G[7:3],B[7:4]. Use all 16KB of LUT. */
DECL|kPXP_LutDirectY8|enumerator|kPXP_LutDirectY8, /*!< LUT ADDR = 16'b0,Y[7:0]. Use the first 256 bytes of LUT.
DECL|kPXP_LutDmaLoadFlag|enumerator|kPXP_LutDmaLoadFlag = PXP_STAT_LUT_DMA_LOAD_DONE_IRQ_MASK, /*!< The LUT table has been loaded by DMA. */
DECL|kPXP_LutDmaLoadInterruptEnable|enumerator|kPXP_LutDmaLoadInterruptEnable = PXP_CTRL_LUT_DMA_IRQ_ENABLE_MASK, /*!< The LUT table has been loaded by DMA. */
DECL|kPXP_LutOutRGB888|enumerator|kPXP_LutOutRGB888, /*!< RGB565->RGB888 conversion for Gamma correction. */
DECL|kPXP_LutOutRGBW4444CFA|enumerator|kPXP_LutOutRGBW4444CFA, /*!< Byte lane 2 = CFA_Y8, byte lane 1,0 = RGBW4444. */
DECL|kPXP_LutOutY8|enumerator|kPXP_LutOutY8 = 1U, /*!< R/Y byte lane 2 lookup, bytes 1,0 bypassed. */
DECL|kPXP_OutputField0|enumerator|kPXP_OutputField0, /*!< Only write field 0 data to output buffer 0. */
DECL|kPXP_OutputField1|enumerator|kPXP_OutputField1, /*!< Only write field 1 data to output buffer 0. */
DECL|kPXP_OutputInterlaced|enumerator|kPXP_OutputInterlaced, /*!< Field 0 write to buffer 0, field 1 write to buffer 1. */
DECL|kPXP_OutputPixelFormatARGB1555|enumerator|kPXP_OutputPixelFormatARGB1555 = 0x8, /*!< 16-bit pixels with alpha. */
DECL|kPXP_OutputPixelFormatARGB4444|enumerator|kPXP_OutputPixelFormatARGB4444 = 0x9, /*!< 16-bit pixels with alpha. */
DECL|kPXP_OutputPixelFormatARGB8888|enumerator|kPXP_OutputPixelFormatARGB8888 = 0x0, /*!< 32-bit pixels with alpha. */
DECL|kPXP_OutputPixelFormatRGB444|enumerator|kPXP_OutputPixelFormatRGB444 = 0xD, /*!< 16-bit pixels without alpha. */
DECL|kPXP_OutputPixelFormatRGB555|enumerator|kPXP_OutputPixelFormatRGB555 = 0xC, /*!< 16-bit pixels without alpha. */
DECL|kPXP_OutputPixelFormatRGB565|enumerator|kPXP_OutputPixelFormatRGB565 = 0xE, /*!< 16-bit pixels without alpha. */
DECL|kPXP_OutputPixelFormatRGB888P|enumerator|kPXP_OutputPixelFormatRGB888P = 0x5, /*!< 24-bit pixels without alpha (packed 24-bit format) */
DECL|kPXP_OutputPixelFormatRGB888|enumerator|kPXP_OutputPixelFormatRGB888 = 0x4, /*!< 32-bit pixels without alpha (unpacked 24-bit format) */
DECL|kPXP_OutputPixelFormatUYVY1P422|enumerator|kPXP_OutputPixelFormatUYVY1P422 = 0x12, /*!< 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes) */
DECL|kPXP_OutputPixelFormatVYUY1P422|enumerator|kPXP_OutputPixelFormatVYUY1P422 = 0x13, /*!< 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes) */
DECL|kPXP_OutputPixelFormatY4|enumerator|kPXP_OutputPixelFormatY4 = 0x15, /*!< 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation) */
DECL|kPXP_OutputPixelFormatY8|enumerator|kPXP_OutputPixelFormatY8 = 0x14, /*!< 8-bit monochrome pixels (1-plane Y luma output) */
DECL|kPXP_OutputPixelFormatYUV1P444|enumerator|kPXP_OutputPixelFormatYUV1P444 = 0x10, /*!< 32-bit pixels (1-plane XYUV unpacked). */
DECL|kPXP_OutputPixelFormatYUV2P420|enumerator|kPXP_OutputPixelFormatYUV2P420 = 0x19, /*!< 16-bit pixels (2-plane UV) */
DECL|kPXP_OutputPixelFormatYUV2P422|enumerator|kPXP_OutputPixelFormatYUV2P422 = 0x18, /*!< 16-bit pixels (2-plane UV interleaved bytes) */
DECL|kPXP_OutputPixelFormatYVU2P420|enumerator|kPXP_OutputPixelFormatYVU2P420 = 0x1B, /*!< 16-bit pixels (2-plane VU) */
DECL|kPXP_OutputPixelFormatYVU2P422|enumerator|kPXP_OutputPixelFormatYVU2P422 = 0x1A, /*!< 16-bit pixels (2-plane VU interleaved bytes) */
DECL|kPXP_OutputProgressive|enumerator|kPXP_OutputProgressive = 0U, /*!< All data written in progressive format to output buffer 0. */
DECL|kPXP_PsPixelFormatRGB444|enumerator|kPXP_PsPixelFormatRGB444 = 0xD, /*!< 16-bit pixels without alpha. */
DECL|kPXP_PsPixelFormatRGB555|enumerator|kPXP_PsPixelFormatRGB555 = 0xC, /*!< 16-bit pixels without alpha. */
DECL|kPXP_PsPixelFormatRGB565|enumerator|kPXP_PsPixelFormatRGB565 = 0xE, /*!< 16-bit pixels without alpha. */
DECL|kPXP_PsPixelFormatRGB888|enumerator|kPXP_PsPixelFormatRGB888 = 0x4, /*!< 32-bit pixels without alpha (unpacked 24-bit format) */
DECL|kPXP_PsPixelFormatUYVY1P422|enumerator|kPXP_PsPixelFormatUYVY1P422 = 0x12, /*!< 16-bit pixels (1-plane U0,Y0,V0,Y1 interleaved bytes) */
DECL|kPXP_PsPixelFormatVYUY1P422|enumerator|kPXP_PsPixelFormatVYUY1P422 = 0x13, /*!< 16-bit pixels (1-plane V0,Y0,U0,Y1 interleaved bytes) */
DECL|kPXP_PsPixelFormatY4|enumerator|kPXP_PsPixelFormatY4 = 0x15, /*!< 4-bit monochrome pixels (1-plane Y luma, 4 bit truncation) */
DECL|kPXP_PsPixelFormatY8|enumerator|kPXP_PsPixelFormatY8 = 0x14, /*!< 8-bit monochrome pixels (1-plane Y luma output) */
DECL|kPXP_PsPixelFormatYUV1P444|enumerator|kPXP_PsPixelFormatYUV1P444 = 0x10, /*!< 32-bit pixels (1-plane XYUV unpacked). */
DECL|kPXP_PsPixelFormatYUV2P420|enumerator|kPXP_PsPixelFormatYUV2P420 = 0x19, /*!< 16-bit pixels (2-plane UV) */
DECL|kPXP_PsPixelFormatYUV2P422|enumerator|kPXP_PsPixelFormatYUV2P422 = 0x18, /*!< 16-bit pixels (2-plane UV interleaved bytes) */
DECL|kPXP_PsPixelFormatYVU2P420|enumerator|kPXP_PsPixelFormatYVU2P420 = 0x1B, /*!< 16-bit pixels (2-plane VU) */
DECL|kPXP_PsPixelFormatYVU2P422|enumerator|kPXP_PsPixelFormatYVU2P422 = 0x1A, /*!< 16-bit pixels (2-plane VU interleaved bytes) */
DECL|kPXP_PsPixelFormatYVU420|enumerator|kPXP_PsPixelFormatYVU420 = 0x1F, /*!< 16-bit pixels (3-plane) */
DECL|kPXP_PsPixelFormatYVU422|enumerator|kPXP_PsPixelFormatYVU422 = 0x1E, /*!< 16-bit pixels (3-plane) */
DECL|kPXP_RamDither0Lut|enumerator|kPXP_RamDither0Lut = 0U, /*!< Dither 0 LUT memory. */
DECL|kPXP_RamDither1Lut|enumerator|kPXP_RamDither1Lut = 3U, /*!< Dither 1 LUT memory. */
DECL|kPXP_RamDither2Lut|enumerator|kPXP_RamDither2Lut = 4U, /*!< Dither 2 LUT memory. */
DECL|kPXP_RopMaskAsNot|enumerator|kPXP_RopMaskAsNot = 0x2, /*!< AS AND nPS. */
DECL|kPXP_RopMaskAs|enumerator|kPXP_RopMaskAs = 0x0, /*!< AS AND PS. */
DECL|kPXP_RopMaskNotAs|enumerator|kPXP_RopMaskNotAs = 0x1, /*!< nAS AND PS. */
DECL|kPXP_RopMergeAsNot|enumerator|kPXP_RopMergeAsNot = 0x5, /*!< AS OR nPS. */
DECL|kPXP_RopMergeAs|enumerator|kPXP_RopMergeAs = 0x3, /*!< AS OR PS. */
DECL|kPXP_RopMergeNotAs|enumerator|kPXP_RopMergeNotAs = 0x4, /*!< nAS OR PS. */
DECL|kPXP_RopNotCopyAs|enumerator|kPXP_RopNotCopyAs = 0x6, /*!< nAS. */
DECL|kPXP_RopNotMaskAs|enumerator|kPXP_RopNotMaskAs = 0x8, /*!< AS NAND PS. */
DECL|kPXP_RopNotMergeAs|enumerator|kPXP_RopNotMergeAs = 0x9, /*!< AS NOR PS. */
DECL|kPXP_RopNotXorAs|enumerator|kPXP_RopNotXorAs = 0xB /*!< AS XNOR PS. */
DECL|kPXP_RopNot|enumerator|kPXP_RopNot = 0x7, /*!< nPS. */
DECL|kPXP_RopXorAs|enumerator|kPXP_RopXorAs = 0xA, /*!< AS XOR PS. */
DECL|kPXP_Rotate0|enumerator|kPXP_Rotate0 = 0U, /*!< Clock wise rotate 0 deg. */
DECL|kPXP_Rotate180|enumerator|kPXP_Rotate180, /*!< Clock wise rotate 180 deg. */
DECL|kPXP_Rotate270|enumerator|kPXP_Rotate270, /*!< Clock wise rotate 270 deg. */
DECL|kPXP_Rotate90|enumerator|kPXP_Rotate90, /*!< Clock wise rotate 90 deg. */
DECL|kPXP_RotateOutputBuffer|enumerator|kPXP_RotateOutputBuffer = 0U, /*!< Rotate the output buffer. */
DECL|kPXP_RotateProcessSurface|enumerator|kPXP_RotateProcessSurface, /*!< Rotate the process surface. */
DECL|lookupMode|member|pxp_lut_lookup_mode_t lookupMode; /*!< Look up mode. */
DECL|lutMode|member|uint32_t lutMode : 2; /*!< How to use the memory LUT, see @ref _pxp_dither_lut_mode. This must be set to @ref
DECL|mode|member|pxp_csc2_mode_t mode; /*!< Convertion mode. */
DECL|outMode|member|pxp_lut_out_mode_t outMode; /*!< Out mode. */
DECL|pitchBytes|member|uint16_t pitchBytes; /*!< Number of bytes between two vertically adjacent pixels. */
DECL|pitchBytes|member|uint16_t pitchBytes; /*!< Number of bytes between two vertically adjacent pixels. */
DECL|pitchBytes|member|uint16_t pitchBytes; /*!< Number of bytes between two vertically adjacent pixels. */
DECL|pixelFormat|member|pxp_as_pixel_format_t pixelFormat; /*!< AS buffer pixel format. */
DECL|pixelFormat|member|pxp_output_pixel_format_t pixelFormat; /*!< Output buffer pixel format. */
DECL|pixelFormat|member|pxp_ps_pixel_format_t pixelFormat; /*!< PS buffer pixel format. */
DECL|pxp_alpha_mode_t|typedef|} pxp_alpha_mode_t;
DECL|pxp_as_blend_config_t|typedef|} pxp_as_blend_config_t;
DECL|pxp_as_buffer_config_t|typedef|} pxp_as_buffer_config_t;
DECL|pxp_as_pixel_format_t|typedef|} pxp_as_pixel_format_t;
DECL|pxp_block_size_t|typedef|} pxp_block_size_t;
DECL|pxp_csc1_mode_t|typedef|} pxp_csc1_mode_t;
DECL|pxp_csc2_config_t|typedef|} pxp_csc2_config_t;
DECL|pxp_csc2_mode_t|typedef|} pxp_csc2_mode_t;
DECL|pxp_dither_config_t|typedef|} pxp_dither_config_t;
DECL|pxp_dither_final_lut_data_t|typedef|} pxp_dither_final_lut_data_t;
DECL|pxp_flip_mode_t|typedef|} pxp_flip_mode_t;
DECL|pxp_interlaced_output_mode_t|typedef|} pxp_interlaced_output_mode_t;
DECL|pxp_lut_8k_bank_t|typedef|} pxp_lut_8k_bank_t;
DECL|pxp_lut_config_t|typedef|} pxp_lut_config_t;
DECL|pxp_lut_lookup_mode_t|typedef|} pxp_lut_lookup_mode_t;
DECL|pxp_lut_out_mode_t|typedef|} pxp_lut_out_mode_t;
DECL|pxp_output_buffer_config_t|typedef|} pxp_output_buffer_config_t;
DECL|pxp_output_pixel_format_t|typedef|} pxp_output_pixel_format_t;
DECL|pxp_ps_buffer_config_t|typedef|} pxp_ps_buffer_config_t;
DECL|pxp_ps_pixel_format_t|typedef|} pxp_ps_pixel_format_t;
DECL|pxp_ram_t|typedef|} pxp_ram_t;
DECL|pxp_rop_mode_t|typedef|} pxp_rop_mode_t;
DECL|pxp_rotate_degree_t|typedef|} pxp_rotate_degree_t;
DECL|pxp_rotate_position_t|typedef|} pxp_rotate_position_t;
DECL|quantBitNum|member|uint32_t quantBitNum : 3; /*!< Number of bits quantize down to, the valid value is 1~7. */
DECL|ropMode|member|pxp_rop_mode_t ropMode; /*!< ROP mode, only valid when @ref alphaMode is @ref kPXP_AlphaRop. */
DECL|swapByte|member|bool swapByte; /*!< For each 16 bit word, set true to swap the two bytes. */
DECL|uint32_t|member|uint32_t : 8;
DECL|width|member|uint16_t width; /*!< Pixels per line. */
