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
	 * BlueprintGeneratedClass Ceiling_Base.Ceiling_Base_C
	 * Size -> 0x0010 (FullSize[0x0B00] - InheritedSize[0x0AF0])
	 */
	class ACeiling_Base_C : public AStructureBaseBP_C
	{
	public:
		TArray<class FName>                                        AllowSnapRotationToStructuresWithTag;                    // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		bool BPAllowSnapRotationForStructure(int32_t ThisSnapPointIndex, const class FName& ThisSnapPointName, class APrimalStructure* OtherStructure, int32_t OtherStructureSnapPointIndex, const class FName& OtherStructureSnapPointName);
		void UserConstructionScript();
		void ExecuteUbergraph_Ceiling_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
