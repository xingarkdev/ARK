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
	 * BlueprintGeneratedClass PrimalBuffPersistentData_GenericTimeRemaining.PrimalBuffPersistentData_GenericTimeRemaining_C
	 * Size -> 0x0004 (FullSize[0x004C] - InheritedSize[0x0048])
	 */
	class UPrimalBuffPersistentData_GenericTimeRemaining_C : public UPrimalBuffPersistentData
	{
	public:
		float                                                      TimeLeft;                                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		void ExecuteUbergraph_PrimalBuffPersistentData_GenericTimeRemaining(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
