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
	 * BlueprintGeneratedClass GateFrame_Stone_Large.GateFrame_Stone_Large_C
	 * Size -> 0x0008 (FullSize[0x0AF8] - InheritedSize[0x0AF0])
	 */
	class AGateFrame_Stone_Large_C : public AFenceFoundation_Base_New_C
	{
	public:
		class USphereComponent*                                    Sphere1;                                                 // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_GateFrame_Stone_Large(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
