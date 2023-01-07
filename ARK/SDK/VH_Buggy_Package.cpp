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
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.BPPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_Buggy_C::BPPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.BPPlayDying");
		
		AVH_Buggy_C_BPPlayDying_Params params {};
		params.KillingDamage = KillingDamage;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AVH_Buggy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.UserConstructionScript");
		
		AVH_Buggy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_75
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AVH_Buggy_C::InpActEvt_Jump_K2Node_InputActionEvent_75()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_75");
		
		AVH_Buggy_C_InpActEvt_Jump_K2Node_InputActionEvent_75_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_74
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AVH_Buggy_C::InpActEvt_Jump_K2Node_InputActionEvent_74()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Jump_K2Node_InputActionEvent_74");
		
		AVH_Buggy_C_InpActEvt_Jump_K2Node_InputActionEvent_74_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AVH_Buggy_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32");
		
		AVH_Buggy_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_32_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AVH_Buggy_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31");
		
		AVH_Buggy_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_31_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AVH_Buggy_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30");
		
		AVH_Buggy_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_30_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AVH_Buggy_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29");
		
		AVH_Buggy_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_29_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AVH_Buggy_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28");
		
		AVH_Buggy_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_28_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_Buggy_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135");
		
		AVH_Buggy_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_135_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_Buggy_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.ReceivePossessed");
		
		AVH_Buggy_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_Buggy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.ReceiveTick");
		
		AVH_Buggy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_Buggy_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46");
		
		AVH_Buggy_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_46_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function VH_Buggy.VH_Buggy_C.ExecuteUbergraph_VH_Buggy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_Buggy_C::ExecuteUbergraph_VH_Buggy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_Buggy.VH_Buggy_C.ExecuteUbergraph_VH_Buggy");
		
		AVH_Buggy_C_ExecuteUbergraph_VH_Buggy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVH_Buggy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVH_Buggy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VH_Buggy.VH_Buggy_C");
		return ptr;
	}

}


