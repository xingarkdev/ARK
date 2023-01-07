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
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnSyncColorization
	 */
	struct ABuff_MekBackpack_Shield_C_OnSyncColorization_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.PlayShieldSound
	 */
	struct ABuff_MekBackpack_Shield_C_PlayShieldSound_Params
	{
	public:
		int32_t                                                    SoundIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetBackpackSaveData
	 */
	struct ABuff_MekBackpack_Shield_C_GetBackpackSaveData_Params
	{
	public:
		struct FMekBackpackData                                    Data;                                                    // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.RestoreBackpackSaveData
	 */
	struct ABuff_MekBackpack_Shield_C_RestoreBackpackSaveData_Params
	{
	public:
		struct FMekBackpackData                                    SaveData;                                                // 0x0000(0x0058)  (Parm)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SetShieldShellMaterialParams
	 */
	struct ABuff_MekBackpack_Shield_C_SetShieldShellMaterialParams_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Health;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Opacity;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      EmissiveMin;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      IOR;                                                     // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ReceiveBeginPlay
	 */
	struct ABuff_MekBackpack_Shield_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickClient
	 */
	struct ABuff_MekBackpack_Shield_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BPDeactivated
	 */
	struct ABuff_MekBackpack_Shield_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.GetShieldStatus
	 */
	struct ABuff_MekBackpack_Shield_C_GetShieldStatus_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YY78[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.EnsureCharacterHasShieldBuff
	 */
	struct ABuff_MekBackpack_Shield_C_EnsureCharacterHasShieldBuff_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.CanActivateBackpack
	 */
	struct ABuff_MekBackpack_Shield_C_CanActivateBackpack_Params
	{
	public:
		bool                                                       CanActivate;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GZ10[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FailureMessage;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.AllowMekHover
	 */
	struct ABuff_MekBackpack_Shield_C_AllowMekHover_Params
	{
	public:
		bool                                                       CanHover;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BuffTickServer
	 */
	struct ABuff_MekBackpack_Shield_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.IsBackpackActive
	 */
	struct ABuff_MekBackpack_Shield_C_IsBackpackActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackActivated
	 */
	struct ABuff_MekBackpack_Shield_C_OnBackpackActivated_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnBackpackDeactivated
	 */
	struct ABuff_MekBackpack_Shield_C_OnBackpackDeactivated_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.UserConstructionScript
	 */
	struct ABuff_MekBackpack_Shield_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__FinishedFunc
	 */
	struct ABuff_MekBackpack_Shield_C_ShieldDropTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldDropTimeline__UpdateFunc
	 */
	struct ABuff_MekBackpack_Shield_C_ShieldDropTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__FinishedFunc
	 */
	struct ABuff_MekBackpack_Shield_C_ShieldExpandTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ShieldExpandTimeline__UpdateFunc
	 */
	struct ABuff_MekBackpack_Shield_C_ShieldExpandTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiDropShield
	 */
	struct ABuff_MekBackpack_Shield_C_MultiDropShield_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABuff_MekBackpack_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_231_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NFCK[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABuff_MekBackpack_Shield_C_BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_234_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.OnShieldAttach
	 */
	struct ABuff_MekBackpack_Shield_C_OnShieldAttach_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiOnShieldDetach
	 */
	struct ABuff_MekBackpack_Shield_C_MultiOnShieldDetach_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiRetractShield
	 */
	struct ABuff_MekBackpack_Shield_C_MultiRetractShield_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.MultiAutoDeploy
	 */
	struct ABuff_MekBackpack_Shield_C_MultiAutoDeploy_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.SyncColorization
	 */
	struct ABuff_MekBackpack_Shield_C_SyncColorization_Params
	{	};

	/**
	 * Function Buff_MekBackpack_Shield.Buff_MekBackpack_Shield_C.ExecuteUbergraph_Buff_MekBackpack_Shield
	 */
	struct ABuff_MekBackpack_Shield_C_ExecuteUbergraph_Buff_MekBackpack_Shield_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
