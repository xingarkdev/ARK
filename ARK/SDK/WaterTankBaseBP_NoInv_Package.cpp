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
	 * 		Name   -> Function WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWaterTankBaseBP_NoInv_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C.UserConstructionScript");
		
		AWaterTankBaseBP_NoInv_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C.ExecuteUbergraph_WaterTankBaseBP_NoInv
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWaterTankBaseBP_NoInv_C::ExecuteUbergraph_WaterTankBaseBP_NoInv(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C.ExecuteUbergraph_WaterTankBaseBP_NoInv");
		
		AWaterTankBaseBP_NoInv_C_ExecuteUbergraph_WaterTankBaseBP_NoInv_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterTankBaseBP_NoInv_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterTankBaseBP_NoInv_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaterTankBaseBP_NoInv.WaterTankBaseBP_NoInv_C");
		return ptr;
	}

}


