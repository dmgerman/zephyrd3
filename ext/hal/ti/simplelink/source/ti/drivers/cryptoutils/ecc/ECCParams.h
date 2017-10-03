DECL|ECCParams_CurveParams_|struct|typedef struct ECCParams_CurveParams_ {
DECL|ECCParams_CurveParams|typedef|ECCParams_CurveParams;
DECL|a|member|const uint8_t *a; //!< Coefficient a of the equation.
DECL|b|member|const uint8_t *b; //!< Coefficient b of the equation.
DECL|generatorX|member|const uint8_t *generatorX; //!< X coordinate of the generator point of the curve.
DECL|generatorY|member|const uint8_t *generatorY; //!< Y coordinate of the generator point of the curve.
DECL|length|member|const size_t length; //!< Length of the curve in bytes. All other buffers have this length.
DECL|order|member|const uint8_t *order; //!< Order of the curve.
DECL|prime|member|const uint8_t *prime; //!< The prime that defines the field of the curve.
DECL|ti_drivers_cryptoutils_ecc_ECCParams__include|macro|ti_drivers_cryptoutils_ecc_ECCParams__include
