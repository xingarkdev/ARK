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
	 * Function WeapPaintbrush.WeapPaintbrush_C.BPGetSelectedMeleeAttackAnim
	 */
	struct AWeapPaintbrush_C_BPGetSelectedMeleeAttackAnim_Params
	{
	public:
		struct FWeaponAnim                                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapPaintbrush.WeapPaintbrush_C.BPAnimNotifyCustomEvent
	 */
	struct AWeapPaintbrush_C_BPAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapPaintbrush.WeapPaintbrush_C.UserConstructionScript
	 */
	struct AWeapPaintbrush_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapPaintbrush.WeapPaintbrush_C.ExecuteUbergraph_WeapPaintbrush
	 */
	struct AWeapPaintbrush_C_ExecuteUbergraph_WeapPaintbrush_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
