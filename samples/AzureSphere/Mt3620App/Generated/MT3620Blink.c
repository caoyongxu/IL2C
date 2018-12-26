﻿#include <mt3620_rdb.h>
#include <sys/epoll.h>
#include <time.h>
#include <unistd.h>
#include <sys/timerfd.h>
#include <applibs/gpio.h>
#include "MT3620Blink.h"

//////////////////////////////////////////////////////////////////////////////////
// [9-1] Const strings:

IL2C_CONST_STRING(string0__, L"Invalid descriptor: ");

//////////////////////////////////////////////////////////////////////////////////
// [12-1] Declared values:

// .<PrivateImplementationDetails>.E902362F9BEE92BBA97ECE5B88B94AF4A8D3201D
static const int64_t declaredValue0__[] =
    { 125000000LL, 250000000LL, 500000000LL };

//////////////////////////////////////////////////////////////////////////////////
// [9-2] File scope prototypes:

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////////////////////////////////////////////////////////////////
// [2-1] Types:

////////////////////////////////////////////////////////////
// [2-1-1] .NET types:

typedef epoll_data_t MT3620Blink_epoll_data_t;
typedef struct epoll_event MT3620Blink_epoll_event;
typedef GPIO_OutputMode_Type MT3620Blink_GPIO_OutputMode_Type;
typedef struct MT3620Blink_GpioOutput MT3620Blink_GpioOutput;
typedef struct MT3620Blink_GpioInput MT3620Blink_GpioInput;
typedef struct timespec MT3620Blink_timespec;
typedef struct itimerspec MT3620Blink_itimerspec;
typedef struct MT3620Blink_Timer MT3620Blink_Timer;
typedef struct MT3620Blink_Program_GpioBlinker MT3620Blink_Program_GpioBlinker;
typedef struct MT3620Blink_Program_GpioPoller MT3620Blink_Program_GpioPoller;
typedef GPIO_Value_Type MT3620Blink_GPIO_Value_Type;
typedef struct MT3620Blink_Interops MT3620Blink_Interops;

////////////////////////////////////////////////////////////
// [2-1-2] VTable types:

typedef System_ValueType_VTABLE_DECL__ MT3620Blink_epoll_data_t_VTABLE_DECL__;
typedef System_ValueType_VTABLE_DECL__ MT3620Blink_epoll_event_VTABLE_DECL__;
typedef System_Enum_VTABLE_DECL__ MT3620Blink_GPIO_OutputMode_Type_VTABLE_DECL__;
typedef MT3620Blink_Descriptor_VTABLE_DECL__ MT3620Blink_GpioOutput_VTABLE_DECL__;
typedef MT3620Blink_Descriptor_VTABLE_DECL__ MT3620Blink_GpioInput_VTABLE_DECL__;
typedef System_ValueType_VTABLE_DECL__ MT3620Blink_timespec_VTABLE_DECL__;
typedef System_ValueType_VTABLE_DECL__ MT3620Blink_itimerspec_VTABLE_DECL__;
typedef const struct MT3620Blink_Timer_VTABLE_DECL___ MT3620Blink_Timer_VTABLE_DECL__;
typedef MT3620Blink_Timer_VTABLE_DECL__ MT3620Blink_Program_GpioBlinker_VTABLE_DECL__;
typedef MT3620Blink_Timer_VTABLE_DECL__ MT3620Blink_Program_GpioPoller_VTABLE_DECL__;
typedef System_Enum_VTABLE_DECL__ MT3620Blink_GPIO_Value_Type_VTABLE_DECL__;
typedef System_Object_VTABLE_DECL__ MT3620Blink_Interops_VTABLE_DECL__;

////////////////////////////////////////////////////////////
// [1] MT3620Blink.epoll_data_t

// [1-5-1] VTable (Same as System.ValueType)
#define MT3620Blink_epoll_data_t_VTABLE__ System_ValueType_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_epoll_data_t);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.epoll_event

// [1-5-1] VTable (Same as System.ValueType)
#define MT3620Blink_epoll_event_VTABLE__ System_ValueType_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_epoll_event);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.GPIO_OutputMode_Type

// [1-5-1] VTable (Same as System.Enum)
#define MT3620Blink_GPIO_OutputMode_Type_VTABLE__ System_Enum_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_GPIO_OutputMode_Type);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.GpioOutput

// [1-1-2] Class layout
struct MT3620Blink_GpioOutput
{
    MT3620Blink_GpioOutput_VTABLE_DECL__* vptr0__;
    System_IDisposable_VTABLE_DECL__* vptr_System_IDisposable__;
    int32_t baseField1__;
};

// [1-5-1] VTable (Same as MT3620Blink.Descriptor)
#define MT3620Blink_GpioOutput_VTABLE__ MT3620Blink_Descriptor_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_GpioOutput);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.GpioInput

// [1-1-2] Class layout
struct MT3620Blink_GpioInput
{
    MT3620Blink_GpioInput_VTABLE_DECL__* vptr0__;
    System_IDisposable_VTABLE_DECL__* vptr_System_IDisposable__;
    int32_t baseField1__;
};

// [1-5-1] VTable (Same as MT3620Blink.Descriptor)
#define MT3620Blink_GpioInput_VTABLE__ MT3620Blink_Descriptor_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_GpioInput);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.timespec

// [1-5-1] VTable (Same as System.ValueType)
#define MT3620Blink_timespec_VTABLE__ System_ValueType_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_timespec);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.itimerspec

// [1-5-1] VTable (Same as System.ValueType)
#define MT3620Blink_itimerspec_VTABLE__ System_ValueType_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_itimerspec);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.Timer

// [1-2-3] Class VTable layout (Derived from MT3620Blink.Descriptor)
struct MT3620Blink_Timer_VTABLE_DECL___
{
    intptr_t offset__; // Adjustor offset
    bool (*Equals)(void* this__, System_Object* obj);
    void (*Finalize)(void* this__);
    int32_t (*GetHashCode)(void* this__);
    System_String* (*ToString)(void* this__);
    void (*Dispose)(void* this__);
    void (*OnRaised)(void* this__);
    void (*Raised)(void* this__);
};

// [1-1-2] Class layout
struct MT3620Blink_Timer
{
    MT3620Blink_Timer_VTABLE_DECL__* vptr0__;
    System_IDisposable_VTABLE_DECL__* vptr_System_IDisposable__;
    int32_t baseField1__;
};

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_Timer);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.Program.GpioBlinker

// [1-1-2] Class layout
struct MT3620Blink_Program_GpioBlinker
{
    MT3620Blink_Program_GpioBlinker_VTABLE_DECL__* vptr0__;
    System_IDisposable_VTABLE_DECL__* vptr_System_IDisposable__;
    int32_t baseField1__;
    il2c_arraytype(System_Int64)* blinkIntervals;
    MT3620Blink_GpioOutput* output;
    bool flag;
    int32_t blinkIntervalIndex;
};

// [1-5-2] VTable (Derived from MT3620Blink.Timer)
extern MT3620Blink_Program_GpioBlinker_VTABLE_DECL__ MT3620Blink_Program_GpioBlinker_VTABLE__;

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_Program_GpioBlinker);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.Program.GpioPoller

// [1-1-2] Class layout
struct MT3620Blink_Program_GpioPoller
{
    MT3620Blink_Program_GpioPoller_VTABLE_DECL__* vptr0__;
    System_IDisposable_VTABLE_DECL__* vptr_System_IDisposable__;
    int32_t baseField1__;
    MT3620Blink_GpioInput* input;
    MT3620Blink_Program_GpioBlinker* blinker;
    bool last;
};

// [1-5-2] VTable (Derived from MT3620Blink.Timer)
extern MT3620Blink_Program_GpioPoller_VTABLE_DECL__ MT3620Blink_Program_GpioPoller_VTABLE__;

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_Program_GpioPoller);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.GPIO_Value_Type

// [1-5-1] VTable (Same as System.Enum)
#define MT3620Blink_GPIO_Value_Type_VTABLE__ System_Enum_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_GPIO_Value_Type);

////////////////////////////////////////////////////////////
// [1] MT3620Blink.Interops

// [1-1-2] Class layout
struct MT3620Blink_Interops
{
    MT3620Blink_Interops_VTABLE_DECL__* vptr0__;
};

// [1-5-1] VTable (Same as System.Object)
#define MT3620Blink_Interops_VTABLE__ System_Object_VTABLE__

// [1-4] Runtime type information
IL2C_DECLARE_RUNTIME_TYPE(MT3620Blink_Interops);

//////////////////////////////////////////////////////////////////////////////////
// [2-2] Static fields:

#define MT3620Blink_Timer_CLOCK_MONOTONIC CLOCK_MONOTONIC
#define MT3620Blink_Timer_TFD_NONBLOCK TFD_NONBLOCK

#define MT3620Blink_Interops_MT3620_RDB_LED1_RED MT3620_RDB_LED1_RED
#define MT3620Blink_Interops_MT3620_RDB_BUTTON_A MT3620_RDB_BUTTON_A
#define MT3620Blink_Interops_EPOLL_CTL_ADD EPOLL_CTL_ADD
#define MT3620Blink_Interops_EPOLL_CTL_DEL EPOLL_CTL_DEL
#define MT3620Blink_Interops_EPOLLIN EPOLLIN

//////////////////////////////////////////////////////////////////////////////////
// [2-3] Methods:

// [2-4] Member methods: MT3620Blink.Descriptor

extern void MT3620Blink_Descriptor_set_Identity(MT3620Blink_Descriptor* this__, int32_t value);

// [2-4] Member methods: MT3620Blink.GpioOutput

extern void MT3620Blink_GpioOutput__ctor(MT3620Blink_GpioOutput* this__, int32_t gpioId, MT3620Blink_GPIO_OutputMode_Type type, bool initialValue);
extern void MT3620Blink_GpioOutput_SetValue(MT3620Blink_GpioOutput* this__, bool value);

// [2-4] Member methods: MT3620Blink.GpioInput

extern void MT3620Blink_GpioInput__ctor(MT3620Blink_GpioInput* this__, int32_t gpioId);
extern bool MT3620Blink_GpioInput_get_Value(MT3620Blink_GpioInput* this__);

// [2-4] Member methods: MT3620Blink.Timer

extern void MT3620Blink_Timer__ctor(MT3620Blink_Timer* this__);
extern void MT3620Blink_Timer_SetInterval(MT3620Blink_Timer* this__, int64_t nsec);
extern /* override */ void MT3620Blink_Timer_OnRaised(MT3620Blink_Timer* this__);

// [2-4] Member methods: MT3620Blink.Program.GpioBlinker

extern void MT3620Blink_Program_GpioBlinker__ctor(MT3620Blink_Program_GpioBlinker* this__, int32_t gpioId);
extern /* override */ void MT3620Blink_Program_GpioBlinker_Dispose(MT3620Blink_Program_GpioBlinker* this__);
extern /* override */ void MT3620Blink_Program_GpioBlinker_Raised(MT3620Blink_Program_GpioBlinker* this__);
extern void MT3620Blink_Program_GpioBlinker_NextInterval(MT3620Blink_Program_GpioBlinker* this__);

// [2-4] Member methods: MT3620Blink.Program.GpioPoller

extern void MT3620Blink_Program_GpioPoller__ctor(MT3620Blink_Program_GpioPoller* this__, int32_t gpioId, MT3620Blink_Program_GpioBlinker* blinker);
extern /* override */ void MT3620Blink_Program_GpioPoller_Dispose(MT3620Blink_Program_GpioPoller* this__);
extern /* override */ void MT3620Blink_Program_GpioPoller_Raised(MT3620Blink_Program_GpioPoller* this__);

// [2-4] Member methods: MT3620Blink.Interops

