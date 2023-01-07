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
	 * Function LampPostOmni.LampPostOmni_C.BPServerHandleNetExecCommand
	 */
	struct ALampPostOmni_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.Get Next Cycled LightIntensityLevel
	 */
	struct ALampPostOmni_C_GetNextCycledLightIntensityLevel_Params
	{
	public:
		int32_t                                                    nextLevel;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.GetLampLight
	 */
	struct ALampPostOmni_C_GetLampLight_Params
	{
	public:
		class ULightComponent*                                     Light;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.SetLampLightIntensity
	 */
	struct ALampPostOmni_C_SetLampLightIntensity_Params
	{
	public:
		int32_t                                                    intensityLevel;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.BPClientDoMultiUse
	 */
	struct ALampPostOmni_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IXLV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.BPGetMultiUseEntries
	 */
	struct ALampPostOmni_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.BPRefreshedStructureColors
	 */
	struct ALampPostOmni_C_BPRefreshedStructureColors_Params
	{	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.UserConstructionScript
	 */
	struct ALampPostOmni_C_UserConstructionScript_Params
	{	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.ReceiveBeginPlay
	 */
	struct ALampPostOmni_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.Multi_SetLampLightIntensity
	 */
	struct ALampPostOmni_C_Multi_SetLampLightIntensity_Params
	{
	public:
		int32_t                                                    newPowerLevel;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.Client_SetLampLightIntensity
	 */
	struct ALampPostOmni_C_Client_SetLampLightIntensity_Params
	{
	public:
		int32_t                                                    newPowerLevel;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LampPostOmni.LampPostOmni_C.ExecuteUbergraph_LampPostOmni
	 */
	struct ALampPostOmni_C_ExecuteUbergraph_LampPostOmni_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
