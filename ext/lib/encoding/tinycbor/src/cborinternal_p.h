DECL|ArrayType|enumerator|ArrayType = 4U,
DECL|BreakByte|enumerator|BreakByte = (unsigned)Break | (SimpleTypesType << MajorTypeShift)
DECL|Break|enumerator|Break = 31
DECL|ByteStringType|enumerator|ByteStringType = 2U,
DECL|CBORINTERNAL_P_H|macro|CBORINTERNAL_P_H
DECL|CBOR_INTERNAL_API|macro|CBOR_INTERNAL_API
DECL|CBOR_PARSER_MAX_RECURSIONS|macro|CBOR_PARSER_MAX_RECURSIONS
DECL|CborMajorTypes|enum|typedef enum CborMajorTypes {
DECL|CborMajorTypes|typedef|} CborMajorTypes;
DECL|CborSimpleTypes|enum|typedef enum CborSimpleTypes {
DECL|CborSimpleTypes|typedef|} CborSimpleTypes;
DECL|DoublePrecisionFloat|enumerator|DoublePrecisionFloat = 27, /* ditto */
DECL|FalseValue|enumerator|FalseValue = 20,
DECL|HalfPrecisionFloat|enumerator|HalfPrecisionFloat = 25, /* ditto */
DECL|IndefiniteLength|enumerator|IndefiniteLength = 31U,
DECL|MajorTypeMask|enumerator|MajorTypeMask = (int) (~0U << MajorTypeShift),
DECL|MajorTypeShift|enumerator|MajorTypeShift = SmallValueBitLength,
DECL|MapType|enumerator|MapType = 5U, /* a.k.a. object */
DECL|NegativeIntegerType|enumerator|NegativeIntegerType = 1U,
DECL|NullValue|enumerator|NullValue = 22,
DECL|SimpleTypeInNextByte|enumerator|SimpleTypeInNextByte = 24, /* not really a simple type */
DECL|SimpleTypesType|enumerator|SimpleTypesType = 7U
DECL|SinglePrecisionFloat|enumerator|SinglePrecisionFloat = 26, /* ditto */
DECL|SmallValueBitLength|enumerator|SmallValueBitLength = 5U,
DECL|SmallValueMask|enumerator|SmallValueMask = (1U << SmallValueBitLength) - 1, /* 31 */
DECL|TagType|enumerator|TagType = 6U,
DECL|TextStringType|enumerator|TextStringType = 3U,
DECL|TrueValue|enumerator|TrueValue = 21,
DECL|UndefinedValue|enumerator|UndefinedValue = 23,
DECL|UnsignedIntegerType|enumerator|UnsignedIntegerType = 0U,
DECL|Value16Bit|enumerator|Value16Bit = 25U,
DECL|Value32Bit|enumerator|Value32Bit = 26U,
DECL|Value64Bit|enumerator|Value64Bit = 27U,
DECL|Value8Bit|enumerator|Value8Bit = 24U,
