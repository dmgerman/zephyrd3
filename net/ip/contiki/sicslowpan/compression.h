DECL|COMPRESSION_H_|macro|COMPRESSION_H_
DECL|compression|struct|struct compression {
DECL|compress|member|int (* compress)(struct net_buf *buf);
DECL|init|member|void (* init)(void);
DECL|uncompress|member|int (* uncompress)(struct net_buf *buf);
