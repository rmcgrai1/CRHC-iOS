#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t2430389951;
// AppRunner
struct AppRunner_t3717517731;
// VuforiaManager
struct VuforiaManager_t189047469;
// System.Collections.Generic.Stack`1<IMenu>
struct Stack_1_t3783300766;
// Server
struct Server_t2724320767;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppRunner
struct  AppRunner_t3717517731  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Shader AppRunner::shader
	Shader_t2430389951 * ___shader_2;
	// System.Boolean AppRunner::doClearCacheOnLaunch
	bool ___doClearCacheOnLaunch_3;
	// System.Boolean AppRunner::doDrawLog
	bool ___doDrawLog_4;
	// VuforiaManager AppRunner::manager
	VuforiaManager_t189047469 * ___manager_6;
	// UnityEngine.Vector2 AppRunner::resolution
	Vector2_t2243707579  ___resolution_7;
	// System.Collections.Generic.Stack`1<IMenu> AppRunner::menuStack
	Stack_1_t3783300766 * ___menuStack_8;
	// Server AppRunner::server
	Server_t2724320767 * ___server_9;
	// System.Boolean AppRunner::_exitMenu
	bool ____exitMenu_10;

public:
	inline static int32_t get_offset_of_shader_2() { return static_cast<int32_t>(offsetof(AppRunner_t3717517731, ___shader_2)); }
	inline Shader_t2430389951 * get_shader_2() const { return ___shader_2; }
	inline Shader_t2430389951 ** get_address_of_shader_2() { return &___shader_2; }
	inline void set_shader_2(Shader_t2430389951 * value)
	{
		___shader_2 = value;
		Il2CppCodeGenWriteBarrier(&___shader_2, value);
	}

	inline static int32_t get_offset_of_doClearCacheOnLaunch_3() { return static_cast<int32_t>(offsetof(AppRunner_t3717517731, ___doClearCacheOnLaunch_3)); }
	inline bool get_doClearCacheOnLaunch_3() const { return ___doClearCacheOnLaunch_3; }
	inline bool* get_address_of_doClearCacheOnLaunch_3() { return &___doClearCacheOnLaunch_3; }
	inline void set_doClearCacheOnLaunch_3(bool value)
	{
		___doClearCacheOnLaunch_3 = value;
	}

	inline static int32_t get_offset_of_doDrawLog_4() { return static_cast<int32_t>(offsetof(AppRunner_t3717517731, ___doDrawLog_4)); }
	inline bool get_doDrawLog_4() const { return ___doDrawLog_4; }
	inline bool* get_address_of_doDrawLog_4() { return &___doDrawLog_4; }
	inline void set_doDrawLog_4(bool value)
	{
		___doDrawLog_4 = value;
	}

	inline static int32_t get_offset_of_manager_6() { return static_cast<int32_t>(offsetof(AppRunner_t3717517731, ___manager_6)); }
	inline VuforiaManager_t189047469 * get_manager_6() const { return ___manager_6; }
	inline VuforiaManager_t189047469 ** get_address_of_manager_6() { return &___manager_6; }
	inline void set_manager_6(VuforiaManager_t189047469 * value)
	{
		___manager_6 = value;
		Il2CppCodeGenWriteBarrier(&___manager_6, value);
	}

	inline static int32_t get_offset_of_resolution_7() { return static_cast<int32_t>(offsetof(AppRunner_t3717517731, ___resolution_7)); }
	inline Vector2_t2243707579  get_resolution_7() const { return ___resolution_7; }
	inline Vector2_t2243707579 * get_address_of_resolution_7() { return &___resolution_7; }
	inline void set_resolution_7(Vector2_t2243707579  value)
	{
		___resolution_7 = value;
	}

	inline static int32_t get_offset_of_menuStack_8() { return static_cast<int32_t>(offsetof(AppRunner_t3717517731, ___menuStack_8)); }
	inline Stack_1_t3783300766 * get_menuStack_8() const { return ___menuStack_8; }
	inline Stack_1_t3783300766 ** get_address_of_menuStack_8() { return &___menuStack_8; }
	inline void set_menuStack_8(Stack_1_t3783300766 * value)
	{
		___menuStack_8 = value;
		Il2CppCodeGenWriteBarrier(&___menuStack_8, value);
	}

	inline static int32_t get_offset_of_server_9() { return static_cast<int32_t>(offsetof(AppRunner_t3717517731, ___server_9)); }
	inline Server_t2724320767 * get_server_9() const { return ___server_9; }
	inline Server_t2724320767 ** get_address_of_server_9() { return &___server_9; }
	inline void set_server_9(Server_t2724320767 * value)
	{
		___server_9 = value;
		Il2CppCodeGenWriteBarrier(&___server_9, value);
	}

	inline static int32_t get_offset_of__exitMenu_10() { return static_cast<int32_t>(offsetof(AppRunner_t3717517731, ____exitMenu_10)); }
	inline bool get__exitMenu_10() const { return ____exitMenu_10; }
	inline bool* get_address_of__exitMenu_10() { return &____exitMenu_10; }
	inline void set__exitMenu_10(bool value)
	{
		____exitMenu_10 = value;
	}
};

struct AppRunner_t3717517731_StaticFields
{
public:
	// AppRunner AppRunner::instance
	AppRunner_t3717517731 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(AppRunner_t3717517731_StaticFields, ___instance_5)); }
	inline AppRunner_t3717517731 * get_instance_5() const { return ___instance_5; }
	inline AppRunner_t3717517731 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(AppRunner_t3717517731 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
