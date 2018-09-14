DECL|ZEPHYR_INCLUDE_DFU_FLASH_IMG_H_|macro|ZEPHYR_INCLUDE_DFU_FLASH_IMG_H_
DECL|buf_bytes|member|u16_t buf_bytes;
DECL|buf|member|u8_t buf[CONFIG_IMG_BLOCK_BUF_SIZE];
DECL|bytes_written|member|size_t bytes_written;
DECL|dev|member|struct device *dev;
DECL|flash_img_context|struct|struct flash_img_context {
