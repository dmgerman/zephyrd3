DECL|ARM_MPU_DEV|macro|ARM_MPU_DEV
DECL|_arm_mpu_config|function|static void _arm_mpu_config(void)
DECL|_get_num_regions|function|static inline u8_t _get_num_regions(void)
DECL|_get_region_attr_by_type|function|static inline u32_t _get_region_attr_by_type(u32_t type, u32_t size)
DECL|_get_region_attr|function|static inline u32_t _get_region_attr(u32_t xn, u32_t ap, u32_t tex, u32_t c, u32_t b, u32_t s, u32_t srd, u32_t size)
DECL|_region_init|function|static void _region_init(u32_t index, u32_t region_addr, u32_t region_attr)
DECL|arm_core_mpu_configure|function|void arm_core_mpu_configure(u8_t type, u32_t base, u32_t size)
DECL|arm_core_mpu_disable|function|void arm_core_mpu_disable(void)
DECL|arm_core_mpu_enable|function|void arm_core_mpu_enable(void)
DECL|arm_mpu_enabled|variable|arm_mpu_enabled
DECL|arm_mpu_init|function|static int arm_mpu_init(struct device *arg)
