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
	 * BlueprintGeneratedClass Buff_RageEffect_RareFlower.Buff_RageEffect_RareFlower_C
	 * Size -> 0x0004 (FullSize[0x09B8] - InheritedSize[0x09B4])
	 */
	class ABuff_RageEffect_RareFlower_C : public ABuff_RageEffect_C
	{
	public:
		float                                                      MaxBuffTime;                                             // 0x09B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_RageEffect_RareFlower(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
