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
	 * BlueprintGeneratedClass ProjTekTurret.ProjTekTurret_C
	 * Size -> 0x0000 (FullSize[0x0668] - InheritedSize[0x0668])
	 */
	class AProjTekTurret_C : public AShooterProjectile
	{
	public:
		void UserConstructionScript();
		void ExecuteUbergraph_ProjTekTurret(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
