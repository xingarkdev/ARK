﻿#pragma once

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
	 * BlueprintGeneratedClass Buff_PoisonImmunity_Base.Buff_PoisonImmunity_Base_C
	 * Size -> 0x0008 (FullSize[0x0988] - InheritedSize[0x0980])
	 */
	class ABuff_PoisonImmunity_Base_C : public APrimalBuff
	{
	public:
		class UClass*                                              ImmuneToBuff;                                            // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_PoisonImmunity_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
