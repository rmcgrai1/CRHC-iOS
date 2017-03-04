#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Reference`1/LoadEventDelegate<System.Object>
struct LoadEventDelegate_t2479697798;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Reference`1/LoadEventDelegate<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadEventDelegate__ctor_m4180991055_gshared (LoadEventDelegate_t2479697798 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define LoadEventDelegate__ctor_m4180991055(__this, ___object0, ___method1, method) ((  void (*) (LoadEventDelegate_t2479697798 *, Il2CppObject *, IntPtr_t, const MethodInfo*))LoadEventDelegate__ctor_m4180991055_gshared)(__this, ___object0, ___method1, method)
// System.Void Reference`1/LoadEventDelegate<System.Object>::Invoke()
extern "C"  void LoadEventDelegate_Invoke_m467595891_gshared (LoadEventDelegate_t2479697798 * __this, const MethodInfo* method);
#define LoadEventDelegate_Invoke_m467595891(__this, method) ((  void (*) (LoadEventDelegate_t2479697798 *, const MethodInfo*))LoadEventDelegate_Invoke_m467595891_gshared)(__this, method)
// System.IAsyncResult Reference`1/LoadEventDelegate<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadEventDelegate_BeginInvoke_m3869806152_gshared (LoadEventDelegate_t2479697798 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method);
#define LoadEventDelegate_BeginInvoke_m3869806152(__this, ___callback0, ___object1, method) ((  Il2CppObject * (*) (LoadEventDelegate_t2479697798 *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))LoadEventDelegate_BeginInvoke_m3869806152_gshared)(__this, ___callback0, ___object1, method)
// System.Void Reference`1/LoadEventDelegate<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void LoadEventDelegate_EndInvoke_m250792489_gshared (LoadEventDelegate_t2479697798 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define LoadEventDelegate_EndInvoke_m250792489(__this, ___result0, method) ((  void (*) (LoadEventDelegate_t2479697798 *, Il2CppObject *, const MethodInfo*))LoadEventDelegate_EndInvoke_m250792489_gshared)(__this, ___result0, method)
