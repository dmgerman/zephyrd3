DECL|DEVICE_NONSHARED|macro|DEVICE_NONSHARED
DECL|DEVICE_SHARED|macro|DEVICE_SHARED
DECL|IPI_IDR_OFFSET|macro|IPI_IDR_OFFSET
DECL|IPI_IER_OFFSET|macro|IPI_IER_OFFSET
DECL|IPI_IMR_OFFSET|macro|IPI_IMR_OFFSET
DECL|IPI_ISR_OFFSET|macro|IPI_ISR_OFFSET
DECL|IPI_OBS_OFFSET|macro|IPI_OBS_OFFSET
DECL|IPI_TRIG_OFFSET|macro|IPI_TRIG_OFFSET
DECL|NORM_NSHARED_NCACHE|macro|NORM_NSHARED_NCACHE
DECL|NORM_SHARED_NCACHE|macro|NORM_SHARED_NCACHE
DECL|PRIV_RW_USER_RW|macro|PRIV_RW_USER_RW
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
DECL|bus_name|member|const char *bus_name;
DECL|dev|member|struct metal_device *dev;
DECL|io|member|struct metal_io_region *io;
DECL|ipi_chn_mask|member|uint32_t ipi_chn_mask;
DECL|ipi_info|struct|struct ipi_info {
DECL|name|member|const char *name;
DECL|paddr|member|metal_phys_addr_t paddr;
DECL|registered|member|int registered;
DECL|sync|member|atomic_int sync;
DECL|zynqmp_r5_a53_proc_ops|variable|zynqmp_r5_a53_proc_ops
