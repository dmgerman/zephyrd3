DECL|BBF_NEG|enumerator|BBF_NEG = 1,
DECL|BBF_POS|enumerator|BBF_POS = 2,
DECL|DAC_SWEEP_STEP2_t|typedef|} DAC_SWEEP_STEP2_t;
DECL|GAIN_CALC_TBL_ENTRY2_T|typedef|} GAIN_CALC_TBL_ENTRY2_T;
DECL|IQ_t|typedef|} IQ_t;
DECL|I_CHANNEL|enumerator|I_CHANNEL = 0,
DECL|NOMINAL2|enumerator|NOMINAL2 = 0,
DECL|NUM_I_Q_CHAN|enumerator|NUM_I_Q_CHAN = 2
DECL|NUM_SWEEP_STEP_ENTRIES2|enumerator|NUM_SWEEP_STEP_ENTRIES2 = 25 /* Including the baseline entry #0. */
DECL|Q_CHANNEL|enumerator|Q_CHANNEL = 1,
DECL|TZA_STEP_N0|enumerator|TZA_STEP_N0 = 3,
DECL|TZA_STEP_N10|enumerator|TZA_STEP_N10 = 13,
DECL|TZA_STEP_N1|enumerator|TZA_STEP_N1 = 4,
DECL|TZA_STEP_N2|enumerator|TZA_STEP_N2 = 5,
DECL|TZA_STEP_N3|enumerator|TZA_STEP_N3 = 6,
DECL|TZA_STEP_N4|enumerator|TZA_STEP_N4 = 7,
DECL|TZA_STEP_N5|enumerator|TZA_STEP_N5 = 8,
DECL|TZA_STEP_N6|enumerator|TZA_STEP_N6 = 9,
DECL|TZA_STEP_N7|enumerator|TZA_STEP_N7 = 10,
DECL|TZA_STEP_N8|enumerator|TZA_STEP_N8 = 11,
DECL|TZA_STEP_N9|enumerator|TZA_STEP_N9 = 12,
DECL|TZA_STEP_P0|enumerator|TZA_STEP_P0 = 14,
DECL|TZA_STEP_P10|enumerator|TZA_STEP_P10 = 24,
DECL|TZA_STEP_P1|enumerator|TZA_STEP_P1 = 15,
DECL|TZA_STEP_P2|enumerator|TZA_STEP_P2 = 16,
DECL|TZA_STEP_P3|enumerator|TZA_STEP_P3 = 17,
DECL|TZA_STEP_P4|enumerator|TZA_STEP_P4 = 18,
DECL|TZA_STEP_P5|enumerator|TZA_STEP_P5 = 19,
DECL|TZA_STEP_P6|enumerator|TZA_STEP_P6 = 20,
DECL|TZA_STEP_P7|enumerator|TZA_STEP_P7 = 21,
DECL|TZA_STEP_P8|enumerator|TZA_STEP_P8 = 22,
DECL|TZA_STEP_P9|enumerator|TZA_STEP_P9 = 23,
DECL|TZAdcocstep_t|typedef|} TZAdcocstep_t;
DECL|_FSL_XCVR_TRIM_H_|macro|_FSL_XCVR_TRIM_H_
DECL|dcoc_step_rcp|member|uint16_t dcoc_step_rcp;
DECL|dcoc_step|member|uint16_t dcoc_step;
DECL|internal_measurement|member|int16_t internal_measurement; /* The value (average code) measured from DMA samples. */
DECL|step_value|member|int8_t step_value; /* The offset from nominal DAC value (see sweep_step_values[]) */
