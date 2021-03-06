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
DECL|baridx|member|u32_t baridx:3;
DECL|barofs|member|u32_t barofs:3;
DECL|bus|member|u32_t bus:9;
DECL|dev|member|u32_t dev:6;
DECL|func|member|u32_t func:4;
DECL|info|member|struct pci_dev_info info;
DECL|lookup_data|struct|struct lookup_data {
DECL|lookup|variable|lookup
DECL|pci_bar_config_get|function|static inline int pci_bar_config_get(union pci_addr_reg pci_ctrl_addr,u32_t *config)
DECL|pci_bar_params_get|function|static inline int pci_bar_params_get(union pci_addr_reg pci_ctrl_addr, struct pci_dev_info *dev_info, int max_bars)
DECL|pci_bus_scan_init|function|void pci_bus_scan_init(void)
DECL|pci_bus_scan|function|int pci_bus_scan(struct pci_dev_info *dev_info)
DECL|pci_dev_scan|function|static inline int pci_dev_scan(union pci_addr_reg pci_ctrl_addr,struct pci_dev_info *dev_info)
DECL|pci_enable_bus_master|function|void pci_enable_bus_master(struct pci_dev_info *dev_info)
DECL|pci_enable_regs|function|void pci_enable_regs(struct pci_dev_info *dev_info)
DECL|pci_set_command_bits|function|static void pci_set_command_bits(struct pci_dev_info *dev_info, u32_t bits)
DECL|pci_show|function|void pci_show(struct pci_dev_info *dev_info)
DECL|unused|member|u32_t unused:7;
