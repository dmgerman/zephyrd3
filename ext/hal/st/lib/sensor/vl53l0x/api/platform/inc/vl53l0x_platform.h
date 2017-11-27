DECL|Data|member|VL53L0X_DevData_t Data; /*!< embed ST Ewok Dev data as "Data"*/
DECL|I2cDevAddr|member|uint8_t I2cDevAddr; /*!< i2c device address user specific field */
DECL|PALDevDataGet|macro|PALDevDataGet
DECL|PALDevDataSet|macro|PALDevDataSet
DECL|VL53L0X_DEV|typedef|typedef VL53L0X_Dev_t* VL53L0X_DEV;
DECL|VL53L0X_Dev_t|typedef|} VL53L0X_Dev_t;
DECL|_VL53L0X_PLATFORM_H_|macro|_VL53L0X_PLATFORM_H_
DECL|comms_speed_khz|member|uint16_t comms_speed_khz; /*!< Comms speed [kHz] : typically 400kHz for I2C */
DECL|comms_type|member|uint8_t comms_type; /*!< Type of comms : VL53L0X_COMMS_I2C or VL53L0X_COMMS_SPI */
