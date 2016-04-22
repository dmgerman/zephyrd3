DECL|FSL_MPU_DRIVER_VERSION|macro|FSL_MPU_DRIVER_VERSION
DECL|MPU_Enable|function|static inline void MPU_Enable(MPU_Type *base, bool enable)
DECL|MPU_LOW_MASTER_PE_MASK|macro|MPU_LOW_MASTER_PE_MASK
DECL|MPU_LOW_MASTER_PE_SHIFT|macro|MPU_LOW_MASTER_PE_SHIFT
DECL|MPU_RegionEnable|function|static inline void MPU_RegionEnable(MPU_Type *base, mpu_region_num_t number, bool enable)
DECL|MPU_WORD_HIGH_MASTER_MASK|macro|MPU_WORD_HIGH_MASTER_MASK
DECL|MPU_WORD_HIGH_MASTER_SHIFT|macro|MPU_WORD_HIGH_MASTER_SHIFT
DECL|MPU_WORD_HIGH_MASTER_WIDTH|macro|MPU_WORD_HIGH_MASTER_WIDTH
DECL|MPU_WORD_HIGH_MASTER|macro|MPU_WORD_HIGH_MASTER
DECL|MPU_WORD_LOW_MASTER_MASK|macro|MPU_WORD_LOW_MASTER_MASK
DECL|MPU_WORD_LOW_MASTER_SHIFT|macro|MPU_WORD_LOW_MASTER_SHIFT
DECL|MPU_WORD_LOW_MASTER_WIDTH|macro|MPU_WORD_LOW_MASTER_WIDTH
DECL|MPU_WORD_LOW_MASTER|macro|MPU_WORD_LOW_MASTER
DECL|MPU_WORD_MASTER_PE_WIDTH|macro|MPU_WORD_MASTER_PE_WIDTH
DECL|MPU_WORD_MASTER_PE|macro|MPU_WORD_MASTER_PE
DECL|_FSL_MPU_H_|macro|_FSL_MPU_H_
DECL|_mpu_access_err_info|struct|typedef struct _mpu_access_err_info
DECL|_mpu_config|struct|typedef struct _mpu_config
DECL|_mpu_err_access_control|enum|typedef enum _mpu_err_access_control
DECL|_mpu_err_access_type|enum|typedef enum _mpu_err_access_type
DECL|_mpu_err_attributes|enum|typedef enum _mpu_err_attributes
DECL|_mpu_hardware_info|struct|typedef struct _mpu_hardware_info
DECL|_mpu_high_masters_access_rights|struct|typedef struct _mpu_high_masters_access_rights
DECL|_mpu_low_masters_access_rights|struct|typedef struct _mpu_low_masters_access_rights
DECL|_mpu_master|enum|typedef enum _mpu_master
DECL|_mpu_region_config|struct|typedef struct _mpu_region_config
DECL|_mpu_region_num|enum|typedef enum _mpu_region_num
DECL|_mpu_region_total_num|enum|typedef enum _mpu_region_total_num
DECL|_mpu_slave|enum|typedef enum _mpu_slave
DECL|_mpu_supervisor_access_rights|enum|typedef enum _mpu_supervisor_access_rights
DECL|_mpu_user_access_rights|enum|typedef enum _mpu_user_access_rights
DECL|accessControl|member|mpu_err_access_control_t accessControl; /*!< Access error control. */
DECL|accessRights1|member|mpu_low_masters_access_rights_t accessRights1[4]; /*!< Low masters access permission. */
DECL|accessRights2|member|mpu_high_masters_access_rights_t accessRights2[4]; /*!< High masters access permission. */
DECL|accessType|member|mpu_err_access_type_t accessType; /*!< Access error type. */
DECL|address|member|uint32_t address; /*!< Access error address. */
DECL|attributes|member|mpu_err_attributes_t attributes; /*!< Access error attributes. */
DECL|endAddress|member|uint32_t endAddress; /*!< Memory region end address. Note: bit0 ~ bit4 always be marked as 1 by MPU. The actual end
DECL|hardwareRevisionLevel|member|uint8_t hardwareRevisionLevel; /*!< Specifies the MPU's hardware and definition reversion level. */
DECL|kMPU_12Regions|enumerator|kMPU_12Regions = 0x1U, /*!< MPU supports 12 regions. */
DECL|kMPU_16Regions|enumerator|kMPU_16Regions = 0x2U /*!< MPU supports 16 regions. */
DECL|kMPU_8Regions|enumerator|kMPU_8Regions = 0x0U, /*!< MPU supports 8 regions. */
DECL|kMPU_DataAccessInSupervisorMode|enumerator|kMPU_DataAccessInSupervisorMode = 3U /*!< Access data error in supervisor mode. */
DECL|kMPU_DataAccessInUserMode|enumerator|kMPU_DataAccessInUserMode = 1U, /*!< Access data error in user mode. */
DECL|kMPU_ErrTypeRead|enumerator|kMPU_ErrTypeRead = 0U, /*!< MPU error access type --- read. */
DECL|kMPU_ErrTypeWrite|enumerator|kMPU_ErrTypeWrite = 1U /*!< MPU error access type --- write. */
DECL|kMPU_InstructionAccessInSupervisorMode|enumerator|kMPU_InstructionAccessInSupervisorMode = 2U, /*!< Access instruction error in supervisor mode. */
DECL|kMPU_InstructionAccessInUserMode|enumerator|kMPU_InstructionAccessInUserMode = 0U, /*!< Access instruction error in user mode. */
DECL|kMPU_Master0|enumerator|kMPU_Master0 = 0U, /*!< MPU master core. */
DECL|kMPU_Master1|enumerator|kMPU_Master1 = 1U, /*!< MPU master defined in SoC. */
DECL|kMPU_Master2|enumerator|kMPU_Master2 = 2U, /*!< MPU master defined in SoC. */
DECL|kMPU_Master3|enumerator|kMPU_Master3 = 3U, /*!< MPU master defined in SoC. */
DECL|kMPU_Master4|enumerator|kMPU_Master4 = 4U, /*!< MPU master defined in SoC. */
DECL|kMPU_Master5|enumerator|kMPU_Master5 = 5U, /*!< MPU master defined in SoC. */
DECL|kMPU_Master6|enumerator|kMPU_Master6 = 6U, /*!< MPU master defined in SoC. */
DECL|kMPU_Master7|enumerator|kMPU_Master7 = 7U /*!< MPU master defined in SoC. */
DECL|kMPU_NoRegionHit|enumerator|kMPU_NoRegionHit = 0U, /*!< No region hit error. */
DECL|kMPU_NoneOverlappRegion|enumerator|kMPU_NoneOverlappRegion = 1U, /*!< Access single region error. */
DECL|kMPU_OverlappRegion|enumerator|kMPU_OverlappRegion = 2U /*!< Access overlapping region error. */
DECL|kMPU_RegionNum00|enumerator|kMPU_RegionNum00 = 0U, /*!< MPU region number 0. */
DECL|kMPU_RegionNum01|enumerator|kMPU_RegionNum01 = 1U, /*!< MPU region number 1. */
DECL|kMPU_RegionNum02|enumerator|kMPU_RegionNum02 = 2U, /*!< MPU region number 2. */
DECL|kMPU_RegionNum03|enumerator|kMPU_RegionNum03 = 3U, /*!< MPU region number 3. */
DECL|kMPU_RegionNum04|enumerator|kMPU_RegionNum04 = 4U, /*!< MPU region number 4. */
DECL|kMPU_RegionNum05|enumerator|kMPU_RegionNum05 = 5U, /*!< MPU region number 5. */
DECL|kMPU_RegionNum06|enumerator|kMPU_RegionNum06 = 6U, /*!< MPU region number 6. */
DECL|kMPU_RegionNum07|enumerator|kMPU_RegionNum07 = 7U, /*!< MPU region number 7. */
DECL|kMPU_RegionNum08|enumerator|kMPU_RegionNum08 = 8U, /*!< MPU region number 8. */
DECL|kMPU_RegionNum09|enumerator|kMPU_RegionNum09 = 9U, /*!< MPU region number 9. */
DECL|kMPU_RegionNum10|enumerator|kMPU_RegionNum10 = 10U, /*!< MPU region number 10. */
DECL|kMPU_RegionNum11|enumerator|kMPU_RegionNum11 = 11U, /*!< MPU region number 11. */
DECL|kMPU_RegionNum12|enumerator|kMPU_RegionNum12 = 12U, /*!< MPU region number 12. */
DECL|kMPU_RegionNum13|enumerator|kMPU_RegionNum13 = 13U, /*!< MPU region number 13. */
DECL|kMPU_RegionNum14|enumerator|kMPU_RegionNum14 = 14U, /*!< MPU region number 14. */
DECL|kMPU_RegionNum15|enumerator|kMPU_RegionNum15 = 15U, /*!< MPU region number 15. */
DECL|kMPU_Slave0|enumerator|kMPU_Slave0 = 4U, /*!< MPU slave port 0. */
DECL|kMPU_Slave1|enumerator|kMPU_Slave1 = 3U, /*!< MPU slave port 1. */
DECL|kMPU_Slave2|enumerator|kMPU_Slave2 = 2U, /*!< MPU slave port 2. */
DECL|kMPU_Slave3|enumerator|kMPU_Slave3 = 1U, /*!< MPU slave port 3. */
DECL|kMPU_Slave4|enumerator|kMPU_Slave4 = 0U /*!< MPU slave port 4. */
DECL|kMPU_SupervisorEqualToUsermode|enumerator|kMPU_SupervisorEqualToUsermode = 3U /*!< Access permission equal to user mode. */
DECL|kMPU_SupervisorReadExecute|enumerator|kMPU_SupervisorReadExecute = 1U, /*!< Read and execute operations are allowed in supervisor mode. */
DECL|kMPU_SupervisorReadWriteExecute|enumerator|kMPU_SupervisorReadWriteExecute = 0U, /*!< Read write and execute operations are allowed in supervisor mode. */
DECL|kMPU_SupervisorReadWrite|enumerator|kMPU_SupervisorReadWrite = 2U, /*!< Read write operations are allowed in supervisor mode. */
DECL|kMPU_UserExecute|enumerator|kMPU_UserExecute = 1U, /*!< Execute operation is allowed in user mode. */
DECL|kMPU_UserNoAccessRights|enumerator|kMPU_UserNoAccessRights = 0U, /*!< No access allowed in user mode. */
DECL|kMPU_UserReadExecute|enumerator|kMPU_UserReadExecute = 5U, /*!< Read and execute operations are allowed in user mode. */
DECL|kMPU_UserReadWriteExecute|enumerator|kMPU_UserReadWriteExecute = 7U /*!< Read write and execute operations are allowed in user mode. */
DECL|kMPU_UserReadWrite|enumerator|kMPU_UserReadWrite = 6U, /*!< Read and write operations are allowed in user mode. */
DECL|kMPU_UserRead|enumerator|kMPU_UserRead = 4U, /*!< Read is allowed in user mode. */
DECL|kMPU_UserWriteExecute|enumerator|kMPU_UserWriteExecute = 3U, /*!< Write and execute operations are allowed in user mode. */
DECL|kMPU_UserWrite|enumerator|kMPU_UserWrite = 2U, /*!< Write operation is allowed in user mode. */
DECL|master|member|mpu_master_t master; /*!< Access error master. */
DECL|mpu_access_err_info_t|typedef|} mpu_access_err_info_t;
DECL|mpu_config_t|typedef|} mpu_config_t;
DECL|mpu_err_access_control_t|typedef|} mpu_err_access_control_t;
DECL|mpu_err_access_type_t|typedef|} mpu_err_access_type_t;
DECL|mpu_err_attributes_t|typedef|} mpu_err_attributes_t;
DECL|mpu_hardware_info_t|typedef|} mpu_hardware_info_t;
DECL|mpu_high_masters_access_rights_t|typedef|} mpu_high_masters_access_rights_t;
DECL|mpu_low_masters_access_rights_t|typedef|} mpu_low_masters_access_rights_t;
DECL|mpu_master_t|typedef|} mpu_master_t;
DECL|mpu_region_config_t|typedef|} mpu_region_config_t;
DECL|mpu_region_num_t|typedef|} mpu_region_num_t;
DECL|mpu_region_total_num_t|typedef|} mpu_region_total_num_t;
DECL|mpu_slave_t|typedef|} mpu_slave_t;
DECL|mpu_supervisor_access_rights_t|typedef|} mpu_supervisor_access_rights_t;
DECL|mpu_user_access_rights_t|typedef|} mpu_user_access_rights_t;
DECL|next|member|struct _mpu_config *next; /*!< pointer to the next structure. */
DECL|processIdMask|member|processIdMask; /*!< Process identifier mask. The setting bit will ignore the same bit in process identifier. */
DECL|processIdentifierEnable|member|bool processIdentifierEnable; /*!< Enables or disables process identifier. */
DECL|processIdentifier|member|uint8_t processIdentifier; /*!< Process identifier used when "processIdentifierEnable" set with true. */
DECL|processorIdentification|member|uint8_t processorIdentification; /*!< Access error processor identification. */
DECL|readEnable|member|bool readEnable; /*!< Enables or disables read permission. */
DECL|regionConfig|member|mpu_region_config_t regionConfig; /*!< region access permission. */
DECL|regionNum|member|mpu_region_num_t regionNum; /*!< MPU region number. */
DECL|regionsNumbers|member|mpu_region_total_num_t regionsNumbers; /*!< Indicates the number of region descriptors implemented. */
DECL|slavePortsNumbers|member|uint8_t slavePortsNumbers; /*!< Specifies the number of slave ports connected to MPU. */
DECL|startAddress|member|uint32_t startAddress; /*!< Memory region start address. Note: bit0 ~ bit4 always be marked as 0 by MPU. The actual
DECL|superAccessRights|member|mpu_supervisor_access_rights_t superAccessRights; /*!< Master access rights in supervisor mode. */
DECL|userAccessRights|member|mpu_user_access_rights_t userAccessRights; /*!< Master access rights in user mode. */
DECL|writeEnable|member|bool writeEnable; /*!< Enables or disables write permission. */
