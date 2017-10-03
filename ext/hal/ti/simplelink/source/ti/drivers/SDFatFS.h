DECL|SDFatFS_Config_|struct|typedef struct SDFatFS_Config_ {
DECL|SDFatFS_Config|typedef|} SDFatFS_Config;
DECL|SDFatFS_Handle|typedef|typedef struct SDFatFS_Config_ *SDFatFS_Handle;
DECL|SDFatFS_Object_|struct|typedef struct SDFatFS_Object_ {
DECL|SDFatFS_Object|typedef|} SDFatFS_Object;
DECL|diskState|member|DSTATUS diskState;
DECL|driveNum|member|uint_fast32_t driveNum;
DECL|filesystem|member|FATFS filesystem; /* FATFS data object */
DECL|object|member|void *object;
DECL|sdHandle|member|SD_Handle sdHandle;
DECL|ti_drivers_SDFatFS__include|macro|ti_drivers_SDFatFS__include
