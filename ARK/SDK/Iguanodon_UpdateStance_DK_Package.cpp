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
	 * 		Name   -> Function Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIguanodon_UpdateStance_DK_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C.ReceiveTick");
		
		UIguanodon_UpdateStance_DK_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C.ExecuteUbergraph_Iguanodon_UpdateStance_DK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIguanodon_UpdateStance_DK_C::ExecuteUbergraph_Iguanodon_UpdateStance_DK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C.ExecuteUbergraph_Iguanodon_UpdateStance_DK");
		
		UIguanodon_UpdateStance_DK_C_ExecuteUbergraph_Iguanodon_UpdateStance_DK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIguanodon_UpdateStance_DK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIguanodon_UpdateStance_DK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C");
		return ptr;
	}

}


