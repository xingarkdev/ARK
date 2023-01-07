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
	 * BlueprintGeneratedClass PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C
	 * Size -> 0x00E0 (FullSize[0x0BC8] - InheritedSize[0x0AE8])
	 */
	class UPrimalItem_WeaponEmptyCryopod_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
	{
	public:
		class FScriptMulticastDelegate                             NewEventDispatcher;                                      // 0x0AE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      DecayingDurability;                                      // 0x0AF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DebugInvalidRedirects;                                   // 0x0AFC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_02ZB[0x3];                                   // 0x0AFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomItemData                                     CallFunc_GetCustomItemData_OutData;                      // 0x0B00(0x0078) Transient, DuplicateTransient
		bool                                                       CallFunc_GetCustomItemData_ReturnValue;                  // 0x0B78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JH6H[0x7];                                   // 0x0B79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x0B80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x0B88(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_TryDeploy_Deployed;                             // 0x0B94(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WFPJ[0x3];                                   // 0x0B95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_TryDeploy_NewLocation;                          // 0x0B98(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZYR5[0x4];                                   // 0x0BA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_TryDeploy_FailureReason;                        // 0x0BA8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                CallFunc_Array_Contains_ItemToFind_RefProperty;          // 0x0BB8(0x0008) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor
		double                                                     CallFunc_Array_Add_NewItem_RefProperty;                  // 0x0BC0(0x0008) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData, NoDestructor

	public:
		void GetContainedDinoClass(class UClass** ResolvedClass, bool* HasData, struct FCustomItemData* RawCustomItemData);
		bool BPPreventUpload();
		void GetStatValueforDisplay(float MaxValue, EPrimalCharacterStatusValue Stat, float Value, class FText* Result);
		void GetStatDisplayName(EPrimalCharacterStatusValue Stat, class FText* DisplayName);
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void BPInitIconMaterial();
		class UMaterialInterface* BPGetCustomIconMaterialParent();
		void BPTributeItemUploaded(class UObject* ContextObject);
		void BPTributeItemDownloaded(class UObject* ContextObject);
		void BPItemBelowDurabilityThreshold();
		struct FColor BPGetCustomInventoryWidgetTextColor();
		class FString BPGetCustomDurabilityText();
		float BPGetCustomAutoDecreaseDurabilityPerInterval();
		class FString BPGetCustomInventoryWidgetText();
		void BPItemBroken();
		void TryDeploy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Deployed, struct FVector* NewLocation, class FString* FailureReason);
		void CanFit(const struct FVector& Location, float VerticalOffset, float Angle, float HorizontalOffset, float Radius, float HalfHeight, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
		void CanDeploy(class UClass* Class, const struct FVector& Location, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation, class FString* FailureReason);
		class FString BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC);
		void BrokenDeploy();
		void ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod(int32_t EntryPoint);
		void NewEventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
