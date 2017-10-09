DECL|BuildDate|member|uint8 BuildDate[sizeof(__DATE__)];
DECL|BuildTime|member|uint8 BuildTime[sizeof(__TIME__)];
DECL|_NMDRV_H_|macro|_NMDRV_H_
DECL|_PAD16_|member|uint16 _PAD16_[2];
DECL|_PAD8_|member|uint8 _PAD8_;
DECL|binVerInfo|member|tstrM2mRev binVerInfo;
DECL|flashOffset|member|uint32 flashOffset;
DECL|payloadSize|member|uint32 payloadSize;
DECL|tstrM2mBinaryHeader|typedef|} tstrM2mBinaryHeader;
DECL|tstrM2mRev|typedef|} tstrM2mRev;
DECL|u16FirmwareSvnNum|member|uint16 u16FirmwareSvnNum;
DECL|u32Chipid|member|uint32 u32Chipid; /* HW revision which will be basically the chip ID */
DECL|u8DriverMajor|member|uint8 u8DriverMajor; /* Version Major Number which represents the official release base */
DECL|u8DriverMinor|member|uint8 u8DriverMinor; /* Version Minor Number which represents the engineering release base */
DECL|u8DriverPatch|member|uint8 u8DriverPatch; /* Version Patch Number which represents the pathces release base */
DECL|u8FirmwareMajor|member|uint8 u8FirmwareMajor; /* Version Major Number which represents the official release base */
DECL|u8FirmwareMinor|member|uint8 u8FirmwareMinor; /* Version Minor Number which represents the engineering release base */
DECL|u8FirmwarePatch|member|uint8 u8FirmwarePatch; /* Version pathc Number which represents the pathces release base */