extern /* static */ int32_t MT3620Blink_Interops_close(int32_t fd);
extern /* static */ void MT3620Blink_Interops_nanosleep(MT3620Blink_timespec* req, MT3620Blink_timespec* rem);
extern /* static */ int32_t MT3620Blink_Interops_timerfd_create(int32_t clockid, int32_t flags);
extern /* static */ int32_t MT3620Blink_Interops_timerfd_settime(int32_t fd, int32_t flags, MT3620Blink_itimerspec* new_value, MT3620Blink_itimerspec* old_value);
extern /* static */ int32_t MT3620Blink_Interops_timerfd_read(int32_t fd, uint64_t* timerData, uintptr_t size);
extern /* static */ int32_t MT3620Blink_Interops_GPIO_OpenAsOutput(int32_t gpioId, MT3620Blink_GPIO_OutputMode_Type outputMode, MT3620Blink_GPIO_Value_Type initialValue);
extern /* static */ int32_t MT3620Blink_Interops_GPIO_SetValue(int32_t gpioFd, MT3620Blink_GPIO_Value_Type value);
extern /* static */ int32_t MT3620Blink_Interops_GPIO_OpenAsInput(int32_t gpioId);
extern /* static */ int32_t MT3620Blink_Interops_GPIO_GetValue(int32_t gpioFd, MT3620Blink_GPIO_Value_Type* value);
extern /* static */ int32_t MT3620Blink_Interops_epoll_create1(int32_t flags);
extern /* static */ int32_t MT3620Blink_Interops_epoll_ctl(int32_t epollfd, int32_t op, int32_t fd, MT3620Blink_epoll_event* ev);
extern /* static */ int32_t MT3620Blink_Interops_epoll_wait(int32_t epollfd, MT3620Blink_epoll_event* ev, int32_t maxevents, int32_t timeout);

#ifdef __cplusplus
}
#endif

//////////////////////////////////////////////////////////////////////////////////
// [9-3] Static field instances:

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.Application

///////////////////////////////////////
// [3] MT3620Blink.Application..ctor(MT3620Blink.Application this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Application__ctor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Application* stack0_0__;
} MT3620Blink_Application__ctor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Application__ctor(MT3620Blink_Application* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack1_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Application__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : Application.cs(8) */
    frame__.stack0_0__ = this__;
    /* IL_0001: ldc.i4.0                        : Application.cs(8) */
    stack1_0__ = 0;
    /* IL_0002: call MT3620Blink.Interops.epoll_create1 : Application.cs(8) */
    stack1_0__ = MT3620Blink_Interops_epoll_create1(stack1_0__);
    /* IL_0007: call MT3620Blink.Descriptor..ctor : Application.cs(8) */
    MT3620Blink_Descriptor__ctor((MT3620Blink_Descriptor*)frame__.stack0_0__, stack1_0__);
    /* IL_000c: nop                             : Application.cs(8) */
    /* IL_000d: nop  */
    /* IL_000e: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] MT3620Blink.Application.RegisterDescriptor(MT3620Blink.Application this__, MT3620Blink.Descriptor target)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Application_RegisterDescriptor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Descriptor* stack0_0__;
    MT3620Blink_Application* stack0_4__;
    MT3620Blink_Descriptor* stack2_3__;
} MT3620Blink_Application_RegisterDescriptor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Application_RegisterDescriptor(MT3620Blink_Application* this__, MT3620Blink_Descriptor* target)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

    System_Runtime_InteropServices_GCHandle handle;
    il2c_memset(&handle, 0x00, sizeof handle);
    MT3620Blink_epoll_event ev;
    il2c_memset(&ev, 0x00, sizeof ev);
    MT3620Blink_epoll_event local2__;
    il2c_memset(&local2__, 0x00, sizeof local2__);
    MT3620Blink_epoll_data_t local3__;
    il2c_memset(&local3__, 0x00, sizeof local3__);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    System_Runtime_InteropServices_GCHandle stack0_1__;
    MT3620Blink_epoll_event* stack0_2__;
    MT3620Blink_epoll_event stack0_3__;
    int32_t stack0_5__;
    int32_t stack1_0__;
    uint32_t stack1_1__;
    MT3620Blink_epoll_data_t* stack1_2__;
    MT3620Blink_epoll_data_t stack1_3__;
    System_Runtime_InteropServices_GCHandle stack2_0__;
    intptr_t stack2_1__;
    System_Runtime_InteropServices_NativePointer stack2_2__;
    int32_t stack2_4__;
    MT3620Blink_epoll_event* stack3_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Application_RegisterDescriptor_EXECUTION_FRAME__ frame__ =
        { NULL, 3 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Application.cs(13) */
    /* IL_0001: ldarg.1  */
    frame__.stack0_0__ = target;
    /* IL_0002: ldc.i4.3                        : Application.cs(14) */
    stack1_0__ = 3;
    /* IL_0003: call System.Runtime.InteropServices.GCHandle.Alloc : Application.cs(14) */
    stack0_1__ = System_Runtime_InteropServices_GCHandle_Alloc_1((System_Object*)frame__.stack0_0__, (System_Runtime_InteropServices_GCHandleType)stack1_0__);
    /* IL_0008: stloc.0                         : Application.cs(14) */
    handle = stack0_1__;
    /* IL_0009: ldloca.s local2__               : Application.cs(16) */
    stack0_2__ = &local2__;
    /* IL_000b: initobj MT3620Blink.epoll_event : Application.cs(16) */
    il2c_memset(stack0_2__, 0x00, sizeof *stack0_2__);
    /* IL_0011: ldloca.s local2__               : Application.cs(16) */
    stack0_2__ = &local2__;
    /* IL_0013: ldsfld MT3620Blink.Interops.EPOLLIN : Application.cs(16) */
    stack1_1__ = MT3620Blink_Interops_EPOLLIN;
    /* IL_0018: stfld MT3620Blink.epoll_event.events : Application.cs(16) */
    stack0_2__->events = stack1_1__;
    /* IL_001d: ldloca.s local2__               : Application.cs(16) */
    stack0_2__ = &local2__;
    /* IL_001f: ldloca.s local3__               : Application.cs(16) */
    stack1_2__ = &local3__;
    /* IL_0021: initobj MT3620Blink.epoll_data_t : Application.cs(16) */
    il2c_memset(stack1_2__, 0x00, sizeof *stack1_2__);
    /* IL_0027: ldloca.s local3__               : Application.cs(16) */
    stack1_2__ = &local3__;
    /* IL_0029: ldloc.0                         : Application.cs(16) */
    stack2_0__ = handle;
    /* IL_002a: call System.Runtime.InteropServices.GCHandle.ToIntPtr : Application.cs(16) */
    stack2_1__ = System_Runtime_InteropServices_GCHandle_ToIntPtr(stack2_0__);
    /* IL_002f: call System.Runtime.InteropServices.NativePointer.op_Implicit : Application.cs(16) */
    stack2_2__ = System_Runtime_InteropServices_NativePointer_op_Implicit(stack2_1__);
    /* IL_0034: stfld MT3620Blink.epoll_data_t.ptr : Application.cs(16) */
    stack1_2__->ptr = stack2_2__;
    /* IL_0039: ldloc.3                         : Application.cs(16) */
    stack1_3__ = local3__;
    /* IL_003a: stfld MT3620Blink.epoll_event.data : Application.cs(16) */
    stack0_2__->data = stack1_3__;
    /* IL_003f: ldloc.2                         : Application.cs(16) */
    stack0_3__ = local2__;
    /* IL_0040: stloc.1                         : Application.cs(16) */
    ev = stack0_3__;
    /* IL_0041: ldarg.0                         : Application.cs(21) */
    frame__.stack0_4__ = this__;
    /* IL_0042: call MT3620Blink.Descriptor.get_Identity : Application.cs(21) */
    stack0_5__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_4__);
    /* IL_0047: ldsfld MT3620Blink.Interops.EPOLL_CTL_ADD : Application.cs(21) */
    stack1_0__ = MT3620Blink_Interops_EPOLL_CTL_ADD;
    /* IL_004c: ldarg.1                         : Application.cs(21) */
    frame__.stack2_3__ = target;
    /* IL_004d: callvirt MT3620Blink.Descriptor.get_Identity : Application.cs(21) */
    stack2_4__ = MT3620Blink_Descriptor_get_Identity(il2c_adjusted_reference(frame__.stack2_3__));
    /* IL_0052: ldloca.s ev                     : Application.cs(21) */
    stack3_0__ = &ev;
    /* IL_0054: call MT3620Blink.Interops.epoll_ctl : Application.cs(21) */
    stack0_5__ = MT3620Blink_Interops_epoll_ctl(stack0_5__, stack1_0__, stack2_4__, stack3_0__);
    /* IL_0059: pop                             : Application.cs(21) */
    /* IL_005a: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] MT3620Blink.Application.UnregisterDescriptor(MT3620Blink.Application this__, MT3620Blink.Descriptor target)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Application_UnregisterDescriptor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Descriptor* stack0_0__;
    MT3620Blink_Application* stack0_4__;
    MT3620Blink_Descriptor* stack2_0__;
} MT3620Blink_Application_UnregisterDescriptor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Application_UnregisterDescriptor(MT3620Blink_Application* this__, MT3620Blink_Descriptor* target)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

    System_Runtime_InteropServices_GCHandle handle;
    il2c_memset(&handle, 0x00, sizeof handle);
    MT3620Blink_epoll_event ev;
    il2c_memset(&ev, 0x00, sizeof ev);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    System_Runtime_InteropServices_GCHandle stack0_1__;
    System_Runtime_InteropServices_GCHandle* stack0_2__;
    MT3620Blink_epoll_event* stack0_3__;
    int32_t stack0_5__;
    int32_t stack1_0__;
    int32_t stack2_1__;
    MT3620Blink_epoll_event* stack3_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Application_UnregisterDescriptor_EXECUTION_FRAME__ frame__ =
        { NULL, 3 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Application.cs(29) */
    /* IL_0001: ldarg.1  */
    frame__.stack0_0__ = target;
    /* IL_0002: ldc.i4.3                        : Application.cs(30) */
    stack1_0__ = 3;
    /* IL_0003: call System.Runtime.InteropServices.GCHandle.Alloc : Application.cs(30) */
    stack0_1__ = System_Runtime_InteropServices_GCHandle_Alloc_1((System_Object*)frame__.stack0_0__, (System_Runtime_InteropServices_GCHandleType)stack1_0__);
    /* IL_0008: stloc.0                         : Application.cs(30) */
    handle = stack0_1__;
    /* IL_0009: ldloca.s handle                 : Application.cs(31) */
    stack0_2__ = &handle;
    /* IL_000b: call System.Runtime.InteropServices.GCHandle.Free : Application.cs(31) */
    System_Runtime_InteropServices_GCHandle_Free(stack0_2__);
    /* IL_0010: nop                             : Application.cs(31) */
    /* IL_0011: ldloca.s ev */
    stack0_3__ = &ev;
    /* IL_0013: initobj MT3620Blink.epoll_event : Application.cs(33) */
    il2c_memset(stack0_3__, 0x00, sizeof *stack0_3__);
    /* IL_0019: ldarg.0                         : Application.cs(35) */
    frame__.stack0_4__ = this__;
    /* IL_001a: call MT3620Blink.Descriptor.get_Identity : Application.cs(35) */
    stack0_5__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_4__);
    /* IL_001f: ldsfld MT3620Blink.Interops.EPOLL_CTL_DEL : Application.cs(35) */
    stack1_0__ = MT3620Blink_Interops_EPOLL_CTL_DEL;
    /* IL_0024: ldarg.1                         : Application.cs(35) */
    frame__.stack2_0__ = target;
    /* IL_0025: callvirt MT3620Blink.Descriptor.get_Identity : Application.cs(35) */
    stack2_1__ = MT3620Blink_Descriptor_get_Identity(il2c_adjusted_reference(frame__.stack2_0__));
    /* IL_002a: ldloca.s ev                     : Application.cs(35) */
    stack3_0__ = &ev;
    /* IL_002c: call MT3620Blink.Interops.epoll_ctl : Application.cs(35) */
    stack0_5__ = MT3620Blink_Interops_epoll_ctl(stack0_5__, stack1_0__, stack2_1__, stack3_0__);
    /* IL_0031: pop                             : Application.cs(35) */
    /* IL_0032: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] MT3620Blink.Application.Run(MT3620Blink.Application this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Application_Run_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Descriptor* target;
    MT3620Blink_Application* stack0_2__;
    System_Object* stack0_10__;
    MT3620Blink_Descriptor* stack0_11__;
} MT3620Blink_Application_Run_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Application_Run(MT3620Blink_Application* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

    MT3620Blink_epoll_event ev;
    il2c_memset(&ev, 0x00, sizeof ev);
    int32_t numEventsOccurred = 0;
    bool local2__ = false;
    bool local3__ = false;
    System_Runtime_InteropServices_GCHandle handle;
    il2c_memset(&handle, 0x00, sizeof handle);
    bool local6__ = false;

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack0_0__;
    MT3620Blink_epoll_event* stack0_1__;
    bool stack0_3__;
    MT3620Blink_epoll_event stack0_4__;
    MT3620Blink_epoll_data_t stack0_5__;
    System_Runtime_InteropServices_NativePointer stack0_6__;
    intptr_t stack0_7__;
    System_Runtime_InteropServices_GCHandle stack0_8__;
    System_Runtime_InteropServices_GCHandle* stack0_9__;
    MT3620Blink_epoll_event* stack1_0__;
    int32_t stack1_1__;
    int32_t stack2_0__;
    int32_t stack3_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Application_Run_EXECUTION_FRAME__ frame__ =
        { NULL, 4 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Application.cs(43) */
    /* IL_0001: br.s IL_005f */
    goto IL_005f;
