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
	 * BlueprintGeneratedClass Buff_ChargeEmitterWeapon_ChargeLantern.Buff_ChargeEmitterWeapon_ChargeLantern_C
	 * Size -> 0x000C (FullSize[0x0BD8] - InheritedSize[0x0BCC])
	 */
	class ABuff_ChargeEmitterWeapon_ChargeLantern_C : public ABuff_ChargeEmitterWeapon_C
	{
	public:
		unsigned char                                              UnknownData_M1NF[0x4];                                   // 0x0BCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         chargeEffectMeshOverride;                                // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsWeaponFiring(bool* IsFiring);
		void InitializeEmitter();
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ChargeEmitterWeapon_ChargeLantern(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
