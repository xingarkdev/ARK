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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Buff_OilSlick.Buff_OilSlick_C.ReceiveTick
	 */
	struct ABuff_OilSlick_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_OilSlick.Buff_OilSlick_C.SpawnOilFire
	 */
	struct ABuff_OilSlick_C_SpawnOilFire_Params
	{
	public:
		struct FVector                                             OverrideOriginLocation;                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_OilSlick.Buff_OilSlick_C.UserConstructionScript
	 */
	struct ABuff_OilSlick_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_OilSlick.Buff_OilSlick_C.OnTakeAnyDamage_Event
	 */
	struct ABuff_OilSlick_C_OnTakeAnyDamage_Event_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MGSY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_OilSlick.Buff_OilSlick_C.ReceiveBeginPlay
	 */
	struct ABuff_OilSlick_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_OilSlick.Buff_OilSlick_C.ExecuteUbergraph_Buff_OilSlick
	 */
	struct ABuff_OilSlick_C_ExecuteUbergraph_Buff_OilSlick_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
