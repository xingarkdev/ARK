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
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackMemberDied
	 */
	struct ADino_Character_BP_Pack_C_PackMemberDied_Params
	{
	public:
		class ADino_Character_BP_Pack_C*                           DeadDino;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BP_OnSetDeath
	 */
	struct ADino_Character_BP_Pack_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Get RadiusToJoinPack
	 */
	struct ADino_Character_BP_Pack_C_GetRadiusToJoinPack_Params
	{
	public:
		bool                                                       belongsToOldPack;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CSQO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      firstTimeRadius;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.CanDinoBeAddedToPack
	 */
	struct ADino_Character_BP_Pack_C_CanDinoBeAddedToPack_Params
	{
	public:
		class APrimalDinoCharacter*                                NewParam;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class AActor*>                                      oldPack;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       canBeAdded;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7Y8G[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Add Dino to Pack
	 */
	struct ADino_Character_BP_Pack_C_AddDinotoPack_Params
	{
	public:
		class AActor*                                              ActorToAdd;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsValidClassForPack
	 */
	struct ADino_Character_BP_Pack_C_IsValidClassForPack_Params
	{
	public:
		class AActor*                                              joiningActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6Z5L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPTimerServer
	 */
	struct ADino_Character_BP_Pack_C_BPTimerServer_Params
	{	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Put Join Pack On Cooldown
	 */
	struct ADino_Character_BP_Pack_C_PutJoinPackOnCooldown_Params
	{
	public:
		float                                                      DurationOfPackPrevention;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CPWM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Can Join Pack
	 */
	struct ADino_Character_BP_Pack_C_CanJoinPack_Params
	{
	public:
		bool                                                       CanJoin;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPShouldForceFlee
	 */
	struct ADino_Character_BP_Pack_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ClearPack
	 */
	struct ADino_Character_BP_Pack_C_ClearPack_Params
	{	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.InitPackDino
	 */
	struct ADino_Character_BP_Pack_C_InitPackDino_Params
	{
	public:
		bool                                                       isBeginPlay;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S4NW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackRoar
	 */
	struct ADino_Character_BP_Pack_C_PackRoar_Params
	{	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UpdatePack
	 */
	struct ADino_Character_BP_Pack_C_UpdatePack_Params
	{	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPDoAttack
	 */
	struct ADino_Character_BP_Pack_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanRiderAttack
	 */
	struct ADino_Character_BP_Pack_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanAttack
	 */
	struct ADino_Character_BP_Pack_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1G2B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsPackLeader
	 */
	struct ADino_Character_BP_Pack_C_IsPackLeader_Params
	{
	public:
		bool                                                       bIsLeader;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPUnstasis
	 */
	struct ADino_Character_BP_Pack_C_BPUnstasis_Params
	{	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.GatherPack
	 */
	struct ADino_Character_BP_Pack_C_GatherPack_Params
	{	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.OverrideRandomWanderLocation
	 */
	struct ADino_Character_BP_Pack_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UserConstructionScript
	 */
	struct ADino_Character_BP_Pack_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ReceiveBeginPlay
	 */
	struct ADino_Character_BP_Pack_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ExecuteUbergraph_Dino_Character_BP_Pack
	 */
	struct ADino_Character_BP_Pack_C_ExecuteUbergraph_Dino_Character_BP_Pack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
