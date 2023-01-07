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
	 * Function IceKaiju_AnimBlueprint.IceKaiju_AnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct UIceKaiju_AnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_AnimBlueprint.IceKaiju_AnimBlueprint_C.BlueprintInitializeAnimation
	 */
	struct UIceKaiju_AnimBlueprint_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function IceKaiju_AnimBlueprint.IceKaiju_AnimBlueprint_C.SetIKStrengthTarget
	 */
	struct UIceKaiju_AnimBlueprint_C_SetIKStrengthTarget_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceKaiju_AnimBlueprint.IceKaiju_AnimBlueprint_C.ExecuteUbergraph_IceKaiju_AnimBlueprint
	 */
	struct UIceKaiju_AnimBlueprint_C_ExecuteUbergraph_IceKaiju_AnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
