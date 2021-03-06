#ifndef System_UInt64_H__
#define System_UInt64_H__

#pragma once

#include <il2c.h>

#ifdef __cplusplus
extern "C" {
#endif

/////////////////////////////////////////////////////////////
// System.UInt64

typedef uint64_t System_UInt64;

typedef System_ValueType_VTABLE_DECL__ System_UInt64_VTABLE_DECL__;

extern System_UInt64_VTABLE_DECL__ System_UInt64_VTABLE__;

IL2C_DECLARE_RUNTIME_TYPE(System_UInt64);

extern /* virtual */ System_String* System_UInt64_ToString(uint64_t* this__);
extern /* virtual */ int32_t System_UInt64_GetHashCode(uint64_t* this__);
extern bool System_UInt64_Equals__System_UInt64(uint64_t* this__, uint64_t obj);
extern /* virtual */ bool System_UInt64_Equals__System_Object(uint64_t* this__, System_Object* obj);
extern /* static */ bool System_UInt64_TryParse__System_String_System_UInt64_REF(System_String* s, uint64_t* result);

#ifdef __cplusplus
}
#endif

#endif
