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
	 * 		Name   -> Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_DifficultyIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKingKaiju_Character_Interface_C::GetVar_DifficultyIndex(int32_t* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_DifficultyIndex");
		
		UKingKaiju_Character_Interface_C_GetVar_DifficultyIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_InHordeMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKingKaiju_Character_Interface_C::GetVar_InHordeMode(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetVar_InHordeMode");
		
		UKingKaiju_Character_Interface_C_GetVar_InHordeMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKingKaijuCharStatusComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             Component                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKingKaiju_Character_Interface_C::GetKingKaijuCharStatusComponent(class UPrimalCharacterStatusComponent** Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKingKaijuCharStatusComponent");
		
		UKingKaiju_Character_Interface_C_GetKingKaijuCharStatusComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Component != nullptr)
			*Component = params.Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_PlayersLostHordeMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKingKaiju_Character_Interface_C::SetVar_PlayersLostHordeMode(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_PlayersLostHordeMode");
		
		UKingKaiju_Character_Interface_C_SetVar_PlayersLostHordeMode_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_FinishCurrentHordeMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKingKaiju_Character_Interface_C::SetVar_FinishCurrentHordeMode(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_FinishCurrentHordeMode");
		
		UKingKaiju_Character_Interface_C_SetVar_FinishCurrentHordeMode_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_KKArenaManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ArenaManager                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKingKaiju_Character_Interface_C::SetVar_KKArenaManager(class AActor* ArenaManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.SetVar_KKArenaManager");
		
		UKingKaiju_Character_Interface_C_SetVar_KKArenaManager_Params params {};
		params.ArenaManager = ArenaManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKaijuEnemyList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalCharacter*>                    EnemyList                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UKingKaiju_Character_Interface_C::GetKaijuEnemyList(TArray<class APrimalCharacter*>* EnemyList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetKaijuEnemyList");
		
		UKingKaiju_Character_Interface_C_GetKaijuEnemyList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EnemyList != nullptr)
			*EnemyList = params.EnemyList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetClosestEnemy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKingKaiju_Character_Interface_C::GetClosestEnemy(class AActor** Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KingKaiju_Character_Interface.KingKaiju_Character_Interface_C.GetClosestEnemy");
		
		UKingKaiju_Character_Interface_C_GetClosestEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enemy != nullptr)
			*Enemy = params.Enemy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKingKaiju_Character_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKingKaiju_Character_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KingKaiju_Character_Interface.KingKaiju_Character_Interface_C");
		return ptr;
	}

}


