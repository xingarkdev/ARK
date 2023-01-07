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
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BPActivated");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BPDeactivated");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BuffTickServer");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.BPSetupForInstigator");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.MaybeRotate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::MaybeRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.MaybeRotate");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_MaybeRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.UserConstructionScript");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.SetStructure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::SetStructure(class APrimalStructure* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.SetStructure");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_SetStructure_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.Client_DeactivateParticle
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::Client_DeactivateParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.Client_DeactivateParticle");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_Client_DeactivateParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.ReceiveBeginPlay");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.ReceiveTick");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.ExecuteUbergraph_Buff_DKaijuDelayedLightningOnKaiju
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DKaijuDelayedLightningOnKaiju_C::ExecuteUbergraph_Buff_DKaijuDelayedLightningOnKaiju(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C.ExecuteUbergraph_Buff_DKaijuDelayedLightningOnKaiju");
		
		ABuff_DKaijuDelayedLightningOnKaiju_C_ExecuteUbergraph_Buff_DKaijuDelayedLightningOnKaiju_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DKaijuDelayedLightningOnKaiju_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DKaijuDelayedLightningOnKaiju_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C");
		return ptr;
	}

}


