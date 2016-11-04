DECL|PDU_ADV_TYPE_ADV_IND|enumerator|PDU_ADV_TYPE_ADV_IND = 0x00,
DECL|PDU_ADV_TYPE_CONNECT_REQ|enumerator|PDU_ADV_TYPE_CONNECT_REQ = 0x05,
DECL|PDU_ADV_TYPE_DIRECT_IND|enumerator|PDU_ADV_TYPE_DIRECT_IND = 0x01,
DECL|PDU_ADV_TYPE_NONCONN_IND|enumerator|PDU_ADV_TYPE_NONCONN_IND = 0x02,
DECL|PDU_ADV_TYPE_SCAN_IND|enumerator|PDU_ADV_TYPE_SCAN_IND = 0x06,
DECL|PDU_ADV_TYPE_SCAN_REQ|enumerator|PDU_ADV_TYPE_SCAN_REQ = 0x03,
DECL|PDU_ADV_TYPE_SCAN_RESP|enumerator|PDU_ADV_TYPE_SCAN_RESP = 0x04,
DECL|PDU_DATA_LLCTRL_TYPE_CHANNEL_MAP_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_CHANNEL_MAP_REQ = 0x01,
DECL|PDU_DATA_LLCTRL_TYPE_CONN_PARAM_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_CONN_PARAM_REQ = 0x0F,
DECL|PDU_DATA_LLCTRL_TYPE_CONN_PARAM_RSP|enumerator|PDU_DATA_LLCTRL_TYPE_CONN_PARAM_RSP = 0x10,
DECL|PDU_DATA_LLCTRL_TYPE_CONN_UPDATE_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_CONN_UPDATE_REQ = 0x00,
DECL|PDU_DATA_LLCTRL_TYPE_ENC_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_ENC_REQ = 0x03,
DECL|PDU_DATA_LLCTRL_TYPE_ENC_RSP|enumerator|PDU_DATA_LLCTRL_TYPE_ENC_RSP = 0x04,
DECL|PDU_DATA_LLCTRL_TYPE_FEATURE_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_FEATURE_REQ = 0x08,
DECL|PDU_DATA_LLCTRL_TYPE_FEATURE_RSP|enumerator|PDU_DATA_LLCTRL_TYPE_FEATURE_RSP = 0x09,
DECL|PDU_DATA_LLCTRL_TYPE_LENGTH_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_LENGTH_REQ = 0x14,
DECL|PDU_DATA_LLCTRL_TYPE_LENGTH_RSP|enumerator|PDU_DATA_LLCTRL_TYPE_LENGTH_RSP = 0x15,
DECL|PDU_DATA_LLCTRL_TYPE_PAUSE_ENC_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_PAUSE_ENC_REQ = 0x0A,
DECL|PDU_DATA_LLCTRL_TYPE_PAUSE_ENC_RSP|enumerator|PDU_DATA_LLCTRL_TYPE_PAUSE_ENC_RSP = 0x0B,
DECL|PDU_DATA_LLCTRL_TYPE_PING_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_PING_REQ = 0x12,
DECL|PDU_DATA_LLCTRL_TYPE_PING_RSP|enumerator|PDU_DATA_LLCTRL_TYPE_PING_RSP = 0x13,
DECL|PDU_DATA_LLCTRL_TYPE_REJECT_IND_EXT|enumerator|PDU_DATA_LLCTRL_TYPE_REJECT_IND_EXT = 0x11,
DECL|PDU_DATA_LLCTRL_TYPE_REJECT_IND|enumerator|PDU_DATA_LLCTRL_TYPE_REJECT_IND = 0x0D,
DECL|PDU_DATA_LLCTRL_TYPE_SLAVE_FEATURE_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_SLAVE_FEATURE_REQ = 0x0E,
DECL|PDU_DATA_LLCTRL_TYPE_START_ENC_REQ|enumerator|PDU_DATA_LLCTRL_TYPE_START_ENC_REQ = 0x05,
DECL|PDU_DATA_LLCTRL_TYPE_START_ENC_RSP|enumerator|PDU_DATA_LLCTRL_TYPE_START_ENC_RSP = 0x06,
DECL|PDU_DATA_LLCTRL_TYPE_TERMINATE_IND|enumerator|PDU_DATA_LLCTRL_TYPE_TERMINATE_IND = 0x02,
DECL|PDU_DATA_LLCTRL_TYPE_UNKNOWN_RSP|enumerator|PDU_DATA_LLCTRL_TYPE_UNKNOWN_RSP = 0x07,
DECL|PDU_DATA_LLCTRL_TYPE_VERSION_IND|enumerator|PDU_DATA_LLCTRL_TYPE_VERSION_IND = 0x0C,
DECL|PDU_DATA_LLID_CTRL|enumerator|PDU_DATA_LLID_CTRL = 0x03,
DECL|PDU_DATA_LLID_DATA_CONTINUE|enumerator|PDU_DATA_LLID_DATA_CONTINUE = 0x01,
DECL|PDU_DATA_LLID_DATA_START|enumerator|PDU_DATA_LLID_DATA_START = 0x02,
DECL|PDU_DATA_LLID_RESV|enumerator|PDU_DATA_LLID_RESV = 0x00,
DECL|_PDU_H_|macro|_PDU_H_
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|access_addr|member|uint8_t access_addr[4];
DECL|addr|member|uint8_t addr[BDADDR_SIZE];
DECL|addr|member|uint8_t addr[BDADDR_SIZE];
DECL|adv_addr|member|uint8_t adv_addr[BDADDR_SIZE];
DECL|adv_addr|member|uint8_t adv_addr[BDADDR_SIZE];
DECL|adv_addr|member|uint8_t adv_addr[BDADDR_SIZE];
DECL|adv_ind|member|struct pdu_adv_payload_adv_ind adv_ind;
DECL|avg|member|uint32_t avg;
DECL|channel_map_req|member|struct pdu_data_llctrl_channel_map_req channel_map_req;
DECL|channel_map|member|uint8_t channel_map[5];
DECL|chm|member|uint8_t chm[5];
DECL|company_id|member|uint16_t company_id;
DECL|conn_param_req|member|struct pdu_data_llctrl_conn_param_req conn_param_req;
DECL|conn_param_rsp|member|struct pdu_data_llctrl_conn_param_rsp conn_param_rsp;
DECL|conn_update_req|member|struct pdu_data_llctrl_conn_update_req conn_update_req;
DECL|connect_req|member|struct pdu_adv_payload_connect_req connect_req;
DECL|crc_init|member|uint8_t crc_init[3];
DECL|ctrldata|member|} __packed ctrldata;
DECL|data|member|uint8_t data[31];
DECL|data|member|uint8_t data[31];
DECL|direct_ind|member|struct pdu_adv_payload_direct_ind direct_ind;
DECL|ediv|member|uint8_t ediv[2];
DECL|enc_req|member|struct pdu_data_llctrl_enc_req enc_req;
DECL|enc_rsp|member|struct pdu_data_llctrl_enc_rsp enc_rsp;
DECL|error_code|member|uint8_t error_code;
DECL|error_code|member|uint8_t error_code;
DECL|error_code|member|uint8_t error_code;
DECL|feature_req|member|struct pdu_data_llctrl_feature_req feature_req;
DECL|feature_rsp|member|struct pdu_data_llctrl_feature_rsp feature_rsp;
DECL|features|member|uint8_t features[8];
DECL|features|member|uint8_t features[8];
DECL|hop|member|uint8_t hop:5;
DECL|init_addr|member|uint8_t init_addr[BDADDR_SIZE];
DECL|init_addr|member|uint8_t init_addr[BDADDR_SIZE];
DECL|instant|member|uint16_t instant;
DECL|instant|member|uint16_t instant;
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_max|member|uint16_t interval_max;
DECL|interval_min|member|uint16_t interval_min;
DECL|interval_min|member|uint16_t interval_min;
DECL|interval|member|uint16_t interval;
DECL|interval|member|uint16_t interval;
DECL|ivm|member|uint8_t ivm[4];
DECL|ivs|member|uint8_t ivs[4];
DECL|latency|member|uint16_t latency;
DECL|latency|member|uint16_t latency;
DECL|latency|member|uint16_t latency;
DECL|latency|member|uint16_t latency;
DECL|length_req|member|struct pdu_data_llctrl_length_req_rsp length_req;
DECL|length_rsp|member|struct pdu_data_llctrl_length_req_rsp length_rsp;
DECL|len|member|uint8_t len:6;
DECL|len|member|uint8_t len:8;
DECL|ll_id|member|uint8_t ll_id:2;
DECL|llctrl|member|struct pdu_data_llctrl llctrl;
DECL|lldata|member|uint8_t lldata[1];
DECL|lldata|member|} __packed lldata;
DECL|max_rx_octets|member|uint16_t max_rx_octets;
DECL|max_rx_time|member|uint16_t max_rx_time;
DECL|max_tx_octets|member|uint16_t max_tx_octets;
DECL|max_tx_time|member|uint16_t max_tx_time;
DECL|max|member|uint32_t max;
DECL|md|member|uint8_t md:1;
DECL|min|member|uint32_t min;
DECL|nesn|member|uint8_t nesn:1;
DECL|nrf_radio_s1|member|uint8_t nrf_radio_s1;
DECL|offset0|member|uint16_t offset0;
DECL|offset0|member|uint16_t offset0;
DECL|offset1|member|uint16_t offset1;
DECL|offset1|member|uint16_t offset1;
DECL|offset2|member|uint16_t offset2;
DECL|offset2|member|uint16_t offset2;
DECL|offset3|member|uint16_t offset3;
DECL|offset3|member|uint16_t offset3;
DECL|offset4|member|uint16_t offset4;
DECL|offset4|member|uint16_t offset4;
DECL|offset5|member|uint16_t offset5;
DECL|offset5|member|uint16_t offset5;
DECL|opcode|member|uint8_t opcode;
DECL|payload|member|} __packed payload;
DECL|payload|member|} __packed payload;
DECL|pdu_adv_payload_adv_ind|struct|struct pdu_adv_payload_adv_ind {
DECL|pdu_adv_payload_connect_req|struct|struct pdu_adv_payload_connect_req {
DECL|pdu_adv_payload_direct_ind|struct|struct pdu_adv_payload_direct_ind {
DECL|pdu_adv_payload_scan_req|struct|struct pdu_adv_payload_scan_req {
DECL|pdu_adv_payload_scan_resp|struct|struct pdu_adv_payload_scan_resp {
DECL|pdu_adv_type|enum|enum pdu_adv_type {
DECL|pdu_adv|struct|struct pdu_adv {
DECL|pdu_data_llctrl_channel_map_req|struct|struct pdu_data_llctrl_channel_map_req {
DECL|pdu_data_llctrl_conn_param_req|struct|struct pdu_data_llctrl_conn_param_req {
DECL|pdu_data_llctrl_conn_param_rsp|struct|struct pdu_data_llctrl_conn_param_rsp {
DECL|pdu_data_llctrl_conn_update_req|struct|struct pdu_data_llctrl_conn_update_req {
DECL|pdu_data_llctrl_enc_req|struct|struct pdu_data_llctrl_enc_req {
DECL|pdu_data_llctrl_enc_rsp|struct|struct pdu_data_llctrl_enc_rsp {
DECL|pdu_data_llctrl_feature_req|struct|struct pdu_data_llctrl_feature_req {
DECL|pdu_data_llctrl_feature_rsp|struct|struct pdu_data_llctrl_feature_rsp {
DECL|pdu_data_llctrl_length_req_rsp|struct|struct pdu_data_llctrl_length_req_rsp {
DECL|pdu_data_llctrl_reject_ind_ext|struct|struct pdu_data_llctrl_reject_ind_ext {
DECL|pdu_data_llctrl_reject_ind|struct|struct pdu_data_llctrl_reject_ind {
DECL|pdu_data_llctrl_terminate_ind|struct|struct pdu_data_llctrl_terminate_ind {
DECL|pdu_data_llctrl_type|enum|enum pdu_data_llctrl_type {
DECL|pdu_data_llctrl_unknown_rsp|struct|struct pdu_data_llctrl_unknown_rsp {
DECL|pdu_data_llctrl_version_ind|struct|struct pdu_data_llctrl_version_ind {
DECL|pdu_data_llctrl|struct|struct pdu_data_llctrl {
DECL|pdu_data_llid|enum|enum pdu_data_llid {
DECL|pdu_data|struct|struct pdu_data {
DECL|preferred_periodicity|member|uint8_t preferred_periodicity;
DECL|preferred_periodicity|member|uint8_t preferred_periodicity;
DECL|profile|member|struct profile profile;
DECL|profile|struct|struct profile {
DECL|rand|member|uint8_t rand[8];
DECL|reference_conn_event_count|member|uint16_t reference_conn_event_count;
DECL|reference_conn_event_count|member|uint16_t reference_conn_event_count;
DECL|reject_ind_ext|member|struct pdu_data_llctrl_reject_ind_ext reject_ind_ext;
DECL|reject_ind|member|struct pdu_data_llctrl_reject_ind reject_ind;
DECL|reject_opcode|member|uint8_t reject_opcode;
DECL|resv|member|uint8_t resv:8;
DECL|rfu0|member|uint8_t rfu0:2;
DECL|rfu0|member|uint8_t rfu0:3;
DECL|rfu1|member|uint8_t rfu1:2;
DECL|rssi|member|uint8_t rssi;
DECL|rx_addr|member|uint8_t rx_addr:1;
DECL|scan_addr|member|uint8_t scan_addr[BDADDR_SIZE];
DECL|scan_req|member|struct pdu_adv_payload_scan_req scan_req;
DECL|scan_resp|member|struct pdu_adv_payload_scan_resp scan_resp;
DECL|sca|member|uint8_t sca:3;
DECL|skdm|member|uint8_t skdm[8];
DECL|skds|member|uint8_t skds[8];
DECL|slave_feature_req|member|struct pdu_data_llctrl_feature_req slave_feature_req;
DECL|sn|member|uint8_t sn:1;
DECL|sub_version_number|member|uint16_t sub_version_number;
DECL|terminate_ind|member|struct pdu_data_llctrl_terminate_ind terminate_ind;
DECL|timeout|member|uint16_t timeout;
DECL|timeout|member|uint16_t timeout;
DECL|timeout|member|uint16_t timeout;
DECL|timeout|member|uint16_t timeout;
DECL|tx_addr|member|uint8_t tx_addr:1;
DECL|type|member|uint8_t type:4;
DECL|type|member|uint8_t type;
DECL|unknown_rsp|member|struct pdu_data_llctrl_unknown_rsp unknown_rsp;
DECL|version_ind|member|struct pdu_data_llctrl_version_ind version_ind;
DECL|version_number|member|uint8_t version_number;
DECL|win_offset|member|uint16_t win_offset;
DECL|win_offset|member|uint16_t win_offset;
DECL|win_size|member|uint8_t win_size;
DECL|win_size|member|uint8_t win_size;
