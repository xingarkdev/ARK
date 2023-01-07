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
	 * BlueprintGeneratedClass Interface_Zipline.Interface_Zipline_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface_Zipline_C : public UInterface
	{
	public:
		void GetFinishedAttach_InterfaceCall(bool* bOutAttached);
		void GetActiveTargetedZipline(class APrimalStructure** Zipline);
		void SetProcessMoveToOrder_InterfaceCall(bool newValue);
		void SetCurrentMoveToOrderLocationInterfaceCall(const struct FVector& NewLocation);
		void GetCurrentMovetoOrderLocation_InterfaceCall(struct FVector* OutLocation);
		void GetProcessMovetoOrder_InterfaceCall(bool* Return);
		void GetClosestLocationToPointFromArray_InterfaceCall(const struct FVector& InPoint, TArray<struct FVector>* InArray, struct FVector* OutClosestPoint, int32_t* OutIndex);
		void SetZiplineJumpOffImpulseAI_InterfaceCall(const struct FVector& NewZiplineJumpOffImpulseAI);
		void GetZiplineBuff_InterfaceCall(class APrimalBuff** Buff);
		void SetFinishedAttach_InterfaceCall(bool bNewFinishedAttach);
		void SetKeepHanging_InterfaceCall(bool bNewKeepHanging);
		void GetKeepHanging_InterfaceCall(bool* bKeepHanging);
		void SetUsingZipline_InterfaceCall(bool bUsingZipline);
		void GetAllowZiplineJumping_InterfaceCall(bool* bAllowZiplineJumping);
		void GetUsingZipline_InterfaceCall(bool* bUsingZipline);
		void GetCurrentTargetedZipline_InterfaceCall(class APrimalStructure** Anchor);
		void StartZiplineJumping_InterfaceCall();
		void MultiSoftSetTransform_InterfaceCall(const struct FTransform& NewTransform);
		void GetSliding_InterfaceCall(bool* bSliding);
		void SetSliding_InterfaceCall(bool bNewSliding);
		void SetZiplineJumpOffDirectionAI_InterfaceCall(const struct FVector& NewZiplineJumpOffDirectionAI);
		void GetIsZiplineJumping_InterfaceCall(bool* bZiplineJumping);
		void SetInitialVelocityMulticast_InterfaceCall(const struct FVector& Velocity);
		void SetZiplineNewTargetLocation_InterfaceCall(const struct FVector& NewLocation);
		void GetZiplineNewTargetLocation_InterfaceCall(struct FVector* NewTargetLocation);
		void GetAttachfromBelow_InterfaceCall(bool* bAttachFromBelow);
		void SetIsHanging_InterfaceCall(bool bNewIsHanging);
		void GetIsHanging_InterfaceCall(bool* bIsHanging);
		void SetNonDediTickEveryFrame_InterfaceCall(bool bNewTickEveryFrame);
		void TryAttachingtoZipline_InterfaceCall(class APrimalStructure* overrideAnchor, const struct FVector& OverrideStartLocation, float overrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool bDontUseLineOfSightCheck, bool* bSuccess);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
