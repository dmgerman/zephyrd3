DECL|QM_FLASH_DATA_TRIM_BASE|macro|QM_FLASH_DATA_TRIM_BASE
DECL|QM_FLASH_DATA_TRIM_BASE|macro|QM_FLASH_DATA_TRIM_BASE
DECL|QM_FLASH_DATA_TRIM_CODE|macro|QM_FLASH_DATA_TRIM_CODE
DECL|QM_FLASH_DATA_TRIM_OFFSET|macro|QM_FLASH_DATA_TRIM_OFFSET
DECL|QM_FLASH_DATA_TRIM_OFFSET|macro|QM_FLASH_DATA_TRIM_OFFSET
DECL|QM_FLASH_DATA_TRIM_REGION|macro|QM_FLASH_DATA_TRIM_REGION
DECL|QM_FLASH_DATA_TRIM|macro|QM_FLASH_DATA_TRIM
DECL|QM_FLASH_OTP_SOC_DATA_VALID|macro|QM_FLASH_OTP_SOC_DATA_VALID
DECL|QM_FLASH_OTP_TRIM_CODE_BASE|macro|QM_FLASH_OTP_TRIM_CODE_BASE
DECL|QM_FLASH_OTP_TRIM_CODE_BASE|macro|QM_FLASH_OTP_TRIM_CODE_BASE
DECL|QM_FLASH_OTP_TRIM_CODE|macro|QM_FLASH_OTP_TRIM_CODE
DECL|QM_FLASH_OTP_TRIM_MAGIC|macro|QM_FLASH_OTP_TRIM_MAGIC
DECL|QM_FLASH_TRIM_PRESENT_MASK|macro|QM_FLASH_TRIM_PRESENT_MASK
DECL|QM_FLASH_TRIM_PRESENT|macro|QM_FLASH_TRIM_PRESENT
DECL|__FLASH_LAYOUT_H__|macro|__FLASH_LAYOUT_H__
DECL|fields|member|} fields;
DECL|magic|member|QM_RW uint32_t magic; /**< Magic Number. */
DECL|osc_trim_16mhz|member|QM_RW uint16_t osc_trim_16mhz; /**< 16MHz Oscillator trim code. */
DECL|osc_trim_16mhz|member|osc_trim_16mhz; /**< 16MHz Oscillator trim code. */
DECL|osc_trim_32mhz|member|QM_RW uint16_t osc_trim_32mhz; /**< 32MHz Oscillator trim code. */
DECL|osc_trim_32mhz|member|osc_trim_32mhz; /**< 32MHz Oscillator trim code. */
DECL|osc_trim_4mhz|member|QM_RW uint16_t osc_trim_4mhz; /**< 4MHz Oscillator trim code. */
DECL|osc_trim_4mhz|member|QM_RW uint16_t osc_trim_4mhz; /**< 4MHz Oscillator trim code. */
DECL|osc_trim_8mhz|member|QM_RW uint16_t osc_trim_8mhz; /**< 8MHz Oscillator trim code. */
DECL|osc_trim_8mhz|member|QM_RW uint16_t osc_trim_8mhz; /**< 8MHz Oscillator trim code. */
DECL|osc_trim_u16|member|QM_RW uint16_t osc_trim_u16[2]; /**< Oscillator trim code array.*/
DECL|osc_trim_u32|member|QM_RW uint32_t osc_trim_u32[2]; /**< Oscillator trim code array.*/
DECL|qm_flash_data_trim_t|typedef|} qm_flash_data_trim_t;
DECL|qm_flash_otp_trim_t|typedef|} qm_flash_otp_trim_t;
DECL|reserved|member|QM_RW uint16_t reserved; /**< Reserved. */
DECL|trim_fields|struct|struct trim_fields {
DECL|version|member|QM_RW uint16_t version; /**< 0x0100. */
