DECL|FSL_SYSMPU_DRIVER_VERSION|macro|FSL_SYSMPU_DRIVER_VERSION
DECL|SYSMPU_Enable|function|static inline void SYSMPU_Enable(SYSMPU_Type *base, bool enable)
DECL|SYSMPU_MASTER_RWATTRIBUTE_START_PORT|macro|SYSMPU_MASTER_RWATTRIBUTE_START_PORT
DECL|SYSMPU_REGION_RWRIGHTS_MASTER_MASK|macro|SYSMPU_REGION_RWRIGHTS_MASTER_MASK
DECL|SYSMPU_REGION_RWRIGHTS_MASTER_SHIFT|macro|SYSMPU_REGION_RWRIGHTS_MASTER_SHIFT
DECL|SYSMPU_REGION_RWRIGHTS_MASTER|macro|SYSMPU_REGION_RWRIGHTS_MASTER
DECL|SYSMPU_REGION_RWXRIGHTS_MASTER_MASK|macro|SYSMPU_REGION_RWXRIGHTS_MASTER_MASK
DECL|SYSMPU_REGION_RWXRIGHTS_MASTER_PE_MASK|macro|SYSMPU_REGION_RWXRIGHTS_MASTER_PE_MASK
DECL|SYSMPU_REGION_RWXRIGHTS_MASTER_PE_SHIFT|macro|SYSMPU_REGION_RWXRIGHTS_MASTER_PE_SHIFT
DECL|SYSMPU_REGION_RWXRIGHTS_MASTER_PE|macro|SYSMPU_REGION_RWXRIGHTS_MASTER_PE
DECL|SYSMPU_REGION_RWXRIGHTS_MASTER_SHIFT|macro|SYSMPU_REGION_RWXRIGHTS_MASTER_SHIFT
DECL|SYSMPU_REGION_RWXRIGHTS_MASTER_WIDTH|macro|SYSMPU_REGION_RWXRIGHTS_MASTER_WIDTH
DECL|SYSMPU_REGION_RWXRIGHTS_MASTER|macro|SYSMPU_REGION_RWXRIGHTS_MASTER
DECL|SYSMPU_RegionEnable|function|static inline void SYSMPU_RegionEnable(SYSMPU_Type *base, uint32_t number, bool enable)
DECL|_FSL_SYSMPU_H_|macro|_FSL_SYSMPU_H_
DECL|_sysmpu_access_err_info|struct|typedef struct _sysmpu_access_err_info
DECL|_sysmpu_config|struct|typedef struct _sysmpu_config
DECL|_sysmpu_err_access_control|enum|typedef enum _sysmpu_err_access_control
DECL|_sysmpu_err_access_type|enum|typedef enum _sysmpu_err_access_type
DECL|_sysmpu_err_attributes|enum|typedef enum _sysmpu_err_attributes
DECL|_sysmpu_hardware_info|struct|typedef struct _sysmpu_hardware_info
DECL|_sysmpu_region_config|struct|typedef struct _sysmpu_region_config
DECL|_sysmpu_region_total_num|enum|typedef enum _sysmpu_region_total_num
DECL|_sysmpu_rwrights_master_access_control|struct|typedef struct _sysmpu_rwrights_master_access_control
DECL|_sysmpu_rwxrights_master_access_control|struct|typedef struct _sysmpu_rwxrights_master_access_control
DECL|_sysmpu_slave|enum|typedef enum _sysmpu_slave
DECL|_sysmpu_supervisor_access_rights|enum|typedef enum _sysmpu_supervisor_access_rights
DECL|_sysmpu_user_access_rights|enum|typedef enum _sysmpu_user_access_rights
DECL|accessControl|member|sysmpu_err_access_control_t accessControl; /*!< Access error control. */
DECL|accessRights1|member|sysmpu_rwxrights_master_access_control_t accessRights1[4]; /*!< Masters with read, write and execute rights setting. */
DECL|accessRights2|member|sysmpu_rwrights_master_access_control_t accessRights2[4]; /*!< Masters with normal read write rights setting. */
DECL|accessType|member|sysmpu_err_access_type_t accessType; /*!< Access error type. */
DECL|address|member|uint32_t address; /*!< Access error address. */
DECL|attributes|member|sysmpu_err_attributes_t attributes; /*!< Access error attributes. */
DECL|endAddress|member|uint32_t endAddress; /*!< Memory region end address. Note: bit0 ~ bit4 always be marked as 1 by SYSMPU. The actual end
DECL|hardwareRevisionLevel|member|uint8_t hardwareRevisionLevel; /*!< Specifies the SYSMPU's hardware and definition reversion level. */
DECL|kSYSMPU_12Regions|enumerator|kSYSMPU_12Regions = 0x1U, /*!< SYSMPU supports 12 regions. */
DECL|kSYSMPU_16Regions|enumerator|kSYSMPU_16Regions = 0x2U /*!< SYSMPU supports 16 regions. */
DECL|kSYSMPU_8Regions|enumerator|kSYSMPU_8Regions = 0x0U, /*!< SYSMPU supports 8 regions. */
DECL|kSYSMPU_DataAccessInSupervisorMode|enumerator|kSYSMPU_DataAccessInSupervisorMode = 3U /*!< Access data error in supervisor mode. */
DECL|kSYSMPU_DataAccessInUserMode|enumerator|kSYSMPU_DataAccessInUserMode = 1U, /*!< Access data error in user mode. */
DECL|kSYSMPU_ErrTypeRead|enumerator|kSYSMPU_ErrTypeRead = 0U, /*!< SYSMPU error access type --- read. */
DECL|kSYSMPU_ErrTypeWrite|enumerator|kSYSMPU_ErrTypeWrite = 1U /*!< SYSMPU error access type --- write. */
DECL|kSYSMPU_InstructionAccessInSupervisorMode|enumerator|kSYSMPU_InstructionAccessInSupervisorMode = 2U, /*!< Access instruction error in supervisor mode. */
DECL|kSYSMPU_InstructionAccessInUserMode|enumerator|kSYSMPU_InstructionAccessInUserMode = 0U, /*!< Access instruction error in user mode. */
DECL|kSYSMPU_NoRegionHit|enumerator|kSYSMPU_NoRegionHit = 0U, /*!< No region hit error. */
DECL|kSYSMPU_NoneOverlappRegion|enumerator|kSYSMPU_NoneOverlappRegion = 1U, /*!< Access single region error. */
DECL|kSYSMPU_OverlappRegion|enumerator|kSYSMPU_OverlappRegion = 2U /*!< Access overlapping region error. */
DECL|kSYSMPU_Slave0|enumerator|kSYSMPU_Slave0 = 0U, /*!< SYSMPU slave port 0. */
DECL|kSYSMPU_Slave1|enumerator|kSYSMPU_Slave1 = 1U, /*!< SYSMPU slave port 1. */
DECL|kSYSMPU_Slave2|enumerator|kSYSMPU_Slave2 = 2U, /*!< SYSMPU slave port 2. */
DECL|kSYSMPU_Slave3|enumerator|kSYSMPU_Slave3 = 3U, /*!< SYSMPU slave port 3. */
DECL|kSYSMPU_Slave4|enumerator|kSYSMPU_Slave4 = 4U, /*!< SYSMPU slave port 4. */
DECL|kSYSMPU_Slave5|enumerator|kSYSMPU_Slave5 = 5U, /*!< SYSMPU slave port 5. */
DECL|kSYSMPU_Slave6|enumerator|kSYSMPU_Slave6 = 6U, /*!< SYSMPU slave port 6. */
DECL|kSYSMPU_Slave7|enumerator|kSYSMPU_Slave7 = 7U, /*!< SYSMPU slave port 7. */
DECL|kSYSMPU_SupervisorEqualToUsermode|enumerator|kSYSMPU_SupervisorEqualToUsermode = 3U /*!< Access permission equal to user mode. */
DECL|kSYSMPU_SupervisorReadExecute|enumerator|kSYSMPU_SupervisorReadExecute = 1U, /*!< Read and execute operations are allowed in supervisor mode. */
DECL|kSYSMPU_SupervisorReadWriteExecute|enumerator|kSYSMPU_SupervisorReadWriteExecute = 0U, /*!< Read write and execute operations are allowed in supervisor mode. */
DECL|kSYSMPU_SupervisorReadWrite|enumerator|kSYSMPU_SupervisorReadWrite = 2U, /*!< Read write operations are allowed in supervisor mode. */
DECL|kSYSMPU_UserExecute|enumerator|kSYSMPU_UserExecute = 1U, /*!< Execute operation is allowed in user mode. */
DECL|kSYSMPU_UserNoAccessRights|enumerator|kSYSMPU_UserNoAccessRights = 0U, /*!< No access allowed in user mode. */
DECL|kSYSMPU_UserReadExecute|enumerator|kSYSMPU_UserReadExecute = 5U, /*!< Read and execute operations are allowed in user mode. */
DECL|kSYSMPU_UserReadWriteExecute|enumerator|kSYSMPU_UserReadWriteExecute = 7U /*!< Read write and execute operations are allowed in user mode. */
DECL|kSYSMPU_UserReadWrite|enumerator|kSYSMPU_UserReadWrite = 6U, /*!< Read and write operations are allowed in user mode. */
DECL|kSYSMPU_UserRead|enumerator|kSYSMPU_UserRead = 4U, /*!< Read is allowed in user mode. */
DECL|kSYSMPU_UserWriteExecute|enumerator|kSYSMPU_UserWriteExecute = 3U, /*!< Write and execute operations are allowed in user mode. */
DECL|kSYSMPU_UserWrite|enumerator|kSYSMPU_UserWrite = 2U, /*!< Write operation is allowed in user mode. */
DECL|master|member|uint32_t master; /*!< Access error master. */
DECL|next|member|struct _sysmpu_config *next; /*!< Pointer to the next structure. */
DECL|processIdMask|member|processIdMask; /*!< Process identifier mask. The setting bit will ignore the same bit in process identifier. */
DECL|processIdentifierEnable|member|bool processIdentifierEnable; /*!< Enables or disables process identifier. */
DECL|processIdentifier|member|uint8_t processIdentifier; /*!< Process identifier used when "processIdentifierEnable" set with true. */
DECL|processorIdentification|member|uint8_t processorIdentification; /*!< Access error processor identification. */
DECL|readEnable|member|bool readEnable; /*!< Enables or disables read permission. */
DECL|regionConfig|member|sysmpu_region_config_t regionConfig; /*!< Region access permission. */
DECL|regionNum|member|uint32_t regionNum; /*!< SYSMPU region number, range form 0 ~ FSL_FEATURE_SYSMPU_DESCRIPTOR_COUNT - 1. */
DECL|regionsNumbers|member|sysmpu_region_total_num_t regionsNumbers; /*!< Indicates the number of region descriptors implemented. */
DECL|slavePortsNumbers|member|uint8_t slavePortsNumbers; /*!< Specifies the number of slave ports connected to SYSMPU. */
DECL|startAddress|member|uint32_t startAddress; /*!< Memory region start address. Note: bit0 ~ bit4 always be marked as 0 by SYSMPU. The actual
DECL|superAccessRights|member|sysmpu_supervisor_access_rights_t superAccessRights; /*!< Master access rights in supervisor mode. */
DECL|sysmpu_access_err_info_t|typedef|} sysmpu_access_err_info_t;
DECL|sysmpu_config_t|typedef|} sysmpu_config_t;
DECL|sysmpu_err_access_control_t|typedef|} sysmpu_err_access_control_t;
DECL|sysmpu_err_access_type_t|typedef|} sysmpu_err_access_type_t;
DECL|sysmpu_err_attributes_t|typedef|} sysmpu_err_attributes_t;
DECL|sysmpu_hardware_info_t|typedef|} sysmpu_hardware_info_t;
DECL|sysmpu_region_config_t|typedef|} sysmpu_region_config_t;
DECL|sysmpu_region_total_num_t|typedef|} sysmpu_region_total_num_t;
DECL|sysmpu_rwrights_master_access_control_t|typedef|} sysmpu_rwrights_master_access_control_t;
DECL|sysmpu_rwxrights_master_access_control_t|typedef|} sysmpu_rwxrights_master_access_control_t;
DECL|sysmpu_slave_t|typedef|} sysmpu_slave_t;
DECL|sysmpu_supervisor_access_rights_t|typedef|} sysmpu_supervisor_access_rights_t;
DECL|sysmpu_user_access_rights_t|typedef|} sysmpu_user_access_rights_t;
DECL|userAccessRights|member|sysmpu_user_access_rights_t userAccessRights; /*!< Master access rights in user mode. */
DECL|writeEnable|member|bool writeEnable; /*!< Enables or disables write permission. */
