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
	 * BlueprintGeneratedClass GateFrame_Large_Tek.GateFrame_Large_Tek_C
	 * Size -> 0x0020 (FullSize[0x0B10] - InheritedSize[0x0AF0])
	 */
	class AGateFrame_Large_Tek_C : public AFenceFoundation_Base_New_C
	{
	public:
		class USphereComponent*                                    Sphere2;                                                 // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    Sphere1;                                                 // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh2;                                             // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0B08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool BPAllowSnappingWith(class APrimalStructure* OtherStructure, class APlayerController* ForPC);
		void UserConstructionScript();
		void ExecuteUbergraph_GateFrame_Large_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
