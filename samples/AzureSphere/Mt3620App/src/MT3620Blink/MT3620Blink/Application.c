﻿// [15-2] This is MT3620Blink native code translated by IL2C, do not edit.

#include <MT3620Blink.h>
#include <MT3620Blink_internal.h>

#include <mscorlib.h>

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////////////////////////////////////////////////////////////////
// [9-1] Type: MT3620Blink.Application

//////////////////////////////////////////////////////////////////////////////////
// [9-2] File scope prototypes:

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
#line 14 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

#line 14 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack1_0__;

    //-------------------
    // [3-5] Setup execution frame:

#line 14 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_Application__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
#line 14 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0  */
#line 14 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_0__ = this__;
    /* IL_0001: ldc.i4.0  */
#line 14 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_0__ = 0;
    /* IL_0002: call MT3620Blink.Interops.epoll_create1 */
#line 14 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_0__ = MT3620Blink_Interops_epoll_create1(stack1_0__);
    /* IL_0007: call MT3620Blink.Descriptor..ctor */
#line 14 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_Descriptor__ctor((MT3620Blink_Descriptor*)frame__.stack0_0__, stack1_0__);
    /* IL_000c: nop  */
    /* IL_000d: nop  */
    /* IL_000e: ret  */
#line 16 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_unlink_execution_frame(&frame__);
#line 16 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    return;
#line 16 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
}

///////////////////////////////////////
// [3] MT3620Blink.Application.RegisterDescriptor(MT3620Blink.Application this__, MT3620Blink.IEPollListener target)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Application_RegisterDescriptor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_IEPollListener* stack0_0__;
    MT3620Blink_Application* stack0_4__;
    MT3620Blink_IEPollListener* stack2_3__;
} MT3620Blink_Application_RegisterDescriptor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Application_RegisterDescriptor(MT3620Blink_Application* this__, MT3620Blink_IEPollListener* target)
{
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle handle;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(&handle, 0x00, sizeof handle);
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event ev;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(&ev, 0x00, sizeof ev);
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event local2__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(&local2__, 0x00, sizeof local2__);
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_data_t local3__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(&local3__, 0x00, sizeof local3__);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle stack0_1__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event* stack0_2__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event stack0_3__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack0_5__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack1_0__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    uint32_t stack1_1__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_data_t* stack1_2__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_data_t stack1_3__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle stack2_0__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    intptr_t stack2_1__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_NativePointer stack2_2__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack2_4__;
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event* stack3_0__;

    //-------------------
    // [3-5] Setup execution frame:

#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_Application_RegisterDescriptor_EXECUTION_FRAME__ frame__ =
        { NULL, 3 };
#line 19 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop  */
    /* IL_0001: ldarg.1  */
#line 20 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_0__ = target;
    /* IL_0002: ldc.i4.3  */
#line 20 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_0__ = 3;
    /* IL_0003: call System.Runtime.InteropServices.GCHandle.Alloc */
#line 20 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_1__ = System_Runtime_InteropServices_GCHandle_Alloc_1(il2c_adjusted_reference(frame__.stack0_0__), (System_Runtime_InteropServices_GCHandleType)stack1_0__);
    /* IL_0008: stloc.0  */
#line 20 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    handle = stack0_1__;
    /* IL_0009: ldloca.s local2__ */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_2__ = &local2__;
    /* IL_000b: initobj MT3620Blink.epoll_event */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(stack0_2__, 0x00, sizeof *stack0_2__);
    /* IL_0011: ldloca.s local2__ */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_2__ = &local2__;
    /* IL_0013: ldsfld MT3620Blink.Interops.EPOLLIN */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_1__ = MT3620Blink_Interops_EPOLLIN;
    /* IL_0018: stfld MT3620Blink.epoll_event.events */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_2__->events = stack1_1__;
    /* IL_001d: ldloca.s local2__ */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_2__ = &local2__;
    /* IL_001f: ldloca.s local3__ */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_2__ = &local3__;
    /* IL_0021: initobj MT3620Blink.epoll_data_t */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(stack1_2__, 0x00, sizeof *stack1_2__);
    /* IL_0027: ldloca.s local3__ */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_2__ = &local3__;
    /* IL_0029: ldloc.0  */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack2_0__ = handle;
    /* IL_002a: call System.Runtime.InteropServices.GCHandle.ToIntPtr */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack2_1__ = System_Runtime_InteropServices_GCHandle_ToIntPtr(stack2_0__);
    /* IL_002f: call System.Runtime.InteropServices.NativePointer.op_Implicit */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack2_2__ = System_Runtime_InteropServices_NativePointer_op_Implicit(stack2_1__);
    /* IL_0034: stfld MT3620Blink.epoll_data_t.ptr */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_2__->ptr = stack2_2__;
    /* IL_0039: ldloc.3  */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_3__ = local3__;
    /* IL_003a: stfld MT3620Blink.epoll_event.data */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_2__->data = stack1_3__;
    /* IL_003f: ldloc.2  */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_3__ = local2__;
    /* IL_0040: stloc.1  */
#line 22 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    ev = stack0_3__;
    /* IL_0041: ldarg.0  */
#line 27 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_4__ = this__;
    /* IL_0042: call MT3620Blink.Descriptor.get_Identity */
#line 27 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_5__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_4__);
    /* IL_0047: ldsfld MT3620Blink.Interops.EPOLL_CTL_ADD */
#line 27 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_0__ = MT3620Blink_Interops_EPOLL_CTL_ADD;
    /* IL_004c: ldarg.1  */
#line 27 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack2_3__ = target;
    /* IL_004d: callvirt MT3620Blink.IEPollListener.get_Identity */
#line 27 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack2_4__ = frame__.stack2_3__->vptr0__->get_Identity(il2c_adjusted_reference(frame__.stack2_3__));
    /* IL_0052: ldloca.s ev */
#line 27 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack3_0__ = &ev;
    /* IL_0054: call MT3620Blink.Interops.epoll_ctl */
#line 27 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_5__ = MT3620Blink_Interops_epoll_ctl(stack0_5__, stack1_0__, stack2_4__, stack3_0__);
    /* IL_0059: pop  */
    /* IL_005a: ret  */
#line 32 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_unlink_execution_frame(&frame__);
#line 32 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    return;
#line 32 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
}

