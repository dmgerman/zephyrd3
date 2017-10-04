DECL|AES256_clearErrorFlag|function|void AES256_clearErrorFlag(uint32_t moduleInstance)
DECL|AES256_clearInterruptFlag|function|void AES256_clearInterruptFlag(uint32_t moduleInstance)
DECL|AES256_decryptData|function|void AES256_decryptData(uint32_t moduleInstance, const uint8_t * data, uint8_t * decryptedData)
DECL|AES256_disableInterrupt|function|void AES256_disableInterrupt(uint32_t moduleInstance)
DECL|AES256_enableInterrupt|function|void AES256_enableInterrupt(uint32_t moduleInstance)
DECL|AES256_encryptData|function|void AES256_encryptData(uint32_t moduleInstance, const uint8_t * data, uint8_t * encryptedData)
DECL|AES256_getDataOut|function|bool AES256_getDataOut(uint32_t moduleInstance, uint8_t *outputData)
DECL|AES256_getErrorFlagStatus|function|uint32_t AES256_getErrorFlagStatus(uint32_t moduleInstance)
DECL|AES256_getInterruptFlagStatus|function|uint32_t AES256_getInterruptFlagStatus(uint32_t moduleInstance)
DECL|AES256_getInterruptStatus|function|uint32_t AES256_getInterruptStatus(uint32_t moduleInstance)
DECL|AES256_isBusy|function|bool AES256_isBusy(uint32_t moduleInstance)
DECL|AES256_registerInterrupt|function|void AES256_registerInterrupt(uint32_t moduleInstance, void (*intHandler)(void))
DECL|AES256_reset|function|void AES256_reset(uint32_t moduleInstance)
DECL|AES256_setCipherKey|function|bool AES256_setCipherKey(uint32_t moduleInstance, const uint8_t * cipherKey, uint_fast16_t keyLength)
DECL|AES256_setDecipherKey|function|bool AES256_setDecipherKey(uint32_t moduleInstance, const uint8_t * cipherKey, uint_fast16_t keyLength)
DECL|AES256_startDecryptData|function|void AES256_startDecryptData(uint32_t moduleInstance, const uint8_t * data)
DECL|AES256_startEncryptData|function|void AES256_startEncryptData(uint32_t moduleInstance, const uint8_t * data)
DECL|AES256_startSetDecipherKey|function|bool AES256_startSetDecipherKey(uint32_t moduleInstance, const uint8_t * cipherKey, uint_fast16_t keyLength)
DECL|AES256_unregisterInterrupt|function|void AES256_unregisterInterrupt(uint32_t moduleInstance)
