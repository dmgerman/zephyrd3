DECL|Power_ACTIVE|macro|Power_ACTIVE
DECL|Power_CHANGING_PERF_LEVEL|macro|Power_CHANGING_PERF_LEVEL
DECL|Power_EBUSY|macro|Power_EBUSY
DECL|Power_ECHANGE_NOT_ALLOWED|macro|Power_ECHANGE_NOT_ALLOWED
DECL|Power_EFAIL|macro|Power_EFAIL
DECL|Power_EINVALIDINPUT|macro|Power_EINVALIDINPUT
DECL|Power_EINVALIDPOINTER|macro|Power_EINVALIDPOINTER
DECL|Power_ENTERING_SHUTDOWN|macro|Power_ENTERING_SHUTDOWN
DECL|Power_ENTERING_SLEEP|macro|Power_ENTERING_SLEEP
DECL|Power_EXITING_SLEEP|macro|Power_EXITING_SLEEP
DECL|Power_NOTIFYDONE|macro|Power_NOTIFYDONE
DECL|Power_NOTIFYERROR|macro|Power_NOTIFYERROR
DECL|Power_NotifyFxn|typedef|typedef int_fast16_t (*Power_NotifyFxn)(uint_fast16_t eventType,
DECL|Power_NotifyObj_|struct|typedef struct Power_NotifyObj_ {
DECL|Power_NotifyObj|typedef|} Power_NotifyObj;
DECL|Power_PolicyFxn|typedef|typedef void (*Power_PolicyFxn)(void);
DECL|Power_PolicyInitFxn|typedef|typedef void (*Power_PolicyInitFxn)(void);
DECL|Power_RESUME|macro|Power_RESUME
DECL|Power_SOK|macro|Power_SOK
DECL|Power_TOTAL|macro|Power_TOTAL
DECL|clientArg|member|uintptr_t clientArg; /*!< argument provided by client */
DECL|eventTypes|member|uint_fast16_t eventTypes; /*!< the event type */
DECL|link|member|List_Elem link; /*!< for placing on the notify list */
DECL|notifyFxn|member|Power_NotifyFxn notifyFxn; /*!< notification function */
DECL|ti_drivers_Power__include|macro|ti_drivers_Power__include
