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
	 * 		Name   -> Function Underwater_Base_SM.Underwater_Base_SM_C.BPPreventPlacingStructureOntoMe
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            ForNewStructure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  ForHitResult                                               (Parm, OutParm, ReferenceParm)
	 */
	bool AUnderwater_Base_SM_C::BPPreventPlacingStructureOntoMe(class APlayerController* PC, class APrimalStructure* ForNewStructure, struct FHitResult* ForHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.BPPreventPlacingStructureOntoMe");
		
		AUnderwater_Base_SM_C_BPPreventPlacingStructureOntoMe_Params params {};
		params.PC = PC;
		params.ForNewStructure = ForNewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForHitResult != nullptr)
			*ForHitResult = params.ForHitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM.Underwater_Base_SM_C.BPForceConsideredEnemyFoundation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            ForNewStructure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TestAtLocation                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool AUnderwater_Base_SM_C::BPForceConsideredEnemyFoundation(class APlayerController* PC, class APrimalStructure* ForNewStructure, struct FVector* TestAtLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.BPForceConsideredEnemyFoundation");
		
		AUnderwater_Base_SM_C_BPForceConsideredEnemyFoundation_Params params {};
		params.PC = PC;
		params.ForNewStructure = ForNewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TestAtLocation != nullptr)
			*TestAtLocation = params.TestAtLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM.Underwater_Base_SM_C.ChangedCompartmentFloodState
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwater_Base_SM_C::ChangedCompartmentFloodState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.ChangedCompartmentFloodState");
		
		AUnderwater_Base_SM_C_ChangedCompartmentFloodState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM.Underwater_Base_SM_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUnderwater_Base_SM_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.UserConstructionScript");
		
		AUnderwater_Base_SM_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Underwater_Base_SM.Underwater_Base_SM_C.ExecuteUbergraph_Underwater_Base_SM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUnderwater_Base_SM_C::ExecuteUbergraph_Underwater_Base_SM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Underwater_Base_SM.Underwater_Base_SM_C.ExecuteUbergraph_Underwater_Base_SM");
		
		AUnderwater_Base_SM_C_ExecuteUbergraph_Underwater_Base_SM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnderwater_Base_SM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnderwater_Base_SM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Underwater_Base_SM.Underwater_Base_SM_C");
		return ptr;
	}

}


