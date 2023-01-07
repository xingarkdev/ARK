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
	 * 		Name   -> Function TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekFabricatorCraftedEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C.UserConstructionScript");
		
		ATekFabricatorCraftedEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C.ExecuteUbergraph_TekFabricatorCraftedEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekFabricatorCraftedEmitter_C::ExecuteUbergraph_TekFabricatorCraftedEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C.ExecuteUbergraph_TekFabricatorCraftedEmitter");
		
		ATekFabricatorCraftedEmitter_C_ExecuteUbergraph_TekFabricatorCraftedEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekFabricatorCraftedEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekFabricatorCraftedEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C");
		return ptr;
	}

}


