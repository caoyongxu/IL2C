﻿// [15-2] This is Calculator.Core native code translated by IL2C, do not edit.

#include <Calculator.Core.h>
#include <Calculator.Core_internal.h>

#include <mscorlib.h>

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////////////////////////////////////////////////////////////////
// [9-1] Type: Calculator.AbstractNode

//////////////////////////////////////////////////////////////////////////////////
// [9-2] File scope prototypes:

//////////////////////////////////////////////////////////////////////////////////
// [9-4] Type: Calculator.AbstractNode

///////////////////////////////////////
// [3] Calculator.AbstractNode..ctor(Calculator.AbstractNode this__, System.Int32 nextIndex)

//-------------------
// [3-7] Declare execution frame:

typedef struct Calculator_AbstractNode__ctor_EXECUTION_FRAME_DECL
{
    const IL2C_EXECUTION_FRAME* pNext__;
    const uint16_t objRefCount__;
    const uint16_t valueCount__;
    //-------------------- objref
    Calculator_AbstractNode* stack0_0__;
} Calculator_AbstractNode__ctor_EXECUTION_FRAME__;

//-------------------
// [3-2] Function body:

void Calculator_AbstractNode__ctor(Calculator_AbstractNode* this__, int32_t nextIndex)
{
    il2c_assert(this__ != NULL);

    //-------------------
    // [3-4] Evaluation stacks (!objref):

    int32_t stack1_0__;

    //-------------------
    // [3-5] Setup execution frame:

    Calculator_AbstractNode__ctor_EXECUTION_FRAME__ frame__ =
        { NULL, 1 };
    il2c_link_execution_frame(&frame__);

    //-------------------
    // [3-6] IL body:

    /* IL_0000: ldarg.0                         : PolishNotation.cs(13) */
    frame__.stack0_0__ = this__;
    /* IL_0001: call System.Object..ctor        : PolishNotation.cs(13) */
    System_Object__ctor((System_Object*)frame__.stack0_0__);
    /* IL_0006: nop                             : PolishNotation.cs(13) */
    /* IL_0007: nop  */
    /* IL_0008: ldarg.0  */
    frame__.stack0_0__ = this__;
    /* IL_0009: ldarg.1                         : PolishNotation.cs(15) */
    stack1_0__ = nextIndex;
    /* IL_000a: stfld Calculator.AbstractNode.NextIndex : PolishNotation.cs(15) */
    frame__.stack0_0__->NextIndex = stack1_0__;
    /* IL_000f: ret                             : PolishNotation.cs(16) */
    il2c_unlink_execution_frame(&frame__);
    return;
}

//////////////////////
// [7] Runtime helpers:

// [7-10-1] VTable (Not defined, same as System.Object)

// [7-8] Runtime type information
IL2C_RUNTIME_TYPE_BEGIN(Calculator_AbstractNode, "Calculator.AbstractNode", IL2C_TYPE_REFERENCE, sizeof(Calculator_AbstractNode), System_Object, 0, 0)
IL2C_RUNTIME_TYPE_END();

#ifdef __cplusplus
}
#endif
