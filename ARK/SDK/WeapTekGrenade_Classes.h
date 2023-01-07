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
	 * BlueprintGeneratedClass WeapTekGrenade.WeapTekGrenade_C
	 * Size -> 0x0008 (FullSize[0x0EB0] - InheritedSize[0x0EA8])
	 */
	class AWeapTekGrenade_C : public APrimalWeaponGrenade
	{
	public:
		class UStaticMeshComponent*                                TekGrenade;                                              // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapTekGrenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
