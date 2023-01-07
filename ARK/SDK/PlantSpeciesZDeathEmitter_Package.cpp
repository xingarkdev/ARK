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
	 * 		Name   -> Function PlantSpeciesZDeathEmitter.PlantSpeciesZDeathEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlantSpeciesZDeathEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlantSpeciesZDeathEmitter.PlantSpeciesZDeathEmitter_C.UserConstructionScript");
		
		APlantSpeciesZDeathEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlantSpeciesZDeathEmitter.PlantSpeciesZDeathEmitter_C.ExecuteUbergraph_PlantSpeciesZDeathEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlantSpeciesZDeathEmitter_C::ExecuteUbergraph_PlantSpeciesZDeathEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlantSpeciesZDeathEmitter.PlantSpeciesZDeathEmitter_C.ExecuteUbergraph_PlantSpeciesZDeathEmitter");
		
		APlantSpeciesZDeathEmitter_C_ExecuteUbergraph_PlantSpeciesZDeathEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlantSpeciesZDeathEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlantSpeciesZDeathEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlantSpeciesZDeathEmitter.PlantSpeciesZDeathEmitter_C");
		return ptr;
	}

}


