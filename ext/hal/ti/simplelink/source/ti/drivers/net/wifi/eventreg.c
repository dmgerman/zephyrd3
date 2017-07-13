DECL|_SlDeviceFatalErrorEvtHdlr|function|void _SlDeviceFatalErrorEvtHdlr(SlDeviceFatal_t *pSlFatalErrorEvent)
DECL|_SlDeviceGeneralEvtHdlr|function|void _SlDeviceGeneralEvtHdlr(SlDeviceEvent_t *pSlDeviceEvent)
DECL|_SlIsEventRegistered|function|_i32 _SlIsEventRegistered(SlEventHandler_e EventHandlerType)
DECL|_SlNetAppEvtHdlr|function|void _SlNetAppEvtHdlr(SlNetAppEvent_t* pSlNetAppEvent)
DECL|_SlNetAppHttpServerHdlr|function|void _SlNetAppHttpServerHdlr(SlNetAppHttpServerEvent_t *pSlHttpServerEvent, SlNetAppHttpServerResponse_t *pSlHttpServerResponse)
DECL|_SlNetAppRequestHdlr|function|void _SlNetAppRequestHdlr(SlNetAppRequest_t *pNetAppRequest, SlNetAppResponse_t *pNetAppResponse)
DECL|_SlNetAppRequestMemFree|function|void _SlNetAppRequestMemFree (_u8 *buffer)
DECL|_SlSockEvtHdlr|function|void _SlSockEvtHdlr(SlSockEvent_t* pSlSockEvent)
DECL|_SlSocketTriggerEventHandler|function|void _SlSocketTriggerEventHandler(SlSockTriggerEvent_t* pSlSockTriggerEvent)
DECL|_SlWlanEvtHdlr|function|void _SlWlanEvtHdlr(SlWlanEvent_t* pSlWlanEvent)
DECL|_pSlDeviceFatalErrorEvtHdlr_t|typedef|typedef void (*_pSlDeviceFatalErrorEvtHdlr_t)(SlDeviceFatal_t *pSlFatalErrorEvent);
DECL|_pSlDeviceGeneralEvtHdlr_t|typedef|typedef void (*_pSlDeviceGeneralEvtHdlr_t)(SlDeviceEvent_t *pSlDeviceEvent);
DECL|_pSlNetAppEvtHdlr|typedef|typedef void (*_pSlNetAppEvtHdlr)(SlNetAppEvent_t* pSlNetAppEvent);
DECL|_pSlNetAppHttpServerHdlr|typedef|typedef void (*_pSlNetAppHttpServerHdlr)(SlNetAppHttpServerEvent_t *pSlHttpServerEvent, SlNetAppHttpServerResponse_t *pSlHttpServerResponse);
DECL|_pSlNetAppRequestHdlr|typedef|typedef void (*_pSlNetAppRequestHdlr)(SlNetAppRequest_t *pNetAppRequest, SlNetAppResponse_t *pNetAppResponse);
DECL|_pSlNetAppRequestMemFree|typedef|typedef void (*_pSlNetAppRequestMemFree)(_u8 *buffer);
DECL|_pSlPropogationDeviceFatalErrorEvtHdlr_t|typedef|typedef _i32 (*_pSlPropogationDeviceFatalErrorEvtHdlr_t)(SlDeviceFatal_t *pSlFatalErrorEvent);
DECL|_pSlPropogationDeviceGeneralEvtHdlr_t|typedef|typedef _i32 (*_pSlPropogationDeviceGeneralEvtHdlr_t)(SlDeviceEvent_t *pSlDeviceEvent);
DECL|_pSlPropogationNetAppEvtHdlr|typedef|typedef _i32 (*_pSlPropogationNetAppEvtHdlr)(SlNetAppEvent_t* pSlNetAppEvent);
DECL|_pSlPropogationNetAppHttpServerHdlr|typedef|typedef _i32 (*_pSlPropogationNetAppHttpServerHdlr)(SlNetAppHttpServerEvent_t *pSlHttpServerEvent, SlNetAppHttpServerResponse_t *pSlHttpServerResponse);
DECL|_pSlPropogationNetAppRequestHdlr|typedef|typedef _i32 (*_pSlPropogationNetAppRequestHdlr)(SlNetAppRequest_t *pNetAppRequest, SlNetAppResponse_t *pNetAppResponse);
DECL|_pSlPropogationNetAppRequestMemFree|typedef|typedef _i32 (*_pSlPropogationNetAppRequestMemFree)(_u8 *buffer);
DECL|_pSlPropogationSockEvtHdlr|typedef|typedef _i32 (*_pSlPropogationSockEvtHdlr)(SlSockEvent_t* pSlSockEvent);
DECL|_pSlPropogationSocketTriggerEventHandler|typedef|typedef _i32 (*_pSlPropogationSocketTriggerEventHandler)(SlSockTriggerEvent_t* pSlSockTriggerEvent);
DECL|_pSlPropogationWlanEvtHdlr|typedef|typedef _i32 (*_pSlPropogationWlanEvtHdlr)(SlWlanEvent_t* pSlWlanEvent);
DECL|_pSlSockEvtHdlr|typedef|typedef void (*_pSlSockEvtHdlr)(SlSockEvent_t* pSlSockEvent);
DECL|_pSlSocketTriggerEventHandler|typedef|typedef void (*_pSlSocketTriggerEventHandler)(SlSockTriggerEvent_t* pSlSockTriggerEvent);
DECL|_pSlWlanEvtHdlr|typedef|typedef void (*_pSlWlanEvtHdlr)(SlWlanEvent_t* pSlWlanEvent);
DECL|g_LibsEvents|variable|g_LibsEvents
DECL|g_UserEvents|variable|g_UserEvents
DECL|sl_RegisterEventHandler|function|_i32 sl_RegisterEventHandler(SlEventHandler_e EventHandlerType , void* EventHandler)
DECL|sl_RegisterLibsEventHandler|function|_i32 sl_RegisterLibsEventHandler(SlEventHandler_e EventHandlerType , SlEventsListNode_t* EventHandlerNode)
DECL|sl_UnregisterLibsEventHandler|function|_i32 sl_UnregisterLibsEventHandler(SlEventHandler_e EventHandlerType , SlEventsListNode_t* EventHandlerNode)
