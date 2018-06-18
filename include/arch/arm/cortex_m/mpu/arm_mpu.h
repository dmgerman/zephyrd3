DECL|ACCESS_PERMS_MASK|macro|ACCESS_PERMS_MASK
DECL|ACCESS_PERMS_OFFSET|macro|ACCESS_PERMS_OFFSET
DECL|ARM_MPU_BASE|macro|ARM_MPU_BASE
DECL|DEVICE_NON_SHAREABLE|macro|DEVICE_NON_SHAREABLE
DECL|DEVICE_SHAREABLE|macro|DEVICE_SHAREABLE
DECL|FULL_ACCESS|macro|FULL_ACCESS
DECL|MPU_REGION_ENTRY|macro|MPU_REGION_ENTRY
DECL|NORMAL_OUTER_INNER_NON_CACHEABLE_NON_SHAREABLE|macro|NORMAL_OUTER_INNER_NON_CACHEABLE_NON_SHAREABLE
DECL|NORMAL_OUTER_INNER_NON_CACHEABLE_SHAREABLE|macro|NORMAL_OUTER_INNER_NON_CACHEABLE_SHAREABLE
DECL|NORMAL_OUTER_INNER_WRITE_BACK_NON_SHAREABLE|macro|NORMAL_OUTER_INNER_WRITE_BACK_NON_SHAREABLE
DECL|NORMAL_OUTER_INNER_WRITE_BACK_SHAREABLE|macro|NORMAL_OUTER_INNER_WRITE_BACK_SHAREABLE
DECL|NORMAL_OUTER_INNER_WRITE_BACK_WRITE_READ_ALLOCATE_NONSHAREABLE|macro|NORMAL_OUTER_INNER_WRITE_BACK_WRITE_READ_ALLOCATE_NONSHAREABLE
DECL|NORMAL_OUTER_INNER_WRITE_BACK_WRITE_READ_ALLOCATE_SHAREABLE|macro|NORMAL_OUTER_INNER_WRITE_BACK_WRITE_READ_ALLOCATE_SHAREABLE
DECL|NORMAL_OUTER_INNER_WRITE_THROUGH_NON_SHAREABLE|macro|NORMAL_OUTER_INNER_WRITE_THROUGH_NON_SHAREABLE
DECL|NORMAL_OUTER_INNER_WRITE_THROUGH_SHAREABLE|macro|NORMAL_OUTER_INNER_WRITE_THROUGH_SHAREABLE
DECL|NOT_EXEC|macro|NOT_EXEC
DECL|NO_ACCESS|macro|NO_ACCESS
DECL|P_NA_U_NA|macro|P_NA_U_NA
DECL|P_RO_U_NA|macro|P_RO_U_NA
DECL|P_RO_U_RO|macro|P_RO_U_RO
DECL|P_RW_U_NA|macro|P_RW_U_NA
DECL|P_RW_U_RO|macro|P_RW_U_RO
DECL|P_RW_U_RW|macro|P_RW_U_RW
DECL|REGION_128B|macro|REGION_128B
DECL|REGION_128K|macro|REGION_128K
DECL|REGION_128M|macro|REGION_128M
DECL|REGION_16K|macro|REGION_16K
DECL|REGION_16M|macro|REGION_16M
DECL|REGION_1G|macro|REGION_1G
DECL|REGION_1K|macro|REGION_1K
DECL|REGION_1M|macro|REGION_1M
DECL|REGION_256B|macro|REGION_256B
DECL|REGION_256K|macro|REGION_256K
DECL|REGION_256M|macro|REGION_256M
DECL|REGION_2G|macro|REGION_2G
DECL|REGION_2K|macro|REGION_2K
DECL|REGION_2M|macro|REGION_2M
DECL|REGION_32B|macro|REGION_32B
DECL|REGION_32K|macro|REGION_32K
DECL|REGION_32M|macro|REGION_32M
DECL|REGION_4G|macro|REGION_4G
DECL|REGION_4K|macro|REGION_4K
DECL|REGION_4M|macro|REGION_4M
DECL|REGION_512B|macro|REGION_512B
DECL|REGION_512K|macro|REGION_512K
DECL|REGION_512M|macro|REGION_512M
DECL|REGION_64B|macro|REGION_64B
DECL|REGION_64K|macro|REGION_64K
DECL|REGION_64M|macro|REGION_64M
DECL|REGION_8K|macro|REGION_8K
DECL|REGION_8M|macro|REGION_8M
DECL|REGION_ENABLE_MASK|macro|REGION_ENABLE_MASK
DECL|REGION_ENABLE_OFFSET|macro|REGION_ENABLE_OFFSET
DECL|REGION_ENABLE|macro|REGION_ENABLE
DECL|REGION_FLASH_ATTR|macro|REGION_FLASH_ATTR
DECL|REGION_FLASH_ATTR|macro|REGION_FLASH_ATTR
DECL|REGION_IO_ATTR|macro|REGION_IO_ATTR
DECL|REGION_PPB_ATTR|macro|REGION_PPB_ATTR
DECL|REGION_RAM_ATTR|macro|REGION_RAM_ATTR
DECL|REGION_SIZE_MASK|macro|REGION_SIZE_MASK
DECL|REGION_SIZE_OFFSET|macro|REGION_SIZE_OFFSET
DECL|REGION_USER_RAM_ATTR|macro|REGION_USER_RAM_ATTR
DECL|RO|macro|RO
DECL|STRONGLY_ORDERED_SHAREABLE|macro|STRONGLY_ORDERED_SHAREABLE
DECL|SUB_REGION_0_DISABLED|macro|SUB_REGION_0_DISABLED
DECL|SUB_REGION_1_DISABLED|macro|SUB_REGION_1_DISABLED
DECL|SUB_REGION_2_DISABLED|macro|SUB_REGION_2_DISABLED
DECL|SUB_REGION_3_DISABLED|macro|SUB_REGION_3_DISABLED
DECL|SUB_REGION_4_DISABLED|macro|SUB_REGION_4_DISABLED
DECL|SUB_REGION_5_DISABLED|macro|SUB_REGION_5_DISABLED
DECL|SUB_REGION_6_DISABLED|macro|SUB_REGION_6_DISABLED
DECL|SUB_REGION_7_DISABLED|macro|SUB_REGION_7_DISABLED
DECL|_ARM_MPU_H_|macro|_ARM_MPU_H_
DECL|arm_mpu_config|struct|struct arm_mpu_config {
DECL|arm_mpu_region|struct|struct arm_mpu_region {
DECL|arm_mpu|struct|struct arm_mpu {
DECL|attr|member|u32_t attr;
DECL|base|member|u32_t base;
DECL|ctrl|member|volatile u32_t ctrl;
DECL|mpu_regions|member|struct arm_mpu_region *mpu_regions;
DECL|name|member|const char *name;
DECL|num_regions|member|u32_t num_regions;
DECL|rasr_a1|member|volatile u32_t rasr_a1;
DECL|rasr_a2|member|volatile u32_t rasr_a2;
DECL|rasr_a3|member|volatile u32_t rasr_a3;
DECL|rasr|member|volatile u32_t rasr;
DECL|rbar_a1|member|volatile u32_t rbar_a1;
DECL|rbar_a2|member|volatile u32_t rbar_a2;
DECL|rbar_a3|member|volatile u32_t rbar_a3;
DECL|rbar|member|volatile u32_t rbar;
DECL|rnr|member|volatile u32_t rnr;
DECL|type|member|volatile u32_t type;
