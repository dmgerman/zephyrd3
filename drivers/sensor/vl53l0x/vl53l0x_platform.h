DECL|Data|member|VL53L0X_DevData_t Data; /* embed ST Ewok Dev data as "Data"*/
DECL|I2cDevAddr|member|uint8_t I2cDevAddr; /* i2c device address user specific field */
DECL|PALDevDataGet|macro|PALDevDataGet
DECL|PALDevDataSet|macro|PALDevDataSet
DECL|VL53L0X_DEV|typedef|typedef VL53L0X_Dev_t *VL53L0X_DEV;
DECL|VL53L0X_Dev_t|typedef|} VL53L0X_Dev_t;
DECL|ZEPHYR_DRIVERS_SENSOR_VL53L0X_VL53L0X_PLATFORM_H_|macro|ZEPHYR_DRIVERS_SENSOR_VL53L0X_VL53L0X_PLATFORM_H_
DECL|comms_speed_khz|member|uint16_t comms_speed_khz; /* Comms speed [kHz] */
DECL|comms_type|member|uint8_t comms_type; /* VL53L0X_COMMS_I2C or VL53L0X_COMMS_SPI */
DECL|i2c|member|struct device *i2c;
