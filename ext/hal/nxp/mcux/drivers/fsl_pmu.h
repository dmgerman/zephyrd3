DECL|FSL_PMU_DRIVER_VERSION|macro|FSL_PMU_DRIVER_VERSION
DECL|PMU_1P1EnableBrownout|function|static inline void PMU_1P1EnableBrownout(PMU_Type *base, bool enable)
DECL|PMU_1P1EnableCurrentLimit|function|static inline void PMU_1P1EnableCurrentLimit(PMU_Type *base, bool enable)
DECL|PMU_1P1EnableOutput|function|static inline void PMU_1P1EnableOutput(PMU_Type *base, bool enable)
DECL|PMU_1P1EnablePullDown|function|static inline void PMU_1P1EnablePullDown(PMU_Type *base, bool enable)
DECL|PMU_1P1EnableWeakRegulator|function|static inline void PMU_1P1EnableWeakRegulator(PMU_Type *base, bool enable)
DECL|PMU_1P1SetBrownoutOffsetVoltage|function|static inline void PMU_1P1SetBrownoutOffsetVoltage(PMU_Type *base, uint32_t value)
DECL|PMU_1P1SetRegulatorOutputVoltage|function|static inline void PMU_1P1SetRegulatorOutputVoltage(PMU_Type *base, uint32_t value)
DECL|PMU_1P1SetWeakReferenceSource|function|static inline void PMU_1P1SetWeakReferenceSource(PMU_Type *base, pmu_1p1_weak_reference_source_t option)
DECL|PMU_2P1EnablePullDown|function|static inline void PMU_2P1EnablePullDown(PMU_Type *base, bool enable)
DECL|PMU_2P5EnableCurrentLimit|function|static inline void PMU_2P5EnableCurrentLimit(PMU_Type *base, bool enable)
DECL|PMU_2P5EnableOutput|function|static inline void PMU_2P5EnableOutput(PMU_Type *base, bool enable)
DECL|PMU_2P5EnablePullDown|function|static inline void PMU_2P5EnablePullDown(PMU_Type *base, bool enable)
DECL|PMU_2P5EnableWeakRegulator|function|static inline void PMU_2P5EnableWeakRegulator(PMU_Type *base, bool enable)
DECL|PMU_2P5SetBrownoutOffsetVoltage|function|static inline void PMU_2P5SetBrownoutOffsetVoltage(PMU_Type *base, uint32_t value)
DECL|PMU_2P5SetRegulatorOutputVoltage|function|static inline void PMU_2P5SetRegulatorOutputVoltage(PMU_Type *base, uint32_t value)
DECL|PMU_2P5nableBrownout|function|static inline void PMU_2P5nableBrownout(PMU_Type *base, bool enable)
DECL|PMU_3P0EnableBrownout|function|static inline void PMU_3P0EnableBrownout(PMU_Type *base, bool enable)
DECL|PMU_3P0EnableCurrentLimit|function|static inline void PMU_3P0EnableCurrentLimit(PMU_Type *base, bool enable)
DECL|PMU_3P0EnableOutput|function|static inline void PMU_3P0EnableOutput(PMU_Type *base, bool enable)
DECL|PMU_3P0SetBrownoutOffsetVoltage|function|static inline void PMU_3P0SetBrownoutOffsetVoltage(PMU_Type *base, uint32_t value)
DECL|PMU_3P0SetRegulatorOutputVoltage|function|static inline void PMU_3P0SetRegulatorOutputVoltage(PMU_Type *base, uint32_t value)
DECL|PMU_3P0SetVBusVoltageSource|function|static inline void PMU_3P0SetVBusVoltageSource(PMU_Type *base, pmu_3p0_vbus_voltage_source_t option)
DECL|PMU_CoreEnableIncreaseGateDrive|function|static inline void PMU_CoreEnableIncreaseGateDrive(PMU_Type *base, bool enable)
DECL|PMU_CoreSetARMCoreDomainVoltage|function|static inline void PMU_CoreSetARMCoreDomainVoltage(PMU_Type *base, uint32_t value)
DECL|PMU_CoreSetRegulatorVoltageRampRate|function|static inline void PMU_CoreSetRegulatorVoltageRampRate(PMU_Type *base, pmu_core_reg_voltage_ramp_rate_t option)
DECL|PMU_CoreSetSOCDomainVoltage|function|static inline void PMU_CoreSetSOCDomainVoltage(PMU_Type *base, uint32_t value)
DECL|PMU_EnableLowPowerBandgap|function|static inline void PMU_EnableLowPowerBandgap(PMU_Type *base, bool enable)
DECL|PMU_GatePower|function|static inline void PMU_GatePower(PMU_Type *base, uint32_t gates)
DECL|PMU_UngatePower|function|static inline void PMU_UngatePower(PMU_Type *base, uint32_t gates)
DECL|_FSL_PMU_H_|macro|_FSL_PMU_H_
DECL|_pmu_1p1_weak_reference_source|enum|typedef enum _pmu_1p1_weak_reference_source
DECL|_pmu_3p0_vbus_voltage_source|enum|typedef enum _pmu_3p0_vbus_voltage_source
DECL|_pmu_core_reg_voltage_ramp_rate|enum|typedef enum _pmu_core_reg_voltage_ramp_rate
DECL|_pmu_power_bandgap|enum|typedef enum _pmu_power_bandgap
DECL|_pmu_power_gate|enum|enum _pmu_power_gate
DECL|_pmu_status_flags|enum|enum _pmu_status_flags
DECL|kPMU_1P1BrownoutOnOutput|enumerator|kPMU_1P1BrownoutOnOutput = (1U << 1U), /*!< Status bit that signals when a 1p1 brownout is detected
DECL|kPMU_1P1RegulatorOutputOK|enumerator|kPMU_1P1RegulatorOutputOK = (1U << 0U), /*!< Status bit that signals when the 1p1 regulator output
DECL|kPMU_1P1WeakReferenceSourceAlt0|enumerator|kPMU_1P1WeakReferenceSourceAlt0 = 0U, /*!< Weak-linreg output tracks low-power-bandgap voltage. */
DECL|kPMU_1P1WeakReferenceSourceAlt1|enumerator|kPMU_1P1WeakReferenceSourceAlt1 = 1U, /*!< Weak-linreg output tracks VDD_SOC_CAP voltage. */
DECL|kPMU_2P5BrownoutOnOutput|enumerator|kPMU_2P5BrownoutOnOutput = (1U << 5U), /*!< Status bit that signals when a 2p5 brownout is detected
DECL|kPMU_2P5RegulatorOutputOK|enumerator|kPMU_2P5RegulatorOutputOK = (1U << 4U), /*!< Status bit that signals when the 2p5 regulator output
DECL|kPMU_3P0BrownoutOnOutput|enumerator|kPMU_3P0BrownoutOnOutput = (1U << 3U), /*!< Status bit that signals when a 3p0 brownout is detected
DECL|kPMU_3P0RegulatorOutputOK|enumerator|kPMU_3P0RegulatorOutputOK = (1U << 2U), /*!< Status bit that signals when the 3p0 regulator output
DECL|kPMU_3P0VBusVoltageSourceAlt0|enumerator|kPMU_3P0VBusVoltageSourceAlt0 = 0U, /*!< USB_OTG1_VBUS - Utilize VBUS OTG1 for power. */
DECL|kPMU_3P0VBusVoltageSourceAlt1|enumerator|kPMU_3P0VBusVoltageSourceAlt1 = 1U, /*!< USB_OTG2_VBUS - Utilize VBUS OTG2 for power. */
DECL|kPMU_CoreRegVoltageRampRateFast|enumerator|kPMU_CoreRegVoltageRampRateFast = 0U, /*!< Fast. */
DECL|kPMU_CoreRegVoltageRampRateMediumFast|enumerator|kPMU_CoreRegVoltageRampRateMediumFast = 1U, /*!< Medium Fast. */
DECL|kPMU_CoreRegVoltageRampRateMediumSlow|enumerator|kPMU_CoreRegVoltageRampRateMediumSlow = 2U, /*!< Medium Slow. */
DECL|kPMU_CoreRegVoltageRampRateSlow|enumerator|kPMU_CoreRegVoltageRampRateSlow = 0U, /*!< Slow. */
DECL|kPMU_LowPowerBandgap|enumerator|kPMU_LowPowerBandgap = 1U, /*!< Low power bandgap. */
DECL|kPMU_NormalPowerBandgap|enumerator|kPMU_NormalPowerBandgap = 0U, /*!< Normal power bandgap. */
DECL|kPMU_PowerGateDisplayLogic|enumerator|kPMU_PowerGateDisplayLogic = PMU_LOWPWR_CTRL_DISPLAY_PWRGATE_MASK, /*!< Display logic power gate control. */
DECL|kPMU_PowerGateDisplay|enumerator|kPMU_PowerGateDisplay = PMU_LOWPWR_CTRL_MIX_PWRGATE_MASK, /*!< Display power gate control. */
DECL|kPMU_PowerGateL1|enumerator|kPMU_PowerGateL1 = PMU_LOWPWR_CTRL_L1_PWRGATE_MASK, /*!< L1 power gate control. */
DECL|kPMU_PowerGateL2|enumerator|kPMU_PowerGateL2 = PMU_LOWPWR_CTRL_L2_PWRGATE_MASK, /*!< L2 power gate control. */
DECL|kPMU_PowerGateRefTopIBias|enumerator|kPMU_PowerGateRefTopIBias = PMU_LOWPWR_CTRL_REFTOP_IBIAS_OFF_MASK, /*!< Low power reftop ibias disable. */
DECL|pmu_1p1_weak_reference_source_t|typedef|} pmu_1p1_weak_reference_source_t;
DECL|pmu_3p0_vbus_voltage_source_t|typedef|} pmu_3p0_vbus_voltage_source_t;
DECL|pmu_core_reg_voltage_ramp_rate_t|typedef|} pmu_core_reg_voltage_ramp_rate_t;
DECL|pmu_power_bandgap_t|typedef|} pmu_power_bandgap_t;
