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
	 * 		Name   -> Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapPlantSpeciesZ_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.UserConstructionScript");
		
		AWeapPlantSpeciesZ_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.StartSecondaryActionEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapPlantSpeciesZ_C::StartSecondaryActionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.StartSecondaryActionEvent");
		
		AWeapPlantSpeciesZ_C_StartSecondaryActionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.BPFiredWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapPlantSpeciesZ_C::BPFiredWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.BPFiredWeapon");
		
		AWeapPlantSpeciesZ_C_BPFiredWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ROS_UpdateQuickfire
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapPlantSpeciesZ_C::ROS_UpdateQuickfire(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ROS_UpdateQuickfire");
		
		AWeapPlantSpeciesZ_C_ROS_UpdateQuickfire_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ExecuteUbergraph_WeapPlantSpeciesZ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapPlantSpeciesZ_C::ExecuteUbergraph_WeapPlantSpeciesZ(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapPlantSpeciesZ.WeapPlantSpeciesZ_C.ExecuteUbergraph_WeapPlantSpeciesZ");
		
		AWeapPlantSpeciesZ_C_ExecuteUbergraph_WeapPlantSpeciesZ_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapPlantSpeciesZ_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapPlantSpeciesZ_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapPlantSpeciesZ.WeapPlantSpeciesZ_C");
		return ptr;
	}

}


