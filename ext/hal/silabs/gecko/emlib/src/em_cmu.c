DECL|CMU_AUXHFRCOBandGet|function|CMU_AUXHFRCOBand_TypeDef CMU_AUXHFRCOBandGet(void)
DECL|CMU_AUXHFRCOBandGet|function|CMU_AUXHFRCOFreq_TypeDef CMU_AUXHFRCOBandGet(void)
DECL|CMU_AUXHFRCOBandSet|function|void CMU_AUXHFRCOBandSet(CMU_AUXHFRCOBand_TypeDef band)
DECL|CMU_AUXHFRCOBandSet|function|void CMU_AUXHFRCOBandSet(CMU_AUXHFRCOFreq_TypeDef setFreq)
DECL|CMU_AUXHFRCODevinfoGet|function|static uint32_t CMU_AUXHFRCODevinfoGet(CMU_AUXHFRCOFreq_TypeDef freq)
DECL|CMU_CalibrateConfig|function|void CMU_CalibrateConfig(uint32_t downCycles, CMU_Osc_TypeDef downSel, CMU_Osc_TypeDef upSel)
DECL|CMU_CalibrateCountGet|function|uint32_t CMU_CalibrateCountGet(void)
DECL|CMU_Calibrate|function|uint32_t CMU_Calibrate(uint32_t HFCycles, CMU_Osc_TypeDef ref)
DECL|CMU_ClockDivGet|function|CMU_ClkDiv_TypeDef CMU_ClockDivGet(CMU_Clock_TypeDef clock)
DECL|CMU_ClockDivSet|function|void CMU_ClockDivSet(CMU_Clock_TypeDef clock, CMU_ClkDiv_TypeDef div)
DECL|CMU_ClockEnable|function|void CMU_ClockEnable(CMU_Clock_TypeDef clock, bool enable)
DECL|CMU_ClockFreqGet|function|uint32_t CMU_ClockFreqGet(CMU_Clock_TypeDef clock)
DECL|CMU_ClockPrescGet|function|uint32_t CMU_ClockPrescGet(CMU_Clock_TypeDef clock)
DECL|CMU_ClockPrescSet|function|void CMU_ClockPrescSet(CMU_Clock_TypeDef clock, CMU_ClkPresc_TypeDef presc)
DECL|CMU_ClockSelectGet|function|CMU_Select_TypeDef CMU_ClockSelectGet(CMU_Clock_TypeDef clock)
DECL|CMU_ClockSelectSet|function|void CMU_ClockSelectSet(CMU_Clock_TypeDef clock, CMU_Select_TypeDef ref)
DECL|CMU_FreezeEnable|function|void CMU_FreezeEnable(bool enable)
DECL|CMU_HFLE_PRESC_MASK|macro|CMU_HFLE_PRESC_MASK
DECL|CMU_HFLE_PRESC_MASK|macro|CMU_HFLE_PRESC_MASK
DECL|CMU_HFLE_PRESC_REG|macro|CMU_HFLE_PRESC_REG
DECL|CMU_HFLE_PRESC_REG|macro|CMU_HFLE_PRESC_REG
DECL|CMU_HFLE_PRESC_SHIFT|macro|CMU_HFLE_PRESC_SHIFT
DECL|CMU_HFLE_PRESC_SHIFT|macro|CMU_HFLE_PRESC_SHIFT
DECL|CMU_HFLE_WS_MASK|macro|CMU_HFLE_WS_MASK
DECL|CMU_HFLE_WS_MASK|macro|CMU_HFLE_WS_MASK
DECL|CMU_HFLE_WS_SHIFT|macro|CMU_HFLE_WS_SHIFT
DECL|CMU_HFLE_WS_SHIFT|macro|CMU_HFLE_WS_SHIFT
DECL|CMU_HFRCOBandGet|function|CMU_HFRCOBand_TypeDef CMU_HFRCOBandGet(void)
DECL|CMU_HFRCOBandGet|function|CMU_HFRCOFreq_TypeDef CMU_HFRCOBandGet(void)
DECL|CMU_HFRCOBandSet|function|void CMU_HFRCOBandSet(CMU_HFRCOBand_TypeDef band)
DECL|CMU_HFRCOBandSet|function|void CMU_HFRCOBandSet(CMU_HFRCOFreq_TypeDef setFreq)
DECL|CMU_HFRCODevinfoGet|function|static uint32_t CMU_HFRCODevinfoGet(CMU_HFRCOFreq_TypeDef freq)
DECL|CMU_HFRCOStartupDelayGet|function|uint32_t CMU_HFRCOStartupDelayGet(void)
DECL|CMU_HFRCOStartupDelaySet|function|void CMU_HFRCOStartupDelaySet(uint32_t delay)
DECL|CMU_HFXOAutostartEnable|function|void CMU_HFXOAutostartEnable(uint32_t userSel, bool enEM0EM1Start, bool enEM0EM1StartSel)
DECL|CMU_HFXOInit|function|void CMU_HFXOInit(const CMU_HFXOInit_TypeDef *hfxoInit)
DECL|CMU_LCDClkFDIVGet|function|uint32_t CMU_LCDClkFDIVGet(void)
DECL|CMU_LCDClkFDIVSet|function|void CMU_LCDClkFDIVSet(uint32_t div)
DECL|CMU_LFXOInit|function|void CMU_LFXOInit(const CMU_LFXOInit_TypeDef *lfxoInit)
DECL|CMU_MAX_FREQ_0WS|macro|CMU_MAX_FREQ_0WS
DECL|CMU_MAX_FREQ_0WS|macro|CMU_MAX_FREQ_0WS
DECL|CMU_MAX_FREQ_1WS|macro|CMU_MAX_FREQ_1WS
DECL|CMU_MAX_FREQ_1WS|macro|CMU_MAX_FREQ_1WS
DECL|CMU_MAX_FREQ_HFLE|macro|CMU_MAX_FREQ_HFLE
DECL|CMU_MAX_FREQ_HFLE|macro|CMU_MAX_FREQ_HFLE
DECL|CMU_MAX_FREQ_HFLE|macro|CMU_MAX_FREQ_HFLE
DECL|CMU_OscillatorEnable|function|void CMU_OscillatorEnable(CMU_Osc_TypeDef osc, bool enable, bool wait)
DECL|CMU_OscillatorTuningGet|function|uint32_t CMU_OscillatorTuningGet(CMU_Osc_TypeDef osc)
DECL|CMU_OscillatorTuningOptimize|function|bool CMU_OscillatorTuningOptimize(CMU_Osc_TypeDef osc, CMU_HFXOTuningMode_TypeDef mode, bool wait)
DECL|CMU_OscillatorTuningSet|function|void CMU_OscillatorTuningSet(CMU_Osc_TypeDef osc, uint32_t val)
DECL|CMU_OscillatorTuningWait|function|bool CMU_OscillatorTuningWait(CMU_Osc_TypeDef osc, CMU_HFXOTuningMode_TypeDef mode)
DECL|CMU_PCNTClockExternalGet|function|bool CMU_PCNTClockExternalGet(unsigned int instance)
DECL|CMU_PCNTClockExternalSet|function|void CMU_PCNTClockExternalSet(unsigned int instance, bool external)
DECL|CMU_USHFRCOBandGet|function|CMU_USHFRCOBand_TypeDef CMU_USHFRCOBandGet(void)
DECL|CMU_USHFRCOBandSet|function|void CMU_USHFRCOBandSet(CMU_USHFRCOBand_TypeDef band)
DECL|HFXO_INVALID_TRIM|macro|HFXO_INVALID_TRIM
DECL|auxClkGet|function|static uint32_t auxClkGet(void)
DECL|auxHfrcoFreq|variable|auxHfrcoFreq
DECL|dbgClkGet|function|static uint32_t dbgClkGet(void)
DECL|flashWaitStateControl|function|static void flashWaitStateControl(uint32_t coreFreq)
DECL|flashWaitStateMax|function|static void flashWaitStateMax(void)
DECL|getHfLeConfig|function|static uint32_t getHfLeConfig(void)
DECL|getRegIshUpperVal|function|static uint32_t getRegIshUpperVal(uint32_t steadyStateRegIsh)
DECL|lfClkGet|function|static uint32_t lfClkGet(CMU_Clock_TypeDef lfClkBranch)
DECL|maxFreqHfle|function|static uint32_t maxFreqHfle(void)
DECL|setHfLeConfig|function|static void setHfLeConfig(uint32_t hfFreq, uint32_t maxLeFreq)
DECL|syncReg|function|__STATIC_INLINE void syncReg(uint32_t mask)
DECL|usbCClkGet|function|static uint32_t usbCClkGet(void)
