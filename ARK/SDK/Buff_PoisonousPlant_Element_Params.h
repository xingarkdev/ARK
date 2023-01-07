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
	 * Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.BPSetupForInstigator
	 */
	struct ABuff_PoisonousPlant_Element_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.BPActivated
	 */
	struct ABuff_PoisonousPlant_Element_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.BPAdjustStatusValueModification
	 */
	struct ABuff_PoisonousPlant_Element_C_BPAdjustStatusValueModification_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     ForComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EPrimalCharacterStatusValue                                ValueType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VVAN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InAmount;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              DamageTypeClass;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bManualModification;                                     // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AL4D[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.UserConstructionScript
	 */
	struct ABuff_PoisonousPlant_Element_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_PoisonousPlant_Element.Buff_PoisonousPlant_Element_C.ExecuteUbergraph_Buff_PoisonousPlant_Element
	 */
	struct ABuff_PoisonousPlant_Element_C_ExecuteUbergraph_Buff_PoisonousPlant_Element_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