IL_0003:
    /* IL_0003: nop                             : Application.cs(45) */
    /* IL_0004: ldloca.s ev */
    stack0_1__ = &ev;
    /* IL_0006: initobj MT3620Blink.epoll_event : Application.cs(46) */
    il2c_memset(stack0_1__, 0x00, sizeof *stack0_1__);
    /* IL_000c: ldarg.0                         : Application.cs(47) */
    frame__.stack0_2__ = this__;
    /* IL_000d: call MT3620Blink.Descriptor.get_Identity : Application.cs(47) */
    stack0_0__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_2__);
    /* IL_0012: ldloca.s ev                     : Application.cs(47) */
    stack1_0__ = &ev;
    /* IL_0014: ldc.i4.1                        : Application.cs(47) */
    stack2_0__ = 1;
    /* IL_0015: ldc.i4.m1                       : Application.cs(47) */
    stack3_0__ = -1;
    /* IL_0016: call MT3620Blink.Interops.epoll_wait : Application.cs(47) */
    stack0_0__ = MT3620Blink_Interops_epoll_wait(stack0_0__, stack1_0__, stack2_0__, stack3_0__);
    /* IL_001b: stloc.1                         : Application.cs(47) */
    numEventsOccurred = stack0_0__;
    /* IL_001c: ldloc.1                         : Application.cs(49) */
    stack0_0__ = numEventsOccurred;
    /* IL_001d: ldc.i4.m1                       : Application.cs(49) */
    stack1_1__ = -1;
    /* IL_001e: ceq                             : Application.cs(49) */
    stack0_0__ = ((int32_t)stack0_0__ == (int32_t)stack1_1__) ? 1 : 0;
    /* IL_0020: stloc.2                         : Application.cs(49) */
    local2__ = (stack0_0__) ? true : false;
    /* IL_0021: ldloc.2                         : Application.cs(49) */
    stack0_3__ = local2__;
    /* IL_0022: brfalse.s IL_0027               : Application.cs(49) */
    if (!(stack0_3__)) goto IL_0027;
    /* IL_0024: nop                             : Application.cs(50) */
    /* IL_0025: br.s IL_0064 */
    goto IL_0064;
IL_0027:
    /* IL_0027: ldloc.1                         : Application.cs(53) */
    stack0_0__ = numEventsOccurred;
    /* IL_0028: ldc.i4.1                        : Application.cs(53) */
    stack1_1__ = 1;
    /* IL_0029: ceq                             : Application.cs(53) */
    stack0_0__ = ((int32_t)stack0_0__ == (int32_t)stack1_1__) ? 1 : 0;
    /* IL_002b: stloc.3                         : Application.cs(53) */
    local3__ = (stack0_0__) ? true : false;
    /* IL_002c: ldloc.3                         : Application.cs(53) */
    stack0_3__ = local3__;
    /* IL_002d: brfalse.s IL_005e               : Application.cs(53) */
    if (!(stack0_3__)) goto IL_005e;
    /* IL_002f: nop                             : Application.cs(54) */
    /* IL_0030: ldloc.0  */
    stack0_4__ = ev;
    /* IL_0031: ldfld MT3620Blink.epoll_event.data : Application.cs(55) */
    stack0_5__ = stack0_4__.data;
    /* IL_0036: ldfld MT3620Blink.epoll_data_t.ptr : Application.cs(55) */
    stack0_6__ = stack0_5__.ptr;
    /* IL_003b: call System.Runtime.InteropServices.NativePointer.op_Implicit : Application.cs(55) */
    stack0_7__ = System_Runtime_InteropServices_NativePointer_op_Implicit_1(stack0_6__);
    /* IL_0040: call System.Runtime.InteropServices.GCHandle.FromIntPtr : Application.cs(55) */
    stack0_8__ = System_Runtime_InteropServices_GCHandle_FromIntPtr(stack0_7__);
    /* IL_0045: stloc.s handle                  : Application.cs(55) */
    handle = stack0_8__;
    /* IL_0047: ldloca.s handle                 : Application.cs(56) */
    stack0_9__ = &handle;
    /* IL_0049: call System.Runtime.InteropServices.GCHandle.get_Target : Application.cs(56) */
    frame__.stack0_10__ = System_Runtime_InteropServices_GCHandle_get_Target(stack0_9__);
    /* IL_004e: castclass MT3620Blink.Descriptor : Application.cs(56) */
    frame__.stack0_11__ = il2c_castclass(frame__.stack0_10__, MT3620Blink_Descriptor);
    /* IL_0053: stloc.s target                  : Application.cs(56) */
    frame__.target = frame__.stack0_11__;
    /* IL_0055: ldloc.s target                  : Application.cs(57) */
    frame__.stack0_11__ = frame__.target;
    /* IL_0057: callvirt MT3620Blink.Descriptor.OnRaised : Application.cs(57) */
    frame__.stack0_11__->vptr0__->OnRaised(il2c_adjusted_reference(frame__.stack0_11__));
    /* IL_005c: nop                             : Application.cs(57) */
    /* IL_005d: nop  */
IL_005e:
    /* IL_005e: nop  */
IL_005f:
    /* IL_005f: ldc.i4.1  */
    stack0_0__ = 1;
    /* IL_0060: stloc.s local6__                : Application.cs(44) */
    local6__ = (stack0_0__) ? true : false;
    /* IL_0062: br.s IL_0003                    : Application.cs(44) */
    goto IL_0003;
IL_0064:
    /* IL_0064: ret                             : Application.cs(60) */
    il2c_unlink_execution_frame(&frame__);
    return;
}

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as MT3620Blink.Descriptor)

// [7-13] VTable for System.IDisposable
System_IDisposable_VTABLE_DECL__ MT3620Blink_Application_System_IDisposable_VTABLE__ = {
    il2c_adjustor_offset(MT3620Blink_Application, System_IDisposable),
    (void (*)(void*))MT3620Blink_Descriptor_Dispose,
};

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_Application, "MT3620Blink.Application", IL2C_TYPE_REFERENCE, sizeof(MT3620Blink_Application), MT3620Blink_Descriptor, 0, 1)
    IL2C_RUNTIME_TYPE_INTERFACE(MT3620Blink_Application, System_IDisposable)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.Descriptor

///////////////////////////////////////
// [3] MT3620Blink.Descriptor..ctor(MT3620Blink.Descriptor this__, System.Int32 fd)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Descriptor__ctor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Descriptor* stack0_0__;
    System_String* stack0_3__;
    System_Exception* stack0_4__;
    il2c_boxedtype(System_Int32)* stack1_1__;
} MT3620Blink_Descriptor__ctor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Descriptor__ctor(MT3620Blink_Descriptor* this__, int32_t fd)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

    bool local0__ = false;

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack0_1__;
    bool stack0_2__;
    int32_t stack1_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Descriptor__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 4 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : Descriptor.cs(10) */
    frame__.stack0_0__ = this__;
    /* IL_0001: call System.Object..ctor        : Descriptor.cs(10) */
    System_Object__ctor((System_Object*)frame__.stack0_0__);
    /* IL_0006: nop                             : Descriptor.cs(10) */
    /* IL_0007: nop  */
    /* IL_0008: ldarg.1  */
    stack0_1__ = fd;
    /* IL_0009: ldc.i4.0                        : Descriptor.cs(12) */
    stack1_0__ = 0;
    /* IL_000a: clt                             : Descriptor.cs(12) */
    stack0_1__ = ((int32_t)stack0_1__ < (int32_t)stack1_0__) ? 1 : 0;
    /* IL_000c: stloc.0                         : Descriptor.cs(12) */
    local0__ = (stack0_1__) ? true : false;
    /* IL_000d: ldloc.0                         : Descriptor.cs(12) */
    stack0_2__ = local0__;
    /* IL_000e: brfalse.s IL_0027               : Descriptor.cs(12) */
    if (!(stack0_2__)) goto IL_0027;
    /* IL_0010: nop                             : Descriptor.cs(13) */
    /* IL_0011: ldstr "Invalid descriptor: " */
    frame__.stack0_3__ = string0__;
    /* IL_0016: ldarg.1                         : Descriptor.cs(14) */
    stack1_0__ = fd;
    /* IL_0017: box System.Int32                : Descriptor.cs(14) */
    frame__.stack1_1__ = il2c_box(&stack1_0__, System_Int32);
    /* IL_001c: call System.String.Concat       : Descriptor.cs(14) */
    frame__.stack0_3__ = System_String_Concat_4((System_Object*)frame__.stack0_3__, (System_Object*)frame__.stack1_1__);
    /* IL_0021: newobj System.Exception..ctor   : Descriptor.cs(14) */
    frame__.stack0_4__ = il2c_get_uninitialized_object(System_Exception);
    System_Exception__ctor_1(frame__.stack0_4__, frame__.stack0_3__);
    /* IL_0026: throw                           : Descriptor.cs(14) */
    il2c_throw(frame__.stack0_4__);
IL_0027:
    /* IL_0027: ldarg.0                         : Descriptor.cs(16) */
    frame__.stack0_0__ = this__;
    /* IL_0028: ldarg.1                         : Descriptor.cs(16) */
    stack1_0__ = fd;
    /* IL_0029: call MT3620Blink.Descriptor.set_Identity : Descriptor.cs(16) */
    MT3620Blink_Descriptor_set_Identity(frame__.stack0_0__, stack1_0__);
    /* IL_002e: nop                             : Descriptor.cs(16) */
    /* IL_002f: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] Virtual: MT3620Blink.Descriptor.Dispose(MT3620Blink.Descriptor this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Descriptor_Dispose_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Descriptor* stack0_0__;
} MT3620Blink_Descriptor_Dispose_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Descriptor_Dispose(MT3620Blink_Descriptor* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

    bool local0__ = false;

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack0_1__;
    bool stack0_2__;
    int32_t stack1_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Descriptor_Dispose_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Descriptor.cs(20) */
    /* IL_0001: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0002: call MT3620Blink.Descriptor.get_Identity : Descriptor.cs(21) */
    stack0_1__ = MT3620Blink_Descriptor_get_Identity(frame__.stack0_0__);
    /* IL_0007: ldc.i4.0                        : Descriptor.cs(21) */
    stack1_0__ = 0;
    /* IL_0008: clt                             : Descriptor.cs(21) */
    stack0_1__ = ((int32_t)stack0_1__ < (int32_t)stack1_0__) ? 1 : 0;
    /* IL_000a: ldc.i4.0                        : Descriptor.cs(21) */
    stack1_0__ = 0;
    /* IL_000b: ceq                             : Descriptor.cs(21) */
    stack0_1__ = ((int32_t)stack0_1__ == (int32_t)stack1_0__) ? 1 : 0;
    /* IL_000d: stloc.0                         : Descriptor.cs(21) */
    local0__ = (stack0_1__) ? true : false;
    /* IL_000e: ldloc.0                         : Descriptor.cs(21) */
    stack0_2__ = local0__;
    /* IL_000f: brfalse.s IL_0027               : Descriptor.cs(21) */
    if (!(stack0_2__)) goto IL_0027;
    /* IL_0011: nop                             : Descriptor.cs(22) */
    /* IL_0012: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0013: call MT3620Blink.Descriptor.get_Identity : Descriptor.cs(23) */
    stack0_1__ = MT3620Blink_Descriptor_get_Identity(frame__.stack0_0__);
    /* IL_0018: call MT3620Blink.Interops.close : Descriptor.cs(23) */
    stack0_1__ = MT3620Blink_Interops_close(stack0_1__);
    /* IL_001d: pop                             : Descriptor.cs(23) */
    /* IL_001e: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_001f: ldc.i4.m1                       : Descriptor.cs(24) */
    stack1_0__ = -1;
    /* IL_0020: call MT3620Blink.Descriptor.set_Identity : Descriptor.cs(24) */
    MT3620Blink_Descriptor_set_Identity(frame__.stack0_0__, stack1_0__);
    /* IL_0025: nop                             : Descriptor.cs(24) */
    /* IL_0026: nop  */
