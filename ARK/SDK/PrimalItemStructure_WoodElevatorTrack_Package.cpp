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
	 * 		Name   -> Function PrimalItemStructure_WoodElevatorTrack.PrimalItemStructure_WoodElevatorTrack_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_WoodElevatorTrack_C::ExecuteUbergraph_PrimalItemStructure_WoodElevatorTrack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodElevatorTrack.PrimalItemStructure_WoodElevatorTrack_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorTrack");
		
		UPrimalItemStructure_WoodElevatorTrack_C_ExecuteUbergraph_PrimalItemStructure_WoodElevatorTrack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_WoodElevatorTrack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_WoodElevatorTrack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodElevatorTrack.PrimalItemStructure_WoodElevatorTrack_C");
		return ptr;
	}

}


