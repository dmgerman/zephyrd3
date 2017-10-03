DECL|EMAC_CMD_RESERVED|macro|EMAC_CMD_RESERVED
DECL|EMAC_Config|struct|typedef struct EMAC_Config {
DECL|EMAC_Config|typedef|} EMAC_Config;
DECL|EMAC_FxnTable|struct|typedef struct EMAC_FxnTable {
DECL|EMAC_FxnTable|typedef|} EMAC_FxnTable;
DECL|EMAC_InitFxn|typedef|typedef void (*EMAC_InitFxn)(uint32_t);
DECL|EMAC_STATUS_ERROR|macro|EMAC_STATUS_ERROR
DECL|EMAC_STATUS_RESERVED|macro|EMAC_STATUS_RESERVED
DECL|EMAC_STATUS_SUCCESS|macro|EMAC_STATUS_SUCCESS
DECL|EMAC_STATUS_UNDEFINEDCMD|macro|EMAC_STATUS_UNDEFINEDCMD
DECL|EMAC_isLinkUpFxn|typedef|typedef bool (*EMAC_isLinkUpFxn)(uint32_t);
DECL|emacInit|member|EMAC_InitFxn emacInit;
DECL|emacIsLinkUp|member|EMAC_isLinkUpFxn emacIsLinkUp;
DECL|fxnTablePtr|member|EMAC_FxnTable const *fxnTablePtr;
DECL|hwAttrs|member|void const *hwAttrs;
DECL|object|member|void *object;
DECL|ti_drivers_EMAC__include|macro|ti_drivers_EMAC__include