IL_0027:
    /* IL_0027: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] MT3620Blink.Descriptor.get_Identity(MT3620Blink.Descriptor this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Descriptor_get_Identity_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Descriptor* stack0_0__;
} MT3620Blink_Descriptor_get_Identity_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

int32_t MT3620Blink_Descriptor_get_Identity(MT3620Blink_Descriptor* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack0_1__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Descriptor_get_Identity_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : Descriptor.cs(28) */
    frame__.stack0_0__ = this__;
    /* IL_0001: ldfld MT3620Blink.Descriptor.<Identity>k__BackingField : Descriptor.cs(28) */
    stack0_1__ = frame__.stack0_0__->_Identity_k__BackingField;
    /* IL_0006: ret                             : Descriptor.cs(28) */
    il2c_unlink_execution_frame(&frame__);
    return stack0_1__;
}

///////////////////////////////////////
// [3] MT3620Blink.Descriptor.set_Identity(MT3620Blink.Descriptor this__, System.Int32 value)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Descriptor_set_Identity_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Descriptor* stack0_0__;
} MT3620Blink_Descriptor_set_Identity_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Descriptor_set_Identity(MT3620Blink_Descriptor* this__, int32_t value)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack1_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Descriptor_set_Identity_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : Descriptor.cs(28) */
    frame__.stack0_0__ = this__;
    /* IL_0001: ldarg.1                         : Descriptor.cs(28) */
    stack1_0__ = value;
    /* IL_0002: stfld MT3620Blink.Descriptor.<Identity>k__BackingField : Descriptor.cs(28) */
    frame__.stack0_0__->_Identity_k__BackingField = stack1_0__;
    /* IL_0007: ret                             : Descriptor.cs(28) */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] Virtual: MT3620Blink.Descriptor.OnRaised(MT3620Blink.Descriptor this__)

//-------------------
// [3-2] Function body:

void MT3620Blink_Descriptor_OnRaised(MT3620Blink_Descriptor* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Descriptor.cs(31) */
    /* IL_0001: ret  */
    return;
}

//////////////////////
// [7] Runtime helpers:

// [7-10-2] VTable
MT3620Blink_Descriptor_VTABLE_DECL__ MT3620Blink_Descriptor_VTABLE__ = {
    0, // Adjustor offset
    (bool (*)(void*, System_Object*))System_Object_Equals,
    (void (*)(void*))System_Object_Finalize,
    (int32_t (*)(void*))System_Object_GetHashCode,
    (System_String* (*)(void*))System_Object_ToString,
    (void (*)(void*))MT3620Blink_Descriptor_Dispose,
    (void (*)(void*))MT3620Blink_Descriptor_OnRaised,
};

// [7-13] VTable for System.IDisposable
System_IDisposable_VTABLE_DECL__ MT3620Blink_Descriptor_System_IDisposable_VTABLE__ = {
    il2c_adjustor_offset(MT3620Blink_Descriptor, System_IDisposable),
    (void (*)(void*))MT3620Blink_Descriptor_Dispose,
};

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_Descriptor, "MT3620Blink.Descriptor", IL2C_TYPE_REFERENCE, sizeof(MT3620Blink_Descriptor), System_Object, 0, 1)
    IL2C_RUNTIME_TYPE_INTERFACE(MT3620Blink_Descriptor, System_IDisposable)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.GpioInput

///////////////////////////////////////
// [3] MT3620Blink.GpioInput..ctor(MT3620Blink.GpioInput this__, System.Int32 gpioId)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_GpioInput__ctor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_GpioInput* stack0_0__;
} MT3620Blink_GpioInput__ctor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_GpioInput__ctor(MT3620Blink_GpioInput* this__, int32_t gpioId)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack1_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_GpioInput__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : GpioInput.cs(6) */
    frame__.stack0_0__ = this__;
    /* IL_0001: ldarg.1                         : GpioInput.cs(6) */
    stack1_0__ = gpioId;
    /* IL_0002: call MT3620Blink.Interops.GPIO_OpenAsInput : GpioInput.cs(6) */
    stack1_0__ = MT3620Blink_Interops_GPIO_OpenAsInput(stack1_0__);
    /* IL_0007: call MT3620Blink.Descriptor..ctor : GpioInput.cs(6) */
    MT3620Blink_Descriptor__ctor((MT3620Blink_Descriptor*)frame__.stack0_0__, stack1_0__);
    /* IL_000c: nop                             : GpioInput.cs(6) */
    /* IL_000d: nop  */
    /* IL_000e: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] MT3620Blink.GpioInput.get_Value(MT3620Blink.GpioInput this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_GpioInput_get_Value_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_GpioInput* stack0_0__;
} MT3620Blink_GpioInput_get_Value_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

bool MT3620Blink_GpioInput_get_Value(MT3620Blink_GpioInput* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

    MT3620Blink_GPIO_Value_Type value;
    il2c_memset(&value, 0x00, sizeof value);
    bool local1__ = false;

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack0_1__;
    MT3620Blink_GPIO_Value_Type stack0_2__;
    bool stack0_3__;
    MT3620Blink_GPIO_Value_Type* stack1_0__;
    int32_t stack1_1__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_GpioInput_get_Value_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : GpioInput.cs(13) */
    /* IL_0001: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0002: call MT3620Blink.Descriptor.get_Identity : GpioInput.cs(14) */
    stack0_1__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_0__);
    /* IL_0007: ldloca.s value                  : GpioInput.cs(14) */
    stack1_0__ = &value;
    /* IL_0009: call MT3620Blink.Interops.GPIO_GetValue : GpioInput.cs(14) */
    stack0_1__ = MT3620Blink_Interops_GPIO_GetValue(stack0_1__, stack1_0__);
    /* IL_000e: pop                             : GpioInput.cs(14) */
    /* IL_000f: ldloc.0  */
    stack0_2__ = value;
    /* IL_0010: ldc.i4.1                        : GpioInput.cs(15) */
    stack1_1__ = 1;
    /* IL_0011: ceq                             : GpioInput.cs(15) */
    stack0_1__ = ((int32_t)stack0_2__ == (int32_t)stack1_1__) ? 1 : 0;
    /* IL_0013: stloc.1                         : GpioInput.cs(15) */
    local1__ = (stack0_1__) ? true : false;
    /* IL_0014: br.s IL_0016                    : GpioInput.cs(15) */
    goto IL_0016;
IL_0016:
    /* IL_0016: ldloc.1                         : GpioInput.cs(16) */
    stack0_3__ = local1__;
    /* IL_0017: ret                             : GpioInput.cs(16) */
    il2c_unlink_execution_frame(&frame__);
    return stack0_3__;
}

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as MT3620Blink.Descriptor)

// [7-13] VTable for System.IDisposable
System_IDisposable_VTABLE_DECL__ MT3620Blink_GpioInput_System_IDisposable_VTABLE__ = {
    il2c_adjustor_offset(MT3620Blink_GpioInput, System_IDisposable),
    (void (*)(void*))MT3620Blink_Descriptor_Dispose,
};

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_GpioInput, "MT3620Blink.GpioInput", IL2C_TYPE_REFERENCE, sizeof(MT3620Blink_GpioInput), MT3620Blink_Descriptor, 0, 1)
    IL2C_RUNTIME_TYPE_INTERFACE(MT3620Blink_GpioInput, System_IDisposable)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.GpioOutput

///////////////////////////////////////
// [3] MT3620Blink.GpioOutput..ctor(MT3620Blink.GpioOutput this__, System.Int32 gpioId, MT3620Blink.GPIO_OutputMode_Type type, System.Boolean initialValue)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_GpioOutput__ctor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_GpioOutput* stack0_0__;
} MT3620Blink_GpioOutput__ctor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_GpioOutput__ctor(MT3620Blink_GpioOutput* this__, int32_t gpioId, MT3620Blink_GPIO_OutputMode_Type type, bool initialValue)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack1_0__;
    MT3620Blink_GPIO_OutputMode_Type stack2_0__;
    bool stack3_0__;
    int32_t stack3_1__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_GpioOutput__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : GpioOutput.cs(6) */
    frame__.stack0_0__ = this__;
    /* IL_0001: ldarg.1                         : GpioOutput.cs(6) */
    stack1_0__ = gpioId;
    /* IL_0002: ldarg.2                         : GpioOutput.cs(6) */
    stack2_0__ = type;
    /* IL_0003: ldarg.3                         : GpioOutput.cs(6) */
    stack3_0__ = initialValue;
    /* IL_0004: brtrue.s IL_0009                : GpioOutput.cs(6) */
    if (stack3_0__) goto IL_0009;
    /* IL_0006: ldc.i4.0                        : GpioOutput.cs(6) */
    stack3_1__ = 0;
    /* IL_0007: br.s IL_000a                    : GpioOutput.cs(6) */
    goto IL_000a;
IL_0009:
    /* IL_0009: ldc.i4.1                        : GpioOutput.cs(6) */
    stack3_1__ = 1;
IL_000a:
    /* IL_000a: call MT3620Blink.Interops.GPIO_OpenAsOutput : GpioOutput.cs(6) */
    stack1_0__ = MT3620Blink_Interops_GPIO_OpenAsOutput(stack1_0__, stack2_0__, (MT3620Blink_GPIO_Value_Type)stack3_1__);
    /* IL_000f: call MT3620Blink.Descriptor..ctor : GpioOutput.cs(6) */
    MT3620Blink_Descriptor__ctor((MT3620Blink_Descriptor*)frame__.stack0_0__, stack1_0__);
    /* IL_0014: nop                             : GpioOutput.cs(6) */
    /* IL_0015: nop  */
    /* IL_0016: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] MT3620Blink.GpioOutput.SetValue(MT3620Blink.GpioOutput this__, System.Boolean value)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_GpioOutput_SetValue_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_GpioOutput* stack0_0__;
} MT3620Blink_GpioOutput_SetValue_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_GpioOutput_SetValue(MT3620Blink_GpioOutput* this__, bool value)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack0_1__;
    bool stack1_0__;
    int32_t stack1_1__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_GpioOutput_SetValue_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : GpioOutput.cs(14) */
    frame__.stack0_0__ = this__;
    /* IL_0001: call MT3620Blink.Descriptor.get_Identity : GpioOutput.cs(14) */
    stack0_1__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_0__);
    /* IL_0006: ldarg.1                         : GpioOutput.cs(14) */
    stack1_0__ = value;
    /* IL_0007: brtrue.s IL_000c                : GpioOutput.cs(14) */
    if (stack1_0__) goto IL_000c;
    /* IL_0009: ldc.i4.0                        : GpioOutput.cs(14) */
    stack1_1__ = 0;
    /* IL_000a: br.s IL_000d                    : GpioOutput.cs(14) */
    goto IL_000d;
IL_000c:
    /* IL_000c: ldc.i4.1                        : GpioOutput.cs(14) */
    stack1_1__ = 1;
