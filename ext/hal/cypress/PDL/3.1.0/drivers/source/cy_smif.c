DECL|Cy_SMIF_CacheDisable|function|cy_en_smif_status_t Cy_SMIF_CacheDisable(SMIF_Type *base, cy_en_smif_cache_en_t cacheType)
DECL|Cy_SMIF_CacheEnable|function|cy_en_smif_status_t Cy_SMIF_CacheEnable(SMIF_Type *base, cy_en_smif_cache_en_t cacheType)
DECL|Cy_SMIF_CacheInvalidate|function|cy_en_smif_status_t Cy_SMIF_CacheInvalidate(SMIF_Type *base, cy_en_smif_cache_en_t cacheType)
DECL|Cy_SMIF_CachePrefetchingDisable|function|cy_en_smif_status_t Cy_SMIF_CachePrefetchingDisable(SMIF_Type *base, cy_en_smif_cache_en_t cacheType)
DECL|Cy_SMIF_CachePrefetchingEnable|function|cy_en_smif_status_t Cy_SMIF_CachePrefetchingEnable(SMIF_Type *base, cy_en_smif_cache_en_t cacheType)
DECL|Cy_SMIF_DeInit|function|void Cy_SMIF_DeInit(SMIF_Type *base)
DECL|Cy_SMIF_DeepSleepCallback|function|cy_en_syspm_status_t Cy_SMIF_DeepSleepCallback(cy_stc_syspm_callback_params_t *callbackParams)
DECL|Cy_SMIF_Enable|function|void Cy_SMIF_Enable(SMIF_Type *base, cy_stc_smif_context_t *context)
DECL|Cy_SMIF_Encrypt|function|cy_en_smif_status_t Cy_SMIF_Encrypt(SMIF_Type *base, uint32_t address, uint8_t data[], uint32_t size, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_GetMode|function|cy_en_smif_mode_t Cy_SMIF_GetMode(SMIF_Type const *base)
DECL|Cy_SMIF_GetTxfrStatus|function|uint32_t Cy_SMIF_GetTxfrStatus(SMIF_Type *base, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_HibernateCallback|function|cy_en_syspm_status_t Cy_SMIF_HibernateCallback(cy_stc_syspm_callback_params_t *callbackParams)
DECL|Cy_SMIF_Init|function|cy_en_smif_status_t Cy_SMIF_Init(SMIF_Type *base, cy_stc_smif_config_t const *config, uint32_t timeout, cy_stc_smif_context_t *context)
DECL|Cy_SMIF_ReceiveDataBlocking|function|cy_en_smif_status_t Cy_SMIF_ReceiveDataBlocking(SMIF_Type *base, uint8_t *rxBuffer, uint32_t size, cy_en_smif_txfr_width_t transferWidth, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_ReceiveData|function|cy_en_smif_status_t Cy_SMIF_ReceiveData(SMIF_Type *base, uint8_t *rxBuffer, uint32_t size, cy_en_smif_txfr_width_t transferWidth, cy_smif_event_cb_t RxCmpltCb,
DECL|Cy_SMIF_SendDummyCycles|function|cy_en_smif_status_t Cy_SMIF_SendDummyCycles(SMIF_Type *base, uint32_t cycles)
DECL|Cy_SMIF_SetDataSelect|function|void Cy_SMIF_SetDataSelect(SMIF_Type *base, cy_en_smif_slave_select_t slaveSelect, cy_en_smif_data_select_t dataSelect)
DECL|Cy_SMIF_SetMode|function|void Cy_SMIF_SetMode(SMIF_Type *base, cy_en_smif_mode_t mode)
DECL|Cy_SMIF_TransmitCommand|function|cy_en_smif_status_t Cy_SMIF_TransmitCommand(SMIF_Type *base, uint8_t cmd, cy_en_smif_txfr_width_t cmdTxfrWidth, uint8_t const cmdParam[], uint32_t paramSize,
DECL|Cy_SMIF_TransmitDataBlocking|function|cy_en_smif_status_t Cy_SMIF_TransmitDataBlocking(SMIF_Type *base, uint8_t *txBuffer, uint32_t size, cy_en_smif_txfr_width_t transferWidth, cy_stc_smif_context_t const *context)
DECL|Cy_SMIF_TransmitData|function|cy_en_smif_status_t Cy_SMIF_TransmitData(SMIF_Type *base, uint8_t* txBuffer, uint32_t size, cy_en_smif_txfr_width_t transferWidth, cy_smif_event_cb_t TxCmpltCb,