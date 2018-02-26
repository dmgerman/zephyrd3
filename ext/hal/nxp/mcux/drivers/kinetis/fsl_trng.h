DECL|FSL_TRNG_DRIVER_VERSION|macro|FSL_TRNG_DRIVER_VERSION
DECL|_FSL_TRNG_DRIVER_H_|macro|_FSL_TRNG_DRIVER_H_
DECL|_trng_clock_mode|enum|typedef enum _trng_clock_mode
DECL|_trng_ring_osc_div|enum|typedef enum _trng_ring_osc_div
DECL|_trng_sample_mode|enum|typedef enum _trng_sample_mode
DECL|_trng_statistical_check_limit|struct|typedef struct _trng_statistical_check_limit
DECL|_trng_user_config|struct|typedef struct _trng_user_config
DECL|clockMode|member|trng_clock_mode_t clockMode; /*!< @brief Clock mode used to operate TRNG.*/
DECL|entropyDelay|member|entropyDelay; /*!< @brief Entropy Delay. Defines the length (in system clocks) of each Entropy sample taken. */
DECL|frequencyCountLimit|member|frequencyCountLimit; /*!< @brief Maximum and minimum limits for statistical check of entropy sample frequency
DECL|kTRNG_ClockModeRingOscillator|enumerator|kTRNG_ClockModeRingOscillator = 0U, /*!< Ring oscillator is used to operate the TRNG (default). */
DECL|kTRNG_ClockModeSystem|enumerator|kTRNG_ClockModeSystem = 1U /*!< System clock is used to operate the TRNG. This is for test use only, and
DECL|kTRNG_RingOscDiv0|enumerator|kTRNG_RingOscDiv0 = 0U, /*!< Ring oscillator with no divide */
DECL|kTRNG_RingOscDiv2|enumerator|kTRNG_RingOscDiv2 = 1U, /*!< Ring oscillator divided-by-2. */
DECL|kTRNG_RingOscDiv4|enumerator|kTRNG_RingOscDiv4 = 2U, /*!< Ring oscillator divided-by-4. */
DECL|kTRNG_RingOscDiv8|enumerator|kTRNG_RingOscDiv8 = 3U /*!< Ring oscillator divided-by-8. */
DECL|kTRNG_SampleModeRaw|enumerator|kTRNG_SampleModeRaw = 1U, /*!< Use raw data into both Entropy shifter and Statistical Checker. */
DECL|kTRNG_SampleModeVonNeumannRaw|enumerator|kTRNG_SampleModeVonNeumannRaw =
DECL|kTRNG_SampleModeVonNeumann|enumerator|kTRNG_SampleModeVonNeumann = 0U, /*!< Use von Neumann data in both Entropy shifter and Statistical Checker. */
DECL|lock|member|bool lock; /*!< @brief Disable programmability of TRNG registers. */
DECL|longRunMaxLimit|member|uint8_t longRunMaxLimit; /*!< @brief Largest allowable number of consecutive samples of all 1, or all 0,
DECL|maximum|member|uint32_t maximum; /*!< Maximum limit.*/
DECL|minimum|member|uint32_t minimum; /*!< Minimum limit.*/
DECL|monobitLimit|member|monobitLimit; /*!< @brief Maximum and minimum limits for statistical check of number of ones/zero detected
DECL|pokerLimit|member|pokerLimit; /*!< @brief Maximum and minimum limits for statistical check of "Poker Test". */
DECL|retryCount|member|uint8_t retryCount; /*!< @brief Retry count. It defines the number of times a statistical check may fails
DECL|ringOscDiv|member|trng_ring_osc_div_t ringOscDiv; /*!< @brief Ring oscillator divide used by TRNG. */
DECL|runBit1Limit|member|runBit1Limit; /*!< @brief Maximum and minimum limits for statistical check of number of runs of length 1
DECL|runBit2Limit|member|runBit2Limit; /*!< @brief Maximum and minimum limits for statistical check of number of runs of length 2
DECL|runBit3Limit|member|runBit3Limit; /*!< @brief Maximum and minimum limits for statistical check of number of runs of length 3
DECL|runBit4Limit|member|runBit4Limit; /*!< @brief Maximum and minimum limits for statistical check of number of runs of length 4
DECL|runBit5Limit|member|runBit5Limit; /*!< @brief Maximum and minimum limits for statistical check of number of runs of length 5
DECL|runBit6PlusLimit|member|trng_statistical_check_limit_t runBit6PlusLimit; /*!< @brief Maximum and minimum limits for statistical check of
DECL|sampleMode|member|trng_sample_mode_t sampleMode; /*!< @brief Sample mode of the TRNG ring oscillator. */
DECL|sampleSize|member|uint16_t sampleSize; /*!< @brief Sample Size. Defines the total number of Entropy samples that will be taken during
DECL|sparseBitLimit|member|sparseBitLimit; /*!< @brief Sparse Bit Limit which defines the maximum number of
DECL|trng_clock_mode_t|typedef|} trng_clock_mode_t;
DECL|trng_config_t|typedef|} trng_config_t;
DECL|trng_ring_osc_div_t|typedef|} trng_ring_osc_div_t;
DECL|trng_sample_mode_t|typedef|} trng_sample_mode_t;
DECL|trng_statistical_check_limit_t|typedef|} trng_statistical_check_limit_t;
