DECL|APPEARANCE_THERMOMETER|macro|APPEARANCE_THERMOMETER
DECL|DEVICE_NAME_LEN|macro|DEVICE_NAME_LEN
DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|ESS_EQUAL_TO_REF_VALUE|macro|ESS_EQUAL_TO_REF_VALUE
DECL|ESS_ERR_COND_NOT_SUPP|macro|ESS_ERR_COND_NOT_SUPP
DECL|ESS_ERR_WRITE_REJECT|macro|ESS_ERR_WRITE_REJECT
DECL|ESS_FIXED_TIME_INTERVAL|macro|ESS_FIXED_TIME_INTERVAL
DECL|ESS_GREATER_OR_EQUAL_TO_REF_VALUE|macro|ESS_GREATER_OR_EQUAL_TO_REF_VALUE
DECL|ESS_GREATER_THAN_REF_VALUE|macro|ESS_GREATER_THAN_REF_VALUE
DECL|ESS_LESS_OR_EQUAL_TO_REF_VALUE|macro|ESS_LESS_OR_EQUAL_TO_REF_VALUE
DECL|ESS_LESS_THAN_REF_VALUE|macro|ESS_LESS_THAN_REF_VALUE
DECL|ESS_NOT_EQUAL_TO_REF_VALUE|macro|ESS_NOT_EQUAL_TO_REF_VALUE
DECL|ESS_NO_LESS_THAN_SPECIFIED_TIME|macro|ESS_NO_LESS_THAN_SPECIFIED_TIME
DECL|ESS_TRIGGER_INACTIVE|macro|ESS_TRIGGER_INACTIVE
DECL|ESS_VALUE_CHANGED|macro|ESS_VALUE_CHANGED
DECL|SENSOR_1_NAME|macro|SENSOR_1_NAME
DECL|SENSOR_1_UPDATE_IVAL|macro|SENSOR_1_UPDATE_IVAL
DECL|SENSOR_2_NAME|macro|SENSOR_2_NAME
DECL|SENSOR_2_UPDATE_IVAL|macro|SENSOR_2_UPDATE_IVAL
DECL|SENSOR_3_NAME|macro|SENSOR_3_NAME
DECL|SENSOR_3_UPDATE_IVAL|macro|SENSOR_3_UPDATE_IVAL
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|ad|variable|ad
DECL|application|member|uint8_t application;
DECL|application|member|uint8_t application;
DECL|auth_cancel|function|static void auth_cancel(struct bt_conn *conn)
DECL|auth_cb_display|variable|auth_cb_display
DECL|auth_passkey_display|function|static void auth_passkey_display(struct bt_conn *conn, unsigned int passkey)
DECL|bt_ready|function|static void bt_ready(int err)
DECL|ccc_cfg|member|struct bt_gatt_ccc_cfg ccc_cfg[CONFIG_BLUETOOTH_MAX_PAIRED];
DECL|check_condition|function|static bool check_condition(uint8_t condition, int16_t old_val, int16_t new_val, int16_t ref_val)
DECL|condition|member|uint8_t condition;
DECL|condition|member|uint8_t condition;
DECL|condition|member|uint8_t condition;
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, uint8_t err)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, uint8_t reason)
DECL|es_measurement|struct|struct es_measurement {
DECL|es_trigger_setting_reference|struct|struct es_trigger_setting_reference {
DECL|es_trigger_setting_seconds|struct|struct es_trigger_setting_seconds {
DECL|ess_attrs|variable|ess_attrs
DECL|ess_simulate|function|static void ess_simulate(void)
DECL|flags|member|uint16_t flags; /* Reserved for Future Use */
DECL|flags|member|uint16_t flags; /* Reserved for Future Use */
DECL|humid_value|member|int16_t humid_value;
DECL|humidity_sensor|struct|struct humidity_sensor {
DECL|int_to_le24|function|static inline void int_to_le24(uint32_t value, uint8_t *u24)
DECL|le24_to_int|function|static inline uint32_t le24_to_int(const uint8_t *u24)
DECL|lower_limit|member|int16_t lower_limit;
DECL|main|function|void main(void)
DECL|meas_period|member|uint32_t meas_period;
DECL|meas_uncertainty|member|uint8_t meas_uncertainty;
DECL|measurement_period|member|uint8_t measurement_period[3];
DECL|measurement_uncertainty|member|uint8_t measurement_uncertainty;
DECL|meas|member|struct es_measurement meas;
DECL|meas|member|struct es_measurement meas;
DECL|read_es_measurement_rp|struct|struct read_es_measurement_rp {
DECL|read_es_measurement|function|static ssize_t read_es_measurement(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_temp_trigger_setting|function|static ssize_t read_temp_trigger_setting(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_temp_valid_range|function|static ssize_t read_temp_valid_range(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_u16|function|static ssize_t read_u16(struct bt_conn *conn, const struct bt_gatt_attr *attr,void *buf, uint16_t len, uint16_t offset)
DECL|ref_val|member|int16_t ref_val;
DECL|ref_val|member|int16_t ref_val; /* Reference temperature */
DECL|sampling_function|member|uint8_t sampling_function;
DECL|sampling_func|member|uint8_t sampling_func;
DECL|sd|variable|sd
DECL|seconds|member|uint32_t seconds;
DECL|sec|member|uint8_t sec[3];
DECL|sensor_1|variable|sensor_1
DECL|sensor_2|variable|sensor_2
DECL|sensor_3|variable|sensor_3
DECL|simulate_temp|variable|simulate_temp
DECL|temp_ccc_cfg_changed|function|static void temp_ccc_cfg_changed(uint16_t value)
DECL|temp_value|member|int16_t temp_value;
DECL|temperature_sensor|struct|struct temperature_sensor {
DECL|update_interval|member|uint32_t update_interval;
DECL|update_interval|member|uint8_t update_interval[3];
DECL|update_temperature|function|static void update_temperature(struct bt_conn *conn, const struct bt_gatt_attr *chrc, int16_t value, struct temperature_sensor *sensor)
DECL|upper_limit|member|int16_t upper_limit;