///////////////////////////////////////
// [3] MT3620Blink.Application.UnregisterDescriptor(MT3620Blink.Application this__, MT3620Blink.IEPollListener target)

//-------------------
// [3-7] Declare execution frame:

typedef struct MT3620Blink_Application_UnregisterDescriptor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    MT3620Blink_IEPollListener* stack0_0__;
    MT3620Blink_Application* stack0_4__;
    MT3620Blink_IEPollListener* stack2_0__;
} MT3620Blink_Application_UnregisterDescriptor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Application_UnregisterDescriptor(MT3620Blink_Application* this__, MT3620Blink_IEPollListener* target)
{
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle handle;
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(&handle, 0x00, sizeof handle);
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event ev;
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(&ev, 0x00, sizeof ev);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle stack0_1__;
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle* stack0_2__;
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event* stack0_3__;
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack0_5__;
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack1_0__;
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack2_1__;
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event* stack3_0__;

    //-------------------
    // [3-5] Setup execution frame:

#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_Application_UnregisterDescriptor_EXECUTION_FRAME__ frame__ =
        { NULL, 3 };
#line 35 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop  */
    /* IL_0001: ldarg.1  */
#line 36 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_0__ = target;
    /* IL_0002: ldc.i4.3  */
#line 36 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_0__ = 3;
    /* IL_0003: call System.Runtime.InteropServices.GCHandle.Alloc */
#line 36 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_1__ = System_Runtime_InteropServices_GCHandle_Alloc_1(il2c_adjusted_reference(frame__.stack0_0__), (System_Runtime_InteropServices_GCHandleType)stack1_0__);
    /* IL_0008: stloc.0  */
#line 36 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    handle = stack0_1__;
    /* IL_0009: ldloca.s handle */
#line 37 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_2__ = &handle;
    /* IL_000b: call System.Runtime.InteropServices.GCHandle.Free */
#line 37 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle_Free(stack0_2__);
    /* IL_0010: nop  */
    /* IL_0011: ldloca.s ev */
#line 39 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_3__ = &ev;
    /* IL_0013: initobj MT3620Blink.epoll_event */
#line 39 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(stack0_3__, 0x00, sizeof *stack0_3__);
    /* IL_0019: ldarg.0  */
#line 41 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_4__ = this__;
    /* IL_001a: call MT3620Blink.Descriptor.get_Identity */
#line 41 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_5__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_4__);
    /* IL_001f: ldsfld MT3620Blink.Interops.EPOLL_CTL_DEL */
#line 41 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_0__ = MT3620Blink_Interops_EPOLL_CTL_DEL;
    /* IL_0024: ldarg.1  */
#line 41 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack2_0__ = target;
    /* IL_0025: callvirt MT3620Blink.IEPollListener.get_Identity */
#line 41 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack2_1__ = frame__.stack2_0__->vptr0__->get_Identity(il2c_adjusted_reference(frame__.stack2_0__));
    /* IL_002a: ldloca.s ev */
#line 41 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack3_0__ = &ev;
    /* IL_002c: call MT3620Blink.Interops.epoll_ctl */
#line 41 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_5__ = MT3620Blink_Interops_epoll_ctl(stack0_5__, stack1_0__, stack2_1__, stack3_0__);
    /* IL_0031: pop  */
    /* IL_0032: ret  */
#line 46 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_unlink_execution_frame(&frame__);
#line 46 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    return;
#line 46 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
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
    MT3620Blink_IEPollListener* target;
    MT3620Blink_Application* stack0_2__;
    System_Object* stack0_10__;
    MT3620Blink_IEPollListener* stack0_11__;
} MT3620Blink_Application_Run_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void MT3620Blink_Application_Run(MT3620Blink_Application* this__)
{
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-3] Local variables (!objref):

