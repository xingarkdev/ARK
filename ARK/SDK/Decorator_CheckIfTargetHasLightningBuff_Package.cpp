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
	 * 		Name   -> Function Decorator_CheckIfTargetHasLightningBuff.Decorator_CheckIfTargetHasLightningBuff_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_CheckIfTargetHasLightningBuff_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_CheckIfTargetHasLightningBuff.Decorator_CheckIfTargetHasLightningBuff_C.ReceiveConditionCheck");
		
		UDecorator_CheckIfTargetHasLightningBuff_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Decorator_CheckIfTargetHasLightningBuff.Decorator_CheckIfTargetHasLightningBuff_C.ExecuteUbergraph_Decorator_CheckIfTargetHasLightningBuff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_CheckIfTargetHasLightningBuff_C::ExecuteUbergraph_Decorator_CheckIfTargetHasLightningBuff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_CheckIfTargetHasLightningBuff.Decorator_CheckIfTargetHasLightningBuff_C.ExecuteUbergraph_Decorator_CheckIfTargetHasLightningBuff");
		
		UDecorator_CheckIfTargetHasLightningBuff_C_ExecuteUbergraph_Decorator_CheckIfTargetHasLightningBuff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecorator_CheckIfTargetHasLightningBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecorator_CheckIfTargetHasLightningBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_CheckIfTargetHasLightningBuff.Decorator_CheckIfTargetHasLightningBuff_C");
		return ptr;
	}

}


