DECL|H_IMAGE_|macro|H_IMAGE_
DECL|IMAGE_F_NON_BOOTABLE|macro|IMAGE_F_NON_BOOTABLE
DECL|IMAGE_HASH_LEN|macro|IMAGE_HASH_LEN
DECL|IMAGE_HEADER_SIZE|macro|IMAGE_HEADER_SIZE
DECL|IMAGE_HEADER_SIZE|variable|IMAGE_HEADER_SIZE
DECL|IMAGE_MAGIC|macro|IMAGE_MAGIC
DECL|IMAGE_TLV_INFO_MAGIC|macro|IMAGE_TLV_INFO_MAGIC
DECL|IMAGE_TLV_SHA256|macro|IMAGE_TLV_SHA256
DECL|_pad2|member|uint16_t _pad2;
DECL|_pad3|member|uint32_t _pad3;
DECL|_pad|member|uint8_t _pad;
DECL|ih_flags|member|uint32_t ih_flags; /* IMAGE_F_[...]. */
DECL|ih_hdr_size|member|uint16_t ih_hdr_size; /* Size of image header (bytes). */
DECL|ih_img_size|member|uint32_t ih_img_size; /* Does not include header. */
DECL|ih_load_addr|member|uint32_t ih_load_addr;
DECL|ih_magic|member|uint32_t ih_magic;
DECL|ih_ver|member|struct image_version ih_ver;
DECL|image_header|struct|struct image_header {
DECL|image_tlv_info|struct|struct image_tlv_info {
DECL|image_tlv|struct|struct image_tlv {
DECL|image_version|struct|struct image_version {
DECL|it_len|member|uint16_t it_len; /* Data length (not including TLV header). */
DECL|it_magic|member|uint16_t it_magic;
DECL|it_tlv_tot|member|uint16_t it_tlv_tot; /* size of TLV area (including tlv_info header) */
DECL|it_type|member|uint8_t it_type; /* IMAGE_TLV_[...]. */
DECL|iv_build_num|member|uint32_t iv_build_num;
DECL|iv_major|member|uint8_t iv_major;
DECL|iv_minor|member|uint8_t iv_minor;
DECL|iv_revision|member|uint16_t iv_revision;
