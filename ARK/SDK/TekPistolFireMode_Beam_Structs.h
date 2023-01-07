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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct TekPistolFireMode_Beam.TekPistolFireMode_Beam
	 * Size -> 0x00B0
	 */
	struct FTekPistolFireMode_Beam
	{
	public:
		struct FInstantWeaponData                                  InstantWeaponConfig_37_9826F0EE4079AE597671C3A34954BA73; // 0x0000(0x0030) Edit, BlueprintVisible
		class UParticleSystem*                                     ChargeFX_4_964F3924460DC339125629ADAD42B868;             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     MuzzleFlashFX_5_805187A04A203CEF7A29A9BE6E230B07;        // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     ImpactFX_36_F85CFA904C23D7A7CFD8F7AE4227591C;            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     BeamFX_49_8520843D4E011C0FC1E6089E597E8D2E;              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        BeamColor_22_FEAC5CFC4EEE58FEB3F3F78FF04D0EE9;           // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        SecondaryColor_23_222C28CF4EF52315538DD3A501684483;      // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              BuffToApply_Player_31_DA16D39445395904939778935201587E;  // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              BuffToApply_Dino_32_056460DC4C44A1266AC75682D0931E88;    // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    AmmoPerShot_43_FAA584EC4887BB2845F1C9B3DC60F75A;         // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      DurabilityPerShot_46_89A28F814989ECF401614182DB896BAD;   // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     ImpactFX_Friendly_52_A8825BD6476BFED1EFFA78A29C82FE21;   // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystem*                                     ImpactFX_Enemy_55_1C09033D41FF908759C843B2747616E1;      // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundCue*                                           EngageSound_58_7F03872D4322180C7E11EEB354B6D9D7;         // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundCue*                                           FireSound_61_A6B35B4C40D7095B67A1CFA1A3FDFEE6;           // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USoundCue*                                           ImpactSound_64_840F2FD64C1F57B0A266CE9A62ED2698;         // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
