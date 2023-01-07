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
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.UpdateDinoMatOverrides
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::UpdateDinoMatOverrides()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.UpdateDinoMatOverrides");
		
		AStructure_TaxidermyBase_C_UpdateDinoMatOverrides_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnContainerRenamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::OnContainerRenamed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnContainerRenamed");
		
		AStructure_TaxidermyBase_C_OnContainerRenamed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Construct Name Renderer Component
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::ConstructNameRendererComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Construct Name Renderer Component");
		
		AStructure_TaxidermyBase_C_ConstructNameRendererComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveHairMeshes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::RemoveHairMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveHairMeshes");
		
		AStructure_TaxidermyBase_C_RemoveHairMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnRep_SnapshotPoseIndex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::OnRep_SnapshotPoseIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.OnRep_SnapshotPoseIndex");
		
		AStructure_TaxidermyBase_C_OnRep_SnapshotPoseIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateDefaultSnapshot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TaxidermyBase_C::CreateDefaultSnapshot(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateDefaultSnapshot");
		
		AStructure_TaxidermyBase_C_CreateDefaultSnapshot_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TaxidermyBase_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPClientDoMultiUse");
		
		AStructure_TaxidermyBase_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetTextRendererColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::SetTextRendererColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetTextRendererColor");
		
		AStructure_TaxidermyBase_C_SetTextRendererColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateSnapshot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseDefaultSnapshotMat                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CaptureCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NonCaptureGenderIsMale                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               KeepPreviousSnapshot                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TaxidermyBase_C::CreateSnapshot(class APlayerController* PC, bool UseDefaultSnapshotMat, bool CaptureCharacter, bool NonCaptureGenderIsMale, bool KeepPreviousSnapshot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.CreateSnapshot");
		
		AStructure_TaxidermyBase_C_CreateSnapshot_Params params {};
		params.PC = PC;
		params.UseDefaultSnapshotMat = UseDefaultSnapshotMat;
		params.CaptureCharacter = CaptureCharacter;
		params.NonCaptureGenderIsMale = NonCaptureGenderIsMale;
		params.KeepPreviousSnapshot = KeepPreviousSnapshot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPPlacedStructure
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TaxidermyBase_C::BPPlacedStructure(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPPlacedStructure");
		
		AStructure_TaxidermyBase_C_BPPlacedStructure_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplyEquippedSnapshot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::ApplyEquippedSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplyEquippedSnapshot");
		
		AStructure_TaxidermyBase_C_ApplyEquippedSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AStructure_TaxidermyBase_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPTryMultiUse");
		
		AStructure_TaxidermyBase_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AStructure_TaxidermyBase_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPGetMultiUseEntries");
		
		AStructure_TaxidermyBase_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveSnapshot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::RemoveSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.RemoveSnapshot");
		
		AStructure_TaxidermyBase_C_RemoveSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplySnapshot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Snapshot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TaxidermyBase_C::ApplySnapshot(class UPrimalItem* Snapshot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ApplySnapshot");
		
		AStructure_TaxidermyBase_C_ApplySnapshot_Params params {};
		params.Snapshot = Snapshot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TaxidermyBase_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.BPNotifyInventoryItemChange");
		
		AStructure_TaxidermyBase_C_BPNotifyInventoryItemChange_Params params {};
		params.bIsItemAdd = bIsItemAdd;
		params.theItem = theItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.UserConstructionScript");
		
		AStructure_TaxidermyBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ReceiveBeginPlay");
		
		AStructure_TaxidermyBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetRendererText
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void AStructure_TaxidermyBase_C::SetRendererText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.SetRendererText");
		
		AStructure_TaxidermyBase_C_SetRendererText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Multi_CreateSnapshot
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseDefaultSnapshotMaterial                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CaptureCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NonCaptureGenderIsMale                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               KeepPreviousSnapshot                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TaxidermyBase_C::Multi_CreateSnapshot(class APlayerController* PC, bool UseDefaultSnapshotMaterial, bool CaptureCharacter, bool NonCaptureGenderIsMale, bool KeepPreviousSnapshot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.Multi_CreateSnapshot");
		
		AStructure_TaxidermyBase_C_Multi_CreateSnapshot_Params params {};
		params.PC = PC;
		params.UseDefaultSnapshotMaterial = UseDefaultSnapshotMaterial;
		params.CaptureCharacter = CaptureCharacter;
		params.NonCaptureGenderIsMale = NonCaptureGenderIsMale;
		params.KeepPreviousSnapshot = KeepPreviousSnapshot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ExecuteUbergraph_Structure_TaxidermyBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructure_TaxidermyBase_C::ExecuteUbergraph_Structure_TaxidermyBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Structure_TaxidermyBase.Structure_TaxidermyBase_C.ExecuteUbergraph_Structure_TaxidermyBase");
		
		AStructure_TaxidermyBase_C_ExecuteUbergraph_Structure_TaxidermyBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructure_TaxidermyBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructure_TaxidermyBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Structure_TaxidermyBase.Structure_TaxidermyBase_C");
		return ptr;
	}

}


