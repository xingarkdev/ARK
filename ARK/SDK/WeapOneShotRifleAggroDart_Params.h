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
	 * Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.UserConstructionScript
	 */
	struct AWeapOneShotRifleAggroDart_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.ReceiveBeginPlay
	 */
	struct AWeapOneShotRifleAggroDart_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.BPAnimNotifyCustomState_Begin
	 */
	struct AWeapOneShotRifleAggroDart_C_BPAnimNotifyCustomState_Begin_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TotalDuration;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BZUL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.BPAnimNotifyCustomState_End
	 */
	struct AWeapOneShotRifleAggroDart_C_BPAnimNotifyCustomState_End_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.ExecuteUbergraph_WeapOneShotRifleAggroDart
	 */
	struct AWeapOneShotRifleAggroDart_C_ExecuteUbergraph_WeapOneShotRifleAggroDart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
