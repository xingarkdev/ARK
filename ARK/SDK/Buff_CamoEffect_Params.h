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
	 * Function Buff_CamoEffect.Buff_CamoEffect_C.Add Immune Actor
	 */
	struct ABuff_CamoEffect_C_AddImmuneActor_Params
	{
	public:
		class AActor*                                              Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_CamoEffect.Buff_CamoEffect_C.PreventActorTargeting
	 */
	struct ABuff_CamoEffect_C_PreventActorTargeting_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K6UU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_CamoEffect.Buff_CamoEffect_C.UserConstructionScript
	 */
	struct ABuff_CamoEffect_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_CamoEffect.Buff_CamoEffect_C.ExecuteUbergraph_Buff_CamoEffect
	 */
	struct ABuff_CamoEffect_C_ExecuteUbergraph_Buff_CamoEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
