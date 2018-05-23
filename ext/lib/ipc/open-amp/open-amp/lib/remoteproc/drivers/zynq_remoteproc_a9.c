DECL|A9_CPU_SLCR_CLK_STOP|macro|A9_CPU_SLCR_CLK_STOP
DECL|A9_CPU_SLCR_RESET_CTRL|macro|A9_CPU_SLCR_RESET_CTRL
DECL|A9_CPU_SLCR_RST|macro|A9_CPU_SLCR_RST
DECL|DEVICE_MEMORY|macro|DEVICE_MEMORY
DECL|ESAL_DP_SLCR_BASE|macro|ESAL_DP_SLCR_BASE
DECL|GIC_CPU_ID_BASE|macro|GIC_CPU_ID_BASE
DECL|GIC_DIST_SOFTINT|macro|GIC_DIST_SOFTINT
DECL|GIC_SFI_TRIG_CPU_MASK|macro|GIC_SFI_TRIG_CPU_MASK
DECL|GIC_SFI_TRIG_INTID_MASK|macro|GIC_SFI_TRIG_INTID_MASK
DECL|GIC_SFI_TRIG_SATT_MASK|macro|GIC_SFI_TRIG_SATT_MASK
DECL|HIL_CACHE_CLEAR_INT|macro|HIL_CACHE_CLEAR_INT
DECL|HIL_CACHE_INV_ALL_WAYS|macro|HIL_CACHE_INV_ALL_WAYS
DECL|HIL_CACHE_LINE_SIZE|macro|HIL_CACHE_LINE_SIZE
DECL|HIL_CACHE_UNLOCK_ALL_WAYS|macro|HIL_CACHE_UNLOCK_ALL_WAYS
DECL|HIL_DEV_NAME_PREFIX|macro|HIL_DEV_NAME_PREFIX
DECL|HIL_PA_SBZ_MASK|macro|HIL_PA_SBZ_MASK
DECL|HIL_PL130_BASE|macro|HIL_PL130_BASE
DECL|HIL_PL130_CLEANINVLINE|macro|HIL_PL130_CLEANINVLINE
DECL|HIL_PL130_INVALLINE|macro|HIL_PL130_INVALLINE
DECL|NORM_NONCACHE|macro|NORM_NONCACHE
DECL|RESERVED|macro|RESERVED
DECL|SCUGIC_DIST_BASE|macro|SCUGIC_DIST_BASE
DECL|SCUGIC_PERIPH_BASE|macro|SCUGIC_PERIPH_BASE
DECL|STRONG_ORDERED|macro|STRONG_ORDERED
DECL|_alloc_shm|function|static struct metal_io_region* _alloc_shm(struct hil_proc *proc,metal_phys_addr_t pa, size_t size, struct metal_device **dev)
DECL|_boot_cpu|function|static int _boot_cpu(struct hil_proc *proc, unsigned int load_addr)
DECL|_enable_interrupt|function|static int _enable_interrupt(struct proc_intr *intr)
DECL|_initialize|function|static int _initialize(struct hil_proc *proc)
DECL|_ipi_handler|function|int _ipi_handler(int vect_id, void *data)
DECL|_notify|function|static void _notify(struct hil_proc *proc, struct proc_intr *intr_info)
DECL|_poll|function|static int _poll(struct hil_proc *proc, int nonblock)
DECL|_release_shm|function|static void _release_shm(struct hil_proc *proc,struct metal_device *dev, struct metal_io_region *io)
DECL|_release|function|static void _release(struct hil_proc *proc)
DECL|_rproc_wait|macro|_rproc_wait
DECL|_shutdown_cpu|function|static void _shutdown_cpu(struct hil_proc *proc)
DECL|device|member|struct metal_device device;
DECL|gic_dist_io|variable|gic_dist_io
DECL|git_dist_base_addr|variable|git_dist_base_addr
DECL|hil_mem_device|struct|struct hil_mem_device {
DECL|lock_slcr|macro|lock_slcr
DECL|name|member|char name[64];
DECL|pa|member|metal_phys_addr_t pa;
DECL|unlock_slcr|macro|unlock_slcr
DECL|zynq_a9_proc_ops|variable|zynq_a9_proc_ops
