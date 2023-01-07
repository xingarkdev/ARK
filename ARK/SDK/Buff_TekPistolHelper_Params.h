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
	 * Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPReactivateWithDamageCauser
	 */
	struct ABuff_TekPistolHelper_C_BPReactivateWithDamageCauser_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              ForDamageCauser;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.Set HUDElement Location and Scale from World Projection
	 */
	struct ABuff_TekPistolHelper_C_SetHUDElementLocationandScalefromWorldProjection_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHUDElement                                         HUDElement;                                              // 0x0010(0x0150)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             WorldOffsetWhenClose;                                    // 0x0160(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldOffsetWhenFar;                                      // 0x016C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHUDElement                                         OutElem;                                                 // 0x0178(0x0150)  (Parm, OutParm)
		bool                                                       IsTargetOnScreen;                                        // 0x02C8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I69M[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPGetHUDElements
	 */
	struct ABuff_TekPistolHelper_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.UserConstructionScript
	 */
	struct ABuff_TekPistolHelper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.ExecuteUbergraph_Buff_TekPistolHelper
	 */
	struct ABuff_TekPistolHelper_C_ExecuteUbergraph_Buff_TekPistolHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
