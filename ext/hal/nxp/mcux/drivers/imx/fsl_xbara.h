DECL|FSL_XBARA_DRIVER_VERSION|macro|FSL_XBARA_DRIVER_VERSION
DECL|XBARAControlConfig|struct|typedef struct XBARAControlConfig
DECL|XBARA_SELx|macro|XBARA_SELx
DECL|XBARA_WR_SELx_SELx|macro|XBARA_WR_SELx_SELx
DECL|_FSL_XBARA_H_|macro|_FSL_XBARA_H_
DECL|_xbar_request|enum|typedef enum _xbar_request
DECL|_xbara_active_edge|enum|typedef enum _xbara_active_edge
DECL|_xbara_status_flag_t|enum|typedef enum _xbara_status_flag_t
DECL|activeEdge|member|xbara_active_edge_t activeEdge; /*!< Active edge to be detected. */
DECL|kXBARA_EdgeDetectionOut0|enumerator|kXBARA_EdgeDetectionOut0 =
DECL|kXBARA_EdgeDetectionOut1|enumerator|kXBARA_EdgeDetectionOut1 =
DECL|kXBARA_EdgeDetectionOut2|enumerator|kXBARA_EdgeDetectionOut2 =
DECL|kXBARA_EdgeDetectionOut3|enumerator|kXBARA_EdgeDetectionOut3 =
DECL|kXBARA_EdgeFalling|enumerator|kXBARA_EdgeFalling = 2U, /*!< Edge detection status bit asserts on falling edges. */
DECL|kXBARA_EdgeNone|enumerator|kXBARA_EdgeNone = 0U, /*!< Edge detection status bit never asserts. */
DECL|kXBARA_EdgeRisingAndFalling|enumerator|kXBARA_EdgeRisingAndFalling = 3U /*!< Edge detection status bit asserts on rising and falling edges. */
DECL|kXBARA_EdgeRising|enumerator|kXBARA_EdgeRising = 1U, /*!< Edge detection status bit asserts on rising edges. */
DECL|kXBARA_RequestDMAEnable|enumerator|kXBARA_RequestDMAEnable = 1U, /*!< DMA enabled, interrupt disabled. */
DECL|kXBARA_RequestDisable|enumerator|kXBARA_RequestDisable = 0U, /*!< Interrupt and DMA are disabled. */
DECL|kXBARA_RequestInterruptEnalbe|enumerator|kXBARA_RequestInterruptEnalbe = 2U /*!< Interrupt enabled, DMA disabled. */
DECL|requestType|member|xbara_request_t requestType; /*!< Selects DMA/Interrupt request. */
DECL|xbara_active_edge_t|typedef|} xbara_active_edge_t;
DECL|xbara_control_config_t|typedef|} xbara_control_config_t;
DECL|xbara_request_t|typedef|} xbara_request_t;
DECL|xbara_status_flag_t|typedef|} xbara_status_flag_t;
