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
	 * BlueprintGeneratedClass LampPostEmitter.LampPostEmitter_C
	 * Size -> 0x0008 (FullSize[0x0528] - InheritedSize[0x0520])
	 */
	class ALampPostEmitter_C : public ACampFireEmitter_C
	{
	public:
		class USpotLightComponent*                                 SpotLight1;                                              // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_LampPostEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
