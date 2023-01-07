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
	 * BlueprintGeneratedClass WeapMachinedSniper_Silenced.WeapMachinedSniper_Silenced_C
	 * Size -> 0x0010 (FullSize[0x0DE8] - InheritedSize[0x0DD8])
	 */
	class AWeapMachinedSniper_Silenced_C : public AWeapMachinedSniper_Scope_C
	{
	public:
		class UStaticMeshComponent*                                _1pAttachmentSilencer;                                   // 0x0DD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                _3pAttachementSilencer;                                  // 0x0DE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapMachinedSniper_Silenced(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
