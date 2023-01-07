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
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FindClosestFXSocket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CompareLoc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ClosestSocket                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesertKaijuLightningTarget_C::FindClosestFXSocket(const struct FVector& CompareLoc, class FName* ClosestSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FindClosestFXSocket");
		
		ABuff_DesertKaijuLightningTarget_C_FindClosestFXSocket_Params params {};
		params.CompareLoc = CompareLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestSocket != nullptr)
			*ClosestSocket = params.ClosestSocket;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesertKaijuLightningTarget_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BuffTickServer");
		
		ABuff_DesertKaijuLightningTarget_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesertKaijuLightningTarget_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPSetupForInstigator");
		
		ABuff_DesertKaijuLightningTarget_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesertKaijuLightningTarget_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPDeactivated");
		
		ABuff_DesertKaijuLightningTarget_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetBuffCauser
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      CausedBy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesertKaijuLightningTarget_C::SetBuffCauser(class AActor* CausedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetBuffCauser");
		
		ABuff_DesertKaijuLightningTarget_C_SetBuffCauser_Params params {};
		params.CausedBy = CausedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesertKaijuLightningTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.UserConstructionScript");
		
		ABuff_DesertKaijuLightningTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetLightningLoc
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesertKaijuLightningTarget_C::SetLightningLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetLightningLoc");
		
		ABuff_DesertKaijuLightningTarget_C_SetLightningLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Client_DeactivateParticle
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_DesertKaijuLightningTarget_C::Client_DeactivateParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Client_DeactivateParticle");
		
		ABuff_DesertKaijuLightningTarget_C_Client_DeactivateParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FireDelayedLightning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseRelative                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesertKaijuLightningTarget_C::FireDelayedLightning(const struct FVector& Loc, bool UseRelative)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FireDelayedLightning");
		
		ABuff_DesertKaijuLightningTarget_C_FireDelayedLightning_Params params {};
		params.Loc = Loc;
		params.UseRelative = UseRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_AttachFXToKaiju
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Root                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             Parent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesertKaijuLightningTarget_C::Multi_AttachFXToKaiju(class USceneComponent* Root, class USceneComponent* Parent, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_AttachFXToKaiju");
		
		ABuff_DesertKaijuLightningTarget_C_Multi_AttachFXToKaiju_Params params {};
		params.Root = Root;
		params.Parent = Parent;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_SpawnNextLightning
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Relative                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ClosestSocket                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DmgCauser                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RelativeLoc                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesertKaijuLightningTarget_C::Multi_SpawnNextLightning(const struct FVector& Loc, bool Relative, const class FName& ClosestSocket, class AActor* DmgCauser, const struct FVector& RelativeLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_SpawnNextLightning");
		
		ABuff_DesertKaijuLightningTarget_C_Multi_SpawnNextLightning_Params params {};
		params.Loc = Loc;
		params.Relative = Relative;
		params.ClosestSocket = ClosestSocket;
		params.DmgCauser = DmgCauser;
		params.RelativeLoc = RelativeLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.ExecuteUbergraph_Buff_DesertKaijuLightningTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_DesertKaijuLightningTarget_C::ExecuteUbergraph_Buff_DesertKaijuLightningTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.ExecuteUbergraph_Buff_DesertKaijuLightningTarget");
		
		ABuff_DesertKaijuLightningTarget_C_ExecuteUbergraph_Buff_DesertKaijuLightningTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_DesertKaijuLightningTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_DesertKaijuLightningTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C");
		return ptr;
	}

}


