DECL|BT_DRIVER_BUS_PCCARD|enumerator|BT_DRIVER_BUS_PCCARD = 2,
DECL|BT_DRIVER_BUS_PCI|enumerator|BT_DRIVER_BUS_PCI = 5,
DECL|BT_DRIVER_BUS_RS232|enumerator|BT_DRIVER_BUS_RS232 = 4,
DECL|BT_DRIVER_BUS_SDIO|enumerator|BT_DRIVER_BUS_SDIO = 6,
DECL|BT_DRIVER_BUS_UART|enumerator|BT_DRIVER_BUS_UART = 3,
DECL|BT_DRIVER_BUS_USB|enumerator|BT_DRIVER_BUS_USB = 1,
DECL|BT_DRIVER_BUS_VIRTUAL|enumerator|BT_DRIVER_BUS_VIRTUAL = 0,
DECL|__BT_DRIVER_H|macro|__BT_DRIVER_H
DECL|bt_driver_bus|enum|enum bt_driver_bus {
DECL|bt_driver|struct|struct bt_driver {
DECL|bus|member|enum bt_driver_bus bus;
DECL|name|member|const char *name;
DECL|open|member|int (*open)(void);
DECL|send|member|int (*send)(struct net_buf *buf);
