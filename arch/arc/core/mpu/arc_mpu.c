DECL|ARC_FEATURE_MPU_ALIGNMENT_BITS|macro|ARC_FEATURE_MPU_ALIGNMENT_BITS
DECL|ARC_FEATURE_MPU_ALIGNMENT_BITS|macro|ARC_FEATURE_MPU_ALIGNMENT_BITS
DECL|AUX_MPU_EN_DISABLE|macro|AUX_MPU_EN_DISABLE
DECL|AUX_MPU_EN_ENABLE|macro|AUX_MPU_EN_ENABLE
DECL|AUX_MPU_RDB_VALID_MASK|macro|AUX_MPU_RDB_VALID_MASK
DECL|AUX_MPU_RDP_ATTR_MASK|macro|AUX_MPU_RDP_ATTR_MASK
DECL|AUX_MPU_RDP_REGION_SIZE|macro|AUX_MPU_RDP_REGION_SIZE
DECL|CALC_REGION_END_ADDR|macro|CALC_REGION_END_ADDR
DECL|_ARC_V2_MPU_EN|macro|_ARC_V2_MPU_EN
DECL|_ARC_V2_MPU_INDEX|macro|_ARC_V2_MPU_INDEX
DECL|_ARC_V2_MPU_PROBE|macro|_ARC_V2_MPU_PROBE
DECL|_ARC_V2_MPU_RDB0|macro|_ARC_V2_MPU_RDB0
DECL|_ARC_V2_MPU_RDP0|macro|_ARC_V2_MPU_RDP0
DECL|_ARC_V2_MPU_REND|macro|_ARC_V2_MPU_REND
DECL|_ARC_V2_MPU_RPER|macro|_ARC_V2_MPU_RPER
DECL|_ARC_V2_MPU_RSTART|macro|_ARC_V2_MPU_RSTART
DECL|_arc_mpu_config|function|static void _arc_mpu_config(void)
DECL|_get_num_regions|function|static inline u8_t _get_num_regions(void)
DECL|_get_region_attr_by_type|function|static inline u32_t _get_region_attr_by_type(u32_t type)
DECL|_get_region_index_by_type|function|static inline u32_t _get_region_index_by_type(u32_t type)
DECL|_is_enabled_region|function|static inline int _is_enabled_region(u32_t r_index)
DECL|_is_in_region|function|static inline int _is_in_region(u32_t r_index, u32_t start, u32_t size)
DECL|_is_user_accessible_region|function|static inline int _is_user_accessible_region(u32_t r_index, int write)
DECL|_mpu_probe|function|static inline s32_t _mpu_probe(u32_t addr)
DECL|_region_init|function|static inline void _region_init(u32_t index, u32_t region_addr, u32_t size, u32_t region_attr)
DECL|arc_core_mpu_buffer_validate|function|int arc_core_mpu_buffer_validate(void *addr, size_t size, int write)
DECL|arc_core_mpu_configure_mem_domain|function|void arc_core_mpu_configure_mem_domain(struct k_mem_domain *mem_domain)
DECL|arc_core_mpu_configure_mem_partition|function|void arc_core_mpu_configure_mem_partition(u32_t part_index, struct k_mem_partition *part)
DECL|arc_core_mpu_configure|function|void arc_core_mpu_configure(u8_t type, u32_t base, u32_t size)
DECL|arc_core_mpu_default|function|void arc_core_mpu_default(u32_t region_attr)
DECL|arc_core_mpu_disable|function|void arc_core_mpu_disable(void)
DECL|arc_core_mpu_enable|function|void arc_core_mpu_enable(void)
DECL|arc_core_mpu_get_max_domain_partition_regions|function|int arc_core_mpu_get_max_domain_partition_regions(void)
DECL|arc_core_mpu_mem_partition_remove|function|void arc_core_mpu_mem_partition_remove(u32_t part_index)
DECL|arc_core_mpu_region|function|void arc_core_mpu_region(u32_t index, u32_t base, u32_t size,u32_t region_attr)
DECL|arc_mpu_init|function|static int arc_mpu_init(struct device *arg)
