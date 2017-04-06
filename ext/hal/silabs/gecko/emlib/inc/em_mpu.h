DECL|EM_MPU_H|macro|EM_MPU_H
DECL|MPU_CTRL_HFNMIENA|macro|MPU_CTRL_HFNMIENA
DECL|MPU_CTRL_PRIVDEFENA|macro|MPU_CTRL_PRIVDEFENA
DECL|MPU_Disable|function|__STATIC_INLINE void MPU_Disable(void)
DECL|MPU_Enable|function|__STATIC_INLINE void MPU_Enable(uint32_t flags)
DECL|MPU_INIT_FLASH_DEFAULT|macro|MPU_INIT_FLASH_DEFAULT
DECL|MPU_INIT_PERIPHERAL_DEFAULT|macro|MPU_INIT_PERIPHERAL_DEFAULT
DECL|MPU_INIT_SRAM_DEFAULT|macro|MPU_INIT_SRAM_DEFAULT
DECL|MPU_RegionAp_TypeDef|typedef|} MPU_RegionAp_TypeDef;
DECL|MPU_RegionInit_TypeDef|typedef|} MPU_RegionInit_TypeDef;
DECL|MPU_RegionSize_TypeDef|typedef|} MPU_RegionSize_TypeDef;
DECL|accessPermission|member|MPU_RegionAp_TypeDef accessPermission; /**< Memory access permissions. */
DECL|baseAddress|member|uint32_t baseAddress; /**< Region baseaddress. */
DECL|bufferable|member|bool bufferable; /**< Memory bufferable attribute. */
DECL|cacheable|member|bool cacheable; /**< Memory cacheable attribute. */
DECL|disableExec|member|bool disableExec; /**< Disable execution. */
DECL|mpuRegionApFullAccess|enumerator|mpuRegionApFullAccess = 3, /**< R/W in Priviledged and User state. */
DECL|mpuRegionApPRo_URo|enumerator|mpuRegionApPRo_URo = 6 /**< R only in Priviledged and User state. */
DECL|mpuRegionApPRo|enumerator|mpuRegionApPRo = 5, /**< Priviledged R only. */
DECL|mpuRegionApPRwURo|enumerator|mpuRegionApPRwURo = 2, /**< Priviledged state R/W, User state R only. */
DECL|mpuRegionApPRw|enumerator|mpuRegionApPRw = 1, /**< Priviledged state R/W only. */
DECL|mpuRegionNoAccess|enumerator|mpuRegionNoAccess = 0, /**< No access what so ever. */
DECL|mpuRegionSize128Kb|enumerator|mpuRegionSize128Kb = 16, /**< 128K byte region size. */
DECL|mpuRegionSize128Mb|enumerator|mpuRegionSize128Mb = 26, /**< 128M byte region size. */
DECL|mpuRegionSize128b|enumerator|mpuRegionSize128b = 6, /**< 128 byte region size. */
DECL|mpuRegionSize16Kb|enumerator|mpuRegionSize16Kb = 13, /**< 16K byte region size. */
DECL|mpuRegionSize16Mb|enumerator|mpuRegionSize16Mb = 23, /**< 16M byte region size. */
DECL|mpuRegionSize1Gb|enumerator|mpuRegionSize1Gb = 29, /**< 1G byte region size. */
DECL|mpuRegionSize1Kb|enumerator|mpuRegionSize1Kb = 9, /**< 1K byte region size. */
DECL|mpuRegionSize1Mb|enumerator|mpuRegionSize1Mb = 19, /**< 1M byte region size. */
DECL|mpuRegionSize256Kb|enumerator|mpuRegionSize256Kb = 17, /**< 256K byte region size. */
DECL|mpuRegionSize256Mb|enumerator|mpuRegionSize256Mb = 27, /**< 256M byte region size. */
DECL|mpuRegionSize256b|enumerator|mpuRegionSize256b = 7, /**< 256 byte region size. */
DECL|mpuRegionSize2Gb|enumerator|mpuRegionSize2Gb = 30, /**< 2G byte region size. */
DECL|mpuRegionSize2Kb|enumerator|mpuRegionSize2Kb = 10, /**< 2K byte region size. */
DECL|mpuRegionSize2Mb|enumerator|mpuRegionSize2Mb = 20, /**< 2M byte region size. */
DECL|mpuRegionSize32Kb|enumerator|mpuRegionSize32Kb = 14, /**< 32K byte region size. */
DECL|mpuRegionSize32Mb|enumerator|mpuRegionSize32Mb = 24, /**< 32M byte region size. */
DECL|mpuRegionSize32b|enumerator|mpuRegionSize32b = 4, /**< 32 byte region size. */
DECL|mpuRegionSize4Gb|enumerator|mpuRegionSize4Gb = 31 /**< 4G byte region size. */
DECL|mpuRegionSize4Kb|enumerator|mpuRegionSize4Kb = 11, /**< 4K byte region size. */
DECL|mpuRegionSize4Mb|enumerator|mpuRegionSize4Mb = 21, /**< 4M byte region size. */
DECL|mpuRegionSize512Kb|enumerator|mpuRegionSize512Kb = 18, /**< 512K byte region size. */
DECL|mpuRegionSize512Mb|enumerator|mpuRegionSize512Mb = 28, /**< 512M byte region size. */
DECL|mpuRegionSize512b|enumerator|mpuRegionSize512b = 8, /**< 512 byte region size. */
DECL|mpuRegionSize64Kb|enumerator|mpuRegionSize64Kb = 15, /**< 64K byte region size. */
DECL|mpuRegionSize64Mb|enumerator|mpuRegionSize64Mb = 25, /**< 64M byte region size. */
DECL|mpuRegionSize64b|enumerator|mpuRegionSize64b = 5, /**< 64 byte region size. */
DECL|mpuRegionSize8Kb|enumerator|mpuRegionSize8Kb = 12, /**< 8K byte region size. */
DECL|mpuRegionSize8Mb|enumerator|mpuRegionSize8Mb = 22, /**< 8M byte region size. */
DECL|regionEnable|member|bool regionEnable; /**< MPU region enable. */
DECL|regionNo|member|uint8_t regionNo; /**< MPU region number. */
DECL|shareable|member|bool shareable; /**< Memory shareable attribute. */
DECL|size|member|MPU_RegionSize_TypeDef size; /**< Memory region size. */
DECL|srd|member|uint8_t srd; /**< Memory subregion disable bits. */
DECL|tex|member|uint8_t tex; /**< Memory type extension attributes. */
