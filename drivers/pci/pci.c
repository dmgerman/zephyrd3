DECL|BAR_ADDR|macro|BAR_ADDR
DECL|BAR_IO_MASK|macro|BAR_IO_MASK
DECL|BAR_MEM_MASK|macro|BAR_MEM_MASK
DECL|BAR_PREFETCH|macro|BAR_PREFETCH
DECL|BAR_SPACE|macro|BAR_SPACE
DECL|BAR_TYPE_32BIT|macro|BAR_TYPE_32BIT
DECL|BAR_TYPE_64BIT|macro|BAR_TYPE_64BIT
DECL|BAR_TYPE|macro|BAR_TYPE
DECL|LSPCI_MAX_BUS|macro|LSPCI_MAX_BUS
DECL|LSPCI_MAX_DEV|macro|LSPCI_MAX_DEV
DECL|LSPCI_MAX_FUNC|macro|LSPCI_MAX_FUNC
DECL|LSPCI_MAX_REG|macro|LSPCI_MAX_REG
DECL|MAX_BARS|macro|MAX_BARS
DECL|dev_info_index|variable|dev_info_index
DECL|dev_info|variable|dev_info
DECL|pci_bar_config_get|function|static int pci_bar_config_get(uint32_t bus, uint32_t dev, uint32_t func, uint32_t bar, uint32_t *config)
DECL|pci_bar_params_get|function|static inline int pci_bar_params_get(uint32_t bus, uint32_t dev, uint32_t func, uint32_t bar, struct pci_dev_info *dev_info)
DECL|pci_bus_scan|function|void pci_bus_scan(uint32_t class_mask /* bitmask, bits set for each needed class */)
DECL|pci_dev_find|function|int pci_dev_find(int class, int idx, uint32_t *addr, uint32_t *size, int *irq)
DECL|pci_dev_scan|function|static void pci_dev_scan(uint32_t bus, uint32_t dev, uint32_t class_mask /* bitmask, bits set for each needed class */ )
DECL|pci_info_get|function|struct pci_dev_info *pci_info_get(void)
DECL|pci_show|function|void pci_show(void)
