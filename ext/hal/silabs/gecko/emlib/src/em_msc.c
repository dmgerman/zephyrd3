DECL|EFM_ASSERT|macro|EFM_ASSERT
DECL|EFM_ASSERT|macro|EFM_ASSERT
DECL|ERRATA_FIX_FLASH_E201_EN|macro|ERRATA_FIX_FLASH_E201_EN
DECL|MSC_Deinit|function|void MSC_Deinit(void)
DECL|MSC_ErasePage|function|MSC_Status_TypeDef MSC_ErasePage(uint32_t *startAddress)
DECL|MSC_ExecConfigSet|function|void MSC_ExecConfigSet(MSC_ExecConfig_TypeDef *execConfig)
DECL|MSC_Init|function|void MSC_Init(void)
DECL|MSC_LoadVerifyAddress|function|MSC_Status_TypeDef MSC_LoadVerifyAddress(uint32_t* address)
DECL|MSC_LoadWriteData|function|MSC_Status_TypeDef MSC_LoadWriteData(uint32_t* data, uint32_t numWords, MSC_WriteStrategy_Typedef writeStrategy)
DECL|MSC_MassErase|function|MSC_Status_TypeDef MSC_MassErase(void)
DECL|MSC_WriteStrategy_Typedef|typedef|} MSC_WriteStrategy_Typedef;
DECL|MSC_WriteWordFast|function|MSC_Status_TypeDef MSC_WriteWordFast(uint32_t *address, void const *data, uint32_t numBytes)
DECL|MSC_WriteWordI|function|MSC_Status_TypeDef MSC_WriteWordI(uint32_t *address, void const *data, uint32_t numBytes, MSC_WriteStrategy_Typedef writeStrategy)
DECL|MSC_WriteWord|function|MSC_Status_TypeDef MSC_WriteWord(uint32_t *address, void const *data, uint32_t numBytes)
DECL|WORDS_PER_DATA_PHASE|macro|WORDS_PER_DATA_PHASE
DECL|WORDS_PER_DATA_PHASE|macro|WORDS_PER_DATA_PHASE
DECL|mscRfAssertEFM|function|void mscRfAssertEFM(const char *file, int line)
DECL|mscWriteFast|enumerator|mscWriteFast,
DECL|mscWriteIntSafe|enumerator|mscWriteIntSafe,