IL_000d:
    /* IL_000d: call MT3620Blink.Interops.GPIO_SetValue : GpioOutput.cs(14) */
    stack0_1__ = MT3620Blink_Interops_GPIO_SetValue(stack0_1__, (MT3620Blink_GPIO_Value_Type)stack1_1__);
    /* IL_0012: pop                             : GpioOutput.cs(14) */
    /* IL_0013: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as MT3620Blink.Descriptor)

// [7-13] VTable for System.IDisposable
System_IDisposable_VTABLE_DECL__ MT3620Blink_GpioOutput_System_IDisposable_VTABLE__ = {
    il2c_adjustor_offset(MT3620Blink_GpioOutput, System_IDisposable),
    (void (*)(void*))MT3620Blink_Descriptor_Dispose,
};

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_GpioOutput, "MT3620Blink.GpioOutput", IL2C_TYPE_REFERENCE, sizeof(MT3620Blink_GpioOutput), MT3620Blink_Descriptor, 0, 1)
    IL2C_RUNTIME_TYPE_INTERFACE(MT3620Blink_GpioOutput, System_IDisposable)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.timespec

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.ValueType)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_timespec, "MT3620Blink.timespec", IL2C_TYPE_VALUE, sizeof(MT3620Blink_timespec), System_ValueType, 0, 0)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.itimerspec

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.ValueType)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_itimerspec, "MT3620Blink.itimerspec", IL2C_TYPE_VALUE, sizeof(MT3620Blink_itimerspec), System_ValueType, 2, 0)
    IL2C_RUNTIME_TYPE_MARK_TARGET_FOR_VALUE(MT3620Blink_itimerspec, MT3620Blink_timespec, it_interval)
    IL2C_RUNTIME_TYPE_MARK_TARGET_FOR_VALUE(MT3620Blink_itimerspec, MT3620Blink_timespec, it_value)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.GPIO_OutputMode_Type

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.Enum)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_GPIO_OutputMode_Type, "MT3620Blink.GPIO_OutputMode_Type", IL2C_TYPE_INTEGER, sizeof(MT3620Blink_GPIO_OutputMode_Type), System_Enum, 0, 0)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.GPIO_Value_Type

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.Enum)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_GPIO_Value_Type, "MT3620Blink.GPIO_Value_Type", IL2C_TYPE_INTEGER, sizeof(MT3620Blink_GPIO_Value_Type), System_Enum, 0, 0)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.epoll_data_t

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.ValueType)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_epoll_data_t, "MT3620Blink.epoll_data_t", IL2C_TYPE_VALUE, sizeof(MT3620Blink_epoll_data_t), System_ValueType, 1, 0)
    IL2C_RUNTIME_TYPE_MARK_TARGET_FOR_VALUE(MT3620Blink_epoll_data_t, System_Runtime_InteropServices_NativePointer, ptr)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.epoll_event

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.ValueType)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_epoll_event, "MT3620Blink.epoll_event", IL2C_TYPE_VALUE, sizeof(MT3620Blink_epoll_event), System_ValueType, 1, 0)
    IL2C_RUNTIME_TYPE_MARK_TARGET_FOR_VALUE(MT3620Blink_epoll_event, MT3620Blink_epoll_data_t, data)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.Interops

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.close(System.Int32 fd)

int32_t MT3620Blink_Interops_close(int32_t fd)
{
    return close(fd);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.nanosleep(MT3620Blink.timespec& req, MT3620Blink.timespec& rem)

void MT3620Blink_Interops_nanosleep(MT3620Blink_timespec* req, MT3620Blink_timespec* rem)
{
    nanosleep(req, rem);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.timerfd_create(System.Int32 clockid, System.Int32 flags)

int32_t MT3620Blink_Interops_timerfd_create(int32_t clockid, int32_t flags)
{
    return timerfd_create(clockid, flags);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.timerfd_settime(System.Int32 fd, System.Int32 flags, MT3620Blink.itimerspec& new_value, MT3620Blink.itimerspec& old_value)

int32_t MT3620Blink_Interops_timerfd_settime(int32_t fd, int32_t flags, MT3620Blink_itimerspec* new_value, MT3620Blink_itimerspec* old_value)
{
    return timerfd_settime(fd, flags, new_value, old_value);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.timerfd_read(System.Int32 fd, System.UInt64& timerData, System.UIntPtr size)

int32_t MT3620Blink_Interops_timerfd_read(int32_t fd, uint64_t* timerData, uintptr_t size)
{
    return read(fd, timerData, size);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.GPIO_OpenAsOutput(System.Int32 gpioId, MT3620Blink.GPIO_OutputMode_Type outputMode, MT3620Blink.GPIO_Value_Type initialValue)

int32_t MT3620Blink_Interops_GPIO_OpenAsOutput(int32_t gpioId, MT3620Blink_GPIO_OutputMode_Type outputMode, MT3620Blink_GPIO_Value_Type initialValue)
{
    return GPIO_OpenAsOutput(gpioId, outputMode, initialValue);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.GPIO_SetValue(System.Int32 gpioFd, MT3620Blink.GPIO_Value_Type value)

int32_t MT3620Blink_Interops_GPIO_SetValue(int32_t gpioFd, MT3620Blink_GPIO_Value_Type value)
{
    return GPIO_SetValue(gpioFd, value);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.GPIO_OpenAsInput(System.Int32 gpioId)

int32_t MT3620Blink_Interops_GPIO_OpenAsInput(int32_t gpioId)
{
    return GPIO_OpenAsInput(gpioId);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.GPIO_GetValue(System.Int32 gpioFd, MT3620Blink.GPIO_Value_Type& value)

int32_t MT3620Blink_Interops_GPIO_GetValue(int32_t gpioFd, MT3620Blink_GPIO_Value_Type* value)
{
    return GPIO_GetValue(gpioFd, value);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.epoll_create1(System.Int32 flags)

int32_t MT3620Blink_Interops_epoll_create1(int32_t flags)
{
    return epoll_create1(flags);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.epoll_ctl(System.Int32 epollfd, System.Int32 op, System.Int32 fd, MT3620Blink.epoll_event& ev)

int32_t MT3620Blink_Interops_epoll_ctl(int32_t epollfd, int32_t op, int32_t fd, MT3620Blink_epoll_event* ev)
{
    return epoll_ctl(epollfd, op, fd, ev);
}

///////////////////////////////////////
// [6] IL2C/Invoke: MT3620Blink.Interops.epoll_wait(System.Int32 epollfd, MT3620Blink.epoll_event& ev, System.Int32 maxevents, System.Int32 timeout)

int32_t MT3620Blink_Interops_epoll_wait(int32_t epollfd, MT3620Blink_epoll_event* ev, int32_t maxevents, int32_t timeout)
{
    return epoll_wait(epollfd, ev, maxevents, timeout);
}

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.Object)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_Interops, "MT3620Blink.Interops", IL2C_TYPE_REFERENCE, sizeof(MT3620Blink_Interops), System_Object, 0, 0)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.Program

///////////////////////////////////////
// [3] MT3620Blink.Program.Main()

//-------------------
// [3-1] Exception filters:

static int16_t MT3620Blink_Program_Main_ExceptionFilter0__(System_Exception* ex)
{
    il2c_assert(ex != NULL);
    return IL2C_FILTER_FINALLY;  // Not matched (will go to finally)
}

static int16_t MT3620Blink_Program_Main_ExceptionFilter1__(System_Exception* ex)
{
    il2c_assert(ex != NULL);
    return IL2C_FILTER_FINALLY;  // Not matched (will go to finally)
}

static int16_t MT3620Blink_Program_Main_ExceptionFilter2__(System_Exception* ex)
{
    il2c_assert(ex != NULL);
    return IL2C_FILTER_FINALLY;  // Not matched (will go to finally)
}

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Program_Main_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Application* epoll;
    MT3620Blink_Program_GpioBlinker* ledBlinker;
    MT3620Blink_Program_GpioPoller* buttonPoller;
    MT3620Blink_Application* stack0_0__;
    MT3620Blink_Program_GpioBlinker* stack0_2__;
    MT3620Blink_Program_GpioPoller* stack0_3__;
    MT3620Blink_Program_GpioBlinker* stack1_0__;
    MT3620Blink_Program_GpioPoller* stack1_1__;
} MT3620Blink_Program_Main_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

int32_t MT3620Blink_Program_Main(void)
{
    //-------------------
    // [3-3] Local variables (!objref):

    volatile int32_t local3__ = 0;

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack0_1__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Program_Main_EXECUTION_FRAME__ frame__ =
        { NULL, 8 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Program.cs(79) */
    /* IL_0001: newobj MT3620Blink.Application..ctor */
    frame__.stack0_0__ = il2c_get_uninitialized_object(MT3620Blink_Application);
    MT3620Blink_Application__ctor(frame__.stack0_0__);
    /* IL_0006: stloc.0                         : Program.cs(80) */
    frame__.epoll = frame__.stack0_0__;
    il2c_try(nest0, MT3620Blink_Program_Main_ExceptionFilter0__)
    {
        /* IL_0007: nop                             : Program.cs(81) */
        /* IL_0008: ldsfld MT3620Blink.Interops.MT3620_RDB_LED1_RED */
        stack0_1__ = MT3620Blink_Interops_MT3620_RDB_LED1_RED;
        /* IL_000d: newobj MT3620Blink.Program.GpioBlinker..ctor : Program.cs(82) */
        frame__.stack0_2__ = il2c_get_uninitialized_object(MT3620Blink_Program_GpioBlinker);
        MT3620Blink_Program_GpioBlinker__ctor(frame__.stack0_2__, stack0_1__);
        /* IL_0012: stloc.1                         : Program.cs(82) */
        frame__.ledBlinker = frame__.stack0_2__;
        il2c_try(nest1, MT3620Blink_Program_Main_ExceptionFilter1__)
        {
            /* IL_0013: nop                             : Program.cs(83) */
            /* IL_0014: ldsfld MT3620Blink.Interops.MT3620_RDB_BUTTON_A */
            stack0_1__ = MT3620Blink_Interops_MT3620_RDB_BUTTON_A;
            /* IL_0019: ldloc.1                         : Program.cs(84) */
            frame__.stack1_0__ = frame__.ledBlinker;
            /* IL_001a: newobj MT3620Blink.Program.GpioPoller..ctor : Program.cs(84) */
            frame__.stack0_3__ = il2c_get_uninitialized_object(MT3620Blink_Program_GpioPoller);
            MT3620Blink_Program_GpioPoller__ctor(frame__.stack0_3__, stack0_1__, frame__.stack1_0__);
            /* IL_001f: stloc.2                         : Program.cs(84) */
            frame__.buttonPoller = frame__.stack0_3__;
            il2c_try(nest2, MT3620Blink_Program_Main_ExceptionFilter2__)
            {
                /* IL_0020: nop                             : Program.cs(85) */
                /* IL_0021: ldloc.0  */
                frame__.stack0_0__ = frame__.epoll;
                /* IL_0022: ldloc.1                         : Program.cs(86) */
                frame__.stack1_0__ = frame__.ledBlinker;
                /* IL_0023: callvirt MT3620Blink.Application.RegisterDescriptor : Program.cs(86) */
                MT3620Blink_Application_RegisterDescriptor(il2c_adjusted_reference(frame__.stack0_0__), (MT3620Blink_Descriptor*)frame__.stack1_0__);
                /* IL_0028: nop                             : Program.cs(86) */
                /* IL_0029: ldloc.0  */
                frame__.stack0_0__ = frame__.epoll;
                /* IL_002a: ldloc.2                         : Program.cs(87) */
                frame__.stack1_1__ = frame__.buttonPoller;
                /* IL_002b: callvirt MT3620Blink.Application.RegisterDescriptor : Program.cs(87) */
                MT3620Blink_Application_RegisterDescriptor(il2c_adjusted_reference(frame__.stack0_0__), (MT3620Blink_Descriptor*)frame__.stack1_1__);
                /* IL_0030: nop                             : Program.cs(87) */
                /* IL_0031: ldloc.0  */
                frame__.stack0_0__ = frame__.epoll;
                /* IL_0032: callvirt MT3620Blink.Application.Run : Program.cs(89) */
                MT3620Blink_Application_Run(il2c_adjusted_reference(frame__.stack0_0__));
                /* IL_0037: nop                             : Program.cs(89) */
                /* IL_0038: nop  */
                /* IL_0039: leave.s IL_0046 */
                il2c_leave(nest2, 0);
            }
            il2c_finally(nest2)
            {
                /* IL_003b: ldloc.2                         : Program.cs(90) */
                frame__.stack0_3__ = frame__.buttonPoller;
                /* IL_003c: brfalse.s IL_0045               : Program.cs(90) */
                if (frame__.stack0_3__ == NULL) goto IL_0045;
                /* IL_003e: ldloc.2                         : Program.cs(90) */
                frame__.stack0_3__ = frame__.buttonPoller;
                /* IL_003f: callvirt System.IDisposable.Dispose : Program.cs(90) */
                MT3620Blink_Program_GpioPoller_Dispose(il2c_adjusted_reference(frame__.stack0_3__));
                /* IL_0044: nop                             : Program.cs(90) */
            IL_0045:
                /* IL_0045: endfinally  */
                il2c_endfinally(nest2);
            }
            il2c_leave_to(nest2)
            {
                il2c_leave_bind(nest2, 0, IL_0046);
            }
            il2c_end_try(nest2);
        IL_0046:
            /* IL_0046: nop                             : Program.cs(91) */
            /* IL_0047: leave.s IL_0054 */
            il2c_leave(nest1, 1);
        }
        il2c_finally(nest1)
        {
            /* IL_0049: ldloc.1                         : Program.cs(91) */
            frame__.stack0_2__ = frame__.ledBlinker;
            /* IL_004a: brfalse.s IL_0053               : Program.cs(91) */
            if (frame__.stack0_2__ == NULL) goto IL_0053;
            /* IL_004c: ldloc.1                         : Program.cs(91) */
            frame__.stack0_2__ = frame__.ledBlinker;
            /* IL_004d: callvirt System.IDisposable.Dispose : Program.cs(91) */
            MT3620Blink_Program_GpioBlinker_Dispose(il2c_adjusted_reference(frame__.stack0_2__));
            /* IL_0052: nop                             : Program.cs(91) */
        IL_0053:
            /* IL_0053: endfinally  */
            il2c_endfinally(nest1);
        }
        il2c_leave_to(nest1)
        {
            il2c_leave_bind(nest1, 0, IL_0046);
            il2c_leave_bind(nest1, 1, IL_0054);
        }
        il2c_end_try(nest1);
    IL_0054:
        /* IL_0054: nop                             : Program.cs(92) */
        /* IL_0055: leave.s IL_0062 */
        il2c_leave(nest0, 2);
    }
    il2c_finally(nest0)
    {
        /* IL_0057: ldloc.0                         : Program.cs(92) */
        frame__.stack0_0__ = frame__.epoll;
        /* IL_0058: brfalse.s IL_0061               : Program.cs(92) */
        if (frame__.stack0_0__ == NULL) goto IL_0061;
        /* IL_005a: ldloc.0                         : Program.cs(92) */
        frame__.stack0_0__ = frame__.epoll;
        /* IL_005b: callvirt System.IDisposable.Dispose : Program.cs(92) */
        MT3620Blink_Descriptor_Dispose(il2c_adjusted_reference(frame__.stack0_0__));
        /* IL_0060: nop                             : Program.cs(92) */
    IL_0061:
        /* IL_0061: endfinally  */
        il2c_endfinally(nest0);
    }
    il2c_leave_to(nest0)
    {
        il2c_leave_bind(nest0, 0, IL_0046);
        il2c_leave_bind(nest0, 1, IL_0054);
        il2c_leave_bind(nest0, 2, IL_0062);
    }
    il2c_end_try(nest0);
