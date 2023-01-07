/**
 * Name: ARK
 * Version: 1.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.compose mesh transform offsets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::composemeshtransformoffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.compose mesh transform offsets");
		
		UTEKHoverSail_AnimBlueprint_C_composemeshtransformoffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Process Hover IK
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewTargetOffsetRot                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTEKHoverSail_AnimBlueprint_C::ProcessHoverIK(const struct FRotator& NewTargetOffsetRot, float Delta, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Process Hover IK");
		
		UTEKHoverSail_AnimBlueprint_C_ProcessHoverIK_Params params {};
		params.NewTargetOffsetRot = NewTargetOffsetRot;
		params.Delta = Delta;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Hover IK
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               resetting                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    newtargetrotoffset                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTEKHoverSail_AnimBlueprint_C::HoverIK(bool* resetting, struct FRotator* newtargetrotoffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Hover IK");
		
		UTEKHoverSail_AnimBlueprint_C_HoverIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (resetting != nullptr)
			*resetting = params.resetting;
		if (newtargetrotoffset != nullptr)
			*newtargetrotoffset = params.newtargetrotoffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Calculate Mesh Rotation Offset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTEKHoverSail_AnimBlueprint_C::CalculateMeshRotationOffset(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Calculate Mesh Rotation Offset");
		
		UTEKHoverSail_AnimBlueprint_C_CalculateMeshRotationOffset_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Update Root Rotation Offset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              deltatime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTEKHoverSail_AnimBlueprint_C::UpdateRootRotationOffset(float deltatime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.Update Root Rotation Offset");
		
		UTEKHoverSail_AnimBlueprint_C_UpdateRootRotationOffset_Params params {};
		params.deltatime = deltatime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_3B6A9E8B43AFDC3B418EC38EB5A606E1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_3B6A9E8B43AFDC3B418EC38EB5A606E1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_3B6A9E8B43AFDC3B418EC38EB5A606E1");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_3B6A9E8B43AFDC3B418EC38EB5A606E1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_916A580847DE72BBADDC8AA3A3129C0C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_916A580847DE72BBADDC8AA3A3129C0C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_916A580847DE72BBADDC8AA3A3129C0C");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_916A580847DE72BBADDC8AA3A3129C0C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0F5B6F1C4D56EE1905B3A080C21B8BCD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0F5B6F1C4D56EE1905B3A080C21B8BCD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0F5B6F1C4D56EE1905B3A080C21B8BCD");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0F5B6F1C4D56EE1905B3A080C21B8BCD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C_1");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9687DDB849FF104DD027649F4CB82940
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9687DDB849FF104DD027649F4CB82940()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9687DDB849FF104DD027649F4CB82940");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9687DDB849FF104DD027649F4CB82940_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1AA32A1C48860825324F0AAE92852B88
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1AA32A1C48860825324F0AAE92852B88()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1AA32A1C48860825324F0AAE92852B88");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1AA32A1C48860825324F0AAE92852B88_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_44136F40412C5DB994FBDCA6EA4F900C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_44136F40412C5DB994FBDCA6EA4F900C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_44136F40412C5DB994FBDCA6EA4F900C");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_44136F40412C5DB994FBDCA6EA4F900C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD_1");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4AD8B1ED481FC54F4283A0BA91156E16
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4AD8B1ED481FC54F4283A0BA91156E16()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4AD8B1ED481FC54F4283A0BA91156E16");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4AD8B1ED481FC54F4283A0BA91156E16_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86_1");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_BC4A4C914ABF849AC4A3A1BA4DF1F823
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_BC4A4C914ABF849AC4A3A1BA4DF1F823()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_BC4A4C914ABF849AC4A3A1BA4DF1F823");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_BC4A4C914ABF849AC4A3A1BA4DF1F823_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_FF0AA5C4467B4E4B2D038F94304BC75F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_FF0AA5C4467B4E4B2D038F94304BC75F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_FF0AA5C4467B4E4B2D038F94304BC75F");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_FF0AA5C4467B4E4B2D038F94304BC75F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0B3854B54583AC77BD1F629953425AE2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0B3854B54583AC77BD1F629953425AE2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0B3854B54583AC77BD1F629953425AE2");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_0B3854B54583AC77BD1F629953425AE2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_A78873ED47EEE58D8296CCB09FB04D8B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_A78873ED47EEE58D8296CCB09FB04D8B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_A78873ED47EEE58D8296CCB09FB04D8B");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_A78873ED47EEE58D8296CCB09FB04D8B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CE651DB401B0C13914D60806AD249BF
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CE651DB401B0C13914D60806AD249BF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CE651DB401B0C13914D60806AD249BF");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CE651DB401B0C13914D60806AD249BF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1DE4549747BF853C5FBBCEABE2C06F6D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1DE4549747BF853C5FBBCEABE2C06F6D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1DE4549747BF853C5FBBCEABE2C06F6D");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1DE4549747BF853C5FBBCEABE2C06F6D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_64F40AE64B4724A6366624B2D691FFE5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_64F40AE64B4724A6366624B2D691FFE5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_64F40AE64B4724A6366624B2D691FFE5");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_64F40AE64B4724A6366624B2D691FFE5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_DF4BD1B6468C60E559ED13B97B0B52CC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_DF4BD1B6468C60E559ED13B97B0B52CC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_DF4BD1B6468C60E559ED13B97B0B52CC");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_DF4BD1B6468C60E559ED13B97B0B52CC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B219E23C420DCF1E8A1E7387E631E9DE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B219E23C420DCF1E8A1E7387E631E9DE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B219E23C420DCF1E8A1E7387E631E9DE");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B219E23C420DCF1E8A1E7387E631E9DE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9C5F7CDF485A1E4051CE78926BF23C29
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9C5F7CDF485A1E4051CE78926BF23C29()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9C5F7CDF485A1E4051CE78926BF23C29");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_9C5F7CDF485A1E4051CE78926BF23C29_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B265F55E4E7128118CC07FA478B25149
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B265F55E4E7128118CC07FA478B25149()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B265F55E4E7128118CC07FA478B25149");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_B265F55E4E7128118CC07FA478B25149_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_84EFADDA48F5C9C10AE8A2997508BF16
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_84EFADDA48F5C9C10AE8A2997508BF16()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_84EFADDA48F5C9C10AE8A2997508BF16");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_84EFADDA48F5C9C10AE8A2997508BF16_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CFD5BF64F71023C5DE75EB47FDDF6D3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CFD5BF64F71023C5DE75EB47FDDF6D3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CFD5BF64F71023C5DE75EB47FDDF6D3");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1CFD5BF64F71023C5DE75EB47FDDF6D3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_8123727E441916C4EB178CA87248E196
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_8123727E441916C4EB178CA87248E196()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_8123727E441916C4EB178CA87248E196");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_8123727E441916C4EB178CA87248E196_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_1D50218E4A8D6044E25FF193EE9FC2CD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_4F3CFE7F4FAA6F31B2D56F9FD6712F86_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_6795F0204F22C038DEC873BACAC04E0C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_7C9BCA66447C61EBE5967792F3C3CEE4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_7C9BCA66447C61EBE5967792F3C3CEE4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_7C9BCA66447C61EBE5967792F3C3CEE4");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_7C9BCA66447C61EBE5967792F3C3CEE4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_E978182E4B053359AAE41580DD8AC76C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_E978182E4B053359AAE41580DD8AC76C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_E978182E4B053359AAE41580DD8AC76C");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_E978182E4B053359AAE41580DD8AC76C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_23827BA44EB7A5F59040A3B1B2F2325A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_23827BA44EB7A5F59040A3B1B2F2325A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_23827BA44EB7A5F59040A3B1B2F2325A");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_TransitionResult_23827BA44EB7A5F59040A3B1B2F2325A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8_1");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B_1");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_2F2C7F184E217FD468D9A694AB07408B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_217055EF42AD1C8502897F970ED759F8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_45F41D7349EA2A6AD53E939B08F10EF5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_45F41D7349EA2A6AD53E939B08F10EF5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_45F41D7349EA2A6AD53E939B08F10EF5");
		
		UTEKHoverSail_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_45F41D7349EA2A6AD53E939B08F10EF5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTEKHoverSail_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UTEKHoverSail_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTEKHoverSail_AnimBlueprint_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.BlueprintInitializeAnimation");
		
		UTEKHoverSail_AnimBlueprint_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.ExecuteUbergraph_TEKHoverSail_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTEKHoverSail_AnimBlueprint_C::ExecuteUbergraph_TEKHoverSail_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C.ExecuteUbergraph_TEKHoverSail_AnimBlueprint");
		
		UTEKHoverSail_AnimBlueprint_C_ExecuteUbergraph_TEKHoverSail_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTEKHoverSail_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTEKHoverSail_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TEKHoverSail_AnimBlueprint.TEKHoverSail_AnimBlueprint_C");
		return ptr;
	}

}


