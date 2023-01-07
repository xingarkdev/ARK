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
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.OnRep_guy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DKaijuLightningNoTarget_C::OnRep_guy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.OnRep_guy");
		
		ABuff_DKaijuLightningNoTarget_C_OnRep_guy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.BPDeactivated
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuLightningNoTarget_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.BPDeactivated");
		
		ABuff_DKaijuLightningNoTarget_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuLightningNoTarget_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.BuffTickServer");
		
		ABuff_DKaijuLightningNoTarget_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuLightningNoTarget_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.BPSetupForInstigator");
		
		ABuff_DKaijuLightningNoTarget_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.MaybeRotate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DKaijuLightningNoTarget_C::MaybeRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.MaybeRotate");
		
		ABuff_DKaijuLightningNoTarget_C_MaybeRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DKaijuLightningNoTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.UserConstructionScript");
		
		ABuff_DKaijuLightningNoTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.SetStructure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuLightningNoTarget_C::SetStructure(class APrimalStructure* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.SetStructure");
		
		ABuff_DKaijuLightningNoTarget_C_SetStructure_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.Client_DeactivateParticle
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DKaijuLightningNoTarget_C::Client_DeactivateParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.Client_DeactivateParticle");
		
		ABuff_DKaijuLightningNoTarget_C_Client_DeactivateParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DKaijuLightningNoTarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.ReceiveBeginPlay");
		
		ABuff_DKaijuLightningNoTarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.ExecuteUbergraph_Buff_DKaijuLightningNoTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuLightningNoTarget_C::ExecuteUbergraph_Buff_DKaijuLightningNoTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C.ExecuteUbergraph_Buff_DKaijuLightningNoTarget");
		
		ABuff_DKaijuLightningNoTarget_C_ExecuteUbergraph_Buff_DKaijuLightningNoTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DKaijuLightningNoTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DKaijuLightningNoTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DKaijuLightningNoTarget.Buff_DKaijuLightningNoTarget_C");
		return ptr;
	}

}


