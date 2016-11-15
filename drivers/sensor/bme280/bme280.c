DECL|bme280_api_funcs|variable|bme280_api_funcs
DECL|bme280_channel_get|function|static int bme280_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|bme280_chip_init|function|static int bme280_chip_init(struct device *dev)
DECL|bme280_compensate_humidity|function|static void bme280_compensate_humidity(struct bme280_data *data, int32_t adc_humidity)
DECL|bme280_compensate_press|function|static void bme280_compensate_press(struct bme280_data *data, int32_t adc_press)
DECL|bme280_compensate_temp|function|static void bme280_compensate_temp(struct bme280_data *data, int32_t adc_temp)
DECL|bme280_data|variable|bme280_data
DECL|bme280_init|function|int bme280_init(struct device *dev)
DECL|bme280_read_compensation|function|static int bme280_read_compensation(struct bme280_data *data)
DECL|bme280_sample_fetch|function|static int bme280_sample_fetch(struct device *dev, enum sensor_channel chan)
