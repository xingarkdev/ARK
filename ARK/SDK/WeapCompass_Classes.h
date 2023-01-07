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
	 * BlueprintGeneratedClass WeapCompass.WeapCompass_C
	 * Size -> 0x0000 (FullSize[0x1040] - InheritedSize[0x1040])
	 */
	class AWeapCompass_C : public AWeapGPS_C
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapCompass(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
