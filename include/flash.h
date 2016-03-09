DECL|__FLASH_H__|macro|__FLASH_H__
DECL|erase|member|flash_api_erase erase;
DECL|flash_api_erase|typedef|typedef int (*flash_api_erase)(struct device *dev, size_t offset,
DECL|flash_api_read|typedef|typedef int (*flash_api_read)(struct device *dev, size_t offset,
DECL|flash_api_write_protection|typedef|typedef int (*flash_api_write_protection)(struct device *dev, bool enable);
DECL|flash_api_write|typedef|typedef int (*flash_api_write)(struct device *dev, size_t offset,
DECL|flash_driver_api|struct|struct flash_driver_api {
DECL|flash_erase|function|static inline int flash_erase(struct device *dev, size_t offset, size_t size)
DECL|flash_read|function|static inline int flash_read(struct device *dev, size_t offset, size_t len, void *data)
DECL|flash_write_protection_set|function|static inline int flash_write_protection_set(struct device *dev, bool enable)
DECL|flash_write|function|static inline int flash_write(struct device *dev, size_t offset, size_t len, const void *data)
DECL|read|member|flash_api_read read;
DECL|write_protection|member|flash_api_write_protection write_protection;
DECL|write|member|flash_api_write write;
