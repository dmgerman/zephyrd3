DECL|ZEPHYR_ARCH_ARM_CORE_CORTEX_M_MPU_ARM_MPU_V8_INTERNAL_H_|macro|ZEPHYR_ARCH_ARM_CORE_CORTEX_M_MPU_ARM_MPU_V8_INTERNAL_H_
DECL|_get_mpu_ram_region_attr|function|static inline void _get_mpu_ram_region_attr(arm_mpu_region_attr_t *p_attr,u32_t ap, u32_t base, u32_t size)
DECL|_get_ram_region_attr_by_conf|function|static inline void _get_ram_region_attr_by_conf(arm_mpu_region_attr_t *p_attr,u32_t ap_attr, u32_t base, u32_t size)
DECL|_is_enabled_region|function|static inline int _is_enabled_region(u32_t r_index)
DECL|_is_in_region|function|static inline int _is_in_region(u32_t r_index, u32_t start, u32_t size)
DECL|_mpu_buffer_validate|function|static inline int _mpu_buffer_validate(void *addr, size_t size, int write)
DECL|_mpu_init|function|static void _mpu_init(void)
DECL|_region_init|function|static void _region_init(u32_t index, struct arm_mpu_region *region_conf)
