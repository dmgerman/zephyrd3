DECL|CY_SYSANALOG_BAD_PARAM|enumerator|CY_SYSANALOG_BAD_PARAM = CY_SYSANALOG_ID | CY_PDL_STATUS_ERROR | 0x01uL /**< Invalid input parameters */
DECL|CY_SYSANALOG_DEEPSLEEP_DISABLE|enumerator|CY_SYSANALOG_DEEPSLEEP_DISABLE = 0uL, /**< Disable AREF IP block */
DECL|CY_SYSANALOG_DEEPSLEEP_IPTAT_1|enumerator|CY_SYSANALOG_DEEPSLEEP_IPTAT_1 = PASS_AREF_AREF_CTRL_DEEPSLEEP_ON_Msk | \
DECL|CY_SYSANALOG_DEEPSLEEP_IPTAT_2|enumerator|CY_SYSANALOG_DEEPSLEEP_IPTAT_2 = PASS_AREF_AREF_CTRL_DEEPSLEEP_ON_Msk | \
DECL|CY_SYSANALOG_DEEPSLEEP_IPTAT_IZTAT_VREF|enumerator|CY_SYSANALOG_DEEPSLEEP_IPTAT_IZTAT_VREF = PASS_AREF_AREF_CTRL_DEEPSLEEP_ON_Msk | \
DECL|CY_SYSANALOG_DEEPSLEEP|macro|CY_SYSANALOG_DEEPSLEEP
DECL|CY_SYSANALOG_DEFAULT_BIAS_SCALE|macro|CY_SYSANALOG_DEFAULT_BIAS_SCALE
DECL|CY_SYSANALOG_DEINIT|macro|CY_SYSANALOG_DEINIT
DECL|CY_SYSANALOG_DRV_VERSION_MAJOR|macro|CY_SYSANALOG_DRV_VERSION_MAJOR
DECL|CY_SYSANALOG_DRV_VERSION_MINOR|macro|CY_SYSANALOG_DRV_VERSION_MINOR
DECL|CY_SYSANALOG_H|macro|CY_SYSANALOG_H
DECL|CY_SYSANALOG_ID|macro|CY_SYSANALOG_ID
DECL|CY_SYSANALOG_INTR_CAUSE_CTB0|enumerator|CY_SYSANALOG_INTR_CAUSE_CTB0 = PASS_INTR_CAUSE_CTB0_INT_Msk, /**< Interrupt cause mask for CTB0 */
DECL|CY_SYSANALOG_INTR_CAUSE_CTB1|enumerator|CY_SYSANALOG_INTR_CAUSE_CTB1 = PASS_INTR_CAUSE_CTB1_INT_Msk, /**< Interrupt cause mask for CTB1 */
DECL|CY_SYSANALOG_INTR_CAUSE_CTB2|enumerator|CY_SYSANALOG_INTR_CAUSE_CTB2 = PASS_INTR_CAUSE_CTB2_INT_Msk, /**< Interrupt cause mask for CTB2 */
DECL|CY_SYSANALOG_INTR_CAUSE_CTB3|enumerator|CY_SYSANALOG_INTR_CAUSE_CTB3 = PASS_INTR_CAUSE_CTB3_INT_Msk, /**< Interrupt cause mask for CTB3 */
DECL|CY_SYSANALOG_INTR_CAUSE_CTDAC0|enumerator|CY_SYSANALOG_INTR_CAUSE_CTDAC0 = PASS_INTR_CAUSE_CTDAC0_INT_Msk, /**< Interrupt cause mask for CTDAC0 */
DECL|CY_SYSANALOG_INTR_CAUSE_CTDAC1|enumerator|CY_SYSANALOG_INTR_CAUSE_CTDAC1 = PASS_INTR_CAUSE_CTDAC1_INT_Msk, /**< Interrupt cause mask for CTDAC1 */
DECL|CY_SYSANALOG_INTR_CAUSE_CTDAC2|enumerator|CY_SYSANALOG_INTR_CAUSE_CTDAC2 = PASS_INTR_CAUSE_CTDAC2_INT_Msk, /**< Interrupt cause mask for CTDAC2 */
DECL|CY_SYSANALOG_INTR_CAUSE_CTDAC3|enumerator|CY_SYSANALOG_INTR_CAUSE_CTDAC3 = PASS_INTR_CAUSE_CTDAC3_INT_Msk /**< Interrupt cause mask for CTDAC3 */
DECL|CY_SYSANALOG_IZTAT_SOURCE_LOCAL|enumerator|CY_SYSANALOG_IZTAT_SOURCE_LOCAL = 1uL << PASS_AREF_AREF_CTRL_IZTAT_SEL_Pos /**< Use locally generated 1 uA IZTAT */
DECL|CY_SYSANALOG_IZTAT_SOURCE_SRSS|enumerator|CY_SYSANALOG_IZTAT_SOURCE_SRSS = 0uL, /**< Use 250 nA IZTAT from SRSS and gain by 4 to output 1 uA*/
DECL|CY_SYSANALOG_IZTAT|macro|CY_SYSANALOG_IZTAT
DECL|CY_SYSANALOG_STARTUP_FAST|enumerator|CY_SYSANALOG_STARTUP_FAST = 1uL << PASS_AREF_AREF_CTRL_AREF_MODE_Pos /**< Fast startup (10 us) - recommended */
DECL|CY_SYSANALOG_STARTUP_NORMAL|enumerator|CY_SYSANALOG_STARTUP_NORMAL = 0uL, /**< Normal startup */
DECL|CY_SYSANALOG_STARTUP|macro|CY_SYSANALOG_STARTUP
DECL|CY_SYSANALOG_SUCCESS|enumerator|CY_SYSANALOG_SUCCESS = 0x00uL, /**< Successful */
DECL|CY_SYSANALOG_VREF_SOURCE_EXTERNAL|enumerator|CY_SYSANALOG_VREF_SOURCE_EXTERNAL = 2uL << PASS_AREF_AREF_CTRL_VREF_SEL_Pos /**< Use externally supplied Vref */
DECL|CY_SYSANALOG_VREF_SOURCE_LOCAL_1_2V|enumerator|CY_SYSANALOG_VREF_SOURCE_LOCAL_1_2V = 1uL << PASS_AREF_AREF_CTRL_VREF_SEL_Pos, /**< Use locally generated 1.2 V Vref */
DECL|CY_SYSANALOG_VREF_SOURCE_SRSS|enumerator|CY_SYSANALOG_VREF_SOURCE_SRSS = 0uL, /**< Use 0.8 V Vref from SRSS. Low accuracy high noise source that is not intended for analog subsystems. */
DECL|CY_SYSANALOG_VREF|macro|CY_SYSANALOG_VREF
DECL|Cy_SysAnalog_DeInit|function|__STATIC_INLINE void Cy_SysAnalog_DeInit(void)
DECL|Cy_SysAnalog_Disable|function|__STATIC_INLINE void Cy_SysAnalog_Disable(void)
DECL|Cy_SysAnalog_Enable|function|__STATIC_INLINE void Cy_SysAnalog_Enable(void)
DECL|Cy_SysAnalog_GetDeepSleepMode|function|__STATIC_INLINE cy_en_sysanalog_deep_sleep_t Cy_SysAnalog_GetDeepSleepMode(void)
DECL|Cy_SysAnalog_GetIntrCause|function|__STATIC_INLINE uint32_t Cy_SysAnalog_GetIntrCause(void)
DECL|Cy_SysAnalog_IztatSelect|function|__STATIC_INLINE void Cy_SysAnalog_IztatSelect(cy_en_sysanalog_iztat_source_t iztat)
DECL|Cy_SysAnalog_SetArefMode|function|__STATIC_INLINE void Cy_SysAnalog_SetArefMode(cy_en_sysanalog_startup_t startup)
DECL|Cy_SysAnalog_SetDeepSleepMode|function|__STATIC_INLINE void Cy_SysAnalog_SetDeepSleepMode(cy_en_sysanalog_deep_sleep_t deepSleep)
DECL|Cy_SysAnalog_VrefSelect|function|__STATIC_INLINE void Cy_SysAnalog_VrefSelect(cy_en_sysanalog_vref_source_t vref)
DECL|cy_en_sysanalog_deep_sleep_t|typedef|}cy_en_sysanalog_deep_sleep_t;
DECL|cy_en_sysanalog_intr_cause_t|typedef|}cy_en_sysanalog_intr_cause_t;
DECL|cy_en_sysanalog_iztat_source_t|typedef|}cy_en_sysanalog_iztat_source_t;
DECL|cy_en_sysanalog_startup_t|typedef|}cy_en_sysanalog_startup_t;
DECL|cy_en_sysanalog_status_t|typedef|}cy_en_sysanalog_status_t;
DECL|cy_en_sysanalog_vref_source_t|typedef|}cy_en_sysanalog_vref_source_t;
DECL|cy_stc_sysanalog_config_t|typedef|}cy_stc_sysanalog_config_t;
DECL|deepSleep|member|cy_en_sysanalog_deep_sleep_t deepSleep; /**< AREF Deep Sleep mode */
DECL|iztat|member|cy_en_sysanalog_iztat_source_t iztat; /**< AREF 1uA IZTAT source: Local or SRSS */
DECL|startup|member|cy_en_sysanalog_startup_t startup; /**< AREF normal or fast start */
DECL|vref|member|cy_en_sysanalog_vref_source_t vref; /**< AREF Vref: Local, SRSS, or external pin */
