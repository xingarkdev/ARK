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
	 * Function Buff_AberrationBury.Buff_AberrationBury_C.BPPreventFirstPerson
	 */
	struct ABuff_AberrationBury_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AberrationBury.Buff_AberrationBury_C.PreventActorTargeting
	 */
	struct ABuff_AberrationBury_C_PreventActorTargeting_Params
	{
	public:
		class AActor*                                              ByActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_AberrationBury.Buff_AberrationBury_C.UserConstructionScript
	 */
	struct ABuff_AberrationBury_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_AberrationBury.Buff_AberrationBury_C.ExecuteUbergraph_Buff_AberrationBury
	 */
	struct ABuff_AberrationBury_C_ExecuteUbergraph_Buff_AberrationBury_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
