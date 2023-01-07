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
	 * 		Name   -> Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPReactivateWithDamageCauser
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ForDamageCauser                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekPistolHelper_C::BPReactivateWithDamageCauser(class AActor* ForInstigator, class AActor* ForDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPReactivateWithDamageCauser");
		
		ABuff_TekPistolHelper_C_BPReactivateWithDamageCauser_Params params {};
		params.ForInstigator = ForInstigator;
		params.ForDamageCauser = ForDamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.Set HUDElement Location and Scale from World Projection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHUDElement                                 HUDElement                                                 (Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     WorldOffsetWhenClose                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldOffsetWhenFar                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHUDElement                                 OutElem                                                    (Parm, OutParm)
	 * 		bool                                               IsTargetOnScreen                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekPistolHelper_C::SetHUDElementLocationandScalefromWorldProjection(class APlayerController* PlayerController, class AActor* TargetActor, struct FHUDElement* HUDElement, const struct FVector& WorldOffsetWhenClose, const struct FVector& WorldOffsetWhenFar, struct FHUDElement* OutElem, bool* IsTargetOnScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.Set HUDElement Location and Scale from World Projection");
		
		ABuff_TekPistolHelper_C_SetHUDElementLocationandScalefromWorldProjection_Params params {};
		params.PlayerController = PlayerController;
		params.TargetActor = TargetActor;
		params.WorldOffsetWhenClose = WorldOffsetWhenClose;
		params.WorldOffsetWhenFar = WorldOffsetWhenFar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HUDElement != nullptr)
			*HUDElement = params.HUDElement;
		if (OutElem != nullptr)
			*OutElem = params.OutElem;
		if (IsTargetOnScreen != nullptr)
			*IsTargetOnScreen = params.IsTargetOnScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_TekPistolHelper_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPGetHUDElements");
		
		ABuff_TekPistolHelper_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekPistolHelper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.UserConstructionScript");
		
		ABuff_TekPistolHelper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.ExecuteUbergraph_Buff_TekPistolHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_TekPistolHelper_C::ExecuteUbergraph_Buff_TekPistolHelper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.ExecuteUbergraph_Buff_TekPistolHelper");
		
		ABuff_TekPistolHelper_C_ExecuteUbergraph_Buff_TekPistolHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekPistolHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekPistolHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekPistolHelper.Buff_TekPistolHelper_C");
		return ptr;
	}

}


