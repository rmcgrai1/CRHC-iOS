#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Experience
struct Experience_t1974411760;
// Reference`1<UnityEngine.Texture2D>
struct Reference_1_t3035523416;

#include "AssemblyU2DCSharp_ImageItem1947162666.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Landmark/ARButton
struct  ARButton_t1476977038  : public ImageItem_t1947162666
{
public:
	// Experience Landmark/ARButton::exp
	Experience_t1974411760 * ___exp_4;
	// Reference`1<UnityEngine.Texture2D> Landmark/ARButton::tex
	Reference_1_t3035523416 * ___tex_5;

public:
	inline static int32_t get_offset_of_exp_4() { return static_cast<int32_t>(offsetof(ARButton_t1476977038, ___exp_4)); }
	inline Experience_t1974411760 * get_exp_4() const { return ___exp_4; }
	inline Experience_t1974411760 ** get_address_of_exp_4() { return &___exp_4; }
	inline void set_exp_4(Experience_t1974411760 * value)
	{
		___exp_4 = value;
		Il2CppCodeGenWriteBarrier(&___exp_4, value);
	}

	inline static int32_t get_offset_of_tex_5() { return static_cast<int32_t>(offsetof(ARButton_t1476977038, ___tex_5)); }
	inline Reference_1_t3035523416 * get_tex_5() const { return ___tex_5; }
	inline Reference_1_t3035523416 ** get_address_of_tex_5() { return &___tex_5; }
	inline void set_tex_5(Reference_1_t3035523416 * value)
	{
		___tex_5 = value;
		Il2CppCodeGenWriteBarrier(&___tex_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
