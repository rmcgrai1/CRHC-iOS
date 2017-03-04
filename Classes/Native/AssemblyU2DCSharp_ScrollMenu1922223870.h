#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IMenu
struct IMenu_t2695572612;

#include "AssemblyU2DCSharp_IMenu2695572612.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollMenu
struct  ScrollMenu_t1922223870  : public IMenu_t2695572612
{
public:
	// IMenu ScrollMenu::menu
	IMenu_t2695572612 * ___menu_1;
	// System.Single ScrollMenu::scrollFrac
	float ___scrollFrac_2;
	// System.Single ScrollMenu::prevScrollY
	float ___prevScrollY_3;
	// System.Single ScrollMenu::prevScrollFrac
	float ___prevScrollFrac_4;
	// System.Single ScrollMenu::prevHeightDiff
	float ___prevHeightDiff_5;
	// UnityEngine.Color ScrollMenu::color
	Color_t2020392075  ___color_6;

public:
	inline static int32_t get_offset_of_menu_1() { return static_cast<int32_t>(offsetof(ScrollMenu_t1922223870, ___menu_1)); }
	inline IMenu_t2695572612 * get_menu_1() const { return ___menu_1; }
	inline IMenu_t2695572612 ** get_address_of_menu_1() { return &___menu_1; }
	inline void set_menu_1(IMenu_t2695572612 * value)
	{
		___menu_1 = value;
		Il2CppCodeGenWriteBarrier(&___menu_1, value);
	}

	inline static int32_t get_offset_of_scrollFrac_2() { return static_cast<int32_t>(offsetof(ScrollMenu_t1922223870, ___scrollFrac_2)); }
	inline float get_scrollFrac_2() const { return ___scrollFrac_2; }
	inline float* get_address_of_scrollFrac_2() { return &___scrollFrac_2; }
	inline void set_scrollFrac_2(float value)
	{
		___scrollFrac_2 = value;
	}

	inline static int32_t get_offset_of_prevScrollY_3() { return static_cast<int32_t>(offsetof(ScrollMenu_t1922223870, ___prevScrollY_3)); }
	inline float get_prevScrollY_3() const { return ___prevScrollY_3; }
	inline float* get_address_of_prevScrollY_3() { return &___prevScrollY_3; }
	inline void set_prevScrollY_3(float value)
	{
		___prevScrollY_3 = value;
	}

	inline static int32_t get_offset_of_prevScrollFrac_4() { return static_cast<int32_t>(offsetof(ScrollMenu_t1922223870, ___prevScrollFrac_4)); }
	inline float get_prevScrollFrac_4() const { return ___prevScrollFrac_4; }
	inline float* get_address_of_prevScrollFrac_4() { return &___prevScrollFrac_4; }
	inline void set_prevScrollFrac_4(float value)
	{
		___prevScrollFrac_4 = value;
	}

	inline static int32_t get_offset_of_prevHeightDiff_5() { return static_cast<int32_t>(offsetof(ScrollMenu_t1922223870, ___prevHeightDiff_5)); }
	inline float get_prevHeightDiff_5() const { return ___prevHeightDiff_5; }
	inline float* get_address_of_prevHeightDiff_5() { return &___prevHeightDiff_5; }
	inline void set_prevHeightDiff_5(float value)
	{
		___prevHeightDiff_5 = value;
	}

	inline static int32_t get_offset_of_color_6() { return static_cast<int32_t>(offsetof(ScrollMenu_t1922223870, ___color_6)); }
	inline Color_t2020392075  get_color_6() const { return ___color_6; }
	inline Color_t2020392075 * get_address_of_color_6() { return &___color_6; }
	inline void set_color_6(Color_t2020392075  value)
	{
		___color_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
