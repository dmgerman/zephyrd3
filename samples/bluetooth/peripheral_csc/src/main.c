DECL|CSC_CRANK_REV_DATA_PRESENT|macro|CSC_CRANK_REV_DATA_PRESENT
DECL|CSC_ERR_CCC_CONFIG|macro|CSC_ERR_CCC_CONFIG
DECL|CSC_ERR_IN_PROGRESS|macro|CSC_ERR_IN_PROGRESS
DECL|CSC_FEATURE|macro|CSC_FEATURE
DECL|CSC_FEAT_CRANK_REV|macro|CSC_FEAT_CRANK_REV
DECL|CSC_FEAT_MULTI_SENSORS|macro|CSC_FEAT_MULTI_SENSORS
DECL|CSC_FEAT_WHEEL_REV|macro|CSC_FEAT_WHEEL_REV
DECL|CSC_LOC_CHAINSTAY|macro|CSC_LOC_CHAINSTAY
DECL|CSC_LOC_CHEST|macro|CSC_LOC_CHEST
DECL|CSC_LOC_FRONT_HUB|macro|CSC_LOC_FRONT_HUB
DECL|CSC_LOC_FRONT_WHEEL|macro|CSC_LOC_FRONT_WHEEL
DECL|CSC_LOC_HIP|macro|CSC_LOC_HIP
DECL|CSC_LOC_IN_SHOE|macro|CSC_LOC_IN_SHOE
DECL|CSC_LOC_LEFT_CRANK|macro|CSC_LOC_LEFT_CRANK
DECL|CSC_LOC_LEFT_PEDAL|macro|CSC_LOC_LEFT_PEDAL
DECL|CSC_LOC_OTHER|macro|CSC_LOC_OTHER
DECL|CSC_LOC_REAR_DROPOUT|macro|CSC_LOC_REAR_DROPOUT
DECL|CSC_LOC_REAR_HUB|macro|CSC_LOC_REAR_HUB
DECL|CSC_LOC_REAR_WHEEL|macro|CSC_LOC_REAR_WHEEL
DECL|CSC_LOC_RIGHT_CRANK|macro|CSC_LOC_RIGHT_CRANK
DECL|CSC_LOC_RIGHT_PEDAL|macro|CSC_LOC_RIGHT_PEDAL
DECL|CSC_LOC_TOP_OF_SHOE|macro|CSC_LOC_TOP_OF_SHOE
DECL|CSC_SUPPORTED_LOCATIONS|macro|CSC_SUPPORTED_LOCATIONS
DECL|CSC_WHEEL_REV_DATA_PRESENT|macro|CSC_WHEEL_REV_DATA_PRESENT
DECL|SC_CP_OP_CALIBRATION|macro|SC_CP_OP_CALIBRATION
DECL|SC_CP_OP_REQ_SUPP_LOC|macro|SC_CP_OP_REQ_SUPP_LOC
DECL|SC_CP_OP_RESPONSE|macro|SC_CP_OP_RESPONSE
DECL|SC_CP_OP_SET_CWR|macro|SC_CP_OP_SET_CWR
DECL|SC_CP_OP_UPDATE_LOC|macro|SC_CP_OP_UPDATE_LOC
DECL|SC_CP_RSP_FAILED|macro|SC_CP_RSP_FAILED
DECL|SC_CP_RSP_INVAL_PARAM|macro|SC_CP_RSP_INVAL_PARAM
DECL|SC_CP_RSP_OP_NOT_SUPP|macro|SC_CP_RSP_OP_NOT_SUPP
DECL|SC_CP_RSP_SUCCESS|macro|SC_CP_RSP_SUCCESS
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|ad|variable|ad
DECL|bt_ready|function|static void bt_ready(int err)
DECL|ccr|member|u16_t ccr;
DECL|ccr|variable|ccr
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn, u8_t err)
DECL|crank_rev_data_nfy|struct|struct crank_rev_data_nfy {
DECL|csc_attrs|variable|csc_attrs
DECL|csc_meas_ccc_cfg_changed|function|static void csc_meas_ccc_cfg_changed(const struct bt_gatt_attr *attr, u16_t value)
DECL|csc_meas_ccc_cfg|variable|csc_meas_ccc_cfg
DECL|csc_measurement_nfy|struct|struct csc_measurement_nfy {
DECL|csc_simulate|variable|csc_simulate
DECL|csc_simulation|function|static void csc_simulation(void)
DECL|csc_svc|variable|csc_svc
DECL|ctrl_point_ccc_cfg_changed|function|static void ctrl_point_ccc_cfg_changed(const struct bt_gatt_attr *attr, u16_t value)
DECL|ctrl_point_ccc_cfg|variable|ctrl_point_ccc_cfg
DECL|ctrl_point_configured|variable|ctrl_point_configured
DECL|ctrl_point_ind|function|static void ctrl_point_ind(struct bt_conn *conn, u8_t req_op, u8_t status, const void *data, u16_t data_len)
DECL|cwr|member|u32_t cwr;
DECL|cwr|member|u32_t cwr;
DECL|cwr|variable|cwr
DECL|data|member|u8_t data[];
DECL|data|member|u8_t data[];
DECL|disconnected|function|static void disconnected(struct bt_conn *conn, u8_t reason)
DECL|flags|member|u8_t flags;
DECL|lcet|member|u16_t lcet;
DECL|lcet|variable|lcet
DECL|location|member|u8_t location;
DECL|lwet|member|u16_t lwet;
DECL|lwet|variable|lwet
DECL|main|function|void main(void)
DECL|measurement_nfy|function|static void measurement_nfy(struct bt_conn *conn, u32_t cwr, u16_t lwet, u16_t ccr, u16_t lcet)
DECL|op|member|u8_t op;
DECL|op|member|u8_t op;
DECL|read_csc_feature|function|static ssize_t read_csc_feature(struct bt_conn *conn,const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|read_location|function|static ssize_t read_location(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, u16_t len, u16_t offset)
DECL|req_op|member|u8_t req_op;
DECL|sc_ctrl_point_ind|struct|struct sc_ctrl_point_ind {
DECL|sensor_location|variable|sensor_location
DECL|status|member|u8_t status;
DECL|supported_locations|variable|supported_locations
DECL|wheel_rev_data_nfy|struct|struct wheel_rev_data_nfy {
DECL|write_ctrl_point|function|static ssize_t write_ctrl_point(struct bt_conn *conn,const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|write_sc_ctrl_point_req|struct|struct write_sc_ctrl_point_req {
