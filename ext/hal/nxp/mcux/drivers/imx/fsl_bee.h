DECL|BEE_Disable|function|static inline void BEE_Disable(BEE_Type *base)
DECL|BEE_Enable|function|static inline void BEE_Enable(BEE_Type *base)
DECL|BEE_GetOffset|function|static inline uint32_t BEE_GetOffset(uint32_t addressMemory)
DECL|FSL_BEE_DRIVER_VERSION|macro|FSL_BEE_DRIVER_VERSION
DECL|_FSL_BEE_H_|macro|_FSL_BEE_H_
DECL|_bee_aes_mode|enum|typedef enum _bee_aes_mode
DECL|_bee_region_config|struct|typedef struct _bee_region_config
DECL|_bee_region_enable|enum|typedef enum _bee_region_enable
DECL|_bee_region|enum|typedef enum _bee_region
DECL|_bee_status_flags|enum|typedef enum _bee_status_flags
DECL|addrOffset|member|uint32_t addrOffset; /*!< Region address offset */
DECL|bee_aes_mode_t|typedef|} bee_aes_mode_t;
DECL|bee_region_config_t|typedef|} bee_region_config_t;
DECL|bee_region_enable_t|typedef|} bee_region_enable_t;
DECL|bee_region_t|typedef|} bee_region_t;
DECL|bee_status_flags_t|typedef|} bee_status_flags_t;
DECL|kBEE_AesCtrMode|enumerator|kBEE_AesCtrMode = 1U /*!< AES CTR Mode */
DECL|kBEE_AesEcbMode|enumerator|kBEE_AesEcbMode = 0U, /*!< AES ECB Mode */
DECL|kBEE_DisableAbortFlag|enumerator|kBEE_DisableAbortFlag = 1U, /*!< Disable abort flag. */
DECL|kBEE_IdleFlag|enumerator|kBEE_IdleFlag = BEE_STATUS_BEE_IDLE_MASK /*!< Idle flag */
DECL|kBEE_ReadIllegalAccess|enumerator|kBEE_ReadIllegalAccess = 4U, /*!< Read channel illegal access detected */
DECL|kBEE_Reg0AccessViolation|enumerator|kBEE_Reg0AccessViolation = 16U, /*!< Protected region-0 access violation */
DECL|kBEE_Reg0ReadSecViolation|enumerator|kBEE_Reg0ReadSecViolation = 2U, /*!< Region-0 read channel security violation */
DECL|kBEE_Reg1AccessViolation|enumerator|kBEE_Reg1AccessViolation = 32U, /*!< Protected region-1 access violation */
DECL|kBEE_Reg1ReadSecViolation|enumerator|kBEE_Reg1ReadSecViolation = 8U, /*!< Region-1 read channel security violation */
DECL|kBEE_Region0|enumerator|kBEE_Region0 = 0U, /*!< BEE region 0 */
DECL|kBEE_Region1|enumerator|kBEE_Region1 = 1U /*!< BEE region 1 */
DECL|kBEE_RegionDisabled|enumerator|kBEE_RegionDisabled = 0U, /*!< BEE region disabled */
DECL|kBEE_RegionEnabled|enumerator|kBEE_RegionEnabled = 1U /*!< BEE region enabled */
DECL|mode|member|bee_aes_mode_t mode; /*!< AES mode used for encryption/decryption */
DECL|regionBot|member|uint32_t regionBot; /*!< Region bottom address */
DECL|regionEn|member|bee_region_enable_t regionEn; /*!< Region enable/disable */
DECL|regionTop|member|uint32_t regionTop; /*!< Region top address */
