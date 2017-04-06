DECL|AES_CBC128|function|__STATIC_INLINE void AES_CBC128(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, const uint8_t * iv,
DECL|AES_CBC256|function|__STATIC_INLINE void AES_CBC256(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, const uint8_t * iv,
DECL|AES_CFB128|function|__STATIC_INLINE void AES_CFB128(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, const uint8_t * iv,
DECL|AES_CFB256|function|__STATIC_INLINE void AES_CFB256(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, const uint8_t * iv,
DECL|AES_CTR128|function|__STATIC_INLINE void AES_CTR128(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, uint8_t * ctr,
DECL|AES_CTR256|function|__STATIC_INLINE void AES_CTR256(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, uint8_t * ctr,
DECL|AES_CTRUpdate32Bit|function|__STATIC_INLINE void AES_CTRUpdate32Bit(uint8_t * ctr)
DECL|AES_DecryptKey128|function|__STATIC_INLINE void AES_DecryptKey128(uint8_t * out, const uint8_t * in)
DECL|AES_DecryptKey256|function|__STATIC_INLINE void AES_DecryptKey256(uint8_t * out, const uint8_t * in)
DECL|AES_ECB128|function|__STATIC_INLINE void AES_ECB128(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, bool encrypt)
DECL|AES_ECB256|function|__STATIC_INLINE void AES_ECB256(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, bool encrypt)
DECL|AES_OFB128|function|__STATIC_INLINE void AES_OFB128(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, const uint8_t * iv)
DECL|AES_OFB256|function|__STATIC_INLINE void AES_OFB256(uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key, const uint8_t * iv)
DECL|CRYPTO_AES_CtrFuncPtr_TypeDef|typedef|typedef void (*CRYPTO_AES_CtrFuncPtr_TypeDef)(uint8_t * ctr);
DECL|CRYPTO_BurstFromCrypto|function|__STATIC_INLINE void CRYPTO_BurstFromCrypto(volatile uint32_t * reg, uint32_t * val)
DECL|CRYPTO_BurstToCrypto|function|__STATIC_INLINE void CRYPTO_BurstToCrypto(volatile uint32_t * reg, const uint32_t * val)
DECL|CRYPTO_CarryIsSet|function|__STATIC_INLINE bool CRYPTO_CarryIsSet(CRYPTO_TypeDef *crypto)
DECL|CRYPTO_DATA260_SIZE_IN_32BIT_WORDS|macro|CRYPTO_DATA260_SIZE_IN_32BIT_WORDS
DECL|CRYPTO_DATA_SIZE_IN_32BIT_WORDS|macro|CRYPTO_DATA_SIZE_IN_32BIT_WORDS
DECL|CRYPTO_DATA_SIZE_IN_BITS|macro|CRYPTO_DATA_SIZE_IN_BITS
DECL|CRYPTO_DATA_SIZE_IN_BYTES|macro|CRYPTO_DATA_SIZE_IN_BYTES
DECL|CRYPTO_DDATA0_260_BITS_READ|macro|CRYPTO_DDATA0_260_BITS_READ
DECL|CRYPTO_DDATA0_260_BITS_WRITE|macro|CRYPTO_DDATA0_260_BITS_WRITE
DECL|CRYPTO_DDATA_SIZE_IN_32BIT_WORDS|macro|CRYPTO_DDATA_SIZE_IN_32BIT_WORDS
DECL|CRYPTO_DDATA_SIZE_IN_BITS|macro|CRYPTO_DDATA_SIZE_IN_BITS
DECL|CRYPTO_DDATA_SIZE_IN_BYTES|macro|CRYPTO_DDATA_SIZE_IN_BYTES
DECL|CRYPTO_DData0Read260|function|__STATIC_INLINE void CRYPTO_DData0Read260(CRYPTO_TypeDef *crypto, CRYPTO_Data260_TypeDef val)
DECL|CRYPTO_DData0Write260|function|__STATIC_INLINE void CRYPTO_DData0Write260(CRYPTO_TypeDef *crypto, const CRYPTO_Data260_TypeDef val)
DECL|CRYPTO_DData0_4LSBitsRead|function|__STATIC_INLINE uint8_t CRYPTO_DData0_4LSBitsRead(CRYPTO_TypeDef *crypto)
DECL|CRYPTO_DData1_MSBitRead|function|__STATIC_INLINE bool CRYPTO_DData1_MSBitRead(CRYPTO_TypeDef *crypto)
DECL|CRYPTO_DDataPtr_TypeDef|typedef|typedef uint32_t* CRYPTO_DDataPtr_TypeDef;
DECL|CRYPTO_DDataRead|function|__STATIC_INLINE void CRYPTO_DDataRead(CRYPTO_DDataReg_TypeDef ddataReg, CRYPTO_DData_TypeDef val)
DECL|CRYPTO_DDataReg_TypeDef|typedef|typedef volatile uint32_t* CRYPTO_DDataReg_TypeDef;
DECL|CRYPTO_DDataWrite|function|__STATIC_INLINE void CRYPTO_DDataWrite(CRYPTO_DDataReg_TypeDef ddataReg, const CRYPTO_DData_TypeDef val)
DECL|CRYPTO_DData_TypeDef|typedef|typedef uint32_t CRYPTO_DData_TypeDef[CRYPTO_DDATA_SIZE_IN_32BIT_WORDS];
DECL|CRYPTO_Data260_TypeDef|typedef|typedef uint32_t CRYPTO_Data260_TypeDef[CRYPTO_DATA260_SIZE_IN_32BIT_WORDS];
DECL|CRYPTO_DataRead|function|__STATIC_INLINE void CRYPTO_DataRead(CRYPTO_DataReg_TypeDef dataReg, CRYPTO_Data_TypeDef val)
DECL|CRYPTO_DataReg_TypeDef|typedef|typedef volatile uint32_t* CRYPTO_DataReg_TypeDef;
DECL|CRYPTO_DataWrite|function|__STATIC_INLINE void CRYPTO_DataWrite(CRYPTO_DataReg_TypeDef dataReg, const CRYPTO_Data_TypeDef val)
DECL|CRYPTO_Data_TypeDef|typedef|typedef uint32_t CRYPTO_Data_TypeDef[CRYPTO_DATA_SIZE_IN_32BIT_WORDS];
DECL|CRYPTO_EXECUTE_10|macro|CRYPTO_EXECUTE_10
DECL|CRYPTO_EXECUTE_11|macro|CRYPTO_EXECUTE_11
DECL|CRYPTO_EXECUTE_12|macro|CRYPTO_EXECUTE_12
DECL|CRYPTO_EXECUTE_13|macro|CRYPTO_EXECUTE_13
DECL|CRYPTO_EXECUTE_14|macro|CRYPTO_EXECUTE_14
DECL|CRYPTO_EXECUTE_15|macro|CRYPTO_EXECUTE_15
DECL|CRYPTO_EXECUTE_16|macro|CRYPTO_EXECUTE_16
DECL|CRYPTO_EXECUTE_17|macro|CRYPTO_EXECUTE_17
DECL|CRYPTO_EXECUTE_18|macro|CRYPTO_EXECUTE_18
DECL|CRYPTO_EXECUTE_19|macro|CRYPTO_EXECUTE_19
DECL|CRYPTO_EXECUTE_1|macro|CRYPTO_EXECUTE_1
DECL|CRYPTO_EXECUTE_20|macro|CRYPTO_EXECUTE_20
DECL|CRYPTO_EXECUTE_2|macro|CRYPTO_EXECUTE_2
DECL|CRYPTO_EXECUTE_3|macro|CRYPTO_EXECUTE_3
DECL|CRYPTO_EXECUTE_4|macro|CRYPTO_EXECUTE_4
DECL|CRYPTO_EXECUTE_5|macro|CRYPTO_EXECUTE_5
DECL|CRYPTO_EXECUTE_6|macro|CRYPTO_EXECUTE_6
DECL|CRYPTO_EXECUTE_7|macro|CRYPTO_EXECUTE_7
DECL|CRYPTO_EXECUTE_8|macro|CRYPTO_EXECUTE_8
DECL|CRYPTO_EXECUTE_9|macro|CRYPTO_EXECUTE_9
DECL|CRYPTO_INSTRUCTIONSEQUENSE_DEFAULT|macro|CRYPTO_INSTRUCTIONSEQUENSE_DEFAULT
DECL|CRYPTO_IncWidthSet|function|__STATIC_INLINE void CRYPTO_IncWidthSet(CRYPTO_TypeDef *crypto, CRYPTO_IncWidth_TypeDef incWidth)
DECL|CRYPTO_IncWidth_TypeDef|typedef|} CRYPTO_IncWidth_TypeDef;
DECL|CRYPTO_InstructionSequenceDone|function|__STATIC_INLINE bool CRYPTO_InstructionSequenceDone(CRYPTO_TypeDef *crypto)
DECL|CRYPTO_InstructionSequenceExecute|function|__STATIC_INLINE void CRYPTO_InstructionSequenceExecute(CRYPTO_TypeDef *crypto)
DECL|CRYPTO_InstructionSequenceLoad|function|void CRYPTO_InstructionSequenceLoad(CRYPTO_TypeDef *crypto, const CRYPTO_InstructionSequence_TypeDef instructionSequence)
DECL|CRYPTO_InstructionSequenceWait|function|__STATIC_INLINE void CRYPTO_InstructionSequenceWait(CRYPTO_TypeDef *crypto)
DECL|CRYPTO_InstructionSequence_TypeDef|typedef|typedef uint8_t CRYPTO_InstructionSequence_TypeDef[CRYPTO_MAX_SEQUENCE_INSTRUCTIONS];
DECL|CRYPTO_InstructionWait|function|__STATIC_INLINE void CRYPTO_InstructionWait(CRYPTO_TypeDef *crypto)
DECL|CRYPTO_IntClear|function|__STATIC_INLINE void CRYPTO_IntClear(CRYPTO_TypeDef *crypto, uint32_t flags)
DECL|CRYPTO_IntDisable|function|__STATIC_INLINE void CRYPTO_IntDisable(CRYPTO_TypeDef *crypto, uint32_t flags)
DECL|CRYPTO_IntEnable|function|__STATIC_INLINE void CRYPTO_IntEnable(CRYPTO_TypeDef *crypto, uint32_t flags)
DECL|CRYPTO_IntGetEnabled|function|__STATIC_INLINE uint32_t CRYPTO_IntGetEnabled(CRYPTO_TypeDef *crypto)
DECL|CRYPTO_IntGet|function|__STATIC_INLINE uint32_t CRYPTO_IntGet(CRYPTO_TypeDef *crypto)
DECL|CRYPTO_IntSet|function|__STATIC_INLINE void CRYPTO_IntSet(CRYPTO_TypeDef *crypto, uint32_t flags)
DECL|CRYPTO_KEYBUF_SIZE_IN_32BIT_WORDS|macro|CRYPTO_KEYBUF_SIZE_IN_32BIT_WORDS
DECL|CRYPTO_KEYBUF_SIZE_IN_BITS|macro|CRYPTO_KEYBUF_SIZE_IN_BITS
DECL|CRYPTO_KEYBUF_SIZE_IN_BYTES|macro|CRYPTO_KEYBUF_SIZE_IN_BYTES
DECL|CRYPTO_KeyBuf128Write|function|__STATIC_INLINE void CRYPTO_KeyBuf128Write(CRYPTO_TypeDef *crypto, const uint32_t * val)
DECL|CRYPTO_KeyBufWrite|function|__STATIC_INLINE void CRYPTO_KeyBufWrite(CRYPTO_TypeDef *crypto, CRYPTO_KeyBuf_TypeDef val, CRYPTO_KeyWidth_TypeDef keyWidth)
DECL|CRYPTO_KeyBuf_TypeDef|typedef|typedef uint32_t CRYPTO_KeyBuf_TypeDef[CRYPTO_KEYBUF_SIZE_IN_32BIT_WORDS];
DECL|CRYPTO_KeyWidth_TypeDef|typedef|} CRYPTO_KeyWidth_TypeDef;
DECL|CRYPTO_MAX_SEQUENCE_INSTRUCTIONS|macro|CRYPTO_MAX_SEQUENCE_INSTRUCTIONS
DECL|CRYPTO_ModulusId_TypeDef|typedef|} CRYPTO_ModulusId_TypeDef;
DECL|CRYPTO_MulOperandWidthSet|function|void CRYPTO_MulOperandWidthSet(CRYPTO_TypeDef *crypto, CRYPTO_MulOperandWidth_TypeDef mulOperandWidth)
DECL|CRYPTO_MulOperandWidth_TypeDef|typedef|} CRYPTO_MulOperandWidth_TypeDef;
DECL|CRYPTO_QDATA_SIZE_IN_32BIT_WORDS|macro|CRYPTO_QDATA_SIZE_IN_32BIT_WORDS
DECL|CRYPTO_QDATA_SIZE_IN_BITS|macro|CRYPTO_QDATA_SIZE_IN_BITS
DECL|CRYPTO_QDATA_SIZE_IN_BYTES|macro|CRYPTO_QDATA_SIZE_IN_BYTES
DECL|CRYPTO_QDataRead|function|__STATIC_INLINE void CRYPTO_QDataRead(CRYPTO_QDataReg_TypeDef qdataReg, CRYPTO_QData_TypeDef val)
DECL|CRYPTO_QDataReg_TypeDef|typedef|typedef volatile uint32_t* CRYPTO_QDataReg_TypeDef;
DECL|CRYPTO_QDataWrite|function|__STATIC_INLINE void CRYPTO_QDataWrite(CRYPTO_QDataReg_TypeDef qdataReg, CRYPTO_QData_TypeDef val)
DECL|CRYPTO_QData_TypeDef|typedef|typedef uint32_t CRYPTO_QData_TypeDef[CRYPTO_QDATA_SIZE_IN_32BIT_WORDS];
DECL|CRYPTO_ResultWidthSet|function|void CRYPTO_ResultWidthSet(CRYPTO_TypeDef *crypto, CRYPTO_ResultWidth_TypeDef resultWidth)
DECL|CRYPTO_ResultWidth_TypeDef|typedef|} CRYPTO_ResultWidth_TypeDef;
DECL|CRYPTO_SEQ_LOAD_10|macro|CRYPTO_SEQ_LOAD_10
DECL|CRYPTO_SEQ_LOAD_11|macro|CRYPTO_SEQ_LOAD_11
DECL|CRYPTO_SEQ_LOAD_12|macro|CRYPTO_SEQ_LOAD_12
DECL|CRYPTO_SEQ_LOAD_13|macro|CRYPTO_SEQ_LOAD_13
DECL|CRYPTO_SEQ_LOAD_14|macro|CRYPTO_SEQ_LOAD_14
DECL|CRYPTO_SEQ_LOAD_15|macro|CRYPTO_SEQ_LOAD_15
DECL|CRYPTO_SEQ_LOAD_16|macro|CRYPTO_SEQ_LOAD_16
DECL|CRYPTO_SEQ_LOAD_17|macro|CRYPTO_SEQ_LOAD_17
DECL|CRYPTO_SEQ_LOAD_18|macro|CRYPTO_SEQ_LOAD_18
DECL|CRYPTO_SEQ_LOAD_19|macro|CRYPTO_SEQ_LOAD_19
DECL|CRYPTO_SEQ_LOAD_1|macro|CRYPTO_SEQ_LOAD_1
DECL|CRYPTO_SEQ_LOAD_20|macro|CRYPTO_SEQ_LOAD_20
DECL|CRYPTO_SEQ_LOAD_2|macro|CRYPTO_SEQ_LOAD_2
DECL|CRYPTO_SEQ_LOAD_3|macro|CRYPTO_SEQ_LOAD_3
DECL|CRYPTO_SEQ_LOAD_4|macro|CRYPTO_SEQ_LOAD_4
DECL|CRYPTO_SEQ_LOAD_5|macro|CRYPTO_SEQ_LOAD_5
DECL|CRYPTO_SEQ_LOAD_6|macro|CRYPTO_SEQ_LOAD_6
DECL|CRYPTO_SEQ_LOAD_7|macro|CRYPTO_SEQ_LOAD_7
DECL|CRYPTO_SEQ_LOAD_8|macro|CRYPTO_SEQ_LOAD_8
DECL|CRYPTO_SEQ_LOAD_9|macro|CRYPTO_SEQ_LOAD_9
DECL|CRYPTO_SHA1_DIGEST_SIZE_IN_BITS|macro|CRYPTO_SHA1_DIGEST_SIZE_IN_BITS
DECL|CRYPTO_SHA1_DIGEST_SIZE_IN_BYTES|macro|CRYPTO_SHA1_DIGEST_SIZE_IN_BYTES
DECL|CRYPTO_SHA1_Digest_TypeDef|typedef|typedef uint8_t CRYPTO_SHA1_Digest_TypeDef[CRYPTO_SHA1_DIGEST_SIZE_IN_BYTES];
DECL|CRYPTO_SHA256_DIGEST_SIZE_IN_BITS|macro|CRYPTO_SHA256_DIGEST_SIZE_IN_BITS
DECL|CRYPTO_SHA256_DIGEST_SIZE_IN_BYTES|macro|CRYPTO_SHA256_DIGEST_SIZE_IN_BYTES
DECL|CRYPTO_SHA256_Digest_TypeDef|typedef|typedef uint8_t CRYPTO_SHA256_Digest_TypeDef[CRYPTO_SHA256_DIGEST_SIZE_IN_BYTES];
DECL|EM_CRYPTO_H|macro|EM_CRYPTO_H
DECL|cryptoInc1byte|enumerator|cryptoInc1byte = CRYPTO_CTRL_INCWIDTH_INCWIDTH1, /**< inc width is 1 byte*/
DECL|cryptoInc2byte|enumerator|cryptoInc2byte = CRYPTO_CTRL_INCWIDTH_INCWIDTH2, /**< inc width is 2 byte*/
DECL|cryptoInc3byte|enumerator|cryptoInc3byte = CRYPTO_CTRL_INCWIDTH_INCWIDTH3, /**< inc width is 3 byte*/
DECL|cryptoInc4byte|enumerator|cryptoInc4byte = CRYPTO_CTRL_INCWIDTH_INCWIDTH4 /**< inc width is 4 byte*/
DECL|cryptoKey128Bits|enumerator|cryptoKey128Bits = 8, /**< Key width is 128 bits*/
DECL|cryptoKey256Bits|enumerator|cryptoKey256Bits = 16, /**< Key width is 256 bits*/
DECL|cryptoModulusBin128|enumerator|cryptoModulusBin128 = CRYPTO_WAC_MODULUS_BIN128, /**< Generic 128 bit modulus 2^128 */
DECL|cryptoModulusBin256|enumerator|cryptoModulusBin256 = CRYPTO_WAC_MODULUS_BIN256, /**< Generic 256 bit modulus 2^256 */
DECL|cryptoModulusEccB163KOrder|enumerator|cryptoModulusEccB163KOrder = CRYPTO_WAC_MODULUS_ECCBIN163KN, /**< ECC B163K order modulus */
DECL|cryptoModulusEccB163Order|enumerator|cryptoModulusEccB163Order = CRYPTO_WAC_MODULUS_ECCBIN163N, /**< ECC B163 order modulus */
DECL|cryptoModulusEccB163|enumerator|cryptoModulusEccB163 = CRYPTO_WAC_MODULUS_ECCBIN163P, /**< ECC B163 prime modulus = 2^163 + 2^7 + 2^6 + 2^3 + 1 */
DECL|cryptoModulusEccB233KOrder|enumerator|cryptoModulusEccB233KOrder = CRYPTO_WAC_MODULUS_ECCBIN233KN, /**< ECC B233K order modulus */
DECL|cryptoModulusEccB233Order|enumerator|cryptoModulusEccB233Order = CRYPTO_WAC_MODULUS_ECCBIN233N, /**< ECC B233 order modulus */
DECL|cryptoModulusEccB233|enumerator|cryptoModulusEccB233 = CRYPTO_WAC_MODULUS_ECCBIN233P, /**< ECC B233 prime modulus = 2^233 + 2^74 + 1 */
DECL|cryptoModulusEccP192Order|enumerator|cryptoModulusEccP192Order = CRYPTO_WAC_MODULUS_ECCPRIME192N /**< ECC P192 order modulus */
DECL|cryptoModulusEccP192|enumerator|cryptoModulusEccP192 = CRYPTO_WAC_MODULUS_ECCPRIME192P, /**< ECC P192 prime modulus = 2^192 - 2^64 - 1 */
DECL|cryptoModulusEccP224Order|enumerator|cryptoModulusEccP224Order = CRYPTO_WAC_MODULUS_ECCPRIME224N, /**< ECC P224 order modulus */
DECL|cryptoModulusEccP224|enumerator|cryptoModulusEccP224 = CRYPTO_WAC_MODULUS_ECCPRIME224P, /**< ECC P224 prime modulus = 2^224 - 2^96 - 1 */
DECL|cryptoModulusEccP256Order|enumerator|cryptoModulusEccP256Order = CRYPTO_WAC_MODULUS_ECCPRIME256N, /**< ECC P256 order modulus */
DECL|cryptoModulusEccP256|enumerator|cryptoModulusEccP256 = CRYPTO_WAC_MODULUS_ECCPRIME256P, /**< ECC P256 prime modulus = 2^256 - 2^224 + 2^192 + 2^96 - 1 */
DECL|cryptoModulusGcmBin128|enumerator|cryptoModulusGcmBin128 = CRYPTO_WAC_MODULUS_GCMBIN128, /**< GCM 128 bit modulus = 2^128 + 2^7 + 2^2 + 2 + 1 */
DECL|cryptoMulOperand128Bits|enumerator|cryptoMulOperand128Bits = CRYPTO_WAC_MULWIDTH_MUL128, /**< 128 bits operands */
DECL|cryptoMulOperand256Bits|enumerator|cryptoMulOperand256Bits = CRYPTO_WAC_MULWIDTH_MUL256, /**< 256 bits operands */
DECL|cryptoMulOperandModulusBits|enumerator|cryptoMulOperandModulusBits = CRYPTO_WAC_MULWIDTH_MULMOD /**< MUL operand width
DECL|cryptoResult128Bits|enumerator|cryptoResult128Bits = CRYPTO_WAC_RESULTWIDTH_128BIT, /**< Multiplication result width is 128 bits*/
DECL|cryptoResult256Bits|enumerator|cryptoResult256Bits = CRYPTO_WAC_RESULTWIDTH_256BIT, /**< Multiplication result width is 256 bits*/
DECL|cryptoResult260Bits|enumerator|cryptoResult260Bits = CRYPTO_WAC_RESULTWIDTH_260BIT /**< Multiplication result width is 260 bits*/
