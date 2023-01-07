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
	 * BlueprintGeneratedClass Sign_Wall_Metal.Sign_Wall_Metal_C
	 * Size -> 0x0008 (FullSize[0x0B28] - InheritedSize[0x0B20])
	 */
	class ASign_Wall_Metal_C : public ASign_Small_Base_C
	{
	public:
		class UStructurePaintingComponent*                         StructurePainting1;                                      // 0x0B20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Sign_Wall_Metal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
