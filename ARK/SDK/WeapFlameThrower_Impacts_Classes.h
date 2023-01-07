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
	 * BlueprintGeneratedClass WeapFlameThrower_Impacts.WeapFlameThrower_Impacts_C
	 * Size -> 0x0000 (FullSize[0x0890] - InheritedSize[0x0890])
	 */
	class AWeapFlameThrower_Impacts_C : public AMeleeFist_Impacts_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapFlameThrower_Impacts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
