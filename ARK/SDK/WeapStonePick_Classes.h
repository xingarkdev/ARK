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
	 * BlueprintGeneratedClass WeapStonePick.WeapStonePick_C
	 * Size -> 0x0000 (FullSize[0x0D90] - InheritedSize[0x0D90])
	 */
	class AWeapStonePick_C : public AWeapBasePick_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapStonePick(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
