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
	 * Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.PreventActorTargeting
	 */
	struct ABuff_PauseBrain_SootheLeed_C_PreventActorTargeting_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.BPCustomAllowAddBuff
	 */
	struct ABuff_PauseBrain_SootheLeed_C_BPCustomAllowAddBuff_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.BPActivated
	 */
	struct ABuff_PauseBrain_SootheLeed_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.UserConstructionScript
	 */
	struct ABuff_PauseBrain_SootheLeed_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.ExecuteUbergraph_Buff_PauseBrain_SootheLeed
	 */
	struct ABuff_PauseBrain_SootheLeed_C_ExecuteUbergraph_Buff_PauseBrain_SootheLeed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
