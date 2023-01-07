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
	 * Function WeapFlamethrower.WeapFlamethrower_C.TogglePilotLight
	 */
	struct AWeapFlamethrower_C_TogglePilotLight_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFlamethrower.WeapFlamethrower_C.StartUnequipEvent
	 */
	struct AWeapFlamethrower_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapFlamethrower.WeapFlamethrower_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapFlamethrower_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapFlamethrower.WeapFlamethrower_C.RefreshLighterState
	 */
	struct AWeapFlamethrower_C_RefreshLighterState_Params
	{	};

	/**
	 * Function WeapFlamethrower.WeapFlamethrower_C.UserConstructionScript
	 */
	struct AWeapFlamethrower_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapFlamethrower.WeapFlamethrower_C.ReceiveBeginPlay
	 */
	struct AWeapFlamethrower_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapFlamethrower.WeapFlamethrower_C.AnimNotify_Pilot_On
	 */
	struct AWeapFlamethrower_C_AnimNotify_Pilot_On_Params
	{	};

	/**
	 * Function WeapFlamethrower.WeapFlamethrower_C.AnimNotify_Pilot_Off
	 */
	struct AWeapFlamethrower_C_AnimNotify_Pilot_Off_Params
	{	};

	/**
	 * Function WeapFlamethrower.WeapFlamethrower_C.ExecuteUbergraph_WeapFlamethrower
	 */
	struct AWeapFlamethrower_C_ExecuteUbergraph_WeapFlamethrower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
