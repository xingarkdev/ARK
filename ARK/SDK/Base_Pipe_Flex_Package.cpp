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
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.ResetRefreshConnectionsCooldown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Pipe_Flex_C::ResetRefreshConnectionsCooldown(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.ResetRefreshConnectionsCooldown");
		
		ABase_Pipe_Flex_C_ResetRefreshConnectionsCooldown_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.IsAllowedToRefreshConnections
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Pipe_Flex_C::IsAllowedToRefreshConnections(class APlayerController* ForPC, bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.IsAllowedToRefreshConnections");
		
		ABase_Pipe_Flex_C_IsAllowedToRefreshConnections_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABase_Pipe_Flex_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPGetMultiUseEntries");
		
		ABase_Pipe_Flex_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABase_Pipe_Flex_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPTryMultiUse");
		
		ABase_Pipe_Flex_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateWaterStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABase_Pipe_Flex_C::UpdateWaterStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateWaterStatus");
		
		ABase_Pipe_Flex_C_UpdateWaterStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.LinkPipes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalStructure*>                    ConnectedPipes                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABase_Pipe_Flex_C::LinkPipes(TArray<class APrimalStructure*>* ConnectedPipes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.LinkPipes");
		
		ABase_Pipe_Flex_C_LinkPipes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConnectedPipes != nullptr)
			*ConnectedPipes = params.ConnectedPipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOverrideCantBuildReasonString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CantBuildReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString ABase_Pipe_Flex_C::BPOverrideCantBuildReasonString(int32_t CantBuildReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOverrideCantBuildReasonString");
		
		ABase_Pipe_Flex_C_BPOverrideCantBuildReasonString_Params params {};
		params.CantBuildReason = CantBuildReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.AddSplineMeshComponents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsePreviewMaterial                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Pipe_Flex_C::AddSplineMeshComponents(bool UsePreviewMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.AddSplineMeshComponents");
		
		ABase_Pipe_Flex_C_AddSplineMeshComponents_Params params {};
		params.UsePreviewMaterial = UsePreviewMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPIsAllowedToBuild
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentAllowedReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ABase_Pipe_Flex_C::BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPIsAllowedToBuild");
		
		ABase_Pipe_Flex_C_BPIsAllowedToBuild_Params params {};
		params.CurrentAllowedReason = CurrentAllowedReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlacementData != nullptr)
			*OutPlacementData = params.OutPlacementData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABase_Pipe_Flex_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.UserConstructionScript");
		
		ABase_Pipe_Flex_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateSplineMeshesEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABase_Pipe_Flex_C::UpdateSplineMeshesEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.UpdateSplineMeshesEvent");
		
		ABase_Pipe_Flex_C_UpdateSplineMeshesEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABase_Pipe_Flex_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.ReceiveBeginPlay");
		
		ABase_Pipe_Flex_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnLinkedStructureDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            DestroyedStructure                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Pipe_Flex_C::BPOnLinkedStructureDestroyed(class APrimalStructure* DestroyedStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnLinkedStructureDestroyed");
		
		ABase_Pipe_Flex_C_BPOnLinkedStructureDestroyed_Params params {};
		params.DestroyedStructure = DestroyedStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.RefreshConnections
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABase_Pipe_Flex_C::RefreshConnections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.RefreshConnections");
		
		ABase_Pipe_Flex_C_RefreshConnections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnWaterStateChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPipeHasWaterOrPower                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Pipe_Flex_C::BPOnWaterStateChange(bool bPipeHasWaterOrPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.BPOnWaterStateChange");
		
		ABase_Pipe_Flex_C_BPOnWaterStateChange_Params params {};
		params.bPipeHasWaterOrPower = bPipeHasWaterOrPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Base_Pipe_Flex.Base_Pipe_Flex_C.ExecuteUbergraph_Base_Pipe_Flex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Pipe_Flex_C::ExecuteUbergraph_Base_Pipe_Flex(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Pipe_Flex.Base_Pipe_Flex_C.ExecuteUbergraph_Base_Pipe_Flex");
		
		ABase_Pipe_Flex_C_ExecuteUbergraph_Base_Pipe_Flex_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_Pipe_Flex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Pipe_Flex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Pipe_Flex.Base_Pipe_Flex_C");
		return ptr;
	}

}


