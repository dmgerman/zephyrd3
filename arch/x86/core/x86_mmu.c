DECL|X86_MEM_DOMAIN_RESET_PAGES|macro|X86_MEM_DOMAIN_RESET_PAGES
DECL|X86_MEM_DOMAIN_SET_PAGES|macro|X86_MEM_DOMAIN_SET_PAGES
DECL|_arch_buffer_validate|function|int _arch_buffer_validate(void *addr, size_t size, int write)
DECL|_arch_mem_domain_configure|function|void _arch_mem_domain_configure(struct k_thread *thread)
DECL|_arch_mem_domain_destroy|function|void _arch_mem_domain_destroy(struct k_mem_domain *domain)
DECL|_arch_mem_domain_max_partitions_get|function|int _arch_mem_domain_max_partitions_get(void)
DECL|_arch_mem_domain_partition_remove|function|void _arch_mem_domain_partition_remove(struct k_mem_domain *domain, u32_t partition_id)
DECL|_x86_mem_domain_pages_update|function|static inline void _x86_mem_domain_pages_update(struct k_mem_domain *mem_domain,u32_t page_conf)
DECL|_x86_mmu_get_flags|function|void _x86_mmu_get_flags(void *addr,x86_page_entry_data_t *pde_flags, x86_page_entry_data_t *pte_flags)
DECL|_x86_mmu_set_flags|function|void _x86_mmu_set_flags(void *ptr,size_t size, x86_page_entry_data_t flags, x86_page_entry_data_t mask)
DECL|newlib_mmu_prepare|function|static int newlib_mmu_prepare(struct device *unused)
DECL|tlb_flush_page|function|static inline void tlb_flush_page(void *addr)
