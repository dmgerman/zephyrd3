DECL|EM_SYSTEM_H|macro|EM_SYSTEM_H
DECL|SYSTEM_CalAddrVal_TypeDef|typedef|SYSTEM_CalAddrVal_TypeDef;
DECL|SYSTEM_ChipRevision_TypeDef|typedef|} SYSTEM_ChipRevision_TypeDef;
DECL|SYSTEM_FpuAccessModeSet|function|__STATIC_INLINE void SYSTEM_FpuAccessModeSet(SYSTEM_FpuAccess_TypeDef accessMode)
DECL|SYSTEM_FpuAccess_TypeDef|typedef|} SYSTEM_FpuAccess_TypeDef;
DECL|SYSTEM_GetCalibrationTemperature|function|__STATIC_INLINE uint8_t SYSTEM_GetCalibrationTemperature(void)
DECL|SYSTEM_GetDevinfoRev|function|__STATIC_INLINE uint8_t SYSTEM_GetDevinfoRev(void)
DECL|SYSTEM_GetFamily|function|__STATIC_INLINE SYSTEM_PartFamily_TypeDef SYSTEM_GetFamily(void)
DECL|SYSTEM_GetFlashPageSize|function|__STATIC_INLINE uint32_t SYSTEM_GetFlashPageSize(void)
DECL|SYSTEM_GetFlashSize|function|__STATIC_INLINE uint16_t SYSTEM_GetFlashSize(void)
DECL|SYSTEM_GetPartNumber|function|__STATIC_INLINE uint16_t SYSTEM_GetPartNumber(void)
DECL|SYSTEM_GetProdRev|function|__STATIC_INLINE uint8_t SYSTEM_GetProdRev(void)
DECL|SYSTEM_GetSRAMSize|function|__STATIC_INLINE uint16_t SYSTEM_GetSRAMSize(void)
DECL|SYSTEM_GetUnique|function|__STATIC_INLINE uint64_t SYSTEM_GetUnique(void)
DECL|SYSTEM_PartFamily_TypeDef|typedef|} SYSTEM_PartFamily_TypeDef;
DECL|address|member|uint32_t address; /**< Peripheral calibration register address */
DECL|calValue|member|uint32_t calValue; /**< Calibration value for register at address */
DECL|family|member|uint8_t family;/**< Device family number */
DECL|fpuAccessDenied|enumerator|fpuAccessDenied = (0x0 << 20), /**< Access denied, any attempted access generates a NOCP UsageFault. */
DECL|fpuAccessFull|enumerator|fpuAccessFull = (0xF << 20) /**< Full access. */
DECL|fpuAccessPrivilegedOnly|enumerator|fpuAccessPrivilegedOnly = (0x5 << 20), /**< Privileged access only, an unprivileged access generates a NOCP UsageFault. */
DECL|fpuAccessReserved|enumerator|fpuAccessReserved = (0xA << 20), /**< Reserved. */
DECL|major|member|uint8_t major; /**< Major revision number */
DECL|minor|member|uint8_t minor; /**< Minor revision number */
DECL|systemPartFamilyBlue12B|enumerator|systemPartFamilyBlue12B = _DEVINFO_PART_DEVICE_FAMILY_EFR32BG12B, /**< EFR32 Blue Gecko Series 1 Config 2 Basic Device Family */
DECL|systemPartFamilyBlue12P|enumerator|systemPartFamilyBlue12P = _DEVINFO_PART_DEVICE_FAMILY_EFR32BG12P, /**< EFR32 Blue Gecko Series 1 Config 2 Premium Device Family */
DECL|systemPartFamilyBlue12V|enumerator|systemPartFamilyBlue12V = _DEVINFO_PART_DEVICE_FAMILY_EFR32BG12V, /**< EFR32 Blue Gecko Series 1 Config 2 Value Device Family */
DECL|systemPartFamilyBlue13B|enumerator|systemPartFamilyBlue13B = _DEVINFO_PART_DEVICE_FAMILY_EFR32BG13B, /**< EFR32 Blue Gecko Series 1 Config 3 Basic Device Family */
DECL|systemPartFamilyBlue13P|enumerator|systemPartFamilyBlue13P = _DEVINFO_PART_DEVICE_FAMILY_EFR32BG13P, /**< EFR32 Blue Gecko Series 1 Config 3 Premium Device Family */
DECL|systemPartFamilyBlue13V|enumerator|systemPartFamilyBlue13V = _DEVINFO_PART_DEVICE_FAMILY_EFR32BG13V, /**< EFR32 Blue Gecko Series 1 Config 3 Value Device Family */
DECL|systemPartFamilyBlue1B|enumerator|systemPartFamilyBlue1B = _DEVINFO_PART_DEVICE_FAMILY_EFR32BG1B, /**< EFR32 Blue Gecko Series 1 Config 1 Basic Device Family */
DECL|systemPartFamilyBlue1P|enumerator|systemPartFamilyBlue1P = _DEVINFO_PART_DEVICE_FAMILY_EFR32BG1P, /**< EFR32 Blue Gecko Series 1 Config 1 Premium Device Family */
DECL|systemPartFamilyBlue1V|enumerator|systemPartFamilyBlue1V = _DEVINFO_PART_DEVICE_FAMILY_EFR32BG1V, /**< EFR32 Blue Gecko Series 1 Config 1 Value Device Family */
DECL|systemPartFamilyEfm32Gecko|enumerator|systemPartFamilyEfm32Gecko = _DEVINFO_PART_DEVICE_FAMILY_EFM32G, /**< EFM32 Gecko Device Family */
DECL|systemPartFamilyEfm32Giant|enumerator|systemPartFamilyEfm32Giant = _DEVINFO_PART_DEVICE_FAMILY_EFM32GG, /**< EFM32 Giant Gecko Device Family */
DECL|systemPartFamilyEfm32Happy|enumerator|systemPartFamilyEfm32Happy = _DEVINFO_PART_DEVICE_FAMILY_EFM32HG, /**< EFM32 Happy Gecko Device Family */
DECL|systemPartFamilyEfm32Jade12B|enumerator|systemPartFamilyEfm32Jade12B = _DEVINFO_PART_DEVICE_FAMILY_EFM32JG12B, /**< EFM32 Jade Gecko Series 1 Config 2 Basic Device Family */
DECL|systemPartFamilyEfm32Jade13B|enumerator|systemPartFamilyEfm32Jade13B = _DEVINFO_PART_DEVICE_FAMILY_EFM32JG13B, /**< EFM32 Jade Gecko Series 1 Config 3 Basic Device Family */
DECL|systemPartFamilyEfm32Jade1B|enumerator|systemPartFamilyEfm32Jade1B = _DEVINFO_PART_DEVICE_FAMILY_EFM32JG1B, /**< EFM32 Jade Gecko Series 1 Config 1 Basic Device Family */
DECL|systemPartFamilyEfm32Leopard|enumerator|systemPartFamilyEfm32Leopard = _DEVINFO_PART_DEVICE_FAMILY_EFM32LG, /**< EFM32 Leopard Gecko Device Family */
DECL|systemPartFamilyEfm32Pearl12B|enumerator|systemPartFamilyEfm32Pearl12B = _DEVINFO_PART_DEVICE_FAMILY_EFM32PG12B, /**< EFM32 Pearl Gecko Series 1 Config 2 Basic Device Family */
DECL|systemPartFamilyEfm32Pearl13B|enumerator|systemPartFamilyEfm32Pearl13B = _DEVINFO_PART_DEVICE_FAMILY_EFM32PG13B, /**< EFM32 Pearl Gecko Series 1 Config 3 Basic Device Family */
DECL|systemPartFamilyEfm32Pearl1B|enumerator|systemPartFamilyEfm32Pearl1B = _DEVINFO_PART_DEVICE_FAMILY_EFM32PG1B, /**< EFM32 Pearl Gecko Series 1 Config 1 Basic Device Family */
DECL|systemPartFamilyEfm32Tiny|enumerator|systemPartFamilyEfm32Tiny = _DEVINFO_PART_DEVICE_FAMILY_EFM32TG, /**< EFM32 Tiny Gecko Device Family */
DECL|systemPartFamilyEfm32Wonder|enumerator|systemPartFamilyEfm32Wonder = _DEVINFO_PART_DEVICE_FAMILY_EFM32WG, /**< EFM32 Wonder Gecko Device Family */
DECL|systemPartFamilyEfm32Zero|enumerator|systemPartFamilyEfm32Zero = _DEVINFO_PART_DEVICE_FAMILY_EFM32ZG, /**< EFM32 Zero Gecko Device Family */
DECL|systemPartFamilyEzr32Happy|enumerator|systemPartFamilyEzr32Happy = _DEVINFO_PART_DEVICE_FAMILY_EZR32HG, /**< EZR32 Happy Device Family */
DECL|systemPartFamilyEzr32Leopard|enumerator|systemPartFamilyEzr32Leopard = _DEVINFO_PART_DEVICE_FAMILY_EZR32LG, /**< EZR32 Leopard Device Family */
DECL|systemPartFamilyEzr32Wonder|enumerator|systemPartFamilyEzr32Wonder = _DEVINFO_PART_DEVICE_FAMILY_EZR32WG, /**< EZR32 Wonder Device Family */
DECL|systemPartFamilyFlex12B|enumerator|systemPartFamilyFlex12B = _DEVINFO_PART_DEVICE_FAMILY_EFR32FG12B, /**< EFR32 Flex Gecko Series 1 Config 2 Basic Device Family */
DECL|systemPartFamilyFlex12P|enumerator|systemPartFamilyFlex12P = _DEVINFO_PART_DEVICE_FAMILY_EFR32FG12P, /**< EFR32 Flex Gecko Series 1 Config 2 Premium Device Family */
DECL|systemPartFamilyFlex12V|enumerator|systemPartFamilyFlex12V = _DEVINFO_PART_DEVICE_FAMILY_EFR32FG12V, /**< EFR32 Flex Gecko Series 1 Config 2 Value Device Family */
DECL|systemPartFamilyFlex13B|enumerator|systemPartFamilyFlex13B = _DEVINFO_PART_DEVICE_FAMILY_EFR32FG13B, /**< EFR32 Flex Gecko Series 1 Config 3 Basic Device Family */
DECL|systemPartFamilyFlex13P|enumerator|systemPartFamilyFlex13P = _DEVINFO_PART_DEVICE_FAMILY_EFR32FG13P, /**< EFR32 Flex Gecko Series 1 Config 3 Premium Device Family */
DECL|systemPartFamilyFlex13V|enumerator|systemPartFamilyFlex13V = _DEVINFO_PART_DEVICE_FAMILY_EFR32FG13V, /**< EFR32 Flex Gecko Series 1 Config 3 Value Device Family */
DECL|systemPartFamilyFlex1B|enumerator|systemPartFamilyFlex1B = _DEVINFO_PART_DEVICE_FAMILY_EFR32FG1B, /**< EFR32 Flex Gecko Series 1 Config 1 Basic Device Family */
DECL|systemPartFamilyFlex1P|enumerator|systemPartFamilyFlex1P = _DEVINFO_PART_DEVICE_FAMILY_EFR32FG1P, /**< EFR32 Flex Gecko Series 1 Config 1 Premium Device Family */
DECL|systemPartFamilyFlex1V|enumerator|systemPartFamilyFlex1V = _DEVINFO_PART_DEVICE_FAMILY_EFR32FG1V, /**< EFR32 Flex Gecko Series 1 Config 1 Value Device Family */
DECL|systemPartFamilyGecko|enumerator|systemPartFamilyGecko = _DEVINFO_PART_DEVICE_FAMILY_G, /**< Gecko Device Family */
DECL|systemPartFamilyGiant|enumerator|systemPartFamilyGiant = _DEVINFO_PART_DEVICE_FAMILY_GG, /**< Giant Gecko Device Family */
DECL|systemPartFamilyHappy|enumerator|systemPartFamilyHappy = _DEVINFO_PART_DEVICE_FAMILY_HG, /**< Happy Gecko Device Family */
DECL|systemPartFamilyLeopard|enumerator|systemPartFamilyLeopard = _DEVINFO_PART_DEVICE_FAMILY_LG, /**< Leopard Gecko Device Family */
DECL|systemPartFamilyMighty12B|enumerator|systemPartFamilyMighty12B = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG12B, /**< EFR32 Mighty Gecko Series 1 Config 2 Basic Device Family */
DECL|systemPartFamilyMighty12P|enumerator|systemPartFamilyMighty12P = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG12P, /**< EFR32 Mighty Gecko Series 1 Config 2 Premium Device Family */
DECL|systemPartFamilyMighty12V|enumerator|systemPartFamilyMighty12V = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG12V, /**< EFR32 Mighty Gecko Series 1 Config 2 Value Device Family */
DECL|systemPartFamilyMighty13B|enumerator|systemPartFamilyMighty13B = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG13B, /**< EFR32 Mighty Gecko Series 1 Config 3 Basic Device Family */
DECL|systemPartFamilyMighty13P|enumerator|systemPartFamilyMighty13P = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG13P, /**< EFR32 Mighty Gecko Series 1 Config 3 Premium Device Family */
DECL|systemPartFamilyMighty13V|enumerator|systemPartFamilyMighty13V = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG13V, /**< EFR32 Mighty Gecko Series 1 Config 3 Value Device Family */
DECL|systemPartFamilyMighty1B|enumerator|systemPartFamilyMighty1B = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG1B, /**< EFR32 Mighty Gecko Series 1 Config 1 Basic Device Family */
DECL|systemPartFamilyMighty1P|enumerator|systemPartFamilyMighty1P = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG1P, /**< EFR32 Mighty Gecko Series 1 Config 1 Premium Device Family */
DECL|systemPartFamilyMighty1V|enumerator|systemPartFamilyMighty1V = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG1V, /**< EFR32 Mighty Gecko Series 1 Config 1 Value Device Family */
DECL|systemPartFamilyMighty2P|enumerator|systemPartFamilyMighty2P = _DEVINFO_PART_DEVICE_FAMILY_EFR32MG2P, /**< EFR32 Mighty Gecko Series 1 Config 2 Premium Device Family */
DECL|systemPartFamilyTiny|enumerator|systemPartFamilyTiny = _DEVINFO_PART_DEVICE_FAMILY_TG, /**< Tiny Gecko Device Family */
DECL|systemPartFamilyUnknown|enumerator|systemPartFamilyUnknown = 0xFF /**< Unknown Device Family.
DECL|systemPartFamilyWonder|enumerator|systemPartFamilyWonder = _DEVINFO_PART_DEVICE_FAMILY_WG, /**< Wonder Gecko Device Family */
DECL|systemPartFamilyZero|enumerator|systemPartFamilyZero = _DEVINFO_PART_DEVICE_FAMILY_ZG, /**< Zero Gecko Device Family */
