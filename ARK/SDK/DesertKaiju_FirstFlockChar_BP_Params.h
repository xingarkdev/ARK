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
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPCanCryo
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPOnLethalDamage
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_BPOnLethalDamage_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_99PR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventDeath;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.OwnerKaijuCheck
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_OwnerKaijuCheck_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPTimerServer
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockGroupMaterial
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_GetFlockGroupMaterial_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q0BD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.TickFlockGroup
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_TickFlockGroup_Params
	{
	public:
		int32_t                                                    Shape;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4QT5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            Group;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FBoidBehavior                                       Behavior;                                                // 0x0018(0x0040)  (Parm, OutParm, ReferenceParm)
		float                                                      DeltaTime;                                               // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    groupIndex;                                              // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockAvoidanceArea
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_GetFlockAvoidanceArea_Params
	{
	public:
		TArray<struct FAvoidanceArea>                              Return;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DistanceToKaiju
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_DistanceToKaiju_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPAdjustDamage
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P30M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5YPR[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPDinoPostBeginPlay
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveTick
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BP_OnSetDeath
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.UserConstructionScript
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveBeginPlay
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MulticastUpdateShape
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_MulticastUpdateShape_Params
	{
	public:
		int32_t                                                    NewShape;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Multi_UpdateAttackShape
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_Multi_UpdateAttackShape_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DelayedTurnBoolOff
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_DelayedTurnBoolOff_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiUpdateKaijuOwner
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_MultiUpdateKaijuOwner_Params
	{
	public:
		class AActor*                                              KaijuOwner;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Delayed_DealDamage
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_Delayed_DealDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitFromDirection;                                        // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1AME[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitInfo;                                                 // 0x0018(0x0088)  (Parm)
		class UClass*                                              DmgTypeClass;                                            // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.CleanupBoids
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_CleanupBoids_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiOnLethalDamage
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_MultiOnLethalDamage_Params
	{	};

	/**
	 * Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP
	 */
	struct ADesertKaiju_FirstFlockChar_BP_C_ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
