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
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.CanUseRenderTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canuse                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASM_Mirror_BP_C::CanUseRenderTarget(bool* canuse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.CanUseRenderTarget");
		
		ASM_Mirror_BP_C_CanUseRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canuse != nullptr)
			*canuse = params.canuse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.GetMirrorBlend
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentMirrorBlend                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASM_Mirror_BP_C::GetMirrorBlend(float* CurrentMirrorBlend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.GetMirrorBlend");
		
		ASM_Mirror_BP_C_GetMirrorBlend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentMirrorBlend != nullptr)
			*CurrentMirrorBlend = params.CurrentMirrorBlend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASM_Mirror_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveDestroyed");
		
		ASM_Mirror_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.SetMirrorBlend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewMirrorBlend                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASM_Mirror_BP_C::SetMirrorBlend(float NewMirrorBlend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.SetMirrorBlend");
		
		ASM_Mirror_BP_C_SetMirrorBlend_Params params {};
		params.NewMirrorBlend = NewMirrorBlend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASM_Mirror_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.UserConstructionScript");
		
		ASM_Mirror_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASM_Mirror_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveBeginPlay");
		
		ASM_Mirror_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.ForcedTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASM_Mirror_BP_C::ForcedTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ForcedTick");
		
		ASM_Mirror_BP_C_ForcedTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.DistanceCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASM_Mirror_BP_C::DistanceCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.DistanceCheck");
		
		ASM_Mirror_BP_C_DistanceCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.OnSemaphoreTaken_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SemaphoreName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASM_Mirror_BP_C::OnSemaphoreTaken_Event(const class FName& SemaphoreName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.OnSemaphoreTaken_Event");
		
		ASM_Mirror_BP_C_OnSemaphoreTaken_Event_Params params {};
		params.SemaphoreName = SemaphoreName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASM_Mirror_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ReceiveActorBeginOverlap");
		
		ASM_Mirror_BP_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.DestroyMirror
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASM_Mirror_BP_C::DestroyMirror()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.DestroyMirror");
		
		ASM_Mirror_BP_C_DestroyMirror_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.LerpMirrorBlend
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASM_Mirror_BP_C::LerpMirrorBlend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.LerpMirrorBlend");
		
		ASM_Mirror_BP_C_LerpMirrorBlend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.FadeOutDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASM_Mirror_BP_C::FadeOutDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.FadeOutDestroy");
		
		ASM_Mirror_BP_C_FadeOutDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function SM_Mirror_BP.SM_Mirror_BP_C.ExecuteUbergraph_SM_Mirror_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASM_Mirror_BP_C::ExecuteUbergraph_SM_Mirror_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_Mirror_BP.SM_Mirror_BP_C.ExecuteUbergraph_SM_Mirror_BP");
		
		ASM_Mirror_BP_C_ExecuteUbergraph_SM_Mirror_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASM_Mirror_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASM_Mirror_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SM_Mirror_BP.SM_Mirror_BP_C");
		return ptr;
	}

}


