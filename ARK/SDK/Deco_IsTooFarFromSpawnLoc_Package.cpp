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
	 * 		Name   -> Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeco_IsTooFarFromSpawnLoc_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ReceiveConditionCheck");
		
		UDeco_IsTooFarFromSpawnLoc_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeco_IsTooFarFromSpawnLoc_C::ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C.ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc");
		
		UDeco_IsTooFarFromSpawnLoc_C_ExecuteUbergraph_Deco_IsTooFarFromSpawnLoc_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeco_IsTooFarFromSpawnLoc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeco_IsTooFarFromSpawnLoc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_IsTooFarFromSpawnLoc.Deco_IsTooFarFromSpawnLoc_C");
		return ptr;
	}

}


