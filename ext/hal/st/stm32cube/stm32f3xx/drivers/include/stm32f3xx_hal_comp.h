DECL|BlankingSrce|member|uint32_t BlankingSrce; /*!< Selects the output blanking source of the comparator.
DECL|COMP_HandleTypeDef|typedef|}COMP_HandleTypeDef;
DECL|COMP_InitTypeDef|typedef|}COMP_InitTypeDef;
DECL|COMP_OUTPUTLEVEL_HIGH|macro|COMP_OUTPUTLEVEL_HIGH
DECL|COMP_OUTPUTLEVEL_LOW|macro|COMP_OUTPUTLEVEL_LOW
DECL|COMP_OUTPUTPOL_INVERTED|macro|COMP_OUTPUTPOL_INVERTED
DECL|COMP_OUTPUTPOL_NONINVERTED|macro|COMP_OUTPUTPOL_NONINVERTED
DECL|COMP_STATE_BIT_LOCK|macro|COMP_STATE_BIT_LOCK
DECL|COMP_TRIGGERMODE_EVENT_FALLING|macro|COMP_TRIGGERMODE_EVENT_FALLING
DECL|COMP_TRIGGERMODE_EVENT_RISING_FALLING|macro|COMP_TRIGGERMODE_EVENT_RISING_FALLING
DECL|COMP_TRIGGERMODE_EVENT_RISING|macro|COMP_TRIGGERMODE_EVENT_RISING
DECL|COMP_TRIGGERMODE_IT_FALLING|macro|COMP_TRIGGERMODE_IT_FALLING
DECL|COMP_TRIGGERMODE_IT_RISING_FALLING|macro|COMP_TRIGGERMODE_IT_RISING_FALLING
DECL|COMP_TRIGGERMODE_IT_RISING|macro|COMP_TRIGGERMODE_IT_RISING
DECL|COMP_TRIGGERMODE_NONE|macro|COMP_TRIGGERMODE_NONE
DECL|HAL_COMP_STATE_BUSY_LOCKED|enumerator|HAL_COMP_STATE_BUSY_LOCKED = 0x12 /*!< COMP is running and the configuration is locked */
DECL|HAL_COMP_STATE_BUSY|enumerator|HAL_COMP_STATE_BUSY = 0x02, /*!< COMP is running */
DECL|HAL_COMP_STATE_READY_LOCKED|enumerator|HAL_COMP_STATE_READY_LOCKED = 0x11, /*!< COMP initialized but the configuration is locked */
DECL|HAL_COMP_STATE_READY|enumerator|HAL_COMP_STATE_READY = 0x01, /*!< COMP initialized and ready for use */
DECL|HAL_COMP_STATE_RESET|enumerator|HAL_COMP_STATE_RESET = 0x00, /*!< COMP not yet initialized or disabled */
DECL|HAL_COMP_StateTypeDef|typedef|}HAL_COMP_StateTypeDef;
DECL|Hysteresis|member|uint32_t Hysteresis; /*!< Selects the hysteresis voltage of the comparator.
DECL|IS_COMP_OUTPUTPOL|macro|IS_COMP_OUTPUTPOL
DECL|IS_COMP_TRIGGERMODE|macro|IS_COMP_TRIGGERMODE
DECL|Init|member|COMP_InitTypeDef Init; /*!< COMP required parameters */
DECL|Instance|member|COMP_TypeDef *Instance; /*!< Register base address */
DECL|InvertingInput|member|uint32_t InvertingInput; /*!< Selects the inverting input of the comparator.
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< Locking object */
DECL|Mode|member|uint32_t Mode; /*!< Selects the operating consumption mode of the comparator
DECL|NonInvertingInput|member|uint32_t NonInvertingInput; /*!< Selects the non inverting input of the comparator.
DECL|OutputPol|member|uint32_t OutputPol; /*!< Selects the output polarity of the comparator.
DECL|Output|member|uint32_t Output; /*!< Selects the output redirection of the comparator.
DECL|State|member|__IO HAL_COMP_StateTypeDef State; /*!< COMP communication state */
DECL|TriggerMode|member|uint32_t TriggerMode; /*!< Selects the trigger mode of the comparator (interrupt mode).
DECL|WindowMode|member|uint32_t WindowMode; /*!< Selects the window mode of the comparator X (X=2, 4 or 6 if available).
DECL|__HAL_COMP_RESET_HANDLE_STATE|macro|__HAL_COMP_RESET_HANDLE_STATE
DECL|__STM32F3xx_HAL_COMP_H|macro|__STM32F3xx_HAL_COMP_H
