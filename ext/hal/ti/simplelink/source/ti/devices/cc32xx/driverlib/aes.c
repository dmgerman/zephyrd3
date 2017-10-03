DECL|AESAuthDataLengthSet|function|AESAuthDataLengthSet(uint32_t ui32Base, uint32_t ui32Length)
DECL|AESConfigSet|function|AESConfigSet(uint32_t ui32Base, uint32_t ui32Config)
DECL|AESDMADisable|function|AESDMADisable(uint32_t ui32Base, uint32_t ui32Flags)
DECL|AESDMAEnable|function|AESDMAEnable(uint32_t ui32Base, uint32_t ui32Flags)
DECL|AESDataLengthSet|function|AESDataLengthSet(uint32_t ui32Base, uint64_t ui64Length)
DECL|AESDataMAC|function|AESDataMAC(uint32_t ui32Base, uint8_t *pui8Src, uint32_t ui32Length, uint8_t *pui8Tag)
DECL|AESDataProcessAE|function|AESDataProcessAE(uint32_t ui32Base, uint8_t *pui8Src, uint8_t *pui8Dest, uint32_t ui32Length, uint8_t *pui8AuthSrc, uint32_t ui32AuthLength, uint8_t *pui8Tag)
DECL|AESDataProcess|function|AESDataProcess(uint32_t ui32Base, uint8_t *pui8Src, uint8_t *pui8Dest, uint32_t ui32Length)
DECL|AESDataReadNonBlocking|function|AESDataReadNonBlocking(uint32_t ui32Base, uint8_t *pui8Dest, uint8_t ui8Length)
DECL|AESDataRead|function|AESDataRead(uint32_t ui32Base, uint8_t *pui8Dest, uint8_t ui8Length)
DECL|AESDataWriteNonBlocking|function|AESDataWriteNonBlocking(uint32_t ui32Base, uint8_t *pui8Src, uint8_t ui8Length)
DECL|AESDataWrite|function|AESDataWrite(uint32_t ui32Base, uint8_t *pui8Src, uint8_t ui8Length)
DECL|AESIVGet|function|AESIVGet(uint32_t ui32Base, uint8_t *pui8IVdata)
DECL|AESIVSet|function|AESIVSet(uint32_t ui32Base, uint8_t *pui8IVdata)
DECL|AESIntClear|function|AESIntClear(uint32_t ui32Base, uint32_t ui32IntFlags)
DECL|AESIntDisable|function|AESIntDisable(uint32_t ui32Base, uint32_t ui32IntFlags)
DECL|AESIntEnable|function|AESIntEnable(uint32_t ui32Base, uint32_t ui32IntFlags)
DECL|AESIntRegister|function|AESIntRegister(uint32_t ui32Base, void(*pfnHandler)(void))
DECL|AESIntStatus|function|AESIntStatus(uint32_t ui32Base, bool bMasked)
DECL|AESIntUnregister|function|AESIntUnregister(uint32_t ui32Base)
DECL|AESKey1Set|function|AESKey1Set(uint32_t ui32Base, uint8_t *pui8Key, uint32_t ui32Keysize)
DECL|AESKey2Set|function|AESKey2Set(uint32_t ui32Base, uint8_t *pui8Key, uint32_t ui32Keysize)
DECL|AESKey3Set|function|AESKey3Set(uint32_t ui32Base, uint8_t *pui8Key)
DECL|AESTagRead|function|AESTagRead(uint32_t ui32Base, uint8_t *pui8TagData)
DECL|AES_BLOCK_SIZE_IN_BYTES|macro|AES_BLOCK_SIZE_IN_BYTES
