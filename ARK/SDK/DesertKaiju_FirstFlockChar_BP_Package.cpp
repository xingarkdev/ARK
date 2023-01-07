/**
 * Name: ARK
 * Version: 1.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADesertKaiju_FirstFlockChar_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPCanCryo");
		
		ADesertKaiju_FirstFlockChar_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPOnLethalDamage
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventDeath                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::BPOnLethalDamage(float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPOnLethalDamage");
		
		ADesertKaiju_FirstFlockChar_BP_C_BPOnLethalDamage_Params params {};
		params.KillingDamage = KillingDamage;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		if (bPreventDeath != nullptr)
			*bPreventDeath = params.bPreventDeath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.OwnerKaijuCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::OwnerKaijuCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.OwnerKaijuCheck");
		
		ADesertKaiju_FirstFlockChar_BP_C_OwnerKaijuCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPTimerServer");
		
		ADesertKaiju_FirstFlockChar_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockGroupMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterialInstanceDynamic*                    Material                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::GetFlockGroupMaterial(int32_t Group, class UMaterialInstanceDynamic** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockGroupMaterial");
		
		ADesertKaiju_FirstFlockChar_BP_C_GetFlockGroupMaterial_Params params {};
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.TickFlockGroup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Shape                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<int32_t>                                    Group                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FBoidBehavior                               Behavior                                                   (Parm, OutParm, ReferenceParm)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            groupIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::TickFlockGroup(int32_t Shape, TArray<int32_t>* Group, struct FBoidBehavior* Behavior, float DeltaTime, int32_t groupIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.TickFlockGroup");
		
		ADesertKaiju_FirstFlockChar_BP_C_TickFlockGroup_Params params {};
		params.Shape = Shape;
		params.DeltaTime = DeltaTime;
		params.groupIndex = groupIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Group != nullptr)
			*Group = params.Group;
		if (Behavior != nullptr)
			*Behavior = params.Behavior;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockAvoidanceArea
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FAvoidanceArea>                      Return                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::GetFlockAvoidanceArea(TArray<struct FAvoidanceArea>* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockAvoidanceArea");
		
		ADesertKaiju_FirstFlockChar_BP_C_GetFlockAvoidanceArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DistanceToKaiju
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::DistanceToKaiju(float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DistanceToKaiju");
		
		ADesertKaiju_FirstFlockChar_BP_C_DistanceToKaiju_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ADesertKaiju_FirstFlockChar_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPAdjustDamage");
		
		ADesertKaiju_FirstFlockChar_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPDinoPostBeginPlay");
		
		ADesertKaiju_FirstFlockChar_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveTick");
		
		ADesertKaiju_FirstFlockChar_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BP_OnSetDeath");
		
		ADesertKaiju_FirstFlockChar_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ADesertKaiju_FirstFlockChar_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BlueprintAdjustOutputDamage");
		
		ADesertKaiju_FirstFlockChar_BP_C_BlueprintAdjustOutputDamage_Params params {};
		params.AttackIndex = AttackIndex;
		params.OriginalDamageAmount = OriginalDamageAmount;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamageType != nullptr)
			*OutDamageType = params.OutDamageType;
		if (OutDamageImpulse != nullptr)
			*OutDamageImpulse = params.OutDamageImpulse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.UserConstructionScript");
		
		ADesertKaiju_FirstFlockChar_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveBeginPlay");
		
		ADesertKaiju_FirstFlockChar_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MulticastUpdateShape
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewShape                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::MulticastUpdateShape(int32_t NewShape, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MulticastUpdateShape");
		
		ADesertKaiju_FirstFlockChar_BP_C_MulticastUpdateShape_Params params {};
		params.NewShape = NewShape;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Multi_UpdateAttackShape
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::Multi_UpdateAttackShape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Multi_UpdateAttackShape");
		
		ADesertKaiju_FirstFlockChar_BP_C_Multi_UpdateAttackShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DelayedTurnBoolOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::DelayedTurnBoolOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DelayedTurnBoolOff");
		
		ADesertKaiju_FirstFlockChar_BP_C_DelayedTurnBoolOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiUpdateKaijuOwner
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      KaijuOwner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::MultiUpdateKaijuOwner(class AActor* KaijuOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiUpdateKaijuOwner");
		
		ADesertKaiju_FirstFlockChar_BP_C_MultiUpdateKaijuOwner_Params params {};
		params.KaijuOwner = KaijuOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Delayed_DealDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitFromDirection                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  HitInfo                                                    (Parm)
	 * 		class UClass*                                      DmgTypeClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::Delayed_DealDamage(class AActor* DamagedActor, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class UClass* DmgTypeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Delayed_DealDamage");
		
		ADesertKaiju_FirstFlockChar_BP_C_Delayed_DealDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.HitFromDirection = HitFromDirection;
		params.HitInfo = HitInfo;
		params.DmgTypeClass = DmgTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.CleanupBoids
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::CleanupBoids()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.CleanupBoids");
		
		ADesertKaiju_FirstFlockChar_BP_C_CleanupBoids_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiOnLethalDamage
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::MultiOnLethalDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiOnLethalDamage");
		
		ADesertKaiju_FirstFlockChar_BP_C_MultiOnLethalDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADesertKaiju_FirstFlockChar_BP_C::ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP");
		
		ADesertKaiju_FirstFlockChar_BP_C_ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADesertKaiju_FirstFlockChar_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADesertKaiju_FirstFlockChar_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C");
		return ptr;
	}

}


