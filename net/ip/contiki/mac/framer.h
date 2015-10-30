DECL|FRAMER_FAILED|macro|FRAMER_FAILED
DECL|FRAMER_FRAME_HANDLED|macro|FRAMER_FRAME_HANDLED
DECL|FRAMER_H_|macro|FRAMER_H_
DECL|create_and_secure|member|int (* create_and_secure)(struct net_buf *buf);
DECL|create|member|int (* create)(struct net_buf *buf);
DECL|framer|struct|struct framer {
DECL|length|member|int (* length)(struct net_buf *buf);
DECL|parse|member|int (* parse)(struct net_buf *buf);
