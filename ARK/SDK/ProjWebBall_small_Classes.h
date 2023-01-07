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
	 * BlueprintGeneratedClass ProjWebBall_small.ProjWebBall_small_C
	 * Size -> 0x0008 (FullSize[0x0670] - InheritedSize[0x0668])
	 */
	class AProjWebBall_small_C : public AProjWebBall_C
	{
	public:
		class UChildActorComponent*                                ChildActor1;                                             // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjWebBall_small(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
