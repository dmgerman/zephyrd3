DECL|DELIVERY_METHOD_BOTH|macro|DELIVERY_METHOD_BOTH
DECL|DELIVERY_METHOD_PULL_ONLY|macro|DELIVERY_METHOD_PULL_ONLY
DECL|DELIVERY_METHOD_PUSH_ONLY|macro|DELIVERY_METHOD_PUSH_ONLY
DECL|FIRMWARE_MAX_ID|macro|FIRMWARE_MAX_ID
DECL|FIRMWARE_PACKAGE_ID|macro|FIRMWARE_PACKAGE_ID
DECL|FIRMWARE_PACKAGE_NAME_ID|macro|FIRMWARE_PACKAGE_NAME_ID
DECL|FIRMWARE_PACKAGE_URI_ID|macro|FIRMWARE_PACKAGE_URI_ID
DECL|FIRMWARE_PACKAGE_VERSION_ID|macro|FIRMWARE_PACKAGE_VERSION_ID
DECL|FIRMWARE_STATE_ID|macro|FIRMWARE_STATE_ID
DECL|FIRMWARE_UPDATE_DELIV_METHOD_ID|macro|FIRMWARE_UPDATE_DELIV_METHOD_ID
DECL|FIRMWARE_UPDATE_ID|macro|FIRMWARE_UPDATE_ID
DECL|FIRMWARE_UPDATE_PROTO_SUPPORT_ID|macro|FIRMWARE_UPDATE_PROTO_SUPPORT_ID
DECL|FIRMWARE_UPDATE_RESULT_ID|macro|FIRMWARE_UPDATE_RESULT_ID
DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|PACKAGE_URI_LEN|macro|PACKAGE_URI_LEN
DECL|delivery_method|variable|delivery_method
DECL|fields|variable|fields
DECL|firmware_create|function|static struct lwm2m_engine_obj_inst *firmware_create(u16_t obj_inst_id)
DECL|firmware_update_cb|function|static int firmware_update_cb(u16_t obj_inst_id)
DECL|firmware|variable|firmware
DECL|inst|variable|inst
DECL|lwm2m_firmware_get_update_cb|function|lwm2m_engine_user_cb_t lwm2m_firmware_get_update_cb(void)
DECL|lwm2m_firmware_get_update_result|function|u8_t lwm2m_firmware_get_update_result(void)
DECL|lwm2m_firmware_get_update_state|function|u8_t lwm2m_firmware_get_update_state(void)
DECL|lwm2m_firmware_get_write_cb|function|lwm2m_engine_set_data_cb_t lwm2m_firmware_get_write_cb(void)
DECL|lwm2m_firmware_init|function|static int lwm2m_firmware_init(struct device *dev)
DECL|lwm2m_firmware_set_update_cb|function|void lwm2m_firmware_set_update_cb(lwm2m_engine_user_cb_t cb)
DECL|lwm2m_firmware_set_update_result|function|void lwm2m_firmware_set_update_result(u8_t result)
DECL|lwm2m_firmware_set_update_state|function|void lwm2m_firmware_set_update_state(u8_t state)
DECL|lwm2m_firmware_set_write_cb|function|void lwm2m_firmware_set_write_cb(lwm2m_engine_set_data_cb_t cb)
DECL|package_uri_write_cb|function|static int package_uri_write_cb(u16_t obj_inst_id,u8_t *data, u16_t data_len, bool last_block, size_t total_size)
DECL|package_uri|variable|package_uri
DECL|package_write_cb|function|static int package_write_cb(u16_t obj_inst_id, u8_t *data, u16_t data_len, bool last_block, size_t total_size)
DECL|res|variable|res
DECL|update_cb|variable|update_cb
DECL|update_result|variable|update_result
DECL|update_state|variable|update_state
DECL|write_cb|variable|write_cb
