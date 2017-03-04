#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<UnityEngine.Rect>
struct Stack_1_t474516484;
// System.Collections.Generic.Stack`1<UnityEngine.Color>
struct Stack_1_t3108120229;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GUIX
struct  GUIX_t1405793021  : public Il2CppObject
{
public:

public:
};

struct GUIX_t1405793021_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<UnityEngine.Rect> GUIX::clipStack
	Stack_1_t474516484 * ___clipStack_0;
	// UnityEngine.Vector2 GUIX::topLeft
	Vector2_t2243707579  ___topLeft_1;
	// System.Collections.Generic.Stack`1<UnityEngine.Color> GUIX::colorStack
	Stack_1_t3108120229 * ___colorStack_2;
	// UnityEngine.Texture2D GUIX::whiteTexture
	Texture2D_t3542995729 * ___whiteTexture_3;
	// UnityEngine.GUIStyle GUIX::whiteTextureStyle
	GUIStyle_t1799908754 * ___whiteTextureStyle_4;
	// UnityEngine.GUIStyle GUIX::standardTextureStyle
	GUIStyle_t1799908754 * ___standardTextureStyle_5;

public:
	inline static int32_t get_offset_of_clipStack_0() { return static_cast<int32_t>(offsetof(GUIX_t1405793021_StaticFields, ___clipStack_0)); }
	inline Stack_1_t474516484 * get_clipStack_0() const { return ___clipStack_0; }
	inline Stack_1_t474516484 ** get_address_of_clipStack_0() { return &___clipStack_0; }
	inline void set_clipStack_0(Stack_1_t474516484 * value)
	{
		___clipStack_0 = value;
		Il2CppCodeGenWriteBarrier(&___clipStack_0, value);
	}

	inline static int32_t get_offset_of_topLeft_1() { return static_cast<int32_t>(offsetof(GUIX_t1405793021_StaticFields, ___topLeft_1)); }
	inline Vector2_t2243707579  get_topLeft_1() const { return ___topLeft_1; }
	inline Vector2_t2243707579 * get_address_of_topLeft_1() { return &___topLeft_1; }
	inline void set_topLeft_1(Vector2_t2243707579  value)
	{
		___topLeft_1 = value;
	}

	inline static int32_t get_offset_of_colorStack_2() { return static_cast<int32_t>(offsetof(GUIX_t1405793021_StaticFields, ___colorStack_2)); }
	inline Stack_1_t3108120229 * get_colorStack_2() const { return ___colorStack_2; }
	inline Stack_1_t3108120229 ** get_address_of_colorStack_2() { return &___colorStack_2; }
	inline void set_colorStack_2(Stack_1_t3108120229 * value)
	{
		___colorStack_2 = value;
		Il2CppCodeGenWriteBarrier(&___colorStack_2, value);
	}

	inline static int32_t get_offset_of_whiteTexture_3() { return static_cast<int32_t>(offsetof(GUIX_t1405793021_StaticFields, ___whiteTexture_3)); }
	inline Texture2D_t3542995729 * get_whiteTexture_3() const { return ___whiteTexture_3; }
	inline Texture2D_t3542995729 ** get_address_of_whiteTexture_3() { return &___whiteTexture_3; }
	inline void set_whiteTexture_3(Texture2D_t3542995729 * value)
	{
		___whiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___whiteTexture_3, value);
	}

	inline static int32_t get_offset_of_whiteTextureStyle_4() { return static_cast<int32_t>(offsetof(GUIX_t1405793021_StaticFields, ___whiteTextureStyle_4)); }
	inline GUIStyle_t1799908754 * get_whiteTextureStyle_4() const { return ___whiteTextureStyle_4; }
	inline GUIStyle_t1799908754 ** get_address_of_whiteTextureStyle_4() { return &___whiteTextureStyle_4; }
	inline void set_whiteTextureStyle_4(GUIStyle_t1799908754 * value)
	{
		___whiteTextureStyle_4 = value;
		Il2CppCodeGenWriteBarrier(&___whiteTextureStyle_4, value);
	}

	inline static int32_t get_offset_of_standardTextureStyle_5() { return static_cast<int32_t>(offsetof(GUIX_t1405793021_StaticFields, ___standardTextureStyle_5)); }
	inline GUIStyle_t1799908754 * get_standardTextureStyle_5() const { return ___standardTextureStyle_5; }
	inline GUIStyle_t1799908754 ** get_address_of_standardTextureStyle_5() { return &___standardTextureStyle_5; }
	inline void set_standardTextureStyle_5(GUIStyle_t1799908754 * value)
	{
		___standardTextureStyle_5 = value;
		Il2CppCodeGenWriteBarrier(&___standardTextureStyle_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
