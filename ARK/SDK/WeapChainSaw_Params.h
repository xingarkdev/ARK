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
	 * Function WeapChainSaw.WeapChainSaw_C.StopIdleSound
	 */
	struct AWeapChainSaw_C_StopIdleSound_Params
	{	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.Chainsaw Can Start
	 */
	struct AWeapChainSaw_C_ChainsawCanStart_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.ChainsawCanFire
	 */
	struct AWeapChainSaw_C_ChainsawCanFire_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.UpdateIdleSound
	 */
	struct AWeapChainSaw_C_UpdateIdleSound_Params
	{	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.ChainsawHasAmmo
	 */
	struct AWeapChainSaw_C_ChainsawHasAmmo_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.UserConstructionScript
	 */
	struct AWeapChainSaw_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.AnimNotify_Equip
	 */
	struct AWeapChainSaw_C_AnimNotify_Equip_Params
	{	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.AnimNotify_Unequip
	 */
	struct AWeapChainSaw_C_AnimNotify_Unequip_Params
	{	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapChainSaw_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.ReceiveBeginPlay
	 */
	struct AWeapChainSaw_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.ReceiveEndPlay
	 */
	struct AWeapChainSaw_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapChainSaw.WeapChainSaw_C.ExecuteUbergraph_WeapChainSaw
	 */
	struct AWeapChainSaw_C_ExecuteUbergraph_WeapChainSaw_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
