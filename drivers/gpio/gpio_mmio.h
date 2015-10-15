DECL|GPIO_MMIO_CFG_DIR_INV|macro|GPIO_MMIO_CFG_DIR_INV
DECL|GPIO_MMIO_CFG_DIR_MASK|macro|GPIO_MMIO_CFG_DIR_MASK
DECL|GPIO_MMIO_CFG_DIR_NORMAL|macro|GPIO_MMIO_CFG_DIR_NORMAL
DECL|GPIO_MMIO_CFG_EN_INV|macro|GPIO_MMIO_CFG_EN_INV
DECL|GPIO_MMIO_CFG_EN_MASK|macro|GPIO_MMIO_CFG_EN_MASK
DECL|GPIO_MMIO_CFG_EN_NORMAL|macro|GPIO_MMIO_CFG_EN_NORMAL
DECL|_GPIO_MMIO_H_|macro|_GPIO_MMIO_H_
DECL|__gpio_mmio_access_t|typedef|typedef uint32_t (*__gpio_mmio_access_t)(uint32_t addr, uint32_t bit,
DECL|access|member|} access;
DECL|cfg_flags|member|uint32_t cfg_flags;
DECL|dir|member|uint32_t dir;
DECL|en|member|uint32_t en;
DECL|gpio_mmio_config|struct|struct gpio_mmio_config {
DECL|input|member|uint32_t input;
DECL|output|member|uint32_t output;
DECL|read|member|__gpio_mmio_access_t read;
DECL|reg|member|} reg;
DECL|set_bit|member|__gpio_mmio_access_t set_bit;
DECL|write|member|__gpio_mmio_access_t write;
