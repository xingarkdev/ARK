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
	 * 		Name   -> Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   InventoryComponent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      CurrentAmmoItemTemplate                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UClass*>                              AmmoItemTemplates                                          (Parm, OutParm, ZeroConstructor)
	 * 		int32_t                                            LowAmmoWarningAmount                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTurretBallistaBaseBP_C::GetHudData(class UPrimalInventoryComponent** InventoryComponent, class UClass** CurrentAmmoItemTemplate, TArray<class UClass*>* AmmoItemTemplates, int32_t* LowAmmoWarningAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.GetHudData");
		
		AStructureTurretBallistaBaseBP_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryComponent != nullptr)
			*InventoryComponent = params.InventoryComponent;
		if (CurrentAmmoItemTemplate != nullptr)
			*CurrentAmmoItemTemplate = params.CurrentAmmoItemTemplate;
		if (AmmoItemTemplates != nullptr)
			*AmmoItemTemplates = params.AmmoItemTemplates;
		if (LowAmmoWarningAmount != nullptr)
			*LowAmmoWarningAmount = params.LowAmmoWarningAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.BPReleasedPlayer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ReleasedChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AtSeatNumber                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTurretBallistaBaseBP_C::BPReleasedPlayer(class AShooterCharacter* ReleasedChar, int32_t AtSeatNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.BPReleasedPlayer");
		
		AStructureTurretBallistaBaseBP_C_BPReleasedPlayer_Params params {};
		params.ReleasedChar = ReleasedChar;
		params.AtSeatNumber = AtSeatNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStructureTurretBallistaBaseBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.UserConstructionScript");
		
		AStructureTurretBallistaBaseBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.ExecuteUbergraph_StructureTurretBallistaBaseBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStructureTurretBallistaBaseBP_C::ExecuteUbergraph_StructureTurretBallistaBaseBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C.ExecuteUbergraph_StructureTurretBallistaBaseBP");
		
		AStructureTurretBallistaBaseBP_C_ExecuteUbergraph_StructureTurretBallistaBaseBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureTurretBallistaBaseBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureTurretBallistaBaseBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureTurretBallistaBaseBP.StructureTurretBallistaBaseBP_C");
		return ptr;
	}

}


