DECL|GPIO_ClearStatusFlag|function|static inline void GPIO_ClearStatusFlag(GPIO_Type* base, uint32_t pin)
DECL|GPIO_IsIntPending|function|static inline bool GPIO_IsIntPending(GPIO_Type* base, uint32_t pin)
DECL|GPIO_ReadPadStatus|function|static inline uint8_t GPIO_ReadPadStatus(GPIO_Type* base, uint32_t pin)
DECL|GPIO_ReadPinInput|function|static inline uint8_t GPIO_ReadPinInput(GPIO_Type* base, uint32_t pin)
DECL|GPIO_ReadPinOutput|function|static inline uint8_t GPIO_ReadPinOutput(GPIO_Type* base, uint32_t pin)
DECL|GPIO_ReadPortInput|function|static inline uint32_t GPIO_ReadPortInput(GPIO_Type* base)
DECL|GPIO_ReadPortOutput|function|static inline uint32_t GPIO_ReadPortOutput(GPIO_Type* base)
DECL|GPIO_WritePortOutput|function|static inline void GPIO_WritePortOutput(GPIO_Type* base, uint32_t portVal)
DECL|__GPIO_IMX_H__|macro|__GPIO_IMX_H__
DECL|_gpio_init_config|struct|typedef struct _gpio_init_config
DECL|_gpio_interrupt_mode|enum|typedef enum _gpio_interrupt_mode
DECL|_gpio_pin_action|enum|typedef enum _gpio_pin_action
DECL|_gpio_pin_direction|enum|typedef enum _gpio_pin_direction
DECL|direction|member|gpio_pin_direction_t direction; /*!< Specifies the pin direction. */
DECL|gpioDigitalInput|enumerator|gpioDigitalInput = 0U, /*!< Set current pin as digital input.*/
DECL|gpioDigitalOutput|enumerator|gpioDigitalOutput = 1U, /*!< Set current pin as digital output.*/
DECL|gpioIntFallingEdge|enumerator|gpioIntFallingEdge = 3U, /*!< Set current pin interrupt is falling-edge sensitive.*/
DECL|gpioIntHighLevel|enumerator|gpioIntHighLevel = 1U, /*!< Set current pin interrupt is high-level sensitive.*/
DECL|gpioIntLowLevel|enumerator|gpioIntLowLevel = 0U, /*!< Set current pin interrupt is low-level sensitive.*/
DECL|gpioIntRisingEdge|enumerator|gpioIntRisingEdge = 2U, /*!< Set current pin interrupt is rising-edge sensitive.*/
DECL|gpioNoIntmode|enumerator|gpioNoIntmode = 4U, /*!< Set current pin general IO functionality. */
DECL|gpioPinClear|enumerator|gpioPinClear = 0U, /*!< Clear GPIO Pin.*/
DECL|gpioPinSet|enumerator|gpioPinSet = 1U, /*!< Set GPIO Pin.*/
DECL|gpio_init_config_t|typedef|} gpio_init_config_t;
DECL|gpio_interrupt_mode_t|typedef|} gpio_interrupt_mode_t;
DECL|gpio_pin_action_t|typedef|} gpio_pin_action_t;
DECL|gpio_pin_direction_t|typedef|} gpio_pin_direction_t;
DECL|interruptMode|member|gpio_interrupt_mode_t interruptMode; /*!< Specifies the pin interrupt mode, a value of @ref gpio_interrupt_mode_t. */
DECL|pin|member|uint32_t pin; /*!< Specifies the pin number. */
