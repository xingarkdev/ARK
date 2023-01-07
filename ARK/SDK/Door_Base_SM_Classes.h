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
	 * BlueprintGeneratedClass Door_Base_SM.Door_Base_SM_C
	 * Size -> 0x0008 (FullSize[0x0B78] - InheritedSize[0x0B70])
	 */
	class ADoor_Base_SM_C : public APrimalStructureDoor
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Door_Base_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
