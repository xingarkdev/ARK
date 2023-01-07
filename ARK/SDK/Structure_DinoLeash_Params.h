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
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateTetherAfterLoad
	 */
	struct AStructure_DinoLeash_C_UpdateTetherAfterLoad_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPPostLoadedFromSaveGame
	 */
	struct AStructure_DinoLeash_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPAdjustDamage
	 */
	struct AStructure_DinoLeash_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G6UW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_97KH[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.UpdateVisibility
	 */
	struct AStructure_DinoLeash_C_UpdateVisibility_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.ReceiveBeginPlay
	 */
	struct AStructure_DinoLeash_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPUnstasis
	 */
	struct AStructure_DinoLeash_C_BPUnstasis_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.Get Is Active
	 */
	struct AStructure_DinoLeash_C_GetIsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerDeactivated
	 */
	struct AStructure_DinoLeash_C_BPContainerDeactivated_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPContainerActivated
	 */
	struct AStructure_DinoLeash_C_BPContainerActivated_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BlueprintDrawPreviewHUD
	 */
	struct AStructure_DinoLeash_C_BlueprintDrawPreviewHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.GetMaximumAllowedRadius
	 */
	struct AStructure_DinoLeash_C_GetMaximumAllowedRadius_Params
	{
	public:
		float                                                      MaxRadius;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MaxSetting;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.TetherDinosInRadius
	 */
	struct AStructure_DinoLeash_C_TetherDinosInRadius_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.SetEffectRadius
	 */
	struct AStructure_DinoLeash_C_SetEffectRadius_Params
	{
	public:
		float                                                      EffectRadius;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceSet;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_EffectRadius
	 */
	struct AStructure_DinoLeash_C_OnRep_EffectRadius_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPClientDoMultiUse
	 */
	struct AStructure_DinoLeash_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPIsAllowedToBuild
	 */
	struct AStructure_DinoLeash_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPPlacedStructure
	 */
	struct AStructure_DinoLeash_C_BPPlacedStructure_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.Activate
	 */
	struct AStructure_DinoLeash_C_Activate_Params
	{
	public:
		bool                                                       Activated;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.OnRep_Activated
	 */
	struct AStructure_DinoLeash_C_OnRep_Activated_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPTryMultiUse
	 */
	struct AStructure_DinoLeash_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BPGetMultiUseEntries
	 */
	struct AStructure_DinoLeash_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.UserConstructionScript
	 */
	struct AStructure_DinoLeash_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.AddTetherToDino
	 */
	struct AStructure_DinoLeash_C_AddTetherToDino_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.MovementTetherEvent__DelegateSignature_Event
	 */
	struct AStructure_DinoLeash_C_MovementTetherEvent__DelegateSignature_Event_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              TetherObject;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.RemoveTetherFromDino
	 */
	struct AStructure_DinoLeash_C_RemoveTetherFromDino_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AStructure_DinoLeash_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_174_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YBHP[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AStructure_DinoLeash_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_177_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_DinoLeash.Structure_DinoLeash_C.ExecuteUbergraph_Structure_DinoLeash
	 */
	struct AStructure_DinoLeash_C_ExecuteUbergraph_Structure_DinoLeash_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
