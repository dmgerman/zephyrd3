DECL|DebugP_ASSERT_ENABLED|macro|DebugP_ASSERT_ENABLED
DECL|DebugP_LOG_ENABLED|macro|DebugP_LOG_ENABLED
DECL|I2CCC32XX_blockingCallback|function|static void I2CCC32XX_blockingCallback(I2C_Handle handle, I2C_Transaction *msg, bool transferStatus)
DECL|I2CCC32XX_cancel|function|void I2CCC32XX_cancel(I2C_Handle handle)
DECL|I2CCC32XX_close|function|void I2CCC32XX_close(I2C_Handle handle)
DECL|I2CCC32XX_completeTransfer|function|static void I2CCC32XX_completeTransfer(I2C_Handle handle)
DECL|I2CCC32XX_control|function|int_fast16_t I2CCC32XX_control(I2C_Handle handle, uint_fast16_t cmd, void *arg)
DECL|I2CCC32XX_fxnTable|variable|I2CCC32XX_fxnTable
DECL|I2CCC32XX_hwiFxn|function|static void I2CCC32XX_hwiFxn(uintptr_t arg)
DECL|I2CCC32XX_init|function|void I2CCC32XX_init(I2C_Handle handle)
DECL|I2CCC32XX_open|function|I2C_Handle I2CCC32XX_open(I2C_Handle handle, I2C_Params *params)
DECL|I2CCC32XX_primeTransfer|function|static void I2CCC32XX_primeTransfer(I2CCC32XX_Object *object, I2CCC32XX_HWAttrsV1 const *hwAttrs, I2C_Transaction *transaction)
DECL|I2CCC32XX_transfer|function|bool I2CCC32XX_transfer(I2C_Handle handle, I2C_Transaction *transaction)
DECL|I2C_MASTER_CMD_BURST_RECEIVE_CONT_NACK|macro|I2C_MASTER_CMD_BURST_RECEIVE_CONT_NACK
DECL|I2C_MASTER_CMD_BURST_RECEIVE_START_NACK|macro|I2C_MASTER_CMD_BURST_RECEIVE_START_NACK
DECL|I2C_MASTER_CMD_BURST_RECEIVE_STOP|macro|I2C_MASTER_CMD_BURST_RECEIVE_STOP
DECL|PAD_CONFIG_BASE|macro|PAD_CONFIG_BASE
DECL|PAD_DEFAULT_STATE|macro|PAD_DEFAULT_STATE
DECL|bitRate|variable|bitRate
DECL|initHw|function|static void initHw(I2C_Handle handle)
DECL|postNotify|function|static int postNotify(unsigned int eventType, uintptr_t eventArg, uintptr_t clientArg)
DECL|powerConstraint|variable|powerConstraint
