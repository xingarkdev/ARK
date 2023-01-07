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
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Is Vector on RightOf Forward
	 */
	struct AIceJumperProjIceBreath_C_IsVectoronRightOfForward_Params
	{
	public:
		struct FVector                                             TestVector;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TYXG[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.GetIceBreathInterpSpeed
	 */
	struct AIceJumperProjIceBreath_C_GetIceBreathInterpSpeed_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F6KR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Get Normalized Vector On Ice Jumper Plane from Location
	 */
	struct AIceJumperProjIceBreath_C_GetNormalizedVectorOnIceJumperPlanefromLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Output;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.Get Best Impact Location
	 */
	struct AIceJumperProjIceBreath_C_GetBestImpactLocation_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    Rider;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ImpactLocation;                                          // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ImpactNormal;                                            // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FoundNewimpactLocation;                                  // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.CanCollideWith
	 */
	struct AIceJumperProjIceBreath_C_CanCollideWith_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I7HW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ValidateTick
	 */
	struct AIceJumperProjIceBreath_C_ValidateTick_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H67H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.UpdateBeamLength
	 */
	struct AIceJumperProjIceBreath_C_UpdateBeamLength_Params
	{	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.GetBeamStartEnd
	 */
	struct AIceJumperProjIceBreath_C_GetBeamStartEnd_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ValidatedStart;                                          // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ValidatedEnd;                                            // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.UserConstructionScript
	 */
	struct AIceJumperProjIceBreath_C_UserConstructionScript_Params
	{	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ReceiveBeginPlay
	 */
	struct AIceJumperProjIceBreath_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ReceiveTick
	 */
	struct AIceJumperProjIceBreath_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.EnableBeam
	 */
	struct AIceJumperProjIceBreath_C_EnableBeam_Params
	{	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.OWNER_DrawDebugLine
	 */
	struct AIceJumperProjIceBreath_C_OWNER_DrawDebugLine_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.OWNER_DrawDebugSphere
	 */
	struct AIceJumperProjIceBreath_C_OWNER_DrawDebugSphere_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumperProjIceBreath.IceJumperProjIceBreath_C.ExecuteUbergraph_IceJumperProjIceBreath
	 */
	struct AIceJumperProjIceBreath_C_ExecuteUbergraph_IceJumperProjIceBreath_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
