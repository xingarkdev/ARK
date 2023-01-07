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
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPPreventAddingOtherBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      anotherBuffClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_OutdoorRadiation_Genesis_C::BPPreventAddingOtherBuff(class UClass* anotherBuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPPreventAddingOtherBuff");
		
		ABuff_OutdoorRadiation_Genesis_C_BPPreventAddingOtherBuff_Params params {};
		params.anotherBuffClass = anotherBuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.Get Max Health
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_OutdoorRadiation_Genesis_C::GetMaxHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.Get Max Health");
		
		ABuff_OutdoorRadiation_Genesis_C_GetMaxHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.GetDamageMitigationArmorEquippedCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumItemsEquipped                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::GetDamageMitigationArmorEquippedCount(int32_t* NumItemsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.GetDamageMitigationArmorEquippedCount");
		
		ABuff_OutdoorRadiation_Genesis_C_GetDamageMitigationArmorEquippedCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumItemsEquipped != nullptr)
			*NumItemsEquipped = params.NumItemsEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.DamageDurability
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::DamageDurability(class UPrimalItem* Item, float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.DamageDurability");
		
		ABuff_OutdoorRadiation_Genesis_C_DamageDurability_Params params {};
		params.Item = Item;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.RemoveBuffs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::RemoveBuffs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.RemoveBuffs");
		
		ABuff_OutdoorRadiation_Genesis_C_RemoveBuffs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPActivated");
		
		ABuff_OutdoorRadiation_Genesis_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BuffTickServer");
		
		ABuff_OutdoorRadiation_Genesis_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.UserConstructionScript");
		
		ABuff_OutdoorRadiation_Genesis_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.LocalParticleFadeout__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::LocalParticleFadeout__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.LocalParticleFadeout__FinishedFunc");
		
		ABuff_OutdoorRadiation_Genesis_C_LocalParticleFadeout__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.LocalParticleFadeout__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::LocalParticleFadeout__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.LocalParticleFadeout__UpdateFunc");
		
		ABuff_OutdoorRadiation_Genesis_C_LocalParticleFadeout__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.ReceiveBeginPlay");
		
		ABuff_OutdoorRadiation_Genesis_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.BPDeactivated");
		
		ABuff_OutdoorRadiation_Genesis_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.ExecuteUbergraph_Buff_OutdoorRadiation_Genesis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_OutdoorRadiation_Genesis_C::ExecuteUbergraph_Buff_OutdoorRadiation_Genesis(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C.ExecuteUbergraph_Buff_OutdoorRadiation_Genesis");
		
		ABuff_OutdoorRadiation_Genesis_C_ExecuteUbergraph_Buff_OutdoorRadiation_Genesis_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_OutdoorRadiation_Genesis_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_OutdoorRadiation_Genesis_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OutdoorRadiation_Genesis.Buff_OutdoorRadiation_Genesis_C");
		return ptr;
	}

}


