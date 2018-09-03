DECL|BEE_Disable|function|static inline void BEE_Disable(BEE_Type *base)
DECL|BEE_Enable|function|static inline void BEE_Enable(BEE_Type *base)
DECL|FSL_BEE_DRIVER_VERSION|macro|FSL_BEE_DRIVER_VERSION
DECL|_FSL_BEE_H_|macro|_FSL_BEE_H_
DECL|_bee_ac_prot_enable|enum|typedef enum _bee_ac_prot_enable
DECL|_bee_aes_mode|enum|typedef enum _bee_aes_mode
DECL|_bee_endian_swap_enable|enum|typedef enum _bee_endian_swap_enable
DECL|_bee_region_config|struct|typedef struct _bee_region_config
DECL|_bee_region|enum|typedef enum _bee_region
DECL|_bee_security_level|enum|typedef enum _bee_security_level
DECL|_bee_status_flags|enum|typedef enum _bee_status_flags
DECL|accessPermission|member|bee_ac_prot_enable accessPermission; /*!< Access permission control enable/disable */
DECL|bee_ac_prot_enable|typedef|} bee_ac_prot_enable;
DECL|bee_aes_mode_t|typedef|} bee_aes_mode_t;
DECL|bee_endian_swap_enable|typedef|} bee_endian_swap_enable;
DECL|bee_region_config_t|typedef|} bee_region_config_t;
DECL|bee_region_t|typedef|} bee_region_t;
DECL|bee_security_level|typedef|} bee_security_level;
DECL|bee_status_flags_t|typedef|} bee_status_flags_t;
DECL|endianSwapEn|member|bee_endian_swap_enable endianSwapEn; /*!< Endian swap enable/disable */
DECL|kBEE_AccessProtDisabled|enumerator|kBEE_AccessProtDisabled = 0U, /*!< BEE access permission control disabled */
DECL|kBEE_AccessProtEnabled|enumerator|kBEE_AccessProtEnabled = 1U /*!< BEE access permission control enabled */
DECL|kBEE_AesCtrMode|enumerator|kBEE_AesCtrMode = 1U /*!< AES CTR Mode */
DECL|kBEE_AesEcbMode|enumerator|kBEE_AesEcbMode = 0U, /*!< AES ECB Mode */
DECL|kBEE_DisableAbortFlag|enumerator|kBEE_DisableAbortFlag = 1U, /*!< Disable abort flag. */
DECL|kBEE_EndianSwapDisabled|enumerator|kBEE_EndianSwapDisabled = 1U, /*!< BEE endian swap disabled */
DECL|kBEE_EndianSwapEnabled|enumerator|kBEE_EndianSwapEnabled = 0U /*!< BEE endian swap enabled */
DECL|kBEE_IdleFlag|enumerator|kBEE_IdleFlag = BEE_STATUS_BEE_IDLE_MASK /*!< Idle flag */
DECL|kBEE_ReadIllegalAccess|enumerator|kBEE_ReadIllegalAccess = 4U, /*!< Read channel illegal access detected */
DECL|kBEE_Reg0AccessViolation|enumerator|kBEE_Reg0AccessViolation = 16U, /*!< Protected region-0 access violation */
DECL|kBEE_Reg0ReadSecViolation|enumerator|kBEE_Reg0ReadSecViolation = 2U, /*!< Region-0 read channel security violation */
DECL|kBEE_Reg1AccessViolation|enumerator|kBEE_Reg1AccessViolation = 32U, /*!< Protected region-1 access violation */
DECL|kBEE_Reg1ReadSecViolation|enumerator|kBEE_Reg1ReadSecViolation = 8U, /*!< Region-1 read channel security violation */
DECL|kBEE_Region0|enumerator|kBEE_Region0 = 0U, /*!< BEE region 0 */
DECL|kBEE_Region1|enumerator|kBEE_Region1 = 1U /*!< BEE region 1 */
DECL|kBEE_SecurityLevel0|enumerator|kBEE_SecurityLevel0 = 0U, /*!< BEE security level 0 */
DECL|kBEE_SecurityLevel1|enumerator|kBEE_SecurityLevel1 = 1U, /*!< BEE security level 1 */
DECL|kBEE_SecurityLevel2|enumerator|kBEE_SecurityLevel2 = 2U, /*!< BEE security level 2 */
DECL|kBEE_SecurityLevel3|enumerator|kBEE_SecurityLevel3 = 3U /*!< BEE security level 3 */
DECL|region0AddrOffset|member|uint32_t region0AddrOffset; /*!< Region 0 address offset */
DECL|region0Mode|member|bee_aes_mode_t region0Mode; /*!< AES mode used for encryption/decryption for region 0 */
DECL|region0SecLevel|member|bee_security_level region0SecLevel; /*!< Region 0 security level */
DECL|region1AddrOffset|member|uint32_t region1AddrOffset; /*!< Region 1 address offset */
DECL|region1Bot|member|uint32_t region1Bot; /*!< Region 1 bottom address */
DECL|region1Mode|member|bee_aes_mode_t region1Mode; /*!< AES mode used for encryption/decryption for region 1 */
DECL|region1SecLevel|member|bee_security_level region1SecLevel; /*!< Region 1 security level */
DECL|region1Top|member|uint32_t region1Top; /*!< Region 1 top address */