#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event ev;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(&ev, 0x00, sizeof ev);
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t numEventsOccurred = 0;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    bool local2__ = false;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    bool local3__ = false;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle handle;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(&handle, 0x00, sizeof handle);
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    bool local6__ = false;

    //-------------------
    // [3-4] Evaluation stacks (!objref):

#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack0_0__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event* stack0_1__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    bool stack0_3__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event stack0_4__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_data_t stack0_5__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_NativePointer stack0_6__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    intptr_t stack0_7__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle stack0_8__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    System_Runtime_InteropServices_GCHandle* stack0_9__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_epoll_event* stack1_0__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack1_1__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack2_0__;
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    int32_t stack3_0__;

    //-------------------
    // [3-5] Setup execution frame:

#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    MT3620Blink_Application_Run_EXECUTION_FRAME__ frame__ =
        { NULL, 4 };
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: nop  */
    /* IL_0001: br.s IL_005f */
#line 49 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    goto IL_005f;
IL_0003:
    /* IL_0003: nop  */
    /* IL_0004: ldloca.s ev */
#line 52 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_1__ = &ev;
    /* IL_0006: initobj MT3620Blink.epoll_event */
#line 52 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_memset(stack0_1__, 0x00, sizeof *stack0_1__);
    /* IL_000c: ldarg.0  */
#line 53 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_2__ = this__;
    /* IL_000d: call MT3620Blink.Descriptor.get_Identity */
#line 53 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_0__ = MT3620Blink_Descriptor_get_Identity((MT3620Blink_Descriptor*)frame__.stack0_2__);
    /* IL_0012: ldloca.s ev */
#line 53 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_0__ = &ev;
    /* IL_0014: ldc.i4.1  */
#line 53 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack2_0__ = 1;
    /* IL_0015: ldc.i4.m1  */
#line 53 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack3_0__ = -1;
    /* IL_0016: call MT3620Blink.Interops.epoll_wait */
#line 53 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_0__ = MT3620Blink_Interops_epoll_wait(stack0_0__, stack1_0__, stack2_0__, stack3_0__);
    /* IL_001b: stloc.1  */
