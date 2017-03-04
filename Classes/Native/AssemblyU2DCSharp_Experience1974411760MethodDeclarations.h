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

// Experience
struct Experience_t1974411760;
// CrhcItem
struct CrhcItem_t1379468653;
// Newtonsoft.Json.Linq.JObject
struct JObject_t278519297;
// Landmark
struct Landmark_t1862459476;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CrhcItem1379468653.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JObject278519297.h"

// System.Void Experience::.ctor(CrhcItem,Newtonsoft.Json.Linq.JObject)
extern "C"  void Experience__ctor_m114286484 (Experience_t1974411760 * __this, CrhcItem_t1379468653 * ___parent0, JObject_t278519297 * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Experience::onDispose()
extern "C"  void Experience_onDispose_m1220066003 (Experience_t1974411760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Landmark Experience::getLandmark()
extern "C"  Landmark_t1862459476 * Experience_getLandmark_m3503718010 (Experience_t1974411760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Experience::getTargetId()
extern "C"  String_t* Experience_getTargetId_m1716866172 (Experience_t1974411760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Experience::getSource()
extern "C"  String_t* Experience_getSource_m2850666847 (Experience_t1974411760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Experience::tryLoad()
extern "C"  Il2CppObject * Experience_tryLoad_m3943600654 (Experience_t1974411760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Experience::tryUnload()
extern "C"  Il2CppObject * Experience_tryUnload_m3801431073 (Experience_t1974411760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
