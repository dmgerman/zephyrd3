DECL|img_mgmt_impl_erase_slot|function|img_mgmt_impl_erase_slot(void)
DECL|img_mgmt_impl_read|function|img_mgmt_impl_read(int slot, unsigned int offset, void *dst, unsigned int num_bytes)
DECL|img_mgmt_impl_swap_type|function|img_mgmt_impl_swap_type(void)
DECL|img_mgmt_impl_write_confirmed|function|img_mgmt_impl_write_confirmed(void)
DECL|img_mgmt_impl_write_image_data|function|img_mgmt_impl_write_image_data(unsigned int offset, const void *data, unsigned int num_bytes, bool last)
DECL|img_mgmt_impl_write_pending|function|img_mgmt_impl_write_pending(int slot, bool permanent)
DECL|zephyr_img_mgmt_abs_offset|function|zephyr_img_mgmt_abs_offset(int slot, off_t sub_offset)
DECL|zephyr_img_mgmt_flash_check_empty|function|zephyr_img_mgmt_flash_check_empty(off_t offset, size_t size, bool *out_empty)
DECL|zephyr_img_mgmt_flash_ctxt|variable|zephyr_img_mgmt_flash_ctxt
DECL|zephyr_img_mgmt_flash_dev|variable|zephyr_img_mgmt_flash_dev
DECL|zephyr_img_mgmt_init|function|zephyr_img_mgmt_init(struct device *dev)
