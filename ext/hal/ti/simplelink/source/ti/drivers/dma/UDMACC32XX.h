DECL|UDMACC32XX_Config|struct|typedef struct UDMACC32XX_Config {
DECL|UDMACC32XX_Config|typedef|} UDMACC32XX_Config;
DECL|UDMACC32XX_ErrorFxn|typedef|typedef void (*UDMACC32XX_ErrorFxn)(uintptr_t arg);
DECL|UDMACC32XX_HWAttrs|struct|typedef struct UDMACC32XX_HWAttrs {
DECL|UDMACC32XX_HWAttrs|typedef|} UDMACC32XX_HWAttrs;
DECL|UDMACC32XX_Handle|typedef|typedef struct UDMACC32XX_Config *UDMACC32XX_Handle;
DECL|UDMACC32XX_Object|struct|typedef struct UDMACC32XX_Object {
DECL|UDMACC32XX_Object|typedef|} UDMACC32XX_Object;
DECL|controlBaseAddr|member|void *controlBaseAddr; /*!< uDMA control registers base address */
DECL|dmaErrorFxn|member|UDMACC32XX_ErrorFxn dmaErrorFxn; /*!< uDMA error interrupt handler */
DECL|hwAttrs|member|void const *hwAttrs; /*!< Pointer to hardware attributes */
DECL|hwiHandle|member|HwiP_Handle hwiHandle; /* DMA error Hwi */
DECL|intNum|member|uint8_t intNum; /*!< uDMA error interrupt number */
DECL|intPriority|member|uint8_t intPriority; /*!< uDMA error interrupt priority. */
DECL|isOpen|member|bool isOpen; /* Flag for open/close status */
DECL|object|member|void *object; /*!< Pointer to UDMACC32XX object */
DECL|ti_drivers_dma_UDMACC32XX__include|macro|ti_drivers_dma_UDMACC32XX__include
