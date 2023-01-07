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
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.AttachBuffToPlant
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_AttachBuffToPlant_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.InitializeEmitter
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_InitializeEmitter_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.UpdateLightIntensity
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_UpdateLightIntensity_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.BuffTickClient
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.ChargeVariableEvent
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_ChargeVariableEvent_Params
	{
	public:
		E_ChargeVariableNames                                      variableType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBValue;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_15RN[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      fValue;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     dValue;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ivalue;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.GetLightTargetIntensity
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_GetLightTargetIntensity_Params
	{
	public:
		float                                                      targetIntensity;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.GetEmitterLineTraceOrigin
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_GetEmitterLineTraceOrigin_Params
	{
	public:
		class AActor*                                              emitterActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             lineTraceOrigin;                                         // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.UserConstructionScript
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeIn__FinishedFunc
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeIn__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeIn__UpdateFunc
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeIn__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeOut__FinishedFunc
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeOut__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.LightFadeOut__UpdateFunc
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_LightFadeOut__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.FadeInLight
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_FadeInLight_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.FadeOutLight
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_FadeOutLight_Params
	{	};

	/**
	 * Function Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C.ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base
	 */
	struct ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C_ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
