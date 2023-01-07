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
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_Wyvern.DroppedItemGeneric_FertilizedEgg_Wyvern_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_FertilizedEgg_Wyvern_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_Wyvern.DroppedItemGeneric_FertilizedEgg_Wyvern_C.UserConstructionScript");
		
		ADroppedItemGeneric_FertilizedEgg_Wyvern_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_Wyvern.DroppedItemGeneric_FertilizedEgg_Wyvern_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_Wyvern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_FertilizedEgg_Wyvern_C::ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_Wyvern(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_Wyvern.DroppedItemGeneric_FertilizedEgg_Wyvern_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_Wyvern");
		
		ADroppedItemGeneric_FertilizedEgg_Wyvern_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_Wyvern_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItemGeneric_FertilizedEgg_Wyvern_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItemGeneric_FertilizedEgg_Wyvern_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_Wyvern.DroppedItemGeneric_FertilizedEgg_Wyvern_C");
		return ptr;
	}

}


