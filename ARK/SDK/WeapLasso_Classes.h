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
	 * BlueprintGeneratedClass WeapLasso.WeapLasso_C
	 * Size -> 0x0018 (FullSize[0x0E80] - InheritedSize[0x0E68])
	 */
	class AWeapLasso_C : public APrimalWeaponGrapplingHook
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0E68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CableStart3P;                                            // 0x0E70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USceneComponent*                                     CableStart1P;                                            // 0x0E78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(float DeltaSeconds);
		bool BPCanEquip(class AShooterCharacter* ByCharacter);
		bool BPRemainEquipped();
		void UserConstructionScript();
		void ExecuteUbergraph_WeapLasso(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
