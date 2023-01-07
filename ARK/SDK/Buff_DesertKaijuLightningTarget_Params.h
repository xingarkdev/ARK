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
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FindClosestFXSocket
	 */
	struct ABuff_DesertKaijuLightningTarget_C_FindClosestFXSocket_Params
	{
	public:
		struct FVector                                             CompareLoc;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ClosestSocket;                                           // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BuffTickServer
	 */
	struct ABuff_DesertKaijuLightningTarget_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPSetupForInstigator
	 */
	struct ABuff_DesertKaijuLightningTarget_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.BPDeactivated
	 */
	struct ABuff_DesertKaijuLightningTarget_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetBuffCauser
	 */
	struct ABuff_DesertKaijuLightningTarget_C_SetBuffCauser_Params
	{
	public:
		class AActor*                                              CausedBy;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.UserConstructionScript
	 */
	struct ABuff_DesertKaijuLightningTarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.SetLightningLoc
	 */
	struct ABuff_DesertKaijuLightningTarget_C_SetLightningLoc_Params
	{	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Client_DeactivateParticle
	 */
	struct ABuff_DesertKaijuLightningTarget_C_Client_DeactivateParticle_Params
	{	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.FireDelayedLightning
	 */
	struct ABuff_DesertKaijuLightningTarget_C_FireDelayedLightning_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseRelative;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_AttachFXToKaiju
	 */
	struct ABuff_DesertKaijuLightningTarget_C_Multi_AttachFXToKaiju_Params
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     Parent;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SocketName;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.Multi_SpawnNextLightning
	 */
	struct ABuff_DesertKaijuLightningTarget_C_Multi_SpawnNextLightning_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Relative;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_71IY[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ClosestSocket;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DmgCauser;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             RelativeLoc;                                             // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C.ExecuteUbergraph_Buff_DesertKaijuLightningTarget
	 */
	struct ABuff_DesertKaijuLightningTarget_C_ExecuteUbergraph_Buff_DesertKaijuLightningTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
