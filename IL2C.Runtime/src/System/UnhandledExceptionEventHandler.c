#include "il2c_private.h"

/////////////////////////////////////////////////////////////
// System.UnhandledExceptionEventHandler

void System_UnhandledExceptionEventHandler_Invoke(
    System_UnhandledExceptionEventHandler* this__, System_Object* sender, System_UnhandledExceptionEventArgs* e)
{
    il2c_assert(this__ != NULL);
    il2c_assert(this__->vptr0__ == &System_Delegate_VTABLE__);
    il2c_assert(this__->count__ >= 1);

    uintptr_t index = 0;
    do
    {
        IL2C_METHOD_TABLE* pMethodtbl = &this__->methodtbl__[index];
        if (pMethodtbl->target != NULL)
            ((void (*)(void*, System_Object*, System_UnhandledExceptionEventArgs*))(pMethodtbl->methodPtr))(pMethodtbl->target, sender, e);
        else
            ((void (*)(System_Object*, System_UnhandledExceptionEventArgs*))(pMethodtbl->methodPtr))(sender, e);
        index++;
    }
    while (il2c_likely__(index < this__->count__));
}

/////////////////////////////////////////////////
// VTable and runtime type info declarations

IL2C_RUNTIME_TYPE_BEGIN(
    System_UnhandledExceptionEventHandler,
    "System.UnhandledExceptionEventHandler",
    IL2C_TYPE_VARIABLE | IL2C_TYPE_WITH_MARK_HANDLER,
    0,
    System_Object,
    System_Delegate_MarkHandler__,
    0)
IL2C_RUNTIME_TYPE_END();
