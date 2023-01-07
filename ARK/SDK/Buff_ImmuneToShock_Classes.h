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
	 * BlueprintGeneratedClass Buff_ImmuneToShock.Buff_ImmuneToShock_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_ImmuneToShock_C : public ABuff_Base_C
	{
	public:
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ImmuneToShock(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
