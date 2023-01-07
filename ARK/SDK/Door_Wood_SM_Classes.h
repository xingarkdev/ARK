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
	 * BlueprintGeneratedClass Door_Wood_SM.Door_Wood_SM_C
	 * Size -> 0x0000 (FullSize[0x0B78] - InheritedSize[0x0B78])
	 */
	class ADoor_Wood_SM_C : public ADoor_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Door_Wood_SM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
