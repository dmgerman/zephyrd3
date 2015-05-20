DECL|BAR_SPACE_IO|macro|BAR_SPACE_IO
DECL|BAR_SPACE_MEM|macro|BAR_SPACE_MEM
DECL|PCI_DEBUG|macro|PCI_DEBUG
DECL|_PCI_H_|macro|_PCI_H_
DECL|addr|member|uint32_t addr; /* I/O or memory region address */
DECL|bar|member|uint16_t bar:3;
DECL|class|member|uint16_t class:8;
DECL|device_id|member|uint16_t device_id;
DECL|function|member|uint16_t function:3;
DECL|irq|member|int irq;
DECL|mem_type|member|uint16_t mem_type:1; /* memory type: BAR_SPACE_MEM/BAR_SPACE_IO */
DECL|pci_dev_info|struct|struct pci_dev_info {
DECL|size|member|uint32_t size; /* memory region size */
DECL|unused|member|uint16_t unused:1;
DECL|vendor_id|member|uint16_t vendor_id;
