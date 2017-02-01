DECL|AADLEN|member|uint32_t AADLEN:32; /**< bit: 0..31 Additional Authenticated Data Length */
DECL|AES_6149|macro|AES_6149
DECL|AES_AADLENR_AADLEN_Msk|macro|AES_AADLENR_AADLEN_Msk
DECL|AES_AADLENR_AADLEN_Pos|macro|AES_AADLENR_AADLEN_Pos
DECL|AES_AADLENR_AADLEN|macro|AES_AADLENR_AADLEN
DECL|AES_AADLENR_MASK|macro|AES_AADLENR_MASK
DECL|AES_AADLENR_Msk|macro|AES_AADLENR_Msk
DECL|AES_AADLENR_OFFSET|macro|AES_AADLENR_OFFSET
DECL|AES_AADLENR_Type|typedef|} AES_AADLENR_Type;
DECL|AES_AADLENR|member|__IO AES_AADLENR_Type AES_AADLENR; /**< Offset: 0x70 (R/W 32) Additional Authenticated Data Length Register */
DECL|AES_AADLENR|member|__IO uint32_t AES_AADLENR; /**< (AES Offset: 0x70) Additional Authenticated Data Length Register */
DECL|AES_CLENR_CLEN_Msk|macro|AES_CLENR_CLEN_Msk
DECL|AES_CLENR_CLEN_Pos|macro|AES_CLENR_CLEN_Pos
DECL|AES_CLENR_CLEN|macro|AES_CLENR_CLEN
DECL|AES_CLENR_MASK|macro|AES_CLENR_MASK
DECL|AES_CLENR_Msk|macro|AES_CLENR_Msk
DECL|AES_CLENR_OFFSET|macro|AES_CLENR_OFFSET
DECL|AES_CLENR_Type|typedef|} AES_CLENR_Type;
DECL|AES_CLENR|member|__IO AES_CLENR_Type AES_CLENR; /**< Offset: 0x74 (R/W 32) Plaintext/Ciphertext Length Register */
DECL|AES_CLENR|member|__IO uint32_t AES_CLENR; /**< (AES Offset: 0x74) Plaintext/Ciphertext Length Register */
DECL|AES_CR_MASK|macro|AES_CR_MASK
DECL|AES_CR_Msk|macro|AES_CR_Msk
DECL|AES_CR_OFFSET|macro|AES_CR_OFFSET
DECL|AES_CR_START_Msk|macro|AES_CR_START_Msk
DECL|AES_CR_START_Pos|macro|AES_CR_START_Pos
DECL|AES_CR_START|macro|AES_CR_START
DECL|AES_CR_SWRST_Msk|macro|AES_CR_SWRST_Msk
DECL|AES_CR_SWRST_Pos|macro|AES_CR_SWRST_Pos
DECL|AES_CR_SWRST|macro|AES_CR_SWRST
DECL|AES_CR_Type|typedef|} AES_CR_Type;
DECL|AES_CR|member|__O AES_CR_Type AES_CR; /**< Offset: 0x00 ( /W 32) Control Register */
DECL|AES_CR|member|__O uint32_t AES_CR; /**< (AES Offset: 0x00) Control Register */
DECL|AES_CTRR_CTR_Msk|macro|AES_CTRR_CTR_Msk
DECL|AES_CTRR_CTR_Pos|macro|AES_CTRR_CTR_Pos
DECL|AES_CTRR_CTR|macro|AES_CTRR_CTR
DECL|AES_CTRR_MASK|macro|AES_CTRR_MASK
DECL|AES_CTRR_Msk|macro|AES_CTRR_Msk
DECL|AES_CTRR_OFFSET|macro|AES_CTRR_OFFSET
DECL|AES_CTRR_Type|typedef|} AES_CTRR_Type;
DECL|AES_CTRR|member|__I AES_CTRR_Type AES_CTRR; /**< Offset: 0x98 (R/ 32) GCM Encryption Counter Value Register */
DECL|AES_CTRR|member|__I uint32_t AES_CTRR; /**< (AES Offset: 0x98) GCM Encryption Counter Value Register */
DECL|AES_GCMHR_H_Msk|macro|AES_GCMHR_H_Msk
DECL|AES_GCMHR_H_Pos|macro|AES_GCMHR_H_Pos
DECL|AES_GCMHR_H|macro|AES_GCMHR_H
DECL|AES_GCMHR_MASK|macro|AES_GCMHR_MASK
DECL|AES_GCMHR_Msk|macro|AES_GCMHR_Msk
DECL|AES_GCMHR_OFFSET|macro|AES_GCMHR_OFFSET
DECL|AES_GCMHR_Type|typedef|} AES_GCMHR_Type;
DECL|AES_GCMHR|member|__IO AES_GCMHR_Type AES_GCMHR[4]; /**< Offset: 0x9C (R/W 32) GCM H Word Register 0 */
DECL|AES_GCMHR|member|__IO uint32_t AES_GCMHR[4]; /**< (AES Offset: 0x9C) GCM H Word Register 0 */
DECL|AES_GHASHR_GHASH_Msk|macro|AES_GHASHR_GHASH_Msk
DECL|AES_GHASHR_GHASH_Pos|macro|AES_GHASHR_GHASH_Pos
DECL|AES_GHASHR_GHASH|macro|AES_GHASHR_GHASH
DECL|AES_GHASHR_MASK|macro|AES_GHASHR_MASK
DECL|AES_GHASHR_Msk|macro|AES_GHASHR_Msk
DECL|AES_GHASHR_OFFSET|macro|AES_GHASHR_OFFSET
DECL|AES_GHASHR_Type|typedef|} AES_GHASHR_Type;
DECL|AES_GHASHR|member|__IO AES_GHASHR_Type AES_GHASHR[4]; /**< Offset: 0x78 (R/W 32) GCM Intermediate Hash Word Register 0 */
DECL|AES_GHASHR|member|__IO uint32_t AES_GHASHR[4]; /**< (AES Offset: 0x78) GCM Intermediate Hash Word Register 0 */
DECL|AES_IDATAR_IDATA_Msk|macro|AES_IDATAR_IDATA_Msk
DECL|AES_IDATAR_IDATA_Pos|macro|AES_IDATAR_IDATA_Pos
DECL|AES_IDATAR_IDATA|macro|AES_IDATAR_IDATA
DECL|AES_IDATAR_MASK|macro|AES_IDATAR_MASK
DECL|AES_IDATAR_Msk|macro|AES_IDATAR_Msk
DECL|AES_IDATAR_OFFSET|macro|AES_IDATAR_OFFSET
DECL|AES_IDATAR_Type|typedef|} AES_IDATAR_Type;
DECL|AES_IDATAR|member|__O AES_IDATAR_Type AES_IDATAR[4]; /**< Offset: 0x40 ( /W 32) Input Data Register 0 */
DECL|AES_IDATAR|member|__O uint32_t AES_IDATAR[4]; /**< (AES Offset: 0x40) Input Data Register 0 */
DECL|AES_IDR_DATRDY_Msk|macro|AES_IDR_DATRDY_Msk
DECL|AES_IDR_DATRDY_Pos|macro|AES_IDR_DATRDY_Pos
DECL|AES_IDR_DATRDY|macro|AES_IDR_DATRDY
DECL|AES_IDR_MASK|macro|AES_IDR_MASK
DECL|AES_IDR_Msk|macro|AES_IDR_Msk
DECL|AES_IDR_OFFSET|macro|AES_IDR_OFFSET
DECL|AES_IDR_TAGRDY_Msk|macro|AES_IDR_TAGRDY_Msk
DECL|AES_IDR_TAGRDY_Pos|macro|AES_IDR_TAGRDY_Pos
DECL|AES_IDR_TAGRDY|macro|AES_IDR_TAGRDY
DECL|AES_IDR_Type|typedef|} AES_IDR_Type;
DECL|AES_IDR_URAD_Msk|macro|AES_IDR_URAD_Msk
DECL|AES_IDR_URAD_Pos|macro|AES_IDR_URAD_Pos
DECL|AES_IDR_URAD|macro|AES_IDR_URAD
DECL|AES_IDR|member|__O AES_IDR_Type AES_IDR; /**< Offset: 0x14 ( /W 32) Interrupt Disable Register */
DECL|AES_IDR|member|__O uint32_t AES_IDR; /**< (AES Offset: 0x14) Interrupt Disable Register */
DECL|AES_IER_DATRDY_Msk|macro|AES_IER_DATRDY_Msk
DECL|AES_IER_DATRDY_Pos|macro|AES_IER_DATRDY_Pos
DECL|AES_IER_DATRDY|macro|AES_IER_DATRDY
DECL|AES_IER_MASK|macro|AES_IER_MASK
DECL|AES_IER_Msk|macro|AES_IER_Msk
DECL|AES_IER_OFFSET|macro|AES_IER_OFFSET
DECL|AES_IER_TAGRDY_Msk|macro|AES_IER_TAGRDY_Msk
DECL|AES_IER_TAGRDY_Pos|macro|AES_IER_TAGRDY_Pos
DECL|AES_IER_TAGRDY|macro|AES_IER_TAGRDY
DECL|AES_IER_Type|typedef|} AES_IER_Type;
DECL|AES_IER_URAD_Msk|macro|AES_IER_URAD_Msk
DECL|AES_IER_URAD_Pos|macro|AES_IER_URAD_Pos
DECL|AES_IER_URAD|macro|AES_IER_URAD
DECL|AES_IER|member|__O AES_IER_Type AES_IER; /**< Offset: 0x10 ( /W 32) Interrupt Enable Register */
DECL|AES_IER|member|__O uint32_t AES_IER; /**< (AES Offset: 0x10) Interrupt Enable Register */
DECL|AES_IMR_DATRDY_Msk|macro|AES_IMR_DATRDY_Msk
DECL|AES_IMR_DATRDY_Pos|macro|AES_IMR_DATRDY_Pos
DECL|AES_IMR_DATRDY|macro|AES_IMR_DATRDY
DECL|AES_IMR_MASK|macro|AES_IMR_MASK
DECL|AES_IMR_Msk|macro|AES_IMR_Msk
DECL|AES_IMR_OFFSET|macro|AES_IMR_OFFSET
DECL|AES_IMR_TAGRDY_Msk|macro|AES_IMR_TAGRDY_Msk
DECL|AES_IMR_TAGRDY_Pos|macro|AES_IMR_TAGRDY_Pos
DECL|AES_IMR_TAGRDY|macro|AES_IMR_TAGRDY
DECL|AES_IMR_Type|typedef|} AES_IMR_Type;
DECL|AES_IMR_URAD_Msk|macro|AES_IMR_URAD_Msk
DECL|AES_IMR_URAD_Pos|macro|AES_IMR_URAD_Pos
DECL|AES_IMR_URAD|macro|AES_IMR_URAD
DECL|AES_IMR|member|__I AES_IMR_Type AES_IMR; /**< Offset: 0x18 (R/ 32) Interrupt Mask Register */
DECL|AES_IMR|member|__I uint32_t AES_IMR; /**< (AES Offset: 0x18) Interrupt Mask Register */
DECL|AES_ISR_DATRDY_Msk|macro|AES_ISR_DATRDY_Msk
DECL|AES_ISR_DATRDY_Pos|macro|AES_ISR_DATRDY_Pos
DECL|AES_ISR_DATRDY|macro|AES_ISR_DATRDY
DECL|AES_ISR_MASK|macro|AES_ISR_MASK
DECL|AES_ISR_Msk|macro|AES_ISR_Msk
DECL|AES_ISR_OFFSET|macro|AES_ISR_OFFSET
DECL|AES_ISR_TAGRDY_Msk|macro|AES_ISR_TAGRDY_Msk
DECL|AES_ISR_TAGRDY_Pos|macro|AES_ISR_TAGRDY_Pos
DECL|AES_ISR_TAGRDY|macro|AES_ISR_TAGRDY
DECL|AES_ISR_Type|typedef|} AES_ISR_Type;
DECL|AES_ISR_URAD_Msk|macro|AES_ISR_URAD_Msk
DECL|AES_ISR_URAD_Pos|macro|AES_ISR_URAD_Pos
DECL|AES_ISR_URAD|macro|AES_ISR_URAD
DECL|AES_ISR_URAT_IDR_WR_PROCESSING_Val|macro|AES_ISR_URAT_IDR_WR_PROCESSING_Val
DECL|AES_ISR_URAT_IDR_WR_PROCESSING|macro|AES_ISR_URAT_IDR_WR_PROCESSING
DECL|AES_ISR_URAT_MR_WR_PROCESSING_Val|macro|AES_ISR_URAT_MR_WR_PROCESSING_Val
DECL|AES_ISR_URAT_MR_WR_PROCESSING|macro|AES_ISR_URAT_MR_WR_PROCESSING
DECL|AES_ISR_URAT_MR_WR_SUBKGEN_Val|macro|AES_ISR_URAT_MR_WR_SUBKGEN_Val
DECL|AES_ISR_URAT_MR_WR_SUBKGEN|macro|AES_ISR_URAT_MR_WR_SUBKGEN
DECL|AES_ISR_URAT_Msk|macro|AES_ISR_URAT_Msk
DECL|AES_ISR_URAT_ODR_RD_PROCESSING_Val|macro|AES_ISR_URAT_ODR_RD_PROCESSING_Val
DECL|AES_ISR_URAT_ODR_RD_PROCESSING|macro|AES_ISR_URAT_ODR_RD_PROCESSING
DECL|AES_ISR_URAT_ODR_RD_SUBKGEN_Val|macro|AES_ISR_URAT_ODR_RD_SUBKGEN_Val
DECL|AES_ISR_URAT_ODR_RD_SUBKGEN|macro|AES_ISR_URAT_ODR_RD_SUBKGEN
DECL|AES_ISR_URAT_Pos|macro|AES_ISR_URAT_Pos
DECL|AES_ISR_URAT_WOR_RD_ACCESS_Val|macro|AES_ISR_URAT_WOR_RD_ACCESS_Val
DECL|AES_ISR_URAT_WOR_RD_ACCESS|macro|AES_ISR_URAT_WOR_RD_ACCESS
DECL|AES_ISR_URAT|macro|AES_ISR_URAT
DECL|AES_ISR|member|__I AES_ISR_Type AES_ISR; /**< Offset: 0x1C (R/ 32) Interrupt Status Register */
DECL|AES_ISR|member|__I uint32_t AES_ISR; /**< (AES Offset: 0x1C) Interrupt Status Register */
DECL|AES_IVR_IV_Msk|macro|AES_IVR_IV_Msk
DECL|AES_IVR_IV_Pos|macro|AES_IVR_IV_Pos
DECL|AES_IVR_IV|macro|AES_IVR_IV
DECL|AES_IVR_MASK|macro|AES_IVR_MASK
DECL|AES_IVR_Msk|macro|AES_IVR_Msk
DECL|AES_IVR_OFFSET|macro|AES_IVR_OFFSET
DECL|AES_IVR_Type|typedef|} AES_IVR_Type;
DECL|AES_IVR|member|__O AES_IVR_Type AES_IVR[4]; /**< Offset: 0x60 ( /W 32) Initialization Vector Register 0 */
DECL|AES_IVR|member|__O uint32_t AES_IVR[4]; /**< (AES Offset: 0x60) Initialization Vector Register 0 */
DECL|AES_KEYWR_KEYW_Msk|macro|AES_KEYWR_KEYW_Msk
DECL|AES_KEYWR_KEYW_Pos|macro|AES_KEYWR_KEYW_Pos
DECL|AES_KEYWR_KEYW|macro|AES_KEYWR_KEYW
DECL|AES_KEYWR_MASK|macro|AES_KEYWR_MASK
DECL|AES_KEYWR_Msk|macro|AES_KEYWR_Msk
DECL|AES_KEYWR_OFFSET|macro|AES_KEYWR_OFFSET
DECL|AES_KEYWR_Type|typedef|} AES_KEYWR_Type;
DECL|AES_KEYWR|member|__O AES_KEYWR_Type AES_KEYWR[8]; /**< Offset: 0x20 ( /W 32) Key Word Register 0 */
DECL|AES_KEYWR|member|__O uint32_t AES_KEYWR[8]; /**< (AES Offset: 0x20) Key Word Register 0 */
DECL|AES_MR_CFBS_Msk|macro|AES_MR_CFBS_Msk
DECL|AES_MR_CFBS_Pos|macro|AES_MR_CFBS_Pos
DECL|AES_MR_CFBS_SIZE_128BIT_Val|macro|AES_MR_CFBS_SIZE_128BIT_Val
DECL|AES_MR_CFBS_SIZE_128BIT|macro|AES_MR_CFBS_SIZE_128BIT
DECL|AES_MR_CFBS_SIZE_16BIT_Val|macro|AES_MR_CFBS_SIZE_16BIT_Val
DECL|AES_MR_CFBS_SIZE_16BIT|macro|AES_MR_CFBS_SIZE_16BIT
DECL|AES_MR_CFBS_SIZE_32BIT_Val|macro|AES_MR_CFBS_SIZE_32BIT_Val
DECL|AES_MR_CFBS_SIZE_32BIT|macro|AES_MR_CFBS_SIZE_32BIT
DECL|AES_MR_CFBS_SIZE_64BIT_Val|macro|AES_MR_CFBS_SIZE_64BIT_Val
DECL|AES_MR_CFBS_SIZE_64BIT|macro|AES_MR_CFBS_SIZE_64BIT
DECL|AES_MR_CFBS_SIZE_8BIT_Val|macro|AES_MR_CFBS_SIZE_8BIT_Val
DECL|AES_MR_CFBS_SIZE_8BIT|macro|AES_MR_CFBS_SIZE_8BIT
DECL|AES_MR_CFBS|macro|AES_MR_CFBS
DECL|AES_MR_CIPHER_Msk|macro|AES_MR_CIPHER_Msk
DECL|AES_MR_CIPHER_Pos|macro|AES_MR_CIPHER_Pos
DECL|AES_MR_CIPHER|macro|AES_MR_CIPHER
DECL|AES_MR_CKEY_Msk|macro|AES_MR_CKEY_Msk
DECL|AES_MR_CKEY_PASSWD_Val|macro|AES_MR_CKEY_PASSWD_Val
DECL|AES_MR_CKEY_PASSWD|macro|AES_MR_CKEY_PASSWD
DECL|AES_MR_CKEY_Pos|macro|AES_MR_CKEY_Pos
DECL|AES_MR_CKEY|macro|AES_MR_CKEY
DECL|AES_MR_DUALBUFF_ACTIVE_Val|macro|AES_MR_DUALBUFF_ACTIVE_Val
DECL|AES_MR_DUALBUFF_ACTIVE|macro|AES_MR_DUALBUFF_ACTIVE
DECL|AES_MR_DUALBUFF_INACTIVE_Val|macro|AES_MR_DUALBUFF_INACTIVE_Val
DECL|AES_MR_DUALBUFF_INACTIVE|macro|AES_MR_DUALBUFF_INACTIVE
DECL|AES_MR_DUALBUFF_Msk|macro|AES_MR_DUALBUFF_Msk
DECL|AES_MR_DUALBUFF_Pos|macro|AES_MR_DUALBUFF_Pos
DECL|AES_MR_DUALBUFF|macro|AES_MR_DUALBUFF
DECL|AES_MR_GTAGEN_Msk|macro|AES_MR_GTAGEN_Msk
DECL|AES_MR_GTAGEN_Pos|macro|AES_MR_GTAGEN_Pos
DECL|AES_MR_GTAGEN|macro|AES_MR_GTAGEN
DECL|AES_MR_KEYSIZE_AES128_Val|macro|AES_MR_KEYSIZE_AES128_Val
DECL|AES_MR_KEYSIZE_AES128|macro|AES_MR_KEYSIZE_AES128
DECL|AES_MR_KEYSIZE_AES192_Val|macro|AES_MR_KEYSIZE_AES192_Val
DECL|AES_MR_KEYSIZE_AES192|macro|AES_MR_KEYSIZE_AES192
DECL|AES_MR_KEYSIZE_AES256_Val|macro|AES_MR_KEYSIZE_AES256_Val
DECL|AES_MR_KEYSIZE_AES256|macro|AES_MR_KEYSIZE_AES256
DECL|AES_MR_KEYSIZE_Msk|macro|AES_MR_KEYSIZE_Msk
DECL|AES_MR_KEYSIZE_Pos|macro|AES_MR_KEYSIZE_Pos
DECL|AES_MR_KEYSIZE|macro|AES_MR_KEYSIZE
DECL|AES_MR_LOD_Msk|macro|AES_MR_LOD_Msk
DECL|AES_MR_LOD_Pos|macro|AES_MR_LOD_Pos
DECL|AES_MR_LOD|macro|AES_MR_LOD
DECL|AES_MR_MASK|macro|AES_MR_MASK
DECL|AES_MR_Msk|macro|AES_MR_Msk
DECL|AES_MR_OFFSET|macro|AES_MR_OFFSET
DECL|AES_MR_OPMOD_CBC_Val|macro|AES_MR_OPMOD_CBC_Val
DECL|AES_MR_OPMOD_CBC|macro|AES_MR_OPMOD_CBC
DECL|AES_MR_OPMOD_CFB_Val|macro|AES_MR_OPMOD_CFB_Val
DECL|AES_MR_OPMOD_CFB|macro|AES_MR_OPMOD_CFB
DECL|AES_MR_OPMOD_CTR_Val|macro|AES_MR_OPMOD_CTR_Val
DECL|AES_MR_OPMOD_CTR|macro|AES_MR_OPMOD_CTR
DECL|AES_MR_OPMOD_ECB_Val|macro|AES_MR_OPMOD_ECB_Val
DECL|AES_MR_OPMOD_ECB|macro|AES_MR_OPMOD_ECB
DECL|AES_MR_OPMOD_GCM_Val|macro|AES_MR_OPMOD_GCM_Val
DECL|AES_MR_OPMOD_GCM|macro|AES_MR_OPMOD_GCM
DECL|AES_MR_OPMOD_Msk|macro|AES_MR_OPMOD_Msk
DECL|AES_MR_OPMOD_OFB_Val|macro|AES_MR_OPMOD_OFB_Val
DECL|AES_MR_OPMOD_OFB|macro|AES_MR_OPMOD_OFB
DECL|AES_MR_OPMOD_Pos|macro|AES_MR_OPMOD_Pos
DECL|AES_MR_OPMOD|macro|AES_MR_OPMOD
DECL|AES_MR_PROCDLY_Msk|macro|AES_MR_PROCDLY_Msk
DECL|AES_MR_PROCDLY_Pos|macro|AES_MR_PROCDLY_Pos
DECL|AES_MR_PROCDLY|macro|AES_MR_PROCDLY
DECL|AES_MR_SMOD_AUTO_START_Val|macro|AES_MR_SMOD_AUTO_START_Val
DECL|AES_MR_SMOD_AUTO_START|macro|AES_MR_SMOD_AUTO_START
DECL|AES_MR_SMOD_IDATAR0_START_Val|macro|AES_MR_SMOD_IDATAR0_START_Val
DECL|AES_MR_SMOD_IDATAR0_START|macro|AES_MR_SMOD_IDATAR0_START
DECL|AES_MR_SMOD_MANUAL_START_Val|macro|AES_MR_SMOD_MANUAL_START_Val
DECL|AES_MR_SMOD_MANUAL_START|macro|AES_MR_SMOD_MANUAL_START
DECL|AES_MR_SMOD_Msk|macro|AES_MR_SMOD_Msk
DECL|AES_MR_SMOD_Pos|macro|AES_MR_SMOD_Pos
DECL|AES_MR_SMOD|macro|AES_MR_SMOD
DECL|AES_MR_Type|typedef|} AES_MR_Type;
DECL|AES_MR|member|__IO AES_MR_Type AES_MR; /**< Offset: 0x04 (R/W 32) Mode Register */
DECL|AES_MR|member|__IO uint32_t AES_MR; /**< (AES Offset: 0x04) Mode Register */
DECL|AES_ODATAR_MASK|macro|AES_ODATAR_MASK
DECL|AES_ODATAR_Msk|macro|AES_ODATAR_Msk
DECL|AES_ODATAR_ODATA_Msk|macro|AES_ODATAR_ODATA_Msk
DECL|AES_ODATAR_ODATA_Pos|macro|AES_ODATAR_ODATA_Pos
DECL|AES_ODATAR_ODATA|macro|AES_ODATAR_ODATA
DECL|AES_ODATAR_OFFSET|macro|AES_ODATAR_OFFSET
DECL|AES_ODATAR_Type|typedef|} AES_ODATAR_Type;
DECL|AES_ODATAR|member|__I AES_ODATAR_Type AES_ODATAR[4]; /**< Offset: 0x50 (R/ 32) Output Data Register 0 */
DECL|AES_ODATAR|member|__I uint32_t AES_ODATAR[4]; /**< (AES Offset: 0x50) Output Data Register 0 */
DECL|AES_TAGR_MASK|macro|AES_TAGR_MASK
DECL|AES_TAGR_Msk|macro|AES_TAGR_Msk
DECL|AES_TAGR_OFFSET|macro|AES_TAGR_OFFSET
DECL|AES_TAGR_TAG_Msk|macro|AES_TAGR_TAG_Msk
DECL|AES_TAGR_TAG_Pos|macro|AES_TAGR_TAG_Pos
DECL|AES_TAGR_TAG|macro|AES_TAGR_TAG
DECL|AES_TAGR_Type|typedef|} AES_TAGR_Type;
DECL|AES_TAGR|member|__I AES_TAGR_Type AES_TAGR[4]; /**< Offset: 0x88 (R/ 32) GCM Authentication Tag Word Register 0 */
DECL|AES_TAGR|member|__I uint32_t AES_TAGR[4]; /**< (AES Offset: 0x88) GCM Authentication Tag Word Register 0 */
DECL|Aes|typedef|} Aes;
DECL|Aes|typedef|} Aes;
DECL|CFBS|member|uint32_t CFBS:3; /**< bit: 16..18 Cipher Feedback Data Size */
DECL|CIPHER|member|uint32_t CIPHER:1; /**< bit: 0 Processing Mode */
DECL|CKEY|member|uint32_t CKEY:4; /**< bit: 20..23 Countermeasure Key */
DECL|CLEN|member|uint32_t CLEN:32; /**< bit: 0..31 Plaintext/Ciphertext Length */
DECL|COMPONENT_TYPEDEF_STYLE|macro|COMPONENT_TYPEDEF_STYLE
DECL|CTR|member|uint32_t CTR:32; /**< bit: 0..31 GCM Encryption Counter */
DECL|DATRDY|member|uint32_t DATRDY:1; /**< bit: 0 Data Ready (cleared by setting bit START or bit SWRST in AES_CR or by reading AES_ODATARx) */
DECL|DATRDY|member|uint32_t DATRDY:1; /**< bit: 0 Data Ready Interrupt Disable */
DECL|DATRDY|member|uint32_t DATRDY:1; /**< bit: 0 Data Ready Interrupt Enable */
DECL|DATRDY|member|uint32_t DATRDY:1; /**< bit: 0 Data Ready Interrupt Mask */
DECL|DUALBUFF|member|uint32_t DUALBUFF:1; /**< bit: 3 Dual Input Buffer */
DECL|GHASH|member|uint32_t GHASH:32; /**< bit: 0..31 Intermediate GCM Hash Word x */
DECL|GTAGEN|member|uint32_t GTAGEN:1; /**< bit: 1 GCM Automatic Tag Generation Enable */
DECL|H|member|uint32_t H:32; /**< bit: 0..31 GCM H Word x */
DECL|IDATA|member|uint32_t IDATA:32; /**< bit: 0..31 Input Data Word */
DECL|IV|member|uint32_t IV:32; /**< bit: 0..31 Initialization Vector */
DECL|KEYSIZE|member|uint32_t KEYSIZE:2; /**< bit: 10..11 Key Size */
DECL|KEYW|member|uint32_t KEYW:32; /**< bit: 0..31 Key Word */
DECL|LOD|member|uint32_t LOD:1; /**< bit: 15 Last Output Data Mode */
DECL|ODATA|member|uint32_t ODATA:32; /**< bit: 0..31 Output Data */
DECL|OPMOD|member|uint32_t OPMOD:3; /**< bit: 12..14 Operation Mode */
DECL|PROCDLY|member|uint32_t PROCDLY:4; /**< bit: 4..7 Processing Delay */
DECL|REV_AES|macro|REV_AES
DECL|Reserved1|member|RoReg8 Reserved1[0x8];
DECL|Reserved1|member|__I uint32_t Reserved1[2];
DECL|SMOD|member|uint32_t SMOD:2; /**< bit: 8..9 Start Mode */
DECL|START|member|uint32_t START:1; /**< bit: 0 Start Processing */
DECL|SWRST|member|uint32_t SWRST:1; /**< bit: 8 Software Reset */
DECL|TAGRDY|member|uint32_t TAGRDY:1; /**< bit: 16 GCM Tag Ready */
DECL|TAGRDY|member|uint32_t TAGRDY:1; /**< bit: 16 GCM Tag Ready Interrupt Disable */
DECL|TAGRDY|member|uint32_t TAGRDY:1; /**< bit: 16 GCM Tag Ready Interrupt Enable */
DECL|TAGRDY|member|uint32_t TAGRDY:1; /**< bit: 16 GCM Tag Ready Interrupt Mask */
DECL|TAG|member|uint32_t TAG:32; /**< bit: 0..31 GCM Authentication Tag x */
DECL|URAD|member|uint32_t URAD:1; /**< bit: 8 Unspecified Register Access Detection Interrupt Disable */
DECL|URAD|member|uint32_t URAD:1; /**< bit: 8 Unspecified Register Access Detection Interrupt Enable */
DECL|URAD|member|uint32_t URAD:1; /**< bit: 8 Unspecified Register Access Detection Interrupt Mask */
DECL|URAD|member|uint32_t URAD:1; /**< bit: 8 Unspecified Register Access Detection Status (cleared by writing SWRST in AES_CR) */
DECL|URAT|member|uint32_t URAT:4; /**< bit: 12..15 Unspecified Register Access (cleared by writing SWRST in AES_CR) */
DECL|_SAME70_AES_COMPONENT_H_|macro|_SAME70_AES_COMPONENT_H_
DECL|_SAME70_AES_COMPONENT_|macro|_SAME70_AES_COMPONENT_
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|bit|member|} bit; /**< Structure used for bit access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|reg|member|uint32_t reg; /**< Type used for register access */
DECL|uint32_t|member|uint32_t :15; /**< bit: 17..31 Reserved */
DECL|uint32_t|member|uint32_t :15; /**< bit: 17..31 Reserved */
DECL|uint32_t|member|uint32_t :15; /**< bit: 17..31 Reserved */
DECL|uint32_t|member|uint32_t :15; /**< bit: 17..31 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 19 Reserved */
DECL|uint32_t|member|uint32_t :1; /**< bit: 2 Reserved */
DECL|uint32_t|member|uint32_t :23; /**< bit: 9..31 Reserved */
DECL|uint32_t|member|uint32_t :3; /**< bit: 9..11 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 1..7 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 9..15 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 9..15 Reserved */
DECL|uint32_t|member|uint32_t :7; /**< bit: 9..15 Reserved */
DECL|uint32_t|member|uint32_t :8; /**< bit: 24..31 Reserved */
