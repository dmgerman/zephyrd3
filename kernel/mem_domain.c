DECL|init_mem_domain_module|function|static int init_mem_domain_module(struct device *arg)
DECL|k_mem_domain_add_partition|function|void k_mem_domain_add_partition(struct k_mem_domain *domain,struct k_mem_partition *part)
DECL|k_mem_domain_add_thread|function|void k_mem_domain_add_thread(struct k_mem_domain *domain, k_tid_t thread)
DECL|k_mem_domain_destroy|function|void k_mem_domain_destroy(struct k_mem_domain *domain)
DECL|k_mem_domain_init|function|void k_mem_domain_init(struct k_mem_domain *domain, u8_t num_parts, struct k_mem_partition *parts[])
DECL|k_mem_domain_remove_partition|function|void k_mem_domain_remove_partition(struct k_mem_domain *domain, struct k_mem_partition *part)
DECL|k_mem_domain_remove_thread|function|void k_mem_domain_remove_thread(k_tid_t thread)
DECL|max_partitions|variable|max_partitions
DECL|sane_partition_domain|function|static inline bool sane_partition_domain(const struct k_mem_domain *domain, const struct k_mem_partition *part)
DECL|sane_partition_domain|macro|sane_partition_domain
DECL|sane_partition|function|static bool sane_partition(const struct k_mem_partition *part, const struct k_mem_partition *parts, u32_t num_parts)
DECL|sane_partition|macro|sane_partition
