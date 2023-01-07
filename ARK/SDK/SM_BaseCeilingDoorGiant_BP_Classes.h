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
	 * BlueprintGeneratedClass SM_BaseCeilingDoorGiant_BP.SM_BaseCeilingDoorGiant_BP_C
	 * Size -> 0x0000 (FullSize[0x0B78] - InheritedSize[0x0B78])
	 */
	class ASM_BaseCeilingDoorGiant_BP_C : public ADoor_Base_SM_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_SM_BaseCeilingDoorGiant_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
