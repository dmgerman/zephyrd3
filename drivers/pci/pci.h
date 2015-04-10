DECL|BAR_SPACE_IO|macro|BAR_SPACE_IO
DECL|BAR_SPACE_MEM|macro|BAR_SPACE_MEM
DECL|PCI_DEBUG|macro|PCI_DEBUG
DECL|_PCI_H_|macro|_PCI_H_
DECL|addr|member|uint32_t addr; /* I/O or memory region address */
DECL|class|member|uint16_t class;
DECL|device_id|member|uint16_t device_id;
DECL|irq|member|int irq;
DECL|mem_type|member|uint16_t mem_type; /* memory type: BAR_SPACE_MEM/BAR_SPACE_IO */
DECL|pci_dev_info|struct|struct pci_dev_info {
DECL|size|member|uint32_t size; /* memory region size */
DECL|vendor_id|member|uint16_t vendor_id;
