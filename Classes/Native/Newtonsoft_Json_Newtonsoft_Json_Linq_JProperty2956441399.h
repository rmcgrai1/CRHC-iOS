﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t572931806;
// System.String
struct String_t;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer3538280255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JProperty
struct  JProperty_t2956441399  : public JContainer_t3538280255
{
public:
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_t572931806 * ____content_16;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_17;

public:
	inline static int32_t get_offset_of__content_16() { return static_cast<int32_t>(offsetof(JProperty_t2956441399, ____content_16)); }
	inline JPropertyList_t572931806 * get__content_16() const { return ____content_16; }
	inline JPropertyList_t572931806 ** get_address_of__content_16() { return &____content_16; }
	inline void set__content_16(JPropertyList_t572931806 * value)
	{
		____content_16 = value;
		Il2CppCodeGenWriteBarrier(&____content_16, value);
	}

	inline static int32_t get_offset_of__name_17() { return static_cast<int32_t>(offsetof(JProperty_t2956441399, ____name_17)); }
	inline String_t* get__name_17() const { return ____name_17; }
	inline String_t** get_address_of__name_17() { return &____name_17; }
	inline void set__name_17(String_t* value)
	{
		____name_17 = value;
		Il2CppCodeGenWriteBarrier(&____name_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
