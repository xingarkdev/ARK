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
	 * 		Name   -> Function PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlantSpeciesZFlashbangEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C.UserConstructionScript");
		
		APlantSpeciesZFlashbangEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C.ExecuteUbergraph_PlantSpeciesZFlashbangEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlantSpeciesZFlashbangEmitter_C::ExecuteUbergraph_PlantSpeciesZFlashbangEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C.ExecuteUbergraph_PlantSpeciesZFlashbangEmitter");
		
		APlantSpeciesZFlashbangEmitter_C_ExecuteUbergraph_PlantSpeciesZFlashbangEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlantSpeciesZFlashbangEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlantSpeciesZFlashbangEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlantSpeciesZFlashbangEmitter.PlantSpeciesZFlashbangEmitter_C");
		return ptr;
	}

}


