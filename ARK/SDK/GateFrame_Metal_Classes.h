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
	 * BlueprintGeneratedClass GateFrame_Metal.GateFrame_Metal_C
	 * Size -> 0x0010 (FullSize[0x0B00] - InheritedSize[0x0AF0])
	 */
	class AGateFrame_Metal_C : public AFenceFoundation_Base_New_C
	{
	public:
		class USphereComponent*                                    Sphere2;                                                 // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USphereComponent*                                    Sphere1;                                                 // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_GateFrame_Metal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
