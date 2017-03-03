#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Landmark
struct Landmark_t1862459476;

#include "AssemblyU2DCSharp_ImageItem1947162666.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tour/ARButton
struct  ARButton_t3211784512  : public ImageItem_t1947162666
{
public:
	// Landmark Tour/ARButton::landmark
	Landmark_t1862459476 * ___landmark_4;

public:
	inline static int32_t get_offset_of_landmark_4() { return static_cast<int32_t>(offsetof(ARButton_t3211784512, ___landmark_4)); }
	inline Landmark_t1862459476 * get_landmark_4() const { return ___landmark_4; }
	inline Landmark_t1862459476 ** get_address_of_landmark_4() { return &___landmark_4; }
	inline void set_landmark_4(Landmark_t1862459476 * value)
	{
		___landmark_4 = value;
		Il2CppCodeGenWriteBarrier(&___landmark_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
