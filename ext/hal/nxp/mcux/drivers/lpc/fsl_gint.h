DECL|FSL_GINT_DRIVER_VERSION|macro|FSL_GINT_DRIVER_VERSION
DECL|GINT_ClrStatus|function|static inline void GINT_ClrStatus(GINT_Type *base)
DECL|GINT_GetStatus|function|static inline uint32_t GINT_GetStatus(GINT_Type *base)
DECL|_FSL_GINT_H_|macro|_FSL_GINT_H_
DECL|_gint_comb|enum|typedef enum _gint_comb
DECL|_gint_port|enum|typedef enum _gint_port
DECL|_gint_trig|enum|typedef enum _gint_trig
DECL|gint_cb_t|typedef|typedef void (*gint_cb_t)(void);
DECL|gint_comb_t|typedef|} gint_comb_t;
DECL|gint_port_t|typedef|} gint_port_t;
DECL|gint_trig_t|typedef|} gint_trig_t;
DECL|kGINT_CombineAnd|enumerator|kGINT_CombineAnd = 1U /*!< A grouped interrupt is generated when all enabled inputs are active */
DECL|kGINT_CombineOr|enumerator|kGINT_CombineOr = 0U, /*!< A grouped interrupt is generated when any one of the enabled inputs is active */
DECL|kGINT_Port0|enumerator|kGINT_Port0 = 0U,
DECL|kGINT_Port1|enumerator|kGINT_Port1 = 1U,
DECL|kGINT_Port2|enumerator|kGINT_Port2 = 2U,
DECL|kGINT_Port3|enumerator|kGINT_Port3 = 3U,
DECL|kGINT_Port4|enumerator|kGINT_Port4 = 4U,
DECL|kGINT_Port5|enumerator|kGINT_Port5 = 5U,
DECL|kGINT_Port6|enumerator|kGINT_Port6 = 6U,
DECL|kGINT_Port7|enumerator|kGINT_Port7 = 7U,
DECL|kGINT_TrigEdge|enumerator|kGINT_TrigEdge = 0U, /*!< Edge triggered based on polarity */
DECL|kGINT_TrigLevel|enumerator|kGINT_TrigLevel = 1U /*!< Level triggered based on polarity */
