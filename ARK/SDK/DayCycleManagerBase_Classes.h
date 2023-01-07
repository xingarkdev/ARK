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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass DayCycleManagerBase.DayCycleManagerBase_C
	 * Size -> 0x0009 (FullSize[0x05B1] - InheritedSize[0x05A8])
	 */
	class ADayCycleManagerBase_C : public ADayCycleManager
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPreventNocturnalLogic;                                  // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetTeleportTransferWorldPP(class APostProcessVolume** PP);
		void GetVRWorldPP(class APostProcessVolume** PP);
		void HandleGrappleHookImpacted(class APrimalProjectileGrapplingHook* GrapHookProj, struct FHitResult* HitInfo);
		void GetWeatherEventWarning(int32_t* WeatherEventWarningType);
		void GetGolemMeshClass(class UClass** isScorchedEarthMesh);
		void GetBaseTemperatureModified(float* ModifiedBaseTemperature);
		void ActivatedStructureUpdated(class APrimalStructureItemContainer* ActiveStructure);
		void UserConstructionScript();
		void ExecuteUbergraph_DayCycleManagerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
