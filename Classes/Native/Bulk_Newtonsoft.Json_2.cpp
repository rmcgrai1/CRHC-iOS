#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Newtonsoft.Json.Utilities.TypeInformation
struct TypeInformation_t1531269270;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_TypeExte2974070984.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_TypeExte2974070984MethodDeclarations.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260MethodDeclarations.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Type1303803226MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_StringComparison2376310518.h"
#include "mscorlib_System_Void1841601450.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_TypeInfo1531269270.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_TypeInfo1531269270MethodDeclarations.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv2593001762.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Validati1621959402.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Validati1621959402MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_ArgumentNullException628810857MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException628810857.h"
#include "Newtonsoft_Json_Newtonsoft_Json_WriteState1009238728.h"
#include "Newtonsoft_Json_Newtonsoft_Json_WriteState1009238728MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
extern "C"  int32_t TypeExtensions_MemberType_m2192645245 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const MethodInfo* method)
{
	{
		MemberInfo_t * L_0 = ___memberInfo0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ContainsGenericParameters(System.Type)
extern "C"  bool TypeExtensions_ContainsGenericParameters_m673199492 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(86 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsInterface(System.Type)
extern "C"  bool TypeExtensions_IsInterface_m4027938127 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsInterface_m3583817465(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
extern "C"  bool TypeExtensions_IsGenericType_m2573949791 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(89 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericTypeDefinition(System.Type)
extern "C"  bool TypeExtensions_IsGenericTypeDefinition_m1841056122 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::BaseType(System.Type)
extern "C"  Type_t * TypeExtensions_BaseType_m3858355017 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsEnum(System.Type)
extern "C"  bool TypeExtensions_IsEnum_m3232841617 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsEnum_m313908919(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsClass(System.Type)
extern "C"  bool TypeExtensions_IsClass_m1190811054 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsClass_m2968663946(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsSealed(System.Type)
extern "C"  bool TypeExtensions_IsSealed_m1812217042 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsSealed_m2380985836(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsAbstract(System.Type)
extern "C"  bool TypeExtensions_IsAbstract_m3133236508 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsAbstract_m2532060002(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsValueType(System.Type)
extern "C"  bool TypeExtensions_IsValueType_m2298155509 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_m1733572463(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t TypeExtensions_AssignableToTypeName_m2010856624_MetadataUsageId;
extern "C"  bool TypeExtensions_AssignableToTypeName_m2010856624 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_AssignableToTypeName_m2010856624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t1664964607* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_001f;
	}

IL_0004:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3 = ___fullTypeName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_Equals_m2950069882(NULL /*static, unused*/, L_2, L_3, 4, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		Type_t ** L_5 = ___match2;
		Type_t * L_6 = V_0;
		*((Il2CppObject **)(L_5)) = (Il2CppObject *)L_6;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_5), (Il2CppObject *)L_6);
		return (bool)1;
	}

IL_0018:
	{
		Type_t * L_7 = V_0;
		Type_t * L_8 = TypeExtensions_BaseType_m3858355017(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_001f:
	{
		Type_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0004;
		}
	}
	{
		Type_t * L_10 = ___type0;
		NullCheck(L_10);
		TypeU5BU5D_t1664964607* L_11 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_10);
		V_1 = L_11;
		V_2 = 0;
		goto IL_0047;
	}

IL_002d:
	{
		TypeU5BU5D_t1664964607* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Type_t * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		String_t* L_17 = ___fullTypeName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_Equals_m2950069882(NULL /*static, unused*/, L_16, L_17, 4, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0043;
		}
	}
	{
		Type_t ** L_19 = ___match2;
		Type_t * L_20 = ___type0;
		*((Il2CppObject **)(L_19)) = (Il2CppObject *)L_20;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_19), (Il2CppObject *)L_20);
		return (bool)1;
	}

IL_0043:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_22 = V_2;
		TypeU5BU5D_t1664964607* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_23)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		Type_t ** L_24 = ___match2;
		*((Il2CppObject **)(L_24)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_24), (Il2CppObject *)NULL);
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String)
extern "C"  bool TypeExtensions_AssignableToTypeName_m494314593 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, const MethodInfo* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		String_t* L_1 = ___fullTypeName1;
		bool L_2 = TypeExtensions_AssignableToTypeName_m2010856624(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
extern Il2CppClass* IEnumerable_1_t1595930271_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_1_t3074294349_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t TypeExtensions_ImplementInterface_m257112361_MetadataUsageId;
extern "C"  bool TypeExtensions_ImplementInterface_m257112361 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___interfaceType1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_ImplementInterface_m257112361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Il2CppObject* V_1 = NULL;
	Type_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_0048;
	}

IL_0004:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		TypeU5BU5D_t1664964607* L_2 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_1);
		NullCheck((Il2CppObject*)(Il2CppObject*)L_2);
		Il2CppObject* L_3 = InterfaceFuncInvoker0< Il2CppObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t1595930271_il2cpp_TypeInfo_var, (Il2CppObject*)(Il2CppObject*)L_2);
		V_1 = L_3;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0012:
		{
			Il2CppObject* L_4 = V_1;
			NullCheck(L_4);
			Type_t * L_5 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t3074294349_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			Type_t * L_6 = V_2;
			Type_t * L_7 = ___interfaceType1;
			if ((((Il2CppObject*)(Type_t *)L_6) == ((Il2CppObject*)(Type_t *)L_7)))
			{
				goto IL_0029;
			}
		}

IL_001d:
		{
			Type_t * L_8 = V_2;
			if (!L_8)
			{
				goto IL_002d;
			}
		}

IL_0020:
		{
			Type_t * L_9 = V_2;
			Type_t * L_10 = ___interfaceType1;
			bool L_11 = TypeExtensions_ImplementInterface_m257112361(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_002d;
			}
		}

IL_0029:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x4D, FINALLY_0037);
		}

IL_002d:
		{
			Il2CppObject* L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			Il2CppObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_0040;
			}
		}

IL_003a:
		{
			Il2CppObject* L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_15);
		}

IL_0040:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0041:
	{
		Type_t * L_16 = V_0;
		Type_t * L_17 = TypeExtensions_BaseType_m3858355017(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0048:
	{
		Type_t * L_18 = V_0;
		if (L_18)
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}

IL_004d:
	{
		bool L_19 = V_3;
		return L_19;
	}
}
// System.Type Newtonsoft.Json.Utilities.TypeInformation::get_Type()
extern "C"  Type_t * TypeInformation_get_Type_m3658892422 (TypeInformation_t1531269270 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::set_Type(System.Type)
extern "C"  void TypeInformation_set_Type_m3453746963 (TypeInformation_t1531269270 * __this, Type_t * ___value0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.TypeInformation::get_TypeCode()
extern "C"  int32_t TypeInformation_get_TypeCode_m271329085 (TypeInformation_t1531269270 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::set_TypeCode(Newtonsoft.Json.Utilities.PrimitiveTypeCode)
extern "C"  void TypeInformation_set_TypeCode_m1991033306 (TypeInformation_t1531269270 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::.ctor()
extern "C"  void TypeInformation__ctor_m1581870969 (TypeInformation_t1531269270 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern const uint32_t ValidationUtils_ArgumentNotNull_m1113617486_MetadataUsageId;
extern "C"  void ValidationUtils_ArgumentNotNull_m1113617486 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, String_t* ___parameterName1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValidationUtils_ArgumentNotNull_m1113617486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___parameterName1;
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_000a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
