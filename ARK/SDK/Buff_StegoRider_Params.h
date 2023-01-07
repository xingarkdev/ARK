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
	 * Function Buff_StegoRider.Buff_StegoRider_C.BPPreventAddingOtherBuff
	 */
	struct ABuff_StegoRider_C_BPPreventAddingOtherBuff_Params
	{
	public:
		class UClass*                                              anotherBuffClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StegoRider.Buff_StegoRider_C.BPNotifyPreventDismounting
	 */
	struct ABuff_StegoRider_C_BPNotifyPreventDismounting_Params
	{
	public:
		class APrimalDinoCharacter*                                FromDino;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StegoRider.Buff_StegoRider_C.UserConstructionScript
	 */
	struct ABuff_StegoRider_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_StegoRider.Buff_StegoRider_C.BuffTickServer
	 */
	struct ABuff_StegoRider_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_StegoRider.Buff_StegoRider_C.ExecuteUbergraph_Buff_StegoRider
	 */
	struct ABuff_StegoRider_C_ExecuteUbergraph_Buff_StegoRider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
