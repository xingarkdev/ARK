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
	 * BlueprintGeneratedClass Buff_ChargeEmitterWeapon.Buff_ChargeEmitterWeapon_C
	 * Size -> 0x0034 (FullSize[0x0BCC] - InheritedSize[0x0B98])
	 */
	class ABuff_ChargeEmitterWeapon_C : public ABuff_ChargeEmitter_C
	{
	public:
		struct FVector                                             K2Node_CustomEvent_NewParam;                             // 0x0B98(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FLinearColor                                        K2Node_CustomEvent_NewParam1;                            // 0x0BA4(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_NewParam2;                            // 0x0BB4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_NewParam12;                           // 0x0BC0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void IsWeaponFiring(bool* IsFiring);
		void InitializeEmitter();
		void GetEmitterForwardVector(struct FVector* ForwardVector);
		void CanEmitCharge(bool* canEmit);
		void UserConstructionScript();
		void DebugVector(const struct FVector& NewParam, const struct FVector& NewParam1);
		void DebugSphere(const struct FVector& NewParam, const struct FLinearColor& NewParam1);
		void ExecuteUbergraph_Buff_ChargeEmitterWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
