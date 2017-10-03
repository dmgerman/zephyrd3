DECL|PWMTimerCC32XX_GPIO10|macro|PWMTimerCC32XX_GPIO10
DECL|PWMTimerCC32XX_GPIO11|macro|PWMTimerCC32XX_GPIO11
DECL|PWMTimerCC32XX_GPIO24|macro|PWMTimerCC32XX_GPIO24
DECL|PWMTimerCC32XX_GPIO25|macro|PWMTimerCC32XX_GPIO25
DECL|PWMTimerCC32XX_GPIO9|macro|PWMTimerCC32XX_GPIO9
DECL|PWMTimerCC32XX_GPIONONE|macro|PWMTimerCC32XX_GPIONONE
DECL|PWMTimerCC32XX_HWAttrsV2|struct|typedef struct PWMTimerCC32XX_HWAttrsV2 {
DECL|PWMTimerCC32XX_HWAttrsV2|typedef|} PWMTimerCC32XX_HWAttrsV2;
DECL|PWMTimerCC32XX_Object|struct|typedef struct PWMTimerCC32XX_Object {
DECL|PWMTimerCC32XX_Object|typedef|} PWMTimerCC32XX_Object;
DECL|PWMTimerCC32XX_PIN_01|macro|PWMTimerCC32XX_PIN_01
DECL|PWMTimerCC32XX_PIN_02|macro|PWMTimerCC32XX_PIN_02
DECL|PWMTimerCC32XX_PIN_17|macro|PWMTimerCC32XX_PIN_17
DECL|PWMTimerCC32XX_PIN_19|macro|PWMTimerCC32XX_PIN_19
DECL|PWMTimerCC32XX_PIN_21|macro|PWMTimerCC32XX_PIN_21
DECL|PWMTimerCC32XX_PIN_64|macro|PWMTimerCC32XX_PIN_64
DECL|PWMTimerCC32XX_T0A|macro|PWMTimerCC32XX_T0A
DECL|PWMTimerCC32XX_T0B|macro|PWMTimerCC32XX_T0B
DECL|PWMTimerCC32XX_T1A|macro|PWMTimerCC32XX_T1A
DECL|PWMTimerCC32XX_T1B|macro|PWMTimerCC32XX_T1B
DECL|PWMTimerCC32XX_T2A|macro|PWMTimerCC32XX_T2A
DECL|PWMTimerCC32XX_T2B|macro|PWMTimerCC32XX_T2B
DECL|PWMTimerCC32XX_T3A|macro|PWMTimerCC32XX_T3A
DECL|PWMTimerCC32XX_T3B|macro|PWMTimerCC32XX_T3B
DECL|dutyUnits|member|PWM_Duty_Units dutyUnits; /* Current duty cycle unit */
DECL|duty|member|uint32_t duty; /* Current duty cycle in Duty_Unites */
DECL|idleLevel|member|PWM_IdleLevel idleLevel; /* PWM idle level when stopped / not started */
DECL|isOpen|member|bool isOpen; /* open flag used to check if PWM is opened */
DECL|periodUnits|member|PWM_Period_Units periodUnits; /* Current period unit */
DECL|period|member|uint32_t period; /* Current period PERIOD_Units */
DECL|postNotify|member|Power_NotifyObj postNotify;
DECL|pwmPin|member|uint32_t pwmPin; /*!< Pin to output PWM signal on
DECL|pwmStarted|member|bool pwmStarted; /* Used to gate Power_set/releaseConstraint() calls */
DECL|ti_driver_pwm_PWMTimerCC32XX__include|macro|ti_driver_pwm_PWMTimerCC32XX__include