IL_0062:
    /* IL_0062: ldc.i4.0                        : Program.cs(94) */
    stack0_1__ = 0;
    /* IL_0063: stloc.3                         : Program.cs(94) */
    local3__ = stack0_1__;
    /* IL_0064: br.s IL_0066                    : Program.cs(94) */
    goto IL_0066;
IL_0066:
    /* IL_0066: ldloc.3                         : Program.cs(95) */
    stack0_1__ = local3__;
    /* IL_0067: ret                             : Program.cs(95) */
    il2c_unlink_execution_frame(&frame__);
    return stack0_1__;
}

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.Object)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_Program, "MT3620Blink.Program", IL2C_TYPE_REFERENCE, sizeof(MT3620Blink_Program), System_Object, 0, 0)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.Timer

///////////////////////////////////////
// [3] MT3620Blink.Timer..ctor(MT3620Blink.Timer this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Timer__ctor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Timer* stack0_0__;
} MT3620Blink_Timer__ctor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Timer__ctor(MT3620Blink_Timer* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack1_0__;
    int32_t stack2_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Timer__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : Timer.cs(14) */
    frame__.stack0_0__ = this__;
    /* IL_0001: ldsfld MT3620Blink.Timer.CLOCK_MONOTONIC : Timer.cs(14) */
    stack1_0__ = MT3620Blink_Timer_CLOCK_MONOTONIC;
    /* IL_0006: ldsfld MT3620Blink.Timer.TFD_NONBLOCK : Timer.cs(14) */
    stack2_0__ = MT3620Blink_Timer_TFD_NONBLOCK;
    /* IL_000b: call MT3620Blink.Interops.timerfd_create : Timer.cs(14) */
    stack1_0__ = MT3620Blink_Interops_timerfd_create(stack1_0__, stack2_0__);
    /* IL_0010: call MT3620Blink.Descriptor..ctor : Timer.cs(14) */
    MT3620Blink_Descriptor__ctor((MT3620Blink_Descriptor*)frame__.stack0_0__, stack1_0__);
    /* IL_0015: nop                             : Timer.cs(14) */
    /* IL_0016: nop  */
    /* IL_0017: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] MT3620Blink.Timer.SetInterval(MT3620Blink.Timer this__, System.Int64 nsec)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Timer_SetInterval_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Timer* stack0_4__;
} MT3620Blink_Timer_SetInterval_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Timer_SetInterval(MT3620Blink_Timer* this__, int64_t nsec)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

    MT3620Blink_timespec tm;
    il2c_memset(&tm, 0x00, sizeof tm);
    MT3620Blink_itimerspec newValue;
    il2c_memset(&newValue, 0x00, sizeof newValue);
    MT3620Blink_itimerspec dummy;
    il2c_memset(&dummy, 0x00, sizeof dummy);
    MT3620Blink_timespec local3__;
    il2c_memset(&local3__, 0x00, sizeof local3__);
    MT3620Blink_itimerspec local4__;
    il2c_memset(&local4__, 0x00, sizeof local4__);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    MT3620Blink_timespec* stack0_0__;
    MT3620Blink_timespec stack0_1__;
    MT3620Blink_itimerspec* stack0_2__;
    MT3620Blink_itimerspec stack0_3__;
    int32_t stack0_5__;
    int64_t stack1_0__;
    int32_t stack1_1__;
    MT3620Blink_timespec stack1_2__;
    int32_t stack2_0__;
    int64_t stack2_1__;
    MT3620Blink_itimerspec* stack2_2__;
    MT3620Blink_itimerspec* stack3_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Timer_SetInterval_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Timer.cs(19) */
    /* IL_0001: ldloca.s local3__ */
    stack0_0__ = &local3__;
    /* IL_0003: initobj MT3620Blink.timespec    : Timer.cs(20) */
    il2c_memset(stack0_0__, 0x00, sizeof *stack0_0__);
    /* IL_0009: ldloca.s local3__               : Timer.cs(20) */
    stack0_0__ = &local3__;
    /* IL_000b: ldarg.1                         : Timer.cs(20) */
    stack1_0__ = nsec;
    /* IL_000c: ldc.i4 1000000000               : Timer.cs(20) */
    stack2_0__ = 1000000000;
    /* IL_0011: conv.i8                         : Timer.cs(20) */
    stack2_1__ = (int64_t)stack2_0__;
    /* IL_0012: div                             : Timer.cs(20) */
    stack1_0__ = stack1_0__ / stack2_1__;
    /* IL_0013: conv.i4                         : Timer.cs(20) */
    stack1_1__ = (int32_t)stack1_0__;
    /* IL_0014: stfld MT3620Blink.timespec.tv_sec : Timer.cs(20) */
    stack0_0__->tv_sec = stack1_1__;
    /* IL_0019: ldloca.s local3__               : Timer.cs(20) */
    stack0_0__ = &local3__;
    /* IL_001b: ldarg.1                         : Timer.cs(20) */
    stack1_0__ = nsec;
    /* IL_001c: ldc.i4 1000000000               : Timer.cs(20) */
    stack2_0__ = 1000000000;
    /* IL_0021: conv.i8                         : Timer.cs(20) */
    stack2_1__ = (int64_t)stack2_0__;
    /* IL_0022: rem                             : Timer.cs(20) */
    stack1_0__ = stack1_0__ % stack2_1__;
    /* IL_0023: conv.i4                         : Timer.cs(20) */
    stack1_1__ = (int32_t)stack1_0__;
    /* IL_0024: stfld MT3620Blink.timespec.tv_nsec : Timer.cs(20) */
    stack0_0__->tv_nsec = stack1_1__;
    /* IL_0029: ldloc.3                         : Timer.cs(20) */
    stack0_1__ = local3__;
    /* IL_002a: stloc.0                         : Timer.cs(20) */
    tm = stack0_1__;
    /* IL_002b: ldloca.s local4__               : Timer.cs(25) */
    stack0_2__ = &local4__;
    /* IL_002d: initobj MT3620Blink.itimerspec  : Timer.cs(25) */
    il2c_memset(stack0_2__, 0x00, sizeof *stack0_2__);
    /* IL_0033: ldloca.s local4__               : Timer.cs(25) */
    stack0_2__ = &local4__;
    /* IL_0035: ldloc.0                         : Timer.cs(25) */
    stack1_2__ = tm;
    /* IL_0036: stfld MT3620Blink.itimerspec.it_value : Timer.cs(25) */
    stack0_2__->it_value = stack1_2__;
    /* IL_003b: ldloca.s local4__               : Timer.cs(25) */
    stack0_2__ = &local4__;
    /* IL_003d: ldloc.0                         : Timer.cs(25) */
    stack1_2__ = tm;
    /* IL_003e: stfld MT3620Blink.itimerspec.it_interval : Timer.cs(25) */
    stack0_2__->it_interval = stack1_2__;
    /* IL_0043: ldloc.s local4__                : Timer.cs(25) */
    stack0_3__ = local4__;
    /* IL_0045: stloc.1                         : Timer.cs(25) */
    newValue = stack0_3__;
    /* IL_0046: ldarg.0                         : Timer.cs(31) */
    frame__.stack0_4__ = this__;
    /* IL_0047: call MT3620Blink.Descriptor.get_Identity : Timer.cs(31) */
    stack0_5__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_4__);
    /* IL_004c: ldc.i4.0                        : Timer.cs(31) */
    stack1_1__ = 0;
    /* IL_004d: ldloca.s newValue               : Timer.cs(31) */
    stack2_2__ = &newValue;
    /* IL_004f: ldloca.s dummy                  : Timer.cs(31) */
    stack3_0__ = &dummy;
    /* IL_0051: call MT3620Blink.Interops.timerfd_settime : Timer.cs(31) */
    stack0_5__ = MT3620Blink_Interops_timerfd_settime(stack0_5__, stack1_1__, stack2_2__, stack3_0__);
    /* IL_0056: pop                             : Timer.cs(31) */
    /* IL_0057: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] Virtual: MT3620Blink.Timer.OnRaised(MT3620Blink.Timer this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Timer_OnRaised_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Timer* stack0_0__;
} MT3620Blink_Timer_OnRaised_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Timer_OnRaised(MT3620Blink_Timer* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

    uint64_t timerData = 0ULL;

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack0_1__;
    uint64_t* stack1_0__;
    int32_t stack2_0__;
    int64_t stack2_1__;
    uintptr_t stack2_2__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Timer_OnRaised_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Timer.cs(35) */
    /* IL_0001: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0002: call MT3620Blink.Descriptor.get_Identity : Timer.cs(36) */
    stack0_1__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_0__);
    /* IL_0007: ldloca.s timerData              : Timer.cs(36) */
    stack1_0__ = &timerData;
    /* IL_0009: ldc.i4.8                        : Timer.cs(36) */
    stack2_0__ = 8;
    /* IL_000a: conv.i8                         : Timer.cs(36) */
    stack2_1__ = (int64_t)stack2_0__;
    /* IL_000b: call System.UIntPtr.op_Explicit : Timer.cs(36) */
    stack2_2__ = System_UIntPtr_op_Explicit_2((uint64_t)stack2_1__);
    /* IL_0010: call MT3620Blink.Interops.timerfd_read : Timer.cs(36) */
    stack0_1__ = MT3620Blink_Interops_timerfd_read(stack0_1__, stack1_0__, stack2_2__);
    /* IL_0015: pop                             : Timer.cs(36) */
    /* IL_0016: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0017: callvirt MT3620Blink.Timer.Raised : Timer.cs(37) */
    frame__.stack0_0__->vptr0__->Raised(il2c_adjusted_reference(frame__.stack0_0__));
    /* IL_001c: nop                             : Timer.cs(37) */
    /* IL_001d: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

//////////////////////
// [7] Runtime helpers:

// [7-13] VTable for System.IDisposable
System_IDisposable_VTABLE_DECL__ MT3620Blink_Timer_System_IDisposable_VTABLE__ = {
    il2c_adjustor_offset(MT3620Blink_Timer, System_IDisposable),
    (void (*)(void*))MT3620Blink_Descriptor_Dispose,
};

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_ABSTRACT_BEGIN(MT3620Blink_Timer, "MT3620Blink.Timer", sizeof(MT3620Blink_Timer), MT3620Blink_Descriptor, 0, 1)
    IL2C_RUNTIME_TYPE_INTERFACE(MT3620Blink_Timer, System_IDisposable)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.Program.GpioBlinker

///////////////////////////////////////
// [3] MT3620Blink.Program.GpioBlinker..ctor(MT3620Blink.Program.GpioBlinker this__, System.Int32 gpioId)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Program_GpioBlinker__ctor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Program_GpioBlinker* stack0_0__;
    il2c_arraytype(System_Int64)* stack1_1__;
    MT3620Blink_GpioOutput* stack1_2__;
    il2c_arraytype(System_Int64)* stack2_0__;
} MT3620Blink_Program_GpioBlinker__ctor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Program_GpioBlinker__ctor(MT3620Blink_Program_GpioBlinker* this__, int32_t gpioId)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack1_0__;
    int32_t stack2_1__;
    System_RuntimeFieldHandle stack3_0__;
    int32_t stack3_1__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Program_GpioBlinker__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 4 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : Program.cs(9) */
    frame__.stack0_0__ = this__;
    /* IL_0001: ldc.i4.3                        : Program.cs(9) */
    stack1_0__ = 3;
    /* IL_0002: newarr System.Int64             : Program.cs(9) */
    frame__.stack1_1__ = il2c_new_array(System_Int64, stack1_0__);
    /* IL_0007: dup                             : Program.cs(9) */
    frame__.stack2_0__ = frame__.stack1_1__;
    /* IL_0008: ldtoken .<PrivateImplementationDetails>.E902362F9BEE92BBA97ECE5B88B94AF4A8D3201D : Program.cs(9) */
    stack3_0__.size__ = sizeof(declaredValue0__);
    stack3_0__.field__ = declaredValue0__;
    /* IL_000d: call System.Runtime.CompilerServices.RuntimeHelpers.InitializeArray : Program.cs(9) */
    System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray((System_Array*)frame__.stack2_0__, stack3_0__);
    /* IL_0012: stfld MT3620Blink.Program.GpioBlinker.blinkIntervals : Program.cs(9) */
    frame__.stack0_0__->blinkIntervals = frame__.stack1_1__;
    /* IL_0017: ldarg.0                         : Program.cs(14) */
    frame__.stack0_0__ = this__;
    /* IL_0018: call MT3620Blink.Timer..ctor    : Program.cs(14) */
    MT3620Blink_Timer__ctor((MT3620Blink_Timer*)frame__.stack0_0__);
    /* IL_001d: nop                             : Program.cs(14) */
    /* IL_001e: nop  */
    /* IL_001f: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0020: ldarg.1                         : Program.cs(16) */
    stack1_0__ = gpioId;
    /* IL_0021: ldc.i4.0                        : Program.cs(16) */
    stack2_1__ = 0;
    /* IL_0022: ldc.i4.1                        : Program.cs(16) */
    stack3_1__ = 1;
    /* IL_0023: newobj MT3620Blink.GpioOutput..ctor : Program.cs(16) */
    frame__.stack1_2__ = il2c_get_uninitialized_object(MT3620Blink_GpioOutput);
    MT3620Blink_GpioOutput__ctor(frame__.stack1_2__, stack1_0__, (MT3620Blink_GPIO_OutputMode_Type)stack2_1__, (stack3_1__) ? true : false);
    /* IL_0028: stfld MT3620Blink.Program.GpioBlinker.output : Program.cs(16) */
    frame__.stack0_0__->output = frame__.stack1_2__;
    /* IL_002d: ldarg.0                         : Program.cs(20) */
    frame__.stack0_0__ = this__;
    /* IL_002e: call MT3620Blink.Program.GpioBlinker.NextInterval : Program.cs(20) */
    MT3620Blink_Program_GpioBlinker_NextInterval(frame__.stack0_0__);
    /* IL_0033: nop                             : Program.cs(20) */
    /* IL_0034: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] Virtual: MT3620Blink.Program.GpioBlinker.Dispose(MT3620Blink.Program.GpioBlinker this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Program_GpioBlinker_Dispose_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Program_GpioBlinker* stack0_0__;
    MT3620Blink_GpioOutput* stack0_1__;
} MT3620Blink_Program_GpioBlinker_Dispose_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Program_GpioBlinker_Dispose(MT3620Blink_Program_GpioBlinker* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Program_GpioBlinker_Dispose_EXECUTION_FRAME__ frame__ =
        { NULL, 2 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Program.cs(24) */
    /* IL_0001: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0002: call MT3620Blink.Descriptor.Dispose : Program.cs(25) */
    MT3620Blink_Descriptor_Dispose((MT3620Blink_Descriptor*)frame__.stack0_0__);
    /* IL_0007: nop                             : Program.cs(25) */
    /* IL_0008: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0009: ldfld MT3620Blink.Program.GpioBlinker.output : Program.cs(26) */
    frame__.stack0_1__ = frame__.stack0_0__->output;
    /* IL_000e: callvirt MT3620Blink.Descriptor.Dispose : Program.cs(26) */
    frame__.stack0_1__->vptr0__->Dispose((MT3620Blink_Descriptor*)il2c_adjusted_reference(frame__.stack0_1__));
    /* IL_0013: nop                             : Program.cs(26) */
    /* IL_0014: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] Virtual: MT3620Blink.Program.GpioBlinker.Raised(MT3620Blink.Program.GpioBlinker this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Program_GpioBlinker_Raised_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Program_GpioBlinker* stack0_0__;
    MT3620Blink_GpioOutput* stack0_1__;
    MT3620Blink_Program_GpioBlinker* stack1_0__;
} MT3620Blink_Program_GpioBlinker_Raised_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Program_GpioBlinker_Raised(MT3620Blink_Program_GpioBlinker* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    bool stack1_1__;
    int32_t stack1_2__;
    int32_t stack2_0__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Program_GpioBlinker_Raised_EXECUTION_FRAME__ frame__ =
        { NULL, 3 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Program.cs(30) */
    /* IL_0001: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0002: ldfld MT3620Blink.Program.GpioBlinker.output : Program.cs(31) */
    frame__.stack0_1__ = frame__.stack0_0__->output;
    /* IL_0007: ldarg.0                         : Program.cs(31) */
    frame__.stack1_0__ = this__;
    /* IL_0008: ldfld MT3620Blink.Program.GpioBlinker.flag : Program.cs(31) */
    stack1_1__ = frame__.stack1_0__->flag;
    /* IL_000d: callvirt MT3620Blink.GpioOutput.SetValue : Program.cs(31) */
    MT3620Blink_GpioOutput_SetValue(il2c_adjusted_reference(frame__.stack0_1__), stack1_1__);
    /* IL_0012: nop                             : Program.cs(31) */
    /* IL_0013: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0014: ldarg.0                         : Program.cs(32) */
    frame__.stack1_0__ = this__;
    /* IL_0015: ldfld MT3620Blink.Program.GpioBlinker.flag : Program.cs(32) */
    stack1_1__ = frame__.stack1_0__->flag;
    /* IL_001a: ldc.i4.0                        : Program.cs(32) */
    stack2_0__ = 0;
    /* IL_001b: ceq                             : Program.cs(32) */
    stack1_2__ = ((int32_t)stack1_1__ == (int32_t)stack2_0__) ? 1 : 0;
    /* IL_001d: stfld MT3620Blink.Program.GpioBlinker.flag : Program.cs(32) */
    frame__.stack0_0__->flag = (stack1_2__) ? true : false;
    /* IL_0022: ret                             : Program.cs(33) */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] MT3620Blink.Program.GpioBlinker.NextInterval(MT3620Blink.Program.GpioBlinker this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Program_GpioBlinker_NextInterval_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Program_GpioBlinker* stack0_0__;
    MT3620Blink_Program_GpioBlinker* stack1_0__;
    il2c_arraytype(System_Int64)* stack1_1__;
    MT3620Blink_Program_GpioBlinker* stack2_0__;
} MT3620Blink_Program_GpioBlinker_NextInterval_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Program_GpioBlinker_NextInterval(MT3620Blink_Program_GpioBlinker* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int64_t stack1_2__;
    int32_t stack1_3__;
    int32_t stack2_1__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Program_GpioBlinker_NextInterval_EXECUTION_FRAME__ frame__ =
        { NULL, 4 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Program.cs(36) */
    /* IL_0001: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0002: ldarg.0                         : Program.cs(37) */
    frame__.stack1_0__ = this__;
    /* IL_0003: ldfld MT3620Blink.Program.GpioBlinker.blinkIntervals : Program.cs(37) */
    frame__.stack1_1__ = frame__.stack1_0__->blinkIntervals;
    /* IL_0008: ldarg.0                         : Program.cs(37) */
    frame__.stack2_0__ = this__;
    /* IL_0009: ldfld MT3620Blink.Program.GpioBlinker.blinkIntervalIndex : Program.cs(37) */
    stack2_1__ = frame__.stack2_0__->blinkIntervalIndex;
    /* IL_000e: ldelem.i8                       : Program.cs(37) */
    stack1_2__ = il2c_array_item(frame__.stack1_1__, int64_t, stack2_1__);
    /* IL_000f: call MT3620Blink.Timer.SetInterval : Program.cs(37) */
    MT3620Blink_Timer_SetInterval((MT3620Blink_Timer*)frame__.stack0_0__, stack1_2__);
    /* IL_0014: nop                             : Program.cs(37) */
    /* IL_0015: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0016: ldarg.0                         : Program.cs(39) */
    frame__.stack1_0__ = this__;
    /* IL_0017: ldfld MT3620Blink.Program.GpioBlinker.blinkIntervalIndex : Program.cs(39) */
    stack1_3__ = frame__.stack1_0__->blinkIntervalIndex;
    /* IL_001c: ldc.i4.1                        : Program.cs(39) */
    stack2_1__ = 1;
    /* IL_001d: add                             : Program.cs(39) */
    stack1_3__ = stack1_3__ + stack2_1__;
    /* IL_001e: stfld MT3620Blink.Program.GpioBlinker.blinkIntervalIndex : Program.cs(39) */
    frame__.stack0_0__->blinkIntervalIndex = stack1_3__;
    /* IL_0023: ldarg.0                         : Program.cs(40) */
    frame__.stack0_0__ = this__;
    /* IL_0024: ldarg.0                         : Program.cs(40) */
    frame__.stack1_0__ = this__;
    /* IL_0025: ldfld MT3620Blink.Program.GpioBlinker.blinkIntervalIndex : Program.cs(40) */
    stack1_3__ = frame__.stack1_0__->blinkIntervalIndex;
    /* IL_002a: ldc.i4.3                        : Program.cs(40) */
    stack2_1__ = 3;
    /* IL_002b: rem                             : Program.cs(40) */
    stack1_3__ = stack1_3__ % stack2_1__;
    /* IL_002c: stfld MT3620Blink.Program.GpioBlinker.blinkIntervalIndex : Program.cs(40) */
    frame__.stack0_0__->blinkIntervalIndex = stack1_3__;
    /* IL_0031: ret                             : Program.cs(41) */
    il2c_unlink_execution_frame(&frame__);
    return;
}

//////////////////////
// [7] Runtime helpers:

// [7-10-2] VTable
MT3620Blink_Program_GpioBlinker_VTABLE_DECL__ MT3620Blink_Program_GpioBlinker_VTABLE__ = {
    0, // Adjustor offset
    (bool (*)(void*, System_Object*))System_Object_Equals,
    (void (*)(void*))System_Object_Finalize,
    (int32_t (*)(void*))System_Object_GetHashCode,
    (System_String* (*)(void*))System_Object_ToString,
    (void (*)(void*))MT3620Blink_Program_GpioBlinker_Dispose,
    (void (*)(void*))MT3620Blink_Timer_OnRaised,
    (void (*)(void*))MT3620Blink_Program_GpioBlinker_Raised,
};

// [7-13] VTable for System.IDisposable
System_IDisposable_VTABLE_DECL__ MT3620Blink_Program_GpioBlinker_System_IDisposable_VTABLE__ = {
    il2c_adjustor_offset(MT3620Blink_Program_GpioBlinker, System_IDisposable),
    (void (*)(void*))MT3620Blink_Program_GpioBlinker_Dispose,
};

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_Program_GpioBlinker, "MT3620Blink.Program.GpioBlinker", IL2C_TYPE_REFERENCE, sizeof(MT3620Blink_Program_GpioBlinker), MT3620Blink_Timer, 2, 1)
    IL2C_RUNTIME_TYPE_MARK_TARGET_FOR_REFERENCE(MT3620Blink_Program_GpioBlinker, blinkIntervals)
    IL2C_RUNTIME_TYPE_MARK_TARGET_FOR_REFERENCE(MT3620Blink_Program_GpioBlinker, output)
    IL2C_RUNTIME_TYPE_INTERFACE(MT3620Blink_Program_GpioBlinker, System_IDisposable)
