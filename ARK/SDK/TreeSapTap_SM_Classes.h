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
	 * BlueprintGeneratedClass TreeSapTap_SM.TreeSapTap_SM_C
	 * Size -> 0x0008 (FullSize[0x0E20] - InheritedSize[0x0E18])
	 */
	class ATreeSapTap_SM_C : public AStructureItemContainerBaseBP_C
	{
	public:
		class UPrimalInventoryBP_TreeSapTap_C*                     PrimalInventoryBP_TreeSapTap_C1;                         // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_TreeSapTap_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
