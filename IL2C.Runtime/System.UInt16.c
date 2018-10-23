#include "il2c_private.h"

/////////////////////////////////////////////////////////////
// System.UInt16

System_String* System_UInt16_ToString(uint16_t* this__)
{
    wchar_t buffer[7];

    il2c_itow(*this__, buffer, 10);
    return il2c_new_string(buffer);
}

int32_t System_UInt16_GetHashCode(uint16_t* this__)
{
    il2c_assert(this__ != NULL);

    return *this__;
}

bool System_UInt16_Equals(uint16_t* this__, uint16_t obj)
{
    il2c_assert(this__ != NULL);

    return *this__ == obj;
}

bool System_UInt16_Equals_1(uint16_t* this__, System_Object* obj)
{
    il2c_assert(this__ != NULL);

    if (obj == NULL)
    {
        return false;
    }

    uint16_t rhs = il2c_unbox(obj, System_UInt16);
    return *this__ == rhs;
}

/////////////////////////////////////////////////
// VTable and runtime type info declarations

void* __System_UInt16_IL2C_RuntimeCast__(uint16_t* this__, IL2C_RUNTIME_TYPE_DECL* type)
{
    il2c_assert(this__ != NULL);

    if (type == il2c_typeof(System_UInt16)) return this__;
    return __System_ValueType_IL2C_RuntimeCast__((System_ValueType*)this__, type);
}

__System_UInt16_VTABLE_DECL__ __System_UInt16_VTABLE__ = {
    /* internalcall */ __System_UInt16_IL2C_RuntimeCast__,
    System_UInt16_ToString,
    System_UInt16_GetHashCode,
    (void(*)(System_UInt16*))System_Object_Finalize,
    System_UInt16_Equals_1
};

IL2C_RUNTIME_TYPE_DECL __System_UInt16_RUNTIME_TYPE__ = {
    "System.UInt16",
    IL2C_TYPE_INTEGER,
    sizeof(System_UInt16),
    /* internalcall */ IL2C_DEFAULT_MARK_HANDLER };