IL2C_RUNTIME_TYPE_END();

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: MT3620Blink.Program.GpioPoller

///////////////////////////////////////
// [3] MT3620Blink.Program.GpioPoller..ctor(MT3620Blink.Program.GpioPoller this__, System.Int32 gpioId, MT3620Blink.Program.GpioBlinker blinker)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Program_GpioPoller__ctor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Program_GpioPoller* stack0_0__;
    MT3620Blink_GpioInput* stack1_1__;
    MT3620Blink_Program_GpioPoller* stack1_2__;
    MT3620Blink_Program_GpioBlinker* stack1_4__;
} MT3620Blink_Program_GpioPoller__ctor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Program_GpioPoller__ctor(MT3620Blink_Program_GpioPoller* this__, int32_t gpioId, MT3620Blink_Program_GpioBlinker* blinker)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack1_0__;
    bool stack1_3__;
    int64_t stack1_5__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Program_GpioPoller__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 4 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : Program.cs(50) */
    frame__.stack0_0__ = this__;
    /* IL_0001: call MT3620Blink.Timer..ctor    : Program.cs(50) */
    MT3620Blink_Timer__ctor((MT3620Blink_Timer*)frame__.stack0_0__);
    /* IL_0006: nop                             : Program.cs(50) */
    /* IL_0007: nop  */
    /* IL_0008: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0009: ldarg.1                         : Program.cs(52) */
    stack1_0__ = gpioId;
    /* IL_000a: newobj MT3620Blink.GpioInput..ctor : Program.cs(52) */
    frame__.stack1_1__ = il2c_get_uninitialized_object(MT3620Blink_GpioInput);
    MT3620Blink_GpioInput__ctor(frame__.stack1_1__, stack1_0__);
    /* IL_000f: stfld MT3620Blink.Program.GpioPoller.input : Program.cs(52) */
    frame__.stack0_0__->input = frame__.stack1_1__;
    /* IL_0014: ldarg.0                         : Program.cs(53) */
    frame__.stack0_0__ = this__;
    /* IL_0015: ldarg.0                         : Program.cs(53) */
    frame__.stack1_2__ = this__;
    /* IL_0016: ldfld MT3620Blink.Program.GpioPoller.input : Program.cs(53) */
    frame__.stack1_1__ = frame__.stack1_2__->input;
    /* IL_001b: callvirt MT3620Blink.GpioInput.get_Value : Program.cs(53) */
    stack1_3__ = MT3620Blink_GpioInput_get_Value(il2c_adjusted_reference(frame__.stack1_1__));
    /* IL_0020: stfld MT3620Blink.Program.GpioPoller.last : Program.cs(53) */
    frame__.stack0_0__->last = stack1_3__;
    /* IL_0025: ldarg.0                         : Program.cs(54) */
    frame__.stack0_0__ = this__;
    /* IL_0026: ldarg.2                         : Program.cs(54) */
    frame__.stack1_4__ = blinker;
    /* IL_0027: stfld MT3620Blink.Program.GpioPoller.blinker : Program.cs(54) */
    frame__.stack0_0__->blinker = frame__.stack1_4__;
    /* IL_002c: ldarg.0                         : Program.cs(55) */
    frame__.stack0_0__ = this__;
    /* IL_002d: ldc.i4 100000000                : Program.cs(55) */
    stack1_0__ = 100000000;
    /* IL_0032: conv.i8                         : Program.cs(55) */
    stack1_5__ = (int64_t)stack1_0__;
    /* IL_0033: call MT3620Blink.Timer.SetInterval : Program.cs(55) */
    MT3620Blink_Timer_SetInterval((MT3620Blink_Timer*)frame__.stack0_0__, stack1_5__);
    /* IL_0038: nop                             : Program.cs(55) */
    /* IL_0039: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] Virtual: MT3620Blink.Program.GpioPoller.Dispose(MT3620Blink.Program.GpioPoller this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Program_GpioPoller_Dispose_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Program_GpioPoller* stack0_0__;
    MT3620Blink_GpioInput* stack0_1__;
} MT3620Blink_Program_GpioPoller_Dispose_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Program_GpioPoller_Dispose(MT3620Blink_Program_GpioPoller* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Program_GpioPoller_Dispose_EXECUTION_FRAME__ frame__ =
        { NULL, 2 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Program.cs(59) */
    /* IL_0001: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0002: call MT3620Blink.Descriptor.Dispose : Program.cs(60) */
    MT3620Blink_Descriptor_Dispose((MT3620Blink_Descriptor*)frame__.stack0_0__);
    /* IL_0007: nop                             : Program.cs(60) */
    /* IL_0008: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0009: ldfld MT3620Blink.Program.GpioPoller.input : Program.cs(61) */
    frame__.stack0_1__ = frame__.stack0_0__->input;
    /* IL_000e: callvirt MT3620Blink.Descriptor.Dispose : Program.cs(61) */
    frame__.stack0_1__->vptr0__->Dispose((MT3620Blink_Descriptor*)il2c_adjusted_reference(frame__.stack0_1__));
    /* IL_0013: nop                             : Program.cs(61) */
    /* IL_0014: ret  */
    il2c_unlink_execution_frame(&frame__);
    return;
}

