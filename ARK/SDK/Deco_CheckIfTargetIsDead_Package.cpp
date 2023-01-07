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
	 * 		Name   -> Function Deco_CheckIfTargetIsDead.Deco_CheckIfTargetIsDead_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeco_CheckIfTargetIsDead_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_CheckIfTargetIsDead.Deco_CheckIfTargetIsDead_C.ReceiveConditionCheck");
		
		UDeco_CheckIfTargetIsDead_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Deco_CheckIfTargetIsDead.Deco_CheckIfTargetIsDead_C.ExecuteUbergraph_Deco_CheckIfTargetIsDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeco_CheckIfTargetIsDead_C::ExecuteUbergraph_Deco_CheckIfTargetIsDead(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_CheckIfTargetIsDead.Deco_CheckIfTargetIsDead_C.ExecuteUbergraph_Deco_CheckIfTargetIsDead");
		
		UDeco_CheckIfTargetIsDead_C_ExecuteUbergraph_Deco_CheckIfTargetIsDead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeco_CheckIfTargetIsDead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeco_CheckIfTargetIsDead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_CheckIfTargetIsDead.Deco_CheckIfTargetIsDead_C");
		return ptr;
	}

}


