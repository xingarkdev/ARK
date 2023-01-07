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
	 * BlueprintGeneratedClass Dino_Character_BP_Pack_Chupa.Dino_Character_BP_Pack_Chupa_C
	 * Size -> 0x000E (FullSize[0x233A] - InheritedSize[0x232C])
	 */
	class ADino_Character_BP_Pack_Chupa_C : public ADino_Character_BP_Pack_C
	{
	public:
		unsigned char                                              UnknownData_DCWC[0x4];                                   // 0x232C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         chargeManagerBuff;                                       // 0x2330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isDivingIn;                                              // 0x2338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isUnderground;                                           // 0x2339(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic

	public:
		void OnRep_isUnderground();
		void OnChargeEvent();
		void UseCringeForTime(float cringeTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Dino_Character_BP_Pack_Chupa(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