///////////////////////////////////////
// [3] Virtual: MT3620Blink.Program.GpioPoller.Raised(MT3620Blink.Program.GpioPoller this__)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Program_GpioPoller_Raised_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_Program_GpioPoller* stack0_0__;
    MT3620Blink_GpioInput* stack0_1__;
    MT3620Blink_Program_GpioBlinker* stack0_4__;
    MT3620Blink_Program_GpioPoller* stack1_0__;
} MT3620Blink_Program_GpioPoller_Raised_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Program_GpioPoller_Raised(MT3620Blink_Program_GpioPoller* this__)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

    bool current = false;
    bool local1__ = false;
    bool local2__ = false;

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    bool stack0_2__;
    int32_t stack0_3__;
    bool stack1_1__;
    int32_t stack1_2__;

    //-------------------
    // [3-5] Setup execution frame:

    MT3620Blink_Program_GpioPoller_Raised_EXECUTION_FRAME__ frame__ =
        { NULL, 4 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop                             : Program.cs(65) */
    /* IL_0001: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0002: ldfld MT3620Blink.Program.GpioPoller.input : Program.cs(66) */
    frame__.stack0_1__ = frame__.stack0_0__->input;
    /* IL_0007: callvirt MT3620Blink.GpioInput.get_Value : Program.cs(66) */
    stack0_2__ = MT3620Blink_GpioInput_get_Value(il2c_adjusted_reference(frame__.stack0_1__));
    /* IL_000c: stloc.0                         : Program.cs(66) */
    current = stack0_2__;
    /* IL_000d: ldloc.0                         : Program.cs(67) */
    stack0_2__ = current;
    /* IL_000e: ldarg.0                         : Program.cs(67) */
    frame__.stack1_0__ = this__;
    /* IL_000f: ldfld MT3620Blink.Program.GpioPoller.last : Program.cs(67) */
    stack1_1__ = frame__.stack1_0__->last;
    /* IL_0014: ceq                             : Program.cs(67) */
    stack0_3__ = ((int32_t)stack0_2__ == (int32_t)stack1_1__) ? 1 : 0;
    /* IL_0016: ldc.i4.0                        : Program.cs(67) */
    stack1_2__ = 0;
    /* IL_0017: ceq                             : Program.cs(67) */
    stack0_3__ = ((int32_t)stack0_3__ == (int32_t)stack1_2__) ? 1 : 0;
    /* IL_0019: stloc.1                         : Program.cs(67) */
    local1__ = (stack0_3__) ? true : false;
    /* IL_001a: ldloc.1                         : Program.cs(67) */
    stack0_2__ = local1__;
    /* IL_001b: brfalse.s IL_0035               : Program.cs(67) */
    if (!(stack0_2__)) goto IL_0035;
    /* IL_001d: nop                             : Program.cs(68) */
    /* IL_001e: ldloc.0  */
    stack0_2__ = current;
    /* IL_001f: ldc.i4.0                        : Program.cs(69) */
    stack1_2__ = 0;
    /* IL_0020: ceq                             : Program.cs(69) */
    stack0_3__ = ((int32_t)stack0_2__ == (int32_t)stack1_2__) ? 1 : 0;
    /* IL_0022: stloc.2                         : Program.cs(69) */
    local2__ = (stack0_3__) ? true : false;
    /* IL_0023: ldloc.2                         : Program.cs(69) */
    stack0_2__ = local2__;
    /* IL_0024: brfalse.s IL_0034               : Program.cs(69) */
    if (!(stack0_2__)) goto IL_0034;
    /* IL_0026: nop                             : Program.cs(70) */
    /* IL_0027: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0028: ldfld MT3620Blink.Program.GpioPoller.blinker : Program.cs(71) */
    frame__.stack0_4__ = frame__.stack0_0__->blinker;
    /* IL_002d: callvirt MT3620Blink.Program.GpioBlinker.NextInterval : Program.cs(71) */
    MT3620Blink_Program_GpioBlinker_NextInterval(il2c_adjusted_reference(frame__.stack0_4__));
    /* IL_0032: nop                             : Program.cs(71) */
    /* IL_0033: nop  */
IL_0034:
    /* IL_0034: nop  */
IL_0035:
    /* IL_0035: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0036: ldloc.0                         : Program.cs(74) */
    stack1_1__ = current;
    /* IL_0037: stfld MT3620Blink.Program.GpioPoller.last : Program.cs(74) */
    frame__.stack0_0__->last = stack1_1__;
    /* IL_003c: ret                             : Program.cs(75) */
    il2c_unlink_execution_frame(&frame__);
    return;
}

//////////////////////
// [7] Runtime helpers:

// [7-10-2] VTable
MT3620Blink_Program_GpioPoller_VTABLE_DECL__ MT3620Blink_Program_GpioPoller_VTABLE__ = {
    0, // Adjustor offset
    (bool (*)(void*, System_Object*))System_Object_Equals,
    (void (*)(void*))System_Object_Finalize,
    (int32_t (*)(void*))System_Object_GetHashCode,
    (System_String* (*)(void*))System_Object_ToString,
    (void (*)(void*))MT3620Blink_Program_GpioPoller_Dispose,
    (void (*)(void*))MT3620Blink_Timer_OnRaised,
    (void (*)(void*))MT3620Blink_Program_GpioPoller_Raised,
};

// [7-13] VTable for System.IDisposable
System_IDisposable_VTABLE_DECL__ MT3620Blink_Program_GpioPoller_System_IDisposable_VTABLE__ = {
    il2c_adjustor_offset(MT3620Blink_Program_GpioPoller, System_IDisposable),
    (void (*)(void*))MT3620Blink_Program_GpioPoller_Dispose,
};

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(MT3620Blink_Program_GpioPoller, "MT3620Blink.Program.GpioPoller", IL2C_TYPE_REFERENCE, sizeof(MT3620Blink_Program_GpioPoller), MT3620Blink_Timer, 2, 1)
    IL2C_RUNTIME_TYPE_MARK_TARGET_FOR_REFERENCE(MT3620Blink_Program_GpioPoller, input)
    IL2C_RUNTIME_TYPE_MARK_TARGET_FOR_REFERENCE(MT3620Blink_Program_GpioPoller, blinker)
    IL2C_RUNTIME_TYPE_INTERFACE(MT3620Blink_Program_GpioPoller, System_IDisposable)
IL2C_RUNTIME_TYPE_END();
