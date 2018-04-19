DECL|HIL_MAX_CORES|macro|HIL_MAX_CORES
DECL|HIL_MAX_NUM_CHANNELS|macro|HIL_MAX_NUM_CHANNELS
DECL|HIL_MAX_NUM_VRINGS|macro|HIL_MAX_NUM_VRINGS
DECL|HIL_MEM_READ16|macro|HIL_MEM_READ16
DECL|HIL_MEM_READ32|macro|HIL_MEM_READ32
DECL|HIL_MEM_READ8|macro|HIL_MEM_READ8
DECL|HIL_MEM_WRITE16|macro|HIL_MEM_WRITE16
DECL|HIL_MEM_WRITE32|macro|HIL_MEM_WRITE32
DECL|HIL_MEM_WRITE8|macro|HIL_MEM_WRITE8
DECL|HIL_RSVD_CPU_ID|macro|HIL_RSVD_CPU_ID
DECL|_HIL_H_|macro|_HIL_H_
DECL|align|member|unsigned long align;
DECL|alloc_shm|member|struct metal_io_region *(*alloc_shm) (struct hil_proc *proc,
DECL|boot_cpu|member|int (*boot_cpu) (struct hil_proc *proc, unsigned int start_addr);
DECL|chnls|member|struct proc_chnl chnls[HIL_MAX_NUM_CHANNELS];
DECL|cpu_id|member|unsigned long cpu_id;
DECL|data|member|void *data;
DECL|dev|member|struct metal_device *dev;
DECL|dev|member|struct metal_device *dev;
DECL|dev|member|struct metal_device *dev;
DECL|dfeatures|member|unsigned int dfeatures;
DECL|enable_interrupt|member|int (*enable_interrupt) (struct proc_intr *intr);
DECL|gfeatures|member|unsigned int gfeatures;
DECL|hil_platform_ops|struct|struct hil_platform_ops {
DECL|hil_proc_vdev_rst_cb_t|typedef|typedef void (*hil_proc_vdev_rst_cb_t)(struct hil_proc *proc, int id);
DECL|hil_proc|struct|struct hil_proc {
DECL|initialize|member|int (*initialize) (struct hil_proc *proc);
DECL|intr_info|member|struct proc_intr intr_info;
DECL|intr_info|member|struct proc_intr intr_info;
DECL|io|member|struct metal_io_region *io;
DECL|io|member|struct metal_io_region *io;
DECL|io|member|struct metal_io_region *io;
DECL|is_initialized|member|int is_initialized;
DECL|lock|member|metal_mutex_t lock;
DECL|name|member|char name[32];
DECL|node|member|struct metal_list node;
DECL|notify|member|void (*notify) (struct hil_proc *proc, struct proc_intr * intr_info);
DECL|num_chnls|member|unsigned long num_chnls;
DECL|num_descs|member|unsigned short num_descs;
DECL|num_vrings|member|unsigned int num_vrings;
DECL|ops|member|struct hil_platform_ops *ops;
DECL|pdata|member|void *pdata;
DECL|poll|member|int (*poll) (struct hil_proc *proc, int nonblock);
DECL|priority|member|unsigned int priority;
DECL|proc_chnl|struct|struct proc_chnl {
DECL|proc_intr|struct|struct proc_intr {
DECL|proc_shm|struct|struct proc_shm {
DECL|proc_vdev|struct|struct proc_vdev {
DECL|proc_vring|struct|struct proc_vring {
DECL|release_shm|member|void (*release_shm) (struct hil_proc *proc,
DECL|release|member|void (*release) (struct hil_proc *proc);
DECL|rsc_dev|member|struct metal_device *rsc_dev;
DECL|rsc_io|member|struct metal_io_region *rsc_io;
DECL|rst_cb|member|hil_proc_vdev_rst_cb_t rst_cb;
DECL|sh_buff|member|struct proc_shm sh_buff;
DECL|shutdown_cpu|member|void (*shutdown_cpu) (struct hil_proc *proc);
DECL|size|member|unsigned long size;
DECL|start_addr|member|void *start_addr;
DECL|start_paddr|member|metal_phys_addr_t start_paddr;
DECL|trigger_type|member|unsigned int trigger_type;
DECL|vaddr|member|void *vaddr;
DECL|vdev_info|member|void *vdev_info;
DECL|vdev|member|struct proc_vdev vdev;
DECL|vect_id|member|unsigned int vect_id;
DECL|vq|member|struct virtqueue *vq;
DECL|vring_info|member|struct proc_vring vring_info[HIL_MAX_NUM_VRINGS];
