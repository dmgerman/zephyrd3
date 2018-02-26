DECL|ELCDIF_AS_CTRL_IRQ_EN_MASK|macro|ELCDIF_AS_CTRL_IRQ_EN_MASK
DECL|ELCDIF_AS_CTRL_IRQ_EN_MASK|macro|ELCDIF_AS_CTRL_IRQ_EN_MASK
DECL|ELCDIF_AS_CTRL_IRQ_MASK|macro|ELCDIF_AS_CTRL_IRQ_MASK
DECL|ELCDIF_AS_CTRL_IRQ_MASK|macro|ELCDIF_AS_CTRL_IRQ_MASK
DECL|ELCDIF_CTRL1_IRQ_EN_MASK|macro|ELCDIF_CTRL1_IRQ_EN_MASK
DECL|ELCDIF_CTRL1_IRQ_MASK|macro|ELCDIF_CTRL1_IRQ_MASK
DECL|ELCDIF_ClearInterruptStatus|function|static inline void ELCDIF_ClearInterruptStatus(LCDIF_Type *base, uint32_t mask)
DECL|ELCDIF_DisableInterrupts|function|static inline void ELCDIF_DisableInterrupts(LCDIF_Type *base, uint32_t mask)
DECL|ELCDIF_EnableAlphaSurface|function|static inline void ELCDIF_EnableAlphaSurface(LCDIF_Type *base, bool enable)
DECL|ELCDIF_EnableInterrupts|function|static inline void ELCDIF_EnableInterrupts(LCDIF_Type *base, uint32_t mask)
DECL|ELCDIF_EnableLut|function|static inline void ELCDIF_EnableLut(LCDIF_Type *base, bool enable)
DECL|ELCDIF_EnableOverlayColorKey|function|static inline void ELCDIF_EnableOverlayColorKey(LCDIF_Type *base, bool enable)
DECL|ELCDIF_EnableProcessSurface|function|static inline void ELCDIF_EnableProcessSurface(LCDIF_Type *base, bool enable)
DECL|ELCDIF_EnablePxpHandShake|function|static inline void ELCDIF_EnablePxpHandShake(LCDIF_Type *base, bool enable)
DECL|ELCDIF_GetBusMasterErrorAddr|function|static inline uint32_t ELCDIF_GetBusMasterErrorAddr(LCDIF_Type *base)
DECL|ELCDIF_GetCrcValue|function|static inline uint32_t ELCDIF_GetCrcValue(LCDIF_Type *base)
DECL|ELCDIF_GetInterruptStatus|function|static inline uint32_t ELCDIF_GetInterruptStatus(LCDIF_Type *base)
DECL|ELCDIF_GetLFifoCount|function|static inline uint32_t ELCDIF_GetLFifoCount(LCDIF_Type *base)
DECL|ELCDIF_GetStatus|function|static inline uint32_t ELCDIF_GetStatus(LCDIF_Type *base)
DECL|ELCDIF_LUT_ENTRY_NUM|macro|ELCDIF_LUT_ENTRY_NUM
DECL|ELCDIF_PullUpResetPin|function|static inline void ELCDIF_PullUpResetPin(LCDIF_Type *base, bool pullUp)
DECL|ELCDIF_RgbModeStart|function|static inline void ELCDIF_RgbModeStart(LCDIF_Type *base)
DECL|ELCDIF_SetNextAlphaSurfaceBufferAddr|function|static inline void ELCDIF_SetNextAlphaSurfaceBufferAddr(LCDIF_Type *base, uint32_t bufferAddr)
DECL|ELCDIF_SetNextBufferAddr|function|static inline void ELCDIF_SetNextBufferAddr(LCDIF_Type *base, uint32_t bufferAddr)
DECL|ELCDIF_SetOverlayColorKey|function|static inline void ELCDIF_SetOverlayColorKey(LCDIF_Type *base, uint32_t colorKeyLow, uint32_t colorKeyHigh)
DECL|FSL_ELCDIF_DRIVER_VERSION|macro|FSL_ELCDIF_DRIVER_VERSION
DECL|_FSL_ELCDIF_H_|macro|_FSL_ELCDIF_H_
DECL|_elcdif_alpha_mode|enum|typedef enum _elcdif_alpha_mode
DECL|_elcdif_as_blend_config|struct|typedef struct _elcdif_as_blend_config
DECL|_elcdif_as_buffer_config|struct|typedef struct _elcdif_as_buffer_config
DECL|_elcdif_as_pixel_format|enum|typedef enum _elcdif_as_pixel_format
DECL|_elcdif_interrupt_enable|enum|enum _elcdif_interrupt_enable
DECL|_elcdif_interrupt_flags|enum|enum _elcdif_interrupt_flags
DECL|_elcdif_lcd_data_bus|enum|typedef enum _elcdif_lcd_data_bus
DECL|_elcdif_lut|enum|typedef enum _elcdif_lut
DECL|_elcdif_pixel_format_reg|struct|typedef struct _elcdif_pixel_format_reg
DECL|_elcdif_pixel_format|enum|typedef enum _elcdif_pixel_format
DECL|_elcdif_polarity_flags|enum|enum _elcdif_polarity_flags
DECL|_elcdif_rgb_mode_config|struct|typedef struct _elcdif_rgb_mode_config
DECL|_elcdif_rop_mode|enum|typedef enum _elcdif_rop_mode
DECL|_elcdif_status_flags|enum|enum _elcdif_status_flags
DECL|alphaMode|member|elcdif_alpha_mode_t alphaMode; /*!< Alpha mode. */
DECL|alpha|member|uint8_t alpha; /*!< User defined alpha value, only used when @ref alphaMode is @ref kELCDIF_AlphaOverride or @ref
DECL|bufferAddr|member|uint32_t bufferAddr; /*!< Buffer address. */
DECL|bufferAddr|member|uint32_t bufferAddr; /*!< Frame buffer address. */
DECL|dataBus|member|elcdif_lcd_data_bus_t dataBus; /*!< LCD data bus. */
DECL|elcdif_alpha_mode_t|typedef|} elcdif_alpha_mode_t;
DECL|elcdif_as_blend_config_t|typedef|} elcdif_as_blend_config_t;
DECL|elcdif_as_buffer_config_t|typedef|} elcdif_as_buffer_config_t;
DECL|elcdif_as_pixel_format_t|typedef|} elcdif_as_pixel_format_t;
DECL|elcdif_lcd_data_bus_t|typedef|} elcdif_lcd_data_bus_t;
DECL|elcdif_lut_t|typedef|} elcdif_lut_t;
DECL|elcdif_pixel_format_reg_t|typedef|} elcdif_pixel_format_reg_t;
DECL|elcdif_pixel_format_t|typedef|} elcdif_pixel_format_t;
DECL|elcdif_rgb_mode_config_t|typedef|} elcdif_rgb_mode_config_t;
DECL|elcdif_rop_mode_t|typedef|} elcdif_rop_mode_t;
DECL|hbp|member|uint8_t hbp; /*!< Horizontal back porch. */
DECL|hfp|member|uint8_t hfp; /*!< Horizontal front porch. */
DECL|hsw|member|uint8_t hsw; /*!< HSYNC pulse width. */
DECL|invertAlpha|member|bool invertAlpha; /*!< Set true to invert the alpha. */
DECL|kELCDIF_AlphaEmbedded|enumerator|kELCDIF_AlphaEmbedded, /*!< The alpha surface pixel alpha value will be used for blend. */
DECL|kELCDIF_AlphaMultiply|enumerator|kELCDIF_AlphaMultiply, /*!< The alpha surface pixel alpha value scaled the user defined
DECL|kELCDIF_AlphaOverride|enumerator|kELCDIF_AlphaOverride, /*!< The user defined alpha value will be used for blend directly. */
DECL|kELCDIF_AlphaRop|enumerator|kELCDIF_AlphaRop /*!< Raster operation. */
DECL|kELCDIF_AsPixelFormatARGB1555|enumerator|kELCDIF_AsPixelFormatARGB1555 = 0x8, /*!< 16-bit pixels with alpha. */
DECL|kELCDIF_AsPixelFormatARGB4444|enumerator|kELCDIF_AsPixelFormatARGB4444 = 0x9, /*!< 16-bit pixels with alpha. */
DECL|kELCDIF_AsPixelFormatARGB8888|enumerator|kELCDIF_AsPixelFormatARGB8888 = 0x0, /*!< 32-bit pixels with alpha. */
DECL|kELCDIF_AsPixelFormatRGB444|enumerator|kELCDIF_AsPixelFormatRGB444 = 0xD, /*!< 16-bit pixels without alpha. */
DECL|kELCDIF_AsPixelFormatRGB555|enumerator|kELCDIF_AsPixelFormatRGB555 = 0xC, /*!< 16-bit pixels without alpha. */
DECL|kELCDIF_AsPixelFormatRGB565|enumerator|kELCDIF_AsPixelFormatRGB565 = 0xE, /*!< 16-bit pixels without alpha. */
DECL|kELCDIF_AsPixelFormatRGB888|enumerator|kELCDIF_AsPixelFormatRGB888 = 0x4, /*!< 32-bit pixels without alpha (unpacked 24-bit format) */
DECL|kELCDIF_BusMasterErrorInterruptEnable|enumerator|kELCDIF_BusMasterErrorInterruptEnable = LCDIF_CTRL1_BM_ERROR_IRQ_EN_MASK, /*!< Bus master error interrupt. */
DECL|kELCDIF_BusMasterError|enumerator|kELCDIF_BusMasterError = LCDIF_CTRL1_BM_ERROR_IRQ_MASK, /*!< Bus master error interrupt. */
DECL|kELCDIF_CurDviField2|enumerator|kELCDIF_CurDviField2 = LCDIF_STAT_DVI_CURRENT_FIELD_MASK, /*!< Current DVI filed, if set, then current filed is 2,
DECL|kELCDIF_CurFrameDoneInterruptEnable|enumerator|kELCDIF_CurFrameDoneInterruptEnable =
DECL|kELCDIF_CurFrameDone|enumerator|kELCDIF_CurFrameDone =
DECL|kELCDIF_DataBus16Bit|enumerator|kELCDIF_DataBus16Bit = LCDIF_CTRL_LCD_DATABUS_WIDTH(0), /*!< 16-bit data bus, support RGB565. */
DECL|kELCDIF_DataBus18Bit|enumerator|kELCDIF_DataBus18Bit = LCDIF_CTRL_LCD_DATABUS_WIDTH(2), /*!< 18-bit data bus, support RGB666. */
DECL|kELCDIF_DataBus24Bit|enumerator|kELCDIF_DataBus24Bit = LCDIF_CTRL_LCD_DATABUS_WIDTH(3), /*!< 24-bit data bus, support RGB888. */
DECL|kELCDIF_DataBus8Bit|enumerator|kELCDIF_DataBus8Bit = LCDIF_CTRL_LCD_DATABUS_WIDTH(1), /*!< 8-bit data bus. */
DECL|kELCDIF_DataEnableActiveHigh|enumerator|kELCDIF_DataEnableActiveHigh = LCDIF_VDCTRL0_ENABLE_POL_MASK, /*!< Data enable line active high. */
DECL|kELCDIF_DataEnableActiveLow|enumerator|kELCDIF_DataEnableActiveLow = 0U, /*!< Data enable line active low. */
DECL|kELCDIF_DriveDataOnFallingClkEdge|enumerator|kELCDIF_DriveDataOnFallingClkEdge = 0U, /*!< Drive data on falling clock edge, capture data
DECL|kELCDIF_DriveDataOnRisingClkEdge|enumerator|kELCDIF_DriveDataOnRisingClkEdge = LCDIF_VDCTRL0_DOTCLK_POL_MASK, /*!< Drive data on falling
DECL|kELCDIF_HsyncActiveHigh|enumerator|kELCDIF_HsyncActiveHigh = LCDIF_VDCTRL0_HSYNC_POL_MASK, /*!< HSYNC active high. */
DECL|kELCDIF_HsyncActiveLow|enumerator|kELCDIF_HsyncActiveLow = 0U, /*!< HSYNC active low. */
DECL|kELCDIF_LFifoEmpty|enumerator|kELCDIF_LFifoEmpty = LCDIF_STAT_LFIFO_EMPTY_MASK, /*!< LFIFO empty. */
DECL|kELCDIF_LFifoFull|enumerator|kELCDIF_LFifoFull = LCDIF_STAT_LFIFO_FULL_MASK, /*!< LFIFO full. */
DECL|kELCDIF_LcdControllerBusy|enumerator|kELCDIF_LcdControllerBusy = LCDIF_STAT_BUSY_MASK, /*!< The external LCD controller busy signal. */
DECL|kELCDIF_Lut0|enumerator|kELCDIF_Lut0 = 0, /*!< LUT 0. */
DECL|kELCDIF_Lut1|enumerator|kELCDIF_Lut1, /*!< LUT 1. */
DECL|kELCDIF_PixelFormatRAW8|enumerator|kELCDIF_PixelFormatRAW8 = 0, /*!< RAW 8 bit, four data use 32 bits. */
DECL|kELCDIF_PixelFormatRGB565|enumerator|kELCDIF_PixelFormatRGB565 = 1, /*!< RGB565, two pixel use 32 bits. */
DECL|kELCDIF_PixelFormatRGB666|enumerator|kELCDIF_PixelFormatRGB666 = 2, /*!< RGB666 unpacked, one pixel uses 32 bits, high byte unused,
DECL|kELCDIF_PixelFormatRGB888|enumerator|kELCDIF_PixelFormatRGB888 = 4, /*!< RGB888 packed, one pixel uses 24 bits. */
DECL|kELCDIF_PixelFormatXRGB8888|enumerator|kELCDIF_PixelFormatXRGB8888 = 3, /*!< XRGB8888 unpacked, one pixel uses 32 bits, high byte unused. */
DECL|kELCDIF_RopMaskAsNot|enumerator|kELCDIF_RopMaskAsNot = 0x2, /*!< AS AND nPS. */
DECL|kELCDIF_RopMaskAs|enumerator|kELCDIF_RopMaskAs = 0x0, /*!< AS AND PS. */
DECL|kELCDIF_RopMaskNotAs|enumerator|kELCDIF_RopMaskNotAs = 0x1, /*!< nAS AND PS. */
DECL|kELCDIF_RopMergeAsNot|enumerator|kELCDIF_RopMergeAsNot = 0x5, /*!< AS OR nPS. */
DECL|kELCDIF_RopMergeAs|enumerator|kELCDIF_RopMergeAs = 0x3, /*!< AS OR PS. */
DECL|kELCDIF_RopMergeNotAs|enumerator|kELCDIF_RopMergeNotAs = 0x4, /*!< nAS OR PS. */
DECL|kELCDIF_RopNotCopyAs|enumerator|kELCDIF_RopNotCopyAs = 0x6, /*!< nAS. */
DECL|kELCDIF_RopNotMaskAs|enumerator|kELCDIF_RopNotMaskAs = 0x8, /*!< AS NAND PS. */
DECL|kELCDIF_RopNotMergeAs|enumerator|kELCDIF_RopNotMergeAs = 0x9, /*!< AS NOR PS. */
DECL|kELCDIF_RopNotXorAs|enumerator|kELCDIF_RopNotXorAs = 0xB /*!< AS XNOR PS. */
DECL|kELCDIF_RopNot|enumerator|kELCDIF_RopNot = 0x7, /*!< nPS. */
DECL|kELCDIF_RopXorAs|enumerator|kELCDIF_RopXorAs = 0xA, /*!< AS XOR PS. */
DECL|kELCDIF_SciSyncOnInterruptEnable|enumerator|kELCDIF_SciSyncOnInterruptEnable =
DECL|kELCDIF_SciSyncOn|enumerator|kELCDIF_SciSyncOn = LCDIF_AS_CTRL_CSI_SYNC_ON_IRQ_MASK, /*!< Interrupt when eLCDIF lock with CSI input. */
DECL|kELCDIF_TxFifoEmpty|enumerator|kELCDIF_TxFifoEmpty = LCDIF_STAT_TXFIFO_EMPTY_MASK, /*!< TXFIFO empty. */
DECL|kELCDIF_TxFifoFull|enumerator|kELCDIF_TxFifoFull = LCDIF_STAT_TXFIFO_FULL_MASK, /*!< TXFIFO full. */
DECL|kELCDIF_TxFifoOverflowInterruptEnable|enumerator|kELCDIF_TxFifoOverflowInterruptEnable = LCDIF_CTRL1_OVERFLOW_IRQ_EN_MASK, /*!< TXFIFO overflow interrupt. */
DECL|kELCDIF_TxFifoOverflow|enumerator|kELCDIF_TxFifoOverflow = LCDIF_CTRL1_OVERFLOW_IRQ_MASK, /*!< TXFIFO overflow interrupt. */
DECL|kELCDIF_TxFifoUnderflowInterruptEnable|enumerator|kELCDIF_TxFifoUnderflowInterruptEnable = LCDIF_CTRL1_UNDERFLOW_IRQ_EN_MASK, /*!< TXFIFO underflow interrupt. */
DECL|kELCDIF_TxFifoUnderflow|enumerator|kELCDIF_TxFifoUnderflow = LCDIF_CTRL1_UNDERFLOW_IRQ_MASK, /*!< TXFIFO underflow interrupt. */
DECL|kELCDIF_VsyncActiveHigh|enumerator|kELCDIF_VsyncActiveHigh = LCDIF_VDCTRL0_VSYNC_POL_MASK, /*!< VSYNC active high. */
DECL|kELCDIF_VsyncActiveLow|enumerator|kELCDIF_VsyncActiveLow = 0U, /*!< VSYNC active low. */
DECL|kELCDIF_VsyncEdgeInterruptEnable|enumerator|kELCDIF_VsyncEdgeInterruptEnable =
DECL|kELCDIF_VsyncEdge|enumerator|kELCDIF_VsyncEdge = LCDIF_CTRL1_VSYNC_EDGE_IRQ_MASK, /*!< Interrupt when hardware encounters VSYNC edge. */
DECL|panelHeight|member|uint16_t panelHeight; /*!< Display panel height, how many lines per panel. */
DECL|panelWidth|member|uint16_t panelWidth; /*!< Display panel width, pixels per line. */
DECL|pixelFormat|member|elcdif_as_pixel_format_t pixelFormat; /*!< Pixel format. */
DECL|pixelFormat|member|elcdif_pixel_format_t pixelFormat; /*!< Pixel format. */
DECL|polarityFlags|member|uint32_t polarityFlags; /*!< OR'ed value of @ref _elcdif_polarity_flags, used to contol the signal polarity. */
DECL|regCtrl1|member|uint32_t regCtrl1; /*!< Value of register CTRL1. */
DECL|regCtrl|member|uint32_t regCtrl; /*!< Value of register CTRL. */
DECL|ropMode|member|elcdif_rop_mode_t ropMode; /*!< ROP mode, only valid when @ref alphaMode is @ref kELCDIF_AlphaRop. */
DECL|vbp|member|uint8_t vbp; /*!< Vertical back porch. */
DECL|vfp|member|uint8_t vfp; /*!< Vrtical front porch. */
DECL|vsw|member|uint8_t vsw; /*!< VSYNC pulse width. */
