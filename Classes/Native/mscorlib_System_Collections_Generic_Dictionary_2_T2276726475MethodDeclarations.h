﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>>
struct Transform_1_t2276726475;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24237374408.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv2593001762.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3702740214_gshared (Transform_1_t2276726475 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3702740214(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2276726475 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3702740214_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t4237374408  Transform_1_Invoke_m2910843126_gshared (Transform_1_t2276726475 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2910843126(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t4237374408  (*) (Transform_1_t2276726475 *, Il2CppObject *, int32_t, const MethodInfo*))Transform_1_Invoke_m2910843126_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1023279391_gshared (Transform_1_t2276726475 * __this, Il2CppObject * ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1023279391(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2276726475 *, Il2CppObject *, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1023279391_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode,System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4237374408  Transform_1_EndInvoke_m2547956300_gshared (Transform_1_t2276726475 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2547956300(__this, ___result0, method) ((  KeyValuePair_2_t4237374408  (*) (Transform_1_t2276726475 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2547956300_gshared)(__this, ___result0, method)
