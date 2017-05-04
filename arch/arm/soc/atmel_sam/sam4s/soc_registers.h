DECL|_ATMEL_SAM4S_SOC_REGS_H_|macro|_ATMEL_SAM4S_SOC_REGS_H_
DECL|__eefc|struct|struct __eefc {
DECL|__pio|struct|struct __pio {
DECL|__pmc|struct|struct __pmc {
DECL|__supc|struct|struct __supc {
DECL|__wdt|struct|struct __wdt {
DECL|abcdsr1|member|u32_t abcdsr1; /* 0x70 Peripheral ABCD Select 1 */
DECL|abcdsr2|member|u32_t abcdsr2; /* 0x74 Peripheral ABCD Select 2 */
DECL|aimdr|member|u32_t aimdr; /* 0xB4 Additional Interrupt Modes */
DECL|aimer|member|u32_t aimer; /* 0xB0 Additional Interrupt Modes */
DECL|aimmr|member|u32_t aimmr; /* 0xB8 Additional Interrupt Modes */
DECL|ckgr_mcfr|member|u32_t ckgr_mcfr; /* 0x24 Main Clock Freq. */
DECL|ckgr_mor|member|u32_t ckgr_mor; /* 0x20 Main Oscillator */
DECL|ckgr_pllar|member|u32_t ckgr_pllar; /* 0x28 PLLA */
DECL|ckgr_pllbr|member|u32_t ckgr_pllbr; /* 0x2C PLLB */
DECL|ckgr_uckr|member|u32_t ckgr_uckr; /* 0x1C UTMI Clock */
DECL|codr|member|u32_t codr; /* 0x34 Clear Output Data */
DECL|cr|member|u32_t cr; /* 0x00 Control */
DECL|cr|member|u32_t cr; /* 0x00 Control Register */
DECL|difsr|member|u32_t difsr; /* 0x84 Debouncing Input Filter */
DECL|elsr|member|u32_t elsr; /* 0xC8 Edge/Level Status */
DECL|esr|member|u32_t esr; /* 0xC0 Edge Select */
DECL|fcr|member|u32_t fcr; /* 0x04 Flash Command Register */
DECL|fellsr|member|u32_t fellsr; /* 0xD0 Falling Edge/Low Level Sel */
DECL|fmr|member|u32_t fmr; /* 0x00 Flash Mode Register */
DECL|focr|member|u32_t focr; /* 0x78 Fault Outpu Clear */
DECL|frlhsr|member|u32_t frlhsr; /* 0xD8 Fall/Rise - Low/High Status */
DECL|frr|member|u32_t frr; /* 0x0C Flash Result Register */
DECL|fsmr|member|u32_t fsmr; /* 0x70 Fast Startup Mode */
DECL|fspr|member|u32_t fspr; /* 0x74 Fast Startup Polarity */
DECL|fsr|member|u32_t fsr; /* 0x08 Flash Status Register */
DECL|idr|member|u32_t idr; /* 0x44 Interrupt Disable */
DECL|idr|member|u32_t idr; /* 0x64 Interrupt Disable */
DECL|ier|member|u32_t ier; /* 0x40 Interrupt Enable */
DECL|ier|member|u32_t ier; /* 0x60 Interrupt Enable */
DECL|ifdgsr|member|u32_t ifdgsr; /* 0x88 Glitch or Debouncing Input */
DECL|ifdr|member|u32_t ifdr; /* 0x24 Glitch Input Filter Disable */
DECL|ifer|member|u32_t ifer; /* 0x20 Glitch Input Filter Enable */
DECL|ifsr|member|u32_t ifsr; /* 0x28 Glitch Input Fitler Status */
DECL|imr|member|u32_t imr; /* 0x48 Interrupt Mask */
DECL|imr|member|u32_t imr; /* 0x6C Interrupt Mask */
DECL|isr|member|u32_t isr; /* 0x4C Interrupt Status */
DECL|locksr|member|u32_t locksr; /* 0xE0 Lock Status */
DECL|lsr|member|u32_t lsr; /* 0xC4 Level Select */
DECL|mckr|member|u32_t mckr; /* 0x30 Master Clock */
DECL|mddr|member|u32_t mddr; /* 0x54 Multi-driver Disable */
DECL|mder|member|u32_t mder; /* 0x50 Multi-driver Enable */
DECL|mdsr|member|u32_t mdsr; /* 0x58 Multi-driver Status */
DECL|mr|member|u32_t mr; /* 0x04 Mode Register */
DECL|mr|member|u32_t mr; /* 0x08 Mode */
DECL|odr|member|u32_t odr; /* 0x14 Output Disable */
DECL|odsr|member|u32_t odsr; /* 0x38 Output Data Status */
DECL|oer|member|u32_t oer; /* 0x10 Output Enable */
DECL|osr|member|u32_t osr; /* 0x18 Output Status */
DECL|owdr|member|u32_t owdr; /* 0xA4 Output Write Disable */
DECL|ower|member|u32_t ower; /* 0xA0 Output Write Enable */
DECL|owsr|member|u32_t owsr; /* 0xA8 Output Write Status */
DECL|pcdr0|member|u32_t pcdr0; /* 0x14 Peripheral Clock Disable 0 */
DECL|pcdr1|member|u32_t pcdr1; /* 0x104 Peripheral Clock Disable 1 */
DECL|pcer0|member|u32_t pcer0; /* 0x10 Peripheral Clock Enable 0 */
DECL|pcer1|member|u32_t pcer1; /* 0x100 Peripheral Clock Enable 1 */
DECL|pck0|member|u32_t pck0; /* 0x40 Programmable Clock 0 */
DECL|pck1|member|u32_t pck1; /* 0x44 Programmable Clock 1 */
DECL|pck2|member|u32_t pck2; /* 0x48 Programmable Clock 2 */
DECL|pcr|member|u32_t pcr; /* 0x10C Peripheral Control */
DECL|pcsr0|member|u32_t pcsr0; /* 0x18 Peripheral Clock Status 0 */
DECL|pcsr1|member|u32_t pcsr1; /* 0x108 Peripheral Clock Status 1 */
DECL|pdr|member|u32_t pdr; /* 0x04 Disable */
DECL|pdsr|member|u32_t pdsr; /* 0x3C Pin Data Status */
DECL|per|member|u32_t per; /* 0x00 Enable */
DECL|psr|member|u32_t psr; /* 0x08 Status */
DECL|pudr|member|u32_t pudr; /* 0x60 Pull-up Disable */
DECL|puer|member|u32_t puer; /* 0x64 Pull-up Enable */
DECL|pusr|member|u32_t pusr; /* 0x68 Pad Pull-up Status */
DECL|rehlsr|member|u32_t rehlsr; /* 0xD4 Rising Edge/High Level Sel */
DECL|res0|member|u32_t res0; /* 0x0C reserved */
DECL|res0|member|u32_t res0; /* 0x0C reserved */
DECL|res10|member|u32_t res10; /* 0xDC reserved */
DECL|res1|member|u32_t res1; /* 0x1C reserved */
DECL|res2|member|u32_t res2; /* 0x2C reserved */
DECL|res2|member|u32_t res2; /* 0x34 reserved */
DECL|res3|member|u32_t res3; /* 0x3C reserved */
DECL|res3|member|u32_t res3; /* 0x5C reserved */
DECL|res4|member|u32_t res4; /* 0x6C reserved */
DECL|res4|member|u32_t res4[5]; /* 0x4C-0x5C reserved */
DECL|res5|member|u32_t res5[26]; /* 0x7C-0xE0 reserved */
DECL|res5|member|u32_t res5[2]; /* 0x78-0x7C reserved */
DECL|res6|member|u32_t res6[4]; /* 0x90-0x9C reserved */
DECL|res6|member|u32_t res6[5]; /* 0xEC-0xFC reserved */
DECL|res7|member|u32_t res7; /* 0xAC reserved */
DECL|res8|member|u32_t res8; /* 0xBC reserved */
DECL|res9|member|u32_t res9; /* 0xCC reserved */
DECL|scdr|member|u32_t scdr; /* 0x04 System Clock Disable */
DECL|scdr|member|u32_t scdr; /* 0x8C Slow Clock Divider Debounce */
DECL|scer|member|u32_t scer; /* 0x00 System Clock Enable */
DECL|scifsr|member|u32_t scifsr; /* 0x80 System Clock Glitch Input */
DECL|scsr|member|u32_t scsr; /* 0x08 System Clock Status */
DECL|smmr|member|u32_t smmr; /* 0x04 Supply Monitor Mode */
DECL|sodr|member|u32_t sodr; /* 0x30 Set Output Data */
DECL|sr|member|u32_t sr; /* 0x08 Status Register */
DECL|sr|member|u32_t sr; /* 0x14 Status */
DECL|sr|member|u32_t sr; /* 0x68 Status */
DECL|usb|member|u32_t usb; /* 0x38 USB Clock */
DECL|wpmr|member|u32_t wpmr; /* 0xE4 Write Protect Mode */
DECL|wpmr|member|u32_t wpmr; /* 0xE4 Write Protect Mode */
DECL|wpsr|member|u32_t wpsr; /* 0xE8 Write Protect Status */
DECL|wpsr|member|u32_t wpsr; /* 0xE8 Write Protect Status */
DECL|wuir|member|u32_t wuir; /* 0x10 Wake Up Inputs */
DECL|wumr|member|u32_t wumr; /* 0x0C Wake Up Mode */
