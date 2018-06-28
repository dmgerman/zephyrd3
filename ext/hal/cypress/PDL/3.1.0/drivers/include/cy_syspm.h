DECL|CY_SYSPM_AFTER_TRANSITION|enumerator|CY_SYSPM_AFTER_TRANSITION = 0x08U, /**< The actions to be done after exiting the low-power mode */
DECL|CY_SYSPM_BAD_PARAM|enumerator|CY_SYSPM_BAD_PARAM = CY_SYSPM_ID | CY_PDL_STATUS_ERROR | 0x01U, /**< One or more invalid parameters */
DECL|CY_SYSPM_BEFORE_TRANSITION|enumerator|CY_SYSPM_BEFORE_TRANSITION = 0x04U, /**< The actions to be done before entering into the low-power mode */
DECL|CY_SYSPM_BUCK_OUT1_VOLTAGE_0_9V|enumerator|CY_SYSPM_BUCK_OUT1_VOLTAGE_0_9V = 0x02U, /**< 0.9 V nominal Buck voltage */
DECL|CY_SYSPM_BUCK_OUT1_VOLTAGE_1_1V|enumerator|CY_SYSPM_BUCK_OUT1_VOLTAGE_1_1V = 0x05U /**< 1.1 V nominal Buck voltage */
DECL|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_15V|enumerator|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_15V = 0U, /**< 1.15 V nominal voltage */
DECL|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_25V|enumerator|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_25V = 2U, /**< 1.25 V nominal voltage */
DECL|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_2V|enumerator|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_2V = 1U, /**< 1.20 V nominal voltage */
DECL|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_35V|enumerator|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_35V = 4U, /**< 1.35 V nominal voltage */
DECL|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_3V|enumerator|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_3V = 3U, /**< 1.3 V nominal voltage */
DECL|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_45V|enumerator|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_45V = 6U, /**< 1.45 V nominal voltage */
DECL|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_4V|enumerator|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_4V = 5U, /**< 1.4 V nominal voltage */
DECL|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_5V|enumerator|CY_SYSPM_BUCK_OUT2_VOLTAGE_1_5V = 7U /**< 1.5 V nominal voltage */
DECL|CY_SYSPM_BUCK_VBUCK_1|enumerator|CY_SYSPM_BUCK_VBUCK_1, /**< Buck output 1 Voltage (Vbuck1) */
DECL|CY_SYSPM_BUCK_VRF|enumerator|CY_SYSPM_BUCK_VRF /**< Buck out 2 Voltage (Vbuckrf) */
DECL|CY_SYSPM_CALLBACKS_NUMBER_MAX|macro|CY_SYSPM_CALLBACKS_NUMBER_MAX
DECL|CY_SYSPM_CANCELED|enumerator|CY_SYSPM_CANCELED = CY_SYSPM_ID | CY_PDL_STATUS_ERROR | 0x04U, /**< Operation canceled */
DECL|CY_SYSPM_CHECK_FAIL|enumerator|CY_SYSPM_CHECK_FAIL = 0x02U, /**< Callbacks with this mode are executed after the previous callbacks
DECL|CY_SYSPM_CHECK_READY|enumerator|CY_SYSPM_CHECK_READY = 0x01U, /**< Callbacks with this mode are executed before entering into the
DECL|CY_SYSPM_DEEPSLEEP|enumerator|CY_SYSPM_DEEPSLEEP, /**< The Deep Sleep enum callback type */
DECL|CY_SYSPM_DRV_VERSION_MAJOR|macro|CY_SYSPM_DRV_VERSION_MAJOR
DECL|CY_SYSPM_DRV_VERSION_MINOR|macro|CY_SYSPM_DRV_VERSION_MINOR
DECL|CY_SYSPM_ENTER_LOWPOWER_MODE|enumerator|CY_SYSPM_ENTER_LOWPOWER_MODE, /**< The enter into the LPActive mode enum callback type */
DECL|CY_SYSPM_ENTER_LP_MODE|macro|CY_SYSPM_ENTER_LP_MODE
DECL|CY_SYSPM_EXIT_LOWPOWER_MODE|enumerator|CY_SYSPM_EXIT_LOWPOWER_MODE, /**< The exit out of the LPActive mode enum callback type */
DECL|CY_SYSPM_EXIT_LP_MODE|macro|CY_SYSPM_EXIT_LP_MODE
DECL|CY_SYSPM_FAIL|enumerator|CY_SYSPM_FAIL = CY_SYSPM_ID | CY_PDL_STATUS_ERROR | 0xFFU /**< An unknown failure */
DECL|CY_SYSPM_HIBALARM|macro|CY_SYSPM_HIBALARM
DECL|CY_SYSPM_HIBERNATE_LPCOMP0_HIGH|enumerator|CY_SYSPM_HIBERNATE_LPCOMP0_HIGH =
DECL|CY_SYSPM_HIBERNATE_LPCOMP0_LOW|enumerator|CY_SYSPM_HIBERNATE_LPCOMP0_LOW =
DECL|CY_SYSPM_HIBERNATE_LPCOMP1_HIGH|enumerator|CY_SYSPM_HIBERNATE_LPCOMP1_HIGH =
DECL|CY_SYSPM_HIBERNATE_LPCOMP1_LOW|enumerator|CY_SYSPM_HIBERNATE_LPCOMP1_LOW = ((uint32_t) CY_SYSPM_WAKEUP_LPCOMP1_BIT << SRSS_PWR_HIBERNATE_MASK_HIBPIN_Pos),
DECL|CY_SYSPM_HIBERNATE_PIN0_HIGH|enumerator|CY_SYSPM_HIBERNATE_PIN0_HIGH =
DECL|CY_SYSPM_HIBERNATE_PIN0_LOW|enumerator|CY_SYSPM_HIBERNATE_PIN0_LOW = ((uint32_t) CY_SYSPM_WAKEUP_PIN0_BIT << SRSS_PWR_HIBERNATE_MASK_HIBPIN_Pos),
DECL|CY_SYSPM_HIBERNATE_PIN1_HIGH|enumerator|CY_SYSPM_HIBERNATE_PIN1_HIGH =
DECL|CY_SYSPM_HIBERNATE_PIN1_LOW|enumerator|CY_SYSPM_HIBERNATE_PIN1_LOW = ((uint32_t) CY_SYSPM_WAKEUP_PIN1_BIT << SRSS_PWR_HIBERNATE_MASK_HIBPIN_Pos),
DECL|CY_SYSPM_HIBERNATE_RTC_ALARM|enumerator|CY_SYSPM_HIBERNATE_RTC_ALARM = SRSS_PWR_HIBERNATE_MASK_HIBALARM_Msk,
DECL|CY_SYSPM_HIBERNATE_WDT|enumerator|CY_SYSPM_HIBERNATE_WDT = SRSS_PWR_HIBERNATE_MASK_HIBWDT_Msk,
DECL|CY_SYSPM_HIBERNATE|enumerator|CY_SYSPM_HIBERNATE, /**< The Hibernate enum callback type */
DECL|CY_SYSPM_HIBPIN0_HIGH|macro|CY_SYSPM_HIBPIN0_HIGH
DECL|CY_SYSPM_HIBPIN0_LOW|macro|CY_SYSPM_HIBPIN0_LOW
DECL|CY_SYSPM_HIBPIN1_HIGH|macro|CY_SYSPM_HIBPIN1_HIGH
DECL|CY_SYSPM_HIBPIN1_LOW|macro|CY_SYSPM_HIBPIN1_LOW
DECL|CY_SYSPM_HIBWDT|macro|CY_SYSPM_HIBWDT
DECL|CY_SYSPM_HIB_WAKEUP_SOURSE_MASK|macro|CY_SYSPM_HIB_WAKEUP_SOURSE_MASK
DECL|CY_SYSPM_H|macro|CY_SYSPM_H
DECL|CY_SYSPM_ID|macro|CY_SYSPM_ID
DECL|CY_SYSPM_INVALID_STATE|enumerator|CY_SYSPM_INVALID_STATE = CY_SYSPM_ID | CY_PDL_STATUS_ERROR | 0x03U, /**< The operation is not setup or is in an
DECL|CY_SYSPM_IS_BUCK_OUTPUT_VALID|macro|CY_SYSPM_IS_BUCK_OUTPUT_VALID
DECL|CY_SYSPM_IS_BUCK_VOLTAGE1_VALID|macro|CY_SYSPM_IS_BUCK_VOLTAGE1_VALID
DECL|CY_SYSPM_IS_BUCK_VOLTAGE2_VALID|macro|CY_SYSPM_IS_BUCK_VOLTAGE2_VALID
DECL|CY_SYSPM_IS_CALLBACK_MODE_VALID|macro|CY_SYSPM_IS_CALLBACK_MODE_VALID
DECL|CY_SYSPM_IS_CALLBACK_TYPE_VALID|macro|CY_SYSPM_IS_CALLBACK_TYPE_VALID
DECL|CY_SYSPM_IS_LDO_VOLTAGE_VALID|macro|CY_SYSPM_IS_LDO_VOLTAGE_VALID
DECL|CY_SYSPM_IS_POLARITY_VALID|macro|CY_SYSPM_IS_POLARITY_VALID
DECL|CY_SYSPM_IS_SC_CHARGE_KEY_VALID|macro|CY_SYSPM_IS_SC_CHARGE_KEY_VALID
DECL|CY_SYSPM_IS_VDDBACKUP_VALID|macro|CY_SYSPM_IS_VDDBACKUP_VALID
DECL|CY_SYSPM_IS_WAIT_FOR_VALID|macro|CY_SYSPM_IS_WAIT_FOR_VALID
DECL|CY_SYSPM_IS_WAKE_UP_SOURCE_VALID|macro|CY_SYSPM_IS_WAKE_UP_SOURCE_VALID
DECL|CY_SYSPM_LDO_VOLTAGE_0_9V|enumerator|CY_SYSPM_LDO_VOLTAGE_0_9V, /**< 0.9 V nominal LDO voltage */
DECL|CY_SYSPM_LDO_VOLTAGE_1_1V|enumerator|CY_SYSPM_LDO_VOLTAGE_1_1V /**< 1.1 V nominal LDO voltage */
DECL|CY_SYSPM_LPCOMP0_HIGH|macro|CY_SYSPM_LPCOMP0_HIGH
DECL|CY_SYSPM_LPCOMP0_LOW|macro|CY_SYSPM_LPCOMP0_LOW
DECL|CY_SYSPM_LPCOMP1_HIGH|macro|CY_SYSPM_LPCOMP1_HIGH
DECL|CY_SYSPM_LPCOMP1_LOW|macro|CY_SYSPM_LPCOMP1_LOW
DECL|CY_SYSPM_PMIC_POLARITY_HIGH|enumerator|CY_SYSPM_PMIC_POLARITY_HIGH = 1U /**< Set active high state for the PMIC input */
DECL|CY_SYSPM_PMIC_POLARITY_LOW|enumerator|CY_SYSPM_PMIC_POLARITY_LOW = 0U, /**< Set active low state for the PMIC input */
DECL|CY_SYSPM_PMIC_UNLOCK_KEY|macro|CY_SYSPM_PMIC_UNLOCK_KEY
DECL|CY_SYSPM_PWR_HIBERNATE_UNLOCK|macro|CY_SYSPM_PWR_HIBERNATE_UNLOCK
DECL|CY_SYSPM_PWR_RETAIN_HIBERNATE_STATUS|macro|CY_SYSPM_PWR_RETAIN_HIBERNATE_STATUS
DECL|CY_SYSPM_PWR_SET_HIBERNATE|macro|CY_SYSPM_PWR_SET_HIBERNATE
DECL|CY_SYSPM_PWR_TOKEN_HIBERNATE|macro|CY_SYSPM_PWR_TOKEN_HIBERNATE
DECL|CY_SYSPM_PWR_WAKEUP_HIB_MASK|macro|CY_SYSPM_PWR_WAKEUP_HIB_MASK
DECL|CY_SYSPM_SC_CHARGE_DISABLE|enumerator|CY_SYSPM_SC_CHARGE_DISABLE = 0x00U /**< Disables supercapacitor charging */
DECL|CY_SYSPM_SC_CHARGE_ENABLE|enumerator|CY_SYSPM_SC_CHARGE_ENABLE = 0x3CU, /**< Enables supercapacitor charging */
DECL|CY_SYSPM_SIMO_BUCK_OUT1_VOLTAGE_0_9V|macro|CY_SYSPM_SIMO_BUCK_OUT1_VOLTAGE_0_9V
DECL|CY_SYSPM_SIMO_BUCK_OUT1_VOLTAGE_1_1V|macro|CY_SYSPM_SIMO_BUCK_OUT1_VOLTAGE_1_1V
DECL|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_15V|macro|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_15V
DECL|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_25V|macro|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_25V
DECL|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_2V|macro|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_2V
DECL|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_35V|macro|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_35V
DECL|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_3V|macro|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_3V
DECL|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_45V|macro|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_45V
DECL|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_4V|macro|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_4V
DECL|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_5V|macro|CY_SYSPM_SIMO_BUCK_OUT2_VOLTAGE_1_5V
DECL|CY_SYSPM_SKIP_AFTER_TRANSITION|macro|CY_SYSPM_SKIP_AFTER_TRANSITION
DECL|CY_SYSPM_SKIP_BEFORE_TRANSITION|macro|CY_SYSPM_SKIP_BEFORE_TRANSITION
DECL|CY_SYSPM_SKIP_CHECK_FAIL|macro|CY_SYSPM_SKIP_CHECK_FAIL
DECL|CY_SYSPM_SKIP_CHECK_READY|macro|CY_SYSPM_SKIP_CHECK_READY
DECL|CY_SYSPM_SLEEP|enumerator|CY_SYSPM_SLEEP, /**< The Sleep enum callback type */
DECL|CY_SYSPM_STATUS_CM0_ACTIVE|macro|CY_SYSPM_STATUS_CM0_ACTIVE
DECL|CY_SYSPM_STATUS_CM0_DEEPSLEEP|macro|CY_SYSPM_STATUS_CM0_DEEPSLEEP
DECL|CY_SYSPM_STATUS_CM0_LOWPOWER|macro|CY_SYSPM_STATUS_CM0_LOWPOWER
DECL|CY_SYSPM_STATUS_CM0_SLEEP|macro|CY_SYSPM_STATUS_CM0_SLEEP
DECL|CY_SYSPM_STATUS_CM4_ACTIVE|macro|CY_SYSPM_STATUS_CM4_ACTIVE
DECL|CY_SYSPM_STATUS_CM4_DEEPSLEEP|macro|CY_SYSPM_STATUS_CM4_DEEPSLEEP
DECL|CY_SYSPM_STATUS_CM4_LOWPOWER|macro|CY_SYSPM_STATUS_CM4_LOWPOWER
DECL|CY_SYSPM_STATUS_CM4_SLEEP|macro|CY_SYSPM_STATUS_CM4_SLEEP
DECL|CY_SYSPM_STATUS_SYSTEM_LOWPOWER|macro|CY_SYSPM_STATUS_SYSTEM_LOWPOWER
DECL|CY_SYSPM_SUCCESS|enumerator|CY_SYSPM_SUCCESS = 0x00U, /**< Successful */
DECL|CY_SYSPM_TIMEOUT|enumerator|CY_SYSPM_TIMEOUT = CY_SYSPM_ID | CY_PDL_STATUS_ERROR | 0x02U, /**< A time-out occurs */
DECL|CY_SYSPM_VDDBACKUP_DEFAULT|enumerator|CY_SYSPM_VDDBACKUP_DEFAULT = 0U, /**< Automatically selects Vddd or Vbackup to supply
DECL|CY_SYSPM_VDDBACKUP_VBACKUP|enumerator|CY_SYSPM_VDDBACKUP_VBACKUP = 2U /**< Set Vbackup to supply Vddbackup */
DECL|CY_SYSPM_WAIT_FOR_EVENT|enumerator|CY_SYSPM_WAIT_FOR_EVENT /**< Wait for an event */
DECL|CY_SYSPM_WAIT_FOR_INTERRUPT|enumerator|CY_SYSPM_WAIT_FOR_INTERRUPT, /**< Wait for an interrupt */
DECL|CY_SYSPM_WAKEUP_LPCOMP0_BIT|macro|CY_SYSPM_WAKEUP_LPCOMP0_BIT
DECL|CY_SYSPM_WAKEUP_LPCOMP0_POLARITY_HIGH|macro|CY_SYSPM_WAKEUP_LPCOMP0_POLARITY_HIGH
DECL|CY_SYSPM_WAKEUP_LPCOMP0|macro|CY_SYSPM_WAKEUP_LPCOMP0
DECL|CY_SYSPM_WAKEUP_LPCOMP1_BIT|macro|CY_SYSPM_WAKEUP_LPCOMP1_BIT
DECL|CY_SYSPM_WAKEUP_LPCOMP1_POLARITY_HIGH|macro|CY_SYSPM_WAKEUP_LPCOMP1_POLARITY_HIGH
DECL|CY_SYSPM_WAKEUP_LPCOMP1|macro|CY_SYSPM_WAKEUP_LPCOMP1
DECL|CY_SYSPM_WAKEUP_PIN0_BIT|macro|CY_SYSPM_WAKEUP_PIN0_BIT
DECL|CY_SYSPM_WAKEUP_PIN0_POLARITY_HIGH|macro|CY_SYSPM_WAKEUP_PIN0_POLARITY_HIGH
DECL|CY_SYSPM_WAKEUP_PIN0|macro|CY_SYSPM_WAKEUP_PIN0
DECL|CY_SYSPM_WAKEUP_PIN1_BIT|macro|CY_SYSPM_WAKEUP_PIN1_BIT
DECL|CY_SYSPM_WAKEUP_PIN1_POLARITY_HIGH|macro|CY_SYSPM_WAKEUP_PIN1_POLARITY_HIGH
DECL|CY_SYSPM_WAKEUP_PIN1|macro|CY_SYSPM_WAKEUP_PIN1
DECL|Cy_SysPmCallback|typedef|typedef cy_en_syspm_status_t (*Cy_SysPmCallback) (cy_stc_syspm_callback_params_t *callbackParams);
DECL|Cy_SysPm_AlwaysEnablePmic|macro|Cy_SysPm_AlwaysEnablePmic
DECL|Cy_SysPm_BackupDisableVoltageMeasurement|function|__STATIC_INLINE void Cy_SysPm_BackupDisableVoltageMeasurement(void)
DECL|Cy_SysPm_BackupEnableVoltageMeasurement|function|__STATIC_INLINE void Cy_SysPm_BackupEnableVoltageMeasurement(void)
DECL|Cy_SysPm_BackupGetSupply|function|__STATIC_INLINE cy_en_syspm_vddbackup_control_t Cy_SysPm_BackupGetSupply(void)
DECL|Cy_SysPm_BackupSetSupply|function|__STATIC_INLINE void Cy_SysPm_BackupSetSupply(cy_en_syspm_vddbackup_control_t vddBackControl)
DECL|Cy_SysPm_BackupSuperCapCharge|function|__STATIC_INLINE void Cy_SysPm_BackupSuperCapCharge(cy_en_syspm_sc_charge_key_t key)
DECL|Cy_SysPm_BuckDisableVoltage2|function|__STATIC_INLINE void Cy_SysPm_BuckDisableVoltage2(void)
DECL|Cy_SysPm_BuckGetVoltage1|function|__STATIC_INLINE cy_en_syspm_buck_voltage1_t Cy_SysPm_BuckGetVoltage1(void)
DECL|Cy_SysPm_BuckGetVoltage2|function|__STATIC_INLINE cy_en_syspm_buck_voltage2_t Cy_SysPm_BuckGetVoltage2(void)
DECL|Cy_SysPm_BuckIsEnabled|function|__STATIC_INLINE bool Cy_SysPm_BuckIsEnabled(void)
DECL|Cy_SysPm_BuckIsVoltage2HwControlled|function|__STATIC_INLINE bool Cy_SysPm_BuckIsVoltage2HwControlled(void)
DECL|Cy_SysPm_BuckSetVoltage2HwControl|function|__STATIC_INLINE void Cy_SysPm_BuckSetVoltage2HwControl(bool hwControl)
DECL|Cy_SysPm_ClearHibWakeupSource|macro|Cy_SysPm_ClearHibWakeupSource
DECL|Cy_SysPm_Cm0IsActive|function|__STATIC_INLINE bool Cy_SysPm_Cm0IsActive(void)
DECL|Cy_SysPm_Cm0IsDeepSleep|function|__STATIC_INLINE bool Cy_SysPm_Cm0IsDeepSleep(void)
DECL|Cy_SysPm_Cm0IsLowPower|function|__STATIC_INLINE bool Cy_SysPm_Cm0IsLowPower(void)
DECL|Cy_SysPm_Cm0IsSleep|function|__STATIC_INLINE bool Cy_SysPm_Cm0IsSleep(void)
DECL|Cy_SysPm_Cm4IsActive|function|__STATIC_INLINE bool Cy_SysPm_Cm4IsActive(void)
DECL|Cy_SysPm_Cm4IsDeepSleep|function|__STATIC_INLINE bool Cy_SysPm_Cm4IsDeepSleep(void)
DECL|Cy_SysPm_Cm4IsLowPower|function|__STATIC_INLINE bool Cy_SysPm_Cm4IsLowPower(void)
DECL|Cy_SysPm_Cm4IsSleep|function|__STATIC_INLINE bool Cy_SysPm_Cm4IsSleep(void)
DECL|Cy_SysPm_DisableBackupVMeasure|macro|Cy_SysPm_DisableBackupVMeasure
DECL|Cy_SysPm_DisablePmicOutput|macro|Cy_SysPm_DisablePmicOutput
DECL|Cy_SysPm_DisablePmic|macro|Cy_SysPm_DisablePmic
DECL|Cy_SysPm_DisableVoltage2|macro|Cy_SysPm_DisableVoltage2
DECL|Cy_SysPm_EnableBackupVMeasure|macro|Cy_SysPm_EnableBackupVMeasure
DECL|Cy_SysPm_EnablePmicOutput|macro|Cy_SysPm_EnablePmicOutput
DECL|Cy_SysPm_EnablePmic|macro|Cy_SysPm_EnablePmic
DECL|Cy_SysPm_EnableVoltage2|macro|Cy_SysPm_EnableVoltage2
DECL|Cy_SysPm_EnterLpMode|macro|Cy_SysPm_EnterLpMode
DECL|Cy_SysPm_ExitLpMode|macro|Cy_SysPm_ExitLpMode
DECL|Cy_SysPm_GetBackupSupply|macro|Cy_SysPm_GetBackupSupply
DECL|Cy_SysPm_GetIoFreezeStatus|macro|Cy_SysPm_GetIoFreezeStatus
DECL|Cy_SysPm_IoIsFrozen|function|__STATIC_INLINE bool Cy_SysPm_IoIsFrozen(void)
DECL|Cy_SysPm_IsLowPower|function|__STATIC_INLINE bool Cy_SysPm_IsLowPower(void)
DECL|Cy_SysPm_IsPmicEnabled|macro|Cy_SysPm_IsPmicEnabled
DECL|Cy_SysPm_IsPmicLocked|macro|Cy_SysPm_IsPmicLocked
DECL|Cy_SysPm_IsPmicOutputEnabled|macro|Cy_SysPm_IsPmicOutputEnabled
DECL|Cy_SysPm_LdoGetVoltage|function|__STATIC_INLINE cy_en_syspm_ldo_voltage_t Cy_SysPm_LdoGetVoltage(void)
DECL|Cy_SysPm_LdoIsEnabled|function|__STATIC_INLINE bool Cy_SysPm_LdoIsEnabled(void)
DECL|Cy_SysPm_LockPmic|macro|Cy_SysPm_LockPmic
DECL|Cy_SysPm_PmicAlwaysEnable|function|__STATIC_INLINE void Cy_SysPm_PmicAlwaysEnable(void)
DECL|Cy_SysPm_PmicDisableOutput|function|__STATIC_INLINE void Cy_SysPm_PmicDisableOutput(void)
DECL|Cy_SysPm_PmicDisable|function|__STATIC_INLINE void Cy_SysPm_PmicDisable(cy_en_syspm_pmic_wakeup_polarity_t polarity)
DECL|Cy_SysPm_PmicEnableOutput|function|__STATIC_INLINE void Cy_SysPm_PmicEnableOutput(void)
DECL|Cy_SysPm_PmicEnable|function|__STATIC_INLINE void Cy_SysPm_PmicEnable(void)
DECL|Cy_SysPm_PmicIsEnabled|function|__STATIC_INLINE bool Cy_SysPm_PmicIsEnabled(void)
DECL|Cy_SysPm_PmicIsLocked|function|__STATIC_INLINE bool Cy_SysPm_PmicIsLocked(void)
DECL|Cy_SysPm_PmicIsOutputEnabled|function|__STATIC_INLINE bool Cy_SysPm_PmicIsOutputEnabled(void)
DECL|Cy_SysPm_PmicLock|function|__STATIC_INLINE void Cy_SysPm_PmicLock(void)
DECL|Cy_SysPm_PmicUnlock|function|__STATIC_INLINE void Cy_SysPm_PmicUnlock(void)
DECL|Cy_SysPm_SetBackupSupply|macro|Cy_SysPm_SetBackupSupply
DECL|Cy_SysPm_SetHibWakeupSource|macro|Cy_SysPm_SetHibWakeupSource
DECL|Cy_SysPm_SimoBuckGetHwControl|macro|Cy_SysPm_SimoBuckGetHwControl
DECL|Cy_SysPm_SimoBuckGetVoltage1|macro|Cy_SysPm_SimoBuckGetVoltage1
DECL|Cy_SysPm_SimoBuckGetVoltage2|macro|Cy_SysPm_SimoBuckGetVoltage2
DECL|Cy_SysPm_SimoBuckIsEnabled|macro|Cy_SysPm_SimoBuckIsEnabled
DECL|Cy_SysPm_SimoBuckOutputIsEnabled|macro|Cy_SysPm_SimoBuckOutputIsEnabled
DECL|Cy_SysPm_SimoBuckSetHwControl|macro|Cy_SysPm_SimoBuckSetHwControl
DECL|Cy_SysPm_SimoBuckSetVoltage1|macro|Cy_SysPm_SimoBuckSetVoltage1
DECL|Cy_SysPm_SimoBuckSetVoltage2|macro|Cy_SysPm_SimoBuckSetVoltage2
DECL|Cy_SysPm_SwitchToSimoBuck|macro|Cy_SysPm_SwitchToSimoBuck
DECL|Cy_SysPm_UnlockPmic|macro|Cy_SysPm_UnlockPmic
DECL|base|member|void *base; /**< The base address of a HW instance, matches name of the driver in
DECL|callbackParams|member|cy_stc_syspm_callback_params_t *callbackParams; /**< The address of a cy_stc_syspm_callback_params_t,
DECL|callback|member|Cy_SysPmCallback callback; /**< The callback handler function */
DECL|context|member|void *context; /**< The context for the handler function. This item can be
DECL|cy_en_syspm_buck_out_t|typedef|} cy_en_syspm_buck_out_t;
DECL|cy_en_syspm_buck_voltage1_t|typedef|} cy_en_syspm_buck_voltage1_t;
DECL|cy_en_syspm_buck_voltage2_t|typedef|} cy_en_syspm_buck_voltage2_t;
DECL|cy_en_syspm_callback_mode_t|typedef|} cy_en_syspm_callback_mode_t;
DECL|cy_en_syspm_callback_type_t|typedef|} cy_en_syspm_callback_type_t;
DECL|cy_en_syspm_hib_wakeup_source_t|typedef|typedef cy_en_syspm_hibernate_wakeup_source_t cy_en_syspm_hib_wakeup_source_t;
DECL|cy_en_syspm_hibernate_wakeup_source_t|typedef|} cy_en_syspm_hibernate_wakeup_source_t;
DECL|cy_en_syspm_ldo_voltage_t|typedef|} cy_en_syspm_ldo_voltage_t;
DECL|cy_en_syspm_pmic_wakeup_polarity_t|typedef|} cy_en_syspm_pmic_wakeup_polarity_t;
DECL|cy_en_syspm_sc_charge_key_t|typedef|} cy_en_syspm_sc_charge_key_t;
DECL|cy_en_syspm_simo_buck_voltage1_t|typedef|typedef cy_en_syspm_buck_voltage1_t cy_en_syspm_simo_buck_voltage1_t;
DECL|cy_en_syspm_simo_buck_voltage2_t|typedef|typedef cy_en_syspm_buck_voltage2_t cy_en_syspm_simo_buck_voltage2_t;
DECL|cy_en_syspm_status_t|typedef|} cy_en_syspm_status_t;
DECL|cy_en_syspm_vddbackup_control_t|typedef|} cy_en_syspm_vddbackup_control_t;
DECL|cy_en_syspm_waitfor_t|typedef|} cy_en_syspm_waitfor_t;
DECL|cy_stc_syspm_callback_params_t|typedef|} cy_stc_syspm_callback_params_t;
DECL|cy_stc_syspm_callback_t|typedef|} cy_stc_syspm_callback_t;
DECL|cy_stc_syspm_callback|struct|typedef struct cy_stc_syspm_callback
DECL|mode|member|cy_en_syspm_callback_mode_t mode; /**< The callback mode. You can skip assigning as this element is for
DECL|nextItm|member|struct cy_stc_syspm_callback *nextItm; /**< The next list item. This element should not be
DECL|prevItm|member|struct cy_stc_syspm_callback *prevItm; /**< The previous list item. This element should not be
DECL|skipMode|member|uint32_t skipMode; /**< The mask of modes to be skipped during callback
DECL|type|member|cy_en_syspm_callback_type_t type; /**< The callback type, see \ref cy_en_syspm_callback_type_t */
