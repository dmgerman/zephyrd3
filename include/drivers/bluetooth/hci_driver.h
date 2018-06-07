DECL|BT_HCI_DRIVER_BUS_I2C|enumerator|BT_HCI_DRIVER_BUS_I2C = 8,
DECL|BT_HCI_DRIVER_BUS_PCCARD|enumerator|BT_HCI_DRIVER_BUS_PCCARD = 2,
DECL|BT_HCI_DRIVER_BUS_PCI|enumerator|BT_HCI_DRIVER_BUS_PCI = 5,
DECL|BT_HCI_DRIVER_BUS_RS232|enumerator|BT_HCI_DRIVER_BUS_RS232 = 4,
DECL|BT_HCI_DRIVER_BUS_SDIO|enumerator|BT_HCI_DRIVER_BUS_SDIO = 6,
DECL|BT_HCI_DRIVER_BUS_SPI|enumerator|BT_HCI_DRIVER_BUS_SPI = 7,
DECL|BT_HCI_DRIVER_BUS_UART|enumerator|BT_HCI_DRIVER_BUS_UART = 3,
DECL|BT_HCI_DRIVER_BUS_USB|enumerator|BT_HCI_DRIVER_BUS_USB = 1,
DECL|BT_HCI_DRIVER_BUS_VIRTUAL|enumerator|BT_HCI_DRIVER_BUS_VIRTUAL = 0,
DECL|BT_QUIRK_NO_RESET|enumerator|BT_QUIRK_NO_RESET = BIT(0),
DECL|__BT_HCI_DRIVER_H|macro|__BT_HCI_DRIVER_H
DECL|bt_hci_driver_bus|enum|enum bt_hci_driver_bus {
DECL|bt_hci_driver|struct|struct bt_hci_driver {
DECL|bt_hci_evt_is_prio|function|static inline bool bt_hci_evt_is_prio(u8_t evt)
DECL|bus|member|enum bt_hci_driver_bus bus;
DECL|name|member|const char *name;
DECL|open|member|int (*open)(void);
DECL|quirks|member|u32_t quirks;
DECL|send|member|int (*send)(struct net_buf *buf);
