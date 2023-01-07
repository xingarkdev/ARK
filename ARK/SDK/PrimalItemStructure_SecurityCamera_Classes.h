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
	 * BlueprintGeneratedClass PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C
	 * Size -> 0x0008 (FullSize[0x0AF0] - InheritedSize[0x0AE8])
	 */
	class UPrimalItemStructure_SecurityCamera_C : public UPrimalItemStructureGeneric_C
	{
	public:
		class FName                                                CustomItemDataName;                                      // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation);
		void GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index);
		void GetConsoleID(float* ID);
		void CanAddCamera(bool* Allowed);
		void GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera);
		void SetConsoleDataByID(float ConsoleID);
		void SetCameraName(const class FString& Name);
		void RetrieveConsoleData(float* outConsoleID, struct FVector* OutLocation, bool* outAllowedToAdd, class FString* outCameraName, class FString* outConsoleName);
		void SetConsoleData(class APrimalStructure* Console, bool* Changed);
		void GetConsoleFromID(float ID, class APrimalStructure** LinkedConsole);
		void BPServerVerifyStructurePlacementData();
		void VerifyConsoleData();
		class FString BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC);
		class UTexture2D* BPGetItemIcon(class AShooterPlayerController* ForPC);
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void ExecuteUbergraph_PrimalItemStructure_SecurityCamera(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
