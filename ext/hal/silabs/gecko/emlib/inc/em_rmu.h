DECL|EM_RMU_H|macro|EM_RMU_H
DECL|RMU_LockupResetDisable|macro|RMU_LockupResetDisable
DECL|RMU_ResetMode_TypeDef|typedef|} RMU_ResetMode_TypeDef;
DECL|RMU_Reset_TypeDef|typedef|} RMU_Reset_TypeDef;
DECL|RMU_UserResetStateGet|function|__STATIC_INLINE uint32_t RMU_UserResetStateGet(void)
DECL|RMU_UserResetStateSet|function|__STATIC_INLINE void RMU_UserResetStateSet(uint32_t userState)
DECL|rmuResetBU|enumerator|rmuResetBU = _RMU_CTRL_BURSTEN_MASK, /**< Reset control over Backup Power domain select */
DECL|rmuResetCoreLockup|enumerator|rmuResetCoreLockup = _RMU_CTRL_LOCKUPRMODE_MASK, /**< Cortex lockup reset select */
DECL|rmuResetLockUp|enumerator|rmuResetLockUp = _RMU_CTRL_LOCKUPRDIS_MASK, /**< Cortex lockup reset select */
DECL|rmuResetModeDisabled|enumerator|rmuResetModeDisabled = _RMU_CTRL_PINRMODE_DISABLED,
DECL|rmuResetModeExtended|enumerator|rmuResetModeExtended = _RMU_CTRL_PINRMODE_EXTENDED,
DECL|rmuResetModeFull|enumerator|rmuResetModeFull = _RMU_CTRL_PINRMODE_FULL,
DECL|rmuResetModeLimited|enumerator|rmuResetModeLimited = _RMU_CTRL_PINRMODE_LIMITED,
DECL|rmuResetPin|enumerator|rmuResetPin = _RMU_CTRL_PINRMODE_MASK, /**< Pin reset select */
DECL|rmuResetSys|enumerator|rmuResetSys = _RMU_CTRL_SYSRMODE_MASK, /**< SYSRESET select */
DECL|rmuResetWdog|enumerator|rmuResetWdog = _RMU_CTRL_WDOGRMODE_MASK, /**< WDOG reset select */
