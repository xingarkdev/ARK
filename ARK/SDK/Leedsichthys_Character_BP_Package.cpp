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
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetNumOfStacksToAdd
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            StackQuantity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumToAdd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumOfStacks                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LeftOver                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALeedsichthys_Character_BP_C::GetNumOfStacksToAdd(int32_t StackQuantity, int32_t NumToAdd, int32_t* NumOfStacks, int32_t* LeftOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetNumOfStacksToAdd");
		
		ALeedsichthys_Character_BP_C_GetNumOfStacksToAdd_Params params {};
		params.StackQuantity = StackQuantity;
		params.NumToAdd = NumToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumOfStacks != nullptr)
			*NumOfStacks = params.NumOfStacks;
		if (LeftOver != nullptr)
			*LeftOver = params.LeftOver;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALeedsichthys_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPClientDoMultiUse");
		
		ALeedsichthys_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALeedsichthys_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPDoAttack");
		
		ALeedsichthys_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALeedsichthys_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveAnyDamage");
		
		ALeedsichthys_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetHarvestingIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALeedsichthys_Character_BP_C::GetHarvestingIndex(int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.GetHarvestingIndex");
		
		ALeedsichthys_Character_BP_C_GetHarvestingIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ALeedsichthys_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPGetMultiUseEntries");
		
		ALeedsichthys_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALeedsichthys_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTryMultiUse");
		
		ALeedsichthys_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALeedsichthys_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.UserConstructionScript");
		
		ALeedsichthys_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALeedsichthys_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ReceiveBeginPlay");
		
		ALeedsichthys_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ForceFwd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALeedsichthys_Character_BP_C::ForceFwd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ForceFwd");
		
		ALeedsichthys_Character_BP_C_ForceFwd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ServerForceFwd
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ALeedsichthys_Character_BP_C::ServerForceFwd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ServerForceFwd");
		
		ALeedsichthys_Character_BP_C_ServerForceFwd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.Spawn Blood
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALeedsichthys_Character_BP_C::SpawnBlood(const struct FVector& ActorLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.Spawn Blood");
		
		ALeedsichthys_Character_BP_C_SpawnBlood_Params params {};
		params.ActorLocation = ActorLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_TailSplash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALeedsichthys_Character_BP_C::AnimNotify_TailSplash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_TailSplash");
		
		ALeedsichthys_Character_BP_C_AnimNotify_TailSplash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_MouthSplash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALeedsichthys_Character_BP_C::AnimNotify_MouthSplash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.AnimNotify_MouthSplash");
		
		ALeedsichthys_Character_BP_C_AnimNotify_MouthSplash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALeedsichthys_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.BPTimerServer");
		
		ALeedsichthys_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ClearBaitTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALeedsichthys_Character_BP_C::ClearBaitTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ClearBaitTime");
		
		ALeedsichthys_Character_BP_C_ClearBaitTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.SootheBehavior
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALeedsichthys_Character_BP_C::SootheBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.SootheBehavior");
		
		ALeedsichthys_Character_BP_C_SootheBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ExecuteUbergraph_Leedsichthys_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALeedsichthys_Character_BP_C::ExecuteUbergraph_Leedsichthys_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leedsichthys_Character_BP.Leedsichthys_Character_BP_C.ExecuteUbergraph_Leedsichthys_Character_BP");
		
		ALeedsichthys_Character_BP_C_ExecuteUbergraph_Leedsichthys_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALeedsichthys_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALeedsichthys_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Leedsichthys_Character_BP.Leedsichthys_Character_BP_C");
		return ptr;
	}

}


