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
	 * BlueprintGeneratedClass Buff_CamoEffect.Buff_CamoEffect_C
	 * Size -> 0x0029 (FullSize[0x09A9] - InheritedSize[0x0980])
	 */
	class ABuff_CamoEffect_C : public ABuff_Base_C
	{
	public:
		TArray<class UClass*>                                      classesToCamoFrom;                                       // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       affectBigDinos;                                          // 0x0990(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XN39[0x7];                                   // 0x0991(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      immuneActors;                                            // 0x0998(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       affectTamedDinos;                                        // 0x09A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AddImmuneActor(class AActor* Dino);
		bool PreventActorTargeting(class AActor* ByActor);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_CamoEffect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
