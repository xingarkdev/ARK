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
	 * 		Name   -> Function TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATriFoundationTek_PlacementEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C.UserConstructionScript");
		
		ATriFoundationTek_PlacementEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C.ExecuteUbergraph_TriFoundationTek_PlacementEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATriFoundationTek_PlacementEmitter_C::ExecuteUbergraph_TriFoundationTek_PlacementEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C.ExecuteUbergraph_TriFoundationTek_PlacementEmitter");
		
		ATriFoundationTek_PlacementEmitter_C_ExecuteUbergraph_TriFoundationTek_PlacementEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATriFoundationTek_PlacementEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATriFoundationTek_PlacementEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C");
		return ptr;
	}

}


