DECL|NVSRAM_HWAttrs|struct|typedef struct NVSRAM_HWAttrs {
DECL|NVSRAM_HWAttrs|typedef|} NVSRAM_HWAttrs;
DECL|NVSRAM_Object|struct|typedef struct NVSRAM_Object {
DECL|NVSRAM_Object|typedef|} NVSRAM_Object;
DECL|isOpen|member|bool isOpen;
DECL|regionBase|member|void *regionBase; /*!< Base address of RAM region */
DECL|regionSize|member|size_t regionSize; /*!< The size of the region in bytes */
DECL|sectorBaseMask|member|size_t sectorBaseMask;
DECL|sectorSize|member|size_t sectorSize; /*!< Sector size in bytes */
DECL|ti_drivers_nvs_NVSRAM__include|macro|ti_drivers_nvs_NVSRAM__include
