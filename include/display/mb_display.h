DECL|MB_DISPLAY_FLAG_LOOP|enumerator|MB_DISPLAY_FLAG_LOOP = BIT(16),
DECL|MB_DISPLAY_MODE_DEFAULT|enumerator|MB_DISPLAY_MODE_DEFAULT,
DECL|MB_DISPLAY_MODE_SCROLL|enumerator|MB_DISPLAY_MODE_SCROLL,
DECL|MB_DISPLAY_MODE_SINGLE|enumerator|MB_DISPLAY_MODE_SINGLE,
DECL|MB_IMAGE|macro|MB_IMAGE
DECL|ZEPHYR_INCLUDE_DISPLAY_MB_DISPLAY_H_|macro|ZEPHYR_INCLUDE_DISPLAY_MB_DISPLAY_H_
DECL|c1|member|u8_t c1:1,
DECL|c2|member|c2:1,
DECL|c3|member|c3:1,
DECL|c4|member|c4:1,
DECL|c5|member|c5:1;
DECL|mb_display_mode|enum|enum mb_display_mode {
DECL|mb_image|struct|struct mb_image {
DECL|row|member|u8_t row[5];
DECL|r|member|} r[5];
