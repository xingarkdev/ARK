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
	 * Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.SetupNewGravityMode
	 */
	struct AWeapTekGravityGrenade_C_SetupNewGravityMode_Params
	{
	public:
		int32_t                                                    ForMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IncludingVFX;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.UserConstructionScript
	 */
	struct AWeapTekGravityGrenade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ReceiveBeginPlay
	 */
	struct AWeapTekGravityGrenade_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.StartSecondaryActionEvent
	 */
	struct AWeapTekGravityGrenade_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ServerRequestModeChange
	 */
	struct AWeapTekGravityGrenade_C_ServerRequestModeChange_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.MultiUpdateCurrentMode
	 */
	struct AWeapTekGravityGrenade_C_MultiUpdateCurrentMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapTekGravityGrenade_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.BPFiredWeapon
	 */
	struct AWeapTekGravityGrenade_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ExecuteUbergraph_WeapTekGravityGrenade
	 */
	struct AWeapTekGravityGrenade_C_ExecuteUbergraph_WeapTekGravityGrenade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
