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

// Reference`1<System.Object>
struct Reference_1_t2181976982;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Reference`1/LoadEventDelegate<System.Object>
struct LoadEventDelegate_t2479697798;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Reference`1<System.Object>::.ctor(System.String)
extern "C"  void Reference_1__ctor_m1603068643_gshared (Reference_1_t2181976982 * __this, String_t* ___path0, const MethodInfo* method);
#define Reference_1__ctor_m1603068643(__this, ___path0, method) ((  void (*) (Reference_1_t2181976982 *, String_t*, const MethodInfo*))Reference_1__ctor_m1603068643_gshared)(__this, ___path0, method)
// System.Void Reference`1<System.Object>::setWWW(UnityEngine.WWW)
extern "C"  void Reference_1_setWWW_m2245621374_gshared (Reference_1_t2181976982 * __this, WWW_t2919945039 * ___www0, const MethodInfo* method);
#define Reference_1_setWWW_m2245621374(__this, ___www0, method) ((  void (*) (Reference_1_t2181976982 *, WWW_t2919945039 *, const MethodInfo*))Reference_1_setWWW_m2245621374_gshared)(__this, ___www0, method)
// System.Single Reference`1<System.Object>::getLoadFraction()
extern "C"  float Reference_1_getLoadFraction_m3334654085_gshared (Reference_1_t2181976982 * __this, const MethodInfo* method);
#define Reference_1_getLoadFraction_m3334654085(__this, method) ((  float (*) (Reference_1_t2181976982 *, const MethodInfo*))Reference_1_getLoadFraction_m3334654085_gshared)(__this, method)
// System.Boolean Reference`1<System.Object>::isLoaded()
extern "C"  bool Reference_1_isLoaded_m446621478_gshared (Reference_1_t2181976982 * __this, const MethodInfo* method);
#define Reference_1_isLoaded_m446621478(__this, method) ((  bool (*) (Reference_1_t2181976982 *, const MethodInfo*))Reference_1_isLoaded_m446621478_gshared)(__this, method)
// System.String Reference`1<System.Object>::getPath()
extern "C"  String_t* Reference_1_getPath_m3400763719_gshared (Reference_1_t2181976982 * __this, const MethodInfo* method);
#define Reference_1_getPath_m3400763719(__this, method) ((  String_t* (*) (Reference_1_t2181976982 *, const MethodInfo*))Reference_1_getPath_m3400763719_gshared)(__this, method)
// System.Void Reference`1<System.Object>::setResource(T,System.Byte[])
extern "C"  void Reference_1_setResource_m1951400040_gshared (Reference_1_t2181976982 * __this, Il2CppObject * ___data0, ByteU5BU5D_t3397334013* ___byteData1, const MethodInfo* method);
#define Reference_1_setResource_m1951400040(__this, ___data0, ___byteData1, method) ((  void (*) (Reference_1_t2181976982 *, Il2CppObject *, ByteU5BU5D_t3397334013*, const MethodInfo*))Reference_1_setResource_m1951400040_gshared)(__this, ___data0, ___byteData1, method)
// T Reference`1<System.Object>::getResource()
extern "C"  Il2CppObject * Reference_1_getResource_m521264226_gshared (Reference_1_t2181976982 * __this, const MethodInfo* method);
#define Reference_1_getResource_m521264226(__this, method) ((  Il2CppObject * (*) (Reference_1_t2181976982 *, const MethodInfo*))Reference_1_getResource_m521264226_gshared)(__this, method)
// System.Void Reference`1<System.Object>::save(System.String)
extern "C"  void Reference_1_save_m3530090170_gshared (Reference_1_t2181976982 * __this, String_t* ___localPath0, const MethodInfo* method);
#define Reference_1_save_m3530090170(__this, ___localPath0, method) ((  void (*) (Reference_1_t2181976982 *, String_t*, const MethodInfo*))Reference_1_save_m3530090170_gshared)(__this, ___localPath0, method)
// System.Void Reference`1<System.Object>::tryLoad()
extern "C"  void Reference_1_tryLoad_m3940182764_gshared (Reference_1_t2181976982 * __this, const MethodInfo* method);
#define Reference_1_tryLoad_m3940182764(__this, method) ((  void (*) (Reference_1_t2181976982 *, const MethodInfo*))Reference_1_tryLoad_m3940182764_gshared)(__this, method)
// System.Void Reference`1<System.Object>::unload()
extern "C"  void Reference_1_unload_m1842880738_gshared (Reference_1_t2181976982 * __this, const MethodInfo* method);
#define Reference_1_unload_m1842880738(__this, method) ((  void (*) (Reference_1_t2181976982 *, const MethodInfo*))Reference_1_unload_m1842880738_gshared)(__this, method)
// System.Void Reference`1<System.Object>::add_onLoad(Reference`1/LoadEventDelegate<T>)
extern "C"  void Reference_1_add_onLoad_m3557321136_gshared (Reference_1_t2181976982 * __this, LoadEventDelegate_t2479697798 * ___value0, const MethodInfo* method);
#define Reference_1_add_onLoad_m3557321136(__this, ___value0, method) ((  void (*) (Reference_1_t2181976982 *, LoadEventDelegate_t2479697798 *, const MethodInfo*))Reference_1_add_onLoad_m3557321136_gshared)(__this, ___value0, method)
// System.Void Reference`1<System.Object>::remove_onLoad(Reference`1/LoadEventDelegate<T>)
extern "C"  void Reference_1_remove_onLoad_m279524993_gshared (Reference_1_t2181976982 * __this, LoadEventDelegate_t2479697798 * ___value0, const MethodInfo* method);
#define Reference_1_remove_onLoad_m279524993(__this, ___value0, method) ((  void (*) (Reference_1_t2181976982 *, LoadEventDelegate_t2479697798 *, const MethodInfo*))Reference_1_remove_onLoad_m279524993_gshared)(__this, ___value0, method)
