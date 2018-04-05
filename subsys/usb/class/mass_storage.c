DECL|BLOCK_SIZE|macro|BLOCK_SIZE
DECL|CBWDecode|function|static void CBWDecode(u8_t *buf, u16_t size)
DECL|CSW_ERROR|enumerator|CSW_ERROR,
DECL|CSW_FAILED|enumerator|CSW_FAILED,
DECL|CSW_PASSED|enumerator|CSW_PASSED,
DECL|DISK_THREAD_PRIO|macro|DISK_THREAD_PRIO
DECL|DISK_THREAD_STACK_SZ|macro|DISK_THREAD_STACK_SZ
DECL|ERROR|enumerator|ERROR, /* error */
DECL|MAX_PACKET|macro|MAX_PACKET
DECL|PROCESS_CBW|enumerator|PROCESS_CBW, /* process a CBW request */
DECL|READ_CBW|enumerator|READ_CBW, /* wait a CBW */
DECL|SEND_CSW|enumerator|SEND_CSW, /* send a CSW */
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|Stage|enum|enum Stage {
DECL|Status|enum|enum Status {
DECL|THREAD_OP_READ_QUEUED|macro|THREAD_OP_READ_QUEUED
DECL|THREAD_OP_WRITE_DONE|macro|THREAD_OP_WRITE_DONE
DECL|THREAD_OP_WRITE_QUEUED|macro|THREAD_OP_WRITE_QUEUED
DECL|WAIT_CSW|enumerator|WAIT_CSW /* wait that a CSW has been effectively sent */
DECL|__packed|variable|__packed
DECL|addr|variable|addr
DECL|block_count|variable|block_count
DECL|cbw|variable|cbw
DECL|csw|variable|csw
DECL|defered_wr_sz|variable|defered_wr_sz
DECL|disk_pdrv|variable|disk_pdrv
DECL|disk_wait_sem|variable|disk_wait_sem
DECL|fail|function|static void fail(void)
DECL|if0_in_ep|member|struct usb_ep_descriptor if0_in_ep;
DECL|if0_out_ep|member|struct usb_ep_descriptor if0_out_ep;
DECL|if0|member|struct usb_if_descriptor if0;
DECL|infoTransfer|function|static bool infoTransfer(void)
DECL|inquiryRequest|function|static bool inquiryRequest(void)
DECL|interface_data|variable|interface_data
DECL|length|variable|length
DECL|mass_ep_data|variable|mass_ep_data
DECL|mass_storage_bulk_in|function|static void mass_storage_bulk_in(u8_t ep, enum usb_dc_ep_cb_status_code ep_status)
DECL|mass_storage_bulk_out|function|static void mass_storage_bulk_out(u8_t ep,enum usb_dc_ep_cb_status_code ep_status)
DECL|mass_storage_class_handle_req|function|static int mass_storage_class_handle_req(struct usb_setup_packet *pSetup,s32_t *len, u8_t **data)
DECL|mass_storage_config|variable|mass_storage_config
DECL|mass_storage_init|function|static int mass_storage_init(struct device *dev)
DECL|mass_storage_status_cb|function|static void mass_storage_status_cb(enum usb_dc_status_code status, u8_t *param)
DECL|mass_thread_data|variable|mass_thread_data
DECL|mass_thread_main|function|static void mass_thread_main(int arg1, int unused)
DECL|max_lun_count|variable|max_lun_count
DECL|memOK|variable|memOK
DECL|memoryRead|function|static void memoryRead(void)
DECL|memoryVerify|function|static void memoryVerify(u8_t *buf, u16_t size)
DECL|memoryWrite|function|static void memoryWrite(u8_t *buf, u16_t size)
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
DECL|thread_memory_read_done|function|static void thread_memory_read_done(void)
DECL|thread_memory_write_done|function|static void thread_memory_write_done(void)
DECL|thread_op|variable|thread_op
DECL|usb_mass_config|struct|struct usb_mass_config {
DECL|write|function|static bool write(u8_t *buf, u16_t size)
