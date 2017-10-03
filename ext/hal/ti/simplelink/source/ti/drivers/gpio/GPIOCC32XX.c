DECL|CALLBACK_INDEX_NOT_CONFIGURED|macro|CALLBACK_INDEX_NOT_CONFIGURED
DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|GPIO_clearInt|function|void GPIO_clearInt(uint_least8_t index)
DECL|GPIO_disableInt|function|void GPIO_disableInt(uint_least8_t index)
DECL|GPIO_enableInt|function|void GPIO_enableInt(uint_least8_t index)
DECL|GPIO_getConfig|function|void GPIO_getConfig(uint_least8_t index, GPIO_PinConfig *pinConfig)
DECL|GPIO_hwiIntFxn|function|void GPIO_hwiIntFxn(uintptr_t portIndex)
DECL|GPIO_init|function|void GPIO_init()
DECL|GPIO_read|function|uint_fast8_t GPIO_read(uint_least8_t index)
DECL|GPIO_setCallback|function|void GPIO_setCallback(uint_least8_t index, GPIO_CallbackFxn callback)
DECL|GPIO_setConfig|function|int_fast16_t GPIO_setConfig(uint_least8_t index, GPIO_PinConfig pinConfig)
DECL|GPIO_toggle|function|void GPIO_toggle(uint_least8_t index)
DECL|GPIO_write|function|void GPIO_write(uint_least8_t index, unsigned int value)
DECL|NUM_PINS_PER_PORT|macro|NUM_PINS_PER_PORT
DECL|NUM_PORTS|macro|NUM_PORTS
DECL|PIN_XX|macro|PIN_XX
DECL|PORT_MASK|macro|PORT_MASK
DECL|PinConfig|struct|typedef struct PinConfig {
DECL|PinConfig|typedef|} PinConfig;
DECL|PortCallbackInfo|struct|typedef struct PortCallbackInfo {
DECL|PortCallbackInfo|typedef|} PortCallbackInfo;
DECL|configIntsEnabledMask|variable|configIntsEnabledMask
DECL|config|member|uint16_t config;
DECL|getGpioNumber|macro|getGpioNumber
DECL|getIntTypeNumber|macro|getIntTypeNumber
DECL|getPinNumber|function|static inline uint32_t getPinNumber(uint32_t x) {
DECL|getPortBase|macro|getPortBase
DECL|getPort|macro|getPort
DECL|getPowerResource|macro|getPowerResource
DECL|gpioBaseAddresses|variable|gpioBaseAddresses
DECL|gpioCallbackInfo|variable|gpioCallbackInfo
DECL|inPinTypes|variable|inPinTypes
DECL|initCalled|variable|initCalled
DECL|interruptType|variable|interruptType
DECL|outPinStrengths|variable|outPinStrengths
DECL|outPinTypes|variable|outPinTypes
DECL|pinIndex|member|uint8_t pinIndex[NUM_PINS_PER_PORT];
DECL|pinTable|variable|pinTable
DECL|pin|member|uint8_t pin;
DECL|portHwiCreatedBitMask|variable|portHwiCreatedBitMask
DECL|portInterruptIds|variable|portInterruptIds
DECL|port|member|uint8_t port;
DECL|powerNotifyFxn|function|static int powerNotifyFxn(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|powerNotifyObj|variable|powerNotifyObj
DECL|powerResources|variable|powerResources
