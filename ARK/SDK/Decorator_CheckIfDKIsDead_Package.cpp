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
	 * 		Name   -> Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_CheckIfDKIsDead_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ReceiveConditionCheck");
		
		UDecorator_CheckIfDKIsDead_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ExecuteUbergraph_Decorator_CheckIfDKIsDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_CheckIfDKIsDead_C::ExecuteUbergraph_Decorator_CheckIfDKIsDead(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C.ExecuteUbergraph_Decorator_CheckIfDKIsDead");
		
		UDecorator_CheckIfDKIsDead_C_ExecuteUbergraph_Decorator_CheckIfDKIsDead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecorator_CheckIfDKIsDead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecorator_CheckIfDKIsDead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C");
		return ptr;
	}

}


