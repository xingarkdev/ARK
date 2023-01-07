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
	 * BlueprintGeneratedClass Base_DoubleDoorframe.Base_DoubleDoorframe_C
	 * Size -> 0x0008 (FullSize[0x0B08] - InheritedSize[0x0B00])
	 */
	class ABase_DoubleDoorframe_C : public ADoorframe_Base_SM_C
	{
	public:
		class UArrowComponent*                                     MeshDirection;                                           // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Base_DoubleDoorframe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
