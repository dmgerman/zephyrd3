DECL|ARB_EP_CFG|member|__IOM uint32_t ARB_EP_CFG; /**< Arbiter Configuration register */
DECL|ARB_EP_INT_EN|member|__IOM uint32_t ARB_EP_INT_EN; /**< Arbiter Interrupt Enable register */
DECL|ARB_EP_SR|member|__IOM uint32_t ARB_EP_SR; /**< Arbiter Interrupt Status register */
DECL|ARB_RW_DR16|member|__IOM uint32_t ARB_RW_DR16; /**< Arbiter Data register (16 bits) */
DECL|ARB_RW_DR|member|__IOM uint32_t ARB_RW_DR; /**< Arbiter Data register */
DECL|ARB_RW_RA16|member|__IOM uint32_t ARB_RW_RA16; /**< Arbiter Read Address register (16 bits) */
DECL|ARB_RW_RA_MSB|member|__IOM uint32_t ARB_RW_RA_MSB; /**< Arbiter Write Address register MSB */
DECL|ARB_RW_RA|member|__IOM uint32_t ARB_RW_RA; /**< Arbiter Read Address register */
DECL|ARB_RW_WA16|member|__IOM uint32_t ARB_RW_WA16; /**< Arbiter Write Address register (16 bits) */
DECL|ARB_RW_WA_MSB|member|__IOM uint32_t ARB_RW_WA_MSB; /**< Arbiter Write Address register MSB */
DECL|ARB_RW_WA|member|__IOM uint32_t ARB_RW_WA; /**< Arbiter Write Address register */
DECL|CY_USBFS_DEV_DRV_EP0_BUFFER_SIZE|macro|CY_USBFS_DEV_DRV_EP0_BUFFER_SIZE
DECL|CY_USBFS_DEV_DRV_EP_CRC_SIZE|macro|CY_USBFS_DEV_DRV_EP_CRC_SIZE
DECL|CY_USBFS_DEV_DRV_EP_CR_ACK_IN_STATUS_OUT|macro|CY_USBFS_DEV_DRV_EP_CR_ACK_IN_STATUS_OUT
DECL|CY_USBFS_DEV_DRV_EP_CR_ACK_IN|macro|CY_USBFS_DEV_DRV_EP_CR_ACK_IN
DECL|CY_USBFS_DEV_DRV_EP_CR_ACK_OUT_STATUS_IN|macro|CY_USBFS_DEV_DRV_EP_CR_ACK_OUT_STATUS_IN
DECL|CY_USBFS_DEV_DRV_EP_CR_ACK_OUT|macro|CY_USBFS_DEV_DRV_EP_CR_ACK_OUT
DECL|CY_USBFS_DEV_DRV_EP_CR_DISABLE|macro|CY_USBFS_DEV_DRV_EP_CR_DISABLE
DECL|CY_USBFS_DEV_DRV_EP_CR_ISO_IN|macro|CY_USBFS_DEV_DRV_EP_CR_ISO_IN
DECL|CY_USBFS_DEV_DRV_EP_CR_ISO_OUT|macro|CY_USBFS_DEV_DRV_EP_CR_ISO_OUT
DECL|CY_USBFS_DEV_DRV_EP_CR_NAK_INOUT|macro|CY_USBFS_DEV_DRV_EP_CR_NAK_INOUT
DECL|CY_USBFS_DEV_DRV_EP_CR_NAK_IN|macro|CY_USBFS_DEV_DRV_EP_CR_NAK_IN
DECL|CY_USBFS_DEV_DRV_EP_CR_NAK_OUT|macro|CY_USBFS_DEV_DRV_EP_CR_NAK_OUT
DECL|CY_USBFS_DEV_DRV_EP_CR_STALL_INOUT|macro|CY_USBFS_DEV_DRV_EP_CR_STALL_INOUT
DECL|CY_USBFS_DEV_DRV_EP_CR_STATUS_IN_ONLY|macro|CY_USBFS_DEV_DRV_EP_CR_STATUS_IN_ONLY
DECL|CY_USBFS_DEV_DRV_EP_CR_STATUS_OUT_ONLY|macro|CY_USBFS_DEV_DRV_EP_CR_STATUS_OUT_ONLY
DECL|CY_USBFS_DEV_DRV_HW_BUFFER_SIZE|macro|CY_USBFS_DEV_DRV_HW_BUFFER_SIZE
DECL|CY_USBFS_DEV_DRV_INTR_SIE_BUS_RESET|macro|CY_USBFS_DEV_DRV_INTR_SIE_BUS_RESET
DECL|CY_USBFS_DEV_DRV_INTR_SIE_EP0|macro|CY_USBFS_DEV_DRV_INTR_SIE_EP0
DECL|CY_USBFS_DEV_DRV_INTR_SIE_LPM|macro|CY_USBFS_DEV_DRV_INTR_SIE_LPM
DECL|CY_USBFS_DEV_DRV_INTR_SIE_RESUME|macro|CY_USBFS_DEV_DRV_INTR_SIE_RESUME
DECL|CY_USBFS_DEV_DRV_INTR_SIE_SOF|macro|CY_USBFS_DEV_DRV_INTR_SIE_SOF
DECL|CY_USBFS_DEV_DRV_NUM_EPS_MAX|macro|CY_USBFS_DEV_DRV_NUM_EPS_MAX
DECL|CY_USBFS_DEV_DRV_REG_H|macro|CY_USBFS_DEV_DRV_REG_H
DECL|CY_USBFS_DEV_DRV_WRITE_ODD|macro|CY_USBFS_DEV_DRV_WRITE_ODD
DECL|CY_USBFS_DEV_READ_ODD|macro|CY_USBFS_DEV_READ_ODD
DECL|Cy_USBFS_Dev_Drv_ClearArbCfgEpInReady|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_ClearArbCfgEpInReady(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_ClearArbEpInterrupt|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_ClearArbEpInterrupt(USBFS_Type *base, uint32_t endpoint, uint32_t mask)
DECL|Cy_USBFS_Dev_Drv_ClearSieEpInterrupt|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_ClearSieEpInterrupt(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_ClearSieEpToggle|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_ClearSieEpToggle(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_ClearSieInterrupt|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_ClearSieInterrupt(USBFS_Type *base, uint32_t mask)
DECL|Cy_USBFS_Dev_Drv_DisableArbEpInterrupt|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_DisableArbEpInterrupt(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_DisableSieEpInterrupt|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_DisableSieEpInterrupt(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_EnableArbEpInterrupt|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_EnableArbEpInterrupt(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_EnableSieEpInterrupt|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_EnableSieEpInterrupt(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetArbAllEpsInterruptStatus|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetArbAllEpsInterruptStatus(USBFS_Type const *base)
DECL|Cy_USBFS_Dev_Drv_GetArbEpInterruptMask|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetArbEpInterruptMask(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetArbEpInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetArbEpInterruptStatusMasked(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetArbReadAddr|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetArbReadAddr(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetArbWriteAddr|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetArbWriteAddr(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetDataReg16Addr|function|__STATIC_INLINE void * Cy_USBFS_Dev_Drv_GetDataReg16Addr(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetDataRegAddr|function|__STATIC_INLINE void * Cy_USBFS_Dev_Drv_GetDataRegAddr(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetEp0Count|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetEp0Count(USBFS_Type *base)
DECL|Cy_USBFS_Dev_Drv_GetSieAllEpsInterruptStatus|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetSieAllEpsInterruptStatus(USBFS_Type const *base)
DECL|Cy_USBFS_Dev_Drv_GetSieEpCount|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetSieEpCount(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetSieEpError|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetSieEpError(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetSieEpToggle|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetSieEpToggle(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_GetSieInterruptMask|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetSieInterruptMask(USBFS_Type const *base)
DECL|Cy_USBFS_Dev_Drv_GetSieInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetSieInterruptStatusMasked(USBFS_Type const *base)
DECL|Cy_USBFS_Dev_Drv_GetSieInterruptStatus|function|__STATIC_INLINE uint32_t Cy_USBFS_Dev_Drv_GetSieInterruptStatus(USBFS_Type const *base)
DECL|Cy_USBFS_Dev_Drv_ReadData16|function|__STATIC_INLINE uint16_t Cy_USBFS_Dev_Drv_ReadData16(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_ReadData|function|__STATIC_INLINE uint8_t Cy_USBFS_Dev_Drv_ReadData(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_SetArbCfgEpInReady|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetArbCfgEpInReady(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_SetArbEpConfig|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetArbEpConfig(USBFS_Type *base, uint32_t endpoint, uint32_t cfg)
DECL|Cy_USBFS_Dev_Drv_SetArbEpInterruptMask|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetArbEpInterruptMask(USBFS_Type *base, uint32_t endpoint, uint32_t mask)
DECL|Cy_USBFS_Dev_Drv_SetArbReadAddr|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetArbReadAddr(USBFS_Type *base, uint32_t endpoint, uint32_t ra)
DECL|Cy_USBFS_Dev_Drv_SetArbWriteAddr|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetArbWriteAddr(USBFS_Type *base, uint32_t endpoint, uint32_t wa)
DECL|Cy_USBFS_Dev_Drv_SetEpType|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetEpType(USBFS_Type *base, bool inDir, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_SetSieEpCount|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetSieEpCount(USBFS_Type *base, uint32_t endpoint, uint32_t count, uint32_t toggle)
DECL|Cy_USBFS_Dev_Drv_SetSieEpMode|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetSieEpMode(USBFS_Type *base, uint32_t endpoint, uint32_t mode)
DECL|Cy_USBFS_Dev_Drv_SetSieInterruptMask|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetSieInterruptMask(USBFS_Type *base, uint32_t mask)
DECL|Cy_USBFS_Dev_Drv_SetSieInterrupt|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_SetSieInterrupt(USBFS_Type *base, uint32_t mask)
DECL|Cy_USBFS_Dev_Drv_TriggerArbCfgEpDmaReq|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_TriggerArbCfgEpDmaReq(USBFS_Type *base, uint32_t endpoint)
DECL|Cy_USBFS_Dev_Drv_WriteData16|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_WriteData16(USBFS_Type *base, uint32_t endpoint, uint16_t halfword)
DECL|Cy_USBFS_Dev_Drv_WriteData|function|__STATIC_INLINE void Cy_USBFS_Dev_Drv_WriteData(USBFS_Type *base, uint32_t endpoint, uint8_t byte)
DECL|EP16|member|cy_stc_usbfs_dev_drv_arb16_t EP16[CY_USBFS_DEV_DRV_NUM_EPS_MAX]; /**< Data Endpoints Arbiter 16-bit registers array */
DECL|EP8|member|cy_stc_usbfs_dev_drv_arb8_t EP8[CY_USBFS_DEV_DRV_NUM_EPS_MAX]; /**< Data Endpoints Arbiter registers array */
DECL|EP|member|cy_stc_usbfs_dev_drv_sie_t EP[CY_USBFS_DEV_DRV_NUM_EPS_MAX]; /**< Data Endpoints SIE registers array */
DECL|RESERVED1|member|__IM uint32_t RESERVED1; /**< RESERVED location */
DECL|RESERVED1|member|__IM uint32_t RESERVED1; /**< RESERVED location */
DECL|RESERVED1|member|__IM uint32_t RESERVED1[900]; /**< RESERVED location */
DECL|RESERVED2|member|__IM uint32_t RESERVED2; /**< RESERVED location */
DECL|RESERVED2|member|__IM uint32_t RESERVED2[7]; /**< RESERVED location */
DECL|RESERVED3|member|__IM uint32_t RESERVED3[11]; /**< RESERVED location */
DECL|RESERVED|member|__IM uint32_t RESERVED[128]; /**< RESERVED location */
DECL|RESERVED|member|__IM uint32_t RESERVED[12]; /**< RESERVED location */
DECL|RESERVED|member|__IM uint32_t RESERVED[13]; /**< RESERVED location */
DECL|SIE_EP_CNT0|member|__IOM uint32_t SIE_EP_CNT0; /**< SIE Data Endpoint Count 0 register */
DECL|SIE_EP_CNT1|member|__IOM uint32_t SIE_EP_CNT1; /**< SIE Data Endpoint Count 1 register */
DECL|SIE_EP_CR0|member|__IOM uint32_t SIE_EP_CR0; /**< SIE Data Endpoint Control 0 register */
DECL|USBFS_USBDEV_ARB_EP_BUF_OVER_Msk|macro|USBFS_USBDEV_ARB_EP_BUF_OVER_Msk
DECL|USBFS_USBDEV_ARB_EP_BUF_UNDER_Msk|macro|USBFS_USBDEV_ARB_EP_BUF_UNDER_Msk
DECL|USBFS_USBDEV_ARB_EP_CFG_CRC_BYPASS_Msk|macro|USBFS_USBDEV_ARB_EP_CFG_CRC_BYPASS_Msk
DECL|USBFS_USBDEV_ARB_EP_CFG_RESET_PTR_Msk|macro|USBFS_USBDEV_ARB_EP_CFG_RESET_PTR_Msk
DECL|USBFS_USBDEV_ARB_EP_DMA_GNT_Msk|macro|USBFS_USBDEV_ARB_EP_DMA_GNT_Msk
DECL|USBFS_USBDEV_ARB_EP_DMA_TERMIN_Msk|macro|USBFS_USBDEV_ARB_EP_DMA_TERMIN_Msk
DECL|USBFS_USBDEV_ARB_EP_IN_BUF_FULL_Msk|macro|USBFS_USBDEV_ARB_EP_IN_BUF_FULL_Msk
DECL|USBFS_USBDEV_DYN_RECONFIG_EN_Msk|macro|USBFS_USBDEV_DYN_RECONFIG_EN_Msk
DECL|USBFS_USBDEV_DYN_RECONFIG_EPNO_Msk|macro|USBFS_USBDEV_DYN_RECONFIG_EPNO_Msk
DECL|USBFS_USBDEV_DYN_RECONFIG_EPNO_Pos|macro|USBFS_USBDEV_DYN_RECONFIG_EPNO_Pos
DECL|USBFS_USBDEV_DYN_RECONFIG_RDY_STS_Msk|macro|USBFS_USBDEV_DYN_RECONFIG_RDY_STS_Msk
DECL|USBFS_USBDEV_SIE_EP_DATA_TOGGLE_Msk|macro|USBFS_USBDEV_SIE_EP_DATA_TOGGLE_Msk
DECL|USBFS_USBLPM_LPM_CTL_LPM_RESP_Msk|macro|USBFS_USBLPM_LPM_CTL_LPM_RESP_Msk
DECL|USBFS_USBLPM_LPM_CTL_LPM_RESP_Pos|macro|USBFS_USBLPM_LPM_CTL_LPM_RESP_Pos
DECL|cy_stc_usbfs_dev_drv_acces_sie_t|typedef|} cy_stc_usbfs_dev_drv_acces_sie_t;
DECL|cy_stc_usbfs_dev_drv_access_arb_t|typedef|} cy_stc_usbfs_dev_drv_access_arb_t;
DECL|cy_stc_usbfs_dev_drv_arb16_t|typedef|} cy_stc_usbfs_dev_drv_arb16_t;
DECL|cy_stc_usbfs_dev_drv_arb8_t|typedef|} cy_stc_usbfs_dev_drv_arb8_t;
DECL|cy_stc_usbfs_dev_drv_sie_t|typedef|} cy_stc_usbfs_dev_drv_sie_t;
