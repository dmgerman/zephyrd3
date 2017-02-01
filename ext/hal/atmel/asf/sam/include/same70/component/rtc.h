DECL|ACKCLR|member|uint32_t ACKCLR:1; /**< bit: 0 Acknowledge Clear */
DECL|ACKDIS|member|uint32_t ACKDIS:1; /**< bit: 0 Acknowledge Update Interrupt Disable */
DECL|ACKEN|member|uint32_t ACKEN:1; /**< bit: 0 Acknowledge Update Interrupt Enable */
DECL|ACKUPD|member|uint32_t ACKUPD:1; /**< bit: 0 Acknowledge for Update */
DECL|ACK|member|uint32_t ACK:1; /**< bit: 0 Acknowledge Update Interrupt Mask */
DECL|ALARM|member|uint32_t ALARM:1; /**< bit: 1 Alarm Flag */
DECL|ALRCLR|member|uint32_t ALRCLR:1; /**< bit: 1 Alarm Clear */
DECL|ALRDIS|member|uint32_t ALRDIS:1; /**< bit: 1 Alarm Interrupt Disable */
DECL|ALREN|member|uint32_t ALREN:1; /**< bit: 1 Alarm Interrupt Enable */
DECL|ALR|member|uint32_t ALR:1; /**< bit: 1 Alarm Interrupt Mask */
DECL|AMPM|member|uint32_t AMPM:1; /**< bit: 22 AM/PM Indicator */
DECL|AMPM|member|uint32_t AMPM:1; /**< bit: 22 Ante Meridiem Post Meridiem Indicator */
DECL|CALCLR|member|uint32_t CALCLR:1; /**< bit: 4 Calendar Clear */
DECL|CALDIS|member|uint32_t CALDIS:1; /**< bit: 4 Calendar Event Interrupt Disable */
DECL|CALEN|member|uint32_t CALEN:1; /**< bit: 4 Calendar Event Interrupt Enable */
DECL|CALEVSEL|member|uint32_t CALEVSEL:2; /**< bit: 16..17 Calendar Event Selection */
DECL|CALEV|member|uint32_t CALEV:1; /**< bit: 4 Calendar Event */
DECL|CAL|member|uint32_t CAL:1; /**< bit: 4 Calendar Event Interrupt Mask */
DECL|CENT|member|uint32_t CENT:7; /**< bit: 0..6 Current Century */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CORRECTION|member|uint32_t CORRECTION:7; /**< bit: 8..14 Slow Clock Correction */
DECL|DATEEN|member|uint32_t DATEEN:1; /**< bit: 31 Date Alarm Enable */
DECL|DATE|member|uint32_t DATE:6; /**< bit: 24..29 Current Day in Current Month */
DECL|DATE|member|uint32_t DATE:6; /**< bit: 24..29 Date Alarm */
DECL|DAY|member|uint32_t DAY:3; /**< bit: 21..23 Current Day in Current Week */
DECL|HIGHPPM|member|uint32_t HIGHPPM:1; /**< bit: 15 HIGH PPM Correction */
DECL|HOUREN|member|uint32_t HOUREN:1; /**< bit: 23 Hour Alarm Enable */
DECL|HOUR|member|uint32_t HOUR:6; /**< bit: 16..21 Current Hour */
DECL|HOUR|member|uint32_t HOUR:6; /**< bit: 16..21 Hour Alarm */
DECL|HRMOD|member|uint32_t HRMOD:1; /**< bit: 0 12-/24-hour Mode */
DECL|MINEN|member|uint32_t MINEN:1; /**< bit: 15 Minute Alarm Enable */
DECL|MIN|member|uint32_t MIN:7; /**< bit: 8..14 Current Minute */
DECL|MIN|member|uint32_t MIN:7; /**< bit: 8..14 Minute Alarm */
DECL|MONTH|member|uint32_t MONTH:5; /**< bit: 16..20 Current Month */
DECL|MONTH|member|uint32_t MONTH:5; /**< bit: 16..20 Month Alarm */
DECL|MTHEN|member|uint32_t MTHEN:1; /**< bit: 23 Month Alarm Enable */
DECL|NEGPPM|member|uint32_t NEGPPM:1; /**< bit: 4 NEGative PPM Correction */
DECL|NVCALALR|member|uint32_t NVCALALR:1; /**< bit: 3 Non-valid Calendar Alarm */
DECL|NVCAL|member|uint32_t NVCAL:1; /**< bit: 1 Non-valid Calendar */
DECL|NVTIMALR|member|uint32_t NVTIMALR:1; /**< bit: 2 Non-valid Time Alarm */
DECL|NVTIM|member|uint32_t NVTIM:1; /**< bit: 0 Non-valid Time */
DECL|OUT0|member|uint32_t OUT0:3; /**< bit: 16..18 RTCOUT0 OutputSource Selection */
DECL|OUT1|member|uint32_t OUT1:3; /**< bit: 20..22 RTCOUT1 Output Source Selection */
DECL|PERSIAN|member|uint32_t PERSIAN:1; /**< bit: 1 PERSIAN Calendar */
DECL|REV_RTC|macro|REV_RTC
DECL|RTC_6056|macro|RTC_6056
DECL|RTC_CALALR_DATEEN_Msk|macro|RTC_CALALR_DATEEN_Msk
DECL|RTC_CALALR_DATEEN_Pos|macro|RTC_CALALR_DATEEN_Pos
DECL|RTC_CALALR_DATEEN|macro|RTC_CALALR_DATEEN
DECL|RTC_CALALR_DATE_Msk|macro|RTC_CALALR_DATE_Msk
DECL|RTC_CALALR_DATE_Pos|macro|RTC_CALALR_DATE_Pos
DECL|RTC_CALALR_DATE|macro|RTC_CALALR_DATE
DECL|RTC_CALALR_MASK|macro|RTC_CALALR_MASK
DECL|RTC_CALALR_MONTH_Msk|macro|RTC_CALALR_MONTH_Msk
DECL|RTC_CALALR_MONTH_Pos|macro|RTC_CALALR_MONTH_Pos
DECL|RTC_CALALR_MONTH|macro|RTC_CALALR_MONTH
DECL|RTC_CALALR_MTHEN_Msk|macro|RTC_CALALR_MTHEN_Msk
DECL|RTC_CALALR_MTHEN_Pos|macro|RTC_CALALR_MTHEN_Pos
DECL|RTC_CALALR_MTHEN|macro|RTC_CALALR_MTHEN
DECL|RTC_CALALR_Msk|macro|RTC_CALALR_Msk
DECL|RTC_CALALR_OFFSET|macro|RTC_CALALR_OFFSET
DECL|RTC_CALALR_Type|typedef|} RTC_CALALR_Type;
DECL|RTC_CALALR|member|__IO RTC_CALALR_Type RTC_CALALR; /**< Offset: 0x14 (R/W 32) Calendar Alarm Register */
DECL|RTC_CALALR|member|__IO uint32_t RTC_CALALR; /**< (RTC Offset: 0x14) Calendar Alarm Register */
DECL|RTC_CALR_CENT_Msk|macro|RTC_CALR_CENT_Msk
DECL|RTC_CALR_CENT_Pos|macro|RTC_CALR_CENT_Pos
DECL|RTC_CALR_CENT|macro|RTC_CALR_CENT
DECL|RTC_CALR_DATE_Msk|macro|RTC_CALR_DATE_Msk
DECL|RTC_CALR_DATE_Pos|macro|RTC_CALR_DATE_Pos
DECL|RTC_CALR_DATE|macro|RTC_CALR_DATE
DECL|RTC_CALR_DAY_Msk|macro|RTC_CALR_DAY_Msk
DECL|RTC_CALR_DAY_Pos|macro|RTC_CALR_DAY_Pos
DECL|RTC_CALR_DAY|macro|RTC_CALR_DAY
DECL|RTC_CALR_MASK|macro|RTC_CALR_MASK
DECL|RTC_CALR_MONTH_Msk|macro|RTC_CALR_MONTH_Msk
DECL|RTC_CALR_MONTH_Pos|macro|RTC_CALR_MONTH_Pos
DECL|RTC_CALR_MONTH|macro|RTC_CALR_MONTH
DECL|RTC_CALR_Msk|macro|RTC_CALR_Msk
DECL|RTC_CALR_OFFSET|macro|RTC_CALR_OFFSET
DECL|RTC_CALR_Type|typedef|} RTC_CALR_Type;
DECL|RTC_CALR_YEAR_Msk|macro|RTC_CALR_YEAR_Msk
DECL|RTC_CALR_YEAR_Pos|macro|RTC_CALR_YEAR_Pos
DECL|RTC_CALR_YEAR|macro|RTC_CALR_YEAR
DECL|RTC_CALR|member|__IO RTC_CALR_Type RTC_CALR; /**< Offset: 0x0C (R/W 32) Calendar Register */
DECL|RTC_CALR|member|__IO uint32_t RTC_CALR; /**< (RTC Offset: 0x0C) Calendar Register */
DECL|RTC_CR_CALEVSEL_MONTH_Val|macro|RTC_CR_CALEVSEL_MONTH_Val
DECL|RTC_CR_CALEVSEL_MONTH|macro|RTC_CR_CALEVSEL_MONTH
DECL|RTC_CR_CALEVSEL_Msk|macro|RTC_CR_CALEVSEL_Msk
DECL|RTC_CR_CALEVSEL_Pos|macro|RTC_CR_CALEVSEL_Pos
DECL|RTC_CR_CALEVSEL_WEEK_Val|macro|RTC_CR_CALEVSEL_WEEK_Val
DECL|RTC_CR_CALEVSEL_WEEK|macro|RTC_CR_CALEVSEL_WEEK
DECL|RTC_CR_CALEVSEL_YEAR_Val|macro|RTC_CR_CALEVSEL_YEAR_Val
DECL|RTC_CR_CALEVSEL_YEAR|macro|RTC_CR_CALEVSEL_YEAR
DECL|RTC_CR_CALEVSEL|macro|RTC_CR_CALEVSEL
DECL|RTC_CR_MASK|macro|RTC_CR_MASK
DECL|RTC_CR_Msk|macro|RTC_CR_Msk
DECL|RTC_CR_OFFSET|macro|RTC_CR_OFFSET
DECL|RTC_CR_TIMEVSEL_HOUR_Val|macro|RTC_CR_TIMEVSEL_HOUR_Val
DECL|RTC_CR_TIMEVSEL_HOUR|macro|RTC_CR_TIMEVSEL_HOUR
DECL|RTC_CR_TIMEVSEL_MIDNIGHT_Val|macro|RTC_CR_TIMEVSEL_MIDNIGHT_Val
DECL|RTC_CR_TIMEVSEL_MIDNIGHT|macro|RTC_CR_TIMEVSEL_MIDNIGHT
DECL|RTC_CR_TIMEVSEL_MINUTE_Val|macro|RTC_CR_TIMEVSEL_MINUTE_Val
DECL|RTC_CR_TIMEVSEL_MINUTE|macro|RTC_CR_TIMEVSEL_MINUTE
DECL|RTC_CR_TIMEVSEL_Msk|macro|RTC_CR_TIMEVSEL_Msk
DECL|RTC_CR_TIMEVSEL_NOON_Val|macro|RTC_CR_TIMEVSEL_NOON_Val
DECL|RTC_CR_TIMEVSEL_NOON|macro|RTC_CR_TIMEVSEL_NOON
DECL|RTC_CR_TIMEVSEL_Pos|macro|RTC_CR_TIMEVSEL_Pos
DECL|RTC_CR_TIMEVSEL|macro|RTC_CR_TIMEVSEL
DECL|RTC_CR_Type|typedef|} RTC_CR_Type;
DECL|RTC_CR_UPDCAL_Msk|macro|RTC_CR_UPDCAL_Msk
DECL|RTC_CR_UPDCAL_Pos|macro|RTC_CR_UPDCAL_Pos
DECL|RTC_CR_UPDCAL|macro|RTC_CR_UPDCAL
DECL|RTC_CR_UPDTIM_Msk|macro|RTC_CR_UPDTIM_Msk
DECL|RTC_CR_UPDTIM_Pos|macro|RTC_CR_UPDTIM_Pos
DECL|RTC_CR_UPDTIM|macro|RTC_CR_UPDTIM
DECL|RTC_CR|member|__IO RTC_CR_Type RTC_CR; /**< Offset: 0x00 (R/W 32) Control Register */
DECL|RTC_CR|member|__IO uint32_t RTC_CR; /**< (RTC Offset: 0x00) Control Register */
DECL|RTC_IDR_ACKDIS_Msk|macro|RTC_IDR_ACKDIS_Msk
DECL|RTC_IDR_ACKDIS_Pos|macro|RTC_IDR_ACKDIS_Pos
DECL|RTC_IDR_ACKDIS|macro|RTC_IDR_ACKDIS
DECL|RTC_IDR_ALRDIS_Msk|macro|RTC_IDR_ALRDIS_Msk
DECL|RTC_IDR_ALRDIS_Pos|macro|RTC_IDR_ALRDIS_Pos
DECL|RTC_IDR_ALRDIS|macro|RTC_IDR_ALRDIS
DECL|RTC_IDR_CALDIS_Msk|macro|RTC_IDR_CALDIS_Msk
DECL|RTC_IDR_CALDIS_Pos|macro|RTC_IDR_CALDIS_Pos
DECL|RTC_IDR_CALDIS|macro|RTC_IDR_CALDIS
DECL|RTC_IDR_MASK|macro|RTC_IDR_MASK
DECL|RTC_IDR_Msk|macro|RTC_IDR_Msk
DECL|RTC_IDR_OFFSET|macro|RTC_IDR_OFFSET
DECL|RTC_IDR_SECDIS_Msk|macro|RTC_IDR_SECDIS_Msk
DECL|RTC_IDR_SECDIS_Pos|macro|RTC_IDR_SECDIS_Pos
DECL|RTC_IDR_SECDIS|macro|RTC_IDR_SECDIS
DECL|RTC_IDR_TDERRDIS_Msk|macro|RTC_IDR_TDERRDIS_Msk
DECL|RTC_IDR_TDERRDIS_Pos|macro|RTC_IDR_TDERRDIS_Pos
DECL|RTC_IDR_TDERRDIS|macro|RTC_IDR_TDERRDIS
DECL|RTC_IDR_TIMDIS_Msk|macro|RTC_IDR_TIMDIS_Msk
DECL|RTC_IDR_TIMDIS_Pos|macro|RTC_IDR_TIMDIS_Pos
DECL|RTC_IDR_TIMDIS|macro|RTC_IDR_TIMDIS
DECL|RTC_IDR_Type|typedef|} RTC_IDR_Type;
DECL|RTC_IDR|member|__O RTC_IDR_Type RTC_IDR; /**< Offset: 0x24 ( /W 32) Interrupt Disable Register */
DECL|RTC_IDR|member|__O uint32_t RTC_IDR; /**< (RTC Offset: 0x24) Interrupt Disable Register */
DECL|RTC_IER_ACKEN_Msk|macro|RTC_IER_ACKEN_Msk
DECL|RTC_IER_ACKEN_Pos|macro|RTC_IER_ACKEN_Pos
DECL|RTC_IER_ACKEN|macro|RTC_IER_ACKEN
DECL|RTC_IER_ALREN_Msk|macro|RTC_IER_ALREN_Msk
DECL|RTC_IER_ALREN_Pos|macro|RTC_IER_ALREN_Pos
DECL|RTC_IER_ALREN|macro|RTC_IER_ALREN
DECL|RTC_IER_CALEN_Msk|macro|RTC_IER_CALEN_Msk
DECL|RTC_IER_CALEN_Pos|macro|RTC_IER_CALEN_Pos
DECL|RTC_IER_CALEN|macro|RTC_IER_CALEN
DECL|RTC_IER_MASK|macro|RTC_IER_MASK
DECL|RTC_IER_Msk|macro|RTC_IER_Msk
DECL|RTC_IER_OFFSET|macro|RTC_IER_OFFSET
DECL|RTC_IER_SECEN_Msk|macro|RTC_IER_SECEN_Msk
DECL|RTC_IER_SECEN_Pos|macro|RTC_IER_SECEN_Pos
DECL|RTC_IER_SECEN|macro|RTC_IER_SECEN
DECL|RTC_IER_TDERREN_Msk|macro|RTC_IER_TDERREN_Msk
DECL|RTC_IER_TDERREN_Pos|macro|RTC_IER_TDERREN_Pos
DECL|RTC_IER_TDERREN|macro|RTC_IER_TDERREN
DECL|RTC_IER_TIMEN_Msk|macro|RTC_IER_TIMEN_Msk
DECL|RTC_IER_TIMEN_Pos|macro|RTC_IER_TIMEN_Pos
DECL|RTC_IER_TIMEN|macro|RTC_IER_TIMEN
DECL|RTC_IER_Type|typedef|} RTC_IER_Type;
DECL|RTC_IER|member|__O RTC_IER_Type RTC_IER; /**< Offset: 0x20 ( /W 32) Interrupt Enable Register */
DECL|RTC_IER|member|__O uint32_t RTC_IER; /**< (RTC Offset: 0x20) Interrupt Enable Register */
DECL|RTC_IMR_ACK_Msk|macro|RTC_IMR_ACK_Msk
DECL|RTC_IMR_ACK_Pos|macro|RTC_IMR_ACK_Pos
DECL|RTC_IMR_ACK|macro|RTC_IMR_ACK
DECL|RTC_IMR_ALR_Msk|macro|RTC_IMR_ALR_Msk
DECL|RTC_IMR_ALR_Pos|macro|RTC_IMR_ALR_Pos
DECL|RTC_IMR_ALR|macro|RTC_IMR_ALR
DECL|RTC_IMR_CAL_Msk|macro|RTC_IMR_CAL_Msk
DECL|RTC_IMR_CAL_Pos|macro|RTC_IMR_CAL_Pos
DECL|RTC_IMR_CAL|macro|RTC_IMR_CAL
DECL|RTC_IMR_MASK|macro|RTC_IMR_MASK
DECL|RTC_IMR_Msk|macro|RTC_IMR_Msk
DECL|RTC_IMR_OFFSET|macro|RTC_IMR_OFFSET
DECL|RTC_IMR_SEC_Msk|macro|RTC_IMR_SEC_Msk
DECL|RTC_IMR_SEC_Pos|macro|RTC_IMR_SEC_Pos
DECL|RTC_IMR_SEC|macro|RTC_IMR_SEC
DECL|RTC_IMR_TDERR_Msk|macro|RTC_IMR_TDERR_Msk
DECL|RTC_IMR_TDERR_Pos|macro|RTC_IMR_TDERR_Pos
DECL|RTC_IMR_TDERR|macro|RTC_IMR_TDERR
DECL|RTC_IMR_TIM_Msk|macro|RTC_IMR_TIM_Msk
DECL|RTC_IMR_TIM_Pos|macro|RTC_IMR_TIM_Pos
DECL|RTC_IMR_TIM|macro|RTC_IMR_TIM
DECL|RTC_IMR_Type|typedef|} RTC_IMR_Type;
DECL|RTC_IMR|member|__I RTC_IMR_Type RTC_IMR; /**< Offset: 0x28 (R/ 32) Interrupt Mask Register */
DECL|RTC_IMR|member|__I uint32_t RTC_IMR; /**< (RTC Offset: 0x28) Interrupt Mask Register */
DECL|RTC_MR_CORRECTION_Msk|macro|RTC_MR_CORRECTION_Msk
DECL|RTC_MR_CORRECTION_Pos|macro|RTC_MR_CORRECTION_Pos
DECL|RTC_MR_CORRECTION|macro|RTC_MR_CORRECTION
DECL|RTC_MR_HIGHPPM_Msk|macro|RTC_MR_HIGHPPM_Msk
DECL|RTC_MR_HIGHPPM_Pos|macro|RTC_MR_HIGHPPM_Pos
DECL|RTC_MR_HIGHPPM|macro|RTC_MR_HIGHPPM
DECL|RTC_MR_HRMOD_Msk|macro|RTC_MR_HRMOD_Msk
DECL|RTC_MR_HRMOD_Pos|macro|RTC_MR_HRMOD_Pos
DECL|RTC_MR_HRMOD|macro|RTC_MR_HRMOD
DECL|RTC_MR_MASK|macro|RTC_MR_MASK
DECL|RTC_MR_Msk|macro|RTC_MR_Msk
DECL|RTC_MR_NEGPPM_Msk|macro|RTC_MR_NEGPPM_Msk
DECL|RTC_MR_NEGPPM_Pos|macro|RTC_MR_NEGPPM_Pos
DECL|RTC_MR_NEGPPM|macro|RTC_MR_NEGPPM
DECL|RTC_MR_OFFSET|macro|RTC_MR_OFFSET
DECL|RTC_MR_OUT0_ALARM_FLAG_Val|macro|RTC_MR_OUT0_ALARM_FLAG_Val
DECL|RTC_MR_OUT0_ALARM_FLAG|macro|RTC_MR_OUT0_ALARM_FLAG
DECL|RTC_MR_OUT0_ALARM_TOGGLE_Val|macro|RTC_MR_OUT0_ALARM_TOGGLE_Val
DECL|RTC_MR_OUT0_ALARM_TOGGLE|macro|RTC_MR_OUT0_ALARM_TOGGLE
DECL|RTC_MR_OUT0_FREQ1HZ_Val|macro|RTC_MR_OUT0_FREQ1HZ_Val
DECL|RTC_MR_OUT0_FREQ1HZ|macro|RTC_MR_OUT0_FREQ1HZ
DECL|RTC_MR_OUT0_FREQ32HZ_Val|macro|RTC_MR_OUT0_FREQ32HZ_Val
DECL|RTC_MR_OUT0_FREQ32HZ|macro|RTC_MR_OUT0_FREQ32HZ
DECL|RTC_MR_OUT0_FREQ512HZ_Val|macro|RTC_MR_OUT0_FREQ512HZ_Val
DECL|RTC_MR_OUT0_FREQ512HZ|macro|RTC_MR_OUT0_FREQ512HZ
DECL|RTC_MR_OUT0_FREQ64HZ_Val|macro|RTC_MR_OUT0_FREQ64HZ_Val
DECL|RTC_MR_OUT0_FREQ64HZ|macro|RTC_MR_OUT0_FREQ64HZ
DECL|RTC_MR_OUT0_Msk|macro|RTC_MR_OUT0_Msk
DECL|RTC_MR_OUT0_NO_WAVE_Val|macro|RTC_MR_OUT0_NO_WAVE_Val
DECL|RTC_MR_OUT0_NO_WAVE|macro|RTC_MR_OUT0_NO_WAVE
DECL|RTC_MR_OUT0_PROG_PULSE_Val|macro|RTC_MR_OUT0_PROG_PULSE_Val
DECL|RTC_MR_OUT0_PROG_PULSE|macro|RTC_MR_OUT0_PROG_PULSE
DECL|RTC_MR_OUT0_Pos|macro|RTC_MR_OUT0_Pos
DECL|RTC_MR_OUT0|macro|RTC_MR_OUT0
DECL|RTC_MR_OUT1_ALARM_FLAG_Val|macro|RTC_MR_OUT1_ALARM_FLAG_Val
DECL|RTC_MR_OUT1_ALARM_FLAG|macro|RTC_MR_OUT1_ALARM_FLAG
DECL|RTC_MR_OUT1_ALARM_TOGGLE_Val|macro|RTC_MR_OUT1_ALARM_TOGGLE_Val
DECL|RTC_MR_OUT1_ALARM_TOGGLE|macro|RTC_MR_OUT1_ALARM_TOGGLE
DECL|RTC_MR_OUT1_FREQ1HZ_Val|macro|RTC_MR_OUT1_FREQ1HZ_Val
DECL|RTC_MR_OUT1_FREQ1HZ|macro|RTC_MR_OUT1_FREQ1HZ
DECL|RTC_MR_OUT1_FREQ32HZ_Val|macro|RTC_MR_OUT1_FREQ32HZ_Val
DECL|RTC_MR_OUT1_FREQ32HZ|macro|RTC_MR_OUT1_FREQ32HZ
DECL|RTC_MR_OUT1_FREQ512HZ_Val|macro|RTC_MR_OUT1_FREQ512HZ_Val
DECL|RTC_MR_OUT1_FREQ512HZ|macro|RTC_MR_OUT1_FREQ512HZ
DECL|RTC_MR_OUT1_FREQ64HZ_Val|macro|RTC_MR_OUT1_FREQ64HZ_Val
DECL|RTC_MR_OUT1_FREQ64HZ|macro|RTC_MR_OUT1_FREQ64HZ
DECL|RTC_MR_OUT1_Msk|macro|RTC_MR_OUT1_Msk
DECL|RTC_MR_OUT1_NO_WAVE_Val|macro|RTC_MR_OUT1_NO_WAVE_Val
DECL|RTC_MR_OUT1_NO_WAVE|macro|RTC_MR_OUT1_NO_WAVE
DECL|RTC_MR_OUT1_PROG_PULSE_Val|macro|RTC_MR_OUT1_PROG_PULSE_Val
DECL|RTC_MR_OUT1_PROG_PULSE|macro|RTC_MR_OUT1_PROG_PULSE
DECL|RTC_MR_OUT1_Pos|macro|RTC_MR_OUT1_Pos
DECL|RTC_MR_OUT1|macro|RTC_MR_OUT1
DECL|RTC_MR_PERSIAN_Msk|macro|RTC_MR_PERSIAN_Msk
DECL|RTC_MR_PERSIAN_Pos|macro|RTC_MR_PERSIAN_Pos
DECL|RTC_MR_PERSIAN|macro|RTC_MR_PERSIAN
DECL|RTC_MR_THIGH_H_122US_Val|macro|RTC_MR_THIGH_H_122US_Val
DECL|RTC_MR_THIGH_H_122US|macro|RTC_MR_THIGH_H_122US
DECL|RTC_MR_THIGH_H_15US_Val|macro|RTC_MR_THIGH_H_15US_Val
DECL|RTC_MR_THIGH_H_15US|macro|RTC_MR_THIGH_H_15US
DECL|RTC_MR_THIGH_H_16MS_Val|macro|RTC_MR_THIGH_H_16MS_Val
DECL|RTC_MR_THIGH_H_16MS|macro|RTC_MR_THIGH_H_16MS
DECL|RTC_MR_THIGH_H_30US_Val|macro|RTC_MR_THIGH_H_30US_Val
DECL|RTC_MR_THIGH_H_30US|macro|RTC_MR_THIGH_H_30US
DECL|RTC_MR_THIGH_H_31MS_Val|macro|RTC_MR_THIGH_H_31MS_Val
DECL|RTC_MR_THIGH_H_31MS|macro|RTC_MR_THIGH_H_31MS
DECL|RTC_MR_THIGH_H_488US_Val|macro|RTC_MR_THIGH_H_488US_Val
DECL|RTC_MR_THIGH_H_488US|macro|RTC_MR_THIGH_H_488US
DECL|RTC_MR_THIGH_H_4MS_Val|macro|RTC_MR_THIGH_H_4MS_Val
DECL|RTC_MR_THIGH_H_4MS|macro|RTC_MR_THIGH_H_4MS
DECL|RTC_MR_THIGH_H_976US_Val|macro|RTC_MR_THIGH_H_976US_Val
DECL|RTC_MR_THIGH_H_976US|macro|RTC_MR_THIGH_H_976US
DECL|RTC_MR_THIGH_Msk|macro|RTC_MR_THIGH_Msk
DECL|RTC_MR_THIGH_Pos|macro|RTC_MR_THIGH_Pos
DECL|RTC_MR_THIGH|macro|RTC_MR_THIGH
DECL|RTC_MR_TPERIOD_Msk|macro|RTC_MR_TPERIOD_Msk
DECL|RTC_MR_TPERIOD_P_125MS_Val|macro|RTC_MR_TPERIOD_P_125MS_Val
DECL|RTC_MR_TPERIOD_P_125MS|macro|RTC_MR_TPERIOD_P_125MS
DECL|RTC_MR_TPERIOD_P_1S_Val|macro|RTC_MR_TPERIOD_P_1S_Val
DECL|RTC_MR_TPERIOD_P_1S|macro|RTC_MR_TPERIOD_P_1S
DECL|RTC_MR_TPERIOD_P_250MS_Val|macro|RTC_MR_TPERIOD_P_250MS_Val
DECL|RTC_MR_TPERIOD_P_250MS|macro|RTC_MR_TPERIOD_P_250MS
DECL|RTC_MR_TPERIOD_P_500MS_Val|macro|RTC_MR_TPERIOD_P_500MS_Val
DECL|RTC_MR_TPERIOD_P_500MS|macro|RTC_MR_TPERIOD_P_500MS
DECL|RTC_MR_TPERIOD_Pos|macro|RTC_MR_TPERIOD_Pos
DECL|RTC_MR_TPERIOD|macro|RTC_MR_TPERIOD
DECL|RTC_MR_Type|typedef|} RTC_MR_Type;
DECL|RTC_MR|member|__IO RTC_MR_Type RTC_MR; /**< Offset: 0x04 (R/W 32) Mode Register */
DECL|RTC_MR|member|__IO uint32_t RTC_MR; /**< (RTC Offset: 0x04) Mode Register */
DECL|RTC_SCCR_ACKCLR_Msk|macro|RTC_SCCR_ACKCLR_Msk
DECL|RTC_SCCR_ACKCLR_Pos|macro|RTC_SCCR_ACKCLR_Pos
DECL|RTC_SCCR_ACKCLR|macro|RTC_SCCR_ACKCLR
DECL|RTC_SCCR_ALRCLR_Msk|macro|RTC_SCCR_ALRCLR_Msk
DECL|RTC_SCCR_ALRCLR_Pos|macro|RTC_SCCR_ALRCLR_Pos
DECL|RTC_SCCR_ALRCLR|macro|RTC_SCCR_ALRCLR
DECL|RTC_SCCR_CALCLR_Msk|macro|RTC_SCCR_CALCLR_Msk
DECL|RTC_SCCR_CALCLR_Pos|macro|RTC_SCCR_CALCLR_Pos
DECL|RTC_SCCR_CALCLR|macro|RTC_SCCR_CALCLR
DECL|RTC_SCCR_MASK|macro|RTC_SCCR_MASK
DECL|RTC_SCCR_Msk|macro|RTC_SCCR_Msk
DECL|RTC_SCCR_OFFSET|macro|RTC_SCCR_OFFSET
DECL|RTC_SCCR_SECCLR_Msk|macro|RTC_SCCR_SECCLR_Msk
DECL|RTC_SCCR_SECCLR_Pos|macro|RTC_SCCR_SECCLR_Pos
DECL|RTC_SCCR_SECCLR|macro|RTC_SCCR_SECCLR
DECL|RTC_SCCR_TDERRCLR_Msk|macro|RTC_SCCR_TDERRCLR_Msk
DECL|RTC_SCCR_TDERRCLR_Pos|macro|RTC_SCCR_TDERRCLR_Pos
DECL|RTC_SCCR_TDERRCLR|macro|RTC_SCCR_TDERRCLR
DECL|RTC_SCCR_TIMCLR_Msk|macro|RTC_SCCR_TIMCLR_Msk
DECL|RTC_SCCR_TIMCLR_Pos|macro|RTC_SCCR_TIMCLR_Pos
DECL|RTC_SCCR_TIMCLR|macro|RTC_SCCR_TIMCLR
DECL|RTC_SCCR_Type|typedef|} RTC_SCCR_Type;
DECL|RTC_SCCR|member|__O RTC_SCCR_Type RTC_SCCR; /**< Offset: 0x1C ( /W 32) Status Clear Command Register */
DECL|RTC_SCCR|member|__O uint32_t RTC_SCCR; /**< (RTC Offset: 0x1C) Status Clear Command Register */
DECL|RTC_SR_ACKUPD_FREERUN_Val|macro|RTC_SR_ACKUPD_FREERUN_Val
DECL|RTC_SR_ACKUPD_FREERUN|macro|RTC_SR_ACKUPD_FREERUN
DECL|RTC_SR_ACKUPD_Msk|macro|RTC_SR_ACKUPD_Msk
DECL|RTC_SR_ACKUPD_Pos|macro|RTC_SR_ACKUPD_Pos
DECL|RTC_SR_ACKUPD_UPDATE_Val|macro|RTC_SR_ACKUPD_UPDATE_Val
DECL|RTC_SR_ACKUPD_UPDATE|macro|RTC_SR_ACKUPD_UPDATE
DECL|RTC_SR_ACKUPD|macro|RTC_SR_ACKUPD
DECL|RTC_SR_ALARM_ALARMEVENT_Val|macro|RTC_SR_ALARM_ALARMEVENT_Val
DECL|RTC_SR_ALARM_ALARMEVENT|macro|RTC_SR_ALARM_ALARMEVENT
DECL|RTC_SR_ALARM_Msk|macro|RTC_SR_ALARM_Msk
DECL|RTC_SR_ALARM_NO_ALARMEVENT_Val|macro|RTC_SR_ALARM_NO_ALARMEVENT_Val
DECL|RTC_SR_ALARM_NO_ALARMEVENT|macro|RTC_SR_ALARM_NO_ALARMEVENT
DECL|RTC_SR_ALARM_Pos|macro|RTC_SR_ALARM_Pos
DECL|RTC_SR_ALARM|macro|RTC_SR_ALARM
DECL|RTC_SR_CALEV_CALEVENT_Val|macro|RTC_SR_CALEV_CALEVENT_Val
DECL|RTC_SR_CALEV_CALEVENT|macro|RTC_SR_CALEV_CALEVENT
DECL|RTC_SR_CALEV_Msk|macro|RTC_SR_CALEV_Msk
DECL|RTC_SR_CALEV_NO_CALEVENT_Val|macro|RTC_SR_CALEV_NO_CALEVENT_Val
DECL|RTC_SR_CALEV_NO_CALEVENT|macro|RTC_SR_CALEV_NO_CALEVENT
DECL|RTC_SR_CALEV_Pos|macro|RTC_SR_CALEV_Pos
DECL|RTC_SR_CALEV|macro|RTC_SR_CALEV
DECL|RTC_SR_MASK|macro|RTC_SR_MASK
DECL|RTC_SR_Msk|macro|RTC_SR_Msk
DECL|RTC_SR_OFFSET|macro|RTC_SR_OFFSET
DECL|RTC_SR_SEC_Msk|macro|RTC_SR_SEC_Msk
DECL|RTC_SR_SEC_NO_SECEVENT_Val|macro|RTC_SR_SEC_NO_SECEVENT_Val
DECL|RTC_SR_SEC_NO_SECEVENT|macro|RTC_SR_SEC_NO_SECEVENT
DECL|RTC_SR_SEC_Pos|macro|RTC_SR_SEC_Pos
DECL|RTC_SR_SEC_SECEVENT_Val|macro|RTC_SR_SEC_SECEVENT_Val
DECL|RTC_SR_SEC_SECEVENT|macro|RTC_SR_SEC_SECEVENT
DECL|RTC_SR_SEC|macro|RTC_SR_SEC
DECL|RTC_SR_TDERR_CORRECT_Val|macro|RTC_SR_TDERR_CORRECT_Val
DECL|RTC_SR_TDERR_CORRECT|macro|RTC_SR_TDERR_CORRECT
DECL|RTC_SR_TDERR_ERR_TIMEDATE_Val|macro|RTC_SR_TDERR_ERR_TIMEDATE_Val
DECL|RTC_SR_TDERR_ERR_TIMEDATE|macro|RTC_SR_TDERR_ERR_TIMEDATE
DECL|RTC_SR_TDERR_Msk|macro|RTC_SR_TDERR_Msk
DECL|RTC_SR_TDERR_Pos|macro|RTC_SR_TDERR_Pos
DECL|RTC_SR_TDERR|macro|RTC_SR_TDERR
DECL|RTC_SR_TIMEV_Msk|macro|RTC_SR_TIMEV_Msk
DECL|RTC_SR_TIMEV_NO_TIMEVENT_Val|macro|RTC_SR_TIMEV_NO_TIMEVENT_Val
DECL|RTC_SR_TIMEV_NO_TIMEVENT|macro|RTC_SR_TIMEV_NO_TIMEVENT
DECL|RTC_SR_TIMEV_Pos|macro|RTC_SR_TIMEV_Pos
DECL|RTC_SR_TIMEV_TIMEVENT_Val|macro|RTC_SR_TIMEV_TIMEVENT_Val
DECL|RTC_SR_TIMEV_TIMEVENT|macro|RTC_SR_TIMEV_TIMEVENT
DECL|RTC_SR_TIMEV|macro|RTC_SR_TIMEV
DECL|RTC_SR_Type|typedef|} RTC_SR_Type;
DECL|RTC_SR|member|__I RTC_SR_Type RTC_SR; /**< Offset: 0x18 (R/ 32) Status Register */
DECL|RTC_SR|member|__I uint32_t RTC_SR; /**< (RTC Offset: 0x18) Status Register */
DECL|RTC_TIMALR_AMPM_Msk|macro|RTC_TIMALR_AMPM_Msk
DECL|RTC_TIMALR_AMPM_Pos|macro|RTC_TIMALR_AMPM_Pos
DECL|RTC_TIMALR_AMPM|macro|RTC_TIMALR_AMPM
DECL|RTC_TIMALR_HOUREN_Msk|macro|RTC_TIMALR_HOUREN_Msk
DECL|RTC_TIMALR_HOUREN_Pos|macro|RTC_TIMALR_HOUREN_Pos
DECL|RTC_TIMALR_HOUREN|macro|RTC_TIMALR_HOUREN
DECL|RTC_TIMALR_HOUR_Msk|macro|RTC_TIMALR_HOUR_Msk
DECL|RTC_TIMALR_HOUR_Pos|macro|RTC_TIMALR_HOUR_Pos
DECL|RTC_TIMALR_HOUR|macro|RTC_TIMALR_HOUR
DECL|RTC_TIMALR_MASK|macro|RTC_TIMALR_MASK
DECL|RTC_TIMALR_MINEN_Msk|macro|RTC_TIMALR_MINEN_Msk
DECL|RTC_TIMALR_MINEN_Pos|macro|RTC_TIMALR_MINEN_Pos
DECL|RTC_TIMALR_MINEN|macro|RTC_TIMALR_MINEN
DECL|RTC_TIMALR_MIN_Msk|macro|RTC_TIMALR_MIN_Msk
DECL|RTC_TIMALR_MIN_Pos|macro|RTC_TIMALR_MIN_Pos
DECL|RTC_TIMALR_MIN|macro|RTC_TIMALR_MIN
DECL|RTC_TIMALR_Msk|macro|RTC_TIMALR_Msk
DECL|RTC_TIMALR_OFFSET|macro|RTC_TIMALR_OFFSET
DECL|RTC_TIMALR_SECEN_Msk|macro|RTC_TIMALR_SECEN_Msk
DECL|RTC_TIMALR_SECEN_Pos|macro|RTC_TIMALR_SECEN_Pos
DECL|RTC_TIMALR_SECEN|macro|RTC_TIMALR_SECEN
DECL|RTC_TIMALR_SEC_Msk|macro|RTC_TIMALR_SEC_Msk
DECL|RTC_TIMALR_SEC_Pos|macro|RTC_TIMALR_SEC_Pos
DECL|RTC_TIMALR_SEC|macro|RTC_TIMALR_SEC
DECL|RTC_TIMALR_Type|typedef|} RTC_TIMALR_Type;
DECL|RTC_TIMALR|member|__IO RTC_TIMALR_Type RTC_TIMALR; /**< Offset: 0x10 (R/W 32) Time Alarm Register */
DECL|RTC_TIMALR|member|__IO uint32_t RTC_TIMALR; /**< (RTC Offset: 0x10) Time Alarm Register */
DECL|RTC_TIMR_AMPM_Msk|macro|RTC_TIMR_AMPM_Msk
DECL|RTC_TIMR_AMPM_Pos|macro|RTC_TIMR_AMPM_Pos
DECL|RTC_TIMR_AMPM|macro|RTC_TIMR_AMPM
DECL|RTC_TIMR_HOUR_Msk|macro|RTC_TIMR_HOUR_Msk
DECL|RTC_TIMR_HOUR_Pos|macro|RTC_TIMR_HOUR_Pos
DECL|RTC_TIMR_HOUR|macro|RTC_TIMR_HOUR
DECL|RTC_TIMR_MASK|macro|RTC_TIMR_MASK
DECL|RTC_TIMR_MIN_Msk|macro|RTC_TIMR_MIN_Msk
DECL|RTC_TIMR_MIN_Pos|macro|RTC_TIMR_MIN_Pos
DECL|RTC_TIMR_MIN|macro|RTC_TIMR_MIN
DECL|RTC_TIMR_Msk|macro|RTC_TIMR_Msk
DECL|RTC_TIMR_OFFSET|macro|RTC_TIMR_OFFSET
DECL|RTC_TIMR_SEC_Msk|macro|RTC_TIMR_SEC_Msk
DECL|RTC_TIMR_SEC_Pos|macro|RTC_TIMR_SEC_Pos
DECL|RTC_TIMR_SEC|macro|RTC_TIMR_SEC
DECL|RTC_TIMR_Type|typedef|} RTC_TIMR_Type;
DECL|RTC_TIMR|member|__IO RTC_TIMR_Type RTC_TIMR; /**< Offset: 0x08 (R/W 32) Time Register */
DECL|RTC_TIMR|member|__IO uint32_t RTC_TIMR; /**< (RTC Offset: 0x08) Time Register */
DECL|RTC_VER_MASK|macro|RTC_VER_MASK
DECL|RTC_VER_Msk|macro|RTC_VER_Msk
DECL|RTC_VER_NVCALALR_Msk|macro|RTC_VER_NVCALALR_Msk
DECL|RTC_VER_NVCALALR_Pos|macro|RTC_VER_NVCALALR_Pos
DECL|RTC_VER_NVCALALR|macro|RTC_VER_NVCALALR
DECL|RTC_VER_NVCAL_Msk|macro|RTC_VER_NVCAL_Msk
DECL|RTC_VER_NVCAL_Pos|macro|RTC_VER_NVCAL_Pos
DECL|RTC_VER_NVCAL|macro|RTC_VER_NVCAL
DECL|RTC_VER_NVTIMALR_Msk|macro|RTC_VER_NVTIMALR_Msk
DECL|RTC_VER_NVTIMALR_Pos|macro|RTC_VER_NVTIMALR_Pos
DECL|RTC_VER_NVTIMALR|macro|RTC_VER_NVTIMALR
DECL|RTC_VER_NVTIM_Msk|macro|RTC_VER_NVTIM_Msk
DECL|RTC_VER_NVTIM_Pos|macro|RTC_VER_NVTIM_Pos
DECL|RTC_VER_NVTIM|macro|RTC_VER_NVTIM
DECL|RTC_VER_OFFSET|macro|RTC_VER_OFFSET
DECL|RTC_VER_Type|typedef|} RTC_VER_Type;
DECL|RTC_VER|member|__I RTC_VER_Type RTC_VER; /**< Offset: 0x2C (R/ 32) Valid Entry Register */
DECL|RTC_VER|member|__I uint32_t RTC_VER; /**< (RTC Offset: 0x2C) Valid Entry Register */
DECL|RTC_WPMR_MASK|macro|RTC_WPMR_MASK
DECL|RTC_WPMR_Msk|macro|RTC_WPMR_Msk
DECL|RTC_WPMR_OFFSET|macro|RTC_WPMR_OFFSET
DECL|RTC_WPMR_Type|typedef|} RTC_WPMR_Type;
DECL|RTC_WPMR_WPEN_Msk|macro|RTC_WPMR_WPEN_Msk
DECL|RTC_WPMR_WPEN_Pos|macro|RTC_WPMR_WPEN_Pos
DECL|RTC_WPMR_WPEN|macro|RTC_WPMR_WPEN
DECL|RTC_WPMR_WPKEY_Msk|macro|RTC_WPMR_WPKEY_Msk
DECL|RTC_WPMR_WPKEY_PASSWD_Val|macro|RTC_WPMR_WPKEY_PASSWD_Val
DECL|RTC_WPMR_WPKEY_PASSWD|macro|RTC_WPMR_WPKEY_PASSWD
DECL|RTC_WPMR_WPKEY_Pos|macro|RTC_WPMR_WPKEY_Pos
DECL|RTC_WPMR_WPKEY|macro|RTC_WPMR_WPKEY
DECL|RTC_WPMR|member|__IO RTC_WPMR_Type RTC_WPMR; /**< Offset: 0xE4 (R/W 32) Write Protection Mode Register */
DECL|RTC_WPMR|member|__IO uint32_t RTC_WPMR; /**< (RTC Offset: 0xE4) Write Protection Mode Register */
DECL|Reserved1|member|RoReg8 Reserved1[0xB4];
DECL|Reserved1|member|__I uint32_t Reserved1[45];
DECL|Rtc|typedef|} Rtc;
DECL|Rtc|typedef|} Rtc;
DECL|SECCLR|member|uint32_t SECCLR:1; /**< bit: 2 Second Clear */
DECL|SECDIS|member|uint32_t SECDIS:1; /**< bit: 2 Second Event Interrupt Disable */
DECL|SECEN|member|uint32_t SECEN:1; /**< bit: 2 Second Event Interrupt Enable */
DECL|SECEN|member|uint32_t SECEN:1; /**< bit: 7 Second Alarm Enable */
DECL|SEC|member|uint32_t SEC:1; /**< bit: 2 Second Event */
DECL|SEC|member|uint32_t SEC:1; /**< bit: 2 Second Event Interrupt Mask */
DECL|SEC|member|uint32_t SEC:7; /**< bit: 0..6 Current Second */
DECL|SEC|member|uint32_t SEC:7; /**< bit: 0..6 Second Alarm */
DECL|TDERRCLR|member|uint32_t TDERRCLR:1; /**< bit: 5 Time and/or Date Free Running Error Clear */
DECL|TDERRDIS|member|uint32_t TDERRDIS:1; /**< bit: 5 Time and/or Date Error Interrupt Disable */
DECL|TDERREN|member|uint32_t TDERREN:1; /**< bit: 5 Time and/or Date Error Interrupt Enable */
DECL|TDERR|member|uint32_t TDERR:1; /**< bit: 5 Time and/or Date Error Mask */
DECL|TDERR|member|uint32_t TDERR:1; /**< bit: 5 Time and/or Date Free Running Error */
DECL|THIGH|member|uint32_t THIGH:3; /**< bit: 24..26 High Duration of the Output Pulse */
DECL|TIMCLR|member|uint32_t TIMCLR:1; /**< bit: 3 Time Clear */
DECL|TIMDIS|member|uint32_t TIMDIS:1; /**< bit: 3 Time Event Interrupt Disable */
DECL|TIMEN|member|uint32_t TIMEN:1; /**< bit: 3 Time Event Interrupt Enable */
DECL|TIMEVSEL|member|uint32_t TIMEVSEL:2; /**< bit: 8..9 Time Event Selection */
DECL|TIMEV|member|uint32_t TIMEV:1; /**< bit: 3 Time Event */
DECL|TIM|member|uint32_t TIM:1; /**< bit: 3 Time Event Interrupt Mask */
DECL|TPERIOD|member|uint32_t TPERIOD:2; /**< bit: 28..29 Period of the Output Pulse */
DECL|UPDCAL|member|uint32_t UPDCAL:1; /**< bit: 1 Update Request Calendar Register */
DECL|UPDTIM|member|uint32_t UPDTIM:1; /**< bit: 0 Update Request Time Register */
DECL|WPEN|member|uint32_t WPEN:1; /**< bit: 0 Write Protection Enable */
DECL|WPKEY|member|uint32_t WPKEY:24; /**< bit: 8..31 Write Protection Key */
DECL|YEAR|member|uint32_t YEAR:8; /**< bit: 8..15 Current Year */
DECL|_SAME70_RTC_COMPONENT_H_|macro|_SAME70_RTC_COMPONENT_H_
DECL|_SAME70_RTC_COMPONENT_|macro|_SAME70_RTC_COMPONENT_
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
DECL|uint32_t|member|uint32_t :14; /**< bit: 18..31 Reserved */
DECL|uint32_t|member|uint32_t :16; /**< bit: 0..15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 15 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 19 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 23 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 27 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 30 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 7 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :26; /**< bit: 6..31 Reserved */
DECL|uint32_t|member|uint32_t :28; /**< bit: 4..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 2..3 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 21..22 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 30..31 Reserved */
DECL|uint32_t|member|uint32_t :2; /**< bit: 30..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 5..7 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 10..15 Reserved */
DECL|uint32_t|member|uint32_t :6; /**< bit: 2..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
DECL|uint32_t|member|uint32_t :9; /**< bit: 23..31 Reserved */
