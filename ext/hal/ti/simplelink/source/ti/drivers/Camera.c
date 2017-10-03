DECL|Camera_Params_init|function|void Camera_Params_init(Camera_Params *params)
DECL|Camera_capture|function|int_fast16_t Camera_capture(Camera_Handle handle, void *buffer, size_t bufferlen, size_t *frameLen)
DECL|Camera_close|function|void Camera_close(Camera_Handle handle)
DECL|Camera_control|function|int_fast16_t Camera_control(Camera_Handle handle, uint_fast16_t cmd, void *arg)
DECL|Camera_defaultParams|variable|Camera_defaultParams
DECL|Camera_init|function|void Camera_init(void)
DECL|Camera_open|function|Camera_Handle Camera_open(uint_least8_t index, Camera_Params *params)
DECL|isInitialized|variable|isInitialized
