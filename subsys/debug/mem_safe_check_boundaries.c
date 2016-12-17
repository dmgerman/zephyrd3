DECL|IMAGE_RAM_END|macro|IMAGE_RAM_END
DECL|IMAGE_RAM_START|macro|IMAGE_RAM_START
DECL|IMAGE_ROM_END|macro|IMAGE_ROM_END
DECL|IMAGE_ROM_START|macro|IMAGE_ROM_START
DECL|IMAGE_TEXT_END|macro|IMAGE_TEXT_END
DECL|IMAGE_TEXT_START|macro|IMAGE_TEXT_START
DECL|NUM_REGIONS|macro|NUM_REGIONS
DECL|VALID_PERMISSION_MASK|macro|VALID_PERMISSION_MASK
DECL|_mem_probe|function|int _mem_probe(void *p, int perm, size_t num_bytes, void *buf)
DECL|_mem_safe_read|function|int _mem_safe_read(void *src, char *buf, size_t num_bytes, int width)
DECL|_mem_safe_region_add|function|int _mem_safe_region_add(void *addr, size_t num_bytes, int perm)
DECL|_mem_safe_write_to_text_section|function|int _mem_safe_write_to_text_section(void *dest, char *buf, size_t num_bytes)
DECL|_mem_safe_write_to_text_section|function|int _mem_safe_write_to_text_section(void *dest, char *buf, size_t num_bytes)
DECL|_mem_safe_write|function|int _mem_safe_write(void *dest, char *buf, size_t num_bytes, int width)
DECL|addr|member|vaddr_t addr;
DECL|get_align|function|static inline int get_align(const uint32_t value)
DECL|get_width|function|static inline int get_width(const void *p1, const void *p2,size_t num_bytes, int width)
DECL|init|function|static int init(struct device *unused)
DECL|is_in_a_ro_region|function|static inline int is_in_a_ro_region(vaddr_t addr, vaddr_t end_addr)
DECL|is_in_a_rw_region|function|static inline int is_in_a_rw_region(vaddr_t addr, vaddr_t end_addr)
DECL|is_in_region|function|static inline int is_in_region(int slot, vaddr_t addr, vaddr_t end_addr)
DECL|is_num_bytes_valid|function|static inline int is_num_bytes_valid(size_t num_bytes)
DECL|is_perm_valid|function|static inline int is_perm_valid(int perm)
DECL|last_byte|member|vaddr_t last_byte;
DECL|mem_access|function|static inline int mem_access(void *p, void *buf, size_t num_bytes,int len, int perm)
DECL|mem_probe_no_check|function|static inline int mem_probe_no_check(void *p, int perm, size_t num_bytes,void *buf)
DECL|mem_regions|variable|mem_regions
DECL|ro_base|macro|ro_base
DECL|ro_end|variable|ro_end
DECL|rw_base|macro|rw_base
DECL|rw_end|variable|rw_end
DECL|write_to_mem|function|static inline void write_to_mem(void *dest, void *src, int width)
