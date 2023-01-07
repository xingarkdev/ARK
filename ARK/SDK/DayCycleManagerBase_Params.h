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
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.Get Teleport Transfer World PP
	 */
	struct ADayCycleManagerBase_C_GetTeleportTransferWorldPP_Params
	{
	public:
		class APostProcessVolume*                                  PP;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.Get VR World PP
	 */
	struct ADayCycleManagerBase_C_GetVRWorldPP_Params
	{
	public:
		class APostProcessVolume*                                  PP;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.HandleGrappleHookImpacted
	 */
	struct ADayCycleManagerBase_C_HandleGrappleHookImpacted_Params
	{
	public:
		class APrimalProjectileGrapplingHook*                      GrapHookProj;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherEventWarning
	 */
	struct ADayCycleManagerBase_C_GetWeatherEventWarning_Params
	{
	public:
		int32_t                                                    WeatherEventWarningType;                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.Get Golem MeshClass
	 */
	struct ADayCycleManagerBase_C_GetGolemMeshClass_Params
	{
	public:
		class UClass*                                              isScorchedEarthMesh;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.GetBaseTemperatureModified
	 */
	struct ADayCycleManagerBase_C_GetBaseTemperatureModified_Params
	{
	public:
		float                                                      ModifiedBaseTemperature;                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.ActivatedStructureUpdated
	 */
	struct ADayCycleManagerBase_C_ActivatedStructureUpdated_Params
	{
	public:
		class APrimalStructureItemContainer*                       ActiveStructure;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.UserConstructionScript
	 */
	struct ADayCycleManagerBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.ExecuteUbergraph_DayCycleManagerBase
	 */
	struct ADayCycleManagerBase_C_ExecuteUbergraph_DayCycleManagerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
