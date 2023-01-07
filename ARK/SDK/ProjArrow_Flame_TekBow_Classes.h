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
	 * BlueprintGeneratedClass ProjArrow_Flame_TekBow.ProjArrow_Flame_TekBow_C
	 * Size -> 0x0010 (FullSize[0x06B8] - InheritedSize[0x06A8])
	 */
	class AProjArrow_Flame_TekBow_C : public AProjArrow_Flame_C
	{
	public:
		class UChildActorComponent*                                ChildActor2;                                             // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundBase*                                          ProjectileSound;                                         // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ExecuteUbergraph_ProjArrow_Flame_TekBow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
