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
	 * BlueprintGeneratedClass Buff_Electrocuted.Buff_Electrocuted_C
	 * Size -> 0x0000 (FullSize[0x0998] - InheritedSize[0x0998])
	 */
	class ABuff_Electrocuted_C : public ABuff_Stunned_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_Electrocuted(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
