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
	 * BlueprintGeneratedClass Buff_IsTameRiding.Buff_IsTameRiding_C
	 * Size -> 0x005C (FullSize[0x09DC] - InheritedSize[0x0980])
	 */
	class ABuff_IsTameRiding_C : public ABuff_Base_C
	{
	public:
		int32_t                                                    TameBehaviorAttackIndex;                                 // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B5EC[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwner_ReturnValue;                           // 0x0988(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_GetDisplayName_ReturnValue;                     // 0x0990(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x09A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              CallFunc_Concat_StrStr_ReturnValue;                      // 0x09A8(0x0010) ZeroConstructor, Transient, DuplicateTransient
		float                                                      K2Node_InputAxisEvent_AxisValue3;                        // 0x09B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I6BE[0x4];                                   // 0x09BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_GetOwner_ReturnValue2;                          // 0x09C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterCharacter*                                   K2Node_DynamicCast_AsShooterCharacter;                   // 0x09C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x09D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OWXQ[0x3];                                   // 0x09D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_InputAxisEvent_AxisValue2;                        // 0x09D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_InputAxisEvent_AxisValue;                         // 0x09D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void GetTimeBasedAlpha(float* Alpha);
		struct FStatusValueModifierDescription GetBuffDescription();
		void DrawActiveStateText(int32_t ActiveState, class AShooterHUD* HUD, float XPos, float YPos, float Scale);
		void GetActiveTameState(class APrimalDinoCharacter* MyRidingDino, int32_t* IsInState);
		void BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult);
		void BuffTickServer(float DeltaTime);
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void UserConstructionScript();
		void InpActEvt_Jump_K2Node_InputActionEvent_170();
		void InpActEvt_Use_K2Node_InputActionEvent_169();
		void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_64();
		void ReceiveBeginPlay();
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125(float AxisValue);
		void ServerTameEvent();
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_58(float AxisValue);
		void InpAxisEvt_Turn_K2Node_InputAxisEvent_77(float AxisValue);
		void ExecuteUbergraph_Buff_IsTameRiding(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
