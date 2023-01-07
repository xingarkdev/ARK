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
	 * BlueprintGeneratedClass BP_Emitter_Master.BP_Emitter_Master_C
	 * Size -> 0x0008 (FullSize[0x04C8] - InheritedSize[0x04C0])
	 */
	class ABP_Emitter_Master_C : public AEmitter
	{
	public:
		class UChildActorComponent*                                AudioChild;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_BP_Emitter_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
