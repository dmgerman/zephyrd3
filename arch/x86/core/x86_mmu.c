DECL|GET_RW_PERM|macro|GET_RW_PERM
DECL|GET_US_PERM|macro|GET_US_PERM
DECL|USER_PERM_BIT_POS|macro|USER_PERM_BIT_POS
DECL|_x86_mmu_buffer_validate|function|int _x86_mmu_buffer_validate(void *addr, size_t size, int flags)
DECL|_x86_mmu_get_flags|function|void _x86_mmu_get_flags(void *addr, u32_t *pde_flags, u32_t *pte_flags)
DECL|_x86_mmu_set_flags|function|void _x86_mmu_set_flags(void *ptr, size_t size, u32_t flags, u32_t mask)
DECL|check_pde_flags|function|static inline u32_t check_pde_flags(volatile union x86_mmu_pde_pt pde, u32_t rw_permission, u32_t us_permission)
DECL|check_pte_flags|function|static inline u32_t check_pte_flags(union x86_mmu_pte pte, u32_t rw_permission, u32_t us_permission)
DECL|tlb_flush_page|function|static inline void tlb_flush_page(void *addr)
