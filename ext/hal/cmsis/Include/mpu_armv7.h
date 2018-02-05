DECL|ARM_MPU_AP_FULL|macro|ARM_MPU_AP_FULL
DECL|ARM_MPU_AP_NONE|macro|ARM_MPU_AP_NONE
DECL|ARM_MPU_AP_PRIV|macro|ARM_MPU_AP_PRIV
DECL|ARM_MPU_AP_PRO|macro|ARM_MPU_AP_PRO
DECL|ARM_MPU_AP_RO|macro|ARM_MPU_AP_RO
DECL|ARM_MPU_AP_URO|macro|ARM_MPU_AP_URO
DECL|ARM_MPU_ARMV7_H|macro|ARM_MPU_ARMV7_H
DECL|ARM_MPU_ClrRegion|function|__STATIC_INLINE void ARM_MPU_ClrRegion(uint32_t rnr)
DECL|ARM_MPU_Disable|function|__STATIC_INLINE void ARM_MPU_Disable(void)
DECL|ARM_MPU_Enable|function|__STATIC_INLINE void ARM_MPU_Enable(uint32_t MPU_Control)
DECL|ARM_MPU_Load|function|__STATIC_INLINE void ARM_MPU_Load(ARM_MPU_Region_t const* table, uint32_t cnt)
DECL|ARM_MPU_RASR|macro|ARM_MPU_RASR
DECL|ARM_MPU_RBAR|macro|ARM_MPU_RBAR
DECL|ARM_MPU_REGION_SIZE_128B|macro|ARM_MPU_REGION_SIZE_128B
DECL|ARM_MPU_REGION_SIZE_128KB|macro|ARM_MPU_REGION_SIZE_128KB
DECL|ARM_MPU_REGION_SIZE_128MB|macro|ARM_MPU_REGION_SIZE_128MB
DECL|ARM_MPU_REGION_SIZE_16KB|macro|ARM_MPU_REGION_SIZE_16KB
DECL|ARM_MPU_REGION_SIZE_16MB|macro|ARM_MPU_REGION_SIZE_16MB
DECL|ARM_MPU_REGION_SIZE_1GB|macro|ARM_MPU_REGION_SIZE_1GB
DECL|ARM_MPU_REGION_SIZE_1KB|macro|ARM_MPU_REGION_SIZE_1KB
DECL|ARM_MPU_REGION_SIZE_1MB|macro|ARM_MPU_REGION_SIZE_1MB
DECL|ARM_MPU_REGION_SIZE_256B|macro|ARM_MPU_REGION_SIZE_256B
DECL|ARM_MPU_REGION_SIZE_256KB|macro|ARM_MPU_REGION_SIZE_256KB
DECL|ARM_MPU_REGION_SIZE_256MB|macro|ARM_MPU_REGION_SIZE_256MB
DECL|ARM_MPU_REGION_SIZE_2GB|macro|ARM_MPU_REGION_SIZE_2GB
DECL|ARM_MPU_REGION_SIZE_2KB|macro|ARM_MPU_REGION_SIZE_2KB
DECL|ARM_MPU_REGION_SIZE_2MB|macro|ARM_MPU_REGION_SIZE_2MB
DECL|ARM_MPU_REGION_SIZE_32B|macro|ARM_MPU_REGION_SIZE_32B
DECL|ARM_MPU_REGION_SIZE_32KB|macro|ARM_MPU_REGION_SIZE_32KB
DECL|ARM_MPU_REGION_SIZE_32MB|macro|ARM_MPU_REGION_SIZE_32MB
DECL|ARM_MPU_REGION_SIZE_4GB|macro|ARM_MPU_REGION_SIZE_4GB
DECL|ARM_MPU_REGION_SIZE_4KB|macro|ARM_MPU_REGION_SIZE_4KB
DECL|ARM_MPU_REGION_SIZE_4MB|macro|ARM_MPU_REGION_SIZE_4MB
DECL|ARM_MPU_REGION_SIZE_512B|macro|ARM_MPU_REGION_SIZE_512B
DECL|ARM_MPU_REGION_SIZE_512KB|macro|ARM_MPU_REGION_SIZE_512KB
DECL|ARM_MPU_REGION_SIZE_512MB|macro|ARM_MPU_REGION_SIZE_512MB
DECL|ARM_MPU_REGION_SIZE_64B|macro|ARM_MPU_REGION_SIZE_64B
DECL|ARM_MPU_REGION_SIZE_64KB|macro|ARM_MPU_REGION_SIZE_64KB
DECL|ARM_MPU_REGION_SIZE_64MB|macro|ARM_MPU_REGION_SIZE_64MB
DECL|ARM_MPU_REGION_SIZE_8KB|macro|ARM_MPU_REGION_SIZE_8KB
DECL|ARM_MPU_REGION_SIZE_8MB|macro|ARM_MPU_REGION_SIZE_8MB
DECL|ARM_MPU_Region_t|typedef|} ARM_MPU_Region_t;
DECL|ARM_MPU_SetRegionEx|function|__STATIC_INLINE void ARM_MPU_SetRegionEx(uint32_t rnr, uint32_t rbar, uint32_t rasr)
DECL|ARM_MPU_SetRegion|function|__STATIC_INLINE void ARM_MPU_SetRegion(uint32_t rbar, uint32_t rasr)
DECL|RASR|member|uint32_t RASR; //!< The region attribute and size register value (RASR) \ref MPU_RASR
DECL|RBAR|member|uint32_t RBAR; //!< The region base address register value (RBAR)
DECL|_ARM_MPU_Region_t|struct|typedef struct _ARM_MPU_Region_t {
DECL|orderedCpy|function|__STATIC_INLINE void orderedCpy(volatile uint32_t* dst, const uint32_t* __RESTRICT src, uint32_t len)
