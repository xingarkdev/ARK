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
	 * BlueprintGeneratedClass StructureItemContainerAutoGenerateItemsBaseBP.StructureItemContainerAutoGenerateItemsBaseBP_C
	 * Size -> 0x0004 (FullSize[0x0E1C] - InheritedSize[0x0E18])
	 */
	class AStructureItemContainerAutoGenerateItemsBaseBP_C : public AStructureItemContainerBaseBP_C
	{
	public:
		float                                                      AutoGenerateItemsMultiplier;                             // 0x0E18(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_StructureItemContainerAutoGenerateItemsBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
