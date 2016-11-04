DECL|Bits|member|uint8_t Bits[16]; /*!< bits[k] = # of symbols with codes of length k bits, this parameter corresponds to BITS list in the Annex C */
DECL|Bits|member|uint8_t Bits[16]; /*!< bits[k] = # of symbols with codes of length k bits, this parameter corresponds to BITS list in the Annex C */
DECL|CodeLength|member|uint8_t CodeLength[JPEG_AC_HUFF_TABLE_SIZE]; /*!< Code length */
DECL|CodeLength|member|uint8_t CodeLength[JPEG_DC_HUFF_TABLE_SIZE]; /*!< Code length */
DECL|HAL_JPEG_Abort|function|HAL_StatusTypeDef HAL_JPEG_Abort(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_ConfigEncoding|function|HAL_StatusTypeDef HAL_JPEG_ConfigEncoding(JPEG_HandleTypeDef *hjpeg, JPEG_ConfTypeDef *pConf)
DECL|HAL_JPEG_ConfigInputBuffer|function|void HAL_JPEG_ConfigInputBuffer(JPEG_HandleTypeDef *hjpeg, uint8_t *pNewInputBuffer, uint32_t InDataLength)
DECL|HAL_JPEG_ConfigOutputBuffer|function|void HAL_JPEG_ConfigOutputBuffer(JPEG_HandleTypeDef *hjpeg, uint8_t *pNewOutputBuffer, uint32_t OutDataLength)
DECL|HAL_JPEG_DataReadyCallback|function|__weak void HAL_JPEG_DataReadyCallback (JPEG_HandleTypeDef *hjpeg, uint8_t *pDataOut, uint32_t OutDataLength)
DECL|HAL_JPEG_DeInit|function|HAL_StatusTypeDef HAL_JPEG_DeInit(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_DecodeCpltCallback|function|__weak void HAL_JPEG_DecodeCpltCallback(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_Decode_DMA|function|HAL_StatusTypeDef HAL_JPEG_Decode_DMA(JPEG_HandleTypeDef *hjpeg ,uint8_t *pDataIn ,uint32_t InDataLength ,uint8_t *pDataOutMCU ,uint32_t OutDataLength)
DECL|HAL_JPEG_Decode_IT|function|HAL_StatusTypeDef HAL_JPEG_Decode_IT(JPEG_HandleTypeDef *hjpeg ,uint8_t *pDataIn ,uint32_t InDataLength ,uint8_t *pDataOutMCU ,uint32_t OutDataLength)
DECL|HAL_JPEG_Decode|function|HAL_StatusTypeDef HAL_JPEG_Decode(JPEG_HandleTypeDef *hjpeg ,uint8_t *pDataIn ,uint32_t InDataLength ,uint8_t *pDataOutMCU ,uint32_t OutDataLength, uint32_t Timeout)
DECL|HAL_JPEG_DisableHeaderParsing|function|HAL_StatusTypeDef HAL_JPEG_DisableHeaderParsing(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_EnableHeaderParsing|function|HAL_StatusTypeDef HAL_JPEG_EnableHeaderParsing(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_EncodeCpltCallback|function|__weak void HAL_JPEG_EncodeCpltCallback(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_Encode_DMA|function|HAL_StatusTypeDef HAL_JPEG_Encode_DMA(JPEG_HandleTypeDef *hjpeg, uint8_t *pDataInMCU, uint32_t InDataLength, uint8_t *pDataOut, uint32_t OutDataLength)
DECL|HAL_JPEG_Encode_IT|function|HAL_StatusTypeDef HAL_JPEG_Encode_IT(JPEG_HandleTypeDef *hjpeg, uint8_t *pDataInMCU, uint32_t InDataLength, uint8_t *pDataOut, uint32_t OutDataLength)
DECL|HAL_JPEG_Encode|function|HAL_StatusTypeDef HAL_JPEG_Encode(JPEG_HandleTypeDef *hjpeg, uint8_t *pDataInMCU, uint32_t InDataLength, uint8_t *pDataOut, uint32_t OutDataLength, uint32_t Timeout)
DECL|HAL_JPEG_ErrorCallback|function|__weak void HAL_JPEG_ErrorCallback(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_GetDataCallback|function|__weak void HAL_JPEG_GetDataCallback(JPEG_HandleTypeDef *hjpeg, uint32_t NbDecodedData)
DECL|HAL_JPEG_GetError|function|uint32_t HAL_JPEG_GetError(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_GetInfo|function|HAL_StatusTypeDef HAL_JPEG_GetInfo(JPEG_HandleTypeDef *hjpeg, JPEG_ConfTypeDef *pInfo)
DECL|HAL_JPEG_GetState|function|HAL_JPEG_STATETypeDef HAL_JPEG_GetState(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_IRQHandler|function|void HAL_JPEG_IRQHandler(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_InfoReadyCallback|function|__weak void HAL_JPEG_InfoReadyCallback(JPEG_HandleTypeDef *hjpeg,JPEG_ConfTypeDef *pInfo)
DECL|HAL_JPEG_Init|function|HAL_StatusTypeDef HAL_JPEG_Init(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_MspDeInit|function|__weak void HAL_JPEG_MspDeInit(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_MspInit|function|__weak void HAL_JPEG_MspInit(JPEG_HandleTypeDef *hjpeg)
DECL|HAL_JPEG_Pause|function|HAL_StatusTypeDef HAL_JPEG_Pause(JPEG_HandleTypeDef *hjpeg, uint32_t XferSelection)
DECL|HAL_JPEG_Resume|function|HAL_StatusTypeDef HAL_JPEG_Resume(JPEG_HandleTypeDef *hjpeg, uint32_t XferSelection)
DECL|HAL_JPEG_SetUserQuantTables|function|HAL_StatusTypeDef HAL_JPEG_SetUserQuantTables(JPEG_HandleTypeDef *hjpeg, uint8_t *QTable0, uint8_t *QTable1, uint8_t *QTable2, uint8_t *QTable3)
DECL|HuffVal|member|uint8_t HuffVal[12]; /*!< The symbols, in order of incremented code length, this parameter corresponds to HUFFVAL list in the Annex C */
DECL|HuffVal|member|uint8_t HuffVal[162]; /*!< The symbols, in order of incremented code length, this parameter corresponds to HUFFVAL list in the Annex C */
DECL|HuffmanCode|member|uint32_t HuffmanCode[JPEG_AC_HUFF_TABLE_SIZE]; /*!< HuffmanCode */
DECL|HuffmanCode|member|uint32_t HuffmanCode[JPEG_DC_HUFF_TABLE_SIZE]; /*!< HuffmanCode */
DECL|JPEG_ACCHROM_HuffTable|variable|JPEG_ACCHROM_HuffTable
DECL|JPEG_ACHuffTableTypeDef|typedef|}JPEG_ACHuffTableTypeDef;
DECL|JPEG_ACHuff_BitsVals_To_SizeCodes|function|static HAL_StatusTypeDef JPEG_ACHuff_BitsVals_To_SizeCodes(JPEG_ACHuffTableTypeDef *AC_BitsValsTable, JPEG_AC_HuffCodeTableTypeDef *AC_SizeCodesTable)
DECL|JPEG_ACLUM_HuffTable|variable|JPEG_ACLUM_HuffTable
DECL|JPEG_AC_HUFF_TABLE_SIZE|macro|JPEG_AC_HUFF_TABLE_SIZE
DECL|JPEG_AC_HuffCodeTableTypeDef|typedef|}JPEG_AC_HuffCodeTableTypeDef;
DECL|JPEG_Bits_To_SizeCodes|function|static HAL_StatusTypeDef JPEG_Bits_To_SizeCodes(uint8_t *Bits, uint8_t *Huffsize, uint32_t *Huffcode, uint32_t *LastK)
DECL|JPEG_CHROM_QuantTable|variable|JPEG_CHROM_QuantTable
DECL|JPEG_CONTEXT_CONF_ENCODING|macro|JPEG_CONTEXT_CONF_ENCODING
DECL|JPEG_CONTEXT_CUSTOM_TABLES|macro|JPEG_CONTEXT_CUSTOM_TABLES
DECL|JPEG_CONTEXT_DECODE|macro|JPEG_CONTEXT_DECODE
DECL|JPEG_CONTEXT_DMA|macro|JPEG_CONTEXT_DMA
DECL|JPEG_CONTEXT_ENCODE|macro|JPEG_CONTEXT_ENCODE
DECL|JPEG_CONTEXT_ENDING_DMA|macro|JPEG_CONTEXT_ENDING_DMA
DECL|JPEG_CONTEXT_IT|macro|JPEG_CONTEXT_IT
DECL|JPEG_CONTEXT_METHOD_MASK|macro|JPEG_CONTEXT_METHOD_MASK
DECL|JPEG_CONTEXT_OPERATION_MASK|macro|JPEG_CONTEXT_OPERATION_MASK
DECL|JPEG_CONTEXT_PAUSE_INPUT|macro|JPEG_CONTEXT_PAUSE_INPUT
DECL|JPEG_CONTEXT_PAUSE_OUTPUT|macro|JPEG_CONTEXT_PAUSE_OUTPUT
DECL|JPEG_CONTEXT_POLLING|macro|JPEG_CONTEXT_POLLING
DECL|JPEG_DCCHROM_HuffTable|variable|JPEG_DCCHROM_HuffTable
DECL|JPEG_DCHuffTableTypeDef|typedef|}JPEG_DCHuffTableTypeDef;
DECL|JPEG_DCHuff_BitsVals_To_SizeCodes|function|static HAL_StatusTypeDef JPEG_DCHuff_BitsVals_To_SizeCodes(JPEG_DCHuffTableTypeDef *DC_BitsValsTable, JPEG_DC_HuffCodeTableTypeDef *DC_SizeCodesTable)
DECL|JPEG_DCLUM_HuffTable|variable|JPEG_DCLUM_HuffTable
DECL|JPEG_DC_HUFF_TABLE_SIZE|macro|JPEG_DC_HUFF_TABLE_SIZE
DECL|JPEG_DC_HuffCodeTableTypeDef|typedef|}JPEG_DC_HuffCodeTableTypeDef;
DECL|JPEG_DISABLE_DMA|macro|JPEG_DISABLE_DMA
DECL|JPEG_DMAErrorCallback|function|static void JPEG_DMAErrorCallback(DMA_HandleTypeDef *hdma)
DECL|JPEG_DMAInCpltCallback|function|static void JPEG_DMAInCpltCallback(DMA_HandleTypeDef *hdma)
DECL|JPEG_DMAOutAbortCallback|function|static void JPEG_DMAOutAbortCallback(DMA_HandleTypeDef *hdma)
DECL|JPEG_DMAOutCpltCallback|function|static void JPEG_DMAOutCpltCallback(DMA_HandleTypeDef *hdma)
DECL|JPEG_DMA_ContinueProcess|function|static uint32_t JPEG_DMA_ContinueProcess(JPEG_HandleTypeDef *hjpeg)
DECL|JPEG_DMA_EndProcess|function|static uint32_t JPEG_DMA_EndProcess(JPEG_HandleTypeDef *hjpeg)
DECL|JPEG_DMA_IDMA|macro|JPEG_DMA_IDMA
DECL|JPEG_DMA_MASK|macro|JPEG_DMA_MASK
DECL|JPEG_DMA_ODMA|macro|JPEG_DMA_ODMA
DECL|JPEG_DMA_StartProcess|function|static HAL_StatusTypeDef JPEG_DMA_StartProcess(JPEG_HandleTypeDef *hjpeg)
DECL|JPEG_ENABLE_DMA|macro|JPEG_ENABLE_DMA
DECL|JPEG_FIFO_SIZE|macro|JPEG_FIFO_SIZE
DECL|JPEG_GetQuality|function|static uint32_t JPEG_GetQuality(JPEG_HandleTypeDef *hjpeg)
DECL|JPEG_INTERRUPT_MASK|macro|JPEG_INTERRUPT_MASK
DECL|JPEG_Init_Process|function|static void JPEG_Init_Process(JPEG_HandleTypeDef *hjpeg)
DECL|JPEG_LUM_QuantTable|variable|JPEG_LUM_QuantTable
DECL|JPEG_PROCESS_DONE|macro|JPEG_PROCESS_DONE
DECL|JPEG_PROCESS_ONGOING|macro|JPEG_PROCESS_ONGOING
DECL|JPEG_Process|function|static uint32_t JPEG_Process(JPEG_HandleTypeDef *hjpeg)
DECL|JPEG_ReadInputData|function|static void JPEG_ReadInputData(JPEG_HandleTypeDef *hjpeg, uint32_t nbRequestWords)
DECL|JPEG_SetColorCMYK|function|static void JPEG_SetColorCMYK(JPEG_HandleTypeDef *hjpeg)
DECL|JPEG_SetColorGrayScale|function|static void JPEG_SetColorGrayScale(JPEG_HandleTypeDef *hjpeg)
DECL|JPEG_SetColorYCBCR|function|static void JPEG_SetColorYCBCR(JPEG_HandleTypeDef *hjpeg)
DECL|JPEG_Set_HuffAC_Mem|function|static HAL_StatusTypeDef JPEG_Set_HuffAC_Mem(JPEG_HandleTypeDef *hjpeg, JPEG_ACHuffTableTypeDef *HuffTableAC, uint32_t *ACTableAddress)
DECL|JPEG_Set_HuffDC_Mem|function|static HAL_StatusTypeDef JPEG_Set_HuffDC_Mem(JPEG_HandleTypeDef *hjpeg, JPEG_DCHuffTableTypeDef *HuffTableDC, uint32_t *DCTableAddress)
DECL|JPEG_Set_HuffEnc_Mem|function|static HAL_StatusTypeDef JPEG_Set_HuffEnc_Mem(JPEG_HandleTypeDef *hjpeg, JPEG_ACHuffTableTypeDef *HuffTableAC0, JPEG_DCHuffTableTypeDef *HuffTableDC0 , JPEG_ACHuffTableTypeDef *HuffTableAC1, JPEG_DCHuffTableTypeDef *HuffTableDC1)
DECL|JPEG_Set_Huff_DHTMem|function|static void JPEG_Set_Huff_DHTMem(JPEG_HandleTypeDef *hjpeg, JPEG_ACHuffTableTypeDef *HuffTableAC0, JPEG_DCHuffTableTypeDef *HuffTableDC0 , JPEG_ACHuffTableTypeDef *HuffTableAC1, JPEG_DCHuffTableTypeDef *HuffTableDC1)
DECL|JPEG_Set_Quantization_Mem|function|static HAL_StatusTypeDef JPEG_Set_Quantization_Mem(JPEG_HandleTypeDef *hjpeg, uint8_t *QTable, uint32_t *QTableAddress)
DECL|JPEG_StoreOutputData|function|static void JPEG_StoreOutputData(JPEG_HandleTypeDef *hjpeg, uint32_t nbOutputWords)
DECL|JPEG_TIMEOUT_VALUE|macro|JPEG_TIMEOUT_VALUE
DECL|JPEG_ZIGZAG_ORDER|variable|JPEG_ZIGZAG_ORDER
