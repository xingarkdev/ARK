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
	 * 		Name   -> Function PrimalItemConsumable_Egg_XtraLarge.PrimalItemConsumable_Egg_XtraLarge_C.ExecuteUbergraph_PrimalItemConsumable_Egg_XtraLarge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Egg_XtraLarge_C::ExecuteUbergraph_PrimalItemConsumable_Egg_XtraLarge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_XtraLarge.PrimalItemConsumable_Egg_XtraLarge_C.ExecuteUbergraph_PrimalItemConsumable_Egg_XtraLarge");
		
		UPrimalItemConsumable_Egg_XtraLarge_C_ExecuteUbergraph_PrimalItemConsumable_Egg_XtraLarge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Egg_XtraLarge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Egg_XtraLarge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_XtraLarge.PrimalItemConsumable_Egg_XtraLarge_C");
		return ptr;
	}

}


