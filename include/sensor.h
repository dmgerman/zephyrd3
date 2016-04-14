DECL|SENSOR_ATTR_CALIB_TARGET|enumerator|SENSOR_ATTR_CALIB_TARGET,
DECL|SENSOR_ATTR_FULL_SCALE|enumerator|SENSOR_ATTR_FULL_SCALE,
DECL|SENSOR_ATTR_LOWER_THRESH|enumerator|SENSOR_ATTR_LOWER_THRESH,
DECL|SENSOR_ATTR_OFFSET|enumerator|SENSOR_ATTR_OFFSET,
DECL|SENSOR_ATTR_OVERSAMPLING|enumerator|SENSOR_ATTR_OVERSAMPLING,
DECL|SENSOR_ATTR_SAMPLING_FREQUENCY|enumerator|SENSOR_ATTR_SAMPLING_FREQUENCY,
DECL|SENSOR_ATTR_SLOPE_DUR|enumerator|SENSOR_ATTR_SLOPE_DUR,
DECL|SENSOR_ATTR_SLOPE_TH|enumerator|SENSOR_ATTR_SLOPE_TH,
DECL|SENSOR_ATTR_UPPER_THRESH|enumerator|SENSOR_ATTR_UPPER_THRESH,
DECL|SENSOR_CHAN_ACCEL_ANY|enumerator|SENSOR_CHAN_ACCEL_ANY,
DECL|SENSOR_CHAN_ACCEL_X|enumerator|SENSOR_CHAN_ACCEL_X,
DECL|SENSOR_CHAN_ACCEL_Y|enumerator|SENSOR_CHAN_ACCEL_Y,
DECL|SENSOR_CHAN_ACCEL_Z|enumerator|SENSOR_CHAN_ACCEL_Z,
DECL|SENSOR_CHAN_ALL|enumerator|SENSOR_CHAN_ALL,
DECL|SENSOR_CHAN_GYRO_ANY|enumerator|SENSOR_CHAN_GYRO_ANY,
DECL|SENSOR_CHAN_GYRO_X|enumerator|SENSOR_CHAN_GYRO_X,
DECL|SENSOR_CHAN_GYRO_Y|enumerator|SENSOR_CHAN_GYRO_Y,
DECL|SENSOR_CHAN_GYRO_Z|enumerator|SENSOR_CHAN_GYRO_Z,
DECL|SENSOR_CHAN_HUMIDITY|enumerator|SENSOR_CHAN_HUMIDITY,
DECL|SENSOR_CHAN_IR|enumerator|SENSOR_CHAN_IR,
DECL|SENSOR_CHAN_LIGHT|enumerator|SENSOR_CHAN_LIGHT,
DECL|SENSOR_CHAN_MAGN_ANY|enumerator|SENSOR_CHAN_MAGN_ANY,
DECL|SENSOR_CHAN_MAGN_X|enumerator|SENSOR_CHAN_MAGN_X,
DECL|SENSOR_CHAN_MAGN_Y|enumerator|SENSOR_CHAN_MAGN_Y,
DECL|SENSOR_CHAN_MAGN_Z|enumerator|SENSOR_CHAN_MAGN_Z,
DECL|SENSOR_CHAN_PRESS|enumerator|SENSOR_CHAN_PRESS,
DECL|SENSOR_CHAN_PROX|enumerator|SENSOR_CHAN_PROX,
DECL|SENSOR_CHAN_TEMP|enumerator|SENSOR_CHAN_TEMP,
DECL|SENSOR_G|macro|SENSOR_G
DECL|SENSOR_PI|macro|SENSOR_PI
DECL|SENSOR_TRIG_DATA_READY|enumerator|SENSOR_TRIG_DATA_READY,
DECL|SENSOR_TRIG_DELTA|enumerator|SENSOR_TRIG_DELTA,
DECL|SENSOR_TRIG_NEAR_FAR|enumerator|SENSOR_TRIG_NEAR_FAR,
DECL|SENSOR_TRIG_THRESHOLD|enumerator|SENSOR_TRIG_THRESHOLD,
DECL|SENSOR_TRIG_TIMER|enumerator|SENSOR_TRIG_TIMER,
DECL|SENSOR_VALUE_TYPE_DOUBLE|enumerator|SENSOR_VALUE_TYPE_DOUBLE,
DECL|SENSOR_VALUE_TYPE_INT_PLUS_MICRO|enumerator|SENSOR_VALUE_TYPE_INT_PLUS_MICRO,
DECL|SENSOR_VALUE_TYPE_INT|enumerator|SENSOR_VALUE_TYPE_INT,
DECL|SENSOR_VALUE_TYPE_Q16_16|enumerator|SENSOR_VALUE_TYPE_Q16_16,
DECL|__SENSOR_H__|macro|__SENSOR_H__
DECL|arg|member|void *arg;
DECL|attr_set|member|sensor_attr_set_t attr_set;
DECL|channel_get|member|sensor_channel_get_t channel_get;
DECL|chan|member|enum sensor_channel chan;
DECL|dval|member|double dval;
DECL|handler|member|sensor_work_handler_t handler;
DECL|sample_fetch|member|sensor_sample_fetch_t sample_fetch;
DECL|sensor_attr_set_t|typedef|typedef int (*sensor_attr_set_t)(struct device *dev,
DECL|sensor_attr_set|function|static inline int sensor_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|sensor_attribute|enum|enum sensor_attribute {
DECL|sensor_channel_get_t|typedef|typedef int (*sensor_channel_get_t)(struct device *dev,
DECL|sensor_channel_get|function|static inline int sensor_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|sensor_channel|enum|enum sensor_channel {
DECL|sensor_degrees_to_rad|function|static inline void sensor_degrees_to_rad(int32_t d, struct sensor_value *rad)
DECL|sensor_driver_api|struct|struct sensor_driver_api {
DECL|sensor_g_to_ms2|function|static inline void sensor_g_to_ms2(int32_t g, struct sensor_value *ms2)
DECL|sensor_ms2_to_g|function|static inline int32_t sensor_ms2_to_g(const struct sensor_value *ms2)
DECL|sensor_rad_to_degrees|function|static inline int32_t sensor_rad_to_degrees(const struct sensor_value *rad)
DECL|sensor_sample_fetch_chan|function|static inline int sensor_sample_fetch_chan(struct device *dev, enum sensor_channel type)
DECL|sensor_sample_fetch_t|typedef|typedef int (*sensor_sample_fetch_t)(struct device *dev,
DECL|sensor_sample_fetch|function|static inline int sensor_sample_fetch(struct device *dev)
DECL|sensor_trigger_handler_t|typedef|typedef void (*sensor_trigger_handler_t)(struct device *dev,
DECL|sensor_trigger_set_t|typedef|typedef int (*sensor_trigger_set_t)(struct device *dev,
DECL|sensor_trigger_set|function|static inline int sensor_trigger_set(struct device *dev, struct sensor_trigger *trig, sensor_trigger_handler_t handler)
DECL|sensor_trigger_type|enum|enum sensor_trigger_type {
DECL|sensor_trigger|struct|struct sensor_trigger {
DECL|sensor_value_type|enum|enum sensor_value_type {
DECL|sensor_value|struct|struct sensor_value {
DECL|sensor_work_handler_t|typedef|typedef void (*sensor_work_handler_t)(void *arg);
DECL|sensor_work|struct|struct sensor_work {
DECL|trigger_set|member|sensor_trigger_set_t trigger_set;
DECL|type|member|enum sensor_trigger_type type;
DECL|type|member|enum sensor_value_type type;
DECL|val1|member|int32_t val1;
DECL|val2|member|int32_t val2;
