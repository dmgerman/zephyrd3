DECL|CLOCK_CONTROL_SUBSYS_ALL|macro|CLOCK_CONTROL_SUBSYS_ALL
DECL|__CLOCK_CONTROL_H__|macro|__CLOCK_CONTROL_H__
DECL|clock_control_driver_api|struct|struct clock_control_driver_api {
DECL|clock_control_off|function|static inline int clock_control_off(struct device *dev, clock_control_subsys_t sys)
DECL|clock_control_on|function|static inline int clock_control_on(struct device *dev, clock_control_subsys_t sys)
DECL|clock_control_subsys_t|typedef|typedef void *clock_control_subsys_t;
DECL|clock_control|typedef|typedef int (*clock_control)(struct device *dev, clock_control_subsys_t sys);
DECL|off|member|clock_control off;
DECL|on|member|clock_control on;
