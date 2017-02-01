DECL|Boff|member|uint32_t Boff:1; /**< bit: 24 Color Space Conversion Blue Component Offset */
DECL|C0|member|uint32_t C0:7; /**< bit: 0..6 Color Space Conversion Matrix Coefficient C0 */
DECL|C0|member|uint32_t C0:8; /**< bit: 0..7 Color Space Conversion Matrix Coefficient C0 */
DECL|C1|member|uint32_t C1:7; /**< bit: 8..14 Color Space Conversion Matrix Coefficient C1 */
DECL|C1|member|uint32_t C1:8; /**< bit: 8..15 Color Space Conversion Matrix Coefficient C1 */
DECL|C2|member|uint32_t C2:7; /**< bit: 16..22 Color Space Conversion Matrix Coefficient C2 */
DECL|C2|member|uint32_t C2:8; /**< bit: 16..23 Color Space Conversion Matrix Coefficient C2 */
DECL|C3|member|uint32_t C3:7; /**< bit: 0..6 Color Space Conversion Matrix Coefficient C3 */
DECL|C3|member|uint32_t C3:8; /**< bit: 24..31 Color Space Conversion Matrix Coefficient C3 */
DECL|C4|member|uint32_t C4:7; /**< bit: 8..14 Color Space Conversion Matrix Coefficient C4 */
DECL|C4|member|uint32_t C4:9; /**< bit: 0..8 Color Space Conversion Matrix Coefficient C4 */
DECL|C5|member|uint32_t C5:7; /**< bit: 16..22 Color Space Conversion Matrix Coefficient C5 */
DECL|C6|member|uint32_t C6:7; /**< bit: 0..6 Color Space Conversion Matrix Coefficient C6 */
DECL|C7|member|uint32_t C7:7; /**< bit: 8..14 Color Space Conversion Matrix Coefficient C7 */
DECL|C8|member|uint32_t C8:7; /**< bit: 16..22 Color Space Conversion Matrix Coefficient C8 */
DECL|CDC_PND|member|uint32_t CDC_PND:1; /**< bit: 8 Pending Codec Request */
DECL|COL_SPACE|member|uint32_t COL_SPACE:1; /**< bit: 15 Color Space for the Image Data */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CRC_ERR|member|uint32_t CRC_ERR:1; /**< bit: 26 CRC Synchronization Error (cleared on read) */
DECL|CRC_ERR|member|uint32_t CRC_ERR:1; /**< bit: 26 CRC Synchronization Error */
DECL|CRC_ERR|member|uint32_t CRC_ERR:1; /**< bit: 26 Embedded Synchronization CRC Error Interrupt Disable */
DECL|CRC_ERR|member|uint32_t CRC_ERR:1; /**< bit: 26 Embedded Synchronization CRC Error Interrupt Enable */
DECL|CRC_SYNC|member|uint32_t CRC_SYNC:1; /**< bit: 7 Embedded Synchronization Correction */
DECL|CXFR_DONE|member|uint32_t CXFR_DONE:1; /**< bit: 17 Codec DMA Transfer Completed */
DECL|CXFR_DONE|member|uint32_t CXFR_DONE:1; /**< bit: 17 Codec DMA Transfer Done Interrupt Disable */
DECL|CXFR_DONE|member|uint32_t CXFR_DONE:1; /**< bit: 17 Codec DMA Transfer Done Interrupt Enable */
DECL|CXFR_DONE|member|uint32_t CXFR_DONE:1; /**< bit: 17 Codec DMA Transfer has Terminated (cleared on read) */
DECL|C_ADDR|member|uint32_t C_ADDR:30; /**< bit: 2..31 Codec Image Base Address */
DECL|C_CH_DIS|member|uint32_t C_CH_DIS:1; /**< bit: 1 Codec Channel Disable Request */
DECL|C_CH_EN|member|uint32_t C_CH_EN:1; /**< bit: 1 Codec Channel Enable */
DECL|C_CH_S|member|uint32_t C_CH_S:1; /**< bit: 1 Code DMA Channel Status */
DECL|C_DONE|member|uint32_t C_DONE:1; /**< bit: 3 Codec Transfer Done */
DECL|C_DSCR|member|uint32_t C_DSCR:30; /**< bit: 2..31 Codec Descriptor Base Address */
DECL|C_FETCH|member|uint32_t C_FETCH:1; /**< bit: 0 Descriptor Fetch Control Bit */
DECL|C_IEN|member|uint32_t C_IEN:1; /**< bit: 2 Transfer Done Flag Control */
DECL|C_OVR|member|uint32_t C_OVR:1; /**< bit: 25 Codec Datapath Overflow (cleared on read) */
DECL|C_OVR|member|uint32_t C_OVR:1; /**< bit: 25 Codec Datapath Overflow Interrupt Disable */
DECL|C_OVR|member|uint32_t C_OVR:1; /**< bit: 25 Codec Datapath Overflow Interrupt Enable */
DECL|C_OVR|member|uint32_t C_OVR:1; /**< bit: 25 Codec FIFO Overflow */
DECL|C_WB|member|uint32_t C_WB:1; /**< bit: 1 Descriptor Writeback Control Bit */
DECL|Cboff|member|uint32_t Cboff:1; /**< bit: 14 Color Space Conversion Blue Chrominance Default Offset */
DECL|Croff|member|uint32_t Croff:1; /**< bit: 13 Color Space Conversion Red Chrominance Default Offset */
DECL|DEC_FACTOR|member|uint32_t DEC_FACTOR:8; /**< bit: 0..7 Decimation Factor */
DECL|DISCR|member|uint32_t DISCR:1; /**< bit: 11 Disable Codec Request */
DECL|DIS_DONE|member|uint32_t DIS_DONE:1; /**< bit: 1 Disable Done Interrupt Disable */
DECL|DIS_DONE|member|uint32_t DIS_DONE:1; /**< bit: 1 Disable Done Interrupt Enable */
DECL|DIS_DONE|member|uint32_t DIS_DONE:1; /**< bit: 1 Module Disable Operation Completed */
DECL|DIS_DONE|member|uint32_t DIS_DONE:1; /**< bit: 1 Module Disable Request has Terminated (cleared on read) */
DECL|EMB_SYNC|member|uint32_t EMB_SYNC:1; /**< bit: 6 Embedded Synchronization */
DECL|ENABLE|member|uint32_t ENABLE:1; /**< bit: 0 Module Enable */
DECL|FRATE|member|uint32_t FRATE:3; /**< bit: 8..10 Frame Rate [0..7] */
DECL|FR_OVR|member|uint32_t FR_OVR:1; /**< bit: 27 Frame Rate Overflow Interrupt Disable */
DECL|FR_OVR|member|uint32_t FR_OVR:1; /**< bit: 27 Frame Rate Overflow Interrupt Enable */
DECL|FR_OVR|member|uint32_t FR_OVR:1; /**< bit: 27 Frame Rate Overrun (cleared on read) */
DECL|FR_OVR|member|uint32_t FR_OVR:1; /**< bit: 27 Frame Rate Overrun */
DECL|FULL|member|uint32_t FULL:1; /**< bit: 12 Full Mode is Allowed */
DECL|GRAYSCALE|member|uint32_t GRAYSCALE:1; /**< bit: 13 Grayscale Mode Format Enable */
DECL|GS_MODE|member|uint32_t GS_MODE:1; /**< bit: 11 Grayscale Pixel Format Mode */
DECL|Goff|member|uint32_t Goff:1; /**< bit: 24 Color Space Conversion Green Component Offset */
DECL|HSYNC_POL|member|uint32_t HSYNC_POL:1; /**< bit: 2 Horizontal Synchronization Polarity */
DECL|IM_HSIZE|member|uint32_t IM_HSIZE:11; /**< bit: 16..26 Horizontal Size of the Image Sensor [0..2047] */
DECL|IM_VSIZE|member|uint32_t IM_VSIZE:11; /**< bit: 0..10 Vertical Size of the Image Sensor [0..2047] */
DECL|ISI_6350|macro|ISI_6350
DECL|ISI_CDC|member|uint32_t ISI_CDC:1; /**< bit: 8 ISI Codec Request */
DECL|ISI_CFG1_CRC_SYNC_Msk|macro|ISI_CFG1_CRC_SYNC_Msk
DECL|ISI_CFG1_CRC_SYNC_Pos|macro|ISI_CFG1_CRC_SYNC_Pos
DECL|ISI_CFG1_CRC_SYNC|macro|ISI_CFG1_CRC_SYNC
DECL|ISI_CFG1_DISCR_Msk|macro|ISI_CFG1_DISCR_Msk
DECL|ISI_CFG1_DISCR_Pos|macro|ISI_CFG1_DISCR_Pos
DECL|ISI_CFG1_DISCR|macro|ISI_CFG1_DISCR
DECL|ISI_CFG1_EMB_SYNC_Msk|macro|ISI_CFG1_EMB_SYNC_Msk
DECL|ISI_CFG1_EMB_SYNC_Pos|macro|ISI_CFG1_EMB_SYNC_Pos
DECL|ISI_CFG1_EMB_SYNC|macro|ISI_CFG1_EMB_SYNC
DECL|ISI_CFG1_FRATE_Msk|macro|ISI_CFG1_FRATE_Msk
DECL|ISI_CFG1_FRATE_Pos|macro|ISI_CFG1_FRATE_Pos
DECL|ISI_CFG1_FRATE|macro|ISI_CFG1_FRATE
DECL|ISI_CFG1_FULL_Msk|macro|ISI_CFG1_FULL_Msk
DECL|ISI_CFG1_FULL_Pos|macro|ISI_CFG1_FULL_Pos
DECL|ISI_CFG1_FULL|macro|ISI_CFG1_FULL
DECL|ISI_CFG1_HSYNC_POL_Msk|macro|ISI_CFG1_HSYNC_POL_Msk
DECL|ISI_CFG1_HSYNC_POL_Pos|macro|ISI_CFG1_HSYNC_POL_Pos
DECL|ISI_CFG1_HSYNC_POL|macro|ISI_CFG1_HSYNC_POL
DECL|ISI_CFG1_Msk|macro|ISI_CFG1_Msk
DECL|ISI_CFG1_OFFSET|macro|ISI_CFG1_OFFSET
DECL|ISI_CFG1_PIXCLK_POL_Msk|macro|ISI_CFG1_PIXCLK_POL_Msk
DECL|ISI_CFG1_PIXCLK_POL_Pos|macro|ISI_CFG1_PIXCLK_POL_Pos
DECL|ISI_CFG1_PIXCLK_POL|macro|ISI_CFG1_PIXCLK_POL
DECL|ISI_CFG1_SFD_Msk|macro|ISI_CFG1_SFD_Msk
DECL|ISI_CFG1_SFD_Pos|macro|ISI_CFG1_SFD_Pos
DECL|ISI_CFG1_SFD|macro|ISI_CFG1_SFD
DECL|ISI_CFG1_SLD_Msk|macro|ISI_CFG1_SLD_Msk
DECL|ISI_CFG1_SLD_Pos|macro|ISI_CFG1_SLD_Pos
DECL|ISI_CFG1_SLD|macro|ISI_CFG1_SLD
DECL|ISI_CFG1_THMASK_BEATS_16_Val|macro|ISI_CFG1_THMASK_BEATS_16_Val
DECL|ISI_CFG1_THMASK_BEATS_16|macro|ISI_CFG1_THMASK_BEATS_16
DECL|ISI_CFG1_THMASK_BEATS_4_Val|macro|ISI_CFG1_THMASK_BEATS_4_Val
DECL|ISI_CFG1_THMASK_BEATS_4|macro|ISI_CFG1_THMASK_BEATS_4
DECL|ISI_CFG1_THMASK_BEATS_8_Val|macro|ISI_CFG1_THMASK_BEATS_8_Val
DECL|ISI_CFG1_THMASK_BEATS_8|macro|ISI_CFG1_THMASK_BEATS_8
DECL|ISI_CFG1_THMASK_Msk|macro|ISI_CFG1_THMASK_Msk
DECL|ISI_CFG1_THMASK_Pos|macro|ISI_CFG1_THMASK_Pos
DECL|ISI_CFG1_THMASK|macro|ISI_CFG1_THMASK
DECL|ISI_CFG1_Type|typedef|} ISI_CFG1_Type;
DECL|ISI_CFG1_VSYNC_POL_Msk|macro|ISI_CFG1_VSYNC_POL_Msk
DECL|ISI_CFG1_VSYNC_POL_Pos|macro|ISI_CFG1_VSYNC_POL_Pos
DECL|ISI_CFG1_VSYNC_POL|macro|ISI_CFG1_VSYNC_POL
DECL|ISI_CFG1|member|__IO ISI_CFG1_Type ISI_CFG1; /**< Offset: 0x00 (R/W 32) ISI Configuration 1 Register */
DECL|ISI_CFG1|member|__IO uint32_t ISI_CFG1; /**< (ISI Offset: 0x00) ISI Configuration 1 Register */
DECL|ISI_CFG2_COL_SPACE_Msk|macro|ISI_CFG2_COL_SPACE_Msk
DECL|ISI_CFG2_COL_SPACE_Pos|macro|ISI_CFG2_COL_SPACE_Pos
DECL|ISI_CFG2_COL_SPACE|macro|ISI_CFG2_COL_SPACE
DECL|ISI_CFG2_GRAYSCALE_Msk|macro|ISI_CFG2_GRAYSCALE_Msk
DECL|ISI_CFG2_GRAYSCALE_Pos|macro|ISI_CFG2_GRAYSCALE_Pos
DECL|ISI_CFG2_GRAYSCALE|macro|ISI_CFG2_GRAYSCALE
DECL|ISI_CFG2_GS_MODE_Msk|macro|ISI_CFG2_GS_MODE_Msk
DECL|ISI_CFG2_GS_MODE_Pos|macro|ISI_CFG2_GS_MODE_Pos
DECL|ISI_CFG2_GS_MODE|macro|ISI_CFG2_GS_MODE
DECL|ISI_CFG2_IM_HSIZE_Msk|macro|ISI_CFG2_IM_HSIZE_Msk
DECL|ISI_CFG2_IM_HSIZE_Pos|macro|ISI_CFG2_IM_HSIZE_Pos
DECL|ISI_CFG2_IM_HSIZE|macro|ISI_CFG2_IM_HSIZE
DECL|ISI_CFG2_IM_VSIZE_Msk|macro|ISI_CFG2_IM_VSIZE_Msk
DECL|ISI_CFG2_IM_VSIZE_Pos|macro|ISI_CFG2_IM_VSIZE_Pos
DECL|ISI_CFG2_IM_VSIZE|macro|ISI_CFG2_IM_VSIZE
DECL|ISI_CFG2_MASK|macro|ISI_CFG2_MASK
DECL|ISI_CFG2_Msk|macro|ISI_CFG2_Msk
DECL|ISI_CFG2_OFFSET|macro|ISI_CFG2_OFFSET
DECL|ISI_CFG2_RGB_CFG_DEFAULT_Val|macro|ISI_CFG2_RGB_CFG_DEFAULT_Val
DECL|ISI_CFG2_RGB_CFG_DEFAULT|macro|ISI_CFG2_RGB_CFG_DEFAULT
DECL|ISI_CFG2_RGB_CFG_MODE1_Val|macro|ISI_CFG2_RGB_CFG_MODE1_Val
DECL|ISI_CFG2_RGB_CFG_MODE1|macro|ISI_CFG2_RGB_CFG_MODE1
DECL|ISI_CFG2_RGB_CFG_MODE2_Val|macro|ISI_CFG2_RGB_CFG_MODE2_Val
DECL|ISI_CFG2_RGB_CFG_MODE2|macro|ISI_CFG2_RGB_CFG_MODE2
DECL|ISI_CFG2_RGB_CFG_MODE3_Val|macro|ISI_CFG2_RGB_CFG_MODE3_Val
DECL|ISI_CFG2_RGB_CFG_MODE3|macro|ISI_CFG2_RGB_CFG_MODE3
DECL|ISI_CFG2_RGB_CFG_Msk|macro|ISI_CFG2_RGB_CFG_Msk
DECL|ISI_CFG2_RGB_CFG_Pos|macro|ISI_CFG2_RGB_CFG_Pos
DECL|ISI_CFG2_RGB_CFG|macro|ISI_CFG2_RGB_CFG
DECL|ISI_CFG2_RGB_MODE_Msk|macro|ISI_CFG2_RGB_MODE_Msk
DECL|ISI_CFG2_RGB_MODE_Pos|macro|ISI_CFG2_RGB_MODE_Pos
DECL|ISI_CFG2_RGB_MODE|macro|ISI_CFG2_RGB_MODE
DECL|ISI_CFG2_RGB_SWAP_Msk|macro|ISI_CFG2_RGB_SWAP_Msk
DECL|ISI_CFG2_RGB_SWAP_Pos|macro|ISI_CFG2_RGB_SWAP_Pos
DECL|ISI_CFG2_RGB_SWAP|macro|ISI_CFG2_RGB_SWAP
DECL|ISI_CFG2_Type|typedef|} ISI_CFG2_Type;
DECL|ISI_CFG2_YCC_SWAP_DEFAULT_Val|macro|ISI_CFG2_YCC_SWAP_DEFAULT_Val
DECL|ISI_CFG2_YCC_SWAP_DEFAULT|macro|ISI_CFG2_YCC_SWAP_DEFAULT
DECL|ISI_CFG2_YCC_SWAP_MODE1_Val|macro|ISI_CFG2_YCC_SWAP_MODE1_Val
DECL|ISI_CFG2_YCC_SWAP_MODE1|macro|ISI_CFG2_YCC_SWAP_MODE1
DECL|ISI_CFG2_YCC_SWAP_MODE2_Val|macro|ISI_CFG2_YCC_SWAP_MODE2_Val
DECL|ISI_CFG2_YCC_SWAP_MODE2|macro|ISI_CFG2_YCC_SWAP_MODE2
DECL|ISI_CFG2_YCC_SWAP_MODE3_Val|macro|ISI_CFG2_YCC_SWAP_MODE3_Val
DECL|ISI_CFG2_YCC_SWAP_MODE3|macro|ISI_CFG2_YCC_SWAP_MODE3
DECL|ISI_CFG2_YCC_SWAP_Msk|macro|ISI_CFG2_YCC_SWAP_Msk
DECL|ISI_CFG2_YCC_SWAP_Pos|macro|ISI_CFG2_YCC_SWAP_Pos
DECL|ISI_CFG2_YCC_SWAP|macro|ISI_CFG2_YCC_SWAP
DECL|ISI_CFG2|member|__IO ISI_CFG2_Type ISI_CFG2; /**< Offset: 0x04 (R/W 32) ISI Configuration 2 Register */
DECL|ISI_CFG2|member|__IO uint32_t ISI_CFG2; /**< (ISI Offset: 0x04) ISI Configuration 2 Register */
DECL|ISI_CR_ISI_CDC_Msk|macro|ISI_CR_ISI_CDC_Msk
DECL|ISI_CR_ISI_CDC_Pos|macro|ISI_CR_ISI_CDC_Pos
DECL|ISI_CR_ISI_CDC|macro|ISI_CR_ISI_CDC
DECL|ISI_CR_ISI_DIS_Msk|macro|ISI_CR_ISI_DIS_Msk
DECL|ISI_CR_ISI_DIS_Pos|macro|ISI_CR_ISI_DIS_Pos
DECL|ISI_CR_ISI_DIS|macro|ISI_CR_ISI_DIS
DECL|ISI_CR_ISI_EN_Msk|macro|ISI_CR_ISI_EN_Msk
DECL|ISI_CR_ISI_EN_Pos|macro|ISI_CR_ISI_EN_Pos
DECL|ISI_CR_ISI_EN|macro|ISI_CR_ISI_EN
DECL|ISI_CR_ISI_SRST_Msk|macro|ISI_CR_ISI_SRST_Msk
DECL|ISI_CR_ISI_SRST_Pos|macro|ISI_CR_ISI_SRST_Pos
DECL|ISI_CR_ISI_SRST|macro|ISI_CR_ISI_SRST
DECL|ISI_CR_MASK|macro|ISI_CR_MASK
DECL|ISI_CR_Msk|macro|ISI_CR_Msk
DECL|ISI_CR_OFFSET|macro|ISI_CR_OFFSET
DECL|ISI_CR_Type|typedef|} ISI_CR_Type;
DECL|ISI_CR|member|__O ISI_CR_Type ISI_CR; /**< Offset: 0x24 ( /W 32) ISI Control Register */
DECL|ISI_CR|member|__O uint32_t ISI_CR; /**< (ISI Offset: 0x24) ISI Control Register */
DECL|ISI_DIS|member|uint32_t ISI_DIS:1; /**< bit: 1 ISI Module Disable Request */
DECL|ISI_DMA_CHDR_C_CH_DIS_Msk|macro|ISI_DMA_CHDR_C_CH_DIS_Msk
DECL|ISI_DMA_CHDR_C_CH_DIS_Pos|macro|ISI_DMA_CHDR_C_CH_DIS_Pos
DECL|ISI_DMA_CHDR_C_CH_DIS|macro|ISI_DMA_CHDR_C_CH_DIS
DECL|ISI_DMA_CHDR_MASK|macro|ISI_DMA_CHDR_MASK
DECL|ISI_DMA_CHDR_Msk|macro|ISI_DMA_CHDR_Msk
DECL|ISI_DMA_CHDR_OFFSET|macro|ISI_DMA_CHDR_OFFSET
DECL|ISI_DMA_CHDR_P_CH_DIS_Msk|macro|ISI_DMA_CHDR_P_CH_DIS_Msk
DECL|ISI_DMA_CHDR_P_CH_DIS_Pos|macro|ISI_DMA_CHDR_P_CH_DIS_Pos
DECL|ISI_DMA_CHDR_P_CH_DIS|macro|ISI_DMA_CHDR_P_CH_DIS
DECL|ISI_DMA_CHDR_Type|typedef|} ISI_DMA_CHDR_Type;
DECL|ISI_DMA_CHDR|member|__O ISI_DMA_CHDR_Type ISI_DMA_CHDR; /**< Offset: 0x3C ( /W 32) DMA Channel Disable Register */
DECL|ISI_DMA_CHDR|member|__O uint32_t ISI_DMA_CHDR; /**< (ISI Offset: 0x3C) DMA Channel Disable Register */
DECL|ISI_DMA_CHER_C_CH_EN_Msk|macro|ISI_DMA_CHER_C_CH_EN_Msk
DECL|ISI_DMA_CHER_C_CH_EN_Pos|macro|ISI_DMA_CHER_C_CH_EN_Pos
DECL|ISI_DMA_CHER_C_CH_EN|macro|ISI_DMA_CHER_C_CH_EN
DECL|ISI_DMA_CHER_MASK|macro|ISI_DMA_CHER_MASK
DECL|ISI_DMA_CHER_Msk|macro|ISI_DMA_CHER_Msk
DECL|ISI_DMA_CHER_OFFSET|macro|ISI_DMA_CHER_OFFSET
DECL|ISI_DMA_CHER_P_CH_EN_Msk|macro|ISI_DMA_CHER_P_CH_EN_Msk
DECL|ISI_DMA_CHER_P_CH_EN_Pos|macro|ISI_DMA_CHER_P_CH_EN_Pos
DECL|ISI_DMA_CHER_P_CH_EN|macro|ISI_DMA_CHER_P_CH_EN
DECL|ISI_DMA_CHER_Type|typedef|} ISI_DMA_CHER_Type;
DECL|ISI_DMA_CHER|member|__O ISI_DMA_CHER_Type ISI_DMA_CHER; /**< Offset: 0x38 ( /W 32) DMA Channel Enable Register */
DECL|ISI_DMA_CHER|member|__O uint32_t ISI_DMA_CHER; /**< (ISI Offset: 0x38) DMA Channel Enable Register */
DECL|ISI_DMA_CHSR_C_CH_S_Msk|macro|ISI_DMA_CHSR_C_CH_S_Msk
DECL|ISI_DMA_CHSR_C_CH_S_Pos|macro|ISI_DMA_CHSR_C_CH_S_Pos
DECL|ISI_DMA_CHSR_C_CH_S|macro|ISI_DMA_CHSR_C_CH_S
DECL|ISI_DMA_CHSR_MASK|macro|ISI_DMA_CHSR_MASK
DECL|ISI_DMA_CHSR_Msk|macro|ISI_DMA_CHSR_Msk
DECL|ISI_DMA_CHSR_OFFSET|macro|ISI_DMA_CHSR_OFFSET
DECL|ISI_DMA_CHSR_P_CH_S_Msk|macro|ISI_DMA_CHSR_P_CH_S_Msk
DECL|ISI_DMA_CHSR_P_CH_S_Pos|macro|ISI_DMA_CHSR_P_CH_S_Pos
DECL|ISI_DMA_CHSR_P_CH_S|macro|ISI_DMA_CHSR_P_CH_S
DECL|ISI_DMA_CHSR_Type|typedef|} ISI_DMA_CHSR_Type;
DECL|ISI_DMA_CHSR|member|__I ISI_DMA_CHSR_Type ISI_DMA_CHSR; /**< Offset: 0x40 (R/ 32) DMA Channel Status Register */
DECL|ISI_DMA_CHSR|member|__I uint32_t ISI_DMA_CHSR; /**< (ISI Offset: 0x40) DMA Channel Status Register */
DECL|ISI_DMA_C_ADDR_C_ADDR_Msk|macro|ISI_DMA_C_ADDR_C_ADDR_Msk
DECL|ISI_DMA_C_ADDR_C_ADDR_Pos|macro|ISI_DMA_C_ADDR_C_ADDR_Pos
DECL|ISI_DMA_C_ADDR_C_ADDR|macro|ISI_DMA_C_ADDR_C_ADDR
DECL|ISI_DMA_C_ADDR_MASK|macro|ISI_DMA_C_ADDR_MASK
DECL|ISI_DMA_C_ADDR_Msk|macro|ISI_DMA_C_ADDR_Msk
DECL|ISI_DMA_C_ADDR_OFFSET|macro|ISI_DMA_C_ADDR_OFFSET
DECL|ISI_DMA_C_ADDR_Type|typedef|} ISI_DMA_C_ADDR_Type;
DECL|ISI_DMA_C_ADDR|member|__IO ISI_DMA_C_ADDR_Type ISI_DMA_C_ADDR; /**< Offset: 0x50 (R/W 32) DMA Codec Base Address Register */
DECL|ISI_DMA_C_ADDR|member|__IO uint32_t ISI_DMA_C_ADDR; /**< (ISI Offset: 0x50) DMA Codec Base Address Register */
DECL|ISI_DMA_C_CTRL_C_DONE_Msk|macro|ISI_DMA_C_CTRL_C_DONE_Msk
DECL|ISI_DMA_C_CTRL_C_DONE_Pos|macro|ISI_DMA_C_CTRL_C_DONE_Pos
DECL|ISI_DMA_C_CTRL_C_DONE|macro|ISI_DMA_C_CTRL_C_DONE
DECL|ISI_DMA_C_CTRL_C_FETCH_Msk|macro|ISI_DMA_C_CTRL_C_FETCH_Msk
DECL|ISI_DMA_C_CTRL_C_FETCH_Pos|macro|ISI_DMA_C_CTRL_C_FETCH_Pos
DECL|ISI_DMA_C_CTRL_C_FETCH|macro|ISI_DMA_C_CTRL_C_FETCH
DECL|ISI_DMA_C_CTRL_C_IEN_Msk|macro|ISI_DMA_C_CTRL_C_IEN_Msk
DECL|ISI_DMA_C_CTRL_C_IEN_Pos|macro|ISI_DMA_C_CTRL_C_IEN_Pos
DECL|ISI_DMA_C_CTRL_C_IEN|macro|ISI_DMA_C_CTRL_C_IEN
DECL|ISI_DMA_C_CTRL_C_WB_Msk|macro|ISI_DMA_C_CTRL_C_WB_Msk
DECL|ISI_DMA_C_CTRL_C_WB_Pos|macro|ISI_DMA_C_CTRL_C_WB_Pos
DECL|ISI_DMA_C_CTRL_C_WB|macro|ISI_DMA_C_CTRL_C_WB
DECL|ISI_DMA_C_CTRL_MASK|macro|ISI_DMA_C_CTRL_MASK
DECL|ISI_DMA_C_CTRL_Msk|macro|ISI_DMA_C_CTRL_Msk
DECL|ISI_DMA_C_CTRL_OFFSET|macro|ISI_DMA_C_CTRL_OFFSET
DECL|ISI_DMA_C_CTRL_Type|typedef|} ISI_DMA_C_CTRL_Type;
DECL|ISI_DMA_C_CTRL|member|__IO ISI_DMA_C_CTRL_Type ISI_DMA_C_CTRL; /**< Offset: 0x54 (R/W 32) DMA Codec Control Register */
DECL|ISI_DMA_C_CTRL|member|__IO uint32_t ISI_DMA_C_CTRL; /**< (ISI Offset: 0x54) DMA Codec Control Register */
DECL|ISI_DMA_C_DSCR_C_DSCR_Msk|macro|ISI_DMA_C_DSCR_C_DSCR_Msk
DECL|ISI_DMA_C_DSCR_C_DSCR_Pos|macro|ISI_DMA_C_DSCR_C_DSCR_Pos
DECL|ISI_DMA_C_DSCR_C_DSCR|macro|ISI_DMA_C_DSCR_C_DSCR
DECL|ISI_DMA_C_DSCR_MASK|macro|ISI_DMA_C_DSCR_MASK
DECL|ISI_DMA_C_DSCR_Msk|macro|ISI_DMA_C_DSCR_Msk
DECL|ISI_DMA_C_DSCR_OFFSET|macro|ISI_DMA_C_DSCR_OFFSET
DECL|ISI_DMA_C_DSCR_Type|typedef|} ISI_DMA_C_DSCR_Type;
DECL|ISI_DMA_C_DSCR|member|__IO ISI_DMA_C_DSCR_Type ISI_DMA_C_DSCR; /**< Offset: 0x58 (R/W 32) DMA Codec Descriptor Address Register */
DECL|ISI_DMA_C_DSCR|member|__IO uint32_t ISI_DMA_C_DSCR; /**< (ISI Offset: 0x58) DMA Codec Descriptor Address Register */
DECL|ISI_DMA_P_ADDR_MASK|macro|ISI_DMA_P_ADDR_MASK
DECL|ISI_DMA_P_ADDR_Msk|macro|ISI_DMA_P_ADDR_Msk
DECL|ISI_DMA_P_ADDR_OFFSET|macro|ISI_DMA_P_ADDR_OFFSET
DECL|ISI_DMA_P_ADDR_P_ADDR_Msk|macro|ISI_DMA_P_ADDR_P_ADDR_Msk
DECL|ISI_DMA_P_ADDR_P_ADDR_Pos|macro|ISI_DMA_P_ADDR_P_ADDR_Pos
DECL|ISI_DMA_P_ADDR_P_ADDR|macro|ISI_DMA_P_ADDR_P_ADDR
DECL|ISI_DMA_P_ADDR_Type|typedef|} ISI_DMA_P_ADDR_Type;
DECL|ISI_DMA_P_ADDR|member|__IO ISI_DMA_P_ADDR_Type ISI_DMA_P_ADDR; /**< Offset: 0x44 (R/W 32) DMA Preview Base Address Register */
DECL|ISI_DMA_P_ADDR|member|__IO uint32_t ISI_DMA_P_ADDR; /**< (ISI Offset: 0x44) DMA Preview Base Address Register */
DECL|ISI_DMA_P_CTRL_MASK|macro|ISI_DMA_P_CTRL_MASK
DECL|ISI_DMA_P_CTRL_Msk|macro|ISI_DMA_P_CTRL_Msk
DECL|ISI_DMA_P_CTRL_OFFSET|macro|ISI_DMA_P_CTRL_OFFSET
DECL|ISI_DMA_P_CTRL_P_DONE_Msk|macro|ISI_DMA_P_CTRL_P_DONE_Msk
DECL|ISI_DMA_P_CTRL_P_DONE_Pos|macro|ISI_DMA_P_CTRL_P_DONE_Pos
DECL|ISI_DMA_P_CTRL_P_DONE|macro|ISI_DMA_P_CTRL_P_DONE
DECL|ISI_DMA_P_CTRL_P_FETCH_Msk|macro|ISI_DMA_P_CTRL_P_FETCH_Msk
DECL|ISI_DMA_P_CTRL_P_FETCH_Pos|macro|ISI_DMA_P_CTRL_P_FETCH_Pos
DECL|ISI_DMA_P_CTRL_P_FETCH|macro|ISI_DMA_P_CTRL_P_FETCH
DECL|ISI_DMA_P_CTRL_P_IEN_Msk|macro|ISI_DMA_P_CTRL_P_IEN_Msk
DECL|ISI_DMA_P_CTRL_P_IEN_Pos|macro|ISI_DMA_P_CTRL_P_IEN_Pos
DECL|ISI_DMA_P_CTRL_P_IEN|macro|ISI_DMA_P_CTRL_P_IEN
DECL|ISI_DMA_P_CTRL_P_WB_Msk|macro|ISI_DMA_P_CTRL_P_WB_Msk
DECL|ISI_DMA_P_CTRL_P_WB_Pos|macro|ISI_DMA_P_CTRL_P_WB_Pos
DECL|ISI_DMA_P_CTRL_P_WB|macro|ISI_DMA_P_CTRL_P_WB
DECL|ISI_DMA_P_CTRL_Type|typedef|} ISI_DMA_P_CTRL_Type;
DECL|ISI_DMA_P_CTRL|member|__IO ISI_DMA_P_CTRL_Type ISI_DMA_P_CTRL; /**< Offset: 0x48 (R/W 32) DMA Preview Control Register */
DECL|ISI_DMA_P_CTRL|member|__IO uint32_t ISI_DMA_P_CTRL; /**< (ISI Offset: 0x48) DMA Preview Control Register */
DECL|ISI_DMA_P_DSCR_MASK|macro|ISI_DMA_P_DSCR_MASK
DECL|ISI_DMA_P_DSCR_Msk|macro|ISI_DMA_P_DSCR_Msk
DECL|ISI_DMA_P_DSCR_OFFSET|macro|ISI_DMA_P_DSCR_OFFSET
DECL|ISI_DMA_P_DSCR_P_DSCR_Msk|macro|ISI_DMA_P_DSCR_P_DSCR_Msk
DECL|ISI_DMA_P_DSCR_P_DSCR_Pos|macro|ISI_DMA_P_DSCR_P_DSCR_Pos
DECL|ISI_DMA_P_DSCR_P_DSCR|macro|ISI_DMA_P_DSCR_P_DSCR
DECL|ISI_DMA_P_DSCR_Type|typedef|} ISI_DMA_P_DSCR_Type;
DECL|ISI_DMA_P_DSCR|member|__IO ISI_DMA_P_DSCR_Type ISI_DMA_P_DSCR; /**< Offset: 0x4C (R/W 32) DMA Preview Descriptor Address Register */
DECL|ISI_DMA_P_DSCR|member|__IO uint32_t ISI_DMA_P_DSCR; /**< (ISI Offset: 0x4C) DMA Preview Descriptor Address Register */
DECL|ISI_EN|member|uint32_t ISI_EN:1; /**< bit: 0 ISI Module Enable Request */
DECL|ISI_IDR_CRC_ERR_Msk|macro|ISI_IDR_CRC_ERR_Msk
DECL|ISI_IDR_CRC_ERR_Pos|macro|ISI_IDR_CRC_ERR_Pos
DECL|ISI_IDR_CRC_ERR|macro|ISI_IDR_CRC_ERR
DECL|ISI_IDR_CXFR_DONE_Msk|macro|ISI_IDR_CXFR_DONE_Msk
DECL|ISI_IDR_CXFR_DONE_Pos|macro|ISI_IDR_CXFR_DONE_Pos
DECL|ISI_IDR_CXFR_DONE|macro|ISI_IDR_CXFR_DONE
DECL|ISI_IDR_C_OVR_Msk|macro|ISI_IDR_C_OVR_Msk
DECL|ISI_IDR_C_OVR_Pos|macro|ISI_IDR_C_OVR_Pos
DECL|ISI_IDR_C_OVR|macro|ISI_IDR_C_OVR
DECL|ISI_IDR_DIS_DONE_Msk|macro|ISI_IDR_DIS_DONE_Msk
DECL|ISI_IDR_DIS_DONE_Pos|macro|ISI_IDR_DIS_DONE_Pos
DECL|ISI_IDR_DIS_DONE|macro|ISI_IDR_DIS_DONE
DECL|ISI_IDR_FR_OVR_Msk|macro|ISI_IDR_FR_OVR_Msk
DECL|ISI_IDR_FR_OVR_Pos|macro|ISI_IDR_FR_OVR_Pos
DECL|ISI_IDR_FR_OVR|macro|ISI_IDR_FR_OVR
DECL|ISI_IDR_MASK|macro|ISI_IDR_MASK
DECL|ISI_IDR_Msk|macro|ISI_IDR_Msk
DECL|ISI_IDR_OFFSET|macro|ISI_IDR_OFFSET
DECL|ISI_IDR_PXFR_DONE_Msk|macro|ISI_IDR_PXFR_DONE_Msk
DECL|ISI_IDR_PXFR_DONE_Pos|macro|ISI_IDR_PXFR_DONE_Pos
DECL|ISI_IDR_PXFR_DONE|macro|ISI_IDR_PXFR_DONE
DECL|ISI_IDR_P_OVR_Msk|macro|ISI_IDR_P_OVR_Msk
DECL|ISI_IDR_P_OVR_Pos|macro|ISI_IDR_P_OVR_Pos
DECL|ISI_IDR_P_OVR|macro|ISI_IDR_P_OVR
DECL|ISI_IDR_SRST_Msk|macro|ISI_IDR_SRST_Msk
DECL|ISI_IDR_SRST_Pos|macro|ISI_IDR_SRST_Pos
DECL|ISI_IDR_SRST|macro|ISI_IDR_SRST
DECL|ISI_IDR_Type|typedef|} ISI_IDR_Type;
DECL|ISI_IDR_VSYNC_Msk|macro|ISI_IDR_VSYNC_Msk
DECL|ISI_IDR_VSYNC_Pos|macro|ISI_IDR_VSYNC_Pos
DECL|ISI_IDR_VSYNC|macro|ISI_IDR_VSYNC
DECL|ISI_IDR|member|__O ISI_IDR_Type ISI_IDR; /**< Offset: 0x30 ( /W 32) ISI Interrupt Disable Register */
DECL|ISI_IDR|member|__O uint32_t ISI_IDR; /**< (ISI Offset: 0x30) ISI Interrupt Disable Register */
DECL|ISI_IER_CRC_ERR_Msk|macro|ISI_IER_CRC_ERR_Msk
DECL|ISI_IER_CRC_ERR_Pos|macro|ISI_IER_CRC_ERR_Pos
DECL|ISI_IER_CRC_ERR|macro|ISI_IER_CRC_ERR
DECL|ISI_IER_CXFR_DONE_Msk|macro|ISI_IER_CXFR_DONE_Msk
DECL|ISI_IER_CXFR_DONE_Pos|macro|ISI_IER_CXFR_DONE_Pos
DECL|ISI_IER_CXFR_DONE|macro|ISI_IER_CXFR_DONE
DECL|ISI_IER_C_OVR_Msk|macro|ISI_IER_C_OVR_Msk
DECL|ISI_IER_C_OVR_Pos|macro|ISI_IER_C_OVR_Pos
DECL|ISI_IER_C_OVR|macro|ISI_IER_C_OVR
DECL|ISI_IER_DIS_DONE_Msk|macro|ISI_IER_DIS_DONE_Msk
DECL|ISI_IER_DIS_DONE_Pos|macro|ISI_IER_DIS_DONE_Pos
DECL|ISI_IER_DIS_DONE|macro|ISI_IER_DIS_DONE
DECL|ISI_IER_FR_OVR_Msk|macro|ISI_IER_FR_OVR_Msk
DECL|ISI_IER_FR_OVR_Pos|macro|ISI_IER_FR_OVR_Pos
DECL|ISI_IER_FR_OVR|macro|ISI_IER_FR_OVR
DECL|ISI_IER_MASK|macro|ISI_IER_MASK
DECL|ISI_IER_Msk|macro|ISI_IER_Msk
DECL|ISI_IER_OFFSET|macro|ISI_IER_OFFSET
DECL|ISI_IER_PXFR_DONE_Msk|macro|ISI_IER_PXFR_DONE_Msk
DECL|ISI_IER_PXFR_DONE_Pos|macro|ISI_IER_PXFR_DONE_Pos
DECL|ISI_IER_PXFR_DONE|macro|ISI_IER_PXFR_DONE
DECL|ISI_IER_P_OVR_Msk|macro|ISI_IER_P_OVR_Msk
DECL|ISI_IER_P_OVR_Pos|macro|ISI_IER_P_OVR_Pos
DECL|ISI_IER_P_OVR|macro|ISI_IER_P_OVR
DECL|ISI_IER_SRST_Msk|macro|ISI_IER_SRST_Msk
DECL|ISI_IER_SRST_Pos|macro|ISI_IER_SRST_Pos
DECL|ISI_IER_SRST|macro|ISI_IER_SRST
DECL|ISI_IER_Type|typedef|} ISI_IER_Type;
DECL|ISI_IER_VSYNC_Msk|macro|ISI_IER_VSYNC_Msk
DECL|ISI_IER_VSYNC_Pos|macro|ISI_IER_VSYNC_Pos
DECL|ISI_IER_VSYNC|macro|ISI_IER_VSYNC
DECL|ISI_IER|member|__O ISI_IER_Type ISI_IER; /**< Offset: 0x2C ( /W 32) ISI Interrupt Enable Register */
DECL|ISI_IER|member|__O uint32_t ISI_IER; /**< (ISI Offset: 0x2C) ISI Interrupt Enable Register */
DECL|ISI_IMR_CRC_ERR_Msk|macro|ISI_IMR_CRC_ERR_Msk
DECL|ISI_IMR_CRC_ERR_Pos|macro|ISI_IMR_CRC_ERR_Pos
DECL|ISI_IMR_CRC_ERR|macro|ISI_IMR_CRC_ERR
DECL|ISI_IMR_CXFR_DONE_Msk|macro|ISI_IMR_CXFR_DONE_Msk
DECL|ISI_IMR_CXFR_DONE_Pos|macro|ISI_IMR_CXFR_DONE_Pos
DECL|ISI_IMR_CXFR_DONE|macro|ISI_IMR_CXFR_DONE
DECL|ISI_IMR_C_OVR_Msk|macro|ISI_IMR_C_OVR_Msk
DECL|ISI_IMR_C_OVR_Pos|macro|ISI_IMR_C_OVR_Pos
DECL|ISI_IMR_C_OVR|macro|ISI_IMR_C_OVR
DECL|ISI_IMR_DIS_DONE_Msk|macro|ISI_IMR_DIS_DONE_Msk
DECL|ISI_IMR_DIS_DONE_Pos|macro|ISI_IMR_DIS_DONE_Pos
DECL|ISI_IMR_DIS_DONE|macro|ISI_IMR_DIS_DONE
DECL|ISI_IMR_FR_OVR_Msk|macro|ISI_IMR_FR_OVR_Msk
DECL|ISI_IMR_FR_OVR_Pos|macro|ISI_IMR_FR_OVR_Pos
DECL|ISI_IMR_FR_OVR|macro|ISI_IMR_FR_OVR
DECL|ISI_IMR_MASK|macro|ISI_IMR_MASK
DECL|ISI_IMR_Msk|macro|ISI_IMR_Msk
DECL|ISI_IMR_OFFSET|macro|ISI_IMR_OFFSET
DECL|ISI_IMR_PXFR_DONE_Msk|macro|ISI_IMR_PXFR_DONE_Msk
DECL|ISI_IMR_PXFR_DONE_Pos|macro|ISI_IMR_PXFR_DONE_Pos
DECL|ISI_IMR_PXFR_DONE|macro|ISI_IMR_PXFR_DONE
DECL|ISI_IMR_P_OVR_Msk|macro|ISI_IMR_P_OVR_Msk
DECL|ISI_IMR_P_OVR_Pos|macro|ISI_IMR_P_OVR_Pos
DECL|ISI_IMR_P_OVR|macro|ISI_IMR_P_OVR
DECL|ISI_IMR_SRST_Msk|macro|ISI_IMR_SRST_Msk
DECL|ISI_IMR_SRST_Pos|macro|ISI_IMR_SRST_Pos
DECL|ISI_IMR_SRST|macro|ISI_IMR_SRST
DECL|ISI_IMR_Type|typedef|} ISI_IMR_Type;
DECL|ISI_IMR_VSYNC_Msk|macro|ISI_IMR_VSYNC_Msk
DECL|ISI_IMR_VSYNC_Pos|macro|ISI_IMR_VSYNC_Pos
DECL|ISI_IMR_VSYNC|macro|ISI_IMR_VSYNC
DECL|ISI_IMR|member|__I ISI_IMR_Type ISI_IMR; /**< Offset: 0x34 (R/ 32) ISI Interrupt Mask Register */
DECL|ISI_IMR|member|__I uint32_t ISI_IMR; /**< (ISI Offset: 0x34) ISI Interrupt Mask Register */
DECL|ISI_PDECF_DEC_FACTOR_Msk|macro|ISI_PDECF_DEC_FACTOR_Msk
DECL|ISI_PDECF_DEC_FACTOR_Pos|macro|ISI_PDECF_DEC_FACTOR_Pos
DECL|ISI_PDECF_DEC_FACTOR|macro|ISI_PDECF_DEC_FACTOR
DECL|ISI_PDECF_MASK|macro|ISI_PDECF_MASK
DECL|ISI_PDECF_Msk|macro|ISI_PDECF_Msk
DECL|ISI_PDECF_OFFSET|macro|ISI_PDECF_OFFSET
DECL|ISI_PDECF_Type|typedef|} ISI_PDECF_Type;
DECL|ISI_PDECF|member|__IO ISI_PDECF_Type ISI_PDECF; /**< Offset: 0x0C (R/W 32) ISI Preview Decimation Factor Register */
DECL|ISI_PDECF|member|__IO uint32_t ISI_PDECF; /**< (ISI Offset: 0x0C) ISI Preview Decimation Factor Register */
DECL|ISI_PSIZE_MASK|macro|ISI_PSIZE_MASK
DECL|ISI_PSIZE_Msk|macro|ISI_PSIZE_Msk
DECL|ISI_PSIZE_OFFSET|macro|ISI_PSIZE_OFFSET
DECL|ISI_PSIZE_PREV_HSIZE_Msk|macro|ISI_PSIZE_PREV_HSIZE_Msk
DECL|ISI_PSIZE_PREV_HSIZE_Pos|macro|ISI_PSIZE_PREV_HSIZE_Pos
DECL|ISI_PSIZE_PREV_HSIZE|macro|ISI_PSIZE_PREV_HSIZE
DECL|ISI_PSIZE_PREV_VSIZE_Msk|macro|ISI_PSIZE_PREV_VSIZE_Msk
DECL|ISI_PSIZE_PREV_VSIZE_Pos|macro|ISI_PSIZE_PREV_VSIZE_Pos
DECL|ISI_PSIZE_PREV_VSIZE|macro|ISI_PSIZE_PREV_VSIZE
DECL|ISI_PSIZE_Type|typedef|} ISI_PSIZE_Type;
DECL|ISI_PSIZE|member|__IO ISI_PSIZE_Type ISI_PSIZE; /**< Offset: 0x08 (R/W 32) ISI Preview Size Register */
DECL|ISI_PSIZE|member|__IO uint32_t ISI_PSIZE; /**< (ISI Offset: 0x08) ISI Preview Size Register */
DECL|ISI_R2Y_SET0_C0_Msk|macro|ISI_R2Y_SET0_C0_Msk
DECL|ISI_R2Y_SET0_C0_Pos|macro|ISI_R2Y_SET0_C0_Pos
DECL|ISI_R2Y_SET0_C0|macro|ISI_R2Y_SET0_C0
DECL|ISI_R2Y_SET0_C1_Msk|macro|ISI_R2Y_SET0_C1_Msk
DECL|ISI_R2Y_SET0_C1_Pos|macro|ISI_R2Y_SET0_C1_Pos
DECL|ISI_R2Y_SET0_C1|macro|ISI_R2Y_SET0_C1
DECL|ISI_R2Y_SET0_C2_Msk|macro|ISI_R2Y_SET0_C2_Msk
DECL|ISI_R2Y_SET0_C2_Pos|macro|ISI_R2Y_SET0_C2_Pos
DECL|ISI_R2Y_SET0_C2|macro|ISI_R2Y_SET0_C2
DECL|ISI_R2Y_SET0_MASK|macro|ISI_R2Y_SET0_MASK
DECL|ISI_R2Y_SET0_Msk|macro|ISI_R2Y_SET0_Msk
DECL|ISI_R2Y_SET0_OFFSET|macro|ISI_R2Y_SET0_OFFSET
DECL|ISI_R2Y_SET0_Roff_Msk|macro|ISI_R2Y_SET0_Roff_Msk
DECL|ISI_R2Y_SET0_Roff_Pos|macro|ISI_R2Y_SET0_Roff_Pos
DECL|ISI_R2Y_SET0_Roff|macro|ISI_R2Y_SET0_Roff
DECL|ISI_R2Y_SET0_Type|typedef|} ISI_R2Y_SET0_Type;
DECL|ISI_R2Y_SET0|member|__IO ISI_R2Y_SET0_Type ISI_R2Y_SET0; /**< Offset: 0x18 (R/W 32) ISI Color Space Conversion RGB To YCrCb Set 0 Register */
DECL|ISI_R2Y_SET0|member|__IO uint32_t ISI_R2Y_SET0; /**< (ISI Offset: 0x18) ISI Color Space Conversion RGB To YCrCb Set 0 Register */
DECL|ISI_R2Y_SET1_C3_Msk|macro|ISI_R2Y_SET1_C3_Msk
DECL|ISI_R2Y_SET1_C3_Pos|macro|ISI_R2Y_SET1_C3_Pos
DECL|ISI_R2Y_SET1_C3|macro|ISI_R2Y_SET1_C3
DECL|ISI_R2Y_SET1_C4_Msk|macro|ISI_R2Y_SET1_C4_Msk
DECL|ISI_R2Y_SET1_C4_Pos|macro|ISI_R2Y_SET1_C4_Pos
DECL|ISI_R2Y_SET1_C4|macro|ISI_R2Y_SET1_C4
DECL|ISI_R2Y_SET1_C5_Msk|macro|ISI_R2Y_SET1_C5_Msk
DECL|ISI_R2Y_SET1_C5_Pos|macro|ISI_R2Y_SET1_C5_Pos
DECL|ISI_R2Y_SET1_C5|macro|ISI_R2Y_SET1_C5
DECL|ISI_R2Y_SET1_Goff_Msk|macro|ISI_R2Y_SET1_Goff_Msk
DECL|ISI_R2Y_SET1_Goff_Pos|macro|ISI_R2Y_SET1_Goff_Pos
DECL|ISI_R2Y_SET1_Goff|macro|ISI_R2Y_SET1_Goff
DECL|ISI_R2Y_SET1_MASK|macro|ISI_R2Y_SET1_MASK
DECL|ISI_R2Y_SET1_Msk|macro|ISI_R2Y_SET1_Msk
DECL|ISI_R2Y_SET1_OFFSET|macro|ISI_R2Y_SET1_OFFSET
DECL|ISI_R2Y_SET1_Type|typedef|} ISI_R2Y_SET1_Type;
DECL|ISI_R2Y_SET1|member|__IO ISI_R2Y_SET1_Type ISI_R2Y_SET1; /**< Offset: 0x1C (R/W 32) ISI Color Space Conversion RGB To YCrCb Set 1 Register */
DECL|ISI_R2Y_SET1|member|__IO uint32_t ISI_R2Y_SET1; /**< (ISI Offset: 0x1C) ISI Color Space Conversion RGB To YCrCb Set 1 Register */
DECL|ISI_R2Y_SET2_Boff_Msk|macro|ISI_R2Y_SET2_Boff_Msk
DECL|ISI_R2Y_SET2_Boff_Pos|macro|ISI_R2Y_SET2_Boff_Pos
DECL|ISI_R2Y_SET2_Boff|macro|ISI_R2Y_SET2_Boff
DECL|ISI_R2Y_SET2_C6_Msk|macro|ISI_R2Y_SET2_C6_Msk
DECL|ISI_R2Y_SET2_C6_Pos|macro|ISI_R2Y_SET2_C6_Pos
DECL|ISI_R2Y_SET2_C6|macro|ISI_R2Y_SET2_C6
DECL|ISI_R2Y_SET2_C7_Msk|macro|ISI_R2Y_SET2_C7_Msk
DECL|ISI_R2Y_SET2_C7_Pos|macro|ISI_R2Y_SET2_C7_Pos
DECL|ISI_R2Y_SET2_C7|macro|ISI_R2Y_SET2_C7
DECL|ISI_R2Y_SET2_C8_Msk|macro|ISI_R2Y_SET2_C8_Msk
DECL|ISI_R2Y_SET2_C8_Pos|macro|ISI_R2Y_SET2_C8_Pos
DECL|ISI_R2Y_SET2_C8|macro|ISI_R2Y_SET2_C8
DECL|ISI_R2Y_SET2_MASK|macro|ISI_R2Y_SET2_MASK
DECL|ISI_R2Y_SET2_Msk|macro|ISI_R2Y_SET2_Msk
DECL|ISI_R2Y_SET2_OFFSET|macro|ISI_R2Y_SET2_OFFSET
DECL|ISI_R2Y_SET2_Type|typedef|} ISI_R2Y_SET2_Type;
DECL|ISI_R2Y_SET2|member|__IO ISI_R2Y_SET2_Type ISI_R2Y_SET2; /**< Offset: 0x20 (R/W 32) ISI Color Space Conversion RGB To YCrCb Set 2 Register */
DECL|ISI_R2Y_SET2|member|__IO uint32_t ISI_R2Y_SET2; /**< (ISI Offset: 0x20) ISI Color Space Conversion RGB To YCrCb Set 2 Register */
DECL|ISI_SRST|member|uint32_t ISI_SRST:1; /**< bit: 2 ISI Software Reset Request */
DECL|ISI_SR_CDC_PND_Msk|macro|ISI_SR_CDC_PND_Msk
DECL|ISI_SR_CDC_PND_Pos|macro|ISI_SR_CDC_PND_Pos
DECL|ISI_SR_CDC_PND|macro|ISI_SR_CDC_PND
DECL|ISI_SR_CRC_ERR_Msk|macro|ISI_SR_CRC_ERR_Msk
DECL|ISI_SR_CRC_ERR_Pos|macro|ISI_SR_CRC_ERR_Pos
DECL|ISI_SR_CRC_ERR|macro|ISI_SR_CRC_ERR
DECL|ISI_SR_CXFR_DONE_Msk|macro|ISI_SR_CXFR_DONE_Msk
DECL|ISI_SR_CXFR_DONE_Pos|macro|ISI_SR_CXFR_DONE_Pos
DECL|ISI_SR_CXFR_DONE|macro|ISI_SR_CXFR_DONE
DECL|ISI_SR_C_OVR_Msk|macro|ISI_SR_C_OVR_Msk
DECL|ISI_SR_C_OVR_Pos|macro|ISI_SR_C_OVR_Pos
DECL|ISI_SR_C_OVR|macro|ISI_SR_C_OVR
DECL|ISI_SR_DIS_DONE_Msk|macro|ISI_SR_DIS_DONE_Msk
DECL|ISI_SR_DIS_DONE_Pos|macro|ISI_SR_DIS_DONE_Pos
DECL|ISI_SR_DIS_DONE|macro|ISI_SR_DIS_DONE
DECL|ISI_SR_ENABLE_Msk|macro|ISI_SR_ENABLE_Msk
DECL|ISI_SR_ENABLE_Pos|macro|ISI_SR_ENABLE_Pos
DECL|ISI_SR_ENABLE|macro|ISI_SR_ENABLE
DECL|ISI_SR_FR_OVR_Msk|macro|ISI_SR_FR_OVR_Msk
DECL|ISI_SR_FR_OVR_Pos|macro|ISI_SR_FR_OVR_Pos
DECL|ISI_SR_FR_OVR|macro|ISI_SR_FR_OVR
DECL|ISI_SR_MASK|macro|ISI_SR_MASK
DECL|ISI_SR_Msk|macro|ISI_SR_Msk
DECL|ISI_SR_OFFSET|macro|ISI_SR_OFFSET
DECL|ISI_SR_PXFR_DONE_Msk|macro|ISI_SR_PXFR_DONE_Msk
DECL|ISI_SR_PXFR_DONE_Pos|macro|ISI_SR_PXFR_DONE_Pos
DECL|ISI_SR_PXFR_DONE|macro|ISI_SR_PXFR_DONE
DECL|ISI_SR_P_OVR_Msk|macro|ISI_SR_P_OVR_Msk
DECL|ISI_SR_P_OVR_Pos|macro|ISI_SR_P_OVR_Pos
DECL|ISI_SR_P_OVR|macro|ISI_SR_P_OVR
DECL|ISI_SR_SIP_Msk|macro|ISI_SR_SIP_Msk
DECL|ISI_SR_SIP_Pos|macro|ISI_SR_SIP_Pos
DECL|ISI_SR_SIP|macro|ISI_SR_SIP
DECL|ISI_SR_SRST_Msk|macro|ISI_SR_SRST_Msk
DECL|ISI_SR_SRST_Pos|macro|ISI_SR_SRST_Pos
DECL|ISI_SR_SRST|macro|ISI_SR_SRST
DECL|ISI_SR_Type|typedef|} ISI_SR_Type;
DECL|ISI_SR_VSYNC_Msk|macro|ISI_SR_VSYNC_Msk
DECL|ISI_SR_VSYNC_Pos|macro|ISI_SR_VSYNC_Pos
DECL|ISI_SR_VSYNC|macro|ISI_SR_VSYNC
DECL|ISI_SR|member|__I ISI_SR_Type ISI_SR; /**< Offset: 0x28 (R/ 32) ISI Status Register */
DECL|ISI_SR|member|__I uint32_t ISI_SR; /**< (ISI Offset: 0x28) ISI Status Register */
DECL|ISI_WPMR_MASK|macro|ISI_WPMR_MASK
DECL|ISI_WPMR_Msk|macro|ISI_WPMR_Msk
DECL|ISI_WPMR_OFFSET|macro|ISI_WPMR_OFFSET
DECL|ISI_WPMR_Type|typedef|} ISI_WPMR_Type;
DECL|ISI_WPMR_WPEN_Msk|macro|ISI_WPMR_WPEN_Msk
DECL|ISI_WPMR_WPEN_Pos|macro|ISI_WPMR_WPEN_Pos
DECL|ISI_WPMR_WPEN|macro|ISI_WPMR_WPEN
DECL|ISI_WPMR_WPKEY_Msk|macro|ISI_WPMR_WPKEY_Msk
DECL|ISI_WPMR_WPKEY_PASSWD_Val|macro|ISI_WPMR_WPKEY_PASSWD_Val
DECL|ISI_WPMR_WPKEY_PASSWD|macro|ISI_WPMR_WPKEY_PASSWD
DECL|ISI_WPMR_WPKEY_Pos|macro|ISI_WPMR_WPKEY_Pos
DECL|ISI_WPMR_WPKEY|macro|ISI_WPMR_WPKEY
DECL|ISI_WPMR|member|__IO ISI_WPMR_Type ISI_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|ISI_WPMR|member|__IO uint32_t ISI_WPMR; /**< (ISI Offset: 0xE4) Write Protection Mode Register */
DECL|ISI_WPSR_MASK|macro|ISI_WPSR_MASK
DECL|ISI_WPSR_Msk|macro|ISI_WPSR_Msk
DECL|ISI_WPSR_OFFSET|macro|ISI_WPSR_OFFSET
DECL|ISI_WPSR_Type|typedef|} ISI_WPSR_Type;
DECL|ISI_WPSR_WPVSRC_Msk|macro|ISI_WPSR_WPVSRC_Msk
DECL|ISI_WPSR_WPVSRC_Pos|macro|ISI_WPSR_WPVSRC_Pos
DECL|ISI_WPSR_WPVSRC|macro|ISI_WPSR_WPVSRC
DECL|ISI_WPSR_WPVS_Msk|macro|ISI_WPSR_WPVS_Msk
DECL|ISI_WPSR_WPVS_Pos|macro|ISI_WPSR_WPVS_Pos
DECL|ISI_WPSR_WPVS|macro|ISI_WPSR_WPVS
DECL|ISI_WPSR|member|__I ISI_WPSR_Type ISI_WPSR; /**< Offset: 0xE8 (R/ 32) Write Protection Status Register */
DECL|ISI_WPSR|member|__I uint32_t ISI_WPSR; /**< (ISI Offset: 0xE8) Write Protection Status Register */
DECL|ISI_Y2R_SET0_C0_Msk|macro|ISI_Y2R_SET0_C0_Msk
DECL|ISI_Y2R_SET0_C0_Pos|macro|ISI_Y2R_SET0_C0_Pos
DECL|ISI_Y2R_SET0_C0|macro|ISI_Y2R_SET0_C0
DECL|ISI_Y2R_SET0_C1_Msk|macro|ISI_Y2R_SET0_C1_Msk
DECL|ISI_Y2R_SET0_C1_Pos|macro|ISI_Y2R_SET0_C1_Pos
DECL|ISI_Y2R_SET0_C1|macro|ISI_Y2R_SET0_C1
DECL|ISI_Y2R_SET0_C2_Msk|macro|ISI_Y2R_SET0_C2_Msk
DECL|ISI_Y2R_SET0_C2_Pos|macro|ISI_Y2R_SET0_C2_Pos
DECL|ISI_Y2R_SET0_C2|macro|ISI_Y2R_SET0_C2
DECL|ISI_Y2R_SET0_C3_Msk|macro|ISI_Y2R_SET0_C3_Msk
DECL|ISI_Y2R_SET0_C3_Pos|macro|ISI_Y2R_SET0_C3_Pos
DECL|ISI_Y2R_SET0_C3|macro|ISI_Y2R_SET0_C3
DECL|ISI_Y2R_SET0_MASK|macro|ISI_Y2R_SET0_MASK
DECL|ISI_Y2R_SET0_Msk|macro|ISI_Y2R_SET0_Msk
DECL|ISI_Y2R_SET0_OFFSET|macro|ISI_Y2R_SET0_OFFSET
DECL|ISI_Y2R_SET0_Type|typedef|} ISI_Y2R_SET0_Type;
DECL|ISI_Y2R_SET0|member|__IO ISI_Y2R_SET0_Type ISI_Y2R_SET0; /**< Offset: 0x10 (R/W 32) ISI Color Space Conversion YCrCb To RGB Set 0 Register */
DECL|ISI_Y2R_SET0|member|__IO uint32_t ISI_Y2R_SET0; /**< (ISI Offset: 0x10) ISI Color Space Conversion YCrCb To RGB Set 0 Register */
DECL|ISI_Y2R_SET1_C4_Msk|macro|ISI_Y2R_SET1_C4_Msk
DECL|ISI_Y2R_SET1_C4_Pos|macro|ISI_Y2R_SET1_C4_Pos
DECL|ISI_Y2R_SET1_C4|macro|ISI_Y2R_SET1_C4
DECL|ISI_Y2R_SET1_Cboff_Msk|macro|ISI_Y2R_SET1_Cboff_Msk
DECL|ISI_Y2R_SET1_Cboff_Pos|macro|ISI_Y2R_SET1_Cboff_Pos
DECL|ISI_Y2R_SET1_Cboff|macro|ISI_Y2R_SET1_Cboff
DECL|ISI_Y2R_SET1_Croff_Msk|macro|ISI_Y2R_SET1_Croff_Msk
DECL|ISI_Y2R_SET1_Croff_Pos|macro|ISI_Y2R_SET1_Croff_Pos
DECL|ISI_Y2R_SET1_Croff|macro|ISI_Y2R_SET1_Croff
DECL|ISI_Y2R_SET1_MASK|macro|ISI_Y2R_SET1_MASK
DECL|ISI_Y2R_SET1_Msk|macro|ISI_Y2R_SET1_Msk
DECL|ISI_Y2R_SET1_OFFSET|macro|ISI_Y2R_SET1_OFFSET
DECL|ISI_Y2R_SET1_Type|typedef|} ISI_Y2R_SET1_Type;
DECL|ISI_Y2R_SET1_Yoff_Msk|macro|ISI_Y2R_SET1_Yoff_Msk
DECL|ISI_Y2R_SET1_Yoff_Pos|macro|ISI_Y2R_SET1_Yoff_Pos
DECL|ISI_Y2R_SET1_Yoff|macro|ISI_Y2R_SET1_Yoff
DECL|ISI_Y2R_SET1|member|__IO ISI_Y2R_SET1_Type ISI_Y2R_SET1; /**< Offset: 0x14 (R/W 32) ISI Color Space Conversion YCrCb To RGB Set 1 Register */
DECL|ISI_Y2R_SET1|member|__IO uint32_t ISI_Y2R_SET1; /**< (ISI Offset: 0x14) ISI Color Space Conversion YCrCb To RGB Set 1 Register */
DECL|Isi|typedef|} Isi;
DECL|Isi|typedef|} Isi;
DECL|PIXCLK_POL|member|uint32_t PIXCLK_POL:1; /**< bit: 4 Pixel Clock Polarity */
DECL|PREV_HSIZE|member|uint32_t PREV_HSIZE:10; /**< bit: 16..25 Horizontal Size for the Preview Path */
DECL|PREV_VSIZE|member|uint32_t PREV_VSIZE:10; /**< bit: 0..9 Vertical Size for the Preview Path */
DECL|PXFR_DONE|member|uint32_t PXFR_DONE:1; /**< bit: 16 Preview DMA Transfer Completed */
DECL|PXFR_DONE|member|uint32_t PXFR_DONE:1; /**< bit: 16 Preview DMA Transfer Done Interrupt Disable */
DECL|PXFR_DONE|member|uint32_t PXFR_DONE:1; /**< bit: 16 Preview DMA Transfer Done Interrupt Enable */
DECL|PXFR_DONE|member|uint32_t PXFR_DONE:1; /**< bit: 16 Preview DMA Transfer has Terminated (cleared on read) */
DECL|P_ADDR|member|uint32_t P_ADDR:30; /**< bit: 2..31 Preview Image Base Address */
DECL|P_CH_DIS|member|uint32_t P_CH_DIS:1; /**< bit: 0 Preview Channel Disable Request */
DECL|P_CH_EN|member|uint32_t P_CH_EN:1; /**< bit: 0 Preview Channel Enable */
DECL|P_CH_S|member|uint32_t P_CH_S:1; /**< bit: 0 Preview DMA Channel Status */
DECL|P_DONE|member|uint32_t P_DONE:1; /**< bit: 3 Preview Transfer Done */
DECL|P_DSCR|member|uint32_t P_DSCR:30; /**< bit: 2..31 Preview Descriptor Base Address */
DECL|P_FETCH|member|uint32_t P_FETCH:1; /**< bit: 0 Descriptor Fetch Control Bit */
DECL|P_IEN|member|uint32_t P_IEN:1; /**< bit: 2 Transfer Done Flag Control */
DECL|P_OVR|member|uint32_t P_OVR:1; /**< bit: 24 Preview Datapath Overflow (cleared on read) */
DECL|P_OVR|member|uint32_t P_OVR:1; /**< bit: 24 Preview Datapath Overflow Interrupt Disable */
DECL|P_OVR|member|uint32_t P_OVR:1; /**< bit: 24 Preview Datapath Overflow Interrupt Enable */
DECL|P_OVR|member|uint32_t P_OVR:1; /**< bit: 24 Preview FIFO Overflow */
DECL|P_WB|member|uint32_t P_WB:1; /**< bit: 1 Descriptor Writeback Control Bit */
DECL|REV_ISI|macro|REV_ISI
DECL|RGB_CFG|member|uint32_t RGB_CFG:2; /**< bit: 30..31 RGB Pixel Mapping Configuration */
DECL|RGB_MODE|member|uint32_t RGB_MODE:1; /**< bit: 12 RGB Input Mode */
DECL|RGB_SWAP|member|uint32_t RGB_SWAP:1; /**< bit: 14 RGB Format Swap Mode */
DECL|Reserved1|member|RoReg8 Reserved1[0x88];
DECL|Reserved1|member|__I uint32_t Reserved1[34];
DECL|Roff|member|uint32_t Roff:1; /**< bit: 24 Color Space Conversion Red Component Offset */
DECL|SFD|member|uint32_t SFD:8; /**< bit: 24..31 Start of Frame Delay */
DECL|SIP|member|uint32_t SIP:1; /**< bit: 19 Synchronization in Progress */
DECL|SLD|member|uint32_t SLD:8; /**< bit: 16..23 Start of Line Delay */
DECL|SRST|member|uint32_t SRST:1; /**< bit: 2 Module Software Reset Request has Terminated (cleared on read) */
DECL|SRST|member|uint32_t SRST:1; /**< bit: 2 Software Reset Completed */
DECL|SRST|member|uint32_t SRST:1; /**< bit: 2 Software Reset Interrupt Disable */
DECL|SRST|member|uint32_t SRST:1; /**< bit: 2 Software Reset Interrupt Enable */
DECL|THMASK|member|uint32_t THMASK:2; /**< bit: 13..14 Threshold Mask */
DECL|VSYNC_POL|member|uint32_t VSYNC_POL:1; /**< bit: 3 Vertical Synchronization Polarity */
DECL|VSYNC|member|uint32_t VSYNC:1; /**< bit: 10 Vertical Synchronization (cleared on read) */
DECL|VSYNC|member|uint32_t VSYNC:1; /**< bit: 10 Vertical Synchronization */
DECL|VSYNC|member|uint32_t VSYNC:1; /**< bit: 10 Vertical Synchronization Interrupt Disable */
DECL|VSYNC|member|uint32_t VSYNC:1; /**< bit: 10 Vertical Synchronization Interrupt Enable */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key Password */
DECL|WPVSRC|member|uint32_t WPVSRC:16; /**< bit: 8..23 Write Protection Violation Source */
DECL|WPVS|member|uint32_t WPVS:1; /**< bit: 0 Write Protection Violation Status */
DECL|YCC_SWAP|member|uint32_t YCC_SWAP:2; /**< bit: 28..29 YCrCb Format Swap Mode */
DECL|Yoff|member|uint32_t Yoff:1; /**< bit: 12 Color Space Conversion Luminance Default Offset */
DECL|_SAME70_ISI_COMPONENT_H_|macro|_SAME70_ISI_COMPONENT_H_
DECL|_SAME70_ISI_COMPONENT_|macro|_SAME70_ISI_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :17; /**< bit: 15..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 0 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 0 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 0 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 18 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 23 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 23 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 23 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 27 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 5 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 9 Reserved */
DECL|uint32_t|member|uint32_t :23; /**< bit: 9..31 Reserved */
DECL|uint32_t|member|uint32_t :24; /**< bit: 8..31 Reserved */
DECL|uint32_t|member|uint32_t :28; /**< bit: 4..31 Reserved */
DECL|uint32_t|member|uint32_t :28; /**< bit: 4..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 0..1 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 0..1 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 0..1 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 0..1 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 0..1 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :30; /**< bit: 2..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 9..11 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 20..23 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :4; /**< bit: 28..31 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 11..15 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 3..7 Reserved */
DECL|uint32_t|member|uint32_t :5; /**< bit: 3..7 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 10..15 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 18..23 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 18..23 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 18..23 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 26..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 25..31 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 3..9 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 3..9 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 3..9 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
