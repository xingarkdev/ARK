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
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager No Instigator Library
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      managerClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 chargeManager                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::BuffCreateChargeManagerNoInstigatorLibrary(class APrimalBuff* Buff, class UClass* managerClass, class APrimalBuff** chargeManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager No Instigator Library");
		
		UChargeFunctions_FakeLibrary_C_BuffCreateChargeManagerNoInstigatorLibrary_Params params {};
		params.Buff = Buff;
		params.managerClass = managerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeManager != nullptr)
			*chargeManager = params.chargeManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Integer Library
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 managerBuff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::ChargeVariableEventIntegerLibrary(E_ChargeVariableNames variableType, int32_t dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Integer Library");
		
		UChargeFunctions_FakeLibrary_C_ChargeVariableEventIntegerLibrary_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		params.OwnerActor = OwnerActor;
		params.managerBuff = managerBuff;
		params.multicastEvent = multicastEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Get Charge At Point Accurate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      worldActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      chargeEmitterClass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Charge                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::GetChargeAtPointAccurate(const struct FVector& Location, class AActor* worldActor, float Radius, class UClass* chargeEmitterClass, float* Charge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Get Charge At Point Accurate");
		
		UChargeFunctions_FakeLibrary_C_GetChargeAtPointAccurate_Params params {};
		params.Location = Location;
		params.worldActor = worldActor;
		params.Radius = Radius;
		params.chargeEmitterClass = chargeEmitterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Charge != nullptr)
			*Charge = params.Charge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Double Library
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 managerBuff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::ChargeVariableEventDoubleLibrary(E_ChargeVariableNames variableType, double dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Double Library");
		
		UChargeFunctions_FakeLibrary_C_ChargeVariableEventDoubleLibrary_Params params {};
		params.variableType = variableType;
		params.dValue = dValue;
		params.OwnerActor = OwnerActor;
		params.managerBuff = managerBuff;
		params.multicastEvent = multicastEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Float Library
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 managerBuff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::ChargeVariableEventFloatLibrary(E_ChargeVariableNames variableType, float fValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Float Library");
		
		UChargeFunctions_FakeLibrary_C_ChargeVariableEventFloatLibrary_Params params {};
		params.variableType = variableType;
		params.fValue = fValue;
		params.OwnerActor = OwnerActor;
		params.managerBuff = managerBuff;
		params.multicastEvent = multicastEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Boolean Library
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 managerBuff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::ChargeVariableEventBooleanLibrary(E_ChargeVariableNames variableType, bool bBValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Charge Variable Event Boolean Library");
		
		UChargeFunctions_FakeLibrary_C_ChargeVariableEventBooleanLibrary_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.OwnerActor = OwnerActor;
		params.managerBuff = managerBuff;
		params.multicastEvent = multicastEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.GetChargeAtActorAccurate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      FromActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      chargeEmitterClass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Charge                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::GetChargeAtActorAccurate(const struct FVector& Location, class AActor* FromActor, float Radius, class UClass* chargeEmitterClass, float* Charge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.GetChargeAtActorAccurate");
		
		UChargeFunctions_FakeLibrary_C_GetChargeAtActorAccurate_Params params {};
		params.Location = Location;
		params.FromActor = FromActor;
		params.Radius = Radius;
		params.chargeEmitterClass = chargeEmitterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Charge != nullptr)
			*Charge = params.Charge;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager Library
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      managerClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 chargeManager                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::BuffCreateChargeManagerLibrary(class APrimalBuff* Buff, class UClass* managerClass, class APrimalBuff** chargeManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Buff Create Charge Manager Library");
		
		UChargeFunctions_FakeLibrary_C_BuffCreateChargeManagerLibrary_Params params {};
		params.Buff = Buff;
		params.managerClass = managerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeManager != nullptr)
			*chargeManager = params.chargeManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Structure Create Charge Manager Library
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      managerClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 chargeManager                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::StructureCreateChargeManagerLibrary(class APrimalStructure* Structure, class UClass* managerClass, class APrimalBuff** chargeManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Structure Create Charge Manager Library");
		
		UChargeFunctions_FakeLibrary_C_StructureCreateChargeManagerLibrary_Params params {};
		params.Structure = Structure;
		params.managerClass = managerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeManager != nullptr)
			*chargeManager = params.chargeManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Weapon Create Charge Manager Library
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterWeapon*                              weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      managerClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 chargeManager                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::WeaponCreateChargeManagerLibrary(class AShooterWeapon* weapon, class UClass* managerClass, class APrimalBuff** chargeManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.Weapon Create Charge Manager Library");
		
		UChargeFunctions_FakeLibrary_C_WeaponCreateChargeManagerLibrary_Params params {};
		params.weapon = weapon;
		params.managerClass = managerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeManager != nullptr)
			*chargeManager = params.chargeManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ChargeVariableEventLibrary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ChargeVariableNames                              variableType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              fValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             dValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 managerBuff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               multicastEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::ChargeVariableEventLibrary(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ChargeVariableEventLibrary");
		
		UChargeFunctions_FakeLibrary_C_ChargeVariableEventLibrary_Params params {};
		params.variableType = variableType;
		params.bBValue = bBValue;
		params.fValue = fValue;
		params.dValue = dValue;
		params.OwnerActor = OwnerActor;
		params.managerBuff = managerBuff;
		params.multicastEvent = multicastEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.CharacterCreateChargeManagerLibrary
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CharacterOwner                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      managerClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 chargeManager                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::CharacterCreateChargeManagerLibrary(class APrimalCharacter* CharacterOwner, class UClass* managerClass, class APrimalBuff** chargeManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.CharacterCreateChargeManagerLibrary");
		
		UChargeFunctions_FakeLibrary_C_CharacterCreateChargeManagerLibrary_Params params {};
		params.CharacterOwner = CharacterOwner;
		params.managerClass = managerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chargeManager != nullptr)
			*chargeManager = params.chargeManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ExecuteUbergraph_ChargeFunctions_FakeLibrary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChargeFunctions_FakeLibrary_C::ExecuteUbergraph_ChargeFunctions_FakeLibrary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C.ExecuteUbergraph_ChargeFunctions_FakeLibrary");
		
		UChargeFunctions_FakeLibrary_C_ExecuteUbergraph_ChargeFunctions_FakeLibrary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChargeFunctions_FakeLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChargeFunctions_FakeLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C");
		return ptr;
	}

}


