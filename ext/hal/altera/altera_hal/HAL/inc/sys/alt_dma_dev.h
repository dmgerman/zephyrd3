DECL|ALT_DMA_GET_MODE|macro|ALT_DMA_GET_MODE
DECL|ALT_DMA_RX_ONLY_OFF|macro|ALT_DMA_RX_ONLY_OFF
DECL|ALT_DMA_RX_ONLY_ON|macro|ALT_DMA_RX_ONLY_ON
DECL|ALT_DMA_RX_STREAM_OFF|macro|ALT_DMA_RX_STREAM_OFF
DECL|ALT_DMA_RX_STREAM_ON|macro|ALT_DMA_RX_STREAM_ON
DECL|ALT_DMA_SET_MODE_128|macro|ALT_DMA_SET_MODE_128
DECL|ALT_DMA_SET_MODE_16|macro|ALT_DMA_SET_MODE_16
DECL|ALT_DMA_SET_MODE_32|macro|ALT_DMA_SET_MODE_32
DECL|ALT_DMA_SET_MODE_64|macro|ALT_DMA_SET_MODE_64
DECL|ALT_DMA_SET_MODE_8|macro|ALT_DMA_SET_MODE_8
DECL|ALT_DMA_TX_ONLY_OFF|macro|ALT_DMA_TX_ONLY_OFF
DECL|ALT_DMA_TX_ONLY_ON|macro|ALT_DMA_TX_ONLY_ON
DECL|ALT_DMA_TX_STREAM_OFF|macro|ALT_DMA_TX_STREAM_OFF
DECL|ALT_DMA_TX_STREAM_ON|macro|ALT_DMA_TX_STREAM_ON
DECL|__ALT_DMA_DEV_H__|macro|__ALT_DMA_DEV_H__
DECL|alt_dma_rxchan_dev_s|struct|struct alt_dma_rxchan_dev_s {
DECL|alt_dma_rxchan_dev|typedef|typedef struct alt_dma_rxchan_dev_s alt_dma_rxchan_dev;
DECL|alt_dma_rxchan_reg|function|static ALT_INLINE int alt_dma_rxchan_reg (alt_dma_rxchan_dev* dev)
DECL|alt_dma_rxchan|typedef|typedef alt_dma_rxchan_dev* alt_dma_rxchan;
DECL|alt_dma_txchan_dev_s|struct|struct alt_dma_txchan_dev_s {
DECL|alt_dma_txchan_dev|typedef|typedef struct alt_dma_txchan_dev_s alt_dma_txchan_dev;
DECL|alt_dma_txchan_reg|function|static ALT_INLINE int alt_dma_txchan_reg (alt_dma_txchan_dev* dev)
DECL|alt_dma_txchan|typedef|typedef alt_dma_txchan_dev* alt_dma_txchan;
DECL|alt_rxchan_done|typedef|typedef void (alt_rxchan_done)(void* handle, void* data);
DECL|alt_txchan_done|typedef|typedef void (alt_txchan_done)(void* handle);
DECL|depth|member|alt_u32 depth; /* maximum number of receive requests that
DECL|dma_send|member|int (*dma_send) (alt_dma_txchan dma,
DECL|ioctl|member|int (*ioctl) (alt_dma_rxchan dma, int req, void* arg); /* perform device
DECL|ioctl|member|int (*ioctl) (alt_dma_txchan dma, int req, void* arg); /* perform device
DECL|list|member|alt_llist list; /* for internal use */
DECL|llist|member|alt_llist llist; /* for internal use */
DECL|name|member|const char* name; /* name of the device instance
DECL|name|member|const char* name; /* name of the device instance
DECL|prepare|member|int (*prepare) (alt_dma_rxchan dma,
DECL|space|member|int (*space) (alt_dma_txchan dma); /* returns the maximum number of
