DECL|FW_RSC_ADDR_ANY|macro|FW_RSC_ADDR_ANY
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|REMOTEPROC_H|macro|REMOTEPROC_H
DECL|RPROC_BOOT_DELAY|macro|RPROC_BOOT_DELAY
DECL|RPROC_ERR_BASE|macro|RPROC_ERR_BASE
DECL|RPROC_ERR_CPU_INIT|macro|RPROC_ERR_CPU_INIT
DECL|RPROC_ERR_INVLD_FW|macro|RPROC_ERR_INVLD_FW
DECL|RPROC_ERR_LOADER|macro|RPROC_ERR_LOADER
DECL|RPROC_ERR_NO_MEM|macro|RPROC_ERR_NO_MEM
DECL|RPROC_ERR_NO_RSC_TABLE|macro|RPROC_ERR_NO_RSC_TABLE
DECL|RPROC_ERR_PARAM|macro|RPROC_ERR_PARAM
DECL|RPROC_ERR_PTR|macro|RPROC_ERR_PTR
DECL|RPROC_ERR_RSC_TAB_NP|macro|RPROC_ERR_RSC_TAB_NP
DECL|RPROC_ERR_RSC_TAB_NS|macro|RPROC_ERR_RSC_TAB_NS
DECL|RPROC_ERR_RSC_TAB_RSVD|macro|RPROC_ERR_RSC_TAB_RSVD
DECL|RPROC_ERR_RSC_TAB_TRUNC|macro|RPROC_ERR_RSC_TAB_TRUNC
DECL|RPROC_ERR_RSC_TAB_VDEV_NRINGS|macro|RPROC_ERR_RSC_TAB_VDEV_NRINGS
DECL|RPROC_ERR_RSC_TAB_VER|macro|RPROC_ERR_RSC_TAB_VER
DECL|RPROC_FALSE|macro|RPROC_FALSE
DECL|RPROC_MASTER|macro|RPROC_MASTER
DECL|RPROC_NULL|macro|RPROC_NULL
DECL|RPROC_REMOTE|macro|RPROC_REMOTE
DECL|RPROC_SUCCESS|macro|RPROC_SUCCESS
DECL|RPROC_TRUE|macro|RPROC_TRUE
DECL|RSC_CARVEOUT|enumerator|RSC_CARVEOUT = 0,
DECL|RSC_DEVMEM|enumerator|RSC_DEVMEM = 1,
DECL|RSC_FW_CHKSUM|enumerator|RSC_FW_CHKSUM = 5,
DECL|RSC_LAST|enumerator|RSC_LAST = 6,
DECL|RSC_RPROC_MEM|enumerator|RSC_RPROC_MEM = 4,
DECL|RSC_TRACE|enumerator|RSC_TRACE = 2,
DECL|RSC_VDEV|enumerator|RSC_VDEV = 3,
DECL|algo|member|uint8_t algo[16];
DECL|align|member|uint32_t align;
DECL|channel_created|member|rpmsg_chnl_cb_t channel_created;
DECL|channel_destroyed|member|rpmsg_chnl_cb_t channel_destroyed;
DECL|chksum|member|uint8_t chksum[64];
DECL|config_len|member|uint32_t config_len;
DECL|data|member|uint8_t data[0];
DECL|da|member|uint32_t da;
DECL|da|member|uint32_t da;
DECL|da|member|uint32_t da;
DECL|da|member|uint32_t da;
DECL|da|member|uint32_t da;
DECL|default_cb|member|rpmsg_rx_cb_t default_cb;
DECL|dfeatures|member|uint32_t dfeatures;
DECL|flags|member|uint32_t flags;
DECL|flags|member|uint32_t flags;
DECL|fw_resource_type|enum|enum fw_resource_type {
DECL|fw_rsc_carveout|struct|struct fw_rsc_carveout {
DECL|fw_rsc_devmem|struct|struct fw_rsc_devmem {
DECL|fw_rsc_fw_chksum|struct|struct fw_rsc_fw_chksum {
DECL|fw_rsc_hdr|struct|struct fw_rsc_hdr {
DECL|fw_rsc_rproc_mem|struct|struct fw_rsc_rproc_mem {
DECL|fw_rsc_trace|struct|struct fw_rsc_trace {
DECL|fw_rsc_vdev_vring|struct|struct fw_rsc_vdev_vring {
DECL|fw_rsc_vdev|struct|struct fw_rsc_vdev {
DECL|gfeatures|member|uint32_t gfeatures;
DECL|id|member|uint32_t id;
DECL|len|member|uint32_t len;
DECL|len|member|uint32_t len;
DECL|len|member|uint32_t len;
DECL|len|member|uint32_t len;
DECL|loader|member|struct remoteproc_loader *loader;
DECL|name|member|uint8_t name[32];
DECL|name|member|uint8_t name[32];
DECL|name|member|uint8_t name[32];
DECL|notifyid|member|uint32_t notifyid;
DECL|notifyid|member|uint32_t notifyid;
DECL|num_of_vrings|member|uint8_t num_of_vrings;
DECL|num|member|uint32_t num;
DECL|num|member|uint32_t num;
DECL|offset|member|uint32_t offset[0];
DECL|pa|member|uint32_t pa;
DECL|pa|member|uint32_t pa;
DECL|pa|member|uint32_t pa;
DECL|proc|member|struct hil_proc *proc;
DECL|rdev|member|struct remote_device *rdev;
DECL|remote_proc|struct|struct remote_proc {
DECL|reserved|member|uint32_t reserved;
DECL|reserved|member|uint32_t reserved;
DECL|reserved|member|uint32_t reserved;
DECL|reserved|member|uint32_t reserved;
DECL|reserved|member|uint32_t reserved;
DECL|reserved|member|uint32_t reserved[2];
DECL|reserved|member|uint8_t reserved[2];
DECL|resource_table|struct|struct resource_table {
DECL|role|member|int role;
DECL|rsc_table_info|struct|struct rsc_table_info {
DECL|rsc_tab|member|struct resource_table *rsc_tab;
DECL|size|member|int size;
DECL|status|member|uint8_t status;
DECL|type|member|uint32_t type;
DECL|type|member|uint32_t type;
DECL|type|member|uint32_t type;
DECL|type|member|uint32_t type;
DECL|type|member|uint32_t type;
DECL|type|member|uint32_t type;
DECL|type|member|uint32_t type;
DECL|ver|member|uint32_t ver;
DECL|vring|member|struct fw_rsc_vdev_vring vring[0];
