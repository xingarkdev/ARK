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
	 * Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BPGetHUDElements
	 */
	struct ABuff_NotifyHoversailFollow_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.Set and Pass Loc
	 */
	struct ABuff_NotifyHoversailFollow_C_SetandPassLoc_Params
	{	};

	/**
	 * Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickServer
	 */
	struct ABuff_NotifyHoversailFollow_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickClient
	 */
	struct ABuff_NotifyHoversailFollow_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DHG9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.UserConstructionScript
	 */
	struct ABuff_NotifyHoversailFollow_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.ExecuteUbergraph_Buff_NotifyHoversailFollow
	 */
	struct ABuff_NotifyHoversailFollow_C_ExecuteUbergraph_Buff_NotifyHoversailFollow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
