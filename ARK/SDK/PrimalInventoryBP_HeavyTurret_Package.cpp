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
	 * 		Name   -> Function PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C.BPCustomRemoteInventoryAllowAddItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            anItemQuantityOverride                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRequestedByPlayer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPrimalInventoryBP_HeavyTurret_C::BPCustomRemoteInventoryAllowAddItems(class AShooterPlayerController* PC, class UPrimalItem* anItem, int32_t anItemQuantityOverride, bool bRequestedByPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C.BPCustomRemoteInventoryAllowAddItems");
		
		UPrimalInventoryBP_HeavyTurret_C_BPCustomRemoteInventoryAllowAddItems_Params params {};
		params.PC = PC;
		params.anItem = anItem;
		params.anItemQuantityOverride = anItemQuantityOverride;
		params.bRequestedByPlayer = bRequestedByPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C.ExecuteUbergraph_PrimalInventoryBP_HeavyTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_HeavyTurret_C::ExecuteUbergraph_PrimalInventoryBP_HeavyTurret(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C.ExecuteUbergraph_PrimalInventoryBP_HeavyTurret");
		
		UPrimalInventoryBP_HeavyTurret_C_ExecuteUbergraph_PrimalInventoryBP_HeavyTurret_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_HeavyTurret_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_HeavyTurret_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C");
		return ptr;
	}

}


