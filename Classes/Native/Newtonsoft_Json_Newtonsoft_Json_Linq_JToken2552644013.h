#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t711291442;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t1368357152;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JToken
struct  JToken_t2552644013  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3538280255 * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t2552644013 * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t2552644013 * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	Il2CppObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_t2552644013, ____parent_1)); }
	inline JContainer_t3538280255 * get__parent_1() const { return ____parent_1; }
	inline JContainer_t3538280255 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t3538280255 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier(&____parent_1, value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_t2552644013, ____previous_2)); }
	inline JToken_t2552644013 * get__previous_2() const { return ____previous_2; }
	inline JToken_t2552644013 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_t2552644013 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier(&____previous_2, value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_t2552644013, ____next_3)); }
	inline JToken_t2552644013 * get__next_3() const { return ____next_3; }
	inline JToken_t2552644013 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_t2552644013 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier(&____next_3, value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_t2552644013, ____annotations_4)); }
	inline Il2CppObject * get__annotations_4() const { return ____annotations_4; }
	inline Il2CppObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(Il2CppObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier(&____annotations_4, value);
	}
};

struct JToken_t2552644013_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t711291442 * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t1368357152* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t1368357152* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t1368357152* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t1368357152* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t1368357152* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t1368357152* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t1368357152* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t1368357152* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t1368357152* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t711291442 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t711291442 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t711291442 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier(&____equalityComparer_0, value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t1368357152* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t1368357152** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t1368357152* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier(&___BooleanTypes_5, value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t1368357152* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t1368357152** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t1368357152* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier(&___NumberTypes_6, value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t1368357152* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t1368357152** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t1368357152* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier(&___StringTypes_7, value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t1368357152* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t1368357152** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t1368357152* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier(&___GuidTypes_8, value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t1368357152* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t1368357152** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t1368357152* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier(&___TimeSpanTypes_9, value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t1368357152* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t1368357152** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t1368357152* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier(&___UriTypes_10, value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t1368357152* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t1368357152** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t1368357152* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier(&___CharTypes_11, value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t1368357152* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t1368357152** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t1368357152* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier(&___DateTimeTypes_12, value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_t2552644013_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t1368357152* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t1368357152** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t1368357152* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier(&___BytesTypes_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
