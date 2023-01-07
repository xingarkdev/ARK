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
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.RefreshIdleAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_C::RefreshIdleAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.RefreshIdleAudio");
		
		AStructure_PlantSpeciesR_C_RefreshIdleAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPOnDemolish
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_C::BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPOnDemolish");
		
		AStructure_PlantSpeciesR_C_BPOnDemolish_Params params {};
		params.ForPC = ForPC;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ClearLastHitRot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_C::ClearLastHitRot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ClearLastHitRot");
		
		AStructure_PlantSpeciesR_C_ClearLastHitRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FillHarvestHealth
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_C::FillHarvestHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FillHarvestHealth");
		
		AStructure_PlantSpeciesR_C_FillHarvestHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.OnRep_HarvestHealth
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_C::OnRep_HarvestHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.OnRep_HarvestHealth");
		
		AStructure_PlantSpeciesR_C_OnRep_HarvestHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.PlayHarvestVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_C::PlayHarvestVFX(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.PlayHarvestVFX");
		
		AStructure_PlantSpeciesR_C_PlayHarvestVFX_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetPlantEmissivePercent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewEmissiveVal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_C::SetPlantEmissivePercent(float NewEmissiveVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetPlantEmissivePercent");
		
		AStructure_PlantSpeciesR_C_SetPlantEmissivePercent_Params params {};
		params.NewEmissiveVal = NewEmissiveVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ReceiveBeginPlay");
		
		AStructure_PlantSpeciesR_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetHarvestClassColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_C::SetHarvestClassColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.SetHarvestClassColor");
		
		AStructure_PlantSpeciesR_C_SetHarvestClassColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPUpdatedHealth
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDoReplication                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_C::BPUpdatedHealth(bool bDoReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPUpdatedHealth");
		
		AStructure_PlantSpeciesR_C_BPUpdatedHealth_Params params {};
		params.bDoReplication = bDoReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FindOrCreateDynamicMaterials
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInstanceDynamic*>            DynamicMaterials                                           (Parm, OutParm, ZeroConstructor)
	 */
	void AStructure_PlantSpeciesR_C::FindOrCreateDynamicMaterials(TArray<class UMaterialInstanceDynamic*>* DynamicMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.FindOrCreateDynamicMaterials");
		
		AStructure_PlantSpeciesR_C_FindOrCreateDynamicMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMaterials != nullptr)
			*DynamicMaterials = params.DynamicMaterials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AStructure_PlantSpeciesR_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BPAdjustDamage");
		
		AStructure_PlantSpeciesR_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BlueprintDrawHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_C::BlueprintDrawHUD(class AShooterHUD* HUD, float CenterX, float CenterY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.BlueprintDrawHUD");
		
		AStructure_PlantSpeciesR_C_BlueprintDrawHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UserConstructionScript");
		
		AStructure_PlantSpeciesR_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_C::Timeline_UpdateMatZHeight__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__FinishedFunc");
		
		AStructure_PlantSpeciesR_C_Timeline_UpdateMatZHeight__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AStructure_PlantSpeciesR_C::Timeline_UpdateMatZHeight__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Timeline_UpdateMatZHeight__UpdateFunc");
		
		AStructure_PlantSpeciesR_C_Timeline_UpdateMatZHeight__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Multi_UpdateHarvestVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AnimIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_C::Multi_UpdateHarvestVFX(const struct FTransform& Transform, int32_t AnimIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.Multi_UpdateHarvestVFX");
		
		AStructure_PlantSpeciesR_C_Multi_UpdateHarvestVFX_Params params {};
		params.Transform = Transform;
		params.AnimIndex = AnimIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UpdateMatZHeight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Retracted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Instant                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_C::UpdateMatZHeight(bool Retracted, bool Instant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.UpdateMatZHeight");
		
		AStructure_PlantSpeciesR_C_UpdateMatZHeight_Params params {};
		params.Retracted = Retracted;
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ExecuteUbergraph_Structure_PlantSpeciesR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_PlantSpeciesR_C::ExecuteUbergraph_Structure_PlantSpeciesR(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_PlantSpeciesR.Structure_PlantSpeciesR_C.ExecuteUbergraph_Structure_PlantSpeciesR");
		
		AStructure_PlantSpeciesR_C_ExecuteUbergraph_Structure_PlantSpeciesR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_PlantSpeciesR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_PlantSpeciesR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_PlantSpeciesR.Structure_PlantSpeciesR_C");
		return ptr;
	}

}


