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
	 * Class CableComponent.CableActor
	 * Size -> 0x0008 (FullSize[0x0478] - InheritedSize[0x0470])
	 */
	class ACableActor : public AActor
	{
	public:
		class UCableComponent*                                     CableComponent;                                          // 0x0470(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CableComponent.CableComponent
	 * Size -> 0x0058 (FullSize[0x06D0] - InheritedSize[0x0678])
	 */
	class UCableComponent : public UMeshComponent
	{
	public:
		struct FComponentReference                                 AttachEndTo;                                             // 0x0678(0x0018) Edit
		struct FVector                                             EndLocation;                                             // 0x0690(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CableLength;                                             // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    NumSegments;                                             // 0x06A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SubstepTime;                                             // 0x06A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		int32_t                                                    SolverIterations;                                        // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CableWidth;                                              // 0x06AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    NumSides;                                                // 0x06B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TileMaterial;                                            // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_73X5[0x18];                                  // 0x06B8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
