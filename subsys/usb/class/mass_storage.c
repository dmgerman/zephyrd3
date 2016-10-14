DECL|BLOCK_SIZE|macro|BLOCK_SIZE
DECL|CBWDecode|function|static void CBWDecode(uint8_t *buf, uint16_t size)
DECL|CSW_ERROR|enumerator|CSW_ERROR,
DECL|CSW_FAILED|enumerator|CSW_FAILED,
DECL|CSW_PASSED|enumerator|CSW_PASSED,
DECL|DISK_FIBER_PRIO|macro|DISK_FIBER_PRIO
DECL|DISK_FIBER_STACK_SZ|macro|DISK_FIBER_STACK_SZ
DECL|ERROR|enumerator|ERROR, /* error */
DECL|HIGH_BYTE|macro|HIGH_BYTE
DECL|LOW_BYTE|macro|LOW_BYTE
DECL|MAX_PACKET|macro|MAX_PACKET
DECL|PROCESS_CBW|enumerator|PROCESS_CBW, /* process a CBW request */
DECL|READ_CBW|enumerator|READ_CBW, /* wait a CBW */
DECL|SEND_CSW|enumerator|SEND_CSW, /* send a CSW */
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|Stage|enum|enum Stage {
DECL|Status|enum|enum Status {
DECL|WAIT_CSW|enumerator|WAIT_CSW /* wait that a CSW has been effectively sent */
DECL|addr|variable|addr
DECL|block_count|variable|block_count
DECL|cbw|variable|cbw
DECL|csw|variable|csw
DECL|defered_wr_sz|variable|defered_wr_sz
DECL|disk_wait_sem|variable|disk_wait_sem
DECL|fail|function|static void fail(void)
DECL|fiber_memory_read_done|function|static void fiber_memory_read_done(void)
DECL|fiber_memory_write_done|function|static void fiber_memory_write_done(void)
DECL|fiber_op|variable|fiber_op
DECL|infoTransfer|function|static bool infoTransfer(void)
DECL|inquiryRequest|function|static bool inquiryRequest(void)
DECL|interface_data|variable|interface_data
DECL|length|variable|length
DECL|mass_ep_data|variable|mass_ep_data
DECL|mass_fiber_main|function|static void mass_fiber_main(int arg1, int unused)
DECL|mass_fiber_stack|variable|mass_fiber_stack
DECL|mass_storage_bulk_in|function|static void mass_storage_bulk_in(uint8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|mass_storage_bulk_out|function|static void mass_storage_bulk_out(uint8_t ep,enum usb_dc_ep_cb_status_code ep_status)
DECL|mass_storage_class_handle_req|function|static int mass_storage_class_handle_req(struct usb_setup_packet *pSetup,int32_t *len, uint8_t **data)
DECL|mass_storage_config|variable|mass_storage_config
DECL|mass_storage_init|function|static int mass_storage_init(struct device *dev)
DECL|mass_storage_status_cb|function|static void mass_storage_status_cb(enum usb_dc_status_code status)
DECL|mass_usb_description|variable|mass_usb_description
DECL|max_lun_count|variable|max_lun_count
DECL|memOK|variable|memOK
DECL|memoryRead|function|static void memoryRead(void)
DECL|memoryVerify|function|static void memoryVerify(uint8_t *buf, uint16_t size)
DECL|memoryWrite|function|static void memoryWrite(uint8_t *buf, uint16_t size)
DECL|memory_size|variable|memory_size
DECL|modeSense6|function|static bool modeSense6(void)
DECL|msd_init|function|static void msd_init(void)
DECL|msd_state_machine_reset|function|static void msd_state_machine_reset(void)
DECL|page|variable|page
DECL|readCapacity|function|static bool readCapacity(void)
DECL|readFormatCapacity|function|static bool readFormatCapacity(void)
DECL|requestSense|function|static bool requestSense(void)
DECL|sendCSW|function|static void sendCSW(void)
DECL|stage|variable|stage
DECL|testUnitReady|function|static void testUnitReady(void)
DECL|write|function|static bool write(uint8_t *buf, uint16_t size)
