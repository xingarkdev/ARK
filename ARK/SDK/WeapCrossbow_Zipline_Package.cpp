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
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ZiplineObstructionTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Hit                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCrossbow_Zipline_C::ZiplineObstructionTrace(const struct FVector& Start, bool* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ZiplineObstructionTrace");
		
		AWeapCrossbow_Zipline_C_ZiplineObstructionTrace_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPHandleMeleeAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Zipline_C::BPHandleMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPHandleMeleeAttack");
		
		AWeapCrossbow_Zipline_C_BPHandleMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.IsValidHitLocationForAttachment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsValidHit                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCrossbow_Zipline_C::IsValidHitLocationForAttachment(struct FHitResult* Hit, bool* IsValidHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.IsValidHitLocationForAttachment");
		
		AWeapCrossbow_Zipline_C_IsValidHitLocationForAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
		if (IsValidHit != nullptr)
			*IsValidHit = params.IsValidHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPWeaponCanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AWeapCrossbow_Zipline_C::BPWeaponCanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPWeaponCanFire");
		
		AWeapCrossbow_Zipline_C_BPWeaponCanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Get ZipProjectile Default Object
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AProjZiplineAnchor_C*                        AsProjArrow_Zipline_Bolt_C                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCrossbow_Zipline_C::GetZipProjectileDefaultObject(class AProjZiplineAnchor_C** AsProjArrow_Zipline_Bolt_C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Get ZipProjectile Default Object");
		
		AWeapCrossbow_Zipline_C_GetZipProjectileDefaultObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsProjArrow_Zipline_Bolt_C != nullptr)
			*AsProjArrow_Zipline_Bolt_C = params.AsProjArrow_Zipline_Bolt_C;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Update Preview Cable
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Zipline_C::UpdatePreviewCable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.Update Preview Cable");
		
		AWeapCrossbow_Zipline_C_UpdatePreviewCable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCrossbow_Zipline_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveTick");
		
		AWeapCrossbow_Zipline_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Zipline_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReceiveDestroyed");
		
		AWeapCrossbow_Zipline_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Zipline_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.UserConstructionScript");
		
		AWeapCrossbow_Zipline_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReloadNow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Zipline_C::ReloadNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ReloadNow");
		
		AWeapCrossbow_Zipline_C_ReloadNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ResetReload
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Zipline_C::ResetReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ResetReload");
		
		AWeapCrossbow_Zipline_C_ResetReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.NoPlacementNoti
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Zipline_C::NoPlacementNoti()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.NoPlacementNoti");
		
		AWeapCrossbow_Zipline_C_NoPlacementNoti_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Zipline_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.BPFiredWeapon");
		
		AWeapCrossbow_Zipline_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ExecuteUbergraph_WeapCrossbow_Zipline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCrossbow_Zipline_C::ExecuteUbergraph_WeapCrossbow_Zipline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Zipline.WeapCrossbow_Zipline_C.ExecuteUbergraph_WeapCrossbow_Zipline");
		
		AWeapCrossbow_Zipline_C_ExecuteUbergraph_WeapCrossbow_Zipline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapCrossbow_Zipline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapCrossbow_Zipline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_Zipline.WeapCrossbow_Zipline_C");
		return ptr;
	}

}


