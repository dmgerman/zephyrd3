DECL|CY_CTDAC_BAD_PARAM|enumerator|CY_CTDAC_BAD_PARAM = CY_CTDAC_ID | CY_PDL_STATUS_ERROR | 0x01uL /**< Input pointers were NULL and Initialization could not be completed */
DECL|CY_CTDAC_DEEPSLEEP_DISABLE|enumerator|CY_CTDAC_DEEPSLEEP_DISABLE = 0uL, /**< DAC is disabled during Deep Sleep power mode */
DECL|CY_CTDAC_DEEPSLEEP_ENABLE|enumerator|CY_CTDAC_DEEPSLEEP_ENABLE = CTDAC_CTDAC_CTRL_DEEPSLEEP_ON_Msk /**< DAC remains enabled during Deep Sleep power mode */
DECL|CY_CTDAC_DEEPSLEEP|macro|CY_CTDAC_DEEPSLEEP
DECL|CY_CTDAC_DEGLITCHCYCLES|macro|CY_CTDAC_DEGLITCHCYCLES
DECL|CY_CTDAC_DEGLITCHMODE_BOTH|enumerator|CY_CTDAC_DEGLITCHMODE_BOTH = CTDAC_CTDAC_CTRL_DEGLITCH_COS_Msk \
DECL|CY_CTDAC_DEGLITCHMODE_BUFFERED|enumerator|CY_CTDAC_DEGLITCHMODE_BUFFERED = CTDAC_CTDAC_CTRL_DEGLITCH_COS_Msk, /**< Deglitch through the CTB COS switch */
DECL|CY_CTDAC_DEGLITCHMODE_NONE|enumerator|CY_CTDAC_DEGLITCHMODE_NONE = 0uL, /**< Disable deglitch */
DECL|CY_CTDAC_DEGLITCHMODE_UNBUFFERED|enumerator|CY_CTDAC_DEGLITCHMODE_UNBUFFERED = CTDAC_CTDAC_CTRL_DEGLITCH_CO6_Msk, /**< Deglitch through the CO6 switch */
DECL|CY_CTDAC_DEGLITCH_CYCLES_MAX|macro|CY_CTDAC_DEGLITCH_CYCLES_MAX
DECL|CY_CTDAC_DEGLITCH|macro|CY_CTDAC_DEGLITCH
DECL|CY_CTDAC_DEINIT|macro|CY_CTDAC_DEINIT
DECL|CY_CTDAC_DEINT_CTDAC_SW|macro|CY_CTDAC_DEINT_CTDAC_SW
DECL|CY_CTDAC_DRV_VERSION_MAJOR|macro|CY_CTDAC_DRV_VERSION_MAJOR
DECL|CY_CTDAC_DRV_VERSION_MINOR|macro|CY_CTDAC_DRV_VERSION_MINOR
DECL|CY_CTDAC_FAST_CLKCFG_DIV|macro|CY_CTDAC_FAST_CLKCFG_DIV
DECL|CY_CTDAC_FAST_CLKCFG_NUM|macro|CY_CTDAC_FAST_CLKCFG_NUM
DECL|CY_CTDAC_FAST_CLKCFG_TYPE|macro|CY_CTDAC_FAST_CLKCFG_TYPE
DECL|CY_CTDAC_FORMAT_SIGNED|enumerator|CY_CTDAC_FORMAT_SIGNED = 1uL << CTDAC_CTDAC_CTRL_CTDAC_MODE_Pos /**< Virtual signed. Add 0x800 to the 12-bit DAC value */
DECL|CY_CTDAC_FORMAT_UNSIGNED|enumerator|CY_CTDAC_FORMAT_UNSIGNED = 0uL, /**< Unsigned 12-bit DAC. No value decoding */
DECL|CY_CTDAC_FORMAT|macro|CY_CTDAC_FORMAT
DECL|CY_CTDAC_H|macro|CY_CTDAC_H
DECL|CY_CTDAC_ID|macro|CY_CTDAC_ID
DECL|CY_CTDAC_INTRMASK|macro|CY_CTDAC_INTRMASK
DECL|CY_CTDAC_OUTPUTBUFFER|macro|CY_CTDAC_OUTPUTBUFFER
DECL|CY_CTDAC_OUTPUTMODE|macro|CY_CTDAC_OUTPUTMODE
DECL|CY_CTDAC_OUTPUT_BUFFERED|enumerator|CY_CTDAC_OUTPUT_BUFFERED = 0uL, /**< Buffer the output through the CTB OA0 */
DECL|CY_CTDAC_OUTPUT_HIGHZ|enumerator|CY_CTDAC_OUTPUT_HIGHZ = 0uL, /**< DAC output is tri-state */
DECL|CY_CTDAC_OUTPUT_UNBUFFERED|enumerator|CY_CTDAC_OUTPUT_UNBUFFERED = 1uL /**< Send output to a direct pin */
DECL|CY_CTDAC_OUTPUT_VALUE_PLUS1|enumerator|CY_CTDAC_OUTPUT_VALUE_PLUS1 = CTDAC_CTDAC_CTRL_OUT_EN_Msk \
DECL|CY_CTDAC_OUTPUT_VALUE|enumerator|CY_CTDAC_OUTPUT_VALUE = CTDAC_CTDAC_CTRL_OUT_EN_Msk, /**< DAC Output is enabled and drives the programmed value */
DECL|CY_CTDAC_OUTPUT_VREF|enumerator|CY_CTDAC_OUTPUT_VREF = CTDAC_CTDAC_CTRL_DISABLED_MODE_Msk \
DECL|CY_CTDAC_OUTPUT_VSSA|enumerator|CY_CTDAC_OUTPUT_VSSA = CTDAC_CTDAC_CTRL_DISABLED_MODE_Msk, /**< Output is pulled to Vssa through a 1.1 MOhm (typ) resistor */
DECL|CY_CTDAC_REFSOURCE_EXTERNAL|enumerator|CY_CTDAC_REFSOURCE_EXTERNAL = 0uL, /**< Use an external source from Opamp1 of the CTB as the reference. CVD switch is open. */
DECL|CY_CTDAC_REFSOURCE_VDDA|enumerator|CY_CTDAC_REFSOURCE_VDDA = 1uL /**< Use Vdda as the reference. CVD switch is closed. */
DECL|CY_CTDAC_REFSOURCE|macro|CY_CTDAC_REFSOURCE
DECL|CY_CTDAC_STROBE_EDGE_IMMEDIATE_DIV_FRAC|macro|CY_CTDAC_STROBE_EDGE_IMMEDIATE_DIV_FRAC
DECL|CY_CTDAC_STROBE_EDGE_IMMEDIATE_DIV|macro|CY_CTDAC_STROBE_EDGE_IMMEDIATE_DIV
DECL|CY_CTDAC_SUCCESS|enumerator|CY_CTDAC_SUCCESS = 0x00uL, /**< Initialization completed successfully */
DECL|CY_CTDAC_SWITCHMASK|macro|CY_CTDAC_SWITCHMASK
DECL|CY_CTDAC_SWITCHSTATE|macro|CY_CTDAC_SWITCHSTATE
DECL|CY_CTDAC_SWITCH_CLOSE|enumerator|CY_CTDAC_SWITCH_CLOSE = 1uL /**< Close the switch */
DECL|CY_CTDAC_SWITCH_CO6_MASK|enumerator|CY_CTDAC_SWITCH_CO6_MASK = CTDAC_CTDAC_SW_CTDO_CO6_Msk /**< Switch for the output, buffered or direct */
DECL|CY_CTDAC_SWITCH_CVD_MASK|enumerator|CY_CTDAC_SWITCH_CVD_MASK = CTDAC_CTDAC_SW_CTDD_CVD_Msk, /**< Switch for the reference source, Vdda or external */
DECL|CY_CTDAC_SWITCH_OPEN|enumerator|CY_CTDAC_SWITCH_OPEN = 0uL, /**< Open the switch */
DECL|CY_CTDAC_UNSIGNED_MAX_CODE_VALUE|macro|CY_CTDAC_UNSIGNED_MAX_CODE_VALUE
DECL|CY_CTDAC_UNSIGNED_MID_CODE_VALUE|macro|CY_CTDAC_UNSIGNED_MID_CODE_VALUE
DECL|CY_CTDAC_UPDATE_BUFFERED_WRITE|enumerator|CY_CTDAC_UPDATE_BUFFERED_WRITE = 1uL, /**< DAC value stored with \ref Cy_CTDAC_SetValueBuffered is updated on the next CTDAC clock edge */
DECL|CY_CTDAC_UPDATE_DIRECT_WRITE|enumerator|CY_CTDAC_UPDATE_DIRECT_WRITE = 0uL, /**< DAC value is updated with a direct write by calling to \ref Cy_CTDAC_SetValue */
DECL|CY_CTDAC_UPDATE_STROBE_EDGE_IMMEDIATE|enumerator|CY_CTDAC_UPDATE_STROBE_EDGE_IMMEDIATE = 3uL, /**< DAC value stored with \ref Cy_CTDAC_SetValueBuffered is updated on the rising edge of the strobe input */
DECL|CY_CTDAC_UPDATE_STROBE_EDGE_SYNC|enumerator|CY_CTDAC_UPDATE_STROBE_EDGE_SYNC = 2uL, /**< DAC value stored with \ref Cy_CTDAC_SetValueBuffered is updated on the next CTDAC clock edge after a rising edge of the strobe */
DECL|CY_CTDAC_UPDATE_STROBE_LEVEL|enumerator|CY_CTDAC_UPDATE_STROBE_LEVEL = 4uL /**< DAC value stored with \ref Cy_CTDAC_SetValueBuffered is updated on every CTDAC clock edge while the strobe line is high */
DECL|CY_CTDAC_UPDATE|macro|CY_CTDAC_UPDATE
DECL|Cy_CTDAC_ClearInterrupt|function|__STATIC_INLINE void Cy_CTDAC_ClearInterrupt(CTDAC_Type *base)
DECL|Cy_CTDAC_Disable|function|__STATIC_INLINE void Cy_CTDAC_Disable(CTDAC_Type *base)
DECL|Cy_CTDAC_Enable|function|__STATIC_INLINE void Cy_CTDAC_Enable(CTDAC_Type *base)
DECL|Cy_CTDAC_GetAnalogSwitch|function|__STATIC_INLINE uint32_t Cy_CTDAC_GetAnalogSwitch(const CTDAC_Type *base)
DECL|Cy_CTDAC_GetInterruptMask|function|__STATIC_INLINE uint32_t Cy_CTDAC_GetInterruptMask(const CTDAC_Type *base)
DECL|Cy_CTDAC_GetInterruptStatusMasked|function|__STATIC_INLINE uint32_t Cy_CTDAC_GetInterruptStatusMasked(const CTDAC_Type *base){
DECL|Cy_CTDAC_GetInterruptStatus|function|__STATIC_INLINE uint32_t Cy_CTDAC_GetInterruptStatus(const CTDAC_Type *base)
DECL|Cy_CTDAC_OpenAllSwitches|function|__STATIC_INLINE void Cy_CTDAC_OpenAllSwitches(CTDAC_Type *base)
DECL|Cy_CTDAC_SetInterruptMask|function|__STATIC_INLINE void Cy_CTDAC_SetInterruptMask(CTDAC_Type *base, uint32_t mask)
DECL|Cy_CTDAC_SetInterrupt|function|__STATIC_INLINE void Cy_CTDAC_SetInterrupt(CTDAC_Type *base)
DECL|Cy_CTDAC_SetSwitchCO6|function|__STATIC_INLINE void Cy_CTDAC_SetSwitchCO6(CTDAC_Type *base, cy_en_ctdac_switch_state_t state)
DECL|Cy_CTDAC_SetValueBuffered|function|__STATIC_INLINE void Cy_CTDAC_SetValueBuffered(CTDAC_Type *base, int32_t value)
DECL|Cy_CTDAC_SetValue|function|__STATIC_INLINE void Cy_CTDAC_SetValue(CTDAC_Type *base, int32_t value)
DECL|configClock|member|bool configClock; /**< Configure or ignore clock information */
DECL|cy_en_ctdac_deep_sleep_t|typedef|}cy_en_ctdac_deep_sleep_t;
DECL|cy_en_ctdac_deglitch_t|typedef|}cy_en_ctdac_deglitch_t;
DECL|cy_en_ctdac_format_t|typedef|}cy_en_ctdac_format_t;
DECL|cy_en_ctdac_output_buffer_t|typedef|}cy_en_ctdac_output_buffer_t;
DECL|cy_en_ctdac_output_mode_t|typedef|}cy_en_ctdac_output_mode_t;
DECL|cy_en_ctdac_ref_source_t|typedef|}cy_en_ctdac_ref_source_t;
DECL|cy_en_ctdac_status_t|typedef|}cy_en_ctdac_status_t;
DECL|cy_en_ctdac_switch_state_t|typedef|}cy_en_ctdac_switch_state_t;
DECL|cy_en_ctdac_switches_t|typedef|}cy_en_ctdac_switches_t;
DECL|cy_en_ctdac_update_t|typedef|}cy_en_ctdac_update_t;
DECL|cy_stc_ctdac_config_t|typedef|}cy_stc_ctdac_config_t;
DECL|cy_stc_ctdac_fast_config_t|typedef|}cy_stc_ctdac_fast_config_t;
DECL|deepSleep|member|cy_en_ctdac_deep_sleep_t deepSleep; /**< Enable or disable the CTDAC during Deep Sleep */
DECL|deglitchCycles|member|uint32_t deglitchCycles; /**< Number of deglitch cycles from 0 to 63 */
DECL|deglitchMode|member|cy_en_ctdac_deglitch_t deglitchMode; /**< Deglitch mode: disabled, buffered, unbuffered, or both */
DECL|dividerFracValue|member|uint32_t dividerFracValue; /**< The fractional divider value if using a fractional clock. Not used if updateMode is \ref CY_CTDAC_UPDATE_DIRECT_WRITE or \ref CY_CTDAC_UPDATE_STROBE_EDGE_IMMEDIATE */
DECL|dividerIntValue|member|uint32_t dividerIntValue; /**< The integer divider value. The divider value causes integer division of (divider value + 1). Not used if updateMode is \ref CY_CTDAC_UPDATE_DIRECT_WRITE or \ref CY_CTDAC_UPDATE_STROBE_EDGE_IMMEDIATE */
DECL|dividerNum|member|uint32_t dividerNum; /**< Specifies which divider of the selected type to configure. Not used if updateMode is \ref CY_CTDAC_UPDATE_DIRECT_WRITE */
DECL|dividerType|member|cy_en_divider_types_t dividerType; /**< Specifies which type of divider to use. Can be integer or fractional divider. Not used if updateMode is \ref CY_CTDAC_UPDATE_DIRECT_WRITE */
DECL|enableInterrupt|member|bool enableInterrupt; /**< If true, enable interrupt when next value register is transferred to value register */
DECL|formatMode|member|cy_en_ctdac_format_t formatMode; /**< Format of DAC value: signed or unsigned */
DECL|nextValue|member|int32_t nextValue; /**< Next DAC value for double buffering */
DECL|outputBuffer|member|cy_en_ctdac_output_buffer_t outputBuffer; /**< Output path: Buffered through Opamp0 of CTB or connected directly to Pin 6 */
DECL|outputBuffer|member|cy_en_ctdac_output_buffer_t outputBuffer; /**< Output path: Buffered through Opamp0 of CTB or connected directly to Pin 6 */
DECL|outputMode|member|cy_en_ctdac_output_mode_t outputMode; /**< Output mode: enabled (value or value + 1), high-z, Vssa, or Vdda */
DECL|refSource|member|cy_en_ctdac_ref_source_t refSource; /**< Reference source: Vdda or externally through Opamp1 of CTB */
DECL|refSource|member|cy_en_ctdac_ref_source_t refSource; /**< Reference source: Vdda or externally through Opamp1 of CTB */
DECL|updateMode|member|cy_en_ctdac_update_t updateMode; /**< Update mode: direct or buffered writes or hardware, edge or level */
DECL|value|member|int32_t value; /**< Current DAC value */
