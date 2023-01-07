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
	 * 		Name   -> Function LootItemSet_BaseMeatFishing.LootItemSet_BaseMeatFishing_C.ExecuteUbergraph_LootItemSet_BaseMeatFishing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULootItemSet_BaseMeatFishing_C::ExecuteUbergraph_LootItemSet_BaseMeatFishing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootItemSet_BaseMeatFishing.LootItemSet_BaseMeatFishing_C.ExecuteUbergraph_LootItemSet_BaseMeatFishing");
		
		ULootItemSet_BaseMeatFishing_C_ExecuteUbergraph_LootItemSet_BaseMeatFishing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULootItemSet_BaseMeatFishing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootItemSet_BaseMeatFishing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_BaseMeatFishing.LootItemSet_BaseMeatFishing_C");
		return ptr;
	}

}


