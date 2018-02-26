DECL|FSL_PORT_DRIVER_VERSION|macro|FSL_PORT_DRIVER_VERSION
DECL|PORT_ClearPinsInterruptFlags|function|static inline void PORT_ClearPinsInterruptFlags(PORT_Type *base, uint32_t mask)
DECL|PORT_EnablePinsDigitalFilter|function|static inline void PORT_EnablePinsDigitalFilter(PORT_Type *base, uint32_t mask, bool enable)
DECL|PORT_GetPinsInterruptFlags|function|static inline uint32_t PORT_GetPinsInterruptFlags(PORT_Type *base)
DECL|PORT_SetDigitalFilterConfig|function|static inline void PORT_SetDigitalFilterConfig(PORT_Type *base, const port_digital_filter_config_t *config)
DECL|PORT_SetMultiplePinsConfig|function|static inline void PORT_SetMultiplePinsConfig(PORT_Type *base, uint32_t mask, const port_pin_config_t *config)
DECL|PORT_SetPinConfig|function|static inline void PORT_SetPinConfig(PORT_Type *base, uint32_t pin, const port_pin_config_t *config)
DECL|PORT_SetPinInterruptConfig|function|static inline void PORT_SetPinInterruptConfig(PORT_Type *base, uint32_t pin, port_interrupt_t config)
DECL|PORT_SetPinMux|function|static inline void PORT_SetPinMux(PORT_Type *base, uint32_t pin, port_mux_t mux)
DECL|_FSL_PORT_H_|macro|_FSL_PORT_H_
DECL|_port_digital_filter_clock_source|enum|typedef enum _port_digital_filter_clock_source
DECL|_port_digital_filter_config|struct|typedef struct _port_digital_filter_config
DECL|_port_drive_strength|enum|enum _port_drive_strength
DECL|_port_interrupt|enum|typedef enum _port_interrupt
DECL|_port_lock_register|enum|enum _port_lock_register
DECL|_port_mux|enum|typedef enum _port_mux
DECL|_port_open_drain_enable|enum|enum _port_open_drain_enable
DECL|_port_passive_filter_enable|enum|enum _port_passive_filter_enable
DECL|_port_pin_config|struct|typedef struct _port_pin_config
DECL|_port_pull|enum|enum _port_pull
DECL|_port_slew_rate|enum|enum _port_slew_rate
DECL|clockSource|member|port_digital_filter_clock_source_t clockSource; /*!< Set digital filter clockSource */
DECL|digitalFilterWidth|member|uint32_t digitalFilterWidth; /*!< Set digital filter width */
DECL|driveStrength|member|uint16_t driveStrength : 1; /*!< Fast/slow drive strength configure */
DECL|kPORT_ActiveHighTriggerOutputEnable|enumerator|kPORT_ActiveHighTriggerOutputEnable = 0xDU, /*!< Enable active high-trigger output. */
DECL|kPORT_ActiveLowTriggerOutputEnable|enumerator|kPORT_ActiveLowTriggerOutputEnable = 0xEU, /*!< Enable active low-trigger output. */
DECL|kPORT_BusClock|enumerator|kPORT_BusClock = 0U, /*!< Digital filters are clocked by the bus clock. */
DECL|kPORT_DMAEitherEdge|enumerator|kPORT_DMAEitherEdge = 0x3U, /*!< DMA request on either edge. */
DECL|kPORT_DMAFallingEdge|enumerator|kPORT_DMAFallingEdge = 0x2U, /*!< DMA request on falling edge. */
DECL|kPORT_DMARisingEdge|enumerator|kPORT_DMARisingEdge = 0x1U, /*!< DMA request on rising edge. */
DECL|kPORT_FastSlewRate|enumerator|kPORT_FastSlewRate = 0U, /*!< Fast slew rate is configured. */
DECL|kPORT_FlagEitherEdge|enumerator|kPORT_FlagEitherEdge = 0x07U, /*!< Flag sets on either edge. */
DECL|kPORT_FlagFallingEdge|enumerator|kPORT_FlagFallingEdge = 0x06U, /*!< Flag sets on falling edge. */
DECL|kPORT_FlagRisingEdge|enumerator|kPORT_FlagRisingEdge = 0x05U, /*!< Flag sets on rising edge. */
DECL|kPORT_HighDriveStrength|enumerator|kPORT_HighDriveStrength = 1U, /*!< High-drive strength is configured. */
DECL|kPORT_InterruptEitherEdge|enumerator|kPORT_InterruptEitherEdge = 0xBU, /*!< Interrupt on either edge. */
DECL|kPORT_InterruptFallingEdge|enumerator|kPORT_InterruptFallingEdge = 0xAU, /*!< Interrupt on falling edge. */
DECL|kPORT_InterruptLogicOne|enumerator|kPORT_InterruptLogicOne = 0xCU, /*!< Interrupt when logic one. */
DECL|kPORT_InterruptLogicZero|enumerator|kPORT_InterruptLogicZero = 0x8U, /*!< Interrupt when logic zero. */
DECL|kPORT_InterruptOrDMADisabled|enumerator|kPORT_InterruptOrDMADisabled = 0x0U, /*!< Interrupt/DMA request is disabled. */
DECL|kPORT_InterruptRisingEdge|enumerator|kPORT_InterruptRisingEdge = 0x9U, /*!< Interrupt on rising edge. */
DECL|kPORT_LockRegister|enumerator|kPORT_LockRegister = 1U, /*!< Pin Control Register fields [15:0] are locked. */
DECL|kPORT_LowDriveStrength|enumerator|kPORT_LowDriveStrength = 0U, /*!< Low-drive strength is configured. */
DECL|kPORT_LpoClock|enumerator|kPORT_LpoClock = 1U, /*!< Digital filters are clocked by the 1 kHz LPO clock. */
DECL|kPORT_MuxAlt10|enumerator|kPORT_MuxAlt10 = 10U, /*!< Chip-specific */
DECL|kPORT_MuxAlt11|enumerator|kPORT_MuxAlt11 = 11U, /*!< Chip-specific */
DECL|kPORT_MuxAlt12|enumerator|kPORT_MuxAlt12 = 12U, /*!< Chip-specific */
DECL|kPORT_MuxAlt13|enumerator|kPORT_MuxAlt13 = 13U, /*!< Chip-specific */
DECL|kPORT_MuxAlt14|enumerator|kPORT_MuxAlt14 = 14U, /*!< Chip-specific */
DECL|kPORT_MuxAlt15|enumerator|kPORT_MuxAlt15 = 15U, /*!< Chip-specific */
DECL|kPORT_MuxAlt2|enumerator|kPORT_MuxAlt2 = 2U, /*!< Chip-specific */
DECL|kPORT_MuxAlt3|enumerator|kPORT_MuxAlt3 = 3U, /*!< Chip-specific */
DECL|kPORT_MuxAlt4|enumerator|kPORT_MuxAlt4 = 4U, /*!< Chip-specific */
DECL|kPORT_MuxAlt5|enumerator|kPORT_MuxAlt5 = 5U, /*!< Chip-specific */
DECL|kPORT_MuxAlt6|enumerator|kPORT_MuxAlt6 = 6U, /*!< Chip-specific */
DECL|kPORT_MuxAlt7|enumerator|kPORT_MuxAlt7 = 7U, /*!< Chip-specific */
DECL|kPORT_MuxAlt8|enumerator|kPORT_MuxAlt8 = 8U, /*!< Chip-specific */
DECL|kPORT_MuxAlt9|enumerator|kPORT_MuxAlt9 = 9U, /*!< Chip-specific */
DECL|kPORT_MuxAsGpio|enumerator|kPORT_MuxAsGpio = 1U, /*!< Corresponding pin is configured as GPIO. */
DECL|kPORT_OpenDrainDisable|enumerator|kPORT_OpenDrainDisable = 0U, /*!< Open drain output is disabled. */
DECL|kPORT_OpenDrainEnable|enumerator|kPORT_OpenDrainEnable = 1U, /*!< Open drain output is enabled. */
DECL|kPORT_PassiveFilterDisable|enumerator|kPORT_PassiveFilterDisable = 0U, /*!< Passive input filter is disabled. */
DECL|kPORT_PassiveFilterEnable|enumerator|kPORT_PassiveFilterEnable = 1U, /*!< Passive input filter is enabled. */
DECL|kPORT_PinDisabledOrAnalog|enumerator|kPORT_PinDisabledOrAnalog = 0U, /*!< Corresponding pin is disabled, but is used as an analog pin. */
DECL|kPORT_PullDisable|enumerator|kPORT_PullDisable = 0U, /*!< Internal pull-up/down resistor is disabled. */
DECL|kPORT_PullDown|enumerator|kPORT_PullDown = 2U, /*!< Internal pull-down resistor is enabled. */
DECL|kPORT_PullUp|enumerator|kPORT_PullUp = 3U, /*!< Internal pull-up resistor is enabled. */
DECL|kPORT_SlowSlewRate|enumerator|kPORT_SlowSlewRate = 1U, /*!< Slow slew rate is configured. */
DECL|kPORT_UnlockRegister|enumerator|kPORT_UnlockRegister = 0U, /*!< Pin Control Register fields [15:0] are not locked. */
DECL|lockRegister|member|uint16_t lockRegister : 1; /*!< Lock/unlock the PCR field[15:0] */
DECL|mux|member|uint16_t mux : 3; /*!< Pin mux Configure */
DECL|openDrainEnable|member|uint16_t openDrainEnable : 1; /*!< Open drain enable/disable */
DECL|passiveFilterEnable|member|uint16_t passiveFilterEnable : 1; /*!< Passive filter enable/disable */
DECL|port_digital_filter_clock_source_t|typedef|} port_digital_filter_clock_source_t;
DECL|port_digital_filter_config_t|typedef|} port_digital_filter_config_t;
DECL|port_interrupt_t|typedef|} port_interrupt_t;
DECL|port_mux_t|typedef|} port_mux_t;
DECL|port_pin_config_t|typedef|} port_pin_config_t;
DECL|pullSelect|member|uint16_t pullSelect : 2; /*!< No-pull/pull-down/pull-up select */
DECL|slewRate|member|uint16_t slewRate : 1; /*!< Fast/slow slew rate Configure */
DECL|uint16_t|member|uint16_t : 1;
DECL|uint16_t|member|uint16_t : 1;
DECL|uint16_t|member|uint16_t : 1;
DECL|uint16_t|member|uint16_t : 1;
DECL|uint16_t|member|uint16_t : 1;
DECL|uint16_t|member|uint16_t : 1;
DECL|uint16_t|member|uint16_t : 1;
DECL|uint16_t|member|uint16_t : 3;
DECL|uint16_t|member|uint16_t : 4;
