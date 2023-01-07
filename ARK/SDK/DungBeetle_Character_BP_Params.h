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
	 * Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPCharacterSleeped
	 */
	struct ADungBeetle_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPCharacterUnsleeped
	 */
	struct ADungBeetle_Character_BP_C_BPCharacterUnsleeped_Params
	{	};

	/**
	 * Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ADungBeetle_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.BPTryMultiUse
	 */
	struct ADungBeetle_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.UserConstructionScript
	 */
	struct ADungBeetle_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.ReceiveBeginPlay
	 */
	struct ADungBeetle_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.OnDied_Event
	 */
	struct ADungBeetle_Character_BP_C_OnDied_Event_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DungBeetle_Character_BP.DungBeetle_Character_BP_C.ExecuteUbergraph_DungBeetle_Character_BP
	 */
	struct ADungBeetle_Character_BP_C_ExecuteUbergraph_DungBeetle_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
