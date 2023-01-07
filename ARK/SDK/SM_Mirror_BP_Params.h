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
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.CanUseRenderTarget
	 */
	struct ASM_Mirror_BP_C_CanUseRenderTarget_Params
	{
	public:
		bool                                                       canuse;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_34N3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.GetMirrorBlend
	 */
	struct ASM_Mirror_BP_C_GetMirrorBlend_Params
	{
	public:
		float                                                      CurrentMirrorBlend;                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveDestroyed
	 */
	struct ASM_Mirror_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.SetMirrorBlend
	 */
	struct ASM_Mirror_BP_C_SetMirrorBlend_Params
	{
	public:
		float                                                      NewMirrorBlend;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.UserConstructionScript
	 */
	struct ASM_Mirror_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveBeginPlay
	 */
	struct ASM_Mirror_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.ForcedTick
	 */
	struct ASM_Mirror_BP_C_ForcedTick_Params
	{	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.DistanceCheck
	 */
	struct ASM_Mirror_BP_C_DistanceCheck_Params
	{	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.OnSemaphoreTaken_Event
	 */
	struct ASM_Mirror_BP_C_OnSemaphoreTaken_Event_Params
	{
	public:
		class FName                                                SemaphoreName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveActorBeginOverlap
	 */
	struct ASM_Mirror_BP_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.DestroyMirror
	 */
	struct ASM_Mirror_BP_C_DestroyMirror_Params
	{	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.LerpMirrorBlend
	 */
	struct ASM_Mirror_BP_C_LerpMirrorBlend_Params
	{	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.FadeOutDestroy
	 */
	struct ASM_Mirror_BP_C_FadeOutDestroy_Params
	{	};

	/**
	 * Function SM_Mirror_BP.SM_Mirror_BP_C.ExecuteUbergraph_SM_Mirror_BP
	 */
	struct ASM_Mirror_BP_C_ExecuteUbergraph_SM_Mirror_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
