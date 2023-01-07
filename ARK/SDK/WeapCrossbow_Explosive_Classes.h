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
	 * BlueprintGeneratedClass WeapCrossbow_Explosive.WeapCrossbow_Explosive_C
	 * Size -> 0x0008 (FullSize[0x0E60] - InheritedSize[0x0E58])
	 */
	class AWeapCrossbow_Explosive_C : public AWeapCrossbow_C
	{
	public:
		class UStaticMeshComponent*                                ArrowMesh1P;                                             // 0x0E58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_WeapCrossbow_Explosive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
