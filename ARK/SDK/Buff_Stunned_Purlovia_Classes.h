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
	 * BlueprintGeneratedClass Buff_Stunned_Purlovia.Buff_Stunned_Purlovia_C
	 * Size -> 0x0008 (FullSize[0x09A0] - InheritedSize[0x0998])
	 */
	class ABuff_Stunned_Purlovia_C : public ABuff_Stunned_C
	{
	public:
		class APrimalCharacter*                                    Attacker;                                                // 0x0998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Stunned_Purlovia(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
