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
DECL|bar|member|uint32_t bar:4;
DECL|bus|member|uint32_t bus:9;
DECL|dev|member|uint32_t dev:6;
DECL|func|member|uint32_t func:4;
DECL|info|member|struct pci_dev_info info;
DECL|lookup_data|struct|struct lookup_data {
DECL|lookup|variable|lookup
DECL|pci_bar_config_get|function|static inline int pci_bar_config_get(union pci_addr_reg pci_ctrl_addr,uint32_t *config)
DECL|pci_bar_params_get|function|static inline int pci_bar_params_get(union pci_addr_reg pci_ctrl_addr,struct pci_dev_info *dev_info)
DECL|pci_bus_scan_init|function|void pci_bus_scan_init(void)
DECL|pci_bus_scan|function|int pci_bus_scan(struct pci_dev_info *dev_info)
DECL|pci_dev_scan|function|static inline int pci_dev_scan(union pci_addr_reg pci_ctrl_addr,struct pci_dev_info *dev_info)
DECL|pci_enable_regs|function|void pci_enable_regs(struct pci_dev_info *dev_info)
DECL|pci_show|function|void pci_show(struct pci_dev_info *dev_info)
DECL|unused|member|uint32_t unused:9;
