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
	 * BlueprintGeneratedClass LampPostEmitterOmni.LampPostEmitterOmni_C
	 * Size -> 0x0008 (FullSize[0x0528] - InheritedSize[0x0520])
	 */
	class ALampPostEmitterOmni_C : public ACampFireEmitter_C
	{
	public:
		class UPointLightComponent*                                PointLight1;                                             // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_LampPostEmitterOmni(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
