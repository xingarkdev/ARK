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
	 * 		Name   -> Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.SetActive_3PArrow Flame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCrossbow_Flame_C::SetActive_3PArrowFlame(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.SetActive_3PArrow Flame");
		
		AWeapCrossbow_Flame_C_SetActive_3PArrowFlame_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Flame_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.UserConstructionScript");
		
		AWeapCrossbow_Flame_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.OnHideProjectile
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Flame_C::OnHideProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.OnHideProjectile");
		
		AWeapCrossbow_Flame_C_OnHideProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.OnUnHideProjectile
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapCrossbow_Flame_C::OnUnHideProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.OnUnHideProjectile");
		
		AWeapCrossbow_Flame_C_OnUnHideProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.ExecuteUbergraph_WeapCrossbow_Flame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapCrossbow_Flame_C::ExecuteUbergraph_WeapCrossbow_Flame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapCrossbow_Flame.WeapCrossbow_Flame_C.ExecuteUbergraph_WeapCrossbow_Flame");
		
		AWeapCrossbow_Flame_C_ExecuteUbergraph_WeapCrossbow_Flame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapCrossbow_Flame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapCrossbow_Flame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_Flame.WeapCrossbow_Flame_C");
		return ptr;
	}

}


