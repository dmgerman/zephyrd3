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
DECL|acg|member|uint32_t acg : 1 __attribute__((packed));
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bypass2|member|uint8_t bypass2 : 1 __attribute__((packed));
DECL|bypass|member|uint32_t bypass : 1 __attribute__((packed));
DECL|clock|member|} clock;
DECL|dc0|member|uint32_t dc0; /* 0x008 RO Device Capabilities */
DECL|dc1|member|uint32_t dc1; /* 0x00c RO Device Capabilities */
DECL|dc2|member|uint32_t dc2; /* 0x010 RO Device Capabilities */
DECL|dc3|member|uint32_t dc3; /* 0x014 RO Device Capabilities */
DECL|dc4|member|uint32_t dc4; /* 0x018 RO Device capabilities */
DECL|dcgc0|member|uint32_t dcgc0; /* 0x120 RW Deep sleep mode Clock Gating */
DECL|dcgc1|member|uint32_t dcgc1; /* 0x124 RW Deep sleep mode Clock Gating */
DECL|dcgc2|member|uint32_t dcgc2; /* 0x128 RW Deep sleep mode Clock Gating */
DECL|did0|member|uint32_t did0; /* 0x000 RO Device ID*/
DECL|did1|member|uint32_t did1; /* 0x004 RO Device ID*/
DECL|dslpclkcfg|member|dslpclkcfg; /* 0x144 RW Deep SLeeP CLocK ConFiGuration
DECL|imc|member|uint32_t imc; /* 0x054 RW Interrupt Mask Control */
DECL|ioscdis|member|uint32_t ioscdis : 1 __attribute__((packed));
DECL|ldopctl|member|uint32_t ldopctl; /* 0x034 RW LDO Power ConTroL */
DECL|misc|member|uint32_t misc; /* 0x058 RW1C Masked Int. Status & Clear */
DECL|moscdis|member|uint32_t moscdis : 1 __attribute__((packed));
DECL|oscsrc2|member|uint8_t oscsrc2 : 3 __attribute__((packed));
DECL|oscsrc|member|uint32_t oscsrc : 2 __attribute__((packed));
DECL|pborctl|member|uint32_t pborctl; /* 0x030 RW Brown-Out Reset ConTroL */
DECL|pllcfg|member|uint32_t pllcfg; /* 0x064 RW xtal-to-pll translation */
DECL|pwmdiv|member|uint32_t pwmdiv : 3 __attribute__((packed)); /* 2**(n+1) */
DECL|pwrdn2|member|uint8_t pwrdn2 : 1 __attribute__((packed));
DECL|pwrdn|member|uint32_t pwrdn : 1 __attribute__((packed));
DECL|rcc2|member|union __rcc2 rcc2; /* 0x070 RW Run-mode Clock Configuration */
DECL|rcc|member|union __rcc rcc; /* 0x060 RW Run-mode Clock Configuration */
DECL|rcgc0|member|uint32_t rcgc0; /* 0x100 RW Run-mode Clock Gating */
DECL|rcgc1|member|uint32_t rcgc1; /* 0x104 RW Run-mode Clock Gating */
DECL|rcgc2|member|uint32_t rcgc2; /* 0x108 RW Run-mode Clock Gating */
DECL|resc|member|uint32_t resc; /* 0x05C RW RESet Cause */
DECL|ris|member|uint32_t ris; /* 0x050 RO Raw Interrupt Status */
DECL|rsvd__01c_02f|member|uint32_t rsvd__01c_02f[(0x30 - 0x1c) / 4];
DECL|rsvd__038_03f|member|uint32_t rsvd__038_03f[(0x40 - 0x38) / 4];
DECL|rsvd__04c_04f|member|uint32_t rsvd__04c_04f;
DECL|rsvd__068_06f|member|uint32_t rsvd__068_06f[(0x70 - 0x068) / 4];
DECL|rsvd__074_0ff|member|uint32_t rsvd__074_0ff[(0x100 - 0x074) / 4];
DECL|rsvd__0_3|member|uint8_t rsvd__0_3 : 4 __attribute__((packed));
DECL|rsvd__10c_10f|member|uint32_t rsvd__10c_10f;
DECL|rsvd__10|member|uint32_t rsvd__10 : 1 __attribute__((packed));
DECL|rsvd__11c_11f|member|uint32_t rsvd__11c_11f;
DECL|rsvd__12c_143|member|uint32_t rsvd__12c_143[(0x144 - 0x12c) / 4];
DECL|rsvd__12|member|uint32_t rsvd__12 : 1 __attribute__((packed));
DECL|rsvd__12|member|uint8_t rsvd__12 : 1 __attribute__((packed));
DECL|rsvd__14_16|member|uint32_t rsvd__14_16 : 3 __attribute__((packed));
DECL|rsvd__14_22|member|uint16_t rsvd__14_22 : 9 __attribute__((packed));
DECL|rsvd__21|member|uint32_t rsvd__21 : 1 __attribute__((packed));
DECL|rsvd__28_31|member|uint32_t rsvd__28_31 : 4 __attribute__((packed));
DECL|rsvd__29_30|member|uint8_t rsvd__29_30 : 2 __attribute__((packed));
DECL|rsvd__2_3|member|uint32_t rsvd__2_3 : 2 __attribute__((packed));
DECL|rsvd__7_10|member|uint16_t rsvd__7_10 : 4 __attribute__((packed));
DECL|scgc0|member|uint32_t scgc0; /* 0x110 RW Sleep-mode Clock Gating */
DECL|scgc1|member|uint32_t scgc1; /* 0x114 RW Sleep-mode Clock Gating */
DECL|scgc2|member|uint32_t scgc2; /* 0x118 RW Sleep-mode Clock Gating */
DECL|srcr0|member|uint32_t srcr0; /* 0x040 RW Software Reset Control Register */
DECL|srcr1|member|uint32_t srcr1; /* 0x044 RW Software Reset Control Register */
DECL|srcr2|member|uint32_t srcr2; /* 0x048 RW Software Reset Control Register */
DECL|sysdiv2|member|uint16_t sysdiv2 : 6 __attribute__((packed));
DECL|sysdiv|member|uint32_t sysdiv : 4 __attribute__((packed));
DECL|usepwmdiv|member|uint32_t usepwmdiv : 1 __attribute__((packed));
DECL|usercc2|member|uint8_t usercc2 : 1 __attribute__((packed));
DECL|usesysdiv|member|uint32_t usesysdiv : 1 __attribute__((packed));
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
DECL|xtal|member|uint32_t xtal : 4 __attribute__((packed));
