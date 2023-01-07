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
	 * BlueprintGeneratedClass Greenhouse_Ceiling.Greenhouse_Ceiling_C
	 * Size -> 0x0000 (FullSize[0x0B00] - InheritedSize[0x0B00])
	 */
	class AGreenhouse_Ceiling_C : public ACeiling_Base_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_Greenhouse_Ceiling(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
