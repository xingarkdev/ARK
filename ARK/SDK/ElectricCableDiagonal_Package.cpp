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
	 * 		Name   -> Function ElectricCableDiagonal.ElectricCableDiagonal_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AElectricCableDiagonal_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricCableDiagonal.ElectricCableDiagonal_C.UserConstructionScript");
		
		AElectricCableDiagonal_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ElectricCableDiagonal.ElectricCableDiagonal_C.ExecuteUbergraph_ElectricCableDiagonal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AElectricCableDiagonal_C::ExecuteUbergraph_ElectricCableDiagonal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElectricCableDiagonal.ElectricCableDiagonal_C.ExecuteUbergraph_ElectricCableDiagonal");
		
		AElectricCableDiagonal_C_ExecuteUbergraph_ElectricCableDiagonal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AElectricCableDiagonal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElectricCableDiagonal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ElectricCableDiagonal.ElectricCableDiagonal_C");
		return ptr;
	}

}


