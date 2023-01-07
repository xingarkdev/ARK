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
	 * Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.UserConstructionScript
	 */
	struct AWeapOneShotRifleRefinedTranq_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.ReceiveBeginPlay
	 */
	struct AWeapOneShotRifleRefinedTranq_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.BPAnimNotifyCustomState_Begin
	 */
	struct AWeapOneShotRifleRefinedTranq_C_BPAnimNotifyCustomState_Begin_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TotalDuration;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q92K[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.BPAnimNotifyCustomState_End
	 */
	struct AWeapOneShotRifleRefinedTranq_C_BPAnimNotifyCustomState_End_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.ExecuteUbergraph_WeapOneShotRifleRefinedTranq
	 */
	struct AWeapOneShotRifleRefinedTranq_C_ExecuteUbergraph_WeapOneShotRifleRefinedTranq_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
