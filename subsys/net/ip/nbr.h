DECL|NET_NBR_GLOBAL|macro|NET_NBR_GLOBAL
DECL|NET_NBR_LLADDR_INIT|macro|NET_NBR_LLADDR_INIT
DECL|NET_NBR_LLADDR_UNKNOWN|macro|NET_NBR_LLADDR_UNKNOWN
DECL|NET_NBR_LOCAL|macro|NET_NBR_LOCAL
DECL|NET_NBR_POOL_INIT|macro|NET_NBR_POOL_INIT
DECL|NET_NBR_TABLE_INIT|macro|NET_NBR_TABLE_INIT
DECL|__NET_NBR_H|macro|__NET_NBR_H
DECL|__net_nbr_align|macro|__net_nbr_align
DECL|__net_nbr_align|member|u8_t __nbr[0] __net_nbr_align;
DECL|clear|member|void (*const clear)(struct net_nbr_table *table);
DECL|data|member|u8_t *data;
DECL|extra_data_size|member|const u16_t extra_data_size;
DECL|idx|member|u8_t idx;
DECL|iface|member|struct net_if *iface;
DECL|lladdr|member|struct net_linkaddr_storage lladdr;
DECL|nbr_count|member|const u16_t nbr_count;
DECL|nbr|member|struct net_nbr *nbr;
DECL|net_nbr_extra_data|function|static inline void *net_nbr_extra_data(struct net_nbr *nbr)
DECL|net_nbr_lladdr|struct|struct net_nbr_lladdr {
DECL|net_nbr_ref|macro|net_nbr_ref
DECL|net_nbr_table|struct|struct net_nbr_table {
DECL|net_nbr_unref|macro|net_nbr_unref
DECL|net_nbr|struct|struct net_nbr {
DECL|ref|member|u8_t ref;
DECL|ref|member|u8_t ref;
DECL|remove|member|void (*const remove)(struct net_nbr *nbr);
DECL|size|member|const u16_t size;
