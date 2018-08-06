DECL|area_idx|member|u32_t area_idx;
DECL|area_len|member|u32_t area_len;
DECL|area_off|member|u32_t area_off;
DECL|driver_map_entry|struct|struct driver_map_entry {
DECL|flash_area_align|function|u8_t flash_area_align(const struct flash_area *fa)
DECL|flash_area_close|function|void flash_area_close(const struct flash_area *fa)
DECL|flash_area_erase|function|int flash_area_erase(const struct flash_area *fa, off_t off, size_t len)
DECL|flash_area_get_sectors|function|int flash_area_get_sectors(int idx, u32_t *cnt, struct flash_sector *ret)
DECL|flash_area_has_driver|function|int flash_area_has_driver(const struct flash_area *fa)
DECL|flash_area_layout|function|static int flash_area_layout(int idx, u32_t *cnt, void *ret,flash_page_cb cb, struct layout_data *cb_data)
DECL|flash_area_open|function|int flash_area_open(u8_t id, const struct flash_area **fap)
DECL|flash_area_read|function|int flash_area_read(const struct flash_area *fa, off_t off, void *dst, size_t len)
DECL|flash_area_write|function|int flash_area_write(const struct flash_area *fa, off_t off, const void *src, size_t len)
DECL|flash_dev|variable|flash_dev
DECL|flash_drivers_map|variable|flash_drivers_map
DECL|flash_map_init|function|static int flash_map_init(struct device *dev)
DECL|flash_map|variable|flash_map
DECL|get_flash_area_from_id|function|static struct flash_area const *get_flash_area_from_id(int idx)
DECL|get_flash_dev_from_id|function|static struct device *get_flash_dev_from_id(u8_t id)
DECL|get_sectors_cb|function|static bool get_sectors_cb(const struct flash_pages_info *info, void *datav)
DECL|id|member|u8_t id;
DECL|is_in_flash_area_bounds|function|static inline bool is_in_flash_area_bounds(const struct flash_area *fa, off_t off, size_t len)
DECL|layout_data|struct|struct layout_data {
DECL|name|member|const char * const name;
DECL|ret_idx|member|u32_t ret_idx;
DECL|ret_len|member|u32_t ret_len;
DECL|ret|member|void *ret; /* struct flash_area* or struct flash_sector* */
DECL|should_bail|function|static bool should_bail(const struct flash_pages_info *info,struct layout_data *data, bool *bail_value)
DECL|status|member|int status;
