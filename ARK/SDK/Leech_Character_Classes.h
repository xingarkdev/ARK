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
	 * BlueprintGeneratedClass Leech_Character.Leech_Character_C
	 * Size -> 0x0008 (FullSize[0x22A0] - InheritedSize[0x2298])
	 */
	class ALeech_Character_C : public AInsect_Character_Base_C
	{
	public:
		class UDinoCharacterStatusComponent_BP_Leech_C*            DinoCharacterStatus_BP_Leech_C1;                         // 0x2298(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Leech_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
