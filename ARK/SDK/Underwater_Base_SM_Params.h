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
	 * Function Underwater_Base_SM.Underwater_Base_SM_C.BPPreventPlacingStructureOntoMe
	 */
	struct AUnderwater_Base_SM_C_BPPreventPlacingStructureOntoMe_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalStructure*                                    ForNewStructure;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          ForHitResult;                                            // 0x0010(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5J9F[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Underwater_Base_SM.Underwater_Base_SM_C.BPForceConsideredEnemyFoundation
	 */
	struct AUnderwater_Base_SM_C_BPForceConsideredEnemyFoundation_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalStructure*                                    ForNewStructure;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TestAtLocation;                                          // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Underwater_Base_SM.Underwater_Base_SM_C.ChangedCompartmentFloodState
	 */
	struct AUnderwater_Base_SM_C_ChangedCompartmentFloodState_Params
	{	};

	/**
	 * Function Underwater_Base_SM.Underwater_Base_SM_C.UserConstructionScript
	 */
	struct AUnderwater_Base_SM_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Underwater_Base_SM.Underwater_Base_SM_C.ExecuteUbergraph_Underwater_Base_SM
	 */
	struct AUnderwater_Base_SM_C_ExecuteUbergraph_Underwater_Base_SM_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
