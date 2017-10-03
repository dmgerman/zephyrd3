DECL|PIN_ALREADY_ALLOCATED|enumerator|PIN_ALREADY_ALLOCATED = 1, ///< Operation failed, some pin already allocated
DECL|PIN_BM_ALL|macro|PIN_BM_ALL
DECL|PIN_BM_DRVSTR|macro|PIN_BM_DRVSTR
DECL|PIN_BM_GPIO_OUTPUT_EN|macro|PIN_BM_GPIO_OUTPUT_EN
DECL|PIN_BM_GPIO_OUTPUT_VAL|macro|PIN_BM_GPIO_OUTPUT_VAL
DECL|PIN_BM_HYSTERESIS|macro|PIN_BM_HYSTERESIS
DECL|PIN_BM_INPUT_EN|macro|PIN_BM_INPUT_EN
DECL|PIN_BM_INPUT_MODE|macro|PIN_BM_INPUT_MODE
DECL|PIN_BM_INV_INOUT|macro|PIN_BM_INV_INOUT
DECL|PIN_BM_IRQ|macro|PIN_BM_IRQ
DECL|PIN_BM_OUTPUT_BUF|macro|PIN_BM_OUTPUT_BUF
DECL|PIN_BM_OUTPUT_MODE|macro|PIN_BM_OUTPUT_MODE
DECL|PIN_BM_PULLING|macro|PIN_BM_PULLING
DECL|PIN_BM_SLEWCTRL|macro|PIN_BM_SLEWCTRL
DECL|PIN_Config|typedef|typedef uint32_t PIN_Config;
DECL|PIN_DRVSTR_MAX|macro|PIN_DRVSTR_MAX
DECL|PIN_DRVSTR_MED|macro|PIN_DRVSTR_MED
DECL|PIN_DRVSTR_MIN|macro|PIN_DRVSTR_MIN
DECL|PIN_GEN|macro|PIN_GEN
DECL|PIN_GPIO_HIGH|macro|PIN_GPIO_HIGH
DECL|PIN_GPIO_LOW|macro|PIN_GPIO_LOW
DECL|PIN_GPIO_OUTPUT_DIS|macro|PIN_GPIO_OUTPUT_DIS
DECL|PIN_GPIO_OUTPUT_EN|macro|PIN_GPIO_OUTPUT_EN
DECL|PIN_HYSTERESIS|macro|PIN_HYSTERESIS
DECL|PIN_Handle|typedef|typedef PIN_State *PIN_Handle;
DECL|PIN_ID|macro|PIN_ID
DECL|PIN_INPUT_DIS|macro|PIN_INPUT_DIS
DECL|PIN_INPUT_EN|macro|PIN_INPUT_EN
DECL|PIN_INV_INOUT|macro|PIN_INV_INOUT
DECL|PIN_IRQ_BOTHEDGES|macro|PIN_IRQ_BOTHEDGES
DECL|PIN_IRQ_DIS|macro|PIN_IRQ_DIS
DECL|PIN_IRQ_NEGEDGE|macro|PIN_IRQ_NEGEDGE
DECL|PIN_IRQ_POSEDGE|macro|PIN_IRQ_POSEDGE
DECL|PIN_Id|typedef|typedef uint8_t PIN_Id;
DECL|PIN_IntCb|typedef|typedef void (*PIN_IntCb)(PIN_Handle handle, PIN_Id pinId);
DECL|PIN_NOPULL|macro|PIN_NOPULL
DECL|PIN_NO_ACCESS|enumerator|PIN_NO_ACCESS = 2, ///< Operation failed, client does not have access to pin
DECL|PIN_OPENDRAIN|macro|PIN_OPENDRAIN
DECL|PIN_OPENSOURCE|macro|PIN_OPENSOURCE
DECL|PIN_PULLDOWN|macro|PIN_PULLDOWN
DECL|PIN_PULLUP|macro|PIN_PULLUP
DECL|PIN_PUSHPULL|macro|PIN_PUSHPULL
DECL|PIN_SLEWCTRL|macro|PIN_SLEWCTRL
DECL|PIN_SUCCESS|enumerator|PIN_SUCCESS = 0, ///< Operation succeeded
DECL|PIN_State_s|struct|struct PIN_State_s {
DECL|PIN_State|typedef|typedef struct PIN_State_s PIN_State;
DECL|PIN_Status|typedef|} PIN_Status;
DECL|PIN_TERMINATE|macro|PIN_TERMINATE
DECL|PIN_UNASSIGNED|macro|PIN_UNASSIGNED
DECL|PIN_UNSUPPORTED|enumerator|PIN_UNSUPPORTED = 3 ///< Operation not supported
DECL|PIN_getUserArg|function|static inline uintptr_t PIN_getUserArg(PIN_Handle handle) {
DECL|PIN_setUserArg|function|static inline void PIN_setUserArg(PIN_Handle handle, uintptr_t arg) {
DECL|callbackFxn|member|PIN_IntCb callbackFxn; ///< Pointer to interrupt callback function
DECL|portMask|member|uint32_t portMask; ///< Bitmask for pins allocated in port
DECL|ti_drivers_PIN__include|macro|ti_drivers_PIN__include
DECL|userArg|member|uintptr_t userArg; ///< User argument for whole handle
