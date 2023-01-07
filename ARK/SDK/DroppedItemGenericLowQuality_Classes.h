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
	 * BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C
	 * Size -> 0x0008 (FullSize[0x0710] - InheritedSize[0x0708])
	 */
	class ADroppedItemGenericLowQuality_C : public ADroppedItemLowQuality
	{
	public:
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_DroppedItemGenericLowQuality(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
