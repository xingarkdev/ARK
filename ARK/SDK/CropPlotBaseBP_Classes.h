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
	 * BlueprintGeneratedClass CropPlotBaseBP.CropPlotBaseBP_C
	 * Size -> 0x0008 (FullSize[0x0F08] - InheritedSize[0x0F00])
	 */
	class ACropPlotBaseBP_C : public APrimalStructureItemContainer_CropPlot
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0F00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		bool CanAttachToExosuit(class AShooterPlayerController* ForPC);
		bool CanBeStoredByExosuit(class AShooterPlayerController* ForPC);
		void UserConstructionScript();
		void ExecuteUbergraph_CropPlotBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
