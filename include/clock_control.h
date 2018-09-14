DECL|CLOCK_CONTROL_SUBSYS_ALL|macro|CLOCK_CONTROL_SUBSYS_ALL
DECL|ZEPHYR_INCLUDE_CLOCK_CONTROL_H_|macro|ZEPHYR_INCLUDE_CLOCK_CONTROL_H_
DECL|clock_control_driver_api|struct|struct clock_control_driver_api {
DECL|clock_control_get_rate|function|static inline int clock_control_get_rate(struct device *dev, clock_control_subsys_t sys, u32_t *rate)
DECL|clock_control_get|typedef|typedef int (*clock_control_get)(struct device *dev,
DECL|clock_control_off|function|static inline int clock_control_off(struct device *dev, clock_control_subsys_t sys)
DECL|clock_control_on|function|static inline int clock_control_on(struct device *dev, clock_control_subsys_t sys)
DECL|clock_control_subsys_t|typedef|typedef void *clock_control_subsys_t;
DECL|clock_control|typedef|typedef int (*clock_control)(struct device *dev, clock_control_subsys_t sys);
DECL|get_rate|member|clock_control_get get_rate;
DECL|off|member|clock_control off;
DECL|on|member|clock_control on;
