DECL|_SCB_CCR_DIV_0_TRP|macro|_SCB_CCR_DIV_0_TRP
DECL|_SCB_CCR_UNALIGN_TRP|macro|_SCB_CCR_UNALIGN_TRP
DECL|_SCS__H_|macro|_SCS__H_
DECL|_ScsFoldItDisable|function|static inline void _ScsFoldItDisable(void)
DECL|_ScsFoldItEnable|function|static inline void _ScsFoldItEnable(void)
DECL|_ScsIntMultiCycleInstDisable|function|static inline void _ScsIntMultiCycleInstDisable(void)
DECL|_ScsIntMultiCycleInstEnable|function|static inline void _ScsIntMultiCycleInstEnable(void)
DECL|_ScsNumIrqGet|function|static inline int _ScsNumIrqGet(void)
DECL|_ScsWriteBufDisable|function|static inline void _ScsWriteBufDisable(void)
DECL|_ScsWriteBufEnable|function|static inline void _ScsWriteBufEnable(void)
DECL|__actlr|union|union __actlr {
DECL|__aircr|union|union __aircr {
DECL|__ccr|union|union __ccr {
DECL|__cfsr|union|union __cfsr {
DECL|__cpuid|union|union __cpuid {
DECL|__hfsr|union|union __hfsr {
DECL|__icsr|union|union __icsr {
DECL|__ictr|union|union __ictr {
DECL|__mpu_ctrl|union|union __mpu_ctrl {
DECL|__mpu_rasr|union|union __mpu_rasr {
DECL|__mpu_rbar|union|union __mpu_rbar {
DECL|__mpu_rnr|union|union __mpu_rnr {
DECL|__mpu_type|union|union __mpu_type {
DECL|__scr|union|union __scr {
DECL|__scs|struct|struct __scs {
DECL|__shcsr|union|union __shcsr {
DECL|__stcsr|union|union __stcsr {
DECL|__vtor|union|union __vtor {
DECL|_scs_relocate_vector_table|function|static inline void _scs_relocate_vector_table(void *new_addr)
DECL|actlr|member|union __actlr actlr; /* 0x008 Auxiliary ConTroL Register */
DECL|addr|member|uint32_t addr : 27 __packed;
DECL|afsr|member|uint32_t afsr; /* 0xd3C Aux Fault Status Register */
DECL|aircr|member|aircr; /* 0xd0c App IRQ and Reset Control Register */
DECL|ap|member|uint32_t ap : 3 __packed;
DECL|bfarvalid|member|uint8_t bfarvalid : 1 __packed;
DECL|bfar|member|uint32_t bfar; /* 0xd38 BusFault Address Register */
DECL|bfhfnmign|member|uint32_t bfhfnmign : 1 __packed;
DECL|bfsr|member|} bfsr;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|bit|member|} bit;
DECL|busfaultact|member|uint32_t busfaultact : 1 __packed;
DECL|busfaultena|member|uint32_t busfaultena : 1 __packed;
DECL|busfaultpended|member|uint32_t busfaultpended : 1 __packed;
DECL|byte|member|} byte;
DECL|b|member|uint32_t b : 1 __packed;
DECL|ccr|member|union __ccr ccr; /* 0xd14 Configuration and Control Register */
DECL|cfsr|member|union __cfsr cfsr; /* 0xd28 Configurable Fault Status Register
DECL|clksource|member|uint8_t clksource : 1 __packed;
DECL|constant|member|uint32_t constant : 4 __packed;
DECL|countflag|member|uint16_t countflag : 1 __packed;
DECL|cpuid|member|union __cpuid cpuid; /* 0xd00 CPUID register */
DECL|c|member|uint32_t c : 1 __packed;
DECL|daccviol|member|uint8_t daccviol : 1 __packed;
DECL|debugevt|member|uint32_t debugevt : 1 __packed;
DECL|dfsr|member|uint32_t dfsr; /* 0xd30 Debug Fault Status Register */
DECL|disdefwbuf|member|uint32_t disdefwbuf : 1 __packed;
DECL|disfold|member|uint32_t disfold : 1 __packed;
DECL|dismcycint|member|uint32_t dismcycint : 1 __packed;
DECL|div_0_trp|member|uint32_t div_0_trp : 1 __packed;
DECL|divbyzero|member|uint16_t divbyzero : 1 __packed;
DECL|dregion|member|uint32_t dregion : 8 __packed;
DECL|enable|member|uint32_t enable : 1 __packed;
DECL|enable|member|uint32_t enable : 1 __packed;
DECL|enable|member|uint8_t enable : 1 __packed;
DECL|endianness|member|uint32_t endianness : 1 __packed; /* RO */
DECL|forced|member|uint32_t forced : 1 __packed;
DECL|hfnmiena|member|uint32_t hfnmiena : 1 __packed;
DECL|hfsr|member|union __hfsr hfsr; /* 0xd2C Hard Fault Status Register */
DECL|iabr|member|uint32_t iabr[8]; /* 0x300 Interrupt Active-Bit Registers */
DECL|iaccviol|member|uint8_t iaccviol : 1 __packed;
DECL|ibuserr|member|uint8_t ibuserr : 1 __packed;
DECL|icer|member|uint32_t icer[8]; /* 0x180 Interrupt Clear-Enable Registers */
DECL|icpr|member|uint32_t icpr[8]; /* 0x280 Interrupt Clear-Pending Registers */
DECL|icsr|member|union __icsr icsr; /* 0xd04 IRQ Control and Start Register */
DECL|ictr|member|union __ictr ictr; /* 0x004 Interrupt Controller Type Register */
DECL|implementer|member|uint32_t implementer : 8 __packed;
DECL|impreciserr|member|uint8_t impreciserr : 1 __packed;
DECL|intlinesnum|member|uint32_t intlinesnum : 4 __packed;
DECL|invpc|member|uint16_t invpc : 1 __packed;
DECL|invstate|member|uint16_t invstate : 1 __packed;
DECL|ipr|member|uint8_t ipr[240]; /* 0x400 Interrupt Priority Registers */
DECL|iregion|member|uint32_t iregion : 8 __packed;
DECL|iser|member|uint32_t iser[8]; /* 0x100 Interrupt Set-Enable Registers */
DECL|ispr|member|uint32_t ispr[8]; /* 0x200 Interrupt Set-Pending Registers */
DECL|isrpending|member|uint32_t isrpending : 1 __packed;
DECL|memfaultact|member|uint32_t memfaultact : 1 __packed;
DECL|memfaultena|member|uint32_t memfaultena : 1 __packed;
DECL|memfaultpended|member|uint32_t memfaultpended : 1 __packed;
DECL|mmarvalid|member|uint8_t mmarvalid : 1 __packed;
DECL|mmfar|member|uint32_t mmfar; /* 0xd34 MemManage Fault Address Register */
DECL|mmfsr|member|} mmfsr;
DECL|monitoract|member|uint32_t monitoract : 1 __packed;
DECL|mpu_ctrl|member|union __mpu_ctrl mpu_ctrl; /* 0xd94 RW ConTRoL register */
DECL|mpu_rasr_a1|member|union __mpu_rasr mpu_rasr_a1; /* 0xda8 RW alias of mpu_rasr */
DECL|mpu_rasr_a2|member|union __mpu_rasr mpu_rasr_a2; /* 0xdb0 RW alias of mpu_rasr */
DECL|mpu_rasr_a3|member|union __mpu_rasr mpu_rasr_a3; /* 0xdb8 RW alias of mpu_rasr */
DECL|mpu_rasr|member|union __mpu_rasr mpu_rasr; /* 0xda0 RW Region Attr and Size
DECL|mpu_rbar_a1|member|union __mpu_rbar mpu_rbar_a1; /* 0xda4 RW alias of mpu_rbar */
DECL|mpu_rbar_a2|member|union __mpu_rbar mpu_rbar_a2; /* 0xdac RW alias of mpu_rbar */
DECL|mpu_rbar_a3|member|union __mpu_rbar mpu_rbar_a3; /* 0xdb4 RW alias of mpu_rbar */
DECL|mpu_rbar|member|union __mpu_rbar mpu_rbar; /* 0xd9c RW Region Base Addr Reg. */
DECL|mpu_rnr|member|union __mpu_rnr mpu_rnr; /* 0xd98 RW Region Number Register */
DECL|mpu_type|member|union __mpu_type mpu_type; /* 0xd90 RO TYPE register */
DECL|mpu|member|} mpu; /* offset: 0xd90, size: 0x02c */
DECL|mstkerr|member|uint8_t mstkerr : 1 __packed;
DECL|munstkerr|member|uint8_t munstkerr : 1 __packed;
DECL|nmipendset|member|uint32_t nmipendset : 1 __packed;
DECL|nocp|member|uint16_t nocp : 1 __packed;
DECL|nonbasethrdena|member|uint32_t nonbasethrdena : 1 __packed;
DECL|nvic|member|} nvic; /* offset: 0x100, size 0x400 */
DECL|partno|member|uint32_t partno : 12 __packed;
DECL|pendstclr|member|uint32_t pendstclr : 1 __packed;
DECL|pendstset|member|uint32_t pendstset : 1 __packed;
DECL|pendsvact|member|uint32_t pendsvact : 1 __packed;
DECL|pendsvclr|member|uint32_t pendsvclr : 1 __packed;
DECL|pendsvset|member|uint32_t pendsvset : 1 __packed;
DECL|preciserr|member|uint8_t preciserr : 1 __packed;
DECL|prigroup|member|uint32_t prigroup : 3 __packed;
DECL|privdefena|member|uint32_t privdefena : 1 __packed;
DECL|region|member|uint32_t region : 8 __packed;
DECL|region|member|uint8_t region : 4 __packed;
DECL|rettobase|member|uint32_t rettobase : 1 __packed;
DECL|revision|member|uint32_t revision : 4 __packed;
DECL|rsvd__00c_00f|member|uint32_t rsvd__00c_00f;
DECL|rsvd__020_0ff|member|uint32_t rsvd__020_0ff[(0x100 - 0x20) / 4];
DECL|rsvd__0_6|member|uint32_t rsvd__0_6 : 7 __packed;
DECL|rsvd__0|member|uint32_t rsvd__0 : 1 __packed;
DECL|rsvd__0|member|uint32_t rsvd__0 : 1 __packed;
DECL|rsvd__10_15|member|uint16_t rsvd__10_15 : 6 __packed;
DECL|rsvd__10_31|member|uint32_t rsvd__10_31 : 22 __packed;
DECL|rsvd__11_14|member|uint32_t rsvd__11_14 : 4 __packed;
DECL|rsvd__120_17f|member|uint32_t rsvd__120_17f[24];
DECL|rsvd__17_31|member|uint16_t rsvd__17_31 : 15 __packed;
DECL|rsvd__19_31|member|uint32_t rsvd__19_31 : 13 __packed;
DECL|rsvd__1_7|member|uint32_t rsvd__1_7 : 7 __packed;
DECL|rsvd__1a0_1ff|member|uint32_t rsvd__1a0_1ff[24];
DECL|rsvd__220_27f|member|uint32_t rsvd__220_27f[24];
DECL|rsvd__22_23|member|uint32_t rsvd__22_23 : 2 __packed;
DECL|rsvd__23|member|uint32_t rsvd__23 : 1 __packed;
DECL|rsvd__24_31|member|uint32_t rsvd__24_31 : 24 __packed;
DECL|rsvd__24_31|member|uint32_t rsvd__24_31 : 29 __packed;
DECL|rsvd__24_31|member|uint32_t rsvd__24_31 : 8 __packed;
DECL|rsvd__24|member|uint32_t rsvd__24 : 1 __packed;
DECL|rsvd__27|member|uint32_t rsvd__27 : 1 __packed;
DECL|rsvd__29_30|member|uint32_t rsvd__29_30 : 2 __packed;
DECL|rsvd__29_31|member|uint32_t rsvd__29_31 : 3 __packed;
DECL|rsvd__2_29|member|uint32_t rsvd__2_29 : 28 __packed;
DECL|rsvd__2a0_2ff|member|uint32_t rsvd__2a0_2ff[24];
DECL|rsvd__2|member|uint32_t rsvd__2 : 1 __packed;
DECL|rsvd__2|member|uint32_t rsvd__2 : 1 __packed;
DECL|rsvd__2|member|uint8_t rsvd__2 : 1 __packed;
DECL|rsvd__30_31|member|uint32_t rsvd__30_31 : 2 __packed;
DECL|rsvd__320_37f|member|uint32_t rsvd__320_37f[24];
DECL|rsvd__380_3ff|member|uint32_t rsvd__380_3ff[32];
DECL|rsvd__3_15|member|uint16_t rsvd__3_15 : 13 __packed;
DECL|rsvd__3_31|member|uint32_t rsvd__3_31 : 28 __packed;
DECL|rsvd__3_7|member|uint32_t rsvd__3_7 : 5 __packed;
DECL|rsvd__3|member|uint32_t rsvd__3 : 1 __packed;
DECL|rsvd__4_31|member|uint32_t rsvd__4_31 : 28 __packed;
DECL|rsvd__4_6|member|uint32_t rsvd__4_6 : 3 __packed;
DECL|rsvd__4_7|member|uint16_t rsvd__4_7 : 4 __packed;
DECL|rsvd__4f0_4ff|member|uint32_t rsvd__4f0_4ff[4];
DECL|rsvd__500_cff|member|uint32_t rsvd__500_cff[(0xd00 - 0x500) / 4];
DECL|rsvd__5_31|member|uint32_t rsvd__5_31 : 27 __packed;
DECL|rsvd__5_6|member|uint8_t rsvd__5_6 : 2 __packed;
DECL|rsvd__5_6|member|uint8_t rsvd__5_6 : 2 __packed;
DECL|rsvd__5_7|member|uint32_t rsvd__5_7 : 3 __packed;
DECL|rsvd__6_7|member|uint32_t rsvd__6_7 : 2 __packed;
DECL|rsvd__9_10|member|uint32_t rsvd__9_10 : 2 __packed;
DECL|rsvd__9|member|uint32_t rsvd__9 : 1 __packed;
DECL|rsvd__MasterControlRegister|member|uint32_t rsvd__MasterControlRegister;
DECL|rsvd__d40_d8f|member|uint32_t rsvd__d40_d8f[(0xd90 - 0xd40) / 4];
DECL|rsvd__da4_eff|member|uint32_t rsvd__da4_eff[(0xf00 - 0xdbc) / 4];
DECL|rsvd__f04_fff|member|uint32_t rsvd__f04_fff[(0x1000 - 0xF04) / 4];
DECL|scb|member|} scb; /* offset: 0xd00, size 0x040 */
DECL|scr|member|union __scr scr; /* 0xd10 System Control Register */
DECL|separate|member|uint32_t separate : 1 __packed;
DECL|sevonpend|member|uint32_t sevonpend : 1 __packed;
DECL|shcsr|member|shcsr; /* 0xd24 Sys Handler Control and State Reg */
DECL|shpr|member|uint8_t shpr[12]; /* 0xd18 System Handler Priority Registers
DECL|size|member|uint32_t size : 5 __packed;
DECL|sleepdeep|member|uint32_t sleepdeep : 1 __packed;
DECL|sleeponexit|member|uint32_t sleeponexit : 1 __packed;
DECL|srd|member|uint32_t srd : 8 __packed;
DECL|stcr|member|uint32_t stcr; /* 0x1c Calibration value Register */
DECL|stcsr|member|union __stcsr stcsr; /* 0x10 Control and Status Register */
DECL|stcvr|member|uint32_t stcvr; /* 0x18 Current Value Register (low 24 bits) */
DECL|stir|member|uint32_t stir;
DECL|stkalign|member|uint32_t stkalign : 1 __packed;
DECL|stkerr|member|uint8_t stkerr : 1 __packed;
DECL|strvr|member|uint32_t strvr; /* 0x14 Reload Value Register (low 24 bits) */
DECL|svcallact|member|uint32_t svcallact : 1 __packed;
DECL|svcallpended|member|uint32_t svcallpended : 1 __packed;
DECL|sysresetreq|member|uint32_t sysresetreq : 1 __packed; /* WO */
DECL|systickact|member|uint32_t systickact : 1 __packed;
DECL|systick|member|} systick; /* offset: 0x010, size 0x10 */
DECL|s|member|uint32_t s : 1 __packed;
DECL|tblbase|member|uint32_t tblbase : 1 __packed;
DECL|tbloff|member|uint32_t tbloff : 22 __packed;
DECL|tex|member|uint32_t tex : 3 __packed;
DECL|tickint|member|uint8_t tickint : 1 __packed;
DECL|ufsr|member|} ufsr;
DECL|unalign_trp|member|uint32_t unalign_trp : 1 __packed;
DECL|unaligned|member|uint16_t unaligned : 1 __packed;
DECL|undefinstr|member|uint16_t undefinstr : 1 __packed;
DECL|unstkerr|member|uint8_t unstkerr : 1 __packed;
DECL|usersetmpend|member|uint32_t usersetmpend : 1 __packed;
DECL|usgfaultact|member|uint32_t usgfaultact : 1 __packed;
DECL|usgfaultena|member|uint32_t usgfaultena : 1 __packed;
DECL|usgfaultpended|member|uint32_t usgfaultpended : 1 __packed;
DECL|valid|member|uint8_t valid : 1 __packed;
DECL|val|member|uint16_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint32_t val;
DECL|val|member|uint8_t val;
DECL|val|member|uint8_t val;
DECL|variant|member|uint32_t variant : 4 __packed;
DECL|vecreset|member|uint32_t vecreset : 1 __packed; /* WO */
DECL|vectactive|member|uint32_t vectactive : 9 __packed;
DECL|vectclractive|member|uint32_t vectclractive : 1 __packed; /* WO */
DECL|vectkey|member|uint32_t vectkey : 16 __packed;
DECL|vectpending|member|uint32_t vectpending : 10 __packed;
DECL|vecttbl|member|uint32_t vecttbl : 1 __packed;
DECL|vtor|member|union __vtor vtor; /* 0xd08 Vector Table Offset Register */
DECL|xn|member|uint32_t xn : 1 __packed;
