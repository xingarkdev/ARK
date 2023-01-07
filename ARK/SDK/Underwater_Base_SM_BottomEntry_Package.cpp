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
	 * 		Name   -> Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.ChangedCompartmentFloodState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwater_Base_SM_BottomEntry_C::ChangedCompartmentFloodState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.ChangedCompartmentFloodState");
		
		AUnderwater_Base_SM_BottomEntry_C_ChangedCompartmentFloodState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.UpdatedVisuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwater_Base_SM_BottomEntry_C::UpdatedVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.UpdatedVisuals");
		
		AUnderwater_Base_SM_BottomEntry_C_UpdatedVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwater_Base_SM_BottomEntry_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.BPUnstasis");
		
		AUnderwater_Base_SM_BottomEntry_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwater_Base_SM_BottomEntry_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.ReceiveBeginPlay");
		
		AUnderwater_Base_SM_BottomEntry_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwater_Base_SM_BottomEntry_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.UserConstructionScript");
		
		AUnderwater_Base_SM_BottomEntry_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.UpdateVisuals
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwater_Base_SM_BottomEntry_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.UpdateVisuals");
		
		AUnderwater_Base_SM_BottomEntry_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.ExecuteUbergraph_Underwater_Base_SM_BottomEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUnderwater_Base_SM_BottomEntry_C::ExecuteUbergraph_Underwater_Base_SM_BottomEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C.ExecuteUbergraph_Underwater_Base_SM_BottomEntry");
		
		AUnderwater_Base_SM_BottomEntry_C_ExecuteUbergraph_Underwater_Base_SM_BottomEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnderwater_Base_SM_BottomEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnderwater_Base_SM_BottomEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C");
		return ptr;
	}

}


