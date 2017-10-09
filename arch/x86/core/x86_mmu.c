DECL|X86_MEM_DOMAIN_RESET_PAGES|macro|X86_MEM_DOMAIN_RESET_PAGES
DECL|X86_MEM_DOMAIN_SET_PAGES|macro|X86_MEM_DOMAIN_SET_PAGES
DECL|_arch_buffer_validate|function|int _arch_buffer_validate(void *addr, size_t size, int write)
DECL|_arch_mem_domain_destroy|function|void _arch_mem_domain_destroy(struct k_mem_domain *domain)
DECL|_arch_mem_domain_max_partitions_get|function|u8_t _arch_mem_domain_max_partitions_get(void)
DECL|_arch_mem_domain_remove_partition|function|void _arch_mem_domain_remove_partition(struct k_mem_domain *domain, u32_t partition_id)
DECL|_x86_load_mmu_mem_domain|function|void _x86_load_mmu_mem_domain(struct k_thread *thread)
DECL|_x86_mmu_get_flags|function|void _x86_mmu_get_flags(void *addr, u32_t *pde_flags, u32_t *pte_flags)
DECL|_x86_mmu_set_flags|function|void _x86_mmu_set_flags(void *ptr, size_t size, u32_t flags, u32_t mask)
DECL|tlb_flush_page|function|static inline void tlb_flush_page(void *addr)
DECL|x86_update_mem_domain_pages|function|static inline void x86_update_mem_domain_pages(struct k_mem_domain *mem_domain, u32_t page_conf)
