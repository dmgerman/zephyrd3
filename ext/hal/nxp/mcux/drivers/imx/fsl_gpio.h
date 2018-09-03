DECL|FSL_GPIO_DRIVER_VERSION|macro|FSL_GPIO_DRIVER_VERSION
DECL|GPIO_ClearPinsInterruptFlags|function|static inline void GPIO_ClearPinsInterruptFlags(GPIO_Type *base, uint32_t mask)
DECL|GPIO_ClearPinsOutput|function|static inline void GPIO_ClearPinsOutput(GPIO_Type *base, uint32_t mask)
DECL|GPIO_DisableInterrupts|function|static inline void GPIO_DisableInterrupts(GPIO_Type *base, uint32_t mask)
DECL|GPIO_EnableInterrupts|function|static inline void GPIO_EnableInterrupts(GPIO_Type *base, uint32_t mask)
DECL|GPIO_GetPinsInterruptFlags|function|static inline uint32_t GPIO_GetPinsInterruptFlags(GPIO_Type *base)
DECL|GPIO_PinReadPadStatus|function|static inline uint8_t GPIO_PinReadPadStatus(GPIO_Type *base, uint32_t pin)
DECL|GPIO_PinRead|function|static inline uint32_t GPIO_PinRead(GPIO_Type *base, uint32_t pin)
DECL|GPIO_PortClearInterruptFlags|function|static inline void GPIO_PortClearInterruptFlags(GPIO_Type *base, uint32_t mask)
DECL|GPIO_PortClear|function|static inline void GPIO_PortClear(GPIO_Type *base, uint32_t mask)
DECL|GPIO_PortDisableInterrupts|function|static inline void GPIO_PortDisableInterrupts(GPIO_Type *base, uint32_t mask)
DECL|GPIO_PortEnableInterrupts|function|static inline void GPIO_PortEnableInterrupts(GPIO_Type *base, uint32_t mask)
DECL|GPIO_PortGetInterruptFlags|function|static inline uint32_t GPIO_PortGetInterruptFlags(GPIO_Type *base)
DECL|GPIO_PortSet|function|static inline void GPIO_PortSet(GPIO_Type *base, uint32_t mask)
DECL|GPIO_PortToggle|function|static inline void GPIO_PortToggle(GPIO_Type *base, uint32_t mask)
DECL|GPIO_ReadPadStatus|function|static inline uint8_t GPIO_ReadPadStatus(GPIO_Type *base, uint32_t pin)
DECL|GPIO_ReadPinInput|function|static inline uint32_t GPIO_ReadPinInput(GPIO_Type *base, uint32_t pin)
DECL|GPIO_SetPinInterruptConfig|function|static inline void GPIO_SetPinInterruptConfig(GPIO_Type *base, uint32_t pin, gpio_interrupt_mode_t pinInterruptMode)
DECL|GPIO_SetPinsOutput|function|static inline void GPIO_SetPinsOutput(GPIO_Type *base, uint32_t mask)
DECL|GPIO_WritePinOutput|function|static inline void GPIO_WritePinOutput(GPIO_Type *base, uint32_t pin, uint8_t output)
DECL|_FSL_GPIO_H_|macro|_FSL_GPIO_H_
DECL|_gpio_interrupt_mode|enum|typedef enum _gpio_interrupt_mode
DECL|_gpio_pin_config|struct|typedef struct _gpio_pin_config
DECL|_gpio_pin_direction|enum|typedef enum _gpio_pin_direction
DECL|direction|member|gpio_pin_direction_t direction; /*!< Specifies the pin direction. */
DECL|gpio_interrupt_mode_t|typedef|} gpio_interrupt_mode_t;
DECL|gpio_pin_config_t|typedef|} gpio_pin_config_t;
DECL|gpio_pin_direction_t|typedef|} gpio_pin_direction_t;
DECL|interruptMode|member|interruptMode; /*!< Specifies the pin interrupt mode, a value of @ref gpio_interrupt_mode_t. */
DECL|kGPIO_DigitalInput|enumerator|kGPIO_DigitalInput = 0U, /*!< Set current pin as digital input.*/
DECL|kGPIO_DigitalOutput|enumerator|kGPIO_DigitalOutput = 1U, /*!< Set current pin as digital output.*/
DECL|kGPIO_IntFallingEdge|enumerator|kGPIO_IntFallingEdge = 4U, /*!< Set current pin interrupt is falling-edge sensitive.*/
DECL|kGPIO_IntHighLevel|enumerator|kGPIO_IntHighLevel = 2U, /*!< Set current pin interrupt is high-level sensitive.*/
DECL|kGPIO_IntLowLevel|enumerator|kGPIO_IntLowLevel = 1U, /*!< Set current pin interrupt is low-level sensitive.*/
DECL|kGPIO_IntRisingEdge|enumerator|kGPIO_IntRisingEdge = 3U, /*!< Set current pin interrupt is rising-edge sensitive.*/
DECL|kGPIO_IntRisingOrFallingEdge|enumerator|kGPIO_IntRisingOrFallingEdge = 5U, /*!< Enable the edge select bit to override the ICR register's configuration.*/
DECL|kGPIO_NoIntmode|enumerator|kGPIO_NoIntmode = 0U, /*!< Set current pin general IO functionality.*/
DECL|outputLogic|member|uint8_t outputLogic; /*!< Set a default output logic, which has no use in input */
