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
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.OverrideDinoPreventAttract
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Prevent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_HoneyLure_C::OverrideDinoPreventAttract(class APrimalDinoCharacter* Dino, bool* Prevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.OverrideDinoPreventAttract");
		
		ADroppedItemGeneric_HoneyLure_C_OverrideDinoPreventAttract_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prevent != nullptr)
			*Prevent = params.Prevent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.OverrideDinoDoAttackOnConsume
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               override                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_HoneyLure_C::OverrideDinoDoAttackOnConsume(class APrimalDinoCharacter* Dino, bool* override)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.OverrideDinoDoAttackOnConsume");
		
		ADroppedItemGeneric_HoneyLure_C_OverrideDinoDoAttackOnConsume_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (override != nullptr)
			*override = params.override;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.IsDinoInConsumeRange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoAIController*                     DinoAI                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADroppedItemGeneric_HoneyLure_C::IsDinoInConsumeRange(class AActor* Dino, class APrimalDinoAIController* DinoAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.IsDinoInConsumeRange");
		
		ADroppedItemGeneric_HoneyLure_C_IsDinoInConsumeRange_Params params {};
		params.Dino = Dino;
		params.DinoAI = DinoAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.SetMovePointNearLure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        DinoToMove                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoAIController*                     DinoAI                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_HoneyLure_C::SetMovePointNearLure(class APrimalDinoCharacter* DinoToMove, class APrimalDinoAIController* DinoAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.SetMovePointNearLure");
		
		ADroppedItemGeneric_HoneyLure_C_SetMovePointNearLure_Params params {};
		params.DinoToMove = DinoToMove;
		params.DinoAI = DinoAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Can Dino Consume Bait
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_HoneyLure_C::CanDinoConsumeBait(class APrimalDinoCharacter* InputPin, bool* OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Can Dino Consume Bait");
		
		ADroppedItemGeneric_HoneyLure_C_CanDinoConsumeBait_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.BPPostInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_HoneyLure_C::BPPostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.BPPostInitializeComponents");
		
		ADroppedItemGeneric_HoneyLure_C_BPPostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_HoneyLure_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UserConstructionScript");
		
		ADroppedItemGeneric_HoneyLure_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADroppedItemGeneric_HoneyLure_C::Dissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__FinishedFunc");
		
		ADroppedItemGeneric_HoneyLure_C_Dissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADroppedItemGeneric_HoneyLure_C::Dissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.Dissolve__UpdateFunc");
		
		ADroppedItemGeneric_HoneyLure_C_Dissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_HoneyLure_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ReceiveBeginPlay");
		
		ADroppedItemGeneric_HoneyLure_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UpdateBait
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_HoneyLure_C::UpdateBait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.UpdateBait");
		
		ADroppedItemGeneric_HoneyLure_C_UpdateBait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.DestroyBait
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_HoneyLure_C::DestroyBait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.DestroyBait");
		
		ADroppedItemGeneric_HoneyLure_C_DestroyBait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.AttractCreatures
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADroppedItemGeneric_HoneyLure_C::AttractCreatures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.AttractCreatures");
		
		ADroppedItemGeneric_HoneyLure_C_AttractCreatures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ExecuteUbergraph_DroppedItemGeneric_HoneyLure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADroppedItemGeneric_HoneyLure_C::ExecuteUbergraph_DroppedItemGeneric_HoneyLure(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C.ExecuteUbergraph_DroppedItemGeneric_HoneyLure");
		
		ADroppedItemGeneric_HoneyLure_C_ExecuteUbergraph_DroppedItemGeneric_HoneyLure_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItemGeneric_HoneyLure_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItemGeneric_HoneyLure_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_HoneyLure.DroppedItemGeneric_HoneyLure_C");
		return ptr;
	}

}


