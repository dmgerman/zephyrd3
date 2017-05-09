DECL|OVERWRITES_H_|macro|OVERWRITES_H_
DECL|address|member|unsigned int address;
DECL|data|member|unsigned int data;
DECL|dest_address|member|uint32_t dest_address; /* Address to place IFR data to. */
DECL|dest_shift|member|uint8_t dest_shift; /* Number of shift to be shifted in the destination */
DECL|field_size|member|uint8_t field_size; /* Number of bits of data */
DECL|overwrites_802p15p4|variable|overwrites_802p15p4
DECL|overwrites_ble|variable|overwrites_ble
DECL|overwrites_common|variable|overwrites_common
DECL|overwrites_ifr|typedef|} overwrites_ifr;
DECL|overwrites_tag|struct|typedef struct overwrites_tag
DECL|overwrites_t|typedef|}overwrites_t;
DECL|radio_trim_ifr|variable|radio_trim_ifr
DECL|reg_access|member|uint8_t reg_access; /* How the destination reg to be accessed (i.e. 8, 16, 32 bit) */
DECL|src_address|member|uint8_t src_address; /* Address of desired data in IFR */
DECL|src_bp|member|uint8_t src_bp; /* Bit position of desired trim values in IFR */
