DECL|_SCP_CRYSTAL_1MHZ_NOPLL|macro|_SCP_CRYSTAL_1MHZ_NOPLL
DECL|_SCP_CRYSTAL_1_8432MHZ_NOPLL|macro|_SCP_CRYSTAL_1_8432MHZ_NOPLL
DECL|_SCP_CRYSTAL_2MHZ_NOPLL|macro|_SCP_CRYSTAL_2MHZ_NOPLL
DECL|_SCP_CRYSTAL_2_4576MHZ_NOPLL|macro|_SCP_CRYSTAL_2_4576MHZ_NOPLL
DECL|_SCP_CRYSTAL_3_579545MHZ|macro|_SCP_CRYSTAL_3_579545MHZ
DECL|_SCP_CRYSTAL_3_6864MHZ|macro|_SCP_CRYSTAL_3_6864MHZ
DECL|_SCP_CRYSTAL_4MHZ|macro|_SCP_CRYSTAL_4MHZ
DECL|_SCP_CRYSTAL_4_0964MHZ|macro|_SCP_CRYSTAL_4_0964MHZ
DECL|_SCP_CRYSTAL_4_9152MHZ|macro|_SCP_CRYSTAL_4_9152MHZ
DECL|_SCP_CRYSTAL_5MHZ|macro|_SCP_CRYSTAL_5MHZ
DECL|_SCP_CRYSTAL_5_12MHZ|macro|_SCP_CRYSTAL_5_12MHZ
DECL|_SCP_CRYSTAL_6MHZ|macro|_SCP_CRYSTAL_6MHZ
DECL|_SCP_CRYSTAL_6_144MHZ|macro|_SCP_CRYSTAL_6_144MHZ
DECL|_SCP_CRYSTAL_7_3728MHZ|macro|_SCP_CRYSTAL_7_3728MHZ
DECL|_SCP_CRYSTAL_8MHZ|macro|_SCP_CRYSTAL_8MHZ
DECL|_SCP_CRYSTAL_8_192MHZ|macro|_SCP_CRYSTAL_8_192MHZ
DECL|_SCP_H_|macro|_SCP_H_
DECL|_SCP_OSC_SOURCE_EXTERNAL_32KHZ|macro|_SCP_OSC_SOURCE_EXTERNAL_32KHZ
DECL|_SCP_OSC_SOURCE_INTERNAL_20KHZ|macro|_SCP_OSC_SOURCE_INTERNAL_20KHZ
DECL|_SCP_OSC_SOURCE_INTERNAL_DIV4|macro|_SCP_OSC_SOURCE_INTERNAL_DIV4
DECL|_SCP_OSC_SOURCE_INTERNAL|macro|_SCP_OSC_SOURCE_INTERNAL
DECL|_SCP_OSC_SOURCE_MAIN|macro|_SCP_OSC_SOURCE_MAIN
DECL|__rcc2|union|union __rcc2 {
DECL|__rcc|union|union __rcc {
DECL|__scp|struct|struct __scp {
DECL|acg|member|u32_t acg : 1 __packed;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bypass2|member|u8_t bypass2 : 1 __packed;
DECL|bypass|member|u32_t bypass : 1 __packed;
DECL|clock|member|} clock;
DECL|dc0|member|u32_t dc0; /* 0x008 RO Device Capabilities */
DECL|dc1|member|u32_t dc1; /* 0x00c RO Device Capabilities */
DECL|dc2|member|u32_t dc2; /* 0x010 RO Device Capabilities */
DECL|dc3|member|u32_t dc3; /* 0x014 RO Device Capabilities */
DECL|dc4|member|u32_t dc4; /* 0x018 RO Device capabilities */
DECL|dcgc0|member|u32_t dcgc0; /* 0x120 RW Deep sleep mode Clock Gating */
DECL|dcgc1|member|u32_t dcgc1; /* 0x124 RW Deep sleep mode Clock Gating */
DECL|dcgc2|member|u32_t dcgc2; /* 0x128 RW Deep sleep mode Clock Gating */
DECL|did0|member|u32_t did0; /* 0x000 RO Device ID*/
DECL|did1|member|u32_t did1; /* 0x004 RO Device ID*/
DECL|dslpclkcfg|member|dslpclkcfg; /* 0x144 RW Deep SLeeP CLocK ConFiGuration
DECL|imc|member|u32_t imc; /* 0x054 RW Interrupt Mask Control */
DECL|ioscdis|member|u32_t ioscdis : 1 __packed;
DECL|ldopctl|member|u32_t ldopctl; /* 0x034 RW LDO Power ConTroL */
DECL|misc|member|u32_t misc; /* 0x058 RW1C Masked Int. Status & Clear */
DECL|moscdis|member|u32_t moscdis : 1 __packed;
DECL|oscsrc2|member|u8_t oscsrc2 : 3 __packed;
DECL|oscsrc|member|u32_t oscsrc : 2 __packed;
DECL|pborctl|member|u32_t pborctl; /* 0x030 RW Brown-Out Reset ConTroL */
DECL|pllcfg|member|u32_t pllcfg; /* 0x064 RW xtal-to-pll translation */
DECL|pwmdiv|member|u32_t pwmdiv : 3 __packed; /* 2**(n+1) */
DECL|pwrdn2|member|u8_t pwrdn2 : 1 __packed;
DECL|pwrdn|member|u32_t pwrdn : 1 __packed;
DECL|rcc2|member|union __rcc2 rcc2; /* 0x070 RW Run-mode Clock Configuration */
DECL|rcc|member|union __rcc rcc; /* 0x060 RW Run-mode Clock Configuration */
DECL|rcgc0|member|u32_t rcgc0; /* 0x100 RW Run-mode Clock Gating */
DECL|rcgc1|member|u32_t rcgc1; /* 0x104 RW Run-mode Clock Gating */
DECL|rcgc2|member|u32_t rcgc2; /* 0x108 RW Run-mode Clock Gating */
DECL|resc|member|u32_t resc; /* 0x05C RW RESet Cause */
DECL|ris|member|u32_t ris; /* 0x050 RO Raw Interrupt Status */
DECL|rsvd__01c_02f|member|u32_t rsvd__01c_02f[(0x30 - 0x1c) / 4];
DECL|rsvd__038_03f|member|u32_t rsvd__038_03f[(0x40 - 0x38) / 4];
DECL|rsvd__04c_04f|member|u32_t rsvd__04c_04f;
DECL|rsvd__068_06f|member|u32_t rsvd__068_06f[(0x70 - 0x068) / 4];
DECL|rsvd__074_0ff|member|u32_t rsvd__074_0ff[(0x100 - 0x074) / 4];
DECL|rsvd__0_3|member|u8_t rsvd__0_3 : 4 __packed;
DECL|rsvd__10c_10f|member|u32_t rsvd__10c_10f;
DECL|rsvd__10|member|u32_t rsvd__10 : 1 __packed;
DECL|rsvd__11c_11f|member|u32_t rsvd__11c_11f;
DECL|rsvd__12c_143|member|u32_t rsvd__12c_143[(0x144 - 0x12c) / 4];
DECL|rsvd__12|member|u32_t rsvd__12 : 1 __packed;
DECL|rsvd__12|member|u8_t rsvd__12 : 1 __packed;
DECL|rsvd__14_16|member|u32_t rsvd__14_16 : 3 __packed;
DECL|rsvd__14_22|member|u16_t rsvd__14_22 : 9 __packed;
DECL|rsvd__21|member|u32_t rsvd__21 : 1 __packed;
DECL|rsvd__28_31|member|u32_t rsvd__28_31 : 4 __packed;
DECL|rsvd__29_30|member|u8_t rsvd__29_30 : 2 __packed;
DECL|rsvd__2_3|member|u32_t rsvd__2_3 : 2 __packed;
DECL|rsvd__7_10|member|u16_t rsvd__7_10 : 4 __packed;
DECL|scgc0|member|u32_t scgc0; /* 0x110 RW Sleep-mode Clock Gating */
DECL|scgc1|member|u32_t scgc1; /* 0x114 RW Sleep-mode Clock Gating */
DECL|scgc2|member|u32_t scgc2; /* 0x118 RW Sleep-mode Clock Gating */
DECL|srcr0|member|u32_t srcr0; /* 0x040 RW Software Reset Control Register */
DECL|srcr1|member|u32_t srcr1; /* 0x044 RW Software Reset Control Register */
DECL|srcr2|member|u32_t srcr2; /* 0x048 RW Software Reset Control Register */
DECL|sysdiv2|member|u16_t sysdiv2 : 6 __packed;
DECL|sysdiv|member|u32_t sysdiv : 4 __packed;
DECL|usepwmdiv|member|u32_t usepwmdiv : 1 __packed;
DECL|usercc2|member|u8_t usercc2 : 1 __packed;
DECL|usesysdiv|member|u32_t usesysdiv : 1 __packed;
DECL|value|member|u32_t value;
DECL|value|member|u32_t value;
DECL|xtal|member|u32_t xtal : 4 __packed;
