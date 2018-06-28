DECL|CY_CTB_BAD_PARAM|enumerator|CY_CTB_BAD_PARAM = CY_CTB_ID | CY_PDL_STATUS_ERROR | 0x01uL, /**< Input pointers were NULL and initialization could not be completed */
DECL|CY_CTB_CLKPUMP|macro|CY_CTB_CLKPUMP
DECL|CY_CTB_CLK_PUMP_PERI|enumerator|CY_CTB_CLK_PUMP_PERI = 1uL << PASS_AREF_AREF_CTRL_CLOCK_PUMP_PERI_SEL_Pos, /**< Use one of the CLK_PERI dividers */
DECL|CY_CTB_CLK_PUMP_SRSS|enumerator|CY_CTB_CLK_PUMP_SRSS = 0uL, /**< Use the dedicated pump clock from SRSSp */
DECL|CY_CTB_COMPBYPASS|macro|CY_CTB_COMPBYPASS
DECL|CY_CTB_COMPEDGE|macro|CY_CTB_COMPEDGE
DECL|CY_CTB_COMPHYST|macro|CY_CTB_COMPHYST
DECL|CY_CTB_COMPLEVEL|macro|CY_CTB_COMPLEVEL
DECL|CY_CTB_COMP_BYPASS_NO_SYNC|enumerator|CY_CTB_COMP_BYPASS_NO_SYNC = CTBM_OA_RES0_CTRL_OA0_BYPASS_DSI_SYNC_Msk, /**< Comparator output is not synchronized for DSI trigger */
DECL|CY_CTB_COMP_BYPASS_SYNC|enumerator|CY_CTB_COMP_BYPASS_SYNC = 0uL, /**< Comparator output is synchronized for DSI trigger */
DECL|CY_CTB_COMP_DSI_TRIGGER_OUT_LEVEL|enumerator|CY_CTB_COMP_DSI_TRIGGER_OUT_LEVEL = CTBM_OA_RES0_CTRL_OA0_DSI_LEVEL_Msk, /**< DSI output is synchronized version of comparator output */
DECL|CY_CTB_COMP_DSI_TRIGGER_OUT_PULSE|enumerator|CY_CTB_COMP_DSI_TRIGGER_OUT_PULSE = 0uL, /**< Send pulse on DSI for each edge of comparator output */
DECL|CY_CTB_COMP_EDGE_BOTH|enumerator|CY_CTB_COMP_EDGE_BOTH = 3uL << CTBM_OA_RES0_CTRL_OA0_COMPINT_Pos, /**< Both edges generate an interrupt */
DECL|CY_CTB_COMP_EDGE_DISABLE|enumerator|CY_CTB_COMP_EDGE_DISABLE = 0uL, /**< Disabled, no interrupts generated */
DECL|CY_CTB_COMP_EDGE_FALLING|enumerator|CY_CTB_COMP_EDGE_FALLING = 2uL << CTBM_OA_RES0_CTRL_OA0_COMPINT_Pos, /**< Falling edge generates an interrupt */
DECL|CY_CTB_COMP_EDGE_RISING|enumerator|CY_CTB_COMP_EDGE_RISING = 1uL << CTBM_OA_RES0_CTRL_OA0_COMPINT_Pos, /**< Rising edge generates an interrupt */
DECL|CY_CTB_COMP_HYST_10MV|enumerator|CY_CTB_COMP_HYST_10MV = CTBM_OA_RES0_CTRL_OA0_HYST_EN_Msk, /**< Enable the 10 mV hysteresis */
DECL|CY_CTB_COMP_HYST_DISABLE|enumerator|CY_CTB_COMP_HYST_DISABLE = 0uL, /**< Disable hysteresis */
DECL|CY_CTB_CTDSWITCH|macro|CY_CTB_CTDSWITCH
DECL|CY_CTB_CURRENTMODE|macro|CY_CTB_CURRENTMODE
DECL|CY_CTB_CURRENT_HIGH_ACTIVE_DEEPSLEEP|enumerator|CY_CTB_CURRENT_HIGH_ACTIVE_DEEPSLEEP = 1uL, /**< Uses 1 uA reference current with charge pump disabled. Available in all power modes */
DECL|CY_CTB_CURRENT_HIGH_ACTIVE|enumerator|CY_CTB_CURRENT_HIGH_ACTIVE = 0uL, /**< Uses 1 uA reference current with charge pump enabled. Available in Active and Low Power */
DECL|CY_CTB_CURRENT_LOW_ACTIVE_DEEPSLEEP|enumerator|CY_CTB_CURRENT_LOW_ACTIVE_DEEPSLEEP = 2uL, /**< Uses 100 nA reference current with charge pump disabled. Available in all power modes */
DECL|CY_CTB_DEEPSLEEP_DISABLE|enumerator|CY_CTB_DEEPSLEEP_DISABLE = 0uL, /**< CTB is disabled during Deep Sleep power mode */
DECL|CY_CTB_DEEPSLEEP_ENABLE|enumerator|CY_CTB_DEEPSLEEP_ENABLE = CTBM_CTB_CTRL_DEEPSLEEP_ON_Msk, /**< CTB remains enabled during Deep Sleep power mode */
DECL|CY_CTB_DEEPSLEEP|macro|CY_CTB_DEEPSLEEP
DECL|CY_CTB_DEINIT_CTD_SW|macro|CY_CTB_DEINIT_CTD_SW
DECL|CY_CTB_DEINIT_OA0_SW|macro|CY_CTB_DEINIT_OA0_SW
DECL|CY_CTB_DEINIT_OA1_SW|macro|CY_CTB_DEINIT_OA1_SW
DECL|CY_CTB_DEINIT|macro|CY_CTB_DEINIT
DECL|CY_CTB_DRV_VERSION_MAJOR|macro|CY_CTB_DRV_VERSION_MAJOR
DECL|CY_CTB_DRV_VERSION_MINOR|macro|CY_CTB_DRV_VERSION_MINOR
DECL|CY_CTB_H|macro|CY_CTB_H
DECL|CY_CTB_ID|macro|CY_CTB_ID
DECL|CY_CTB_IPTAT_LOW|enumerator|CY_CTB_IPTAT_LOW = 1uL << PASS_AREF_AREF_CTRL_CTB_IPTAT_SCALE_Pos, /**< 100 nA bias current to the CTB */
DECL|CY_CTB_IPTAT_NORMAL|enumerator|CY_CTB_IPTAT_NORMAL = 0uL, /**< 1 uA bias current to the CTB */
DECL|CY_CTB_IPTAT|macro|CY_CTB_IPTAT
DECL|CY_CTB_MODE_COMP|enumerator|CY_CTB_MODE_COMP = 1uL << CTBM_OA_RES0_CTRL_OA0_COMP_EN_Pos, /**< Configure opamp as a comparator */
DECL|CY_CTB_MODE_OPAMP10X|enumerator|CY_CTB_MODE_OPAMP10X = 1uL << CTBM_OA_RES0_CTRL_OA0_DRIVE_STR_SEL_Pos, /**< Configure opamp high drive strength for driving a device pin (10x) */
DECL|CY_CTB_MODE_OPAMP1X|enumerator|CY_CTB_MODE_OPAMP1X = 0uL, /**< Configure opamp for low drive strength for internal connections (1x) */
DECL|CY_CTB_OA0SWITCH|macro|CY_CTB_OA0SWITCH
DECL|CY_CTB_OA1SWITCH|macro|CY_CTB_OA1SWITCH
DECL|CY_CTB_OAMODE|macro|CY_CTB_OAMODE
DECL|CY_CTB_OAPOWER|macro|CY_CTB_OAPOWER
DECL|CY_CTB_OAPUMP|macro|CY_CTB_OAPUMP
DECL|CY_CTB_OPAMPNUM_0_1|macro|CY_CTB_OPAMPNUM_0_1
DECL|CY_CTB_OPAMPNUM_ALL|macro|CY_CTB_OPAMPNUM_ALL
DECL|CY_CTB_OPAMPNUM|macro|CY_CTB_OPAMPNUM
DECL|CY_CTB_OPAMP_0|enumerator|CY_CTB_OPAMP_0 = CTBM_INTR_COMP0_Msk, /**< For configuring Opamp0 */
DECL|CY_CTB_OPAMP_1|enumerator|CY_CTB_OPAMP_1 = CTBM_INTR_COMP1_Msk, /**< For configuring Opamp1 */
DECL|CY_CTB_OPAMP_BOOST_DISABLE|enumerator|CY_CTB_OPAMP_BOOST_DISABLE = 0uL, /**< Disable gain booster - for 10x drive */
DECL|CY_CTB_OPAMP_BOOST_ENABLE|enumerator|CY_CTB_OPAMP_BOOST_ENABLE = CTBM_OA_RES0_CTRL_OA0_BOOST_EN_Msk, /**< Enable gain booster - for 1x drive */
DECL|CY_CTB_OPAMP_BOTH|enumerator|CY_CTB_OPAMP_BOTH = CTBM_INTR_COMP0_Msk | CTBM_INTR_COMP1_Msk, /**< For configuring both Opamp0 and Opamp1 */
DECL|CY_CTB_OPAMP_COMPENSATION_CAP_MAX|enumerator|CY_CTB_OPAMP_COMPENSATION_CAP_MAX = 3uL, /**< Maximum compensation - for 10x drive */
DECL|CY_CTB_OPAMP_COMPENSATION_CAP_MED|enumerator|CY_CTB_OPAMP_COMPENSATION_CAP_MED = 2uL, /**< Medium compensation */
DECL|CY_CTB_OPAMP_COMPENSATION_CAP_MIN|enumerator|CY_CTB_OPAMP_COMPENSATION_CAP_MIN = 1uL, /**< Minimum compensation - for 1x drive*/
DECL|CY_CTB_OPAMP_COMPENSATION_CAP_OFF|enumerator|CY_CTB_OPAMP_COMPENSATION_CAP_OFF = 0uL, /**< No compensation */
DECL|CY_CTB_OPAMP_NONE|enumerator|CY_CTB_OPAMP_NONE = 0uL, /**< For disabling interrupts for both opamps. Used with \ref Cy_CTB_SetInterruptMask */
DECL|CY_CTB_POWER_HIGH|enumerator|CY_CTB_POWER_HIGH = 3uL, /**< High power: IDD = 1500 uA, GBW = 8 MHz for 1x and 6 MHz for 10x */
DECL|CY_CTB_POWER_LOW|enumerator|CY_CTB_POWER_LOW = 1uL, /**< Low power: IDD = 350 uA, GBW = 1 MHz for both 1x and 10x */
DECL|CY_CTB_POWER_MEDIUM|enumerator|CY_CTB_POWER_MEDIUM = 2uL, /**< Medium power: IDD = 600 uA, GBW = 3 MHz for 1x and 2.5 MHz for 10x */
DECL|CY_CTB_POWER_OFF|enumerator|CY_CTB_POWER_OFF = 0uL, /**< Opamp is off */
DECL|CY_CTB_PUMP_DISABLE|enumerator|CY_CTB_PUMP_DISABLE = 0uL, /**< Charge pump is disabled for an input range of 0 to VDDA - 1.5 V */
DECL|CY_CTB_PUMP_ENABLE|enumerator|CY_CTB_PUMP_ENABLE = CTBM_OA_RES0_CTRL_OA0_PUMP_EN_Msk, /**< Charge pump is enabled for an input range of 0 to VDDA */
DECL|CY_CTB_SAMPLEHOLD|macro|CY_CTB_SAMPLEHOLD
DECL|CY_CTB_SARSEQCTRL|macro|CY_CTB_SARSEQCTRL
DECL|CY_CTB_SH_DISABLE|enumerator|CY_CTB_SH_DISABLE = 0uL, /**< The hold capacitor is not connected - this disables sample and hold */
DECL|CY_CTB_SH_HOLD|enumerator|CY_CTB_SH_HOLD = 4uL, /**< Performs a hold of the previously sampled voltage */
DECL|CY_CTB_SH_PREPARE_HOLD|enumerator|CY_CTB_SH_PREPARE_HOLD = 3uL, /**< Prepares the required switches for a following hold */
DECL|CY_CTB_SH_PREPARE_SAMPLE|enumerator|CY_CTB_SH_PREPARE_SAMPLE = 1uL, /**< Prepares the required switches for a following sample */
DECL|CY_CTB_SH_SAMPLE|enumerator|CY_CTB_SH_SAMPLE = 2uL, /**< Performs a sample of the voltage */
DECL|CY_CTB_SUCCESS|enumerator|CY_CTB_SUCCESS = 0x00uL, /**< Initialization completed successfully */
DECL|CY_CTB_SWITCHMASK|macro|CY_CTB_SWITCHMASK
DECL|CY_CTB_SWITCHSELECT|macro|CY_CTB_SWITCHSELECT
DECL|CY_CTB_SWITCHSTATE|macro|CY_CTB_SWITCHSTATE
DECL|CY_CTB_SWITCH_CLOSE|enumerator|CY_CTB_SWITCH_CLOSE = 1uL /**< Close the switch */
DECL|CY_CTB_SWITCH_CTD_SW|enumerator|CY_CTB_SWITCH_CTD_SW = 2uL, /**< Switch register for CTDAC routing */
DECL|CY_CTB_SWITCH_OA0_SW|enumerator|CY_CTB_SWITCH_OA0_SW = 0uL, /**< Switch register for Opamp0 */
DECL|CY_CTB_SWITCH_OA1_SW|enumerator|CY_CTB_SWITCH_OA1_SW = 1uL, /**< Switch register for Opamp1 */
DECL|CY_CTB_SWITCH_OPEN|enumerator|CY_CTB_SWITCH_OPEN = 0uL, /**< Open the switch */
DECL|CY_CTB_SW_CTD_CHOLD_CONNECT_MASK|enumerator|CY_CTB_SW_CTD_CHOLD_CONNECT_MASK = CTBM_CTD_SW_CTDH_CHD_Msk, /**< Switch CHD: Hold cap connection. */
DECL|CY_CTB_SW_CTD_CHOLD_LEAKAGE_REDUCTION_MASK|enumerator|CY_CTB_SW_CTD_CHOLD_LEAKAGE_REDUCTION_MASK = CTBM_CTD_SW_CTDH_ILR_Msk, /**< Switch ILR: Hold cap leakage reduction (drives far side of isolation switch CIS) */
DECL|CY_CTB_SW_CTD_CHOLD_OA0_POS_ISOLATE_MASK|enumerator|CY_CTB_SW_CTD_CHOLD_OA0_POS_ISOLATE_MASK = CTBM_CTD_SW_CTDH_CIS_Msk, /**< Switch CIS: Opamp0 non-inverting input isolation (for hold cap) */
DECL|CY_CTB_SW_CTD_CHOLD_OA0_POS_MASK|enumerator|CY_CTB_SW_CTD_CHOLD_OA0_POS_MASK = CTBM_CTD_SW_CTDH_CA0_Msk, /**< Switch CA0: Hold cap to Opamp0 non-inverting input. */
DECL|CY_CTB_SW_CTD_OUT_CHOLD_MASK|enumerator|CY_CTB_SW_CTD_OUT_CHOLD_MASK = CTBM_CTD_SW_CTDO_COS_Msk, /**< Switch COS: CTDAC output to hold cap (deglitch capable). */
DECL|CY_CTB_SW_CTD_OUT_OA0_1X_OUT_MASK|enumerator|CY_CTB_SW_CTD_OUT_OA0_1X_OUT_MASK = CTBM_CTD_SW_CTDH_COB_Msk, /**< Switch COB: Drive CTDAC output with opamp0 1x output during hold mode. */
DECL|CY_CTB_SW_CTD_OUT_OA1_NEG_MASK|enumerator|CY_CTB_SW_CTD_OUT_OA1_NEG_MASK = CTBM_CTD_SW_CTDS_COR_Msk, /**< Switch COR: CTDAC output to Opamp1 inverting input. */
DECL|CY_CTB_SW_CTD_OUT_PIN6_MASK|enumerator|CY_CTB_SW_CTD_OUT_PIN6_MASK = CTBM_CTD_SW_CTDO_C6H_Msk, /**< Switch C6H: CTDAC output to P6 of CTB device port. */
DECL|CY_CTB_SW_CTD_REFSENSE_OA1_NEG_MASK|enumerator|CY_CTB_SW_CTD_REFSENSE_OA1_NEG_MASK = CTBM_CTD_SW_CTDS_CRS_Msk, /**< Switch CRS: CTDAC reference sense to Opamp1 inverting input. */
DECL|CY_CTB_SW_CTD_REF_OA1_OUT_MASK|enumerator|CY_CTB_SW_CTD_REF_OA1_OUT_MASK = CTBM_CTD_SW_CTDD_CRD_Msk, /**< Switch CRD: Opamp1 output to CTDAC reference. */
DECL|CY_CTB_SW_OA0_NEG_OUT_MASK|enumerator|CY_CTB_SW_OA0_NEG_OUT_MASK = CTBM_OA0_SW_OA0M_A81_Msk, /**< Switch A81: Opamp0 inverting input to Opamp0 output */
DECL|CY_CTB_SW_OA0_NEG_PIN1_MASK|enumerator|CY_CTB_SW_OA0_NEG_PIN1_MASK = CTBM_OA0_SW_OA0M_A11_Msk, /**< Switch A11: Opamp0 inverting input to Pin 1 of CTB device port */
DECL|CY_CTB_SW_OA0_OUT_SARBUS0_MASK|enumerator|CY_CTB_SW_OA0_OUT_SARBUS0_MASK = CTBM_OA0_SW_OA0O_D51_Msk, /**< Switch D51: Opamp0 output to sarbus0 */
DECL|CY_CTB_SW_OA0_OUT_SHORT_1X_10X_MASK|enumerator|CY_CTB_SW_OA0_OUT_SHORT_1X_10X_MASK = CTBM_OA0_SW_OA0O_D81_Msk, /**< Switch D81: Short Opamp0 1x with 10x outputs */
DECL|CY_CTB_SW_OA0_POS_AMUXBUSA_MASK|enumerator|CY_CTB_SW_OA0_POS_AMUXBUSA_MASK = CTBM_OA0_SW_OA0P_A00_Msk, /**< Switch A00: Opamp0 non-inverting input to AMUXBUS A */
DECL|CY_CTB_SW_OA0_POS_PIN0_MASK|enumerator|CY_CTB_SW_OA0_POS_PIN0_MASK = CTBM_OA0_SW_OA0P_A20_Msk, /**< Switch A20: Opamp0 non-inverting input to Pin 0 of CTB device port */
DECL|CY_CTB_SW_OA0_POS_PIN6_MASK|enumerator|CY_CTB_SW_OA0_POS_PIN6_MASK = CTBM_OA0_SW_OA0P_A30_Msk, /**< Switch A30: Opamp0 non-inverting input to Pin 6 of CTB device port */
DECL|CY_CTB_SW_OA1_NEG_OUT_MASK|enumerator|CY_CTB_SW_OA1_NEG_OUT_MASK = CTBM_OA1_SW_OA1M_A82_Msk, /**< switch A82: Opamp1 inverting input to Opamp1 output */
DECL|CY_CTB_SW_OA1_NEG_PIN4_MASK|enumerator|CY_CTB_SW_OA1_NEG_PIN4_MASK = CTBM_OA1_SW_OA1M_A22_Msk, /**< Switch A22: Opamp1 inverting input to Pin 4 of CTB device port */
DECL|CY_CTB_SW_OA1_OUT_SARBUS0_MASK|enumerator|CY_CTB_SW_OA1_OUT_SARBUS0_MASK = CTBM_OA1_SW_OA1O_D52_Msk, /**< Switch D52: Opamp1 output to sarbus0 */
DECL|CY_CTB_SW_OA1_OUT_SARBUS1_MASK|enumerator|CY_CTB_SW_OA1_OUT_SARBUS1_MASK = CTBM_OA1_SW_OA1O_D62_Msk, /**< Switch D62: Opamp1 output to sarbus1 */
DECL|CY_CTB_SW_OA1_OUT_SHORT_1X_10X_MASK|enumerator|CY_CTB_SW_OA1_OUT_SHORT_1X_10X_MASK = CTBM_OA1_SW_OA1O_D82_Msk, /**< Switch D82: Short Opamp1 1x with 10x outputs */
DECL|CY_CTB_SW_OA1_POS_AMUXBUSB_MASK|enumerator|CY_CTB_SW_OA1_POS_AMUXBUSB_MASK = CTBM_OA1_SW_OA1P_A03_Msk, /**< Switch A03: Opamp1 non-inverting input to AMUXBUS B */
DECL|CY_CTB_SW_OA1_POS_AREF_MASK|enumerator|CY_CTB_SW_OA1_POS_AREF_MASK = CTBM_OA1_SW_OA1P_A73_Msk, /**< Switch A73: Opamp1 non-inverting input to device Analog Reference (AREF) */
DECL|CY_CTB_SW_OA1_POS_PIN5_MASK|enumerator|CY_CTB_SW_OA1_POS_PIN5_MASK = CTBM_OA1_SW_OA1P_A13_Msk, /**< Switch A13: Opamp1 non-inverting input to Pin 5 of CTB device port */
DECL|CY_CTB_SW_OA1_POS_PIN7_MASK|enumerator|CY_CTB_SW_OA1_POS_PIN7_MASK = CTBM_OA1_SW_OA1P_A43_Msk, /**< Switch A43: Opamp1 non-inverting input to Pin 7 of CTB device port */
DECL|CY_CTB_SW_SEQ_CTRL_D51_D52_D62_MASK|enumerator|CY_CTB_SW_SEQ_CTRL_D51_D52_D62_MASK = CTBM_CTB_SW_SQ_CTRL_P2_SQ_CTRL23_Msk | CTBM_CTB_SW_SQ_CTRL_P3_SQ_CTRL23_Msk, /**< Enable SAR sequency control of all three switches */
DECL|CY_CTB_SW_SEQ_CTRL_D51_MASK|enumerator|CY_CTB_SW_SEQ_CTRL_D51_MASK = CTBM_CTB_SW_SQ_CTRL_P2_SQ_CTRL23_Msk, /**< Enable SAR sequencer control of the D51 switch */
DECL|CY_CTB_SW_SEQ_CTRL_D52_D62_MASK|enumerator|CY_CTB_SW_SEQ_CTRL_D52_D62_MASK = CTBM_CTB_SW_SQ_CTRL_P3_SQ_CTRL23_Msk, /**< Enable SAR sequencer control of the D52 and D62 switches */
DECL|CY_CTB_TRIM_VALUE_MAX|macro|CY_CTB_TRIM_VALUE_MAX
DECL|CY_CTB_TRIM|macro|CY_CTB_TRIM
DECL|Cy_CTB_ClearInterrupt|function|__STATIC_INLINE void Cy_CTB_ClearInterrupt(CTBM_Type *base, cy_en_ctb_opamp_sel_t compNum)
DECL|Cy_CTB_DisableRedirect|function|__STATIC_INLINE void Cy_CTB_DisableRedirect(void)
DECL|Cy_CTB_DisableSarSeqCtrl|function|__STATIC_INLINE void Cy_CTB_DisableSarSeqCtrl(CTBM_Type *base, cy_en_ctb_switch_sar_seq_t switchMask)
DECL|Cy_CTB_Disable|function|__STATIC_INLINE void Cy_CTB_Disable(CTBM_Type *base)
DECL|Cy_CTB_EnableRedirect|function|__STATIC_INLINE void Cy_CTB_EnableRedirect(void)
DECL|Cy_CTB_EnableSarSeqCtrl|function|__STATIC_INLINE void Cy_CTB_EnableSarSeqCtrl(CTBM_Type *base, cy_en_ctb_switch_sar_seq_t switchMask)
DECL|Cy_CTB_Enable|function|__STATIC_INLINE void Cy_CTB_Enable(CTBM_Type *base)
DECL|Cy_CTB_GetInterruptMask|function|__STATIC_INLINE uint32_t Cy_CTB_GetInterruptMask(const CTBM_Type *base, cy_en_ctb_opamp_sel_t compNum)
DECL|Cy_CTB_GetInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_CTB_GetInterruptStatusMasked(const CTBM_Type *base, cy_en_ctb_opamp_sel_t compNum)
DECL|Cy_CTB_GetInterruptStatus|function|__STATIC_INLINE uint32_t Cy_CTB_GetInterruptStatus(const CTBM_Type *base, cy_en_ctb_opamp_sel_t compNum)
DECL|Cy_CTB_OpenAllSwitches|function|__STATIC_INLINE void Cy_CTB_OpenAllSwitches(CTBM_Type *base)
DECL|Cy_CTB_SetClkPumpSource|function|__STATIC_INLINE void Cy_CTB_SetClkPumpSource(cy_en_ctb_clk_pump_source_t clkPump)
DECL|Cy_CTB_SetInterruptMask|function|__STATIC_INLINE void Cy_CTB_SetInterruptMask(CTBM_Type *base, cy_en_ctb_opamp_sel_t compNum)
DECL|Cy_CTB_SetInterrupt|function|__STATIC_INLINE void Cy_CTB_SetInterrupt(CTBM_Type *base, cy_en_ctb_opamp_sel_t compNum)
DECL|Cy_CTB_SetIptatLevel|function|__STATIC_INLINE void Cy_CTB_SetIptatLevel(cy_en_ctb_iptat_t iptat)
DECL|configRouting|member|bool configRouting; /**< Configure or ignore routing related registers */
DECL|ctdSwitchCtrl|member|uint32_t ctdSwitchCtrl; /**< Routing control between the CTDAC and CTB blocks */
DECL|ctdSwitchCtrl|member|uint32_t ctdSwitchCtrl; /**< Routing control between the CTDAC and CTB blocks */
DECL|ctdSwitchCtrl|member|uint32_t ctdSwitchCtrl; /**< Routing control between the CTDAC and CTB blocks */
DECL|cy_en_ctb_boost_en_t|typedef|}cy_en_ctb_boost_en_t;
DECL|cy_en_ctb_clk_pump_source_t|typedef|}cy_en_ctb_clk_pump_source_t;
DECL|cy_en_ctb_comp_bypass_t|typedef|}cy_en_ctb_comp_bypass_t;
DECL|cy_en_ctb_comp_edge_t|typedef|}cy_en_ctb_comp_edge_t;
DECL|cy_en_ctb_comp_hyst_t|typedef|}cy_en_ctb_comp_hyst_t;
DECL|cy_en_ctb_comp_level_t|typedef|}cy_en_ctb_comp_level_t;
DECL|cy_en_ctb_compensation_cap_t|typedef|}cy_en_ctb_compensation_cap_t;
DECL|cy_en_ctb_ctd_switches_t|typedef|}cy_en_ctb_ctd_switches_t;
DECL|cy_en_ctb_current_mode_t|typedef|}cy_en_ctb_current_mode_t;
DECL|cy_en_ctb_deep_sleep_t|typedef|}cy_en_ctb_deep_sleep_t;
DECL|cy_en_ctb_iptat_t|typedef|}cy_en_ctb_iptat_t;
DECL|cy_en_ctb_mode_t|typedef|}cy_en_ctb_mode_t;
DECL|cy_en_ctb_oa0_switches_t|typedef|}cy_en_ctb_oa0_switches_t;
DECL|cy_en_ctb_oa1_switches_t|typedef|}cy_en_ctb_oa1_switches_t;
DECL|cy_en_ctb_opamp_sel_t|typedef|}cy_en_ctb_opamp_sel_t;
DECL|cy_en_ctb_power_t|typedef|}cy_en_ctb_power_t;
DECL|cy_en_ctb_pump_t|typedef|}cy_en_ctb_pump_t;
DECL|cy_en_ctb_sample_hold_mode_t|typedef|}cy_en_ctb_sample_hold_mode_t;
DECL|cy_en_ctb_status_t|typedef|}cy_en_ctb_status_t;
DECL|cy_en_ctb_switch_register_sel_t|typedef|}cy_en_ctb_switch_register_sel_t;
DECL|cy_en_ctb_switch_sar_seq_t|typedef|}cy_en_ctb_switch_sar_seq_t;
DECL|cy_en_ctb_switch_state_t|typedef|}cy_en_ctb_switch_state_t;
DECL|cy_stc_ctb_config_t|typedef|}cy_stc_ctb_config_t;
DECL|cy_stc_ctb_fast_config_oa0_t|typedef|}cy_stc_ctb_fast_config_oa0_t;
DECL|cy_stc_ctb_fast_config_oa1_t|typedef|}cy_stc_ctb_fast_config_oa1_t;
DECL|cy_stc_ctb_opamp_config_t|typedef|}cy_stc_ctb_opamp_config_t;
DECL|deepSleep|member|cy_en_ctb_deep_sleep_t deepSleep; /**< Enable or disable the CTB during Deep Sleep */
DECL|deepSleep|member|cy_en_ctb_deep_sleep_t deepSleep; /**< Enable or disable the CTB during Deep Sleep */
DECL|oa0CompBypass|member|cy_en_ctb_comp_bypass_t oa0CompBypass; /**< Opamp0 comparator DSI (trigger) output synchronization */
DECL|oa0CompEdge|member|cy_en_ctb_comp_edge_t oa0CompEdge; /**< Opamp0 comparator edge detection: disable, rising, falling, or both */
DECL|oa0CompHyst|member|cy_en_ctb_comp_hyst_t oa0CompHyst; /**< Opamp0 comparator hysteresis: enable for 10 mV hysteresis */
DECL|oa0CompIntrEn|member|bool oa0CompIntrEn; /**< Opamp0 comparator interrupt enable */
DECL|oa0CompLevel|member|cy_en_ctb_comp_level_t oa0CompLevel; /**< Opamp0 comparator DSI (trigger) output: pulse or level */
DECL|oa0Mode|member|cy_en_ctb_mode_t oa0Mode; /**< Opamp0 usage mode: 1x drive, 10x drive, or as a comparator */
DECL|oa0Mode|member|cy_en_ctb_mode_t oa0Mode; /**< Opamp0 usage mode: 1x drive, 10x drive, or as a comparator */
DECL|oa0Power|member|cy_en_ctb_power_t oa0Power; /**< Opamp0 power mode: off, low, medium, or high */
DECL|oa0Power|member|cy_en_ctb_power_t oa0Power; /**< Opamp0 power mode: off, low, medium, or high */
DECL|oa0Pump|member|cy_en_ctb_pump_t oa0Pump; /**< Opamp0 charge pump: enable to increase input range for rail-to-rail operation */
DECL|oa0SwitchCtrl|member|uint32_t oa0SwitchCtrl; /**< Opamp0 routing control */
DECL|oa0SwitchCtrl|member|uint32_t oa0SwitchCtrl; /**< Opamp0 routing control */
DECL|oa1CompBypass|member|cy_en_ctb_comp_bypass_t oa1CompBypass; /**< Opamp1 comparator DSI (trigger) output synchronization */
DECL|oa1CompEdge|member|cy_en_ctb_comp_edge_t oa1CompEdge; /**< Opamp1 comparator edge detection: disable, rising, falling, or both */
DECL|oa1CompHyst|member|cy_en_ctb_comp_hyst_t oa1CompHyst; /**< Opamp1 comparator hysteresis: enable for 10 mV hysteresis */
DECL|oa1CompIntrEn|member|bool oa1CompIntrEn; /**< Opamp1 comparator interrupt enable */
DECL|oa1CompLevel|member|cy_en_ctb_comp_level_t oa1CompLevel; /**< Opamp1 comparator DSI (trigger) output: pulse or level */
DECL|oa1Mode|member|cy_en_ctb_mode_t oa1Mode; /**< Opamp1 usage mode: 1x drive, 10x drive, or as a comparator */
DECL|oa1Mode|member|cy_en_ctb_mode_t oa1Mode; /**< Opamp1 usage mode: 1x drive, 10x drive, or as a comparator */
DECL|oa1Power|member|cy_en_ctb_power_t oa1Power; /**< Opamp1 power mode: off, low, medium, or high */
DECL|oa1Power|member|cy_en_ctb_power_t oa1Power; /**< Opamp1 power mode: off, low, medium, or high */
DECL|oa1Pump|member|cy_en_ctb_pump_t oa1Pump; /**< Opamp1 charge pump: enable to increase input range for rail-to-rail operation */
DECL|oa1SwitchCtrl|member|uint32_t oa1SwitchCtrl; /**< Opamp1 routing control */
DECL|oa1SwitchCtrl|member|uint32_t oa1SwitchCtrl; /**< Opamp1 routing control */
DECL|oaCompBypass|member|cy_en_ctb_comp_bypass_t oaCompBypass; /**< Opamp comparator DSI (trigger) output synchronization */
DECL|oaCompEdge|member|cy_en_ctb_comp_edge_t oaCompEdge; /**< Opamp comparator edge detection: disable, rising, falling, or both */
DECL|oaCompHyst|member|cy_en_ctb_comp_hyst_t oaCompHyst; /**< Opamp comparator hysteresis: enable for 10 mV hysteresis */
DECL|oaCompIntrEn|member|bool oaCompIntrEn; /**< Opamp comparator interrupt enable */
DECL|oaCompLevel|member|cy_en_ctb_comp_level_t oaCompLevel; /**< Opamp comparator DSI (trigger) output: pulse or level */
DECL|oaMode|member|cy_en_ctb_mode_t oaMode; /**< Opamp usage mode: 1x drive, 10x drive, or as a comparator */
DECL|oaPower|member|cy_en_ctb_power_t oaPower; /**< Opamp power mode: off, low, medium, or high */
DECL|oaPump|member|cy_en_ctb_pump_t oaPump; /**< Opamp charge pump: enable to increase input range for rail-to-rail operation */
