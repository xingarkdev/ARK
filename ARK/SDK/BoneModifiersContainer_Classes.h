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
	 * BlueprintGeneratedClass BoneModifiersContainer.BoneModifiersContainer_C
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBoneModifiersContainer_C : public UObject
	{
	public:
		TArray<struct FBoneModifierNamed>                          BoneModifiers;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void ExecuteUbergraph_BoneModifiersContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
