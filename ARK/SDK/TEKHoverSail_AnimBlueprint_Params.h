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
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.compose mesh transform offsets
	 */
	struct UTEKHoverSail_AnimBlueprint_C_composemeshtransformoffsets_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Process Hover IK
	 */
	struct UTEKHoverSail_AnimBlueprint_C_ProcessHoverIK_Params
	{
	public:
		struct FRotator                                            NewTargetOffsetRot;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Delta;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Reset;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GG82[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Hover IK
	 */
	struct UTEKHoverSail_AnimBlueprint_C_HoverIK_Params
	{
	public:
		bool                                                       resetting;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U1MD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            newtargetrotoffset;                                      // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Calculate Mesh Rotation Offset
	 */
	struct UTEKHoverSail_AnimBlueprint_C_CalculateMeshRotationOffset_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Update Root Rotation Offset
	 */
	struct UTEKHoverSail_AnimBlueprint_C_UpdateRootRotationOffset_Params
	{
	public:
		float                                                      deltatime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_3B6A9E8B43AFDC3B418EC38EB5A606E1
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_3B6A9E8B43AFDC3B418EC38EB5A606E1_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_916A580847DE72BBADDC8AA3A3129C0C
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_916A580847DE72BBADDC8AA3A3129C0C_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0F5B6F1C4D56EE1905B3A080C21B8BCD
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0F5B6F1C4D56EE1905B3A080C21B8BCD_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C_1
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C_1_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9687DDB849FF104DD027649F4CB82940
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9687DDB849FF104DD027649F4CB82940_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1AA32A1C48860825324F0AAE92852B88
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1AA32A1C48860825324F0AAE92852B88_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_44136F40412C5DB994FBDCA6EA4F900C
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_44136F40412C5DB994FBDCA6EA4F900C_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD_1
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD_1_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4AD8B1ED481FC54F4283A0BA91156E16
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4AD8B1ED481FC54F4283A0BA91156E16_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86_1
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86_1_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_BC4A4C914ABF849AC4A3A1BA4DF1F823
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_BC4A4C914ABF849AC4A3A1BA4DF1F823_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_FF0AA5C4467B4E4B2D038F94304BC75F
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_FF0AA5C4467B4E4B2D038F94304BC75F_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0B3854B54583AC77BD1F629953425AE2
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0B3854B54583AC77BD1F629953425AE2_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_A78873ED47EEE58D8296CCB09FB04D8B
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_A78873ED47EEE58D8296CCB09FB04D8B_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CE651DB401B0C13914D60806AD249BF
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CE651DB401B0C13914D60806AD249BF_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1DE4549747BF853C5FBBCEABE2C06F6D
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1DE4549747BF853C5FBBCEABE2C06F6D_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_64F40AE64B4724A6366624B2D691FFE5
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_64F40AE64B4724A6366624B2D691FFE5_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_DF4BD1B6468C60E559ED13B97B0B52CC
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_DF4BD1B6468C60E559ED13B97B0B52CC_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B219E23C420DCF1E8A1E7387E631E9DE
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B219E23C420DCF1E8A1E7387E631E9DE_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9C5F7CDF485A1E4051CE78926BF23C29
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9C5F7CDF485A1E4051CE78926BF23C29_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B265F55E4E7128118CC07FA478B25149
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B265F55E4E7128118CC07FA478B25149_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_84EFADDA48F5C9C10AE8A2997508BF16
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_84EFADDA48F5C9C10AE8A2997508BF16_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CFD5BF64F71023C5DE75EB47FDDF6D3
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CFD5BF64F71023C5DE75EB47FDDF6D3_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_8123727E441916C4EB178CA87248E196
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_8123727E441916C4EB178CA87248E196_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_7C9BCA66447C61EBE5967792F3C3CEE4
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_7C9BCA66447C61EBE5967792F3C3CEE4_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_E978182E4B053359AAE41580DD8AC76C
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_E978182E4B053359AAE41580DD8AC76C_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_23827BA44EB7A5F59040A3B1B2F2325A
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_23827BA44EB7A5F59040A3B1B2F2325A_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8_1
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8_1_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B_1
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B_1_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_45F41D7349EA2A6AD53E939B08F10EF5
	 */
	struct UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_45F41D7349EA2A6AD53E939B08F10EF5_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.BlueprintUpdateAnimation
	 */
	struct UTEKHoverSail_AnimBlueprint_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.BlueprintInitializeAnimation
	 */
	struct UTEKHoverSail_AnimBlueprint_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.ExecuteUbergraph_TEKHoverSail_AnimBlueprint
	 */
	struct UTEKHoverSail_AnimBlueprint_C_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
