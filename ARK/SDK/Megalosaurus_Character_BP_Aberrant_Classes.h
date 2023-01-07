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
	 * BlueprintGeneratedClass Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C
	 * Size -> 0x0000 (FullSize[0x26F3] - InheritedSize[0x26F3])
	 */
	class AMegalosaurus_Character_BP_Aberrant_C : public AMegalosaurus_Character_BP_C
	{
	public:
		void AllowNocturnalLogic(bool* Result);
		void UserConstructionScript();
		void ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
