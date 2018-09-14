DECL|ZEPHYR_INCLUDE_FLASH_H_|macro|ZEPHYR_INCLUDE_FLASH_H_
DECL|_impl_flash_erase|function|static inline int _impl_flash_erase(struct device *dev, off_t offset, size_t size)
DECL|_impl_flash_get_write_block_size|function|static inline size_t _impl_flash_get_write_block_size(struct device *dev)
DECL|_impl_flash_read|function|static inline int _impl_flash_read(struct device *dev, off_t offset, void *data, size_t len)
DECL|_impl_flash_write_protection_set|function|static inline int _impl_flash_write_protection_set(struct device *dev, bool enable)
DECL|_impl_flash_write|function|static inline int _impl_flash_write(struct device *dev, off_t offset, const void *data, size_t len)
DECL|erase|member|flash_api_erase erase;
DECL|flash_api_erase|typedef|typedef int (*flash_api_erase)(struct device *dev, off_t offset, size_t size);
DECL|flash_api_pages_layout|typedef|typedef void (*flash_api_pages_layout)(struct device *dev,
DECL|flash_api_read|typedef|typedef int (*flash_api_read)(struct device *dev, off_t offset, void *data,
DECL|flash_api_write_protection|typedef|typedef int (*flash_api_write_protection)(struct device *dev, bool enable);
DECL|flash_api_write|typedef|typedef int (*flash_api_write)(struct device *dev, off_t offset,
DECL|flash_driver_api|struct|struct flash_driver_api {
DECL|flash_page_cb|typedef|typedef bool (*flash_page_cb)(const struct flash_pages_info *info, void *data);
DECL|flash_pages_info|struct|struct flash_pages_info {
DECL|flash_pages_layout|struct|struct flash_pages_layout {
DECL|index|member|u32_t index;
DECL|page_layout|member|flash_api_pages_layout page_layout;
DECL|pages_count|member|size_t pages_count; /* count of pages sequence of the same size */
DECL|pages_size|member|size_t pages_size;
DECL|read|member|flash_api_read read;
DECL|size|member|size_t size;
DECL|start_offset|member|off_t start_offset; /* offset from the base of flash address */
DECL|write_block_size|member|const size_t write_block_size;
DECL|write_protection|member|flash_api_write_protection write_protection;
DECL|write|member|flash_api_write write;
