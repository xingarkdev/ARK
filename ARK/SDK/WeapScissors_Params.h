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
	 * Function WeapScissors.WeapScissors_C.ReceiveBeginPlay
	 */
	struct AWeapScissors_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapScissors.WeapScissors_C.IsValidHairCutTarget
	 */
	struct AWeapScissors_C_IsValidHairCutTarget_Params
	{
	public:
		class AActor*                                              PotentialTarget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsValid;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UYAB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapScissors.WeapScissors_C.OpenUI
	 */
	struct AWeapScissors_C_OpenUI_Params
	{
	public:
		class AShooterCharacter*                                   TheTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.GiveHairLocks
	 */
	struct AWeapScissors_C_GiveHairLocks_Params
	{
	public:
		int32_t                                                    NumLocks;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapScissors_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.BPGetSelectedMeleeAttackAnim
	 */
	struct AWeapScissors_C_BPGetSelectedMeleeAttackAnim_Params
	{
	public:
		struct FWeaponAnim                                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.UserConstructionScript
	 */
	struct AWeapScissors_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapScissors.WeapScissors_C.InitializeUI
	 */
	struct AWeapScissors_C_InitializeUI_Params
	{
	public:
		class UUI_Hairstyle*                                       TheUI;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.OnHairStyleAccepted__DelegateSignature_Event
	 */
	struct AWeapScissors_C_OnHairStyleAccepted__DelegateSignature_Event_Params
	{
	public:
		int32_t                                                    newHeadHairIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    newFacialHairIndex;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewHeadHairPercent;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewFacialHairPercent;                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    HeadHairDyeID1;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    HeadHairDyeID2;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    FacialHairDyeID1;                                        // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    FacialHairDyeID2;                                        // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.ClearFacialHairClicked
	 */
	struct AWeapScissors_C_ClearFacialHairClicked_Params
	{	};

	/**
	 * Function WeapScissors.WeapScissors_C.ClearHeadHairClicked
	 */
	struct AWeapScissors_C_ClearHeadHairClicked_Params
	{	};

	/**
	 * Function WeapScissors.WeapScissors_C.ServerClearFacialHairColor
	 */
	struct AWeapScissors_C_ServerClearFacialHairColor_Params
	{
	public:
		class AShooterCharacter*                                   TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.ServerClearHeadHairColor
	 */
	struct AWeapScissors_C_ServerClearHeadHairColor_Params
	{
	public:
		class AShooterCharacter*                                   TargetChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.TheServerHairStyleAccepted
	 */
	struct AWeapScissors_C_TheServerHairStyleAccepted_Params
	{
	public:
		int32_t                                                    newHeadHairIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    newFacialHairIndex;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewHeadHairPercent;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewFacialHairPercent;                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    HeadHairDyeID1;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    HeadHairDyeID2;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    FacialHairDyeID1;                                        // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    FacialHairDyeID2;                                        // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   forTarget;                                               // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.DoServerRequestDinoHaircut
	 */
	struct AWeapScissors_C_DoServerRequestDinoHaircut_Params
	{
	public:
		class ADino_Character_BP_Haircuttable_C*                   DoRequestOnDino;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapScissors.WeapScissors_C.ExecuteUbergraph_WeapScissors
	 */
	struct AWeapScissors_C_ExecuteUbergraph_WeapScissors_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
