DECL|ELF_LOADER|enumerator|ELF_LOADER = 0, FIT_LOADER = 1, LAST_LOADER = 2,
DECL|FIT_LOADER|enumerator|ELF_LOADER = 0, FIT_LOADER = 1, LAST_LOADER = 2,
DECL|LAST_LOADER|enumerator|ELF_LOADER = 0, FIT_LOADER = 1, LAST_LOADER = 2,
DECL|REMOTEPROC_LOADER_H_|macro|REMOTEPROC_LOADER_H_
DECL|attach_firmware|member|int (*attach_firmware) (struct remoteproc_loader * loader,
DECL|detach_firmware|member|int (*detach_firmware) (struct remoteproc_loader * loader);
DECL|fw_decode_info|member|void *fw_decode_info;
DECL|load_firmware|member|int (*load_firmware) (struct remoteproc_loader * loader);
DECL|loader_type|enum|enum loader_type {
DECL|remote_firmware|member|void *remote_firmware;
DECL|remoteproc_loader|struct|struct remoteproc_loader {
DECL|retrieve_entry|member|void *(*retrieve_entry) (struct remoteproc_loader * loader);
DECL|retrieve_load_addr|member|void *(*retrieve_load_addr) (struct remoteproc_loader * loader);
DECL|retrieve_rsc|member|void *(*retrieve_rsc) (struct remoteproc_loader * loader,
DECL|type|member|enum loader_type type;
