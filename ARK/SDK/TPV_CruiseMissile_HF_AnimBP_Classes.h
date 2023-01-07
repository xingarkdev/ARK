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
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass TPV_CruiseMissile_HF_AnimBP.TPV_CruiseMissile_HF_AnimBP_C
	 * Size -> 0x0004 (FullSize[0x4FD4] - InheritedSize[0x4FD0])
	 */
	class UTPV_CruiseMissile_HF_AnimBP_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
	{
	public:
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x4FD0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_TPV_CruiseMissile_HF_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
