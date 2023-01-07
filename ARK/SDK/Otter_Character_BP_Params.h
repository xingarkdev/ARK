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
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPSetupTamed
	 */
	struct AOtter_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.OnLaunched
	 */
	struct AOtter_Character_BP_C_OnLaunched_Params
	{
	public:
		struct FVector                                             LaunchVelocity;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bXYOverride;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bZOverride;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3QY3[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPTimerServer
	 */
	struct AOtter_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.OnOwnerReached
	 */
	struct AOtter_Character_BP_C_OnOwnerReached_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.Returning To Owner Actions
	 */
	struct AOtter_Character_BP_C_ReturningToOwnerActions_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.Set Last Player Order
	 */
	struct AOtter_Character_BP_C_SetLastPlayerOrder_Params
	{
	public:
		class APawn*                                               Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.GetOwnerCharacter
	 */
	struct AOtter_Character_BP_C_GetOwnerCharacter_Params
	{
	public:
		class APawn*                                               Owner;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.ReturnToPlayer
	 */
	struct AOtter_Character_BP_C_ReturnToPlayer_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.SelectPearl
	 */
	struct AOtter_Character_BP_C_SelectPearl_Params
	{
	public:
		bool                                                       GotAPearl;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TRA5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    IndexOfSelectedItem;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.AttemptToGetAPearl
	 */
	struct AOtter_Character_BP_C_AttemptToGetAPearl_Params
	{
	public:
		bool                                                       ObtainedAPearl;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.IsCharacterAFish
	 */
	struct AOtter_Character_BP_C_IsCharacterAFish_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S2YY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    index;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPKilledSomethingEvent
	 */
	struct AOtter_Character_BP_C_BPKilledSomethingEvent_Params
	{
	public:
		class APrimalCharacter*                                    killedTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.EatPlayersCarriedFood
	 */
	struct AOtter_Character_BP_C_EatPlayersCarriedFood_Params
	{
	public:
		class APrimalCharacter*                                    Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.Init
	 */
	struct AOtter_Character_BP_C_Init_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.IsCarriedFishValid
	 */
	struct AOtter_Character_BP_C_IsCarriedFishValid_Params
	{
	public:
		class APrimalCharacter*                                    Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GSJE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    index;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPTryMultiUse
	 */
	struct AOtter_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AOtter_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPClientDoMultiUse
	 */
	struct AOtter_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XS9J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.UserConstructionScript
	 */
	struct AOtter_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.ReceiveBeginPlay
	 */
	struct AOtter_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.AnimNotify_ShowPearl
	 */
	struct AOtter_Character_BP_C_AnimNotify_ShowPearl_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.MulticastPlayShowPearl
	 */
	struct AOtter_Character_BP_C_MulticastPlayShowPearl_Params
	{
	public:
		int32_t                                                    switchIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.ExecuteUbergraph_Otter_Character_BP
	 */
	struct AOtter_Character_BP_C_ExecuteUbergraph_Otter_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
