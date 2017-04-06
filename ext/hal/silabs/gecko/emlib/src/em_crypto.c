DECL|CRYPTO_AES_BLOCKSIZE|macro|CRYPTO_AES_BLOCKSIZE
DECL|CRYPTO_AES_CBC128|function|void CRYPTO_AES_CBC128(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_CBC256|function|void CRYPTO_AES_CBC256(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_CBCx|function|static void CRYPTO_AES_CBCx(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_CFB128|function|void CRYPTO_AES_CFB128(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_CFB256|function|void CRYPTO_AES_CFB256(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_CFBx|function|static void CRYPTO_AES_CFBx(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_CTR128|function|void CRYPTO_AES_CTR128(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_CTR256|function|void CRYPTO_AES_CTR256(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_CTRUpdate32Bit|function|void CRYPTO_AES_CTRUpdate32Bit(uint8_t * ctr)
DECL|CRYPTO_AES_CTRx|function|static void CRYPTO_AES_CTRx(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_DecryptKey128|function|void CRYPTO_AES_DecryptKey128(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in)
DECL|CRYPTO_AES_DecryptKey256|function|void CRYPTO_AES_DecryptKey256(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in)
DECL|CRYPTO_AES_ECB128|function|void CRYPTO_AES_ECB128(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_ECB256|function|void CRYPTO_AES_ECB256(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_ECBx|function|static void CRYPTO_AES_ECBx(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_OFB128|function|void CRYPTO_AES_OFB128(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_OFB256|function|void CRYPTO_AES_OFB256(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_OFBx|function|static void CRYPTO_AES_OFBx(CRYPTO_TypeDef * crypto, uint8_t * out, const uint8_t * in, unsigned int len, const uint8_t * key,
DECL|CRYPTO_AES_ProcessLoop|function|static inline void CRYPTO_AES_ProcessLoop(CRYPTO_TypeDef * crypto, uint32_t len, CRYPTO_DataReg_TypeDef inReg, uint32_t * in, CRYPTO_DataReg_TypeDef outReg,
DECL|CRYPTO_DataWriteVariableSize|function|void CRYPTO_DataWriteVariableSize(CRYPTO_DataReg_TypeDef dataReg, const CRYPTO_Data_TypeDef val, int valSize)
DECL|CRYPTO_INSTRUCTIONS_MAX|macro|CRYPTO_INSTRUCTIONS_MAX
DECL|CRYPTO_INSTRUCTIONS_PER_REG|macro|CRYPTO_INSTRUCTIONS_PER_REG
DECL|CRYPTO_INSTRUCTION_REGS|macro|CRYPTO_INSTRUCTION_REGS
DECL|CRYPTO_KeyRead|function|void CRYPTO_KeyRead(CRYPTO_TypeDef * crypto, CRYPTO_KeyBuf_TypeDef val, CRYPTO_KeyWidth_TypeDef keyWidth)
DECL|CRYPTO_ModulusSet|function|void CRYPTO_ModulusSet(CRYPTO_TypeDef * crypto, CRYPTO_ModulusId_TypeDef modulusId)
DECL|CRYPTO_Mul|function|void CRYPTO_Mul(CRYPTO_TypeDef * crypto, uint32_t * A, int aSize, uint32_t * B, int bSize, uint32_t * R, int rSize)
DECL|CRYPTO_SHA1_BLOCK_SIZE_IN_32BIT_WORDS|macro|CRYPTO_SHA1_BLOCK_SIZE_IN_32BIT_WORDS
DECL|CRYPTO_SHA1_BLOCK_SIZE_IN_BITS|macro|CRYPTO_SHA1_BLOCK_SIZE_IN_BITS
DECL|CRYPTO_SHA1_BLOCK_SIZE_IN_BYTES|macro|CRYPTO_SHA1_BLOCK_SIZE_IN_BYTES
DECL|CRYPTO_SHA1_DIGEST_SIZE_IN_32BIT_WORDS|macro|CRYPTO_SHA1_DIGEST_SIZE_IN_32BIT_WORDS
DECL|CRYPTO_SHA256_BLOCK_SIZE_IN_32BIT_WORDS|macro|CRYPTO_SHA256_BLOCK_SIZE_IN_32BIT_WORDS
DECL|CRYPTO_SHA256_BLOCK_SIZE_IN_BITS|macro|CRYPTO_SHA256_BLOCK_SIZE_IN_BITS
DECL|CRYPTO_SHA256_BLOCK_SIZE_IN_BYTES|macro|CRYPTO_SHA256_BLOCK_SIZE_IN_BYTES
DECL|CRYPTO_SHA256_DIGEST_SIZE_IN_32BIT_WORDS|macro|CRYPTO_SHA256_DIGEST_SIZE_IN_32BIT_WORDS
DECL|CRYPTO_SHA_1|function|void CRYPTO_SHA_1(CRYPTO_TypeDef * crypto, const uint8_t * msg, uint64_t msgLen, CRYPTO_SHA1_Digest_TypeDef msgDigest)
DECL|CRYPTO_SHA_256|function|void CRYPTO_SHA_256(CRYPTO_TypeDef * crypto, const uint8_t * msg, uint64_t msgLen, CRYPTO_SHA256_Digest_TypeDef msgDigest)
DECL|PARTIAL_OPERAND_WIDTH_IN_32BIT_WORDS|macro|PARTIAL_OPERAND_WIDTH_IN_32BIT_WORDS
DECL|PARTIAL_OPERAND_WIDTH_IN_BYTES|macro|PARTIAL_OPERAND_WIDTH_IN_BYTES
DECL|PARTIAL_OPERAND_WIDTH_LOG2|macro|PARTIAL_OPERAND_WIDTH_LOG2
DECL|PARTIAL_OPERAND_WIDTH_MASK|macro|PARTIAL_OPERAND_WIDTH_MASK
DECL|PARTIAL_OPERAND_WIDTH|macro|PARTIAL_OPERAND_WIDTH
DECL|SWAP32|macro|SWAP32
DECL|cryptoBigintIncrement|function|__STATIC_INLINE void cryptoBigintIncrement(uint32_t * words32bits, int num32bitWords)
DECL|cryptoBigintZeroize|function|__STATIC_INLINE void cryptoBigintZeroize(uint32_t * words32bits, int num32bitWords)
