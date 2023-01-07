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
	 * BlueprintGeneratedClass Buff_AberrationBury.Buff_AberrationBury_C
	 * Size -> 0x0004 (FullSize[0x0984] - InheritedSize[0x0980])
	 */
	class ABuff_AberrationBury_C : public ABuff_Base_Stew_C
	{
	public:
		float                                                      FoodConsumptionMultiplier;                               // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool BPPreventFirstPerson();
		bool PreventActorTargeting(class AActor* ByActor);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_AberrationBury(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
