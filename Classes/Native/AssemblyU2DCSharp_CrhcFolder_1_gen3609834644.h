﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Experience>
struct List_1_t1343532892;
// Reference`1<System.String>
struct Reference_1_t1521747920;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_CrhcItem1379468653.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CrhcFolder`1<Experience>
struct  CrhcFolder_1_t3609834644  : public CrhcItem_t1379468653
{
public:
	// System.Collections.Generic.List`1<CHILD_TYPE> CrhcFolder`1::children
	List_1_t1343532892 * ___children_5;
	// Reference`1<System.String> CrhcFolder`1::childInfo
	Reference_1_t1521747920 * ___childInfo_6;
	// System.String CrhcFolder`1::targetId
	String_t* ___targetId_7;

public:
	inline static int32_t get_offset_of_children_5() { return static_cast<int32_t>(offsetof(CrhcFolder_1_t3609834644, ___children_5)); }
	inline List_1_t1343532892 * get_children_5() const { return ___children_5; }
	inline List_1_t1343532892 ** get_address_of_children_5() { return &___children_5; }
	inline void set_children_5(List_1_t1343532892 * value)
	{
		___children_5 = value;
		Il2CppCodeGenWriteBarrier(&___children_5, value);
	}

	inline static int32_t get_offset_of_childInfo_6() { return static_cast<int32_t>(offsetof(CrhcFolder_1_t3609834644, ___childInfo_6)); }
	inline Reference_1_t1521747920 * get_childInfo_6() const { return ___childInfo_6; }
	inline Reference_1_t1521747920 ** get_address_of_childInfo_6() { return &___childInfo_6; }
	inline void set_childInfo_6(Reference_1_t1521747920 * value)
	{
		___childInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&___childInfo_6, value);
	}

	inline static int32_t get_offset_of_targetId_7() { return static_cast<int32_t>(offsetof(CrhcFolder_1_t3609834644, ___targetId_7)); }
	inline String_t* get_targetId_7() const { return ___targetId_7; }
	inline String_t** get_address_of_targetId_7() { return &___targetId_7; }
	inline void set_targetId_7(String_t* value)
	{
		___targetId_7 = value;
		Il2CppCodeGenWriteBarrier(&___targetId_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
