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
	 * BlueprintGeneratedClass C4Tripwire.C4Tripwire_C
	 * Size -> 0x0008 (FullSize[0x0BF0] - InheritedSize[0x0BE8])
	 */
	class AC4Tripwire_C : public APrimalStructureTripwire
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0BE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_C4Tripwire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
