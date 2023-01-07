#pragma once

/**
 * Name: ARK
 * Version: 1.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ChargeFunctions_FakeLibrary.ChargeFunctions_FakeLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChargeFunctions_FakeLibrary_C : public UObject
	{
	public:
		void BuffCreateChargeManagerNoInstigatorLibrary(class APrimalBuff* Buff, class UClass* managerClass, class APrimalBuff** chargeManager);
		void ChargeVariableEventIntegerLibrary(E_ChargeVariableNames variableType, int32_t dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
		void GetChargeAtPointAccurate(const struct FVector& Location, class AActor* worldActor, float Radius, class UClass* chargeEmitterClass, float* Charge);
		void ChargeVariableEventDoubleLibrary(E_ChargeVariableNames variableType, double dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
		void ChargeVariableEventFloatLibrary(E_ChargeVariableNames variableType, float fValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
		void ChargeVariableEventBooleanLibrary(E_ChargeVariableNames variableType, bool bBValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
		void GetChargeAtActorAccurate(const struct FVector& Location, class AActor* FromActor, float Radius, class UClass* chargeEmitterClass, float* Charge);
		void BuffCreateChargeManagerLibrary(class APrimalBuff* Buff, class UClass* managerClass, class APrimalBuff** chargeManager);
		void StructureCreateChargeManagerLibrary(class APrimalStructure* Structure, class UClass* managerClass, class APrimalBuff** chargeManager);
		void WeaponCreateChargeManagerLibrary(class AShooterWeapon* weapon, class UClass* managerClass, class APrimalBuff** chargeManager);
		void ChargeVariableEventLibrary(E_ChargeVariableNames variableType, bool bBValue, float fValue, double dValue, class AActor* OwnerActor, class APrimalBuff* managerBuff, bool multicastEvent);
		void CharacterCreateChargeManagerLibrary(class APrimalCharacter* CharacterOwner, class UClass* managerClass, class APrimalBuff** chargeManager);
		void ExecuteUbergraph_ChargeFunctions_FakeLibrary(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
