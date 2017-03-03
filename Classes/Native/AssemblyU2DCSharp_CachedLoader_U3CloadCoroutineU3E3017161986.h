#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IFileManager
struct IFileManager_t1674670828;
// System.String
struct String_t;
// Reference`1<System.Object>
struct Reference_1_t2181976982;
// CachedLoader
struct CachedLoader_t1584985543;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CachedLoader/<loadCoroutine>c__Iterator0`1<System.Object>
struct  U3CloadCoroutineU3Ec__Iterator0_1_t3017161986  : public Il2CppObject
{
public:
	// IFileManager CachedLoader/<loadCoroutine>c__Iterator0`1::<iFileManager>__0
	IFileManager_t1674670828 * ___U3CiFileManagerU3E__0_0;
	// System.Boolean CachedLoader/<loadCoroutine>c__Iterator0`1::<fromCache>__1
	bool ___U3CfromCacheU3E__1_1;
	// System.String CachedLoader/<loadCoroutine>c__Iterator0`1::path
	String_t* ___path_2;
	// System.String CachedLoader/<loadCoroutine>c__Iterator0`1::<relePath>__2
	String_t* ___U3CrelePathU3E__2_3;
	// System.String CachedLoader/<loadCoroutine>c__Iterator0`1::<wwwPath>__3
	String_t* ___U3CwwwPathU3E__3_4;
	// Reference`1<T> CachedLoader/<loadCoroutine>c__Iterator0`1::reference
	Reference_1_t2181976982 * ___reference_5;
	// CachedLoader CachedLoader/<loadCoroutine>c__Iterator0`1::$this
	CachedLoader_t1584985543 * ___U24this_6;
	// System.Object CachedLoader/<loadCoroutine>c__Iterator0`1::$current
	Il2CppObject * ___U24current_7;
	// System.Boolean CachedLoader/<loadCoroutine>c__Iterator0`1::$disposing
	bool ___U24disposing_8;
	// System.Int32 CachedLoader/<loadCoroutine>c__Iterator0`1::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CiFileManagerU3E__0_0() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___U3CiFileManagerU3E__0_0)); }
	inline IFileManager_t1674670828 * get_U3CiFileManagerU3E__0_0() const { return ___U3CiFileManagerU3E__0_0; }
	inline IFileManager_t1674670828 ** get_address_of_U3CiFileManagerU3E__0_0() { return &___U3CiFileManagerU3E__0_0; }
	inline void set_U3CiFileManagerU3E__0_0(IFileManager_t1674670828 * value)
	{
		___U3CiFileManagerU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CiFileManagerU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CfromCacheU3E__1_1() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___U3CfromCacheU3E__1_1)); }
	inline bool get_U3CfromCacheU3E__1_1() const { return ___U3CfromCacheU3E__1_1; }
	inline bool* get_address_of_U3CfromCacheU3E__1_1() { return &___U3CfromCacheU3E__1_1; }
	inline void set_U3CfromCacheU3E__1_1(bool value)
	{
		___U3CfromCacheU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___path_2)); }
	inline String_t* get_path_2() const { return ___path_2; }
	inline String_t** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(String_t* value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier(&___path_2, value);
	}

	inline static int32_t get_offset_of_U3CrelePathU3E__2_3() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___U3CrelePathU3E__2_3)); }
	inline String_t* get_U3CrelePathU3E__2_3() const { return ___U3CrelePathU3E__2_3; }
	inline String_t** get_address_of_U3CrelePathU3E__2_3() { return &___U3CrelePathU3E__2_3; }
	inline void set_U3CrelePathU3E__2_3(String_t* value)
	{
		___U3CrelePathU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrelePathU3E__2_3, value);
	}

	inline static int32_t get_offset_of_U3CwwwPathU3E__3_4() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___U3CwwwPathU3E__3_4)); }
	inline String_t* get_U3CwwwPathU3E__3_4() const { return ___U3CwwwPathU3E__3_4; }
	inline String_t** get_address_of_U3CwwwPathU3E__3_4() { return &___U3CwwwPathU3E__3_4; }
	inline void set_U3CwwwPathU3E__3_4(String_t* value)
	{
		___U3CwwwPathU3E__3_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwwwPathU3E__3_4, value);
	}

	inline static int32_t get_offset_of_reference_5() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___reference_5)); }
	inline Reference_1_t2181976982 * get_reference_5() const { return ___reference_5; }
	inline Reference_1_t2181976982 ** get_address_of_reference_5() { return &___reference_5; }
	inline void set_reference_5(Reference_1_t2181976982 * value)
	{
		___reference_5 = value;
		Il2CppCodeGenWriteBarrier(&___reference_5, value);
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___U24this_6)); }
	inline CachedLoader_t1584985543 * get_U24this_6() const { return ___U24this_6; }
	inline CachedLoader_t1584985543 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(CachedLoader_t1584985543 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_6, value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___U24current_7)); }
	inline Il2CppObject * get_U24current_7() const { return ___U24current_7; }
	inline Il2CppObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(Il2CppObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_7, value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CloadCoroutineU3Ec__Iterator0_1_t3017161986, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
