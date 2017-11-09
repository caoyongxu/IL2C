#ifndef __IL2C_H__
#define __IL2C_H__

#include <assert.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

///////////////////////////////////////////////////////

typedef struct __EXECUTION_FRAME__ __EXECUTION_FRAME__;
typedef struct __REF_HEADER__ __REF_HEADER__;
typedef void(*__MARK_HANDLER__)(void*);

/////////////////////////////////////////////////////////////

extern void __gc_initialize__();

extern void __gc_clear_gcmark__();
extern void __gc_mark_gcmark__();
extern void __gc_sweep_garbage__();

extern void __gc_get_uninitialized_object__(
    void** ppReference, uint16_t bodySize, __MARK_HANDLER__ pMarkHandler);

extern void __gc_link_execution_frame__(/* __EXECUTION_FRAME__* */ void* pNewFrame);
extern void __gc_unlink_execution_frame__(/* __EXECUTION_FRAME__* */ void* pFrame);

extern void __gc_mark_from_handler__(void* pReference);
#define __TRY_MARK_FROM_HANDLER__(pReference) \
    if ((pReference) != NULL) __gc_mark_from_handler__(pReference)

/////////////////////////////////////////////////////////////

typedef struct System_Object System_Object;
#define __System_Object_SIZEOF__() (0)

extern void System_Object__ctor(System_Object* __this);
extern void __System_Object_MARK_HANDLER__(void* pReference);
extern void __System_Object_NEW__(System_Object** ppReference);

#endif
