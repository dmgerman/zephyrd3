DECL|CY_LVD_CHECK_INTR_CFG|macro|CY_LVD_CHECK_INTR_CFG
DECL|CY_LVD_CHECK_TRIPSEL|macro|CY_LVD_CHECK_TRIPSEL
DECL|CY_LVD_DRV_VERSION_MAJOR|macro|CY_LVD_DRV_VERSION_MAJOR
DECL|CY_LVD_DRV_VERSION_MINOR|macro|CY_LVD_DRV_VERSION_MINOR
DECL|CY_LVD_H|macro|CY_LVD_H
DECL|CY_LVD_ID|macro|CY_LVD_ID
DECL|CY_LVD_INTR_BOTH|enumerator|CY_LVD_INTR_BOTH = 0x3U, /**<Select LVD interrupt: both edges */
DECL|CY_LVD_INTR_DISABLE|enumerator|CY_LVD_INTR_DISABLE = 0x0U, /**<Select LVD interrupt: disabled */
DECL|CY_LVD_INTR_FALLING|enumerator|CY_LVD_INTR_FALLING = 0x2U, /**<Select LVD interrupt: falling edge */
DECL|CY_LVD_INTR_RISING|enumerator|CY_LVD_INTR_RISING = 0x1U, /**<Select LVD interrupt: rising edge */
DECL|CY_LVD_INTR|macro|CY_LVD_INTR
DECL|CY_LVD_STATUS_ABOVE|enumerator|CY_LVD_STATUS_ABOVE = 0x1U, /**<The voltage is above the threshold */
DECL|CY_LVD_STATUS_BELOW|enumerator|CY_LVD_STATUS_BELOW = 0x0U, /**<The voltage is below the threshold */
DECL|CY_LVD_THRESHOLD_1_2_V|enumerator|CY_LVD_THRESHOLD_1_2_V = 0x0U, /**<Select LVD reference voltage: 1.2V */
DECL|CY_LVD_THRESHOLD_1_4_V|enumerator|CY_LVD_THRESHOLD_1_4_V = 0x1U, /**<Select LVD reference voltage: 1.4V */
DECL|CY_LVD_THRESHOLD_1_6_V|enumerator|CY_LVD_THRESHOLD_1_6_V = 0x2U, /**<Select LVD reference voltage: 1.6V */
DECL|CY_LVD_THRESHOLD_1_8_V|enumerator|CY_LVD_THRESHOLD_1_8_V = 0x3U, /**<Select LVD reference voltage: 1.8V */
DECL|CY_LVD_THRESHOLD_2_0_V|enumerator|CY_LVD_THRESHOLD_2_0_V = 0x4U, /**<Select LVD reference voltage: 2.0V */
DECL|CY_LVD_THRESHOLD_2_1_V|enumerator|CY_LVD_THRESHOLD_2_1_V = 0x5U, /**<Select LVD reference voltage: 2.1V */
DECL|CY_LVD_THRESHOLD_2_2_V|enumerator|CY_LVD_THRESHOLD_2_2_V = 0x6U, /**<Select LVD reference voltage: 2.2V */
DECL|CY_LVD_THRESHOLD_2_3_V|enumerator|CY_LVD_THRESHOLD_2_3_V = 0x7U, /**<Select LVD reference voltage: 2.3V */
DECL|CY_LVD_THRESHOLD_2_4_V|enumerator|CY_LVD_THRESHOLD_2_4_V = 0x8U, /**<Select LVD reference voltage: 2.4V */
DECL|CY_LVD_THRESHOLD_2_5_V|enumerator|CY_LVD_THRESHOLD_2_5_V = 0x9U, /**<Select LVD reference voltage: 2.5V */
DECL|CY_LVD_THRESHOLD_2_6_V|enumerator|CY_LVD_THRESHOLD_2_6_V = 0xAU, /**<Select LVD reference voltage: 2.6V */
DECL|CY_LVD_THRESHOLD_2_7_V|enumerator|CY_LVD_THRESHOLD_2_7_V = 0xBU, /**<Select LVD reference voltage: 2.7V */
DECL|CY_LVD_THRESHOLD_2_8_V|enumerator|CY_LVD_THRESHOLD_2_8_V = 0xCU, /**<Select LVD reference voltage: 2.8V */
DECL|CY_LVD_THRESHOLD_2_9_V|enumerator|CY_LVD_THRESHOLD_2_9_V = 0xDU, /**<Select LVD reference voltage: 2.9V */
DECL|CY_LVD_THRESHOLD_3_0_V|enumerator|CY_LVD_THRESHOLD_3_0_V = 0xEU, /**<Select LVD reference voltage: 3.0V */
DECL|CY_LVD_THRESHOLD_3_1_V|enumerator|CY_LVD_THRESHOLD_3_1_V = 0xFU /**<Select LVD reference voltage: 3.1V */
DECL|Cy_LVD_ClearInterruptMask|function|__STATIC_INLINE void Cy_LVD_ClearInterruptMask(void)
DECL|Cy_LVD_ClearInterrupt|function|__STATIC_INLINE void Cy_LVD_ClearInterrupt(void)
DECL|Cy_LVD_Disable|function|__STATIC_INLINE void Cy_LVD_Disable(void)
DECL|Cy_LVD_Enable|function|__STATIC_INLINE void Cy_LVD_Enable(void)
DECL|Cy_LVD_GetInterruptMask|function|__STATIC_INLINE uint32_t Cy_LVD_GetInterruptMask(void)
DECL|Cy_LVD_GetInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_LVD_GetInterruptStatusMasked(void)
DECL|Cy_LVD_GetInterruptStatus|function|__STATIC_INLINE uint32_t Cy_LVD_GetInterruptStatus(void)
DECL|Cy_LVD_GetStatus|function|__STATIC_INLINE cy_en_lvd_status_t Cy_LVD_GetStatus(void)
DECL|Cy_LVD_SetInterruptConfig|function|__STATIC_INLINE void Cy_LVD_SetInterruptConfig(cy_en_lvd_intr_config_t lvdInterruptConfig)
DECL|Cy_LVD_SetInterruptMask|function|__STATIC_INLINE void Cy_LVD_SetInterruptMask(void)
DECL|Cy_LVD_SetInterrupt|function|__STATIC_INLINE void Cy_LVD_SetInterrupt(void)
DECL|Cy_LVD_SetThreshold|function|__STATIC_INLINE void Cy_LVD_SetThreshold(cy_en_lvd_tripsel_t threshold)
DECL|cy_en_lvd_intr_config_t|typedef|} cy_en_lvd_intr_config_t;
DECL|cy_en_lvd_status_t|typedef|} cy_en_lvd_status_t;
DECL|cy_en_lvd_tripsel_t|typedef|} cy_en_lvd_tripsel_t;
