#include "il2c_private.h"

/////////////////////////////////////////////////////////////
// System.UInt64

System_String* System_UInt64_ToString(uint64_t* this__)
{
    wchar_t buffer[24];

    il2c_ui64tow(*this__, buffer, 10);
    return il2c_new_string(buffer);
}

int32_t System_UInt64_GetHashCode(uint64_t* this__)
{
    il2c_assert(this__ != NULL);

    return *this__;
}

bool System_UInt64_Equals(uint64_t* this__, uint64_t obj)
{
    il2c_assert(this__ != NULL);

    return *this__ == obj;
}

bool System_UInt64_Equals_1(uint64_t* this__, System_Object* obj)
{
    il2c_assert(this__ != NULL);

    if (obj == NULL)
    {
        return false;
    }

    uint64_t rhs = il2c_unbox(obj, System_UInt64);
    return *this__ == rhs;
}

/////////////////////////////////////////////////
// VTable and runtime type info declarations

void* __System_UInt64_IL2C_RuntimeCast__(uint64_t* this__, IL2C_RUNTIME_TYPE_DECL* type)
{
    il2c_assert(this__ != NULL);

    if (type == il2c_typeof(System_UInt64)) return this__;
    return __System_ValueType_IL2C_RuntimeCast__((System_ValueType*)this__, type);
}

__System_UInt64_VTABLE_DECL__ __System_UInt64_VTABLE__ = {
    /* internalcall */ __System_UInt64_IL2C_RuntimeCast__,
    System_UInt64_ToString,
    System_UInt64_GetHashCode,
    (void(*)(System_UInt64*))System_Object_Finalize,
    System_UInt64_Equals_1
};

IL2C_RUNTIME_TYPE_DECL __System_UInt64_RUNTIME_TYPE__ = {
    "System.UInt64",
    IL2C_TYPE_INTEGER,
    sizeof(System_UInt64),
    /* internalcall */ IL2C_DEFAULT_MARK_HANDLER };
