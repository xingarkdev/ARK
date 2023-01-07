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
	 * BlueprintGeneratedClass ProjArrow_Bolt.ProjArrow_Bolt_C
	 * Size -> 0x0008 (FullSize[0x0698] - InheritedSize[0x0690])
	 */
	class AProjArrow_Bolt_C : public APrimalProjectileArrow
	{
	public:
		class UAudioComponent*                                     ProjectileSFX;                                           // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjArrow_Bolt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
