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
	 * BlueprintGeneratedClass Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C
	 * Size -> 0x0000 (FullSize[0x09A0] - InheritedSize[0x09A0])
	 */
	class ABuff_WyvernFire_OnFire_C : public ABuff_FlameThrower_OnFire_C
	{
	public:
		void ReceiveTick(float DeltaSeconds);
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_WyvernFire_OnFire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
