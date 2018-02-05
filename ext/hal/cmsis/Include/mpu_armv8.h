DECL|ARM_MPU_AP_|macro|ARM_MPU_AP_
DECL|ARM_MPU_ARMV8_H|macro|ARM_MPU_ARMV8_H
DECL|ARM_MPU_ATTR_DEVICE_GRE|macro|ARM_MPU_ATTR_DEVICE_GRE
DECL|ARM_MPU_ATTR_DEVICE_nGRE|macro|ARM_MPU_ATTR_DEVICE_nGRE
DECL|ARM_MPU_ATTR_DEVICE_nGnRE|macro|ARM_MPU_ATTR_DEVICE_nGnRE
DECL|ARM_MPU_ATTR_DEVICE_nGnRnE|macro|ARM_MPU_ATTR_DEVICE_nGnRnE
DECL|ARM_MPU_ATTR_DEVICE|macro|ARM_MPU_ATTR_DEVICE
DECL|ARM_MPU_ATTR_MEMORY_|macro|ARM_MPU_ATTR_MEMORY_
DECL|ARM_MPU_ATTR_NON_CACHEABLE|macro|ARM_MPU_ATTR_NON_CACHEABLE
DECL|ARM_MPU_ATTR|macro|ARM_MPU_ATTR
DECL|ARM_MPU_ClrRegionEx|function|__STATIC_INLINE void ARM_MPU_ClrRegionEx(MPU_Type* mpu, uint32_t rnr)
DECL|ARM_MPU_ClrRegion_NS|function|__STATIC_INLINE void ARM_MPU_ClrRegion_NS(uint32_t rnr)
DECL|ARM_MPU_ClrRegion|function|__STATIC_INLINE void ARM_MPU_ClrRegion(uint32_t rnr)
DECL|ARM_MPU_Disable_NS|function|__STATIC_INLINE void ARM_MPU_Disable_NS(void)
DECL|ARM_MPU_Disable|function|__STATIC_INLINE void ARM_MPU_Disable(void)
DECL|ARM_MPU_Enable_NS|function|__STATIC_INLINE void ARM_MPU_Enable_NS(uint32_t MPU_Control)
DECL|ARM_MPU_Enable|function|__STATIC_INLINE void ARM_MPU_Enable(uint32_t MPU_Control)
DECL|ARM_MPU_LoadEx|function|__STATIC_INLINE void ARM_MPU_LoadEx(MPU_Type* mpu, uint32_t rnr, ARM_MPU_Region_t const* table, uint32_t cnt)
DECL|ARM_MPU_Load_NS|function|__STATIC_INLINE void ARM_MPU_Load_NS(uint32_t rnr, ARM_MPU_Region_t const* table, uint32_t cnt)
DECL|ARM_MPU_Load|function|__STATIC_INLINE void ARM_MPU_Load(uint32_t rnr, ARM_MPU_Region_t const* table, uint32_t cnt)
DECL|ARM_MPU_RBAR|macro|ARM_MPU_RBAR
DECL|ARM_MPU_RLAR|macro|ARM_MPU_RLAR
DECL|ARM_MPU_Region_t|typedef|} ARM_MPU_Region_t;
DECL|ARM_MPU_SH_INNER|macro|ARM_MPU_SH_INNER
DECL|ARM_MPU_SH_NON|macro|ARM_MPU_SH_NON
DECL|ARM_MPU_SH_OUTER|macro|ARM_MPU_SH_OUTER
DECL|ARM_MPU_SetMemAttrEx|function|__STATIC_INLINE void ARM_MPU_SetMemAttrEx(MPU_Type* mpu, uint8_t idx, uint8_t attr)
DECL|ARM_MPU_SetMemAttr_NS|function|__STATIC_INLINE void ARM_MPU_SetMemAttr_NS(uint8_t idx, uint8_t attr)
DECL|ARM_MPU_SetMemAttr|function|__STATIC_INLINE void ARM_MPU_SetMemAttr(uint8_t idx, uint8_t attr)
DECL|ARM_MPU_SetRegionEx|function|__STATIC_INLINE void ARM_MPU_SetRegionEx(MPU_Type* mpu, uint32_t rnr, uint32_t rbar, uint32_t rlar)
DECL|ARM_MPU_SetRegion_NS|function|__STATIC_INLINE void ARM_MPU_SetRegion_NS(uint32_t rnr, uint32_t rbar, uint32_t rlar)
DECL|ARM_MPU_SetRegion|function|__STATIC_INLINE void ARM_MPU_SetRegion(uint32_t rnr, uint32_t rbar, uint32_t rlar)
DECL|RBAR|member|uint32_t RBAR; /*!< Region Base Address Register value */
DECL|RLAR|member|uint32_t RLAR; /*!< Region Limit Address Register value */
DECL|_ARM_MPU_Region_t|struct|typedef struct _ARM_MPU_Region_t {
DECL|orderedCpy|function|__STATIC_INLINE void orderedCpy(volatile uint32_t* dst, const uint32_t* __RESTRICT src, uint32_t len)
