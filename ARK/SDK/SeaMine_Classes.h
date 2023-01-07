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
	 * BlueprintGeneratedClass SeaMine.SeaMine_C
	 * Size -> 0x0008 (FullSize[0x0B80] - InheritedSize[0x0B78])
	 */
	class ASeaMine_C : public APrimalStructureSeaMine
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0B78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SeaMine(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
