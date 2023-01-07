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
	 * BlueprintGeneratedClass Buff_IsBeingCarried.Buff_IsBeingCarried_C
	 * Size -> 0x000D (FullSize[0x098D] - InheritedSize[0x0980])
	 */
	class ABuff_IsBeingCarried_C : public ABuff_Base_C
	{
	public:
		bool                                                       IsCharacterAttached;                                     // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ASE4[0x3];                                   // 0x0981(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeightLimit;                                             // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanCarryFlyer;                                           // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanCarryUnconscious;                                     // 0x0989(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCarryDinoDismountRider;                                 // 0x098A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCarryDinoInsteadOfRider;                                // 0x098B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRequireLineOfSightToTarget;                             // 0x098C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BPSetupForInstigator(class AActor* ForInstigator);
		void CanGrabWaterDino(class APrimalDinoCharacter* DinoRef, bool* Result);
		void CheckAttachmentAndEvaluate();
		void BuffTickClient(float DeltaTime);
		void BuffTickServer(float DeltaTime);
		bool BPCustomAllowAddBuff(class APrimalCharacter* forCharacter, class AActor* DamageCauser);
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_IsBeingCarried(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
