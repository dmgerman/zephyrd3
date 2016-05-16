DECL|FIBER_FLOAT_REG_CHECK_BYTE|macro|FIBER_FLOAT_REG_CHECK_BYTE
DECL|FP_OPTION|macro|FP_OPTION
DECL|MAIN_FLOAT_REG_CHECK_BYTE|macro|MAIN_FLOAT_REG_CHECK_BYTE
DECL|SIZEOF_FP_NON_VOLATILE_REGISTER_SET|macro|SIZEOF_FP_NON_VOLATILE_REGISTER_SET
DECL|SIZEOF_FP_REGISTER_SET|macro|SIZEOF_FP_REGISTER_SET
DECL|SIZEOF_FP_VOLATILE_REGISTER_SET|macro|SIZEOF_FP_VOLATILE_REGISTER_SET
DECL|_FLOATCONTEXT_H|macro|_FLOATCONTEXT_H
DECL|fp_non_volatile_register_set|struct|struct fp_non_volatile_register_set {
DECL|fp_non_volatile|member|struct fp_non_volatile_register_set fp_non_volatile;
DECL|fp_register_set|struct|struct fp_register_set {
DECL|fp_register|struct|struct fp_register {
DECL|fp_volatile_register_set|struct|struct fp_volatile_register_set {
DECL|fp_volatile|member|struct fp_volatile_register_set fp_volatile;
DECL|reg|member|unsigned char reg[10];
DECL|reg|member|unsigned char reg[16];
DECL|st|member|struct fp_register st[8]; /* ST[0] -> ST[7] */
DECL|xmm_register|struct|struct xmm_register {
DECL|xmm|member|struct xmm_register xmm[8]; /* XMM[0] -> XMM[7] */
