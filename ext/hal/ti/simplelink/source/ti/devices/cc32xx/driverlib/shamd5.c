DECL|SHAMD5ConfigSet|function|SHAMD5ConfigSet(uint32_t ui32Base, uint32_t ui32CryptoMode, uint8_t algConstFlag, uint8_t closeHashFlag, uint8_t HMACKeyFlag, uint8_t HMACOuterHashFlag)
DECL|SHAMD5DMADisable|function|SHAMD5DMADisable(uint32_t ui32Base)
DECL|SHAMD5DMAEnable|function|SHAMD5DMAEnable(uint32_t ui32Base)
DECL|SHAMD5DataLengthSet|function|SHAMD5DataLengthSet(uint32_t ui32Base, uint32_t ui32Length)
DECL|SHAMD5DataProcess|function|SHAMD5DataProcess(uint32_t ui32Base, uint8_t *pui8DataSrc, uint32_t ui32DataLength, uint8_t *pui8HashResult)
DECL|SHAMD5DataWriteMultiple|function|void SHAMD5DataWriteMultiple(uint32_t ui32Base, uint8_t *pui8DataSrc, uint32_t ui32DataLength)
DECL|SHAMD5DataWriteNonBlocking|function|SHAMD5DataWriteNonBlocking(uint32_t ui32Base, uint8_t *pui8Src)
DECL|SHAMD5DataWrite|function|SHAMD5DataWrite(uint32_t ui32Base, uint8_t *pui8Src)
DECL|SHAMD5HMACKeySet|function|SHAMD5HMACKeySet(uint32_t ui32Base, uint8_t *pui8Src)
DECL|SHAMD5HMACPPKeyGenerate|function|SHAMD5HMACPPKeyGenerate(uint32_t ui32Base, uint8_t *pui8Key, uint8_t *pui8PPKey)
DECL|SHAMD5HMACPPKeySet|function|SHAMD5HMACPPKeySet(uint32_t ui32Base, uint8_t *pui8Src)
DECL|SHAMD5HMACProcess|function|SHAMD5HMACProcess(uint32_t ui32Base, uint8_t *pui8DataSrc, uint32_t ui32DataLength, uint8_t *pui8HashResult)
DECL|SHAMD5IntClear|function|SHAMD5IntClear(uint32_t ui32Base, uint32_t ui32IntFlags)
DECL|SHAMD5IntDisable|function|SHAMD5IntDisable(uint32_t ui32Base, uint32_t ui32IntFlags)
DECL|SHAMD5IntEnable|function|SHAMD5IntEnable(uint32_t ui32Base, uint32_t ui32IntFlags)
DECL|SHAMD5IntRegister|function|SHAMD5IntRegister(uint32_t ui32Base, void(*pfnHandler)(void))
DECL|SHAMD5IntStatus|function|SHAMD5IntStatus(uint32_t ui32Base, bool bMasked)
DECL|SHAMD5IntUnregister|function|SHAMD5IntUnregister(uint32_t ui32Base)
DECL|SHAMD5ReadDigestCount|function|void SHAMD5ReadDigestCount(uint32_t ui32Base, uint32_t *count)
DECL|SHAMD5ResultRead|function|SHAMD5ResultRead(uint32_t ui32Base, uint8_t *pui8Dest)
DECL|SHAMD5ResultWrite|function|SHAMD5ResultWrite(uint32_t ui32Base, uint8_t *pui8Src)
DECL|SHAMD5WriteDigestCount|function|void SHAMD5WriteDigestCount(uint32_t ui32Base, uint32_t count)
