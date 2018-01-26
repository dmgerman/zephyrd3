DECL|fcb_clear|function|fcb_clear(struct fcb *fcb)
DECL|fcb_erase_sector|function|fcb_erase_sector(const struct fcb *fcb, const struct flash_sector *sector)
DECL|fcb_flash_read|function|fcb_flash_read(const struct fcb *fcb, const struct flash_sector *sector, off_t off, void *dst, size_t len)
DECL|fcb_flash_write|function|fcb_flash_write(const struct fcb *fcb, const struct flash_sector *sector, off_t off, const void *src, size_t len)
DECL|fcb_free_sector_cnt|function|fcb_free_sector_cnt(struct fcb *fcb)
DECL|fcb_get_align|function|fcb_get_align(const struct fcb *fcb)
DECL|fcb_get_len|function|fcb_get_len(u8_t *buf, u16_t *len)
DECL|fcb_init|function|fcb_init(struct fcb *fcb)
DECL|fcb_is_empty|function|fcb_is_empty(struct fcb *fcb)
DECL|fcb_offset_last_n|function|fcb_offset_last_n(struct fcb *fcb, u8_t entries,struct fcb_entry *last_n_entry)
DECL|fcb_open_flash|function|fcb_open_flash(const struct fcb *fcb)
DECL|fcb_put_len|function|fcb_put_len(u8_t *buf, u16_t len)
DECL|fcb_sector_hdr_init|function|fcb_sector_hdr_init(struct fcb *fcb, struct flash_sector *sector, u16_t id)
DECL|fcb_sector_hdr_read|function|int fcb_sector_hdr_read(struct fcb *fcb, struct flash_sector *sector,struct fcb_disk_area *fdap)
