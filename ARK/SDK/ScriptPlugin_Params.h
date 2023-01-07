#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ScriptPlugin.ScriptComponent.CallScriptFunction
	 */
	struct UScriptComponent_CallScriptFunction_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScriptPlugin.ScriptContext.CallScriptFunction
	 */
	struct UScriptContext_CallScriptFunction_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function ScriptPlugin.ScriptContextComponent.CallScriptFunction
	 */
	struct UScriptContextComponent_CallScriptFunction_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function ScriptPlugin.ScriptTestActor.TestFunction
	 */
	struct AScriptTestActor_TestFunction_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InFactor;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bMultiply;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VEWF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
