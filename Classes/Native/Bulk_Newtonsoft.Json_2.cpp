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

// Newtonsoft.Json.Utilities.TypeInformation
struct TypeInformation_t1531269270;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_TypeInfo1531269270.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_TypeInfo1531269270MethodDeclarations.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Void1841601450.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv2593001762.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Validati1621959402.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Validati1621959402MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_ArgumentNullException628810857MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException628810857.h"
#include "Newtonsoft_Json_Newtonsoft_Json_WriteState1009238728.h"
#include "Newtonsoft_Json_Newtonsoft_Json_WriteState1009238728MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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
