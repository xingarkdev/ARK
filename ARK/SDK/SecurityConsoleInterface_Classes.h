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
	 * BlueprintGeneratedClass SecurityConsoleInterface.SecurityConsoleInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USecurityConsoleInterface_C : public UInterface
	{
	public:
		void ActivateCamera();
		void UpdateConsoleName(const class FString& Name);
		void GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera);
		void CanAddCamera(bool* Allowed);
		void GetConsoleID(float* ID);
		void UpdateCameraRotation(const struct FRotator& NewRotation);
		void GetCameraData(TArray<class APrimalStructure*>* Cameras, int32_t* index);
		void SetCurrentCamera(int32_t CameraIndex);
		void GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation);
		void RemoveCamera(class APrimalStructure* CameraToRemove);
		void AddNewCamera(class APrimalStructure* NewStructure);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
