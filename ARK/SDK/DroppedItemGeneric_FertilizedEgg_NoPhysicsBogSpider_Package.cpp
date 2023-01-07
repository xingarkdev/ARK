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
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C.ReceiveBeginPlay");
		
		ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C.UserConstructionScript");
		
		ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C::ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C.ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider");
		
		ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C_ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider.DroppedItemGeneric_FertilizedEgg_NoPhysicsBogSpider_C");
		return ptr;
	}

}


