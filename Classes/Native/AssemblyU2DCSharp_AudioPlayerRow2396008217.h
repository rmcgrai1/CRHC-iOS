#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Reference`1<UnityEngine.AudioClip>
struct Reference_1_t1425086317;

#include "AssemblyU2DCSharp_IRow3247553901.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioPlayerRow
struct  AudioPlayerRow_t2396008217  : public IRow_t3247553901
{
public:
	// System.Single AudioPlayerRow::AUDIO_PLAYER_HEIGHT
	float ___AUDIO_PLAYER_HEIGHT_1;
	// Reference`1<UnityEngine.AudioClip> AudioPlayerRow::audioClip
	Reference_1_t1425086317 * ___audioClip_2;

public:
	inline static int32_t get_offset_of_AUDIO_PLAYER_HEIGHT_1() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___AUDIO_PLAYER_HEIGHT_1)); }
	inline float get_AUDIO_PLAYER_HEIGHT_1() const { return ___AUDIO_PLAYER_HEIGHT_1; }
	inline float* get_address_of_AUDIO_PLAYER_HEIGHT_1() { return &___AUDIO_PLAYER_HEIGHT_1; }
	inline void set_AUDIO_PLAYER_HEIGHT_1(float value)
	{
		___AUDIO_PLAYER_HEIGHT_1 = value;
	}

	inline static int32_t get_offset_of_audioClip_2() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___audioClip_2)); }
	inline Reference_1_t1425086317 * get_audioClip_2() const { return ___audioClip_2; }
	inline Reference_1_t1425086317 ** get_address_of_audioClip_2() { return &___audioClip_2; }
	inline void set_audioClip_2(Reference_1_t1425086317 * value)
	{
		___audioClip_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
