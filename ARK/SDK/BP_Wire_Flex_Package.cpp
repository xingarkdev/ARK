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
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.IsAllowedToRefreshConnections
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Wire_Flex_C::IsAllowedToRefreshConnections(class APlayerController* ForPC, bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.IsAllowedToRefreshConnections");
		
		ABP_Wire_Flex_C_IsAllowedToRefreshConnections_Params params {};
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
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABP_Wire_Flex_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPTryMultiUse");
		
		ABP_Wire_Flex_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABP_Wire_Flex_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPGetMultiUseEntries");
		
		ABP_Wire_Flex_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.LinkWires
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalStructure*>                    Connections                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABP_Wire_Flex_C::LinkWires(TArray<class APrimalStructure*>* Connections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.LinkWires");
		
		ABP_Wire_Flex_C_LinkWires_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Connections != nullptr)
			*Connections = params.Connections;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.AddSplineMeshComponents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsePreviewMaterial                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Wire_Flex_C::AddSplineMeshComponents(bool UsePreviewMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.AddSplineMeshComponents");
		
		ABP_Wire_Flex_C_AddSplineMeshComponents_Params params {};
		params.UsePreviewMaterial = UsePreviewMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.BPOverrideCantBuildReasonString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CantBuildReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString ABP_Wire_Flex_C::BPOverrideCantBuildReasonString(int32_t CantBuildReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPOverrideCantBuildReasonString");
		
		ABP_Wire_Flex_C_BPOverrideCantBuildReasonString_Params params {};
		params.CantBuildReason = CantBuildReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.BPIsAllowedToBuild
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentAllowedReason                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ABP_Wire_Flex_C::BPIsAllowedToBuild(struct FPlacementData* OutPlacementData, int32_t CurrentAllowedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPIsAllowedToBuild");
		
		ABP_Wire_Flex_C_BPIsAllowedToBuild_Params params {};
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
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Wire_Flex_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.UserConstructionScript");
		
		ABP_Wire_Flex_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.UpdateSplineMeshesEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Wire_Flex_C::UpdateSplineMeshesEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.UpdateSplineMeshesEvent");
		
		ABP_Wire_Flex_C_UpdateSplineMeshesEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Wire_Flex_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.ReceiveBeginPlay");
		
		ABP_Wire_Flex_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnLinkedStructureDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            DestroyedStructure                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Wire_Flex_C::BPOnLinkedStructureDestroyed(class APrimalStructure* DestroyedStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnLinkedStructureDestroyed");
		
		ABP_Wire_Flex_C_BPOnLinkedStructureDestroyed_Params params {};
		params.DestroyedStructure = DestroyedStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.RefreshConnections
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Wire_Flex_C::RefreshConnections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.RefreshConnections");
		
		ABP_Wire_Flex_C_RefreshConnections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.MultiUpdatePipeMaterials
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Wire_Flex_C::MultiUpdatePipeMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.MultiUpdatePipeMaterials");
		
		ABP_Wire_Flex_C_MultiUpdatePipeMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnWaterStateChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPipeHasWaterOrPower                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Wire_Flex_C::BPOnWaterStateChange(bool bPipeHasWaterOrPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnWaterStateChange");
		
		ABP_Wire_Flex_C_BPOnWaterStateChange_Params params {};
		params.bPipeHasWaterOrPower = bPipeHasWaterOrPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnDemolish
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Wire_Flex_C::BPOnDemolish(class APlayerController* ForPC, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.BPOnDemolish");
		
		ABP_Wire_Flex_C_BPOnDemolish_Params params {};
		params.ForPC = ForPC;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function BP_Wire_Flex.BP_Wire_Flex_C.ExecuteUbergraph_BP_Wire_Flex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Wire_Flex_C::ExecuteUbergraph_BP_Wire_Flex(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire_Flex.BP_Wire_Flex_C.ExecuteUbergraph_BP_Wire_Flex");
		
		ABP_Wire_Flex_C_ExecuteUbergraph_BP_Wire_Flex_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Wire_Flex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Wire_Flex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wire_Flex.BP_Wire_Flex_C");
		return ptr;
	}

}


