DECL|__MCUBOOT_H__|macro|__MCUBOOT_H__
DECL|build_num|member|u32_t build_num;
DECL|h|member|} h;
DECL|image_size|member|u32_t image_size;
DECL|major|member|u8_t major;
DECL|mcuboot_img_header_v1|struct|struct mcuboot_img_header_v1 {
DECL|mcuboot_img_header|struct|struct mcuboot_img_header {
DECL|mcuboot_img_sem_ver|struct|struct mcuboot_img_sem_ver {
DECL|mcuboot_version|member|u32_t mcuboot_version;
DECL|minor|member|u8_t minor;
DECL|revision|member|u16_t revision;
DECL|sem_ver|member|struct mcuboot_img_sem_ver sem_ver;
DECL|v1|member|struct mcuboot_img_header_v1 v1;
