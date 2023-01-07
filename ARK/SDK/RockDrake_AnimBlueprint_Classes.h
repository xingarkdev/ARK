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
	 * AnimBlueprintGeneratedClass RockDrake_AnimBlueprint.RockDrake_AnimBlueprint_C
	 * Size -> 0x3857 (FullSize[0x3B97] - InheritedSize[0x0340])
	 */
	class URockDrake_AnimBlueprint_C : public UAnimInstance
	{
	public:
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_BAF42AAB4009C6185AC9C8A18DB1AB54; // 0x0340(0x0048)
		unsigned char                                              UnknownData_O751[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8B6A078E4325B5920CE023B4F64469BA; // 0x0390(0x00D0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_A3BE92D249803B91849CF884028C11AD; // 0x0460(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_D7ED038340A0E03FE6F79497603DD66B;     // 0x04A8(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_916E22944346A80713965AA4FCF0D930;     // 0x0500(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2E5EB803470B1EA1E44E9EB0D435B99D;     // 0x0558(0x0058)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E3EBC4944A1DF7EE2CB2FC8191B705B0; // 0x05B0(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_16FBB6954AECED185D0704A0623E2052; // 0x0630(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6D5BC34A47FE555A760CCCB558337B87; // 0x0690(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9AFA18CC457E6F3219FA89A197217F09; // 0x06D8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_A387B02B49A124589D92BC8ABA956A80; // 0x0720(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_EB3848D4437240B778A19198297AC905; // 0x07A0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_106F42A443F965C20C9D6C9D8B85EAEB; // 0x0820(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9D5F1339445DDEEEE8B071B5D3D3EB65; // 0x08A0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_94593301446F5E6986F4BA994571B4D3; // 0x0920(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9319C46148D3DF6FCCDFBA89CBE1831C; // 0x09A0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_A5ED6A6F4888D8F7CC06539F696BBECF; // 0x0A20(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_560C03AB45D0D7F9F98023BE580B1C95; // 0x0AA0(0x0080)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_47FA589F425403A0D36AD2BDDC60353A; // 0x0B20(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_86CCC7694AA268101E49B08B47382620; // 0x0B68(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_68D504BF4A4166A9043213BB259948FF; // 0x0BB0(0x0048)
		unsigned char                                              UnknownData_8WYU[0x8];                                   // 0x0BF8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_C0323BA541D57B7A5D2C7781BA423581; // 0x0C00(0x00D0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_501974FA4CA9E3A9907B58B2C5600A29; // 0x0CD0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_B9C7BD1544E26E6C32BBA69086A18D41; // 0x0D50(0x0080)
		struct FAnimNode_MultiFabrik_Dinos                         AnimGraphNode_MultiFabrik_Dinos_2F85D9F948B9FB852D94788857A2FABE; // 0x0DD0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_0F8FE21040D6B8E0CAA7FEB6B074A11C; // 0x0E48(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_DC3647284818921423A5319A333D1299;     // 0x0EC8(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B1E90875435F3160F18679B0DC89F397;     // 0x0F20(0x0058)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_F37C671D40B4A70B57F1BCACFC0C7059;     // 0x0F78(0x0058)
		struct FAnimNode_GroundBones                               AnimGraphNode_GroundBones_90D31E774312938E699CC2AA884EBCA0; // 0x0FD0(0x00D8)
		struct FAnimNode_GroundBones                               AnimGraphNode_GroundBones_BBA9E4D34EF3DC2818278FB44B641B91; // 0x10A8(0x00D8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_0EC9E4E2495B487C4DDB0F8A538CEC6A; // 0x1180(0x0070)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2CC36053471E6C06C31D13AE572AA5F6; // 0x11F0(0x0080)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_270B7B3B4E018F93E4EC2682FE05E974; // 0x1270(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_82C278E544825057D56605A3774A3A4C; // 0x12B8(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7C6F85994A33863B65D47CA849E56F86; // 0x1318(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4985962B4DA8C1EB4038E8BD1D39EAEC; // 0x1360(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8A4806404AF3A0DA2C96CCA8C01D6E12; // 0x13A8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_972C36D8485E761CF7AACCA6CB60C315; // 0x13F0(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_85E642AC4B74C1401A2125BE85F2EFF9; // 0x1470(0x0070)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3CF811FF4D175E966D8299ADCAA39C60; // 0x14E0(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_0E7D6DC742FFA5C09DE75AB85C112323; // 0x1560(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_A53AFF814E32093C947543BB09D48551; // 0x15C0(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_AF6FE703450DDE204A8795A3B5C0D18C; // 0x1608(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_57DCDF504EF41C8BD026BCA50A00127C; // 0x1650(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_74029CC341F845B417C2D5B6FF9DB013; // 0x16D0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_839E51394B3E94DC9E8761A091374B71; // 0x1750(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_53492BC44D994AA816CDEEBB72DC9362; // 0x17D0(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_DB31F6F145E755B329FC61A01C1F607A; // 0x1850(0x0060)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8B5DC2AC4920EBD822976CB6B5AE2BED; // 0x18B0(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_D47CF95A41AA46D137A35492C16DFA7C; // 0x1930(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2EEEE8F54B60C4A6A4BB53B64D0F0D90; // 0x19B0(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9DCD8EDD4A3B748D14E0B298A1BB1479; // 0x19F8(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2AA5AF414BF6EC14E9C5C584E1636BEE; // 0x1A40(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_FCF5077849C001714E649994BA5907FD; // 0x1A88(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7A802C4845DD51603648F495B1862658; // 0x1B08(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_E171E8464BD0E8D483C1FC9F7EF34C3C; // 0x1B88(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_BA60F27A493FBCE45A16559107F675E3; // 0x1C08(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_783B5B9B48D88B8618B399874B0EAD0E; // 0x1C88(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_DB5D888847BC74A5CAE61DA71953D638; // 0x1D08(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_96CE175545102D584DCDCDA8A3D413B6; // 0x1D88(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_63583B5E4A740D8299CE8F8B76E18187; // 0x1E08(0x0070)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_58D90E1F4B4A7351E14B83A2FE8F623B; // 0x1E78(0x0070)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9AC777B547014CEA80451FB01CDC01A2; // 0x1EE8(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_210A7D0543D24C3EC17AA695B5DCCC04; // 0x1F68(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_815BAB6C4997C18E2DC22B8EBECF85AB; // 0x1FC8(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_62F5C0704AFEB2A570BCA991E6D4FDB1; // 0x2010(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_B7FC58B142A890B1B92C41A2EA48E309; // 0x2058(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_C05B5F4B47045B377CC233BE09E6F21E; // 0x20B8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C2E7F3C8496C99E69E86DC929F450AD6; // 0x2100(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_66D328F24680D5ABA048D99ADAF99981; // 0x2150(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_Root_1B3F961C46A9A4BD9FD938BA5CC2366E;     // 0x21A0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B0089C9A455C02ECF47FCC87773317F1; // 0x21E8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B8D5080840EF04EE21971694F6BF18C7; // 0x2238(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1B49D5F14C4221F4C7C344B289BA5FFE; // 0x2288(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AED937B04E09EE14108A85B4C2BCCB72; // 0x22D8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6DAD1C8B416ED7FAB716ABAB0BD7F103; // 0x2328(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A42148844C2E2DF0CC9E61859C4786D3; // 0x2378(0x0050)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_710DD50645594F5CC1906089F33E75FB; // 0x23C8(0x0100)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_20E88D2543FC9ADE0D301F97C10F1A0A; // 0x24C8(0x0100)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32F2265D49576C75F1333C895541445E; // 0x25C8(0x0050)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_9A947A994E349143AB546B8947C32A6B; // 0x2618(0x0090)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E5391E554BD660C635DD4091EEB5B1CD; // 0x26A8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F21C9AAE42DF240A5417C5ACF7E674F8; // 0x26F8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_318724E8452E7468855C059B0F6402B9; // 0x2748(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D040A9BB42348118B8EA5E852853F8D8; // 0x2798(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F4586EBD4F346936CCB5279A082D6601; // 0x27E8(0x0050)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_68D6BB12490B27CCBB084BA14D3D9F55; // 0x2838(0x0118)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_B1AA37264868F1CD1BB6BCB790E6FE85; // 0x2950(0x0090)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6A59EE27461F1FF750F412ADA88D00D8; // 0x29E0(0x0050)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_E51E9F8E4548F2D88507C6B1BCCCFAB7; // 0x2A30(0x0100)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_A16D5C424577DB93CE392E9591ECF242; // 0x2B30(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_E906335743B6C228528C4B8D5645B3C7; // 0x2B90(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_B54E42CD44CA284E20E1FCA6932F95E7; // 0x2BD8(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_49EBC14E47B08FBA0D1A779158A417D6; // 0x2C58(0x0070)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B0BE2F1A4476DB815EE7169DE59EDCA8; // 0x2CC8(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_B675D58B4DD4500D34A92DB14B7DC78D; // 0x2D18(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8273B90A410B74B3C267138A8D873D84; // 0x2D60(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D4F8B415451003CA7951A7B15A5A12BA; // 0x2DE0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47E11205417C8EDE769D539B8FC93961; // 0x2E30(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_528FAFB04FC73EFDF9AF01B92FC2D689; // 0x2E80(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34677D8F40031400013289808B765B70; // 0x2ED0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2822C9C44B4BBC451A145AA534E724DA; // 0x2F20(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_08E4F50B4A05FF90B14FB498AB33007B; // 0x2F70(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9023FB6049F7F3567691518471BA0E3B; // 0x2FC0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E428A6634EEFA62E39A56BBB5174CA79; // 0x3010(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_A7D08E754916A5C691851B9CABD548F6; // 0x3060(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_88BAA8A44ABC97B78614D39A89B6C6B1; // 0x30E0(0x0060)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_A0AF01914B9CEAA9FD6989B1E4E7FCF1; // 0x3140(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_D3DD11BE43760BB6F9F302A2FD04EBF1; // 0x3188(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6385247B4D1C04E919BB05A1408BC452; // 0x31D0(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_EAA1BAED4693199A009A07BE2393F878; // 0x3250(0x0100)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9EF7FF3847BBF0D80DFF3A809B90A056; // 0x3350(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5883B39D4AAB44A5E0D5E6B8634B6BD0; // 0x33A0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9937146849F55FDDAA249DB50B307B56; // 0x33F0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5DA3AB2D421C2859F718DF9B9A80C8AA; // 0x3440(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F82AB50B4C098E591ADD6AB943F092A9; // 0x3490(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_BD0104FF4ACF964BE86B87B62B96371B; // 0x34E0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B23F873247CF5241276B42A581206A71; // 0x3530(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F3D66562496DBC8F81AA0AA46E2891AC; // 0x3580(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_95ED572A4710A186941119842C3A75AD; // 0x35D0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EDD5F97C4D08B0CE439E50A5BFCEB724; // 0x3620(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A88FC99A4B5E0DE6B92081BCC36FBF4F; // 0x3670(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E8ECA5454B2621DEA0DD6CA054855A3C; // 0x36C0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1BF546CE450D71520D94E7BD6CF7686F; // 0x3710(0x0050)
		bool                                                       bIsMoving;                                               // 0x3760(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SWXL[0x3];                                   // 0x3761(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RootRotationOffset;                                      // 0x3764(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimPitch;                                                // 0x3770(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimYaw;                                                  // 0x3774(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             RootLocationOffset;                                      // 0x3778(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseAimOffset;                                           // 0x3784(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OSP9[0x3];                                   // 0x3785(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementAnimRate;                                        // 0x3788(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFalling;                                              // 0x378C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WRWW[0x3];                                   // 0x378D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxMovementAnimRate;                                     // 0x3790(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseFalling;                                             // 0x3794(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OHBK[0x3];                                   // 0x3795(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovingAnimSpeedTreshold;                                 // 0x3798(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinMovementAnimRate;                                     // 0x379C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsTurning;                                              // 0x37A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseTurning;                                             // 0x37A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTurningRight;                                           // 0x37A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9Y3S[0x1];                                   // 0x37A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurningEnabledBlendTime;                                 // 0x37A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningDisabledBlendTime;                                // 0x37A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurningDirectionBlendTime;                               // 0x37AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinTurnRateForTurnAnimation;                             // 0x37B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseSwimming;                                            // 0x37B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSwimming;                                             // 0x37B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I5BH[0x2];                                   // 0x37B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SwimmingMovingAnimSpeedThreshold;                        // 0x37B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingAnimPlayRate;                                     // 0x37BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingBlendInTime;                                      // 0x37C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingBlendOutTime;                                     // 0x37C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovingBlendInTime;                                       // 0x37C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovingBlendOutTime;                                      // 0x37CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRunning;                                              // 0x37D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseRunning;                                             // 0x37D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseSleepingAnim;                                        // 0x37D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsSleeping;                                             // 0x37D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             SleepingAnimTranslationOffset;                           // 0x37D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MovementAnimRatePower;                                   // 0x37E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseTurnInPlaceAnimation;                                // 0x37E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSkipAnimGraph;                                          // 0x37E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HKYI[0x2];                                   // 0x37E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlignGroundAlpha;                                        // 0x37E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseAlignGround;                                         // 0x37EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseBlinking;                                            // 0x37ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XX1D[0x2];                                   // 0x37EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlinkBlend;                                              // 0x37F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      IKAlpha;                                                 // 0x37F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RunningBlendInTime;                                      // 0x37F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RunningBlendOutTime;                                     // 0x37FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RunningMovementAnimRate;                                 // 0x3800(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseRunningMovementAnimRate;                             // 0x3804(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisableIKWhenFalling;                                   // 0x3805(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDisableIK;                                              // 0x3806(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ILQW[0x1];                                   // 0x3807(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimOffsetPitchScale;                                     // 0x3808(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AimOffsetYawScale;                                       // 0x380C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSleepingEnableIK;                                       // 0x3810(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7UCY[0x7];                                   // 0x3811(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   Climber_Attached;                                        // 0x3818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_DinoClimberState                                         ClimberState;                                            // 0x3820(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_DinoClimberState_RockDrake                               ClimberState_RockDrake;                                  // 0x3821(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              MaxIsClimbingStateIndex;                                 // 0x3822(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H5U0[0x1];                                   // 0x3823(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartClimbingBlendTime;                                  // 0x3824(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      StopClimbingBlendTime;                                   // 0x3828(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SeekingBlendTime;                                        // 0x382C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentForwardClimbVelocityRatio;                        // 0x3830(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ForwardVelocityRatioToStopSkidAnim;                      // 0x3834(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      VelocityRatioAbsMax;                                     // 0x3838(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    ClimbingTurnDirection;                                   // 0x383C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingTurnBlendTime_Move;                              // 0x3840(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbingTurnBlendTime_Run;                               // 0x3844(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SkiddingBlendTime;                                       // 0x3848(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbRunBlendTime_In;                                    // 0x384C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ClimbRunBlendTime_Out;                                   // 0x3850(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPlayClimbingAnimsWhileSeeking_Idle;                     // 0x3854(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPlayClimbingAnimsWhileSeeking_Move;                     // 0x3855(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPlayClimbingAnimsWhileSeeking_Run;                      // 0x3856(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCurrentlyUsingAdditiveClimbingBlendSpaces;            // 0x3857(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           ClimbingBlendspace_Axes_Front;                           // 0x3858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector2D                                           ClimbingBlendspace_Axes_Back;                            // 0x3860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimberForceDisableIK;                                  // 0x3868(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C554[0x3];                                   // 0x3869(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementAnimRate_Climbing;                               // 0x386C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RunningMovementAnimRate_Climbing;                        // 0x3870(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Glide_X;                                                 // 0x3874(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Glide_Y;                                                 // 0x3878(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRockDrakeAlerted;                                     // 0x387C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D7RB[0x3];                                   // 0x387D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlertBlendTime;                                          // 0x3880(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRockDrakeClimbing;                                    // 0x3884(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KKBQ[0x3];                                   // 0x3885(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RequiredRotationSpeedForGlideTurnAnims;                  // 0x3888(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GlidingBlendTime;                                        // 0x388C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsClimberSkidding;                                      // 0x3890(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseSkiddingBlendspace;                                  // 0x3891(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6074[0x2];                                   // 0x3892(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SkiddingRatio_Forward;                                   // 0x3894(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SkiddingRatio_Right;                                     // 0x3898(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxAbsSkiddingVelocity;                                  // 0x389C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PreviousGlidingPitch;                                    // 0x38A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GlideBlendSpacePitchDifferenceThreshold;                 // 0x38A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ForceFullGlideDiveBelowPitch;                            // 0x38A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GlideBlendSpaceDifferenceDivisor;                        // 0x38AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClimberCanPlaySeekAnim;                                 // 0x38B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsStartingToClimb;                                      // 0x38B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M2FZ[0x2];                                   // 0x38B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeAfterClimbStartToUseStartAnims;                      // 0x38B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x38B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x38B9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x38BA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x38BB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanRockDrakeUseAimOffsets_result;               // 0x38BC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_205W[0x3];                                   // 0x38BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x38C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YJTG[0x4];                                   // 0x38C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               CallFunc_TryGetPawnOwner_ReturnValue;                    // 0x38C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class ARockDrake_Character_BP_C*                           K2Node_DynamicCast_AsRockDrake_Character_BP_C;           // 0x38D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x38D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_THKT[0x3];                                   // 0x38D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BP_GetMaxSpeedModifier_ReturnValue;             // 0x38DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Climber_Right_Vector_right;                 // 0x38E0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetClimberVelocityAlongNormal_velocity;         // 0x38EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Climber_Forward_Vector_forward;             // 0x38F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanClimberSkid_result;                          // 0x38FC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MQEU[0x3];                                   // 0x38FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetClimberVelocityAlongNormal_velocity2;        // 0x3900(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue2;               // 0x3904(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x3905(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue3;               // 0x3906(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_46O7[0x1];                                   // 0x3907(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CallFunc_GetClimbingIK_BlendspaceAxes_Back_axes;         // 0x3908(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x3910(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_92GA[0x3];                                   // 0x3911(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CallFunc_GetClimbingIK_BlendspaceAxes_Front_axes;        // 0x3914(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Is_Climber_Moving_on_Surface_result;            // 0x391C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G0XS[0x3];                                   // 0x391D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Get_CurrentClimbingVelocityMax_velocity;        // 0x3920(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    CallFunc_GetClimbingTurnDirection_turnDir;               // 0x3924(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Climber_Forward_Vector_forward2;            // 0x3928(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue;                   // 0x3934(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue;                  // 0x3938(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Is_ClimberClimbing_result;                      // 0x393C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Is_Climber_Moving_on_Surface_result2;           // 0x393D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue4;               // 0x393E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x393F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x3940(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue2;                         // 0x3941(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue5;                        // 0x3942(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x3943(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue6;                        // 0x3944(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue3;                         // 0x3945(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsFirstPerson_ReturnValue;                      // 0x3946(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5TIZ[0x1];                                   // 0x3947(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetForwardVector_ReturnValue;                   // 0x3948(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_Get_Current_Climber_LookRotation_lookRot;       // 0x3954(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsClimberClimbing_Simple_result;                // 0x3960(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TMW8[0x3];                                   // 0x3961(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_NormalizedDeltaRotator_ReturnValue;             // 0x3964(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch;                                 // 0x3970(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw;                                   // 0x3974(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll;                                  // 0x3978(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetForwardVector_ReturnValue2;                  // 0x397C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue2;                 // 0x3988(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue3;                 // 0x398C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Climber_Up_Vector_up;                       // 0x3990(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Get_Climber_Right_Vector_right2;                // 0x399C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAngleDeltaBetweenVectors_theta;              // 0x39A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAngleDeltaBetweenVectors_theta2;             // 0x39AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetDinoVelocity_ReturnValue;                    // 0x39B0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x39BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector2D                                           CallFunc_Conv_VectorToVector2D_ReturnValue;              // 0x39C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize2D_ReturnValue;                            // 0x39C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Lerp_ReturnValue;                               // 0x39CC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_K2_GetActorRotation_ReturnValue;                // 0x39D0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetForwardVector_ReturnValue3;                  // 0x39DC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue2;                  // 0x39E8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x39EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsMeshGameplayRelevant_ReturnValue;             // 0x39ED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x39EE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IX30[0x1];                                   // 0x39EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnMovementComponent*                              CallFunc_GetMovementComponent_ReturnValue;               // 0x39F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UCharacterMovementComponent*                         K2Node_DynamicCast_AsCharacterMovementComponent;         // 0x39F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x3A00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3U2T[0x3];                                   // 0x3A01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetDefaultMovementSpeed_ReturnValue;            // 0x3A04(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue4;                 // 0x3A08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue5;               // 0x3A0C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x3A0D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue6;               // 0x3A0E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue4;                         // 0x3A0F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue7;               // 0x3A10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue5;                         // 0x3A11(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x3A12(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue8;               // 0x3A13(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue9;               // 0x3A14(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6J06[0x3];                                   // 0x3A15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_GetAimOffsets_RootRotOffset;                    // 0x3A18(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetAimOffsets_TheRootYawSpeed;                  // 0x3A24(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetAimOffsets_RootLocOffset;                    // 0x3A28(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FRotator                                            CallFunc_GetAimOffsets_ReturnValue;                      // 0x3A34(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Pitch2;                                // 0x3A40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Yaw2;                                  // 0x3A44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakRot_Roll2;                                 // 0x3A48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue5;                 // 0x3A4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue6;                 // 0x3A50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x3A54(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LIDE[0x3];                                   // 0x3A55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Abs_ReturnValue;                                // 0x3A58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x3A5C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x3A60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue4;                // 0x3A61(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KX14[0x2];                                   // 0x3A62(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x3A64(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue5;                // 0x3A68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8JNP[0x3];                                   // 0x3A69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x3A6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue6;                // 0x3A70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue7;                // 0x3A71(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OAYA[0x2];                                   // 0x3A72(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x3A74(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x3A80(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue4;               // 0x3A84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue8;                // 0x3A88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0T90[0x7];                                   // 0x3A89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x3A90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;        // 0x3A98(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8YD6[0x4];                                   // 0x3A9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_Subtract_DoubleDouble_ReturnValue;              // 0x3AA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue2;                            // 0x3AA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Conv_DoubleToFloat_ReturnValue;                 // 0x3AAC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue2;                   // 0x3AB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue7;                        // 0x3AB1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x3AB2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue8;                        // 0x3AB3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x3AB4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_25NJ[0x3];                                   // 0x3AB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue;               // 0x3AB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x3ABC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue2;              // 0x3AC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMin_ReturnValue;                               // 0x3AC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x3AC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMax_ReturnValue;                               // 0x3ACC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x3AD0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x3AD1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9SLY[0x2];                                   // 0x3AD2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FClamp_ReturnValue3;                            // 0x3AD4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue9;                        // 0x3AD8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_38W3[0x3];                                   // 0x3AD9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetWorldDeltaSeconds_ReturnValue3;              // 0x3ADC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue5;               // 0x3AE0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue2;               // 0x3AE4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x3AE8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue4;                            // 0x3AEC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue6;                         // 0x3AF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0EDS[0x3];                                   // 0x3AF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue6;               // 0x3AF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue10;              // 0x3AF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue10;                       // 0x3AF9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue6;                       // 0x3AFA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue11;                       // 0x3AFB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue7;               // 0x3AFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue3;                    // 0x3B00(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue8;               // 0x3B04(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue5;                            // 0x3B08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue4;                    // 0x3B0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Conv_FloatToString_ReturnValue;                 // 0x3B10(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_FClamp_ReturnValue6;                            // 0x3B20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y852[0x4];                                   // 0x3B24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Concat_StrStr_ReturnValue;                      // 0x3B28(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue9;               // 0x3B38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue10;              // 0x3B3C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue5;                    // 0x3B40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue7;                            // 0x3B44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue8;                            // 0x3B48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue11;              // 0x3B4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Conv_FloatToString_ReturnValue2;                // 0x3B50(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              CallFunc_Concat_StrStr_ReturnValue2;                     // 0x3B60(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue12;              // 0x3B70(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue6;                    // 0x3B74(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue12;                       // 0x3B78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_18MX[0x3];                                   // 0x3B79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_FClamp_ReturnValue9;                            // 0x3B7C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_ByteByte_ReturnValue;                   // 0x3B80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue7;                       // 0x3B81(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue13;                       // 0x3B82(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PWVI[0x1];                                   // 0x3B83(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue7;                 // 0x3B84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Divide_FloatFloat_ReturnValue8;                 // 0x3B88(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue10;                           // 0x3B8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue11;                           // 0x3B90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue7;                         // 0x3B94(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue8;                         // 0x3B95(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue9;                         // 0x3B96(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void CanRockDrakeUseAimOffsets(bool* Result);
		void UpdateRockDrake(class ARockDrake_Character_BP_C* DrakeRef, float YawTurnRate);
		void BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_E3EBC4944A1DF7EE2CB2FC8191B705B0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_560C03AB45D0D7F9F98023BE580B1C95();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_ModifyBone_C0323BA541D57B7A5D2C7781BA423581();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_501974FA4CA9E3A9907B58B2C5600A29();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_972C36D8485E761CF7AACCA6CB60C315();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_3CF811FF4D175E966D8299ADCAA39C60();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_57DCDF504EF41C8BD026BCA50A00127C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_7A802C4845DD51603648F495B1862658();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_E171E8464BD0E8D483C1FC9F7EF34C3C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_BA60F27A493FBCE45A16559107F675E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_783B5B9B48D88B8618B399874B0EAD0E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_DB5D888847BC74A5CAE61DA71953D638();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_96CE175545102D584DCDCDA8A3D413B6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_9AC777B547014CEA80451FB01CDC01A2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_F3D66562496DBC8F81AA0AA46E2891AC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_95ED572A4710A186941119842C3A75AD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_EDD5F97C4D08B0CE439E50A5BFCEB724();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_A88FC99A4B5E0DE6B92081BCC36FBF4F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_E8ECA5454B2621DEA0DD6CA054855A3C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_1BF546CE450D71520D94E7BD6CF7686F();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_RockDrake_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
