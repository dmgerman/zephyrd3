DECL|freq_int|member|int freq_int;
DECL|freq_int|member|int freq_int;
DECL|freq_micro|member|int freq_micro;
DECL|freq_micro|member|int freq_micro;
DECL|fs|member|int fs;
DECL|fs|member|int fs;
DECL|lsm9ds0_mfd_accel_fs_map|variable|lsm9ds0_mfd_accel_fs_map
DECL|lsm9ds0_mfd_accel_odr_map|variable|lsm9ds0_mfd_accel_odr_map
DECL|lsm9ds0_mfd_accel_set_fs_raw|function|static inline int lsm9ds0_mfd_accel_set_fs_raw(struct device *dev, uint8_t fs)
DECL|lsm9ds0_mfd_accel_set_fs|function|static int lsm9ds0_mfd_accel_set_fs(struct device *dev, int val)
DECL|lsm9ds0_mfd_accel_set_odr_raw|function|static inline int lsm9ds0_mfd_accel_set_odr_raw(struct device *dev, uint8_t odr)
DECL|lsm9ds0_mfd_accel_set_odr|function|static int lsm9ds0_mfd_accel_set_odr(struct device *dev, const struct sensor_value *val)
DECL|lsm9ds0_mfd_api_funcs|variable|lsm9ds0_mfd_api_funcs
DECL|lsm9ds0_mfd_attr_set_accel|function|static inline int lsm9ds0_mfd_attr_set_accel(struct device *dev, enum sensor_attribute attr, const struct sensor_value *val)
DECL|lsm9ds0_mfd_attr_set_magn|function|static inline int lsm9ds0_mfd_attr_set_magn(struct device *dev, enum sensor_attribute attr, const struct sensor_value *val)
DECL|lsm9ds0_mfd_attr_set|function|static int lsm9ds0_mfd_attr_set(struct device *dev,enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|lsm9ds0_mfd_channel_get_accel|function|static inline int lsm9ds0_mfd_channel_get_accel(struct device *dev,int raw_val, struct sensor_value *val)
DECL|lsm9ds0_mfd_channel_get_magn|function|static inline int lsm9ds0_mfd_channel_get_magn(struct device *dev, int raw_val, struct sensor_value *val)
DECL|lsm9ds0_mfd_channel_get|function|static int lsm9ds0_mfd_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|lsm9ds0_mfd_config|variable|lsm9ds0_mfd_config
DECL|lsm9ds0_mfd_data|variable|lsm9ds0_mfd_data
DECL|lsm9ds0_mfd_init_chip|function|static int lsm9ds0_mfd_init_chip(struct device *dev)
DECL|lsm9ds0_mfd_init|function|int lsm9ds0_mfd_init(struct device *dev)
DECL|lsm9ds0_mfd_magn_fs_map|variable|lsm9ds0_mfd_magn_fs_map
DECL|lsm9ds0_mfd_magn_odr_map|variable|lsm9ds0_mfd_magn_odr_map
DECL|lsm9ds0_mfd_magn_set_fs_raw|function|static inline int lsm9ds0_mfd_magn_set_fs_raw(struct device *dev, uint8_t fs)
DECL|lsm9ds0_mfd_magn_set_fs|function|static int lsm9ds0_mfd_magn_set_fs(struct device *dev, const struct sensor_value *val)
DECL|lsm9ds0_mfd_magn_set_odr_raw|function|static inline int lsm9ds0_mfd_magn_set_odr_raw(struct device *dev, uint8_t odr)
DECL|lsm9ds0_mfd_magn_set_odr|function|static int lsm9ds0_mfd_magn_set_odr(struct device *dev, const struct sensor_value *val)
DECL|lsm9ds0_mfd_reboot_memory|function|static inline int lsm9ds0_mfd_reboot_memory(struct device *dev)
DECL|lsm9ds0_mfd_sample_fetch_accel|function|static inline int lsm9ds0_mfd_sample_fetch_accel(struct device *dev)
DECL|lsm9ds0_mfd_sample_fetch_all|function|static inline int lsm9ds0_mfd_sample_fetch_all(struct device *dev)
DECL|lsm9ds0_mfd_sample_fetch_magn|function|static inline int lsm9ds0_mfd_sample_fetch_magn(struct device *dev)
DECL|lsm9ds0_mfd_sample_fetch_temp|function|static inline int lsm9ds0_mfd_sample_fetch_temp(struct device *dev)
DECL|lsm9ds0_mfd_sample_fetch|function|static int lsm9ds0_mfd_sample_fetch(struct device *dev, enum sensor_channel chan)
