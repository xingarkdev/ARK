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
	 * BlueprintGeneratedClass Buff_ElectrocutedTranq.Buff_ElectrocutedTranq_C
	 * Size -> 0x0000 (FullSize[0x0998] - InheritedSize[0x0998])
	 */
	class ABuff_ElectrocutedTranq_C : public ABuff_Stunned_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_ElectrocutedTranq(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
