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
	 * 		Name   -> Function IndustrialForgeEmitter.IndustrialForgeEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIndustrialForgeEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IndustrialForgeEmitter.IndustrialForgeEmitter_C.UserConstructionScript");
		
		AIndustrialForgeEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function IndustrialForgeEmitter.IndustrialForgeEmitter_C.ExecuteUbergraph_IndustrialForgeEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIndustrialForgeEmitter_C::ExecuteUbergraph_IndustrialForgeEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IndustrialForgeEmitter.IndustrialForgeEmitter_C.ExecuteUbergraph_IndustrialForgeEmitter");
		
		AIndustrialForgeEmitter_C_ExecuteUbergraph_IndustrialForgeEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIndustrialForgeEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIndustrialForgeEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IndustrialForgeEmitter.IndustrialForgeEmitter_C");
		return ptr;
	}

}


