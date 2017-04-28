DECL|delays|member|const u32_t *delays;
DECL|get_sda|member|int (*get_sda)(void *io_context);
DECL|i2c_bitbang_io|struct|struct i2c_bitbang_io {
DECL|i2c_bitbang|struct|struct i2c_bitbang {
DECL|io_context|member|void *io_context;
DECL|io|member|const struct i2c_bitbang_io *io;
DECL|set_scl|member|void (*set_scl)(void *io_context, int state);
DECL|set_sda|member|void (*set_sda)(void *io_context, int state);
