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
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.SetDynamicMaterialProperties
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_SetDynamicMaterialProperties_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentDestroyed
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_BPOnComponentDestroyed_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AttachSubMeshes
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_AttachSubMeshes_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.BPOnComponentTick
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_BPOnComponentTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.LevelUp
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_LevelUp_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayMontage
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_PlayMontage_Params
	{
	public:
		class UAnimMontage*                                        TheAnimMontage;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundBase*                                          ExtraSound;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateMovement
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_UpdateMovement_Params
	{
	public:
		class ACharacter*                                          CharacterRef;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.PlayEmote
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_PlayEmote_Params
	{
	public:
		int32_t                                                    EmoteIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_05HE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CheckEmotes
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_CheckEmotes_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.UpdateInterpolation
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_UpdateInterpolation_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.AddedAsPrimalItemAttachment
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_AddedAsPrimalItemAttachment_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.CompTick
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_CompTick_Params
	{	};

	/**
	 * Function SKComponent_SkinAttachment_ChibiDino.SKComponent_SkinAttachment_ChibiDino_C.ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino
	 */
	struct USKComponent_SkinAttachment_ChibiDino_C_ExecuteUbergraph_SKComponent_SkinAttachment_ChibiDino_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
