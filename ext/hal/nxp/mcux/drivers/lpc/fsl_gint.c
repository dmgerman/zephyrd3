DECL|GINT0_DriverIRQHandler|function|void GINT0_DriverIRQHandler(void)
DECL|GINT1_DriverIRQHandler|function|void GINT1_DriverIRQHandler(void)
DECL|GINT2_DriverIRQHandler|function|void GINT2_DriverIRQHandler(void)
DECL|GINT3_DriverIRQHandler|function|void GINT3_DriverIRQHandler(void)
DECL|GINT4_DriverIRQHandler|function|void GINT4_DriverIRQHandler(void)
DECL|GINT5_DriverIRQHandler|function|void GINT5_DriverIRQHandler(void)
DECL|GINT6_DriverIRQHandler|function|void GINT6_DriverIRQHandler(void)
DECL|GINT7_DriverIRQHandler|function|void GINT7_DriverIRQHandler(void)
DECL|GINT_ConfigPins|function|void GINT_ConfigPins(GINT_Type *base, gint_port_t port, uint32_t polarityMask, uint32_t enableMask)
DECL|GINT_Deinit|function|void GINT_Deinit(GINT_Type *base)
DECL|GINT_DisableCallback|function|void GINT_DisableCallback(GINT_Type *base)
DECL|GINT_EnableCallback|function|void GINT_EnableCallback(GINT_Type *base)
DECL|GINT_GetConfigPins|function|void GINT_GetConfigPins(GINT_Type *base, gint_port_t port, uint32_t *polarityMask, uint32_t *enableMask)
DECL|GINT_GetCtrl|function|void GINT_GetCtrl(GINT_Type *base, gint_comb_t *comb, gint_trig_t *trig, gint_cb_t *callback)
DECL|GINT_GetInstance|function|static uint32_t GINT_GetInstance(GINT_Type *base)
DECL|GINT_Init|function|void GINT_Init(GINT_Type *base)
DECL|GINT_SetCtrl|function|void GINT_SetCtrl(GINT_Type *base, gint_comb_t comb, gint_trig_t trig, gint_cb_t callback)
DECL|s_gintBases|variable|s_gintBases
DECL|s_gintCallback|variable|s_gintCallback
DECL|s_gintClocks|variable|s_gintClocks
DECL|s_gintIRQ|variable|s_gintIRQ
DECL|s_gintResets|variable|s_gintResets
