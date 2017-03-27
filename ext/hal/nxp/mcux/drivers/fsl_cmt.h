DECL|CMT_DisableInterrupts|function|static inline void CMT_DisableInterrupts(CMT_Type *base, uint32_t mask)
DECL|CMT_EnableExtendedSpace|function|static inline void CMT_EnableExtendedSpace(CMT_Type *base, bool enable)
DECL|CMT_EnableInterrupts|function|static inline void CMT_EnableInterrupts(CMT_Type *base, uint32_t mask)
DECL|CMT_GetStatusFlags|function|static inline uint32_t CMT_GetStatusFlags(CMT_Type *base)
DECL|CMT_SetCarrirGenerateCountOne|function|static inline void CMT_SetCarrirGenerateCountOne(CMT_Type *base, uint32_t highCount, uint32_t lowCount)
DECL|CMT_SetCarrirGenerateCountTwo|function|static inline void CMT_SetCarrirGenerateCountTwo(CMT_Type *base, uint32_t highCount, uint32_t lowCount)
DECL|FSL_CMT_DRIVER_VERSION|macro|FSL_CMT_DRIVER_VERSION
DECL|_FSL_CMT_H_|macro|_FSL_CMT_H_
DECL|_cmt_config|struct|typedef struct _cmt_config
DECL|_cmt_infrared_output_polarity|enum|typedef enum _cmt_infrared_output_polarity
DECL|_cmt_infrared_output_state|enum|typedef enum _cmt_infrared_output_state
DECL|_cmt_interrupt_enable|enum|enum _cmt_interrupt_enable
DECL|_cmt_mode|enum|typedef enum _cmt_mode
DECL|_cmt_modulate_config|struct|typedef struct _cmt_modulate_config
DECL|_cmt_primary_clkdiv|enum|typedef enum _cmt_primary_clkdiv
DECL|_cmt_second_clkdiv|enum|typedef enum _cmt_second_clkdiv
DECL|cmt_config_t|typedef|} cmt_config_t;
DECL|cmt_infrared_output_polarity_t|typedef|} cmt_infrared_output_polarity_t;
DECL|cmt_infrared_output_state_t|typedef|} cmt_infrared_output_state_t;
DECL|cmt_mode_t|typedef|} cmt_mode_t;
DECL|cmt_modulate_config_t|typedef|} cmt_modulate_config_t;
DECL|cmt_primary_clkdiv_t|typedef|} cmt_primary_clkdiv_t;
DECL|cmt_second_clkdiv_t|typedef|} cmt_second_clkdiv_t;
DECL|divider|member|cmt_second_clkdiv_t divider; /*!< The CMT clock divide prescaler. */
DECL|highCount1|member|uint8_t highCount1; /*!< The high-time for carrier generator first register. */
DECL|highCount2|member|uint8_t highCount2; /*!< The high-time for carrier generator second register for FSK mode. */
DECL|iroPolarity|member|cmt_infrared_output_polarity_t iroPolarity; /*!< The IRO polarity. */
DECL|isInterruptEnabled|member|bool isInterruptEnabled; /*!< Timer interrupt 0-disable, 1-enable. */
DECL|isIroEnabled|member|bool isIroEnabled; /*!< The IRO output 0-disabled, 1-enabled. */
DECL|kCMT_BasebandMode|enumerator|kCMT_BasebandMode = 0x09U /*!< Carrier modulator is enabled in baseband mode. */
DECL|kCMT_DirectIROCtl|enumerator|kCMT_DirectIROCtl = 0x00U, /*!< Carrier modulator is disabled and the IRO signal is directly in software control */
DECL|kCMT_EndOfCycleInterruptEnable|enumerator|kCMT_EndOfCycleInterruptEnable = CMT_MSC_EOCIE_MASK, /*!< CMT end of cycle interrupt. */
DECL|kCMT_FSKMode|enumerator|kCMT_FSKMode = 0x05U, /*!< Carrier modulator is enabled in FSK mode. */
DECL|kCMT_IROActiveHigh|enumerator|kCMT_IROActiveHigh = 1U /*!< The CMT infrared output signal polarity is active-high. */
DECL|kCMT_IROActiveLow|enumerator|kCMT_IROActiveLow = 0U, /*!< The CMT infrared output signal polarity is active-low. */
DECL|kCMT_IROCtlHigh|enumerator|kCMT_IROCtlHigh = 1U /*!< The CMT Infrared output signal state is controlled to high. */
DECL|kCMT_IROCtlLow|enumerator|kCMT_IROCtlLow = 0U, /*!< The CMT Infrared output signal state is controlled to low. */
DECL|kCMT_PrimaryClkDiv10|enumerator|kCMT_PrimaryClkDiv10 = 9U, /*!< The intermediate frequency is the bus clock divided by 10. */
DECL|kCMT_PrimaryClkDiv11|enumerator|kCMT_PrimaryClkDiv11 = 10U, /*!< The intermediate frequency is the bus clock divided by 11. */
DECL|kCMT_PrimaryClkDiv12|enumerator|kCMT_PrimaryClkDiv12 = 11U, /*!< The intermediate frequency is the bus clock divided by 12. */
DECL|kCMT_PrimaryClkDiv13|enumerator|kCMT_PrimaryClkDiv13 = 12U, /*!< The intermediate frequency is the bus clock divided by 13. */
DECL|kCMT_PrimaryClkDiv14|enumerator|kCMT_PrimaryClkDiv14 = 13U, /*!< The intermediate frequency is the bus clock divided by 14. */
DECL|kCMT_PrimaryClkDiv15|enumerator|kCMT_PrimaryClkDiv15 = 14U, /*!< The intermediate frequency is the bus clock divided by 15. */
DECL|kCMT_PrimaryClkDiv16|enumerator|kCMT_PrimaryClkDiv16 = 15U /*!< The intermediate frequency is the bus clock divided by 16. */
DECL|kCMT_PrimaryClkDiv1|enumerator|kCMT_PrimaryClkDiv1 = 0U, /*!< The intermediate frequency is the bus clock divided by 1. */
DECL|kCMT_PrimaryClkDiv2|enumerator|kCMT_PrimaryClkDiv2 = 1U, /*!< The intermediate frequency is the bus clock divided by 2. */
DECL|kCMT_PrimaryClkDiv3|enumerator|kCMT_PrimaryClkDiv3 = 2U, /*!< The intermediate frequency is the bus clock divided by 3. */
DECL|kCMT_PrimaryClkDiv4|enumerator|kCMT_PrimaryClkDiv4 = 3U, /*!< The intermediate frequency is the bus clock divided by 4. */
DECL|kCMT_PrimaryClkDiv5|enumerator|kCMT_PrimaryClkDiv5 = 4U, /*!< The intermediate frequency is the bus clock divided by 5. */
DECL|kCMT_PrimaryClkDiv6|enumerator|kCMT_PrimaryClkDiv6 = 5U, /*!< The intermediate frequency is the bus clock divided by 6. */
DECL|kCMT_PrimaryClkDiv7|enumerator|kCMT_PrimaryClkDiv7 = 6U, /*!< The intermediate frequency is the bus clock divided by 7. */
DECL|kCMT_PrimaryClkDiv8|enumerator|kCMT_PrimaryClkDiv8 = 7U, /*!< The intermediate frequency is the bus clock divided by 8. */
DECL|kCMT_PrimaryClkDiv9|enumerator|kCMT_PrimaryClkDiv9 = 8U, /*!< The intermediate frequency is the bus clock divided by 9. */
DECL|kCMT_SecondClkDiv1|enumerator|kCMT_SecondClkDiv1 = 0U, /*!< The CMT clock is the intermediate frequency frequency divided by 1. */
DECL|kCMT_SecondClkDiv2|enumerator|kCMT_SecondClkDiv2 = 1U, /*!< The CMT clock is the intermediate frequency frequency divided by 2. */
DECL|kCMT_SecondClkDiv4|enumerator|kCMT_SecondClkDiv4 = 2U, /*!< The CMT clock is the intermediate frequency frequency divided by 4. */
DECL|kCMT_SecondClkDiv8|enumerator|kCMT_SecondClkDiv8 = 3U /*!< The CMT clock is the intermediate frequency frequency divided by 8. */
DECL|kCMT_TimeMode|enumerator|kCMT_TimeMode = 0x01U, /*!< Carrier modulator is enabled in time mode. */
DECL|lowCount1|member|uint8_t lowCount1; /*!< The low-time for carrier generator first register. */
DECL|lowCount2|member|uint8_t lowCount2; /*!< The low-time for carrier generator second register for FSK mode. */
DECL|markCount|member|uint16_t markCount; /*!< The mark time for the modulator gate. */
DECL|spaceCount|member|uint16_t spaceCount; /*!< The space time for the modulator gate. */
