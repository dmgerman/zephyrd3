DECL|TimerCC32XX_HWAttrs_|struct|typedef struct TimerCC32XX_HWAttrs_ {
DECL|TimerCC32XX_HWAttrs|typedef|} TimerCC32XX_HWAttrs;
DECL|TimerCC32XX_Object_|struct|typedef struct TimerCC32XX_Object_ {
DECL|TimerCC32XX_Object|typedef|} TimerCC32XX_Object;
DECL|TimerCC32XX_SubTimer_|enum|typedef enum TimerCC32XX_SubTimer_ {
DECL|TimerCC32XX_SubTimer|typedef|} TimerCC32XX_SubTimer;
DECL|TimerCC32XX_timer16A|enumerator|TimerCC32XX_timer16A = 0x0001, /*!< Half width timer A */
DECL|TimerCC32XX_timer16B|enumerator|TimerCC32XX_timer16B = 0x0002, /*!< Half width timer B */
DECL|TimerCC32XX_timer32|enumerator|TimerCC32XX_timer32 = 0x0003, /*!< Full width timer */
DECL|baseAddress|member|uint32_t baseAddress;
DECL|callBack|member|Timer_CallBackFxn callBack;
DECL|hwiHandle|member|HwiP_Handle hwiHandle;
DECL|intNum|member|uint32_t intNum;
DECL|intPriority|member|uint32_t intPriority;
DECL|isRunning|member|bool isRunning;
DECL|mode|member|Timer_Mode mode;
DECL|notifyObj|member|Power_NotifyObj notifyObj;
DECL|period|member|uint32_t period;
DECL|prescaler|member|uint32_t prescaler;
DECL|subTimer|member|TimerCC32XX_SubTimer subTimer;
DECL|ti_drivers_timer_TimerCC32XX__include|macro|ti_drivers_timer_TimerCC32XX__include
DECL|timerSem|member|SemaphoreP_Handle timerSem;
DECL|timer|member|uint32_t timer;
