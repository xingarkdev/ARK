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
	 * BlueprintGeneratedClass Mek_Character_BP_Interface.Mek_Character_BP_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMek_Character_BP_Interface_C : public UInterface
	{
	public:
		void GetMekHeat(float* CurrentHeat, float* MaxHeat);
		void GetMekFuel(float* CurrentFuel, float* MaxFuel);
		void ModifyMekHeat(float Delta, bool Subtract, float* NewHeatLevel);
		void ModifyMekFuel(float Delta, bool Subtract, float* NewFuelLevel, bool* Success);
		void SetBackpackMalfunction(bool DisableBackpack);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
