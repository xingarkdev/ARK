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
	 * 		Name   -> Function Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C.ReceiveExecutionStart
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_Mek_ShouldMove_C::ReceiveExecutionStart(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C.ReceiveExecutionStart");
		
		UDecorator_Mek_ShouldMove_C_ReceiveExecutionStart_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C.ExecuteUbergraph_Decorator_Mek_ShouldMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecorator_Mek_ShouldMove_C::ExecuteUbergraph_Decorator_Mek_ShouldMove(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C.ExecuteUbergraph_Decorator_Mek_ShouldMove");
		
		UDecorator_Mek_ShouldMove_C_ExecuteUbergraph_Decorator_Mek_ShouldMove_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecorator_Mek_ShouldMove_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecorator_Mek_ShouldMove_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_Mek_ShouldMove.Decorator_Mek_ShouldMove_C");
		return ptr;
	}

}


