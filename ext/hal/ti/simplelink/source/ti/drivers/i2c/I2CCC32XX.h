DECL|I2CCC32XX_ERROR|enumerator|I2CCC32XX_ERROR = 0xFF
DECL|I2CCC32XX_HWAttrsV1|struct|typedef struct I2CCC32XX_HWAttrsV1 {
DECL|I2CCC32XX_HWAttrsV1|typedef|} I2CCC32XX_HWAttrsV1;
DECL|I2CCC32XX_IDLE_MODE|enumerator|I2CCC32XX_IDLE_MODE = 0,
DECL|I2CCC32XX_Mode|enum|typedef enum I2CCC32XX_Mode {
DECL|I2CCC32XX_Mode|typedef|} I2CCC32XX_Mode;
DECL|I2CCC32XX_Object|struct|typedef struct I2CCC32XX_Object {
DECL|I2CCC32XX_Object|typedef|} I2CCC32XX_Object;
DECL|I2CCC32XX_PIN_01_I2C_SCL|macro|I2CCC32XX_PIN_01_I2C_SCL
DECL|I2CCC32XX_PIN_02_I2C_SDA|macro|I2CCC32XX_PIN_02_I2C_SDA
DECL|I2CCC32XX_PIN_03_I2C_SCL|macro|I2CCC32XX_PIN_03_I2C_SCL
DECL|I2CCC32XX_PIN_04_I2C_SDA|macro|I2CCC32XX_PIN_04_I2C_SDA
DECL|I2CCC32XX_PIN_05_I2C_SCL|macro|I2CCC32XX_PIN_05_I2C_SCL
DECL|I2CCC32XX_PIN_06_I2C_SDA|macro|I2CCC32XX_PIN_06_I2C_SDA
DECL|I2CCC32XX_PIN_16_I2C_SCL|macro|I2CCC32XX_PIN_16_I2C_SCL
DECL|I2CCC32XX_PIN_17_I2C_SDA|macro|I2CCC32XX_PIN_17_I2C_SDA
DECL|I2CCC32XX_READ_MODE|enumerator|I2CCC32XX_READ_MODE,
DECL|I2CCC32XX_WRITE_MODE|enumerator|I2CCC32XX_WRITE_MODE,
DECL|baseAddr|member|unsigned int baseAddr;
DECL|bitRate|member|I2C_BitRate bitRate; /* I2C bus bit rate */
DECL|clkPin|member|uint16_t clkPin;
DECL|currentTransaction|member|I2C_Transaction *currentTransaction; /* Pointer to current transaction */
DECL|dataPin|member|uint16_t dataPin;
DECL|headPtr|member|I2C_Transaction *headPtr; /* Head ptr for queued transactions */
DECL|hwiHandle|member|HwiP_Handle hwiHandle;
DECL|intNum|member|unsigned int intNum;
DECL|intPriority|member|unsigned int intPriority;
DECL|isOpen|member|bool isOpen; /* Flag to indicate module is open */
DECL|mode|member|volatile I2CCC32XX_Mode mode; /* Stores the I2C state */
DECL|mutex|member|SemaphoreP_Handle mutex; /* Grants exclusive access to I2C */
DECL|notifyObj|member|Power_NotifyObj notifyObj; /* For notification of wake from LPDS */
DECL|readBufIdx|member|uint8_t *readBufIdx; /* Internal inc. readBuf index */
DECL|readCountIdx|member|size_t readCountIdx; /* Internal dec. readCounter */
DECL|tailPtr|member|I2C_Transaction *tailPtr; /* Tail ptr for queued transactions */
DECL|ti_drivers_i2c_I2CCC32XX__include|macro|ti_drivers_i2c_I2CCC32XX__include
DECL|transferCallbackFxn|member|I2C_CallbackFxn transferCallbackFxn; /* Callback function pointer */
DECL|transferComplete|member|SemaphoreP_Handle transferComplete; /* Signals I2C transfer completion */
DECL|transferMode|member|I2C_TransferMode transferMode; /* Blocking or Callback mode */
DECL|writeBufIdx|member|uint8_t *writeBufIdx; /* Internal inc. writeBuf index */
DECL|writeCountIdx|member|size_t writeCountIdx; /* Internal dec. writeCounter */