#line 53 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    numEventsOccurred = stack0_0__;
    /* IL_001c: ldloc.1  */
#line 55 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_0__ = numEventsOccurred;
    /* IL_001d: ldc.i4.m1  */
#line 55 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_1__ = -1;
    /* IL_001e: ceq  */
#line 55 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_0__ = (int32_t)stack0_0__ == (int32_t)stack1_1__;
    /* IL_0020: stloc.2  */
#line 55 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    local2__ = (bool)stack0_0__;
    /* IL_0021: ldloc.2  */
#line 55 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_3__ = local2__;
    /* IL_0022: brfalse.s IL_0027 */
#line 55 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    if (stack0_3__ == false) goto IL_0027;
    /* IL_0024: nop  */
    /* IL_0025: br.s IL_0064 */
#line 57 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    goto IL_0064;
IL_0027:
    /* IL_0027: ldloc.1  */
#line 59 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_0__ = numEventsOccurred;
    /* IL_0028: ldc.i4.1  */
#line 59 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack1_1__ = 1;
    /* IL_0029: ceq  */
#line 59 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_0__ = (int32_t)stack0_0__ == (int32_t)stack1_1__;
    /* IL_002b: stloc.3  */
#line 59 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    local3__ = (bool)stack0_0__;
    /* IL_002c: ldloc.3  */
#line 59 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_3__ = local3__;
    /* IL_002d: brfalse.s IL_005e */
#line 59 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    if (stack0_3__ == false) goto IL_005e;
    /* IL_002f: nop  */
    /* IL_0030: ldloc.0  */
#line 61 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_4__ = ev;
    /* IL_0031: ldfld MT3620Blink.epoll_event.data */
#line 61 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_5__ = stack0_4__.data;
    /* IL_0036: ldfld MT3620Blink.epoll_data_t.ptr */
#line 61 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_6__ = stack0_5__.ptr;
    /* IL_003b: call System.Runtime.InteropServices.NativePointer.op_Implicit */
#line 61 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_7__ = System_Runtime_InteropServices_NativePointer_op_Implicit_1(stack0_6__);
    /* IL_0040: call System.Runtime.InteropServices.GCHandle.FromIntPtr */
#line 61 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_8__ = System_Runtime_InteropServices_GCHandle_FromIntPtr(stack0_7__);
    /* IL_0045: stloc.s handle */
#line 61 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    handle = stack0_8__;
    /* IL_0047: ldloca.s handle */
#line 62 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_9__ = &handle;
    /* IL_0049: call System.Runtime.InteropServices.GCHandle.get_Target */
#line 62 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_10__ = System_Runtime_InteropServices_GCHandle_get_Target(stack0_9__);
    /* IL_004e: castclass MT3620Blink.IEPollListener */
#line 62 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_11__ = il2c_castclass(frame__.stack0_10__, MT3620Blink_IEPollListener);
    /* IL_0053: stloc.s target */
#line 62 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.target = frame__.stack0_11__;
    /* IL_0055: ldloc.s target */
#line 63 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_11__ = frame__.target;
    /* IL_0057: callvirt MT3620Blink.IEPollListener.OnRaised */
#line 63 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    frame__.stack0_11__->vptr0__->OnRaised(il2c_adjusted_reference(frame__.stack0_11__));
    /* IL_005c: nop  */
    /* IL_005d: nop  */
IL_005e:
    /* IL_005e: nop  */
IL_005f:
    /* IL_005f: ldc.i4.1  */
#line 50 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    stack0_0__ = 1;
    /* IL_0060: stloc.s local6__ */
#line 50 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    local6__ = (bool)stack0_0__;
    /* IL_0062: br.s IL_0003 */
#line 50 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    goto IL_0003;
IL_0064:
    /* IL_0064: ret  */
#line 66 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    il2c_unlink_execution_frame(&frame__);
#line 66 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
    return;
#line 66 "D:\\PROJECT\\IL2C\\samples\\AzureSphere\\MT3620Blink\\Application.cs"
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

#ifdef __cplusplus
}
#endif