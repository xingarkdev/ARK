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
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.OverrideDinoPreventAttract
	 */
	struct ADroppedItemGeneric_HoneyLure_C_OverrideDinoPreventAttract_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Prevent;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5TD0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.OverrideDinoDoAttackOnConsume
	 */
	struct ADroppedItemGeneric_HoneyLure_C_OverrideDinoDoAttackOnConsume_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       override;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4YNQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.IsDinoInConsumeRange
	 */
	struct ADroppedItemGeneric_HoneyLure_C_IsDinoInConsumeRange_Params
	{
	public:
		class AActor*                                              Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoAIController*                             DinoAI;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AZ1W[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.SetMovePointNearLure
	 */
	struct ADroppedItemGeneric_HoneyLure_C_SetMovePointNearLure_Params
	{
	public:
		class APrimalDinoCharacter*                                DinoToMove;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoAIController*                             DinoAI;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Can Dino Consume Bait
	 */
	struct ADroppedItemGeneric_HoneyLure_C_CanDinoConsumeBait_Params
	{
	public:
		class APrimalDinoCharacter*                                InputPin;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutputPin;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XVTF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.BPPostInitializeComponents
	 */
	struct ADroppedItemGeneric_HoneyLure_C_BPPostInitializeComponents_Params
	{	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UserConstructionScript
	 */
	struct ADroppedItemGeneric_HoneyLure_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__FinishedFunc
	 */
	struct ADroppedItemGeneric_HoneyLure_C_Dissolve__FinishedFunc_Params
	{	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__UpdateFunc
	 */
	struct ADroppedItemGeneric_HoneyLure_C_Dissolve__UpdateFunc_Params
	{	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ReceiveBeginPlay
	 */
	struct ADroppedItemGeneric_HoneyLure_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UpdateBait
	 */
	struct ADroppedItemGeneric_HoneyLure_C_UpdateBait_Params
	{	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.DestroyBait
	 */
	struct ADroppedItemGeneric_HoneyLure_C_DestroyBait_Params
	{	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.AttractCreatures
	 */
	struct ADroppedItemGeneric_HoneyLure_C_AttractCreatures_Params
	{	};

	/**
	 * Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ExecuteUbergraph_DroppedItemGeneric_HoneyLure
	 */
	struct ADroppedItemGeneric_HoneyLure_C_ExecuteUbergraph_DroppedItemGeneric_HoneyLure_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
