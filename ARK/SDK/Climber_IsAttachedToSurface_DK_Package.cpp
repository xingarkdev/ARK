﻿/**
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
	 * 		Name   -> Function Climber_IsAttachedToSurface_DK.Climber_IsAttachedToSurface_DK_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClimber_IsAttachedToSurface_DK_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Climber_IsAttachedToSurface_DK.Climber_IsAttachedToSurface_DK_C.ReceiveConditionCheck");
		
		UClimber_IsAttachedToSurface_DK_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Climber_IsAttachedToSurface_DK.Climber_IsAttachedToSurface_DK_C.ExecuteUbergraph_Climber_IsAttachedToSurface_DK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClimber_IsAttachedToSurface_DK_C::ExecuteUbergraph_Climber_IsAttachedToSurface_DK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Climber_IsAttachedToSurface_DK.Climber_IsAttachedToSurface_DK_C.ExecuteUbergraph_Climber_IsAttachedToSurface_DK");
		
		UClimber_IsAttachedToSurface_DK_C_ExecuteUbergraph_Climber_IsAttachedToSurface_DK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClimber_IsAttachedToSurface_DK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClimber_IsAttachedToSurface_DK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Climber_IsAttachedToSurface_DK.Climber_IsAttachedToSurface_DK_C");
		return ptr;
	}

}


