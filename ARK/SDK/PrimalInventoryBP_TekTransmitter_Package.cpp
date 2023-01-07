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
	 * 		Name   -> Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.BPRemoteInventoryAllowViewing
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventoryBP_TekTransmitter_C::BPRemoteInventoryAllowViewing(class AShooterPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.BPRemoteInventoryAllowViewing");
		
		UPrimalInventoryBP_TekTransmitter_C_BPRemoteInventoryAllowViewing_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.ExecuteUbergraph_PrimalInventoryBP_TekTransmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_TekTransmitter_C::ExecuteUbergraph_PrimalInventoryBP_TekTransmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C.ExecuteUbergraph_PrimalInventoryBP_TekTransmitter");
		
		UPrimalInventoryBP_TekTransmitter_C_ExecuteUbergraph_PrimalInventoryBP_TekTransmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_TekTransmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_TekTransmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C");
		return ptr;
	}

}


