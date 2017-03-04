#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CrhcItem
struct CrhcItem_t1379468653;
// Reference`1<UnityEngine.Texture2D>
struct Reference_1_t3035523416;

#include "AssemblyU2DCSharp_RectItem1720926083.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Landmark/BackButton
struct  BackButton_t2597280886  : public RectItem_t1720926083
{
public:
	// CrhcItem Landmark/BackButton::owner
	CrhcItem_t1379468653 * ___owner_2;
	// Reference`1<UnityEngine.Texture2D> Landmark/BackButton::arrowTexture
	Reference_1_t3035523416 * ___arrowTexture_3;
	// System.Single Landmark/BackButton::PADDING
	float ___PADDING_4;

public:
	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(BackButton_t2597280886, ___owner_2)); }
	inline CrhcItem_t1379468653 * get_owner_2() const { return ___owner_2; }
	inline CrhcItem_t1379468653 ** get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(CrhcItem_t1379468653 * value)
	{
		___owner_2 = value;
		Il2CppCodeGenWriteBarrier(&___owner_2, value);
	}

	inline static int32_t get_offset_of_arrowTexture_3() { return static_cast<int32_t>(offsetof(BackButton_t2597280886, ___arrowTexture_3)); }
	inline Reference_1_t3035523416 * get_arrowTexture_3() const { return ___arrowTexture_3; }
	inline Reference_1_t3035523416 ** get_address_of_arrowTexture_3() { return &___arrowTexture_3; }
	inline void set_arrowTexture_3(Reference_1_t3035523416 * value)
	{
		___arrowTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___arrowTexture_3, value);
	}

	inline static int32_t get_offset_of_PADDING_4() { return static_cast<int32_t>(offsetof(BackButton_t2597280886, ___PADDING_4)); }
	inline float get_PADDING_4() const { return ___PADDING_4; }
	inline float* get_address_of_PADDING_4() { return &___PADDING_4; }
	inline void set_PADDING_4(float value)
	{
		___PADDING_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
