DECL|FSL_GPIO_DRIVER_VERSION|macro|FSL_GPIO_DRIVER_VERSION
DECL|FSL_GPIO_H_|macro|FSL_GPIO_H_
DECL|GPIO_ClearPinsOutput|function|static inline void GPIO_ClearPinsOutput(GPIO_Type *base, uint32_t port, uint32_t mask)
DECL|GPIO_ReadMPort|function|static inline uint32_t GPIO_ReadMPort(GPIO_Type *base, uint32_t port)
DECL|GPIO_ReadPinInput|function|static inline uint32_t GPIO_ReadPinInput(GPIO_Type *base, uint32_t port, uint32_t pin)
DECL|GPIO_ReadPinsInput|function|static inline uint32_t GPIO_ReadPinsInput(GPIO_Type *base, uint32_t port)
DECL|GPIO_SetPinsOutput|function|static inline void GPIO_SetPinsOutput(GPIO_Type *base, uint32_t port, uint32_t mask)
DECL|GPIO_SetPortMask|function|static inline void GPIO_SetPortMask(GPIO_Type *base, uint32_t port, uint32_t mask)
DECL|GPIO_TogglePinsOutput|function|static inline void GPIO_TogglePinsOutput(GPIO_Type *base, uint32_t port, uint32_t mask)
DECL|GPIO_WriteMPort|function|static inline void GPIO_WriteMPort(GPIO_Type *base, uint32_t port, uint32_t output)
DECL|GPIO_WritePinOutput|function|static inline void GPIO_WritePinOutput(GPIO_Type *base, uint32_t port, uint32_t pin, uint8_t output)
DECL|_gpio_pin_config|struct|typedef struct _gpio_pin_config
DECL|_gpio_pin_direction|enum|typedef enum _gpio_pin_direction
DECL|gpio_pin_config_t|typedef|} gpio_pin_config_t;
DECL|gpio_pin_direction_t|typedef|} gpio_pin_direction_t;
DECL|kGPIO_DigitalInput|enumerator|kGPIO_DigitalInput = 0U, /*!< Set current pin as digital input*/
DECL|kGPIO_DigitalOutput|enumerator|kGPIO_DigitalOutput = 1U, /*!< Set current pin as digital output*/
DECL|outputLogic|member|uint8_t outputLogic; /*!< Set default output logic, no use in input */
DECL|pinDirection|member|gpio_pin_direction_t pinDirection; /*!< GPIO direction, input or output */
