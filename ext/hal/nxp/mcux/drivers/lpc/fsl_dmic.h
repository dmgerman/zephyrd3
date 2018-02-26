DECL|DMIC_CtrlClrIntrHwvad|function|static inline void DMIC_CtrlClrIntrHwvad(DMIC_Type *base, bool st10)
DECL|DMIC_FifoClearStatus|function|static inline void DMIC_FifoClearStatus(DMIC_Type *base, uint32_t channel, uint32_t mask)
DECL|DMIC_FifoGetData|function|static inline uint32_t DMIC_FifoGetData(DMIC_Type *base, uint32_t channel)
DECL|DMIC_FifoGetStatus|function|static inline uint32_t DMIC_FifoGetStatus(DMIC_Type *base, uint32_t channel)
DECL|DMIC_FilterResetHwvad|function|static inline void DMIC_FilterResetHwvad(DMIC_Type *base, bool rstt)
DECL|DMIC_GetNoiseEnvlpEst|function|static inline uint16_t DMIC_GetNoiseEnvlpEst(DMIC_Type *base)
DECL|DMIC_SetFilterCtrlHwvad|function|static inline void DMIC_SetFilterCtrlHwvad(DMIC_Type *base, uint32_t value)
DECL|DMIC_SetGainNoiseEstHwvad|function|static inline void DMIC_SetGainNoiseEstHwvad(DMIC_Type *base, uint32_t value)
DECL|DMIC_SetGainSignalEstHwvad|function|static inline void DMIC_SetGainSignalEstHwvad(DMIC_Type *base, uint32_t value)
DECL|DMIC_SetInputGainHwvad|function|static inline void DMIC_SetInputGainHwvad(DMIC_Type *base, uint32_t value)
DECL|FSL_DMIC_DRIVER_VERSION|macro|FSL_DMIC_DRIVER_VERSION
DECL|_FSL_DMIC_H_|macro|_FSL_DMIC_H_
DECL|_compensation|enum|typedef enum _compensation
DECL|_dc_removal|enum|typedef enum _dc_removal
DECL|_dmic_channel_config|struct|typedef struct _dmic_channel_config
DECL|_dmic_channel|enum|typedef enum _dmic_channel
DECL|_dmic_io|enum|typedef enum _dmic_io
DECL|_dmic_phy_sample_rate|enum|typedef enum _dmic_phy_sample_rate
DECL|_dmic_status|enum|enum _dmic_status
DECL|_operation_mode|enum|typedef enum _operation_mode
DECL|_stereo_side|enum|typedef enum _stereo_side
DECL|compensation_t|typedef|} compensation_t;
DECL|dc_cut_level|member|dc_removal_t dc_cut_level; /*!< DMIC DC filter control values. */
DECL|dc_removal_t|typedef|} dc_removal_t;
DECL|divhfclk|member|pdm_div_t divhfclk; /*!< DMIC Clock pre-divider values */
DECL|dmic_callback_t|typedef|typedef void (*dmic_callback_t)(void);
DECL|dmic_channel_config_t|typedef|} dmic_channel_config_t;
DECL|dmic_channel_t|typedef|} dmic_channel_t;
DECL|dmic_hwvad_callback_t|typedef|typedef void (*dmic_hwvad_callback_t)(void);
DECL|dmic_io_t|typedef|} dmic_io_t;
DECL|dmic_phy_sample_rate_t|typedef|} dmic_phy_sample_rate_t;
DECL|gainshft|member|int32_t gainshft; /*!< 4FS PCM data gain control */
DECL|kDMIC_Channel0|enumerator|kDMIC_Channel0 = 0U, /*!< DMIC channel 0 */
DECL|kDMIC_Channel1|enumerator|kDMIC_Channel1 = 1U, /*!< DMIC channel 1 */
DECL|kDMIC_CompValueNegativePoint13|enumerator|kDMIC_CompValueNegativePoint13 = 3U, /*!< Compensation -0.13 */
DECL|kDMIC_CompValueNegativePoint15|enumerator|kDMIC_CompValueNegativePoint15 = 2U, /*!< Compensation -0.15 */
DECL|kDMIC_CompValueNegativePoint16|enumerator|kDMIC_CompValueNegativePoint16 = 1U, /*!< Compensation -0.16 */
DECL|kDMIC_CompValueZero|enumerator|kDMIC_CompValueZero = 0U, /*!< Compensation 0 */
DECL|kDMIC_DcCut155|enumerator|kDMIC_DcCut155 = 1U, /*!< Cut off Frequency is 155 Hz */
DECL|kDMIC_DcCut39|enumerator|kDMIC_DcCut39 = 3U, /*!< Cut off Frequency is 39 Hz */
DECL|kDMIC_DcCut78|enumerator|kDMIC_DcCut78 = 2U, /*!< Cut off Frequency is 78 Hz */
DECL|kDMIC_DcNoRemove|enumerator|kDMIC_DcNoRemove = 0U, /*!< Flat response no filter */
DECL|kDMIC_Left|enumerator|kDMIC_Left = 0U, /*!< Left Stereo channel */
DECL|kDMIC_OperationModeDma|enumerator|kDMIC_OperationModeDma = 2U, /*!< DMA mode */
DECL|kDMIC_OperationModeInterrupt|enumerator|kDMIC_OperationModeInterrupt = 1U, /*!< Interrupt mode */
DECL|kDMIC_OperationModePoll|enumerator|kDMIC_OperationModePoll = 0U, /*!< Polling mode */
DECL|kDMIC_PdmBypassClk0|enumerator|kDMIC_PdmBypassClk0 = 1U, /*!< Clk Bypass clocks only channel0 */
DECL|kDMIC_PdmBypassClk1|enumerator|kDMIC_PdmBypassClk1 = 2U, /*!< Clk Bypas clocks only channel1 */
DECL|kDMIC_PdmBypass|enumerator|kDMIC_PdmBypass = 3U, /*!< Clk Bypass clocks both channels */
DECL|kDMIC_PdmDiv128|enumerator|kDMIC_PdmDiv128 = 13U, /*!< DMIC pre-divider set in divide by 128 */
DECL|kDMIC_PdmDiv12|enumerator|kDMIC_PdmDiv12 = 6U, /*!< DMIC pre-divider set in divide by 12 */
DECL|kDMIC_PdmDiv16|enumerator|kDMIC_PdmDiv16 = 7U, /*!< DMIC pre-divider set in divide by 16*/
DECL|kDMIC_PdmDiv1|enumerator|kDMIC_PdmDiv1 = 0U, /*!< DMIC pre-divider set in divide by 1 */
DECL|kDMIC_PdmDiv24|enumerator|kDMIC_PdmDiv24 = 8U, /*!< DMIC pre-divider set in divide by 24*/
DECL|kDMIC_PdmDiv2|enumerator|kDMIC_PdmDiv2 = 1U, /*!< DMIC pre-divider set in divide by 2 */
DECL|kDMIC_PdmDiv32|enumerator|kDMIC_PdmDiv32 = 9U, /*!< DMIC pre-divider set in divide by 32 */
DECL|kDMIC_PdmDiv3|enumerator|kDMIC_PdmDiv3 = 2U, /*!< DMIC pre-divider set in divide by 3 */
DECL|kDMIC_PdmDiv48|enumerator|kDMIC_PdmDiv48 = 10U, /*!< DMIC pre-divider set in divide by 48 */
DECL|kDMIC_PdmDiv4|enumerator|kDMIC_PdmDiv4 = 3U, /*!< DMIC pre-divider set in divide by 4 */
DECL|kDMIC_PdmDiv64|enumerator|kDMIC_PdmDiv64 = 11U, /*!< DMIC pre-divider set in divide by 64*/
DECL|kDMIC_PdmDiv6|enumerator|kDMIC_PdmDiv6 = 4U, /*!< DMIC pre-divider set in divide by 6 */
DECL|kDMIC_PdmDiv8|enumerator|kDMIC_PdmDiv8 = 5U, /*!< DMIC pre-divider set in divide by 8 */
DECL|kDMIC_PdmDiv96|enumerator|kDMIC_PdmDiv96 = 12U, /*!< DMIC pre-divider set in divide by 96*/
DECL|kDMIC_PdmDual|enumerator|kDMIC_PdmDual = 0U, /*!< Two separate pairs of PDM wires */
DECL|kDMIC_PdmStereo|enumerator|kDMIC_PdmStereo = 4U, /*!< Stereo Mic */
DECL|kDMIC_PhyFullSpeed|enumerator|kDMIC_PhyFullSpeed = 0U, /*!< Decimator gets one sample per each chosen clock edge of PDM interface */
DECL|kDMIC_PhyHalfSpeed|enumerator|kDMIC_PhyHalfSpeed = 1U, /*!< PDM clock to Microphone is halved, decimator receives each sample twice */
DECL|kDMIC_Right|enumerator|kDMIC_Right = 1U, /*!< Right Stereo channel */
DECL|kStatus_DMIC_Busy|enumerator|kStatus_DMIC_Busy = MAKE_STATUS(kStatusGroup_DMIC, 0), /*!< DMIC is busy */
DECL|kStatus_DMIC_Idle|enumerator|kStatus_DMIC_Idle = MAKE_STATUS(kStatusGroup_DMIC, 1), /*!< DMIC is idle */
DECL|kStatus_DMIC_OverRunError|enumerator|kStatus_DMIC_OverRunError = MAKE_STATUS(kStatusGroup_DMIC, 2), /*!< DMIC over run Error */
DECL|kStatus_DMIC_UnderRunError|enumerator|kStatus_DMIC_UnderRunError = MAKE_STATUS(kStatusGroup_DMIC, 3), /*!< DMIC under run Error */
DECL|operation_mode_t|typedef|} operation_mode_t;
DECL|osr|member|uint32_t osr; /*!< oversampling rate(CIC decimation rate) for PCM */
DECL|pdm_div_t|typedef|} pdm_div_t;
DECL|post_dc_gain_reduce|member|uint32_t post_dc_gain_reduce; /*!< Fine gain adjustment in the form of a number of bits to downshift */
DECL|preac2coef|member|compensation_t preac2coef; /*!< Pre-emphasis Filter coefficient value for 2FS */
DECL|preac4coef|member|compensation_t preac4coef; /*!< Pre-emphasis Filter coefficient value for 4FS */
DECL|sample_rate|member|dmic_phy_sample_rate_t sample_rate; /*!< DMIC and decimator sample rates */
DECL|saturate16bit|member|bool saturate16bit; /*!< Selects 16-bit saturation. 0 means results roll over if out range and do not saturate.
DECL|stereo_side_t|typedef|} stereo_side_t;
