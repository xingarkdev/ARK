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
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.DoFireProjectileCustom
	 */
	struct AWeapEmptyCryopod_C_DoFireProjectileCustom_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetContainedDinoClass
	 */
	struct AWeapEmptyCryopod_C_GetContainedDinoClass_Params
	{
	public:
		struct FCustomItemData                                     CustomItemData;                                          // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm)
		class UClass*                                              ReturnedClass;                                           // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.Get Character StatsAsFloats
	 */
	struct AWeapEmptyCryopod_C_GetCharacterStatsAsFloats_Params
	{
	public:
		class APrimalDinoCharacter*                                Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<float>                                              Stats;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReportSuccess
	 */
	struct AWeapEmptyCryopod_C_ReportSuccess_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.GetSaddleData
	 */
	struct AWeapEmptyCryopod_C_GetSaddleData_Params
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.ReceiveBeginPlay
	 */
	struct AWeapEmptyCryopod_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.UpdateContainsFX
	 */
	struct AWeapEmptyCryopod_C_UpdateContainsFX_Params
	{
	public:
		bool                                                       ForceOff;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPFiredWeapon
	 */
	struct AWeapEmptyCryopod_C_BPFiredWeapon_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.CanCapture
	 */
	struct AWeapEmptyCryopod_C_CanCapture_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Capture;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPTryFireWeapon
	 */
	struct AWeapEmptyCryopod_C_BPTryFireWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D385[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.BPStartEquippedNotify
	 */
	struct AWeapEmptyCryopod_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.UserConstructionScript
	 */
	struct AWeapEmptyCryopod_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.Capture
	 */
	struct AWeapEmptyCryopod_C_Capture_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.Ingest
	 */
	struct AWeapEmptyCryopod_C_Ingest_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartIngestion
	 */
	struct AWeapEmptyCryopod_C_StartIngestion_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.ClientPlayAnimation
	 */
	struct AWeapEmptyCryopod_C_ClientPlayAnimation_Params
	{
	public:
		bool                                                       IncludeInstigator;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8IYA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        TPV;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimMontage*                                        FPV;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.Reload
	 */
	struct AWeapEmptyCryopod_C_Reload_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.StartCaptureLoop
	 */
	struct AWeapEmptyCryopod_C_StartCaptureLoop_Params
	{
	public:
		class APrimalDinoCharacter*                                CapturingDino;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.EndCaptureLoop
	 */
	struct AWeapEmptyCryopod_C_EndCaptureLoop_Params
	{	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.CaptureSuccess
	 */
	struct AWeapEmptyCryopod_C_CaptureSuccess_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeploySuccess
	 */
	struct AWeapEmptyCryopod_C_DeploySuccess_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Scale;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.DeployFailure
	 */
	struct AWeapEmptyCryopod_C_DeployFailure_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeapEmptyCryopod.WeapEmptyCryopod_C.ExecuteUbergraph_WeapEmptyCryopod
	 */
	struct AWeapEmptyCryopod_C_ExecuteUbergraph_WeapEmptyCryopod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
