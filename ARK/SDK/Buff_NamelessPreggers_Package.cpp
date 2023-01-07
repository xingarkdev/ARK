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
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPNotifyExperienceGained
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ActualExpGained                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ExpectedExpGain                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EXPType                                            ExpTypeGained                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_NamelessPreggers_C::BPNotifyExperienceGained(float ActualExpGained, float ExpectedExpGain, EXPType ExpTypeGained)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPNotifyExperienceGained");
		
		ABuff_NamelessPreggers_C_BPNotifyExperienceGained_Params params {};
		params.ActualExpGained = ActualExpGained;
		params.ExpectedExpGain = ExpectedExpGain;
		params.ExpTypeGained = ExpTypeGained;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_NamelessPreggers_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPSetupForInstigator");
		
		ABuff_NamelessPreggers_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_NamelessPreggers_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDeactivated");
		
		ABuff_NamelessPreggers_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPModifyPlayerBoneModifiers
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBoneModifier>                       InBoneModifiers                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FBoneModifier> ABuff_NamelessPreggers_C::BPModifyPlayerBoneModifiers(TArray<struct FBoneModifier>* InBoneModifiers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPModifyPlayerBoneModifiers");
		
		ABuff_NamelessPreggers_C_BPModifyPlayerBoneModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InBoneModifiers != nullptr)
			*InBoneModifiers = params.InBoneModifiers;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.HandleBuffAnimNotify
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AnimNotifyName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      AnimNotifyStringData                                       (Parm, ZeroConstructor)
	 */
	void ABuff_NamelessPreggers_C::HandleBuffAnimNotify(const class FName& AnimNotifyName, const class FString& AnimNotifyStringData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.HandleBuffAnimNotify");
		
		ABuff_NamelessPreggers_C_HandleBuffAnimNotify_Params params {};
		params.AnimNotifyName = AnimNotifyName;
		params.AnimNotifyStringData = AnimNotifyStringData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UpdateBuffPersistentData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_NamelessPreggers_C::UpdateBuffPersistentData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UpdateBuffPersistentData");
		
		ABuff_NamelessPreggers_C_UpdateBuffPersistentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_NamelessPreggers_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ReceiveBeginPlay");
		
		ABuff_NamelessPreggers_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_NamelessPreggers_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickClient");
		
		ABuff_NamelessPreggers_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDrawBuffStatusHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ScaleMult                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_NamelessPreggers_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BPDrawBuffStatusHUD");
		
		ABuff_NamelessPreggers_C_BPDrawBuffStatusHUD_Params params {};
		params.HUD = HUD;
		params.XPos = XPos;
		params.YPos = YPos;
		params.ScaleMult = ScaleMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_NamelessPreggers_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.BuffTickServer");
		
		ABuff_NamelessPreggers_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_NamelessPreggers_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.UserConstructionScript");
		
		ABuff_NamelessPreggers_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.Multi_SetupBaby
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_NamelessPreggers_C::Multi_SetupBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.Multi_SetupBaby");
		
		ABuff_NamelessPreggers_C_Multi_SetupBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ExecuteUbergraph_Buff_NamelessPreggers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_NamelessPreggers_C::ExecuteUbergraph_Buff_NamelessPreggers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NamelessPreggers.Buff_NamelessPreggers_C.ExecuteUbergraph_Buff_NamelessPreggers");
		
		ABuff_NamelessPreggers_C_ExecuteUbergraph_Buff_NamelessPreggers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_NamelessPreggers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_NamelessPreggers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NamelessPreggers.Buff_NamelessPreggers_C");
		return ptr;
	}

}


