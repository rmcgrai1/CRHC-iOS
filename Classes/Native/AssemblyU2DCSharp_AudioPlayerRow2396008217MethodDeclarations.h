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

// AudioPlayerRow
struct AudioPlayerRow_t2396008217;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void AudioPlayerRow::.ctor(System.String)
extern "C"  void AudioPlayerRow__ctor_m157042350 (AudioPlayerRow_t2396008217 * __this, String_t* ___audioURL0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioPlayerRow::AudioClip_onLoad()
extern "C"  void AudioPlayerRow_AudioClip_onLoad_m3784991962 (AudioPlayerRow_t2396008217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AudioPlayerRow::createTextureCoroutine(System.Int32,System.Int32)
extern "C"  Il2CppObject * AudioPlayerRow_createTextureCoroutine_m585483435 (AudioPlayerRow_t2396008217 * __this, int32_t ___iW0, int32_t ___iH1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AudioPlayerRow::draw(System.Single)
extern "C"  bool AudioPlayerRow_draw_m1324370189 (AudioPlayerRow_t2396008217 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AudioPlayerRow::getPixelHeight(System.Single)
extern "C"  float AudioPlayerRow_getPixelHeight_m4218719392 (AudioPlayerRow_t2396008217 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioPlayerRow::onDispose()
extern "C"  void AudioPlayerRow_onDispose_m3459122586 (AudioPlayerRow_t2396008217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioPlayerRow::stop()
extern "C"  void AudioPlayerRow_stop_m135207786 (AudioPlayerRow_t2396008217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioPlayerRow::pause()
extern "C"  void AudioPlayerRow_pause_m3783548342 (AudioPlayerRow_t2396008217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioPlayerRow::play()
extern "C"  void AudioPlayerRow_play_m3365033384 (AudioPlayerRow_t2396008217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioPlayerRow::togglePlayPause()
extern "C"  void AudioPlayerRow_togglePlayPause_m3104929388 (AudioPlayerRow_t2396008217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
