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
	 * AnimBlueprintGeneratedClass HM_Hoversail_Riding_AnimBP_HF.HM_Hoversail_Riding_AnimBP_HF_C
	 * Size -> 0x0004 (FullSize[0x2230] - InheritedSize[0x222C])
	 */
	class UHM_Hoversail_Riding_AnimBP_HF_C : public UHM_Hoversail_Riding_AnimBP_C
	{
	public:
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x222C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_HM_Hoversail_Riding_AnimBP_HF(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
