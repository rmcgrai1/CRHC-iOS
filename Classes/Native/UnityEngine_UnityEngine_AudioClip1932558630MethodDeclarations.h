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

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "codegen/il2cpp-codegen.h"

// System.Single UnityEngine.AudioClip::get_length()
extern "C"  float AudioClip_get_length_m3881628918 (AudioClip_t1932558630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioClip::get_samples()
extern "C"  int32_t AudioClip_get_samples_m3690111759 (AudioClip_t1932558630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioClip::get_channels()
extern "C"  int32_t AudioClip_get_channels_m211770176 (AudioClip_t1932558630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
extern "C"  bool AudioClip_GetData_m1645657273 (AudioClip_t1932558630 * __this, SingleU5BU5D_t577127397* ___data0, int32_t ___offsetSamples1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C"  void AudioClip_InvokePCMReaderCallback_Internal_m1966286598 (AudioClip_t1932558630 * __this, SingleU5BU5D_t577127397* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C"  void AudioClip_InvokePCMSetPositionCallback_Internal_m2304858844 (AudioClip_t1932558630 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
