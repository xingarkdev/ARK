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
	 * Function Buff_RestingDino.Buff_RestingDino_C.BuffTickServer
	 */
	struct ABuff_RestingDino_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RestingDino.Buff_RestingDino_C.BPPreventCharacterStatusValueModifiers
	 */
	struct ABuff_RestingDino_C_BPPreventCharacterStatusValueModifiers_Params
	{
	public:
		class APrimalCharacter*                                    ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_69EO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RestingDino.Buff_RestingDino_C.UserConstructionScript
	 */
	struct ABuff_RestingDino_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RestingDino.Buff_RestingDino_C.ExecuteUbergraph_Buff_RestingDino
	 */
	struct ABuff_RestingDino_C_ExecuteUbergraph_Buff_RestingDino_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
