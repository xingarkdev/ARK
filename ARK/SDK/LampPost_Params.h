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
	 * Function LampPost.LampPost_C.BPServerHandleNetExecCommand
	 */
	struct ALampPost_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPost.LampPost_C.BPClientDoMultiUse
	 */
	struct ALampPost_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TEEB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LampPost.LampPost_C.GetLampLight
	 */
	struct ALampPost_C_GetLampLight_Params
	{
	public:
		class ULightComponent*                                     Light;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPost.LampPost_C.Get Next Cycled LightIntensity Level
	 */
	struct ALampPost_C_GetNextCycledLightIntensityLevel_Params
	{
	public:
		int32_t                                                    nextLevel;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPost.LampPost_C.SetLampLightIntensity
	 */
	struct ALampPost_C_SetLampLightIntensity_Params
	{
	public:
		int32_t                                                    intensityLevel;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPost.LampPost_C.BPGetMultiUseEntries
	 */
	struct ALampPost_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function LampPost.LampPost_C.BPRefreshedStructureColors
	 */
	struct ALampPost_C_BPRefreshedStructureColors_Params
	{	};

	/**
	 * Function LampPost.LampPost_C.UserConstructionScript
	 */
	struct ALampPost_C_UserConstructionScript_Params
	{	};

	/**
	 * Function LampPost.LampPost_C.ReceiveBeginPlay
	 */
	struct ALampPost_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LampPost.LampPost_C.Multi_SetLampLightIntensity
	 */
	struct ALampPost_C_Multi_SetLampLightIntensity_Params
	{
	public:
		int32_t                                                    newPowerLevel;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPost.LampPost_C.Client_SetLampLightIntensity
	 */
	struct ALampPost_C_Client_SetLampLightIntensity_Params
	{
	public:
		int32_t                                                    newPowerLevel;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPost.LampPost_C.ExecuteUbergraph_LampPost
	 */
	struct ALampPost_C_ExecuteUbergraph_LampPost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
