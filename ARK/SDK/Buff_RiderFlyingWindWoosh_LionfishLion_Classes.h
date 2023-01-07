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
	 * BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C
	 * Size -> 0x0000 (FullSize[0x0980] - InheritedSize[0x0980])
	 */
	class ABuff_RiderFlyingWindWoosh_LionfishLion_C : public ABuff_Base_Disease_Low_GasMaskable_C
	{
	public:
		bool AllowPostProcessEffect();
		float GetBuffPostprocessIntensity();
		void BuffTickClient(float DeltaTime);
		void UserConstructionScript();
		void ExecuteUbergraph_Buff_RiderFlyingWindWoosh_LionfishLion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
