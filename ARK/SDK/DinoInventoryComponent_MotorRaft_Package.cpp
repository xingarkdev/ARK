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
	 * 		Name   -> Function DinoInventoryComponent_MotorRaft.DinoInventoryComponent_MotorRaft_C.ExecuteUbergraph_DinoInventoryComponent_MotorRaft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoInventoryComponent_MotorRaft_C::ExecuteUbergraph_DinoInventoryComponent_MotorRaft(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoInventoryComponent_MotorRaft.DinoInventoryComponent_MotorRaft_C.ExecuteUbergraph_DinoInventoryComponent_MotorRaft");
		
		UDinoInventoryComponent_MotorRaft_C_ExecuteUbergraph_DinoInventoryComponent_MotorRaft_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoInventoryComponent_MotorRaft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoInventoryComponent_MotorRaft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoInventoryComponent_MotorRaft.DinoInventoryComponent_MotorRaft_C");
		return ptr;
	}

}


