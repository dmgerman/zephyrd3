DECL|FSL_SIM_DRIVER_VERSION|macro|FSL_SIM_DRIVER_VERSION
DECL|H|member|uint32_t H; /*!< UIDH. */
DECL|L|member|uint32_t L; /*!< UIDL. */
DECL|MH|member|uint32_t MH; /*!< UIDMH. */
DECL|ML|member|uint32_t ML; /*!< UIDML. */
DECL|SIM_SetFlashMode|function|static inline void SIM_SetFlashMode(uint8_t mode)
DECL|_FSL_SIM_H_|macro|_FSL_SIM_H_
DECL|_sim_flash_mode|enum|enum _sim_flash_mode
DECL|_sim_uid|struct|typedef struct _sim_uid
DECL|_sim_usb_volt_reg_enable_mode|enum|enum _sim_usb_volt_reg_enable_mode
DECL|kSIM_FlashDisableInWait|enumerator|kSIM_FlashDisableInWait = SIM_FCFG1_FLASHDOZE_MASK, /*!< Disable flash in wait mode. */
DECL|kSIM_FlashDisable|enumerator|kSIM_FlashDisable = SIM_FCFG1_FLASHDIS_MASK /*!< Disable flash in normal mode. */
DECL|kSIM_UsbVoltRegEnableInAllModes|enumerator|kSIM_UsbVoltRegEnableInAllModes = SIM_SOPT1_USBREGEN_MASK | SIM_SOPT1_USBSSTBY_MASK |
DECL|kSIM_UsbVoltRegEnableInLowPower|enumerator|kSIM_UsbVoltRegEnableInLowPower = SIM_SOPT1_USBVSTBY_MASK, /*!< Enable voltage regulator in VLPR/VLPW modes. */
DECL|kSIM_UsbVoltRegEnableInStop|enumerator|kSIM_UsbVoltRegEnableInStop = SIM_SOPT1_USBSSTBY_MASK, /*!< Enable voltage regulator in STOP/VLPS/LLS/VLLS modes. */
DECL|kSIM_UsbVoltRegEnable|enumerator|kSIM_UsbVoltRegEnable = SIM_SOPT1_USBREGEN_MASK, /*!< Enable voltage regulator. */
DECL|sim_uid_t|typedef|} sim_uid_t;
