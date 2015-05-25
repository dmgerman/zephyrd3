DECL|COMPRESSION_H_|macro|COMPRESSION_H_
DECL|compression|struct|struct compression {
DECL|init|member|void (* init)(void);
DECL|uncompress|member|int (* uncompress)(struct net_buf *buf);
