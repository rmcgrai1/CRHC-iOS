#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// generic.number.Number
struct Number_t1709165791;
// Reference`1<UnityEngine.AudioClip>
struct Reference_1_t1425086317;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "AssemblyU2DCSharp_IRow3247553901.h"
#include "AssemblyU2DCSharp_AudioPlayerRow_PlayState1440229357.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioPlayerRow
struct  AudioPlayerRow_t2396008217  : public IRow_t3247553901
{
public:
	// generic.number.Number AudioPlayerRow::AUDIO_PLAYER_HEIGHT
	Number_t1709165791 * ___AUDIO_PLAYER_HEIGHT_1;
	// Reference`1<UnityEngine.AudioClip> AudioPlayerRow::audioClip
	Reference_1_t1425086317 * ___audioClip_2;
	// UnityEngine.AudioSource AudioPlayerRow::audioSource
	AudioSource_t1135106623 * ___audioSource_3;
	// UnityEngine.Texture2D AudioPlayerRow::waveformTexture
	Texture2D_t3542995729 * ___waveformTexture_4;
	// System.Boolean AudioPlayerRow::hasWaveformTexture
	bool ___hasWaveformTexture_5;
	// System.Single AudioPlayerRow::progress
	float ___progress_6;
	// System.Int32 AudioPlayerRow::stepsPerFrame
	int32_t ___stepsPerFrame_7;
	// System.Boolean AudioPlayerRow::wasHeld
	bool ___wasHeld_8;
	// System.Boolean AudioPlayerRow::isScrubbing
	bool ___isScrubbing_9;
	// AudioPlayerRow/PlayState AudioPlayerRow::playState
	int32_t ___playState_10;

public:
	inline static int32_t get_offset_of_AUDIO_PLAYER_HEIGHT_1() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___AUDIO_PLAYER_HEIGHT_1)); }
	inline Number_t1709165791 * get_AUDIO_PLAYER_HEIGHT_1() const { return ___AUDIO_PLAYER_HEIGHT_1; }
	inline Number_t1709165791 ** get_address_of_AUDIO_PLAYER_HEIGHT_1() { return &___AUDIO_PLAYER_HEIGHT_1; }
	inline void set_AUDIO_PLAYER_HEIGHT_1(Number_t1709165791 * value)
	{
		___AUDIO_PLAYER_HEIGHT_1 = value;
		Il2CppCodeGenWriteBarrier(&___AUDIO_PLAYER_HEIGHT_1, value);
	}

	inline static int32_t get_offset_of_audioClip_2() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___audioClip_2)); }
	inline Reference_1_t1425086317 * get_audioClip_2() const { return ___audioClip_2; }
	inline Reference_1_t1425086317 ** get_address_of_audioClip_2() { return &___audioClip_2; }
	inline void set_audioClip_2(Reference_1_t1425086317 * value)
	{
		___audioClip_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_2, value);
	}

	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___audioSource_3)); }
	inline AudioSource_t1135106623 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t1135106623 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_waveformTexture_4() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___waveformTexture_4)); }
	inline Texture2D_t3542995729 * get_waveformTexture_4() const { return ___waveformTexture_4; }
	inline Texture2D_t3542995729 ** get_address_of_waveformTexture_4() { return &___waveformTexture_4; }
	inline void set_waveformTexture_4(Texture2D_t3542995729 * value)
	{
		___waveformTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___waveformTexture_4, value);
	}

	inline static int32_t get_offset_of_hasWaveformTexture_5() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___hasWaveformTexture_5)); }
	inline bool get_hasWaveformTexture_5() const { return ___hasWaveformTexture_5; }
	inline bool* get_address_of_hasWaveformTexture_5() { return &___hasWaveformTexture_5; }
	inline void set_hasWaveformTexture_5(bool value)
	{
		___hasWaveformTexture_5 = value;
	}

	inline static int32_t get_offset_of_progress_6() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___progress_6)); }
	inline float get_progress_6() const { return ___progress_6; }
	inline float* get_address_of_progress_6() { return &___progress_6; }
	inline void set_progress_6(float value)
	{
		___progress_6 = value;
	}

	inline static int32_t get_offset_of_stepsPerFrame_7() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___stepsPerFrame_7)); }
	inline int32_t get_stepsPerFrame_7() const { return ___stepsPerFrame_7; }
	inline int32_t* get_address_of_stepsPerFrame_7() { return &___stepsPerFrame_7; }
	inline void set_stepsPerFrame_7(int32_t value)
	{
		___stepsPerFrame_7 = value;
	}

	inline static int32_t get_offset_of_wasHeld_8() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___wasHeld_8)); }
	inline bool get_wasHeld_8() const { return ___wasHeld_8; }
	inline bool* get_address_of_wasHeld_8() { return &___wasHeld_8; }
	inline void set_wasHeld_8(bool value)
	{
		___wasHeld_8 = value;
	}

	inline static int32_t get_offset_of_isScrubbing_9() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___isScrubbing_9)); }
	inline bool get_isScrubbing_9() const { return ___isScrubbing_9; }
	inline bool* get_address_of_isScrubbing_9() { return &___isScrubbing_9; }
	inline void set_isScrubbing_9(bool value)
	{
		___isScrubbing_9 = value;
	}

	inline static int32_t get_offset_of_playState_10() { return static_cast<int32_t>(offsetof(AudioPlayerRow_t2396008217, ___playState_10)); }
	inline int32_t get_playState_10() const { return ___playState_10; }
	inline int32_t* get_address_of_playState_10() { return &___playState_10; }
	inline void set_playState_10(int32_t value)
	{
		___playState_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
