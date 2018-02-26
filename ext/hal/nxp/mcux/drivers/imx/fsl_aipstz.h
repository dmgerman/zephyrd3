DECL|FSL_AIPSTZ_DRIVER_VERSION|macro|FSL_AIPSTZ_DRIVER_VERSION
DECL|_FSL_AIPSTZ_H_|macro|_FSL_AIPSTZ_H_
DECL|_aipstz_master_privilege_level|enum|typedef enum _aipstz_master_privilege_level {
DECL|_aipstz_master|enum|typedef enum _aipstz_master {
DECL|_aipstz_peripheral_access_control|enum|typedef enum _aipstz_peripheral_access_control {
DECL|_aipstz_peripheral|enum|typedef enum _aipstz_peripheral {
DECL|aipstz_master_privilege_level_t|typedef|} aipstz_master_privilege_level_t;
DECL|aipstz_master_t|typedef|} aipstz_master_t;
DECL|aipstz_peripheral_access_control_t|typedef|} aipstz_peripheral_access_control_t;
DECL|aipstz_peripheral_t|typedef|} aipstz_peripheral_t;
DECL|kAIPSTZ_Master0|enumerator|kAIPSTZ_Master0 = (0x400U | 28U),
DECL|kAIPSTZ_Master1|enumerator|kAIPSTZ_Master1 = (0x400U | 24U),
DECL|kAIPSTZ_Master2|enumerator|kAIPSTZ_Master2 = (0x400U | 20U),
DECL|kAIPSTZ_Master3|enumerator|kAIPSTZ_Master3 = (0x400U | 16U),
DECL|kAIPSTZ_Master5|enumerator|kAIPSTZ_Master5 = (0x400U | 8U)
DECL|kAIPSTZ_MasterBufferedWriteEnable|enumerator|kAIPSTZ_MasterBufferedWriteEnable = (1U << 3), /*!< Write accesses from this master are allowed to be buffered. */
DECL|kAIPSTZ_MasterForceUserModeEnable|enumerator|kAIPSTZ_MasterForceUserModeEnable = 1U /*!< Accesses from this master are forced to user-mode. */
DECL|kAIPSTZ_MasterTrustedForReadEnable|enumerator|kAIPSTZ_MasterTrustedForReadEnable = (1U << 2), /*!< This master is trusted for read accesses. */
DECL|kAIPSTZ_MasterTrustedForWriteEnable|enumerator|kAIPSTZ_MasterTrustedForWriteEnable = (1U << 1), /*!< This master is trusted for write accesses. */
DECL|kAIPSTZ_Peripheral0|enumerator|kAIPSTZ_Peripheral0 = ((0x40 << 16) | (4 << 8) | 28),
DECL|kAIPSTZ_Peripheral10|enumerator|kAIPSTZ_Peripheral10 = ((0x44 << 16) | (4 << 8) | 20),
DECL|kAIPSTZ_Peripheral11|enumerator|kAIPSTZ_Peripheral11 = ((0x44 << 16) | (4 << 8) | 16),
DECL|kAIPSTZ_Peripheral12|enumerator|kAIPSTZ_Peripheral12 = ((0x44 << 16) | (4 << 8) | 12),
DECL|kAIPSTZ_Peripheral13|enumerator|kAIPSTZ_Peripheral13 = ((0x44 << 16) | (4 << 8) | 8),
DECL|kAIPSTZ_Peripheral14|enumerator|kAIPSTZ_Peripheral14 = ((0x44 << 16) | (4 << 8) | 4),
DECL|kAIPSTZ_Peripheral15|enumerator|kAIPSTZ_Peripheral15 = ((0x44 << 16) | (4 << 8) | 0),
DECL|kAIPSTZ_Peripheral16|enumerator|kAIPSTZ_Peripheral16 = ((0x48 << 16) | (4 << 8) | 28),
DECL|kAIPSTZ_Peripheral17|enumerator|kAIPSTZ_Peripheral17 = ((0x48 << 16) | (4 << 8) | 24),
DECL|kAIPSTZ_Peripheral18|enumerator|kAIPSTZ_Peripheral18 = ((0x48 << 16) | (4 << 8) | 20),
DECL|kAIPSTZ_Peripheral19|enumerator|kAIPSTZ_Peripheral19 = ((0x48 << 16) | (4 << 8) | 16),
DECL|kAIPSTZ_Peripheral1|enumerator|kAIPSTZ_Peripheral1 = ((0x40 << 16) | (4 << 8) | 24),
DECL|kAIPSTZ_Peripheral20|enumerator|kAIPSTZ_Peripheral20 = ((0x48 << 16) | (4 << 8) | 12),
DECL|kAIPSTZ_Peripheral21|enumerator|kAIPSTZ_Peripheral21 = ((0x48 << 16) | (4 << 8) | 8),
DECL|kAIPSTZ_Peripheral22|enumerator|kAIPSTZ_Peripheral22 = ((0x48 << 16) | (4 << 8) | 4),
DECL|kAIPSTZ_Peripheral23|enumerator|kAIPSTZ_Peripheral23 = ((0x48 << 16) | (4 << 8) | 0),
DECL|kAIPSTZ_Peripheral24|enumerator|kAIPSTZ_Peripheral24 = ((0x4C << 16) | (4 << 8) | 28),
DECL|kAIPSTZ_Peripheral25|enumerator|kAIPSTZ_Peripheral25 = ((0x4C << 16) | (4 << 8) | 24),
DECL|kAIPSTZ_Peripheral26|enumerator|kAIPSTZ_Peripheral26 = ((0x4C << 16) | (4 << 8) | 20),
DECL|kAIPSTZ_Peripheral27|enumerator|kAIPSTZ_Peripheral27 = ((0x4C << 16) | (4 << 8) | 16),
DECL|kAIPSTZ_Peripheral28|enumerator|kAIPSTZ_Peripheral28 = ((0x4C << 16) | (4 << 8) | 12),
DECL|kAIPSTZ_Peripheral29|enumerator|kAIPSTZ_Peripheral29 = ((0x4C << 16) | (4 << 8) | 8),
DECL|kAIPSTZ_Peripheral2|enumerator|kAIPSTZ_Peripheral2 = ((0x40 << 16) | (4 << 8) | 20),
DECL|kAIPSTZ_Peripheral30|enumerator|kAIPSTZ_Peripheral30 = ((0x4C << 16) | (4 << 8) | 4),
DECL|kAIPSTZ_Peripheral31|enumerator|kAIPSTZ_Peripheral31 = ((0x4C << 16) | (4 << 8) | 0),
DECL|kAIPSTZ_Peripheral32|enumerator|kAIPSTZ_Peripheral32 = ((0x50 << 16) | (4 << 8) | 28),
DECL|kAIPSTZ_Peripheral33|enumerator|kAIPSTZ_Peripheral33 = ((0x50 << 16) | (4 << 8) | 24)
DECL|kAIPSTZ_Peripheral3|enumerator|kAIPSTZ_Peripheral3 = ((0x40 << 16) | (4 << 8) | 16),
DECL|kAIPSTZ_Peripheral4|enumerator|kAIPSTZ_Peripheral4 = ((0x40 << 16) | (4 << 8) | 12),
DECL|kAIPSTZ_Peripheral5|enumerator|kAIPSTZ_Peripheral5 = ((0x40 << 16) | (4 << 8) | 8),
DECL|kAIPSTZ_Peripheral6|enumerator|kAIPSTZ_Peripheral6 = ((0x40 << 16) | (4 << 8) | 4),
DECL|kAIPSTZ_Peripheral7|enumerator|kAIPSTZ_Peripheral7 = ((0x40 << 16) | (4 << 8) | 0),
DECL|kAIPSTZ_Peripheral8|enumerator|kAIPSTZ_Peripheral8 = ((0x44 << 16) | (4 << 8) | 28),
DECL|kAIPSTZ_Peripheral9|enumerator|kAIPSTZ_Peripheral9 = ((0x44 << 16) | (4 << 8) | 24),
DECL|kAIPSTZ_PeripheralAllowBufferedWrite|enumerator|kAIPSTZ_PeripheralAllowBufferedWrite = (1U < 2)
DECL|kAIPSTZ_PeripheralAllowUntrustedMaster|enumerator|kAIPSTZ_PeripheralAllowUntrustedMaster = 1U,
DECL|kAIPSTZ_PeripheralRequireSupervisor|enumerator|kAIPSTZ_PeripheralRequireSupervisor = (1U < 2),
DECL|kAIPSTZ_PeripheralWriteProtected|enumerator|kAIPSTZ_PeripheralWriteProtected = (1U < 1),
