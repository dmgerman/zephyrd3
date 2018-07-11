DECL|LOG_FILTERS_NUM_OF_SLOTS|macro|LOG_FILTERS_NUM_OF_SLOTS
DECL|LOG_FILTER_AGGR_SLOT_GET|macro|LOG_FILTER_AGGR_SLOT_GET
DECL|LOG_FILTER_AGGR_SLOT_IDX|macro|LOG_FILTER_AGGR_SLOT_IDX
DECL|LOG_FILTER_FIRST_BACKEND_SLOT_IDX|macro|LOG_FILTER_FIRST_BACKEND_SLOT_IDX
DECL|LOG_FILTER_SLOT_GET|macro|LOG_FILTER_SLOT_GET
DECL|LOG_FILTER_SLOT_MASK|macro|LOG_FILTER_SLOT_MASK
DECL|LOG_FILTER_SLOT_SET|macro|LOG_FILTER_SLOT_SET
DECL|LOG_FILTER_SLOT_SHIFT|macro|LOG_FILTER_SLOT_SHIFT
DECL|LOG_FILTER_SLOT_SIZE|macro|LOG_FILTER_SLOT_SIZE
DECL|LOG_INSTANCE_DYNAMIC_DATA|macro|LOG_INSTANCE_DYNAMIC_DATA
DECL|LOG_INSTANCE_FULL_NAME|macro|LOG_INSTANCE_FULL_NAME
DECL|LOG_INSTANCE_H|macro|LOG_INSTANCE_H
DECL|LOG_INSTANCE_PTR_DECLARE|macro|LOG_INSTANCE_PTR_DECLARE
DECL|LOG_INSTANCE_PTR_DECLARE|macro|LOG_INSTANCE_PTR_DECLARE
DECL|LOG_INSTANCE_PTR_DECLARE|macro|LOG_INSTANCE_PTR_DECLARE
DECL|LOG_INSTANCE_PTR_INIT|macro|LOG_INSTANCE_PTR_INIT
DECL|LOG_INSTANCE_PTR_INIT|macro|LOG_INSTANCE_PTR_INIT
DECL|LOG_INSTANCE_PTR_INIT|macro|LOG_INSTANCE_PTR_INIT
DECL|LOG_INSTANCE_REGISTER|macro|LOG_INSTANCE_REGISTER
DECL|LOG_INSTANCE_REGISTER|macro|LOG_INSTANCE_REGISTER
DECL|LOG_INSTANCE_REGISTER|macro|LOG_INSTANCE_REGISTER
DECL|LOG_ITEM_CONST_DATA|macro|LOG_ITEM_CONST_DATA
DECL|LOG_ITEM_DYNAMIC_DATA|macro|LOG_ITEM_DYNAMIC_DATA
DECL|LOG_RUNTIME_FILTER|macro|LOG_RUNTIME_FILTER
DECL|LOG_RUNTIME_FILTER|macro|LOG_RUNTIME_FILTER
DECL|_LOG_CONST_ITEM_REGISTER|macro|_LOG_CONST_ITEM_REGISTER
DECL|filters|member|u32_t filters;
DECL|level|member|u8_t level;
DECL|log_compiled_level_get|function|static inline u8_t log_compiled_level_get(u32_t source_id)
DECL|log_const_source_id|function|static inline u32_t log_const_source_id(const struct log_source_const_data *data)
DECL|log_dynamic_filters_get|function|static inline u32_t *log_dynamic_filters_get(u32_t source_id)
DECL|log_dynamic_source_id|function|static inline u32_t log_dynamic_source_id(struct log_source_dynamic_data *data)
DECL|log_name_get|function|static inline const char *log_name_get(u32_t source_id)
DECL|log_source_const_data|struct|struct log_source_const_data {
DECL|log_source_dynamic_data|struct|struct log_source_dynamic_data {
DECL|log_sources_count|function|static inline u32_t log_sources_count(void)
DECL|name|member|const char *name;
