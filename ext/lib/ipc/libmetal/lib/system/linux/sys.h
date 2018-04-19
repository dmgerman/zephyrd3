DECL|MAX_PAGE_SIZES|macro|MAX_PAGE_SIZES
DECL|METAL_INVALID_VADDR|macro|METAL_INVALID_VADDR
DECL|__METAL_LINUX_SYS__H__|macro|__METAL_LINUX_SYS__H__
DECL|common|member|struct metal_common_state common;
DECL|data_fd|member|int data_fd;
DECL|metal_for_each_page_size_down|macro|metal_for_each_page_size_down
DECL|metal_for_each_page_size_up|macro|metal_for_each_page_size_up
DECL|metal_page_size|struct|struct metal_page_size {
DECL|metal_state|struct|struct metal_state {
DECL|mmap_flags|member|int mmap_flags;
DECL|num_page_sizes|member|int num_page_sizes;
DECL|page_shift|member|unsigned long page_shift;
DECL|page_shift|member|unsigned long page_shift;
DECL|page_sizes|member|struct metal_page_size page_sizes[MAX_PAGE_SIZES];
DECL|page_size|member|size_t page_size;
DECL|page_size|member|unsigned long page_size;
DECL|pagemap_fd|member|int pagemap_fd;
DECL|path|member|char path[PATH_MAX];
DECL|sysfs_path|member|const char *sysfs_path;
DECL|tmp_path|member|const char *tmp_path;
