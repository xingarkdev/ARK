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
	 * BlueprintGeneratedClass Buff_ExitedMekShield.Buff_ExitedMekShield_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_ExitedMekShield_C : public ABuff_Base_C
	{
	public:
		void BuffTickClient(float DeltaTime);
		void GetOwnerMek(bool* IsValid, bool* IsFriendly, class AMek_Character_BP_C** Mek);
		bool IsOwnerMek();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ExitedMekShield(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
