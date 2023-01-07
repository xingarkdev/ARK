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
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnSyncColorization
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::OnSyncColorization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnSyncColorization");
		
		ABuff_MekBackpack_Shield_C_OnSyncColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.PlayShieldSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SoundIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::PlayShieldSound(int32_t SoundIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.PlayShieldSound");
		
		ABuff_MekBackpack_Shield_C_PlayShieldSound_Params params {};
		params.SoundIndex = SoundIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetBackpackSaveData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMekBackpackData                            Data                                                       (Parm, OutParm)
	 */
	void ABuff_MekBackpack_Shield_C::GetBackpackSaveData(struct FMekBackpackData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetBackpackSaveData");
		
		ABuff_MekBackpack_Shield_C_GetBackpackSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.RestoreBackpackSaveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMekBackpackData                            SaveData                                                   (Parm)
	 */
	void ABuff_MekBackpack_Shield_C::RestoreBackpackSaveData(const struct FMekBackpackData& SaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.RestoreBackpackSaveData");
		
		ABuff_MekBackpack_Shield_C_RestoreBackpackSaveData_Params params {};
		params.SaveData = SaveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SetShieldShellMaterialParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Health                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Opacity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EmissiveMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              IOR                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::SetShieldShellMaterialParams(const struct FLinearColor& Color, float Health, float Opacity, float EmissiveMin, float IOR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SetShieldShellMaterialParams");
		
		ABuff_MekBackpack_Shield_C_SetShieldShellMaterialParams_Params params {};
		params.Color = Color;
		params.Health = Health;
		params.Opacity = Opacity;
		params.EmissiveMin = EmissiveMin;
		params.IOR = IOR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ReceiveBeginPlay");
		
		ABuff_MekBackpack_Shield_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickClient");
		
		ABuff_MekBackpack_Shield_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BPDeactivated");
		
		ABuff_MekBackpack_Shield_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetShieldStatus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::GetShieldStatus(bool* IsActive, struct FVector* WorldLocation, float* Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetShieldStatus");
		
		ABuff_MekBackpack_Shield_C_GetShieldStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.EnsureCharacterHasShieldBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::EnsureCharacterHasShieldBuff(class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.EnsureCharacterHasShieldBuff");
		
		ABuff_MekBackpack_Shield_C_EnsureCharacterHasShieldBuff_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.CanActivateBackpack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      FailureMessage                                             (Parm, OutParm, ZeroConstructor)
	 */
	void ABuff_MekBackpack_Shield_C::CanActivateBackpack(bool* CanActivate, class FString* FailureMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.CanActivateBackpack");
		
		ABuff_MekBackpack_Shield_C_CanActivateBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanActivate != nullptr)
			*CanActivate = params.CanActivate;
		if (FailureMessage != nullptr)
			*FailureMessage = params.FailureMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.AllowMekHover
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanHover                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::AllowMekHover(bool* CanHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.AllowMekHover");
		
		ABuff_MekBackpack_Shield_C_AllowMekHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHover != nullptr)
			*CanHover = params.CanHover;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickServer");
		
		ABuff_MekBackpack_Shield_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.IsBackpackActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::IsBackpackActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.IsBackpackActive");
		
		ABuff_MekBackpack_Shield_C_IsBackpackActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackActivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::OnBackpackActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackActivated");
		
		ABuff_MekBackpack_Shield_C_OnBackpackActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackDeactivated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::OnBackpackDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackDeactivated");
		
		ABuff_MekBackpack_Shield_C_OnBackpackDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.UserConstructionScript");
		
		ABuff_MekBackpack_Shield_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::ShieldDropTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__FinishedFunc");
		
		ABuff_MekBackpack_Shield_C_ShieldDropTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::ShieldDropTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__UpdateFunc");
		
		ABuff_MekBackpack_Shield_C_ShieldDropTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::ShieldExpandTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__FinishedFunc");
		
		ABuff_MekBackpack_Shield_C_ShieldExpandTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::ShieldExpandTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__UpdateFunc");
		
		ABuff_MekBackpack_Shield_C_ShieldExpandTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiDropShield
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::MultiDropShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiDropShield");
		
		ABuff_MekBackpack_Shield_C_MultiDropShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (Parm, OutParm, ReferenceParm)
	 */
	void ABuff_MekBackpack_Shield_C::BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABuff_MekBackpack_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepResult != nullptr)
			*SweepResult = params.SweepResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature");
		
		ABuff_MekBackpack_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnShieldAttach
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::OnShieldAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnShieldAttach");
		
		ABuff_MekBackpack_Shield_C_OnShieldAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiOnShieldDetach
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::MultiOnShieldDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiOnShieldDetach");
		
		ABuff_MekBackpack_Shield_C_MultiOnShieldDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiRetractShield
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::MultiRetractShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiRetractShield");
		
		ABuff_MekBackpack_Shield_C_MultiRetractShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiAutoDeploy
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::MultiAutoDeploy(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiAutoDeploy");
		
		ABuff_MekBackpack_Shield_C_MultiAutoDeploy_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SyncColorization
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_MekBackpack_Shield_C::SyncColorization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SyncColorization");
		
		ABuff_MekBackpack_Shield_C_SyncColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ExecuteUbergraph_Buff_MekBackpack_Shield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_MekBackpack_Shield_C::ExecuteUbergraph_Buff_MekBackpack_Shield(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ExecuteUbergraph_Buff_MekBackpack_Shield");
		
		ABuff_MekBackpack_Shield_C_ExecuteUbergraph_Buff_MekBackpack_Shield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_MekBackpack_Shield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_MekBackpack_Shield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C");
		return ptr;
	}

}


