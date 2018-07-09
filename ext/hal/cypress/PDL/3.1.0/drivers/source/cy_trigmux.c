DECL|CY_TRIGMUX_ACTIVATE|macro|CY_TRIGMUX_ACTIVATE
DECL|CY_TRIGMUX_INTRIG_MASK|macro|CY_TRIGMUX_INTRIG_MASK
DECL|CY_TRIGMUX_IS_CYCLES_VALID|macro|CY_TRIGMUX_IS_CYCLES_VALID
DECL|CY_TRIGMUX_IS_INTRIG_VALID|macro|CY_TRIGMUX_IS_INTRIG_VALID
DECL|CY_TRIGMUX_IS_OUTTRIG_VALID|macro|CY_TRIGMUX_IS_OUTTRIG_VALID
DECL|CY_TRIGMUX_IS_TRIGLINE_VALID|macro|CY_TRIGMUX_IS_TRIGLINE_VALID
DECL|CY_TRIGMUX_IS_TRIGTYPE_VALID|macro|CY_TRIGMUX_IS_TRIGTYPE_VALID
DECL|CY_TRIGMUX_OUTTRIG_MASK|macro|CY_TRIGMUX_OUTTRIG_MASK
DECL|CY_TRIGMUX_PARAM_1TO1_MASK|macro|CY_TRIGMUX_PARAM_1TO1_MASK
DECL|CY_TRIGMUX_TRIGLINE_MASK|macro|CY_TRIGMUX_TRIGLINE_MASK
DECL|CY_TRIGMUX_TR_CTL|macro|CY_TRIGMUX_TR_CTL
DECL|CY_TRIGMUX_V1_IS_CYCLES_VALID|macro|CY_TRIGMUX_V1_IS_CYCLES_VALID
DECL|CY_TRIGMUX_V2_IS_CYCLES_VALID|macro|CY_TRIGMUX_V2_IS_CYCLES_VALID
DECL|Cy_TrigMux_Connect|function|cy_en_trigmux_status_t Cy_TrigMux_Connect(uint32_t inTrig, uint32_t outTrig, bool invert, en_trig_type_t trigType)
DECL|Cy_TrigMux_Deselect|function|cy_en_trigmux_status_t Cy_TrigMux_Deselect(uint32_t outTrig)
DECL|Cy_TrigMux_Select|function|cy_en_trigmux_status_t Cy_TrigMux_Select(uint32_t outTrig, bool invert, en_trig_type_t trigType)
DECL|Cy_TrigMux_SetDebugFreeze|function|cy_en_trigmux_status_t Cy_TrigMux_SetDebugFreeze(uint32_t outTrig, bool enable)
DECL|Cy_TrigMux_SwTrigger|function|cy_en_trigmux_status_t Cy_TrigMux_SwTrigger(uint32_t trigLine, uint32_t cycles)