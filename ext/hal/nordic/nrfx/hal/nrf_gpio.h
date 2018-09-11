DECL|GPIO_REG_LIST|macro|GPIO_REG_LIST
DECL|GPIO_REG_LIST|macro|GPIO_REG_LIST
DECL|NRF_GPIO_H__|macro|NRF_GPIO_H__
DECL|NRF_GPIO_PIN_D0H1|enumerator|NRF_GPIO_PIN_D0H1 = GPIO_PIN_CNF_DRIVE_D0H1, ///< !< Disconnect '0', high-drive '1'.
DECL|NRF_GPIO_PIN_D0S1|enumerator|NRF_GPIO_PIN_D0S1 = GPIO_PIN_CNF_DRIVE_D0S1, ///< !< Disconnect '0' standard '1'.
DECL|NRF_GPIO_PIN_DIR_INPUT|enumerator|NRF_GPIO_PIN_DIR_INPUT = GPIO_PIN_CNF_DIR_Input, ///< Input.
DECL|NRF_GPIO_PIN_DIR_OUTPUT|enumerator|NRF_GPIO_PIN_DIR_OUTPUT = GPIO_PIN_CNF_DIR_Output ///< Output.
DECL|NRF_GPIO_PIN_H0D1|enumerator|NRF_GPIO_PIN_H0D1 = GPIO_PIN_CNF_DRIVE_H0D1, ///< !< High-drive '0', disconnect '1'.
DECL|NRF_GPIO_PIN_H0H1|enumerator|NRF_GPIO_PIN_H0H1 = GPIO_PIN_CNF_DRIVE_H0H1, ///< !< High drive '0', high-drive '1'.
DECL|NRF_GPIO_PIN_H0S1|enumerator|NRF_GPIO_PIN_H0S1 = GPIO_PIN_CNF_DRIVE_H0S1, ///< !< High-drive '0', standard '1'.
DECL|NRF_GPIO_PIN_INPUT_CONNECT|enumerator|NRF_GPIO_PIN_INPUT_CONNECT = GPIO_PIN_CNF_INPUT_Connect, ///< Connect input buffer.
DECL|NRF_GPIO_PIN_INPUT_DISCONNECT|enumerator|NRF_GPIO_PIN_INPUT_DISCONNECT = GPIO_PIN_CNF_INPUT_Disconnect ///< Disconnect input buffer.
DECL|NRF_GPIO_PIN_MAP|macro|NRF_GPIO_PIN_MAP
DECL|NRF_GPIO_PIN_NOPULL|enumerator|NRF_GPIO_PIN_NOPULL = GPIO_PIN_CNF_PULL_Disabled, ///< Pin pull-up resistor disabled.
DECL|NRF_GPIO_PIN_NOSENSE|enumerator|NRF_GPIO_PIN_NOSENSE = GPIO_PIN_CNF_SENSE_Disabled, ///< Pin sense level disabled.
DECL|NRF_GPIO_PIN_PULLDOWN|enumerator|NRF_GPIO_PIN_PULLDOWN = GPIO_PIN_CNF_PULL_Pulldown, ///< Pin pull-down resistor enabled.
DECL|NRF_GPIO_PIN_PULLUP|enumerator|NRF_GPIO_PIN_PULLUP = GPIO_PIN_CNF_PULL_Pullup, ///< Pin pull-up resistor enabled.
DECL|NRF_GPIO_PIN_S0D1|enumerator|NRF_GPIO_PIN_S0D1 = GPIO_PIN_CNF_DRIVE_S0D1, ///< !< Standard '0', disconnect '1'.
DECL|NRF_GPIO_PIN_S0H1|enumerator|NRF_GPIO_PIN_S0H1 = GPIO_PIN_CNF_DRIVE_S0H1, ///< !< Standard '0', high-drive '1'.
DECL|NRF_GPIO_PIN_S0S1|enumerator|NRF_GPIO_PIN_S0S1 = GPIO_PIN_CNF_DRIVE_S0S1, ///< !< Standard '0', standard '1'.
DECL|NRF_GPIO_PIN_SENSE_HIGH|enumerator|NRF_GPIO_PIN_SENSE_HIGH = GPIO_PIN_CNF_SENSE_High, ///< Pin sense high level.
DECL|NRF_GPIO_PIN_SENSE_LOW|enumerator|NRF_GPIO_PIN_SENSE_LOW = GPIO_PIN_CNF_SENSE_Low, ///< Pin sense low level.
DECL|NUMBER_OF_PINS|macro|NUMBER_OF_PINS
DECL|NUMBER_OF_PINS|macro|NUMBER_OF_PINS
DECL|nrf_gpio_cfg_default|function|__STATIC_INLINE void nrf_gpio_cfg_default(uint32_t pin_number)
DECL|nrf_gpio_cfg_input|function|__STATIC_INLINE void nrf_gpio_cfg_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config)
DECL|nrf_gpio_cfg_output|function|__STATIC_INLINE void nrf_gpio_cfg_output(uint32_t pin_number)
DECL|nrf_gpio_cfg_sense_input|function|__STATIC_INLINE void nrf_gpio_cfg_sense_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config, nrf_gpio_pin_sense_t sense_config)
DECL|nrf_gpio_cfg_sense_set|function|__STATIC_INLINE void nrf_gpio_cfg_sense_set(uint32_t pin_number, nrf_gpio_pin_sense_t sense_config)
DECL|nrf_gpio_cfg_watcher|function|__STATIC_INLINE void nrf_gpio_cfg_watcher(uint32_t pin_number)
DECL|nrf_gpio_cfg|function|__STATIC_INLINE void nrf_gpio_cfg( uint32_t pin_number, nrf_gpio_pin_dir_t dir, nrf_gpio_pin_input_t input, nrf_gpio_pin_pull_t pull,
DECL|nrf_gpio_input_disconnect|function|__STATIC_INLINE void nrf_gpio_input_disconnect(uint32_t pin_number)
DECL|nrf_gpio_latches_read|function|__STATIC_INLINE void nrf_gpio_latches_read(uint32_t start_port, uint32_t length, uint32_t * p_masks)
DECL|nrf_gpio_pin_clear|function|__STATIC_INLINE void nrf_gpio_pin_clear(uint32_t pin_number)
DECL|nrf_gpio_pin_dir_get|function|__STATIC_INLINE nrf_gpio_pin_dir_t nrf_gpio_pin_dir_get(uint32_t pin_number)
DECL|nrf_gpio_pin_dir_set|function|__STATIC_INLINE void nrf_gpio_pin_dir_set(uint32_t pin_number, nrf_gpio_pin_dir_t direction)
DECL|nrf_gpio_pin_dir_t|typedef|} nrf_gpio_pin_dir_t;
DECL|nrf_gpio_pin_drive_t|typedef|} nrf_gpio_pin_drive_t;
DECL|nrf_gpio_pin_input_t|typedef|} nrf_gpio_pin_input_t;
DECL|nrf_gpio_pin_latch_clear|function|__STATIC_INLINE void nrf_gpio_pin_latch_clear(uint32_t pin_number)
DECL|nrf_gpio_pin_latch_get|function|__STATIC_INLINE uint32_t nrf_gpio_pin_latch_get(uint32_t pin_number)
DECL|nrf_gpio_pin_out_read|function|__STATIC_INLINE uint32_t nrf_gpio_pin_out_read(uint32_t pin_number)
DECL|nrf_gpio_pin_port_decode|function|__STATIC_INLINE NRF_GPIO_Type * nrf_gpio_pin_port_decode(uint32_t * p_pin)
DECL|nrf_gpio_pin_pull_get|function|__STATIC_INLINE nrf_gpio_pin_pull_t nrf_gpio_pin_pull_get(uint32_t pin_number)
DECL|nrf_gpio_pin_pull_t|typedef|} nrf_gpio_pin_pull_t;
DECL|nrf_gpio_pin_read|function|__STATIC_INLINE uint32_t nrf_gpio_pin_read(uint32_t pin_number)
DECL|nrf_gpio_pin_sense_get|function|__STATIC_INLINE nrf_gpio_pin_sense_t nrf_gpio_pin_sense_get(uint32_t pin_number)
DECL|nrf_gpio_pin_sense_t|typedef|} nrf_gpio_pin_sense_t;
DECL|nrf_gpio_pin_set|function|__STATIC_INLINE void nrf_gpio_pin_set(uint32_t pin_number)
DECL|nrf_gpio_pin_toggle|function|__STATIC_INLINE void nrf_gpio_pin_toggle(uint32_t pin_number)
DECL|nrf_gpio_pin_write|function|__STATIC_INLINE void nrf_gpio_pin_write(uint32_t pin_number, uint32_t value)
DECL|nrf_gpio_port_dir_input_set|function|__STATIC_INLINE void nrf_gpio_port_dir_input_set(NRF_GPIO_Type * p_reg, uint32_t in_mask)
DECL|nrf_gpio_port_dir_output_set|function|__STATIC_INLINE void nrf_gpio_port_dir_output_set(NRF_GPIO_Type * p_reg, uint32_t out_mask)
DECL|nrf_gpio_port_dir_read|function|__STATIC_INLINE uint32_t nrf_gpio_port_dir_read(NRF_GPIO_Type const * p_reg)
DECL|nrf_gpio_port_dir_write|function|__STATIC_INLINE void nrf_gpio_port_dir_write(NRF_GPIO_Type * p_reg, uint32_t value)
DECL|nrf_gpio_port_in_read|function|__STATIC_INLINE uint32_t nrf_gpio_port_in_read(NRF_GPIO_Type const * p_reg)
DECL|nrf_gpio_port_out_clear|function|__STATIC_INLINE void nrf_gpio_port_out_clear(NRF_GPIO_Type * p_reg, uint32_t clr_mask)
DECL|nrf_gpio_port_out_read|function|__STATIC_INLINE uint32_t nrf_gpio_port_out_read(NRF_GPIO_Type const * p_reg)
DECL|nrf_gpio_port_out_set|function|__STATIC_INLINE void nrf_gpio_port_out_set(NRF_GPIO_Type * p_reg, uint32_t set_mask)
DECL|nrf_gpio_port_out_write|function|__STATIC_INLINE void nrf_gpio_port_out_write(NRF_GPIO_Type * p_reg, uint32_t value)
DECL|nrf_gpio_ports_read|function|__STATIC_INLINE void nrf_gpio_ports_read(uint32_t start_port, uint32_t length, uint32_t * p_masks)
DECL|nrf_gpio_range_cfg_input|function|__STATIC_INLINE void nrf_gpio_range_cfg_input(uint32_t pin_range_start, uint32_t pin_range_end, nrf_gpio_pin_pull_t pull_config)
DECL|nrf_gpio_range_cfg_output|function|__STATIC_INLINE void nrf_gpio_range_cfg_output(uint32_t pin_range_start, uint32_t pin_range_end)
