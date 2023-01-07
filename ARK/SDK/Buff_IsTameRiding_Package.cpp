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
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetTimeBasedAlpha
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Alpha                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IsTameRiding_C::GetTimeBasedAlpha(float* Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetTimeBasedAlpha");
		
		ABuff_IsTameRiding_C_GetTimeBasedAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alpha != nullptr)
			*Alpha = params.Alpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetBuffDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FStatusValueModifierDescription ABuff_IsTameRiding_C::GetBuffDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetBuffDescription");
		
		ABuff_IsTameRiding_C_GetBuffDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.DrawActiveStateText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ActiveState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IsTameRiding_C::DrawActiveStateText(int32_t ActiveState, class AShooterHUD* HUD, float XPos, float YPos, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.DrawActiveStateText");
		
		ABuff_IsTameRiding_C_DrawActiveStateText_Params params {};
		params.ActiveState = ActiveState;
		params.HUD = HUD;
		params.XPos = XPos;
		params.YPos = YPos;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetActiveTameState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        MyRidingDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            IsInState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IsTameRiding_C::GetActiveTameState(class APrimalDinoCharacter* MyRidingDino, int32_t* IsInState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.GetActiveTameState");
		
		ABuff_IsTameRiding_C_GetActiveTameState_Params params {};
		params.MyRidingDino = MyRidingDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInState != nullptr)
			*IsInState = params.IsInState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPDrawBuffStatusHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              XPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              YPos                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ScaleMult                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IsTameRiding_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPDrawBuffStatusHUD");
		
		ABuff_IsTameRiding_C_BPDrawBuffStatusHUD_Params params {};
		params.HUD = HUD;
		params.XPos = XPos;
		params.YPos = YPos;
		params.ScaleMult = ScaleMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IsTameRiding_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.BuffTickServer");
		
		ABuff_IsTameRiding_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_IsTameRiding_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.BPCheckPreventInput");
		
		ABuff_IsTameRiding_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_IsTameRiding_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.UserConstructionScript");
		
		ABuff_IsTameRiding_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_170
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_IsTameRiding_C::InpActEvt_Jump_K2Node_InputActionEvent_170()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Jump_K2Node_InputActionEvent_170");
		
		ABuff_IsTameRiding_C_InpActEvt_Jump_K2Node_InputActionEvent_170_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_169
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_IsTameRiding_C::InpActEvt_Use_K2Node_InputActionEvent_169()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Use_K2Node_InputActionEvent_169");
		
		ABuff_IsTameRiding_C_InpActEvt_Use_K2Node_InputActionEvent_169_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_64
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuff_IsTameRiding_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_64()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_64");
		
		ABuff_IsTameRiding_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_64_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_IsTameRiding_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.ReceiveBeginPlay");
		
		ABuff_IsTameRiding_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IsTameRiding_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125");
		
		ABuff_IsTameRiding_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.ServerTameEvent
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_IsTameRiding_C::ServerTameEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.ServerTameEvent");
		
		ABuff_IsTameRiding_C_ServerTameEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IsTameRiding_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_58(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_58");
		
		ABuff_IsTameRiding_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_58_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IsTameRiding_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_77(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_77");
		
		ABuff_IsTameRiding_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_77_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178CEC0
	 * 		Name   -> Function Buff_IsTameRiding.Buff_IsTameRiding_C.ExecuteUbergraph_Buff_IsTameRiding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_IsTameRiding_C::ExecuteUbergraph_Buff_IsTameRiding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_IsTameRiding.Buff_IsTameRiding_C.ExecuteUbergraph_Buff_IsTameRiding");
		
		ABuff_IsTameRiding_C_ExecuteUbergraph_Buff_IsTameRiding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_IsTameRiding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_IsTameRiding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_IsTameRiding.Buff_IsTameRiding_C");
		return ptr;
	}

}


