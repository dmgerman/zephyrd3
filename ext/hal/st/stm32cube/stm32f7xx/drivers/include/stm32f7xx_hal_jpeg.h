DECL|ChromaSubsampling|member|uint8_t ChromaSubsampling; /*!< Chroma Subsampling in case of YCBCR or CMYK color space, 0-> 4:4:4 , 1-> 4:2:2, 2 -> 4:1:1, 3 -> 4:2:0
DECL|ColorSpace|member|uint8_t ColorSpace; /*!< Image Color space : gray-scale, YCBCR, RGB or CMYK
DECL|Conf|member|JPEG_ConfTypeDef Conf; /*!< Current JPEG encoding/decoding parameters */
DECL|Context|member|__IO uint32_t Context; /*!< JPEG Internal context */
DECL|CustomQuanTable|member|uint8_t CustomQuanTable; /*!< If set to 1 specify that user customized quantization tables are used */
DECL|ErrorCode|member|__IO uint32_t ErrorCode; /*!< JPEG Error code */
DECL|HAL_JPEG_ERROR_DMA|macro|HAL_JPEG_ERROR_DMA
DECL|HAL_JPEG_ERROR_HUFF_TABLE|macro|HAL_JPEG_ERROR_HUFF_TABLE
DECL|HAL_JPEG_ERROR_NONE|macro|HAL_JPEG_ERROR_NONE
DECL|HAL_JPEG_ERROR_QUANT_TABLE|macro|HAL_JPEG_ERROR_QUANT_TABLE
DECL|HAL_JPEG_ERROR_TIMEOUT|macro|HAL_JPEG_ERROR_TIMEOUT
DECL|HAL_JPEG_STATETypeDef|typedef|}HAL_JPEG_STATETypeDef;
DECL|HAL_JPEG_STATE_BUSY_DECODING|enumerator|HAL_JPEG_STATE_BUSY_DECODING = 0x04U, /*!< JPEG decoding processing is ongoing */
DECL|HAL_JPEG_STATE_BUSY_ENCODING|enumerator|HAL_JPEG_STATE_BUSY_ENCODING = 0x03U, /*!< JPEG encoding processing is ongoing */
DECL|HAL_JPEG_STATE_BUSY|enumerator|HAL_JPEG_STATE_BUSY = 0x02U, /*!< JPEG internal processing is ongoing */
DECL|HAL_JPEG_STATE_ERROR|enumerator|HAL_JPEG_STATE_ERROR = 0x06U /*!< JPEG error state */
DECL|HAL_JPEG_STATE_READY|enumerator|HAL_JPEG_STATE_READY = 0x01U, /*!< JPEG initialized and ready for use */
DECL|HAL_JPEG_STATE_RESET|enumerator|HAL_JPEG_STATE_RESET = 0x00U, /*!< JPEG not yet initialized or disabled */
DECL|HAL_JPEG_STATE_TIMEOUT|enumerator|HAL_JPEG_STATE_TIMEOUT = 0x05U, /*!< JPEG timeout state */
DECL|IS_JPEG_CHROMASUBSAMPLING|macro|IS_JPEG_CHROMASUBSAMPLING
DECL|IS_JPEG_COLORSPACE|macro|IS_JPEG_COLORSPACE
DECL|IS_JPEG_IMAGE_QUALITY|macro|IS_JPEG_IMAGE_QUALITY
DECL|IS_JPEG_PAUSE_RESUME_STATE|macro|IS_JPEG_PAUSE_RESUME_STATE
DECL|ImageHeight|member|uint32_t ImageHeight; /*!< Image height : number of lines */
DECL|ImageQuality|member|uint8_t ImageQuality; /*!< Quality of the JPEG encoding : from 1 to 100 */
DECL|ImageWidth|member|uint32_t ImageWidth; /*!< Image width : number of pixels per line */
DECL|InDataLength|member|uint32_t InDataLength; /*!< Input Buffer Length in Bytes */
DECL|Instance|member|JPEG_TypeDef *Instance; /*!< JPEG peripheral register base address */
DECL|JPEG_420_SUBSAMPLING|macro|JPEG_420_SUBSAMPLING
DECL|JPEG_422_SUBSAMPLING|macro|JPEG_422_SUBSAMPLING
DECL|JPEG_444_SUBSAMPLING|macro|JPEG_444_SUBSAMPLING
DECL|JPEG_CMYK_COLORSPACE|macro|JPEG_CMYK_COLORSPACE
DECL|JPEG_ConfTypeDef|typedef|}JPEG_ConfTypeDef;
DECL|JPEG_FLAG_ALL|macro|JPEG_FLAG_ALL
DECL|JPEG_FLAG_COF|macro|JPEG_FLAG_COF
DECL|JPEG_FLAG_EOCF|macro|JPEG_FLAG_EOCF
DECL|JPEG_FLAG_HPDF|macro|JPEG_FLAG_HPDF
DECL|JPEG_FLAG_IFNFF|macro|JPEG_FLAG_IFNFF
DECL|JPEG_FLAG_IFTF|macro|JPEG_FLAG_IFTF
DECL|JPEG_FLAG_OFNEF|macro|JPEG_FLAG_OFNEF
DECL|JPEG_FLAG_OFTF|macro|JPEG_FLAG_OFTF
DECL|JPEG_GRAYSCALE_COLORSPACE|macro|JPEG_GRAYSCALE_COLORSPACE
DECL|JPEG_HandleTypeDef|typedef|}JPEG_HandleTypeDef;
DECL|JPEG_IMAGE_QUALITY_MAX|macro|JPEG_IMAGE_QUALITY_MAX
DECL|JPEG_IMAGE_QUALITY_MIN|macro|JPEG_IMAGE_QUALITY_MIN
DECL|JPEG_IT_EOC|macro|JPEG_IT_EOC
DECL|JPEG_IT_HPD|macro|JPEG_IT_HPD
DECL|JPEG_IT_IFNF|macro|JPEG_IT_IFNF
DECL|JPEG_IT_IFT|macro|JPEG_IT_IFT
DECL|JPEG_IT_OFNE|macro|JPEG_IT_OFNE
DECL|JPEG_IT_OFT|macro|JPEG_IT_OFT
DECL|JPEG_PAUSE_RESUME_INPUT_OUTPUT|macro|JPEG_PAUSE_RESUME_INPUT_OUTPUT
DECL|JPEG_PAUSE_RESUME_INPUT|macro|JPEG_PAUSE_RESUME_INPUT
DECL|JPEG_PAUSE_RESUME_OUTPUT|macro|JPEG_PAUSE_RESUME_OUTPUT
DECL|JPEG_QUANT_TABLE_SIZE|macro|JPEG_QUANT_TABLE_SIZE
DECL|JPEG_YCBCR_COLORSPACE|macro|JPEG_YCBCR_COLORSPACE
DECL|JpegInCount|member|__IO uint32_t JpegInCount; /*!< Internal Counter of input data */
DECL|JpegOutCount|member|__IO uint32_t JpegOutCount; /*!< Internal Counter of output data */
DECL|Lock|member|HAL_LockTypeDef Lock; /*!< JPEG locking object */
DECL|OutDataLength|member|uint32_t OutDataLength; /*!< Output Buffer Length in Bytes */
DECL|QuantTable0|member|uint8_t *QuantTable0; /*!< Basic Quantization Table for component 0 */
DECL|QuantTable1|member|uint8_t *QuantTable1; /*!< Basic Quantization Table for component 1 */
DECL|QuantTable2|member|uint8_t *QuantTable2; /*!< Basic Quantization Table for component 2 */
DECL|QuantTable3|member|uint8_t *QuantTable3; /*!< Basic Quantization Table for component 3 */
DECL|State|member|__IO HAL_JPEG_STATETypeDef State; /*!< JPEG peripheral state */
DECL|__HAL_JPEG_CLEAR_FLAG|macro|__HAL_JPEG_CLEAR_FLAG
DECL|__HAL_JPEG_DISABLE_IT|macro|__HAL_JPEG_DISABLE_IT
DECL|__HAL_JPEG_DISABLE|macro|__HAL_JPEG_DISABLE
DECL|__HAL_JPEG_ENABLE_IT|macro|__HAL_JPEG_ENABLE_IT
DECL|__HAL_JPEG_ENABLE|macro|__HAL_JPEG_ENABLE
DECL|__HAL_JPEG_GET_FLAG|macro|__HAL_JPEG_GET_FLAG
DECL|__HAL_JPEG_GET_IT_SOURCE|macro|__HAL_JPEG_GET_IT_SOURCE
DECL|__HAL_JPEG_RESET_HANDLE_STATE|macro|__HAL_JPEG_RESET_HANDLE_STATE
DECL|__STM32F7xx_HAL_JPEG_H|macro|__STM32F7xx_HAL_JPEG_H
DECL|hdmain|member|DMA_HandleTypeDef *hdmain; /*!< JPEG In DMA handle parameters */
DECL|hdmaout|member|DMA_HandleTypeDef *hdmaout; /*!< JPEG Out DMA handle parameters */
DECL|pJpegInBuffPtr|member|uint8_t *pJpegInBuffPtr; /*!< Pointer to JPEG processing (encoding, decoding,...) input buffer */
DECL|pJpegOutBuffPtr|member|uint8_t *pJpegOutBuffPtr; /*!< Pointer to JPEG processing (encoding, decoding,...) output buffer */
