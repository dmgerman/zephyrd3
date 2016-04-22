DECL|MPU_Deinit|function|void MPU_Deinit(MPU_Type *base)
DECL|MPU_GetDetailErrorAccessInfo|function|void MPU_GetDetailErrorAccessInfo(MPU_Type *base, mpu_slave_t slaveNum, mpu_access_err_info_t *errInform)
DECL|MPU_GetHardwareInfo|function|void MPU_GetHardwareInfo(MPU_Type *base, mpu_hardware_info_t *hardwareInform)
DECL|MPU_GetSlavePortErrorStatus|function|bool MPU_GetSlavePortErrorStatus(MPU_Type *base, mpu_slave_t slaveNum)
DECL|MPU_Init|function|void MPU_Init(MPU_Type *base, const mpu_config_t *config)
DECL|MPU_REGIONDESCRIPTOR_WROD_REGNUM|macro|MPU_REGIONDESCRIPTOR_WROD_REGNUM
DECL|MPU_SetRegionAddr|function|void MPU_SetRegionAddr(MPU_Type *base, mpu_region_num_t regionNum, uint32_t startAddr, uint32_t endAddr)
DECL|MPU_SetRegionConfig|function|void MPU_SetRegionConfig(MPU_Type *base, const mpu_region_config_t *regionConfig)
DECL|MPU_SetRegionHighMasterAccessRights|function|void MPU_SetRegionHighMasterAccessRights(MPU_Type *base, mpu_region_num_t regionNum, mpu_master_t masterNum, const mpu_high_masters_access_rights_t *accessRights)
DECL|MPU_SetRegionLowMasterAccessRights|function|void MPU_SetRegionLowMasterAccessRights(MPU_Type *base, mpu_region_num_t regionNum, mpu_master_t masterNum, const mpu_low_masters_access_rights_t *accessRights)
DECL|g_mpuClock|variable|g_mpuClock
