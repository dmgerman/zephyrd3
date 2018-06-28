DECL|Cy_SMIF_Memslot_CmdChipErase|function|cy_en_smif_status_t Cy_SMIF_Memslot_CmdChipErase(SMIF_Type *base, cy_stc_smif_mem_config_t const *memDevice, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_Memslot_CmdProgram|function|cy_en_smif_status_t Cy_SMIF_Memslot_CmdProgram(SMIF_Type *base, cy_stc_smif_mem_config_t const *memDevice, uint8_t const *addr, uint8_t* writeBuff, uint32_t size,
DECL|Cy_SMIF_Memslot_CmdReadSts|function|cy_en_smif_status_t Cy_SMIF_Memslot_CmdReadSts(SMIF_Type *base, cy_stc_smif_mem_config_t const *memDevice, uint8_t *status, uint8_t command, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_Memslot_CmdRead|function|cy_en_smif_status_t Cy_SMIF_Memslot_CmdRead(SMIF_Type *base, cy_stc_smif_mem_config_t const *memDevice, uint8_t const *addr, uint8_t* readBuff, uint32_t size,
DECL|Cy_SMIF_Memslot_CmdSectorErase|function|cy_en_smif_status_t Cy_SMIF_Memslot_CmdSectorErase(SMIF_Type *base, cy_stc_smif_mem_config_t *memDevice, uint8_t const *sectorAddr, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_Memslot_CmdWriteDisable|function|cy_en_smif_status_t Cy_SMIF_Memslot_CmdWriteDisable(SMIF_Type *base, cy_stc_smif_mem_config_t const *memDevice, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_Memslot_CmdWriteEnable|function|cy_en_smif_status_t Cy_SMIF_Memslot_CmdWriteEnable(SMIF_Type *base, cy_stc_smif_mem_config_t const *memDevice, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_Memslot_CmdWriteSts|function|cy_en_smif_status_t Cy_SMIF_Memslot_CmdWriteSts(SMIF_Type *base, cy_stc_smif_mem_config_t const *memDevice, void const *status, uint8_t command, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_Memslot_DeInit|function|void Cy_SMIF_Memslot_DeInit(SMIF_Type *base)
DECL|Cy_SMIF_Memslot_Init|function|cy_en_smif_status_t Cy_SMIF_Memslot_Init(SMIF_Type *base, cy_stc_smif_block_config_t * const blockConfig, cy_stc_smif_context_t *context)
DECL|Cy_SMIF_Memslot_IsBusy|function|bool Cy_SMIF_Memslot_IsBusy(SMIF_Type *base, cy_stc_smif_mem_config_t *memDevice, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_Memslot_QuadEnable|function|cy_en_smif_status_t Cy_SMIF_Memslot_QuadEnable(SMIF_Type *base, cy_stc_smif_mem_config_t *memDevice, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_Memslot_SfdpDetect|function|cy_en_smif_status_t Cy_SMIF_Memslot_SfdpDetect(SMIF_Type *base, cy_stc_smif_mem_device_cfg_t *device, cy_en_smif_slave_select_t slaveSelect, cy_en_smif_data_select_t dataSelect, cy_stc_smif_context_t *context)
DECL|Cy_SMIF_Memslot_XipRegInit|function|static void Cy_SMIF_Memslot_XipRegInit(SMIF_DEVICE_Type volatile *dev, cy_stc_smif_mem_config_t const * memCfg)
