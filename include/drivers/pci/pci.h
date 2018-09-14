DECL|BAR_SPACE_IO|macro|BAR_SPACE_IO
DECL|BAR_SPACE_MEM|macro|BAR_SPACE_MEM
DECL|PCI_BAR_ANY|macro|PCI_BAR_ANY
DECL|PCI_FUNCTION_ANY|macro|PCI_FUNCTION_ANY
DECL|PCI_MAX_BARS|macro|PCI_MAX_BARS
DECL|PCI_MAX_FUNCTIONS|macro|PCI_MAX_FUNCTIONS
DECL|ZEPHYR_INCLUDE_DRIVERS_PCI_PCI_H_|macro|ZEPHYR_INCLUDE_DRIVERS_PCI_PCI_H_
DECL|_reserved|member|u32_t _reserved:3;
DECL|addr|member|u32_t addr; /* I/O or memory region address */
DECL|bar|member|u32_t bar:3;
DECL|bus|member|u32_t bus:8;
DECL|class_type|member|u32_t class_type:8;
DECL|device_id|member|u16_t device_id;
DECL|dev|member|u32_t dev:5;
DECL|function|member|u32_t function:4;
DECL|irq|member|int irq;
DECL|mem_type|member|u32_t mem_type:1; /* memory type: BAR_SPACE_MEM/BAR_SPACE_IO */
DECL|pci_bus_scan_init|macro|pci_bus_scan_init
DECL|pci_bus_scan|function|static inline int pci_bus_scan(struct pci_dev_info *dev_info)
DECL|pci_dev_info|struct|struct pci_dev_info {
DECL|pci_show|macro|pci_show
DECL|size|member|u32_t size; /* memory region size */
DECL|vendor_id|member|u16_t vendor_id;
