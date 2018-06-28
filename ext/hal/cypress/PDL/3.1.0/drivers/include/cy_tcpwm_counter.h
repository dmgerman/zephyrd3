DECL|CY_TCPWM_COUNTER_CONTINUOUS|macro|CY_TCPWM_COUNTER_CONTINUOUS
DECL|CY_TCPWM_COUNTER_COUNT_DOWN|macro|CY_TCPWM_COUNTER_COUNT_DOWN
DECL|CY_TCPWM_COUNTER_COUNT_UP_DOWN_1|macro|CY_TCPWM_COUNTER_COUNT_UP_DOWN_1
DECL|CY_TCPWM_COUNTER_COUNT_UP_DOWN_2|macro|CY_TCPWM_COUNTER_COUNT_UP_DOWN_2
DECL|CY_TCPWM_COUNTER_COUNT_UP|macro|CY_TCPWM_COUNTER_COUNT_UP
DECL|CY_TCPWM_COUNTER_H|macro|CY_TCPWM_COUNTER_H
DECL|CY_TCPWM_COUNTER_MODE_CAPTURE|macro|CY_TCPWM_COUNTER_MODE_CAPTURE
DECL|CY_TCPWM_COUNTER_MODE_COMPARE|macro|CY_TCPWM_COUNTER_MODE_COMPARE
DECL|CY_TCPWM_COUNTER_ONESHOT|macro|CY_TCPWM_COUNTER_ONESHOT
DECL|CY_TCPWM_COUNTER_PRESCALER_DIVBY_128|macro|CY_TCPWM_COUNTER_PRESCALER_DIVBY_128
DECL|CY_TCPWM_COUNTER_PRESCALER_DIVBY_16|macro|CY_TCPWM_COUNTER_PRESCALER_DIVBY_16
DECL|CY_TCPWM_COUNTER_PRESCALER_DIVBY_1|macro|CY_TCPWM_COUNTER_PRESCALER_DIVBY_1
DECL|CY_TCPWM_COUNTER_PRESCALER_DIVBY_2|macro|CY_TCPWM_COUNTER_PRESCALER_DIVBY_2
DECL|CY_TCPWM_COUNTER_PRESCALER_DIVBY_32|macro|CY_TCPWM_COUNTER_PRESCALER_DIVBY_32
DECL|CY_TCPWM_COUNTER_PRESCALER_DIVBY_4|macro|CY_TCPWM_COUNTER_PRESCALER_DIVBY_4
DECL|CY_TCPWM_COUNTER_PRESCALER_DIVBY_64|macro|CY_TCPWM_COUNTER_PRESCALER_DIVBY_64
DECL|CY_TCPWM_COUNTER_PRESCALER_DIVBY_8|macro|CY_TCPWM_COUNTER_PRESCALER_DIVBY_8
DECL|CY_TCPWM_COUNTER_STATUS_COUNTER_RUNNING|macro|CY_TCPWM_COUNTER_STATUS_COUNTER_RUNNING
DECL|CY_TCPWM_COUNTER_STATUS_DOWN_COUNTING|macro|CY_TCPWM_COUNTER_STATUS_DOWN_COUNTING
DECL|CY_TCPWM_COUNTER_STATUS_UP_COUNTING|macro|CY_TCPWM_COUNTER_STATUS_UP_COUNTING
DECL|Cy_TCPWM_Counter_Disable|function|__STATIC_INLINE void Cy_TCPWM_Counter_Disable(TCPWM_Type *base, uint32_t cntNum)
DECL|Cy_TCPWM_Counter_EnableCompareSwap|function|__STATIC_INLINE void Cy_TCPWM_Counter_EnableCompareSwap(TCPWM_Type *base, uint32_t cntNum, bool enable)
DECL|Cy_TCPWM_Counter_Enable|function|__STATIC_INLINE void Cy_TCPWM_Counter_Enable(TCPWM_Type *base, uint32_t cntNum)
DECL|Cy_TCPWM_Counter_GetCaptureBuf|function|__STATIC_INLINE uint32_t Cy_TCPWM_Counter_GetCaptureBuf(TCPWM_Type const *base, uint32_t cntNum)
DECL|Cy_TCPWM_Counter_GetCapture|function|__STATIC_INLINE uint32_t Cy_TCPWM_Counter_GetCapture(TCPWM_Type const *base, uint32_t cntNum)
DECL|Cy_TCPWM_Counter_GetCompare0|function|__STATIC_INLINE uint32_t Cy_TCPWM_Counter_GetCompare0(TCPWM_Type const *base, uint32_t cntNum)
DECL|Cy_TCPWM_Counter_GetCompare1|function|__STATIC_INLINE uint32_t Cy_TCPWM_Counter_GetCompare1(TCPWM_Type const *base, uint32_t cntNum)
DECL|Cy_TCPWM_Counter_GetCounter|function|__STATIC_INLINE uint32_t Cy_TCPWM_Counter_GetCounter(TCPWM_Type const *base, uint32_t cntNum)
DECL|Cy_TCPWM_Counter_GetPeriod|function|__STATIC_INLINE uint32_t Cy_TCPWM_Counter_GetPeriod(TCPWM_Type const *base, uint32_t cntNum)
DECL|Cy_TCPWM_Counter_GetStatus|function|__STATIC_INLINE uint32_t Cy_TCPWM_Counter_GetStatus(TCPWM_Type const *base, uint32_t cntNum)
DECL|Cy_TCPWM_Counter_SetCompare0|function|__STATIC_INLINE void Cy_TCPWM_Counter_SetCompare0(TCPWM_Type *base, uint32_t cntNum, uint32_t compare0)
DECL|Cy_TCPWM_Counter_SetCompare1|function|__STATIC_INLINE void Cy_TCPWM_Counter_SetCompare1(TCPWM_Type *base, uint32_t cntNum, uint32_t compare1)
DECL|Cy_TCPWM_Counter_SetCounter|function|__STATIC_INLINE void Cy_TCPWM_Counter_SetCounter(TCPWM_Type *base, uint32_t cntNum, uint32_t count)
DECL|Cy_TCPWM_Counter_SetPeriod|function|__STATIC_INLINE void Cy_TCPWM_Counter_SetPeriod(TCPWM_Type *base, uint32_t cntNum, uint32_t period)
DECL|captureInputMode|member|uint32_t captureInputMode; /**< Configures how the capture input behaves. See \ref group_tcpwm_input_modes */
DECL|captureInput|member|uint32_t captureInput;
DECL|clockPrescaler|member|uint32_t clockPrescaler;
DECL|compare0|member|uint32_t compare0; /**< Sets the value for Compare0*/
DECL|compare1|member|uint32_t compare1; /**< Sets the value for Compare1*/
DECL|compareOrCapture|member|uint32_t compareOrCapture;
DECL|countDirection|member|uint32_t countDirection; /**< Sets the counter direction. See \ref group_tcpwm_counter_direction */
DECL|countInputMode|member|uint32_t countInputMode; /**< Configures how the count input behaves. See \ref group_tcpwm_input_modes */
DECL|countInput|member|uint32_t countInput;
DECL|cy_stc_tcpwm_counter_config_t|typedef|}cy_stc_tcpwm_counter_config_t;
DECL|cy_stc_tcpwm_counter_config|struct|typedef struct cy_stc_tcpwm_counter_config
DECL|enableCompareSwap|member|bool enableCompareSwap; /**< If enabled, the compare values are swapped each time the comparison is true */
DECL|interruptSources|member|uint32_t interruptSources;
DECL|period|member|uint32_t period; /**< Sets the period of the counter */
DECL|reloadInputMode|member|uint32_t reloadInputMode; /**< Configures how the reload input behaves. See \ref group_tcpwm_input_modes */
DECL|reloadInput|member|uint32_t reloadInput;
DECL|runMode|member|uint32_t runMode; /**< Sets the Counter Timer Run mode. See \ref group_tcpwm_counter_run_modes */
DECL|startInputMode|member|uint32_t startInputMode; /**< Configures how the start input behaves. See \ref group_tcpwm_input_modes */
DECL|startInput|member|uint32_t startInput;
DECL|stopInputMode|member|uint32_t stopInputMode; /**< Configures how the stop input behaves. See \ref group_tcpwm_input_modes */
DECL|stopInput|member|uint32_t stopInput;
