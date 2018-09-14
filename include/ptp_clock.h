DECL|PTP_CLOCK_NAME|macro|PTP_CLOCK_NAME
DECL|ZEPHYR_INCLUDE_PTP_CLOCK_H_|macro|ZEPHYR_INCLUDE_PTP_CLOCK_H_
DECL|adjust|member|int (*adjust)(struct device *dev, int increment);
DECL|get|member|int (*get)(struct device *dev, struct net_ptp_time *tm);
DECL|ptp_clock_adjust|function|static inline int ptp_clock_adjust(struct device *dev, int increment)
DECL|ptp_clock_driver_api|struct|struct ptp_clock_driver_api {
DECL|ptp_clock_get|function|static inline int ptp_clock_get(struct device *dev, struct net_ptp_time *tm)
DECL|ptp_clock_rate_adjust|function|static inline int ptp_clock_rate_adjust(struct device *dev, float rate)
DECL|ptp_clock_set|function|static inline int ptp_clock_set(struct device *dev, struct net_ptp_time *tm)
DECL|rate_adjust|member|int (*rate_adjust)(struct device *dev, float ratio);
DECL|set|member|int (*set)(struct device *dev, struct net_ptp_time *tm);
