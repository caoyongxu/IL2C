#include "il2c_private.h"

/////////////////////////////////////////////////////////////
// System.ValueType

System_String* System_ValueType_ToString(System_ValueType* this__)
{
    return System_Object_ToString((System_Object*)this__);
}

int32_t System_ValueType_GetHashCode(System_ValueType* this__)
{
    // TODO:
    il2c_assert(0);
    return (int32_t)(intptr_t)this__;
}

bool System_ValueType_Equals(System_ValueType* this__, System_Object* obj)
{
    // TODO:
    il2c_assert(0);
    return false;
}

/////////////////////////////////////////////////
// VTable and runtime type info declarations

// NOTE:
//   This System_ValueType's vtable unreferenced from the System.ValueType type.
//   Because it's abstract class and can't instantiate directly.
//   The vtable uses from derived types, these are all derived value types.
//   And the IL2C uses the vtable when value type turn to boxed instance,
//   these instances have the vptr fields (vptr0 and other interfaces.)
//   The boxed value type has data fields next to vptr0.
//
// The boxed value type instance:
//   +----------------------+
//   | IL2C_REF_HEADER      |
//   +----------------------+ <-- pBoxed     ---------------------------   <-------------+----+
//   | vptr0__              | <-- pVTable      | sizeof(System_ValueType)                |    |
//   +----------------------+                -----------                                 |    |
//   |        :             |                  ^                                         |    |
//   | (value data)         |                  | The value real data                     |    | Adjustor offset into the vtable for the interface
//   |        :             |                  v                                         |    | (These vtables are generated by IL2C)
//   +----------------------+                ---------------------------           <-----+    |
//   | vptr_IFoo__          |                  | (optional implemented interface vptr)        | 
//   +----------------------+                ---------------------------           <----------+
//   | vptr_IBar__          |                  | (optional implemented interface vptr)
//   +----------------------+                ---------------------------

System_ValueType_VTABLE_DECL__ System_ValueType_VTABLE__ = {
    0, // Adjustor offset
    (bool(*)(void*, System_Object*))System_ValueType_Equals,
    (void(*)(void*))System_Object_Finalize,
    (int32_t(*)(void*))System_ValueType_GetHashCode,
    (System_String* (*)(void*))System_ValueType_ToString
};

IL2C_RUNTIME_TYPE_ABSTRACT_BEGIN(System_ValueType, "System.ValueType", sizeof(System_ValueType), System_Object, 0, 0)
IL2C_RUNTIME_TYPE_END();